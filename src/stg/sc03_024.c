#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_024_8017BE9C(void) {
}

void func_sc03_024_8017BEA4(void) {
}

void func_sc03_024_8017BEAC(void) {
}

void func_sc03_024_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { u8 b[0x6C]; } B6C;
extern void (*D_sc03_024_8018A8F8[])();
void func_sc03_024_8017BEE4(u8 *arg0);
extern void (*D_sc03_024_8018A904[])();
void func_sc03_024_8017BFC8(u8 *arg0);
extern void (*D_sc03_024_8018A9C4[])();
extern void func_sc03_024_8017C154();
extern void (*D_sc03_024_8018AA04[])();
extern void (*D_sc03_024_8018AA24[])();
extern void (*D_sc03_024_8018AA34[])();
extern void (*D_sc03_024_8018AA40[])();
extern void (*D_sc03_024_8018ABC4[])();
void func_sc03_024_8017DB00(u8 *arg0);
extern void (*D_sc03_024_8018ABFC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_800D22E4();
extern void FreeEffect();
extern void (*D_sc03_024_8018AED8[])();
extern s32 IsEventDone();
extern void SpawnEffect();
extern u8 D_sc03_024_8018AC8C;
extern s32 MoveCollide();
extern void UpdateModelZYX();
extern void SetLocalVelocity();
extern void EndEvent();
extern void FreeActor();
extern u8 D_sc03_024_8018AEC8[];
extern void SetFlag();
extern s32 SpawnActorArg();
extern void StartEvent();
extern u8 g_Status;
extern u8 D_sc03_024_8018AEA8;
extern s32 IsOnScreen();
extern void FreeShadow();
extern void (*D_sc03_024_8018AF4C[])();
void func_sc03_024_80180368(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc03_024_8018AF54[])();
void func_sc03_024_80180390(void);
extern void func_800D1EBC();
extern void (*D_sc03_024_8018AF60[])();
void func_sc03_024_801803B8(void);
extern u8 D_sc03_024_8018AFE0;
extern void StartPlayerActionScript();
extern u8 D_sc03_024_8018AFF0;
extern u8 D_sc03_024_8018B004;
extern void (*D_sc03_024_8018B014[])();
extern u8 D_sc03_024_8018B00C;
extern void (*D_sc03_024_8018B044[])();
void func_sc03_024_80180770(u8 *arg0);
extern void (*D_sc03_024_8018B050[])();
void func_sc03_024_80180860(u8 *arg0);
extern void (*D_sc03_024_8018B05C[])();
void func_sc03_024_80180944(u8 *arg0);
extern void (*D_sc03_024_8018B068[])();
void func_sc03_024_80180A20(u8 *arg0);
extern void func_sc03_024_80180CCC();
extern void (*D_sc03_024_8018B074[])();
extern void (*D_sc03_024_8018B090[])();
extern void NextState();
extern void (*D_sc03_024_8018B09C[])();
extern void (*D_sc03_024_8018B0A4[])();
extern void (*D_sc03_024_8018B0AC[])();
extern u8 D_sc03_024_801C12C0;
extern void func_sc03_024_80181BA0();
extern void (*D_sc03_024_8018B10C[])();
extern void (*D_sc03_024_8018B3E0[])();
extern s32 func_sc03_024_8017BEBC();
extern s32 func_sc03_024_8017BFA0();
extern void func_sc03_024_8018282C();
extern void func_sc03_024_80182844();
extern void (*D_sc03_024_8018B740[])();
extern void (*D_sc03_024_8018B760[])();
extern void (*D_sc03_024_8018B77C[])();
extern void (*D_sc03_024_8018B784[])();
extern s32 func_sc03_024_80180748();
extern s32 func_sc03_024_80180838();
extern s32 func_sc03_024_8018091C();
extern void (*D_sc03_024_8018B7E8[])();
extern void (*D_sc03_024_801B93C4[])();
extern void (*D_sc03_024_801BA5B4[])();
extern void (*D_sc03_024_801BA5BC[])();


extern s32 func_sc03_024_8017BF58();
extern s32 func_sc03_024_801810D8();
extern s32 func_sc03_024_8017C03C();
extern s32 func_sc03_024_801810A4();
extern s32 TickObjTimer();
extern void SetObjTimer();
extern void func_sc03_024_8017DB74();
extern s16 D_80126B3C;
extern s32 GetMessageAnswer();
extern void CloseMessage();
extern void func_sc03_024_8017D9C8();
extern s8 D_800B9A11;
extern u8 D_sc03_024_8018AB00;
extern void SetPlayerMotion();
extern void StopSeqPlayer();
extern void EnableBgLayers();
extern s32 func_sc03_024_801809B8();
extern s32 func_sc03_024_801809F8();
extern s32 D_sc03_024_8018B088[];
extern s32 func_8013B7F4();
extern s32 SetState();
extern u8 D_sc03_024_8018B164;
extern s32 func_sc03_024_8018264C();
extern s32 func_sc03_024_801823B4();
extern void ResumeClockTint();
extern void (*D_sc03_024_8018B430[])();
extern void func_sc03_024_8018290C();
extern u8 D_sc03_024_801C1350;
extern void StepSpriteAnim();
extern s32 TickTimer();
extern void MoveObject();
extern s32 func_sc03_024_801822E8();
extern void func_sc03_024_8018265C();
extern void func_sc03_024_801864C8();
extern s32 func_sc03_024_801826E8();
extern void func_sc03_024_80182408();
extern s32 D_sc03_024_801C13A0;
extern u8 D_sc03_024_801C15FC;
extern u16 D_sc03_024_801C15F4;
extern u16 D_sc03_024_801C15F6;
extern s16 D_sc03_024_801C15F8;
extern s16 D_sc03_024_801C15FA;
extern s32 func_sc03_024_80185CD4();
extern void func_sc03_024_80185C00();
extern void PosToSVec();
extern s32 func_sc03_024_80186148();
extern s32 func_sc03_024_8018648C();
extern void func_sc03_024_80186370();

extern s16 D_sc03_024_801C14F4;

extern s32 func_sc03_024_80180AA4();
extern s32 func_sc03_024_801824B8();

extern s32 D_80126CF0;
extern s32 D_8012750C;
extern s32 OpenMessage();


extern s32 GetProgress();
extern s32 GetFlag();
extern void func_800D0C48();
extern s32 PlaySoundId();
extern void ClearTimeChime();
extern void func_800D1E28();
extern void func_sc03_024_80180C2C();
extern void PlaySePositional();
extern void BumpSub2Copy();
extern void NextPlayerActionHandler();
extern u8 D_800D5904;
extern s32 func_sc03_024_80180800();
extern u8 D_sc03_024_8018AF6C;
extern s32 func_sc03_024_801808E4();
extern u8 D_800D5880;
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
extern u8 D_800AEE88;
extern s32 RequestLoad();
extern u8 D_800AEE90;
extern u8 D_800AEE98;
extern void UpdateClockTint();
extern void func_800D06E8();
extern s16 D_80126B62;
extern s16 D_80126B66;
void func_sc03_024_80180720(void);
extern void MoveProp();
extern void FreeProp();
extern void (*D_sc03_024_8018B0F4[])();
extern s32 GetPlayerAction();
extern u8 D_sc03_024_8018B0FC;
extern u8 D_sc03_024_801B98C0;
extern s32 AllocActorModel();
extern s32 InitModel();
extern s32 SpawnActor();
extern void RejectSpawn();
extern s32 func_sc03_024_80182360();
extern s16 D_sc03_024_801C17D8;
extern void SetProgress();
extern s8 D_sc03_024_801C135C;
extern s8 D_sc03_024_801C135D;
extern s8 D_sc03_024_801C135E;
extern u16 D_80078EB6;
extern void AddMaxBp();
extern void AddBp();
extern u8 D_sc03_024_8018B458;
extern s32 RequestBgmPack();
extern u8 D_sc03_024_8018B70C;
extern u8 D_sc03_024_801B62A0;
extern s32 SetupActor();
extern s32 SpawnShadow();
extern void StopWithGravity();
extern void UpdateModelYXZ();
extern void func_sc03_024_80184B80();
extern void ShowPlayerScene();
extern void HidePlayerScene();
extern void func_800D06CC();
extern s32 func_800D0694();

s32 func_sc03_024_8017BEBC()
{
    return SetActionHandler((s32) func_sc03_024_8017BEE4);
}

void func_sc03_024_8017BEE4(u8 *arg0) {
    D_sc03_024_8018A8F8[AF(arg0, u8, 0x214)]();
}

void func_sc03_024_8017BF20(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_sc03_024_8017BF58(arg0);
}

s32 func_sc03_024_8017BF58(s32 arg0) {
    s32 var_v0;

    var_v0 = func_sc03_024_801810D8();
    if (var_v0 != 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_sc03_024_8017BF98(void) {
}

s32 func_sc03_024_8017BFA0()
{
    return SetActionHandler((s32) func_sc03_024_8017BFC8);
}

void func_sc03_024_8017BFC8(u8 *arg0) {
    D_sc03_024_8018A904[AF(arg0, u8, 0x214)]();
}

void func_sc03_024_8017C004(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_sc03_024_8017C03C(arg0);
}

s32 func_sc03_024_8017C03C(s32 arg0) {
    s32 var_v0;

    var_v0 = func_sc03_024_801810A4();
    if (var_v0 != 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_sc03_024_8017C07C(void) {
}

void func_sc03_024_8017C084(u8 *arg0, s32 arg1, s32 arg2) {
    SpawnEffect(0x2B, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ arg1, /* extra? */ arg2);
}

void func_sc03_024_8017C0C8(u8 *arg0) {
    D_sc03_024_8018A9C4[AF(arg0, u16, 2)]();
}

extern s32 SpawnPropFrom();


extern u16 g_PlayerX;
extern void StopMotion();

extern void func_sc03_024_8018623C();



extern s32 func_sc03_024_8018569C();

extern s32 D_sc03_024_8018A9B0[];
extern void PlaySe();
extern u8 D_sc03_024_801BA594;

extern u8 D_sc03_024_8018AA5C;
extern void StartSeqPlayer();
extern void DisableBgLayers();

extern u8 D_sc03_024_801C11F0[];
extern u8 D_sc03_024_801C11F1;
extern u8 D_sc03_024_801C11F2;
extern s8 D_sc03_024_801C11F4;
extern s8 D_sc03_024_801C11F5;
extern s8 D_sc03_024_801C11F6;
extern s32 AllocSprite16To3E();
extern void func_8001CD04();
extern void SetShapeCircle();


extern u8 D_sc03_024_8018B250;
extern s32 func_sc03_024_80182884();
extern s32 func_sc03_024_801828B0();

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
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
extern PtSys D_sc03_024_801C14E8;
extern s16 D_sc03_024_801C14EE;
extern void func_sc03_024_801865DC();

extern u8 D_sc03_024_8018ABF0;
extern u8 *func_800D21C4();
extern s32 D_sc03_024_801C1268;
extern s32 D_sc03_024_801C1274;
extern s32 D_sc03_024_801C127C;
extern void func_sc03_024_8017FAEC();
extern void func_sc03_024_8017FA78();
extern s32 TurnStepToward();
extern s32 TurnStepToTarget();
extern s32 MoveCollidePassable();
extern u8 D_sc03_024_8018AC04;
extern s32 MoveOnGround();

typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern WMtx GsIDMATRIX;
extern OtRef g_WorldOtOrg[];
extern Ot14 g_WorldOt[];
extern s32 AddDrawModeAbr();
extern u8 D_sc03_024_801C14F0;
extern u8 D_sc03_024_801C14F1;
extern u8 D_sc03_024_801C14F2;

extern u8 D_sc03_024_8018A9F8;
extern u8 D_sc03_024_8018AA1C;
extern s32 D_sc03_024_8018A960[];
extern void ObjLocalToWorld16();
extern s32 GetCameraPitch();
extern s32 GetCameraHeading();
extern void ProjectPointOtz();
extern void SVecToPos();
extern void InitSpriteKind1();
extern s32 D_sc03_024_8018A99C[];
extern void func_sc03_024_8017D318();
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
extern u8 g_ClockHour;
extern u8 D_800AF630;
extern void func_sc03_024_80181C5C();

extern SV D_sc03_024_8018A9D8[];
extern void func_sc03_024_8017C290();
extern CV4 D_sc03_024_801C11B0;
extern u8 D_sc03_024_801C11B4;
extern u8 D_sc03_024_801C11B5;
extern u8 D_sc03_024_801C11B6;
extern CV4 D_sc03_024_8018A924[];
extern SV4 D_sc03_024_801C1230[4];
extern s16 D_sc03_024_801C1234;
extern CV4 D_sc03_024_801C1250;
extern CV4 D_sc03_024_801C1254;
extern CV4 D_sc03_024_801C1258;
extern CV4 D_sc03_024_801C125C;
extern s32 D_sc03_024_801C1260;
extern CV4 D_sc03_024_8018A938[];
extern CV4 D_sc03_024_8018A94C[];
extern void SetIdentityRot();
extern void DrawPrimG4Screen();
extern UV4 D_sc03_024_801B9330[];
extern s32 D_sc03_024_801B93B8[];

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern CV4 D_sc03_024_8018A910[];
extern u16 g_Effects;
extern u16 D_sc03_024_8018A974[][2];
extern s32 HeadingToTarget();
extern s32 DistSqToPlayer();
extern s32 D_sc03_024_8018AE6C;
extern void RestorePrevPos();
extern void func_sc03_024_8017FBC8();
extern s32 DistSq();
extern void StartEventKeepPlayer();
extern s32 TargetInFront();

typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 g_CameraFocus;
extern u8 D_sc03_024_8018B080[];
extern s32 GetObjPadPressed();
extern void func_sc03_024_80180EA8();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern s32 D_800AF648[];


extern u8 D_sc03_024_8018AD9C;
extern u8 D_sc03_024_8018ADD0;
extern s32 D_sc03_024_801C126C;
extern s32 D_sc03_024_801C1270;

extern u8 D_sc03_024_801B6328;
extern u8 D_sc03_024_801B6218;
extern u8 D_sc03_024_801B60D8;
extern u8 D_sc03_024_801B61D8;
extern u8 D_sc03_024_801B5F70;
extern u8 D_sc03_024_801B5D18;
extern u8 D_sc03_024_801B5E88;
extern u8 D_sc03_024_801B5DD0;
extern u8 D_sc03_024_801B5C78;
extern u8 D_sc03_024_801B5CC8;
extern u8 D_sc03_024_801B6070;

typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;

typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
extern s32 D_sc03_024_801C1358;
extern void ForceTintRow5();
extern void func_sc03_024_801821D4();

extern void func_8001CA1C();
extern u8 D_sc03_024_8018B768;
extern u8 D_sc03_024_8018B774;
extern s32 SetScript();
extern s32 rand();
extern s32 rsin();
extern s32 rcos();

extern u8 D_sc03_024_801C13A8;
extern s32 D_sc03_024_801C13AC;
extern s32 D_sc03_024_801C13B0;
extern s32 D_sc03_024_801C13B8;
extern s32 D_sc03_024_801C13BC;
extern s32 D_sc03_024_801C13C0;
extern s32 D_sc03_024_801C13C8;
extern s32 D_sc03_024_801C13CC;
extern s32 D_sc03_024_801C13D0;

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
extern s32 GroundDistSqToPlayer();
extern s32 PlayerFlag1000();
extern u8 D_80062BD0;
extern void StartRumbleScript();
extern u16 D_sc03_024_801BA59C[];
extern void func_sc03_024_80186C20();


typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern s32 D_sc03_024_8018A988[];
extern s32 EaseValueFrac();
extern u8 D_80126B30;
extern s32 D_8011F9C8;
extern s16 D_80126B3A;
extern void *g_ActiveCamera;
extern void AngleToVec2();
extern s32 g_PlayerPosX;
extern s32 HeadingTo();
extern u8 D_sc03_024_8018AE04[];
extern XY D_sc03_024_8018AE24[];
extern u8 D_sc03_024_8018ACF4;
typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
typedef struct { CV a; CV b; u8 pad[0x38]; } E40;
typedef struct { u8 b[4]; } B4;
typedef struct { s32 x, y, z; u8 r, g, b, cd; } L16;
typedef struct { s32 a, b; } P8;
typedef struct { u16 a, b, c, d; u8 pad[12]; } S20;
typedef struct { s32 a, b; } W2;
extern void func_sc03_024_80180E60();
extern u8 D_sc03_024_801BFD88;
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
extern u8 D_sc03_024_8018B0C4;
s32 func_sc03_024_80182784(StageActor *arg0, s32 arg1, s32 arg2);
extern s32 PathHitsModel();
extern void *g_PlayerModel;
extern s32 g_PlayerHitData;
extern void CopyPropPos();
extern void PushAlongView16();
extern CV4 D_sc03_024_801BFD90;
extern CV4 D_sc03_024_801C1360;
extern void func_8001CD9C();
extern CV4 D_sc03_024_801BFE6C;

void func_sc03_024_8017C104(u8 *arg0) {
    u8 unused[0x28];

    AF(arg0, s16, 0xE) += 0x10;
    AF(arg0, s16, 2)++;
}

void func_sc03_024_8017C12C(s32 arg0) {
    func_sc03_024_8017C154(arg0);
}

void func_sc03_024_8017C14C(void) {
}

void func_sc03_024_8017C154(u8 *arg0) {
    SV pos;
    SV z;
    SV a;
    SV b;
    SV t;
    s32 i;
    s32 j;

    AF(arg0, s16, 0x10) = AF(arg0, s32, 0x30);
    PosToSVec(arg0 + 4, &pos);
    for (i = 0; i < 4; i++) {
        z.vx = 0;
        z.vy = 0;
        z.vz = 0;
        a = z;
        b = z;
        for (j = 0; j < 4; j++) {
            t = D_sc03_024_8018A9D8[j];
            AF(arg0, s16, 0x12) = j + i;
            func_sc03_024_8017C290(arg0, &pos, &z, &a, &b, &t, arg0 + 0x10);
        }
    }
}

void func_sc03_024_8017C290(u8 *arg0, SV8 *arg1, SV8 *arg2, SV8 *arg3, SV8 *arg4, SV8 *arg5,
                            s16 *arg6) {
    SMtx m;
    SV8 *p2;
    SV8 *p3;
    SV8 *d;

    SetIdentityRot(&m);
    RotMatrixZ(*arg6, &m);
    m.t[0] = arg1->x;
    m.t[1] = arg1->y;
    m.t[2] = 0;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    d = D_sc03_024_801C1230;
    if (*(s16 *)(arg0 + 0x12) == 0) {
        D_sc03_024_801C1260 = 0x50000000;
        D_sc03_024_801C1250 = D_sc03_024_8018A910[AF(arg0, s32, 0x2C)];
        D_sc03_024_801C1254 = D_sc03_024_8018A910[AF(arg0, s32, 0x2C)];
        D_sc03_024_801C1258.r = 0;
        D_sc03_024_801C1258.g = 0;
        D_sc03_024_801C1258.b = 0;
        D_sc03_024_801C125C.r = 0;
        D_sc03_024_801C125C.g = 0;
        D_sc03_024_801C125C.b = 0;
    }
    arg5->x += arg2->x;
    arg5->y += arg2->y;
    {
        s32 r = ((u16 *)arg5)[3] & rand();
        if (*(u16 *)(arg0 + 0x12) & 1) {
            arg5->x += r;
        } else {
            arg5->x -= r;
        }
    }
    arg5->y += (rand() & 0x1F) - 0x10;
    gte_ldv0(arg2);
    gte_rtv0tr();
    gte_stsv(d);
    gte_ldv0(arg5);
    gte_rtv0tr();
    gte_stsv(&d[1]);
    gte_ldv0(arg3);
    gte_rtv0tr();
    p2 = &d[2];
    gte_stsv(p2);
    *arg3 = *arg5;
    arg3->x -= ((u16 *)arg5)[3] & rand();
    gte_ldv0(arg3);
    gte_rtv0tr();
    p3 = &d[3];
    gte_stsv(p3);
    d->z = arg1->z;
    DrawPrimG4Screen(d);
    gte_ldv0(arg4);
    gte_rtv0tr();
    gte_stsv(p2);
    *arg4 = *arg5;
    arg4->x += ((u16 *)arg5)[3] & rand();
    gte_ldv0(arg4);
    gte_rtv0tr();
    gte_stsv(p3);
    d->z = arg1->z;
    DrawPrimG4Screen(d);
    *arg2 = *arg5;
}

void func_sc03_024_8017C624(u8 *arg0, s16 arg1, s32 arg2) {
    SpawnEffect(0x2C, arg0, 0, arg1, 0, arg2, 0);
}

void func_sc03_024_8017C664(u8 *arg0) {
    D_sc03_024_8018AA04[AF(arg0, u16, 2)]();
}

void func_sc03_024_8017C6A0(u8 *arg0) {
    WMtx m;
    SV v;
    s32 temp_s0;
    s32 temp_v0;
    void *temp_s1;

    temp_s0 = AF(arg0, s32, 0x34);
    temp_v0 = AllocSprite16To3E();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        temp_s1 = arg0 + 4;
        ObjLocalToWorld16(temp_s0, (s32) temp_s1);
        AF(temp_v0, s16, 0x10) = GetCameraPitch();
        AF(temp_v0, s16, 0x12) = GetCameraHeading();
        RotMatrix(temp_v0 + 0x10, &m);
        ApplyMatrixSV(&m, (s32) &D_sc03_024_8018AA1C, &v);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + v.vx);
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + v.vy);
        AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) + v.vz);
        PosToSVec((s32) temp_s1, &v);
        ProjectPointOtz(&v, &v);
        SVecToPos(&v, (s32) temp_s1);
        InitSpriteKind1(temp_v0, (s32) &D_sc03_024_8018A9F8, 0x280, 0x100);
        AF(temp_v0, u8, 0x27) = 0x80;
        AF(temp_v0, u16, 0x2C) = AF(arg0, u16, 0xE);
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        AF(arg0, s32, 0x10) = 0;
        func_sc03_024_8017CE10((s32) arg0, AF(arg0, s32, 0x2C), 0x8F);
        PlaySe((u16) D_sc03_024_8018A960[AF(arg0, s32, 0x2C)]);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc03_024_8017C814(u8 *arg0) {
    u8 *p = AF(arg0, u8 *, 0x20);
    s16 t;
    u8 unused[8];

    if (AF(arg0, s32, 0x1C) & 1) {
        AF(p, s32, 4) |= 0x80000000;
    } else {
        AF(p, s32, 4) &= 0x7FFFFFFF;
    }
    AF(arg0, s32, 0x1C)++;
    AF(arg0, s32, 0x10) += 0x6C000;
    t = AF(p, u16, 0x1A) + AF(arg0, u16, 0x12);
    AF(p, s16, 0x1A) = t;
    AF(p, s16, 0x18) = t;
    if (t > 0x1000) {
        AF(p, s16, 0x1A) = 0x1000;
        AF(p, s16, 0x18) = 0x1000;
        SetObjTimer(arg0, 0);
        func_sc03_024_8017D5F8((s32) arg0, AF(arg0, s32, 0x2C), 0);
        SetObjTimer(arg0, 0);
        AF(arg0, u16, 2)++;
    }
}

void func_sc03_024_8017C8FC(u8 *arg0) {
    s32 t;
    s32 v;
    u8 *s2;
    u8 *p;

    t = AF(arg0, s32, 0x1C);
    s2 = AF(arg0, u8 *, 0x20);
    if (t < 0x100) {
        if (!(t & 0xF)) {
            func_sc03_024_8017CE10((s32) arg0, AF(arg0, s32, 0x2C), 0xF);
            v = AF(arg0, s32, 0x1C);
            if (!(v & 0xF)) {
                v = v << 15;
                func_sc03_024_8017D098((s32) arg0, AF(arg0, s32, 0x2C), v);
                func_sc03_024_8017D098((s32) arg0, AF(arg0, s32, 0x2C), v | 1);
                func_sc03_024_8017D098((s32) arg0, AF(arg0, s32, 0x2C), v | 2);
                func_sc03_024_8017D098((s32) arg0, AF(arg0, s32, 0x2C), v | 3);
                func_sc03_024_8017D098((s32) arg0, AF(arg0, s32, 0x2C), v | 4);
                func_sc03_024_8017D098((s32) arg0, AF(arg0, s32, 0x2C), v | 5);
                func_sc03_024_8017D098((s32) arg0, AF(arg0, s32, 0x2C), v | 6);
                func_sc03_024_8017D098((s32) arg0, AF(arg0, s32, 0x2C), v | 7);
            }
        }
        if (AF(arg0, s32, 0x1C) & 1) {
            AF(s2, s32, 4) |= 0x80000000;
        } else {
            AF(s2, s32, 4) &= 0x7FFFFFFF;
        }
        AF(arg0, s32, 0x1C)++;
        return;
    }
    for (p = (u8 *) &g_Effects; p < (u8 *) &g_Effects + 0xA50; p += 0x58) {
        if (*(u16 *) p == 0x2E) {
            FreeEffect(p);
        }
    }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0x1C7); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0x38E); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0x555); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0x71C); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0x8E3); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0xAAA); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0xC71); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0xE38); }
    SetObjTimer(arg0, 0x20);
    PlaySe(D_sc03_024_8018A974[AF(arg0, s32, 0x2C)][0]);
    AF(arg0, u16, 2)++;
}

