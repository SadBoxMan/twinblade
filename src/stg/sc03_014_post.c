/* sc03_014: 0x801848E4-: the -O2 code after the -O0 run (r209, tools/stage_units.py).
 * The declarations and prototypes down to the first function are those of the units before this one. */
#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))
typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_014_8018EF58[])();
void func_sc03_014_8017BEE4(u8 *arg0);
extern void (*D_sc03_014_8018EF64[])();
void func_sc03_014_8017BFC8(u8 *arg0);
extern void (*D_sc03_014_8018F024[])();
extern void func_sc03_014_8017C154();
extern void (*D_sc03_014_8018F064[])();
extern void (*D_sc03_014_8018F084[])();
extern void (*D_sc03_014_8018F094[])();
extern void (*D_sc03_014_8018F0A0[])();
extern void (*D_sc03_014_8018F224[])();
void func_sc03_014_8017DB00(u8 *arg0);
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void (*D_sc03_014_8018F500[])();
extern u8 D_sc03_014_8018F450;
extern void SetPlayerMotion();
extern void BumpSub2Copy();
extern void PlaySe();
extern void SpawnObj68();
extern s32 FindObj68ByKind();
extern void SetObjByte1C7();
extern s32 GetTechnique();
extern u8 D_sc03_014_8018F4F8;
extern void StartPlayerActionScript();
extern s32 g_PlayerActionScript;
extern s16 D_80126B0C;
extern void (*D_sc03_014_8018F548[])();
extern void UpdateObj68Matrix();
extern s16 D_sc03_014_8018F540;
extern s16 D_sc03_014_8018F542;
extern s16 D_sc03_014_8018F544;
extern u8 D_sc03_014_801CEE20;
extern s32 AllocModel6To16();
extern void InitModel();
extern void ObjLocalToWorld16();
extern void SetObjPush();
extern void NextObjState();
extern u8 D_sc03_014_8018F510;
extern u8 D_sc03_014_8018F558;
extern u8 D_sc03_014_801CF478;
extern void AddObj68PushSetVel();
extern void MoveObj68();
extern void StartCameraShake();
extern void func_8001C810();
extern void SpawnObj68On();
extern void FreeObj68();
extern void (*D_sc03_014_8018F58C[])();
extern void func_sc03_014_80180DB8();
extern u8 D_800DF2E0;
extern u8 D_sc03_014_8018F56C;
extern void SetObjTimer();
extern s32 TickObjTimer();
extern void (*D_sc03_014_8018F5B0[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void FreeEffect();
extern s32 SpawnEffect();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_014_8018F598;
extern void (*D_sc03_014_8018F5B8[])();
extern u8 D_sc03_014_8018F5A4;
extern void (*D_sc03_014_8018F6D0[])();
extern void AddMaxBp();
extern void AddBp();
extern s32 PlaySoundId();
extern void func_sc03_014_801811D4();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern s32 AllocActorModel();
extern void StartEvent();
extern s32 IsEventDone();
extern void EndEvent();
extern void SetVar();
extern void func_8002955C();
extern s32 func_8002953C();
extern void GiveItem();
extern void FreeActor();
extern void (*D_sc03_014_8018F728[])();
extern void func_sc03_014_80182348();
extern void (*D_sc03_014_8018F73C[])();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern void (*D_sc03_014_8018F750[])();
extern void func_800D22E4();
extern void func_sc03_014_80182A40();
extern void (*D_sc03_014_8018F7AC[])();
extern void (*D_sc03_014_8018F804[])();
void func_sc03_014_80183930(void);
extern void StartFade();
extern s32 FadeStep();
void func_sc03_014_80183958(void);
extern void func_800D1EBC();
extern void (*D_sc03_014_8018F818[])();
extern void (*D_sc03_014_8018F824[])();
extern u8 D_sc03_014_8018F830;
extern u8 D_sc03_014_8018F83C;
extern void func_sc03_014_80183A18();
extern void (*D_sc03_014_8018F850[])();
extern void (*D_sc03_014_8018FE80[])();
extern void InitSpriteKind2();
extern s32 AllocActorSprite();
extern s32 func_sc03_014_80184E4C();
extern void (*D_sc03_014_80190008[])();
extern void (*D_sc03_014_801903DC[])();
extern void (*D_sc03_014_80191890[])();
extern void (*D_sc03_014_801918B0[])();
extern s32 func_sc03_014_8018473C();
extern void (*D_sc03_014_80191B84[])();
extern s32 func_sc03_014_8017BEBC();
extern s32 func_sc03_014_8017BFA0();
extern void func_sc03_014_801890F8();
extern void func_sc03_014_80189110();
extern void (*D_sc03_014_80191C0C[])();
extern void (*D_sc03_014_801E3298[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc03_014_8018B898;
extern s32 GetFlag();
extern void RejectSpawn();
extern u8 D_sc03_014_801E2F88;
extern s32 * func_sc03_014_8018A224();
extern s32 D_sc03_014_801E2FF0[];
extern s32 SpawnActorArg();
extern void SetFlag();
extern void RunScript();
extern s32 D_sc03_014_801E31BC;
extern s32 D_sc03_014_801E31C0;
extern s32 D_sc03_014_801E31D4;
extern s32 D_sc03_014_801E31E8;
extern s32 D_sc03_014_801E3254;
extern s32 D_sc03_014_801E3138[];
extern s32 D_sc03_014_801E30B4[];
extern s32 UpdateScript();
extern void SetProgress();
extern void UploadFlagImages();
extern s32 func_sc03_014_80189FCC();
extern void AddMoney();
extern s32 func_80174764();
extern void (*D_sc03_014_801E32C0[])();
extern u8 D_sc03_014_801E2FBC;
extern u8 D_sc03_014_801E3760;
extern u8 D_sc03_014_801E3980;
extern u8 D_sc03_014_801E3770;
extern u8 D_sc03_014_801E3878;
extern void (*D_sc03_014_801E3A24[])();
extern void HidePlayerScene();
extern void SetPlayerFlag7E2();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 func_sc03_014_8017BF58();
extern s32 func_sc03_014_80184794();
extern s32 func_sc03_014_8017C03C();
extern void func_sc03_014_8017DB74();
extern s16 D_80126B3C;
extern s32 GetMessageAnswer();
extern void CloseMessage();
extern void func_sc03_014_8017D9C8();
extern s8 D_800B9A11;
extern u8 D_sc03_014_8018F160;
extern void StopSeqPlayer();
extern void EnableBgLayers();
extern s32 SetState();
extern u8 D_sc03_014_80191908;
extern s32 func_sc03_014_80188F18();
extern s32 func_sc03_014_80188C60();
extern void ResumeClockTint();
extern void (*D_sc03_014_80191BD4[])();
extern void func_sc03_014_801891E8();
extern u8 D_sc03_014_801EAC88;
extern void StepSpriteAnim();
extern s32 TickTimer();
extern void MoveObject();
extern s32 func_sc03_014_80188B94();
extern void func_sc03_014_80188F28();
extern void func_sc03_014_8018B128();
extern s32 func_sc03_014_80188FB4();
extern void func_sc03_014_80188CB4();
extern u8 D_sc03_014_801EADEC;
extern u16 D_sc03_014_801EADE4;
extern u16 D_sc03_014_801EADE6;
extern s16 D_sc03_014_801EADE8;
extern s16 D_sc03_014_801EADEA;
extern s32 func_sc03_014_8018A934();
extern void func_sc03_014_8018A860();
extern void PosToSVec();
extern s32 func_sc03_014_8018ADA8();
extern s32 func_sc03_014_8018B0EC();
extern void func_sc03_014_8018AFD0();
extern s16 D_sc03_014_801EACE4;
extern s32 D_80126CF0;
extern s32 D_8012750C;
extern s32 OpenMessage();
extern s32 func_sc03_014_80182C28();
extern s32 GetProgress();
extern u8 g_Camera;
extern s32 g_CameraProjTarget;
extern s32 g_CameraDistTarget;
extern s16 g_CameraAngleTarget;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 g_CameraOfsTarget;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void SetCameraUpdate();
extern void SnapCamera();
extern s32 func_sc03_014_801847EC();
extern s32 RequestBgmPack();
extern void EndPlayerAction();
extern u16 D_800B99DA;
extern u8 D_sc03_014_801CF780;
extern u8 D_sc03_014_8018FE40[];
extern s32 QueueImage();
extern s32 D_sc03_014_801EAEE4;
extern u8 D_sc03_014_8018FE9C;
extern u8 D_sc03_014_8018FEAC;
extern s32 * func_sc03_014_801859B0();
extern void UpdateModelZYX();
extern s32 func_sc03_014_80184868();
extern u8 D_sc03_014_801906F8;
extern s32 D_sc03_014_801EAC80;
extern void (*D_sc03_014_80191848[])();
extern s32 D_sc03_014_80190700[];
extern void func_sc03_014_80185A0C();
extern void func_sc03_014_80187EE8();
extern void SetReactionStep();
extern s32 MoveCollide();
extern u8 D_sc03_014_801918A0;
extern u8 D_sc03_014_801E3F20;
extern s32 SpawnActor();
extern void NextState();
extern s32 func_sc03_014_80188C0C();
extern s32 func_sc03_014_80188D64();
extern s16 D_sc03_014_801EAFC8;
extern u8 D_sc03_014_80191BFC;
extern u8 D_sc03_014_80191BEC;
extern s32 func_sc03_014_801899AC();
extern s32 SpawnPropFrom();
extern u8 D_sc03_014_80190468;
extern void GainStat0FromActor();
extern void func_sc03_014_80182D5C();
extern void func_sc03_014_8018AE9C();
extern u16 g_PlayerHitKind[];
extern u8 D_sc03_014_801907E8;
extern u8 D_sc03_014_80190FE8;
extern u8 D_sc03_014_801917E8;
extern u8 D_sc03_014_80191808;
extern s16 D_sc03_014_80191810;
extern s16 D_sc03_014_80191812;
extern s16 D_sc03_014_80191814;
extern s16 D_sc03_014_80191818;
extern s16 D_sc03_014_8019181A;
extern s16 D_sc03_014_8019181C;
extern s16 D_sc03_014_80191820;
extern s16 D_sc03_014_80191822;
extern s16 D_sc03_014_80191824;
extern u8 D_sc03_014_80191828;
extern u8 D_sc03_014_80191830;
extern s32 ActorSegmentDamagesPlayer();
extern s32 SpawnKind205();
extern s32 D_sc03_014_8018F010[];
extern u8 D_sc03_014_801E2170;
extern u8 D_sc03_014_8018F0BC;
extern void StartSeqPlayer();
extern void DisableBgLayers();
extern u8 D_sc03_014_801EA880[];
extern u8 D_sc03_014_801EA881;
extern u8 D_sc03_014_801EA882;
extern s8 D_sc03_014_801EA884;
extern s8 D_sc03_014_801EA885;
extern s8 D_sc03_014_801EA886;
extern s32 AllocSprite16To3E();
extern void func_8001CD04();
extern void SetShapeCircle();
extern u8 D_sc03_014_801919F4;
extern s32 func_sc03_014_80189160();
extern void StopMotion();
extern s32 func_sc03_014_8018918C();
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 GetVar();
extern s16 D_80126B62;
extern s32 g_PlayerPosX;
extern u16 g_Actors;
extern s16 D_800B9A08;
extern u8 D_sc03_014_8018F680;
extern u8 D_sc03_014_8018F61C[];
extern s32 PosDist();
extern void TakePlayerControl();
extern s32 DistSqToPlayer();
extern u8 D_sc03_014_801EA968;
extern u8 D_sc03_014_801EA969;
extern u8 D_sc03_014_801EA96A;
extern u8 D_sc03_014_801EA96C;
extern u8 D_sc03_014_801EA96D;
extern u8 D_sc03_014_801EA96E;
extern s32 D_sc03_014_801EAB6C;
extern s32 D_sc03_014_801EAB70;
extern s32 D_sc03_014_801EAB74;
extern s32 AllocSpriteInRange();
extern void func_8001CD50();
extern u16 D_sc03_014_801CFE18;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
extern s8 D_sc03_014_8018F6FC[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern void DrawPrimG4Mtx();
extern WMtx GsIDMATRIX;
extern void DrawPrimLineG2Mtx();
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern PtSys D_sc03_014_801EACD8;
extern s16 D_sc03_014_801EACDE;
extern void func_sc03_014_8018B23C();
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern OtRef g_WorldOtOrg[];
extern Ot14 g_WorldOt[];
extern s32 AddDrawModeAbr();
extern u8 D_sc03_014_801EACE0;
extern u8 D_sc03_014_801EACE1;
extern u8 D_sc03_014_801EACE2;
extern u8 D_sc03_014_8018F058;
extern u8 D_sc03_014_8018F07C;
extern s32 D_sc03_014_8018EFC0[];
extern s32 GetCameraPitch();
extern s32 GetCameraHeading();
extern void ProjectPointOtz();
extern void SVecToPos();
extern void InitSpriteKind1();
extern s32 D_sc03_014_8018EFFC[];
extern void func_sc03_014_8017D318();
extern SV D_sc03_014_8018F038[];
extern void func_sc03_014_8017C290();
extern CV4 D_sc03_014_801EA840;
extern u8 D_sc03_014_801EA844;
extern u8 D_sc03_014_801EA845;
extern u8 D_sc03_014_801EA846;
extern CV4 D_sc03_014_8018EF84[];
extern SV4 D_sc03_014_801EA8C0[4];
extern s16 D_sc03_014_801EA8C4;
extern CV4 D_sc03_014_801EA8E0;
extern CV4 D_sc03_014_801EA8E4;
extern CV4 D_sc03_014_801EA8E8;
extern CV4 D_sc03_014_801EA8EC;
extern s32 D_sc03_014_801EA8F0;
extern CV4 D_sc03_014_8018EF98[];
extern CV4 D_sc03_014_8018EFAC[];
extern void SetIdentityRot();
extern void DrawPrimG4Screen();
extern s32 StopWithGravity();
extern UV4 D_sc03_014_801E3990[];
extern s32 D_sc03_014_801E3A18[];
extern u16 D_sc03_014_80190490;
extern u8 D_sc03_014_801904C4;
extern u8 D_sc03_014_80190590;
extern u8 D_sc03_014_8019059C;
extern u8 D_sc03_014_801905A4;
extern u8 D_sc03_014_801905B4;
extern u8 D_sc03_014_801905E4;
extern u8 D_sc03_014_801905F0;
extern u8 D_sc03_014_80190720;
extern u8 D_sc03_014_80190780;
extern u8 D_sc03_014_801C97C8;
extern u8 D_sc03_014_80191838;
extern u8 D_sc03_014_801E732C;
extern u8 D_sc03_014_801E7B50;
extern u8 D_sc03_014_801D6ED0;
extern s16 g_PlayerX;
extern s32 D_80126B64;
extern s16 D_80126B66;
extern s32 D_sc03_014_801904F0[];
extern void *g_PlayerModel;
extern s32 HeadingToPoint();
extern s32 TurnStepToPlayer();
extern s32 GroundDistSqToPlayer();
extern void MoveOnGround();
extern u8 D_sc03_014_801E2638;
extern u8 D_sc03_014_801E2708;
extern u8 D_sc03_014_801E25D8;
extern u8 D_sc03_014_801E2660;
extern u8 D_sc03_014_80190550;
extern u8 D_sc03_014_80190558;
extern u8 D_sc03_014_80190560;
extern u8 D_sc03_014_80190568;
extern u8 D_sc03_014_80190570;
extern u8 D_sc03_014_80190578;
extern u8 D_sc03_014_80190580;
extern u8 D_sc03_014_80190588;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern CV4 D_sc03_014_8018EF70[];
extern u16 g_Effects;
extern u16 D_sc03_014_8018EFD4[][2];
extern u8 D_sc03_014_8018F5E8;
extern u8 D_sc03_014_8018F624;
extern u8 D_sc03_014_801CFDF0;
extern u8 D_sc03_014_801EA8F8;
extern u8 D_sc03_014_801EA904;
extern u8 D_sc03_014_801EA905;
extern u8 D_sc03_014_801EA906;
extern u8 D_sc03_014_801EA914;
extern u8 D_sc03_014_801EA915;
extern u8 D_sc03_014_801EA916;
extern u8 D_sc03_014_801EA925;
extern u8 D_sc03_014_801EA926;
extern u8 D_sc03_014_801EA928;
extern u8 D_sc03_014_801EA929;
extern u8 D_sc03_014_801EA92A;
extern u8 D_sc03_014_801EA92C;
extern u8 D_sc03_014_801EA92D;
extern u8 D_sc03_014_801EA92E;
extern u8 D_sc03_014_801EA934;
extern u8 D_sc03_014_801EA9A8;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc03_014_80183B58();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();
extern s32 D_800AF648[];
typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
extern void ZeroFill();
extern u8 D_sc03_014_8018F77C[];
extern s32 SpawnFromDef();
extern s32 D_sc03_014_801EAC90;
extern void ForceTintRow5();
extern s32 func_sc03_014_801846E4();
extern void func_sc03_014_80188A80();
extern u8 g_CameraFocus;
extern s16 D_sc03_014_8018F854[];
extern s32 GetObjPadPressed();
typedef struct { s16 v[8]; s32 w; } Arg14ABC;
typedef union { s32 w; struct { u16 lo; s16 hi; } h; } FixABC;
typedef struct {
    u8 pad0[4];
    FixABC pos[3];
    u8 pad10[0xC];
    s32 count;
    u8 pad20[0x14];
    u16 sub;
    u8 pad36[0x1A];
    s16 c50;
    s16 s52;
    u8 pad54[0x40];
    s32 i94;
    u8 pad98[0x48];
    s32 fE0;
    s32 nE4;
    u8 padE8[0xC];
    s32 vF4;
} ActABC;
typedef struct { XY p[5]; } XY5;
typedef struct { s32 v; } S32R;
typedef struct { SV v[4]; u16 uv[4][2]; u8 r, g, b, pad; s32 code; u8 tp; } SPrim105;
typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
typedef struct { CV a; CV b; u8 pad[0x38]; } E40;
typedef struct { u8 b[4]; } B4;
extern s16 D_sc03_014_8018F778; extern s16 D_sc03_014_8018F76C; extern s16 D_sc03_014_8018F760; extern u8 D_sc03_014_801EAB78; extern s32 AllocActorSprite(); extern void SjisToGlyphs(); extern void InitTextSprite(); extern s16 D_sc03_014_801EABA0; extern s16 D_sc03_014_801EABB0; extern s16 D_sc03_014_801EABAA; extern s16 D_sc03_014_801EABA2; extern s16 D_sc03_014_801EABBA; extern s16 D_sc03_014_801EABB2; extern s16 D_sc03_014_801EABDE; extern s16 D_sc03_014_801EABD6; extern s16 D_sc03_014_801EABEE; extern s16 D_sc03_014_801EABE6; extern s16 D_sc03_014_801EAC08; extern s16 D_sc03_014_801EAC18; extern s16 D_sc03_014_801EAC12; extern s16 D_sc03_014_801EAC0A; extern s16 D_sc03_014_801EAC22; extern s16 D_sc03_014_801EAC1A; extern s16 D_sc03_014_801EAC0C; extern s16 D_sc03_014_801EABD8; extern s16 D_sc03_014_801EABA4; extern u8 D_sc03_014_801EABC8; extern u8 D_sc03_014_801EABC0; extern u8 D_sc03_014_801EABCC; extern u8 D_sc03_014_801EABC4; extern u8 D_sc03_014_801EABC9; extern u8 D_sc03_014_801EABC1; extern u8 D_sc03_014_801EABCE; extern u8 D_sc03_014_801EABCA; extern u8 D_sc03_014_801EABC6; extern u8 D_sc03_014_801EABC2; extern u8 D_sc03_014_801EABFC; extern u8 D_sc03_014_801EABF4; extern u8 D_sc03_014_801EABFD; extern u8 D_sc03_014_801EABF5; extern u8 D_sc03_014_801EAC01; extern u8 D_sc03_014_801EABF9; extern u8 D_sc03_014_801EAC34; extern u8 D_sc03_014_801EAC30; extern u8 D_sc03_014_801EAC2C; extern u8 D_sc03_014_801EAC28; extern u8 D_sc03_014_801EAC35; extern u8 D_sc03_014_801EAC31; extern u8 D_sc03_014_801EAC2D; extern u8 D_sc03_014_801EAC29; extern u8 D_sc03_014_801EAC36; extern u8 D_sc03_014_801EAC32; extern u8 D_sc03_014_801EAC2E; extern u8 D_sc03_014_801EAC2A; extern u8 D_sc03_014_801EAC02; extern u8 D_sc03_014_801EABFE; extern u8 D_sc03_014_801EABFA; extern u8 D_sc03_014_801EABF6; extern s32 D_sc03_014_801EAC04; extern s32 D_sc03_014_801EABD0; extern s32 D_sc03_014_801EAC38;
extern u8 D_sc03_014_801E7BB8;
extern u8 D_sc03_014_80191928;
extern s32 func_8001CA1C();
extern s32 SpawnShadow();
extern void func_sc03_014_8018A31C();
extern void func_sc03_014_80189104();
extern u8 D_sc03_014_80191BAC[];
extern u8 D_sc03_014_80191ABC;
extern SV8 D_sc03_014_80190470;
extern SV8 D_sc03_014_80190478;
extern SV8 D_sc03_014_801EAC70;
extern SV8 D_sc03_014_801EAC78;
extern void InitNullModel();
extern u8 D_sc03_014_801E2CE8;
extern SV8 D_sc03_014_80190538;
extern s32 StartSpriteAnim();
extern u8 D_sc03_014_801E450C;
extern u8 D_sc03_014_801918BC;
extern u8 D_sc03_014_801918C8;
extern u8 D_sc03_014_80191918;
extern u8 D_sc03_014_801918F8;
extern u8 D_sc03_014_801E2B50;
extern SV8 D_sc03_014_80190540;
extern u8 D_sc03_014_80190078;
extern void UpdateModelYXZ();
extern WorkHead D_800AF630;
extern s32 g_PadLostFrames;
extern s32 TurnStep();
extern s32 HeadingToPlayer();
extern u8 D_sc03_014_801D6D2C;
extern u8 D_sc03_014_801E2DE0;
extern u8 D_sc03_014_801E2EE8;
extern u8 D_sc03_014_801E2EA0;
extern void func_800D0F4C();
extern s32 rsin();
extern s32 SetScript();
extern s32 rcos();
extern u8 D_sc03_014_801E2910;
extern SV8 D_sc03_014_80190548;
extern s16 D_sc03_014_801907D0;
extern s16 D_sc03_014_801907D2;
extern s16 D_sc03_014_801907D4;
extern s16 D_sc03_014_801907D8;
extern s16 D_sc03_014_801907DA;
extern s16 D_sc03_014_801907DC;
extern s16 D_sc03_014_801907E0;
extern s16 D_sc03_014_801907E2;
extern s16 D_sc03_014_801907E4;
extern u8 D_sc03_014_801907C8;
extern s32 D_80126B60;
extern s32 HeadingPitchTo();
extern void SetLocalVelocity();
extern s32 rand();
extern u8 D_sc03_014_801905C4;
extern u8 D_sc03_014_801905D4;
extern u8 D_sc03_014_801905DC;
extern void ArmCrest();
extern s32 GetPlayerAction();
extern void func_80175454();
extern s32 GetPlayerByte1C7();
extern s32 func_sc03_014_80184DF8();
extern s32 func_sc03_014_801842E0();
extern void func_8002959C();
extern void func_80175414();
extern u8 D_sc03_014_8018FE60;
extern u8 D_sc03_014_8018FE70;
extern void BlendCameraThen();
extern SV8 D_sc03_014_80190048[];
extern s32 D_sc03_014_80190344[];
extern s16 D_sc03_014_8019004A;
extern s16 D_sc03_014_8019004C;
extern s16 D_sc03_014_8019005A;
extern s16 D_sc03_014_8019005C;
extern s32 D_sc03_014_801EA8FC;
extern s32 D_sc03_014_801EA900;
extern s32 D_sc03_014_801EA908;
extern s32 D_sc03_014_801EA90C;
extern s32 D_sc03_014_801EA910;
extern s32 D_sc03_014_801EA918;
extern s32 D_sc03_014_801EA91C;
extern s32 D_sc03_014_801EA920;
extern s32 func_sc03_014_80184028();
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern s32 D_sc03_014_8018EFE8[];
extern s32 EaseValueFrac();
extern void PlaySePositional();
extern u8 D_80126B30;
extern s32 D_8011F9C8;
extern s16 D_80126B3A;
extern void *g_ActiveCamera;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
s32 func_sc03_014_80189050(StageActor *arg0, s32 arg1, s32 arg2);
extern s32 PathHitsModel();
extern s32 g_PlayerHitData;
extern void CopyPropPos();
extern void PushAlongView16();
extern s8 D_sc03_014_801EAC94;
extern CV4 D_sc03_014_801E94F4;
extern CV4 D_sc03_014_801EAC98;
extern void func_8001CD9C();
extern CV4 D_sc03_014_801E94F8;
typedef struct { s32 a, b; } P8;
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
extern void DrawPrimG4ScreenDithered();
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern u8 D_sc03_014_801CF680;
extern void ResetScriptVM();
extern s32 TargetInFront();
extern void CallActionHandler();
extern SV8 D_sc03_014_801E32B0[];
extern u8 D_sc03_014_801EAC95;
extern u8 D_sc03_014_801EAC96;
extern s16 D_80126BF0;
extern s16 D_80126BF4;
extern void WalkPlayerTo();
extern u8 g_DayPeriod;
extern u8 D_sc03_014_801903A8;
extern u8 D_sc03_014_8018FEE0;
extern u8 D_sc03_014_8018FFA0;
extern u8 D_sc03_014_8018FF38;
extern void TakeDamageAndRecoil();
void func_sc03_014_80182D04(s32 arg0, s32 arg1, s16 arg2);
extern s32 PlayParamScript();
extern void FreeShadow();
extern void FreeProp();
extern u8 D_sc03_014_8018FB40;
extern u16 D_sc03_014_8018F250[];
void func_sc03_014_8017BE9C(void);
void func_sc03_014_8017BEA4(void);
void func_sc03_014_8017BEAC(void);
void func_sc03_014_8017BEB4(void);
s32 func_sc03_014_8017BEBC();
void func_sc03_014_8017BEE4(u8 *arg0);
void func_sc03_014_8017BF20(s32 arg0);
s32 func_sc03_014_8017BF58(s32 arg0);
void func_sc03_014_8017BF98(void);
s32 func_sc03_014_8017BFA0();
void func_sc03_014_8017BFC8(u8 *arg0);
void func_sc03_014_8017C004(s32 arg0);
s32 func_sc03_014_8017C03C(s32 arg0);
void func_sc03_014_8017C07C(void);
void func_sc03_014_8017C084(u8 *arg0, s32 arg1, s32 arg2);
void func_sc03_014_8017C0C8(u8 *arg0);
void func_sc03_014_8017C104(u8 *arg0);
void func_sc03_014_8017C12C(s32 arg0);
void func_sc03_014_8017C14C(void);
void func_sc03_014_8017C154(u8 *arg0);
void func_sc03_014_8017C290(u8 *arg0, SV8 *arg1, SV8 *arg2, SV8 *arg3, SV8 *arg4, SV8 *arg5,
                            s16 *arg6);
void func_sc03_014_8017C624(u8 *arg0, s16 arg1, s32 arg2);
void func_sc03_014_8017C664(u8 *arg0);
void func_sc03_014_8017C6A0(u8 *arg0);
void func_sc03_014_8017C814(u8 *arg0);
void func_sc03_014_8017C8FC(u8 *arg0);
void func_sc03_014_8017CC44(u8 *arg0);
void func_sc03_014_8017CCC4(u8 *arg0);
void func_sc03_014_8017CD10(u8 *arg0);
s32 func_sc03_014_8017CE10(s32 arg0, s32 arg1, s32 arg2);
void func_sc03_014_8017CE54(u8 *arg0);
void func_sc03_014_8017CE90(u8 *arg0);
void func_sc03_014_8017CFBC(u8 *arg0);
s32 func_sc03_014_8017D098(s32 arg0, s32 arg1, s32 arg2);
void func_sc03_014_8017D0DC(u8 *arg0);
void func_sc03_014_8017D118(s32 arg0);
void func_sc03_014_8017D194(s32 arg0);
void func_sc03_014_8017D1E0(u8 *arg0);
void func_sc03_014_8017D318(u8 *arg0, SV *a, SV *b, s32 ang);
s32 func_sc03_014_8017D5F8(s32 arg0, s32 arg1, s32 arg2);
void func_sc03_014_8017D63C(u8 *arg0);
void func_sc03_014_8017D678(u8 *arg0);
void func_sc03_014_8017D75C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_014_8017D804(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_014_8017D890(u8 *arg0);
void func_sc03_014_8017D900(s32 arg0);
void func_sc03_014_8017D9C8(s32 arg0);
void func_sc03_014_8017DA98(s16 arg0, B8 *arg1, s32 arg2);
void func_sc03_014_8017DB00(u8 *arg0);
void func_sc03_014_8017DB3C(s32 arg0);
void func_sc03_014_8017DB74(s32 arg0);
void func_sc03_014_8017DBC4(s32 arg0);
void func_sc03_014_8017DC28(u8 *arg0, s32 arg1);
void func_sc03_014_8017DC4C(u8 *arg0);
void func_sc03_014_8017DCC0(u8 *arg0);
void func_sc03_014_8017DD74(void);
s32 func_sc03_014_8017DD7C(void);
void func_sc03_014_8017DDBC(u8 *arg0);
void func_sc03_014_8017DE24(u8 *arg0);
void func_sc03_014_8017DE8C(u8 *arg0);
void func_sc03_014_8017DF7C(void);
void func_sc03_014_8017DF84(u8 *obj, u8 *hdr, s32 phase, s32 dy);
void func_sc03_014_8017EB7C(u8 *obj);
void func_sc03_014_8017FA5C(u8 *obj, u8 *hdr, s32 dy);
void func_sc03_014_801805BC(u8 *arg0);
void func_sc03_014_801805F8(s32 arg0);
void func_sc03_014_80180638(u8 *arg0);
void func_sc03_014_801806B4(s32 arg0);
void func_sc03_014_80180714(void);
void func_sc03_014_8018071C(void);
s32 func_sc03_014_80180744(void);
s16 func_sc03_014_80180760(void);
void func_sc03_014_80180770(u8 *arg0);
void func_sc03_014_801807D0(u8 *arg0);
void func_sc03_014_8018089C(u8 *arg0);
void func_sc03_014_80180A68(s32 arg0);
void func_sc03_014_80180AC4(s32 arg0);
void func_sc03_014_80180B20(u8 *arg0);
void func_sc03_014_80180B84(u8 *arg0);
void func_sc03_014_80180C34(u8 *arg0);
void func_sc03_014_80180CF8(u8 *arg0);
void func_sc03_014_80180DB8(u8 *arg0);
void func_sc03_014_80180DFC(u8 *arg0);
void func_sc03_014_80180E38(u8 *a);
void func_sc03_014_80180FFC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_014_80181090(u8 *arg0);
void func_sc03_014_801810CC(s32 arg0);
void func_sc03_014_80181170(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_014_801811D4(u8 *arg0, s32 arg1_0);
void func_sc03_014_80181304(u8 *arg0);
void func_sc03_014_80181690(u8 *arg0);
void func_sc03_014_80181908(u8 *arg0);
void func_sc03_014_80181A50(u8 *arg0);
void func_sc03_014_80181BD0(u8 *arg0);
void func_sc03_014_80181C0C(void);
void func_sc03_014_80181C58(u8 *arg0);
void func_sc03_014_80181D4C(u8 *arg0);
void func_sc03_014_80181DCC(u8 *arg0);
void func_sc03_014_80181E80(u8 *arg0);
void func_sc03_014_80181EEC(u8 *arg0, s32 arg1);
void func_sc03_014_80181F78(s32 arg0, s32 arg1);
void func_sc03_014_80181F98(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_014_80181FEC(s32 arg0);
void func_sc03_014_80182028(u8 *arg0);
void func_sc03_014_80182064(u8 *arg0);
void func_sc03_014_801820B4(u8 *arg0);
void func_sc03_014_80182110(u8 *arg0);
void func_sc03_014_80182194(u8 *arg0);
void func_sc03_014_801822FC(u8 *arg0);
void func_sc03_014_80182348(u8 *arg0);
void func_sc03_014_80182654(u8 *arg0);
void func_sc03_014_80182690(u8 *arg0);
void func_sc03_014_801826D0(u8 *arg0);
void func_sc03_014_80182740(u8 *arg0);
void func_sc03_014_801827CC(u8 *arg0);
void func_sc03_014_801828A0(u8 *arg0);
void func_sc03_014_801828F4(u8 *arg0);
void func_sc03_014_80182930(u8 *arg0);
void func_sc03_014_801829E4(u8 *arg0);
void func_sc03_014_80182A40(u8 *arg0);
void func_sc03_014_80182BB0(s32 arg0, s32 arg1);
void func_sc03_014_80182BD4(s32 arg0, s32 arg1, s16 arg2);
void func_sc03_014_80182BFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_sc03_014_80182C28(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_014_80182CB0(s32 arg0, s32 arg1);
void func_sc03_014_80182D04(s32 arg0, s32 arg1, s16 arg2);
void func_sc03_014_80182D5C(void);
void func_sc03_014_80182E08(u8 *arg0);
void func_sc03_014_80182E44(u8 *o);
void func_sc03_014_80183130(u8 *arg0);
void func_sc03_014_801835C4(u8 *arg0);
s32 func_sc03_014_80183600(u8 *arg0);
s32 func_sc03_014_80183644(void);
s32 func_sc03_014_80183668(u8 *arg0);
s32 func_sc03_014_801836A8(u8 *arg0);
void func_sc03_014_80183724(void);
void func_sc03_014_80183744(u8 *arg0);
s32 func_sc03_014_80183780(u8 *arg0);
s32 func_sc03_014_801837C0(u8 *arg0);
void func_sc03_014_8018383C(void);
void func_sc03_014_8018385C(u8 *arg0);
s32 func_sc03_014_80183898(u8 *arg0);
void func_sc03_014_80183930(void);
void func_sc03_014_80183958(void);
void func_sc03_014_80183980(void);
void func_sc03_014_80183A18(s32 arg0);
void func_sc03_014_80183A54(u8 *arg0);
void func_sc03_014_80183B58(u8 *arg0, u8 *arg1);

void func_sc03_014_801848E4(StageActor *arg0) {
    D_sc03_014_8018FE80[arg0->state]();
}

void func_sc03_014_80184920(StageActor *o) {
    s32 r;

    r = func_sc03_014_80184E4C((s32)o, (s32)&D_sc03_014_8018FB40, 0x300, 0x140, 0x88);
    o->ext0 = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    r = func_sc03_014_80184E4C((s32)o, (s32)&D_sc03_014_8018FB40, 0x310, 0x140, 0x89);
    o->ext1 = r;
    if (r == 0) {
        ZeroFill(o->ext0, 0x38);
        RejectSpawn(o);
        return;
    }
    AF(o->ext0, u16, 0x12) = (u16)o->def->unkC;
    AF(o->ext1, u16, 0x12) = (u16)o->def->unkC;
    o->work100 = 0;
    if (!(GetFlag(0xB9) & 0xFF)) {
        o->state = 1;
        o->stateCount = 0;
    } else {
        o->state = 2;
        o->stateCount = 2;
    }
}

void func_sc03_014_80184A08(u8 *o) {
    if (DistSqToPlayer(o) <= 0x400 || AF(o, u16, 0x34) == 1 || AF(o, u16, 0x34) == 2) {
        switch (AF(o, u16, 0x34)) {
        case 0:
            if (!(GetFlag(0x8B) & 0xFF)) {
                StartEvent(o, &D_sc03_014_8018FE60);
                AF(o, s16, 0x34) = 2;
            } else {
                StartEvent(o, &D_sc03_014_8018FE70);
                AF(o, s16, 0x34)++;
            }
            break;
        case 1:
            if (UpdateScript(o) == 1) {
                EndEvent(o);
                AF(o, s16, 0x34) = 3;
            }
            break;
        case 2:
            if (UpdateScript(o) == 1) {
                EndEvent(o);
                AF(o, s16, 0x34) = 4;
            }
            break;
        case 3:
            if (!(GetFlag(0xB9) & 0xFF) && GetTechnique() == 3) {
                ArmCrest(3, &D_sc03_014_8018F4F8);
                if (GetPlayerAction() != 0 && !(AF(o, u16, 0x100) & 4)) {
                    AF(o, u16, 0x100) |= 4;
                    AF(o, s32, 0x1C) = 0;
                    func_80175454();
                }
                if (AF(o, u16, 0x100) & 4) {
                    AF(o, s32, 0x1C)++;
                }
                if (!(AF(o, u16, 0x100) & 2) && AF(o, s32, 0x1C) == 0x5A) {
                    AF(o, u16, 0x100) |= 2;
                    func_800D0C48(0);
                }
                if (!(AF(o, u16, 0x100) & 1) && (GetPlayerByte1C7() & 0x8000007F) == 0x80000003) {
                    AF(o, u16, 0x100) |= 1;
                    AF(o, s16, 0x34)++;
                    PlaySoundId(0xBD8, 0);
                }
            }
            break;
        }
        if (!(GetFlag(0x8B) & 0xFF)) {
            return;
        }
        if (GetTechnique() == 3) {
            func_sc03_014_80184DA4(o);
            func_sc03_014_80184DF8(o);
        } else {
            AF(AF(o, u8 *, 0xCC), u8, 0x27) = 0x88;
            func_sc03_014_80184DF8(o);
        }
    } else {
        if (!(GetFlag(0x8B) & 0xFF)) {
            return;
        }
        AF(AF(o, u8 *, 0xCC), u8, 0x27) = 0x88;
        func_sc03_014_80184DF8(o);
    }
    if (AF(o, u16, 0x100) & 1) {
        if (func_sc03_014_801842E0() != 0) {
            SetFlag(0xB9, 1);
            AF(o, s16, 2) = 2;
            AF(o, u16, 0x100) &= ~1;
            AF(o, s16, 0x34) = 0;
            AF(AF(o, u8 *, 0xCC), u8, 0x27) = 0x88;
            AF(AF(o, u8 *, 0xD0), u8, 0x27) = 0x89;
            func_8002959C();
            func_80175414();
        }
    }
}

void func_sc03_014_80184D1C(StageActor *arg0) {
    u16 temp_v1;

    temp_v1 = arg0->stateCount;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_sc03_014_801847EC() != 0) {
            arg0->stateCount = (u16) (arg0->stateCount + 1);
        }
        /* fallthrough */
    case 1:
        if (RequestBgmPack(0x71) != 0) {
            arg0->stateCount = (u16) (arg0->stateCount + 1);
            EndPlayerAction();
        }
        return;
    }
}

s32 func_sc03_014_80184DA4(s32 arg0) {
    AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0x8A;
    return QueueImage((s32) ((D_sc03_014_8018FE40[(D_800B99DA & 0x1F)] * 0x10) + &D_sc03_014_801CF780));
}

s32 func_sc03_014_80184DF8(s32 arg0) {
    AF(AF(arg0, void *, 0xD0), u8, 0x27) = 0x8B;
    return QueueImage((s32) ((D_sc03_014_8018FE40[(D_800B99DA & 0x1F)] * 0x10) + &D_sc03_014_801CF680));
}

s32 func_sc03_014_80184E4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = AllocActorSprite();
    if (temp_v0 == 0) {
        return 0;
    }
    InitSpriteKind2(temp_v0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
    AF(temp_v0, s16, 0x10) = 0xC00;
    AF(temp_v0, u8, 0x27) = (s8) arg4;
    AF(temp_v0, s16, 0x1A) = 0x2D00;
    AF(temp_v0, s16, 0x18) = 0x2D00;
    AF(temp_v0, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_v0, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    return temp_v0;
}

void func_sc03_014_80184F14(StageActor *o) {
    s32 s;
    s32 a;

    if (IsEventDone(o) != 0) {
        EndEvent(o);
        if (o->stateCount >= 6) {
            SetProgress(0x2C6);
            func_800D0F4C(0x5F);
            if ((u8 *)o->ext0 != 0) {
                FreeActor(o->ext0);
            }
            if ((u8 *)o->ext1 != 0) {
                FreeActor(o->ext1);
            }
            FreeActor(o);
            return;
        }
        o->state = 1;
        o->stateCount = 0;
    }
    switch (o->stateCount) {
    case 0:
        func_800D0C48(1);
        o->stateCount++;
    case 1:
        o->model->scale.vx -= 0x40;
        o->model->scale.vy -= 0x40;
        o->model->scale.vz -= 0x40;
        if (o->model->scale.vx < 0x100) {
            o->work108 = 0x14;
            o->stateCount++;
        }
        break;
    case 2:
        o->work108--;
        o->model->rot.vy += 0x33;
        if (o->work108 == 0) {
            o->stateCount++;
            PlaySoundId(0x8B5, 0);
            RequestBgmPack(0x50);
        }
        break;
    case 3:
        a = ((u16)o->work108 + 0x300) & 0xFFF;
        o->work108 = a;
        s = rsin(a);
        if (s < 0) {
            s = -s;
        }
        o->pos[0].w += s << 6;
        if (o->pos[0].w > 0x17FFFFF) {
            o->stateCount++;
            PlaySoundId(0xD, 0x8B5);
        }
        break;
    case 4:
        if (RequestBgmPack(0x50) != 0) {
            o->stateCount++;
        }
        break;
    case 5:
        break;
    }
}

void func_sc03_014_80185144(StageActor *arg0) {
    D_sc03_014_80190008[arg0->state]();
}

void func_sc03_014_80185180(StageActor *o) {
    Mover *p;

    switch (o->stateCount) {
    case 0:
        if ((u32)GetProgress() >= 0x2D0) {
            o->pos[1].h.i += 0xF00;
            o->model->unk04 &= 0x7FFFFFFF;
            o->stateCount++;
            func_800D0C48(1);
        }
        break;
    case 1:
        p = (u8 *)SpawnActorArg(0x265, 5, o);
        if (p != 0) {
            p->pos[0].h.i = 0x276;
            p->pos[1].h.i = -0x48;
            p->pos[2].h.i = -0x2DA;
            UpdateModelZYX(p);
            o->ext0 = p;
            o->stateCount++;
        }
        break;
    case 2:
        p = (u8 *)SpawnActorArg(0x265, 5, o);
        if (p != 0) {
            p->pos[0].h.i = -0x26C;
            p->pos[1].h.i = -0x48;
            p->pos[2].h.i = -0x2DA;
            UpdateModelZYX(p);
            o->ext1 = p;
            o->stateCount++;
        }
        break;
    case 3:
        p = (u8 *)SpawnActorArg(0x265, 0, o);
        if (p != 0) {
            p->pos[0].h.i = -0x15B;
            p->pos[1].h.i = -0x82;
            p->pos[2].h.i = -0x1ED;
            p->model->rot.vy = -0x600;
            o->link = p;
            o->stateCount++;
        }
        break;
    case 4:
        p = (u8 *)SpawnActorArg(0x265, 6, o);
        if (p != 0) {
            p->pos[1].h.i -= 0x10;
            p->model->rot.vy = 0x900;
            AF(o, u8 *, 0xD8) = p;
            o->stateCount++;
            StartEvent(o, &D_sc03_014_80190078);
        }
        break;
    case 5:
        if (IsEventDone(o)) {
            EndEvent(o);
            o->stateCount = 0;
            o->state++;
        }
        break;
    }
}

void func_sc03_014_80185380(u8 *o) {
    s32 a;
    u8 *p;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(AF(o, u8 *, 0x6C), s16, 0x76) <= 0) {
            AF(o, s16, 0x34)++;
            FreeActor(AF(o, u8 *, 0xCC));
            FreeActor(AF(o, u8 *, 0xD0));
            p = (u8 *)D_sc03_014_80190048;
            AF(p, s16, 0) = AF(AF(o, u8 *, 0x6C), s16, 6);
            D_sc03_014_8019004A = AF(AF(o, u8 *, 0x6C), s16, 0xA) - 0x40;
            D_sc03_014_8019004C = AF(AF(o, u8 *, 0x6C), s16, 0xE);
            p += 0x10;
            AF(p, s16, 0) = g_PlayerX;
            D_sc03_014_8019005A = D_80126B62 - 0x40;
            D_sc03_014_8019005C = D_80126B66;
            a = HeadingToPlayer(o);
            D_sc03_014_80190344[0] = (AF(o, s16, 6) - ((rsin(a) * 0x60) >> 12)) & 0xFFFF;
            D_sc03_014_80190344[0] |= (AF(o, s32, 0xC) - rcos(a) * 0x600) & 0xFFFF0000;
            StartEvent(o, (u8 *)D_sc03_014_80190344 - 0x4C);
        }
        break;
    case 1:
        if (UpdateScript(o) != 0) {
            EndEvent(o);
            AF(o, s16, 0x34)++;
            AF(AF(o, u8 *, 0xD8), s16, 0x34) = 1;
            SetProgress(0x2DA);
            BlendCameraThen(func_sc03_014_80183980);
        }
        break;
    }
}

void func_sc03_014_8018553C(StageActor *arg0) {
    D_sc03_014_801903DC[arg0->state]();
}

s32 func_sc03_014_80185578(void) {
    return 2 - D_sc03_014_801EAEE4;
}

s32 func_sc03_014_8018558C(u8 *arg0) {
    return (u16) AF(arg0, u16, 0x34) >= 6U;
}

void func_sc03_014_801855A0(s32 arg0) {
    void *temp_a1;
    void *temp_v1;

    if (SetupActor(arg0, (s32) &D_sc03_014_8018FEAC) != 0) {
        if (GetProgress() >= 0x2C6U) {
            FreeActor(arg0);
            return;
        }
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc03_014_8018B898);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(arg0, u8, 0x75) = 0;
        if (AF(arg0, s16, 0x70) == 0) {
            AF(arg0, s32, 0xD0) = SpawnTalkMarker(arg0, (s32) &func_sc03_014_801859B0);
            AF(arg0, s32, 0xCC) = SpawnActorArg(0x241, 1, arg0);
            return;
        }
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_014_8018FE9C | 0x40000000 | 0x20000000);
        temp_a1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0xC0);
        AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) + 0x80);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
        UpdateModelZYX(arg0);
    }
}

void func_sc03_014_801856B4(StageActor *arg0) {
    arg0->model->rot.vy = 0x800;
}

void func_sc03_014_801856C4(StageActor *o) {
    if ((u32)GetProgress() < 0x2BC) {
        RunScript(o, &D_sc03_014_8018FEE0);
    } else if (o->work10A != 0) {
        RunScript(o, &D_sc03_014_8018FFA0);
    } else {
        RunScript(o, &D_sc03_014_8018FF38);
    }
    o->state = 3;
}

s32 func_sc03_014_80185744(void) {
    return RequestBgmPack(0x51) != 0;
}

s32 func_sc03_014_80185764(void) {
    return RequestBgmPack(0x52) != 0;
}

s32 func_sc03_014_80185784(void) {
    return RequestBgmPack(0x56) != 0;
}

s32 func_sc03_014_801857A4(void) {
    return func_sc03_014_80184868() != 0;
}

void func_sc03_014_801857C4(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
}

s32 func_sc03_014_801857E4(void) {
    SV8 v;

    if (g_PlayerX == D_80126BF0 && D_80126B66 == D_80126BF4) {
        v.x = g_PlayerX;
        v.y = D_80126B62;
        v.z = D_80126B66;
        WalkPlayerTo(&v);
        return 1;
    }
    return 0;
}

void func_sc03_014_80185858(u8 *o) {
    if (SetupActor(o, &D_sc03_014_801903A8) != 0) {
        if ((u32)GetProgress() < 0x2DA) {
            AF(o, s16, 2) = 1;
        } else {
            AF(o, s16, 2) = 4;
        }
        AF(o, u8, 0x75) = 4;
        UpdateModelZYX(o);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
    }
}

void func_sc03_014_801858D4(StageActor *arg0) {
    s32 v;

    if (arg0->unk84 != 0) {
        if (func_sc03_014_80184028() == 0x18) {
            arg0->unk84 = 0;
        }
    } else if (func_sc03_014_80184028() == 0xF) {
        AF(arg0, s16, 0x84) = 1;
        v = -D_80126B66 >> 3;
        if (v < 0) {
            v = 0;
        }
        if (v >= 0x80) {
            v = 0x7F;
        }
        PlaySoundId(0xBAB, (u16)(v | 0x1000));
    }
}

void func_sc03_014_8018597C(StageActor *arg0) {
    if (func_sc03_014_80184868() != 0) {
        arg0->state = 3;
    }
}

s32 *func_sc03_014_801859B0(u8 *o) {
    s32 *r;

    if (DistSqToPlayer(AF(o, s32, 0x64)) <= 0x4000) {
        AF(AF(o, u8 *, 0x64), s16, 2) = 2;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = 0;
    }
    return r;
}

void func_sc03_014_80185A0C(u8 *o) {
    u8 buf[0x10];
    SV8 r;
    u8 pad1[0x18];
    struct { s32 flg; WMtx m; u8 rest[0x34]; } c;
    SV8 a;
    SV8 b;
    s32 fl;
    u8 *s;

    InitNullModel(buf);
    s = (u8 *)(AF(AF(o, u8 *, 0x20), s32, 0x20) & 0xFEFFFFFF);
    s += 0x70;
    r.x = AF(s, u16, 6);
    r.y = s[1] | ((s[0] & 0xF) << 8);
    r.z = s[2] | ((s[0] & 0xF0) << 4);
    RotMatrixZYX(&r, &c.m);
    c.m.t[0] = AF(s, s8, 3);
    c.m.t[1] = AF(s, s8, 4);
    c.m.t[2] = AF(s, s8, 5);
    SetRotMatrix(&c.m);
    SetTransMatrix(&c.m);
    RotTransSV(&D_sc03_014_80190470, &a, &fl);
    RotTransSV(&D_sc03_014_80190478, &b, &fl);
    LocalToWorld(AF(o, u8 *, 0x20) + 0x34, &a, &D_sc03_014_801EAC70);
    LocalToWorld(AF(o, u8 *, 0x20) + 0x34, &b, &D_sc03_014_801EAC78);
}

void func_sc03_014_80185B44(u8 *arg0) {
    s32 t2;
    u16 t;

    if (SetupActor(arg0, &D_sc03_014_80190490) != 0) {
        switch (AF(arg0, s16, 0x70)) {
        case 0:
            AF(arg0, u8, 0xC0) = 1;
            AF(arg0, s16, 2) = 0xE;
            SetScript(arg0, &D_sc03_014_801E2170);
            StopWithGravity(arg0);
            SpawnShadow(arg0);
            AF(arg0, s32, 0xB4) = -0x2032;
            AF(arg0, s32, 0xBC) = (s32) &D_sc03_014_801904C4;
            AF(arg0, s16, 0xAE) = -1;
            AF(arg0, u8, 0x75) = 0;
            AF(arg0, s32, 0xC4) |= 1;
            t = D_sc03_014_80190490;
            D_sc03_014_801EAC80 = 0;
            AF(arg0, s16, 0xFE) = 1;
            AF(arg0, u16, 0x76) = t;
            AF(arg0, s32, 0x6C) = SpawnActorArg(0x265, 7, arg0);
            break;
        case 1:
            func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_014_80190590);
            SetScript(arg0, &D_sc03_014_8019059C);
            AF(arg0, s32, 0x58) = ((s32) &D_sc03_014_801905A4 | 0x40000000) | 0x20000000;
            AF(arg0, u16, 0x5C) = 0x8000;
            AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x50000000;
            AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x08000000;
            AF(arg0, u8, 0xC0) = 1;
            AF(arg0, s16, 2) = 3;
            AF(arg0, s32, 0xBC) = (s32) &D_sc03_014_801905B4;
            AF(arg0, u8, 0x75) = 0;
            AF(arg0, s32, 0xB4) = 0;
            AF(arg0, s32, 0x1C) = 0x5A;
            AF(arg0, s32, 0xC4) |= 2;
            break;
        case 2:
            func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_014_801905E4);
            SetScript(arg0, &D_sc03_014_801905F0);
            AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x50000000;
            AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
            AF(AF(arg0, u8 *, 0x20), s16, 0x18) = 0x2000;
            AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x2000;
            AF(arg0, s16, 2) = 4;
            AF(arg0, u8, 0x75) = 0;
            t2 = D_sc03_014_801EAC80;
            AF(arg0, s32, 0x1C) = 0x1E;
            D_sc03_014_801EAC80 = t2 + 1;
            break;
        case 3:
            func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_014_80190720);
            SetScript(arg0, &D_sc03_014_80190780);
            AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x50000000;
            AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x08000000;
            AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
            AF(arg0, s16, 2) = 5;
            AF(arg0, u8, 0x75) = 0;
            AF(arg0, s32, 0x1C) = 0x5A;
            break;
        case 4:
            InitModel(AF(arg0, s32, 0x20), &D_sc03_014_801C97C8);
            AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x50000000;
            AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
            AF(arg0, s16, 2) = 7;
            AF(arg0, u8, 0x75) = 0;
            AF(arg0, s32, 0x1C) = 0x5A;
            break;
        case 5:
            AF(arg0, s32, 0x58) = ((s32) &D_sc03_014_80191838 | 0x40000000) | 0x20000000;
            AF(arg0, s16, 0x5C) = 0x800;
            AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
            AF(arg0, s16, 2) = 0xD;
            break;
        case 6:
            InitModel(AF(arg0, s32, 0x20), &D_sc03_014_801E732C);
            SetScript(arg0, &D_sc03_014_801E7B50);
            AF(arg0, s16, 0x5C) = 0x800;
            AF(arg0, s16, 2) = 0xF;
            StopWithGravity(arg0);
            break;
        case 7:
            InitModel(AF(arg0, s32, 0x20), &D_sc03_014_801D6ED0);
            AF(arg0, s16, 0x5C) = 0;
            AF(arg0, s16, 2) = 0x10;
            StopWithGravity(arg0);
            break;
        }
    }
}

