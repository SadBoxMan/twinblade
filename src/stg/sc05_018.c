#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
extern s32 *func_sc05_018_80186614();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_018_8017BE9C(void) {
}

void func_sc05_018_8017BEA4(void) {
}

void func_sc05_018_8017BEAC(void) {
}

void func_sc05_018_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_018_8018A32C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_800D22E4();
extern void FreeEffect();
extern void (*D_sc05_018_8018A3C8[])();
extern void (*D_sc05_018_8018A3D0[])();
extern void (*D_sc05_018_8018A3D8[])();
extern u8 D_sc05_018_8018A334;
extern void InitSpriteKind2();
extern void InitSpriteKind3();
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void func_8001C810();
extern u8 D_sc05_018_80186C60;
extern u8 D_sc05_018_8018A3B0;
extern u8 D_sc05_018_8018A3B8;
extern void SyncModelPos();
extern void (*D_sc05_018_8018A6B4[])();
extern s32 IsEventDone();
extern s32 SpawnEffect();
extern u8 D_sc05_018_8018A468;
extern s32 MoveCollide();
extern void UpdateModelZYX();
extern void SetLocalVelocity();
extern void EndEvent();
extern void FreeActor();
extern u8 D_sc05_018_8018A6A4[];
extern void SetFlag();
extern s32 SpawnActorArg();
extern void StartEvent();
extern u8 g_Status;
extern u8 D_sc05_018_8018A684;
extern s32 IsOnScreen();
extern void FreeShadow();
extern void StartPlayerAction();
void func_sc05_018_8017EA50(Player *arg0);
extern void StartFade();
extern s32 FadeStep();
extern s32 g_PlayerFlags;
extern s16 D_801270C0;
void func_sc05_018_8017EAD8(Player *arg0);
extern void func_800D1EBC();
extern void func_800D1E28();
extern void PlaySoundId();
extern void ClearTimeChime();
extern s32 GetVar();
extern void func_800D0C48();
extern void (*D_sc05_018_8018A6D8[])();
extern void (*D_sc05_018_8018A6E0[])();
extern void (*D_sc05_018_8018A6EC[])();
extern void (*D_sc05_018_8018A704[])();
extern void (*D_sc05_018_8018A70C[])();
extern s32 D_80127050;
extern void (*D_sc05_018_8018A838[])();
extern void func_80175414();
extern void EndPlayerActionOf();
extern void ResumeHopAbility();
extern void (*D_sc05_018_8018A840[])();
extern void (*D_sc05_018_8018A860[])();
extern u8 D_sc05_018_8018A848;
extern void StartPlayerActionScript();
extern void (*D_sc05_018_8018A8C0[])();
extern void (*D_sc05_018_8018A8DC[])();
extern void (*D_sc05_018_8018A900[])();
extern u8 D_sc05_018_8018A8F0;
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
extern void func_sc05_018_8017FF9C();
extern void SnapCamera();
extern void (*D_sc05_018_8018A948[])();
extern void func_sc05_018_80180D04();
extern void (*D_sc05_018_8018AA00[])();
extern void (*D_sc05_018_8018AB24[])();
extern s32 func_sc05_018_80181648();
extern void func_sc05_018_80181520();
extern void (*D_sc05_018_8018AD74[])();
extern void (*D_sc05_018_8018AE9C[])();
extern void (*D_sc05_018_8018B09C[])();
extern void (*D_sc05_018_8018B0AC[])();
extern void (*D_sc05_018_8018B0C4[])();
extern void (*D_sc05_018_8018B180[])();
extern void (*D_sc05_018_8018B198[])();
extern void (*D_sc05_018_8018B1D0[])();
extern u8 D_sc05_018_801E6658;
extern void func_sc05_018_80183588();
extern void (*D_sc05_018_801A1068[])();
extern void (*D_sc05_018_801A1088[])();
extern void (*D_sc05_018_801A116C[])();
extern s32 func_sc05_018_80184590();
extern void func_sc05_018_80183B90();
s32 func_sc05_018_80184268(StageActor *arg0);
extern s32 func_sc05_018_80184344();
extern void func_sc05_018_801844A8();
extern u8 g_ClockHour;
extern u16 g_Day;
extern s32 D_800BA2BA[];
extern void (*D_sc05_018_801E022C[])();
extern void func_sc05_018_80184674();
extern u8 D_sc05_018_801E0234;
extern void func_sc05_018_8018469C();
extern void PlaceObject();
extern void HideModel();
extern s32 GetProgress();
extern void SetProgress();
extern s32 func_sc05_018_80184988();
extern void MoveObject();
extern s32 GetPlayerAction();
extern s32 TurnStep();
extern s32 HeadingToPoint();
extern s32 IsPlayerAsleep();
extern void SetForwardVelocity();
extern s32 SnapToGround();
extern s32 GroundDistSqTo();
extern void (*D_sc05_018_801E024C[])();
extern void ZeroFill();
extern s32 D_sc05_018_801E66FC;
extern u8 D_sc05_018_801E67F0;
extern void InitModel();
extern void SetModelCullBox();
extern u8 D_sc05_018_801E0244;
extern u8 D_sc05_018_801D2DB8;
extern void func_sc05_018_801852E8();
extern void func_sc05_018_80185280();
extern void (*D_sc05_018_801E0524[])();
extern void func_sc05_018_8018535C();
extern void func_sc05_018_801853BC();
extern void MapPartsTmd();
extern s16 D_sc05_018_801E0294[];
extern u8 D_sc05_018_801E0258[];
extern u8 D_sc05_018_801E0254[];
extern S12 D_sc05_018_801E027C;
extern u8 D_sc05_018_801E026C;
extern u8 D_sc05_018_801E0288;
extern void * func_sc05_018_80185650();
extern s32 func_sc05_018_801858D0();
extern s32 func_sc05_018_80184B50();
extern void PlaySoundAtActor();
extern s32 TickTimer();
extern s32 FindActorByKindArg();
extern void func_sc05_018_80185938();
extern void func_sc05_018_8018599C();
extern void (*D_sc05_018_801E0548[])();
extern u8 D_sc05_018_801E0538;
extern s32 func_sc05_018_80185C8C();
s32 func_sc05_018_80185C40(s32 arg0);
extern void (*D_sc05_018_801E3460[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc05_018_801E334C;
extern s32 * func_sc05_018_80185F68();
extern void RunScript();
extern s32 D_sc05_018_801E343C[];
extern void (*D_sc05_018_801E3528[])();
extern void (*D_sc05_018_801E353C[])();
extern u8 D_sc05_018_801E3530;
extern void InitSpriteKind1();
extern void FreeProp();
extern void (*D_sc05_018_801E3894[])();
extern u8 CallActionHandler;
extern void ResetScriptVM();
extern s32 func_sc05_018_801863A4();
extern void func_800D0F4C();
extern s32 D_sc05_018_801E6700;
s32 func_sc05_018_80186438(Mover *arg0);

void func_sc05_018_8017F7F0(void);

extern u8 D_sc05_018_8018A7D4;
extern void func_800D1724();
extern s32 func_sc05_018_801841A0();
extern u8 D_sc05_018_801E00B4;

void StartEntryScript488(void);
extern void func_sc05_018_8017F528();
extern void func_sc05_018_8017FED0();
extern void HidePlayerScene();
extern void SetPlayerFlag7E2();
extern void func_sc05_018_8017F818();
extern void BumpSub2Copy();
extern s32 func_sc05_018_8017F060();
extern void func_sc05_018_8017F990();
extern u8 D_sc05_018_8018A8A0;
extern void func_sc05_018_8017EFE0();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern void PlacePlayer();
extern void NextPlayerActionHandler();
extern u8 D_sc05_018_8018A8D4;
extern void func_sc05_018_8017F2BC();
extern void BlendCameraThen();
extern void func_sc05_018_8017FB8C();
extern u8 D_sc05_018_801E31B4;
extern s32 OpenMessage();
extern s32 GetMessageAnswer();
extern void CloseMessage();
extern void func_80142454();
extern void SetActionTimer();
extern u8 D_800D599C;
extern u8 D_sc05_018_801E3224;
extern s32 TickActionTimer();
extern void SetPlayerMotion();
extern void func_sc05_018_80181A0C();
extern u8 D_sc05_018_8018A918[];
extern u8 D_800AE6BD;
extern s32 D_80126984;
extern s32 D_80126988;
extern s32 D_8012698C;
extern s32 D_80126990;
extern s32 D_80126994;
extern s32 D_80126998;
extern s16 D_sc05_018_8018A938;
extern s16 D_sc05_018_8018A93A;
extern s16 D_sc05_018_8018A93C;
extern s16 D_sc05_018_8018A940;
extern s16 D_sc05_018_8018A942;
extern s16 D_sc05_018_8018A944;
extern s32 ClearCameraUpdate();
extern u8 g_CameraFocus;
extern void func_sc05_018_801800E0();
extern void func_sc05_018_80180220();
extern u8 D_801274E8;
extern u8 D_sc05_018_80187090;
extern u8 D_sc05_018_801870B4;
extern s16 D_sc05_018_8018A978;
extern s16 D_sc05_018_8018A97A;
extern u8 D_sc05_018_801B3DC4;
extern u8 D_sc05_018_801B44DC;
extern u8 D_sc05_018_801CB724;
extern s32 func_sc05_018_801812FC();
extern void StartCameraPan();
extern void func_sc05_018_801813E8();
extern void StartCameraShake();
extern void func_sc05_018_80181324();
extern s32 func_sc05_018_80183ABC();
extern s32 CameraPanDone();
extern void func_sc05_018_80180644();
extern void func_sc05_018_801808AC();
extern u16 D_sc05_018_801E6508;
extern void (*D_sc05_018_8018A97C[])();
extern u8 g_PlayerPosX;
extern u8 D_sc05_018_8018A98C;
extern u8 D_sc05_018_8018A994;
extern u8 D_sc05_018_8018A99C;
extern void func_sc05_018_80180ACC();
extern s32 SVecPosDistSq();
extern s32 HitPlayer();
extern u8 D_sc05_018_8018AA24;
extern s32 D_sc05_018_801E6650;
extern s32 FindActorByKind();
extern void ShowModel();
extern u8 D_sc05_018_8018AAE4;
extern s32 func_sc05_018_80184828();
extern s32 func_sc05_018_801845B4();
extern void func_sc05_018_8018208C();
extern void func_sc05_018_80182048();
extern u8 D_sc05_018_8018AD84;
extern u8 D_sc05_018_8018AE34;
extern u8 D_sc05_018_8018ADBC;
extern u8 D_sc05_018_8018AD94;
extern void * func_sc05_018_80181EEC();
extern u8 D_sc05_018_8018AEB0;
extern u8 D_sc05_018_8018AFB0;
extern u8 D_sc05_018_801DCCD0;
extern s32 * func_sc05_018_80182774();
extern s32 GetFlag();
extern u8 D_sc05_018_8018AFC0;
extern u8 D_sc05_018_8018B00C;
extern u8 D_sc05_018_8018B084;
extern void SetVar();
extern void NextState();
extern u8 D_800D387C;
extern void MoveProp();
extern u8 D_sc05_018_8018B0CC;
extern s32 SpawnProp();
extern u8 D_sc05_018_8018B174;
extern s32 D_sc05_018_801E6804;
extern void func_800D06CC();
extern void UpdateClockTint();
extern void func_800D06E8();
extern u8 D_sc05_018_801A1060;
extern u8 D_sc05_018_801A1070;
extern u16 D_sc05_018_801A1080[];
extern u8 D_sc05_018_801A1090;
extern s32 QueueImage();
extern u8 D_sc05_018_801A13E0;
extern u8 D_sc05_018_801A10B0;
extern u8 D_sc05_018_801A10E4;
extern u8 D_sc05_018_801DA908;
extern u8 D_sc05_018_801DAC58;
extern s32 func_sc05_018_801848B8();
extern u8 D_sc05_018_801A10C0;
extern u8 D_sc05_018_801A10D4;
extern u8 D_sc05_018_801DA3C0;
extern void * func_sc05_018_80183F28();
extern s32 func_sc05_018_80183C2C();

extern u8 D_sc05_018_801A1104;
extern u8 D_sc05_018_801DAC10;

extern u8 D_sc05_018_8018A8A8;
extern void func_800D0CA0();
extern u16 D_800B99DA;
extern u8 D_sc05_018_801CC330;
extern u8 D_sc05_018_8018AB38;
extern u8 D_sc05_018_801CC388;


extern u8 D_sc05_018_801A1164;

extern s16 D_801274EA;
extern s16 D_801274EC;

extern void func_sc05_018_80185494();
void func_sc05_018_80185A10(s32 arg0, s32 arg1);

extern u8 D_sc05_018_8018B188;
extern u8 D_sc05_018_8019F630;

extern void func_sc05_018_80186000();

extern void *g_ActiveCamera;
extern s32 func_sc05_018_8017FE44();
extern s32 D_sc05_018_8018ADA8[];
extern void *D_sc05_018_801E6814;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

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
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern u8 D_sc05_018_8018A320;
extern u8 *func_800D21C4();
extern s32 D_sc05_018_801E64F0;
extern s32 D_sc05_018_801E64FC;
extern s32 D_sc05_018_801E6504;
extern void func_sc05_018_8017CFE0();
extern void func_sc05_018_8017CF6C();
extern s32 TurnStepToward();
extern s32 TurnStepToTarget();
extern s32 MoveCollidePassable();
extern s32 StopMotion();
extern u8 D_sc05_018_8018A3E0;
extern s32 MoveOnGround();

extern s32 SpawnShadow();
extern u8 D_sc05_018_8018A578;
extern u8 D_sc05_018_8018A5AC;
extern s32 D_sc05_018_801E64F4;
extern s32 D_sc05_018_801E64F8;

extern u8 D_sc05_018_801E02E4;

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern s32 HeadingToTarget();
extern s32 DistSqToPlayer();
extern s32 D_sc05_018_8018A648;
extern void RestorePrevPos();
extern void func_sc05_018_8017D0BC();
extern s32 DistSq();
extern void StartEventKeepPlayer();
extern s32 TargetInFront();
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
extern u8 D_800AF630;
extern void SetState();
extern void func_sc05_018_80183644();



extern s32 func_sc05_018_80185904();


extern s32 func_8016F1C4();
extern u16 g_Actors;

typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_800D23D0();
extern u16 D_sc05_018_801E64E8;
extern u16 g_PlayerX;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern void WorldToActorLocal();
extern s32 func_8012CB64();


extern s16 D_sc05_018_801E0550;

extern s16 D_800B9A08;


typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
extern u8 D_sc05_018_801E62E8;
extern s32 SpawnFromDef();
extern s16 D_sc05_018_80186C50[];
extern s32 GetObjPadHeld();
extern s32 GetObjPadPressed();
extern s32 AngleDist();
extern void DrawPrimG4Screen();
extern s32 func_800D0F8C();
extern u8 D_sc05_018_801E37D4;
extern u8 D_sc05_018_801E37EC;


extern u8 D_sc05_018_801E374C;
extern u8 D_sc05_018_801E365C;
extern u8 D_sc05_018_801E3754[][8];
extern u8 D_sc05_018_801E3764[][16];

extern u8 *D_sc05_018_801E04DC[];
extern u8 D_sc05_018_801E04AC;
extern u8 D_sc05_018_801E04C4;

extern s16 D_sc05_018_8018A9FC;
extern s16 D_sc05_018_8018A9FE;
extern s16 D_sc05_018_801E664C;
extern s16 D_sc05_018_801E660C[];
extern u16 D_sc05_018_801E662C[];
extern u8 D_sc05_018_801E650C[];
extern s32 func_sc05_018_80181294();
extern void func_sc05_018_8018124C();
extern void func_sc05_018_801810B0();

extern s16 EaseAngleStep();
extern s32 EaseAngle();
extern s32 EaseValue();
extern void LocalToWorld();
extern s32 RotMatrixZYX();
extern s32 func_sc05_018_801855C4();
extern s32 UpdateScript();
extern u8 D_sc05_018_8019F638;
extern u8 D_sc05_018_8019F644;
extern u8 D_sc05_018_8018ADF4;

typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
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
extern s32 ProjectPointOtz();
extern void func_sc05_018_80182BF4();

extern s16 D_801269E4;
extern s16 D_801269E6;
extern u8 D_sc05_018_801AA594;
extern s32 D_sc05_018_801E6748;
extern u8 D_sc05_018_8018A960;
extern u8 D_sc05_018_801BBAB8;
extern u8 D_sc05_018_801C29C4;

extern s32 GetCameraHeading();
extern void PosToSVec();
extern u8 D_sc05_018_8018A880;
extern SV4 D_sc05_018_8018A898;
extern u8 *AllocPrim();
extern u16 GetClut();
extern u16 GetTPage();
extern void AddPrim();
extern OtRef g_WorldOtOrg[];

extern s32 D_sc05_018_8018A9C4;
extern s16 *D_sc05_018_8018A9EC[];
extern void SpawnDustBurst();
extern s32 SpawnPropFrom();
extern SV8 D_sc05_018_8018A9A4[];
extern void func_sc05_018_80180BE0();



extern s16 D_sc05_018_8018A920;
extern s16 D_sc05_018_8018A922;
extern s16 D_sc05_018_8018A924;
extern s16 D_sc05_018_8018A928;
extern s16 D_sc05_018_8018A92A;
extern s16 D_sc05_018_8018A92C;
extern void SVecToPos();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern void AngleToVec2();
extern s32 HeadingTo();
extern u8 D_sc05_018_8018A5E0[];
extern XY D_sc05_018_8018A600[];
extern u8 D_sc05_018_8018A4D0;
extern u8 D_sc05_018_801E4F60;
extern u8 D_sc05_018_801E4F68;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern s32 D_sc05_018_8018B0B4;
extern s32 D_sc05_018_8018B0B8;
extern s32 D_sc05_018_8018B0BC;
extern s32 D_sc05_018_8018B0C0;
extern void DrawPrimFT4Screen();
extern u8 D_sc05_018_8018B1A0;
extern u8 D_sc05_018_801A0DBC;
extern u8 D_sc05_018_801A0E38;
extern u8 D_sc05_018_801A0ED8;
typedef struct { s32 w[4]; } W16;
extern s16 D_sc05_018_801E3508[];

void func_sc05_018_8017BEBC(s32 arg0, SV *arg1, s32 arg2) {
    SV v;
    s16 i;
    s16 k;

    v.vx = arg1->vx;
    v.vy = arg1->vy - 20;
    v.vz = arg1->vz;
    LocalToWorld(AF(arg0, s32, 0x20) + 0x34, &v, &v);
    for (i = 0; i < 2; i++) {
        k = 1;
        if ((s16)arg2 == 0) {
            k = i;
        }
        SpawnEffect(0x25, arg0, v.vx, v.vy, v.vz, k, 0);
    }
}

void func_sc05_018_8017BF88(u8 *arg0) {
    SV4 v;
    WMtx m;
    u8 *q;
    u8 *o;
    WMtx *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc05_018_8018A320, 0x2A);
    if (o == 0) {
        FreeEffect(arg0);
        return;
    }
    AF(arg0, u8 *, 0x20) = o;
    AF(o, s16, 0x2A) = 0x1F0;
    pm = (WMtx *)(AF(q, u8 *, 0x20) + 0x34);
    r = rand();
    if (AF(arg0, s32, 0x2C) == 0) {
        k = 0x1000;
        v.x = (r & 0xFF) + 0x240;
        AF(o, s16, 0x28) = 0x240;
        AF(o, s16, 0x18) = 0x1000;
    } else {
        k = 0x200;
        v.x = (r & 0xFF) * 4 + 0xD00;
        AF(o, s16, 0x28) = 0x244;
        AF(o, s16, 0x18) = 0x1800;
    }
    v.y = ((u32)(r & 0x7F00) >> 5) + 0xE00;
    v.z = 0;
    RotMatrixYXZ(&v, &m);
    MulMatrix2(pm, &m);
    v.x = 0;
    v.y = 0;
    v.z = k;
    ApplyMatrixSV(&m, &v, &v);
    AF(arg0, s32, 0x10) = v.x << 8;
    AF(arg0, s32, 0x14) = v.y << 8;
    AF(arg0, s32, 0x18) = v.z << 8;
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 2)++;
}