void func_sc03_024_8017CC44(u8 *arg0) {
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    if (AF(arg0, s32, 0x1C) & 1) {
        AF(temp_a0, s32, 4) |= 0x80000000;
    } else {
        AF(temp_a0, s32, 4) &= 0x7FFFFFFF;
    }
    if (TickObjTimer((s32) arg0) != 0) {
        func_sc03_024_8017DD7C();
        AF(arg0, u16, 2)++;
    }
}

void func_sc03_024_8017CCC4(u8 *arg0) {
    u8 *p = AF(arg0, u8 *, 0x20);
    if (AF(arg0, s32, 0x1C) & 1) {
        AF(p, s32, 4) |= 0x80000000;
    } else {
        AF(p, s32, 4) &= 0x7FFFFFFF;
    }
    AF(arg0, s16, 0x24) = 3;
    AF(arg0, s32, 0x1C)++;
}

void func_sc03_024_8017CD10(u8 *arg0) {
    u8 *p;
    s16 t;
    s16 s;
    s16 c;

    p = AF(arg0, u8 *, 0x20);
    if (AF(arg0, s32, 0x1C) & 1) {
        AF(p, s32, 4) |= 0x80000000;
    } else {
        AF(p, s32, 4) &= 0x7FFFFFFF;
    }
    t = (AF(p, u16, 0x12) + 0x80) & 0xFFF;
    AF(p, u16, 0x12) = t;
    if (t == 0 || t == 0x800) {
        c = AF(arg0, s16, 0x24);
        if (c != 0) {
            AF(arg0, s16, 0x24) = c - 1;
        }
    }
    s = AF(p, u16, 0x1A) - 0x40;
    AF(p, u16, 0x1A) = s;
    AF(p, u16, 0x18) = s;
    if (s < 0) {
        func_sc03_024_8017CE10((s32) arg0, AF(arg0, s32, 0x2C), 0x8F);
        PlaySe((u16) D_sc03_024_8018A988[AF(arg0, s32, 0x2C)]);
        FreeEffect((s32) arg0);
    }
    AF(arg0, s32, 0x1C) = AF(arg0, s32, 0x1C) + 1;
}

void func_sc03_024_8017CE10(s32 arg0, s32 arg1, s32 arg2) {
    SpawnEffect(0x2D, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ arg1, /* extra? */ arg2);
}

void func_sc03_024_8017CE54(u8 *arg0) {
    D_sc03_024_8018AA24[AF(arg0, u16, 2)]();
}

void func_sc03_024_8017CE90(u8 *arg0) {
    u8 unused[0x28];
    s32 o;
    s32 v;

    o = AllocSprite16To3E();
    AF(arg0, s32, 0x20) = o;
    if (o != 0) {
        func_8001CD04(o, &D_sc03_024_801C11B0);
        AF(o, s32, 4) |= 0x50000000;
        SetShapeCircle(&D_sc03_024_801C11B0, 0x50);
        AF(arg0, s32, 0x10) = 0;
        if (AF(arg0, s32, 0x30) & 0x80) {
            *(s32 *) &D_sc03_024_801C11B0 = 0xFFFFFF;
            AF(o, s16, 0x1A) = 0x80;
            AF(o, s16, 0x18) = 0x80;
            AF(arg0, s32, 0x14) = 0x80;
        } else {
            D_sc03_024_801C11B0 = D_sc03_024_8018A924[AF(arg0, s32, 0x2C)];
            AF(arg0, s32, 0x14) = 0x20;
        }
        D_sc03_024_801C11B4 = 0;
        D_sc03_024_801C11B5 = 0;
        D_sc03_024_801C11B6 = 0;
        AF(arg0, s32, 0x30) &= 0x7F;
        AF(o, s16, 0x2C) = AF(arg0, s16, 0xE) + 0x10;
        AF(arg0, s16, 2)++;
        return;
    }
    FreeEffect(arg0);
}

void func_sc03_024_8017CFBC(u8 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    u16 temp_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    AF(&D_sc03_024_801C11B0, u8, 0) = EaseValueFrac((s32) AF(&D_sc03_024_801C11B0, u8, 0), 0, 0xA, 1);
    AF(&D_sc03_024_801C11B0, u8, 1) = EaseValueFrac((s32) AF(&D_sc03_024_801C11B0, u8, 1), 0, 0xA, 1);
    AF(&D_sc03_024_801C11B0, u8, 2) = EaseValueFrac((s32) AF(&D_sc03_024_801C11B0, u8, 2), 0, 0xA, 1);
    temp_v1 = AF(arg0, s32, 0x10) + AF(arg0, s32, 0x14);
    AF(arg0, s32, 0x10) = temp_v1;
    temp_v0 = AF(temp_s1, u16, 0x1A) + temp_v1;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    temp_v1_2 = AF(arg0, s32, 0x30);
    AF(arg0, s32, 0x30) = (s32) (temp_v1_2 - 1);
    if (temp_v1_2 == 0) {
        FreeEffect((s32) arg0);
    }
}

void func_sc03_024_8017D098(s32 arg0, s32 arg1, s32 arg2) {
    SpawnEffect(0x2E, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ arg1, /* extra? */ arg2);
}

void func_sc03_024_8017D0DC(u8 *arg0) {
    D_sc03_024_8018AA34[AF(arg0, u16, 2)]();
}

void func_sc03_024_8017D118(s32 arg0) {
    u8 unused[8];
    s32 r;

    r = rand();
    AF(arg0, s16, 0x10) = 0x200;
    AF(arg0, s16, 0x12) = 0x200;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x14) = 0;
    AF(arg0, s16, 0x24) = (r & 0x1FF) + (AF(arg0, u8, 0x30) << 9);
    AF(arg0, u32, 0x30) >>= 8;
    SetObjTimer(arg0, rand() & 7);
    AF(arg0, u16, 2)++;
}