void func_sc03_014_80185EF8(u8 *arg0) {
    SV8 sp;
    s32 a;
    s32 spd;
    s32 dir;

    a = ((AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) - (AF(g_PlayerModel, u16, 0x12) & 0xFFF)) & 0xFFF;
    if (a >= 0x7C1 && a < 0x840) {
        dir = 1;
        spd = 0;
    } else if (a < 0x101 || a >= 0xF00) {
        dir = 3;
        spd = 8;
    } else if (a < 0x701) {
        dir = 7;
        spd = 8;
    } else if (a < 0x7C1) {
        dir = 5;
        spd = 4;
    } else if (a < 0x900) {
        dir = 4;
        spd = 4;
    } else {
        dir = 6;
        spd = 8;
    }
    sp.x = g_PlayerX - ((rsin(AF(g_PlayerModel, u16, 0x12) & 0xFFF) * 14) >> 8);
    sp.y = D_80126B62;
    sp.z = D_80126B66 - ((rcos(AF(g_PlayerModel, u16, 0x12) & 0xFFF) * 14) >> 8);
    a = HeadingToPoint(arg0 + 4, &sp);
    AF(arg0, s32, 0x10) = -((rsin(a) * spd) << 5);
    AF(arg0, s32, 0x18) = -((rcos(a) * spd) << 5);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(arg0, 4);
    {
    s32 out;
    out = 1;
    if (g_PlayerX < 0xF2) {
        if (g_PlayerX >= -0x101) {
            if (D_80126B66 < -0x106) {
                out = D_80126B66 < -0x4AA;
            }
        }
    }
    if (out) {
        dir = 0xE;
        AF(arg0, s16, 0x34) = 0;
        if (GroundDistSqToPlayer(arg0) < 0x1000) {
            AF(arg0, s16, 2) = 0xB;
        } else {
            switch (rand() % 3) {
            case 0:
                AF(arg0, s16, 2) = 2;
                break;
            case 1:
                AF(arg0, s16, 2) = 6;
                break;
            case 2:
                AF(arg0, s16, 2) = 8;
                break;
            }
        }
        AF(arg0, s32, 0x10) = 0;
        AF(arg0, s32, 0x18) = 0;
    } else {
        s32 flag;
        MoveOnGround(arg0);
        AF(arg0, s32, 0x10) = 0;
        AF(arg0, s32, 0x18) = 0;
        if (AF(arg0, s16, 6) >= 0xF2) goto reset;
        if (AF(arg0, s16, 6) < -0x101) goto reset;
        if (AF(arg0, s16, 0xE) >= -0x106) goto reset;
        flag = 0;
        if (AF(arg0, s16, 0xE) < -0x4AA) {
reset:
            AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
            AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
            AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
            flag = 1;
        }
        if (flag) {
            AF(arg0, s16, 2) = 0xC;
            AF(arg0, s16, 0x34) = 0;
            dir = 8;
            AF(arg0, s32, 0x10) = (g_PlayerPosX - AF(arg0, s32, 4)) / 32;
            AF(arg0, s32, 0x18) = (D_80126B64 - AF(arg0, s32, 0xC)) / 32;
            AF(arg0, s16, 0xDC) = 0;
            AF(arg0, s16, 0x102) = 0;
            AF(arg0, s16, 0xDE) = AF(arg0, s16, 0xA);
        } else {
            if (GroundDistSqToPlayer(arg0) <= 0x8FFF) {
                dir = 0xE;
                if (rand() & 1) {
                    AF(arg0, s16, 2) = 6;
                } else {
                    AF(arg0, s16, 2) = 8;
                }
                AF(arg0, s16, 0x34) = 0;
                if (GroundDistSqToPlayer(arg0) < 0x1000) {
                    dir = 0xE;
                    AF(arg0, s16, 2) = 0xB;
                    AF(arg0, s16, 0x34) = 0;
                }
            }
            if (AF(arg0, s16, 0xE0) == g_PlayerX && AF(arg0, s16, 0xE2) == D_80126B66) {
                if (++AF(arg0, s16, 0x102) >= 30) {
                    AF(arg0, s16, 2) = 0xC;
                    AF(arg0, s16, 0x34) = 0;
                    dir = 8;
                    AF(arg0, s32, 0x10) = (g_PlayerPosX - AF(arg0, s32, 4)) / 32;
                    AF(arg0, s32, 0x18) = (D_80126B64 - AF(arg0, s32, 0xC)) / 32;
                    AF(arg0, s16, 0xDC) = 0;
                    AF(arg0, s16, 0x102) = 0;
                    AF(arg0, s16, 0xDE) = AF(arg0, s16, 0xA);
                }
            } else {
                AF(arg0, s16, 0x102) = 0;
            }
            AF(arg0, s16, 0xE0) = g_PlayerX;
            AF(arg0, s16, 0xE2) = D_80126B66;
        }
    }
    }
    if (AF(arg0, s16, 0xFE) != dir) {
        AF(arg0, s16, 0xFE) = dir;
        SetScript(arg0, D_sc03_014_801904F0[dir]);
    }
}

