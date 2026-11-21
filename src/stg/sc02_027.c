#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_027_8017BE9C(void) {
}

void func_sc02_027_8017BEA4(void) {
}

void func_sc02_027_8017BEAC(void) {
}

void func_sc02_027_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_027_8018ED3C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void AddMaxBp();
extern void AddBp();
extern void PlaySoundId();
extern void func_sc02_027_8017BEBC();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern void InitModel();
extern s32 AllocActorModel();
extern void func_800D20C0();
extern void func_800D23D0();
extern void StartEvent();
extern s32 IsEventDone();
extern void EndEvent();
extern void SetVar();
extern void func_8002955C();
extern s32 func_8002953C();
extern void GiveItem();
extern void FreeActor();
extern void SpawnEffect();
extern void (*D_sc02_027_8018ED94[])();
extern void PlaySe();
extern void func_sc02_027_8017D030();
extern void HidePlayerScene();
extern void SetPlayerFlag7E2();
extern void FreeEffect();
extern void (*D_sc02_027_8018EDA8[])();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern void (*D_sc02_027_8018EDBC[])();
extern void func_800D22E4();
extern void func_sc02_027_8017D728();
extern void (*D_sc02_027_8018F044[])();
void func_sc02_027_8017EDD8(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc02_027_8018F04C[])();
void func_sc02_027_8017EE00(void);
extern void func_800D1EBC();
extern void (*D_sc02_027_8018F058[])();
extern void (*D_sc02_027_8018F064[])();
void func_sc02_027_8017EE28(void);
extern void (*D_sc02_027_8018F070[])();
extern u8 D_sc02_027_8018F07C;
extern void StartPlayerActionScript();
extern u8 D_sc02_027_8018F080;
extern u8 D_sc02_027_8018F084;
extern void func_sc02_027_8017F27C();
extern void (*D_sc02_027_8018F08C[])();
extern s32 func_sc02_027_8017FCAC();
extern void (*D_sc02_027_8018F1F8[])();
extern void (*D_sc02_027_8018F200[])();
extern void (*D_sc02_027_8018F24C[])();
extern void (*D_sc02_027_8018F450[])();
extern void (*D_sc02_027_8018F470[])();
extern void (*D_sc02_027_8018F49C[])();
extern void (*D_sc02_027_801AB5EC[])();
extern void (*D_sc02_027_801AB708[])();
extern void (*D_sc02_027_801AD7AC[])();
extern void (*D_sc02_027_801AD860[])();
extern void (*D_sc02_027_801AF89C[])();
extern void (*D_sc02_027_801AFBB8[])();
extern void (*D_sc02_027_801B45BC[])();
extern void (*D_sc02_027_801D2B0C[])();
extern void (*D_sc02_027_801D6A1C[])();
extern void (*D_sc02_027_801D6D64[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc02_027_8018B56C;
extern s32 GetFlag();
extern void RejectSpawn();
extern u8 D_sc02_027_801D6A54;
extern s32 * func_sc02_027_8018B0FC();
extern s32 D_sc02_027_801D6ABC[];
extern s32 SpawnActorArg();
extern void SetFlag();
extern void RunScript();
extern s32 D_sc02_027_801D6C88;
extern s32 D_sc02_027_801D6C8C;
extern s32 D_sc02_027_801D6CA0;
extern s32 D_sc02_027_801D6CB4;
extern s32 D_sc02_027_801D6D20;
extern s32 D_sc02_027_801D6C04[];
extern s32 D_sc02_027_801D6B80[];
extern s32 UpdateScript();
extern void SetProgress();
extern void UploadFlagImages();
extern s32 func_sc02_027_8018AEA4();
extern void AddMoney();
extern s32 func_80174764();
extern void (*D_sc02_027_801D6D8C[])();
extern u8 D_sc02_027_801D6A88;
extern u8 D_sc02_027_801D722C;
extern u8 D_sc02_027_801D744C;
extern u8 D_sc02_027_801D723C;
extern u8 D_sc02_027_801D7344;

extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 func_sc02_027_8017FAE0();
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
extern s32 D_sc02_027_8018F104[];
extern s32 func_8013B7F4();
extern s32 g_BgmPackPlaying;
extern s32 D_sc02_027_801DA120;
extern s32 D_sc02_027_801DA124;
extern s32 D_sc02_027_801DA128;
extern void (*D_sc02_027_8018F2E8[])();
extern s32 func_sc02_027_80181328();
extern void (*D_sc02_027_801AB590[])();
extern void func_sc02_027_80182204();
extern s32 D_sc02_027_801AB548;
extern void (*D_sc02_027_801AB604[])();
extern void CarryPlayerClipped();
extern void SetState();
extern void (*D_sc02_027_801AB650[])();
extern void func_sc02_027_80182828();
extern s16 D_80126B62;
extern s16 g_PlayerX;
extern s32 TickTimer();
extern void func_sc02_027_801825D8();
extern void MoveObject();
extern void func_sc02_027_80182610();
extern void func_sc02_027_80182724();
extern void func_sc02_027_80182758();
extern u8 D_sc02_027_801AB660;
extern void func_sc02_027_80182D4C();
extern void (*D_sc02_027_801AB778[])();
extern void CarryPlayerExact();
extern s16 D_sc02_027_801AB720;
extern void func_sc02_027_801832FC();
extern s32 RequestBgmPack();
extern void func_sc02_027_801839C8();
extern void func_sc02_027_80183680();
extern s32 func_800CF8B4();
extern void func_sc02_027_801836B0();
extern u8 D_sc02_027_801AD2C0;
extern u8 D_sc02_027_801AD2E0;
extern u8 D_sc02_027_801AD3A4;
extern s32 MoveCollide();
extern void PlaySoundAtActor();
extern s32 MoveOnGround();
extern void CarryPlayer();
extern void (*D_sc02_027_801AF850[])();
extern u8 D_sc02_027_801B42B8;
extern s32 TargetInSight();
extern s32 IsOnScreen();
extern void UpdateModelZYX();
extern s32 DistSqToPlayer();
extern u8 D_sc02_027_801AF758;
extern void SpawnKind39Trio();
extern void func_800CB0E8();
extern void DropItem();
extern void func_sc02_027_801862A8();
extern void GainStat0FromActor();
extern void DespawnActor();
extern u8 D_sc02_027_801AF8E8;
extern u8 D_sc02_027_801AFA70;
extern void TakeDamageAndRecoil();
extern void StopWithGravity();
extern void PlayParamScript();
extern s32 IsPlayerHitBy();
extern void ClearPlayerHitBy();
extern u8 D_sc02_027_801B55B8;
extern void SetLocalVelocity();
extern u8 D_sc02_027_801C1AB4;
extern void SpawnActor();
extern u8 D_sc02_027_801B55D4;
extern u8 D_sc02_027_801C189C;
extern s16 g_PlayerHitKind;
extern s16 g_PlayerHitDamage;
extern s32 g_PlayerAttacker;
extern u8 D_sc02_027_801B586C;
extern u8 D_sc02_027_801B5874;
extern u8 D_sc02_027_801C235C;
extern u8 D_sc02_027_801C2ADC;
extern s32 ActorSegmentHitsPlayer();
extern u8 D_sc02_027_801C269C;
extern u8 D_sc02_027_801C2F4C;
extern void NextState();
extern s8 D_sc02_027_801DA8CC;
extern void func_sc02_027_8018A090();

extern u8 D_sc02_027_801A8F9C;
extern u8 D_sc02_027_801A93FC;
extern u8 D_sc02_027_801A9564;
extern s32 D_sc02_027_801DA110;
extern s32 D_sc02_027_801DA114;
extern s32 D_sc02_027_801DA118;
extern s32 D_sc02_027_801DA11C;
extern s32 D_sc02_027_801DA12C;
extern s32 D_sc02_027_801DA9B4;
extern s32 D_sc02_027_8018F0C4[];
extern void func_sc02_027_8017FED4();
extern void QueueImage();
extern s32 func_sc02_027_80180770();
extern s32 MachineLoopSound();
extern u8 D_sc02_027_8018F264;
extern void ToggleModel();


extern u8 D_sc02_027_8018B99C;
extern void func_80153C30();
extern void HitPlayerFatal();
extern void StartCameraShake();


extern void func_8001CA1C();
extern SV8 D_sc02_027_801AD67C[];
extern u8 D_sc02_027_801AD3E0;
extern u8 D_sc02_027_801AD4A0;
extern u8 D_sc02_027_801AD528;
extern u8 D_sc02_027_801AD5E8;
extern u8 D_sc02_027_801AD6CC;
extern u8 D_sc02_027_801AD6F0;
extern u8 D_sc02_027_801AD6DC;
extern u8 D_sc02_027_801AD6E8;

extern s32 D_sc02_027_801AB624[];
extern u8 D_sc02_027_801AB5F4;
extern u8 D_sc02_027_801ACA00;
extern void func_sc02_027_801825B0();
extern u8 D_sc02_027_801AB614;
extern u8 D_sc02_027_801ACB40;
void func_sc02_027_801826FC(StageActor *arg0);

extern s32 D_sc02_027_801DA130;
extern void ZeroFill();
extern void (*D_sc02_027_801AB72C[])();
extern s32 func_sc02_027_80183418();
extern u8 D_sc02_027_801AB728;
extern u8 D_sc02_027_801AB760;
extern s32 FindObj68ByKind();
extern void GainStat0();
extern void GainStat1();
extern void GainStat3();
extern void GainStat2();
extern void ShowDamage();
extern void func_sc02_027_801838E8();

extern void (*D_sc02_027_801B5940[])();
extern s32 ActorTouchesPlayer();
extern void UpdateModelYXZ();

extern void FreeProp();
extern void MoveProp();

extern u8 D_sc02_027_8018F724;
extern u8 D_sc02_027_8018F8DC;
s32 func_sc02_027_8017FAB0(s32 arg0);
extern s32 *g_SpawnListFixed;
extern s32 *g_SpawnListRanged;
extern u8 D_sc02_027_8018F8F0;
extern u8 D_sc02_027_8018F990;
extern s32 D_801151D8;
extern u8 D_sc02_027_8018F9A4;
extern u8 D_sc02_027_8018FAF8;
extern u8 D_sc02_027_8018FB0C;
extern u8 D_sc02_027_8018FBC0;
extern u8 D_sc02_027_8018FBD4;
extern u8 D_sc02_027_8018FC38;
extern u8 D_sc02_027_8018FC4C;
extern u8 D_sc02_027_8018FCD8;
extern s32 D_8012704C;
extern u8 D_sc02_027_8018FCEC;
extern u8 D_sc02_027_8018FD8C;
extern u8 D_sc02_027_801B5904;
extern u8 D_sc02_027_801B591C;
extern u8 D_sc02_027_801B5934;
extern u8 D_sc02_027_801B594C;
extern u8 D_sc02_027_801B5A0C;
extern u8 D_sc02_027_801B5A94;

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 GetVar();
extern s32 g_PlayerPosX;
extern u16 g_Actors;
extern u16 D_800B99DA;
extern s16 D_800B9A08;
extern u8 D_sc02_027_8018ECEC;
extern u8 D_sc02_027_8018EC88[];
extern s32 PosDist();
extern void TakePlayerControl();
extern void SetShapeCircle();
extern u8 D_sc02_027_801D9F00;
extern u8 D_sc02_027_801D9F01;
extern u8 D_sc02_027_801D9F02;
extern u8 D_sc02_027_801D9F04;
extern u8 D_sc02_027_801D9F05;
extern u8 D_sc02_027_801D9F06;
extern s32 D_sc02_027_801DA104;
extern s32 D_sc02_027_801DA108;
extern s32 D_sc02_027_801DA10C;
extern s32 AllocSpriteInRange();
extern void func_8001CD50();
extern u16 D_sc02_027_801D3148;

extern void HeadingPitchTo();
extern s32 SpawnKind205();
extern u8 *g_ActiveCamera;
extern u8 D_sc02_027_801C1214;
extern u8 D_sc02_027_801C141C;
extern u8 D_sc02_027_801C1FD4;
extern s32 CollidePath();
extern void SetReactionStep();


typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
extern VoidFn D_sc02_027_801AD3D8[];
extern s32 HeadingTo();
extern s32 PathHitsModel();
extern void SnapToGround();
extern u8 D_sc02_027_801BB988;
extern u8 D_sc02_027_801C30CC;
extern s32 TurnStepToTarget();
extern s32 SetLocalVelocityXZ();
extern u8 D_sc02_027_801B588C;
extern u8 D_sc02_027_801C2594;
extern s32 TraceMap();
extern s32 DistSqToTarget();
extern s32 TargetInFront();
extern s32 D_80126B64;

typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
extern s8 D_sc02_027_8018ED68[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern void DrawPrimG4Mtx();
extern WMtx GsIDMATRIX;
extern void DrawPrimLineG2Mtx();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern WorkHead D_800AF630;
extern WMtx D_800AF648;
extern s32 GroundDistSqTo();
extern s32 TurnStep();
extern s32 HeadingToPoint();
extern u8 D_sc02_027_801B55C4;
extern u8 D_sc02_027_801B5898;
extern u8 D_sc02_027_801C30E4;
extern s16 D_sc02_027_801D693C;
extern s16 D_sc02_027_801D693E;
extern s16 D_sc02_027_801D6940;
extern Blk30 D_sc02_027_801D6944;
extern s16 D_sc02_027_801D6974;
extern s16 D_sc02_027_801D6976;
extern s16 D_sc02_027_801D6978;
extern Blk30 D_sc02_027_801D697C;
extern s16 D_sc02_027_801D69AC;
extern s16 D_sc02_027_801D69AE;
extern s16 D_sc02_027_801D69B0;
extern Blk30 D_sc02_027_801D69B4;
extern s16 D_sc02_027_801D69E4;
extern s16 D_sc02_027_801D69E6;
extern s16 D_sc02_027_801D69E8;
extern Blk30 D_sc02_027_801D69EC;
extern Blk30 g_Lights;
extern void SetAmbientColor();
extern void ApplyLight();

typedef struct { u8 b[0x34]; } R34;
extern u16 D_sc02_027_801AD314[];
extern u16 D_sc02_027_801AD33C[];
extern u16 D_sc02_027_801AD364[];
extern VoidFn D_sc02_027_801AD38C[];
extern void PlaySoundFor();
extern R34 D_sc02_027_801B55F4[];
extern u8 D_sc02_027_801B572C;
extern u8 D_sc02_027_801B57CC;
extern u8 D_sc02_027_801B5814;
extern u8 D_sc02_027_801C2DCC;
extern void SpawnShadow();

typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern u8 D_sc02_027_801C2254;
extern u8 D_sc02_027_801C28D4;

extern SV4 D_sc02_027_801D2B30;
extern SV4 D_sc02_027_801D2B38;
extern SV4 D_sc02_027_801D2B40;
extern SV4 D_sc02_027_801D2B48;
extern SV4 D_sc02_027_801D2B50;
extern SV4 D_sc02_027_801D2B58;
extern SV4 D_sc02_027_801D2B60;
extern SV4 D_sc02_027_801D2B68;
extern s32 GetCameraHeading();
extern void PosToSVec();

extern s32 MoveCollidePassable();

extern s32 D_sc02_027_801DA780;
extern s32 FirstActor();
extern s32 PosDistSq();
extern s32 NextActor();
extern s32 MoveCollidePassableAt();
extern void SpawnKind1C();

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
extern u8 D_sc02_027_8018EC54;
extern u8 D_sc02_027_8018EC90;
extern u8 D_sc02_027_801D3120;
extern u8 D_sc02_027_801D9E90;
extern u8 D_sc02_027_801D9E9C;
extern u8 D_sc02_027_801D9E9D;
extern u8 D_sc02_027_801D9E9E;
extern u8 D_sc02_027_801D9EAC;
extern u8 D_sc02_027_801D9EAD;
extern u8 D_sc02_027_801D9EAE;
extern u8 D_sc02_027_801D9EBD;
extern u8 D_sc02_027_801D9EBE;
extern u8 D_sc02_027_801D9EC0;
extern u8 D_sc02_027_801D9EC1;
extern u8 D_sc02_027_801D9EC2;
extern u8 D_sc02_027_801D9EC4;
extern u8 D_sc02_027_801D9EC5;
extern u8 D_sc02_027_801D9EC6;
extern u8 D_sc02_027_801D9ECC;
extern u8 D_sc02_027_801D9F40;
extern void func_8001C810();
extern u8 D_sc02_027_801C1944;

typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc02_027_8017F918();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
extern void *g_PlayerModel;

extern u16 D_sc02_027_801AB580[];
extern u8 D_sc02_027_801AB570;
extern u8 D_sc02_027_801AB560;

typedef struct { s32 a; s32 b; } P8;
extern void func_80132784();
extern u8 *SpawnPropFrom();
extern P8 D_sc02_027_801DA750[];
extern V16 D_sc02_027_801AB59C[];

extern u8 D_sc02_027_801AF6F0;
extern u8 D_sc02_027_801AF7E0;
extern void func_sc02_027_80186CE0();
extern s32 func_sc02_027_80186A30();
extern u8 D_sc02_027_801B4380;

extern s16 D_801270C0;
extern SV8 D_sc02_027_8018F210[];
extern s32 g_PlayerHitData;
extern u16 g_PlayerHitFlags;
extern u8 g_GroundNormal;
extern void HitPlayer();
extern s32 GuardBlocksHit();
extern void WorldToLocal();

extern WMtx D_sc02_027_801DA730;
extern s16 D_sc02_027_801DA738;

extern u8 D_sc02_027_801AF86C;
extern u8 D_sc02_027_801AF87C;
extern u8 * func_sc02_027_80186D9C();

extern void TakeDamage();
extern void GainStat3FromActor();
extern void GainStat2FromActor();
extern u16 D_80126B66;
extern u8 D_sc02_027_801B4508;
extern void func_sc02_027_80186B68();
extern s32 MoveOnGroundOfs();
extern void func_sc02_027_80186AAC();
extern s32 func_sc02_027_801869C0();
extern void func_sc02_027_80186C0C();
extern SV8 D_sc02_027_801AFBD0;

extern u8 D_sc02_027_801AD138;
extern u8 D_sc02_027_801AB748;
extern u8 D_sc02_027_801AB758;
extern u16 D_sc02_027_801AB738[];
extern u16 D_sc02_027_801AB73A[];
extern u16 D_sc02_027_801AB73C[];
extern u16 D_sc02_027_801AB73E[];
extern s32 rcos();
extern u16 D_sc02_027_801B4518[];
extern u16 D_sc02_027_801B451A[];
extern u16 D_sc02_027_801B451C[];
extern void func_sc02_027_80182C78();
extern s16 D_sc02_027_801AB668;
extern u16 D_sc02_027_801AB670[];
typedef struct { s16 v; } S16R;
extern S16R D_sc02_027_801AB676[];
extern s32 SetScript();
extern s32 rand();
extern u8 D_sc02_027_801B4578;
extern u8 D_sc02_027_801B5598;
extern u8 D_sc02_027_801B45AC;
extern u8 D_sc02_027_801ACD58;
extern u16 D_sc02_027_801AB672[];
extern u16 D_sc02_027_801AB674[];
extern void func_sc02_027_80182A44();

typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern s32 SpawnPropAt();
extern u8 D_sc02_027_801AFC00;

extern s32 D_sc02_027_801D9E94;
extern s32 D_sc02_027_801D9E98;
extern s32 D_sc02_027_801D9EA0;
extern s32 D_sc02_027_801D9EA4;
extern s32 D_sc02_027_801D9EA8;
extern s32 D_sc02_027_801D9EB0;
extern s32 D_sc02_027_801D9EB4;
extern s32 D_sc02_027_801D9EB8;

void func_sc02_027_8017BEBC(u8 *arg0, s32 arg1_0) {
    SV v;
    WMtx m;
    s16 arg1 = arg1_0;
    s16 s;
    s32 k;
    s32 x;
    s32 t;
    u8 *t0;
    u8 *a3;

    t0 = AF(arg0, u8 *, 0xCC);
    a3 = AF(arg0, u8 *, 0x20);
    if (arg1 != 0) {
        k = 0x40000000;
        s = 0x1000;
    } else {
        k = 0x50000000;
        s = 0x1333;
    }
    x = AF(a3, s32, 4) & 0xCFFFFFFF;
    t = k | 0x40000000;
    AF(a3, s32, 4) = x | t;
    if (AF(AF(arg0, u8 *, 0xCC), u16, 0) != 0) {
        AF(t0, s16, 0x1A) = s;
        AF(t0, s16, 0x18) = s;
    }
    v.vx = AF(arg0, u16, 0xFC) += 0x80;
    v.vy = AF(arg0, u16, 0xFE) += 0x100;
    v.vz = 0;
    RotMatrixYXZ(&v, &m);
    v.vy = 0;
    v.vx = 0;
    v.vz = 0x100;
    ApplyMatrixSV(&m, &v, &v);
    *(s32 *)&D_sc02_027_801D9E90 = D_sc02_027_801D9EA0 = D_sc02_027_801D9EB0 = v.vx;
    D_sc02_027_801D9E94 = D_sc02_027_801D9EA4 = D_sc02_027_801D9EB4 = v.vy;
    D_sc02_027_801D9E98 = D_sc02_027_801D9EA8 = D_sc02_027_801D9EB8 = v.vz;
}

void func_sc02_027_8017BFEC(StageActor *arg0) {
    u8 *o;
    u8 *p;
    U12x9 *s;
    U12x9 *d;
    U12x9 *b;
    U12x9 *b2;
    s16 j;

    if (GetVar(*(u8 *)arg0->message + 0x3A) & 0xFF) {
        RejectSpawn(arg0);
        return;
    }
    if ((s32)arg0->model == 0) {
        if (SetupActor(arg0, &D_sc02_027_8018EC54) == 0) {
            return;
        }
        func_8001C810(arg0->model, &D_sc02_027_801D3120);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc02_027_8018EC90);
        arg0->model->flags |= 0x20;
        arg0->model->unk80 = &D_sc02_027_801D9E90;
        arg0->model->unk04 |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext0 = o;
        p = &D_sc02_027_801D9EC0;
        func_8001CD50(o, p);
        D_sc02_027_801D9EC2 = 0x80;
        p[0] = 0x80;
        D_sc02_027_801D9EC1 = 0xE0;
        D_sc02_027_801D9EC5 = 0;
        D_sc02_027_801D9EC4 = 0;
        D_sc02_027_801D9EC6 = 0;
        SetShapeCircle(p, 0x38);
        s = (U12x9 *) &D_sc02_027_801D3148;
        b = (U12x9 *) &D_sc02_027_801D9F40;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = (u16)arg0->pos[0].h.i;
        AF(o, u16, 0xA) = arg0->pos[1].h.i -= 4;
        AF(o, u16, 0xC) = (u16)arg0->pos[2].h.i;
        AF(o, s32, 4) |= 0x50000000;
        D_sc02_027_801D9EBE = 0xFF;
        D_sc02_027_801D9ECC = 0xFF;
        D_sc02_027_801D9EAE = 0xFF;
        D_sc02_027_801D9EAC = 0xFF;
        D_sc02_027_801D9E9E = 0xFF;
        D_sc02_027_801D9E9C = 0xFF;
        D_sc02_027_801D9EBD = 0x80;
        D_sc02_027_801D9EAD = 0x80;
        D_sc02_027_801D9E9D = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc02_027_801D9F40;
        AF(arg0, U12x9 *, 0xD8) = &b2[(s16) D_801152BA];
        for (j = 5; j < 0x28; j++) {
            if (GetVar(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            arg0->work10A = 1;
        }
        D_80115214 = 0;
        D_801152BA += 1;
        ((XY *) arg0)->y += 1;
    }
}

void func_sc02_027_8017C378(u8 *arg0) {
    u8 *obj;
    u8 *p;
    u8 *end;
    s16 found;
    s32 d;
    s32 w;
    u16 i;
    s16 j;

    obj = AF(arg0, u8 *, 0x20);
    if (!(D_800B99DA & 0xF)) {
        for (p = (u8 *) &g_Actors, end = p + 0x6480; p < end; p += 0x10C) {
            if (*(u16 *) p == 0x128) {
                found = p == arg0;
                break;
            }
        }
        d = PosDist(arg0 + 4, &g_PlayerPosX);
        if (d < 0x800) {
            w = 0x44 - ((d >> 5) & 0x38);
        } else {
            w = 4;
        }
        if (found != 0 || D_80115214 < w) {
            D_80115214 = w;
        }
    }
    AF(obj, u16, 0x12) += 0x20;
    func_sc02_027_8017BEBC(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc02_027_8018EC88[(s16) i]) {
                TakePlayerControl();
                AF(arg0, s32, 0x1C) = 0x20;
                AF(arg0, u16, 2) += 1;
            }
        }
        AF(arg0, u16, 0x5E) = 0;
        return;
    }
    if (AF(arg0, s16, 0x10A) == 0) {
        for (j = 5; j < 0x28; j++) {
            if (GetVar(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            AF(arg0, s16, 0x10A) = 1;
            return;
        }
        if (DistSqToPlayer(arg0) < 0x2A40) {
            if (D_800B9A08 == 0x3028) {
                if ((u16) (AF(arg0, u16, 0xA) - (*(u16 *)&D_80126B62) + 4) < 4) {
                    AF(arg0, u16, 0x106) += 1;
                }
                if (AF(arg0, s16, 0x106) < 2) {
                    return;
                }
            }
            StartEvent(arg0, &D_sc02_027_8018ECEC);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc02_027_8017C5F0(StageActor *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext1 = o;
        p = &D_sc02_027_801D9F00;
        func_8001CD50(o, p);
        D_sc02_027_801D9F01 = 0xFF;
        D_sc02_027_801D9F02 = 0xFF;
        p[0] = 0xFF;
        D_sc02_027_801D9F06 = 8;
        D_sc02_027_801D9F04 = 8;
        D_sc02_027_801D9F05 = 0x18;
        SetShapeCircle(p, 0x100);
        v.vx = (u16)arg0->pos[0].h.i;
        v.vy = (u16)arg0->pos[1].h.i - 0x38;
        v.vz = (u16)arg0->pos[2].h.i;
        func_800D20C0(&v, &r, 5);
        q = &D_sc02_027_801DA104;
        q[0] = v.vx;
        D_sc02_027_801DA108 = v.vy;
        D_sc02_027_801DA10C = v.vz;
        func_800D23D0(&r);
        m = q - 5;
        RotMatrixYXZ(&r, m);
        AF(o, s32 *, 0x34) = m;
        AF(o, s16, 0x1A) = 0;
        AF(o, s16, 0x18) = 0;
        AF(o, s32, 4) |= 0x50000000;
        arg0->state += 1;
    }
}

void func_sc02_027_8017C738(StageActor *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc02_027_801D3148;
    r = AF(arg0, U12 *, 0xD8);
    p = (u8 *)arg0->message;
    o = (u8 *)arg0->ext1;
    s4 = (s16 *)arg0->model;
    if (p[1] != 0 && arg0->work108 == 0) {
        arg0->work108 = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--arg0->timer != -1) {
        func_sc02_027_8017BEBC(arg0, 0);
        for (i = 0; i < 9; i++, t++, r++) {
            r->v[0] += (s16) t->v[0] >> 1;
            if (i != 0) {
                r->v[1] += ((s16) t->v[1] + 0x30) >> 1;
                r->v[2] += (s16) t->v[2] >> 1;
                r->v[3] += 0x40;
                r->v[4] += 0x80;
                r->v[5] += 0x100;
            }
        }
    } else {
        *s4 = 0;
        arg0->state += 1;
    }
}

void func_sc02_027_8017C8B8(StageActor *arg0) {
    D_sc02_027_8018ED3C[arg0->state]();
}

void func_sc02_027_8017C8F4(void) {
    AddMaxBp((s32) &g_Player, 5);
    AddBp((s32) &g_Player, 0x270F);
    PlaySoundId(0xBFE, 0);
}

void func_sc02_027_8017C940(StageActor *arg0) {
    s32 pad[4];
    s16 *temp_s2;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = arg0->message;
    temp_s2 = (s16 *)arg0->ext0;
    temp_s1 = arg0->ext1;
    if ((AF(temp_v1, u8, 1) != 0) && (arg0->work108 == 0)) {
        arg0->work108 = func_80128CFC((s32) AF(temp_v1, u16, 2));
    }
    temp_v0 = AF(temp_s1, u16, 0x1A) + 0x20;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    temp_v0_2 = arg0->timer - 1;
    arg0->timer = temp_v0_2;
    if (temp_v0_2 != -1) {
        func_sc02_027_8017BEBC((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    PlaySoundId(0x62E, 0);
    *temp_s2 = 0;
    arg0->timer = 0x28;
    arg0->state = (u16) (arg0->state + 1);
}

extern s32 ProjectPoint();
extern s32 func_sc02_027_8018A4A4();
extern SV4 D_sc02_027_801D2B1C;
extern void func_sc02_027_80189FD8();
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern u8 *SpawnActorFromDef();
extern u8 D_sc02_027_801DA8C8[];
extern s32 AllocActorSprite();
extern void func_sc02_027_8018A41C();
extern u8 D_sc02_027_801DA788[];

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern void SetModelParts();
extern VoidFn D_sc02_027_801AD700[];
extern s16 D_80126CB6;
extern u8 D_sc02_027_801AD670;
extern s32 HeadingToTarget();
extern s32 HeadingToSV();
extern s16 D_sc02_027_801AD772[];
extern u8 D_sc02_027_801AD738;
extern u16 D_sc02_027_801AD76C[];
extern u16 D_sc02_027_801AD76E[];
extern u16 D_sc02_027_801AD770[];
extern u8 D_sc02_027_801AD7B8;
extern u8 D_sc02_027_801AD818;
extern void func_sc02_027_8018633C();
extern u8 D_sc02_027_801B30B0;
extern void HideModel();
extern u8 D_sc02_027_801AF8B4;
extern void func_sc02_027_80186A70();
extern SpawnDef D_sc02_027_801AFBD8[];
extern VoidFn D_sc02_027_801B58B0[];
extern VoidFn D_sc02_027_801B5AA0[];
extern u8 D_sc02_027_801C2E64;
extern u8 D_sc02_027_801B55A8;
extern void func_80153C74();
extern u8 D_sc02_027_801C27CC;
extern u8 D_sc02_027_801B587C;
extern u8 D_sc02_027_801B5884;
extern u8 D_sc02_027_801B58A4;
extern s32 ActorSegmentDamagesPlayer();
extern V16 D_sc02_027_801D6964;
extern s32 D_800A5EB0;
extern V16 D_sc02_027_801D699C;
extern s32 D_800A5E90;

void func_sc02_027_8017CA34(StageActor *arg0) {
    u8 *p;
    s16 v;
    s32 t;

    p = (u8 *)arg0->message;
    if (AF(p, u8, 1) == 0) {
        v = 1;
    } else {
        if (arg0->work108 == 0) {
            arg0->work108 = func_80128CFC(AF(p, u16, 2));
        }
        t = arg0->work108;
        v = t;
    }
    if (v != 0) {
        arg0->state++;
    }
}

void func_sc02_027_8017CAB4(StageActor *arg0) {
    SV8 sp10;
    SV8 sp18;
    ModelObj *temp_v0;
    u8 *temp_s0;

    temp_s0 = (u8 *)arg0->message;
    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, AF(temp_s0, s32, 4));
        SetScript((s32) arg0, AF(temp_s0, s32, 8));
        arg0->hitState = 0;
        arg0->hitData = 0;
        sp10.x = (u16)arg0->pos[0].h.i;
        sp10.y = (u16)arg0->pos[1].h.i;
        sp10.z = (u16)arg0->pos[2].h.i;
        func_800D20C0((s32) &sp10, (s32) &sp18, 0);
        func_800D23D0((s32) &sp18);
        arg0->model->rot.vy = (s16) (sp18.y + 0x800);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc02_027_8017CB68(StageActor *arg0) {
    u16 v;
    u8 *t;
    u8 *d;

    t = (u8 *)arg0->ext1;
    d = (u8 *)arg0->message;
    v = AF(t, u16, 0x1A) - 0xC0;
    AF(t, u16, 0x1A) = v;
    AF(t, u16, 0x18) = v;
    if ((s16) v < 0) {
        AF(t, s16, 0) = 0;
        StartEvent((s32) arg0, AF(d, s32, 0xC));
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc02_027_8017CBD4(StageActor *arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = (u8 *)arg0->message;
    if (IsEventDone((s32) arg0, arg1) != 0) {
        EndEvent((s32) arg0);
        SetVar(*temp_s1 + 0x3A, 1);
        func_8002955C();
        if (func_8002953C() >= 0x23U) {
            GiveItem(0x25);
        }
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc02_027_8017CC60(StageActor *arg0, s32 arg1) {
    FreeActor(arg0, arg1);
}

void func_sc02_027_8017CC80(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc02_027_8017BEBC(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

void func_sc02_027_8017CCD4(s32 arg0) {
    SpawnEffect(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc02_027_8017CD10(u8 *arg0) {
    D_sc02_027_8018ED94[AF(arg0, u16, 2)]();
}

void func_sc02_027_8017CD4C(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        PlaySe((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_027_8017CD9C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_027_8017D030((s32) arg0);
}

void func_sc02_027_8017CDF8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            PlaySe((s32) AF(arg0, u16, 0x2C));
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_027_8017D030((s32) arg0);
}

void func_sc02_027_8017CE7C(u8 *arg0) {
    s16 temp_v0_4;
    s16 var_s1;
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        if (AF(arg0, s32, 0x30) == 0) {
            temp_v0_2 = AF(temp_s0, u16, 0x64) - 0x80;
            AF(temp_s0, u16, 0x64) = temp_v0_2;
            AF(temp_s0, u16, 0x60) = temp_v0_2;
            AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) + 0x100);
        } else {
            temp_v1 = AF(temp_s0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            temp_v1_2 = AF(temp_s0, void *, 0x20);
            temp_v0_3 = AF(temp_v1_2, u16, 0x1C) - 0x80;
            AF(temp_v1_2, u16, 0x1C) = temp_v0_3;
            AF(temp_v1_2, u16, 0x18) = temp_v0_3;
            temp_v1_3 = AF(temp_s0, void *, 0x20);
            AF(temp_v1_3, u16, 0x1A) = (u16) (AF(temp_v1_3, u16, 0x1A) + 0x100);
        }
        var_s1 = 0;
        do {
            SpawnEffect(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
            temp_v0_4 = var_s1 + 1;
            var_s1 = temp_v0_4;
        } while (temp_v0_4 < 3);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            HidePlayerScene((s32) temp_s0);
            SetPlayerFlag7E2((s32) temp_s0);
        } else {
            temp_v0_5 = AF(temp_s0, void *, 0x20);
            AF(temp_v0_5, s32, 4) = (s32) (AF(temp_v0_5, s32, 4) | 0x80000000);
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_027_8017D030((s32) arg0);
}

void func_sc02_027_8017CFE4(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_027_8017D030((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc02_027_8017D030(u8 *arg0) {
    SV4 r;
    u8 gap[8];
    QuadArg q;
    WMtx m;
    u8 unused[0x20];
    u8 *o;
    s8 *t;
    s16 i;
    u8 v;
    s16 k;

    o = AF(arg0, u8 *, 0x34);
    r.x = r.y = r.z = AF(arg0, u16, 0x12);
    SetScaleMatrix(&r, &m);
    q.p[1].x = q.p[1].y = q.p[1].z = 0;
    q.p[0].y = q.p[2].y = q.p[3].y = 0;
    q.c[1].r = q.c[1].g = q.c[1].b = 0;
    v = (AF(arg0, s16, 0x12) >> 5) + 0x20;
    q.c[0].r = q.c[0].g = q.c[0].b = q.c[2].r = q.c[2].g = q.c[2].b = q.c[3].r = q.c[3].g = q.c[3].b = v;
    if (D_800B99DA & 1) {
        q.c[0].r = q.c[2].r = q.c[3].r = v >> 1;
    }
    q.code = 0x50000000;
    r.x = AF(o, u16, 6);
    r.y = AF(o, u16, 0xA) - 8;
    r.z = AF(o, u16, 0xE);
    SetMatrixTrans(&r, &m);
    t = D_sc02_027_8018ED68;
    for (i = 0; i < 10; i++) {
        q.p[0].x = *t++;
        q.p[0].z = *t++;
        q.p[2].x = *t++;
        q.p[2].z = *t++;
        q.p[3].x = *t++;
        q.p[3].z = *t++;
        t -= 2;
        DrawPrimG4Mtx(&q, &m);
    }
    t = D_sc02_027_8018ED68;
    q.c[0].r = q.c[0].g = q.c[0].b = 0;
    for (i = 0; i < 20; i++) {
        k = *t++;
        q.p[2].x = k;
        q.p[0].x = k << 1;
        k = *t++;
        q.p[2].z = k;
        q.p[0].z = k << 1;
        k = *t++;
        q.p[3].x = k;
        q.p[1].x = k << 1;
        k = *t++;
        q.p[3].z = k;
        q.p[1].z = k << 1;
        t -= 2;
        DrawPrimG4Mtx(&q, &m);
    }
    if (AF(arg0, s16, 0x2A) != 0) {
        t = D_sc02_027_8018ED68;
        for (i = 0; i < 20; i++) {
            q.p[0].x = q.p[2].x = *t++;
            q.p[0].z = q.p[2].z = *t++;
            q.p[1].x = q.p[3].x = *t++;
            q.p[1].z = q.p[3].z = *t++;
            q.p[0].y = q.p[1].y = AF(arg0, u16, 0x2A);
            t -= 2;
            DrawPrimG4Mtx(&q, &m);
        }
    }
}

void func_sc02_027_8017D33C(u8 *arg0) {
    D_sc02_027_8018EDA8[AF(arg0, u16, 2)]();
}

void func_sc02_027_8017D378(u8 *arg0) {
    PlaySe((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_027_8017D3B8(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    temp_v1 = AF(arg0, void *, 0x34);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(temp_v1, s16, 0x64) = 0;
        AF(temp_v1, s16, 0x60) = 0;
        AF(temp_v1, s16, 0x62) = 0x3000;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_027_8017D030((s32) arg0);
}

void func_sc02_027_8017D428(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s1 = AF(arg0, s32, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        PlaySe((s32) AF(arg0, u16, 0x2C));
        ShowPlayerScene(temp_s1);
        ClearPlayerFlag7E2(temp_s1);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_027_8017D030((s32) arg0);
}

void func_sc02_027_8017D4B4(u8 *arg0) {
    s16 temp_v0_3;
    s16 var_s2;
    s32 temp_v0;
    u16 temp_v0_2;
    void *temp_s0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        var_s2 = 0;
        temp_v0_2 = AF(temp_s0, u16, 0x64) + 0x80;
        AF(temp_s0, u16, 0x64) = temp_v0_2;
        AF(temp_s0, u16, 0x60) = temp_v0_2;
        AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) - 0x100);
        do {
            SpawnEffect(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
            temp_v0_3 = var_s2 + 1;
            var_s2 = temp_v0_3;
        } while (temp_v0_3 < 3);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_027_8017D030((s32) arg0);
}

void func_sc02_027_8017D588(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_027_8017D030((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    FreeEffect((s32) arg0);
}

void func_sc02_027_8017D5DC(u8 *arg0) {
    D_sc02_027_8018EDBC[AF(arg0, u16, 2)]();
}

void func_sc02_027_8017D618(u8 *arg0) {
    s16 r;
    s32 d1, d2;
    u8 *s1;

    s1 = AF(arg0, u8 *, 0x34);
    r = rand();
    d1 = (r & 0x3F) - 0x20;
    AF(arg0, s16, 6) = AF(s1, u16, 6) + d1;
    if (AF(arg0, s32, 0x2C) != 0) {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA) - 0x140;
        AF(arg0, s16, 0x16) = 0x20;
    } else {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA);
        AF(arg0, s16, 0x16) = -0x20;
    }
    d2 = ((r >> 6) & 0x3F) - 0x20;
    AF(arg0, s16, 0xE) = AF(s1, u16, 0xE) + d2;
    AF(arg0, s32, 0x30) = (r >> 12) & 3;
    AF(arg0, u16, 2)++;
}

void func_sc02_027_8017D6CC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc02_027_8017D728((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc02_027_8017D728(u8 *arg0) {
    LineArg l;
    WMtx m;

    if (AF(arg0, s32, 0x2C) != 0) {
        l.p0.y = AF(arg0, u16, 0xA) - 0x20;
        l.p1.y = AF(arg0, u16, 0xA) + 0x20;
    } else {
        l.p0.y = AF(arg0, u16, 0xA) + 0x20;
        l.p1.y = AF(arg0, u16, 0xA) - 0x20;
    }
    l.p0.x = AF(arg0, u16, 6);
    l.p0.z = AF(arg0, u16, 0xE);
    l.p1.x = AF(arg0, u16, 6);
    l.p1.z = AF(arg0, u16, 0xE);
    l.c0.r = l.c0.g = l.c0.b = 0;
    switch (AF(arg0, u32, 0x30)) {
    case 0:
        l.c1.r = 0xFF;
        l.c1.g = l.c1.b = 0;
        break;
    case 1:
        l.c1.g = 0xFF;
        l.c1.r = l.c1.b = 0;
        break;
    case 2:
        l.c1.b = 0xFF;
        l.c1.r = l.c1.g = 0;
        break;
    case 3:
        l.c1.r = l.c1.g = l.c1.b = 0xFF;
        break;
    }
    m = GsIDMATRIX;
    l.code = 0x50000000;
    DrawPrimLineG2Mtx(&l, &m);
}

void func_sc02_027_8017D898(u8 *obj) {
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

void func_sc02_027_8017E778(void) {
    g_SpawnListFixed = &D_sc02_027_8018F724;
    g_SpawnListRanged = &D_sc02_027_8018F8DC;
    func_sc02_027_8017FAB0(0);
}

void func_sc02_027_8017E7B8(void) {
    g_SpawnListFixed = &D_sc02_027_8018F8F0;
    g_SpawnListRanged = &D_sc02_027_8018F990;
    func_sc02_027_8017FAB0(1);
}

void func_sc02_027_8017E7F8(void) {
    g_SpawnListFixed = &D_sc02_027_8018F9A4;
    g_SpawnListRanged = &D_sc02_027_8018FAF8;
    func_sc02_027_8017FAB0(2);
    D_801151D8 = 1;
}

void func_sc02_027_8017E844(void) {
    g_SpawnListFixed = &D_sc02_027_8018FB0C;
    g_SpawnListRanged = &D_sc02_027_8018FBC0;
    func_sc02_027_8017FAB0(3);
}

void func_sc02_027_8017E884(void) {
    g_SpawnListFixed = &D_sc02_027_8018FBD4;
    g_SpawnListRanged = &D_sc02_027_8018FC38;
    func_sc02_027_8017FAB0(4);
}

void func_sc02_027_8017E8C4(void) {
    g_SpawnListFixed = &D_sc02_027_8018FC4C;
    g_SpawnListRanged = &D_sc02_027_8018FCD8;
    func_sc02_027_8017FAB0(5);
}

void func_sc02_027_8017E904(void) {
    g_SpawnListFixed = &D_sc02_027_8018FCEC;
    g_SpawnListRanged = &D_sc02_027_8018FD8C;
    func_sc02_027_8017FAB0(6);
    D_8012704C = 1;
}

void func_sc02_027_8017E950(u8 *arg0) {
    D_sc02_027_8018F044[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_027_8017E98C(u8 *arg0) {
    func_sc02_027_8017EDD8();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_027_8017E9D0(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc02_027_8017E9F4(u8 *arg0) {
    D_sc02_027_8018F04C[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_027_8017EA30(u8 *arg0) {
    func_sc02_027_8017EE00();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_027_8017EA70(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        if (func_sc02_027_8017FAE0() != 0) {
            func_800D0C48(1);
        }
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_027_8017EAFC(void) {
    func_800D1EBC();
}

void func_sc02_027_8017EB1C(u8 *arg0) {
    D_sc02_027_8018F058[AF(arg0, u8, 0x15)]();
}

s32 RoomExitStep(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0, arg2);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        if (func_sc02_027_8017FAE0() != 0) {
            func_800D0C48(1);
        }
        func_800D1E28();
        PlaySoundId(4, 0x675);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_027_8017EBF0(u8 *arg0) {
    D_sc02_027_8018F064[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_027_8017EC2C(u8 *arg0) {
    func_sc02_027_8017EE28();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_027_8017EC6C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(4, 0x6CA);
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        if (func_sc02_027_8017FAE0() != 0) {
            func_800D0C48(1);
        }
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_027_8017ED04(u8 *arg0) {
    D_sc02_027_8018F070[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_027_8017ED40(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(4, 0x6CA);
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        if (func_sc02_027_8017FAE0() != 0) {
            func_800D0C48(1);
        }
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_027_8017EDD8(void) {
    StartPlayerActionScript((s32) &D_sc02_027_8018F07C, 0x01000000);
}

void func_sc02_027_8017EE00(void) {
    StartPlayerActionScript((s32) &D_sc02_027_8018F080, 0x01000000);
}

void func_sc02_027_8017EE28(void) {
    StartPlayerActionScript((s32) &D_sc02_027_8018F084, 0x01000000);
}

void func_sc02_027_8017EE50(void) {
    g_CameraProjTarget = 0x12C;
    g_CameraDistTarget = 0x2BC;
    g_CameraAngleTarget = 0x31C;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc02_027_8017F27C, 0);
    SnapCamera((s32) &g_Camera);
    func_sc02_027_8017F27C((s32) &g_Camera);
}

void func_sc02_027_8017EEE8(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x3E8;
    g_CameraAngleTarget = 0x117;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc02_027_8017F27C, 1);
    SnapCamera((s32) &g_Camera);
    func_sc02_027_8017F27C((s32) &g_Camera);
}

void func_sc02_027_8017EF80(void) {
    g_CameraProjTarget = 0x12C;
    g_CameraDistTarget = 0x2BC;
    g_CameraAngleTarget = 0x71;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x70;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc02_027_8017F27C, 2);
    SnapCamera((s32) &g_Camera);
    func_sc02_027_8017F27C((s32) &g_Camera);
}

void func_sc02_027_8017F01C(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x3E8;
    g_CameraAngleTarget = 0x117;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc02_027_8017F27C, 3);
    SnapCamera((s32) &g_Camera);
    func_sc02_027_8017F27C((s32) &g_Camera);
}

void func_sc02_027_8017F0B4(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x3E8;
    g_CameraAngleTarget = 0x117;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc02_027_8017F27C, 4);
    SnapCamera((s32) &g_Camera);
    func_sc02_027_8017F27C((s32) &g_Camera);
}

void func_sc02_027_8017F14C(void) {
    g_CameraProjTarget = 0x10E;
    g_CameraDistTarget = 0x348;
    D_8012696A = 0xC00;
    g_CameraAngleTarget = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x70;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc02_027_8017F27C, 5);
    SnapCamera((s32) &g_Camera);
    func_sc02_027_8017F27C((s32) &g_Camera);
}

void func_sc02_027_8017F1E4(void) {
    g_CameraProjTarget = 0x12C;
    g_CameraDistTarget = 0x2BC;
    g_CameraAngleTarget = 0x31C;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc02_027_8017F27C, 6);
    SnapCamera((s32) &g_Camera);
    func_sc02_027_8017F27C((s32) &g_Camera);
}

void func_sc02_027_8017F27C(s32 arg0) {
    D_sc02_027_8018F08C[AF(arg0, u8, 4)]();
}

extern u16 g_PlayerHitFacing;
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
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
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern void ResetScriptVM();
extern void CallActionHandler();
extern SV8 D_sc02_027_801D6D7C[];

extern u8 D_sc02_027_8018F458;

extern void InitSpriteKind2();
extern void RotMatrixY();
extern void ApplyMatrixLV();
s32 func_sc02_027_80180A54(s32 arg0, s32 arg1, s32 arg2);
extern u8 D_sc02_027_8018F120;
extern u8 D_sc02_027_8018F12C;
extern u8 D_sc02_027_8018F240;
s32 func_sc02_027_8018152C(s32 arg0, s32 arg1);
extern SV8 D_sc02_027_8018F298[];

extern u8 D_sc02_027_8018F4A8;
void func_sc02_027_80181E90(s32 arg0);
extern u8 D_sc02_027_8018F2F8;
extern u8 D_sc02_027_8018F440;
extern u8 D_sc02_027_8018F3B8;

extern s32 D_sc02_027_8018F468[];
extern void SetForwardVelocity();
extern s32 D_sc02_027_8018F478[];
extern SV8 D_sc02_027_8018F484[];

extern s32 GetObjPadPressed();
extern s16 D_sc02_027_8018F0A8[];
extern SV8 g_CameraFocus;
extern s32 EaseValueFrac();
extern s16 D_sc02_027_8018F0B0[];

void func_sc02_027_8017F2B8(u8 *o) {
    SV8 v;
    s16 x;
    u8 t;
    s32 lo;
    s32 c;
    s16 lim;

    if (GetObjPadPressed(&g_Player) & 3) {
        t = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = t;
        AF(o, s32, 0x14) = D_sc02_027_8018F0A8[t];
    }
    v = g_CameraFocus;
    x = v.x;
    if (x >= -0x62F) {
        lim = -0x580;
        if (x > lim) {
            x = lim;
            v.x = x;
        }
        AF(o, s16, 0x2E) = 0;
    } else {
        lo = -0x740;
        if (lo < x) {
            AF(o, s16, 0x2E) = -0x740 - x;
        } else {
            AF(o, s16, 0x2E) = 0;
        }
    }
    AF(o, s16, 0x28) = EaseValueFrac(AF(o, s16, 0x28), AF(o, s16, 0x2E), 4, 1);
    c = -0x740;
    if (v.x < c) {
        v.x = c;
    }
    c = 0x780;
    if (v.z < c) {
        v.z = c;
    }
    func_sc02_027_8017F918(o, &v);
}






extern u8 D_sc02_027_8018B9C0;

void func_sc02_027_80182AA4(StageActor *o);


extern u8 D_sc02_027_801AD2B8;
extern u8 D_sc02_027_801AB718;
void func_sc02_027_801832D8(StageActor *arg0);
void func_sc02_027_80183344(StageActor *arg0);




extern s16 D_sc02_027_8018F0B8[];
void func_sc02_027_80180B3C(u8 *obj);
extern s16 D_sc02_027_8018F0AC[];
extern s16 D_sc02_027_8018F0B4[];
extern void SpawnKind1CAt();
extern s16 D_sc02_027_8018F0C0[];
extern s32 rsin();
extern s16 D_sc02_027_8018F0BC[];

void func_sc02_027_8017F3E8(u8 *o) {
    SV8 v;
    u8 t;

    if (GetObjPadPressed(&g_Player) & 3) {
        t = (AF(o, u8, 5) + 1) & 1;
        AF(o, u8, 5) = t;
        AF(o, s32, 0x14) = D_sc02_027_8018F0AC[t];
    }
    v = g_CameraFocus;
    v.x = -0x740;
    v.z = 0x1020;
    func_sc02_027_8017F918(o, (u8 *)&v);
}

void func_sc02_027_8017F498(u8 *o) {
    SV8 v;
    s16 lim;
    s16 k1; s16 k2;
    if (GetObjPadPressed(&g_Player) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
    }
    v = g_CameraFocus;
    if (v.x < -0x3C0) {
        lim = -0x540;
        if (v.x < lim) {
            v.x = lim;
        }
        AF(o, s16, 0x2E) = 0;
        AF(o, s32, 0x14) = D_sc02_027_8018F0B0[AF(o, u8, 5)];
    } else {
        if (v.z > 0x1080) {
            k1 = -0x300;
            if (v.x < k1) {
                AF(o, s16, 0x2E) = k1 - v.x;
            } else {
                AF(o, s16, 0x2E) = 0;
            }
        } else {
            k2 = -0x340;
            if (v.x < k2) {
                AF(o, s16, 0x2E) = k2 - v.x;
            } else {
                AF(o, s16, 0x2E) = 0;
            }
        }
        if (v.z > 0x1240) {
            AF(o, s32, 0x14) = D_sc02_027_8018F0B0[AF(o, u8, 5)];
        } else {
            AF(o, s32, 0x14) = 0x12C;
        }
    }
    AF(o, s16, 0x28) = EaseValueFrac(AF(o, s16, 0x28), AF(o, s16, 0x2E), 4, 1);
    lim = -0x180;
    if (v.x > lim) {
        v.x = lim;
    }
    lim = -0x380;
    if (v.y > lim) {
        v.y = lim;
    }
    func_sc02_027_8017F918(o, (u8 *)&v);
}

void func_sc02_027_8017F624(u8 *o) {
    SV8 v;

    if (GetObjPadPressed(&g_Player) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc02_027_8018F0B4[AF(o, u8, 5)];
    }
    v = g_CameraFocus;
    v.x = -0x240;
    v.z = 0x18E0;
    func_sc02_027_8017F918(o, (u8 *)&v);
}

void func_sc02_027_8017F6D4(u8 *o) {
    SV8 v;

    if (GetObjPadPressed(&g_Player) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc02_027_8018F0B8[AF(o, u8, 5)];
    }
    v = g_CameraFocus;
    v.x = 0;
    v.z = 0x18E0;
    func_sc02_027_8017F918(o, (u8 *)&v);
}

void func_sc02_027_8017F780(u8 *o) {
    SV8 v;
    s16 lim;

    if (GetObjPadPressed(&g_Player) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc02_027_8018F0BC[AF(o, u8, 5)];
    }
    v = g_CameraFocus;
    v.x = -0x190;
    lim = 0x14B0;
    if (v.z < lim) {
        v.z = lim;
    }
    lim = 0x16D0;
    if (v.z > lim) {
        v.z = lim;
    }
    func_sc02_027_8017F918(o, (u8 *)&v);
}

void func_sc02_027_8017F858(u8 *o) {
    SV8 v;
    s32 c;

    if (GetObjPadPressed(&g_Player) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc02_027_8018F0C0[AF(o, u8, 5)];
    }
    v = g_CameraFocus;
    v.x = -0x240;
    c = 0x1000;
    if (v.z < c) {
        v.z = c;
    }
    func_sc02_027_8017F918(o, (u8 *)&v);
}

void func_sc02_027_8017F918(u8 *arg0, u8 *arg1) {
    FeMtx m;
    FeSv v;
    FeSv o;

    AF(arg0, s32, 8) = (s16) EaseValue(AF(arg0, s16, 8), AF(arg0, s16, 0xC), 4);
    AF(arg0, s32, 0x10) = (s16) EaseValue(AF(arg0, s16, 0x10), AF(arg0, s16, 0x14), 4);
    AF(arg0, s16, 0x18) = EaseAngle(AF(arg0, s16, 0x18), AF(arg0, s16, 0x20), 4);
    AF(arg0, s16, 0x1A) = EaseAngle(AF(arg0, s16, 0x1A), AF(arg0, s16, 0x22), 4);
    AF(arg0, s16, 0x1C) = EaseAngle(AF(arg0, s16, 0x1C), AF(arg0, s16, 0x24), 4);
    AF(arg0, s16, 0x28) = EaseValue(AF(arg0, s16, 0x28), AF(arg0, s16, 0x2E), 0x10);
    AF(arg0, s16, 0x2A) = EaseValue(AF(arg0, s16, 0x2A), AF(arg0, s16, 0x30), 0x10);
    AF(arg0, s16, 0x2C) = EaseValue(AF(arg0, s16, 0x2C), AF(arg0, s16, 0x32), 0x10);
    AF(arg0, s32, 0x48) = AF(arg0, s16, 0x28) + AF(arg1, s16, 0);
    AF(arg0, s32, 0x4C) = AF(arg0, s16, 0x2A) + AF(arg1, s16, 2);
    AF(arg0, s32, 0x50) = AF(arg0, s16, 0x2C) + AF(arg1, s16, 4);
    RotMatrixZYX(arg0 + 0x18, &m);
    m.t[0] = AF(arg0, s16, 0x28) + AF(arg1, s16, 0);
    m.t[1] = AF(arg0, s16, 0x2A) + AF(arg1, s16, 2);
    m.t[2] = AF(arg0, s16, 0x2C) + AF(arg1, s16, 4);
    v.x = 0;
    v.y = 0;
    v.z = AF(arg0, s32, 0x10);
    LocalToWorld(&m, &v, &o);
    AF(arg0, s32, 0x3C) = o.x;
    AF(arg0, s32, 0x40) = o.y;
    AF(arg0, s32, 0x44) = o.z;
}

s32 func_sc02_027_8017FAB0(s32 arg0) {
    return func_8013B7F4(D_sc02_027_8018F104[arg0], 0);
}

s32 func_sc02_027_8017FAE0(void) {
    if (g_BgmPackPlaying == 0x39 || g_BgmPackPlaying == 0x3B) {
        return 0;
    }
    return 1;
}

void func_sc02_027_8017FB08(void) {
    PlaySoundId(0x13C, 0);
    g_BgmPackPlaying = 0x39;
}

void func_sc02_027_8017FB38(s32 arg0) {
    func_sc02_027_8017FCAC(arg0);
}

s32 func_sc02_027_8017FB58(void) {
    s32 r = 0;
    switch (D_sc02_027_801DA12C) {
    case 0:
        D_sc02_027_801DA120 = 1;
        D_sc02_027_801DA124 = 0;
        D_sc02_027_801DA128 = 1;
        D_sc02_027_801DA12C = 1;
        break;
    case 1:
        if (--D_sc02_027_801DA120 == 0) {
            D_sc02_027_801DA120 = 4;
            func_sc02_027_8017FED4(&D_sc02_027_801A9564, D_sc02_027_801DA124 * 6);
            if (++D_sc02_027_801DA124 >= 10) {
                D_sc02_027_801DA12C++;
                r = 1;
            }
        }
        break;
    case 2:
        r = 1;
        break;
    default:
        D_sc02_027_801DA12C = 0;
        break;
    }
    return r;
}

void func_sc02_027_8017FC88(void) {
    D_sc02_027_801DA128 = 0;
    D_sc02_027_801DA120 = 1;
    D_sc02_027_801DA124 = 0;
}

s32 func_sc02_027_8017FCAC(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_v0;

    switch (D_sc02_027_801DA9B4) {                  /* irregular */
    case 0:
        D_sc02_027_801DA12C = 0;
        D_sc02_027_801DA110 = 1;
        D_sc02_027_801DA114 = 0;
        D_sc02_027_801DA118 = 1;
        D_sc02_027_801DA11C = 1;
        D_sc02_027_801DA120 = 1;
        D_sc02_027_801DA124 = 0;
        D_sc02_027_801DA128 = 0;
        if (GetFlag(0xAF) & 0xFF) {
            func_sc02_027_8017FED4((s32) &D_sc02_027_801A9564, 0x36);
            D_sc02_027_801DA128 = 1;
        }
        temp_v0 = D_sc02_027_801DA9B4 + 1;
        D_sc02_027_801DA9B4 = temp_v0;
        return temp_v0;
    case 1:
        if (D_sc02_027_801DA128 == 0) {
            temp_v0_2 = D_sc02_027_801DA120 - 1;
            D_sc02_027_801DA120 = temp_v0_2;
            if (temp_v0_2 == 0) {
                D_sc02_027_801DA120 = 4;
                func_sc02_027_8017FED4((s32) &D_sc02_027_801A93FC, D_sc02_027_801DA124 * 6);
                temp_v0_3 = D_sc02_027_801DA124 + 1;
                D_sc02_027_801DA124 = temp_v0_3;
                if (temp_v0_3 >= 0x1E) {
                    D_sc02_027_801DA124 = 0;
                }
            }
        }
        temp_v0_4 = D_sc02_027_801DA110 - 1;
        D_sc02_027_801DA110 = temp_v0_4;
        if (temp_v0_4 == 0) {
            D_sc02_027_801DA110 = 2;
            func_sc02_027_8017FED4((s32) &D_sc02_027_801A8F9C, D_sc02_027_801DA114 * 6);
            D_sc02_027_801DA114 = (D_sc02_027_801DA114 + 1) & 7;
        }
        var_v0 = D_sc02_027_801DA118 - 1;
        D_sc02_027_801DA118 = var_v0;
        if (var_v0 == 0) {
            D_sc02_027_801DA118 = 8;
            QueueImage(D_sc02_027_8018F0C4[D_sc02_027_801DA11C]);
            var_v0 = (D_sc02_027_801DA11C + 1) & 0xF;
            D_sc02_027_801DA11C = var_v0;
        }
        return var_v0;
    default:
        return 1;
    }
}

void func_sc02_027_8017FED4(u16 *arg0, s32 arg1) {
    RECT r;

    r.x = arg0[arg1];
    r.y = arg0[arg1 + 1];
    r.w = arg0[arg1 + 2];
    r.h = arg0[arg1 + 3];
    MoveImage(&r, arg0[arg1 + 4], arg0[arg1 + 5]);
}

void func_sc02_027_8017FF34(StageActor *arg0) {
    D_sc02_027_8018F1F8[arg0->state]();
}

void func_sc02_027_8017FF70(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->timer = rand(arg0, arg1, arg2, arg3);
    arg0->unkFC = (u16) ((u16)arg0->unkFC + 1);
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc02_027_8017FFB4(StageActor *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->timer + 1;
    arg0->timer = temp_v1;
    if ((temp_v1 % (s16) arg0->unkFC) == 0) {
        func_sc02_027_80180770((s32) arg0);
    }
}

void func_sc02_027_8018001C(u8 *arg0) {
    D_sc02_027_8018F200[AF(arg0, u16, 2)]();
}

void func_sc02_027_80180058(u8 *arg0) {
    MachineLoopSound();
    AF(arg0, s16, 2) = 1;
}

void func_sc02_027_80180088(u8 *arg0) {
    typedef struct { u8 pad[0x20]; u8 *p; } Obj;
    SV8 sp18;
    SV8 sp20;
    WMtx mat;
    s32 flag;
    u8 *p;
    u8 *p2;
    u8 *p3;
    s32 r;
    s32 base;
    s32 base2;
    s32 base3;
    s32 i;
    Player *g;

    if (D_801270C0 != 2) {
        sp18.x = AF(arg0, s16, 6);
        sp18.y = AF(arg0, s16, 0xA);
        sp18.z = AF(arg0, s16, 0xE);
        MoveProp(arg0);
        sp20.x = AF(arg0, s16, 6);
        sp20.y = AF(arg0, s16, 0xA);
        sp20.z = AF(arg0, s16, 0xE);
        if (TraceMap(1, &sp18, &sp20) != 0) {
            AF(arg0, s16, 2) = 2;
            p = AF(arg0, u8 *, 0x20);
            AF(arg0, s16, 6) = sp20.x;
            AF(arg0, s16, 0xA) = sp20.y;
            AF(arg0, s16, 0xE) = sp20.z;
            AF(arg0, s32, 0x10) = 0;
            AF(arg0, s32, 0x14) = 0;
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x34) = -1;
            r = rand() % 256;
            base = AF(AF(arg0, u8 *, 0x20), s16, 0x10);
            AF(p, s16, 0x10) = (rand() & 1) ? base + r : base - r;
            p2 = AF(arg0, u8 *, 0x20);
            r = rand() % 256;
            base2 = AF(AF(arg0, u8 *, 0x20), s16, 0x12);
            AF(p2, s16, 0x12) = (rand() & 1) ? base2 + r : base2 - r;
            p3 = AF(arg0, u8 *, 0x20);
            r = rand() % 256;
            base3 = AF(AF(arg0, u8 *, 0x20), s16, 0x14);
            AF(p3, s16, 0x14) = (rand() & 1) ? base3 + r : base3 - r;
            return;
        }
    }
    mat = GsIDMATRIX;
    mat.t[0] = AF(arg0, s16, 6);
    mat.t[1] = AF(arg0, s16, 0xA);
    mat.t[2] = AF(arg0, s16, 0xE);
    RotMatrixY(AF(AF(arg0, u8 *, 0x20), s16, 0x14), &mat);
    g = &g_Player;
    gte_SetRotMatrix(&mat);
    gte_SetTransMatrix(&mat);
    RotTransSV(&D_sc02_027_8018F210[0], &sp18, &flag);
    RotTransSV(&D_sc02_027_8018F210[1], &sp20, &flag);
    if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &sp18, &sp20) != 0) {
        HitPlayer(1, 0x201, AF(AF(arg0, u8 *, 0x20), s16, 0x14), 0x1E, &sp20, &g_GroundNormal);
        if (GuardBlocksHit(g) == 0 && (g_PlayerHitFlags & 0x8000)) {
            WorldToLocal(g_PlayerModel + 0x34, &sp20, &sp18);
            AF(arg0, s16, 0x12) = sp18.x;
            AF(arg0, s16, 0x16) = sp18.y;
            AF(arg0, s16, 0x1A) = sp18.z;
            AF(arg0, s32, 0x1C) = 0x3C;
            AF(arg0, s16, 2) = 3;
            AF(arg0, u16, 0x2A) = AF(g_PlayerModel, u16, 0x12);
            r = rand() % 256;
            flag = (rand() & 1) ? r : -r;
            ((SV8 *)(((Obj *)arg0)->p + 0x10))->x += flag;
            ((SV8 *)(((Obj *)arg0)->p + 0x10))->y += flag;
            ((SV8 *)(((Obj *)arg0)->p + 0x10))->z += flag;
            AF(arg0, s32, 0x34) = -1;
            return;
        }
        FreeProp(arg0);
        return;
    }
    for (i = 0; i < 2; i++) {
        RotTransSV(&D_sc02_027_8018F210[i * 2 + 2], &sp18, &flag);
        RotTransSV(&D_sc02_027_8018F210[i * 2 + 3], &sp20, &flag);
        if (PathHitsModel(g->model, g->hitData, &sp18, &sp20) != 0) {
            HitPlayer(1, 0x4204, 0, 0x1E, &sp20, &g_GroundNormal);
            return;
        }
    }
}

void func_sc02_027_80180538(u8 *o) {
    SV8 a;
    SV8 b;

    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    AF(o, s32, 0x14) += 0x18000;
    MoveProp(o);
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA);
    b.z = AF(o, s16, 0xE);
    if (TraceMap(1, &a, &b)) {
        b.y -= 8;
        SpawnKind1CAt(&b);
        FreeProp(o);
    }
}

void func_sc02_027_801805EC(u8 *o) {
    SV8 a;
    SV8 b;
    u8 *p;

    a.x = AF(o, u16, 0x12);
    a.y = AF(o, u16, 0x16);
    a.z = AF(o, u16, 0x1A);
    LocalToWorld((u8 *)g_PlayerModel + 0x34, &a, &b);
    AF(o, u16, 6) = b.x;
    AF(o, u16, 0xA) = b.y;
    AF(o, u16, 0xE) = b.z;
    p = AF(o, u8 *, 0x20);
    AF(p, u16, 0x14) += AF(o, u16, 0x2A) - AF(g_PlayerModel, u16, 0x12);
    AF(o, u16, 0x2A) = AF(((struct { u8 *v; } *)&g_PlayerModel)->v, u16, 0x12);
    if (AF(o, s32, 0x2C) == 0) {
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s32, 0x2C)++;
        }
    } else {
        AF(AF(o, u8 *, 0x20), u32, 4) ^= 0x80000000;
        if (--AF(o, s32, 0x1C) == 0) {
            FreeProp(o);
        }
    }
}

s32 MachineLoopSound(u8 *o) {
    s32 d = PosDistSq(o + 4, &g_PlayerPosX);
    if (d <= 0x40000) {
        PlaySoundId(0x674, (u16)((d / 3276 + 0x2F) | 0x1000));
        return 1;
    }
    return 0;
}

s32 func_sc02_027_80180770(u8 *o) {
    V3 v;
    WMtx m;
    u8 *w;
    u8 *t;

    m = GsIDMATRIX;
    w = (u8 *)SpawnPropAt(0x3A, o + 0x88);
    if (w == 0) {
        return 0;
    }
    t = AF(w, u8 *, 0x20);
    InitSpriteKind2(t, &D_sc02_027_8018F120, 0x320, 0x100);
    AF(t, u8, 0x27) = 0x4E;
    AF(t, s16, 0x18) = 0x1800;
    AF(t, s16, 0x1A) = 0x3800;
    AF(t, s16, 0x10) = 0x400;
    AF(w, s16, 0x28) = AF(t, s16, 0x14) = AF(AF(o, u8 *, 0x68), u16, 0xC);
    RotMatrixY(AF(AF(o, u8 *, 0x68), s16, 0xC), &m);
    ApplyMatrixLV(&m, &D_sc02_027_8018F240, &v);
    AF(w, s32, 0x10) = v.x;
    AF(w, s32, 0x14) = v.y;
    AF(w, s32, 0x18) = v.z;
    AF(w, s32, 0x34) = AF(o, s32, 0xDC);
    func_sc02_027_80180A54((s32)w, (s32)&D_sc02_027_8018F12C, 0x1000);
    return (s32)w;
}

void func_sc02_027_801808CC(StageActor *arg0) {
    D_sc02_027_8018F24C[arg0->state]();
}

void func_sc02_027_80180908(StageActor *o) {
    ZeroFill(&D_sc02_027_801DA130, 0x600);
    D_sc02_027_801DA730 = GsIDMATRIX;
    D_sc02_027_801DA730.m[2][2] = 0x1000;
    o->state++;
}

void func_sc02_027_801809A8(void) {
    u8 *e;
    u8 *p;
    s32 i;

    e = (u8 *)&D_sc02_027_801DA130;
    for (i = 0; i < 0x40; i++, e += 0x18) {
        if (AF(e, s16, 6) != 0) {
            p = AF(e, u8 *, 0x14);
            if (AF(p, u16, 0) != 0 && AF(p, s32, 0x34) != -1) {
                func_sc02_027_80180B3C(e);
            } else {
                AF(e, s16, 6) = 0;
            }
        }
    }
}

s32 func_sc02_027_80180A54(s32 arg0, s32 arg1, s32 arg2) {
    s32 *var_s1;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;
    void *var_s0;

    var_s1 = &D_sc02_027_801DA130;
    var_v1 = 0;
    var_s0 = &D_sc02_027_801DA130 + 0x1;
loop_1:
    var_v1 += 1;
    if (AF(var_s0, s16, 2) == 0) {
        ZeroFill((s32) var_s1, 0x18);
        AF(var_s0, s16, 2) = 1;
        AF(var_s0, s32, 0x10) = arg0;
        AF(var_s0, s32, 0xC) = arg1;
        AF(var_s0, s16, 6) = (s16) arg2;
        AF(var_s0, s16, 4) = (s16) arg2;
        AF(var_s0, s16, 8) = 0x1000;
        *var_s1 |= 0x50000000;
        var_v0 = rand();
        temp_v1 = var_v0;
        if (temp_v1 < 0) {
            var_v0 = temp_v1 + 0xF;
        }
        AF(var_s0, s16, 0) = (s16) (temp_v1 - ((var_v0 >> 4) * 0x10));
        return (s32) var_s1;
    }
    var_s0 = (void *)((u8 *)var_s0 + 0x18);
    var_s1 = (s32 *)((u8 *)var_s1 + 0x18);
    if (var_v1 >= 0x40) {
        return 0;
    }
    goto loop_1;
}

void func_sc02_027_80180B3C(u8 *obj) {
    SV8 s[3];
    SV8 v;
    SV8 w;
    s32 sz;
    s32 flag;
    s32 otz;
    u8 *wk = (u8 *)&D_800AF630;
    u8 *e;
    u32 fl;
    u8 *q;
    u8 *pk;
    u32 *ot;
    s32 tp;
    u16 x;
    u16 y;
    u16 vv;
    s32 yy;
    s32 sh;
    u32 c;
    u32 t;

    e = AF(obj, u8 *, 0x10) + AF(obj, s16, 4) * 12;
    fl = AF(obj, u32, 0);
    q = AF(obj, u8 *, 0x14);
    if (e[0] == 0xFF) {
        e = AF(obj, u8 *, 0x10);
        AF(obj, s16, 4) = 0;
    }
    AF(obj, s16, 4)++;
    gte_SetRotMatrix(wk + 0x18);
    gte_SetTransMatrix(wk + 0x18);
    v.x = AF(q, s16, 6);
    v.y = AF(q, s16, 0xA);
    v.z = AF(q, s16, 0xE);
    v.y += 0x20;
    gte_ldv0(&v);
    gte_rtps();
    gte_stsxy(&s[0]);
    gte_stsz(&sz);
    D_sc02_027_801DA730.m[0][0] = AF(obj, s16, 8);
    D_sc02_027_801DA738 = AF(obj, s16, 0xA);
    gte_SetRotMatrix(&D_sc02_027_801DA730);
    gte_SetTransMatrix(&D_sc02_027_801DA730);
    v.x = AF(e, s16, 8);
    v.y = AF(e, s16, 0xA);
    v.z = sz;
    w.x = e[2];
    w.y = e[3];
    w.z = sz;
    gte_ldv3(&v, &w, &w);
    gte_rtpt();
    gte_stsxy0(&s[1]);
    gte_stsxy1(&s[2]);
    gte_stflg(&flag);
    gte_stszotz(&otz);
    if (flag & ~0x1000) {
        return;
    }
    tp = (fl >> 24) & 3;
    sh = 2 - tp;
    pk = g_PrimNext;
    g_PrimNext = pk + 0x28;
    pk[3] = 9;
    pk[7] = 0x2C;
    ot = g_WorldOtTable[D_800B9A02];
    x = AF(e, u16, 4);
    y = AF(e, u16, 6);
    pk[7] = 0x2E;
    AF(pk, u16, 0x16) = (tp << 7) | ((fl >> 23) & 0x60) | ((y & 0x100) >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
    pk[7] |= (fl & 0x40) >> 6;
    pk[0xC] = (x - ((AF(pk, u16, 0x16) & 0xF) << 6)) << sh;
    yy = y;
    if (AF(pk, u16, 0x16) & 0x10) {
        vv = yy - 0x100;
    } else {
        vv = yy;
    }
    pk[0xD] = vv;
    pk[0x14] = pk[0xC] + e[2] - 1;
    pk[0x15] = pk[0xD];
    pk[0x1C] = pk[0xC];
    pk[0x1D] = pk[0xD] + e[3] - 1;
    pk[0x24] = pk[0x14];
    pk[0x25] = pk[0x1D];
    c = e[1];
    t = (c + 0x100) << 6;
    if (c < 0xE0) {
        AF(pk, u16, 0xE) = t | 0x16;
    } else {
        AF(pk, u16, 0xE) = t | 0x10;
    }
    pk[4] = pk[5] = pk[6] = 0x80;
    switch (AF(q, s32, 0x34)) {
    case 0:
        AF(pk, s16, 0x8) = s[0].x + s[1].x * 4;
        AF(pk, s16, 0x10) = s[0].x;
        AF(pk, s16, 0x18) = s[0].x;
        AF(pk, s16, 0x20) = s[0].x + s[2].x * 2;
        break;
    case 1:
        AF(pk, s16, 0x8) = s[0].x;
        AF(pk, s16, 0x10) = s[0].x + s[2].x * 2;
        AF(pk, s16, 0x18) = s[0].x + s[1].x * 4;
        AF(pk, s16, 0x20) = s[0].x;
        break;
    case 2:
        AF(pk, s16, 0x8) = s[0].x + s[1].x;
        AF(pk, s16, 0x10) = AF(pk, s16, 0x8) + s[2].x;
        AF(pk, s16, 0x18) = AF(pk, s16, 0x8);
        AF(pk, s16, 0x20) = AF(pk, s16, 0x10);
        break;
    }
    ((XY *)(pk + 8))->y = s[0].y + s[1].y;
    ((XY *)(pk + 0x18))->y = ((XY *)(pk + 8))->y + s[2].y;
    ((XY *)(pk + 0x10))->y = ((XY *)(pk + 8))->y;
    ((XY *)(pk + 0x20))->y = ((XY *)(pk + 0x18))->y;
    addPrim((u32 *)((otz << 2) + (u32)ot) + 1, pk);
}

void func_sc02_027_80180FE0(StageActor *arg0) {
    func_sc02_027_80181328();
    D_sc02_027_8018F2E8[arg0->state](arg0);
}

void EmitterInit(StageActor *arg0) {
    if (GetFlag(0xB4) & 0xFF) {
        RejectSpawn(arg0);
        return;
    }
    if (SetupActor(arg0, (s32) &D_sc02_027_8018F264) != 0) {
        arg0->targetClass = 0;
        arg0->state = 1;
        arg0->hitMask = (u16) (arg0->hitMask | 0x8000);
    }
}

void EmitterFire(u8 *o) {
    SpawnDef d;
    u8 unused[8];
    s32 idx;

    if (TargetInFront(o, 0x380) != 0 && func_sc02_027_8018152C((s32)o, 0x380) != 0) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 0x14);
        if (AF(o, u16, 0x34) == 0) {
            if (AF(o, s16, 0xFE) == 0) {
                PlaySoundId(0x68B, 0);
                AF(o, s16, 0xFE) = 1;
            }
            if (AF(o, s16, 0xFC) >= 10) {
                AF(o, s16, 0xFC) = 10;
                AF(o, u16, 0x34)++;
            }
            idx = AF(o, s16, 0xFC);
            d.kind = 0x175;
            d.unkC = 0x7FFF;
            d.x = d.y = d.z = 0;
            d.unk8 = d.flags = 0;
            d.unk10 = (s32)&D_sc02_027_8018F298[idx];
            d.unkE = AF(o, s16, 0xFC);
            if (SpawnActorFromDef(&d, o) != 0) {
                AF(o, s16, 0xFC)++;
            }
        }
    } else {
        if (AF(o, s16, 0xFC) != 0) {
            AF(o, s16, 0xFC)--;
            AF(o, u16, 0x34) = 0;
            if (AF(o, s16, 0xFE) != 0) {
                AF(o, s16, 0xFE) = 0;
                PlaySoundId(4, 0x68B);
            }
        }
    }
}

void func_sc02_027_80181200(u8 *o) {
    s32 s;

    s = -(rsin((AF(o, s32, 0x1C) << 10) & 0xC00) >> 12);
    AF(o, s16, 6) += AF(o, u16, 0xFE) * s;
    AF(o, s16, 0xA) += AF(o, u16, 0x100) * s;
    AF(o, s16, 0xE) += AF(o, u16, 0x102) * s;
    if (TickTimer(o)) {
        AF(o, s16, 2) = 1;
        AF(o, s16, 0x34) = 0;
        AF(o, s16, 0x5C) = AF(AF(o, u8 *, 0x78), s16, 2);
        AF(o, s16, 6) = AF(o, s16, 0x88);
        AF(o, s16, 0xA) = AF(o, s16, 0x8A);
        AF(o, s16, 0xE) = AF(o, s16, 0x8C);
    }
}

void EmitterDie(s32 arg0, s32 arg1, s32 arg2) {
    PlaySoundId(4, 0x68B, arg2);
    SetFlag(0xB4, 1);
    if (TickTimer(arg0) != 0) {
        GainStat0FromActor(arg0);
        FreeActor(arg0);
    }
}

s32 func_sc02_027_80181328(StageActor *o) {
    u8 unused[8];
    SpawnDef d;
    s32 i;
    s32 n;
    u16 f;

    f = o->hitState;
    if (!(f & 1)) {
        return 0;
    }
    o->hitState = f & 0x7FFE;
    if (o->hitCode != 0xC) {
        o->hitState = o->init->hitState;
        o->hitCode = 0;
        d.x = (u16)o->hitPos[0];
        d.y = (u16)o->hitPos[1];
        d.z = (u16)o->hitPos[2];
        d.kind = 0x18B;
        d.unkC = 0x7FFF;
        d.unk8 = 1;
        d.flags = 0;
        d.unk10 = 0;
        d.unkE = 0x800;
        for (i = 0; i < 6; i++) {
            SpawnActorFromDef(&d, o);
        }
        return 0;
    }
    TakeDamage(o);
    if (o->hitCode != 0x1D) {
        if (o->hitFx[0] != 0) {
            GainStat3FromActor(o);
        }
        if (o->hitFx[1] != 0) {
            GainStat2FromActor(o);
        }
    }
    n = (o->hitDamage * o->init->damageScale) >> 12;
    if (n <= 0) {
        n = 1;
    }
    o->state = 3;
    o->unkFC = 0;
    o->timer = 0x1E;
    o->hp -= n;
    SpawnActorArg(0x1A1, 0, o);
    SpawnActorArg(0x1A1, 1, o);
    SpawnActorArg(0x1A1, 2, o);
    d.x = (u16)o->hitPos[0];
    d.y = (u16)o->hitPos[1];
    d.z = (u16)o->hitPos[2];
    d.kind = 0x18B;
    d.unkC = 0x7FFF;
    d.flags = 0;
    d.unk10 = 0;
    d.unkE = 0x800;
    for (i = 0; i < 10; i++) {
        d.unk8 = rand() & 1;
        SpawnActorFromDef(&d, o);
    }
    PlaySoundId(0x68C, 0);
    HideModel(o);
    return 1;
}

s32 func_sc02_027_8018152C(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = (HeadingTo((s32) &g_PlayerPosX, arg0 + 4) - AF(g_PlayerModel, s16, 0x12)) & 0xFFF;
    if (temp_a0 < 0x800) {
        return temp_a0 < (s16) arg1;
    }
    return (0x1000 - temp_a0) < (s16) arg1;
}

void func_sc02_027_801815AC(StageActor *arg0) {
    D_sc02_027_8018F450[arg0->state]();
}

void func_sc02_027_801815E8(StageActor *o) {
    SV8 a;
    ModelObj *p;
    s16 t;
    s32 n;
    p = (u8 *) AllocActorModel();
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    o->model = p;
    func_8001CA1C(p, &D_sc02_027_8018F2F8);
    t = o->unkFC % 10;
    p->scale.vx = t * 256 + 0x2000;
    n = (o->unkFC + 1) << 10;
    p->unk04 |= 0x50000000;
    p->flags |= 0x10;
    p->scale.vy = n;
    o->hitData = ((s32) &D_sc02_027_8018F440 | 0x40000000) | 0x20000000;
    o->workFE = o->parent->id;
    o->work100 = (u16)o->parent->def->unkC;
    FaceHelper(o->parent, o->message, &a);
    o->pos[0].h.i = a.x;
    o->pos[1].h.i = a.y;
    o->pos[2].h.i = a.z;
    SetScript(o, &D_sc02_027_8018F3B8);
    o->state++;
}

void func_sc02_027_80181740(StageActor *o) {
    SV8 a;
    SV8 b;
    StageActor *p;

    p = o->parent;
    if (o->workFE != (s16)p->id || p->unkFC <= o->unkFC) {
        FreeActor(o);
        return;
    }
    FaceHelper(p, o->message, &a);
    o->pos[0].h.i = a.x;
    o->pos[1].h.i = a.y;
    AF(o, u16, 0xE) = a.z;
    LocalToWorld((u8 *)g_PlayerModel + 0x34, &D_sc02_027_8018F458, &a);
    LocalToWorld((u8 *)g_PlayerModel + 0x34, &D_sc02_027_8018F458 + 8, &b);
    if (PathHitsModel(o->model, o->hitData, &a, &b) != 0) {
        HitPlayer(1, 0x4201, p->model->rot.vy, 0x1C, &b, &g_GroundNormal);
    }
}

void func_sc02_027_80181858(StageActor *arg0) {
    D_sc02_027_8018F470[arg0->state]();
}

void func_sc02_027_80181894(u8 *o) {
    u8 *w;
    s32 r;
    s32 d;
    s32 s;
    u8 unused[8];

    w = (u8 *)AllocActorModel();
    if (w == 0) {
        RejectSpawn(o);
        return;
    }
    AF(o, u8 *, 0x20) = w;
    InitModel(w, D_sc02_027_8018F468[AF(o, u16, 0x70) & 0xF]);
    if (AF(o, s16, 0xFC) != 0) {
        AF(w, u16, 0x2C) |= 0x10;
        AF(w, s16, 0x18) = AF(w, s16, 0x1A) = AF(w, s16, 0x1C) = AF(o, s16, 0xFC);
    }
    r = rand();
    d = -1;
    if (r & 1) {
        d = 1;
    }
    s = (s16)r;
    AF(w, s16, 0x10) = d * (s % 128) - 0x300;
    AF(w, s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12) + d * (s % 768);
    AF(w, s16, 0x14) = 0;
    UpdateModelZYX(o);
    StopWithGravity(o);
    SetForwardVelocity(o, -0x100000 - ((s % 8) << 16));
    AF(o, s32, 0x1C) = 0x5A;
    AF(o, s16, 0xFC) = rand() & 0xF0;
    AF(o, s16, 0xFE) = rand() & 0x1F0;
    AF(o, s16, 0x100) = rand() & 0x30;
    AF(o, u16, 2)++;
}

void func_sc02_027_80181A54(u8 *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFC));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + AF(arg0, u16, 0xFE));
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + AF(arg0, u16, 0x100));
    if ((MoveCollide((s32) arg0, (s32) temp_a1) != 0) || (TickTimer((s32) arg0) != 0)) {
        FreeActor((s32) arg0);
    }
}

void func_sc02_027_80181AE4(StageActor *arg0) {
    D_sc02_027_8018F49C[arg0->state]();
}

void func_sc02_027_80181B20(u8 *o) {
    SV8 a;
    u8 *w;
    s32 idx;
    s32 r;
    s32 d;
    s32 s;

    w = (u8 *)AllocActorModel();
    if (w == 0) {
        RejectSpawn(o);
        return;
    }
    idx = AF(o, u16, 0x70) & 0xF;
    AF(o, u8 *, 0x20) = w;
    InitModel(w, D_sc02_027_8018F478[idx]);
    FaceHelper(AF(o, u8 *, 0x64), &D_sc02_027_8018F484[idx], &a);
    AF(o, u16, 6) = a.x;
    AF(o, u16, 0xA) = a.y;
    AF(o, u16, 0xE) = a.z;
    if (idx == 0) {
        r = rand();
        d = -1;
        if (r & 1) {
            d = 1;
        }
        s = (s16)r;
        AF(w, s16, 0x10) = d * (s % 128) - 0x300;
        AF(w, s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12) + d * (s % 768);
        AF(w, s16, 0x14) = 0;
        UpdateModelZYX(o);
        StopWithGravity(o);
        SetForwardVelocity(o, -0x100000 - ((s % 8) << 16));
        AF(o, s16, 2) = 1;
        AF(o, s16, 0xFC) = rand() & 0xF0;
        AF(o, s16, 0xFE) = rand() & 0x1F0;
        AF(o, s16, 0x100) = rand() & 0x30;
    } else {
        AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
        UpdateModelZYX(o);
        AF(o, s16, 2) = 2;
        AF(o, s32, 0x1C) = 0x30;
    }
}

void func_sc02_027_80181D14(u8 *o) {
    if (AF(o, s16, 0xA) >= 0x10) {
        FreeActor(o);
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        func_sc02_027_80181E90((s32) o);
        if (MoveCollidePassableAt(o, &D_sc02_027_8018F4A8) & 0x2000) {
            AF(o, s32, 0x14) = -0x80000;
            AF(o, u16, 0x34)++;
            PlaySoundId(0x9C5, 0);
        }
        break;
    case 1:
        func_sc02_027_80181E90((s32) o);
        if (MoveCollidePassableAt(o, &D_sc02_027_8018F4A8) & 0x2000) {
            AF(o, s32, 0x1C) = 0x30;
            AF(o, u16, 0x34)++;
            PlaySoundId(0x9C5, 0);
        }
        break;
    case 2:
        if (TickTimer(o) != 0) {
            AF(o, s32, 0x1C) = 0x30;
            AF(o, u16, 0x34)++;
        }
    case 3:
        ToggleModel(o);
        if (TickTimer(o) != 0) {
            FreeActor(o);
        }
        break;
    }
}

void func_sc02_027_80181E50(s32 arg0) {
    ToggleModel(arg0);
    if (TickTimer(arg0) != 0) {
        FreeActor(arg0);
    }
}

void func_sc02_027_80181E90(s32 arg0) {
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x10) = (u16) (AF(temp_a1, u16, 0x10) + AF(arg0, u16, 0xFC));
    temp_a1_2 = AF(arg0, void *, 0x20);
    AF(temp_a1_2, u16, 0x12) = (u16) (AF(temp_a1_2, u16, 0x12) + AF(arg0, u16, 0xFE));
    temp_a1_3 = AF(arg0, void *, 0x20);
    AF(temp_a1_3, u16, 0x14) = (u16) (AF(temp_a1_3, u16, 0x14) + AF(arg0, u16, 0x100));
}

s32 func_sc02_027_80181EDC(void) {
    switch (D_8012704C) {
    case 0:
        return 0x39;
    case 1:
        return 0x3B;
    case 2:
        return 0x45;
    }
}

void func_sc02_027_80181F38(StageActor *p) {
    ModelObj *r;
    u8 *o;

    r = AllocActorModel();
    p->model = r;
    if (r == 0) {
        RejectSpawn(p);
        return;
    }
    if (GetFlag(D_sc02_027_801AB580[p->param]) & 0xFF) {
        o = (u8 *)p->message;
        if (o != 0 && AF(o, s32, 4) != 0) {
            InitModel(p->model, AF(o, s32, 4));
            if (AF(o, s32, 0xC) != 0) {
                p->model->unk04 |= 0x01000000;
            }
        }
        NextState(p);
    } else {
        o = (u8 *)p->message;
        if (o != 0 && AF(o, s32, 0) != 0) {
            InitModel(p->model, AF(o, s32, 0));
            if (AF(o, s32, 0xC) != 0) {
                p->model->unk04 |= 0x01000000;
            }
        }
        p->reactive = 1;
        p->params = &D_sc02_027_801AB570;
        p->hitData = (s32) &D_sc02_027_801AB560 | 0x40000000;
        p->hitState = 0x8800;
        p->reactMask = 0;
        p->react = 0;
        p->hitMask = 0x7FFF;
        p->targetClass = 0;
        p->reactOpts |= 2;
    }
    NextState(p);
}

void func_sc02_027_801820BC(StageActor *arg0) {
    D_sc02_027_801AB590[arg0->state]();
    func_sc02_027_80182204((s32) arg0);
}

void func_sc02_027_8018210C(StageActor *arg0) {
    void *p;
    s32 t;

    arg0->react = 0;
    arg0->hitCode = 0;
    arg0->hitState = 0;
    SetFlag(D_sc02_027_801AB580[arg0->param], 1);
    p = arg0->message;
    if (p != NULL) {
        t = AF(p, s32, 4);
        if (t != 0) {
            SetModelParts(arg0->model, t);
        }
    }
    func_sc02_027_8018218C((s32) arg0);
}

s32 func_sc02_027_8018218C(StageActor *arg0) {
    s32 temp_s2;
    s32 var_s0;
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v1 = arg0->model;
    temp_s2 = (s32)temp_v1->pose;
    var_s0 = 0;
    temp_v1->pose = (s32) D_sc02_027_801AB548;
    do {
        SpawnActorArg(0x150, var_s0, arg0);
        var_s0 += 1;
    } while (var_s0 < 5);
    temp_v0 = arg0->model;
    temp_v0->pose = temp_s2;
    return (s32) temp_v0;
}

void func_sc02_027_80182204(u8 *arg0) {
    u8 *p;
    VoidFn fn;

    p = AF(arg0, u8 *, 0xDC);
    if (p != NULL) {
        fn = AF(p, VoidFn, 0xC);
        if (fn != NULL) {
            fn(arg0, arg0 + 0x24);
        }
    }
}

void func_sc02_027_80182244(u8 *p) {
    s32 r;
    u8 *o;
    u8 *q;

    r = AllocActorModel();
    AF(p, s32, 0x20) = r;
    if (r == 0) {
        RejectSpawn(p);
        return;
    }
    o = AF(AF(p, u8 *, 0x64), u8 *, 0xDC);
    if (o != 0 && AF(o, s32 *, 8) != 0) {
        D_sc02_027_801DA750[AF(p, s16, 0x70)].a = AF(o, s32 *, 8)[AF(p, s16, 0x70)];
    }
    D_sc02_027_801DA750[AF(p, s16, 0x70)].b = 0;
    InitModel(AF(p, s32, 0x20), &D_sc02_027_801DA750[AF(p, s16, 0x70)]);
    if (AF(o, s32, 0xC) != 0) {
        AF(AF(p, u8 *, 0x20), s32, 4) |= 0x01000000;
    }
    AF(p, s16, 6) = AF(p, s16, 0xA) = AF(p, s16, 0xE) = 0;
    func_80132784(p, AF(p, u8 *, 0x64), AF(p, u16, 0x70));
    AF(p, s16, 6) = AF(AF(p, u8 *, 0x20), s32, 0x48);
    AF(p, s16, 0xA) = AF(AF(p, u8 *, 0x20), s32, 0x4C);
    AF(p, s16, 0xE) = AF(AF(p, u8 *, 0x20), s32, 0x50);
    AF(AF(p, u8 *, 0x20), B8, 0x10) = AF(AF(AF(p, u8 *, 0x64), u8 *, 0x20), B8, 0x10);
    StopWithGravity(p);
    ApplyMatrixLV(AF(AF(p, u8 *, 0x64), u8 *, 0x20) + 0x34, &D_sc02_027_801AB59C[AF(p, s16, 0x70)], p + 0x10);
    AF(p, s16, 0xFC) = rand() & 0xF0;
    AF(p, s16, 0xFE) = rand() & 0x1F0;
    AF(p, s16, 0x100) = rand() & 0x30;
    q = SpawnPropFrom(p, 0x22);
    if (q != 0) {
        AF(q, s16, 0x34) = 0x4001;
        AF(q, s32, 0x10) = AF(p, s32, 0x10) >> 2;
        AF(q, s32, 0x14) = AF(p, s32, 0x14) >> 2;
        AF(q, s32, 0x18) = AF(p, s32, 0x18) >> 2;
    }
    AF(p, s32, 0x1C) = 0x20;
    NextState(p);
}

void func_sc02_027_80182460(StageActor *arg0) {
    D_sc02_027_801AB5EC[arg0->state]();
}

void func_sc02_027_8018249C(void) {
}

void func_sc02_027_801824A4(void) {
}

void func_sc02_027_801824AC(u8 *arg0) {
    s32 r;

    AF(AF(arg0, u8 *, 0x20), u16, 0x10) += AF(arg0, u16, 0xFC);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += AF(arg0, u16, 0xFE);
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) += AF(arg0, u16, 0x100);
    r = MoveCollidePassable(arg0);
    if (AF(arg0, s16, 0xA) > 0x100) {
        FreeActor(arg0);
    }
    if (AF(arg0, u16, 0x34) != 0) {
        if (r & 0x6000) {
            FreeActor(arg0);
        }
    } else if (r & 0x6000) {
        AF(arg0, s32, 0x14) = -0x80000;
        AF(arg0, s16, 0xFC) >>= 1;
        AF(arg0, s16, 0xFE) >>= 1;
        AF(arg0, u16, 0x34)++;
        AF(arg0, s16, 0x100) >>= 1;
    }
}

void func_sc02_027_801825B0(StageActor *arg0) {
    arg0->timer = 0x20;
    SetState(arg0, 1);
}

void func_sc02_027_801825D8(StageActor *arg0) {
    arg0->vel[0] = 0x18000;
    SetState(arg0, 2);
    PlaySoundId(0x675, 0);
}

void func_sc02_027_80182610(StageActor *arg0) {
    func_80153C30();
    HitPlayerFatal();
    StartCameraShake((s32) &D_sc02_027_8018B99C);
    SetState(arg0, 3);
    PlaySoundId(4, 0x675);
    PlaySoundId(0xAAE, 0);
}

void func_sc02_027_80182674(StageActor *arg0) {
    void *temp_v1;

    D_sc02_027_801AB604[arg0->state]();
    CarryPlayerClipped((s32) arg0);
    temp_v1 = arg0->ext0;
    if (temp_v1 != NULL) {
        AF(temp_v1, u16, 8) = (u16) (u16)arg0->pos[0].h.i;
        AF(temp_v1, u16, 0xA) = (u16) (u16)arg0->pos[1].h.i;
        AF(temp_v1, s16, 0xC) = (s16) ((u16)arg0->pos[2].h.i - 0x27E);
    }
}

void func_sc02_027_801826FC(StageActor *arg0) {
    arg0->timer = 0x10;
    SetState((s32) arg0, 1);
}

void func_sc02_027_80182724(StageActor *arg0) {
    arg0->accel[0] = 0x4000;
    SetState(arg0, 2);
    PlaySoundId(0x684, 0);
}

void func_sc02_027_80182758(StageActor *arg0) {
    StartCameraShake((s32) &D_sc02_027_8018B99C);
    arg0->timer = (*(s16 *)&D_sc02_027_801AB624[arg0->work100]);
    SetState(arg0, 3);
    PlaySoundId(4, 0x684);
    PlaySoundId(0x685, 0);
}

void func_sc02_027_801827C8(StageActor *arg0) {
    D_sc02_027_801AB650[arg0->state]();
    if (arg0->work100 == 0) {
        func_sc02_027_80182828((s32) arg0);
    }
}

void func_sc02_027_80182828(s32 arg0) {
    if ((g_PlayerX < 0x281) && (D_80126B62 < -0x658)) {
        D_80126B62 = -0x658;
    }
}

void func_sc02_027_80182868(StageActor *o) {
    ModelObj *r;
    s16 i;
    s16 k;
    r = AllocActorModel();
    o->model = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(r, &D_sc02_027_801ACD58);
    o->model->colour = 0x2000200;
    o->hitData = (u32)&D_sc02_027_801AB660 | 0x10000000;
    o->targetClass = 0;
    if (o->param == 1) {
        o->model->unk04 |= 0x80000000;
        o->hitState = 0;
    } else {
        o->hitState = 0xCC00;
    }
    o->pos[0].h.i = D_sc02_027_801AB670[o->param * 4];
    o->pos[1].h.i = D_sc02_027_801AB672[o->param * 4];
    o->pos[2].h.i = D_sc02_027_801AB674[o->param * 4];
    func_sc02_027_80182A44(o);
    if (o->param == 3) {
        o->model->rot.vx = 0x800;
    }
    if ((u8)GetFlag(0xAE) == 0) {
        return;
    }
    for (i = 0; ((s16 *)D_sc02_027_801AB624)[i] != 0; i += 2) {
        k = ((s16 *)D_sc02_027_801AB624)[i + 1];
        if (k == o->param && k >= 2) {
            if (D_sc02_027_801AB676[k * 4].v != 0) {
                o->pos[0].h.i -= 0x200;
            } else {
                o->pos[0].h.i += 0x200;
            }
        }
    }
}

void func_sc02_027_80182A44(StageActor *o) {
    if ((GetFlag(0xAE) & 0xFF) || o->param == 0) {
        SetState(o, 3);
    } else {
        SetState(o, 1);
    }
}

void func_sc02_027_80182AA4(StageActor *o) {
    if (D_sc02_027_801AB676[o->param * 4].v != 0) {
        o->accel[0] = -0x8000;
    } else {
        o->accel[0] = 0x8000;
    }
    SetState(o, 2);
    PlaySoundId(0x686, 0);
}

void func_sc02_027_80182AFC(u8 *o) {
    Player *g = &g_Player;
    s32 lim;
    s16 d;
    s32 i;
    u16 x;
    s16 f;
    MoveObject(o);
    if (AF(o, u8, 0x74) != 0) {
        CarryPlayerExact(o);
        func_sc02_027_80182D4C(o, &D_sc02_027_801AB660, -1);
    } else {
        func_sc02_027_80182D4C(o, &D_sc02_027_801AB660, D_sc02_027_801AB676[AF(o, s16, 0x70) * 4].v);
    }
    lim = 0x200;
    if (AF(o, s16, 0x70) == 1) {
        lim = 0x180;
    }
    i = AF(o, s16, 0x70) * 4;
    x = D_sc02_027_801AB670[i];
    f = 1;
    if (D_sc02_027_801AB676[i].v != 0) {
        if (AF(o, s32, 0x10) < -0x80000) {
            AF(o, s32, 0x44) = 0;
        }
        d = x - AF(o, u16, 6);
    } else {
        if (AF(o, s32, 0x10) > 0x80000) {
            AF(o, s32, 0x44) = 0;
        }
        d = AF(o, u16, 6) - x;
    }
    if (d >= lim - 0x18) {
        if (f) {
            if (AF(o, s16, 0xA) + D_sc02_027_801AB668 <= g->pos[1].h.i) {
                HitPlayerFatal();
            }
        }
    }
    if (d >= lim) {
        func_sc02_027_80182C78(o);
    }
}

void func_sc02_027_80182C78(StageActor *o) {
    void (*f)();

    StartCameraShake((s32) &D_sc02_027_8018B9C0);
    if (o->param == 0x12 && g_Player.state != 0x1A) {
        SetFlag(0xAE, 1);
        f = *(void (**)())((u8 *)o->parent + 0xDC);
        if (f != 0) {
            f();
        }
    }
    SetState(o, 3);
    PlaySoundId(0x685, 0);
}

void func_sc02_027_80182D10(StageActor *arg0) {
    D_sc02_027_801AB708[arg0->state]();
}

void func_sc02_027_80182D4C(u8 *o, u8 *b, s32 dir) {
    Player *g;

    g = &g_Player;
    if (g->state != 0x1A
        && AF(o, s16, 0xA) + AF(b, s16, 8) <= D_80126B62
        && D_80126B62 < AF(o, s16, 0xA) + AF(b, s16, 0xA)
        && AF(o, s16, 6) + AF(b, s16, 4) < g_PlayerX
        && g_PlayerX < AF(o, s16, 6) + AF(b, s16, 6)) {
        if (dir >= 0) {
            if (dir != 0) {
                if (g_PlayerX < AF(o, s16, 6) + AF(b, s16, 4) + 0x18) {
                    g_PlayerX = AF(o, s16, 6) + AF(b, s16, 4);
                    return;
                }
            } else {
                if (AF(o, s16, 6) + AF(b, s16, 6) - 0x18 < g_PlayerX) {
                    g_PlayerX = AF(o, s16, 6) + AF(b, s16, 6);
                    return;
                }
            }
        }
        g->pos[1].h.i = AF(o, u16, 0xA) + AF(b, u16, 8) - 1;
    }
}

void func_sc02_027_80182E4C(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v0;
    s32 temp_v0_2;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel(arg0, arg1);
    arg0->model = temp_v0;
    if ((temp_v0 == 0) || (InitModel(temp_v0, (s32) &D_sc02_027_801ACA00), temp_v0_2 = AllocActorModel(), (temp_v0_2 == 0))) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0_2, (s32) &D_sc02_027_801ACA00);
    temp_v1 = arg0->model;
    arg0->ext0 = temp_v0_2;
    temp_v1->unk04 = (s32) ((s32)temp_v1->unk04 | 0x8000);
    AF(temp_v0_2, s32, 4) = (s32) (AF(temp_v0_2, s32, 4) | 0x8000);
    arg0->model->colour = 0x01800180;
    AF(temp_v0_2, s32, 0x28) = 0x01800180;
    arg0->hitData = (s32) ((s32) &D_sc02_027_801AB5F4 | 0x10000000);
    arg0->hitState = 0xC800;
    arg0->targetClass = 0;
    SetFlag(0xAE, 0);
    arg0->unkFC = (u16) (u16)arg0->pos[0].h.i;
    func_sc02_027_801825B0(arg0);
}

void func_sc02_027_80182F3C(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        func_sc02_027_801825D8(arg0);
    }
}

void func_sc02_027_80182F74(s32 arg0) {
    MoveObject(arg0);
    if ((AF(arg0, s16, 6) - AF(arg0, s16, 0xFC)) >= 0x161) {
        func_sc02_027_80182610(arg0);
    }
}

void func_sc02_027_80182FC0(void) {
}

void func_sc02_027_80182FC8(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;
    s32 var_s0;

    temp_v0 = AllocActorModel(arg0, arg1);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc02_027_801ACB40);
    temp_v1 = arg0->model;
    temp_v1->unk04 = (s32) ((s32)temp_v1->unk04 | 0x8000);
    arg0->model->colour = 0x01800180;
    var_s0 = 0;
    arg0->hitData = (s32) ((s32) &D_sc02_027_801AB614 | 0x10000000);
    arg0->hitState = 0xCC00;
    arg0->targetClass = 0;
    arg0->unkFC = (u16) (u16)arg0->pos[0].h.i;
    do {
        SpawnActorArg(0x160, var_s0, arg0);
        var_s0 += 1;
    } while (var_s0 < 0x13);
    arg0->workFE = 0;
    arg0->work100 = 0;
    func_sc02_027_801826FC(arg0);
}

void func_sc02_027_8018309C(s32 arg0) {
    if (!(GetFlag(0xAE) & 0xFF) && (TickTimer(arg0) != 0)) {
        func_sc02_027_80182724(arg0);
    }
}

void func_sc02_027_801830EC(s32 arg0) {
    MoveObject(arg0);
    if (AF(arg0, s32, 0x10) > 0x7FFFF) {
        AF(arg0, s32, 0x44) = 0;
    }
    CarryPlayerClipped(arg0);
    if ((AF(arg0, s16, 6) - AF(arg0, s16, 0xFC)) >= 0x3E0) {
        func_sc02_027_80182758(arg0);
    }
}

void func_sc02_027_8018315C(u8 *o) {
    if (AF(o, u16, 0x34) == 0 && TickTimer(o) != 0) {
        AF(o, u16, 0xFE) = ((u16 *)D_sc02_027_801AB624)[AF(o, s16, 0x100) * 2 + 1];
        AF(o, s16, 0x100)++;
        AF(o, s32, 0x1C) = *(s16 *)&D_sc02_027_801AB624[AF(o, s16, 0x100)];
        if (AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34)++;
        }
    }
}

void func_sc02_027_801831F4(StageActor *o) {
    switch (o->param) {
    case 1:
        if (o->parent->workFE == 1) {
            o->model->unk04 &= 0x7FFFFFFF;
            o->hitState = 0xCC00;
            func_sc02_027_80182AA4(o);
        }
        return;
    case 3:
        if (g_PlayerX > 0x280) {
            o->model->rot.vx = 0;
        }
        break;
    }
    if (o->parent->workFE == o->param) {
        func_sc02_027_80182AA4(o);
    }
}

void func_sc02_027_801832B0(StageActor *arg0) {
    func_sc02_027_80182D4C(arg0, (s32) &D_sc02_027_801AB660, -1);
}

void func_sc02_027_801832D8(StageActor *arg0) {
    arg0->unkFC = 0;
    SetState(arg0, 1);
}

void func_sc02_027_801832FC(o)
    u8 *o;
{
    AF(o, s16, 0xFE) = 1;
    SpawnActorArg(0x156, AF(o, s16, 0x70), o);
    SetState(o, 2);
}

void func_sc02_027_80183344(StageActor *arg0) {
    arg0->work100 = 1;
    arg0->model->scale.vy = 0x100;
    arg0->workFE = 1;
    SpawnActorArg(0x156, (s32) arg0->param, arg0);
    SetState(arg0, 2);
}

void func_sc02_027_8018339C(StageActor *arg0) {
    D_sc02_027_801AB72C[arg0->state]();
    if ((arg0->work100 == 0) && (func_sc02_027_80183418((s32) arg0) != 0)) {
        (*(u16 *)&g_PlayerHitKind) = 0xC00B;
        g_PlayerHitDamage = 0x18;
    }
}

s32 func_sc02_027_80183418(StageActor *o) {
    SV8 a, b, c, d;
    s32 i;

    a.x = b.x = c.x = d.x = -0x118;
    a.y = b.y = c.y = d.y = -0x20;
    a.z = 0x133;
    b.z = c.z = 0x393;
    d.z = 0x5F3;
    for (i = 0; i < 12; i++) {
        if (ActorSegmentHitsPlayer(o, &a, &b) != 0) {
            return 1;
        }
        if (ActorSegmentHitsPlayer(o, &c, &d) != 0) {
            return 1;
        }
        a.x += 0x33;
        b.x = c.x = d.x = a.x;
    }
    return 0;
}

void func_sc02_027_801834E8(StageActor *o) {
    ModelObj *r = AllocActorModel();
    o->model = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    func_8001C810(r, &D_sc02_027_801AD138);
    o->model->unk04 |= 0x8040;
    o->model->rot.vy = D_sc02_027_801AB73E[o->param * 4];
    if (o->param < 2) {
        o->hitData = (u32)&D_sc02_027_801AB748 | 0x40000000;
        o->hitState = 0xC400;
        o->targetClass = 0;
        o->pos[0].h.i = D_sc02_027_801AB738[o->param * 4];
        o->pos[1].h.i = D_sc02_027_801AB73A[o->param * 4];
        o->pos[2].h.i = D_sc02_027_801AB73C[o->param * 4];
        if (o->parent->work100 == 0) {
            StartEvent(o, &D_sc02_027_801AB758);
            o->workFE = 1;
            o->parent->workFE = 2;
            func_sc02_027_80183658(o);
        } else {
            o->pos[1].h.i += 0x280;
            func_sc02_027_801836B0(o);
        }
    } else {
        func_sc02_027_80183918(o);
    }
}

void func_sc02_027_80183658(StageActor *arg0) {
    arg0->timer = 0x10;
    SetState((s32) arg0, 1);
}

void func_sc02_027_80183680(StageActor *arg0) {
    arg0->vel[1] = 0x80000;
    arg0->timer = 0x50;
    SetState(arg0, 2);
}

void func_sc02_027_801836B0(StageActor *arg0) {
    if (arg0->workFE != 0) {
        EndEvent(arg0);
        arg0->workFE = 0;
        arg0->work102 = 0;
    }
    SetState(arg0, 3);
    if (arg0->unkFC == 0) {
        arg0->stateCount = 2;
        arg0->timer = 0x40;
    }
}

void func_sc02_027_8018371C(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    if (AF(AF(arg0, void *, 0x64), s16, 0xFE) != 2) {
        temp_v1 = AF(arg0, u16, 0x34);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if (AF(arg0, s16, 0x102) == 0) {
                if (FindObj68ByKind(0, 0xA) != 0) {
                    AF(arg0, s16, 0x102) = 1;
                    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) + 1);
                }
            } else if (FindObj68ByKind(0, 0xA) == 0) {
                AF(arg0, s16, 0x102) = 0;
                if (AF(arg0, s16, 0xFC) != AF(arg0, s16, 0x106)) {
                    AF(arg0, s16, 0x104) = 1;
                }
            }
            if (AF(arg0, s16, 0xFC) == 0) {
                if (AF(arg0, s16, 0x104) == 0) {
                    GainStat0(0x64);
                    GainStat1(0x64);
                    GainStat3(0x64);
                    GainStat2(0x64);
                    ShowDamage((s32) arg0, -1);
                }
                AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
                StartEvent((s32) arg0, (s32) &D_sc02_027_801AB760);
                return;
            }
            break;
        case 1:
            if (IsEventDone((s32) arg0, arg1) != 0) {
                EndEvent((s32) arg0);
                AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
                AF(AF(arg0, void *, 0x64), s16, 0x100) = 1;
                SetFlag((s32) *(u16 *)((u8 *)&D_sc02_027_801AB728 + (AF(AF(arg0, void *, 0x64), s16, 0x70) * 2)), 1);
                AF(arg0, s32, 0x1C) = 0xA0;
                return;
            }
            break;
        case 2:
            if (TickTimer((s32) arg0, arg1, arg2) != 0) {
                goto block_20;
            }
            break;
        }
    } else {
block_20:
        func_sc02_027_801838E8((s32) arg0);
        PlaySoundId(0x6CA, 0);
    }
}

void func_sc02_027_801838E8(StageActor *arg0) {
    arg0->vel[1] = 0xFFF80000;
    arg0->timer = 0x50;
    SetState(arg0, 4);
}

void func_sc02_027_80183918(StageActor *arg0) {
    SetState(arg0, 5);
}

void func_sc02_027_80183938(StageActor *arg0) {
    StageActor *temp_v0;

    D_sc02_027_801AB778[arg0->state]();
    temp_v0 = arg0->parent;
    if ((temp_v0 != NULL) && (temp_v0->workFE == 0)) {
        FreeActor((s32) arg0);
        return;
    }
    if (arg0->unk74 != 0) {
        CarryPlayerExact((s32) arg0);
    }
}

void func_sc02_027_801839C8(StageActor *arg0) {
    s32 var_s0;

    var_s0 = 0;
    arg0->unkFC = 0U;
    do {
        if (SpawnActorArg(0x16F, var_s0, arg0) != 0) {
            arg0->unkFC = (u16) ((u16)arg0->unkFC + 1);
        }
        var_s0 += 1;
    } while (var_s0 < 0xA);
    arg0->work106 = (u16) (u16)arg0->unkFC;
}

void func_sc02_027_80183A40(u8 *o) {
    void (**t)() = (void (**)()) AF(AF(o, u8 *, 0x64), u8 *, 0xDC);

    if (t != 0 && *t != 0) {
        (*t)();
    }
}

s32 func_sc02_027_80183A88(u8 *o) {
    u8 *p = AF(AF(o, u8 *, 0x64), u8 *, 0xDC);
    VoidFn fn;
    if (p != 0) {
        fn = AF(p, VoidFn, 4);
        if (fn != 0) {
            return ((s32 (*)()) fn)();
        }
    }
    return 1;
}

void func_sc02_027_80183ADC(StageActor *o) {
    ModelObj *r = AllocActorModel();
    o->model = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(r, &D_sc02_027_801AD2B8);
    o->model->scale.vy = 0x1000;
    o->model->scale.vx = o->model->scale.vz = 0xA00;
    o->model->flags |= 0x10;
    o->hitData = (s32)&D_sc02_027_801AB718 | 0x20000000;
    o->hitState = 0xCC00;
    o->targetClass = 0;
    if (GetFlag(*(u16 *)((u8 *)&D_sc02_027_801AB728 + o->param * 2)) & 0xFF) {
        func_sc02_027_80183344((s32)o);
        return;
    }
    o->workFE = 0;
    func_sc02_027_801832D8((s32)o);
}

void func_sc02_027_80183BC4(StageActor *arg0) {
    s16 temp_v0;
    s32 var_v1;

    if (arg0->unk74 != 0) {
        temp_v0 = arg0->unkFC;
        if (temp_v0 >= 3) {
            arg0->model->scale.vy = 0x100;
            var_v1 = D_sc02_027_801AB720 * arg0->model->scale.vy;
            if (var_v1 < 0) {
                var_v1 += 0xFFF;
            }
            D_80126B62 = (u16)arg0->pos[1].h.i + (var_v1 >> 0xC);
            func_sc02_027_801832FC();
            RequestBgmPack(0x3A);
            PlaySoundId(0x6CB, 0);
            return;
        }
        arg0->unkFC = (s16) (temp_v0 + 1);
        return;
    }
    arg0->unkFC = 0;
}

void func_sc02_027_80183C7C(void) {
}

void func_sc02_027_80183C84(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_a1;

    if (TickTimer(arg0, arg1, arg2) != 0) {
        temp_a1 = AF(arg0, void *, 0x64);
        if (AF(temp_a1, s16, 0xFE) == 2) {
            AF(temp_a1, s16, 0xFE) = 1;
            func_sc02_027_801839C8(arg0);
            AF(arg0, s16, 0x100) = 0;
            AF(arg0, s16, 0x104) = 0;
        }
        func_sc02_027_80183680(arg0);
        PlaySoundId(0x6CA, 0);
    }
}

void func_sc02_027_80183CF4(s32 arg0) {
    if (func_800CF8B4() != 0) {
        MoveObject(arg0);
        if (TickTimer(arg0) != 0) {
            func_sc02_027_801836B0(arg0);
            PlaySoundId(4, 0x6CA);
            PlaySoundId(0x6CC, 0);
        }
    }
}

void func_sc02_027_80183D5C(s32 arg0) {
    if (func_800CF8B4() != 0) {
        MoveObject(arg0);
        if (TickTimer(arg0) != 0) {
            AF(arg0, s32, 0x1C) = 0x10;
            SetState(arg0, 1);
            PlaySoundId(4, 0x6CA);
            PlaySoundId(0x6CC, 0);
        }
    }
}

void func_sc02_027_80183DCC(void) {
}

void func_sc02_027_80183DD4(u8 *arg0) {
    UV4 a;
    UV4 b;
    s32 y;
    s32 i;
    s32 t;
    s32 k;

    k = AF(arg0, s16, 0xA) + 0x20;
    y = D_80126B62 - k;
    if (y < -0x110) {
        y = -0x110;
    } else if (y > 0) {
        y = 0;
    }
    a.y = y;
    b.y = y;
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc02_027_801AD314[i];
        a.z = D_sc02_027_801AD314[i + 1];
        b.x = D_sc02_027_801AD314[i + 2];
        b.z = D_sc02_027_801AD314[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc02_027_801AD33C[i];
        a.z = D_sc02_027_801AD33C[i + 1];
        b.x = D_sc02_027_801AD33C[i + 2];
        b.z = D_sc02_027_801AD33C[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc02_027_801AD364[i];
        a.z = D_sc02_027_801AD364[i + 1];
        b.x = D_sc02_027_801AD364[i + 2];
        b.z = D_sc02_027_801AD364[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    D_sc02_027_801AD38C[AF(arg0, u16, 2)](arg0);
    t = DistSqToPlayer(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        PlaySoundFor(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        PlaySoundFor(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc02_027_8018406C(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    UV4 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &g_Actors;
    i = 0;
    D_sc02_027_801AD3D8[AF(arg0, u16, 2)]();
    do {
        if (AF(p, u16, 0) == 300) {
            a.x = AF(p, u16, 6);
            a.y = AF(p, u16, 0xA);
            a.z = AF(p, u16, 0xE);
            ang = HeadingTo(arg0 + 4, p + 4);
            if (AF(AF(arg0, u8 *, 0x64), s16, 0xFC) < 0) {
                ang -= 0x400;
            } else {
                ang += 0x400;
            }
            ang &= 0xFFF;
            a.x -= rsin(ang) >> 8;
            a.z -= rcos(ang) >> 8;
            b.x = AF(p, u16, 6);
            b.y = AF(p, u16, 0xA);
            b.z = AF(p, u16, 0xE);
            c = b;
            if (PathHitsModel(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &c) != 0) {
                AF(p, u16, 6) = a.x;
                AF(p, u16, 0xE) = a.z;
            }
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
}

void func_sc02_027_801841F4(s32 arg0) {
    s32 o;

    o = AllocActorModel();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    StopWithGravity(arg0);
    AF(arg0, u16, 0x12) = D_sc02_027_801AD67C[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc02_027_801AD67C[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc02_027_801AD67C[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_027_801AD3E0);
        SetScript(arg0, &D_sc02_027_801AD4A0);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_027_801AD528);
        SetScript(arg0, &D_sc02_027_801AD5E8);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc02_027_801AD6CC;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc02_027_801AD6F0;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc02_027_801AD3A4;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = SpawnActorArg(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_027_801AD3E0);
        SetScript(arg0, &D_sc02_027_801AD4A0);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_027_801AD528);
        SetScript(arg0, &D_sc02_027_801AD5E8);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_027_801AD6DC);
        SetScript(arg0, &D_sc02_027_801AD6E8);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc02_027_801AD3E0);
        SetScript(arg0, &D_sc02_027_801AD4A0);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u16, 0xFE) = AF(AF(arg0, s32, 0x64), u16, 0x36);
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s16, 0x100) = AF(AF(arg0, s32, 0x64), s16, 0xFE) * 6;
        if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 5) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x40;
        } else if (AF(AF(arg0, s32, 0x64), s16, 0x70) == 6) {
            AF(arg0, s16, 0x12) = rand() % 96 - 0x30;
            AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
            AF(arg0, s16, 0x1A) = rand() % 96 - 0x50;
        }
        break;
    }
    AF(arg0, s32, 0x94) = rand() & 0xF;
    AF(AF(arg0, s32, 0x20), s32, 4) |= 0x50000000;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
}

void func_sc02_027_801846A0(StageActor *arg0) {
    arg0->model->unk04 = (s32)arg0->parent->model->unk04;
    arg0->model->unk04 &= 0xEFFFFFFF;
    arg0->model->unk04 |= 0x08000000;
    arg0->model->unk04 |= 0x60000000;
    arg0->model->rot.vy = (u16)arg0->parent->model->rot.vy;
    arg0->pos[0].w = arg0->parent->pos[0].w - (rsin((u16)arg0->model->rot.vy & 0xFFF) << 8);
    arg0->pos[1].w = arg0->parent->pos[1].w;
    arg0->pos[2].w = arg0->parent->pos[2].w - (rcos((u16)arg0->model->rot.vy & 0xFFF) << 8);
    arg0->model->scale.vx = (s16) (u16)arg0->parent->model->scale.vx / 2;
    arg0->model->scale.vy = (s16) (u16)arg0->parent->model->scale.vy / 2;
    arg0->model->scale.vz = (s16) (u16)arg0->parent->model->scale.vz / 2;
}

void func_sc02_027_80184834(StageActor *arg0) {
    SV in;
    SV out;
    s32 flag;
    u8 *m;
    s32 n;

    if (arg0->workFE != (s16)arg0->parent->id) {
        FreeActor(arg0);
        return;
    }
    if ((u16)arg0->parent->work100 & 0x4000) {
        arg0->model->scale.vx -= 0x200;
        arg0->model->scale.vy -= 0x200;
        if (arg0->model->scale.vx < 0x200) {
            SpawnKind1C(arg0, 0);
            FreeActor(arg0);
            return;
        }
    } else {
        if (--arg0->work100 < 9) {
            arg0->work100 = 0x18;
            if (arg0->parent->param == 5) {
                AF(arg0, s16, 0x12) = rand() % 56 - 0x1C;
                AF(arg0, s16, 0x16) = rand() % 96 - 0x60;
                AF(arg0, s16, 0x1A) = rand() % 56 - 0x2C;
            } else if (arg0->parent->param == 6) {
                AF(arg0, s16, 0x12) = rand() % 56 - 0x1C;
                AF(arg0, s16, 0x16) = rand() % 32 - 0x20;
                AF(arg0, s16, 0x1A) = rand() % 128 - 0x60;
            }
        }
        n = arg0->work100;
        if (n < 0x10) {
            arg0->model->scale.vx = arg0->model->scale.vy = n * 0x300;
        } else {
            arg0->model->scale.vx = arg0->model->scale.vy = (0x20 - n) * 0x300;
        }
    }
    if ((s32)arg0->parent->model->unk04 & 0x80000000) {
        arg0->model->unk04 |= 0x80000000;
    } else {
        arg0->model->unk04 &= 0x7FFFFFFF;
    }
    arg0->pos[0].w = arg0->parent->pos[0].w;
    arg0->pos[1].w = arg0->parent->pos[1].w;
    arg0->pos[2].w = arg0->parent->pos[2].w;
    in.vx = AF(arg0, s16, 0x12);
    in.vy = AF(arg0, s16, 0x16);
    in.vz = AF(arg0, s16, 0x1A);
    m = (u8 *)arg0->parent->model + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&in, &out, &flag);
    arg0->pos[0].h.i = out.vx;
    arg0->pos[1].h.i = out.vy;
    arg0->pos[2].h.i = out.vz;
}

void func_sc02_027_80184BE4(u8 *arg0) {
    s32 temp_v0;

    D_sc02_027_801AD700[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (AF(AF(arg0, void *, 0x20), s32, 4) >= 0)) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (ActorTouchesPlayer((s32) arg0, 0x1C, 0xA) == 1) {
            s16 *q = &g_PlayerHitKind;
            *q |= 0x200;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
        if (AF(arg0, s16, 0x70) == 1) {
            temp_v0 = AF(arg0, s32, 0x1C) - 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 == 0) {
                AF(arg0, s32, 0x1C) = 8;
                SpawnActorArg(0x12F, 3, (s32) arg0);
            }
        }
    }
}

void func_sc02_027_80184CD0(u8 *arg0) {
    D_sc02_027_801AD7AC[AF(arg0, u16, 2)]();
}

void func_sc02_027_80184D0C(u8 *arg0) {
    D_sc02_027_801AD860[AF(arg0, u16, 2)]();
}

void func_sc02_027_80184D48(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc02_027_80184D60(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc02_027_801AD2E0) != 0) {
        arg0->reactive = 1;
        arg0->params = &D_sc02_027_801AD2C0;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        SetScript(arg0, (s32) &D_sc02_027_8018B56C);
        arg0->state = 1;
        arg0->targetClass = 0;
        arg0->workFE = 1;
        SpawnActorArg(0x164, 0x555, arg0);
        SpawnActorArg(0x164, 0xAAA, arg0);
        SpawnActorArg(0x164, 0x1000, arg0);
    }
}

void func_sc02_027_80184E04(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc02_027_80184E20(StageActor *arg0) {
    ModelObj *temp_a2;

    if (SetupActor(arg0, (s32) &D_sc02_027_801AD3A4) != 0) {
        temp_a2 = arg0->model;
        temp_a2->unk04 = (s32) ((s32)temp_a2->unk04 | 0x80000000);
        arg0->reactive = 1;
        arg0->params = &D_sc02_027_801AD2C0;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        SetScript(arg0, (s32) &D_sc02_027_8018B56C, (s32) temp_a2);
        arg0->state = 1;
        arg0->targetClass = 0;
    }
}

void func_sc02_027_80184EA4(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    UpdateModelZYX((s32) arg0, (s32) temp_a1);
}

void func_sc02_027_80184EE0(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc02_027_80184F10(s32 arg0) {
    void *temp_a0;

    if (MoveCollide(arg0) & 0x2000) {
        if (AF(arg0, s16, 0x70) != 0) {
            AF(arg0, s16, 2) = 2;
            PlaySoundAtActor(arg0, 0xBA2, 0);
            return;
        }
        temp_a0 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 3;
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
        AF(arg0, s32, 0x1C) = 0x1E;
    }
}

void func_sc02_027_80184F94(u8 *arg0) {
    if (DistSqToTarget(arg0) > 0x63FFF) {
        AF(arg0, s16, 2) = 5;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToTarget(arg0), 0x10);
    SetLocalVelocityXZ(arg0, &D_sc02_027_801AD670);
    AF(arg0, s32, 0x14) += (D_80126CB6 - AF(arg0, s16, 0xA)) << 8;
    if (MoveCollide(arg0) != 0) {
        AF(arg0, s16, 0x16) = -0x18;
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc02_027_80185058(s32 arg0) {
    s32 t;

    t = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = t;
    if (t == 0) {
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
        AF(AF(arg0, s32, 0x20), s32, 4) &= 0x7FFFFFFF;
        PlaySoundAtActor(arg0, 0x679, 0);
        AF(arg0, s16, 2) = 1;
        StopWithGravity(arg0);
        AF(arg0, u16, 0x12) = D_sc02_027_801AD67C[AF(arg0, s16, 0xFC)].x;
        AF(arg0, u16, 0x16) = D_sc02_027_801AD67C[AF(arg0, s16, 0xFC)].y;
        AF(arg0, u16, 0x1A) = D_sc02_027_801AD67C[AF(arg0, s16, 0xFC)].z;
    }
}

void func_sc02_027_80185138(u8 *arg0) {
    if (DistSqToPlayer(arg0) <= 0x64000) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        SpawnShadow(arg0);
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc02_027_801851A8(u8 *arg0) {
    SV8 a;

    if (DistSqToTarget(arg0) <= 0x38400) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    a.x = AF(arg0, s16, 6);
    a.z = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToSV(&a, arg0 + 0x88), 4);
    SetLocalVelocityXZ(arg0, &D_sc02_027_801AD670);
    AF(arg0, s32, 0x14) += (AF(arg0, s16, 0x8A) - AF(arg0, s16, 0xA)) << 8;
    if (MoveCollide(arg0) & 0x8000) {
        AF(arg0, s16, 0x16) = -4;
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc02_027_80185284(void) {
}

void func_sc02_027_8018528C(StageActor *arg0) {
    StageActor *t;

    if (arg0->timer != 0) {
        arg0->timer--;
    }
    arg0->model->scale.vx -= 0x100;
    arg0->model->scale.vy -= 0x100;
    if (arg0->model->scale.vy <= 0x80) {
        if (arg0->param == 1) {
            t = (s32)arg0->ext0;
            if (arg0 != NULL) {
                FreeActor(t);
            }
        }
        GainStat0FromActor(arg0);
        FreeActor(arg0);
    }
}

void func_sc02_027_80185344(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc02_027_801AD738) != 0) {
        SetScript(arg0, (s32) &D_sc02_027_8018B56C);
        arg0->state = 1;
        arg0->targetClass = 0;
        AF(arg0, u16, 0x12) = D_sc02_027_801AD76C[arg0->unkFC * 4];
        AF(arg0, u16, 0x16) = D_sc02_027_801AD76E[arg0->unkFC * 4];
        AF(arg0, u16, 0x1A) = D_sc02_027_801AD770[arg0->unkFC * 4];
        arg0->timer = D_sc02_027_801AD772[arg0->unkFC * 4];
        SpawnActor(0x1C4, arg0);
    }
}

void func_sc02_027_80185408(s32 arg0) {
    s32 temp_v0;

    MoveOnGround(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        AF(arg0, s32, 0x1C) = 6;
        AF(arg0, s16, 2) = 2;
    }
    CarryPlayer(arg0);
}

void func_sc02_027_8018545C(StageActor *arg0) {
    s32 t;

    if (--arg0->timer == 0) {
        t = D_sc02_027_801AD772[arg0->unkFC * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        arg0->state = 1;
        arg0->timer = t;
    }
    CarryPlayer(arg0);
}

void func_sc02_027_801854D8(StageActor *arg0) {
    ModelObj *o;
    s16 st;

    o = AllocActorModel();
    arg0->model = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(o, &D_sc02_027_801AD7B8);
    SetScript(arg0, &D_sc02_027_801AD818);
    arg0->model->scale.vx = 0x10;
    arg0->model->scale.vy = 0x10;
    arg0->index = rand() & 7;
    arg0->model->unk04 |= 0x50000000;
    arg0->model->flags |= 0x10;
    if ((u16)((u16)arg0->param - 1) >= 0x6FFF) {
        arg0->param = rand() & 0x77FF;
        st = 2;
    } else {
        st = 1;
    }
    arg0->state = st;
}

void func_sc02_027_801855BC(u8 *arg0) {
    s32 v;
    u16 a;
    void *p;
    s16 s;

    v = AF(arg0, s32, 0x1C);
    if (v == 0) {
        AF(AF(arg0, void *, 0x20), s32, 4) &= 0x7FFFFFFF;
        a = AF(arg0, u16, 0xFE) + 0x40;
        AF(arg0, u16, 0xFE) = a;
        if ((s16) a >= 0x800) {
            AF(arg0, u16, 0xFE) = 0;
            AF(arg0, s32, 0x1C) = rand() & 0x1F;
            AF(AF(arg0, void *, 0x20), s32, 4) |= 0x80000000;
        }
        s = (AF(arg0, s16, 0x70) * rsin(AF(arg0, s16, 0xFE)) >> 12) + 0x800;
        p = AF(arg0, void *, 0x20);
        AF(p, s16, 0x1A) = s;
        AF(p, s16, 0x18) = s;
    } else {
        AF(arg0, s32, 0x1C) = v - 1;
    }
}

void func_sc02_027_80185688(u8 *o) {
    s32 n;
    s32 t;
    u8 *p;
    u8 *q;

    n = AF(o, s32, 0x1C);
    if (n == 0) {
        p = AF(o, u8 *, 0x20);
        AF(p, s32, 4) &= 0x7FFFFFFF;
        AF(o, s16, 0xFE) += 0x40;
        if (AF(o, s16, 0xFE) >= 0x800) {
            AF(o, s16, 0xFE) = 0;
            AF(o, s32, 0x1C) = rand() & 0x1F;
            AF(o, s16, 0x70) = rand() & 0x77FF;
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        }
        t = ((AF(o, s16, 0x70) * rsin(AF(o, s16, 0xFE))) >> 12) + 0x800;
        q = AF(o, u8 *, 0x20);
        AF(q, s16, 0x1A) = t;
        AF(q, s16, 0x18) = t;
    } else {
        AF(o, s32, 0x1C) = n - 1;
    }
}

void func_sc02_027_80185760(StageActor *arg0) {
    ModelObj *temp_v1;
    ModelObj *temp_v1_2;

    D_sc02_027_801AF850[arg0->state]();
    if ((arg0->kind != 0) && ((u16)arg0->param & 1)) {
        if (arg0->shrinkTimer != 0) {
            arg0->work102 = 1;
        }
        if ((arg0->work102 != 0) && (arg0->shrinkTimer == 0)) {
            temp_v1 = arg0->model;
            arg0->work102 = 0;
            temp_v1->flags = (u16) (temp_v1->flags | 0x10);
            temp_v1_2 = arg0->model;
            temp_v1_2->scale.vz = 0x1666;
            temp_v1_2->scale.vy = 0x1666;
            temp_v1_2->scale.vx = 0x1666;
        }
    }
}

void func_sc02_027_8018582C(StageActor *arg0) {
    ModelObj *q;

    if (SetupActor(arg0, &D_sc02_027_801AF6F0 + ((u16)arg0->param & 1) * 0x34) != 0) {
        arg0->reactive = 1;
        arg0->params = &D_sc02_027_801AF7E0;
        arg0->reactMask = -0x20EF;
        arg0->reactOpts |= 3;
        if ((s32)arg0->message == 0) {
            arg0->message = 0x40000;
        }
        if (arg0->workFE == 0) {
            arg0->workFE = 0x3C;
        }
        if ((u16)arg0->param & 1) {
            arg0->model->flags |= 0x10;
            q = arg0->model;
            q->scale.vz = 0x1666;
            q->scale.vy = 0x1666;
            q->scale.vx = 0x1666;
            arg0->work100 = 0x1666;
        } else {
            arg0->work100 = 0x1000;
        }
        SpawnActor(0x153, arg0);
        func_sc02_027_80186CE0(arg0, 1);
        arg0->state = 1;
    }
}

void func_sc02_027_80185934(StageActor *arg0, s32 arg1, s32 arg2) {
    arg0->state = 2;
    SetScript((s32) arg0, (s32) &D_sc02_027_801B42B8, arg2);
}

void func_sc02_027_80185960(u8 *arg0) {
    if (TargetInSight((s32) arg0, 0x400, AF(arg0, s32, 0xDC)) != 0) {
        AF(arg0, s16, 2) = 3;
    }
    if ((AF(arg0, u16, 0x72) & 0x4000) && (IsOnScreen((s32) arg0, 0x8C00B4) == 1)) {
        PlaySoundId(0x64A, 0);
    }
}

void func_sc02_027_801859D0(StageActor *arg0) {
    arg0->state = 4;
}

void func_sc02_027_801859DC(u8 *arg0) {
    s32 sp10[2];
    s32 sp18[2];
    u8 *p;
    s16 hi;
    s16 lo;
    s32 i;
    u16 y;

    if (!(AF(arg0, s32, 0xE0) & 1)) {
        if (TargetInSight((s32) arg0, 0x400, AF(arg0, s32, 0xDC)) == 0) {
            AF(arg0, s16, 2) = 1;
        } else {
            SetScript((s32) arg0, (s32) &D_sc02_027_801B4380);
            if (IsOnScreen((s32) arg0, 0x8C00B4) == 1) {
                PlaySoundId(0x64A, 0);
            }
        }
    }
    if (AF(arg0, s32, 0x94) == 0x19) {
        FaceHelper(arg0, &D_sc02_027_801AF86C, sp10);
        FaceHelper(arg0, &D_sc02_027_801AF86C + 8, sp18);
        y = AF(AF(arg0, u8 *, 0x20), u16, 0x12);
        hi = y + 0x400;
        lo = y - 0x400;
        for (i = 0; i < 6; i++) {
            func_sc02_027_80186D9C(sp10, hi, 0xFFF80000 - ((rand() % 4) << 0x10), 0);
            func_sc02_027_80186D9C(sp18, lo, 0xFFF80000 - ((rand() % 4) << 0x10), 0);
        }
        for (i = 0; i < 4; i++) {
            FaceHelper(arg0, (u8 *) &D_sc02_027_801AF87C + i * 8, sp10);
            func_sc02_027_80186D9C(sp10, 0, ((rand() % 4) << 0x10) + 0x80000, 1);
        }
    }
}

void func_sc02_027_80185BC0(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if ((TickTimer(arg0, arg1, arg2) != 0) && (DistSqToPlayer(arg0) > 0x18FFF)) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 6;
        AF(arg0, s32, 0x1C) = 0x20;
        AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) & 0x7FFFFFFF);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, s16, 0x1C) = 1;
        AF(temp_v1_3, s16, 0x1A) = 1;
        AF(temp_v1_3, s16, 0x18) = 1;
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s16, 0x14) = 0;
        AF(temp_v0, s16, 0x10) = 0;
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(arg0, void *, 0x68), u16, 0xC);
        UpdateModelZYX(arg0);
    }
}

void func_sc02_027_80185C84(StageActor *o) {
    ModelObj *m = o->model;
    s16 s;
    s16 lim;
    s = rcos((o->timer << 9) >> 4) * 2;
    m->scale.vx = m->scale.vy = m->scale.vz = s;
    lim = o->work100;
    if (s >= lim) {
        m->scale.vx = m->scale.vy = m->scale.vz = lim;
        o->state = 1;
        o->hitState = o->init->hitState;
        o->hp = (u16)o->init->hp;
        o->workE0 &= ~1;
        if (!((u16)o->param & 1)) {
            o->model->flags &= ~0x10;
        }
    }
    o->timer--;
}

void func_sc02_027_80185D5C(StageActor *o) {
    SV8 v;
    s32 n;

    TakeDamage(o);
    if (o->hitCode != 0x1D) {
        if (o->hitFx[0] != 0) {
            GainStat3FromActor(o);
        }
        if (o->hitFx[1] != 0) {
            GainStat2FromActor(o);
        }
    }
    n = o->hitDamage * o->init->damageScale >> 12;
    if (n <= 0) {
        n = 1;
    }
    o->hp -= n;
    o->hitState &= 0xFFFE;
    if (o->hp <= 0) {
        o->hitState = 0;
        SetReactionStep(o, 0xE);
    } else {
        if (n > 0x10) {
            n = 0x10;
        }
        v.x = (u16)o->pos[0].h.i - g_PlayerX;
        v.y = (u16)o->pos[1].h.i - D_80126B62;
        v.z = (u16)o->pos[2].h.i - D_80126B66;
        VectorNormalSS(&v, (u8 *)o + 0x102);
        n += 8;
        o->work102 = n * o->work102 >> 12;
        o->work104 = n * o->work104 >> 12;
        o->work106 = n * o->work106 >> 12;
        o->timer = 0x10;
    }
    o->pos[0].h.i = (u16)o->origin[0];
    o->pos[1].h.i = (u16)o->origin[1];
    o->pos[2].h.i = (u16)o->origin[2];
    SetScript(o, &D_sc02_027_801B4508);
}

void func_sc02_027_80185F04(u8 *arg0) {
    s32 v;
    v = -(rsin((AF(arg0, s32, 0x1C) << 10) & 0xC00) >> 12);
    AF(arg0, u16, 6) += AF(arg0, u16, 0x102) * v;
    AF(arg0, u16, 0xA) += AF(arg0, u16, 0x104) * v;
    AF(arg0, u16, 0xE) += AF(arg0, u16, 0x106) * v;
    if (TickTimer(arg0) != 0) {
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
        func_sc02_027_8018633C(arg0);
    }
}

void func_sc02_027_80185FB0(StageActor *arg0) {
    arg0->timer = 0x78;
    arg0->hitState = (u16) (arg0->hitState & 0xFFFE);
    SpawnKind39Trio();
    PlaySoundId(0x47B, 0);
    PlaySoundId(0x478, 0);
    func_800CB0E8((s32) arg0);
    arg0->ext0 = &D_sc02_027_801AF758;
}

void func_sc02_027_80186018(u8 *arg0) {
    u16 *p;
    u8 *q;

    p = AF(arg0, u16 *, 0xCC);
    q = AF(arg0, u8 *, 0x20);
    AF(q, u16, 0x10) = p[0];
    AF(q, u16, 0x14) = p[2];
    p += 4;
    if (((s16 *)p)[3] == 0x7FFF) {
        AF(arg0, u8 *, 0xCC) = &D_sc02_027_801AF758;
    } else {
        AF(arg0, u16 *, 0xCC) = p;
    }
    if (TickTimer(arg0) != 0) {
        u8 *r = AF(arg0, u8 *, 0x20);
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
        AF(r, u16, 0x14) = 0;
        AF(r, u16, 0x10) = 0;
        func_sc02_027_8018633C(arg0);
    }
}

void func_sc02_027_801860A8(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
}

typedef struct { u8 pad0[0x18]; s16 s18; s16 s1A; s16 s1C; u8 pad1[0xE]; u16 f2C; } EA88O;
typedef struct { u8 pad0[0x20]; EA88O *o; u8 pad1[0x38]; s16 f5C; u8 pad2[0x12]; u16 f70; } EA88P;
extern s16 g_PlayerAbsorbCounter;
extern s32 D_sc02_027_801DA778;
extern s32 D_sc02_027_801DA77C;

/* squash and stretch (the stage copy of func_8012E364): the 0x5C clear is a plain (non-struct) store so the
   g_PlayerAbsorbCounter load stays after it (2.7.2 lets a struct store pass a scalar global load); abs() is one insn */
void func_sc02_027_801860B8(EA88P *p) {
    s32 t;
    s32 d;
    s32 old;
    s32 v;
    s32 k;
    s32 m;
    EA88O *o;
    EA88O *o1;
    AF(p, s16, 0x5C) = 0;
    m = (p->f70 & 1) * 0x666;
    t = g_PlayerAbsorbCounter;
    if (t == 0) {
        D_sc02_027_801DA77C = D_sc02_027_801DA778 = (s16) m + 0x1000;
    }
    k = (s16) m + 0x1000;
    t = k * (0x90 - t) / 144;
    d = D_sc02_027_801DA778 - t;
    if (d > 0) {
        D_sc02_027_801DA778 -= d >> 2;
    } else if (d < 0) {
        D_sc02_027_801DA778 += -d / 4;
    }
    old = D_sc02_027_801DA77C;
    o1 = p->o;
    v = D_sc02_027_801DA778 - old + k;
    D_sc02_027_801DA77C = k;
    D_sc02_027_801DA778 = v;
    o1->f2C |= 0x10;
    o = p->o;
    o->s18 = o->s1C = abs(v);
    p->o->s1A = m + 0x1000;
}

void func_sc02_027_801861E8(u8 *arg0) {
    s32 var_s0;

    var_s0 = 0x10000;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0x1E;
    if (!(AF(arg0, u16, 0x70) & 1)) {
        var_s0 = 0x6400;
    }
    PlaySoundId((DistSqToPlayer() < var_s0) ? 0x64B : 0x652, 0);
}

void func_sc02_027_80186248(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    if (TickTimer((s32) arg0, 0x80000000, arg2) != 0) {
        GiveItem(0xF);
        DropItem((s32) arg0);
        func_sc02_027_801862A8((s32) arg0);
    }
}

void func_sc02_027_801862A8(StageActor *arg0) {
    ModelObj *temp_a0;

    GainStat0FromActor(arg0);
    if (arg0->param & 0xC000) {
        DespawnActor(arg0);
        return;
    }
    temp_a0 = arg0->model;
    arg0->state = 5;
    arg0->react = 0;
    arg0->timer = 0x78;
    arg0->hitCode = 0;
    arg0->hitState = 0;
    temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x80000000);
    arg0->shrinkTimer = 0;
    arg0->pos[0].h.i = (u16) (u16)arg0->origin[0];
    arg0->pos[1].h.i = (u16) (u16)arg0->origin[1];
    arg0->pos[2].h.i = (u16) (u16)arg0->origin[2];
}

void func_sc02_027_8018633C(u8 *arg0) {
    u8 *q;

    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = AF(AF(arg0, u8 *, 0x78), u16, 2);
    AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
    AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
    AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
    if (AF(arg0, u16, 0x70) & 1) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
        q = AF(arg0, u8 *, 0x20);
        AF(q, s16, 0x1C) = 0x1666;
        AF(q, s16, 0x1A) = 0x1666;
        AF(q, s16, 0x18) = 0x1666;
        AF(arg0, s16, 0x100) = 0x1666;
    }
}

void func_sc02_027_801863B0(StageActor *arg0) {
    D_sc02_027_801AF89C[arg0->state]();
}

void func_sc02_027_801863EC(StageActor *arg0) {
    ModelObj *r;

    r = AllocActorModel();
    arg0->model = r;
    if (r == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(r, &D_sc02_027_801B30B0);
    arg0->unkFC = arg0->parent->id;
    AF(arg0->model, SV8, 0x18) = AF(arg0->parent->model, SV8, 0x18);
    arg0->model->flags = arg0->parent->model->flags;
    arg0->state = 1;
}

void func_sc02_027_801864A4(StageActor *arg0, s32 arg1) {
    if ((s16)arg0->parent->id != arg0->unkFC) {
        FreeActor((s32) arg0, arg1);
    }
}

void func_sc02_027_801864E0(StageActor *arg0) {
    D_sc02_027_801AFBB8[arg0->state]();
}

void func_sc02_027_8018651C(StageActor *arg0) {
    if (SetupActor(arg0, &D_sc02_027_801AF8B4) != 0) {
        arg0->unkFC = arg0->parent->id;
        if (!((u16)arg0->param & 1)) {
            HideModel(arg0);
        }
        arg0->work104 = (u16)arg0->parent->unkFC;
        arg0->state = 1;
    }
}

void func_sc02_027_80186594(StageActor *p) {
    StageActor *o;

    if (func_sc02_027_80186A30(p) == 1) {
        return;
    }
    o = p->parent;
    if (o->state == 4 && (u8 *)o->script == &D_sc02_027_801B4380 && o->index == 0 &&
        o->react == 0 && !(o->hitState & 1)) {
        p->state = 4;
    }
    p->model->rot.vy = (u16)o->model->rot.vy;
    AF(p->model, B8, 0x18) = AF(o->model, B8, 0x18);
    p->model->flags = o->model->flags;
    p->hitState = (o->hitState & 0xF7FF) | 0x4000;
    if ((u16)p->param & 1) {
        p->model->unk04 = (s32)o->model->unk04;
    }
}

void func_sc02_027_801866B0(StageActor *arg0) {
    arg0->state = 3;
    arg0->ext0 = &D_sc02_027_801AF8E8;
}

void func_sc02_027_801866C8(StageActor *o) {
    SV8 v;
    u8 *s;

    s = (u8 *)o->ext0;
    LocalToWorld((u8 *)o->parent->model + 0x34, s, &v);
    o->pos[0].h.i = v.x;
    o->pos[1].h.i = v.y;
    o->pos[2].h.i = v.z;
    s += 8;
    if (AF(s, s16, 0x6) == 0x7FFF) {
        o->state = 1;
        o->param |= 1;
    } else {
        o->ext0 = s;
    }
}

void func_sc02_027_8018675C(StageActor *arg0) {
    StageActor *temp_a1;

    temp_a1 = arg0->parent;
    arg0->state = 5;
    arg0->ext0 = &D_sc02_027_801AFA70;
    arg0->timer = 0;
    arg0->stateCount = 0;
    arg0->work100 = 0;
    if (arg0->unkFC == (s16)temp_a1->id) {
        temp_a1->workE0 = (s32) (temp_a1->workE0 | 1);
    }
}

void func_sc02_027_801867AC(u8 *o) {
    SV8 v;
    
    u8 *p;
    u8 *s;
    s32 r;
    s32 x;

    if (func_sc02_027_80186A30(o) == 1) {
        return;
    }
    p = AF(o, u8 *, 0x64);
    if (AF(o, u16, 0x34) == 0) {
        if (++AF(o, s32, 0x1C) == 0x1D) {
            AF(o, s16, 0x100) = 1;
        }
        s = AF(o, u8 *, 0xCC);
        AF(AF(o, u8 *, 0x20), u16, 0x10) = AF(s, u16, 0x6);
        LocalToWorld(AF(p, u8 *, 0x20) + 0x34, s, &v);
        AF(o, s16, 0x6) = v.x;
        AF(o, s16, 0xA) = v.y;
        AF(o, s16, 0xE) = v.z;
        s += 8;
        if (AF(s, s16, 0x6) == 0x7FFF) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s32, 0x48) = 0x18000;
            AF(o, s16, 0x102) = 0;
            AF(o, u16, 0x34)++;
            AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
            func_sc02_027_80186B68(o, 0xFFF00000);
        } else {
            AF(o, u8 *, 0xCC) = s;
        }
    } else {
        AF(AF(o, u8 *, 0x20), u16, 0x10) += 0x80;
        if (AF(o, s16, 0x102) < 0x20) {
            AF(o, s16, 0x102)++;
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = AF(AF(o, u8 *, 0x20), s16, 0x1C) + 0x100;
        }
        v = D_sc02_027_801AFBD0;
        v.y = v.y * AF(AF(o, u8 *, 0x20), s16, 0x1A) >> 12;
        r = MoveOnGroundOfs(o, &v);
        if (r & 0x2000) x = r & 0x8000; else x = TickTimer(o);
        if (x) {
            AF(p, s32, 0xE0) &= ~1;
            func_sc02_027_80186AAC(o);
            return;
        }
    }
    func_sc02_027_801869C0(o);
    if (AF(o, s16, 0x100) != 0) {
        func_sc02_027_80186C0C(o);
    }
}

s32 func_sc02_027_801869C0(Mover *arg0) {
    if (ActorTouchesPlayer(arg0, (arg0->model->scale.vx * 3) >> 9, 0x21) == 1) {
        u16 t = (u16)arg0->model->rot.vy;
        g_PlayerHitKind = 0x4002;
        g_PlayerHitFacing = t;
        return 1;
    }
    return 0;
}

s32 func_sc02_027_80186A30(StageActor *arg0) {
    if ((s16)arg0->parent->id == arg0->unkFC) {
        return 0;
    }
    func_sc02_027_80186A70(arg0);
    return 1;
}

void func_sc02_027_80186A70(StageActor *arg0) {
    PlaySoundFor(4, 0x64E, (u16)arg0->work104);
    FreeActor(arg0);
}

void func_sc02_027_80186AAC(u8 *o) {
    u8 *p;
    u8 *q;

    p = AF(o, u8 *, 0x64);
    PlaySoundFor(4, 0x64E, AF(o, u16, 0x104));
    AF(o, s32, 4) = AF(p, s32, 4);
    AF(o, s32, 8) = AF(p, s32, 8) - 0x260000;
    AF(o, s32, 0xC) = AF(p, s32, 0xC);
    AF(o, s16, 0x70) = 1;
    q = AF(o, u8 *, 0x20);
    if (AF(p, u16, 0x70) & 1) {
        AF(q, s16, 0x14) = 0;
        AF(q, s16, 0x12) = 0;
        AF(q, s16, 0x10) = 0;
        AF(q, s16, 0x1C) = 1;
        AF(q, s16, 0x1A) = 1;
        AF(q, s16, 0x18) = 1;
    } else {
        AF(q, s16, 0x14) = 0;
        AF(q, s16, 0x12) = 0;
        AF(q, s16, 0x10) = 0;
        AF(q, u16, 0x2C) &= 0xFFEF;
    }
    AF(o, s16, 2) = 1;
}

void func_sc02_027_80186B68(u8 *arg0, s32 spd) {
    WMtx m;
    V3 v;

    m = GsIDMATRIX;
    v.x = v.y = 0;
    v.z = spd;
    RotMatrixY(AF(AF(arg0, u8 *, 0x20), s16, 0x12), &m);
    ApplyMatrixLV(&m, &v, arg0 + 0x10);
}

void func_sc02_027_80186C0C(u8 *o) {
    s32 v;
    s32 t;
    s32 k;

    v = 0x2F;
    t = DistSqToPlayer(o);
    if (t <= 0x40000) {
        k = (AF(AF(o, u8 *, 0x20), s16, 0x1A) * 3) >> 9;
        k *= k;
        v = 0x7F - t / ((0x40000 - k) / 80);
    }
    v = (u16)(v | 0x5000);
    PlaySoundFor(0x64E, v, AF(o, u16, 0x104));
}

void func_sc02_027_80186CE0(StageActor *arg0, s32 arg1) {
    SpawnDef d;

    d = D_sc02_027_801AFBD8[arg1];
    d.x += arg0->pos[0].h.i;
    d.y += arg0->pos[1].h.i;
    d.z += arg0->pos[2].h.i;
    SpawnActorFromDef(&d, arg0);
}

u8 *func_sc02_027_80186D9C(SV8 *pos, s32 ang0, s32 spd, s32 mode) {
    s32 ang = ang0;
    SV8 rot;
    WMtx m;
    V3 v;
    u8 *w;
    u8 *t;
    s32 n;
    s32 x;
    s32 r;
    s32 d;
    s32 s;

    w = (u8 *)SpawnPropAt(0x3B, pos);
    if (w == 0) {
        return 0;
    }
    t = AF(w, u8 *, 0x20);
    AF(t, u8 *, 0x20) = &D_sc02_027_801AFC00;
    AF(t, u8, 0x27) = 0x56;
    AF(t, s16, 0x28) = 0x2A0;
    AF(t, s16, 0x2A) = 0x1A0;
    n = rand() % 200;
    if (!(rand() & 1)) {
        x = -n + 0x400;
    } else {
        x = n + 0x400;
    }
    AF(t, s16, 0x18) = AF(t, s16, 0x1A) = x;
    if (mode == 0) {
        r = rand();
        d = -1;
        if (r & 1) {
            d = 1;
        }
        s = (s16)r;
        rot.x = d * (s % 128) - 0x300;
        rot.y = ang + d * (s % 768);
        rot.z = 0;
        v.x = v.y = 0;
        v.z = spd;
        m = GsIDMATRIX;
        RotMatrixZYX(&rot, &m);
        ApplyMatrixLV(&m, &v, w + 0x10);
        AF(w, s32, 0x1C) = 0x2D;
    } else {
        AF(w, s32, 0x2C) = pos->x;
        AF(w, s32, 0x30) = pos->y;
        AF(w, s32, 0x34) = pos->z;
        AF(w, s16, 0x28) = rand() % 2 + 6;
        AF(w, s32, 0x14) = spd;
        AF(w, s32, 0x1C) = 0xA;
        AF(w, u16, 0x2)++;
    }
    return w;
}

void func_sc02_027_80187004(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v0_3;

    if (AF(arg0, u16, 2) == 0) {
        MoveProp((s32) arg0, arg1);
        if (AF(arg0, s32, 0x1C) < 0x23) {
            AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x10000);
        }
        temp_v0 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 != 0) {
            return;
        }
        goto block_8;
    } else {
        MoveProp((s32) arg0, arg1);
        temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0_2;
        if (temp_v0_2 == 0) {
            temp_v0_3 = AF(arg0, u16, 0x28) - 1;
            AF(arg0, u16, 0x28) = temp_v0_3;
            if ((temp_v0_3 << 0x10) != 0) {
                AF(arg0, s32, 0x1C) = 0xA;
                AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0xFFFF0000);
                AF(arg0, s16, 6) = (s16) AF(arg0, s32, 0x2C);
                AF(arg0, s16, 0xA) = (s16) AF(arg0, s32, 0x30);
                AF(arg0, s16, 0xE) = (s16) AF(arg0, s32, 0x34);
                return;
            }
block_8:
            FreeProp((s32) arg0);
        }
    }
    return;
}

void func_sc02_027_801870F0(u8 *o) {
    if (SetupActor(o, &D_sc02_027_801B4578) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -0x201;
        AF(o, u8 *, 0xBC) = &D_sc02_027_801B45AC;
        SetScript(o, &D_sc02_027_801B5598);
        AF(o, s16, 2) = 1;
        SpawnShadow(o);
        StopWithGravity(o);
        AF(o, s16, 0xFE) = (rand() & 0x1F) + 0x20;
        AF(o, s16, 0x100) = (rand() & 0x1F) + 0x20;
        if (AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12) != 0) {
            AF(o, u16, 6) -= D_sc02_027_801B4518[AF(o, s16, 0x70) * 4];
            AF(o, u16, 0xA) += D_sc02_027_801B451A[AF(o, s16, 0x70) * 4];
            AF(o, u16, 0xE) -= D_sc02_027_801B451C[AF(o, s16, 0x70) * 4];
        } else {
            AF(o, u16, 6) += D_sc02_027_801B4518[AF(o, s16, 0x70) * 4];
            AF(o, u16, 0xA) += D_sc02_027_801B451A[AF(o, s16, 0x70) * 4];
            AF(o, u16, 0xE) += D_sc02_027_801B451C[AF(o, s16, 0x70) * 4];
        }
        AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
    }
}

void func_sc02_027_80187288(StageActor *o) {
    if (o->parent->model->rot.vy != 0) {
        o->pos[0].h.i = (u16)o->parent->pos[0].h.i - D_sc02_027_801B4518[o->param * 4];
        o->pos[1].h.i = (u16)o->parent->pos[1].h.i + D_sc02_027_801B451A[o->param * 4];
        o->pos[2].h.i = (u16)o->parent->pos[2].h.i - D_sc02_027_801B451C[o->param * 4];
    } else {
        o->pos[0].h.i = (u16)o->parent->pos[0].h.i + D_sc02_027_801B4518[o->param * 4];
        o->pos[1].h.i = (u16)o->parent->pos[1].h.i + D_sc02_027_801B451A[o->param * 4];
        o->pos[2].h.i = (u16)o->parent->pos[2].h.i + D_sc02_027_801B451C[o->param * 4];
    }
    o->work102 = ((u16)o->work102 + (u16)o->workFE) & 0xFFF;
    o->model->rot.vx = rcos((u16)o->work102) >> 5;
    o->work104 = ((u16)o->work104 + (u16)o->work100) & 0xFFF;
    o->model->rot.vz = rcos((u16)o->work104) >> 5;
}

void func_sc02_027_80187400(u8 *arg0) {
    SV8 ofs;
    SV8 p;
    SV8 q;
    SV8 r;
    u8 *e;
    u8 *m;

    ofs.z = 0;
    ofs.x = 0;
    ofs.y = 0x30;
    for (e = (u8 *)FirstActor(); e != 0; e = (u8 *)NextActor()) {
        if (AF(e, u16, 0) == 0x16F && (AF(e, u16, 0x5C) & 0x8000) && AF(e, u16, 0x5E) != 0x1D
            && PosDistSq(arg0 + 4, e + 4) < 0x1900) {
            AF(e, s16, 0x60) = 0xA;
            AF(e, u16, 0x5C) |= 1;
            AF(e, s16, 0x62) = AF(AF(arg0, u8 *, 0x20), u16, 0x12) + 0x800;
            AF(e, u16, 0x5E) = 0x1D;
        }
    }
    switch (AF(arg0, u8, 0xC2)) {
    case 0:
        AF(arg0, u8, 0xC2) = 1;
        p.x = AF(arg0, s16, 0x3A);
        p.y = AF(arg0, s16, 0x3E);
        p.z = AF(arg0, s16, 0x42);
        q = p;
        q.x += ofs.x;
        q.y += ofs.y;
        q.z += ofs.z;
        r = q;
        CollidePath(&p, &q, 1);
        q.x -= ofs.x;
        q.y -= ofs.y;
        q.z -= ofs.z;
        AF(arg0, s16, 0x3A) = q.x;
        AF(arg0, s16, 0x3E) = q.y;
        AF(arg0, s16, 0x42) = q.z;
    case 1:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) += AF(arg0, s16, 0xFE);
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) += AF(arg0, s16, 0x100);
        if (++AF(arg0, s32, 0x1C) >= 0x29) {
            FreeActor(arg0);
            return;
        }
        D_sc02_027_801DA780 = MoveCollidePassableAt(arg0, &ofs);
        if (D_sc02_027_801DA780 & 0x2000) {
            AF(arg0, u8, 0xC2) = 2;
            SpawnKind1C(arg0, 1);
            AF(arg0, s32, 0x14) = 0xFFF30000;
            AF(arg0, s32, 0x1C) = 0;
        }
        break;
    case 2:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) += AF(arg0, s16, 0xFE);
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) += AF(arg0, s16, 0x100);
        if (++AF(arg0, s32, 0x1C) >= 0x29) {
            FreeActor(arg0);
            return;
        }
        D_sc02_027_801DA780 = MoveCollidePassableAt(arg0, &ofs);
        if (D_sc02_027_801DA780 & 0x2000) {
            SpawnKind1C(arg0, 1);
            AF(arg0, u8, 0xC2) = 3;
            AF(arg0, s32, 0x1C) = 0;
            AF(AF(arg0, u8 *, 0x20), s16, 0x14) = 0;
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) &= 0xFFF;
            m = AF(arg0, u8 *, 0x20);
            if (AF(m, s16, 0x10) < 0x800) {
                AF(m, s16, 0x10) = 0x400;
            } else {
                AF(m, s16, 0x10) = 0xC00;
            }
        }
        break;
    case 3:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        D_sc02_027_801DA780 = MoveCollidePassable(arg0);
        if (++((s32 *)arg0)[7] >= 0x11) {
            AF(arg0, s16, 2) = 3;
            AF(arg0, s32, 0x1C) = 0x1E;
        }
        break;
    }
}

void func_sc02_027_801877E4(StageActor *arg0) {
    D_sc02_027_801B45BC[arg0->state]();
}

void func_sc02_027_80187820(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_s0;
    StageActor *temp_v1;

    arg0->react = 0;
    arg0->state = 2;
    arg0->hitState = (u16) (arg0->hitState & 0xFFFE);
    arg0->workFE = (s16) ((rand() & 0x7F) + 0x80);
    arg0->work100 = (s16) ((rand() & 0x7F) + 0x80);
    temp_s0 = (u16)arg0->model->rot.vy + (rand() & 0x3FF) + 0x600;
    arg0->vel[0] = (s32) (rsin((s32) temp_s0) << 8);
    arg0->vel[2] = (s32) -(rcos((s32) temp_s0) << 8);
    AF(arg0, s16, 0x16) = (s16) ((rand() & 0xF) - 0x20);
    arg0->reactMode = 0;
    arg0->timer = 0;
    SetScript((s32) arg0, (s32) &D_sc02_027_8018B56C);
    if (arg0->reactBits == 0) {
        temp_v1 = arg0->parent;
        arg0->reactBits = 1U;
        temp_v1->unkFC = (u16) ((u16)temp_v1->unkFC - 1);
    }
}

void func_sc02_027_8018791C(StageActor *arg0, s32 arg1) {
    s32 temp_v0;
    ModelObj *temp_v0_2;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v0_2 = arg0->model;
    temp_v0_2->unk04 = (s32) ((s32)temp_v0_2->unk04 ^ 0x80000000);
}

void func_sc02_027_80187970(StageActor *arg0) {
    UV4 a;
    UV4 b;
    u16 s;
    u8 *o;
    s16 t;
    u16 v;

    GiveItem(0xD);
    if (arg0->kind != 0) {
        b.x = a.x = (u16)arg0->pos[0].h.i;
        b.y = a.y = (u16)arg0->pos[1].h.i;
        b.z = a.z = (u16)arg0->pos[2].h.i;
        a.y -= 8;
        b.y += 8;
        if (!(CollidePath(&a, &b, 0) & 0x1F) && !(arg0->work100 & 0x8000)) {
            s = (u16)arg0->model->rot.vy;
            InitModel(arg0->model, &D_sc02_027_801BB988);
            SetScript(arg0, &D_sc02_027_801C30CC);
            arg0->model->rot.vy = s;
            o = (u8 *)SpawnActorArg(0x12C, 1, arg0);
            if (o != 0) {
                if (arg0->pos[1].h.i >= 0x10) {
                    FreeActor(o);
                    return;
                }
                AF(AF(o, u8 *, 0x20), u16, 0x12) = s;
                SnapToGround(o);
                if (arg0->param == 5) {
                    v = (u16)arg0->work100;
                    AF(o, s16, 0x70) = 6;
                    AF(o, s16, 0xFE) = 1;
                    AF(o, u16, 0x100) = v;
                    do {
                        SpawnActorArg(0x12F, 5, o);
                        t = AF(o, s16, 0xFE) + 3;
                        AF(o, s16, 0xFE) = t;
                    } while (t < 0x10);
                    AF(o, s16, 0xFE) = 0;
                }
            }
        }
    }
}

void func_sc02_027_80187AF4(u8 *arg0) {
    s16 t;

    if (SetupActor(arg0, &D_sc02_027_801B55F4[AF(arg0, s16, 0x70)]) == 0) {
        RejectSpawn(arg0);
        return;
    }
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s32, 0xB4) = -0x401;
    SpawnShadow(arg0);
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        SetScript(arg0, &D_sc02_027_801C1FD4);
        AF(arg0, s16, 2) = 1;
        StopWithGravity(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc02_027_801B572C;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        AF(arg0, s16, 0xFC) = 0;
        break;
    case 2:
        SetScript(arg0, &D_sc02_027_801C189C);
        AF(arg0, s16, 2) = 9;
        AF(arg0, u8 *, 0xBC) = &D_sc02_027_801B57CC;
        AF(arg0, s16, 0x100) = AF(arg0, s16, 0xFC);
        break;
    case 1:
    case 3:
        SetScript(arg0, &D_sc02_027_801C2F4C);
        AF(arg0, s16, 2) = 6;
        AF(arg0, u8 *, 0xBC) = &D_sc02_027_801B5814;
        break;
    case 4:
        SetScript(arg0, &D_sc02_027_801C1FD4);
        AF(arg0, s16, 2) = 0xD;
        StopWithGravity(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc02_027_801B572C;
        AF(arg0, s16, 0xFC) = 0x1E;
        break;
    case 5:
        if (AF(arg0, s16, 0xFC) != 0) {
            SetScript(arg0, &D_sc02_027_801C2DCC);
            AF(arg0, s16, 2) = 0xE;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = rand() & 0xFFF;
        } else {
            SetScript(arg0, &D_sc02_027_801C1FD4);
            AF(arg0, s16, 2) = 1;
        }
        StopWithGravity(arg0);
        AF(arg0, u8 *, 0xBC) = &D_sc02_027_801B572C;
        AF(arg0, s16, 0xFE) = 1;
        do {
            SpawnActorArg(0x12F, 5, arg0);
            t = AF(arg0, s16, 0xFE) + 1;
            AF(arg0, s16, 0xFE) = t;
        } while (t < 6);
        AF(arg0, s16, 0xFE) = 0;
        break;
    }
    UpdateModelZYX(arg0);
}

void func_sc02_027_80187D18(u8 *arg0) {
    s32 vec[8];
    SV a;
    SV b;
    SV c;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 x;
    s32 ax;
    s32 r;

    if (AF(arg0, u16, 0x72) & 0x4000) {
        SetScript(arg0, &D_sc02_027_801C1FD4);
        AF(arg0, s16, 0xFE) = 0;
    }
    AF(arg0, s16, 0xFC)++;
    if (GroundDistSqTo(arg0, arg0 + 0x88) >= 0x1000) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, arg0 + 0x88), 0x20);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    }
    vec[0] = 0;
    vec[1] = 0;
    vec[2] = -(AF(arg0, s16, 0xFC) << 17) / 24;
    SetLocalVelocityXZ(arg0, vec);
    if (!(MoveOnGround(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, arg0 + 0x88), 0x20);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    }
    r = 0x30;
    a.vx = AF(arg0, s16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.vy = AF(arg0, s16, 0xA) - 0x20;
    a.vz = AF(arg0, s16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.vx = a.vx;
    b.vy = a.vy + 0x60;
    b.vz = a.vz;
    if (!(TraceMap(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    if (AF(arg0, s16, 0xFE) == 0 && TargetInSight(arg0, 0x200, 0x40000) == 1) {
        SetScript(arg0, &D_sc02_027_801C1944);
        AF(arg0, s16, 2) = 2;
        c.vx = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        c.vy = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        c.vz = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&c, &sxy, &p, &flag);
        if (flag >= 0 && (u16)(((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16)(((s16 *)&sxy)[1] + 0x77) < 0xEF) {
            x = ((s16 *)&sxy)[0];
            ax = x;
            if (x < 0) {
                ax = -x;
            }
            ax = (0xA0 - ax) * 0x7F / 160;
            x = (x + 0xA0) / 20;
            if (x == 16) {
                x = 15;
            }
            x <<= 8;
            PlaySoundId(0xA9B, (u16)(ax | 0x3000 | x));
        }
    }
    if (AF(arg0, s16, 0xFC) == 0x18) {
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc02_027_801880CC(u8 *arg0) {
    s32 v[4];
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    s32 t;
    s32 r;

    AF(arg0, s16, 0xFC)++;
    v[0] = 0;
    v[1] = 0;
    v[2] = -(AF(arg0, s16, 0xFC) << 17) / 36;
    SetLocalVelocityXZ(arg0, v);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    if (!(MoveOnGround(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    r = 0x30;
    a.x = AF(arg0, u16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.y = AF(arg0, u16, 0xA) - 0x20;
    a.z = AF(arg0, u16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.x = a.x;
    b.y = a.y + 0x60;
    b.z = a.z;
    if (!(TraceMap(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    t = DistSqToTarget(arg0);
    if (t < 0x1001 && TargetInFront(arg0, 0x200) == 1) {
        if (!(rand() & 3)) {
            SetScript(arg0, &D_sc02_027_801C28D4);
            AF(arg0, s16, 2) = 5;
        } else {
            SetScript(arg0, &D_sc02_027_801C2254);
            AF(arg0, s16, 2) = 0xF;
        }
    }
    if (t > 0x40000) {
        SetScript(arg0, &D_sc02_027_801C2ADC);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0xFC) = 0;
        AF(arg0, s16, 0xFE) = 1;
    }
    if (AF(arg0, s16, 0xFC) == 0x24) {
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc02_027_8018830C(u8 *arg0) {
    u8 unused[0x10];
    SV4 p;
    s32 sxy;
    s32 pp;
    s32 flag;
    u8 *q;
    s32 x;
    s32 a;

    q = arg0 + 0x88;
    if (GroundDistSqTo(arg0, q) >= 0x1000) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, q), 0x20);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    }
    SetLocalVelocityXZ(arg0, &D_sc02_027_801B588C);
    if (!(MoveOnGround(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, q), 0x20);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    }
    if (TargetInSight(arg0, 0x200, 0x40000) == 1) {
        AF(arg0, s16, 2) = 7;
        p.x = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        p.y = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        p.z = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&p, &sxy, &pp, &flag);
        if (flag >= 0 && ((s16 *)&sxy)[0] >= -0x9F && ((s16 *)&sxy)[0] < 0xA0 && ((s16 *)&sxy)[1] >= -0x77 && ((s16 *)&sxy)[1] < 0x78) {
            x = ((s16 *)&sxy)[0];
            a = x;
            if (x < 0) {
                a = -x;
            }
            a = (0xA0 - a) * 0x7F / 160;
            x = (x + 0xA0) / 20;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8;
            PlaySoundId(0xA9B, (u16)(a | 0x3000 | x));
        }
    }
}

void func_sc02_027_80188574(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    s32 t;
    s32 r;

    SetLocalVelocityXZ(arg0, &D_sc02_027_801B588C);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    if (!(MoveOnGround(arg0) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    r = 0x30;
    a.x = AF(arg0, u16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    a.y = AF(arg0, u16, 0xA) - 0x20;
    a.z = AF(arg0, u16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), u16, 0x12) & 0xFFF) * r) >> 12);
    b.x = a.x;
    b.y = a.y + 0x60;
    b.z = a.z;
    if (!(TraceMap(1, &a, &b) & 0x6000)) {
        AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
        AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
    }
    t = DistSqToTarget(arg0);
    if (t < 0x2401 && TargetInFront(arg0, 0x200) == 1) {
        AF(arg0, s16, 2) = 0x11;
        SetScript(arg0, &D_sc02_027_801C2594);
    }
    if (t > 0x40000) {
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc02_027_8018871C(u8 *arg0) {
    SV4 p;
    s32 sxy;
    s32 pp;
    s32 flag;
    s32 x;
    s16 y;

    if (AF(arg0, s32, 0x94) == 0xD) {
        p.x = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
        p.y = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
        p.z = AF(AF(arg0, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&p, &sxy, &pp, &flag);
        if (flag >= 0 && ((s16 *)&sxy)[0] >= -0x9F && ((s16 *)&sxy)[0] < 0xA0 && ((s16 *)&sxy)[1] >= -0x77 && ((s16 *)&sxy)[1] < 0x78) {
            x = ((s16 *)&sxy)[0];
            if (x < 0) {
                x = -x;
            }
            x = (0xA0 - x) * 0x7F / 160;
            PlaySoundId(0x702, (u16)(x | 0x1000));
        }
    }
    if (DistSqToTarget(arg0) <= 0x24000) {
        if (++AF(arg0, s16, 0x102) >= 0x78) {
            if (!(AF(arg0, u16, 0x100) & 0x2000)) {
                SetScript(arg0, &D_sc02_027_801C30E4);
                AF(arg0, s16, 2) = 0xA;
                AF(arg0, s16, 0x102) = 0;
                AF(arg0, s32, 0x58) = (s32)&D_sc02_027_801B55C4 | 0x40000000 | 0x20000000;
            }
        }
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    y = AF(arg0, s16, 0xA);
    if (y <= D_80126B62 - 0x100) {
        AF(arg0, s16, 0xA) = y + 8;
    } else if (y >= D_80126B62 - 0x80) {
        AF(arg0, s16, 0xA) = y - 8;
    }
    SetLocalVelocityXZ(arg0, &D_sc02_027_801B5898);
    MoveCollide(arg0);
}

void func_sc02_027_80188968(u8 *arg0) {
    s32 v[4];
    s32 d;
    s16 y;

    if (AF(arg0, s32, 0x94) == 0xA) {
        AF(arg0, s16, 0x98) = 0;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 4);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    v[0] = 0;
    v[1] = 0;
    d = AF(arg0, s32, 4) - g_PlayerPosX;
    v[2] = d;
    if (d > 0) {
        v[2] = -d;
    }
    d = AF(arg0, s32, 0xC) - D_80126B64;
    v[3] = d;
    if (d > 0) {
        v[3] = -d;
    }
    v[2] = (v[2] + v[3]) >> 4;
    SetLocalVelocityXZ(arg0, v);
    y = AF(arg0, s16, 0xA);
    if (y <= D_80126B62 - 0xA) {
        AF(arg0, s16, 0xA) = y + 8;
    } else if (y >= D_80126B62) {
        AF(arg0, s16, 0xA) = y - 8;
    } else if (AF(arg0, s32, 0x94) == 0xA) {
        AF(arg0, s16, 2) = 0xB;
        AF(arg0, s16, 0x98) = 1;
    }
    MoveCollide(arg0);
}

void func_sc02_027_80188AB4(StageActor *arg0) {
    u8 *p;
    s32 i;

    D_sc02_027_801B58B0[arg0->state]();
    if (arg0->kind != 0 && ((u16)arg0->work100 & 0x1000)) {
        for (p = &g_Actors, i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x15E) {
                if (arg0->pos[0].h.i < AF(p, s16, 6) + 0xF0) {
                    arg0->pos[0].h.i = AF(p, s16, 6) + 0xF0;
                }
                return;
            }
        }
    }
}

void func_sc02_027_80188B6C(StageActor *arg0) {
    s16 v[8];
    s32 r[2];
    s32 t;
    u8 *o;
    u8 *g;

    g = g_ActiveCamera;
    arg0->timer -= 1;
    v[1] = AF(g, s32, 0x5C);
    v[3] = AF(g, s32, 0x60);
    v[5] = AF(g, s32, 0x64);
    HeadingPitchTo(r, (u8 *)arg0 + 4, v);
    arg0->model->rot.vx = (r[0] + 0x400) & 0xFFF;
    arg0->model->scale.vx += 0x55;
    arg0->model->scale.vy += 0x55;
    t = arg0->timer;
    if (t == 0xF) {
        PlaySoundId(0xCBA, 0);
        t = arg0->timer;
    }
    if (t < 0x10) {
        if (t == 0) {
            FreeActor(arg0);
            return;
        }
        o = (u8 *) SpawnKind205(arg0, 0);
        if (o != 0) {
            AF(o, s16, 0x16) = -4;
            AF(o, s16, 0x12) = (rand() & 7) - 4;
            AF(o, s16, 0x1A) = (rand() & 7) - 4;
            AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
            AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
        }
    }
}

void func_sc02_027_80188CC0(u8 *arg0) {
    D_sc02_027_801B5940[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (ActorTouchesPlayer((s32) arg0, (s32) (AF(AF(arg0, void *, 0x20), u16, 0x18) << 0x10) >> 0x18, 0x14) == 1) {
            FreeActor((s32) arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
        UpdateModelYXZ(arg0);
    }
}

void func_sc02_027_80188D6C(u8 *arg0) {
    D_sc02_027_801B5AA0[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (ActorTouchesPlayer(arg0, 0x10, 0x16) == 1) {
            s16 *q = &g_PlayerHitKind;
            *q |= 0x200;
            FreeActor(arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
    }
}

void func_sc02_027_80188E1C(StageActor *arg0) {
    SV a;
    SV b;
    u16 x, y, z;

    x = (u16)arg0->pos[0].h.i;
    a.vx = x;
    b.vx = x;
    y = (u16)arg0->pos[1].h.i;
    a.vy = y;
    b.vy = y;
    z = (u16)arg0->pos[2].h.i;
    a.vy = y - 8;
    b.vy = y + 8;
    a.vz = z;
    b.vz = z;
    if (CollidePath(&a, &b, 0) & 0x1F) {
        SetReactionStep(arg0, 6);
        return;
    }
    SetScript(arg0, &D_sc02_027_801C2E64);
    arg0->state = 1;
    arg0->hitState = 0xAA10;
    arg0->params = &D_sc02_027_801B572C;
    arg0->unkFC = 0;
    arg0->hitData = (s32)&D_sc02_027_801B55C4 | 0x40000000 | 0x20000000;
    arg0->origin[0] = (u16)arg0->pos[0].h.i;
    arg0->origin[1] = (u16)arg0->pos[1].h.i;
    arg0->origin[2] = (u16)arg0->pos[2].h.i;
}

void func_sc02_027_80188F04(StageActor *arg0) {
    SV a;
    SV b;
    u16 x, y, z;

    x = (u16)arg0->pos[0].h.i;
    a.vx = x;
    b.vx = x;
    y = (u16)arg0->pos[1].h.i;
    a.vy = y;
    b.vy = y;
    z = (u16)arg0->pos[2].h.i;
    a.vy = y - 8;
    b.vy = y + 8;
    a.vz = z;
    b.vz = z;
    if (CollidePath(&a, &b, 0) & 0x1F) {
        arg0->work100 |= 0x8000;
        SetReactionStep(arg0, 6);
        return;
    }
    if ((u8 *)arg0->script == &D_sc02_027_801C141C) {
        SetScript(arg0, &D_sc02_027_801C1214);
        arg0->state = 0x14;
        arg0->stateCount = 1;
        arg0->workFE = 0;
        arg0->ext0 = &D_sc02_027_801C1FD4;
    } else {
        if (arg0->workFE != 0) {
            SetScript(arg0, &D_sc02_027_801C2ADC);
        } else {
            SetScript(arg0, &D_sc02_027_801C1FD4);
        }
        arg0->state = 1;
    }
    arg0->unkFC = 0;
    arg0->hitState = 0xAA10;
}

void func_sc02_027_80189020(StageActor *arg0) {
    s32 temp_v0;

    if (arg0->kind != 0) {
        if (arg0->param == 4) {
            temp_v0 = SpawnActorArg(0x12C, 4, (s32) arg0);
            if (temp_v0 != 0) {
                AF(temp_v0, u16, 6) = (u16) (u16)arg0->origin[0];
                AF(temp_v0, u16, 0x88) = (u16) (u16)arg0->origin[0];
                AF(temp_v0, u16, 0xE) = (u16) (u16)arg0->origin[2];
                AF(temp_v0, u16, 0x8C) = (u16) (u16)arg0->origin[2];
                AF(temp_v0, s16, 0xA) = (s16) ((u16)arg0->origin[1] - 0x400);
                AF(temp_v0, u16, 0x8A) = (u16) (u16)arg0->origin[1];
                UpdateModelZYX(temp_v0);
            }
        }
        if (IsPlayerHitBy((s32) arg0) != 0) {
            ClearPlayerHitBy((s32) arg0);
        }
        if ((s32)arg0->init != 0) {
            GainStat0FromActor((s32) arg0);
        }
        DespawnActor((s32) arg0);
    }
}

void func_sc02_027_80189100(u8 *arg0) {
    SV8 a;
    SV8 b;

    if (AF(arg0, s32, 0x94) >= 8) {
        AF(arg0, s16, 0xFE) = 1;
        SetLocalVelocityXZ(arg0, &D_sc02_027_801B55A8);
        if (!(MoveOnGround(arg0) & 0x6000)) {
            a.x = AF(arg0, u16, 0x3A);
            a.y = AF(arg0, u16, 0x3E);
            a.z = AF(arg0, u16, 0x42);
            b = a;
            b.y += 8;
            if (TraceMap(1, &a, &b) != 0) {
                AF(arg0, s32, 4) = AF(arg0, s32, 0x38);
                AF(arg0, s32, 8) = AF(arg0, s32, 0x3C);
                AF(arg0, s32, 0xC) = AF(arg0, s32, 0x40);
            }
        }
    }
}

void func_sc02_027_801891D8(u8 *arg0) {
    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x8000);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) * 4);
    TakeDamageAndRecoil();
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, s16, 0x98) = 0;
    StopWithGravity((s32) arg0);
    PlayParamScript((s32) arg0, 8);
    PlaySoundId(0xA74, 0);
}

void func_sc02_027_80189240(u8 *arg0) {
    AF(arg0, s16, 0xFE) = 0;
    if (IsPlayerHitBy((s32) arg0) != 0) {
        ClearPlayerHitBy((s32) arg0);
    }
}

void func_sc02_027_8018927C(StageActor *arg0) {
    SV a;
    SV b;
    u16 x, y, z;

    x = (u16)arg0->pos[0].h.i;
    a.vx = x;
    b.vx = x;
    y = (u16)arg0->pos[1].h.i;
    a.vy = y;
    b.vy = y;
    z = (u16)arg0->pos[2].h.i;
    a.vy = y - 8;
    b.vy = y + 8;
    a.vz = z;
    b.vz = z;
    if (CollidePath(&a, &b, 0) & 0x19) {
        SetReactionStep(arg0, 6);
        return;
    }
    SetScript(arg0, &D_sc02_027_801C2F4C);
    arg0->state = 6;
    arg0->hitState = 0xA810;
}

void func_sc02_027_80189320(Mover *arg0) {
    UV4 a;
    UV4 b;

    SetLocalVelocityXZ(arg0, &D_sc02_027_801B55A8);
    if (!(MoveOnGround(arg0) & 0x6000)) {
        a.x = (u16)arg0->prev[0].h.i;
        a.y = (u16)arg0->prev[1].h.i;
        a.z = (u16)arg0->prev[2].h.i;
        b = a;
        b.y += 8;
        if (TraceMap(1, &a, &b) != 0) {
            arg0->pos[0].w = arg0->prev[0].w;
            arg0->pos[1].w = arg0->prev[1].w;
            arg0->pos[2].w = arg0->prev[2].w;
        }
    }
}

void func_sc02_027_801893E0(u8 *arg0) {
    AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) & ~4);
    SetLocalVelocity((s32) arg0, (s32) &D_sc02_027_801B55B8);
}

void func_sc02_027_80189414(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0x23) {
        AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 0x4000);
    }
    if (IsPlayerHitBy((s32) arg0) != 0) {
        ClearPlayerHitBy((s32) arg0);
    }
}

void func_sc02_027_80189470(s32 arg0) {
    if (IsPlayerHitBy(arg0) != 0) {
        ClearPlayerHitBy(arg0);
    }
}

void func_sc02_027_801894A8(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->animFlags & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc02_027_801C1AB4, arg2);
        arg0->state = 3;
        arg0->unkFC = 0;
        arg0->workFE = 1;
    }
}

void func_sc02_027_80189504(StageActor *arg0) {
    s32 temp_v1;

    if (IsPlayerHitBy(arg0) == 0) {
        ClearPlayerHitBy(arg0);
        SetScript(arg0, (s32) &D_sc02_027_801C1AB4);
        arg0->state = 0x13;
        arg0->stateCount = 3;
        arg0->unkFC = 0;
        arg0->timer = 0x1E;
    }
    temp_v1 = arg0->index;
    if ((temp_v1 == 0xA || temp_v1 == 0x1A) && ActorSegmentHitsPlayer(arg0, (s32) &D_sc02_027_801B586C, (s32) &D_sc02_027_801B5874) == 1) {
        PlaySoundId(0xCB2, 0);
        if ((u16)((u16)arg0->param - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc02_027_801895DC(StageActor *arg0) {
    s32 var_a0;

    if (arg0->index == 0x17) {
        if (arg0->param == 2) {
            var_a0 = 0x1A7;
        } else {
            PlaySoundId(0xCB3, 0);
            var_a0 = 0x19F;
        }
        SpawnActor(var_a0, (s32) arg0);
    }
    if (arg0->animFlags & 0x4000) {
        SetScript((s32) arg0, (s32) &D_sc02_027_801C1AB4);
        arg0->state = 3;
        arg0->unkFC = 0;
        arg0->workFE = 0;
    }
}

void func_sc02_027_80189670(StageActor *arg0) {
    if (IsPlayerHitBy(arg0) == 0) {
        ClearPlayerHitBy(arg0);
        SetScript(arg0, (s32) &D_sc02_027_801C27CC);
        arg0->stateCount = 7;
        arg0->state = 0x13;
        arg0->timer = 0x1E;
    }
    if (arg0->index == 0x17 && ActorSegmentHitsPlayer(arg0, (s32) &D_sc02_027_801B586C, (s32) &D_sc02_027_801B5874) == 1) {
        PlaySoundId(0xCB2, 0);
        if ((u16)((u16)arg0->param - 2) < 2) {
            func_80153C74(3, 0x18);
        } else {
            func_80153C74(1, 0x14);
        }
    }
}

void func_sc02_027_8018973C(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 0xC;
        SetLocalVelocityXZ((s32) arg0, (s32) &D_sc02_027_801B58A4);
        AF(arg0, s16, 0x16) = -8;
        SetScript((s32) arg0, (s32) &D_sc02_027_801C189C);
        AF(arg0, s16, 0x98) = 1;
    }
    if (AF(arg0, s32, 0x94) == 0xF && ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc02_027_801B587C, (s32) &D_sc02_027_801B5884, 0x14) == 1) {
        PlaySoundId(0xCB2, 0);
        if ((u16)(AF(arg0, u16, 0x70) - 2) < 2) {
            s16 *q = &g_PlayerHitKind;
            g_PlayerHitDamage = 0x18;
            *q |= 0x2000;
        }
    }
}

void func_sc02_027_80189814(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, s32, 0x94) == 0xD) {
        PlaySoundId(0x702, 0x107F);
    }
    MoveCollide((s32) arg0);
    temp_v0 = AF(arg0, u16, 0x102) + 1;
    AF(arg0, u16, 0x102) = temp_v0;
    if ((s16) temp_v0 == 0x1E) {
        AF(arg0, s16, 2) = 9;
        SetScript((s32) arg0, (s32) &D_sc02_027_801C189C);
        AF(arg0, u16, 0x102) = 0U;
        AF(arg0, s32, 0x14) = 0;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc02_027_801B55D4 | 0x40000000 | 0x20000000);
    }
}

void func_sc02_027_801898B0(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (MoveCollide((s32) arg0) & 0x6000) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc02_027_80189908(void) {
}

void func_sc02_027_80189910(StageActor *arg0) {
    if (ActorSegmentHitsPlayer(arg0, (s32) &D_sc02_027_801B586C, (s32) &D_sc02_027_801B5874) == 1) {
        g_PlayerHitKind = 0x400F;
        g_PlayerHitDamage = 0;
        g_PlayerAttacker = arg0;
        arg0->state = 0x10;
        SetScript(arg0, (s32) &D_sc02_027_801C235C);
        return;
    }
    SetScript(arg0, (s32) &D_sc02_027_801C2ADC);
    arg0->state = 3;
    arg0->unkFC = 0;
    arg0->workFE = 1;
}

void func_sc02_027_801899B0(StageActor *arg0) {
    if (IsPlayerHitBy(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc02_027_801C2ADC);
        arg0->state = 3;
        arg0->unkFC = 0;
        return;
    }
    arg0->state = 4;
}

void func_sc02_027_80189A04(StageActor *arg0) {
    if (ActorSegmentHitsPlayer(arg0, (s32) &D_sc02_027_801B586C, (s32) &D_sc02_027_801B5874) == 1) {
        g_PlayerHitKind = 0x400F;
        g_PlayerHitDamage = 0;
        g_PlayerAttacker = arg0;
        arg0->state = 0x12;
        SetScript(arg0, (s32) &D_sc02_027_801C269C);
        return;
    }
    SetScript(arg0, (s32) &D_sc02_027_801C2F4C);
    arg0->state = 6;
}

void func_sc02_027_80189A98(StageActor *arg0) {
    if (IsPlayerHitBy(arg0) == 0) {
        SetScript(arg0, (s32) &D_sc02_027_801C27CC);
        arg0->state = 6;
    } else {
        arg0->state = 8;
    }
}

void func_sc02_027_80189AE0(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        arg0->state = (u16) arg0->stateCount;
    }
}

void func_sc02_027_80189B08(StageActor *arg0, s32 arg1, s32 arg2) {
    if ((arg0->animFlags & 0x4000) || (arg0->animTimer == 0)) {
        arg0->state = (u16) arg0->stateCount;
        SetScript((s32) arg0, arg0->ext0, arg2);
    }
}

void func_sc02_027_80189B54(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc02_027_801B5904);
    SetScript(arg0, (s32) &D_sc02_027_801B591C);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    StopWithGravity(arg0);
    UpdateModelZYX(arg0);
    SetLocalVelocity(arg0, (s32) &D_sc02_027_801B5934);
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc02_027_80189C40(s32 arg0) {
    void *temp_a0;
    void *temp_v1;

    if (MoveCollide(arg0) & 0x2000) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(arg0, s16, 0x98) = 1;
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
        AF(AF(arg0, void *, 0x20), s16, 0x12) = 0;
        PlaySoundId(0xCB4, 0);
    }
}

void func_sc02_027_80189CC4(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AllocActorModel(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc02_027_801B594C);
    SetScript(arg0, (s32) &D_sc02_027_801B5A0C);
    AF(arg0, s32, 0x94) = (s32) (rand() & 0xF);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    StopWithGravity(arg0);
    UpdateModelZYX(arg0);
    SetLocalVelocity(arg0, (s32) &D_sc02_027_801B5A94);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x90);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - (rsin((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) - (rcos((s32) (s16) AF(AF(arg0, s32, 0x20), u16, 0x12)) >> 8));
}

void func_sc02_027_80189DD0(s32 arg0) {
    if (MoveCollide(arg0) & 0x2000) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc02_027_80189E08(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v1;
    ModelObj *temp_v1_2;

    temp_v1 = arg0->model;
    temp_v1->scale.vx = (u16) ((u16)temp_v1->scale.vx + 0x200);
    temp_v1_2 = arg0->model;
    temp_v1_2->scale.vy = (u16) ((u16)temp_v1_2->scale.vy - 0x200);
    if ((s16) (u16)arg0->model->scale.vy < 0x401) {
        FreeActor((s32) arg0, arg1);
    }
}

void func_sc02_027_80189E74(StageActor *arg0) {
    D_sc02_027_801D2B0C[arg0->state]();
}

void func_sc02_027_80189EB0(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 4;
    if (AF(arg0, s16, 0xDE) != 0) {
        func_sc02_027_8018A090();
        return;
    }
    var_v0 = &D_sc02_027_801DA8CC;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    arg0->timer = (s32) ((rand() & 0x7F) + 0x40);
    NextState((s32) arg0);
}

void func_sc02_027_80189F28(u8 *arg0) {
    s32 d;
    s32 r;
    u16 n;

    if (TickTimer(arg0) != 0) {
        r = rand();
        n = AF(arg0, u16, 0xFC);
        d = ((s16)n / 2 - (r & (n - 1))) * 2;
        D_sc02_027_801D2B1C.x = AF(arg0, u16, 6) + d;
        D_sc02_027_801D2B1C.y = AF(arg0, u16, 0xA);
        D_sc02_027_801D2B1C.z = AF(arg0, u16, 0xE) + d;
        func_sc02_027_80189FD8(arg0, &D_sc02_027_801D2B1C);
        AF(arg0, s32, 0x1C) = (rand() & 0x7F) + 0x40;
    }
}

void func_sc02_027_80189FD8(u8 *arg0, SpawnDef *arg1) {
    s32 i;

    i = 0;

    if (IsOnScreen(arg0, ((D_800AF7BE >> 1) << 16) | (D_800AF7BC >> 1))) {
        for (; i < 5; i++) {
            if (D_sc02_027_801DA8C8[i] == 0) {
                D_sc02_027_801DA8C8[i] = 1;
                arg1->unk10 = i | 0x80000000;
                arg1->unk8 = AF(arg0, u16, 0x70);
                SpawnActorFromDef(arg1, arg0);
                return;
            }
        }
    }
}

void func_sc02_027_8018A090(StageActor *arg0) {
    ModelObj *o;
    u8 *p;

    p = (AF(arg0, s16, 0xDC) << 6) + D_sc02_027_801DA788;
    arg0->unkFC = 0x7000;
    arg0->work100 = 0;
    arg0->workFE = 0;
    arg0->work104 = 0;
    arg0->work106 = 0;
    o = AllocActorSprite();
    arg0->model = o;
    if (o != 0) {
        func_8001CD50(o, p);
        o->rot.vx = 0x400;
        o->unk04 |= 0x60000000;
        SetShapeCircle(p, 0x40);
        AF(p, s32, 0) = 0x808080;
        AF(p, s32, 4) = 0x808080;
        func_sc02_027_8018A41C(arg0);
        arg0->state = 3;
    }
}

void func_sc02_027_8018A150(StageActor *arg0) {
    ModelObj *a1;
    u16 t;
    s16 b;
    a1 = arg0->model;
    if (a1 != NULL) {
        t = (u16)a1->scale.vy - 0x100;
        a1->scale.vy = t;
        a1->scale.vx = t;
        if (a1->scale.vy < 0) {
            a1->scale.vy = 0;
            a1->scale.vx = 0;
        }
    }
    if (arg0->workFE >= 0x6000) {
        arg0->workFE = 0x6000;
    } else {
        arg0->work106 += 0x400;
        arg0->workFE += (u16)arg0->work106;
    }
    arg0->work104 -= 0x80;
    b = (u16)arg0->unkFC + (u16)arg0->work104;
    arg0->unkFC = b;
    if (b < 0) {
        D_sc02_027_801DA8C8[AF(arg0, s16, 0xDC)] = 0;
        FreeActor(arg0);
        return;
    }
    func_sc02_027_8018A21C(arg0);
}

void func_sc02_027_8018A21C(u8 *arg0) {
    QuadArg q;
    WMtx m;
    SV r;

    q.code = 0x50000000;
    *(s32 *) &q.c[0] = 0x80;
    *(s32 *) &q.c[1] = 0x80;
    *(s32 *) &q.c[2] = 0;
    *(s32 *) &q.c[3] = 0;
    q.p[0] = D_sc02_027_801D2B30;
    q.p[1] = D_sc02_027_801D2B38;
    q.p[2] = D_sc02_027_801D2B40;
    q.p[3] = D_sc02_027_801D2B48;
    SetScaleMatrix(arg0 + 0xFC, &m);
    RotMatrixY((s16) GetCameraHeading(), &m);
    PosToSVec(arg0 + 4, &r);
    SetMatrixTrans(&r, &m);
    DrawPrimG4Mtx(&q, &m);
    q.code = 0x60000000;
    *(s32 *) &q.c[0] = 0x808080;
    *(s32 *) &q.c[1] = 0x808080;
    q.p[0] = D_sc02_027_801D2B50;
    q.p[1] = D_sc02_027_801D2B58;
    q.p[2] = D_sc02_027_801D2B60;
    q.p[3] = D_sc02_027_801D2B68;
    DrawPrimG4Mtx(&q, &m);
}

void func_sc02_027_8018A41C(u8 *arg0) {
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        PlaySoundId(0x6D5, 0);
        break;
    case 1:
        PlaySoundId(0x856, (func_sc02_027_8018A4A4() | 0x2000) & 0xFFFF);
        break;
    case 2:
        PlaySoundId(0x857, (func_sc02_027_8018A4A4() | 0x2000) & 0xFFFF);
        break;
    }
}

s32 func_sc02_027_8018A4A4(u8 *arg0) {
    SV r;
    s32 v;

    PosToSVec(arg0 + 4, &r);
    if (ProjectPoint(&r, &r) & ~0x1000) {
        v = 1;
    } else {
        v = (r.vx << 6) / 160 + 0x40;
    }
    if (v <= 0) {
        v = 1;
    } else if (v >= 0x80) {
        v = 0x7F;
    }
    return v;
}

void func_sc02_027_8018A528(StageActor *arg0) {
    D_sc02_027_801D6A1C[arg0->state]();
}

void func_sc02_027_8018A564(StageActor *arg0) {
    Blk30 *p;

    arg0->workFE = 0;
    switch (arg0->unkFC) {
    case 0:
        SetAmbientColor(D_sc02_027_801D693C, D_sc02_027_801D693E, D_sc02_027_801D6940);
        p = &D_sc02_027_801D6944;
        SetState(arg0, 1);
        break;
    case 1:
        SetAmbientColor(D_sc02_027_801D6974, D_sc02_027_801D6976, D_sc02_027_801D6978);
        p = &D_sc02_027_801D697C;
        SetState(arg0, 2);
        break;
    case 2:
        SetAmbientColor(D_sc02_027_801D69AC, D_sc02_027_801D69AE, D_sc02_027_801D69B0);
        p = &D_sc02_027_801D69B4;
        SetState(arg0, 3);
        break;
    case 3:
        SetAmbientColor(D_sc02_027_801D693C, D_sc02_027_801D693E, D_sc02_027_801D6940);
        p = &D_sc02_027_801D6944;
        SetState(arg0, 4);
        break;
    case 4:
        SetAmbientColor(D_sc02_027_801D69E4, D_sc02_027_801D69E6, D_sc02_027_801D69E8);
        p = &D_sc02_027_801D69EC;
        SetState(arg0, 5);
        break;
    }
    g_Lights.a = p->a;
    g_Lights.b = p->b;
    g_Lights.c = p->c;
    ApplyLight(0, &g_Lights.a);
    ApplyLight(1, &g_Lights.b);
    ApplyLight(2, &g_Lights.c);
}

void func_sc02_027_8018A758(StageActor *arg0) {
    g_Lights.c = D_sc02_027_801D6964;
    D_800A5EB0 = rsin(arg0->workFE) * 10 / 4096 - 5;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc02_027_8018A808(StageActor *arg0) {
    g_Lights.c = D_sc02_027_801D699C;
    D_800A5EB0 = rsin(arg0->workFE) * 6 / 4096 - 3;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc02_027_8018A8B8(StageActor *arg0) {
    g_Lights.a = D_sc02_027_801D69B4.a;
    D_800A5E90 = rsin(arg0->workFE) * 20 / 4096 - 10;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}

void func_sc02_027_8018A968(void) {
}

void func_sc02_027_8018A970(StageActor *arg0) {
    g_Lights.a = D_sc02_027_801D69EC.a;
    D_800A5E90 = rsin(arg0->workFE) / 512 + 8;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}

void func_sc02_027_8018AA14(StageActor *arg0) {
    D_sc02_027_801D6D64[arg0->state]();
}

void func_sc02_027_8018AA50(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc02_027_801D6A54) != 0) {
        if (!(GetFlag(D_sc02_027_801D6ABC[AF(arg0->message, u16, 0xA)]) & 0xFF)) {
            arg0->ext0 = SpawnTalkMarker(arg0, (s32) &func_sc02_027_8018B0FC);
        } else {
            arg0->param = (u16) ((u16)arg0->param | 0x4000);
        }
        temp_v0 = SpawnActorArg(0x8F, (s32) (s16) (u16)arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc02_027_8018B56C);
        arg0->state = 1;
    }
}

void func_sc02_027_8018AB24(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc02_027_8018AB4C(void) {
}

void func_sc02_027_8018AB54(StageActor *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0->message;
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (GetFlag(0x1D) & 0xFF) {
            D_sc02_027_801D6CA0 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc02_027_801D6C04[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc02_027_801D6C8C = 0;
            SetFlag(D_sc02_027_801D6C04[AF(temp_s0, u16, 0xC)], 1);
            D_sc02_027_801D6C88 = 2;
        } else {
            D_sc02_027_801D6CA0 = AF(temp_s0, s32, 0);
            var_v0 = D_sc02_027_801D6B80[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc02_027_801D6C88 = 0;
            D_sc02_027_801D6C8C = var_v0;
        }
        RunScript((s32) arg0, (s32) &D_sc02_027_801D6CB4);
    } else {
        var_a1 = &D_sc02_027_801D6D20;
        *var_a1 = AF(temp_s0, s32, 0);
        RunScript((s32) arg0, (s32) (var_a1 - 7));
    }
    arg0->state = 4;
    arg0->param = (u16) ((u16)arg0->param | 0x8000);
}

void func_sc02_027_8018ACA0(StageActor *arg0) {
    void *temp_s2;

    temp_s2 = arg0->message;
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        if (GetFlag(D_sc02_027_801D6ABC[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc02_027_801D6ABC[AF(temp_s2, u16, 0xA)] == 0x54) {
                SetProgress(0x5A);
                SetFlag(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (GetFlag(0x1D) & 0xFF)) {
                UploadFlagImages(0);
            }
            if (func_sc02_027_8018AEA4() == 1) {
                GiveItem(0x26);
            }
            arg0->param = (u16) ((u16)arg0->param & 0x8000);
            FreeActor(arg0->ext0);
        }
        arg0->state = 2;
    }
}

void func_sc02_027_8018ADC0(StageActor *arg0) {
    arg0->state = 2;
    FreeActor(arg0->ext0);
}

void func_sc02_027_8018ADEC(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc02_027_8018ADFC(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc02_027_8018AE0C(u8 *arg0) {
    SetFlag(D_sc02_027_801D6ABC[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc02_027_8018AE4C(u8 *arg0) {
    AddMoney((s32) &g_Player, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc02_027_8018AE80(void) {
    return func_80174764() == 1;
}

s32 func_sc02_027_8018AEA4(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(GetFlag(D_sc02_027_801D6ABC[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc02_027_8018AF08(StageActor *arg0) {
    D_sc02_027_801D6D8C[arg0->state]();
}

void func_sc02_027_8018AF44(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc02_027_801D6A88) != 0) {
        arg0->unkFC = (u16) arg0->parent->id;
        if ((u16)arg0->param & 0x4000) {
            SetScript(arg0, (s32) &D_sc02_027_801D744C);
            arg0->hitState = 0;
        } else {
            SetScript(arg0, (s32) &D_sc02_027_801D722C);
        }
        arg0->state = 1;
    }
}

void func_sc02_027_8018AFCC(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->unkFC != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_027_801D723C);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_027_801D7344);
        arg0->hitState = 0x8C00;
    }
}

void func_sc02_027_8018B08C(StageActor *arg0) {
    s32 f;

    if (arg0->animTimer == 0) {
        f = arg0->workFE;
        arg0->state = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc02_027_801D744C);
        } else {
            SetScript((s32) arg0, (s32) &D_sc02_027_801D722C);
        }
        arg0->workFE = 0;
    }
}

s32 *func_sc02_027_8018B0FC(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    Mover *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) g_PlayerModel + 0x34);
    gte_SetTransMatrix((u8 *) g_PlayerModel + 0x34);
    RotTransSV(&D_sc02_027_801D6D7C[0], &a, &f);
    RotTransSV(&D_sc02_027_801D6D7C[1], &b, &f);
    if (PathHitsModel(p->model, p->hitData, &a, &b) != 0 && TargetInFront(p, 0x300) != 0) {
        p->state = 3;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}