void func_sc03_024_8017D194(s32 arg0) {
    if (TickObjTimer(arg0) != 0) {
        SetObjTimer(arg0, 8);
        AF(arg0, s16, 0x28) = 0x20;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc03_024_8017D1E0(u8 *arg0) {
    SV a;
    SV b;
    s32 d;
    s32 t;

    if (AF(arg0, s16, 0x28) != 0) {
        if (--AF(arg0, s16, 0x28) == 0) {
            PlaySe((u16) D_sc03_024_8018A99C[AF(arg0, s32, 0x2C)]);
        }
    }
    t = AF(arg0, s32, 0x30) + 0x6000;
    d = t;
    AF(arg0, s32, 0x14) += t;
    AF(arg0, s16, 0x10) -= AF(arg0, s16, 0x16);
    if (AF(arg0, s16, 0x10) < 0) {
        AF(arg0, s16, 0x10) = 0;
    }
    if (TickObjTimer(arg0) != 0) {
        AF(arg0, s32, 0x18) += d;
        AF(arg0, s16, 0x12) -= AF(arg0, s16, 0x1A);
        if (AF(arg0, s16, 0x12) < 0) {
            AF(arg0, s16, 0x12) = 0;
        }
    }
    a.vx = 0;
    a.vy = AF(arg0, s16, 0x10);
    a.vz = 1;
    b.vx = 0;
    b.vy = AF(arg0, s16, 0x12);
    b.vz = 1;
    func_sc03_024_8017D318(arg0, &a, &b, AF(arg0, s16, 0x24));
    if (AF(arg0, s32, 0x10) == 0) {
        FreeEffect(arg0);
    }
}

void func_sc03_024_8017D318(u8 *arg0, SV *a, SV *b, s32 ang) {
    WMtx m;
    SV4 *q;

    D_sc03_024_801C1260 = 0x50000000;
    D_sc03_024_801C1250 = D_sc03_024_8018A938[AF(arg0, s32, 0x2C)];
    D_sc03_024_801C1254 = D_sc03_024_8018A94C[AF(arg0, s32, 0x2C)];
    D_sc03_024_801C1258 = D_sc03_024_8018A938[AF(arg0, s32, 0x2C)];
    D_sc03_024_801C125C = D_sc03_024_8018A94C[AF(arg0, s32, 0x2C)];
    SetIdentityRot(&m);
    RotMatrixZ((s16) ang, &m);
    m.t[0] = AF(arg0, s16, 6);
    m.t[1] = AF(arg0, s16, 0xA);
    m.t[2] = 0;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    q = D_sc03_024_801C1230;
    gte_ldv0(a);
    gte_rtv0tr();
    gte_stsv(q);
    gte_ldv0(b);
    gte_rtv0tr();
    gte_stsv(q + 1);
    a->vx -= 2;
    gte_ldv0(a);
    gte_rtv0tr();
    gte_stsv(q + 2);
    b->vx -= 2;
    gte_ldv0(b);
    gte_rtv0tr();
    gte_stsv(q + 3);
    D_sc03_024_801C1234 = AF(arg0, s16, 0xE);
    DrawPrimG4Screen(q);
    a->vx += 4;
    gte_ldv0(a);
    gte_rtv0tr();
    gte_stsv(q + 2);
    b->vx += 4;
    gte_ldv0(b);
    gte_rtv0tr();
    gte_stsv(q + 3);
    D_sc03_024_801C1234 = AF(arg0, s16, 0xE);
    DrawPrimG4Screen(q);
}

void func_sc03_024_8017D5F8(s32 arg0, s32 arg1, s32 arg2) {
    SpawnEffect(0x2F, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ arg1, /* extra? */ arg2);
}

void func_sc03_024_8017D63C(u8 *arg0) {
    D_sc03_024_8018AA40[AF(arg0, u16, 2)]();
}

void func_sc03_024_8017D678(u8 *arg0) {
    s32 pad[10];
    s32 temp_v0;

    temp_v0 = AllocSprite16To3E();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CD04(temp_v0, D_sc03_024_801C11F0);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        SetShapeCircle(D_sc03_024_801C11F0, 0x100);
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        AF(arg0, s32, 0x10) = 0x80;
        AF(temp_v0, s16, 0x2C) = 0x10;
        D_sc03_024_801C11F0[0] = 0xFF;
        D_sc03_024_801C11F1 = 0xFF;
        D_sc03_024_801C11F2 = 0xFF;
        D_sc03_024_801C11F4 = 0;
        D_sc03_024_801C11F5 = 0;
        D_sc03_024_801C11F6 = 0;
        SetObjTimer((s32) arg0, 0xC0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc03_024_8017D75C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x10) + (rsin((AF(arg0, s32, 0x1C) & 0x3F) << 6, arg1, arg2, arg3) / 128);
    AF(temp_s1, s16, 0x1A) = temp_v0;
    AF(temp_s1, s16, 0x18) = temp_v0;
    if (TickObjTimer((s32) arg0) != 0) {
        SetObjTimer((s32) arg0, 0x40);
        PlaySe((*(u16 *)&D_sc03_024_8018A9B0[AF(arg0, s32, 0x2C)]));
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc03_024_8017D804(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x10) + (rsin((AF(arg0, s32, 0x1C) & 0x3F) << 6, arg1, arg2, arg3) / 128);
    AF(temp_s1, s16, 0x1A) = temp_v0;
    AF(temp_s1, s16, 0x18) = temp_v0;
    AF(arg0, s32, 0x10) = (s32) (AF(arg0, s32, 0x10) + 0x20);
    if (TickObjTimer((s32) arg0) != 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc03_024_8017D890(u8 *arg0) {
    s16 temp_v0;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a1, u16, 0x1A) + 0x200;
    AF(temp_a1, u16, 0x1A) = (u16) temp_v0;
    AF(temp_a1, s16, 0x18) = temp_v0;
    if (temp_v0 >= 0x1001) {
        (*(u8 *)&D_sc03_024_801C11F4) = 0xFF;
        (*(u8 *)&D_sc03_024_801C11F5) = 0xFF;
        (*(u8 *)&D_sc03_024_801C11F6) = 0xFF;
        AF(temp_a1, u16, 0x1A) = 0x1000U;
        AF(temp_a1, s16, 0x18) = 0x1000;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc03_024_8017D900(s32 arg0) {
    typedef struct { u8 r, g, b, cd; } Col;
    Col *c = (Col *)D_sc03_024_801C11F0;

    c->r = EaseValueFrac(c->r, 0, 0xA, 1);
    c->b = c->r;
    c->g = c->r;
    c[1] = c[0];
    c[2] = c[0];
    c[3] = c[0];
    if (c->r == 0) {
        FreeEffect(arg0);
    }
}

void func_sc03_024_8017D9C8(s32 arg0) {
    u8 *p;

    for (p = (u8 *) &g_Effects; p < (u8 *) &g_Effects + 0xA50; p += 0x58) {
        if (*(u16 *) p == 0x2B) {
            FreeEffect(p);
        }
        if (*(u16 *) p == 0x2C) {
            (*(u16 *) (p + 2))++;
        }
    }
    PlaySePositional(4, D_sc03_024_8018A974[arg0][0]);
}

void func_sc03_024_8017DA98(s16 arg0, B8 *arg1, s32 arg2) {
    *(B8 *)&D_80126B30 = *arg1;
    D_80126B3A = arg0;
    D_8012750C = arg2;
    SetActionHandler((s32) func_sc03_024_8017DB00);
    D_8011F9C8 = 0;
}

void func_sc03_024_8017DB00(u8 *arg0) {
    D_sc03_024_8018ABC4[AF(arg0, u8, 0x214)]();
}

void func_sc03_024_8017DB3C(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_sc03_024_8017DB74(arg0);
}

typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern s16 g_WallNormal;
extern s16 D_801152B4;
extern s32 TraceMap();
extern s32 CollidePath();

typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;

void func_sc03_024_8017DB74(s32 arg0) {
    if (((s16 *)&D_80126B30)[3] == 0 || StepToward(arg0, &D_80126B30) != 0) {
        NextPhase(arg0);
    }
}

void func_sc03_024_8017DBC4(s32 arg0) {
    SV_8E8A0 p;

    p.x = AF(g_ActiveCamera, s32, 0x3C);
    p.y = AF(g_ActiveCamera, s32, 0x40);
    p.z = AF(g_ActiveCamera, s32, 0x44);
    if ((s16)ActionHelper_1AB0(arg0, &p) == 0) {
        NextPhase(arg0);
    }
}

void func_sc03_024_8017DC28(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x200) = 1;
    NextPhase((s32) arg0, arg1);
}

void func_sc03_024_8017DC4C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        EndScene((s32) arg0);
        SetPlayerMotion((s32) arg0, (s32) &D_sc03_024_8018AA5C);
        StartSeqPlayer();
        (*(u8 *)&D_800B9A11) = 0xC0;
        DisableBgLayers();
        NextPhase((s32) arg0);
    }
}

void func_sc03_024_8017DCC0(u8 *arg0) {
    s32 var;

    if (AF(arg0, u16, 0xB8) & 0x8000) {
        switch ((s16)(D_80126B3A - 2)) {
        case 0: var = 0; break;
        case 1: var = 1; break;
        case 2: var = 2; break;
        case 3: var = 3; break;
        case 4: var = 4; break;
        }
        D_80126B3C = var;
        func_sc03_024_8017C624(arg0, -0x60, var);
        NextPhase(arg0);
    }
}

void func_sc03_024_8017DD74(void) {
}

s32 func_sc03_024_8017DD7C(void) {
    D_80126CF0 = OpenMessage(D_8012750C);
    return NextPhase((s32) &g_Player);
}

void func_sc03_024_8017DDBC(u8 *arg0) {
    if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        AF(arg0, s32, 0x200) = 0x60;
        func_sc03_024_8017D9C8((s32) D_80126B3C);
        NextPhase((s32) arg0);
    }
}

void func_sc03_024_8017DE24(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        SetPlayerMotion((s32) arg0, (s32) &D_sc03_024_8018AB00);
        StopSeqPlayer();
        D_800B9A11 = 0;
        EnableBgLayers();
        NextPhase((s32) arg0);
    }
}

void func_sc03_024_8017DE8C(u8 *arg0) {
    u16 f = AF(arg0, u16, 0xB8);

    if (f & 0x4000) {
        PlaySe(0x445);
    } else if (f & 0x8000) {
        BeginScene(arg0);
        switch ((s16)(D_80126B3A - 2)) {
        case 0:
            SetFlag(0x16, 1);
            SetProgress(0x85);
            break;
        case 1:
            SetFlag(0x17, 1);
            break;
        case 2:
            SetFlag(0x18, 1);
            break;
        case 3:
            SetFlag(0x19, 1);
            break;
        case 4:
            SetFlag(0x1A, 1);
            break;
        }
        D_8011F9C8 = 1;
        ClearActionHandler(arg0);
        NextPhase(arg0);
    }
}

void func_sc03_024_8017DF7C(void) {
}

void func_sc03_024_8017DF84(u8 *obj) {
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
    ot = g_WorldOtTable[D_800B9A02[0]];
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

void func_sc03_024_8017EE64(s32 arg0, SV *arg1, s32 arg2) {
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

void func_sc03_024_8017EF30(u8 *arg0) {
    SV4 v;
    WMtx m;
    u8 *q;
    u8 *o;
    WMtx *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc03_024_8018ABF0, 0x2A);
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

void func_sc03_024_8017F08C(u8 *arg0) {
    D_sc03_024_8018ABFC[AF(arg0, u16, 2)]();
}

void func_sc03_024_8017F0C8(u8 *arg0) {
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

void func_sc03_024_8017F128(StageActor *arg0) {
    u8 *g;

    g = &g_Status;
    if ((GetFlag(D_sc03_024_8018AEC8[arg0->param]) & 0xFF) || (arg0->param == 4 && (u32) GetProgress() < 200)) {
        RejectSpawn(arg0);
        return;
    }
    if (AF(g, u16, 0x1A) < 300 || AF(g, u16, 0x1A) >= 1320) {
        if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc03_024_8018AD9C) != 0) {
            arg0->hitState |= 0x10;
            SetScript(arg0, &D_sc03_024_8018AC04);
            arg0->model->flags |= 0x10;
            D_sc03_024_801C1268 = arg0->origin[0] << 16;
            D_sc03_024_801C126C = AF(arg0, s16, 0x8A) << 16;
            D_sc03_024_801C1270 = AF(arg0, s16, 0x8C) << 16;
            arg0->ext0 = SpawnShadow(arg0);
            arg0->unkFC = 0;
            arg0->timer = 0x10;
            arg0->state++;
        }
    } else if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc03_024_8018ADD0) != 0) {
        AF(arg0, s16, 0xAE) = -4;
        arg0->ext0 = SpawnShadow(arg0);
        arg0->state = 7;
    }
}

void func_sc03_024_8017F2C4(u8 *arg0) {
    s32 r;
    s16 i;

    if (--AF(arg0, s32, 0x1C) == -1) {
        SetScript(arg0, &D_sc03_024_8018AC8C);
        if (++AF(arg0, s16, 0x10A) & 3) {
            if (AF(arg0, s16, 0x104) == 0) {
                r = rand();
                D_sc03_024_801C1274 = (AF(arg0, s16, 0x88) + (((r & 0x7F) << 3) - 0x200)) << 16;
                D_sc03_024_801C127C = (AF(arg0, s16, 0x8C) + (((u32)(r & 0x7F00) >> 5) - 0x200)) << 16;
            } else {
                func_sc03_024_8017FAEC(arg0);
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0xC00;
            }
        } else {
            for (i = 0; i < 2; i++) {
                (&D_sc03_024_801C1274)[i] = (&D_sc03_024_801C1268)[i];
            }
        }
        if (AF(arg0, s16, 0x108) >= 0xD) {
            i = 2;
        } else {
            i = 8;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToward(arg0 + 4, &D_sc03_024_801C1274, AF(AF(arg0, u8 *, 0x20), s16, 0x12), i);
        func_sc03_024_8017FA78(arg0, (s16)(-3 - AF(arg0, s16, 0x104)), 0x50);
        if (AF(arg0, s16, 0x104) != 0) {
            SpawnEffect(2, arg0, 0, 0, 0, 2, 0);
        }
        AF(arg0, s16, 0x108) = 0;
        AF(arg0, s16, 2)++;
    } else if (AF(arg0, s16, 0x102) != 0) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, AF(arg0, s16, 0x102));
    }
}

void func_sc03_024_8017F4C8(s32 a) {
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
        func_sc03_024_8017FBC8(a);
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
        if (!(AF(a, s32, 0x1C) & 3) && DistSq(a + 4, &D_sc03_024_801C1274) < 0x900) {
            AF(a, s32, 0x1C) = 1;
        }
        v = AF(a, s16, 0x106);
        if (v == 0) {
            AF(AF(a, s32, 0x20), s16, 0x12) += TurnStepToward(a + 4, &D_sc03_024_801C1274, AF(AF(a, s32, 0x20), s16, 0x12), 8);
            func_sc03_024_8017FA78(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        } else {
            AF(AF(a, s32, 0x20), s16, 0x12) += v;
            func_sc03_024_8017FA78(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
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
        SetScript(a, &D_sc03_024_8018AC04);
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
            p = &D_sc03_024_8018AE6C;
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
        func_sc03_024_8017FA78(a, -15, 0);
        func_sc03_024_8017FAEC(a);
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
                func_sc03_024_8017FAEC(a);
                if (AF(a, s16, 0x104) == 0) {
                    AF(AF(a, s32, 0x20), s16, 0x12) = HeadingToTarget(a) - 0x800;
                    go = 1;
                }
                AF(a, s16, 0x104) = k;
                func_sc03_024_8017FA78(a, -7 - k, 0);
            }
        }
    }
    if (go) {
        SpawnEffect(2, a, 0, 0, 0, 2, 0);
    }
}