void func_sc03_014_801863B8(u8 *o) {
    SV8 v;
    s32 i;
    u8 *p;

    MoveCollide(o);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(o, 4);
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 0x34) = 1;
            SetScript(o, &D_sc03_014_801E2CE8);
            PlaySoundId(0xA7E, 0);
        }
        break;
    case 1:
        if (AF(o, s32, 0x94) == 0xF) {
            AF(o, s16, 0x34) = 2;
            LocalToWorld(AF(o, u8 *, 0x20) + 0x34, &D_sc03_014_80190538, &v);
            for (i = -0x200; i < 0x300; i += 0x200) {
                p = (u8 *)SpawnActorArg(0x265, 1, o);
                if (p != 0) {
                    AF(p, s16, 0xFE) = AF(AF(o, u8 *, 0x20), s16, 0x12) + i;
                    AF(AF(p, u8 *, 0x20), s16, 0x14) = AF(p, s16, 0xFC) + 0x200;
                    AF(p, s16, 6) = v.x;
                    AF(p, s16, 0xA) = v.y;
                    AF(p, s16, 0xE) = v.z;
                }
            }
            PlaySoundId(0xA35, 0);
        }
        break;
    case 2:
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 2) = 1;
            SetScript(o, &D_sc03_014_801E2170);
        }
        break;
    }
}