void func_sc05_018_8017C0E4(u8 *arg0) {
    D_sc05_018_8018A32C[AF(arg0, u16, 2)]();
}

void func_sc05_018_8017C120(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        func_800D22E4();
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x1A000);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc05_018_8017C180(StageActor *arg0) {
    D_sc05_018_8018A3C8[arg0->state]();
}

void func_sc05_018_8017C1BC(u8 *arg0) {
    D_sc05_018_8018A3D0[AF(arg0, u16, 2)]();
}

void func_sc05_018_8017C1F8(StageActor *arg0) {
    D_sc05_018_8018A3D8[arg0->state]();
}

void func_sc05_018_8017C234(StageActor *o) {
    BF70S s;
    u16 *p;
    u8 *t;
    u8 *r;
    s16 i;
    u16 v;
    p = (u16 *)o->message;
    if (p != 0) {
        t = &D_sc05_018_801E62E8;
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

void func_sc05_018_8017C378(void) {
    FeSv v;
    u8 *p;

    p = g_ActiveCamera;
    v.x = AF(p, s32, 0x68) - AF(p, s32, 0x5C);
    v.y = AF(p, s32, 0x6C) - AF(p, s32, 0x60);
    v.z = AF(p, s32, 0x70) - AF(p, s32, 0x64);
    func_800D23D0((s32) &v);
    D_sc05_018_801E64E8 = v.y;
}

void func_sc05_018_8017C3E4(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    if (AF(arg0, s16, 0x2E) == 0) {
        InitSpriteKind2(temp_s0, (s32) &D_sc05_018_8018A334, 0x3C0, 0xA0);
    } else {
        InitSpriteKind3(temp_s0, (s32) &D_sc05_018_8018A334, 0x3C0, 0xA0);
    }
    AF(temp_s0, u8, 0x27) = 0xFC;
    AF(temp_s0, s16, 0x1A) = 0x3C00;
    AF(temp_s0, s16, 0x18) = 0x3C00;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x01000000);
    AF(temp_s0, s32, 0x34) = (s32) AF(arg0, s32, 0x30);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_018_8017C490(u8 *arg0) {
    FeSv v;
    void *p;

    p = AF(arg0, void *, 0x20);
    v.x = -0x20;
    v.z = 0;
    v.y = D_sc05_018_801E64E8;
    RotMatrixYXZ((s32) &v, AF(p, s32, 0x34));
}

void func_sc05_018_8017C4D0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc05_018_8018A3B0);
    SetScript(arg0, (s32) &D_sc05_018_80186C60);
    AF(arg0, s32, 0x20) = temp_v0;
    AF(temp_v0, s16, 0x1A) = 0x3C00;
    AF(temp_v0, s16, 0x18) = 0x3C00;
    AF(temp_v0, s16, 0x10) = -0x20;
    AF(temp_v0, s16, 0x12) = -1;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x8040);
    AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
    SyncModelPos(arg0);
    AF(arg0, s32 *, 0x58) = &D_sc05_018_8018A3B8;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

extern s16 D_sc05_018_801E01C8[];
extern s16 D_sc05_018_801E01FC[];
extern s32 D_sc05_018_801E00C8[][8];
extern s32 D_sc05_018_801E66F8[];

extern WMtx GsIDMATRIX;
extern s16 g_WallNormal;
extern s16 D_801152B4;
extern s32 TraceMap();
extern s32 ratan2();
extern void RotMatrixY();
extern void ApplyMatrixSV();
extern s32 CollidePath();

typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;


typedef void (*StepFn)(void);
extern void func_sc05_018_80185754(u8 *o);

void func_sc05_018_8017C594(StageActor *o) {
    u8 unused[8];
    ModelObj *m;
    s16 y;

    m = o->model;
    if (o->pos[1].h.i - (s16) D_80126B62 < 0x40) {
        o->hitState = 0x800;
    } else {
        o->hitState = 0x40;
    }
    y = D_sc05_018_801E64E8;
    if (m->rot.vy != y) {
        m->rot.vy = y;
        RotMatrixZYX((u8 *)o->model + 0x10, (u8 *)o->model + 0x34);
        m->flags |= 0x11;
    }
}

void func_sc05_018_8017C61C(StageActor *arg0) {
    u8 *g;

    g = &g_Status;
    if ((GetFlag(D_sc05_018_8018A6A4[arg0->param]) & 0xFF) || (arg0->param == 4 && (u32)GetProgress() < 200)) {
        RejectSpawn(arg0);
        return;
    }
    if (AF(g, u16, 0x1A) < 300 || AF(g, u16, 0x1A) >= 1320) {
        if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc05_018_8018A578) != 0) {
            arg0->hitState |= 0x10;
            SetScript(arg0, &D_sc05_018_8018A3E0);
            arg0->model->flags |= 0x10;
            D_sc05_018_801E64F0 = arg0->origin[0] << 16;
            D_sc05_018_801E64F4 = AF(arg0, s16, 0x8A) << 16;
            D_sc05_018_801E64F8 = AF(arg0, s16, 0x8C) << 16;
            arg0->ext0 = SpawnShadow(arg0);
            arg0->unkFC = 0;
            arg0->timer = 0x10;
            arg0->state++;
        }
    } else if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc05_018_8018A5AC) != 0) {
        AF(arg0, s16, 0xAE) = -4;
        arg0->ext0 = SpawnShadow(arg0);
        arg0->state = 7;
    }
}

void func_sc05_018_8017C7B8(u8 *arg0) {
    s32 r;
    s16 i;

    if (--AF(arg0, s32, 0x1C) == -1) {
        SetScript(arg0, &D_sc05_018_8018A468);
        if (++AF(arg0, s16, 0x10A) & 3) {
            if (AF(arg0, s16, 0x104) == 0) {
                r = rand();
                D_sc05_018_801E64FC = (AF(arg0, s16, 0x88) + (((r & 0x7F) << 3) - 0x200)) << 16;
                D_sc05_018_801E6504 = (AF(arg0, s16, 0x8C) + (((u32)(r & 0x7F00) >> 5) - 0x200)) << 16;
            } else {
                func_sc05_018_8017CFE0(arg0);
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0xC00;
            }
        } else {
            for (i = 0; i < 2; i++) {
                (&D_sc05_018_801E64FC)[i] = (&D_sc05_018_801E64F0)[i];
            }
        }
        if (AF(arg0, s16, 0x108) >= 0xD) {
            i = 2;
        } else {
            i = 8;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToward(arg0 + 4, &D_sc05_018_801E64FC, AF(AF(arg0, u8 *, 0x20), s16, 0x12), i);
        func_sc05_018_8017CF6C(arg0, (s16)(-3 - AF(arg0, s16, 0x104)), 0x50);
        if (AF(arg0, s16, 0x104) != 0) {
            SpawnEffect(2, arg0, 0, 0, 0, 2, 0);
        }
        AF(arg0, s16, 0x108) = 0;
        AF(arg0, s16, 2)++;
    } else if (AF(arg0, s16, 0x102) != 0) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, AF(arg0, s16, 0x102));
    }
}

void func_sc05_018_8017C9BC(s32 a) {
    s32 pad[4];
    s16 f;
    s16 go;
    s32 t;
    s32 k;
    s16 v;
    s32 *p;

    go = 0;
    f = MoveOnGround(a);
    if ((f & 0x6000) != 0x2000) {
        RestorePrevPos(a);
        func_sc05_018_8017D0BC(a);
        if (AF(a, s32, 0x1C) >= 9) {
            AF(a, s32, 0x1C) -= 8;
        }
    }
    if (f & 0x8000) {
        goto body;
    }
    if ((f & 0x6000) != 0x2000) {
body:
        if (AF(a, s16, 0x106) == 0) {
            AF(a, s16, 0x106) = 0x111;
        }
        if (AF(a, s32, 0x1C) >= 5) {
            AF(a, s32, 0x1C) -= 4;
        }
        AF(a, s16, 0x108)++;
    } else {
        AF(a, s16, 0x106) = 0;
    }
    if (--AF(a, s32, 0x1C) != 0) {
        if (!(AF(a, s32, 0x1C) & 3) && DistSq(a + 4, &D_sc05_018_801E64FC) < 0x900) {
            AF(a, s32, 0x1C) = 1;
        }
        v = AF(a, s16, 0x106);
        if (v == 0) {
            AF(AF(a, s32, 0x20), s16, 0x12) += TurnStepToward(a + 4, &D_sc05_018_801E64FC, AF(AF(a, s32, 0x20), s16, 0x12), 8);
            func_sc05_018_8017CF6C(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        } else {
            AF(AF(a, s32, 0x20), s16, 0x12) += v;
            func_sc05_018_8017CF6C(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        }
        if (AF(a, s16, 0x104) != 0) {
            if (AF(a, u32, 0x94) < 11) {
                AF(a, u32, 0x94)++;
            }
            if (!(AF(a, s32, 0x1C) & 7)) {
                go = 1;
            }
        }
    } else {
        StopMotion(a);
        SetScript(a, &D_sc05_018_8018A3E0);
        AF(a, s32, 0x1C) = 0x14 - AF(a, s16, 0x104) * 2;
        if (DistSqToPlayer(a) < 0x24000) {
            AF(a, s16, 0x102) = 10 - AF(a, s16, 0x104);
        } else {
            AF(a, s16, 0x102) = 0;
        }
        if (AF(a, s16, 0x104) != 0) {
            AF(a, s16, 0x104) -= 4;
            if (AF(a, s16, 0x104) < 0) {
                AF(a, s16, 0x104) = 0;
            }
        }
        AF(a, s16, 2) = 1;
    }
    if (AF(a, s16, 0xFC) != 0) {
        if (GetPlayerAction() != 0) {
            p = &D_sc05_018_8018A648;
            AF(a, s16, 0x10A) = 0;
            *p = AF(a, u16, 0x88) | (AF(a, s16, 0x8C) << 16);
            StartEventKeepPlayer(a, p - 7, p);
            AF(a, s16, 0x98) = 0;
            AF(a, s32, 0x1C) = 0x14;
            StopMotion(a);
            AF(a, s16, 2) = 3;
        }
        return;
    }
    if (AF(a, u16, 0x5E) != 0) {
        AF(AF(a, s32, 0x20), s16, 0x12) = AF(a, s16, 0x62);
        func_sc05_018_8017CF6C(a, -15, 0);
        func_sc05_018_8017CFE0(a);
        AF(a, u16, 0x5E) = 0;
        AF(a, s16, 0x104) = 10;
        go = 1;
    } else {
        t = DistSqToPlayer(a);
        if (t < 0x10000) {
            k = 0;
            if (t >= 0x4000) {
                k = (TargetInFront(a, 0x500) != 0) * 4;
            } else if (t >= 0x1000) {
                if (TargetInFront(a, 0x680) != 0) {
                    k = 7;
                }
            } else {
                k = 9;
            }
            if (k != 0) {
                func_sc05_018_8017CFE0(a);
                if (AF(a, s16, 0x104) == 0) {
                    AF(AF(a, s32, 0x20), s16, 0x12) = HeadingToTarget(a) - 0x800;
                    go = 1;
                }
                AF(a, s16, 0x104) = k;
                func_sc05_018_8017CF6C(a, -7 - k, 0);
            }
        }
    }
    if (go) {
        SpawnEffect(2, a, 0, 0, 0, 2, 0);
    }
}

void func_sc05_018_8017CDB0(u8 *arg0) {
    s32 f;

    IsEventDone(arg0);
    if (AF(arg0, s16, 0x108) < 0x10) {
        if (AF(arg0, s16, 0xFE) != 0) {
            f = MoveOnGround(arg0);
        } else {
            f = MoveCollidePassable(arg0);
        }
        if (f & 0x8000) {
            AF(arg0, s16, 0x108)++;
        }
        if (f & 0x2000) {
            AF(arg0, s16, 0xFE) = 1;
        } else {
            AF(arg0, s16, 0xFE) = 0;
        }
    } else {
        MoveObject(arg0);
    }
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        SpawnEffect(2, arg0, 0, 0, 0, 2, 0);
    }
    if (!(AF(arg0, s32, 0x1C) & 0xF)) {
        PlaySoundId(0x828, 0);
    }
    if (--AF(arg0, s32, 0x1C) == -1 || IsOnScreen(arg0, 0x8000A8) == 0) {
        AF(arg0, s16, 0x10A) = 1;
        StopMotion(arg0);
        SetScript(arg0, &D_sc05_018_8018A3E0);
        AF(arg0, s16, 0x104) = 0;
        AF(arg0, s16, 0x102) = 0xA;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
        FreeShadow(AF(arg0, u8 *, 0xCC));
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc05_018_8017CF30(StageActor *arg0) {
    D_sc05_018_8018A6B4[arg0->state]();
}

void func_sc05_018_8017CF6C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 w;

    AngleToVec2(&w, AF(AF(arg0, void *, 0x20), s16, 0x12), (s16)arg1 << 4);
    AF(arg0, s32, 0x10) = (s16)w << 12;
    AF(arg0, s32, 0x18) = (w >> 16) << 12;
    if ((s16)arg2 != 0) {
        AF(arg0, s32, 0x1C) = (s16)arg2;
    }
}

void func_sc05_018_8017CFE0(u8 *arg0) {
    s32 a;
    s32 i;
    s32 r;
    s32 x;
    s32 z;
    s32 pad[2];
    a = (HeadingTo(&g_PlayerPosX, &D_sc05_018_801E64F0) >> 7) & 0x18;
    i = D_sc05_018_8018A5E0[a | ((HeadingTo(arg0 + 4, &D_sc05_018_801E64F0) >> 9) & 7)];
    r = rand();
    x = AF(arg0, s16, 0x88) + D_sc05_018_8018A600[i].x - 0x100;
    D_sc05_018_801E64FC = (x + ((r & 0x7F) << 2)) << 16;
    z = AF(arg0, s16, 0x8C) + D_sc05_018_8018A600[i].y - 0x100;
    D_sc05_018_801E6504 = (z + ((u32)(r & 0x7F00) >> 6)) << 16;
}

void func_sc05_018_8017D0BC(u8 *o) {
    SV8 a;
    SV8 b;
    WMtx m;
    s32 e;
    s32 v;
    s32 d;
    s16 r;

    a.x = AF(o, s16, 6) + AF(o, s16, 0x12);
    a.y = AF(o, s16, 0xA) + 8;
    a.z = AF(o, s16, 0xE) + AF(o, s16, 0x1A);
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA) + 8;
    b.z = AF(o, s16, 0xE);
    if (TraceMap(1, &a, &b) & 0xC000) {
        e = ratan2(g_WallNormal, D_801152B4) & 0xFFF;

        v = ratan2(AF(o, s32, 0x10), AF(o, s32, 0x18)) & 0xFFF;
        d = v - e;
        d <<= 16;
        if (d < 0) {
            v += 0x480;
            r = e - v;
        } else {
            v -= 0x480;
            r = e - v;
        }

        a.x = AF(o, s16, 6);
        a.y = AF(o, s16, 0xA);
        a.z = AF(o, s16, 0xE);
        m = GsIDMATRIX;
        RotMatrixY(r, &m);

        b.x = AF(o, s16, 0x12);
        b.y = AF(o, s16, 0x16);
        b.z = AF(o, s16, 0x1A);
        ApplyMatrixSV(&m, &b, &b);

        b.x = AF(o, s16, 6) + (b.x >> 1);
        b.y = AF(o, s16, 0xA) + (b.y >> 1);
        d = b.z >> 1;
        b.z = AF(o, s16, 0xE) + d;

        if (CollidePath(&a, &b, 0) & 0x2000) {
            AF(o, s16, 6) = b.x;
            AF(o, s16, 0xA) = b.y;
            AF(o, s16, 0xE) = b.z;
        }
    }
}

void func_sc05_018_8017D2D0(s32 arg0) {
    s32 v[4];
    u8 *p;
    u16 temp_v0;

    IsEventDone(arg0);
    temp_v0 = AF(arg0, u16, 0x5E);
    if ((temp_v0 == 9) | (temp_v0 == 0x11)) {
        p = (u8 *) SpawnActorArg(0x30, 2, arg0);
        if (p != 0) {
            AF(p, u16, 0xA) -= 0x20;
            AF(p, u16, 0x16) -= 0x10;
            PlaySoundId(0x829, 0);
            AF(arg0, u16, 0x5E) = 0;
            SetScript(arg0, (s32) &D_sc05_018_8018A4D0);
            v[0] = 0;
            v[1] = 0xFFF20000;
            v[2] = 0x70000;
            SetLocalVelocity(arg0, v);
            AF(arg0, s32, 0x48) = 0x10000;
            AF(arg0, s32, 0x1C) = 0x40;
            AF(arg0, s16, 0x108) = 0;
            AF(arg0, s16, 2) = 4;
        }
    }
}

void func_sc05_018_8017D3A4(s32 arg0, s32 arg1) {
    s32 v[4];
    s32 temp_v0;
    u8 *temp_v1;

    IsEventDone(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (MoveCollide(arg0) & 0x2000)) {
        SpawnEffect(2, arg0, 0, 0, 0, 0, 0);
        SetScript(arg0, (s32) &D_sc05_018_8018A468);
        temp_v1 = AF(arg0, u8 *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0xB00);
        v[0] = 0;
        v[1] = 0;
        v[2] = -0xC0000;
        UpdateModelZYX(arg0);
        SetLocalVelocity(arg0, v);
        AF(arg0, s16, 0xFE) = 1;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc05_018_8017D474(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        SetFlag((s32) D_sc05_018_8018A6A4[arg0->param], 1);
        FreeActor(arg0);
    }
}

void func_sc05_018_8017D4CC(u8 *arg0) {
    s32 temp_v0;
    u8 *g = &g_Status;

    if ((AF(arg0, s16, 0x100) == 0) && (AF(arg0, u16, 0x5E) != 0)) {
        StartEvent((s32) arg0, (s32) &D_sc05_018_8018A684);
        AF(arg0, s16, 0x100) = 1;
        AF(arg0, s16, 2) = 8;
        return;
    }
    if (((u32) (AF(g, u16, 0x1A) - 0x12C) >= 0x3FCU) && (IsOnScreen((s32) arg0, 0x9000B8) == 0)) {
        if (SpawnActorArg(0x1F8, (s32) AF(arg0, s16, 0x70), (s32) arg0) != 0) {
            FreeShadow(AF(arg0, s32, 0xCC));
            FreeActor((s32) arg0);
            goto block_7;
        }
    } else {
block_7:
        if (AF(arg0, u16, 0x5E) != 0) {
            temp_v0 = AF(arg0, s32, 0x1C) + 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 >= 0x10) {
                AF(arg0, u16, 0x5E) = 0U;
                AF(arg0, s32, 0x1C) = 0;
            }
        }
    }
}

void func_sc05_018_8017D5C4(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        arg0->state = 7;
    }
}