void func_sc03_024_8017F8BC(u8 *arg0) {
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
        SetScript(arg0, &D_sc03_024_8018AC04);
        AF(arg0, s16, 0x104) = 0;
        AF(arg0, s16, 0x102) = 0xA;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
        FreeShadow(AF(arg0, u8 *, 0xCC));
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc03_024_8017FA3C(StageActor *arg0) {
    D_sc03_024_8018AED8[arg0->state]();
}

void func_sc03_024_8017FA78(u8 *arg0, s32 arg1, s32 arg2) {
    s32 w;

    AngleToVec2(&w, AF(AF(arg0, void *, 0x20), s16, 0x12), (s16)arg1 << 4);
    AF(arg0, s32, 0x10) = (s16)w << 12;
    AF(arg0, s32, 0x18) = (w >> 16) << 12;
    if ((s16)arg2 != 0) {
        AF(arg0, s32, 0x1C) = (s16)arg2;
    }
}

void func_sc03_024_8017FAEC(u8 *arg0) {
    s32 a;
    s32 i;
    s32 r;
    s32 x;
    s32 z;
    s32 pad[2];
    a = (HeadingTo(&g_PlayerPosX, &D_sc03_024_801C1268) >> 7) & 0x18;
    i = D_sc03_024_8018AE04[a | ((HeadingTo(arg0 + 4, &D_sc03_024_801C1268) >> 9) & 7)];
    r = rand();
    x = AF(arg0, s16, 0x88) + D_sc03_024_8018AE24[i].x - 0x100;
    D_sc03_024_801C1274 = (x + ((r & 0x7F) << 2)) << 16;
    z = AF(arg0, s16, 0x8C) + D_sc03_024_8018AE24[i].y - 0x100;
    D_sc03_024_801C127C = (z + ((u32)(r & 0x7F00) >> 6)) << 16;
}

void func_sc03_024_8017FBC8(u8 *o) {
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

void func_sc03_024_8017FDDC(s32 arg0) {
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
            SetScript(arg0, (s32) &D_sc03_024_8018ACF4);
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

void func_sc03_024_8017FEB0(s32 arg0, s32 arg1) {
    s32 v[4];
    s32 temp_v0;
    u8 *temp_v1;

    IsEventDone(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (MoveCollide(arg0) & 0x2000)) {
        SpawnEffect(2, arg0, 0, 0, 0, 0, 0);
        SetScript(arg0, (s32) &D_sc03_024_8018AC8C);
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

void func_sc03_024_8017FF80(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        SetFlag((s32) D_sc03_024_8018AEC8[arg0->param], 1);
        FreeActor(arg0);
    }
}

void func_sc03_024_8017FFD8(u8 *arg0) {
    s32 temp_v0;
    u8 *g = &g_Status;

    if ((AF(arg0, s16, 0x100) == 0) && (AF(arg0, u16, 0x5E) != 0)) {
        StartEvent((s32) arg0, (s32) &D_sc03_024_8018AEA8);
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

void func_sc03_024_801800D0(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        arg0->state = 7;
    }
}

void func_sc03_024_80180110(u8 *arg0) {
    D_sc03_024_8018AF4C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_024_8018014C(u8 *arg0) {
    func_sc03_024_80180368();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_024_80180190(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc03_024_801801B4(u8 *arg0) {
    D_sc03_024_8018AF54[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_024_801801F0(u8 *arg0) {
    func_sc03_024_80180390();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 RoomExitStepFlag144(u8 *arg0) {
    s32 temp_v0;

    GetProgress();
    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        if (!(GetFlag(0x144) & 0xFF)) {
            SetFlag(0x144, 1);
            func_800D0C48(1);
        }
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_024_801802CC(void) {
    func_800D1EBC();
}

void func_sc03_024_801802EC(u8 *arg0) {
    D_sc03_024_8018AF60[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_024_80180328(u8 *arg0) {
    func_sc03_024_801803B8();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_024_80180368(void) {
    StartPlayerActionScript((s32) &D_sc03_024_8018AFE0, 0x01000000);
}

void func_sc03_024_80180390(void) {
    StartPlayerActionScript((s32) &D_sc03_024_8018AFF0, 0x01000000);
}

void func_sc03_024_801803B8(void) {
    StartPlayerActionScript((s32) &D_sc03_024_8018B004, 0x01000000);
}

void func_sc03_024_801803E0(u8 *arg0) {
    D_sc03_024_8018B014[AF(arg0, u8, 0x216)]();
}

void func_sc03_024_8018041C(u8 *arg0, s32 arg1) {
    func_800D0C48(1, arg1);
    func_sc03_024_80180C2C();
    AF(arg0, s32, 0x200) = 0x1E;
    PlaySePositional(4, 0x8E4);
    BumpSub2Copy((s32) arg0);
}

extern s32 func_sc03_024_80181040(s32 arg0);
extern void func_sc03_024_80180B94();
extern u8 D_sc03_024_8018B028;
extern void PlacePlayer();
extern u8 g_Actors[];
extern void DespawnActor();
extern u8 g_Props[];
extern u8 D_sc03_024_8018B184;
extern void func_sc03_024_801856BC(StageActor *arg0);
extern void func_sc03_024_80182838(s32 arg0);
extern s32 func_sc03_024_801860FC(void);
extern s32 func_sc03_024_80186120(s32 arg0);

void func_sc03_024_8018046C(u8 *o) {
    s32 i;
    u8 *p;
    s32 t;

    if (AF(o, s16, 0xA) > 0) {
        AF(o, s16, 0xA) = 0;
        t = AF(o, s32, 0x200) - 1;
        AF(o, s32, 0x200) = t;
        if (t == -1) {
            func_sc03_024_80181040(1);
            func_sc03_024_80180B94();
            PlacePlayer(&D_sc03_024_8018B028);
            for (i = 0; i < 0x60; i++) {
                if (AF(g_Actors + i * 0x10C, u16, 0) == 0x307) {
                    DespawnActor(g_Actors + i * 0x10C);
                }
                if (AF(g_Actors + i * 0x10C, u16, 0) == 0x325) {
                    DespawnActor(g_Actors + i * 0x10C);
                }
            }
            for (i = 0; i < 0x80; i++) {
                if (AF(g_Props + i * 0x38, u16, 0) == 0x65) {
                    FreeProp(g_Props + i * 0x38);
                }
            }
            BumpSub2Copy(o);
        }
    }
}

extern u8 D_sc03_024_8018B408[];
extern u8 D_sc03_024_8018B318;
extern u8 *AllocSpriteInRange();
extern void func_8001CD50();
extern u8 D_sc03_024_801C13B4;
extern u8 D_sc03_024_801C13B5;
extern u8 D_sc03_024_801C13B6;
extern u8 D_sc03_024_801C13C4;
extern u8 D_sc03_024_801C13C5;
extern u8 D_sc03_024_801C13C6;
extern u8 D_sc03_024_801C13D5;
extern u8 D_sc03_024_801C13D6;
extern u8 D_sc03_024_801C13D8;
extern u8 D_sc03_024_801C13D9;
extern u8 D_sc03_024_801C13DA;
extern u8 D_sc03_024_801C13DC;
extern u8 D_sc03_024_801C13DD;
extern u8 D_sc03_024_801C13DE;
extern u8 D_sc03_024_801C13E4;

extern S12 D_sc03_024_801BBFBC[];
extern u8 D_800D387C;
extern u8 D_800D3888;
extern void StartSpriteAnim();
extern void RotateVectorY();
extern s32 D_sc03_024_8018B0BC[];

extern u8 D_sc03_024_801B0DC8;
extern u8 D_sc03_024_801B1458;
extern u8 D_sc03_024_801B1E48;

extern void func_8001C810();
extern void func_800D20C0();
extern void func_800D23D0();
extern s32 D_80126B60;
extern s32 D_80126B64;
extern u8 D_sc03_024_8018B7A4;
extern u8 D_sc03_024_801BBF94;
extern u8 D_sc03_024_8018B7D8;
extern B6C D_sc03_024_801C1458;
extern u8 D_sc03_024_801C1418;
extern u8 D_sc03_024_801C1419;
extern u8 D_sc03_024_801C141A;
extern u8 D_sc03_024_801C141C;
extern u8 D_sc03_024_801C141D;
extern u8 D_sc03_024_801C141E;
extern s32 D_sc03_024_801C14D8[];
extern s32 AllocActorSprite();
extern void InitSpriteKind2();
extern void func_sc03_024_801826B4();
extern u8 D_sc03_024_801B9EAC;
extern u8 D_sc03_024_8018B118;
extern u8 D_sc03_024_8018B124;
extern u8 D_sc03_024_8018B154;
extern u8 D_sc03_024_8018B174;
extern u8 D_sc03_024_8018B758;
extern void RotTransSV();
extern u8 *AllocPrim();
extern u16 GetTPage();
extern void SetDrawMode();
extern void AddPrim();

typedef void (*StepFn)(void);

extern s32 TestPadAll();

extern s32 D_sc03_024_801C1280[];
extern s32 D_sc03_024_801C1284;
extern s16 D_sc03_024_8018B084[];
extern u16 D_800B99DA;
extern s32 SpawnPropAt();
extern s32 func_sc03_024_80183094();
extern u8 D_sc03_024_8018B030;
extern void StartCameraShake();
extern u8 D_sc03_024_8018B6C8;
extern u8 D_sc03_024_801B92C8;

void func_sc03_024_80180580(u8 *o) {
    SV8 v;
    s32 i;

    if (AF(o, s16, 0xA) >= -0x82) {
        func_sc03_024_80183094();
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = 0xC00;
        EndScene(o);
        SetPlayerMotion(o, &D_800D5904);
        StartFace(o, 0x20);
        StartCameraShake(&D_sc03_024_8018B030);
        AF(o, s32, 0x200) = 0x10;
        PosToSVec(o + 4, &v);
        v.y -= 0x20;
        for (i = 0; i < 20; i++) {
            SpawnPropAt(0x64, &v);
        }
        PlaySe(0x949);
        BumpSub2Copy(o);
    }
}

void func_sc03_024_80180660(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = GetProgress();
    EndScene(arg0);
    if (temp_s0 >= 0x460) {
        temp_v0 = AF(arg0, s32, 0x200) - 1;
        AF(arg0, s32, 0x200) = temp_v0;
        if (temp_v0 == -1) {
            SetPlayerMotion(arg0, (s32) &D_sc03_024_8018AF6C);
            BumpSub2Copy(arg0);
        }
    }
}

void func_sc03_024_801806D4(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        BeginScene((s32) arg0);
        NextPlayerActionHandler((s32) arg0);
    }
}

void func_sc03_024_80180720(void) {
    StartPlayerActionScript((s32) &D_sc03_024_8018B00C, 0x01000000);
}

s32 func_sc03_024_80180748()
{
    return SetActionHandler((s32) func_sc03_024_80180770);
}

void func_sc03_024_80180770(u8 *arg0) {
    D_sc03_024_8018B044[AF(arg0, u8, 0x214)]();
}

void func_sc03_024_801807AC(s32 arg0) {
    EndScene(arg0);
    SetPlayerMotion(arg0, (s32) &D_800D5904);
    StartFace(arg0, 0x20);
    NextPhase(arg0);
    func_sc03_024_80180800(arg0);
}

s32 func_sc03_024_80180800(s32 arg0) {
    NextPhase(arg0);
    return ClearActionHandler(arg0);
}

void func_sc03_024_80180830(void) {
}

s32 func_sc03_024_80180838()
{
    return SetActionHandler((s32) func_sc03_024_80180860);
}

void func_sc03_024_80180860(u8 *arg0) {
    D_sc03_024_8018B050[AF(arg0, u8, 0x214)]();
}

void func_sc03_024_8018089C(s32 arg0) {
    EndScene(arg0);
    SetPlayerMotion(arg0, (s32) &D_sc03_024_8018AF6C);
    NextPhase(arg0);
    func_sc03_024_801808E4(arg0);
}

s32 func_sc03_024_801808E4(s32 arg0) {
    NextPhase(arg0);
    return ClearActionHandler(arg0);
}

void func_sc03_024_80180914(void) {
}

s32 func_sc03_024_8018091C()
{
    return SetActionHandler((s32) func_sc03_024_80180944);
}

void func_sc03_024_80180944(u8 *arg0) {
    D_sc03_024_8018B05C[AF(arg0, u8, 0x214)]();
}

void func_sc03_024_80180980(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_sc03_024_801809B8(arg0);
}

s32 func_sc03_024_801809B8(s32 arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    NextPhase(arg0);
    return ClearActionHandler(arg0);
}

void func_sc03_024_801809F0(void) {
}

s32 func_sc03_024_801809F8()
{
    return SetActionHandler((s32) func_sc03_024_80180A20);
}

void func_sc03_024_80180A20(u8 *arg0) {
    D_sc03_024_8018B068[AF(arg0, u8, 0x214)]();
}

void func_sc03_024_80180A5C(s32 arg0) {
    EndScene(arg0);
    SetPlayerMotion(arg0, (s32) &D_800D5880);
    NextPhase(arg0);
    func_sc03_024_80180AA4(arg0);
}

s32 func_sc03_024_80180AA4(s32 arg0) {
    s32 var_v0;

    var_v0 = AF(arg0, u16, 0xB8) & 0x8000;
    if (var_v0 != 0) {
        BeginScene();
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_sc03_024_80180AF4(void) {
}

void func_sc03_024_80180AFC(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x238;
    D_8012696A = 0x200;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_024_80180CCC, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_024_80180CCC((s32) &g_Camera);
}

void func_sc03_024_80180B94(s32 arg0) {
    g_CameraProjTarget = 0x1F4;
    g_CameraDistTarget = 0x5DC;
    g_CameraAngleTarget = 0x238;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_024_80180CCC, 1);
    SnapCamera((s32) &g_Camera);
    func_sc03_024_80180CCC((s32) &g_Camera);
}

void func_sc03_024_80180C2C(s32 arg0) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0xFA0;
    g_CameraAngleTarget = -0xE3;
    D_8012696A = 0x600;
    g_CameraOfsTarget = -0x170;
    D_8012696C = 0;
    D_80126978 = -0x240;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_024_80180CCC, 2);
    SnapCamera((s32) &g_Camera);
    func_sc03_024_80180CCC((s32) &g_Camera);
}

void func_sc03_024_80180CCC(s32 arg0) {
    D_sc03_024_8018B074[AF(arg0, u8, 4)]();
}

void func_sc03_024_80180D08(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc03_024_8018B080)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    func_sc03_024_80180EA8((s32) arg0, (s32) &v);
}

void func_sc03_024_80180DA8(u8 *o) {
    SV8 v;

    if (GetObjPadPressed(&g_Player) & 3) {
        o[5] = (o[5] + 1) & 1;
        AF(o, s32, 0x14) = D_sc03_024_8018B084[o[5]];
    }
    v = *(SV8 *) &g_CameraFocus;
    if (v.y < -0x220) {
        v.y = -0x220;
    }
    func_sc03_024_80180EA8(o, &v);
}

void func_sc03_024_80180E60(u8 *arg0) {
    B8 v;

    v = *(B8 *)&D_sc03_024_801BFD88;
    func_sc03_024_80180EA8(arg0, (s16 *) &v);
}

void func_sc03_024_80180EA8(u8 *arg0, u8 *arg1) {
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

s32 func_sc03_024_80181040(s32 arg0) {
    return func_8013B7F4(D_sc03_024_8018B088[arg0], 0);
}

s32 func_sc03_024_80181070(void) {
    return RequestLoad(0, 0, (s32) &D_800AEE88, 0, /* extra? */ 0);
}

s32 func_sc03_024_801810A4(void) {
    return RequestLoad(0, 0, (s32) &D_800AEE90, 0, /* extra? */ 0);
}

s32 func_sc03_024_801810D8(void) {
    return RequestLoad(0, 0, (s32) &D_800AEE98, 0, /* extra? */ 0);
}

void func_sc03_024_8018110C(void) {
    UpdateClockTint();
    func_800D06E8();
}

void func_sc03_024_80181134(StageActor *arg0) {
    D_sc03_024_8018B090[arg0->state]();
}

void func_sc03_024_80181170(StageActor *arg0, s32 arg1) {
    NextState(arg0, arg1);
}

void func_sc03_024_80181190(StageActor *arg0) {
    if ((D_80126B66 < 0x681) && (D_80126B62 >= -0x4BF)) {
        func_sc03_024_80180720();
        NextState(arg0);
    }
}

void func_sc03_024_801811EC(void) {
}

void func_sc03_024_801811F4(StageActor *arg0) {
    D_sc03_024_8018B09C[arg0->state]();
}

void func_sc03_024_80181230(StageActor *o) {
    s32 *d;
    ModelObj *p;

    p = (u8 *) AllocActorSprite();
    d = D_sc03_024_801C1280;
    o->model = p;
    if (p != 0) {
        func_8001CD50(p, d);
        SetShapeCircle(d, 0x90);
        d[0] = 0xC0;
        p->rot.vx = 0x400;
        D_sc03_024_801C1284 = 0;
        ((s32 *) p)[1] |= 0x50000000;
        NextState(o);
    }
}

void func_sc03_024_801812C4(StageActor *o) {
    u8 *w = &D_800AF630;
    s32 *d = D_sc03_024_801C1280;
    SV8 v;
    s32 i;

    if (D_800B99DA & 1) {
        d[0] = 0xC0;
    } else {
        d[0] = 0xB0;
    }
    if (!(AF(w, u16, 0xA3AA) & 3)) {
        v.y = (u16)o->pos[1].h.i;
        for (i = 0; i < 2; i++) {
            v.x = (s16) (o->pos[0].h.i - 0x10) + (rand() & 0x1F);
            v.z = (s16) (o->pos[2].h.i - 0x10) + (rand() & 0x1F);
            SpawnPropAt(0x65, &v);
        }
    }
}

void func_sc03_024_80181394(u8 *arg0) {
    D_sc03_024_8018B0A4[AF(arg0, u16, 2)]();
}

void func_sc03_024_801813D0(u8 *o) {
    u8 unused[16];
    u8 *a;
    s32 r0, r1;

    a = AF(o, u8 *, 0x20);
    AF(a, u8 *, 0x20) = &D_800D387C;
    AF(a, u8, 0x27) = 0x9C;
    AF(a, u8, 0x24) = AF(a, u8, 0x25) = AF(a, u8, 0x26) = 0x40;
    AF(a, s32, 4) |= 0x60000000;
    StartSpriteAnim(AF(o, u8 *, 0x20), o + 0x24, &D_800D3888);
    AF(o, s32, 0x14) = 0xFFFC0000;
    AF(o, s32, 0x1C) = 0x3C;
    AF(o, s32, 0x10) = AF(o, s32, 4);
    AF(o, s32, 0x18) = AF(o, s32, 0xC);
    r0 = rand();
    r1 = rand();
    AF(a, s16, 0x10) = (r0 & 3) * 0x400 + (r1 & 3) * 0xFA + (rand() & 3) * 0x44;
    AF(a, s16, 0x18) = AF(a, s16, 0x1A) = ((rand() & 3) << 11) + 0x1000;
    AF(o, s16, 0x2E) = (rand() & 3) + 1;
    AF(o, u16, 2)++;
}

void func_sc03_024_80181500(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_v0_3;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x2C) = (u16) (AF(arg0, u16, 0x2C) + AF(arg0, u16, 0x2E));
    temp_v0 = AF(temp_s1, u16, 0x10) + 0x71;
    AF(temp_s1, u16, 0x10) = (u16) temp_v0;
    var_v1 = (s16) AF(arg0, u16, 0x2C) * rsin((s32) temp_v0, arg1, arg2, arg3);
    if (var_v1 < 0) {
        var_v1 += 0xFFF;
    }
    AF(arg0, s16, 6) = (s16) (AF(arg0, u16, 0x12) + (var_v1 >> 0xC));
    var_v1_2 = (s16) AF(arg0, u16, 0x2C) * rcos((s32) (s16) AF(temp_s1, u16, 0x10));
    if (var_v1_2 < 0) {
        var_v1_2 += 0xFFF;
    }
    AF(arg0, s16, 0xE) = (s16) (AF(arg0, u16, 0x1A) + (var_v1_2 >> 0xC));
    temp_v0_2 = AF(arg0, s32, 0x14) + 0xFFFF4000;
    AF(arg0, s32, 0x14) = temp_v0_2;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + temp_v0_2);
    temp_v0_3 = AF(temp_s1, u16, 0x1A) + 0xCC;
    AF(temp_s1, u16, 0x1A) = temp_v0_3;
    AF(temp_s1, u16, 0x18) = temp_v0_3;
    if (!(AF(arg0, s32, 0x1C) & 3)) {
        StepSpriteAnim((s32) AF(arg0, void *, 0x20), (s32) (arg0 + 0x24));
    }
    temp_v0_4 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_4;
    if (temp_v0_4 == -1) {
        FreeProp((s32) arg0);
    }
}

void func_sc03_024_8018162C(u8 *arg0) {
    D_sc03_024_8018B0AC[AF(arg0, u16, 2)]();
}

void func_sc03_024_80181668(u8 *o) {
    V3 v;
    u8 *a;
    s32 r0, r1;
    s16 t;

    a = AF(o, u8 *, 0x20);
    AF(a, u8 *, 0x20) = &D_800D387C;
    AF(a, u8, 0x27) = 0x9C;
    AF(a, s16, 0x18) = AF(a, s16, 0x1A) = 0x4000;
    AF(a, u8, 0x24) = 0x40;
    AF(a, u8, 0x26) = AF(a, u8, 0x25) = 0x30;
    AF(a, s32, 4) |= 0x50000000;
    StartSpriteAnim(AF(o, u8 *, 0x20), o + 0x24, &D_800D3888);
    r0 = rand();
    r1 = rand();
    t = (r0 & 3) * 0x400 + (r1 & 3) * 0xFA + (rand() & 3) * 0x44;
    D_sc03_024_8018B0BC[0] = 0xFFFC0000 - ((rand() & 0xF) << 14);
    RotateVectorY(t, D_sc03_024_8018B0BC - 2, &v);
    AF(o, s32, 0x10) = v.x;
    AF(o, s32, 0x14) = v.y;
    AF(o, s32, 0x18) = v.z;
    AF(o, s32, 0x1C) = 0x1E;
    AF(o, u16, 2)++;
}

void func_sc03_024_801817A8(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) - 0x2000);
    MoveProp();
    if (!(AF(arg0, s32, 0x1C) & 3)) {
        StepSpriteAnim(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24));
    }
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        FreeProp((s32) arg0);
    }
}

void func_sc03_024_8018181C(StageActor *arg0) {
    if ((D_80126B62 >= -0x4C0) || (GetPlayerAction() == 0)) {
        D_sc03_024_8018B0F4[arg0->state](arg0);
    }
}

void func_sc03_024_80181884(StageActor *o) {
    typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
    s32 i;
    Fx24 *p;

    if (g_ClockHour == 7) {
        for (i = 0; i < 4; i++) {
            p = &((Fx24 *) &D_sc03_024_801C12C0)[i];
            AF(p, s16, 0x16) = i;
            func_sc03_024_80181BA0((s32) p);
            if (i & 1) {
                p->done = 1;
            }
        }
        NextState((s32) o);
    }
}

void func_sc03_024_80181914(StageActor *arg0) {
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
            if (((Fx24 *) &D_sc03_024_801C12C0)[j].done == 0) {
                n++;
            }
        }
        if (n == 0) {
            SetState(arg0, 0);
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        p = &((Fx24 *) &D_sc03_024_801C12C0)[i];
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
                    func_sc03_024_80181B50((s32) p);
                }
            }
            func_sc03_024_80181C5C(p);
        }
    }
}

void func_sc03_024_80181B50(s32 arg0) {
    s32 *var_a0;
    s32 var_v1;

    var_v1 = 0;
    var_a0 = &D_sc03_024_801C12C0;
loop_1:
    var_v1 += 1;
    if (AF(var_a0, s32, 0x1C) != 0) {
        func_sc03_024_80181BA0((s32) var_a0);
        return;
    }
    var_a0 = (s32 *)((u8 *)var_a0 + 0x24);
    if (var_v1 >= 4) {
        return;
    }
    goto loop_1;
}

void func_sc03_024_80181BA0(s32 arg0) {
    s32 r;

    AF(arg0, s32 *, 0) = (s32 *)&D_sc03_024_8018B0C4;
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

void func_sc03_024_80181C5C(u8 *o) {
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

void func_sc03_024_80181D74(StageActor *arg0) {
    D_sc03_024_8018B10C[arg0->state]();
}

void func_sc03_024_80181DB0(StageActor *o) {
    ModelObj *p;
    s32 q;
    s16 t;
    u8 unused[0x20];

    p = AllocActorModel();
    o->model = p;
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    if (o->param == 0) {
        InitModel(p, &D_sc03_024_801B9EAC);
        o->model->rot.vy = 0x800;
        o->pos[2].h.i += 4;
        q = AllocActorSprite();
        o->ext0 = q;
        if (q == 0) {
            RejectSpawn(o);
            return;
        }
        InitSpriteKind2(q, &D_sc03_024_8018B118, 0x2F0, 0x138);
        func_sc03_024_801826B4((s32)o);
        AF(q, s16, 0x18) = 0x2400;
        AF(q, s16, 0x1A) = 0x1C00;
        t = o->model->rot.vy;
        AF(q, s32, 4) |= 0x51000000;
        AF(q, u8, 0x27) = 0xED;
        AF(q, s16, 0x12) = t;
        StartSpriteAnim(q, &D_sc03_024_801C1350, &D_sc03_024_8018B124);
        o->reactive = 1;
        o->params = &D_sc03_024_8018B174;
        o->hitData = (s32)&D_sc03_024_8018B154 | 0x40000000;
        o->hitState = 0x8000;
        AF(o, s16, 0xAE) = -3;
        o->reactMask = 0;
        o->react = 0;
        o->reactOpts |= 2;
        o->workFE = o->pos[1].h.i;
        NextState(o);
    } else {
        func_8001CA1C(p, 0);
        o->model->scale.vx = 0x2C00;
        o->model->scale.vy = 0x3800;
        o->model->unk04 |= 0x71000000;
        o->vel[1] = 0xFFFF0000;
        o->vel[2] = 0x30000;
        o->unkFC = 0;
        SetScript(o, &D_sc03_024_8018B250);
        SetState(o, 9);
    }
}

void func_sc03_024_80181F7C(u8 *arg0) {
    s32 temp_v1;
    u16 v;

    temp_v1 = AF(arg0, s32, 0x1C);
    if (temp_v1 == 0x30) {
        ForceTintRow5();
    } else if (temp_v1 == 0x10) {
        func_sc03_024_8018282C(AF(arg0, s32, 0xD0));
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
    if (D_sc03_024_801C1358 == 0) {
        D_sc03_024_801C1358 = func_sc03_024_80181070();
    }
    if ((TickTimer((s32) arg0) != 0) && (D_sc03_024_801C1358 != 0)) {
        func_sc03_024_801821D4((s32) arg0);
    } else if ((AF(arg0, s32, 0x1C) < 0x48) && !(AF(arg0, u16, 0x84) & 3)) {
        func_sc03_024_80182108((s32) arg0);
    }
    IsEventDone((s32) arg0);
}

s32 func_sc03_024_80182108(s32 arg0) {
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
            AF(temp_v0_2, u16, 0xE) = (u16) (AF(temp_v0_2, u16, 0xE) + 0x28);
            if (temp_v1 >= 0) {
                var_v0 = temp_v1 << 7;
            } else {
                var_v0 = -(temp_v1 << 7);
            }
            AF(temp_v0_2, s16, 0x34) = (s16) (var_v0 + 0x1000);
            AF(temp_v0_2, s32, 0x14) = 0xFFFE0000;
            AF(temp_v0_2, s32, 0x18) = 0x30000;
        }
        var_s0 += 0x18;
        temp_v0 = var_s0 < 0x49;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc03_024_801821D4(StageActor *o) {
    ModelObj *m = o->model;
    StageActor *c;
    u8 *d;

    func_8001CA1C(m, &D_sc03_024_8018B184);
    o->pos[1].h.i -= 0xA0;
    o->pos[2].h.i += 0x10;
    m->scale.vx = 0x2C00;
    m->scale.vy = 0x1C00;
    m->unk04 |= 0x1000000;
    *AF(o, u16 *, 0xCC) = 0;
    o->ext0 = SpawnShadow(o);
    o->vel[1] = 0xFFF80000;
    o->hitState = 0;
    o->timer = 8;
    SetState(o, 3);
    c = o->parent;
    c->model->unk04 |= 0x80000000;
    func_sc03_024_801856BC((s32)c);
    c->hitState = 0;
    SetState(c, 2);
    d = (u8 *)o->ext1;
    if (d != 0) {
        AF(d, s16, 0x2C) = 0;
        func_sc03_024_80182838((s32)d);
    }
    func_sc03_024_801860FC();
    func_sc03_024_80186120((s32)((u8 *)o + 4));
    PlaySoundId(0x86D, 0);
}

s32 func_sc03_024_801822E8(StageActor *arg0) {
    s32 var_v0;

    arg0->model->scale.vx = 0x2C00;
    arg0->model->scale.vy = 0x3800;
    SetScript(arg0, (s32) &D_sc03_024_8018B250);
    arg0->unkFC = 0;
    arg0->timer = 0x10;
    var_v0 = SetState(arg0, 4);
    if ((s32)arg0->ext1 != 0) {
        var_v0 = func_sc03_024_80182884(arg0->ext1);
    }
    return var_v0;
}

s32 func_sc03_024_80182360(s32 arg0) {
    s32 var_v0;

    AF(arg0, s32, 0x1C) = 4;
    StopMotion(arg0);
    var_v0 = SetState(arg0, 5);
    if (AF(arg0, s32, 0xD0) != 0) {
        var_v0 = func_sc03_024_801828B0(AF(arg0, s32, 0xD0));
    }
    return var_v0;
}

s32 func_sc03_024_801823B4(StageActor *arg0) {
    AF(arg0, s32 *, 0x58) = &D_sc03_024_8018B164;
    func_sc03_024_8018264C(arg0);
    return SetState(arg0, 6);
}

s32 func_sc03_024_801823F4(u8 *arg0) {
    return AF(arg0, u16, 2) == 6;
}

void func_sc03_024_80182408(s32 arg0) {
    s32 temp_a0;

    FreeShadow(AF(arg0, s32, 0xCC));
    StopMotion(arg0);
    AF(arg0, s32, 0x14) = 0x80000;
    AF(arg0, u16, 6) = (u16) g_PlayerX;
    AF(arg0, u16, 0xE) = (u16) D_80126B66;
    AF(arg0, s16, 0xDC) = (s16) ((s32) (AF(AF(arg0, void *, 0x20), u16, 0x18) << 0x10) >> 0x13);
    AF(arg0, s16, 0xDE) = (s16) ((s32) (AF(AF(arg0, void *, 0x20), u16, 0x1A) << 0x10) >> 0x13);
    SetState(arg0, 7);
    temp_a0 = AF(arg0, s32, 0xD0);
    if (temp_a0 != 0) {
        FreeProp(temp_a0);
    }
    PlaySoundId(0x86F, 0);
}

s32 func_sc03_024_801824B8(StageActor *arg0) {
    return SetState(arg0, 8);
}

void func_sc03_024_801824D8(void) {
    ResumeClockTint();
}

void func_sc03_024_801824F8(StageActor *arg0) {
    D_sc03_024_8018B3E0[arg0->state]();
}

void func_sc03_024_80182534(StageActor *o) {
    u32 i;
    u8 *t;
    StageActor *p;
    u16 n;
    for (i = 0; i < 8; i++) {
        if (o->hitCode == D_sc03_024_8018B408[i]) {
            p = o->parent;
            n = (u16)p->pos[0].h.i;
            D_sc03_024_801C1358 = 0;
            p->pos[0].h.i = n + 1;
            o->timer = 0x50;
            o->unk84 = 0;
            o->pos[0].h.i++;
            SetState(o, 2);
            t = (u8 *)SpawnPropFrom(o, 0x58);
            o->ext1 = t;
            if (t != 0) {
                AF(t, s16, 6) = o->pos[0].h.i;
                AF(t, s16, 0xA) = o->pos[1].h.i;
                AF(t, s16, 0xE) = o->pos[2].h.i;
                AF(t, s16, 0x2C) = -0xA0;
                AF(t, u8 *, 0x34) = o;
            }
            StartEvent((s32)o, (s32)&D_sc03_024_8018B318);
            o->react = 0;
            o->hitState = 0;
            o->hitCode = 0;
            PlaySoundId(0x86C, 0);
            RequestBgmPack(0x60);
            break;
        }
    }
    o->hitCode = 0;
    PlaySoundId(0x426, 0);
}

s32 func_sc03_024_8018264C(s32 arg0) {
    AF(arg0, s32, 0x48) = 0x1400;
    AF(arg0, s32, 0x14) = 0;
    return 0x1400;
}

void func_sc03_024_8018265C(Mover *arg0) {
    s32 v;

    MoveObject(arg0);
    v = arg0->vel[1];
    if (v > 0x14000) {
        arg0->accel[1] = -0x1400;
    } else if (v < -0x14000) {
        arg0->accel[1] = 0x1400;
    }
}

void func_sc03_024_801826B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) - 0xE4);
    AF(temp_v1, s16, 0xC) = (s16) (AF(arg0, u16, 0xE) + 8);
}

s32 func_sc03_024_801826E8(StageActor *arg0, u8 *arg1) {
    SV8 a;
    SV8 b;

    a.x = AF(arg1, u16, 4);
    b.x = AF(arg1, u16, 6);
    a.y = b.y = AF(arg1, u16, 0xA);
    a.z = b.z = AF(arg1, u16, 0xC);
    if (func_sc03_024_80182784(arg0, (s32) &a, (s32) &b) == 0) {
        a.z = b.z = AF(arg1, u16, 0xE);
        return func_sc03_024_80182784(arg0, (s32) &a, (s32) &b) != 0;
    }
    return 1;
}

s32 func_sc03_024_80182784(StageActor *arg0, s32 arg1, s32 arg2) {
    SV8 a;
    SV8 b;

    FaceHelper(arg0, arg1, &a);
    FaceHelper(arg0, arg2, &b);
    return PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b);
}

void func_sc03_024_801827EC(s32 arg0) {
    func_sc03_024_8017BEBC(arg0);
}

void func_sc03_024_8018280C(s32 arg0) {
    func_sc03_024_8017BFA0(arg0);
}

void func_sc03_024_8018282C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc03_024_80182838(s32 arg0) {
    AF(arg0, s16, 2) = 3;
}

void func_sc03_024_80182844()
{
    if (AF(&D_sc03_024_801C135C, u8, 1) < 0xF8) {
        AF(&D_sc03_024_801C135C, u8, 1) += 4;
        AF(&D_sc03_024_801C135C, u8, 0) += 6;
        AF(&D_sc03_024_801C135C, u8, 2) += 6;
    }
}

s32 func_sc03_024_80182884(u8 *o) {
    AF(o, s16, 2) = 4;
    return PlaySoundId(0x86E, 0);
}

s32 func_sc03_024_801828B0(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0;
}

void func_sc03_024_801828C0(u8 *arg0) {
    func_sc03_024_8018290C();
    D_sc03_024_8018B430[AF(arg0, u16, 2)](arg0);
}

void func_sc03_024_8018290C(s32 arg0) {
    CopyPropPos(arg0, AF(arg0, s32, 0x34));
    AF(arg0, u16, 0xA) += AF(arg0, u16, 0x2C);
    PushAlongView16(arg0 + 4, arg0 + 4, -0x180);
}

void func_sc03_024_8018295C(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if ((temp_v0 == 0) || (GetFlag(0x19) & 0xFF) || (InitModel(arg0->model, (s32) &D_sc03_024_801B98C0), (SpawnActor(0x2B9, arg0) == 0))) {
        RejectSpawn(arg0);
        return;
    }
    arg0->hitData = (s32) ((s32) &D_sc03_024_8018B0FC | 0x40000000);
    arg0->hitState = 0x800;
    NextState(arg0);
}

void func_sc03_024_801829F8(void) {
}

void func_sc03_024_80182A00(void) {
}

void func_sc03_024_80182A08(StageActor *arg0) {
    StepSpriteAnim(arg0->ext0, (s32) &D_sc03_024_801C1350);
}

void func_sc03_024_80182A34(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0x34) == 0) {
        MoveObject((s32) arg0);
        if (TickTimer((s32) arg0) != 0) {
            AF(arg0, s16, 0x100) = 0x80;
            AF(arg0, s32, 0x1C) = 0x30;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            func_sc03_024_8018264C((s32) arg0);
        }
    } else if (TickTimer((s32) arg0, arg1) != 0) {
        func_sc03_024_801822E8((s32) arg0);
    } else {
        func_sc03_024_8018265C((s32) arg0);
    }
    IsEventDone((s32) arg0);
    func_sc03_024_801864C8();
}