void func_sc03_014_8018655C(u8 *o) {
    V4 p;
    V3 v;
    s32 w;
    s32 i;
    s32 j;
    s32 r;
    u8 *q;
    u8 *q2;

    if (--AF(o, s32, 0x1C) <= 0) {
        FreeActor();
        return;
    }
    p.x = g_PlayerPosX;
    p.y = D_80126B60 - 0x400000;
    p.z = D_80126B64;
    HeadingPitchTo(&v, o + 4, &p);
    w = v.x;
    AF(o, s16, 0xFC) += TurnStep(AF(o, s16, 0xFC), *(s16 *)&v, 10);
    AF(o, s16, 0xFE) += TurnStep(AF(o, s16, 0xFE), w >> 16, 10);
    AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(o, s16, 0xFC);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0xFE);
    AF(AF(o, u8 *, 0x20), s16, 0x14) = 0;
    UpdateModelYXZ(o);
    SetLocalVelocity(o, &D_sc03_014_801905C4);
    if (MoveCollide(o) != 0) {
        for (i = 0x600; i < 0xB00; i += 0x100) {
            q = (u8 *)SpawnActorArg(0x265, 2, o);
            if (q != 0) {
                r = rand() & 7;
                AF(q, s32, 0x10) = (-rsin(AF(o, s16, 0xFE) + i) * r) << 4;
                AF(q, s32, 0x18) = (-rcos(AF(o, s16, 0xFE) + i) * r) << 4;
            }
        }
        FreeActor(o);
    } else if (ActorSegmentDamagesPlayer(o, &D_sc03_014_801905D4, &D_sc03_014_801905DC, 0x20) == 1) {
        for (j = 0x600; j < 0xB00; j += 0x100) {
            q2 = (u8 *)SpawnActorArg(0x265, 2, o);
            if (q2 != 0) {
                r = rand() & 7;
                AF(q2, s32, 0x10) = (-rsin(AF(o, s16, 0xFE) + j) * r) << 4;
                AF(q2, s32, 0x18) = (-rcos(AF(o, s16, 0xFE) + j) * r) << 4;
            }
        }
        FreeActor(o);
    } else {
        if ((AF(o, s32, 0x1C) & 3) == 0) {
            SpawnActorArg(0x265, 2, o);
        }
        AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x14) = AF(o, s16, 0xFE) + 0x200;
    }
}

void func_sc03_014_801867F8(u8 *o) {
    SV8 v;

    if (AF(AF(o, u8 *, 0x20), s16, 0x18) <= 0x4000) {
        AF(AF(o, u8 *, 0x20), s16, 0x18) += 0x100;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) += 0x100;
    }
    v.x = (D_sc03_014_801907D0 * AF(AF(o, u8 *, 0x20), s16, 0x18)) >> 12;
    v.y = (D_sc03_014_801907D2 * AF(AF(o, u8 *, 0x20), s16, 0x18)) >> 12;
    v.z = (D_sc03_014_801907D4 * AF(AF(o, u8 *, 0x20), s16, 0x18)) >> 12;
    if (ActorSegmentDamagesPlayer(o, &D_sc03_014_801907C8, &v, 0x30) != 0) {
        g_PlayerHitKind[0] |= 0x4200;
    }
    v.x = (D_sc03_014_801907D8 * AF(AF(o, u8 *, 0x20), s16, 0x18)) >> 12;
    v.y = (D_sc03_014_801907DA * AF(AF(o, u8 *, 0x20), s16, 0x18)) >> 12;
    v.z = (D_sc03_014_801907DC * AF(AF(o, u8 *, 0x20), s16, 0x18)) >> 12;
    if (ActorSegmentDamagesPlayer(o, &D_sc03_014_801907C8, &v, 0x30) != 0) {
        g_PlayerHitKind[0] |= 0x4200;
    }
    v.x = (D_sc03_014_801907E0 * AF(AF(o, u8 *, 0x20), s16, 0x18)) >> 12;
    v.y = (D_sc03_014_801907E2 * AF(AF(o, u8 *, 0x20), s16, 0x18)) >> 12;
    v.z = (D_sc03_014_801907E4 * AF(AF(o, u8 *, 0x20), s16, 0x18)) >> 12;
    if (ActorSegmentDamagesPlayer(o, &D_sc03_014_801907C8, &v, 0x30) != 0) {
        g_PlayerHitKind[0] |= 0x4200;
    }
    if (--AF(o, s32, 0x1C) <= 0 || MoveCollide(o) != 0) {
        FreeActor(o);
    }
}