void func_sc05_018_8017D604(u8 *obj) {
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
                if (type != 4) g.z = m + 0x200;
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
                if (type == 7) g.z = m + 0x200;
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
                if (type == 3) g.z = zb + 0x200;
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

s32 func_sc05_018_8017E4E4(u8 *arg0) {
    StartPlayerAction((s32) func_sc05_018_8017EA50, 0x01000000);
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_018_8017E534(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

s32 func_sc05_018_8017E558(u8 *arg0) {
    StartPlayerAction((s32) func_sc05_018_8017EAD8, 0x01000000);
    D_801270C0 = 2;
    g_PlayerFlags |= 0x04000000;
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

extern s16 D_800B9A0A;
extern s32 func_800D1D94();

s32 func_sc05_018_8017E5C8(u8 *o) {
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

void func_sc05_018_8017E678(void) {
    func_800D1EBC();
}

s32 func_sc05_018_8017E698(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc05_018_8017E6EC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        if (!(GetVar(0xCE) & 0xFF)) {
            func_800D0C48(1);
        }
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 RoomEntryByProgress(u8 *arg0) {
    if (GetProgress() == 0x488) {
        StartEntryScript488();
    } else {
        func_sc05_018_8017F528();
    }
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_018_8017E7D4(u8 *arg0) {
    func_sc05_018_8017F7F0();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_018_8017E810(void) {
    return 0;
}

s32 func_sc05_018_8017E818(u8 *arg0) {
    g_PlayerFlags |= 0x04000000;
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}


extern u8 g_Daytime;

s32 func_sc05_018_8017E84C(u8 *o) {
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
        }
        AF(o, u8, 0x15)++;
    }
    return 0;
}

void func_sc05_018_8017E8F0(void) {
    func_800D1EBC();
}

void func_sc05_018_8017E910(u8 *arg0) {
    D_sc05_018_8018A6D8[AF(arg0, u8, 0x15)]();
}

void func_sc05_018_8017E94C(u8 *arg0) {
    D_sc05_018_8018A6E0[AF(arg0, u8, 0x15)]();
}

void func_sc05_018_8017E988(u8 *arg0) {
    D_sc05_018_8018A6EC[AF(arg0, u8, 0x15)]();
}

void func_sc05_018_8017E9C4(u8 *arg0) {
    D_sc05_018_8018A704[AF(arg0, u8, 0x15)]();
}

void func_sc05_018_8017EA00(u8 *arg0) {
    D_sc05_018_8018A70C[AF(arg0, u8, 0x15)]();
}

void func_sc05_018_8017EA3C(void) {
    D_80127050 = 1;
}

void func_sc05_018_8017EA50(Player *arg0) {
    D_sc05_018_8018A838[arg0->phase]();
}

void func_sc05_018_8017EA8C(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc05_018_8017EAA0(s32 arg0) {
    func_80175414();
    EndPlayerActionOf(arg0);
    ResumeHopAbility(arg0);
}

void func_sc05_018_8017EAD8(Player *arg0) {
    D_sc05_018_8018A840[arg0->phase]();
}

void func_sc05_018_8017EB14(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc05_018_8017EB28(s32 arg0) {
    EndPlayerActionOf(arg0);
}

void func_sc05_018_8017EB48(u8 *arg0) {
    D_sc05_018_8018A860[AF(arg0, u8, 0x216)]();
}

void func_sc05_018_8017EB84(s32 arg0) {
    func_sc05_018_8017FED0();
    EndScene(arg0);
    HidePlayerScene(arg0);
    SetPlayerFlag7E2(arg0);
    AF(arg0, s32, 0x200) = 0x64;
    AF(arg0, s16, 0x20C) = 1;
    AF(arg0, s16, 0x20E) = 0;
    func_sc05_018_8017F818(arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    AF(arg0, s32, 0x204) = 0x3C;
    BumpSub2Copy(arg0);
}

void func_sc05_018_8017EBFC(u8 *arg0) {
    s32 temp_v0_2;
    u16 temp_v0;

    temp_v0 = AF(g_ActiveCamera, u16, 0x22) + 4;
    AF(g_ActiveCamera, u16, 0x22) = temp_v0;
    AF(g_ActiveCamera, u16, 0x1A) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0_2;
    if (temp_v0_2 == -1) {
        AF(arg0, s32, 0x204) = 0x3C;
        AF(g_ActiveCamera, u16, 0x22) = 0x600U;
        AF(g_ActiveCamera, u16, 0x1A) = 0x600U;
        AF(g_ActiveCamera, s32, 0x14) = 0x384;
        AF(g_ActiveCamera, s32, 0x10) = 0x384;
        AF(g_ActiveCamera, s16, 0x2E) = 0x40;
        AF(g_ActiveCamera, s16, 0x28) = 0x40;
        AF(g_ActiveCamera, s16, 0x30) = -0x100;
        AF(g_ActiveCamera, s16, 0x2A) = -0x100;
        BumpSub2Copy((s32) arg0, (s32) g_ActiveCamera);
    }
}

void func_sc05_018_8017EC80(u8 *arg0) {
    s32 temp_v0_2;
    u16 temp_v0;

    temp_v0 = AF(g_ActiveCamera, u16, 0x22) + 4;
    AF(g_ActiveCamera, u16, 0x22) = temp_v0;
    AF(g_ActiveCamera, u16, 0x1A) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0_2;
    if (temp_v0_2 == -1) {
        PlaySoundId(0xC4C, 0);
        func_sc05_018_8017FE44();
        BumpSub2Copy((s32) arg0);
    }
}

extern void func_sc05_018_8017FD94();
void func_sc05_018_8017ECEC(u8 *o) {
    s32 t;

    t = AF(o, s32, 0x200) + 0xA;
    AF(o, s32, 0x200) = t;
    if (t >= 0x258) {
        AF(o, s32, 0x200) = 0x64;
        func_sc05_018_8017FD94();
        BumpSub2Copy(o);
    }
    func_sc05_018_8017F818(o, AF(o, s16, 0x20C), AF(o, s32, 0x200), 0);
    func_sc05_018_8017F990(o, 0);
}

void func_sc05_018_8017ED60(u8 *arg0) {
    s32 temp_v0;

    func_sc05_018_8017F060();
    func_sc05_018_8017F818((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc05_018_8017F990((s32) arg0, 0);
    temp_v0 = AF(arg0, s32, 0x200) + 0xA;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 >= 0x258) {
        AF(arg0, s32, 0x204) = 0xA0000;
        BumpSub2Copy((s32) arg0);
    }
}

extern void func_sc05_018_80182CDC(u16 *pos, SV4 *d, s16 yaw, s16 n);
void func_sc05_018_8017EDD0(u8 *o) {
    SV8 v;
    s32 i;
    s32 a;

    if (AF(o, s32, 0x200) >= 0x2BC && AF(o, s16, 0x20E) == 0) {
        AF(o, s16, 0x20E) = 1;
        ClearCameraUpdate();
        EventSetProgress492();
        StartCameraShake(&D_sc05_018_8018A880);
        a = GetCameraHeading() - 0x200;
        PosToSVec(o + 4, &v);
        v.x -= 0xC0;
        v.y += 0x80;
        for (i = 0; i < 8; i++) {
            func_sc05_018_80182CDC((u16 *)&v, &D_sc05_018_8018A898, a, 2);
            if (i & 1) {
                D_sc05_018_8018A898.y += 0x30;
            } else {
                D_sc05_018_8018A898.y -= 0x30;
            }
            a += 0x63;
        }
    }
    func_sc05_018_8017F818(o, AF(o, s16, 0x20C), AF(o, s32, 0x200), 0);
    func_sc05_018_8017F990(o, 0);
    AF(o, s32, 0x204) -= 0x4000;
    if (AF(o, s32, 0x204) < 0x10000) {
        AF(o, s32, 0x204) = 0x10000;
    }
    AF(o, s32, 0x200) += AF(o, s16, 0x206);
    if (AF(o, s32, 0x200) >= 0x316) {
        AF(o, s32, 0x200) = 0x1E;
        BumpSub2Copy(o);
    }
}

void func_sc05_018_8017EF54(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        BumpSub2Copy((s32) arg0, arg1);
    }
}

void func_sc05_018_8017EF88(s32 arg0) {
    func_sc05_018_8017EFE0();
    BeginScene(arg0);
    ShowPlayerScene(arg0);
    ClearPlayerFlag7E2(arg0);
    PlacePlayer((s32) &D_sc05_018_8018A8A0);
    NextPlayerActionHandler(arg0);
}

void func_sc05_018_8017EFE0(void) {
    u8 *p;

    p = (u8 *)FindActorByKind(0x19C);
    if (p != 0) {
        AF(p, s16, 0xFC) = 0;
    }
    p = (u8 *)FindActorByKind(0x29A);
    if (p != 0) {
        AF(p, s16, 6) = -0x180;
        AF(p, s16, 0xA) = -0x380;
        AF(p, s16, 0xE) = 0x6A0;
    }
}

void StartEntryScript488(void) {
    StartPlayerActionScript((s32) &D_sc05_018_8018A848, 0x01000000);
}

s32 func_sc05_018_8017F060(void) {
    s32 temp_v0;

    temp_v0 = AF(g_ActiveCamera, s32, 0x14) - 8;
    AF(g_ActiveCamera, s32, 0x14) = temp_v0;
    return temp_v0;
}

void func_sc05_018_8017F080(u8 *arg0) {
    D_sc05_018_8018A8C0[AF(arg0, u8, 0x216)]();
}

void func_sc05_018_8017F0BC(s32 arg0) {
    EndScene(arg0);
    HidePlayerScene(arg0);
    SetPlayerFlag7E2(arg0);
    AF(arg0, s32, 0x200) = 0x64;
    AF(arg0, s16, 0x20C) = 1;
    func_sc05_018_8017F818(arg0, 1, AF(arg0, s32, 0x200), 0);
    BumpSub2Copy(arg0);
}

void func_sc05_018_8017F120(u8 *arg0) {
    s32 temp_v0;

    func_sc05_018_8017F818((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc05_018_8017F990((s32) arg0, 0);
    temp_v0 = AF(arg0, s32, 0x200) + 0xA;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 >= 0x258) {
        AF(arg0, s32, 0x204) = 0xA0000;
        BumpSub2Copy((s32) arg0);
    }
}

void func_sc05_018_8017F188(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_sc05_018_8017F818((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc05_018_8017F990((s32) arg0, 0);
    temp_v1 = AF(arg0, s32, 0x204) - 0x4000;
    AF(arg0, s32, 0x204) = temp_v1;
    if (temp_v1 <= 0xFFFF) {
        AF(arg0, s32, 0x204) = 0x10000;
    }
    temp_v0 = AF(arg0, s32, 0x200) + AF(arg0, s16, 0x206);
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 >= 0x316) {
        PlaySoundId(0xBE5, 0);
        AF(arg0, s32, 0x200) = 0x1E;
        BumpSub2Copy((s32) arg0);
    }
}

void func_sc05_018_8017F220(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        BumpSub2Copy((s32) arg0, arg1);
    }
}

void func_sc05_018_8017F254(s32 arg0) {
    func_sc05_018_8017F2BC();
    BeginScene(arg0);
    ShowPlayerScene(arg0);
    ClearPlayerFlag7E2(arg0);
    PlacePlayer((s32) &D_sc05_018_8018A8D4);
    BlendCameraThen((s32) func_sc05_018_8017FB8C);
    NextPlayerActionHandler(arg0);
}

void func_sc05_018_8017F2BC(void) {
    u8 *p;

    p = (u8 *)FindActorByKind(0x19C);
    if (p != 0) {
        AF(p, s16, 0xFC) = 0;
    }
    p = (u8 *)FindActorByKind(0x29A);
    if (p != 0) {
        AF(p, s16, 6) = -0x180;
        AF(p, s16, 0xA) = -0x380;
        AF(p, s16, 0xE) = 0x6A0;
    }
}

void func_sc05_018_8017F314(u8 *arg0) {
    D_sc05_018_8018A8DC[AF(arg0, u8, 0x216)]();
}

void SetProgress3C0Step(s32 arg0) {
    if ((u32) (GetProgress() - 0x3B6) < 0xAU) {
        SetProgress(0x3C0);
        BumpSub2Copy(arg0);
        return;
    }
    NextPlayerActionHandler(arg0);
}

void func_sc05_018_8017F3A8(u8 *arg0) {
    AF(arg0, s32, 0x198) = OpenMessage((s32) &D_sc05_018_801E31B4);
    BumpSub2Copy((s32) arg0);
}

void func_sc05_018_8017F3E8(u8 *arg0) {
    if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        func_80142454(-0x80);
        SetActionTimer((s32) arg0, 0x1E);
        BumpSub2Copy((s32) arg0);
    }
}

void func_sc05_018_8017F448(s32 arg0) {
    if (TickActionTimer() != 0) {
        EndScene(arg0);
        SetPlayerMotion(arg0, (s32) &D_800D599C);
        AF(arg0, s32, 0x198) = OpenMessage((s32) &D_sc05_018_801E3224);
        BumpSub2Copy(arg0);
    }
}

void func_sc05_018_8017F4AC(u8 *arg0) {
    if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        NextPlayerActionHandler((s32) arg0);
    }
}

void func_sc05_018_8017F4F8(s32 arg0) {
    func_sc05_018_80181A0C();
    NextPlayerActionHandler(arg0);
}

void func_sc05_018_8017F528(void) {
    PlaySoundId(0xBE6, 0);
    StartPlayerActionScript((s32) &D_sc05_018_8018A8A8, 0x01000000);
}

void func_sc05_018_8017F55C(u8 *arg0) {
    D_sc05_018_8018A900[AF(arg0, u8, 0x216)]();
}

void func_sc05_018_8017F598(s32 arg0) {
    EndScene(arg0);
    HidePlayerScene(arg0);
    SetPlayerFlag7E2(arg0);
    AF(arg0, s32, 0x200) = 0x316;
    AF(arg0, s32, 0x204) = 0;
    AF(arg0, s16, 0x20C) = 1;
    func_sc05_018_8017F818(arg0, 1, AF(arg0, s32, 0x200), 0);
    AF(arg0, s16, 0x20E) = 0x1E;
    BumpSub2Copy(arg0);
}

void func_sc05_018_8017F608(u8 *arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x20E) - 1;
    AF(arg0, u16, 0x20E) = temp_v0;
    if ((s16) temp_v0 == -1) {
        AF(arg0, u16, 0x20E) = 0U;
        BumpSub2Copy((s32) arg0, arg1);
    }
}

void func_sc05_018_8017F648(u8 *arg0) {
    u16 temp_v0;
    u8 temp_s1;

    temp_v0 = AF(arg0, u16, 0x20E);
    AF(arg0, u16, 0x20E) = (u16) (temp_v0 + 1);
    temp_s1 = D_sc05_018_8018A918[(s16) temp_v0];
    if (temp_s1 == 0) {
        PlaySoundId(0xC27, 0);
        BumpSub2Copy((s32) arg0);
    }
    func_sc05_018_8017F818((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), (s32) temp_s1);
}

void func_sc05_018_8017F6C8(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AF(arg0, s32, 0x204) + 0x4000;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 > 0xA0000) {
        AF(arg0, s32, 0x204) = 0xA0000;
    }
    temp_v0_2 = AF(arg0, s32, 0x200) - AF(arg0, s16, 0x206);
    AF(arg0, s32, 0x200) = temp_v0_2;
    if (temp_v0_2 < 0x259) {
        BumpSub2Copy((s32) arg0, arg1);
    }
    func_sc05_018_8017F818((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc05_018_8017F990((s32) arg0, 0x800);
}

void func_sc05_018_8017F754(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 0xA;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 < 0x6F) {
        BumpSub2Copy((s32) arg0, arg1);
    }
    func_sc05_018_8017F818((s32) arg0, (s32) AF(arg0, s16, 0x20C), AF(arg0, s32, 0x200), 0);
    func_sc05_018_8017F990((s32) arg0, 0x800);
}

void func_sc05_018_8017F7BC(s32 arg0) {
    D_800AE6BD += 1;
    NextPlayerActionHandler(arg0);
}

void func_sc05_018_8017F7F0(void) {
    StartPlayerActionScript((s32) &D_sc05_018_8018A8F0, 0x01000000);
}

void func_sc05_018_8017F818(u8 *o, s32 n, s32 t, s32 dy) {
    SV8 v;
    u8 *p;
    u8 unused[8];
    s16 x, z;
    s32 y, d;

    x = (D_sc05_018_8018A920 - D_sc05_018_8018A928) * t / 800 + D_sc05_018_8018A928;
    d = D_sc05_018_8018A922;
    y = D_sc05_018_8018A92A;
    d = d - y;
    y = d * t / 800 + y;
    v.y = y;
    v.x = x;
    v.y = y + dy;
    z = (D_sc05_018_8018A924 - D_sc05_018_8018A92C) * t / 800 + D_sc05_018_8018A92C;
    v.z = z;
    SVecToPos(&v, o + 4);
    p = (u8 *)FindActorByKind(0x19C);
    if (p != 0) {
        AF(p, s32, 4) = AF(o, s32, 4);
        AF(p, s32, 8) = AF(o, s32, 8);
        AF(p, s32, 0xC) = AF(o, s32, 0xC);
        AF(p, s16, 0xFC) = n;
    }
    p = (u8 *)FindActorByKind(0x29A);
    if (p != 0) {
        AF(p, s32, 4) = AF(o, s32, 4);
        AF(p, s32, 8) = AF(o, s32, 8);
        AF(p, s32, 0xC) = AF(o, s32, 0xC);
    }
}

extern void RotateSVectorY();
extern void PackAngles10();
extern u8 D_sc05_018_8018A930;
void func_sc05_018_8017F990(u8 *o, s32 a1) {
    SV8 v;
    u32 c;
    RotateSVectorY((s16)(a1 + 0x555), &D_sc05_018_8018A930, &v);
    PackAngles10(&v, &c);
    c |= 0x80000000;
    if (!(D_800B99DA & 3)) {
        SpawnEffect(6, o, AF(o, s16, 6), AF(o, s16, 0xA), AF(o, s16, 0xE), c, 0);
    }
}

void func_sc05_018_8017FA20(void) {
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
    SetCameraUpdate((s32) func_sc05_018_8017FF9C, 0);
    g_CameraVarA0 = temp_s1;
    SnapCamera((s32) &g_Camera);
    func_sc05_018_8017FF9C((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    func_sc05_018_8017FF9C((s32) &g_Camera);
}

void func_sc05_018_8017FAE4(void) {
    g_CameraProjTarget = 0x12C;
    g_CameraDistTarget = 0x384;
    g_CameraAngleTarget = 0x38;
    D_8012696A = 0x900;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc05_018_8017FF9C, 1);
    SnapCamera((s32) &g_Camera);
    func_sc05_018_8017FF9C((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    func_sc05_018_8017FF9C((s32) &g_Camera);
}

void func_sc05_018_8017FB8C(arg0)
    s32 arg0;
{
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
    SetCameraUpdate((s32) func_sc05_018_8017FF9C, 0);
    g_CameraVarA0 = temp_s1;
    SnapCamera((s32) &g_Camera);
    func_sc05_018_8017FF9C((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    func_sc05_018_8017FF9C((s32) &g_Camera);
    g_CameraVarA0 = 4;
    func_sc05_018_8017FF9C((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    func_sc05_018_8017FF9C((s32) &g_Camera);
}

void func_sc05_018_8017FC74(void) {
    typedef struct { u8 b[8]; } B8;
    g_CameraProjTarget = 0x12C;
    g_CameraDistTarget = 0x384;
    g_CameraAngleTarget = 0x38;
    D_8012696A = 0x900;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate(func_sc05_018_8017FF9C, 2);
    *(B8 *)&D_801274E8 = *(B8 *)&g_CameraFocus;
    D_801269E6 = 0x5A;
    func_sc05_018_8017FF9C(&g_Camera);
    SnapCamera(&g_Camera);
    *(B8 *)&D_801274E8 = *(B8 *)&g_CameraFocus;
    D_801269E4 = 0x40;
    D_801269E6 = 0x5A;
}

void func_sc05_018_8017FD94(s32 arg0) {
    g_CameraProjTarget = 0x12C;
    g_CameraDistTarget = 0x384;
    g_CameraAngleTarget = 0x71;
    D_8012696A = 0x800;
    g_CameraOfsTarget = -0x30;
    D_8012696C = 0;
    D_80126978 = 0x80;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc05_018_8017FF9C, 1);
    SnapCamera((s32) &g_Camera);
    func_sc05_018_8017FF9C((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    func_sc05_018_8017FF9C((s32) &g_Camera);
}

s32 func_sc05_018_8017FE44(s32 arg0, s32 arg1) {
    g_CameraProj = 0x12C;
    D_80126984 = (s32) D_sc05_018_8018A938;
    D_80126988 = (s32) D_sc05_018_8018A93A;
    D_8012698C = (s32) D_sc05_018_8018A93C;
    D_80126990 = (s32) D_sc05_018_8018A940;
    D_80126994 = (s32) D_sc05_018_8018A942;
    D_80126998 = (s32) D_sc05_018_8018A944;
    return ClearCameraUpdate((s32) D_sc05_018_8018A93A);
}

void func_sc05_018_8017FED0(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x76C;
    g_CameraAngleTarget = 0x1C7;
    D_8012696A = 0x600;
    (*(s16 *)&D_801274E8) = -0xC8;
    D_801274EA = -0x282;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    D_801274EC = 0x5F6;
    SetCameraUpdate((s32) func_sc05_018_8017FF9C, 3);
    SnapCamera((s32) &g_Camera);
    func_sc05_018_8017FF9C((s32) &g_Camera);
    SnapCamera((s32) &g_Camera);
    func_sc05_018_8017FF9C((s32) &g_Camera);
}

void func_sc05_018_8017FF9C(s32 arg0) {
    D_sc05_018_8018A948[AF(arg0, u8, 4)]();
}

void func_sc05_018_8017FFD8(s32 arg0) {
    func_sc05_018_801800E0(arg0, arg0 + 0xA0);
    func_sc05_018_80180220(arg0, (s32) &g_CameraFocus);
}

void func_sc05_018_80180014(s32 arg0) {
    func_sc05_018_80180220(arg0, (s32) &g_CameraFocus);
}

void func_sc05_018_8018003C(u8 *o) {
    if (AF(o, s16, 0x9E) != 0) {
        *(B8 *)&D_801274E8 = *(B8 *)&g_CameraFocus;
        AF(o, s16, 0x9E)--;
    }
    func_sc05_018_80180220(o, &D_801274E8);
}

void func_sc05_018_801800B8(s32 arg0) {
    func_sc05_018_80180220(arg0, (s32) &D_801274E8);
}

void func_sc05_018_801800E0(u8 *o, u8 *a1) {
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
        if ((s16)AngleDist(AF(o, s16, 0x1A), D_sc05_018_80186C50[d]) < s0) {
            *a1 = d;
        }
    }
    AF(o, s16, 0x22) = D_sc05_018_80186C50[*a1];
}

void func_sc05_018_80180220(u8 *o, s16 *b) {
    WMtx m;
    SV8 v;
    SV8 r;
    s16 lim;
    s16 d;
    lim = AF(o, u16, 0x9C);
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
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + b[0];
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + b[1];
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + b[2];
    RotMatrixZYX(o + 0x18, &m);
    m.t[0] = AF(o, s16, 0x28) + b[0];
    m.t[1] = AF(o, s16, 0x2A) + b[1];
    m.t[2] = AF(o, s16, 0x2C) + b[2];
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    LocalToWorld(&m, &v, &r);
    AF(o, s32, 0x3C) = r.x;
    AF(o, s32, 0x40) = r.y;
    AF(o, s32, 0x44) = r.z;
}

void func_sc05_018_80180408(StageActor *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    u16 temp_a1;

    temp_a1 = arg0->stateCount;
    temp_a0 = arg0->timer + 1;
    temp_v1 = temp_a1 & 0xFFFF;
    arg0->timer = temp_a0;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (temp_a0 == D_sc05_018_8018A978) {
            func_sc05_018_801812FC((s32) arg0, (s32) &D_sc05_018_801B3DC4);
        }
        break;
    case 1:                                         /* switch 1 */
        if (temp_a0 >= D_sc05_018_8018A97A) {
            arg0->stateCount = (u16) (temp_a1 + 1);
            StartCameraPan((s32) &D_sc05_018_801B44DC);
            func_sc05_018_801812FC((s32) arg0, (s32) &D_sc05_018_801CB724);
            arg0->timer = 0;
        }
        break;
    case 2:                                         /* switch 1 */
        func_sc05_018_801813E8((s32) arg0);
        temp_v1_2 = arg0->timer;
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 0xAE:                                  /* switch 2 */
        case 0xC0:                                  /* switch 2 */
        case 0xA1:                                  /* switch 2 */
            StartCameraShake((s32) &D_sc05_018_801870B4);
            break;
        case 0xDA:                                  /* switch 2 */
            StartCameraShake((s32) &D_sc05_018_80187090);
            func_sc05_018_80181324();
            func_sc05_018_80183ABC();
            PlaySoundId(0xBE2, 0);
            break;
        }
        if ((CameraPanDone() << 0x10) != 0) {
            arg0->timer = 0;
            arg0->stateCount = (u16) (arg0->stateCount + 1);
        }
        break;
    case 3:                                         /* switch 1 */
        if (temp_a0 >= 0x5A) {
            func_sc05_018_80180644((s32) arg0);
        }
        break;
    }
    func_sc05_018_801808AC((s32) arg0);
    PlaySoundId(4, 0x42E);
    PlaySoundId(4, 0x406);
    PlaySoundId(4, 0x407);
}

void EventSetProgress492(void) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x2C6);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0x1C) = 0;
        AF(temp_v0, u16, 0x34) = (u16) (AF(temp_v0, u16, 0x34) + 1);
        SetProgress(0x492);
        SpawnActorArg(0x3BE, 0, 0);
        func_800D0CA0(1);
        PlaySoundId(0xBDF, 0);
    }
}

extern void UpdateCamera();
void func_sc05_018_80180644(StageActor *o) {
    func_sc05_018_8017FB8C();
    UpdateCamera();
    o->state = 3;
    o->stateCount = 0;
    o->timer = 0;
    o->animTimer = 0;
    HideModel(o);
    D_sc05_018_801E6748 = 1;
}

void func_sc05_018_8018069C(u8 *o) {
    typedef struct { u8 pad[0x2C]; u16 f2C; } P2C;
    s32 n;
    u8 *p;
    u16 t;

    n = GetProgress();
    if ((u32)(n - 0x44C) >= 0x46 || (AF(o, s32, 0x20) = AllocActorModel()) == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(AF(o, s32, 0x20), &D_sc05_018_801AA594);
    SetModelCullBox(AF(o, s32, 0x20), 0x7FFF, 0x7FFF);
    p = AF(o, u8 *, 0x20);
    ((P2C *)p)->f2C |= 0x10;
    D_sc05_018_801E6748 = 0;
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = 0x3000;
    AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
    if (n == 0x488) {
        AF(o, s16, 2) = 2;
        PlaceObject(o, &D_sc05_018_8018A960);
        func_sc05_018_801812FC(o, &D_sc05_018_801B3DC4);
        AF(o, s32, 0x1C) = 0;
        AF(o, s16, 0x34) = 0;
    } else {
        AF(o, s16, 2) = 1;
        PlaceObject(o, &D_sc05_018_8018A960);
        t = AF(o, u16, 0xFC) ^ 1;
        AF(o, u16, 0xFC) = t;
        if (t != 0) {
            func_sc05_018_801812FC(o, &D_sc05_018_801BBAB8);
        } else {
            func_sc05_018_801812FC(o, &D_sc05_018_801C29C4);
        }
        AF(o, s32, 0x1C) = 0;
    }
}

void func_sc05_018_801807E8(StageActor *arg0) {
    D_sc05_018_8018A97C[arg0->state]();
    D_sc05_018_801E6508 += 1;
}

s32 func_sc05_018_8018083C(s32 arg0) {
    s32 sp18;
    s32 var_v0;

    func_sc05_018_80180ACC(arg0, 1, (s32) &D_sc05_018_8018A98C, (s32) &sp18);
    var_v0 = SVecPosDistSq((s32) &sp18, (s32) &g_PlayerPosX) < 0x4000;
    if (var_v0 != 0) {
        var_v0 = HitPlayer(1, 0x4001, 0, 0x1E, /* extra? */ &D_sc05_018_8018A99C, /* extra? */ &D_sc05_018_8018A994);
    }
    return var_v0;
}

void func_sc05_018_801808AC(u8 *o) {
    u8 *v;
    s32 n;
    s16 *p;
    s32 i;

    v = AF(o, u8 *, 0x90);
    if (v == &D_sc05_018_801B3DC4) {
        n = 0;
    } else if (v == &D_sc05_018_801BBAB8) {
        n = 1;
    } else if (v == &D_sc05_018_801C29C4) {
        n = 2;
    } else if (v == &D_sc05_018_801CB724) {
        n = 3;
    } else {
        return;
    }
    for (p = D_sc05_018_8018A9EC[n]; *p != -1; p++) {
        if ((s16)D_sc05_018_801E6508 == (s16)*(u16 *)p) {
            for (i = 0; i < D_sc05_018_8018A9C4; i++) {
                SpawnDustBurst(o, n, i);
            }
            return;
        }
    }
}

void SpawnDustBurst(u8 *o, s32 n, s32 k) {
    u8 *p;
    SV8 *t;

    p = (u8 *)SpawnPropFrom(o, 0x22);
    if (p != 0) {
        if (AF(p, u8 *, 0x20) != 0) {
            AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC010;
        }
        AF(p, s32, 0x10) = (rand() & 0x7FFF) * 8 - 0x20000;
        AF(p, s32, 0x14) = (rand() & 0x7FFF) * 4 - 0x60000;
        AF(p, s32, 0x18) = (rand() & 0x7FFF) * 8 - 0x20000;
        AF(p, u16, 0x34) = 0x3001;
        AF(AF(p, u8 *, 0x20), s32, 4) |= 0x50000000;
        t = &D_sc05_018_8018A9A4[n];
        AF(p, u16, 6) = t->x;
        AF(p, u16, 0xA) = t->y;
        AF(p, u16, 0xE) = t->z;
        if (k == 0) {
            PlaySoundId(n == 3 ? 0xBE1 : 0xC2C, 0);
        }
    }
}

void func_sc05_018_80180ACC(u8 *o, s32 n, void *a, s16 *r) {
    S12 b;
    SV8 ang;
    WMtx m;
    u8 *q;

    func_sc05_018_80180BE0(o, n, &b);
    ang.x = b.v[3];
    ang.y = b.v[4];
    ang.z = b.v[5];
    RotMatrixZYX(&ang, &m);
    m.t[0] = b.v[0];
    m.t[1] = b.v[1];
    m.t[2] = b.v[2];
    LocalToWorld(&m, a, r);
    q = AF(o, u8 *, 0x20);
    if (AF(q, u16, 0x2C) & 0x10) {
        r[0] = (r[0] * AF(q, s16, 0x18)) >> 12;
        r[1] = (r[1] * AF(AF(o, u8 *, 0x20), s16, 0x1A)) >> 12;
        r[2] = (r[2] * AF(AF(o, u8 *, 0x20), s16, 0x1C)) >> 12;
    }
}

void func_sc05_018_80180BE0(u8 *o, s32 idx, s16 *out) {
    u8 unused[8];
    u32 v;
    u8 *a;
    u32 w;
    u8 *b;

    b = AF(o, u8 *, 0x90);
    b += AF(o, s32, 0x94) * 8;
    v = *(u32 *)b;
    if (v & 0x1000000) {
        a = (u8 *)(v & ~0x1000000) + idx * 8;
        out[0] = (s8)a[3];
        out[1] = (s8)a[4];
        out[2] = (s8)a[5];
        w = *(u32 *)a;
        out[4] = a[1] | ((w & 0xF) << 8);
        out[5] = ((w >> 16) & 0xFF) | ((w & 0xF0) << 4) | ((w & 0xF0) << 4);
        out[3] = *(u16 *)(a + 6);
    } else {
        *(S12 *)out = ((S12 *)v)[idx];
    }
}

void func_sc05_018_80180CE4(StageActor *arg0) {
    func_sc05_018_80180D04(arg0);
}

void func_sc05_018_80180D04(u8 *arg0) {
    D_sc05_018_8018AA00[AF(arg0, u16, 2)]();
}

extern u8 D_sc05_018_801E6514[];
extern void func_sc05_018_80181204();
void func_sc05_018_80180D40(u8 *o) {
    s32 i;
    s32 j;
    s32 one;

    AF(o, s16, 2)++;
    AF(o, s32, 0x1C) = 0;
    ZeroFill(D_sc05_018_801E650C, 0x100);
    i = 0;
    one = 1;
    j = 0;
    do {
        AF(D_sc05_018_801E650C, s16, j) = one;
        AF(D_sc05_018_801E6514, s16, j) = i;
        j += 16;
    } while (++i < 16);
    func_sc05_018_80181204();
    D_sc05_018_801E664C = 0;
}

void func_sc05_018_80180DBC(StageActor *o) {
    s32 t;
    s32 i;
    u8 *e;

    t = o->timer + 1;
    AF(o, s32, 0x1C) = t;
    if (t >= D_sc05_018_8018A9FC) {
        if (t == D_sc05_018_8018A9FC) {
            D_sc05_018_801E664C = 0;
        } else if (t < D_sc05_018_8018A9FC + D_sc05_018_8018A9FE) {
            D_sc05_018_801E664C = ((t - D_sc05_018_8018A9FC) << 12) / D_sc05_018_8018A9FE;
            for (i = 0; i < 16; i++) {
                D_sc05_018_801E660C[i] = func_sc05_018_80181294(D_sc05_018_801E662C[i], D_sc05_018_801E664C);
            }
            func_sc05_018_8018124C();
        } else {
            ZeroFill(D_sc05_018_801E650C, 0x100);
            FreeActor(o);
            return;
        }
    }
    e = D_sc05_018_801E650C;
    for (i = 0; i < 16; i++, e += 0x10) {
        switch (AF(e, s16, 0)) {
        case 0:
            break;
        case 1:
            if (++AF(e, s16, 2) < AF(e, s16, 8) * 2) {
                break;
            }
            AF(e, s16, 2) = 0;
            AF(e, s16, 0)++;
            AF(e, s16, 4) = rand() % 280 - 0x8C;
            AF(e, s16, 6) = rand() % 200 - 0x64;
            AF(e, s16, 0xC) = (rand() & 0x3F) + 0x30;
            break;
        case 2:
            AF(e, s16, 2)++;
            AF(e, s16, 0xA) = AF(e, s16, 0xC) * AF(e, s16, 2) / 6;
            AF(e, s16, 0xE) = 1;
            if (AF(e, s16, 2) >= 6) {
                AF(e, s16, 2) = 0;
                AF(e, s16, 0)++;
            }
            break;
        case 3:
            AF(e, s16, 0xE) = 1;
            AF(e, s16, 2)++;
            break;
        }
        if (AF(e, s16, 0xE) != 0) {
            func_sc05_018_801810B0(e);
        }
    }
}

void func_sc05_018_801810B0(u8 *o) {
    u8 *p;
    s32 h;
    s32 y;
    s32 x;
    u16 tp;
    typedef struct { u8 pad[0x16]; u16 tp; } PS;

    if (AF(o, s16, 0xA) > 0) {
        p = AllocPrim(0x28);
        AF(p, u16, 0xE) = GetClut(0x160, 0x140);
        tp = GetTPage(0, 1, 0x2C0, 0x100);
        AF(p, s32, 4) = 0x808080;
        AF(p, u8, 3) = 9;
        AF(p, u8, 7) = 0x2C;
        ((PS *)p)->tp = tp;
        if (D_sc05_018_801E664C != 0) {
            AF(p, u8, 7) = 0x2E;
        }
        AF(p, u8, 0xC) = 0x90;
        AF(p, u8, 0xD) = 0x50;
        AF(p, u8, 0x14) = 0xCF;
        AF(p, u8, 0x15) = 0x50;
        AF(p, u8, 0x1C) = 0x90;
        AF(p, u8, 0x1D) = 0x8F;
        AF(p, u8, 0x24) = 0xCF;
        AF(p, u8, 0x25) = 0x8F;
        h = (s16)AF(o, u16, 0xA) / 2;
        y = AF(o, s16, 6);
        x = AF(o, s16, 4);
        AF(p, s16, 0x8) = x - h;
        AF(p, s16, 0xA) = y - h;
        AF(p, s16, 0x10) = x + h;
        AF(p, s16, 0x12) = y - h;
        AF(p, s16, 0x18) = x - h;
        AF(p, s16, 0x1A) = y + h;
        AF(p, s16, 0x20) = x + h;
        AF(p, s16, 0x22) = y + h;
        AddPrim(g_WorldOtOrg[D_800B9A02].ot + 10, p);
    }
}

extern void StoreImage();
void func_sc05_018_80181204(void) {
    RECT r;

    r.x = 0x160;
    r.y = 0x140;
    r.w = 0x10;
    r.h = 1;
    StoreImage(&r, D_sc05_018_801E662C);
}

void func_sc05_018_8018124C(void) {
    RECT r;

    r.x = 0x160;
    r.y = 0x140;
    r.w = 0x10;
    r.h = 1;
    LoadImage(&r, (u32 *) D_sc05_018_801E660C);
}

s32 func_sc05_018_80181294(s32 c0, s32 t) {
    s32 r, g, b;
    s32 k;
    u16 c;

    r = c0 & 0x1F;
    k = 0x1000 - t;
    c = c0;
    g = c >> 5;
    g &= 0x1F;
    b = c >> 10;
    b &= 0x1F;
    r = ((r * k) >> 12) & 0x1F;
    g = ((g * k) >> 12) & 0x1F;
    b = ((b * k) >> 12) & 0x1F;
    return (u16)(r | 0x8000 | (g << 5) | (b << 10));
}

s32 func_sc05_018_801812FC(StageActor *arg0, AnimEntry *arg1) {
    s32 temp_v0;

    temp_v0 = SetScript(arg0, arg1);
    D_sc05_018_801E6508 = 0;
    return temp_v0;
}

extern SV8 D_sc05_018_8018AA14;
extern SV4 D_sc05_018_8018AA1C;
void func_sc05_018_80181324(void) {
    SV8 v;
    s32 i;
    s32 a;

    a = 0;
    for (i = 0; i < 0x20; i++) {
        v = D_sc05_018_8018AA14;
        func_sc05_018_80182CDC((u16 *)&v, &D_sc05_018_8018AA1C, a, 2);
        if (i & 1) {
            D_sc05_018_8018AA1C.y += 0x30;
        } else {
            D_sc05_018_8018AA1C.y -= 0x30;
        }
        a += 0x80;
    }
}

void func_sc05_018_801813E8(s32 arg0) {
    s32 temp_s0;

    if (AF(arg0, s32, 0x1C) < 0x90) {
        temp_s0 = (D_800B99DA % 24) & 0xFFFF;
        if (temp_s0 == 0) {
            PlaySoundId(0xBDD, 0);
        }
        if (temp_s0 == 0xC) {
            PlaySoundId(0xBDE, 0);
        }
    }
}

void func_sc05_018_80181474(u8 *o) {
    u16 t;

    AF(o, s32, 0x1C)++;
    func_sc05_018_801808AC(o);
    func_sc05_018_8018083C((s32)o);
    if (AF(o, u16, 0x72) & 0x4000) {
        AF(o, s16, 2) = 1;
        PlaceObject(o, &D_sc05_018_8018A960);
        t = AF(o, u16, 0xFC) ^ 1;
        AF(o, u16, 0xFC) = t;
        if (t != 0) {
            func_sc05_018_801812FC(o, &D_sc05_018_801BBAB8);
        } else {
            func_sc05_018_801812FC(o, &D_sc05_018_801C29C4);
        }
        AF(o, s32, 0x1C) = 0;
    }
}

void func_sc05_018_80181518(void) {
}

void func_sc05_018_80181520(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_018_801CC330);
    PlaceObject(arg0, (s32) &D_sc05_018_8018AA24);
}

void func_sc05_018_80181570(StageActor *arg0) {
    D_sc05_018_8018AB24[arg0->state]();
}

void *func_sc05_018_801815AC(u8 *o) {
    Mover *p;

    p = AF(o, u8 *, 0x64);
    switch (p->state) {
    case 2:
        if (DistSqToPlayer(p) > 0x9000) return 0;
        {
            u8 *q = AF(o, u8 *, 0x64);
            AF(q, s16, 2) = 3;
            AF(q, s16, 0x34) = 0;
        }
        break;
    case 1:
        if (DistSqToPlayer(p) > 0x9000) return 0;
        {
            u8 *q = AF(o, u8 *, 0x64);
            AF(q, s16, 2) = 4;
            AF(q, s16, 0x34) = 0;
        }
        break;
    default:
        return 0;
    }
    ResetScriptVM();
    return &CallActionHandler;
}

s32 func_sc05_018_80181648(void) {
    return func_sc05_018_80184590(7, 0x16);
}

void func_sc05_018_8018166C(StageActor *arg0) {
    if (func_sc05_018_80181648() != 0) {
        func_sc05_018_80181520(arg0);
    }
}

void func_sc05_018_801816A4(StageActor *arg0) {
    if (D_sc05_018_801E6650 != 0) {
        if (FindActorByKind(0x37C) != 0) {
            HideModel(arg0);
            return;
        }
        ShowModel(arg0);
        goto block_4;
    }
block_4:
    if (func_sc05_018_80181648() == 0) {
        arg0->state = 1;
        func_sc05_018_8018469C(arg0, (s32) &D_sc05_018_8018AA24);
    }
}

s32 func_sc05_018_80181720(void) {
    return D_sc05_018_801E6700 == 1;
}

void func_sc05_018_80181738(void) {
    func_800D1724((s32) &D_sc05_018_8018A7D4);
}

extern u8 D_sc05_018_8018AA6C;
void func_sc05_018_80181760(u8 *arg0) {
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        RunScript((s32) arg0, (s32) &D_sc05_018_8018AA6C);
        AF(arg0, u16, 0x34) = 1;
        break;
    case 1:
        if (IsEventDone((s32) arg0) != 0) {
            EndEvent((s32) arg0);
            AF(arg0, s16, 2) = 2;
            ShowModel(arg0);
            SetScript(arg0, (s32) &D_sc05_018_801CC330);
            PlaceObject(arg0, (s32) &D_sc05_018_8018AA24);
        }
        break;
    case 2:
        func_800D1724((s32) &D_sc05_018_8018A7D4);
        AF(arg0, u16, 0x34) = 3;
        break;
    }
}

void func_sc05_018_80181840(StageActor *arg0) {
    u16 temp_v1;

    temp_v1 = arg0->stateCount;
    switch (temp_v1) {                              /* irregular */
    case 0:
        RunScript((s32) arg0, (s32) &D_sc05_018_8018AAE4);
        arg0->stateCount = 1U;
        return;
    case 1:
        if (IsEventDone((s32) arg0) != 0) {
            EndEvent((s32) arg0);
            arg0->state = 1;
            func_sc05_018_8018469C((s32) arg0, (s32) &D_sc05_018_8018AA24);
        }
        return;
    }
}

extern u8 D_sc05_018_801D571C;
void func_sc05_018_801818D0(u8 *o) {
    s32 n;
    s32 t;

    n = GetProgress();
    if (n < 0x3B6 || (u32)(n - 0x44C) < 0x33) {
        RejectSpawn(o);
        return;
    }
    if (n == 0x488) {
        D_sc05_018_801E6650 = 1;
    } else {
        D_sc05_018_801E6650 = 0;
    }
    t = AllocActorModel();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(t, (s32) &D_sc05_018_801D571C);
    AF(o, s16, 2) = 2;
    ShowModel(o);
    SetScript(o, (s32) &D_sc05_018_801CC330);
    PlaceObject(o, (s32) &D_sc05_018_8018AA24);
    AF(AF(o, void *, 0x68), s16, 0xC) = 0x7FFF;
    SpawnTalkMarker(o, (s32) &func_sc05_018_801815AC);
}

void func_sc05_018_801819B0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    PlaceObject(arg0, (s32) &D_sc05_018_8018AB38);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_018_801CC330);
    func_sc05_018_80184674(arg0);
}

void func_sc05_018_80181A0C(void) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x37C);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 0x34) = (u16) (AF(temp_v0, u16, 0x34) + 1);
    }
}

extern u8 D_sc05_018_8018AB40;
extern u8 D_sc05_018_8018ACB4;
extern s32 func_sc05_018_80181B80();
void func_sc05_018_80181A48(u8 *o) {
    s32 n;

    n = GetProgress();
    if ((u32)(n - 0x44C) >= 0x46) {
        RejectSpawn(o);
        return;
    }
    if (func_sc05_018_801841A0(o, (s32) &D_sc05_018_8018AB40) != 0) {
        if (n == 0x47E) {
            AF(o, s16, 2) = 2;
            AF(o, s16, 0x34) = 0;
            PlaceObject(o, (s32) &D_sc05_018_8018AB38);
        } else if (n == 0x488) {
            AF(o, s16, 2) = 3;
            AF(o, s16, 0x34) = 0;
            PlaceObject(o, (s32) &D_sc05_018_8018ACB4);
        } else {
            AF(o, s16, 2) = 1;
            AF(o, s16, 0x34) = 0;
            PlaceObject(o, (s32) &D_sc05_018_8018AB38);
        }
        ShowModel(o);
        SetScript(o, (s32) &D_sc05_018_801CC330);
        func_sc05_018_80184674(o);
        AF(AF(o, void *, 0x68), s16, 0xC) = 0x7FFF;
        AF(o, s32, 0xD4) = SpawnTalkMarker(o, (s32) &func_sc05_018_80181B80);
    }
}

void func_sc05_018_80181B44(StageActor *arg0) {
    D_sc05_018_8018AD74[arg0->state]();
}

s32 func_sc05_018_80181B80(u8 *o) {
    Mover *p;

    p = AF(o, u8 *, 0x64);
    if (p->state != 2) return 0;
    if (DistSqToPlayer(p) > 0x4000) return 0;
    AF(AF(o, u8 *, 0x64), u16, 0x34)++;
    ResetScriptVM();
    return (s32) &CallActionHandler;
}

extern u8 D_sc05_018_8018AB74;
void EventAreaSetProgress47E(u8 *o) {
    SV8 v;

    switch (AF(o, u16, 0x34)) {
    case 0:
        v.x = g_PlayerX;
        v.y = D_80126B62;
        v.z = D_80126B66;
        if (func_8012CB64((s32) &v, -0x380, -0x180, 0x40D, 0x60D) != 0) {
            AF(o, u16, 0x34)++;
            StartEvent((s32) o, (s32) &D_sc05_018_8018AB74);
        }
        break;
    case 1:
        if (IsEventDone((s32) o) != 0) {
            EndEvent((s32) o);
            SetProgress(0x47E);
            func_sc05_018_801819B0((s32) o);
        }
        break;
    case 2:
        break;
    }
}

extern u8 D_sc05_018_8018AC14;
void func_sc05_018_80181CC4(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        RunScript(o, &D_sc05_018_8018AC14);
        AF(o, u16, 0x34)++;
        break;
    case 2:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            AF(o, s16, 2) = 2;
            AF(o, u16, 0x34) = 0;
            PlaceObject(o, &D_sc05_018_8018AB38);
            ShowModel(o);
            SetScript(o, &D_sc05_018_801CC330);
            func_sc05_018_80184674(o);
        }
        break;
    }
}