void func_sc03_024_80182AE0(s32 arg0) {
    if ((TickTimer(arg0) == 0) && !(AF(arg0, s32, 0x1C) & 3)) {
        SpawnActorArg(0x2B9, 1, arg0);
    }
    if (AF(arg0, s16, 0x98) == 0) {
        func_sc03_024_80182360(arg0);
    }
    IsEventDone(arg0);
}

void func_sc03_024_80182B50(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (TickTimer((s32) arg0, arg1) != 0) {
            AF(arg0, s32, 0x14) = 0x10000;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else if (AF(arg0, s16, 0xA) < (AF(arg0, s16, 0xFE) - 0xA0)) {
        MoveObject((s32) arg0);
    } else {
        func_sc03_024_801823B4((s32) arg0);
    }
    IsEventDone((s32) arg0);
}

void func_sc03_024_80182BE0(StageActor *arg0, s32 arg1) {
    IsEventDone(arg0, arg1);
    func_sc03_024_8018265C(arg0);
    if (func_sc03_024_801826E8(arg0, (s32) &D_sc03_024_8018B164) != 0) {
        func_sc03_024_80182408(arg0);
    }
}

void func_sc03_024_80182C30(u8 *arg0) {
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
        func_sc03_024_801824B8((s32) arg0);
    }
    IsEventDone((s32) arg0);
}