void func_sc03_014_80186A74(u8 *o) {
    SV8 v;
    u8 *p;

    MoveCollide(o);
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(o, 4);
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 0x34) = 1;
            SetScript(o, &D_sc03_014_801E2B50);
            PlaySoundId(0xA81, 0);
        }
        break;
    case 1:
        if (AF(o, s32, 0x94) == 0xF) {
            AF(o, s16, 0x34) = 2;
            LocalToWorld(AF(o, u8 *, 0x20) + 0x34, &D_sc03_014_80190540, &v);
            p = (u8 *)SpawnActorArg(0x265, 3, o);
            if (p != 0) {
                AF(AF(p, u8 *, 0x20), s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x12);
                AF(p, s32, 0x10) = -(rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 8);
                AF(p, s32, 0x18) = -(rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 8);
                AF(p, s16, 6) = v.x;
                AF(p, s16, 0xA) = v.y;
                AF(p, s16, 0xE) = v.z;
            }
            PlaySoundId(0xA36, 0);
        }
        break;
    case 2:
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 0xFC) = 0x1E;
            AF(o, s16, 2) = 9;
            SetScript(o, &D_sc03_014_801E2170);
            AF(o, s16, 0xAE) = 0x2900;
        }
        break;
    }
    SpawnActorArg(0x3DE, 0, o);
}

void func_sc03_014_80186C4C(u8 *arg0) {
    SV8 v;
    s32 q;
    s32 t;
    u8 *c;

    if (--AF(arg0, s32, 0x1C) <= 0) {
        FreeActor(arg0);
        return;
    }
    if (MoveCollide(arg0) & 0x8000) {
        FreeActor(arg0);
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x18) += 0x80;
    AF(AF(arg0, u8 *, 0x20), u16, 0x1A) += 0x80;
    AF(AF(arg0, u8 *, 0x20), u16, 0x1C) += 0x80;
    v.x = (D_sc03_014_80191810 * AF(AF(arg0, u8 *, 0x20), s16, 0x18)) >> 12;
    v.y = (D_sc03_014_80191812 * AF(AF(arg0, u8 *, 0x20), s16, 0x1A)) >> 12;
    v.z = (D_sc03_014_80191814 * AF(AF(arg0, u8 *, 0x20), s16, 0x1C)) >> 12;
    q = (s32)&D_sc03_014_80191808;
    if (ActorSegmentDamagesPlayer(arg0, q, &v, 0x30) != 0) {
        g_PlayerHitKind[0] |= 0x4000;
    }
    v.x = (D_sc03_014_80191818 * AF(AF(arg0, u8 *, 0x20), s16, 0x18)) >> 12;
    v.y = (D_sc03_014_8019181A * AF(AF(arg0, u8 *, 0x20), s16, 0x1A)) >> 12;
    v.z = (D_sc03_014_8019181C * AF(AF(arg0, u8 *, 0x20), s16, 0x1C)) >> 12;
    if (ActorSegmentDamagesPlayer(arg0, q, &v, 0x30) != 0) {
        g_PlayerHitKind[0] |= 0x4000;
    }
    v.x = (D_sc03_014_80191820 * AF(AF(arg0, u8 *, 0x20), s16, 0x18)) >> 12;
    v.y = (D_sc03_014_80191822 * AF(AF(arg0, u8 *, 0x20), s16, 0x1A)) >> 12;
    v.z = (D_sc03_014_80191824 * AF(AF(arg0, u8 *, 0x20), s16, 0x1C)) >> 12;
    if (ActorSegmentDamagesPlayer(arg0, q, &v, 0x30) != 0) {
        g_PlayerHitKind[0] |= 0x4000;
    }
    q = SpawnKind205(arg0, 0);
    if (q != 0) {
        AF(q, s32, 4) -= (rsin(AF(AF(arg0, u8 *, 0x20), s16, 0x12)) * AF(AF(arg0, u8 *, 0x20), s16, 0x18)) >> 3;
        t = rcos(AF(AF(arg0, u8 *, 0x20), s16, 0x12)) * AF(AF(arg0, u8 *, 0x20), s16, 0x1C);
        AF(q, s32, 0x48) += 0xFFFF4000;
        c = AF(q, u8 *, 0xCC);
        AF(q, s32, 0xC) -= t >> 3;
        AF(c, s16, 0x18) = 0x3000;
        AF(c, s16, 0x1A) = 0x3000;
    }
    if (AF(arg0, s32, 0x1C) & 1) {
        LoadImage(&D_sc03_014_80191828, &D_sc03_014_80190FE8);
        LoadImage(&D_sc03_014_80191830, &D_sc03_014_801917E8);
        if (q != 0) {
            AF(q, s32, 0x10) = rsin(AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x180) << 7;
            AF(q, s32, 0x18) = rcos(AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x180) << 7;
        }
    } else {
        LoadImage(&D_sc03_014_80191828, &D_sc03_014_801907E8);
        LoadImage(&D_sc03_014_80191830, &D_sc03_014_801917E8);
        if (q != 0) {
            AF(q, s32, 0x10) = rsin(AF(AF(arg0, u8 *, 0x20), s16, 0x12) - 0x180) << 7;
            AF(q, s32, 0x18) = rcos(AF(AF(arg0, u8 *, 0x20), s16, 0x12) - 0x180) << 7;
        }
    }
}

void func_sc03_014_80187090(u8 *o) {
    SV8 v;
    u8 *p;

    MoveCollide(o);
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(o, 4);
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 0x34) = 1;
            SetScript(o, &D_sc03_014_801E2910);
            PlaySoundId(0xA82, 0);
        }
        break;
    case 1:
        if (AF(o, s32, 0x94) == 0x28 || AF(o, s32, 0x94) == 0x2A || AF(o, s32, 0x94) == 0x2C || AF(o, s32, 0x94) == 0x2E) {
            if (AF(o, s32, 0x94) == 0x2E) {
                AF(o, s16, 0x34) = 2;
            }
            if (AF(o, s32, 0x94) == 0x28) {
                PlaySoundId(0xA37, 0);
            }
            LocalToWorld(AF(o, u8 *, 0x20) + 0x34, &D_sc03_014_80190548, &v);
            p = (u8 *)SpawnActorArg(0x265, 4, o);
            if (p != 0) {
                AF(AF(p, u8 *, 0x20), s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12);
                AF(p, s32, 0x10) = -(rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 8);
                AF(p, s32, 0x18) = -(rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 8);
                AF(p, s16, 6) = v.x;
                AF(p, s16, 0xA) = v.y;
                AF(p, s16, 0xE) = v.z;
                AF(AF(p, u8 *, 0x20), s16, 0x18) = 0x1000 - (((AF(o, s32, 0x94) - 0x28) << 12) >> 3);
                AF(AF(p, u8 *, 0x20), s16, 0x1A) = 0x1000 - (((AF(o, s32, 0x94) - 0x28) << 12) >> 3);
                AF(AF(p, u8 *, 0x20), s16, 0x1C) = 0x1000 - (((AF(o, s32, 0x94) - 0x28) << 12) >> 3);
            }
        }
        break;
    case 2:
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 0xFC) = 0x1E;
            AF(o, s16, 2) = 9;
            SetScript(o, &D_sc03_014_801E2170);
            AF(o, s16, 0xAE) = 0x2900;
        }
        break;
    }
    SpawnActorArg(0x3DE, 0, o);
}

void func_sc03_014_80187300(u8 *o) {
    u8 unused[8];

    MoveCollide(o);
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(o, 4);
        if (AF(o, u16, 0x72) & 0x4000) {
            AF(o, s16, 0x34) = 1;
            SetScript(o, &D_sc03_014_801E2B50);
        }
        break;
    case 1:
        if (AF(o, s32, 0x94) == 0xF) {
            PlaySoundId(0xA89, 0);
            AF(o, s16, 0x34) = 2;
            if (ActorSegmentDamagesPlayer(o, &D_sc03_014_80190550, &D_sc03_014_80190558, 0x18) == 1) {
                g_PlayerHitKind[0] = 4;
            }
            if (ActorSegmentDamagesPlayer(o, &D_sc03_014_80190550, &D_sc03_014_80190560, 0x18) == 1) {
                g_PlayerHitKind[0] = 4;
            }
            if (ActorSegmentDamagesPlayer(o, &D_sc03_014_80190550, &D_sc03_014_80190568, 0x18) == 1) {
                g_PlayerHitKind[0] = 4;
            }
        }
        break;
    case 2:
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc03_014_801E2170);
            AF(o, s16, 2) = 0xA;
            AF(o, s16, 0xFC) = 4;
            AF(o, s16, 0xAE) = -1;
        }
        break;
    }
    SpawnActorArg(0x3DE, 0, o);
}

void func_sc03_014_801874C0(u8 *arg0) {
    SV8 a;
    SV8 b;
    s32 r;
    s16 t;

    a.x = AF(arg0, s16, 6);
    a.y = AF(arg0, s16, 0xA);
    a.z = AF(arg0, s16, 0xE);
    AF(arg0, s32, 4) += AF(arg0, s32, 0x10);
    AF(arg0, s32, 0xC) += AF(arg0, s32, 0x18);
    if (AF(arg0, s16, 0xDC) < 0x400) {
        t = AF(arg0, s16, 0xDC) + 0x30;
    } else {
        t = AF(arg0, s16, 0xDC) + 0x50;
    }
    AF(arg0, s16, 0xDC) = t;
    AF(arg0, volatile s16, 0xA) = AF(arg0, s16, 0xDE) - (rsin(t) >> 4); /* MATCH-TRICK: volatile store keeps the 0xA store before the field 6 load (the original orders them so) */
    b.x = AF(arg0, volatile s16, 6); /* MATCH-TRICK: volatile load, read after the 0xA store as in the original */
    b.y = AF(arg0, s16, 0xA);
    b.z = AF(arg0, s16, 0xE);
    r = CollidePath(&a, &b, 1);
    AF(arg0, s16, 6) = b.x;
    if (r & 0x6000) {
        AF(arg0, s16, 0xA) = b.y;
    }
    AF(arg0, s16, 0xE) = b.z;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (rand() & 1) {
            AF(arg0, s32, 0x1C) = 0x12;
            AF(arg0, s16, 0x34) = 1;
            PlaySoundId(0xA80, 0);
        } else {
            AF(arg0, s32, 0x1C) = 0x12;
            AF(arg0, s16, 0x34) = 5;
            PlaySoundId(0xA7F, 0);
        }
        break;
    case 1:
        if (AF(arg0, u16, 0x72) & 0x4000) {
            SetScript(arg0, &D_sc03_014_801E2638);
        }
        if (--AF(arg0, s32, 0x1C) <= 0) {
            AF(arg0, s16, 0x34) = 2;
            SetScript(arg0, &D_sc03_014_801E2708);
        }
        break;
    case 2:
        if (AF(arg0, s32, 0x94) == 0xF) {
            PlaySoundId(0xA89, 0);
            if (ActorSegmentDamagesPlayer(arg0, &D_sc03_014_80190570, &D_sc03_014_80190578, 0x18) == 1) {
                g_PlayerHitKind[0] = 4;
            }
            if (ActorSegmentDamagesPlayer(arg0, &D_sc03_014_80190570, &D_sc03_014_80190580, 0x18) == 1) {
                g_PlayerHitKind[0] = 4;
            }
            if (ActorSegmentDamagesPlayer(arg0, &D_sc03_014_80190570, &D_sc03_014_80190588, 0x18) == 1) {
                g_PlayerHitKind[0] = 4;
            }
        }
        if (AF(arg0, u16, 0x72) & 0x4000) {
            SetScript(arg0, &D_sc03_014_801E25D8);
            AF(arg0, s16, 0x34) = 4;
        }
        break;
    case 3:
        if (AF(arg0, s32, 0x94) == 0xF) {
            PlaySoundId(0xA89, 0);
            if (ActorSegmentDamagesPlayer(arg0, &D_sc03_014_80190550, &D_sc03_014_80190558, 0x18) == 1) {
                g_PlayerHitKind[0] = 4;
            }
            if (ActorSegmentDamagesPlayer(arg0, &D_sc03_014_80190550, &D_sc03_014_80190560, 0x18) == 1) {
                g_PlayerHitKind[0] = 4;
            }
            if (ActorSegmentDamagesPlayer(arg0, &D_sc03_014_80190550, &D_sc03_014_80190568, 0x18) == 1) {
                g_PlayerHitKind[0] = 4;
            }
        }
        if (AF(arg0, u16, 0x72) & 0x4000) {
            SetScript(arg0, &D_sc03_014_801E25D8);
            AF(arg0, s16, 0x34) = 4;
        }
        break;
    case 4:
        if (r & 0x6000) {
            StopWithGravity(arg0);
            SetScript(arg0, &D_sc03_014_801E2170);
            AF(arg0, s16, 2) = 0xA;
            AF(arg0, s16, 0xFC) = 4;
            AF(arg0, s16, 0xAE) = -1;
        }
        break;
    case 5:
        if (AF(arg0, u16, 0x72) & 0x4000) {
            SetScript(arg0, &D_sc03_014_801E2638);
        }
        if (--AF(arg0, s32, 0x1C) <= 0) {
            AF(arg0, s16, 0x34) = 3;
            SetScript(arg0, &D_sc03_014_801E2660);
        }
        break;
    }
    SpawnActorArg(0x3DE, 0, arg0);
}

void func_sc03_014_80187884(u8 *o) {
    switch (AF(AF(o, u8 *, 0x64), s32, 0xF8)) {
    case 0:
        break;
    case 1:
        SetScript(o, &D_sc03_014_801E2DE0);
        AF(AF(o, u8 *, 0x64), s32, 0xF8) = 0;
        break;
    case 2:
        SetScript(o, &D_sc03_014_801E2B50);
        AF(AF(o, u8 *, 0x64), s32, 0xF8) = 0;
        break;
    case 3:
        SetScript(o, &D_sc03_014_801E2EE8);
        AF(AF(o, u8 *, 0x64), s32, 0xF8) = 0;
        break;
    case 4:
        SetScript(o, &D_sc03_014_801E2EA0);
        AF(o, s16, 0x98) = 0;
        AF(AF(o, u8 *, 0x64), s32, 0xF8) = 5;
        break;
    case 5:
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), 0, 4);
        break;
    case 6:
        SetScript(o, &D_sc03_014_801E2CE8);
        AF(AF(o, u8 *, 0x64), s32, 0xF8) = 7;
        break;
    case 7:
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), 0xA00, 2);
        break;
    case 8:
        InitModel(AF(o, u8 *, 0x20), &D_sc03_014_801D6D2C);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToPlayer(o);
        SetScript(o, &D_sc03_014_801E2B50);
        AF(AF(o, u8 *, 0x64), s32, 0xF8) = 0;
        AF(AF(o, u8 *, 0x6C), s16, 0x34)++;
        AF(o, s16, 0x104) = 1;
        AF(o, s16, 0x106) = 1;
        break;
    case 9:
        break;
    case 10:
        AF(o, s16, 2) = 1;
        AF(AF(o, u8 *, 0x64), s32, 0xF8) = 0;
        func_sc03_014_80182BFC(o + 0x76, o + 0x76, 3, 0x96);
        break;
    }
    if (AF(o, s16, 0x104) != 0) {
        UpdateModelZYX(o);
        func_sc03_014_80185A0C(o);
        if (AF(o, s16, 0x106) != 0) {
            SpawnActorArg(0x3DE, 0, o);
        }
    }
    if (AF(o, u16, 0x72) & 0x4000) {
        AF(o, s16, 0x106) = 0;
        SetScript(o, &D_sc03_014_801E2170);
    }
}