extern s32 func_800D0CE0();
s32 func_sc05_018_80181D88(void) {
    if (D_sc05_018_801E6748 != 0) {
        if (func_800D0CE0() == 1) {
            return 1;
        }
    }
    return 0;
}

extern void UpdateCamera();
extern u8 D_sc05_018_8018ACBC;
void func_sc05_018_80181DCC(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        break;
    case 1:
        StartEvent(o, &D_sc05_018_8018ACBC);
        o->stateCount++;
        break;
    case 2:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            func_sc05_018_8017FB8C();
            UpdateCamera();
            FreeActor(o->workD4);
            FreeActor(o);
        }
        break;
    }
}

s32 func_sc05_018_80181E78(void) {
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

void *func_sc05_018_80181EEC(u8 *o) {
    s32 k;
    Mover *p;

    p = AF(o, u8 *, 0x64);
    k = p->state;
    switch (k) {
    case 2:
        if (func_sc05_018_801842C0(o) == 0) return 0;
        p = AF(o, u8 *, 0x64);
        if (AF(p, u16, 0x34) != 0) return 0;
        AF(p, u16, 0x34) += 1;
        break;
    case 3:
        if (DistSqToPlayer(p) > 0x4000) return 0;
        p = AF(o, u8 *, 0x64);
        if (AF(p, u16, 0x34) != 2) return 0;
        AF(p, u16, 0x34) = 5;
        break;
    case 1:
        if (func_sc05_018_801842C0(o) == 0) return 0;
        if (func_sc05_018_80184828() != k) return 0;
        func_sc05_018_80182018(AF(o, s32, 0x64));
        break;
    default:
        return 0;
    }
    ResetScriptVM();
    return &CallActionHandler;
}

void func_sc05_018_80182018(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    func_sc05_018_8018469C(arg0, (s32) &D_sc05_018_8018AD84);
}

void func_sc05_018_80182048(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    HideModel(arg0);
    PlaceObject(arg0, (s32) &D_sc05_018_8018AD84);
}

void func_sc05_018_8018208C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    PlaceObject(arg0, (s32) &D_sc05_018_8018AD84);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_018_801CC388);
    func_sc05_018_80184674(arg0);
}