void EventSetProgress44C(u8 *arg0) {
    if ((AF(arg0, u16, 0x34) == 0) && (IsEventDone((s32) arg0) != 0) && (D_sc03_024_801C17D8 == 0)) {
        EndEvent((s32) arg0);
        AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        SetProgress(0x44C);
    }
}

void func_sc03_024_80182D54(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 1);
    MoveObject((s32) arg0);
    if (AF(arg0, s16, 0x98) == 0) {
        FreeActor((s32) arg0);
    }
}

void func_sc03_024_80182DA4(u8 *arg0) {
    s32 pad[8];

    func_8001CD9C(AF(arg0, s32, 0x20), &D_sc03_024_801C135C);
    SetShapeCircle(&D_sc03_024_801C135C, 0x80);
    *(CV4 *)&D_sc03_024_801C135C = D_sc03_024_801BFD90;
    D_sc03_024_801C1360 = D_sc03_024_801BFD90;
    AF(AF(arg0, u8 *, 0x20), s16, 0x18) = 0x800;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x1000;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(arg0, s16, 2) = 1;
}

void func_sc03_024_80182E60(void) {
    if (AF(&D_sc03_024_801C135C, u8, 0) < 0x60) {
        AF(&D_sc03_024_801C135C, u8, 0) += 4;
    }
    if (AF(&D_sc03_024_801C135C, u8, 1) < 0xC0) {
        AF(&D_sc03_024_801C135C, u8, 1) += 4;
    }
    if (AF(&D_sc03_024_801C135C, u8, 2) < 0x60) {
        AF(&D_sc03_024_801C135C, u8, 2) += 4;
    }
}

void func_sc03_024_80182EC8(s32 arg0) {
    func_sc03_024_80182844(arg0);
}

void func_sc03_024_80182EE8(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a0, s16, 0x18);
    if (temp_v0 < 0x3000) {
        AF(temp_a0, s16, 0x18) = (s16) (temp_v0 + 0x800);
    }
    temp_v0_2 = AF(temp_a0, s16, 0x1A);
    if (temp_v0_2 < 0x3000) {
        AF(temp_a0, s16, 0x1A) = (s16) (temp_v0_2 + 0x800);
    }
    func_sc03_024_80182844();
}

void func_sc03_024_80182F48(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a0, s16, 0x18);
    if (temp_v0 >= 0x801) {
        AF(temp_a0, s16, 0x18) = (s16) (temp_v0 - 0x200);
    }
    temp_v0_2 = AF(temp_a0, s16, 0x1A);
    if (temp_v0_2 >= 0x801) {
        AF(temp_a0, s16, 0x1A) = (s16) (temp_v0_2 - 0x200);
    }
    if (*(u8 *)&D_sc03_024_801C135D >= 0xC1) {
        *(u8 *)&D_sc03_024_801C135D -= 4;
        D_sc03_024_801C135C -= 6;
        D_sc03_024_801C135E -= 6;
    }
}

void func_sc03_024_80182FE0(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_v0;
    s8 temp_v0_4;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a1, s16, 0x18);
    if (temp_v0 >= 0x801) {
        AF(temp_a1, s16, 0x18) = (s16) (temp_v0 - 0x200);
    }
    temp_v0_2 = AF(temp_a1, s16, 0x1A);
    if (temp_v0_2 >= 0x801) {
        AF(temp_a1, s16, 0x1A) = (s16) (temp_v0_2 - 0x200);
    }
    temp_v1 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v1;
    if (temp_v1 & 0x10) {
        var_v0 = ((s32) (temp_v1 & 0xF) >> 1) + 9;
    } else {
        var_v0 = 0x10 - ((s32) (temp_v1 & 0xF) >> 1);
    }
    temp_v0_3 = var_v0 & 0xFF;
    temp_v0_4 = temp_v0_3 * 6;
    D_sc03_024_801C135C = temp_v0_4;
    D_sc03_024_801C135D = temp_v0_3 * 0xC;
    D_sc03_024_801C135E = temp_v0_4;
}

s32 func_sc03_024_80183094(s32 arg0, s32 arg1) {
    D_sc03_024_801C13A0 = 1;
    return 1;
}

extern u8 D_sc03_024_801B91F8;
extern u8 D_sc03_024_801B9260;
extern u8 D_sc03_024_801B8EE8;
extern u8 D_sc03_024_801B8E60;
extern u8 D_sc03_024_801B8F48;
extern u8 D_sc03_024_801B9060;
extern u8 D_sc03_024_801B90C8;
extern u8 D_sc03_024_801B9108;
extern u8 D_sc03_024_801B8FA8;
extern u8 D_sc03_024_801B9020;
extern u8 D_sc03_024_801B9148;
extern u8 D_sc03_024_801B8CD0;

void SceneHostUpdate(StageActor *o) {
    s16 v;
    ModelObj *p;

    switch (o->work10A) {
    case 0:
        break;
    case 1:
        o->model->rot.vy += TurnStepToward((u8 *)o + 4, (s32)o->link + 4, o->model->rot.vy, 4);
        break;
    case 2:
        SetScript(o, &D_sc03_024_801B91F8);
        o->work10A = 0x10;
        break;
    case 3:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B9260);
            o->work10A = 0x4;
        }
        break;
    case 4:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B92C8);
            o->work10A = 0;
        }
        break;
    case 5:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B8EE8);
            o->work10A = 0x6;
        }
        break;
    case 6:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B8E60);
            o->work10A = 0;
        }
        break;
    case 7:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B8F48);
            o->work10A = 0x8;
        }
        break;
    case 8:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B92C8);
            o->work10A = 0;
        }
        break;
    case 9:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B9060);
            o->work10A = 0xa;
        }
        break;
    case 10:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B90C8);
            o->work10A = 0;
        }
        break;
    case 11:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B9108);
            o->work10A = 0xc;
        }
        break;
    case 12:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B92C8);
            o->work10A = 0;
        }
        break;
    case 13:
        SetScript(o, &D_sc03_024_801B8FA8);
        o->work10A = 0;
        break;
    case 14:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B9020);
            o->work10A = 0xf;
        }
        break;
    case 15:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B92C8);
            o->work10A = 0;
        }
        break;
    case 16:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B9148);
            o->work10A = 0;
        }
        break;
    case 17:
        SetScript(o, &D_sc03_024_801B8CD0);
        o->work10A = 0x12;
        break;
    case 18:
        o->model->scale.vy = (rsin(o->unkFC) << 12 >> 12) + 0x1000;
        o->model->scale.vx = rcos(o->unkFC);
        o->model->scale.vz = rcos(o->unkFC);
        v = (u16)o->unkFC + 0x80;
        o->unkFC = v;
        if (v >= 0x400) {
            p = o->model;
            o->work10A = 0;
            p->unk04 |= 0x80000000;
            o->pos[0].h.i = 0x7FFF;
            PlaySoundId(0x9CC, 0);
        }
        break;
    case 19:
        AF(o->ext0, s16, 2) = 2;
        o->work10A = 0;
        break;
    case 20:
        o->model->rot.vy += TurnStepToward((u8 *)o + 4, &g_PlayerPosX, o->model->rot.vy, 4);
        break;
    case 21:
        SetScript(o, &D_sc03_024_801B8FA8);
        o->work10A = 0x16;
        break;
    case 22:
        if ((s16)TestPadAll(0, 0, 0x80) == 1) {
            o->work10A = 0x17;
        }
        break;
    case 23:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B9020);
            o->work10A = 0x18;
        }
        break;
    case 24:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B92C8);
            o->work10A = 0x19;
        }
        break;
    case 25:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B8EE8);
            o->work10A = 0x1a;
        }
        break;
    case 26:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B8E60);
            o->work10A = 0x1b;
        }
        break;
    case 27:
        if ((s16)TestPadAll(0, 0, 0x80) == 1) {
            o->work10A = 0x1c;
        }
        break;
    case 28:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B8F48);
            o->work10A = 0x1d;
        }
        break;
    case 29:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B92C8);
            o->work10A = 0x1e;
        }
        break;
    case 30:
        if ((s16)TestPadAll(0, 0, 0x80) == 1) {
            o->work10A = 0x1f;
        }
        break;
    case 31:
        if ((s16)TestPadAll(0, 0, 0x80) == 1) {
            o->work10A = 0x20;
        }
        break;
    case 32:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B8FA8);
            o->work10A = 0x21;
        }
        break;
    case 33:
        if ((s16)TestPadAll(0, 0, 0x80) == 1) {
            o->work10A = 0x22;
        }
        break;
    case 34:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B92C8);
            o->work10A = 0x23;
        }
        break;
    case 35:
        if ((o->animFlags & 0x4000) || o->animTimer == 0) {
            SetScript(o, &D_sc03_024_801B8CD0);
            o->work10A = 0;
        }
        break;
    }
    if (IsEventDone(o) != 0) {
        EndEvent(o);
        SetProgress(0x460);
        FreeActor(o);
    }
}

void func_sc03_024_80183890(StageActor *arg0) {
    D_sc03_024_8018B740[arg0->state]();
}

void func_sc03_024_801838CC(u8 *o) {
    SV8 v;
    s32 flag;
    UXY sxy;
    s32 pp;
    u32 *ot;
    u8 *prim;
    u8 *q;
    s16 x;
    u8 *m;

    m = AF(o, u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&D_sc03_024_8018B758, &v, &flag);
    SetRotMatrix(D_800AF648);
    SetTransMatrix(D_800AF648);
    if (RotTransPers(&v, &sxy, &pp, &flag) <= 0) return;
    if (flag < 0) return;
    ot = g_WorldOtOrg[D_800B9A02[0]].ot + 1;
    prim = AllocPrim(0x20);
    if (prim == 0) return;
    SetDrawMode(prim, 0, 0, GetTPage(0, 1, 0, 0), 0);
    q = prim + 0xC;
    AF(prim, s32, 0x10) = 0xFF00;
    AF(prim, u8, 0xF) = 4;
    AF(prim, u8, 0x13) = 0x22;
    AF(prim, s16, 0x14) = sxy.s.x;
    AF(prim, s16, 0x16) = sxy.s.y;
    AF(prim, s16, 0x18) = AF(prim, u16, 0x14) + (AF(o, s32, 0x1C) << 4);
    x = AF(prim, s16, 0x18);
    if (x > 0xB0) {
        AF(prim, s16, 0x18) = 0xA1;
        AF(prim, s16, 0x1C) = 0xA1;
        AF(o, s32, 0x1C)--;
    } else {
        AF(prim, s16, 0x1C) = x;
    }
    AF(q, s16, 0xE) = AF(q, u16, 0xA) - AF(o, s32, 0x1C);
    AF(q, s16, 0x12) = AF(q, u16, 0xA) + AF(o, s32, 0x1C) * 10;
    AddPrim(ot, q);
    AddPrim(ot, prim);
}

s32 func_sc03_024_80183ACC(StageActor *arg0) {
    s32 temp_v1;
    u16 temp_a0;
    u16 temp_v0;
    u16 temp_v1_2;

    temp_a0 = arg0->stateCount;
    temp_v1 = temp_a0 & 0xFFFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (arg0->animTimer == 0) {
            arg0->stateCount = (u16) (temp_a0 + 1);
            PlaySoundId(0x948, 0);
            SpawnActorArg(0x383, 0, arg0);
            return;
        }
        return;
    case 1:
        arg0->timer = (s32) (arg0->timer + 1);
        temp_v1_2 = (u16)arg0->unkFC + 1;
        arg0->unkFC = temp_v1_2;
        if ((s16) temp_v1_2 == 0x28) {
            arg0->parent->ext0 = SpawnActor(0x308, arg0);
            PlaySoundId(0x9CA, 0);
            arg0->stateCount = (u16) (arg0->stateCount + 1);
            return;
        }
        break;
    case 2:
        temp_v0 = (u16)arg0->unkFC - 1;
        arg0->unkFC = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            arg0->stateCount = (u16) (arg0->stateCount + 1);
            PlaySoundId(4, 0x948);
        }
        break;
    }
}