void func_sc03_014_80187A98(u8 *o) {
    u8 *s;
    u8 *m;

    switch (AF(o, u16, 0x34)) {
    case 0:
        m = AF(o, u8 *, 0x64);
        s = (u8 *)0xFF000058;
        s += AF(AF(m, u8 *, 0x20), s32, 0x20);
        AF(o, s16, 6) = AF(m, s16, 6) + AF(s, s8, 3);
        AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x64), s16, 0xA) + AF(s, s8, 4);
        AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x64), s16, 0xE) + AF(s, s8, 5);
        AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x10) - AF(s, s16, 6);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        AF(AF(o, u8 *, 0x20), s16, 0x14) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x14) - 0x280;
        AF(o, s16, 6) += (rsin(AF(AF(o, u8 *, 0x20), s16, 0x12) + (s[1] + ((s[0] & 0xF) << 8))) << 4) >> 12;
        AF(o, s16, 0xE) += (rcos(AF(AF(o, u8 *, 0x20), s16, 0x12) + (s[1] + ((s[0] & 0xF) << 8))) << 4) >> 12;
        UpdateModelYXZ(o);
        break;
    case 1:
        AF(o, s16, 0x16) = -4;
        AF(o, s16, 0x12) = 0x10;
        AF(o, s16, 0x1A) = -6;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x400;
        AF(o, s16, 0x34) = 2;
        break;
    case 2:
        if (MoveCollide(o)) {
            FreeActor(o);
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x14) += 0x300;
            UpdateModelYXZ(o);
        }
        break;
    }
}

void func_sc03_014_80187CA8(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if ((AF(arg0, s16, 0x70) == 0) && (D_sc03_014_801EAC80 != 0)) {
        temp_v0 = (AF(arg0, u16, 0x100) + 1) & 7;
        AF(arg0, u16, 0x100) = temp_v0;
        LoadImage((s32) &D_sc03_014_801906F8, D_sc03_014_80190700[temp_v0]);
    }
    D_sc03_014_80191848[AF(arg0, u16, 2)](arg0);
    if (AF(arg0, s16, 0x70) == 0) {
        temp_v0_2 = AF(arg0, u16, 2);
        if ((temp_v0_2 != 0) && (temp_v0_2 < 0xDU)) {
            UpdateModelZYX((s32) arg0);
            func_sc03_014_80185A0C((s32) arg0);
        }
    }
}

void func_sc03_014_80187D80(u8 *arg0) {
    D_sc03_014_80191890[AF(arg0, u16, 2)]();
}

void func_sc03_014_80187DBC(u8 *o) {
    AF(o, s16, 0xDC) = D_sc03_014_801EAC70.x;
    AF(o, s16, 0xDE) = D_sc03_014_801EAC70.y;
    AF(o, s16, 0xE0) = D_sc03_014_801EAC70.z;
    AF(o, s16, 0xE4) = D_sc03_014_801EAC78.x;
    AF(o, s16, 0xE6) = D_sc03_014_801EAC78.y;
    AF(o, s16, 0xE8) = D_sc03_014_801EAC78.z;
    AF(o, s16, 2) += 2;
}

void func_sc03_014_80187E28(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_014_80187E3C(u8 *arg0) {
    AF(arg0, s16, 0xFC) = D_sc03_014_801EAC70.x;
    AF(arg0, s16, 0xFE) = D_sc03_014_801EAC70.y;
    AF(arg0, s16, 0x100) = D_sc03_014_801EAC70.z;
    AF(arg0, s16, 0x104) = D_sc03_014_801EAC78.x;
    AF(arg0, s16, 0x106) = D_sc03_014_801EAC78.y;
    AF(arg0, s16, 0x108) = D_sc03_014_801EAC78.z;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, s16, 2)++;
}

void func_sc03_014_80187EA8(s32 arg0) {
    func_sc03_014_80187EE8();
    if (TickTimer(arg0) != 0) {
        FreeActor(arg0);
    }
}

void func_sc03_014_80187EE8(u8 *o) {
    QuadArg q;
    s32 flag[2];
    s32 otz;
    s16 a;
    s16 b;
    WorkHead *w;

    w = &D_800AF630;
    a = AF(o, s32, 0x1C) * 15;
    b = a >> 1;
    q.c[0].r = q.c[1].r = q.c[0].b = q.c[1].b = a;
    q.c[0].g = q.c[1].g = b;
    a -= 0x10;
    if (a < 0) {
        a = 0;
    }
    b -= 0x10;
    if (b < 0) {
        b = 0;
    }
    q.c[2].r = q.c[3].r = q.c[2].b = q.c[3].b = a;
    q.c[2].g = q.c[3].g = b;
    q.code = 0x50000000;
    gte_SetRotMatrix(&w->wsm);
    gte_SetTransMatrix(&w->wsm);
    gte_ldv3(o + 0xFC, o + 0x104, o + 0xDC);
    gte_rtpt();
    gte_stflg(&flag[0]);
    gte_stsxy3(&q.p[0], &q.p[1], &q.p[2]);
    gte_ldv0(o + 0xE4);
    gte_rtps();
    gte_stflg(&flag[1]);
    flag[0] |= flag[1];
    gte_stsxy(&q.p[3]);
    gte_avsz4();
    gte_stotz(&otz);
    if (otz > 0 && flag[0] >= 0 && (u32)(g_WorldOtOrg[D_800B9A02[0]].ot + otz) <= (u32)&g_PadLostFrames && (flag[0] & ~0x1000) == 0) {
        q.p[0].z = otz;
        DrawPrimG4Screen(&q);
    }
}

void func_sc03_014_801880F8(StageActor *arg0) {
    SetReactionStep(arg0, 0x11);
}

void func_sc03_014_80188118(StageActor *arg0, s32 arg1, s32 arg2) {
    arg0->hitState = 0xA800;
    arg0->state = 1;
    SetScript((s32) arg0, (s32) &D_sc03_014_801E2170, arg2);
    arg0->reactMask = (s32) ((s32)arg0->reactMask & ~1);
}

void func_sc03_014_80188168(StageActor *arg0, s32 arg1, s32 arg2) {
    arg0->react = 0;
    arg0->hitState = 0;
    arg0->state = 0x11;
    SetScript((s32) arg0, (s32) &D_sc03_014_80190468, arg2);
    AF(arg0, s16, 0xAE) = -1;
    PlaySoundId(0xA87, 0);
    GainStat0FromActor((s32) arg0);
    func_sc03_014_80182D5C();
}

void func_sc03_014_801881CC(StageActor *o) {
    o->react = 1;
    o->reactMask |= 1;
    TakeDamageAndRecoil(o);
    AF(o, s16, 0xAE) = -1;
    if (o->hp <= 0) {
        SetReactionStep(o, 0xC);
        o->hp = 0;
        func_sc03_014_80182D04((s32)((u8 *)o + 0x76), (s32)&D_sc03_014_80190490, 0x96);
    } else {
        func_sc03_014_80182D04((s32)((u8 *)o + 0x76), (s32)&D_sc03_014_80190490, 0x96);
        if (PlayParamScript(o, 4) != 0) {
            o->reactMode = 0;
        }
        PlaySoundId((rand() & 1) ? 0xA85 : 0xA86, 0);
    }
}

void func_sc03_014_80188290(StageActor *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s2;

    var_s2 = 0x600;
    do {
        temp_v0 = SpawnActorArg(0x265, 2, arg0);
        if (temp_v0 != 0) {
            temp_s0 = rand() & 7;
            AF(temp_v0, s32, 0x10) = (s32) (-rsin(arg0->workFE + var_s2) * temp_s0 * 0x10);
            AF(temp_v0, s32, 0x18) = (s32) (-rcos(arg0->workFE + var_s2) * temp_s0 * 0x10);
        }
        var_s2 += 0x100;
    } while (var_s2 < 0xB00);
    FreeActor(arg0);
}

void func_sc03_014_80188350(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 <= 0) {
        D_sc03_014_801EAC80 -= 1;
        FreeActor((s32) arg0);
        return;
    }
    MoveObject((s32) arg0);
}

void func_sc03_014_801883AC(s32 arg0) {
    u16 temp_v0;

    MoveCollide(arg0);
    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, u16, 0xFC) = 4U;
        AF(arg0, s16, 0xAE) = -1;
    }
}

void func_sc03_014_80188404(u8 *o) {
    MoveCollide(o);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(o, 4);
    if (--AF(o, s16, 0xFC) == 0) {
        AF(o, s16, 2) = 1;
    }
}

void func_sc03_014_80188470(void) {
}

void func_sc03_014_80188478(u8 *o) {
    s32 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        if (DistSqToPlayer(o) > 0x4000) {
            if (AF(o, s16, 0xFC) == 0) {
                SetScript(o, &D_sc03_014_801E7BB8);
                AF(o, s16, 0xFC)++;
            }
            AF(o, s32, 0x10) = -(rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 7);
            AF(o, s32, 0x18) = -(rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 7);
        } else {
            AF(o, s16, 0xFC) = 0;
            AF(o, s32, 0x10) = 0;
            AF(o, s32, 0x18) = 0;
        }
        r = MoveCollide(o);
        if ((r & 0x8000) && (r & 0x6000)) {
            AF(o, s16, 0x16) = -0x14;
        }
        break;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(o, 4);
}

void func_sc03_014_8018858C(StageActor *arg0) {
    s32 v;

    if (arg0->unk84 != 0) {
        if (func_sc03_014_80184028() == 0x18) {
            arg0->unk84 = 0;
        }
    } else if (func_sc03_014_80184028() == 0xF) {
        AF(arg0, s16, 0x84) = 1;
        v = -D_80126B66 >> 3;
        if (v < 0) {
            v = 0;
        }
        if (v >= 0x80) {
            v = 0x7F;
        }
        PlaySoundId(0xBAB, (u16)(v | 0x1000));
    }
}

void func_sc03_014_80188634(StageActor *arg0) {
    D_sc03_014_801918B0[arg0->state]();
}

void func_sc03_014_80188670(StageActor *o) {
    ModelObj *m;
    u8 *c;
    u8 unused[0x20];

    m = (u8 *)AllocActorModel();
    o->model = m;
    if (m == 0) {
        RejectSpawn(o);
        return;
    }
    if (o->param == 0) {
        InitModel(m, &D_sc03_014_801E450C);
        o->model->rot.vy = 0;
        c = (u8 *)AllocActorSprite();
        o->ext0 = c;
        if (c == 0) {
            RejectSpawn(o);
            return;
        }
        InitSpriteKind2(c, &D_sc03_014_801918BC, 0x2F0, 0x138);
        func_sc03_014_80188F80(o);
        AF(c, s16, 0x18) = 0x2400;
        AF(c, s16, 0x1A) = 0x1C00;
        AF(c, s16, 0x12) = o->model->rot.vy;
        AF(c, s32, 4) |= 0x51000000;
        AF(c, u8, 0x27) = 0xED;
        StartSpriteAnim(c, &D_sc03_014_801EAC88, &D_sc03_014_801918C8);
        o->reactive = 1;
        o->params = &D_sc03_014_80191918;
        o->hitData = (s32)&D_sc03_014_801918F8 | 0x40000000;
        o->hitState = 0x8000;
        AF(o, s16, 0xAE) = -3;
        o->reactMask = 0;
        o->react = 0;
        o->reactOpts |= 2;
        o->workFE = o->pos[1].h.i;
        NextState(o);
    } else {
        func_8001CA1C(m, 0);
        o->model->scale.vx = 0x2C00;
        o->model->scale.vy = 0x3800;
        o->model->unk04 |= 0x71000000;
        o->vel[1] = 0xFFFE0000;
        o->vel[2] = 0xFFFD0000;
        o->unkFC = 0;
        SetScript(o, &D_sc03_014_801919F4);
        SetState(o, 9);
    }
}

void func_sc03_014_80188828(u8 *arg0) {
    s32 temp_v1;
    u16 v;

    temp_v1 = AF(arg0, s32, 0x1C);
    if (temp_v1 == 0x30) {
        ForceTintRow5();
    } else if (temp_v1 == 0x10) {
        func_sc03_014_801890F8(AF(arg0, s32, 0xD0));
    }
    if (AF(arg0, u16, 0x84) & 1) {
        AF(AF(arg0, u8 *, 0x64), u16, 6) -= 3;
        AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 8) -= 3;
        v = AF(arg0, u16, 6) - 3;
    } else {
        AF(AF(arg0, u8 *, 0x64), u16, 6) += 3;
        AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), u16, 8) += 3;
        v = AF(arg0, u16, 6) + 3;
    }
    AF(arg0, u16, 6) = v;
    ((u16 *) arg0)[0x42]++;
    if (D_sc03_014_801EAC90 == 0) {
        D_sc03_014_801EAC90 = func_sc03_014_801846E4();
    }
    if ((TickTimer((s32) arg0) != 0) && (D_sc03_014_801EAC90 != 0)) {
        func_sc03_014_80188A80((s32) arg0);
    } else if ((AF(arg0, s32, 0x1C) < 0x48) && !(AF(arg0, u16, 0x84) & 3)) {
        func_sc03_014_801889B4((s32) arg0);
    }
    IsEventDone((s32) arg0);
}