void func_sc05_018_801820E8(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        if (func_sc05_018_801855C4(1) != 0) {
            func_sc05_018_801848B8(o, &D_sc05_018_8019F638, 0, 0x40);
            o->stateCount = 1;
        }
        break;
    case 1:
        func_sc05_018_801855C4(1);
        if (func_sc05_018_80184988(o) != 0) {
            func_sc05_018_801848B8(o, &D_sc05_018_8019F644, 1, 0x40);
            o->stateCount = 2;
            AF(o->ext0, s16, 0x108) = 0;
            AF(o->ext0, s32, 0xB0) = 2;
        }
        break;
    case 2:
        if (func_sc05_018_80184988(o) != 0) {
            o->stateCount = 3;
        }
        break;
    case 3:
        if (func_sc05_018_801855C4(1) != 0) {
            o->stateCount = 4;
            func_sc05_018_801848B8(o, &D_sc05_018_8019F638, 1, 0x40);
        }
        break;
    case 4:
        func_sc05_018_801855C4(1);
        if (func_sc05_018_80184988(o) != 0) {
            o->state = 1;
            o->stateCount = 0;
            func_sc05_018_8018469C(o, &D_sc05_018_8018AD84);
        }
        break;
    case 5:
        o->stateCount++;
        RunScript(o, &D_sc05_018_8018ADF4);
        break;
    case 6:
        if (UpdateScript(o) != 0) {
            EndEvent(o);
            SetScript(o, &D_sc05_018_801CC388);
            func_sc05_018_80184674(o);
            o->stateCount = 2;
        }
        break;
    }
}