void func_sc03_024_80183BF8(u8 *arg0) {
    s32 i;

    switch (AF(AF(arg0, u8 *, 0x64), s32, 0xF8)) {
    case 0: break;
    case 1:
        if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc03_024_801B6328);
            AF(AF(arg0, u8 *, 0x64), s32, 0xF8) = 2;
        }
        break;
    case 2:
        if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc03_024_801B6218);
            AF(AF(arg0, u8 *, 0x64), s32, 0xF8) = 0;
        }
        break;
    case 3:
        if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc03_024_801B60D8);
            AF(AF(arg0, u8 *, 0x64), s32, 0xF8) = 2;
        }
        break;
    case 4:
        if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc03_024_801B6218);
            AF(AF(arg0, u8 *, 0x64), s32, 0xF8) = 5;
        }
        break;
    case 5:
        if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc03_024_801B61D8);
            AF(AF(arg0, u8 *, 0x64), s32, 0xF8) = 6;
        }
        break;
    case 6:
        if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc03_024_801B62A0);
            AF(AF(arg0, u8 *, 0x64), s32, 0xF8) = 0;
        }
        break;
    case 7:
        if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc03_024_801B5F70);
            AF(AF(arg0, u8 *, 0x64), s32, 0xF8) = 8;
        }
        break;
    case 9:
        if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc03_024_801B5D18);
            AF(AF(arg0, u8 *, 0x64), s32, 0xF8) = 0;
        }
        break;
    case 10:
        func_sc03_024_80183ACC(arg0);
        break;
    case 11:
        if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc03_024_801B5E88);
            AF(AF(arg0, u8 *, 0x64), s32, 0xF8) = 6;
        }
        break;
    case 12:
        if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc03_024_801B5DD0);
            AF(AF(arg0, u8 *, 0x64), s32, 0xF8) = 0x11;
        }
        break;
    case 13:
        if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc03_024_801B5C78);
            AF(AF(arg0, u8 *, 0x64), s32, 0xF8) = 0;
        }
        break;
    case 14:
        if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc03_024_801B5CC8);
            AF(AF(arg0, u8 *, 0x64), s32, 0xF8) = 0;
        }
        break;
    case 15:
        AF(arg0, s16, 0x16) = -0x14;
        AF(AF(arg0, u8 *, 0x64), s32, 0xF8)++;
        break;
    case 16:
        MoveCollide(arg0);
        if (AF(arg0, s32, 0x14) > 0) {
            for (i = 1; i < 0x20; i++) {
                SpawnActorArg(0x300, 1, arg0);
            }
            FreeActor(arg0);
            PlaySoundId(0x9CB, 0);
        } else {
            AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0x155;
            SpawnActorArg(0x300, 0, arg0);
        }
        break;
    case 8:
    case 17:
        if ((AF(arg0, u16, 0x72) & 0x4000) || AF(arg0, s16, 0x98) == 0) {
            SetScript(arg0, &D_sc03_024_801B6070);
            AF(AF(arg0, u8 *, 0x64), s32, 0xF8) = 0;
        }
        break;
    }
}

void func_sc03_024_80184004(StageActor *arg0) {
    D_sc03_024_8018B760[arg0->state]();
}

void func_sc03_024_80184040(StageActor *o) {
    ModelObj *r;

    r = AllocActorModel(o);
    o->model = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    func_8001CA1C(r, &D_sc03_024_8018B768);
    SetScript(o, &D_sc03_024_8018B774);
    o->state++;
    if (o->param != 0) {
        AF(o, s16, 0x12) = (rand() & 0x1F) - 0x10;
        o->accel[0] = -(o->vel[0] >> 4);
        AF(o, s16, 0x16) = (rand() & 0x1F) - 0x10;
        o->accel[1] = -(o->vel[1] >> 4);
        AF(o, s16, 0x1A) = (rand() & 0x1F) - 0x10;
        o->accel[2] = -(o->vel[2] >> 4);
    } else {
        AF(o, s16, 0x12) = -rsin((u16)o->parent->model->rot.vy & 0xFFF) >> 8;
        o->accel[0] = -(o->vel[0] >> 4);
        AF(o, s16, 0x1A) = -rcos((u16)o->parent->model->rot.vy & 0xFFF) >> 8;
        o->accel[2] = -(o->vel[2] >> 4);
    }
    o->timer = 0x10;
    o->model->scale.vx = 0x1800;
    o->model->scale.vy = 0x1800;
    o->model->scale.vz = 0x1800;
    o->model->flags |= 0x10;
    o->pos[1].h.i -= 0x30;
}

void func_sc03_024_801841D4(StageActor *arg0) {
    D_sc03_024_8018B77C[arg0->state]();
}

void func_sc03_024_80184210(StageActor *o) {
    ModelObj *r;
    s16 v;
    ModelObj *p;

    r = AllocActorModel(o);
    o->model = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    switch (o->param) {
    case 0:
        InitModel(r, &D_sc03_024_801B0DC8);
        o->model->unk04 |= 0x50000000;
        o->state = 1;
        o->timer = 0x26;
        o->accel[0] = 0x3000;
        o->accel[2] = 0x900;
        o->pos[0].h.i += 0x60;
        o->pos[1].h.i -= 0x40;
        o->pos[2].h.i -= 0x10;
        o->model->rot.vy = 0xB80;
        SpawnActorArg(0x383, 1, o);
        break;
    case 1:
        InitModel(r, &D_sc03_024_801B1458);
        o->model->unk04 |= 0x50000000;
        o->state = 2;
        o->workFE = (s16)o->parent->id;
        o->model->flags |= 0x10;
        o->model->rot.vy = o->parent->model->rot.vy;
        v = rsin(o->unkFC) / 2 + 0x800;
        p = o->model;
        p->scale.vx = p->scale.vy = v;
        o->pos[0].w = o->parent->pos[0].w - ((rsin(o->model->rot.vy) * rcos(o->unkFC)) >> 3);
        o->pos[2].w = o->parent->pos[2].w - ((rcos(o->model->rot.vy) * rcos(o->unkFC)) >> 3);
        break;
    case 2:
        InitModel(r, &D_sc03_024_801B1E48);
        o->model->unk04 |= 0x40000000;
        o->state = 3;
        o->model->flags |= 0x10;
        o->model->rot.vy = o->parent->model->rot.vy;
        o->vel[0] = rsin(o->model->rot.vy) << 6;
        o->vel[2] = rcos(o->model->rot.vy) << 6;
        o->timer = 0x10;
        break;
    }
}

void func_sc03_024_801844D0(StageActor *o) {
    s32 s;
    s16 v;
    ModelObj *p;
    if (o->workFE != (s16)o->parent->id) {
        FreeActor((s32)o);
        return;
    }
    v = (u16)o->unkFC + 0x80;
    o->unkFC = v;
    if (v > 0x800) {
        o->unkFC = 0;
    }
    v = rsin(o->unkFC) / 2 + 0x800;
    p = o->model;
    p->scale.vx = p->scale.vy = v;
    o->pos[0].w = o->parent->pos[0].w - ((rsin(o->model->rot.vy) * rcos(o->unkFC)) >> 3);
    o->pos[2].w = o->parent->pos[2].w - ((rcos(o->model->rot.vy) * rcos(o->unkFC)) >> 3);
}

void func_sc03_024_801845EC(StageActor *arg0) {
    D_sc03_024_8018B784[arg0->state]();
}

void func_sc03_024_80184628(s32 arg0) {
    func_sc03_024_80180748(arg0);
}

void func_sc03_024_80184648(s32 arg0) {
    func_sc03_024_80180838(arg0);
}

void func_sc03_024_80184668(s32 arg0) {
    func_sc03_024_8018091C(arg0);
}

s32 func_sc03_024_80184688(void) {
    return (s16)TestPadAll(0, 0, 0x10) == 1;
}

void func_sc03_024_801846BC(void) {
    AddMaxBp((s32) &g_Player, 0x32);
    AddBp((s32) &g_Player, (s32) D_80078EB6);
}

void func_sc03_024_80184700(u8 *o) {
    u8 *p;
    u16 t;

    if (SetupActor(o, &D_sc03_024_8018B6C8) == 0) {
        RejectSpawn(o);
        return;
    }
    o[0xC0] = 1;
    AF(o, s32, 0xB4) = -1;
    SetScript(o, &D_sc03_024_801B92C8);
    AF(o, s16, 2) += 1;
    StopWithGravity(o);
    p = AF(o, u8 *, 0x20);
    t = AF(p, u16, 0x2C);
    D_sc03_024_801C13A0 = 0;
    AF(p, u16, 0x2C) = t | 0x10;
    if ((u32) GetProgress() >= 0x460) {
        UpdateModelZYX(o);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        AF(o, s16, 0x5C) = 0;
    } else {
        SpawnShadow(o);
        AF(o, s32, 0x6C) = SpawnActor(0x2FC, o);
    }
}

void func_sc03_024_801847E4(StageActor *arg0) {
    if (D_80126B62 >= -0x90) {
        arg0->timer = 0x5A;
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc03_024_80184814(StageActor *arg0) {
    s32 temp_v0;

    if (GetProgress() >= 0x460U) {
        if (RequestBgmPack(0xA0) != 0) {
            goto block_4;
        }
    } else {
        temp_v0 = arg0->timer - 1;
        arg0->timer = temp_v0;
        if (temp_v0 == 0) {
block_4:
            arg0->state = (u16) (arg0->state + 1);
        }
    }
}

void func_sc03_024_80184884(StageActor *arg0) {
    if (GetProgress() >= 0x460U) {
        func_sc03_024_8018569C();
        FreeActor(arg0);
        return;
    }
    if (D_sc03_024_801C13A0 != 0) {
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc03_024_801848F4(StageActor *arg0) {
    if (RequestBgmPack(0x69) != 0) {
        arg0->state = (u16) (arg0->state + 1);
        StartEvent((s32) arg0, (s32) &D_sc03_024_8018B458);
    }
}

void func_sc03_024_80184940(s32 arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_024_8018B70C) == 0) {
        RejectSpawn(arg0);
        return;
    }
    AF(arg0, s16, 6) = -0xC0;
    AF(arg0, s16, 0xA) = -0x82;
    AF(arg0, s16, 0xE) = -0x640;
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s32, 0xB4) = -1;
    SpawnShadow(arg0);
    SetScript(arg0, (s32) &D_sc03_024_801B62A0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    StopWithGravity(arg0);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = 0xB00;
}

void func_sc03_024_801849E4(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        MoveObject((s32) arg0);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) - 0x100);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) - 0x100);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) - 0x100);
        return;
    }
    FreeActor((s32) arg0, arg1);
}

void func_sc03_024_80184A78(s32 arg0) {
    s32 temp_v0;
    void *temp_v1;

    MoveObject(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        func_sc03_024_801809F8();
        FreeActor(arg0);
        return;
    }
    if (!(temp_v0 & 7)) {
        SpawnActorArg(0x383, 2, arg0);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 0x100);
    UpdateModelYXZ(arg0);
}

void func_sc03_024_80184B00(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    MoveObject((s32) arg0);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x80);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x80);
}

void func_sc03_024_80184B80(u8 *arg0, s32 arg1_0) {
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
    *(s32 *)&D_sc03_024_801C13A8 = D_sc03_024_801C13B8 = D_sc03_024_801C13C8 = v.vx;
    D_sc03_024_801C13AC = D_sc03_024_801C13BC = D_sc03_024_801C13CC = v.vy;
    D_sc03_024_801C13B0 = D_sc03_024_801C13C0 = D_sc03_024_801C13D0 = v.vz;
}

void func_sc03_024_80184CB0(u8 *o) {
    SV8 a;
    SV8 b;
    u8 *p;
    u8 *q;

    if (AF(o, s32, 0x20) == 0) {
        if (SetupActor(o, &D_sc03_024_8018B7A4) == 0) {
            return;
        }
        func_8001C810(AF(o, s32, 0x20), &D_sc03_024_801BBF94);
        SetScript(o, &D_sc03_024_8018B7D8);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x20;
        AF(AF(o, u8 *, 0x20), u8 *, 0x80) = &D_sc03_024_801C13A8;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x40000000;
        AF(o, s16, 0xAE) = -3;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
    }
    AF(o, s32, 4) = g_PlayerPosX;
    AF(o, s32, 8) = D_80126B60;
    AF(o, s32, 0xC) = D_80126B64;
    UpdateModelZYX(o);
    D_sc03_024_801C1458 = *(B6C *)D_sc03_024_801BBFBC;
    AF(o, B6C *, 0xD8) = &D_sc03_024_801C1458;
    p = AllocSpriteInRange(0x7E, 0x100);
    if (p != 0) {
        AF(o, u8 *, 0xD0) = p;
        q = &D_sc03_024_801C1418;
        func_8001CD50(p, q);
        D_sc03_024_801C1419 = 0xFF;
        D_sc03_024_801C141A = 0xFF;
        *q = 0xFF;
        D_sc03_024_801C141E = 0;
        D_sc03_024_801C141D = 0;
        D_sc03_024_801C141C = 0;
        SetShapeCircle(q, 0x100);
        a.x = AF(o, s16, 6);
        a.y = AF(o, s16, 0xA) - 0x38;
        a.z = AF(o, s16, 0xE);
        func_800D20C0(&a, &b, 5);
        D_sc03_024_801C14D8[0] = a.x;
        D_sc03_024_801C14D8[1] = a.y;
        D_sc03_024_801C14D8[2] = a.z;
        func_800D23D0(&b);
        RotMatrixYXZ(&b, (WMtx *)((u8 *)D_sc03_024_801C14D8 - 0x14));
        AF(p, WMtx *, 0x34) = (WMtx *)((u8 *)D_sc03_024_801C14D8 - 0x14);
        AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0;
        AF(p, s32, 4) |= 0x50000000;
        AF(o, s16, 2) = 0xB;
    }
}

void func_sc03_024_80184FA0(StageActor *o) {
    SV8 a;
    SV8 r;
    u8 *p;
    u8 *q;

    p = AllocSpriteInRange(0x7E, 0x100);
    if (p != 0) {
        o->ext1 = p;
        q = &D_sc03_024_801C1418;
        func_8001CD50(p, q);
        D_sc03_024_801C1419 = 0xFF;
        D_sc03_024_801C141A = 0xFF;
        *q = 0xFF;
        D_sc03_024_801C141E = 0;
        D_sc03_024_801C141D = 0;
        D_sc03_024_801C141C = 0;
        SetShapeCircle(q, 0x100);
        a.x = o->pos[0].h.i;
        a.y = o->pos[1].h.i - 0x38;
        a.z = o->pos[2].h.i;
        func_800D20C0(&a, &r, 5);
        D_sc03_024_801C14D8[0] = a.x;
        D_sc03_024_801C14D8[1] = a.y;
        D_sc03_024_801C14D8[2] = a.z;
        func_800D23D0(&r);
        RotMatrixYXZ(&r, (WMtx *)((u8 *)D_sc03_024_801C14D8 - 0x14));
        AF(p, WMtx *, 0x34) = (WMtx *)((u8 *)D_sc03_024_801C14D8 - 0x14);
        AF(p, s16, 0x1A) = 0;
        AF(p, s16, 0x18) = 0;
        AF(p, s32, 4) |= 0x50000000;
        o->state++;
    }
}

void func_sc03_024_801850E0(StageActor *o) {
    u8 *a;
    S12 *p;
    ModelObj *q;
    S12 *t;
    s32 n;
    s16 i;
    u16 h;

    t = D_sc03_024_801BBFBC;
    a = (u8 *)o->ext1;
    p = AF(o, S12 *, 0xD8);
    q = o->model;
    h = AF(a, u16, 0x1A) + 0x80;
    AF(a, u16, 0x18) = AF(a, u16, 0x1A) = h;
    n = o->timer - 1;
    o->timer = n;
    if (n != -1) {
        func_sc03_024_80184B80(o, 0);
        for (i = 0; i < 9; i++, t++, p++) {
            p->v[0] += t->v[0] >> 1;
            if (i != 0) {
                p->v[1] += (t->v[1] + 0x30) >> 1;
                p->v[2] += t->v[2] >> 1;
                p->v[3] += 0x40;
                p->v[4] += 0x80;
                p->v[5] += 0x100;
            }
        }
    } else {
        q->type = 0;
        o->state++;
    }
}

void func_sc03_024_8018520C(StageActor *o) {
    u8 *p;
    u8 *q;
    p = AllocSpriteInRange(0x7E, 0x100);
    if (p != 0) {
        o->ext0 = p;
        q = &D_sc03_024_801C13D8;
        func_8001CD50(p, q);
        D_sc03_024_801C13DA = 0x80;
        *q = 0x80;
        D_sc03_024_801C13D9 = 0xE0;
        D_sc03_024_801C13DD = 0;
        D_sc03_024_801C13DC = 0;
        D_sc03_024_801C13DE = 0;
        SetShapeCircle(q, 0x38);
        AF(p, s16, 0x10) = 0x400;
        AF(p, s16, 8) = o->pos[0].h.i;
        AF(p, s16, 0xA) = o->pos[1].h.i;
        AF(p, s16, 0xC) = o->pos[2].h.i;
        AF(p, s32, 4) |= 0x50000000;
        D_sc03_024_801C13D6 = 0xFF;
        D_sc03_024_801C13E4 = 0xFF;
        D_sc03_024_801C13C6 = 0xFF;
        D_sc03_024_801C13C4 = 0xFF;
        D_sc03_024_801C13B6 = 0xFF;
        D_sc03_024_801C13B4 = 0xFF;
        D_sc03_024_801C13D5 = 0x80;
        D_sc03_024_801C13C5 = 0x80;
        D_sc03_024_801C13B5 = 0x80;
        o->state = 1;
    }
}