s32 func_sc03_014_801889B4(s32 arg0) {
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    do {
        temp_v0_2 = SpawnPropFrom(arg0, 0x22);
        if (temp_v0_2 != 0) {
            temp_v1 = (var_s0 + ((AF(arg0, u16, 0x84) & 4) * 3)) - 0x2A;
            AF(temp_v0_2, u16, 6) = (u16) (AF(temp_v0_2, u16, 6) - temp_v1);
            AF(temp_v0_2, u16, 0xA) = (u16) (AF(temp_v0_2, u16, 0xA) - 0x20);
            AF(temp_v0_2, u16, 0xE) = (u16) (AF(temp_v0_2, u16, 0xE) - 0x28);
            if (temp_v1 >= 0) {
                var_v0 = temp_v1 << 7;
            } else {
                var_v0 = -(temp_v1 << 7);
            }
            AF(temp_v0_2, s16, 0x34) = (s16) (var_v0 + 0x1000);
            AF(temp_v0_2, s32, 0x14) = 0xFFFE0000;
            AF(temp_v0_2, s32, 0x18) = 0xFFFD0000;
        }
        var_s0 += 0x18;
        temp_v0 = var_s0 < 0x49;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc03_014_80188A80(StageActor *o) {
    ModelObj *m = o->model;
    StageActor *q;
    u8 *p;

    func_8001CA1C(m, &D_sc03_014_80191928);
    o->pos[1].h.i -= 0xA0;
    o->pos[2].h.i -= 0x10;
    m->scale.vx = 0x2C00;
    m->scale.vy = 0x1C00;
    m->unk04 |= 0x1000000;
    AF(o->ext0, s16, 0) = 0;
    o->ext0 = SpawnShadow(o);
    o->vel[1] = 0xFFF80000;
    o->hitState = 0;
    o->timer = 8;
    SetState(o, 3);
    q = o->parent;
    q->model->unk04 |= 0x80000000;
    func_sc03_014_8018A31C(q);
    q->hitState = 0;
    SetState(q, 2);
    p = (u8 *)o->ext1;
    if (p != 0) {
        AF(p, s16, 0x2C) = 0;
        func_sc03_014_80189104(p);
    }
    func_sc03_014_8018AD5C();
    func_sc03_014_8018AD80((u8 *)o + 4);
    PlaySoundId(0x87B, 0);
}

s32 func_sc03_014_80188B94(StageActor *arg0) {
    s32 var_v0;

    arg0->model->scale.vx = 0x2C00;
    arg0->model->scale.vy = 0x3800;
    SetScript(arg0, (s32) &D_sc03_014_801919F4);
    arg0->unkFC = 0;
    arg0->timer = 0x10;
    var_v0 = SetState(arg0, 4);
    if ((s32)arg0->ext1 != 0) {
        var_v0 = func_sc03_014_80189160(arg0->ext1);
    }
    return var_v0;
}

s32 func_sc03_014_80188C0C(s32 arg0) {
    s32 var_v0;

    AF(arg0, s32, 0x1C) = 4;
    StopMotion(arg0);
    var_v0 = SetState(arg0, 5);
    if (AF(arg0, s32, 0xD0) != 0) {
        var_v0 = func_sc03_014_8018918C(AF(arg0, s32, 0xD0));
    }
    return var_v0;
}

s32 func_sc03_014_80188C60(StageActor *arg0) {
    AF(arg0, s32 *, 0x58) = &D_sc03_014_80191908;
    func_sc03_014_80188F18(arg0);
    return SetState(arg0, 6);
}

s32 func_sc03_014_80188CA0(u8 *arg0) {
    return AF(arg0, u16, 2) == 6;
}

void func_sc03_014_80188CB4(u8 *o) {
    FreeShadow(AF(o, s32, 0xCC));
    StopMotion(o);
    AF(o, s32, 0x14) = 0x80000;
    AF(o, s16, 6) = g_PlayerX;
    AF(o, s16, 0xE) = D_80126B66;
    AF(o, s16, 0xDC) = (s16)AF(AF(o, u8 *, 0x20), u16, 0x18) >> 3;
    AF(o, s16, 0xDE) = (s16)AF(AF(o, u8 *, 0x20), u16, 0x1A) >> 3;
    SetState(o, 7);
    if (AF(o, s32, 0xD0) != 0) {
        FreeProp(AF(o, s32, 0xD0));
    }
    PlaySoundId(0x87D, 0);
}

s32 func_sc03_014_80188D64(StageActor *arg0) {
    return SetState(arg0, 8);
}

void func_sc03_014_80188D84(s32 arg0) {
    func_sc03_014_8018473C(arg0);
}

void func_sc03_014_80188DA4(void) {
    ResumeClockTint();
}

void func_sc03_014_80188DC4(StageActor *arg0) {
    D_sc03_014_80191B84[arg0->state]();
}

void func_sc03_014_80188E00(StageActor *o) {
    u32 i;
    u8 *p;
    StageActor *q;
    s16 t;

    for (i = 0; i < 8; i++) {
        if (o->hitCode == D_sc03_014_80191BAC[i]) {
            q = o->parent;
            t = q->pos[0].h.i;
            D_sc03_014_801EAC90 = 0;
            q->pos[0].h.i = t + 1;
            o->timer = 0x50;
            o->unk84 = 0;
            o->pos[0].h.i++;
            SetState(o, 2);
            p = (u8 *)SpawnPropFrom(o, 0x57);
            o->ext1 = p;
            if (p != 0) {
                AF(p, s16, 6) = o->pos[0].h.i;
                AF(p, s16, 0xA) = o->pos[1].h.i;
                AF(p, s16, 0xE) = o->pos[2].h.i;
                AF(p, s16, 0x2C) = -0xA0;
                AF(p, u8 *, 0x34) = o;
            }
            StartEvent(o, &D_sc03_014_80191ABC);
            o->react = 0;
            o->hitState = 0;
            o->hitCode = 0;
            PlaySoundId(0x87A, 0);
            RequestBgmPack(0x72);
            return;
        }
    }
    o->hitCode = 0;
    PlaySoundId(0x426, 0);
}

s32 func_sc03_014_80188F18(s32 arg0) {
    AF(arg0, s32, 0x48) = 0x1400;
    AF(arg0, s32, 0x14) = 0;
    return 0x1400;
}

void func_sc03_014_80188F28(Mover *arg0) {
    s32 v;

    MoveObject(arg0);
    v = arg0->vel[1];
    if (v > 0x14000) {
        arg0->accel[1] = -0x1400;
    } else if (v < -0x14000) {
        arg0->accel[1] = 0x1400;
    }
}

void func_sc03_014_80188F80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) - 0xE4);
    AF(temp_v1, s16, 0xC) = (s16) (AF(arg0, u16, 0xE) - 8);
}

s32 func_sc03_014_80188FB4(StageActor *arg0, u8 *arg1) {
    SV8 a;
    SV8 b;

    a.x = AF(arg1, u16, 4);
    b.x = AF(arg1, u16, 6);
    a.y = b.y = AF(arg1, u16, 0xA);
    a.z = b.z = AF(arg1, u16, 0xC);
    if (func_sc03_014_80189050(arg0, (s32) &a, (s32) &b) == 0) {
        a.z = b.z = AF(arg1, u16, 0xE);
        return func_sc03_014_80189050(arg0, (s32) &a, (s32) &b) != 0;
    }
    return 1;
}

s32 func_sc03_014_80189050(StageActor *arg0, s32 arg1, s32 arg2) {
    SV8 a;
    SV8 b;

    FaceHelper(arg0, arg1, &a);
    FaceHelper(arg0, arg2, &b);
    return PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b);
}

void func_sc03_014_801890B8(s32 arg0) {
    func_sc03_014_8017BEBC(arg0);
}

void func_sc03_014_801890D8(s32 arg0) {
    func_sc03_014_8017BFA0(arg0);
}

void func_sc03_014_801890F8(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc03_014_80189104(s32 arg0) {
    AF(arg0, s16, 2) = 3;
}

void func_sc03_014_80189110()
{
    u8 *p = (u8 *)&D_sc03_014_801EAC94;
    if (*p < 0xF8) {
        *p += 4;
        D_sc03_014_801EAC95 += 8;
        D_sc03_014_801EAC96 += 8;
    }
}

s32 func_sc03_014_80189160(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
    return PlaySoundId(0x87C, 0);
}

s32 func_sc03_014_8018918C(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0;
}

void func_sc03_014_8018919C(u8 *arg0) {
    func_sc03_014_801891E8();
    D_sc03_014_80191BD4[AF(arg0, u16, 2)](arg0);
}

void func_sc03_014_801891E8(s32 arg0) {
    CopyPropPos(arg0, AF(arg0, s32, 0x34));
    AF(arg0, u16, 0xA) += AF(arg0, u16, 0x2C);
    PushAlongView16(arg0 + 4, arg0 + 4, -0x180);
}

void func_sc03_014_80189238(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if ((temp_v0 == 0) || (GetFlag(0x18) & 0xFF) || (InitModel(arg0->model, (s32) &D_sc03_014_801E3F20), (SpawnActor(0x2B4, arg0) == 0))) {
        RejectSpawn(arg0);
        return;
    }
    arg0->hitData = (s32) ((s32) &D_sc03_014_801918A0 | 0x40000000);
    arg0->hitState = 0x800;
    NextState(arg0);
}

void func_sc03_014_801892D4(void) {
}

void func_sc03_014_801892DC(void) {
}

void func_sc03_014_801892E4(StageActor *arg0) {
    StepSpriteAnim(arg0->ext0, (s32) &D_sc03_014_801EAC88);
}

void func_sc03_014_80189310(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0x34) == 0) {
        MoveObject((s32) arg0);
        if (TickTimer((s32) arg0) != 0) {
            AF(arg0, s16, 0x100) = 0x80;
            AF(arg0, s32, 0x1C) = 0x30;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            func_sc03_014_80188F18((s32) arg0);
        }
    } else if (TickTimer((s32) arg0, arg1) != 0) {
        func_sc03_014_80188B94((s32) arg0);
    } else {
        func_sc03_014_80188F28((s32) arg0);
    }
    IsEventDone((s32) arg0);
    func_sc03_014_8018B128();
}

void func_sc03_014_801893BC(s32 arg0) {
    if ((TickTimer(arg0) == 0) && !(AF(arg0, s32, 0x1C) & 3)) {
        SpawnActorArg(0x2B4, 1, arg0);
    }
    if (AF(arg0, s16, 0x98) == 0) {
        func_sc03_014_80188C0C(arg0);
    }
    IsEventDone(arg0);
}

void func_sc03_014_8018942C(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (TickTimer((s32) arg0, arg1) != 0) {
            AF(arg0, s32, 0x14) = 0x10000;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else if (AF(arg0, s16, 0xA) < (AF(arg0, s16, 0xFE) - 0xA0)) {
        MoveObject((s32) arg0);
    } else {
        func_sc03_014_80188C60((s32) arg0);
    }
    IsEventDone((s32) arg0);
}

void func_sc03_014_801894BC(StageActor *arg0, s32 arg1) {
    IsEventDone(arg0, arg1);
    func_sc03_014_80188F28(arg0);
    if (func_sc03_014_80188FB4(arg0, (s32) &D_sc03_014_80191908) != 0) {
        func_sc03_014_80188CB4(arg0);
    }
}

void func_sc03_014_8018950C(u8 *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    if (AF(AF(arg0, void *, 0x20), s16, 0x18) > 0) {
        MoveObject((s32) arg0);
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s16, 0x18) = (s16) ((u16) AF(temp_a0, s16, 0x18) - AF(arg0, u16, 0xDC));
        temp_a0_2 = AF(arg0, void *, 0x20);
        AF(temp_a0_2, u16, 0x1A) = (u16) (AF(temp_a0_2, u16, 0x1A) - AF(arg0, u16, 0xDE));
        temp_a0_3 = AF(arg0, void *, 0x20);
        if (AF(temp_a0_3, s16, 0x18) == 0) {
            AF(temp_a0_3, s32, 4) = (s32) (AF(temp_a0_3, s32, 4) | 0x80000000);
        }
    } else {
        func_sc03_014_80188D64((s32) arg0);
    }
    IsEventDone((s32) arg0);
}

void func_sc03_014_801895BC(StageActor *arg0, s32 arg1) {
    if ((arg0->stateCount == 0) && (IsEventDone((s32) arg0, arg1) != 0) && (D_sc03_014_801EAFC8 == 0)) {
        EndEvent((s32) arg0);
        arg0->stateCount = (u16) (arg0->stateCount + 1);
        SetProgress(0x2D0);
    }
}

void func_sc03_014_80189630(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 1);
    MoveObject((s32) arg0);
    if (AF(arg0, s16, 0x98) == 0) {
        FreeActor((s32) arg0);
    }
}

void func_sc03_014_80189680(u8 *arg0) {
    s32 pad[8];

    func_8001CD9C(AF(arg0, s32, 0x20), &D_sc03_014_801EAC94);
    SetShapeCircle(&D_sc03_014_801EAC94, 0x80);
    *(CV4 *)&D_sc03_014_801EAC94 = D_sc03_014_801E94F4;
    D_sc03_014_801EAC98 = D_sc03_014_801E94F4;
    AF(AF(arg0, u8 *, 0x20), s16, 0x18) = 0x800;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x1000;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(arg0, s16, 2) = 1;
}

void func_sc03_014_8018973C(void) {
    if (AF(&D_sc03_014_801EAC94, u8, 0) < 0xC0) {
        AF(&D_sc03_014_801EAC94, u8, 0) += 4;
    }
    if (AF(&D_sc03_014_801EAC94, u8, 1) < 0x40) {
        AF(&D_sc03_014_801EAC94, u8, 1) += 4;
    }
    if (AF(&D_sc03_014_801EAC94, u8, 2) < 0x40) {
        AF(&D_sc03_014_801EAC94, u8, 2) += 4;
    }
}

void func_sc03_014_801897A4(s32 arg0) {
    func_sc03_014_80189110(arg0);
}

void func_sc03_014_801897C4(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a0, s16, 0x18);
    if (temp_v0 < 0x5000) {
        AF(temp_a0, s16, 0x18) = (s16) (temp_v0 + 0x800);
    }
    temp_v0_2 = AF(temp_a0, s16, 0x1A);
    if (temp_v0_2 < 0x5000) {
        AF(temp_a0, s16, 0x1A) = (s16) (temp_v0_2 + 0x800);
    }
    func_sc03_014_80189110();
}

void func_sc03_014_80189824(u8 *o) {
    u8 *p;
    u8 *c;

    p = AF(o, u8 *, 0x20);
    if (AF(p, s16, 0x18) > 0x800) {
        AF(p, s16, 0x18) -= 0x200;
    }
    if (AF(p, s16, 0x1A) > 0x800) {
        AF(p, s16, 0x1A) -= 0x200;
    }
    c = (u8 *) &D_sc03_014_801EAC94;
    if (*c > 0xC0) {
        *c -= 4;
        D_sc03_014_801EAC95 -= 8;
        D_sc03_014_801EAC96 -= 8;
    }
}

void func_sc03_014_801898BC(u8 *o) {
    u8 *p;
    s32 t;
    u8 v;

    p = AF(o, u8 *, 0x20);
    if (AF(p, s16, 0x18) > 0x800) {
        AF(p, s16, 0x18) -= 0x200;
    }
    if (AF(p, s16, 0x1A) > 0x800) {
        AF(p, s16, 0x1A) -= 0x200;
    }
    t = AF(o, s32, 0x1C) + 1;
    AF(o, s32, 0x1C) = t;
    if (t & 0x10) {
        v = ((t & 0xF) >> 1) + 9;
    } else {
        v = 0x10 - ((t & 0xF) >> 1);
    }
    D_sc03_014_801EAC94 = v * 12;
    D_sc03_014_801EAC95 = v * 4;
    D_sc03_014_801EAC96 = v * 4;
}

void func_sc03_014_80189970(StageActor *arg0) {
    D_sc03_014_80191C0C[arg0->state]();
}

s32 func_sc03_014_801899AC(u8 *arg0, s32 *t) {
    s32 k = AF(arg0, s32, 0xDC);
    s32 v;

    if (t[0] != k) {
        t += 2;
        do {
            v = t[0];
            if (v == 0) {
                return k;
            }
            t += 2;
        } while (v != k);
        t -= 2;
    }
    return t[1];
}

void func_sc03_014_801899F4(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    AF(arg0, s32 *, 0x58) = &D_sc03_014_80191BFC;
    arg0->hitState = 0x80;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc03_014_80189A60(StageActor *arg0) {
    if ((GetProgress() == 0x2DA) && !(GetFlag(0x11F) & 0xFF)) {
        SetFlag(0x11F, 1);
        arg0->message = func_sc03_014_801899AC(arg0, (s32) &D_sc03_014_80191BEC);
    }
}

s32 func_sc03_014_80189AC4(s32 a) {
    if (GetFlag(0x18) & 0xFF) {
        return 0x73;
    }
    if (GetFlag(0xB9) & 0xFF) {
        return 0x71;
    }
    if (a >= 0x2C6) {
        return 0x50;
    }
    if (g_DayPeriod == 4) {
        return 0x3C;
    }
    return 0xA;
}

void func_sc03_014_80189B3C(StageActor *arg0) {
    D_sc03_014_801E3298[arg0->state]();
}

void func_sc03_014_80189B78(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc03_014_801E2F88) != 0) {
        if (!(GetFlag(D_sc03_014_801E2FF0[AF(arg0->message, u16, 0xA)]) & 0xFF)) {
            arg0->ext0 = SpawnTalkMarker(arg0, (s32) &func_sc03_014_8018A224);
        } else {
            arg0->param = (u16) ((u16)arg0->param | 0x4000);
        }
        temp_v0 = SpawnActorArg(0x8F, (s32) (s16) (u16)arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc03_014_8018B898);
        arg0->state = 1;
    }
}