void func_sc05_018_80182290(StageActor *arg0) {
    D_sc05_018_8018AE9C[arg0->state]();
}

s32 func_sc05_018_801822CC(void) {
    AF(D_sc05_018_801E6814, s32, 4) = D_sc05_018_8018ADA8[func_sc05_018_80184828()];
}

void func_sc05_018_80182304(StageActor *arg0) {
    AF(arg0->ext0, s32, 0xB0) = 2;
    if (func_sc05_018_80184828() != 1) {
        if (func_sc05_018_801845B4(5, 0, 5, 0x1E) != 0) {
            func_sc05_018_8018208C((s32) arg0);
            return;
        }
        if (func_sc05_018_80184590(7, 0x15) != 0) {
            func_sc05_018_80182048((s32) arg0);
        }
    }
}

void func_sc05_018_80182384(StageActor *arg0) {
    u16 temp_v1;

    temp_v1 = arg0->stateCount;
    switch (temp_v1) {                              /* irregular */
    case 0:
        RunScript((s32) arg0, (s32) &D_sc05_018_8018AE34);
        arg0->stateCount = (u16) (arg0->stateCount + 1);
        return;
    case 1:
        if (IsEventDone((s32) arg0) != 0) {
            EndEvent((s32) arg0);
            arg0->state = 1;
            arg0->stateCount = 0U;
            func_sc05_018_8018469C((s32) arg0, (s32) &D_sc05_018_8018AD84);
        }
        return;
    }
}

void func_sc05_018_80182420(u8 *arg0) {
    s32 temp_v1;
    u16 temp_a0;

    temp_a0 = AF(arg0, u16, 0x34);
    temp_v1 = temp_a0 & 0xFFFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
        if (func_sc05_018_80184590(7, 0x15) == 0) {
            AF(arg0, s16, 2) = 1;
            AF(arg0, u16, 0x34) = 0U;
            func_sc05_018_8018469C((s32) arg0, (s32) &D_sc05_018_8018AD84);
            return;
        }
        return;
    case 1:
        AF(arg0, u16, 0x34) = (u16) (temp_a0 + 1);
        RunScript((s32) arg0, (s32) &D_sc05_018_8018ADBC);
        return;
    case 2:
        if (IsEventDone((s32) arg0) != 0) {
            EndEvent((s32) arg0);
            AF(arg0, s16, 2) = 2;
            AF(arg0, u16, 0x34) = 0U;
            HideModel((s32) arg0);
            PlaceObject((s32) arg0, (s32) &D_sc05_018_8018AD84);
        }
        break;
    }
}

void func_sc05_018_8018251C(StageActor *arg0) {
    if (func_sc05_018_801841A0(arg0, (s32) &D_sc05_018_8018AD94) != 0) {
        arg0->state = 1;
        arg0->stateCount = 0;
        func_sc05_018_8018469C(arg0, (s32) &D_sc05_018_8018AD84);
        arg0->def->unkC = 0x7FFF;
        arg0->workD4 = SpawnTalkMarker(arg0, (s32) &func_sc05_018_80181EEC);
    }
}

void func_sc05_018_8018258C(StageActor *arg0) {
    D_sc05_018_8018B09C[arg0->state]();
}

void func_sc05_018_801825C8(StageActor *arg0) {
    ModelObj *temp_v0;

    if (!(GetFlag(0xF0) & 0xFF)) {
        RejectSpawn(arg0);
        return;
    }
    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc05_018_801DCCD0);
        arg0->model->rot.vy = 0xE00;
        SetScript(arg0, (s32) &D_sc05_018_8018AEB0);
        arg0->def->unkC = 0x7FFF;
        arg0->hitData = (s32) ((s32) &D_sc05_018_8018AFB0 | 0x40000000);
        arg0->hitState = 0x800;
        arg0->workD4 = SpawnTalkMarker(arg0, (s32) &func_sc05_018_80182774);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc05_018_80182694(void) {
}

void func_sc05_018_8018269C(StageActor *arg0) {
    s32 *var_a1;

    if ((GetVar(0x40) & 0xFF) == 1) {
        SetVar(0x40, 2);
    }
    if (arg0->work10A == 0) {
        var_a1 = &D_sc05_018_8018B00C;
        arg0->work10A = 1;
        arg0->hitData = (s32) ((s32) &D_sc05_018_8018AFC0 | 0x40000000);
    } else {
        var_a1 = &D_sc05_018_8018B084;
    }
    RunScript((s32) arg0, (s32) var_a1);
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc05_018_80182734(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

s32 *func_sc05_018_80182774(u8 *arg0) {
    if (AF(AF(arg0, void *, 0x64), u16, 2) != 1) {
        return NULL;
    }
    if (DistSqToPlayer(arg0) >= 0x4000) {
        return NULL;
    }
    AF(AF(arg0, void *, 0x64), u16, 2)++;
    ResetScriptVM();
    return (s32 *) &CallActionHandler;
}

void func_sc05_018_801827E8(StageActor *arg0) {
    D_sc05_018_8018B0AC[arg0->state]();
}

void func_sc05_018_80182824(StageActor *arg0) {
    arg0->unkFC = 0;
    NextState((s32) arg0);
}

void func_sc05_018_80182844(StageActor *arg0) {
    B8 a;
    B8 b;
    SV8 c;

    a = *(B8 *)&D_sc05_018_801E4F60;
    b = *(B8 *)&D_sc05_018_801E4F68;
    if (arg0->unkFC == 0) {
        func_sc05_018_8018290C((SV8 *)&a, (SV8 *)&b);
    } else {
        PosToSVec((u8 *)arg0 + 4, &c);
        func_sc05_018_8018290C((SV8 *)&a, &c);
        func_sc05_018_8018290C(&c, (SV8 *)&b);
    }
}

void func_sc05_018_8018290C(SV8 *a, SV8 *b) {
    SV8 prev;
    SV8 cur;
    SV8 p0;
    SV8 p1;
    SV8 r0;
    SV8 r1;
    SV8 r2;
    SV8 r3;
    s32 loop;

    loop = 1;
    cur = *a;
    do {
        prev = cur;
        cur.x += 0x40;
        cur.y = a->y + (b->y - a->y) * (cur.x - a->x) / (b->x - a->x);
        cur.z = a->z + (b->z - a->z) * (cur.x - a->x) / (b->x - a->x);
        if (cur.x >= b->x) {
            cur.x = b->x;
            loop = 0;
        }
        p0 = prev;
        p0.y -= 4;
        p1 = cur;
        p1.y -= 4;
        if (ProjectPointOtz(&p0, &r0) & ~0x1000) continue;
        if (ProjectPointOtz(&p1, &r1) & ~0x1000) continue;
        p0 = prev;
        p0.y += 4;
        p1 = cur;
        p1.y += 4;
        if (ProjectPointOtz(&p0, &r2) & ~0x1000) continue;
        if (ProjectPointOtz(&p1, &r3) & ~0x1000) continue;
        func_sc05_018_80182BF4(&r0, &r1, &r2, &r3);
    } while (loop);
}

void func_sc05_018_80182BF4(SV4 *a, SV4 *b, SV4 *c, SV4 *d) {
    Q74 q;

    q.p[0] = *a;
    q.p[1] = *b;
    q.p[2] = *c;
    q.p[3] = *d;
    q.col = 0x808080;
    q.code = 0;
    q.flag = 0x50;
    q.c[0] = D_sc05_018_8018B0B4;
    q.c[1] = D_sc05_018_8018B0B8;
    q.c[2] = D_sc05_018_8018B0BC;
    q.c[3] = D_sc05_018_8018B0C0;
    DrawPrimFT4Screen(&q);
}

void func_sc05_018_80182CDC(u16 *pos, SV4 *d, s16 yaw, s16 n) {
    SV4 v;
    WMtx m;
    s16 i;
    u8 *o;
    SV4 *e;

    for (i = 0; i < n; i++) {
        o = (u8 *) SpawnProp(0x46);
        if (o != 0) {
            v.x = ((rand() & 0x7F) << 3) + 0xF00;
            v.y = yaw + ((rand() & 0x7F00) >> 5);
            v.z = 0;
            RotMatrixYXZ(&v, &m);
            ApplyMatrixSV(&m, d, &v);
            AF(o, s16, 6) = pos[0] + v.x;
            AF(o, s16, 0xA) = pos[1] + v.y;
            AF(o, s16, 0xE) = pos[2] + v.z;
            AF(o, s32, 0x10) = v.x << 12;
            AF(o, s32, 0x14) = v.y << 12;
            AF(o, s32, 0x18) = v.z << 12;
        }
    }
}

void func_sc05_018_80182E38(u8 *arg0) {
    D_sc05_018_8018B0C4[AF(arg0, u16, 2)]();
}

void func_sc05_018_80182E74(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    InitSpriteKind3(temp_s0, (s32) &D_800D387C, 0x270, 0x120);
    AF(temp_s0, u8, 0x27) = 0x9C;
    AF(temp_s0, s16, 0x1A) = 0x7000;
    AF(temp_s0, s16, 0x18) = 0x7000;
    AF(temp_s0, u8, 0x26) = 0x90;
    AF(temp_s0, u8, 0x25) = 0x90;
    AF(temp_s0, u8, 0x24) = 0x90;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x50000000);
    AF(arg0, s16, 0x2C) = 0x20;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_018_80182F04(u8 *arg0) {
    u16 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, u16, 0x2C) - 1;
    AF(arg0, u16, 0x2C) = temp_v0;
    if ((s16) temp_v0 == -1) {
        FreeProp();
        return;
    }
    MoveProp();
    temp_v0_2 = AF(temp_s0, u8, 0x26) - 2;
    AF(temp_s0, u8, 0x26) = temp_v0_2;
    AF(temp_s0, u8, 0x25) = temp_v0_2;
    AF(temp_s0, u8, 0x24) = temp_v0_2;
}

void func_sc05_018_80182F78(s32 arg0) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = (arg0 * 0x1C) + &D_sc05_018_8018B0CC;
    temp_v0 = SpawnProp(0x48);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 4) = (s32) AF(temp_s0, s32, 0);
        AF(temp_v0, s32, 8) = (s32) AF(temp_s0, s32, 4);
        AF(temp_v0, s32, 0xC) = (s32) AF(temp_s0, s32, 8);
        AF(temp_v0, s32, 0x10) = (s32) AF(temp_s0, s32, 0xC);
        AF(temp_v0, s32, 0x14) = (s32) AF(temp_s0, s32, 0x10);
        AF(temp_v0, s32, 0x18) = (s32) AF(temp_s0, s32, 0x14);
        AF(temp_v0, u16, 0x2C) = (u16) AF(temp_s0, u16, 0x18);
    }
}

void func_sc05_018_80183018(u8 *arg0) {
    D_sc05_018_8018B180[AF(arg0, u16, 2)]();
}