void func_sc03_024_80185334(StageActor *arg0) {
    D_sc03_024_8018B7E8[arg0->state]();
}

void func_sc03_024_80185370(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    ModelObj *temp_v1;

    temp_v1 = arg0->model;
    temp_v1->rot.vy = (u16) ((u16)temp_v1->rot.vy + 0x20);
    func_sc03_024_80184B80((s32) arg0, rand((s32) arg0, arg1, arg2, arg3) & 0xF);
}

void func_sc03_024_801853BC(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 *temp_s1;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = arg0->ext1;
    temp_s1 = (s16 *)arg0->ext0;
    temp_v0 = AF(temp_v1, u16, 0x1A) + 0x20;
    AF(temp_v1, u16, 0x1A) = temp_v0;
    AF(temp_v1, u16, 0x18) = temp_v0;
    temp_v0_2 = arg0->timer - 1;
    arg0->timer = temp_v0_2;
    if (temp_v0_2 != -1) {
        func_sc03_024_80184B80((s32) arg0, rand() & 1);
        return;
    }
    PlaySoundId(0x62E, 0);
    *temp_s1 = 0;
    arg0->timer = 0x28;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc03_024_80185458(StageActor *arg0) {
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc03_024_8018546C(StageActor *arg0) {
    ShowPlayerScene((s32) &g_Player);
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc03_024_801854B0(StageActor *arg0) {
    u16 temp_v0;
    void *temp_a1;

    temp_a1 = arg0->ext1;
    temp_v0 = AF(temp_a1, u16, 0x1A) - 0xC0;
    AF(temp_a1, u16, 0x1A) = temp_v0;
    AF(temp_a1, u16, 0x18) = temp_v0;
    if ((s16) (temp_v0) < 0) {
        AF(temp_a1, s16, 0) = 0;
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc03_024_801854F4(StageActor *arg0) {
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc03_024_80185508(StageActor *arg0, s32 arg1) {
    FreeActor(arg0, arg1);
}

void func_sc03_024_80185528(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc03_024_80184B80(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
}

void func_sc03_024_8018555C(StageActor *o) {
    u8 unused[0x10];
    u8 *p;

    p = (u8 *)o->ext1;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1A) + 0x20;
    if (--o->timer == -1) {
        o->timer = 0x28;
        o->state++;
    }
}

void func_sc03_024_801855AC(StageActor *arg0) {
    s32 temp_v0_2;
    u16 temp_v0;
    ModelObj *temp_a0;
    void *temp_v1;

    temp_v1 = arg0->ext1;
    temp_v0 = AF(temp_v1, u16, 0x1A) + 0x80;
    AF(temp_v1, u16, 0x1A) = temp_v0;
    AF(temp_v1, u16, 0x18) = temp_v0;
    temp_v0_2 = arg0->timer - 1;
    arg0->timer = temp_v0_2;
    if (temp_v0_2 == -1) {
        arg0->timer = 0;
        HidePlayerScene((s32) &g_Player);
        temp_a0 = arg0->model;
        temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 & 0x7FFFFFFF);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc03_024_80185638(StageActor *arg0) {
    u16 temp_v0;
    void *temp_a1;

    temp_a1 = arg0->ext1;
    temp_v0 = AF(temp_a1, u16, 0x1A) - 0xC0;
    AF(temp_a1, u16, 0x1A) = temp_v0;
    AF(temp_a1, u16, 0x18) = temp_v0;
    if ((s16) (temp_v0) < 0) {
        AF(temp_a1, s16, 0) = 0;
        arg0->state = (u16) (arg0->state + 1);
    }
}

s32 func_sc03_024_8018567C(void) {
    func_800D06CC();
    return 0x67;
}

s32 func_sc03_024_8018569C(void) {
    return func_800D0694();
}

void func_sc03_024_801856BC(StageActor *arg0) {
    s32 i;

    for (i = 0; (s16)D_sc03_024_801B9330[i].x != 0; i++) {
        SpawnActorArg(0x10D, i, arg0);
    }
}

void func_sc03_024_80185730(u8 *arg0) {
    WMtx m;
    UV4 v;
    s32 o;
    s32 t;
    s16 k;

    m = GsIDMATRIX;
    v = D_sc03_024_801B9330[AF(arg0, s16, 0x70)];
    t = AllocActorModel();
    o = t;
    AF(arg0, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(arg0);
        return;
    }
    k = v.pad;
    InitModel(o, D_sc03_024_801B93B8[k]);
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

void func_sc03_024_80185950(StageActor *arg0) {
    D_sc03_024_801B93C4[arg0->state]();
}

void func_sc03_024_8018598C(s32 arg0) {
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

void func_sc03_024_80185A20(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_024_801C15FC;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

void func_sc03_024_80185A44(s32 arg0, s32 arg1, s32 arg2, u16 *arg3) {
    SV4 v;
    s32 i;
    s16 ang;

    func_sc03_024_80185AE4(arg0, 0x1000, 0);
    v.x = arg3[0];
    v.z = arg3[1];
    v.pad = 1;
    for (i = 0, ang = 0; i < 0x10; i++, ang += 0x100) {
        v.y = ang;
        func_sc03_024_80185C00(i, (s32) &v, arg1, arg2);
    }
}

s32 func_sc03_024_80185AE4(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc03_024_801C15F4 = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc03_024_801C15F8 = (s16) arg1;
    D_sc03_024_801C15FA = (s16) arg2;
    D_sc03_024_801C15F6 = temp_v0;
    return (s32) temp_v0;
}

void func_sc03_024_80185B14(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc03_024_801C15F4 = sp10[0];
    D_sc03_024_801C15F6 = sp10[1];
}

void func_sc03_024_80185B8C(s32 arg0) {
    s16 *p = &D_sc03_024_801C15FA;
    *p += arg0;
}

void func_sc03_024_80185BA8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc03_024_80185CD4();
    if (temp_v0 >= 0) {
        func_sc03_024_80185C00(temp_v0, arg0, arg1, arg2);
    }
}

void func_sc03_024_80185C00(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
    struct C8E8 { u8 r, g, b, cd; };
    struct E8E8 { u16 a; s16 y; s16 z; struct C8E8 c0; struct C8E8 c1; } *e;

    e = (struct E8E8 *)(&D_sc03_024_801C15FC + arg0 * 14);
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

s32 func_sc03_024_80185CD4(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0xE) {
        if (*(u16 *)&((u8 *)&D_sc03_024_801C15FC)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc03_024_80185D10(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc03_024_801C15FC, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

void func_sc03_024_80185D5C(void) {
    u8 *p;
    s32 i;
    s16 v;
    s16 w;

    for (p = &D_sc03_024_801C15FC, i = 0; i < 0x10; i++, p += 14) {
        if (AF(p, u16, 0) != 0) {
            func_sc03_024_80185E38(i);
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

void func_sc03_024_80185E38(s32 i) {
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
    r = &D_sc03_024_801C15FC + i * 14;
    AF(p, u8, 4) = AF(r, u8, 6);
    AF(p, u8, 5) = AF(r, u8, 7);
    AF(p, u8, 6) = AF(r, u8, 8);
    AF(p, u8, 0xC) = AF(r, u8, 0xA);
    AF(p, u8, 0xD) = AF(r, u8, 0xB);
    AF(p, u8, 0xE) = AF(r, u8, 0xC);
    AF(p, u8, 0x14) = AF(r, u8, 0xA);
    AF(p, u8, 0x15) = AF(r, u8, 0xB);
    AF(p, u8, 0x16) = AF(r, u8, 0xC);
    cx = D_sc03_024_801C15F4;
    cy = D_sc03_024_801C15F6;
    RotMatrixZ(D_sc03_024_801C15FA, &m);
    s.x = s.y = s.z = D_sc03_024_801C15F8;
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

s32 func_sc03_024_801860FC(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_024_801C14F4;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc03_024_80186120(s32 arg0) {
    s32 sp10;

    PosToSVec(arg0, (s32) &sp10);
    return func_sc03_024_80186148((s32) &sp10);
}

s32 func_sc03_024_80186148(s32 arg0) {
    s16 sxy[2];
    CV4 col;
    s32 p;
    s32 flag;

    col = D_sc03_024_801BFE6C;
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers(arg0, (s32) sxy, (s32) &p, (s32) &flag);
    return func_sc03_024_801861D0((s32) sxy, (s32) &col, 0x10, 0x18);
}

s32 func_sc03_024_801861D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc03_024_8018623C(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc03_024_80186370(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc03_024_8018623C(u16 *p, u8 *c, s32 g) {
    if (p != 0) {
        D_sc03_024_801C14E8.a = p[0];
        D_sc03_024_801C14E8.b = p[1];
    } else {
        D_sc03_024_801C14E8.a = 0;
        D_sc03_024_801C14E8.b = 0;
    }
    D_sc03_024_801C14F0 = c[0];
    D_sc03_024_801C14F1 = c[1];
    D_sc03_024_801C14F2 = c[2];
    AF(&D_sc03_024_801C14E8, s32, 4) = g << 16;
}

void func_sc03_024_801862AC(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc03_024_801C14E8.a = sp10[0];
    D_sc03_024_801C14E8.b = sp10[1];
}

void func_sc03_024_80186324(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc03_024_8018648C();
    if (temp_v0 >= 0) {
        func_sc03_024_80186370(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

void func_sc03_024_80186370(s32 i, s32 ang, s32 spd) {
    u8 unused[0x10];
    Pt16 *p;
    s16 vx;
    s16 vz;
    u16 s;
    s32 m;
    s32 gg;

    p = &D_sc03_024_801C14E8.pts[i];
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
    gg = D_sc03_024_801C14E8.g;
    p->dy = gg << 6;
}

s32 func_sc03_024_8018648C(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0x10) {
        if (*(u16 *)&((u8 *)&D_sc03_024_801C14F4)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc03_024_801864C8(void) {
    Pt16 *p;
    s32 i;
    s16 g;
    s32 dx;
    s32 dz;

    g = D_sc03_024_801C14EE;
    p = (Pt16 *)&D_sc03_024_801C14F4;
    for (i = 0; i < 16; i++, p++) {
        if (p->active == 0) {
            continue;
        }
        if ((g > 0 && p->y >= 0x4001) || (g < 0 && p->y <= 0)) {
            p->active = 0;
            continue;
        }
        func_sc03_024_801865DC(i);
        dx = (rcos(p->ang) * g) << 4;
        dz = (rsin(p->ang) * g) << 4;
        p->x += dx;
        p->z += dz;
        p->y += p->dy;
    }
}

void func_sc03_024_801865DC(s32 i) {
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
    AF(p, u8, 4) = D_sc03_024_801C14F0;
    AF(p, u8, 5) = D_sc03_024_801C14F1;
    AF(p, u8, 6) = D_sc03_024_801C14F2;
    r = (Pt16 *)&D_sc03_024_801C14F4 + i;
    cx = AF(r, u16, 0xA) + D_sc03_024_801C14E8.a;
    cz = AF(r, u16, 0xE) + D_sc03_024_801C14E8.b;
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

void func_sc03_024_801868C0(StageActor *o) {
    Player *d = &g_Player;
    s16 r = 0;
    ModelObj *p;
    s16 t;
    s32 k;
    if (o->unk74 != 0) {
        if (GroundDistSqToPlayer() < 0x4000 && PlayerFlag1000() != 0) {
            o->workFE++;
            StartRumbleScript(&D_80062BD0);
            SpawnActor(0x27D, o);
            r = 1;
            if (o->workFE >= 9) {
                o->pos[1].h.i++;
                o->model->scale.vx -= 0x10;
                p = o->model;
                p->scale.vz = p->scale.vx;
            }
        }
        k = D_sc03_024_801BA59C[o->work100 * 8] - 1;
        d->pos[1].h.i = o->pos[1].h.i + k;
    }
    if (r == 0) {
        o->workFE = 0;
    }
    t = o->unkFC;
    if (t != 0 && ((u16)o->workFE & 0xF) == 1) {
        PlaySoundId((u16) t, 0);
    }
    if (o->work102 + 0xA0 < o->pos[1].h.i) {
        FreeActor(o);
    }
}

void func_sc03_024_80186A1C(StageActor *arg0) {
    D_sc03_024_801BA5B4[arg0->state]();
}

void func_sc03_024_80186A58(StageActor *o) {
    s16 n;
    s32 *tbl;
    ModelObj *e;
    ModelObj *p;
    u8 *q;
    s16 v;

    tbl = (s32 *)o->parent->message;
    n = (rand() & 1) + 1;
    e = (u8 *) AllocActorModel();
    o->model = e;
    if (e == 0 || tbl == 0 || tbl[n] == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(e, tbl[n]);
    o->model->flags |= 0x10;
    v = (rand() & 0x3F0) + 0xA00;
    p = o->model;
    p->scale.vx = p->scale.vy = p->scale.vz = v;
    AF(o->model, s16, 0x12) = rand() & 0xFF0;
    AF(o, s16, 6) = AF(o, s16, 0xFE) = g_PlayerX;
    AF(o, s16, 0xA) = D_80126B62;
    o->pos[2].h.i = o->work100 = D_80126B66;
    AF(o, s16, 0xE2) = (rand() & 0x1C) + 0x18;
    o->vel[1] = 0xFFE80000;
    o->accel[1] = 0x8000;
    o->vel[2] = 0x50000;
    o->work106 = rand() & 0xF0;
    o->work108 = rand() & 0xF0;
    func_sc03_024_80186C20(o);
    if (n != 1) {
        q = (u8 *) SpawnPropFrom(o, 0x22);
        if (q != 0) {
            AF(q, s16, 0x34) = 0x3001;
            AF(q, s32, 0x14) = 0xFFFC0000;
        }
    }
    NextState(o);
}

void func_sc03_024_80186BE4(StageActor *arg0) {
    D_sc03_024_801BA5BC[arg0->state]();
}

void func_sc03_024_80186C20(u8 *o) {
    WMtx m;
    SV8 v;
    s32 flag;

    m = GsIDMATRIX;
    RotMatrixY(AF(AF(o, u8 *, 0x20), s16, 0x12), &m);
    m.t[0] = AF(o, s16, 0xFE);
    m.t[1] = AF(o, s16, 0xA);
    m.t[2] = AF(o, s16, 0x100);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s16, 0xE2);
    RotTransSV(&v, &v, &flag);
    AF(o, s16, 6) = v.x;
    AF(o, s16, 0xE) = v.z;
}

void func_sc03_024_80186D10(StageActor *arg0) {
    s32 *temp_s1;
    s32 temp_a1;
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_s1 = (s32 *)arg0->message;
    temp_v0 = AllocActorModel((s32) arg0);
    arg0->model = temp_v0;
    if ((temp_v0 == 0) || (temp_s1 == NULL) || (temp_a1 = *temp_s1, (temp_a1 == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, temp_a1);
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    arg0->model->scale.vx = (u16) (u16)arg0->param;
    arg0->model->scale.vz = (u16) (u16)arg0->param;
    arg0->work100 = 0;
    arg0->work102 = (u16) (u16)arg0->pos[1].h.i;
    if ((s16) (u16)arg0->param >= 0x1001) {
        arg0->work100 = 1;
    }
    arg0->hitState = 0x8400;
    arg0->targetClass = 2;
    AF(arg0, void *, 0x58) = (void *) ((arg0->work100 * 0x10) + &D_sc03_024_801BA594);
    NextState((s32) arg0);
}

void func_sc03_024_80186E08(StageActor *arg0) {
    arg0->pos[1].w += arg0->vel[1];
    arg0->vel[1] += arg0->accel[1];
    if (arg0->vel[1] > -0x20000) {
        FreeActor(arg0);
        return;
    }
    arg0->model->rot.vy += 0x30;
    arg0->model->rot.vx += (u16)arg0->work106;
    arg0->model->rot.vz += (u16)arg0->work108;
    arg0->workE0 += arg0->vel[2];
    func_sc03_024_80186C20(arg0);
}