void func_sc03_014_80189C4C(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc03_014_80189C74(void) {
}

void func_sc03_014_80189C7C(StageActor *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0->message;
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (GetFlag(0x1D) & 0xFF) {
            D_sc03_014_801E31D4 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc03_014_801E3138[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc03_014_801E31C0 = 0;
            SetFlag(D_sc03_014_801E3138[AF(temp_s0, u16, 0xC)], 1);
            D_sc03_014_801E31BC = 2;
        } else {
            D_sc03_014_801E31D4 = AF(temp_s0, s32, 0);
            var_v0 = D_sc03_014_801E30B4[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc03_014_801E31BC = 0;
            D_sc03_014_801E31C0 = var_v0;
        }
        RunScript((s32) arg0, (s32) &D_sc03_014_801E31E8);
    } else {
        var_a1 = &D_sc03_014_801E3254;
        *var_a1 = AF(temp_s0, s32, 0);
        RunScript((s32) arg0, (s32) (var_a1 - 7));
    }
    arg0->state = 4;
    arg0->param = (u16) ((u16)arg0->param | 0x8000);
}

void func_sc03_014_80189DC8(StageActor *arg0) {
    void *temp_s2;

    temp_s2 = arg0->message;
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        if (GetFlag(D_sc03_014_801E2FF0[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc03_014_801E2FF0[AF(temp_s2, u16, 0xA)] == 0x54) {
                SetProgress(0x5A);
                SetFlag(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (GetFlag(0x1D) & 0xFF)) {
                UploadFlagImages(0);
            }
            if (func_sc03_014_80189FCC() == 1) {
                GiveItem(0x26);
            }
            arg0->param = (u16) ((u16)arg0->param & 0x8000);
            FreeActor(arg0->ext0);
        }
        arg0->state = 2;
    }
}

void func_sc03_014_80189EE8(StageActor *arg0) {
    arg0->state = 2;
    FreeActor(arg0->ext0);
}

void func_sc03_014_80189F14(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_014_80189F24(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc03_014_80189F34(u8 *arg0) {
    SetFlag(D_sc03_014_801E2FF0[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc03_014_80189F74(u8 *arg0) {
    AddMoney((s32) &g_Player, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc03_014_80189FA8(void) {
    return func_80174764() == 1;
}

s32 func_sc03_014_80189FCC(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(GetFlag(D_sc03_014_801E2FF0[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc03_014_8018A030(StageActor *arg0) {
    D_sc03_014_801E32C0[arg0->state]();
}

void func_sc03_014_8018A06C(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_014_801E2FBC) != 0) {
        arg0->unkFC = (u16) arg0->parent->id;
        if ((u16)arg0->param & 0x4000) {
            SetScript(arg0, (s32) &D_sc03_014_801E3980);
            arg0->hitState = 0;
        } else {
            SetScript(arg0, (s32) &D_sc03_014_801E3760);
        }
        arg0->state = 1;
    }
}

void func_sc03_014_8018A0F4(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->unkFC != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_014_801E3770);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_014_801E3878);
        arg0->hitState = 0x8C00;
    }
}

void func_sc03_014_8018A1B4(StageActor *arg0) {
    s32 f;

    if (arg0->animTimer == 0) {
        f = arg0->workFE;
        arg0->state = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc03_014_801E3980);
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_014_801E3760);
        }
        arg0->workFE = 0;
    }
}

s32 *func_sc03_014_8018A224(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    Mover *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) g_PlayerModel + 0x34);
    gte_SetTransMatrix((u8 *) g_PlayerModel + 0x34);
    RotTransSV(&D_sc03_014_801E32B0[0], &a, &f);
    RotTransSV(&D_sc03_014_801E32B0[1], &b, &f);
    if (PathHitsModel(p->model, p->hitData, &a, &b) != 0 && TargetInFront(p, 0x300) != 0) {
        p->state = 3;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc03_014_8018A31C(StageActor *arg0) {
    s32 i;

    for (i = 0; (s16)D_sc03_014_801E3990[i].x != 0; i++) {
        SpawnActorArg(0x10D, i, arg0);
    }
}

void func_sc03_014_8018A390(u8 *arg0) {
    WMtx m;
    UV4 v;
    s32 o;
    s32 t;
    s16 k;

    m = GsIDMATRIX;
    v = D_sc03_014_801E3990[AF(arg0, s16, 0x70)];
    t = AllocActorModel();
    o = t;
    AF(arg0, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(arg0);
        return;
    }
    k = v.pad;
    InitModel(o, D_sc03_014_801E3A18[k]);
    RotMatrixY(AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12), &m);
    ApplyMatrixSV(&m, &v, &v);
    AF(arg0, u16, 6) += v.x;
    AF(arg0, u16, 0xA) += v.y;
    AF(arg0, u16, 0xE) += v.z;
    StopWithGravity(arg0);
    AF(arg0, s16, 0x12) = (s16) v.x >> 3;
    AF(arg0, s16, 0x16) = (s16) v.y >> 3;
    AF(arg0, s16, 0x1A) = (s16) v.z >> 3;
    AF(arg0, s16, 0xFC) = (s16) ((rand() & 0x7FF) - 0x400) >> k;
    AF(arg0, s16, 0xFE) = (s16) ((rand() & 0x7FF) - 0x400) >> k;
    AF(arg0, s16, 0x100) = (s16) ((rand() & 0x7FF) - 0x400) >> k;
    NextState(arg0);
}

void func_sc03_014_8018A5B0(StageActor *arg0) {
    D_sc03_014_801E3A24[arg0->state]();
}

void func_sc03_014_8018A5EC(s32 arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    MoveObject(arg0);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFC));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + AF(arg0, u16, 0xFE));
    temp_a0_3 = AF(arg0, void *, 0x20);
    AF(temp_a0_3, u16, 0x14) = (u16) (AF(temp_a0_3, u16, 0x14) + AF(arg0, u16, 0x100));
    if (AF(AF(arg0, void *, 0x64), s16, 0xA) < AF(arg0, s16, 0xA)) {
        FreeActor(arg0);
    }
}

void func_sc03_014_8018A680(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_014_801EADEC;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

void func_sc03_014_8018A6A4(s32 arg0, s32 arg1, s32 arg2, u16 *arg3) {
    SV4 v;
    s32 i;
    s16 ang;

    func_sc03_014_8018A744(arg0, 0x1000, 0);
    v.x = arg3[0];
    v.z = arg3[1];
    v.pad = 1;
    for (i = 0, ang = 0; i < 0x10; i++, ang += 0x100) {
        v.y = ang;
        func_sc03_014_8018A860(i, (s32) &v, arg1, arg2);
    }
}

s32 func_sc03_014_8018A744(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc03_014_801EADE4 = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc03_014_801EADE8 = (s16) arg1;
    D_sc03_014_801EADEA = (s16) arg2;
    D_sc03_014_801EADE6 = temp_v0;
    return (s32) temp_v0;
}

void func_sc03_014_8018A774(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc03_014_801EADE4 = sp10[0];
    D_sc03_014_801EADE6 = sp10[1];
}

void func_sc03_014_8018A7EC(s32 arg0) {
    s16 *p = &D_sc03_014_801EADEA;
    *p += arg0;
}

void func_sc03_014_8018A808(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc03_014_8018A934();
    if (temp_v0 >= 0) {
        func_sc03_014_8018A860(temp_v0, arg0, arg1, arg2);
    }
}

void func_sc03_014_8018A860(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
    struct C8E8 { u8 r, g, b, cd; };
    struct E8E8 { u16 a; s16 y; s16 z; struct C8E8 c0; struct C8E8 c1; } *e;

    e = (struct E8E8 *)(&D_sc03_014_801EADEC + arg0 * 14);
    e->a = arg1[0];
    e->c0 = *(struct C8E8 *)arg2;
    e->c0.cd = 0;
    e->c1 = *(struct C8E8 *)arg3;
    e->c1.cd = 0;
    e->y = arg1[1] + (rand() & 0x3F) - 0x20;
    e->z = (arg1[2] * ((rand() & 0x7F0) + 0xC00)) >> 12;
    if (arg1[3] != 0) {
        e->c0.cd = 1;
        e->c1.cd = e->z;
        e->z = 0;
    }
}

s32 func_sc03_014_8018A934(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0xE) {
        if (*(u16 *)&((u8 *)&D_sc03_014_801EADEC)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc03_014_8018A970(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc03_014_801EADEC, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

void func_sc03_014_8018A9BC(void) {
    u8 *p;
    s32 i;
    s16 v;
    s16 w;

    for (p = &D_sc03_014_801EADEC, i = 0; i < 0x10; i++, p += 14) {
        if (AF(p, u16, 0) != 0) {
            func_sc03_014_8018AA98(i);
            switch (AF(p, u8, 9)) {
            case 1:
                v = AF(p, s16, 4);
                if (v < AF(p, u8, 13)) {
                    AF(p, s16, 4) = v + 8;
                } else {
                    AF(p, u8, 9) = 0;
                }
                break;
            case 2:
                w = AF(p, s16, 4);
                if (w == 0 || (w -= 0x10, AF(p, s16, 4) = w, w <= 0)) {
                    AF(p, u16, 0) = 0;
                }
                break;
            }
        }
    }
}

void func_sc03_014_8018AA98(s32 i) {
    WMtx m;
    SV4 v;
    SV4 o;
    V4 s;
    u8 *p;
    u8 *r;
    u16 cx;
    u16 cy;

    m = GsIDMATRIX;
    p = g_PrimNext;
    g_PrimNext = p + 0x1C;
    AF(p, u8, 3) = 6;
    AF(p, u8, 7) = 0x32;
    r = &D_sc03_014_801EADEC + i * 14;
    AF(p, u8, 4) = AF(r, u8, 6);
    AF(p, u8, 5) = AF(r, u8, 7);
    AF(p, u8, 6) = AF(r, u8, 8);
    AF(p, u8, 0xC) = AF(r, u8, 0xA);
    AF(p, u8, 0xD) = AF(r, u8, 0xB);
    AF(p, u8, 0xE) = AF(r, u8, 0xC);
    AF(p, u8, 0x14) = AF(r, u8, 0xA);
    AF(p, u8, 0x15) = AF(r, u8, 0xB);
    AF(p, u8, 0x16) = AF(r, u8, 0xC);
    cx = D_sc03_014_801EADE4;
    cy = D_sc03_014_801EADE6;
    RotMatrixZ(D_sc03_014_801EADEA, &m);
    s.x = s.y = s.z = D_sc03_014_801EADE8;
    ScaleMatrix(&m, &s);
    v.x = AF(r, u16, 0);
    v.y = v.z = 0;
    AF(p, u16, 8) = cx;
    AF(p, u16, 0xA) = cy;
    RotMatrixZ(AF(r, s16, 2) - (AF(r, s16, 4) >> 1), &m);
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x10) = cx + o.x;
    AF(p, u16, 0x12) = cy + o.y;
    RotMatrixZ(AF(r, s16, 4), &m);
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x18) = cx + o.x;
    AF(p, u16, 0x1A) = cy + o.y;
    ((PTag *)p)->addr = ((PTag *)&g_WorldOtOrg[D_800B9A02[0]].ot[16])->addr;
    ((PTag *)&g_WorldOtOrg[D_800B9A02[0]].ot[16])->addr = (u32)p;
    AddDrawModeAbr(&g_WorldOt[D_800B9A02[0]], 0x10, 1);
}

s32 func_sc03_014_8018AD5C(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_014_801EACE4;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc03_014_8018AD80(s32 arg0) {
    s32 sp10;

    PosToSVec(arg0, (s32) &sp10);
    return func_sc03_014_8018ADA8((s32) &sp10);
}

s32 func_sc03_014_8018ADA8(s32 arg0) {
    s16 sxy[2];
    CV4 col;
    s32 p;
    s32 flag;

    col = D_sc03_014_801E94F8;
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers(arg0, (s32) sxy, (s32) &p, (s32) &flag);
    return func_sc03_014_8018AE30((s32) sxy, (s32) &col, 0x10, 0x18);
}

s32 func_sc03_014_8018AE30(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc03_014_8018AE9C(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc03_014_8018AFD0(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc03_014_8018AE9C(u16 *p, u8 *c, s32 g) {
    if (p != 0) {
        D_sc03_014_801EACD8.a = p[0];
        D_sc03_014_801EACD8.b = p[1];
    } else {
        D_sc03_014_801EACD8.a = 0;
        D_sc03_014_801EACD8.b = 0;
    }
    D_sc03_014_801EACE0 = c[0];
    D_sc03_014_801EACE1 = c[1];
    D_sc03_014_801EACE2 = c[2];
    AF(&D_sc03_014_801EACD8, s32, 4) = g << 16;
}

void func_sc03_014_8018AF0C(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc03_014_801EACD8.a = sp10[0];
    D_sc03_014_801EACD8.b = sp10[1];
}

void func_sc03_014_8018AF84(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc03_014_8018B0EC();
    if (temp_v0 >= 0) {
        func_sc03_014_8018AFD0(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

void func_sc03_014_8018AFD0(s32 i, s32 ang, s32 spd) {
    u8 unused[0x10];
    Pt16 *p;
    s16 vx;
    s16 vz;
    u16 s;
    s32 m;
    s32 gg;

    p = &D_sc03_014_801EACD8.pts[i];
    s = spd;
    s += rand() % (s >> 2) - (s >> 3);
    m = s;
    p->ang = ang + (rand() & 0x3F) - 0x20;
    vx = (rcos(p->ang) * m) >> 12;
    vz = (rsin(p->ang) * m) >> 12;
    p->x = vx << 16;
    p->z = vz << 16;
    p->active = (rand() & 0xF) + 0x10;
    p->y = m << 6;
    gg = D_sc03_014_801EACD8.g;
    p->dy = gg << 6;
}

s32 func_sc03_014_8018B0EC(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0x10) {
        if (*(u16 *)&((u8 *)&D_sc03_014_801EACE4)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc03_014_8018B128(void) {
    Pt16 *p;
    s32 i;
    s16 g;
    s32 dx;
    s32 dz;

    g = D_sc03_014_801EACDE;
    p = (Pt16 *)&D_sc03_014_801EACE4;
    for (i = 0; i < 16; i++, p++) {
        if (p->active == 0) {
            continue;
        }
        if ((g > 0 && p->y >= 0x4001) || (g < 0 && p->y <= 0)) {
            p->active = 0;
            continue;
        }
        func_sc03_014_8018B23C(i);
        dx = (rcos(p->ang) * g) << 4;
        dz = (rsin(p->ang) * g) << 4;
        p->x += dx;
        p->z += dz;
        p->y += p->dy;
    }
}

void func_sc03_014_8018B23C(s32 i) {
    WMtx m;
    SV4 v;
    SV4 o;
    V4 s;
    u8 *p;
    Pt16 *r;
    u16 cx;
    u16 cz;

    p = g_PrimNext;
    m = GsIDMATRIX;
    g_PrimNext = p + 0x14;
    AF(p, u8, 3) = 4;
    AF(p, u8, 7) = 0x22;
    AF(p, u8, 4) = D_sc03_014_801EACE0;
    AF(p, u8, 5) = D_sc03_014_801EACE1;
    AF(p, u8, 6) = D_sc03_014_801EACE2;
    r = (Pt16 *)&D_sc03_014_801EACE4 + i;
    cx = AF(r, u16, 0xA) + D_sc03_014_801EACD8.a;
    cz = AF(r, u16, 0xE) + D_sc03_014_801EACD8.b;
    RotMatrixZ(r->ang, &m);
    s.x = r->y;
    s.y = r->y;
    s.z = r->y;
    ScaleMatrix(&m, &s);
    v.x = r->active;
    v.y = v.z = 0;
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 8) = cx + (o.x >> 1) * 3;
    AF(p, u16, 0xA) = cz + (o.y >> 1) * 3;
    AF(p, u16, 0xC) = cx - (o.x >> 1);
    AF(p, u16, 0xE) = cz - (o.y >> 1);
    AF(p, u16, 0x10) = cx + o.x;
    AF(p, u16, 0x12) = cz + o.y;
    if (r->active & 1) {
        RotMatrixZ(0x400, &m);
    } else {
        RotMatrixZ(-0x400, &m);
    }
    v.x = 2;
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x10) += o.x;
    AF(p, u16, 0x12) += o.y;
    ((PTag *)p)->addr = ((PTag *)&g_WorldOtOrg[D_800B9A02[0]].ot[16])->addr;
    ((PTag *)&g_WorldOtOrg[D_800B9A02[0]].ot[16])->addr = (u32)p;
    AddDrawModeAbr(&g_WorldOt[D_800B9A02[0]], 0x10, 1);
}