void func_sc05_018_80183054(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v0;

    temp_s0 = AF(arg0, s32, 0x20);
    InitSpriteKind3(temp_s0, (s32) &D_sc05_018_8018B174, 0x240, 0x1D0);
    AF(temp_s0, u8, 0x27) = 0x54;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x08000000);
    temp_v0 = AF(arg0, u16, 0x2C);
    AF(temp_s0, u16, 0x1A) = temp_v0;
    AF(temp_s0, u16, 0x18) = temp_v0;
    AF(arg0, u16, 0x2C) = 0x20U;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_018_801830D8(u8 *arg0) {
    u16 temp_v0;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, u16, 0x2C) - 1;
    AF(arg0, u16, 0x2C) = temp_v0;
    if ((s16) temp_v0 == -1) {
        FreeProp();
        return;
    }
    AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + 0x155);
    MoveProp((s32) arg0);
}

void func_sc05_018_80183138(StageActor *arg0) {
    D_sc05_018_8018B198[arg0->state]();
}

void func_sc05_018_80183174(StageActor *arg0) {
    s32 temp_v0;
    ModelObj *temp_v0_2;

    temp_v0 = GetProgress();
    if (((u32) (temp_v0 - 0x460) >= 0x28U) && (temp_v0 >= 0x3B6)) {
        temp_v0_2 = AllocActorModel();
        arg0->model = temp_v0_2;
        if (temp_v0_2 != 0) {
            func_8001C810(temp_v0_2, (s32) &D_sc05_018_8019F630);
            temp_v0_2->colour = 0xFA00FA;
            temp_v0_2->unk04 = (s32) ((s32)temp_v0_2->unk04 | 0x8000);
            arg0->targetClass = 2;
            arg0->hitData = (s32) ((s32) &D_sc05_018_8018B188 | 0x40000000);
            arg0->hitState = 0xC800;
            NextState((s32) arg0);
        }
    }
}

void func_sc05_018_80183228(void) {
}

void func_sc05_018_80183230(StageActor *arg0) {
    D_sc05_018_8018B1D0[arg0->state]();
}

void func_sc05_018_8018326C(StageActor *o) {
    typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
    s32 i;
    Fx24 *p;

    if (g_ClockHour == 7) {
        for (i = 0; i < 4; i++) {
            p = &((Fx24 *) &D_sc05_018_801E6658)[i];
            AF(p, s16, 0x16) = i;
            func_sc05_018_80183588((s32) p);
            if (i & 1) {
                p->done = 1;
            }
        }
        NextState((s32) o);
    }
}

void func_sc05_018_801832FC(StageActor *arg0) {
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
            if (((Fx24 *) &D_sc05_018_801E6658)[j].done == 0) {
                n++;
            }
        }
        if (n == 0) {
            SetState(arg0, 0);
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        p = &((Fx24 *) &D_sc05_018_801E6658)[i];
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
                    func_sc05_018_80183538((s32) p);
                }
            }
            func_sc05_018_80183644(p);
        }
    }
}

void func_sc05_018_80183538(s32 arg0) {
    s32 *var_a0;
    s32 var_v1;

    var_v1 = 0;
    var_a0 = &D_sc05_018_801E6658;
loop_1:
    var_v1 += 1;
    if (AF(var_a0, s32, 0x1C) != 0) {
        func_sc05_018_80183588((s32) var_a0);
        return;
    }
    var_a0 = (s32 *)((u8 *)var_a0 + 0x24);
    if (var_v1 >= 4) {
        return;
    }
    goto loop_1;
}

void func_sc05_018_80183588(s32 arg0) {
    s32 r;

    AF(arg0, s32 *, 0) = (s32 *)&D_sc05_018_8018B1A0;
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

void func_sc05_018_80183644(u8 *o) {
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

void func_sc05_018_8018375C(void) {
    u32 temp_v0;

    temp_v0 = GetProgress() - 0x85;
    switch (D_sc05_018_801E6804) {                  /* irregular */
    case 0:
        if (temp_v0 < 2U) {
            func_800D06CC();
        }
        D_sc05_018_801E6804 += 1;
        return;
    case 1:
        UpdateClockTint();
        func_800D06E8();
        return;
    }
}

void func_sc05_018_801837E8(u8 *p) {
    u16 t;

    switch (AF(p, u16, 0x34)) {
    case 0:
        if (TickTimer(p) != 0) {
            AF(p, u16, 0xFC) = 0;
            AF(p, u16, 0x34)++;
            AF(p, s32, 0x1C) = (rand() & 0x1F) + 0x1E;
        }
        break;
    case 1:
        t = AF(p, u16, 0xFC) + 6;
        AF(p, u16, 0xFC) = t;
        AF(AF(p, u8 *, 0x20), u16, 0x12) += t;
        if (TickTimer(p) != 0) {
            AF(p, u16, 0x34)++;
            AF(p, s32, 0x1C) = (rand() & 0x3F) + 0x3C;
        }
        break;
    case 2:
        AF(AF(p, u8 *, 0x20), u16, 0x12) += AF(p, u16, 0xFC);
        if (TickTimer(p) != 0) {
            AF(p, u16, 0x34)++;
        }
        break;
    case 3:
        t = AF(p, u16, 0xFC) - 3;
        AF(p, u16, 0xFC) = t;
        AF(AF(p, u8 *, 0x20), u16, 0x12) += t;
        if (AF(p, s16, 0xFC) < 9) {
            AF(p, u16, 0x34) = 0;
            AF(p, s32, 0x1C) = (rand() & 0x3F) + 0x3C;
        }
        break;
    }
    if ((u32) GetProgress() >= 0x492) {
        FreeActor(p);
    }
}

void func_sc05_018_80183960(StageActor *arg0) {
    D_sc05_018_801A1068[arg0->state]();
}

void func_sc05_018_8018399C(StageActor *arg0) {
    D_sc05_018_801A1088[arg0->state]();
}

void func_sc05_018_801839D8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, 0);
    PlaceObject((s32) arg0, (s32) &D_sc05_018_801A1060);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_018_801A1070 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0xC00;
    AF(arg0, u8, 0x75) = 8;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_018_80183A64(StageActor *arg0) {
    arg0->model->rot.vy = D_sc05_018_801A1080[arg0->param];
    if (GetProgress() >= 0x492U) {
        FreeActor((s32) arg0);
    }
}

s32 func_sc05_018_80183ABC(arg0)
    s32 arg0;
{
    s32 var_v0;

    var_v0 = GetProgress() < 0x492;
    if (var_v0 == 0) {
        var_v0 = QueueImage((s32) &D_sc05_018_801A1090);
    }
    return var_v0;
}

void func_sc05_018_80183AF8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if ((temp_v0 == 0) || (InitModel(temp_v0, (s32) &D_sc05_018_801A13E0), PlaceObject((s32) arg0, (s32) &D_sc05_018_801A1060), func_sc05_018_80183ABC(), ((GetProgress() < 0x492U) == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    SpawnActorArg(0x3BF, 0, (s32) arg0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
}

void func_sc05_018_80183B90(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    PlaceObject(arg0, (s32) &D_sc05_018_801A1164);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_018_801DA908);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_018_801A10E4 | 0x40000000);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0x1C) = 0;
    func_sc05_018_801848B8(arg0, (s32) &D_sc05_018_801DAC58, 1, 0x60);
    SnapToGround(arg0);
    UpdateModelZYX(arg0);
}

s32 func_sc05_018_80183C2C(s32 arg0) {
    AF(arg0, s16, 2) = 6;
    PlaceObject(arg0, (s32) &D_sc05_018_801A10B0);
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc05_018_801DA908);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_018_801A10E4 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    return func_sc05_018_801848B8(arg0, (s32) &D_sc05_018_801DAC58, 0, 0x60);
}

void func_sc05_018_80183CB8(s32 arg0) {
    s32 temp_s1;

    if ((GetFlag(0xF0) & 0xFF) || ((u32) (GetProgress() - 0x85) < 2U)) {
        RejectSpawn(arg0);
        return;
    }
    if (func_sc05_018_801841A0(arg0, (s32) &D_sc05_018_801A10C0) != 0) {
        AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
        temp_s1 = (s32) &D_sc05_018_801A10D4 | 0x40000000;
        AF(arg0, s32, 0x58) = temp_s1;
        AF(arg0, s16, 0x5C) = 0x800;
        if (func_sc05_018_80184590(9, 0x12) != 0) {
            AF(arg0, s16, 2) = 2;
            SetScript(arg0, (s32) &D_sc05_018_801DA3C0);
            ShowModel(arg0);
            PlaceObject(arg0, (s32) &D_sc05_018_801A10B0);
            AF(arg0, s32, 0x58) = temp_s1;
            AF(arg0, s16, 0x5C) = 0x800;
        } else {
            AF(arg0, s16, 2) = 1;
            AF(arg0, s16, 0x98) = 0;
            HideModel(arg0);
            PlaceObject(arg0, (s32) &D_sc05_018_801A10B0);
            AF(arg0, s32, 0x58) = temp_s1;
            AF(arg0, s16, 0x5C) = 0;
        }
        AF(arg0, s32, 0xD4) = SpawnTalkMarker(arg0, (s32) &func_sc05_018_80183F28);
    }
}

void func_sc05_018_80183DF0(StageActor *arg0) {
    D_sc05_018_801A116C[arg0->state]();
}

void func_sc05_018_80183E2C(u8 *arg0) {
    s32 n;

    n = (u8)GetVar(0xDC);
    SetFlag(0xDE, 1);
    if (n == 0) {
        AF(arg0, u8 *, 0xE4) = &D_sc05_018_801A0DBC;
    } else if (n & 1) {
        AF(arg0, u8 *, 0xE4) = &D_sc05_018_801A0E38;
    } else {
        AF(arg0, u8 *, 0xE4) = &D_sc05_018_801A0ED8;
    }
    n++;
    if (!(n & 0xFF)) {
        n = 2;
    }
    SetVar(0xDC, n & 0xFF);
}

void func_sc05_018_80183EC8(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 4;
    PlaceObject((s32) arg0, (s32) &D_sc05_018_801A10B0, arg2);
    ShowModel((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc05_018_801DAC10);
    RunScript((s32) arg0, (s32) &D_sc05_018_801A1104);
}

void *func_sc05_018_80183F28(u8 *o) {
    if (AF(AF(o, u8 *, 0x64), u16, 2) != 2) {
        return 0;
    }
    if (DistSqToPlayer(o) < 0x4000) {
        AF(AF(o, u8 *, 0x64), u16, 2)++;
        ResetScriptVM();
        return &CallActionHandler;
    }
    return 0;
}

void func_sc05_018_80183F9C(StageActor *arg0) {
    if (func_sc05_018_80184590(9, 0x12) != 0) {
        func_sc05_018_80183B90(arg0);
    }
}

void func_sc05_018_80183FDC(StageActor *arg0) {
    if (func_sc05_018_80184590(9, 0x12) == 0) {
        func_sc05_018_80183C2C(arg0);
    }
}

void func_sc05_018_8018401C(s32 arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        AF(arg0, s16, 2) = 2;
        SetScript(arg0, (s32) &D_sc05_018_801DA3C0);
        ShowModel(arg0);
        PlaceObject(arg0, (s32) &D_sc05_018_801A10B0);
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_018_801A10D4 | 0x40000000);
        AF(arg0, s16, 0x5C) = 0x800;
    }
}

void func_sc05_018_801840A0(s32 arg0) {
    if (func_sc05_018_80184988(arg0) != 0) {
        AF(arg0, s16, 2) = 2;
        SetScript(arg0, (s32) &D_sc05_018_801DA3C0);
        ShowModel(arg0);
        PlaceObject(arg0, (s32) &D_sc05_018_801A10B0);
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_018_801A10D4 | 0x40000000);
        AF(arg0, s16, 0x5C) = 0x800;
    }
}

void func_sc05_018_80184118(s32 arg0) {
    if (func_sc05_018_80184988(arg0) != 0) {
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x98) = 0;
        HideModel(arg0);
        PlaceObject(arg0, (s32) &D_sc05_018_801A10B0);
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_018_801A10D4 | 0x40000000);
        AF(arg0, s16, 0x5C) = 0;
    }
}

void func_sc05_018_80184180(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
}

void func_sc05_018_80184190(u8 *arg0) {
    AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
}

s32 func_sc05_018_801841A0(StageActor *arg0, s32 arg1) {
    s16 temp_a1;
    ModelObj *temp_v0;
    s32 var_s0;

    var_s0 = arg1;
    if (var_s0 == 0) {
        var_s0 = (s32) &D_sc05_018_801E00B4;
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

void func_sc05_018_8018423C(StageActor *arg0) {
    SetScript((s32) arg0, AF(arg0->ext1, s32, 4));
}

s32 func_sc05_018_80184268(StageActor *arg0) {
    return SetScript(arg0, AF(arg0->ext1, s32, 8));
}

void func_sc05_018_80184294(StageActor *arg0) {
    SetScript((s32) arg0, AF(arg0->ext1, s32, 0xC));
}

s32 func_sc05_018_801842C0(u8 *arg0) {
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

s32 func_sc05_018_80184344(o)
    u8 *o;
{
    u8 *g;
    s32 k;
    s32 n, q, r, i;
    s32 h, dd;
    g = &g_Status;
    k = D_sc05_018_801E01C8[AF(AF(o, u8 *, 0xD0), s16, 0x10)];
    if (k == -1) {
        D_sc05_018_801E66F8[0] = 0;
        return 0;
    }
    n = func_sc05_018_801844E8();
    h = g_ClockHour;
    q = n / 24;
    r = n % 24;
    dd = g_Day;
    if (n == 0) {
        i = D_sc05_018_801E01FC[h] - 1;
    } else if (dd - q >= 5) {
        i = 7;
    } else if (dd == q && h - r >= 2) {
        i = 6;
    } else {
        i = AF(g, u8, 0x39);
        i = D_sc05_018_801E01FC[i] - 1;
    }
    D_sc05_018_801E66F8[0] = 1;
    return D_sc05_018_801E00C8[i][k];
}

void func_sc05_018_80184474(u8 *arg0) {
    AF(arg0, s32, 0xE0) = func_sc05_018_80184344();
    func_sc05_018_801844A8((s32) arg0);
}

void func_sc05_018_801844A8(s32 arg0) {
    (*(s16 *)((u8 *)D_800BA2BA + (AF(AF(arg0, void *, 0xD0), s16, 0x10)) * 4)) = g_ClockHour + (g_Day * 0x18);
}

s16 func_sc05_018_801844E8(u8 *arg0) {
    return ((s16 *)&D_800BA2BA)[AF(AF(arg0, void *, 0xD0), s16, 0x10) * 2];
}

void func_sc05_018_80184510(StageActor *arg0) {
    D_sc05_018_801E022C[arg0->state]();
}

void func_sc05_018_8018454C(void) {
}

void func_sc05_018_80184554(u8 *arg0, s32 arg1, s32 arg2) {
    if ((s32) g_ClockHour >= arg1 && (s32) g_ClockHour < arg2) {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 1;
    } else {
        AF(AF(arg0, void *, 0xCC), s32, 0xB0) = 2;
    }
}

s32 func_sc05_018_80184590(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((s32) g_ClockHour >= arg0) {
        var_v0 = (s32) g_ClockHour < arg1;
    }
    return var_v0;
}

extern u8 g_ClockMinute;

typedef union { s16 w; struct { u8 lo, hi; } b; } ClockDiff;

s32 func_sc05_018_801845B4(s32 a0, s32 a1, s32 a2, s32 a3) {
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

void func_sc05_018_8018460C(StageActor *o, s32 n) {
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

void func_sc05_018_80184674(s32 arg0) {
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_018_801E0234 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x800;
}

void func_sc05_018_80184694(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc05_018_8018469C(s32 arg0, s32 arg1) {
    HideModel(arg0);
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s16, 0x5C) = 0;
    PlaceObject(arg0, arg1);
}

s32 func_sc05_018_801846E4(void) {
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

s32 func_sc05_018_80184740(void) {
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

s32 func_sc05_018_801847B4(void) {
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

s32 func_sc05_018_80184828(void) {
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

void func_sc05_018_80184884(s32 arg0, s32 arg1) {
    if (GetProgress(arg0, arg1) == 0x3A2) {
        SetProgress(0x3AC);
    }
}

s32 func_sc05_018_801848B8(u8 *o, s16 *t, s32 mode, s32 b) {
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

s32 func_sc05_018_80184988(u8 *a) {
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

s32 func_sc05_018_80184B50(void) {
    if (func_8016F1C4() != 0) {
        return 0;
    }
    if (IsPlayerAsleep() != 0) {
        return 2;
    }
    return 1;
}

void func_sc05_018_80184B98(u8 *arg0) {
    D_sc05_018_801E024C[AF(arg0, u16, 2)]();
}

void func_sc05_018_80184BD4(void) {
}

void func_sc05_018_80184BDC(void) {
}

void func_sc05_018_80184BE4(void) {
}

void func_sc05_018_80184BEC(void) {
}

void func_sc05_018_80184BF4(void) {
}

void func_sc05_018_80184BFC(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    ZeroFill((s32) &D_sc05_018_801E67F0, 0x14, arg2, arg3);
    D_sc05_018_801E66FC = 0;
    RejectSpawn(arg0);
}

void func_sc05_018_80184C40(void) {
}

void func_sc05_018_80184C48(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AllocActorModel(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc05_018_801D2DB8);
    SetModelCullBox(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    temp_v0_2 = AF(arg0, s32, 0x20);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x40);
    PlaceObject(arg0, (s32) &D_sc05_018_801E0244);
    AF(arg0, s16, 2) = 1;
}

void func_sc05_018_80184CD0(StageActor *a) {
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
                func_sc05_018_8018535C(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc05_018_801852E8(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 2:
        if ((a->state != 2 || a->stateCount == 0) && AF(a, s16, 0xEA) != k) {
            AF(a, s16, 0xEA) = k;
            if (AF(a, s16, 0xE8) != 0) {
                func_sc05_018_801853BC(a);
                AF(a, s16, 0xE8) = 1;
            } else {
                func_sc05_018_80185280(a);
                AF(a, s16, 0xE8) = 1;
            }
        }
        break;
    case 3:
        if (a->state != 2 || a->stateCount == 0) {
            func_sc05_018_801852E8(a);
        }
        break;
    case 4:
        if (a->state != 2 || a->stateCount == 0) {
            func_sc05_018_80185280(a);
        }
        break;
    }
    D_sc05_018_801E0524[a->state](a);
}

void func_sc05_018_80184EA8(StageActor *a, s32 arg1) {
    s32 m;
    s16 k;
    s16 *p;

    a->model = m = AllocActorModel(a, arg1);
    if (m == 0) {
        RejectSpawn(a);
        return;
    }
    k = a->param;
    p = &D_sc05_018_801E0294[k];
    switch (k) {
    case 7:
    case 9:
    case 10:
    case 12:
        func_8001C810(m, *(s32 *)((u8 *)D_sc05_018_801E0254 + *p * 8));
        AF(m, s32, 4) |= 0x8040;
        break;
    default:
        InitModel(m, *(s32 *)((u8 *)D_sc05_018_801E0254 + *p * 8));
        break;
    }
    MapPartsTmd(*(s32 *)((u8 *)D_sc05_018_801E0258 + *p * 8));
    SetModelCullBox(a->model, 0xC8, 0xB4);
    a->hitData = (u32)&D_sc05_018_801E026C | 0x40000000;
    a->hitState = 0x800;
    a->model->pose = &D_sc05_018_801E0288;
    AF(a, s16, 0xE8) = 0;
    AF(a, S12, 0xEC) = D_sc05_018_801E027C;
    a->work10A = 6;
    func_sc05_018_80185280(a);
    a->message = func_sc05_018_80185650;
}

void func_sc05_018_80185048(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        break;
    case 1:
        func_sc05_018_80185754(o);
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

void func_sc05_018_801850C4(StageActor *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    if (func_sc05_018_80184B50() == 2) {
        func_sc05_018_801852E8(arg0);
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
        func_sc05_018_801852E8(arg0);
    }
    func_sc05_018_801858D0(arg0);
}

void func_sc05_018_80185190(StageActor *arg0) {
    func_sc05_018_801858D0(arg0);
}

void func_sc05_018_801851B0(s32 arg0) {
    u16 temp_v0;
    u16 temp_v0_2;

    if (func_sc05_018_80184B50() == 2) {
        func_sc05_018_80185280(arg0);
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
            func_sc05_018_80185280(arg0);
            return;
        }
        func_sc05_018_801858D0(arg0);
    }
}

void func_sc05_018_80185280(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc05_018_801E0258 + ((D_sc05_018_801E0294[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc05_018_801858D0(arg0);
}

void func_sc05_018_801852E8(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc05_018_801E0254 + ((D_sc05_018_801E0294[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0xB0) = 0;
    func_sc05_018_801858D0(arg0);
}

void func_sc05_018_8018535C(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc05_018_801E0254 + ((D_sc05_018_801E0294[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x84) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
}

void func_sc05_018_801853BC(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 8;
    AF(arg0, s16, 0xFE) = 0x600;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x102) = 2;
    AF(AF(arg0, void *, 0x20), s32, 0x24) = (s32) (*(s32 *)((u8 *)D_sc05_018_801E0254 + ((D_sc05_018_801E0294[AF(arg0, s16, 0x70)] * 8)) * 1));
    AF(arg0, s16, 0x5C) = 0x800;
    AF(arg0, s32, 0xB0) = 0;
    func_sc05_018_801858D0(arg0);
}

void func_sc05_018_8018543C(s32 arg0, s32 arg1) {
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

void func_sc05_018_80185494(s32 arg0) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) (s16) arg0);
    if (temp_v0 != 0) {
        if (AF(temp_v0, u16, 2) == 2) {
            AF(temp_v0, s32, 0xB0) = 1;
        }
        func_sc05_018_80185A10(arg0, 0x3C);
    }
}

void func_sc05_018_801854F4(s16 arg0) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, u16, 2) == 4)) {
        AF(temp_v0, s32, 0xB0) = 2;
    }
}

void func_sc05_018_8018553C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s16) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 1;
        func_sc05_018_80185A10(arg0, 0x3C);
    }
}

void func_sc05_018_8018558C(s16 arg0) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x108) = 2;
    }
}

s32 func_sc05_018_801855C4(s32 arg0) {
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

void *func_sc05_018_80185650(StageActor *o) {
    if (D_800B9A08 == 0x3069) return 0;
    if (o->state != 2) return 0;
    if (o->stateCount != 0) return 0;
    if (o->work10A != 0) return 0;
    if (!func_sc05_018_801856F4(o)) return 0;
    if (func_sc05_018_80185C8C(o)) return 0;
    o->stateCount = 1;
    ResetScriptVM();
    return &CallActionHandler;
}

s32 func_sc05_018_801856F4(StageActor *arg0) {
    s32 o[2];
    FeSv v;

    v.x = g_PlayerX;
    v.y = D_80126B62;
    v.z = D_80126B66;
    WorldToActorLocal(arg0, (s32) &v, (s32) o);
    return func_8012CB64((s32) o, -0x80, 0x80, -0x60, 0);
}

void func_sc05_018_80185754(u8 *o) {
    u8 *s1;
    u8 *s0;
    s32 v;
    s1 = &g_Status;
    v = GetProgress();
    s0 = D_sc05_018_801E04DC[AF(o, s16, 0x70)];
    switch (AF(o, s16, 0x70)) {
    case 9:
        if (s1[0x42] == 0) s0 = &D_sc05_018_801E04AC;
        break;
    case 8:
        if (s1[0x42] == 3) s0 = &D_sc05_018_801E04AC;
        break;
    case 12:
        if ((u32)(v - 300) < 300 && (u8)GetFlag(0xFA) != 0) s0 = &D_sc05_018_801E04C4;
        break;
    case 14:
        if (s1[0x42] == 6) s0 = &D_sc05_018_801E04AC;
        if ((u32)(v - 100) < 500) s0 = &D_sc05_018_801E04C4;
        if (func_sc05_018_80184828() == 1) s0 = &D_sc05_018_801E04C4;
        break;
    case 13:
        if (s1[0x42] == 2) s0 = &D_sc05_018_801E04AC;
        if (func_sc05_018_801846E4() == 3) s0 = &D_sc05_018_801E04C4;
        if (func_sc05_018_80184828() == 1) s0 = &D_sc05_018_801E04C4;
        break;
    }
    RunScript(o, s0);
}

s32 func_sc05_018_801858D0(s32 arg0) {
    AF(arg0, s16, 0xF4) = (s16) -(s16) AF(arg0, u16, 0xFE);
    AF(AF(arg0, void *, 0x20), s32, 0x20) = (s32) (arg0 + 0xEC);
    return func_sc05_018_80185904(arg0);
}

s32 func_sc05_018_80185904(u8 *o) {
    if (AF(o, u16, 2) == 4 && AF(o, s32, 0xCC) != 1) {
        AF(o, s16, 0x5C) = 0;
    } else {
        AF(o, s16, 0x5C) = 0x800;
    }
}

void func_sc05_018_80185938(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == 0)) {
        AF(temp_v0, s32, 0xCC) = arg2;
        AF(temp_v0, s32, 0xD0) = arg0;
    }
}

void func_sc05_018_8018599C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) (s16) arg1);
    if ((temp_v0 != 0) && (AF(temp_v0, s32, 0xCC) == arg2) && (AF(temp_v0, s32, 0xD0) == arg0)) {
        AF(temp_v0, s32, 0xCC) = 0;
        AF(temp_v0, s32, 0xD0) = 0;
    }
}

void func_sc05_018_80185A10(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = FindActorByKindArg(0x61, (s32) (s16) arg0);
    if ((temp_v0 != 0) && (AF(temp_v0, s16, 0x10A) < arg1)) {
        AF(temp_v0, s16, 0x10A) = (s16) arg1;
    }
}

void func_sc05_018_80185A68(StageActor *arg0) {
    D_sc05_018_801E0548[arg0->state]();
}

void func_sc05_018_80185AA4(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    arg0->hitData = (s32) ((s32) &D_sc05_018_801E0538 | 0x40000000);
    arg0->stateCount = 0;
    arg0->timer = 0;
    arg0->hitState = 0x800;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc05_018_80185B20(StageActor *o) {
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

s32 func_sc05_018_80185C40(s32 arg0) {
    u16 *temp_a0;

    temp_a0 = AF(arg0, u16 *, 0xCC);
    if (temp_a0 != NULL) {
        if (*temp_a0 == 0x61) {
            return func_sc05_018_80185C8C((s32) temp_a0);
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_sc05_018_80185C8C(StageActor *o) {
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
        if (func_sc05_018_80185D98(p) == 0) continue;
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

s32 func_sc05_018_80185D98(u16 *a) {
    
    u16 *p;
    for (p = (u16 *)&D_sc05_018_801E0550; (s16)*p != -1; p++) {
        if (*a == (s16)*p) return 1;
    }
    return 0;
}

void func_sc05_018_80185DF4(StageActor *arg0) {
    u16 sp10[3];

    FaceHelper(arg0, (s32) &D_sc05_018_801E02E4, (s32) sp10);
    AF(D_sc05_018_801E6814, s32, 4) = (s32) (sp10[0] | ((s16) sp10[2] << 0x10));
}

void func_sc05_018_80185E34(StageActor *arg0) {
    D_sc05_018_801E3460[arg0->state]();
}

void func_sc05_018_80185E70(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc05_018_801E334C) != 0) {
        arg0->reactive = 1;
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc05_018_80186C60);
        SpawnTalkMarker(arg0, (s32) &func_sc05_018_80185F68);
    }
}

void func_sc05_018_80185ED4(void) {
}

void func_sc05_018_80185EDC(StageActor *arg0) {
    RunScript((s32) arg0, D_sc05_018_801E343C[arg0->param]);
    arg0->state = 3;
}

void func_sc05_018_80185F28(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

s32 *func_sc05_018_80185F68(u8 *arg0) {
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

void func_sc05_018_80185FC4(StageActor *arg0) {
    D_sc05_018_801E3528[arg0->state]();
}

void func_sc05_018_80186000(s32 arg0, s32 arg1) {
    u16 val;
    s16 r;
    s32 s;
    s32 o;

    val = D_sc05_018_801E3508[AF(arg0, s16, 0xFC)];
    if (D_sc05_018_801E3508[AF(arg0, s16, 0xFC)] == 0) {
        AF(arg0, s16, 0xFC) = 0;
        val = D_sc05_018_801E3508[0];
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

void func_sc05_018_801860C4(u8 *arg0) {
    D_sc05_018_801E353C[AF(arg0, u16, 2)]();
}

void func_sc05_018_80186100(StageActor *arg0) {
    s16 n;

    arg0->unkFC = 0;
    arg0->timer = 1;
    n = (u16)arg0->param & 7;
    arg0->workFE = (n < 2) ? 0x1E : 0xF;
    if (n != 0) {
        func_sc05_018_80186000(arg0, -0x80);
        func_sc05_018_80186000(arg0, -0x30);
        func_sc05_018_80186000(arg0, 0x20);
        func_sc05_018_80186000(arg0, 0x70);
        func_sc05_018_80186000(arg0, 0xC0);
    }
    if (n >= 2) {
        func_sc05_018_80186000(arg0, -0x58);
        func_sc05_018_80186000(arg0, -8);
        func_sc05_018_80186000(arg0, 0x48);
        func_sc05_018_80186000(arg0, 0x98);
        func_sc05_018_80186000(arg0, 0xE8);
    }
    NextState(arg0);
}

void func_sc05_018_801861E8(s32 arg0, s32 arg1) {
    if (TickTimer(arg0) != 0) {
        AF(arg0, s32, 0x1C) = (s32) AF(arg0, s16, 0xFE);
        func_sc05_018_80186000(arg0, 0x110);
    }
}

void func_sc05_018_80186228(u8 *arg0) {
    s32 temp_s0;
    u16 temp_v1;

    temp_s0 = AF(arg0, s32, 0x20);
    InitSpriteKind1(temp_s0, (s32) &D_sc05_018_801E3530, 0x280, 0x100);
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x70000000);
    temp_v1 = AF(arg0, u16, 0x2C);
    AF(temp_s0, u8, 0x27) = 0x9E;
    AF(temp_s0, s16, 0x2C) = 4;
    AF(temp_s0, u16, 0x1C) = temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v1;
    AF(temp_s0, u16, 0x18) = temp_v1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_018_801862B0(u8 *arg0) {
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) - AF(arg0, s32, 0x10));
    if (AF(arg0, s16, 6) < -0x110) {
        FreeProp((s32) arg0);
    }
}

void func_sc05_018_801862F8(StageActor *arg0) {
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

s32 func_sc05_018_801863A4(void) {
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

void func_sc05_018_80186408(Mover *arg0) {
    arg0->state = 2;
    arg0->model->rot.vy = -0x600;
    UpdateModelZYX(arg0);
}

s32 func_sc05_018_80186438(Mover *arg0) {
    arg0->state = 4;
    arg0->model->rot.vy = 0x600;
    UpdateModelZYX(arg0);
}

void func_sc05_018_80186468(u8 *o) {
    u8 *r;
    s32 s1;
    r = AllocActorModel();
    AF(o, u8 *, 0x20) = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(r, AF(o, s16, 0x70) == 0 ? &D_sc05_018_801E365C : &D_sc05_018_801E374C);
    AF(o, s16, 0x5C) = 0x800;
    AF(o, u32, 0x58) = (u32)D_sc05_018_801E3764[AF(o, s16, 0x70)] | 0x40000000;
    PlaceObject(o, D_sc05_018_801E3754[AF(o, s16, 0x70)]);
    AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
    s1 = GetProgress();
    if ((u8)GetFlag(0xF6) == 0 && s1 < 0xE6) {
        if (AF(o, s16, 0x70) == 0) {
            AF(o, s16, 0x2) = 1;
            AF(o, s16, 0x34) = 0;
            SpawnTalkMarker(o, func_sc05_018_80186614);
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

void func_sc05_018_801865D8(StageActor *arg0) {
    D_sc05_018_801E3894[arg0->state]();
}

s32 *func_sc05_018_80186614(u8 *arg0) {
    if ((AF(AF(arg0, void *, 0x64), u16, 2) == 1) && (AF(arg0, u16, 0x34) == 0)) {
        if (func_sc05_018_801863A4() != 0) {
            AF(AF(arg0, void *, 0x64), s16, 0x34) = 1;
            ResetScriptVM();
            return &CallActionHandler;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}

void func_sc05_018_80186690(u8 *arg0) {
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

s32 func_sc05_018_80186700(void) {
    return D_sc05_018_801E6700 == 2;
}

void func_sc05_018_80186718(void) {
    PlaySoundId(0x7E0, 0);
}

void func_sc05_018_8018673C(StageActor *o) {
    ModelObj *p;
    switch (o->stateCount) {
    case 0:
        break;
    case 1:
        if (func_800D0F8C(0x59) == 0) {
            RunScript(o, &D_sc05_018_801E37D4);
            o->stateCount = 2;
        } else {
            RunScript(o, &D_sc05_018_801E37EC);
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
            func_sc05_018_80186408(o);
        }
        break;
    }
}

void func_sc05_018_80186870(u8 *arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, u16, 0x34);
    if ((temp_v1 != 0) && (temp_v1 == 1)) {
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + 0x20);
        if (TickTimer((s32) arg0, arg1) != 0) {
            func_sc05_018_80186438((s32) arg0);
        }
    }
}

void func_sc05_018_801868D8(void) {
}

void func_sc05_018_801868E0(void) {
}
