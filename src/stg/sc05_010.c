#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
s32 func_sc05_010_80184934(s32 arg0);
void func_sc05_010_80184988(u8 *arg0);
extern void (*D_sc05_010_80192934[])();
extern void (*D_sc05_010_801929DC[])();
extern void (*D_sc05_010_801924E4[])();
extern void (*D_sc05_010_80192CB8[])();
extern void (*D_sc05_010_80192724[])();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_010_8017BE9C(void) {
}

void func_sc05_010_8017BEA4(void) {
}

void func_sc05_010_8017BEAC(void) {
}

void func_sc05_010_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_010_8018C3E0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void (*D_sc05_010_8018C498[])();
extern u8 D_sc05_010_8018C3E8;
extern void SetPlayerMotion();
extern void BumpSub2Copy();
extern void PlaySe();
extern void SpawnObj68();
extern s32 FindObj68ByKind();
extern void SetObjByte1C7();
extern s32 GetTechnique();
extern u8 D_sc05_010_8018C490;
extern void StartPlayerActionScript();
extern s32 g_PlayerActionScript;
extern s16 D_80126B0C;
extern void (*D_sc05_010_8018C4E0[])();
extern void UpdateObj68Matrix();
extern s16 D_sc05_010_8018C4D8;
extern s16 D_sc05_010_8018C4DA;
extern s16 D_sc05_010_8018C4DC;
extern u8 D_sc05_010_80191BA8;
extern s32 AllocModel6To16();
extern void InitModel();
extern void ObjLocalToWorld16();
extern void SetObjPush();
extern void NextObjState();
extern u8 D_sc05_010_8018C4A8;
extern u8 D_sc05_010_8018C4F0;
extern u8 D_sc05_010_80192200;
extern void AddObj68PushSetVel();
extern void MoveObj68();
extern void StartCameraShake();
extern void func_8001C810();
extern void SpawnObj68On();
extern void FreeObj68();
extern void (*D_sc05_010_8018C524[])();
extern void func_sc05_010_8017DFAC();
extern u8 D_800DF2E0;
extern u8 D_sc05_010_8018C504;
extern void SetObjTimer();
extern s32 TickObjTimer();
extern void (*D_sc05_010_8018C530[])();
extern void (*D_sc05_010_80192258[])();
void func_sc05_010_8017E7F4(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc05_010_80192260[])();
void func_sc05_010_8017E81C(void);
extern u8 D_sc05_010_8019226C;
extern u8 D_sc05_010_80192274;
extern void func_sc05_010_8017E9D4();
extern void (*D_sc05_010_8019227C[])();
extern void (*D_sc05_010_80192568[])();
extern void (*D_sc05_010_801927B8[])();
extern void (*D_sc05_010_80192B68[])();
extern void (*D_sc05_010_80192DE0[])();
extern void (*D_sc05_010_80192DE8[])();
extern void (*D_sc05_010_80192DF8[])();
extern void (*D_sc05_010_80192E34[])();
extern void (*D_sc05_010_80192E50[])();
extern void (*D_sc05_010_80192E6C[])();
extern void (*D_sc05_010_8019426C[])();
extern u16 D_800B99DA;
extern s32 QueueImage();
extern u8 D_sc05_010_801C4148;
extern u8 D_sc05_010_801941CC[];
extern u8 D_sc05_010_801C4048[];
extern void InitSpriteKind2();
extern s32 AllocActorSprite();
extern s32 func_sc05_010_801849DC();
extern void (*D_sc05_010_801942B4[])();
extern void (*D_sc05_010_801942CC[])();
extern u8 D_sc05_010_80194290;
extern u8 D_sc05_010_801942C0;
extern void (*D_sc05_010_801C3CF0[])();
extern s32 func_sc05_010_80187B28();
extern void (*D_sc05_010_801C3CFC[])();
extern void (*D_sc05_010_801C3D18[])();
extern void (*D_sc05_010_801C3D3C[])();
extern void (*D_sc05_010_801C3DD8[])();
extern void (*D_sc05_010_801C3E40[])();

extern s32 SetState();

extern s32 func_sc05_010_8017BF34();
extern void CollidePlayerMove();
extern s32 ProbePlatformByMove();
extern void ProbeGroundByMove();
extern void func_sc05_010_80187C74();
extern void func_sc05_010_80188234();
extern void func_sc05_010_8018852C();

void func_sc05_010_8017BEBC(s32 arg0, s32 arg1) {
    func_sc05_010_8017BF34(arg0, arg1, 0xC, 0);
}

void func_sc05_010_8017BEE0(s32 arg0, s32 arg1, s16 arg2) {
    func_sc05_010_8017BF34(arg0, arg1, (s32) arg2, 0);
}

void func_sc05_010_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc05_010_8017BF34(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

extern s32 SelectCamera();
extern void FreeProp();
extern u8 D_sc05_010_801C7E80;
extern void func_sc05_010_80184100();
extern void SetShapeCircle();
extern s32 AllocActorModel();
extern void RejectSpawn();
extern u8 D_sc05_010_801B5C84;
extern u8 D_sc05_010_801B6434;
extern s32 func_sc05_010_801841E4();
extern void func_sc05_010_80184214();
extern s32 FreeActor();
extern void DrawFadeWhite();
extern void FreeEffect();
extern s32 func_sc05_010_80187B80();
extern s32 SpawnEffectOn();
extern s32 FindEffectByKind();
extern s32 func_sc05_010_80187E9C();
extern void DamagePlayerHp();
extern s32 ResetPlayerAfterHit();
extern void func_sc05_010_80187F48();
extern s32 func_sc05_010_80188468();
extern u8 D_800D46E4;
extern u8 D_800D5880;
extern void ClearPlayerHittable();
extern s32 func_sc05_010_801886F4();
extern void EnterPlayerStanding();
extern void SetPlayerMotionBlend();
extern void func_80165718();
extern u8 D_sc05_010_801C3DE4;
extern u8 D_sc05_010_801C3DF0;
extern s32 AllocSprite16To3E();
extern void InitSpriteKind3();
extern void StartSpriteAnim();
extern s32 func_sc05_010_8018890C();
extern s32 StepSpriteAnim();
extern s32 func_800D1FC8();

extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern s32 SelectCollisionMap();

extern void SetPlayerMark4C();
extern void NextPlayerActionHandler();
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
extern u8 g_AltCameras;
extern s32 D_80126E6C;
extern s32 D_80126E74;
extern s16 D_80126E80;
extern s16 D_80126E82;
extern s16 D_80126E84;
extern s16 D_80126E8E;
extern s16 D_80126E90;
extern s16 D_80126E92;
extern void SetCameraUpdateOf();
extern u8 D_sc05_010_80192288;
extern void func_sc05_010_8017EAE4();
extern u8 D_sc05_010_80192A30;
extern u8 D_sc05_010_80192A9C;
extern void StopWithGravity();
extern void func_8001CA1C();
extern s16 g_PlayerHitKind;
extern s16 g_PlayerHitDamage;
extern void (*D_sc05_010_80192AEC[])();
extern s32 ActorTouchesPlayer();
extern void func_sc05_010_80183D5C();
void func_sc05_010_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 func_sc05_010_8017E910();
void func_sc05_010_80187BAC(void);
s32 func_sc05_010_8017E9B4(void);
extern s32 SpawnActorArg();
extern u8 D_sc05_010_80188CCC;
extern u8 D_sc05_010_8019257C;
extern s32 SetupActor();
extern s32 SpawnActor();
extern u8 D_sc05_010_801922B0;
extern u8 D_sc05_010_801926E0;
extern u8 D_sc05_010_80192714;
extern u8 D_sc05_010_8019273C;
extern u8 D_sc05_010_80192778;
extern s16 D_sc05_010_801927AC[];
extern s32 func_sc05_010_8017ECE4();
extern void TakeDamageAndRecoil();
extern void SpawnKind39Trio();
extern void func_800CB0E8();
extern s32 MoveCollidePassable();
extern s32 TickTimer();
extern u8 D_sc05_010_801928F0;
extern s32 D_sc05_010_801C7E54;
extern void SetModelCullBox();
extern u8 D_sc05_010_8019294C;
extern u8 D_sc05_010_801AB1A8;
extern u8 D_sc05_010_801929A8;
extern s32 D_sc05_010_801C7E5C;
extern u8 D_sc05_010_801929F4;
extern u8 D_sc05_010_801AB180;
extern s32 MoveCollide();
extern u8 D_sc05_010_80192AFC;
extern u8 D_sc05_010_80192B38;
extern void StopMotion();
extern u8 D_sc05_010_80192B70;
extern u8 D_sc05_010_80192C30;
s32 func_sc05_010_8018423C(StageActor *arg0);
extern u8 D_sc05_010_80192D18;
extern u8 D_sc05_010_80192E3C;
extern u8 D_sc05_010_80192E48;
extern u8 *D_sc05_010_801C7E64[];
extern u8 D_sc05_010_801988EC;
extern u8 D_sc05_010_801C7FC0;
extern s32 func_8013C08C();
extern void SetVelFromPushKeepAxes();
extern void MoveObjByVel();
extern void AddFallSpeedLimited();
extern void ApplyFallSpeed();
extern void func_801470B4();
s32 func_sc05_010_80188168(s32 arg0);
extern void SpawnEffect();

extern u8 D_sc05_010_80192480;
extern s32 D_sc05_010_801C39FC[];
extern s32 D_sc05_010_801C3A00[];
extern u8 D_sc05_010_801927D0;
extern u8 D_sc05_010_80192804;

extern void func_800CFBCC();
extern void (*D_sc05_010_801925B0[])();
extern s32 RequestBgmPack();
extern u8 D_sc05_010_801C3BF8;
extern u8 D_sc05_010_801C3C20;
extern void DrawPrimF4Screen();
extern void DrawPrimG4ScreenDithered();

extern u8 D_80062C04;
extern void StartRumbleScript();
extern void ShowQueuedDamageNumber();
extern void SetPlayerFlag7E2();
extern void SetFallSpeed();
extern void LeavePlatform();
extern void ResetTiltVectors();


extern u8 D_sc05_010_801928B8;
extern u8 D_sc05_010_801928C8;
extern u8 D_sc05_010_801A3E2C;
extern void InitNullModel();
extern void UpdateModelZYX();
extern void func_sc05_010_80181670();

extern u8 D_sc05_010_80192924;
extern void (*D_sc05_010_80192990[])();
extern void LocalToWorld();
extern void UpdateModelYXZ();
extern void (*D_sc05_010_80192A28[])();
extern u8 D_sc05_010_80192980;
extern u8 D_sc05_010_80192988;
extern s32 ActorSegmentHitsPlayer();
extern void *g_PlayerAttacker;
extern u8 *D_sc05_010_801C7E50[];
extern s32 D_sc05_010_801C7E34;
extern u8 *D_sc05_010_801C7E30[];

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

extern void func_sc05_010_801806A0();
extern s32 func_800CF8B4();
extern s32 PlayerFlag1000();

extern u16 g_Actors;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 g_CameraFocus;
extern u8 D_sc05_010_80192284[];
extern s32 GetObjPadPressed();
extern s32 EaseValue();
extern s32 EaseAngle();

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;

typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
extern u8 D_sc05_010_8018C3B0[];
extern s32 SpawnFromDef();

s32 func_sc05_010_8017BF34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FeS14s s;
    s32 r;

    s.a = 0x6B;
    s.x = -0x94;
    s.e = arg2;
    s.y = -0x68;
    s.z = 0;
    s.b = arg3;
    s.c = 0;
    s.f = ((s32 *)&D_sc05_010_8018C3B0)[(s16) arg2];
    r = SpawnFromDef((s32) &s);
    if (r != 0) {
        AF(r, s32, 0xD4) = arg0;
        AF(r, s32, 0xD8) = arg1;
    }
    return r;
}

void func_sc05_010_8017BFBC(s32 arg0, s32 arg1) {
    s16 i;
    u8 *p;

    p = (u8 *)&g_Actors;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (*(u16 *)p == 0x6B) {
            AF(p, s32, 0xD4) = arg0;
            AF(p, s32, 0xD8) = arg1;
            return;
        }
    }
}

void func_sc05_010_8017C010(s32 arg0, s32 arg1, s16 arg2) {
    s16 i;
    u8 *p;

    p = (u8 *)&g_Actors;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (*(u16 *)p == 0x6B) {
            AF(p, s16, 0x70) = arg2;
            AF(p, s32, 0xD4) = arg0;
            AF(p, s32, 0xD8) = arg1;
            return;
        }
    }
}

extern void ZeroFill();

void func_sc05_010_8017C068(void) {
    s16 i;
    u8 *p;

    p = (u8 *)&g_Actors;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (*(u16 *)p == 0x6B) {
            if (AF(p, s32, 0xCC) != 0) {
                ZeroFill(AF(p, s32, 0xCC), 0x38);
            }
            if (AF(p, s32, 0xD0) != 0) {
                ZeroFill(AF(p, s32, 0xD0), 0x38);
            }
            FreeActor((s32) p);
            return;
        }
    }
}

void func_sc05_010_8017C114(StageActor *arg0) {
    D_sc05_010_8018C3E0[arg0->state]();
}

extern s32 D_sc05_010_801C7E70;
extern s16 D_sc05_010_801C7E68;
extern s16 D_sc05_010_801C7E6A;
extern s16 g_PlayerX;
extern s16 D_80126B62;
extern s32 D_80126B6C;
extern u8 D_sc05_010_801A3AC4;
extern u8 D_sc05_010_801A3B2C;
extern u8 D_sc05_010_801A3B74;
extern u8 D_sc05_010_801A33AC;
extern u8 D_sc05_010_801A3BB4;
extern s32 IsPlayerHitBy();
extern void ClearPlayerHitBy();
extern s32 TurnStepToTarget();
extern s32 DistSqToTarget();
extern void SetLocalVelocityXZ();
extern s32 ActorSegmentDamagesPlayer();
extern s32 TurnStep();
extern u8 D_sc05_010_80192844;
extern u8 D_sc05_010_8019284C;
extern s16 D_sc05_010_801C7E28;
extern s16 D_sc05_010_801C7E2C;
extern u16 D_sc05_010_8019244C[];
extern OtRef g_WorldOtOrg[];
extern s32 g_CameraProj;
extern u8 D_800AF648;
extern u8 *AllocPrim(s32 n);
extern s32 GetTPage();
extern void SetDrawMode();
extern void AddPrim();
extern void RotTransSV();
extern SV8 D_sc05_010_801928B0;
extern s16 D_sc05_010_80192870;
extern s32 D_sc05_010_80192874[];
extern u8 D_sc05_010_80192880[];
extern u8 D_sc05_010_80192890[];
extern u8 D_sc05_010_801928A0[];
static inline s32 Size_80181670(u8 *o) {
    s32 s;
    s = D_sc05_010_80192870;
    AF(o, s16, 0xDE) += 0x100;
    return ((((rsin(AF(o, s16, 0xDE)) * 3 / 8 - 0x800) < 0 ? -(rsin(AF(o, s16, 0xDE)) * 3 / 8 - 0x800) : rsin(AF(o, s16, 0xDE)) * 3 / 8 - 0x800) * s) >> 12) + 8;
}
extern s16 D_sc05_010_80192CC0;
extern s32 D_sc05_010_80192CC4[];
extern u8 D_sc05_010_80192CD0[];
extern u8 D_sc05_010_80192CE0[];
extern u8 D_sc05_010_80192CF0[];
static inline s32 Size_8018340C(u8 *o) {
    s32 s;
    s = D_sc05_010_80192CC0;
    return ((((rsin(AF(o, s16, 0xDE)) * 3 / 8 - 0x800) < 0 ? -(rsin(AF(o, s16, 0xDE)) * 3 / 8 - 0x800) : rsin(AF(o, s16, 0xDE)) * 3 / 8 - 0x800) * s) >> 12) + 8;
}

extern u8 D_sc05_010_801A35FC;
extern u8 D_sc05_010_801A3C44;
extern s32 D_sc05_010_801C7E78;
extern s32 g_PlayerModel;
extern s32 g_PlayerHitData;
extern s32 PathHitsModel();
extern u8 g_GroundNormal;
extern void HitPlayer();
extern u8 D_sc05_010_80192488;
extern u8 D_sc05_010_801A3D94;
extern u8 *D_sc05_010_801C7E60;
extern u16 D_80126B66;
static inline void LoadPair(u8 *o) {
    LoadImage(&D_sc05_010_80192480, D_sc05_010_801C39FC[AF(o, u8, 0xC2)]);
    LoadImage(&D_sc05_010_80192488, D_sc05_010_801C39FC[AF(o, u8, 0xC2) + 1]);
}
extern void StartEvent();
extern void TakePlayerControlNoStop();
extern u8 *D_sc05_010_801C7E4C;
extern u8 *SpawnPropFrom();
extern void ClearPlayerMark4C();
extern s32 D_80126B60;
extern s32 D_sc05_010_80192D64[];
extern s32 func_80174774();
extern void GiveItem();
extern s32 IsEventDone();
extern void EndEvent();
extern u8 D_sc05_010_801923C4;
extern s32 RotTransPers3();
extern u8 *SpawnKind205();
extern void SetLineF2();

typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
extern u8 D_sc05_010_801C6FA8[];
extern void func_sc05_010_8017E368();
extern void PosToSVec();
extern void SetScaleMatrix();
extern SV8 D_sc05_010_8018C538[];
extern void RotateSVectorY();
extern s32 ProjectPoint();
extern void RotateMatrixByZYX();
extern void DrawPrimFT4Screen();

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { CV a; CV b; u8 pad[0x38]; } E40;
typedef struct { u8 b[4]; } B4;
extern XY D_sc05_010_801C3B7C[];
extern u8 D_sc05_010_801C3BA8[];
extern B4 D_sc05_010_801C3BB4[];
extern u8 D_sc05_010_801C3BE0;
extern B4 D_sc05_010_801C3CE0, D_sc05_010_801C3CDC, D_sc05_010_801C3CAC, D_sc05_010_801C3CA8, D_sc05_010_801C3C78, D_sc05_010_801C3C74, D_sc05_010_801C3C44, D_sc05_010_801C3C40, D_sc05_010_801C3C18;
extern void InitSpriteKind0();

typedef struct { u8 b[0x10C]; } O10C;
extern s16 D_sc05_010_8018C3AC; extern s16 D_sc05_010_8018C3A0; extern s16 D_sc05_010_8018C394; extern u8 D_sc05_010_801C6EE0; extern s32 AllocActorSprite(); extern void SjisToGlyphs(); extern void InitTextSprite(); extern s16 D_sc05_010_801C6F08; extern s16 D_sc05_010_801C6F18; extern s16 D_sc05_010_801C6F12; extern s16 D_sc05_010_801C6F0A; extern s16 D_sc05_010_801C6F22; extern s16 D_sc05_010_801C6F1A; extern s16 D_sc05_010_801C6F46; extern s16 D_sc05_010_801C6F3E; extern s16 D_sc05_010_801C6F56; extern s16 D_sc05_010_801C6F4E; extern s16 D_sc05_010_801C6F70; extern s16 D_sc05_010_801C6F80; extern s16 D_sc05_010_801C6F7A; extern s16 D_sc05_010_801C6F72; extern s16 D_sc05_010_801C6F8A; extern s16 D_sc05_010_801C6F82; extern s16 D_sc05_010_801C6F74; extern s16 D_sc05_010_801C6F40; extern s16 D_sc05_010_801C6F0C; extern u8 D_sc05_010_801C6F30; extern u8 D_sc05_010_801C6F28; extern u8 D_sc05_010_801C6F34; extern u8 D_sc05_010_801C6F2C; extern u8 D_sc05_010_801C6F31; extern u8 D_sc05_010_801C6F29; extern u8 D_sc05_010_801C6F36; extern u8 D_sc05_010_801C6F32; extern u8 D_sc05_010_801C6F2E; extern u8 D_sc05_010_801C6F2A; extern u8 D_sc05_010_801C6F64; extern u8 D_sc05_010_801C6F5C; extern u8 D_sc05_010_801C6F65; extern u8 D_sc05_010_801C6F5D; extern u8 D_sc05_010_801C6F69; extern u8 D_sc05_010_801C6F61; extern u8 D_sc05_010_801C6F9C; extern u8 D_sc05_010_801C6F98; extern u8 D_sc05_010_801C6F94; extern u8 D_sc05_010_801C6F90; extern u8 D_sc05_010_801C6F9D; extern u8 D_sc05_010_801C6F99; extern u8 D_sc05_010_801C6F95; extern u8 D_sc05_010_801C6F91; extern u8 D_sc05_010_801C6F9E; extern u8 D_sc05_010_801C6F9A; extern u8 D_sc05_010_801C6F96; extern u8 D_sc05_010_801C6F92; extern u8 D_sc05_010_801C6F6A; extern u8 D_sc05_010_801C6F66; extern u8 D_sc05_010_801C6F62; extern u8 D_sc05_010_801C6F5E; extern s32 D_sc05_010_801C6F6C; extern s32 D_sc05_010_801C6F38; extern s32 D_sc05_010_801C6FA0;
extern u8 D_sc05_010_801A3D5C;
extern s32 PlayerEvent01();
extern s32 PlayerEvent40();
extern u8 *D_80126CC8;
extern void CarryPlayer();
extern s32 DistSqToPlayer();
extern u8 D_sc05_010_80194234;
extern u8 D_sc05_010_80194244;
extern s32 UpdateScript();
extern void ArmCrest();
extern s32 GetPlayerAction();
extern void func_80175454();
extern s32 GetPlayerByte1C7();
extern void EndPlayerAction();
extern void func_8002959C();

void func_sc05_010_8017C150(StageActor *o) {
    u8 *m;
    s16 x1;
    s16 y1;
    s16 y2;
    s16 x2;
    s16 y;
    D_sc05_010_8018C3AC = 0;
    D_sc05_010_8018C3A0 = 0;
    D_sc05_010_8018C394 = 0;
    if (AF(o, u8 *, 0xD0) == 0) {
        m = (u8 *)AllocActorSprite();
        if (m == 0) return;
        SjisToGlyphs(o->message, &D_sc05_010_801C6EE0);
        InitTextSprite(m, &D_sc05_010_801C6EE0);
        AF(m, s16, 8) = o->pos[0].h.i + 6;
        AF(m, s16, 0xA) = o->pos[1].h.i + 9;
        AF(m, s16, 0x2C) = 3;
        AF(m, u8, 0x27) = 1;
        o->ext1 = m;
    }
    x1 = o->pos[0].h.i;
    D_sc05_010_801C6F08 = x1;
    D_sc05_010_801C6F18 = x1 - 4;
    y1 = AF(o, s16, 0xA);
    D_sc05_010_801C6F0A = D_sc05_010_801C6F12 = y1;
    D_sc05_010_801C6F1A = D_sc05_010_801C6F22 = y1 + 7;
    y2 = AF(o, s16, 0xA);
    D_sc05_010_801C6F3E = D_sc05_010_801C6F46 = y2;
    D_sc05_010_801C6F4E = D_sc05_010_801C6F56 = y2 + 7;
    x2 = AF(o, s16, 6);
    D_sc05_010_801C6F70 = x2 + 2;
    D_sc05_010_801C6F80 = x2 - 2;
    y = AF(o, s16, 0xA);
    D_sc05_010_801C6F28 = D_sc05_010_801C6F30 = 0xFF;
    D_sc05_010_801C6F2C = D_sc05_010_801C6F34 = 0xFF;
    D_sc05_010_801C6F29 = D_sc05_010_801C6F31 = 0;
    D_sc05_010_801C6F32 = D_sc05_010_801C6F36 = 0;
    D_sc05_010_801C6F2A = D_sc05_010_801C6F2E = 0;
    D_sc05_010_801C6F5C = D_sc05_010_801C6F64 = 0xFF;
    D_sc05_010_801C6F72 = D_sc05_010_801C6F7A = y + 4;
    D_sc05_010_801C6F82 = D_sc05_010_801C6F8A = y + 0xB;
    D_sc05_010_801C6F5D = D_sc05_010_801C6F65 = 0xFF;
    D_sc05_010_801C6F61 = D_sc05_010_801C6F69 = 0xFF;
    D_sc05_010_801C6F90 = D_sc05_010_801C6F94 = D_sc05_010_801C6F98 = D_sc05_010_801C6F9C = 0x40;
    D_sc05_010_801C6F91 = D_sc05_010_801C6F95 = D_sc05_010_801C6F99 = D_sc05_010_801C6F9D = 0x40;
    D_sc05_010_801C6F92 = D_sc05_010_801C6F96 = D_sc05_010_801C6F9A = D_sc05_010_801C6F9E = 0x40;
    D_sc05_010_801C6F5E = D_sc05_010_801C6F62 = D_sc05_010_801C6F66 = D_sc05_010_801C6F6A = 0;
    D_sc05_010_801C6F0C = D_sc05_010_801C6F40 = 2;
    D_sc05_010_801C6F74 = 4;
    D_sc05_010_801C6F38 = D_sc05_010_801C6F6C = 0;
    D_sc05_010_801C6FA0 = 0x60000000;
    if (AF(o, s16, 0x70) == 0) o->param = 0x100;
    D_sc05_010_8018C3AC = 2;
    AF(o, s16, 2)++;
}

extern s16 D_sc05_010_80192470[];
extern u8 D_sc05_010_801A36FC;
extern void ShowDamage();
extern void ShowDefeat();
extern u8 D_sc05_010_80192860;
extern void GainStat3FromActor();
extern void GainStat2FromActor();
extern void func_800D1724();
extern s32 D_sc05_010_801941E8[];
extern u8 D_sc05_010_8019222C;

extern u32 D_sc05_010_801C7E74;
extern u8 D_sc05_010_801924D4[];
extern u8 D_sc05_010_801A34B4;
extern u8 D_sc05_010_801A3844;
extern u8 D_sc05_010_801A3A2C;
extern u8 D_sc05_010_801925C4[];
extern s16 D_sc05_010_801926D4[];
extern u8 D_sc05_010_80192614[];
extern s32 MoveImage();

extern void func_80153C74();

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { u8 a, b; } B2;
typedef struct { u8 type; u8 kind; s16 a[2]; s16 b[2]; s16 x; s16 z; } E14;
extern u8 D_80062BF4;
extern s32 AngleDist();
extern u8 D_800D58AC;

extern u8 D_sc05_010_801924A0;
extern u8 *D_sc05_010_801C7E58;
extern u8 D_sc05_010_80192478[];
extern u16 D_sc05_010_801922B8[];
extern u8 D_sc05_010_8019231C;



extern void func_8016B3F4();
extern s32 func_801535F4();
extern u8 D_sc05_010_801C3D28;
extern void StartPlayerSlide();
extern void SpawnEffect2();




extern u8 *SpawnProp();
extern void AngleToVec2();
static inline s32 rsgn(s32 t) {
    return (rand() & 1) ? t : -t;
}

typedef struct { s32 x, y, z; u8 r, g, b, cd; } L16;
typedef struct { s32 a, b; } P8;
typedef struct { u16 a, b, c, d; u8 pad[12]; } S20;
typedef struct { s32 a, b; } W2;
extern u8 D_sc05_010_801C5B80;
extern u8 D_sc05_010_801C5B84;
extern u8 D_sc05_010_801C7E7C;
extern void func_8001CD50();


typedef struct { s16 x, y, z; } SV6;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
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

void func_sc05_010_8017C43C(StageActor *arg0) {
    s16 cur = arg0->work108;
    s32 tgt = *AF(arg0, s16 *, 0xD4);
    s32 max = *AF(arg0, s16 *, 0xD8);
    s32 half;
    s16 n;

    if (cur != tgt) {
        if (tgt < cur) {
            arg0->work108 = cur - (max * 3) / arg0->param;
            if (arg0->work108 < tgt) {
                arg0->work108 = tgt;
            }
            ((XY *)&D_sc05_010_8018C394)->x = (arg0->work108 * arg0->param) / max;
            if (((XY *)&D_sc05_010_8018C394)->x == 0 && tgt != 0) {
                ((XY *)&D_sc05_010_8018C394)->x = 1;
            }
        } else {
            s16 t = arg0->work10A;
            if (cur < t) {
                arg0->work108 = cur + (max * 3) / arg0->param;
                if (tgt < arg0->work108) {
                    arg0->work108 = max;
                }
                ((XY *)&D_sc05_010_8018C394)->x = (arg0->work108 * arg0->param) / max;
            } else if (t < max) {
                arg0->work10A = t + (max * 3) / arg0->param;
                if (max < arg0->work10A) {
                    arg0->work10A = max;
                }
                D_sc05_010_8018C3A0 = (arg0->work10A * arg0->param) / max;
                D_sc05_010_8018C3AC = D_sc05_010_8018C3A0 + 2;
            }
        }
    }
    if (arg0->unkFC == 0xB) {
        u8 c = (arg0->timer++ & 1) ? 0xC0 : 0;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[2].g = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[0].g = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].c[3].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].c[2].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].c[1].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].c[0].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[3].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[2].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[1].b = c;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[0].b = c;
    }
    half = arg0->param >> 1;
    n = ((XY *)&D_sc05_010_8018C394)->x;
    if (n < (s16)half) {
        s32 v;
        v = (n * 255) / (s16)half;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].p[1].x = ((QuadArg *)&D_sc05_010_801C6F08)[0].p[0].x + n;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].p[3].x = ((QuadArg *)&D_sc05_010_801C6F08)[0].p[1].x - 4;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[3].g = v;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].c[1].g = v;
    } else {
        s32 x;
        s16 xm;
        u8 *g;
        s32 v;
        v = ((n - (s16)half) * 255) / (s16)half;
        g = &((QuadArg *)&D_sc05_010_801C6F08)[0].c[1].g;
        *g = ((QuadArg *)&D_sc05_010_801C6F08)[0].c[3].g = 0xFF;
        x = (u16)((QuadArg *)&D_sc05_010_801C6F08)[0].p[0].x + half;
        xm = x - 4;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].p[0].x = x;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].p[1].x = ((QuadArg *)&D_sc05_010_801C6F08)[0].p[0].x + n;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].p[1].x = x;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].p[2].x = xm;
        ((QuadArg *)&D_sc05_010_801C6F08)[0].p[3].x = xm;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].p[3].x = ((QuadArg *)&D_sc05_010_801C6F08)[1].p[1].x - 4;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].c[3].r = -v;
        ((QuadArg *)&D_sc05_010_801C6F08)[1].c[1].r = -v;
        DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc05_010_801C6F08)[1]);
    }
    {
        s16 *p = &((QuadArg *)&D_sc05_010_801C6F08)[2].p[3].x;
        ((QuadArg *)&D_sc05_010_801C6F08)[2].p[1].x = ((QuadArg *)&D_sc05_010_801C6F08)[2].p[0].x + D_sc05_010_8018C3A0;
        *p = ((QuadArg *)&D_sc05_010_801C6F08)[2].p[1].x - 4;
    }
    DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc05_010_801C6F08)[0]);
    DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc05_010_801C6F08)[2]);
}

void func_sc05_010_8017C8D0(u8 *obj) {
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

void func_sc05_010_8017D7B0(u8 *arg0) {
    D_sc05_010_8018C498[AF(arg0, u8, 0x216)]();
}

void func_sc05_010_8017D7EC(s32 arg0) {
    EndScene();
    SetPlayerMotion(arg0, (s32) &D_sc05_010_8018C3E8);
    BumpSub2Copy(arg0);
}

void func_sc05_010_8017D82C(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x20000);
        SpawnObj68(0x16, (s32) arg0, 0, -0x80, /* extra? */ -0x10, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
        PlaySe(0x7BC);
        BumpSub2Copy((s32) arg0);
    }
}

void func_sc05_010_8017D8A8(s32 arg0) {
    if (FindObj68ByKind(arg0, 0x16) == 0) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & 0xFFFDFFFF);
        SetObjByte1C7(arg0, GetTechnique() & 0xFF, 0x80);
        BumpSub2Copy(arg0);
    }
}

void func_sc05_010_8017D908(void) {
}

void func_sc05_010_8017D910(void) {
    StartPlayerActionScript((s32) &D_sc05_010_8018C490, 0x01000000);
}

s32 func_sc05_010_8017D938(void) {
    return g_PlayerActionScript == (s32) &D_sc05_010_8018C490;
}

s16 func_sc05_010_8017D954(void) {
    return D_80126B0C;
}

void func_sc05_010_8017D964(u8 *arg0) {
    D_sc05_010_8018C4E0[AF(arg0, u16, 2)]();
    if (AF(arg0, s32, 0x20) != 0) {
        UpdateObj68Matrix((s32) arg0);
    }
}

void func_sc05_010_8017D9C4(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = AF(arg0, s32, 0x4C);
    temp_v0 = AllocModel6To16();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc05_010_80191BA8);
        AF(temp_v0, s16, 0x10) = 0x800;
        AF(arg0, s16, 0x60) = 0;
        ObjLocalToWorld16(temp_s2, (s32) (arg0 + 4));
        SetObjPush((s32) arg0, 0, -0x400000, 0);
        D_sc05_010_8018C4DC = 0x80;
        D_sc05_010_8018C4DA = 0x80;
        D_sc05_010_8018C4D8 = 0x80;
        NextObjState((s32) arg0);
        if (AF(arg0, s32, 0x50) == 0) {
            AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        }
    }
}

void func_sc05_010_8017DA90(u8 *arg0) {
    s16 temp_v0;
    s32 var_a0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_s0 = AF(arg0, void *, 0x20);
    AddObj68PushSetVel((s32) arg0, 0, 0x20000, 0);
    MoveObj68((s32) arg0);
    if ((AF(arg0, s16, 0x60) == 0) && (AF(arg0, s32, 0x28) > 0)) {
        AF(temp_s0, s16, 0x10) = 0;
        AF(arg0, s16, 0x60) = (s16) ((u16) AF(arg0, s16, 0x60) + 1);
    }
    temp_v0 = AF(temp_s2, s16, 0xA);
    if (temp_v0 < AF(arg0, s16, 0xA)) {
        AF(arg0, s16, 0xA) = temp_v0;
        StartCameraShake((s32) &D_sc05_010_8018C4F0);
        AF(arg0, s16, 0x60) = (s16) AF(temp_s0, u16, 0x18);
        func_8001C810((s32) temp_s0, (s32) &D_sc05_010_80192200);
        AF(temp_s0, s32 *, 0x80) = &D_sc05_010_8018C4A8;
        AF(temp_s0, u16, 0x2C) = (u16) (AF(temp_s0, u16, 0x2C) | 0xA0);
        AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x50000000);
        temp_v0_2 = (u16) AF(arg0, s16, 0x60);
        AF(temp_s0, u16, 0x1C) = temp_v0_2;
        AF(temp_s0, u16, 0x1A) = temp_v0_2;
        AF(temp_s0, u16, 0x18) = temp_v0_2;
        if (AF(arg0, s32, 0x50) == 0) {
            AF(temp_s0, u16, 0x2C) = (u16) (AF(temp_s0, u16, 0x2C) | 0x10);
            SpawnObj68On(0x1B, (s32) arg0, 0, 0, /* extra? */ 1);
            SpawnObj68On(0x1B, (s32) arg0, 1, 0, /* extra? */ 1);
            SpawnObj68On(0x1B, (s32) arg0, 2, 0, /* extra? */ 1);
            SpawnObj68On(0x1B, (s32) arg0, 3, 0, /* extra? */ 1);
            var_a0 = 0x81D;
        } else {
            var_a0 = 0xC5E;
        }
        PlaySe(var_a0);
        NextObjState((s32) arg0);
        return;
    }
    if (AF(arg0, s16, 0x60) != 0) {
        temp_v0_3 = AF(temp_s0, u16, 0x1C) + 0x100;
        AF(temp_s0, u16, 0x1C) = temp_v0_3;
        AF(temp_s0, u16, 0x1A) = temp_v0_3;
        AF(temp_s0, u16, 0x18) = temp_v0_3;
    }
}

void func_sc05_010_8017DC5C(s32 arg0) {
    s16 temp_v0;

    temp_v0 = D_sc05_010_8018C4DC + 8;
    D_sc05_010_8018C4DC = (u16) temp_v0;
    D_sc05_010_8018C4DA = temp_v0;
    D_sc05_010_8018C4D8 = temp_v0;
    if (temp_v0 >= 0x101) {
        NextObjState(arg0);
    }
}

void func_sc05_010_8017DCB8(s32 arg0) {
    s16 temp_v0;

    temp_v0 = D_sc05_010_8018C4DC - 8;
    D_sc05_010_8018C4DC = (u16) temp_v0;
    D_sc05_010_8018C4DA = temp_v0;
    D_sc05_010_8018C4D8 = temp_v0;
    if (temp_v0 < -0x80) {
        FreeObj68(arg0);
    }
}

void func_sc05_010_8017DD14(u8 *arg0) {
    func_sc05_010_8017DFAC();
    D_sc05_010_8018C524[AF(arg0, u16, 2)](arg0);
    if (AF(arg0, s32, 0x20) != 0) {
        UpdateObj68Matrix((s32) arg0);
    }
}

void func_sc05_010_8017DD78(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocModel6To16();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C810(temp_v0, (s32) &D_800DF2E0);
        AF(temp_v0, s32 *, 0x80) = &D_sc05_010_8018C4A8;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0xB0);
        AF(arg0, void *, 0x58) = (void *) ((AF(arg0, s32, 0x50) * 8) + &D_sc05_010_8018C504);
        AF(temp_v0, s16, 0x1C) = 0;
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        NextObjState((s32) arg0);
        return;
    }
    FreeObj68((s32) arg0);
}

void func_sc05_010_8017DE28(u8 *arg0) {
    s16 temp_v1;
    s16 temp_v1_2;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a1, u16, 0x1C) + 0x800;
    AF(temp_a1, u16, 0x1C) = temp_v0;
    AF(temp_a1, u16, 0x18) = temp_v0;
    temp_v1 = AF(AF(arg0, void *, 0x58), s16, 0);
    if (temp_v1 < (s16) temp_v0) {
        AF(temp_a1, u16, 0x1C) = (u16) temp_v1;
        AF(temp_a1, u16, 0x18) = (u16) temp_v1;
        D_80126B0C = 1;
    }
    temp_v0_2 = AF(temp_a1, u16, 0x1A) + 0x800;
    AF(temp_a1, u16, 0x1A) = temp_v0_2;
    temp_v1_2 = AF(AF(arg0, void *, 0x58), s16, 2);
    if (temp_v1_2 < (s16) temp_v0_2) {
        AF(temp_a1, u16, 0x1A) = (u16) temp_v1_2;
        SetObjTimer((s32) arg0, (s32) AF(AF(arg0, void *, 0x58), s16, 4));
        NextObjState((s32) arg0);
    }
}

void func_sc05_010_8017DEEC(u8 *arg0) {
    s16 temp_v0;
    u16 *temp_s2;
    u16 temp_v0_2;
    void *temp_s0;

    temp_s2 = AF(arg0, u16 *, 0x4C);
    temp_s0 = AF(arg0, void *, 0x20);
    if (TickObjTimer() != 0) {
        temp_v0 = AF(temp_s0, u16, 0x1C) + 0x400;
        AF(temp_s0, u16, 0x1C) = (u16) temp_v0;
        AF(temp_s0, s16, 0x18) = temp_v0;
        if (temp_v0 >= 0x7001) {
            AF(temp_s0, u16, 0x1C) = 0x7000U;
            AF(temp_s0, s16, 0x18) = 0x7000;
        }
        temp_v0_2 = AF(temp_s0, u16, 0x1A) + 0x100;
        AF(temp_s0, u16, 0x1A) = temp_v0_2;
        if ((s16) temp_v0_2 >= 0x7001) {
            AF(temp_s0, u16, 0x1A) = 0x7000U;
        }
    }
    if (*temp_s2 != 0x16) {
        FreeObj68((s32) arg0);
    }
}

void func_sc05_010_8017DFAC(u8 *arg0) {
    u8 *s = AF(arg0, u8 *, 0x4C);
    u8 *m = AF(arg0, u8 *, 0x20);

    AF(arg0, s32, 4) = AF(s, s32, 4);
    AF(arg0, s32, 8) = AF(s, s32, 8);
    AF(arg0, s32, 0xC) = AF(s, s32, 0xC);
    AF(m, u16, 0x12) += AF(AF(arg0, u8 *, 0x58), u16, 6);
}

void func_sc05_010_8017DFF0(u8 *arg0) {
    D_sc05_010_8018C530[AF(arg0, u16, 2)]();
}

void func_sc05_010_8017E02C(u8 *o) {
    s32 i, j;
    u8 *b, *e;
    for (i = 0; i < 8; i++) {
        b = D_sc05_010_801C6FA8 + i * 0x1D0;
        AF(b, s16, 0) = 0;
        AF(b, s16, 2) = i << 9;
        AF(b, s32, 0xC) = (rand() & 0xF) << 16;
        AF(b, s32, 4) = ((rand() & 0xF) << 15) + 0x10000;
        AF(b, s32, 8) = ((rand() & 0xF) << 12) + 0x8000;
        for (j = 0; j < 16; j++) {
            e = b + 0x10 + j * 0x1C;
            AF(e, s16, 0) = 0;
            AF(e, s16, 2) = (rand() & 3) + 4;
            AF(e, s16, 8) = (j << 8) + (rand() & 0xF) * 56;
            AF(e, s16, 0xA) = (rand() & 0xF) << 8;
            AF(e, s32, 0x14) = (rand() & 0xF) << 13;
            AF(e, s32, 0xC) = ((rand() & 0xF) << 14) + 0x10000;
            AF(e, s32, 0x10) = ((rand() & 0xF) << 12) + 0x8000;
            AF(e, s16, 4) = 0x200;
            AF(e, s16, 6) = (rand() & 0xF) << 4;
            AF(e, s32, 0x18) = ((rand() & 3) << 5) + 0x40;
        }
    }
    AF(o, s16, 2)++;
}

void func_sc05_010_8017E1D4(u8 *o) {
    s32 i, j, n;
    u8 *b, *e;
    n = 0;
    for (i = 0; i < 8; i++) {
        b = D_sc05_010_801C6FA8 + i * 0x1D0;
        if (AF(b, s16, 0) == 0) AF(b, s32, 0xC) += 0x10000;
        for (j = 0; j < 16; j++) {
            e = b + 0x10 + j * 0x1C;
            switch (AF(e, s16, 0)) {
            case 0:
                AF(e, s32, 0xC) += AF(e, s32, 0x10);
                AF(e, s32, 0x14) += AF(e, s32, 0xC);
                AF(e, s16, 2)--;
                if (AF(e, s16, 2) == -1) AF(e, s16, 0)++;
                AF(e, s16, 4) += AF(e, s16, 6);
                AF(e, s16, 0xA) += 0x10;
                break;
            case 1:
                AF(e, s16, 4) += 0x80;
                AF(e, s32, 0x18) -= 8;
                if (AF(e, s32, 0x18) < 0) { AF(e, s32, 0x18) = 0; AF(e, s16, 0)++; }
                break;
            case 2:
                n++;
                break;
            }
        }
        func_sc05_010_8017E368(o, b);
    }
    if (n == 0x80) FreeEffect(o);
}

void func_sc05_010_8017E368(u8 *o, u8 *b) {
    Q40 q;
    SMtx m;
    SV8 pos;
    SV8 rot;
    SV8 out;
    SV8 v[4];
    s32 k;
    u8 *e;
    s32 a;
    Q40 *qp;

    PosToSVec(o + 4, &pos);
    rot.x = 0;
    rot.y = 0;
    rot.z = AF(b, s16, 0xE);
    RotateSVectorY(AF(b, s16, 2), &rot, &rot);
    if (ProjectPoint(&pos, &pos) & ~0x1000) return;
    q.p[0].z = 3;
    q.flag = 0x12;
    q.code = 0x50000000;
    q.uv[0] = 0x870;
    q.uv[1] = 0x1A8;
    q.uv[2] = 0x88F;
    q.uv[3] = 0x1A8;
    q.uv[4] = 0x870;
    q.uv[5] = 0x1C7;
    q.uv[6] = 0x88F;
    q.uv[7] = 0x1C7;
    pos.x += rot.x;
    pos.y += rot.y;
    pos.z += rot.z;
    qp = &q;
    for (k = 0; k < 16; k++) {
        e = b + 0x10 + k * 0x1C;
        a = AF(e, s32, 0x18);
        qp->col = a | (a << 16 | a << 8);
        rot.x = rot.y = rot.z = AF(e, s16, 4);
        SetScaleMatrix(&rot, &m);
        rot.x = 0;
        rot.y = 0;
        rot.z = AF(e, s16, 0xA);
        RotateMatrixByZYX(&rot, &m);
        ApplyMatrixSV(&m, &D_sc05_010_8018C538[0], &v[0]);
        ApplyMatrixSV(&m, &D_sc05_010_8018C538[1], &v[1]);
        ApplyMatrixSV(&m, &D_sc05_010_8018C538[2], &v[2]);
        ApplyMatrixSV(&m, &D_sc05_010_8018C538[3], &v[3]);
        rot.x = 0;
        rot.y = 0;
        rot.z = AF(e, s16, 0x16);
        RotateSVectorY(AF(e, s16, 8), &rot, &out);
        out.x += pos.x;
        out.z += pos.y;
        qp->p[0].x = out.x + v[0].x;
        qp->p[0].y = out.z + v[0].y;
        qp->p[1].x = out.x + v[1].x;
        qp->p[1].y = out.z + v[1].y;
        qp->p[2].x = out.x + v[2].x;
        qp->p[2].y = out.z + v[2].y;
        qp->p[3].x = out.x + v[3].x;
        qp->p[3].y = out.z + v[3].y;
        DrawPrimFT4Screen(qp);
    }
}

void func_sc05_010_8017E620(u8 *arg0) {
    D_sc05_010_80192258[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_010_8017E65C(u8 *arg0) {
    func_sc05_010_8017E7F4();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_010_8017E6A0(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc05_010_8017E6C4(u8 *arg0) {
    D_sc05_010_80192260[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_010_8017E700(u8 *arg0) {
    func_sc05_010_8017E81C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_010_8017E740(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D0C48(1);
        StartFade(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 RoomLoadFieldFile5(void) {
    if (FadeStep(4) & 0xFFFF) {
        func_800CFBCC(5);
        return 1;
    }
    return 0;
}

void func_sc05_010_8017E7F4(void) {
    StartPlayerActionScript((s32) &D_sc05_010_8019226C, 0x01000000);
}

void func_sc05_010_8017E81C(void) {
    StartPlayerActionScript((s32) &D_sc05_010_80192274, 0x01000000);
}

void func_sc05_010_8017E844(s32 arg0) {
    SetPlayerMark4C();
    NextPlayerActionHandler(arg0);
}

void func_sc05_010_8017E874(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0xC0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc05_010_8017E9D4, 0);
    SnapCamera((s32) &g_Camera);
    func_sc05_010_8017E9D4((s32) &g_Camera);
}

s32 func_sc05_010_8017E910(arg0, arg1, arg2, arg3)
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 arg3;
{
    D_80126E6C = 0xC8;
    D_80126E74 = 0x2BC;
    D_80126E80 = -0xE3;
    D_80126E82 = 0x400;
    D_80126E84 = 0;
    D_80126E8E = 0;
    D_80126E90 = 0;
    D_80126E92 = 0;
    SetCameraUpdateOf((s32) &g_AltCameras, (s32) func_sc05_010_8017E9D4, 1);
    SnapCamera((s32) &g_AltCameras);
    func_sc05_010_8017E9D4((s32) &g_AltCameras);
    return SelectCamera(1);
}

s32 func_sc05_010_8017E9B4(void) {
    return SelectCamera(0);
}

void func_sc05_010_8017E9D4(s32 arg0) {
    D_sc05_010_8019227C[AF(arg0, u8, 4)]();
}

void func_sc05_010_8017EA10(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc05_010_80192284)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    func_sc05_010_8017EAE4((s32) arg0, (s32) &v);
}

void func_sc05_010_8017EAB0(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x22) + 0xB;
    AF(arg0, u16, 0x22) = temp_v0;
    AF(arg0, u16, 0x1A) = temp_v0;
    func_sc05_010_8017EAE4((s32) arg0, (s32) &D_sc05_010_80192288);
}

void func_sc05_010_8017EAE4(u8 *arg0, u8 *arg1) {
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

extern void MoveProp();

typedef struct { s32 w[4]; } W16;
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
typedef struct { s16 a; u16 b; } P4;
typedef struct { u8 pad[6]; u16 f6; } OH06;
typedef struct { u8 pad[0x12]; s16 f12; } OH12;
typedef struct { u8 pad[0x76]; s16 f76; } OH76;
typedef struct { SV8 a; u8 rest[12]; } E20;

s32 func_sc05_010_8017EC7C() {
    s32 i;
    u8 *p;
    for (i = 0; i < 6; i++) {
        p = D_sc05_010_801C7E30[D_sc05_010_80192478[i]];
        if (AF(AF(p, u8 *, 0x6C), s16, 0x76) > 0) {
            return AF(p, s32, 4);
        }
    }
    return 0;
}

s32 func_sc05_010_8017ECE4(o)
    u8 *o;
{
    s32 y;
    s32 z;
    if ((u16)(AF(o, u16, 6) + 0x100) > 0x300) return -1;
    if ((u16)(AF(o, u16, 0xE) + 0xA0) > 0x140) return -1;
    y = -(rcos(AF(o, s16, 6) * 2 - 0xC0) * 0x30) >> 12;
    y -= 0x90;
    z = AF(o, s16, 0xE);
    if (z >= 0) {
        y += (z << 6) / 160;
    } else {
        y -= (z * 0x30) / 160;
    }
    if (y >= AF(o, s16, 0xA)) {
        return 0;
    }
    AF(o, s16, 0xA) = y;
    return 1;
}

void func_sc05_010_8017EDEC(StageActor *arg0) {
    s32 pad[2];
    u8 temp_v0;

    temp_v0 = (arg0->reactMode + 2) & 0xF;
    arg0->reactMode = temp_v0;
    LoadImage((s32) &D_sc05_010_80192480, D_sc05_010_801C39FC[temp_v0]);
    LoadImage((s32) (&D_sc05_010_80192480 + 8), D_sc05_010_801C3A00[arg0->reactMode]);
}

void func_sc05_010_8017EE68(u8 *o) {
    s32 i;

    if (SetupActor(o, &D_sc05_010_801924A0) == 0) return;
    AF(o, s16, 2) = 0xA;
    SetScript(o, &D_sc05_010_801A33AC);
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = -1;
    StopWithGravity(o);
    SetModelCullBox(AF(o, u8 *, 0x20), 0x400, 0x400);
    D_sc05_010_801C7E30[0] = o;
    D_sc05_010_801C7E34 = 0;
    D_sc05_010_801C7E64[0] = 0;
    for (i = 2; i < 7; i++) {
        D_sc05_010_801C7E30[i] = (u8 *)SpawnActorArg(0x25E, i - 2, o);
    }
    *(s32 *)&D_sc05_010_801C7E4C = SpawnActor(0x2B1, o);
    AF(D_sc05_010_801C7E4C, s32, 0xE0) = 0x10000000;
    AF(o, u8, 0x75) = 3;
    AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    D_sc05_010_801C7E50[0] = (u8 *)SpawnActor(0x28C, o);
    D_sc05_010_801C7E58 = (u8 *)SpawnActor(0x28E, o);
    AF(o, s16, 0x76) = 0x180;
    D_sc05_010_801C7E74 = 0;
    D_sc05_010_801C7E78 = 0;
    D_sc05_010_801C7E28 = 0;
    D_sc05_010_801C7E2C = 0;
}

void func_sc05_010_8017EFC8(StageActor *o) {
    typedef struct { u8 pad[0x1C]; s32 t; } ObjS;
    u8 k;

    if (o->timer != 0) {
        o->timer--;
        return;
    }
    if (!(o->animFlags & 0x4000)) return;
    k = D_sc05_010_801924D4[D_sc05_010_801C7E74];
    o->stateCount = 0;
    D_sc05_010_801C7E74 = (D_sc05_010_801C7E74 + 1) % 6;
    switch (k) {
    case 0:
        AF(D_sc05_010_801C7E60, s16, 0xAE) = 0;
        SetScript(o, &D_sc05_010_801A34B4);
        o->state = 3;
        o->unk84 = 0x1E;
        break;
    case 1:
        o->timer = 0x3C;
        o->state = 4;
        break;
    case 2:
        ((ObjS *)o)->t = 0;
        o->workFE = D_sc05_010_801C7E78 + 7;
        o->state = 5;
        break;
    case 3:
    case 4:
    case 5:
        o->timer = D_sc05_010_801C7E78 * 18 + 0x25;
        SetScript(o, &D_sc05_010_801A3844);
        o->state = 6;
        break;
    case 6:
        o->state = 7;
        break;
    case 7:
        D_sc05_010_801C7E70 = 0;
        SetScript(o, &D_sc05_010_801A3A2C);
        o->workFE = D_sc05_010_801C7E78 + 2;
        o->state = 2;
        break;
    case 8:
        break;
    }
}

void func_sc05_010_8017F15C(StageActor *o) {
    u8 *p;

    if (D_sc05_010_801C7E70 != 0) {
        D_sc05_010_801C7E70--;
    }
    switch (o->stateCount) {
    case 0:
        if (o->animTimer == 0) {
            AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 1;
            AF(D_sc05_010_801C7E50[0], s16, 0x102) = 0x1E;
            AF(D_sc05_010_801C7E54, s16, 0x10A) = 1;
            AF(D_sc05_010_801C7E5C, s16, 0x10A) = 1;
            SetScript(o, &D_sc05_010_801A3AC4);
            o->stateCount = 1;
        }
        break;
    case 1:
        if (AF(D_sc05_010_801C7E50[0], s16, 0x10A) >= 2) {
            o->stateCount = 2;
            o->work100 = 0x3C;
        }
        break;
    case 2:
        if (o->work100 == 0) {
            if (--o->workFE != 0) {
                PlaySoundId(0x89A, 0);
                o->work100 = 0x96;
                AF(D_sc05_010_801C7E50[0], s16, 0x102) = 0x5A;
                AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 1;
            } else {
                o->stateCount = 3;
                o->timer = 0x3C;
                AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 4;
                SetScript(o, &D_sc05_010_801A3B2C);
            }
        } else {
            o->work100--;
        }
        if (IsPlayerHitBy(D_sc05_010_801C7E54) != 0 || IsPlayerHitBy(D_sc05_010_801C7E5C) != 0) {
            SetScript(o, &D_sc05_010_801A3B74);
            AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 5;
            AF(D_sc05_010_801C7E54, s16, 0x10A) = 0;
            AF(D_sc05_010_801C7E5C, s16, 0x10A) = 0;
            AF(o, s16, 0x34) = 4;
            D_sc05_010_801C7E68 = g_PlayerX;
            D_sc05_010_801C7E6A = D_80126B62;
            AF(o, s32, 0x1C) = 0x100;
            AF(o, s16, 0xFC) = 0;
            PlaySoundId(0x89A, 0);
        }
        break;
    case 3:
        if (o->animTimer == 0) {
            SetScript(o, &D_sc05_010_801A33AC);
        }
        if (--o->timer == 0) {
            o->state = 1;
            AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 0;
            AF(D_sc05_010_801C7E54, s16, 0x10A) = 0;
            AF(D_sc05_010_801C7E5C, s16, 0x10A) = 0;
            o->timer = 0x3C;
        }
        break;
    case 4:
        if (IsPlayerHitBy(D_sc05_010_801C7E54) != 0 || IsPlayerHitBy(D_sc05_010_801C7E5C) != 0) {
            o->unkFC++;
            o->timer -= o->unkFC >> 3;
            if (o->timer <= 0) {
                g_PlayerX = -0x100;
                D_80126B62 = -0xB0;
                o->stateCount = 5;
                PlaySoundId(0xAD4, 0);
            }
            g_PlayerX = (((D_sc05_010_801C7E68 + 0x100) * o->timer) >> 8) - 0x100;
            D_80126B62 = (((D_sc05_010_801C7E6A + 0xC0) * AF(o, s32, 0x1C)) >> 8) - 0xC0;
        } else {
            o->stateCount = 3;
            o->timer = 0x3C;
            AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 4;
            SetScript(o, &D_sc05_010_801A3B2C);
            ClearPlayerHitBy(o);
        }
        break;
    case 5:
        D_80126B6C = 0;
        if (AF(o, s16, 0x98) == 0) {
            SetScript(o, &D_sc05_010_801A3BB4);
        }
        if (IsPlayerHitBy(D_sc05_010_801C7E54) == 0 && IsPlayerHitBy(D_sc05_010_801C7E5C) == 0) {
            o->stateCount = 3;
            o->timer = 0x3C;
            AF(D_sc05_010_801C7E50[0], s16, 0x10A) = 4;
            SetScript(o, &D_sc05_010_801A3B2C);
            ClearPlayerHitBy(o);
        } else {
            p = (u8 *)SpawnActor(0x2D7, o);
            if (p != 0) {
                AF(p, s16, 6) = -0x100;
                AF(p, s16, 0xA) = -0x180;
            }
        }
        break;
    }
}

void func_sc05_010_8017F5B8(StageActor *o) {
    SV8 a;
    SV8 b;
    u8 *s;
    u8 *q;
    s32 x;
    s32 y;
    u8 c;
    s32 n;
    u16 z;

    switch (o->stateCount) {
    case 0:
        if (--o->unk84 == 0) {
            PlaySoundId(0x89B, 0);
        }
        if (o->animTimer == 0) {
            SetScript(o, &D_sc05_010_801A35FC);
            o->stateCount = 1;
            D_sc05_010_801C7E64[0] = (u8 *)SpawnActor(0x2EC, o);
            if (D_sc05_010_801C7E64[0] != 0) {
                AF(D_sc05_010_801C7E64[0], s16, 6) = a.x + 0x10;
            }
            PlaySoundId(0x89C, 0);
        }
        break;
    case 1:
        if (o->animFlags & 0x4000) {
            SetScript(o, &D_sc05_010_801A3C44);
            n = D_sc05_010_801C7E78;
            o->stateCount = 2;
            o->reactMode = 0;
            o->timer = 3 - n;
            if (D_sc05_010_801C7E64[0] != 0) {
                FreeActor(D_sc05_010_801C7E64[0]);
            }
            break;
        }
        s = (u8 *)o->model->pose;
        s += 0x24;
        x = (u16)o->pos[0].h.i + AF(s, u16, 0);
        z = D_80126B66;
        a.x = x + 0x20;
        y = (u16)o->pos[1].h.i + AF(s, u16, 2);
        b.x = x + 0x10;
        a.z = b.z = z;
        b.y = a.y = y;
        if (D_sc05_010_801C7E64[0] != 0) {
            AF(D_sc05_010_801C7E64[0], s16, 6) = x + 0x30;
        }
        if ((++o->timer & 1) == 0) {
            q = (u8 *)SpawnActor(0x2EB, o);
            if (q != 0) {
                AF(q, s16, 6) = o->pos[0].h.i + AF(s, s16, 0);
                AF(q, s16, 0xA) = o->pos[1].h.i + AF(s, s16, 2);
                AF(q, s16, 0xE) = o->pos[2].h.i + AF(s, s16, 4);
                AF(AF(q, u8 *, 0x20), s16, 0x10) = AF(s, s16, 6);
                AF(AF(q, u8 *, 0x20), s16, 0x12) = AF(s, s16, 8);
                AF(AF(q, u8 *, 0x20), s16, 0x14) = AF(s, s16, 0xA);
            }
        }
        if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b) != 0) {
            HitPlayer(1, 0x4004, 0x400, 0x30, &b, &g_GroundNormal);
        }
        break;
    case 2:
        if (o->animTimer == 0) {
            SetScript(o, &D_sc05_010_801A3E2C);
            o->stateCount = 3;
        }
        break;
    case 3:
        o->reactMode = (o->reactMode + 2) & 0xF;
        LoadPair(o);
        if ((o->animFlags & 0x4000) && --o->timer == 0) {
            o->stateCount = 4;
            SetScript(o, &D_sc05_010_801A3D94);
            o->reactMode = 0;
            LoadPair(o);
        }
        break;
    case 4:
        if (o->animTimer == 0) {
            SetScript(o, &D_sc05_010_801A33AC);
            o->state = 1;
            AF(o, s32, 0x1C) = 0x3C;
            AF(D_sc05_010_801C7E60, s16, 0xAE) = -1;
        }
        break;
    }
}

void func_sc05_010_8017F9B4(StageActor *o) {
    s32 n;
    s32 i;
    u8 *p;

    if (o->timer == 0) {
        o->state = 1;
        SetScript(o, &D_sc05_010_801A33AC);
        o->timer = 0x5A;
        return;
    }
    n = o->timer - 1;
    o->timer = n;
    if (n % 19 == 0) {
        SpawnActor(0x29E, o);
        AF(AF(D_sc05_010_801C7E4C, u8 *, 0x20), s16, 0x1A) = 0xC00;
        for (i = 0; i < 8; i++) {
            p = (u8 *)SpawnActorArg(0x29E, 2, o);
            if (p != 0) {
                AF(p, s16, 6) += 0x25B;
                AF(p, s16, 0xA) += (rand() & 0x1F) - 0x70;
                AF(p, s16, 0x16) = -0x10;
                AF(p, s16, 0x12) = (rand() & 7) - 4;
                AF(p, s16, 0x1A) = -4 - (rand() & 7);
            }
        }
    }
}

void func_sc05_010_8017FAF4(StageActor *o) {
    s32 i;
    u8 *p;

    switch (o->stateCount) {
    case 0:
        if (o->animTimer == 0) {
            o->stateCount = 1;
            SetScript(o, &D_sc05_010_801A3D5C);
            o->timer = 0x5A;
            p = (u8 *)&g_Actors;
            for (i = 0; i < 0x60; i++, p += 0x10C) {
                if (*(u16 *)p == 0x2B5) {
                    AF(p, s16, 0x34) = 1;
                }
            }
            AF(D_sc05_010_801C7E4C, s32, 0xE0) = 0x78;
        }
        break;
    case 1:
        if (PlayerFlag1000() == 0 && g_Player.pos[1].w < 0) {
            if (PlayerEvent01(&g_Player) != 0 || PlayerEvent40(&g_Player) != 0) {
                g_PlayerX += 4;
            } else {
                g_PlayerX += 0x18;
            }
        }
        if (--o->timer == 0) {
            o->stateCount = 2;
            SetScript(o, &D_sc05_010_801A3E2C);
            o->reactMode = 0;
            PlaySoundId(4, 0x89F);
            o->timer = 7 - D_sc05_010_801C7E78 * 2;
        }
        break;
    case 2:
        o->reactMode = (o->reactMode + 2) & 0xF;
        LoadPair(o);
        if ((o->animFlags & 0x4000) && --o->timer == 0) {
            o->stateCount = 3;
            SetScript(o, &D_sc05_010_801A3D94);
            o->reactMode = 0;
            LoadPair(o);
        }
        break;
    case 3:
        if (o->animTimer == 0) {
            SetScript(o, &D_sc05_010_801A33AC);
            o->state = 1;
            AF(o, s32, 0x1C) = 0x5A;
            AF(D_sc05_010_801C7E60, s16, 0xAE) = -1;
            o->param &= 0xFFFE;
        }
        break;
    }
}

void func_sc05_010_8017FDE0(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        if (10000 - D_sc05_010_80192470[D_sc05_010_801C7E78] >= AF(D_sc05_010_801C7E60, s16, 0x76)) {
            AF(D_sc05_010_801C7E60, s16, 0x76) = 10000;
            AF(D_sc05_010_801C7E50[4], s16, 0xAE) = -1;
            SetScript(o, &D_sc05_010_801A36FC);
            o->stateCount = 1;
        } else {
            SetScript(o, &D_sc05_010_801A36FC);
            AF(o, s32, 0x1C) = D_sc05_010_801C7E78 * 16 + 0x19;
            o->state = 4;
            AF(D_sc05_010_801C7E60, s16, 0xAE) = -1;
        }
        break;
    case 1:
        if (D_sc05_010_801C7E30[1] == 0) {
            D_sc05_010_801C7E30[1] = (u8 *)SpawnActor(0x2DB, o);
            AF(D_sc05_010_801C7E30[1], s16, 6) += 0x270;
            AF(D_sc05_010_801C7E30[1], s16, 0xA) -= 0xA0;
        }
        o->timer = 0;
        o->stateCount++;
        break;
    case 2:
        break;
    case 3:
        SetScript(o, &D_sc05_010_801A3C44);
        o->state = 8;
        PlaySoundId(0x89F, 0);
        AF(o, s16, 0x34) = 0;
        AF(o, u16, 0x70) |= 1;
        AF(D_sc05_010_801C7E60, s16, 0xAE) = 0;
        break;
    }
}

void EventPlatformStep(StageActor *o) {
    s32 i;
    s32 f;
    u8 *q;
    s16 *g;
    u8 **tb;
    s32 n;
    s32 v;

    switch (o->stateCount) {
    case 0:
        f = 0;
        for (i = 0, tb = D_sc05_010_801C7E30, g = &D_80126B62; i < 6; i++) {
            q = AF(tb[D_sc05_010_80192478[i]], u8 *, 0x6C);
            if (AF(q, u8, 0x74) != 0) {
                f = 1;
                n = AF(q, s16, 0x70) * 16;
                v = AF(q, u16, 0xA) + *(u16 *)((u8 *)D_sc05_010_801922B8 + n);
                AF(g, s32, 0xA) = 0;
                *g = v;
            }
        }
        if (f == 0) break;
        StartEvent(o, &D_sc05_010_8019231C);
        TakePlayerControlNoStop();
        goto next;
    case 4:
        D_sc05_010_801C7E60 = (u8 *)SpawnActor(0x27C, o);
    case 2:
    next:
        o->stateCount++;
        break;
    case 1:
    case 3:
    case 5:
        break;
    }
    if (IsEventDone(o) != 0) {
        EndEvent(o);
        AF(o, s16, 2) = 1;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = 0x1E;
        AF(D_sc05_010_801C7E4C, s32, 0xE0) = 0;
    }
}

void func_sc05_010_80180108(StageActor *o) {
    SV8 a;
    SV8 b;
    s16 *p = &g_PlayerX;
    if (*p < -0x120) {
        *p = -0x120;
        a.x = -0x130;
        b.x = -0x110;
        a.y = b.y = D_80126B62 - 0x40;
        a.z = b.z = D_80126B66;
        if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b) != 0) {
            HitPlayer(1, 0x8004, 0xC00, 0xA, &b, &g_GroundNormal);
        }
    }
    if (D_sc05_010_801C7E28 != 0) {
        D_sc05_010_801C7E28--;
    }
    D_sc05_010_801924E4[o->state](o);
}

void func_sc05_010_80180214(StageActor *o) {
    SV8 sv;
    s32 v;

    switch (o->stateCount) {
    case 0:
        o->timer += 0x80;
        v = rsin(o->timer) >> 4;
        o->model->scale.vy = v + 0x1000;
        o->model->scale.vz = v + 0x1000;
        if (o->timer >= 0x800) {
            o->timer &= 0x7FF;
            if (--o->unkFC == 0) {
                o->stateCount++;
                PlaySoundId(0x905, 0);
                if (o->link->unk74 != 0) {
                    PlaySoundId(0x904, 0);
                    sv.x = g_PlayerX;
                    sv.y = D_80126B62;
                    sv.z = D_80126B66;
                    HitPlayer(1, 0x1E, 0x400, 0x20, &sv, &g_GroundNormal);
                    o->unkFC = D_80126B62;
                }
            } else {
                PlaySoundId(0x903, 0);
            }
        }
        break;
    case 1:
        o->timer += 0x80;
        v = rsin(o->timer) >> 1;
        o->model->scale.vy = v + 0x1000;
        o->model->scale.vz = v + 0x1000;
        if (o->timer >= 0x800) {
            o->model->scale.vy = 0x1000;
            o->model->scale.vz = 0x1000;
            if (o->unkFC != 0) {
                o->stateCount++;
                AF(D_sc05_010_801C7E30[0], s32, 0x1C) += 0x28;
            } else {
                o->state = 1;
            }
        }
        break;
    case 2:
        o->timer += 0x80;
        if (o->timer >= 0x1C00) {
            SpawnActorArg(0x274, (s16)((u16)o->param | 0x10), o);
            o->state = 1;
        }
        break;
    }
}

void func_sc05_010_80180450(StageActor *o) {
    s32 v;
    u8 unused[8];

    switch (o->stateCount) {
    case 0:
        o->timer += 0x80;
        v = rsin(o->timer) >> 5;
        v += 0x1000;
        o->model->scale.vy = v;
        o->model->scale.vz = v;
        if (o->timer >= 0x800) {
            o->timer &= 0x7FF;
            if (--o->unkFC == 0) {
                o->stateCount++;
                if (o->link->unk74 != 0) {
                    PlaySoundId(0x904, 0);
                    o->unkFC = D_80126B62;
                }
            }
        }
        break;
    case 1:
        o->timer += 0x80;
        v = rsin(o->timer) >> 2;
        v += 0x1000;
        o->model->scale.vy = v;
        o->model->scale.vz = v;
        if (o->timer >= 0x800) {
            o->model->scale.vy = 0x1000;
            o->model->scale.vz = 0x1000;
            o->state = 1;
        }
        if (o->unkFC != 0 && o->timer <= 0x400) {
            D_80126B62 = o->unkFC - (rsin(o->timer) >> 5);
        }
        break;
    }
}

void func_sc05_010_801805D0(StageActor *arg0) {
    D_sc05_010_80192568[arg0->state]();
}

void func_sc05_010_8018060C(StageActor *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = arg0->workE0;
    if (temp_v0 != 0) {
        arg0->workE0 = (s32) (temp_v0 - 1);
    } else if (((s32)arg0->message < 0x20) && (SpawnActor(0x2B5, (s32) arg0, arg2) != 0)) {
        arg0->message = (s32) ((s32)arg0->message + 1);
    }
    D_sc05_010_801925B0[arg0->state](arg0);
}

void func_sc05_010_801806A0(u8 *o, s32 a1) {
    s32 i;
    s32 n;

    if (AF(o, s16, 0x76) > 0) {
        for (i = 0; i < 5; i++) {
            if (AF(o, s16, 0x76) >= D_sc05_010_801926D4[i]) {
                if (AF(o, s16, 0xFC) != i) {
                    MoveImage(D_sc05_010_801925C4 + i * 16, AF(o, s16, 0x70) * 16 + 0x2B0, 0x100);
                    MoveImage(D_sc05_010_801925C4 + i * 16 + 8, 0x160, AF(o, s16, 0x70) + 0x147);
                    AF(o, s16, 0xFC) = i;
                }
                return;
            }
        }
        return;
    }
    if (a1 != 0) {
        n = AF(o, s16, 0x76);
        if (n == 0) {
            AF(o, s16, 0x76) = 0x12C;
            MoveImage(D_sc05_010_801925C4, AF(o, s16, 0x70) * 16 + 0x2B0, 0x100);
            MoveImage(D_sc05_010_801925C4 + 8, 0x160, AF(o, s16, 0x70) + 0x147);
            AF(o, s16, 0xFC) = 0;
            return;
        }
        if (n >= -4) {
            MoveImage((u8 *)D_sc05_010_801926D4 + n * 16, AF(o, s16, 0x70) * 16 + 0x2B0, 0x100);
            MoveImage((u8 *)D_sc05_010_801926D4 + 8 + AF(o, s16, 0x76) * 16, 0x160, AF(o, s16, 0x70) + 0x147);
            return;
        }
    }
    MoveImage(D_sc05_010_80192614 + (AF(o, u16, 0x76) & 7) * 16, AF(o, s16, 0x70) * 16 + 0x2B0, 0x100);
    MoveImage(D_sc05_010_80192614 + 8 + (AF(o, u16, 0x76) & 7) * 16, 0x160, AF(o, s16, 0x70) + 0x147);
}

void func_sc05_010_80180854(StageActor *o) {
    SV8 a;
    SV8 b;
    u8 *t;

    D_sc05_010_80192724[o->state]();
    if (o->kind == 0) return;
    if (D_80126CC8 == o) {
        AF(o, s16, 6) = o->origin[0];
        AF(o, s16, 0xE) = o->origin[2];
        D_80126B62 -= 0x40;
    }
    t = &D_sc05_010_801922B0 + o->param * 16;
    o->pos[1].h.i = (u16)o->origin[1] + (o->parent->model->scale.vy * AF(t, s16, 8)) / 4096 - AF(t, s16, 8);
    CarryPlayer(o);
    if (AF(D_sc05_010_801C7E30[0], u16, 2) < 10) {
        if (g_PlayerX >= o->pos[0].h.i + AF(t, s16, 4) && o->pos[0].h.i + AF(t, s16, 6) >= g_PlayerX) {
            if (o->pos[1].h.i + AF(t, s16, 8) < D_80126B62) {
                D_80126B62 = o->pos[1].h.i + AF(t, s16, 8);
                D_80126B6C = 0;
            }
        }
    }
    if (o->hp < 300) {
        o->hp++;
    }
    if (o->unk74 != 0 && o->hp < 0) {
        b.x = g_PlayerX;
        a.x = g_PlayerX;
        a.y = D_80126B62 + 0x10;
        b.y = D_80126B62 - 0x10;
        a.z = b.z = D_80126B66;
        if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b) != 0) {
            HitPlayer(1, 0x4004, 0x400, 0x14, &b, &g_GroundNormal);
        }
    }
    func_sc05_010_801806A0(o, 1);
}

extern void (*D_sc05_010_80192770[])();
extern s16 D_sc05_010_80192734;
void func_sc05_010_80180AA0(StageActor *o) {
    u8 unused[0x10]; /* MATCH-TRICK: unused padding gives the original frame size */

    D_sc05_010_80192770[o->state](o);
    if (o->kind == 0) return;
    o->pos[1].h.i = (u16)o->origin[1] + (o->parent->model->scale.vy * D_sc05_010_80192734) / 4096 - D_sc05_010_80192734;
    CarryPlayer(o);
}

void func_sc05_010_80180B44(StageActor *o) {
    s16 fc;
    s32 i;
    u8 *p;
    s32 r;
    SV8 a;
    SV8 b;
    s16 x;
    s16 y;
    s32 t;
    u8 unused[8];
    s32 d;

    fc = o->unkFC;
    if (fc != 0x800) {
        o->unkFC = fc + 0x100;
        o->model->scale.vx = 0x900 - (rcos((s16)(fc + 0x100)) >> 1);
        o->model->scale.vy = 0x900 - (rcos(o->unkFC) >> 1);
        o->model->scale.vz = 0x900 - (rcos(o->unkFC) >> 1);
        if (o->unkFC == 0x400) {
            PlaySoundId(0x80B, 0);
            for (i = 0; i < 16; i++) {
                p = (u8 *)SpawnActor(0x2ED, o);
                if (p != 0) {
                    r = (rand() & 0x7F) - 0x40;
                    AF(p, s32, 0x10) = r << 12;
                    AF(p, s16, 6) += r;
                    r = (rand() & 0x7F) - 0x40;
                    AF(p, s32, 0x18) = r << 12;
                    AF(p, s16, 0xE) += r;
                    AF(p, s16, 0xA) -= 0x80;
                    AF(p, s16, 0x16) = -0x18 - (rand() & 7);
                }
            }
        }
    } else if (o->workFE != 0) {
        o->workFE--;
    } else {
        o->unkFC = fc + 0x100;
        PlaySoundId(0x80C, 0);
    }
    if (o->unkFC >= 0x1000) {
        FreeActor(o);
        return;
    }
    if ((u16)o->param & 0xF0) {
        if (o->unkFC == 0x7F0) {
            PlaySoundId(0xC8E, 0);
        }
        return;
    }
    t = g_PlayerX;
    d = t - o->pos[0].h.i;
    x = t;
    if ((u32)(d + 0x5F) < 0xBF) {
        d = o->pos[1].h.i;
        d -= ((o->model->scale.vy * 11) >> 8);
        if (d < (y = D_80126B62)) {
            a.y = y + 0x10;
            b.x = x;
            a.x = x;
            b.y = y - 0x10;
            a.z = b.z = D_80126B66;
            if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b) != 0) {
                HitPlayer(1, 0x4004, 0x400, 0x20, &b, &g_GroundNormal);
            }
        }
    }
}

void func_sc05_010_80180DEC(StageActor *arg0) {
    D_sc05_010_801927B8[arg0->state]();
}

void func_sc05_010_80180E28(u8 *o) {
    typedef struct { u8 pad[2]; s16 s2; u8 pad2[0xF8]; s16 sFC; s16 sFE; } ObjS;

    AF(AF(o, u8 *, 0x20), s16, 0x14) -= 0x80;
    AF(o, s16, 0x100) += 0x40;
    AF(o, s32, 4) -= AF(o, s32, 0x10);
    AF(o, s32, 8) = 0xFF900000 - ((rsin(AF(o, s16, 0x100)) * AF(o, s16, 0xFE)) << 4);
    if (func_sc05_010_8017ECE4(o) > 0) {
        ((SV8 *)AF(o, u8 *, 0x20))[2].z = 0;
        ((ObjS *)o)->s2 = 2;
        ((ObjS *)o)->sFE = 0x1E;
        ((ObjS *)o)->sFC = 0x400;
        if (D_sc05_010_801C7E28 != 0) {
            if (++D_sc05_010_801C7E2C > 8) {
                D_sc05_010_801C7E2C = 8;
            }
            D_sc05_010_801C7E28 = 0x1E;
            PlaySoundId(D_sc05_010_8019244C[D_sc05_010_801C7E2C * 2], 0);
        } else {
            D_sc05_010_801C7E28 = 0x1E;
            D_sc05_010_801C7E2C = 0;
            PlaySoundId(0x896, 0);
        }
    } else {
        ActorTouchesPlayer(o, 0x20, 0xC);
    }
    UpdateModelYXZ(o);
}

void func_sc05_010_80180F84(u8 *o) {
    V3 sv;
    s32 v;
    s32 t;

    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(o, s16, 0xFC) += 0x40;
        if (--AF(o, s16, 0xFE) <= 0) {
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 1:
        AF(o, s16, 0xFC) -= 0x180;
        AF(AF(o, u8 *, 0x20), s16, 0x12) += 0x400;
        v = TurnStepToTarget(o, 0x10);
        AF(AF(o, u8 *, 0x20), s16, 0x12) -= 0x400;
        AF(AF(o, u8 *, 0x20), s16, 0x12) += v;
        if (v >= -8 && v <= 8) {
            if (DistSqToTarget(o) <= 0x4000) {
                AF(o, s16, 0x34) = 3;
                AF(o, s16, 0xFC) = 0;
                AF(o, s16, 0xFE) = 0x1E;
            } else {
                AF(o, s16, 0x34) = 2;
                AF(o, s16, 0xFE) = 0x20;
            }
        }
        break;
    case 2:
        AF(o, s16, 0xFC) -= 0x80;
        v = rcos(AF(o, s16, 0xFC)) << 5;
        if (v > 0) {
            v = 0;
        }
        sv.x = v;
        sv.y = 0;
        sv.z = 0;
        SetLocalVelocityXZ(o, &sv);
        MoveCollidePassable(o);
        if (AF(o, s16, 0x16) > 0x20) {
            AF(o, s16, 0x16) = 0x20;
        }
        if (func_sc05_010_8017ECE4(o) < 0) {
            FreeActor(o);
        } else if (--AF(o, s16, 0xFE) == 0) {
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 3:
        if (--AF(o, s16, 0xFE) == 0) {
            AF(o, s16, 0xFC) = 0x800;
            AF(o, s32, 0x14) = 0xFFF00000;
            sv.x = 0xFFF80000;
            sv.y = 0;
            sv.z = 0;
            SetLocalVelocityXZ(o, &sv);
            AF(o, s16, 0x34) = 4;
            PlaySoundId(0x897, 0);
        }
        break;
    case 4:
        if (MoveCollidePassable(o) & 0x6000) {
            FreeActor(o);
        }
        if (ActorSegmentDamagesPlayer(o, &D_sc05_010_80192844, &D_sc05_010_8019284C, 0xC) != 0) {
            AF(o, s16, 0x34) = 5;
            AF(o, s32, 0x10) = -AF(o, s32, 0x10);
            AF(o, s32, 0x18) = -AF(o, s32, 0x18);
        }
        if (func_sc05_010_8017ECE4(o) > 0) {
            t = D_sc05_010_801C7E28;
            AF(o, s16, 0x34) = 6;
            if (t != 0) {
                if (++D_sc05_010_801C7E2C > 8) {
                    D_sc05_010_801C7E2C = 8;
                }
                D_sc05_010_801C7E28 = 0x1E;
                PlaySoundId(D_sc05_010_8019244C[D_sc05_010_801C7E2C * 2], 0);
            } else {
                D_sc05_010_801C7E28 = 0x1E;
                D_sc05_010_801C7E2C = 0;
                PlaySoundId(0x896, 0);
            }
        }
        break;
    case 5:
        if (MoveCollidePassable(o) & 0x6000) {
            FreeActor(o);
        }
        if (func_sc05_010_8017ECE4(o) > 0) {
            t = D_sc05_010_801C7E28;
            AF(o, s16, 0x34) = 6;
            if (t != 0) {
                if (++D_sc05_010_801C7E2C > 8) {
                    D_sc05_010_801C7E2C = 8;
                }
                D_sc05_010_801C7E28 = 0x1E;
                PlaySoundId(D_sc05_010_8019244C[D_sc05_010_801C7E2C * 2], 0);
            } else {
                D_sc05_010_801C7E28 = 0x1E;
                D_sc05_010_801C7E2C = 0;
                PlaySoundId(0x896, 0);
            }
        }
        break;
    case 6:
        AF(o, s16, 0xFC) -= 0x80;
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), 0x400, 0x10);
        AF(AF(o, u8 *, 0x20), s16, 0x12) &= 0xFFF;
        if (AF(AF(o, u8 *, 0x20), u16, 0x12) >= 0x3F0 && AF(AF(o, u8 *, 0x20), u16, 0x12) <= 0x410) {
            AF(o, s16, 0x34) = 7;
            AF(o, s16, 0x16) = -0x10;
            AF(o, s16, 0x1A) = 4;
            PlaySoundId(0x897, 0);
        } else {
            v = rcos(AF(o, s16, 0xFC)) << 5;
            if (v > 0) {
                v = 0;
            }
            sv.x = v;
            sv.y = 0;
            sv.z = 0;
            SetLocalVelocityXZ(o, &sv);
            if (MoveCollidePassable(o) & 0x6000) {
                FreeActor(o);
            } else {
                if (AF(o, s16, 0x16) > 0x20) {
                    AF(o, s16, 0x16) = 0x20;
                }
                if (func_sc05_010_8017ECE4(o) < 0) {
                    FreeActor(o);
                }
            }
        }
        break;
    case 7:
        if (MoveCollidePassable(o) & 0x6000) {
            FreeActor(o);
        }
        break;
    }
}

extern void (*D_sc05_010_80192854[])();
void func_sc05_010_801813F4(StageActor *o) {
    s32 a;
    D_sc05_010_80192854[o->state](o);
    if (o->kind != 0) {
        a = (u16)o->unkFC & 0xFFF;
        o->unkFC = a;
        o->model->scale.vx = 0x1000 - (rcos(a) >> 3);
        o->model->scale.vy = (rcos(o->unkFC) >> 3) + 0x1000;
        o->model->scale.vz = (rcos(o->unkFC) >> 3) + 0x1000;
    }
}

void func_sc05_010_801814AC(StageActor *o) {
    u8 *p;

    ShowDamage(o, o->hitDamage);
    if (o->hitFlags & 1) {
        ShowDefeat(o);
        StartRumbleScript(&D_sc05_010_80192860);
    }
    o->timer = 10;
    o->hitState = 0;
    o->hp -= o->hitDamage;
    AF(D_sc05_010_801C7E30[0], s16, 0x34) = 0;
    AF(D_sc05_010_801C7E30[0], s16, 2) = 9;
    AF(D_sc05_010_801C7E30[0], u8, 0xC2) = 0xE;
    p = D_sc05_010_801C7E30[0];
    AF(p, u8, 0xC2) = (AF(p, u8, 0xC2) + 2) & 0xF;
    LoadPair(p);
    if (D_sc05_010_801C7E64[0] != 0) {
        FreeActor(D_sc05_010_801C7E64[0]);
    }
    if (AF(D_sc05_010_801C7E30[0], u16, 0x70) & 1) {
        PlaySoundId(4, 0x89F);
        AF(D_sc05_010_801C7E30[0], u16, 0x70) &= 0xFFFE;
    }
    PlaySoundId(0x8A0, 0);
    if (AF(o, u8, 0x5E) != 0x1D) {
        if (o->hitFx[0] != 0) {
            GainStat3FromActor(o);
        }
        if (o->hitFx[1] != 0) {
            GainStat2FromActor(o);
        }
    }
}

void func_sc05_010_80181670(u8 *o) {
    u8 *pp[4];
    SV8 sv;
    s16 xs[5];
    s16 ys[5];
    s32 flag;
    s32 sxy;
    s32 p;
    u8 *m;
    s32 otz;
    u32 *ot;
    s32 d;
    s32 e;
    s16 x;
    s16 y;
    u8 *prim;
    u8 *q;
    s32 i;
    s32 j;

    m = AF(o, u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&D_sc05_010_801928B0, &sv, &flag);
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    otz = RotTransPers(&sv, &sxy, &p, &flag);
    if (otz <= 0) return;
    if (flag < 0) return;
    ot = g_WorldOtOrg[D_800B9A02].ot + otz;
    d = (Size_80181670(o) * (g_CameraProj + 500)) / (otz * 4);
    x = ((s16 *) &sxy)[0];
    y = ((s16 *) &sxy)[1];
    xs[2] = x;
    ys[2] = y;
    e = (d * 179) >> 8;
    xs[0] = x - d;
    xs[1] = x - e;
    xs[3] = x + e;
    xs[4] = x + d;
    ys[0] = y - d;
    ys[1] = y - e;
    ys[3] = y + e;
    ys[4] = y + d;
    prim = AllocPrim(0x9C);
    if (prim == 0) return;
    SetDrawMode(prim, 0, 1, GetTPage(0, 1, 0, 0) & 0xFFFF, 0);
    pp[0] = prim + 0xC;
    pp[1] = prim + 0x30;
    pp[2] = prim + 0x54;
    pp[3] = prim + 0x78;
    q = pp[0];
    for (i = 0; i < 4; i++, q += 0x24) {
        j = i * 4;
        AF(q, s32, 4) = D_sc05_010_80192874[D_sc05_010_801928A0[j]];
        AF(q, s32, 0xC) = D_sc05_010_80192874[D_sc05_010_801928A0[j + 1]];
        AF(q, s32, 0x14) = D_sc05_010_80192874[D_sc05_010_801928A0[j + 2]];
        AF(q, s32, 0x1C) = D_sc05_010_80192874[D_sc05_010_801928A0[j + 3]];
        AF(q, u8, 3) = 8;
        AF(q, u8, 7) = 0x3A;
        AF(q, s16, 8) = xs[D_sc05_010_80192880[j]];
        AF(q, s16, 0x10) = xs[D_sc05_010_80192880[j + 1]];
        AF(q, s16, 0x18) = xs[D_sc05_010_80192880[j + 2]];
        AF(q, s16, 0x20) = xs[D_sc05_010_80192880[j + 3]];
        AF(q, s16, 0xA) = ys[D_sc05_010_80192890[j]];
        AF(q, s16, 0x12) = ys[D_sc05_010_80192890[j + 1]];
        AF(q, s16, 0x1A) = ys[D_sc05_010_80192890[j + 2]];
        AF(q, s16, 0x22) = ys[D_sc05_010_80192890[j + 3]];
        AddPrim(ot, q);
    }
    AddPrim(ot, prim);
}

void func_sc05_010_80181B4C(u8 *arg0) {
    s32 temp_v0;
    void *temp_a1;
    void *temp_v1;

    if (AF(arg0, u16, 2) == 0) {
        temp_v0 = AllocActorModel((s32) arg0);
        AF(arg0, s32, 0x20) = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn((s32) arg0);
            return;
        }
        InitNullModel(temp_v0);
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc05_010_801928B8 | 0x40000000 | 0x20000000);
        AF(arg0, s16, 0x76) = 0x2710;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, s32 *, 0xBC) = &D_sc05_010_801928C8;
        AF(arg0, s32, 4) = 0x025B0000;
        AF(arg0, s32, 8) = 0xFF900000;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 3);
        return;
    }
    temp_v1 = AF(arg0, void *, 0x64);
    if (AF(temp_v1, u16, 0) != 0) {
        temp_a1 = AF(AF(temp_v1, void *, 0x20), void *, 0x20);
        AF(AF(arg0, s32, 0x20), u16, 0x10) = (u16) AF(temp_a1, u16, 6);
        AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(temp_a1, u16, 8);
        AF(AF(arg0, s32, 0x20), s16, 0x14) = (s16) (AF(temp_a1, u16, 0xA) - 0x100);
        AF(arg0, s16, 6) = (s16) (AF(AF(arg0, void *, 0x64), u16, 6) + AF(temp_a1, u16, 0));
        AF(arg0, s16, 0xA) = (s16) (AF(AF(arg0, void *, 0x64), u16, 0xA) + AF(temp_a1, u16, 2));
        AF(arg0, s16, 0xE) = (s16) (AF(AF(arg0, void *, 0x64), u16, 0xE) + AF(temp_a1, u16, 4));
        UpdateModelZYX((s32) arg0);
        if (AF(AF(arg0, void *, 0x64), s32, 0x90) == &D_sc05_010_801A3E2C) {
            func_sc05_010_80181670((s32) arg0);
        }
    }
}

extern u8 D_sc05_010_8019292C;
extern void Square0();
extern s32 ratan2();
extern s32 rcos();
extern s32 rsin();

static inline UXY Aim_80181CDC(u8 *o, SV8 *t) {
    UXY r;
    s32 ang;
    s32 dx, dy, dz, c;
    dz = t->z - AF(o, s16, 0xE);
    dx = t->x - AF(o, s16, 6);
    dy = t->y - AF(o, s16, 0xA);
    ang = (ratan2(-dz, dx) - 0x400) & 0xFFF;
    r.s.y = ang;
    c = rcos(ang);
    dz = (dz * c + dx * rsin(ang)) >> 12;
    r.s.x = ratan2(dy, -dz);
    return r;
}

void func_sc05_010_80181CDC(StageActor *o) {
    SV8 pos;
    SV8 tgt;
    V3 v;
    s32 d;
    UXY a;
    UXY b;

    switch (o->work10A) {
    case 0:
        break;
    case 1:
        LocalToWorld(AF(D_sc05_010_801C7E54, u8 *, 0x20) + 0x34, &D_sc05_010_8019292C, &pos);
        v.x = o->pos[0].h.i - pos.x;
        v.y = o->pos[1].h.i - pos.y;
        v.z = o->pos[2].h.i - pos.z;
        Square0(&v, &v);
        d = v.x + v.y + v.z;
        v.x = o->pos[0].h.i - g_PlayerX;
        v.y = o->pos[1].h.i - D_80126B62;
        v.z = o->pos[2].h.i - (s16)D_80126B66;
        Square0(&v, &v);
        d -= v.x + v.y + v.z;
        if (d > 0) {
            if (d > 0x4000) {
                o->unkFC += 0x20;
            } else {
                o->unkFC = o->unkFC + d / 512;
                o->work102 = o->work102 - 1;
            }
            if (o->unkFC > 0x400) o->unkFC = 0x400;
        } else {
            if (d < 0) {
                if (d < -0x4000) {
                    o->unkFC -= 0x20;
                } else {
                    o->unkFC = o->unkFC + d / 512;
                    o->work102 = o->work102 - 1;
                }
                if (o->unkFC < -0x400) o->unkFC = -0x400;
            }
            o->work102 -= 4;
        }
        tgt.x = g_PlayerX;
        tgt.y = -0xC0;
        tgt.z = -0x100;
        a = Aim_80181CDC(o, &tgt);
        b = Aim_80181CDC(o, &pos);
        o->model->rot.vz += TurnStep(b.s.x, a.s.x, 4);
        o->work100 += TurnStep(o->work100, o->model->rot.vz, 4);
        o->workFE += TurnStep(b.s.y, a.s.y, 8);
        if (o->work102 <= 0) {
            o->work10A = 2;
            o->work102 = 0xF;
        }
        break;
    case 2:
        if (--o->work102 != 0) {
            o->workFE += 0x18;
        } else {
            o->work10A = 3;
            PlaySoundId(0x89A, 0);
        }
        break;
    case 3:
        LocalToWorld(AF(D_sc05_010_801C7E54, u8 *, 0x20) + 0x34, &D_sc05_010_8019292C, &pos);
        if (pos.z > 0 && o->parent->stateCount < 4) {
            o->work10A = 1;
            o->parent->work100 = 0;
        }
        v.x = o->pos[0].h.i - pos.x;
        v.y = o->pos[1].h.i - pos.y;
        v.z = o->pos[2].h.i - pos.z;
        Square0(&v, &v);
        d = v.x + v.y + v.z;
        v.x = o->pos[0].h.i - g_PlayerX;
        v.y = o->pos[1].h.i + 0xC0;
        v.z = o->pos[2].h.i - (s16)D_80126B66;
        Square0(&v, &v);
        d -= v.x + v.y + v.z;
        if (d > 0) {
            if (d > 0x4000) {
                o->unkFC += 0x20;
            } else {
                o->unkFC += d / 512;
            }
            if (o->unkFC > 0x400) o->unkFC = 0x400;
        } else if (d < 0) {
            if (d < -0x4000) {
                o->unkFC -= 0x20;
            } else {
                o->unkFC += d / 512;
            }
            if (o->unkFC < -0x400) o->unkFC = -0x400;
        }
        tgt.x = g_PlayerX;
        tgt.y = -0xC0;
        tgt.z = D_80126B66;
        a = Aim_80181CDC(o, &tgt);
        b = Aim_80181CDC(o, &pos);
        o->model->rot.vz += TurnStep(b.s.x, a.s.x, 4);
        o->work100 += TurnStep(o->work100, o->model->rot.vz, 4);
        o->workFE += TurnStep(b.s.y, a.s.y, 8);
        break;
    case 4:
        o->model->rot.vz += TurnStep(o->model->rot.vz, 0x180, 0x10);
        o->unkFC += TurnStep(o->unkFC, 0, 0x10);
        o->workFE += TurnStep(o->workFE, 0x400, 0x10);
        o->work100 += TurnStep(o->work100, 0, 0x10);
        break;
    case 5:
        LocalToWorld(AF(D_sc05_010_801C7E54, u8 *, 0x20) + 0x34, &D_sc05_010_8019292C, &pos);
        if (pos.z > 0 && o->parent->stateCount < 4) {
            o->work10A = 1;
            o->parent->work100 = 0;
        }
        v.x = o->pos[0].h.i - pos.x;
        v.y = o->pos[1].h.i - pos.y;
        v.z = o->pos[2].h.i - pos.z;
        Square0(&v, &v);
        d = v.x + v.y + v.z;
        v.x = o->pos[0].h.i - g_PlayerX;
        v.y = o->pos[1].h.i + 0xC0;
        v.z = o->pos[2].h.i - (s16)D_80126B66;
        Square0(&v, &v);
        d -= v.x + v.y + v.z;
        if (d > 0) {
            if (d > 0x4000) {
                o->unkFC += 0x40;
            } else {
                o->unkFC += d / 256;
            }
            if (o->unkFC > 0x400) o->unkFC = 0x400;
        } else if (d < 0) {
            if (d < -0x4000) {
                o->unkFC -= 0x40;
            } else {
                o->unkFC += d / 256;
            }
            if (o->unkFC < -0x400) o->unkFC = -0x400;
        }
        tgt.x = g_PlayerX;
        tgt.y = -0xC0;
        tgt.z = D_80126B66;
        a = Aim_80181CDC(o, &tgt);
        b = Aim_80181CDC(o, &pos);
        o->model->rot.vz += TurnStep(b.s.x, a.s.x, 4);
        o->work100 += TurnStep(o->work100, o->model->rot.vz, 4);
        o->workFE += TurnStep(b.s.y, a.s.y, 4);
        break;
    }
}

void func_sc05_010_801828E0(u8 *o) {
    u8 unused[8];
    u8 *p;
    u8 *q;
    D_sc05_010_80192934[AF(o, u16, 2)]();
    p = AF(o, u8 *, 0x64);
    if (AF(p, u16, 0) != 0) {
        q = AF(AF(p, u8 *, 0x20), u8 *, 0x20);
        q += 0x60;
        AF(o, s16, 6) = AF(p, s16, 6) + AF(q, s16, 0);
        AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x64), s16, 0xA) + AF(q, s16, 2);
        AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x64), s16, 0xE) + AF(q, s16, 4);
        AF(o, s16, 6) -= (rsin(AF(q, s16, 8)) << 6) >> 12;
        AF(o, s16, 0xE) -= (rcos(AF(q, s16, 6)) << 6) >> 12;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0xFC) + AF(o, s16, 0xFE);
        UpdateModelYXZ(o);
    }
}

void func_sc05_010_801829F0(u8 *arg0) {
    u16 sp10[3];
    void *temp_a0;

    D_sc05_010_80192990[AF(arg0, u16, 2)]();
    temp_a0 = AF(arg0, void *, 0x64);
    if (AF(temp_a0, u16, 0) != 0) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) (AF(AF(temp_a0, void *, 0x20), u16, 0x12) - (AF(temp_a0, u16, 0xFC) + 0x400));
        LocalToWorld((s32) (AF(AF(arg0, void *, 0x64), void *, 0x20) + 0x34), (s32) &D_sc05_010_80192924, (s32) sp10);
        AF(arg0, u16, 6) = sp10[0];
        AF(arg0, u16, 0xA) = sp10[1];
        AF(arg0, u16, 0xE) = sp10[2];
        AF(AF(arg0, void *, 0x20), u16, 0x14) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x100);
        UpdateModelYXZ((s32) arg0);
    }
}

void func_sc05_010_80182AC0(u8 *o) {
    u8 *s;
    u8 *p;
    D_sc05_010_801929DC[AF(o, u16, 2)]();
    p = AF(o, u8 *, 0x64);
    if (AF(p, u16, 0) != 0) {
        s = AF(AF(p, u8 *, 0x20), u8 *, 0x20);
        s += 0x60;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, u16, 0xFC) + AF(o, u16, 0xFE);
        AF(o, s16, 6) = AF(AF(o, u8 *, 0x64), u16, 6) + AF(s, u16, 0);
        AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x64), u16, 0xA) + AF(s, u16, 2);
        AF(o, s16, 0xE) = AF(AF(o, u8 *, 0x64), u16, 0xE) + AF(s, u16, 4);
        AF(o, s16, 6) += (rsin(AF(s, s16, 8)) << 6) >> 12;
        AF(o, s16, 0xE) += (rcos(AF(s, s16, 6)) << 6) >> 12;
        UpdateModelYXZ(o);
    }
}

void func_sc05_010_80182BD0(u8 *arg0) {
    u16 sp10[3];
    void *temp_a0;

    D_sc05_010_80192A28[AF(arg0, u16, 2)]();
    temp_a0 = AF(arg0, void *, 0x64);
    if (AF(temp_a0, u16, 0) != 0) {
        AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) (AF(AF(temp_a0, void *, 0x20), u16, 0x12) - (AF(temp_a0, u16, 0xFC) - 0x400));
        LocalToWorld((s32) (AF(AF(arg0, void *, 0x64), void *, 0x20) + 0x34), (s32) &D_sc05_010_80192924, (s32) sp10);
        AF(arg0, u16, 6) = sp10[0];
        AF(arg0, u16, 0xA) = sp10[1];
        AF(arg0, u16, 0xE) = sp10[2];
        AF(AF(arg0, void *, 0x20), u16, 0x14) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x100);
        UpdateModelYXZ((s32) arg0);
    }
}

void func_sc05_010_80182CA0(s32 arg0) {
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1_2;

    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    StopWithGravity(arg0);
    temp_v1 = AF(arg0, s16, 0x70);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80192A30);
        SetScript(arg0, (s32) &D_sc05_010_80192A9C);
        AF(arg0, s16, 6) = 0x25B;
        AF(arg0, s16, 0x12) = 0x5B;
        AF(arg0, s16, 0x16) = -0x70;
        AF(arg0, s16, 0xA) = -0x70;
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x6000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x6000;
        temp_a0 = AF(arg0, s32, 0x20);
        AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
        AF(AF(arg0, s32, 0x20), s16, 0x14) = 0x600;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80192A30);
        SetScript(arg0, (s32) &D_sc05_010_80192A9C);
        AF(arg0, s32, 0x94) = (s32) (rand() & 7);
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x4000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x4000;
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x48) = (s32) ((AF(arg0, s32, 0x48) * 2) / 3);
        break;
    default:
        func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80192A30);
        SetScript(arg0, (s32) &D_sc05_010_80192A9C);
        AF(arg0, s32, 0x94) = (s32) (rand() & 7);
        AF(arg0, s16, 2) = 3;
        break;
    }
    temp_a0_2 = AF(arg0, s32, 0x20);
    AF(temp_a0_2, s32, 4) = (s32) (AF(temp_a0_2, s32, 4) | 0x50000000);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
    PlaySoundId(0x898, 0);
}

void func_sc05_010_80182E78(StageActor *o) {
    u8 *p;
    s32 i;
    s32 a;

    if (MoveCollide() & 0x2000) {
        FreeActor(o);
        return;
    }
    if (func_sc05_010_8017ECE4(o) > 0) {
        p = SpawnKind205(o, 0);
        if (p != 0) {
            AF(AF(p, u8 *, 0x20), s16, 0x18) = 0x5000;
            AF(AF(p, u8 *, 0x20), s16, 0x1A) = 0x5000;
            AF(p, s16, 0x16) = -8;
        }
        for (i = 0; i < 8; i++) {
            p = (u8 *)SpawnActorArg(0x29E, 2, o);
            if (p != 0) {
                a = (rand() & 0x1FF) + (i << 9);
                AF(p, s32, 0x10) = rsin(a) << 6;
                AF(p, s32, 0x18) = rcos(a) << 6;
                AF(p, s32, 0x14) = 0xFFF80000 - ((rand() & 0x3FF) << 8);
            }
        }
        FreeActor(o);
        PlaySoundId(0x899, 0);
    } else {
        o->vel[0] = o->vel[0] * 7 / 8;
    }
}

void func_sc05_010_80182FD4(u8 *arg0) {
    D_sc05_010_80192AEC[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (AF(arg0, s16, 0x70) < 2)) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
        if (ActorTouchesPlayer((s32) arg0, 0x30, 0x18) == 1) {
            g_PlayerHitKind = 0x4014;
            g_PlayerHitDamage = 0x18;
            FreeActor((s32) arg0);
            return;
        }
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 0x40);
    }
}

void func_sc05_010_80183098(StageActor *o) {
    SV8 a;
    SV8 b;
    s32 d;

    switch (o->stateCount) {
    case 0:
        if (o->animFlags & 0x4000) {
            AF(D_sc05_010_801C7E4C, s32, 0xDC)--;
            FreeActor(o);
            return;
        }
        break;
    case 1:
        if (o->animFlags & 0x4000) {
            AF(D_sc05_010_801C7E4C, s32, 0xDC)--;
            FreeActor(o);
            return;
        }
        o->vel[0] += 0xC000;
        break;
    default:
        AF(D_sc05_010_801C7E4C, s32, 0xDC)--;
        FreeActor(o);
        return;
    }
    o->pos[0].w += o->vel[0];
    o->pos[1].w += o->vel[1];

    if ((d = o->pos[0].h.i - g_Player.pos[0].h.i, (u32)(d + 0x1F) < 0x3F) && (d = g_Player.pos[1].h.i - o->pos[1].h.i, (u32)(d + 0xF) < 0x7F)) {
        if (PlayerFlag1000() != 0) {
            AF(D_sc05_010_801C7E4C, s32, 0xDC)--;
            FreeActor(o);
        } else {
            b.x = g_Player.pos[0].h.i;
            a.x = g_Player.pos[0].h.i;
            a.y = g_Player.pos[1].h.i - 0x10;
            b.y = g_Player.pos[1].h.i + 0x10;
            a.z = b.z = D_80126B66;
            if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b) != 0) {
                HitPlayer(1, 0x2020, 0x400, 0x10, &b, &g_GroundNormal);
            }
        }
    }
}

void func_sc05_010_80183238(StageActor *arg0) {
    D_sc05_010_80192B68[arg0->state]();
}

void func_sc05_010_80183274(u8 *o) {
    u8 unused[16];
    u8 *e;
    s32 i;
    s32 a;

    D_sc05_010_80192CB8[AF(o, u16, 2)]();
    if (AF(o, u16, 0) == 0) return;
    if (IsPlayerHitBy(D_sc05_010_801C7E54) != 0 || IsPlayerHitBy(D_sc05_010_801C7E5C) != 0) {
        if (D_sc05_010_801C7E70 == 0) {
            func_80153C74(2, 0x28);
            D_sc05_010_801C7E70 = 0x1E;
            e = SpawnKind205(o, 0);
            if (e != 0) {
                AF(AF(e, u8 *, 0x20), s16, 0x18) = 0x5000;
                AF(AF(e, u8 *, 0x20), s16, 0x1A) = 0x5000;
                AF(e, s16, 0x16) = -8;
            }
            for (i = 0; i < 8; i++) {
                e = (u8 *)SpawnActorArg(0x29E, 2, o);
                if (e != 0) {
                    a = (rand() & 0x1FF) + i * 0x200;
                    AF(e, s32, 0x10) = rsin(a) << 6;
                    AF(e, s32, 0x18) = rcos(a) << 6;
                    AF(e, s32, 0x14) = -0x80000 - ((rand() & 0x3FF) << 8);
                }
            }
            FreeActor(o);
        }
    } else {
        ActorTouchesPlayer(o, 0x10, 0x28);
    }
}

void func_sc05_010_8018340C(u8 *o) {
    u8 *pp[4];
    SV8 sv;
    s16 xs[5];
    s16 ys[5];
    s32 sxy;
    s32 p;
    s32 flag;
    s32 otz;
    u32 *ot;
    s32 d;
    s32 e;
    s16 x;
    s16 y;
    u8 *prim;
    u8 *q;
    s32 i;
    s32 j;

    sv.x = AF(o, s16, 6);
    sv.y = AF(o, s16, 0xA);
    sv.z = AF(o, s16, 0xE);
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    otz = RotTransPers(&sv, &sxy, &p, &flag);
    if (otz <= 0) return;
    if (flag < 0) return;
    ot = g_WorldOtOrg[D_800B9A02].ot + otz;
    d = (Size_8018340C(o) * (g_CameraProj + 500)) / (otz * 4);
    x = ((s16 *) &sxy)[0];
    y = ((s16 *) &sxy)[1];
    xs[2] = x;
    ys[2] = y;
    e = (d * 179) >> 8;
    xs[0] = x - d;
    xs[1] = x - e;
    xs[3] = x + e;
    xs[4] = x + d;
    ys[0] = y - d;
    ys[1] = y - e;
    ys[3] = y + e;
    ys[4] = y + d;
    prim = AllocPrim(0x9C);
    if (prim == 0) return;
    SetDrawMode(prim, 0, 1, GetTPage(0, 1, 0, 0) & 0xFFFF, 0);
    pp[0] = prim + 0xC;
    pp[1] = prim + 0x30;
    pp[2] = prim + 0x54;
    pp[3] = prim + 0x78;
    q = pp[0];
    for (i = 0; i < 4; i++, q += 0x24) {
        j = i * 4;
        AF(q, s32, 4) = D_sc05_010_80192CC4[D_sc05_010_80192CF0[j]];
        AF(q, s32, 0xC) = D_sc05_010_80192CC4[D_sc05_010_80192CF0[j + 1]];
        AF(q, s32, 0x14) = D_sc05_010_80192CC4[D_sc05_010_80192CF0[j + 2]];
        AF(q, s32, 0x1C) = D_sc05_010_80192CC4[D_sc05_010_80192CF0[j + 3]];
        AF(q, u8, 3) = 8;
        AF(q, u8, 7) = 0x3A;
        AF(q, s16, 8) = xs[D_sc05_010_80192CD0[j]];
        AF(q, s16, 0x10) = xs[D_sc05_010_80192CD0[j + 1]];
        AF(q, s16, 0x18) = xs[D_sc05_010_80192CD0[j + 2]];
        AF(q, s16, 0x20) = xs[D_sc05_010_80192CD0[j + 3]];
        AF(q, s16, 0xA) = ys[D_sc05_010_80192CE0[j]];
        AF(q, s16, 0x12) = ys[D_sc05_010_80192CE0[j + 1]];
        AF(q, s16, 0x1A) = ys[D_sc05_010_80192CE0[j + 2]];
        AF(q, s16, 0x22) = ys[D_sc05_010_80192CE0[j + 3]];
        AddPrim(ot, q);
    }
    AddPrim(ot, prim);
}

void EventBigSequence(u8 *o) {
    s32 i;
    u8 *p;

    switch (AF(o, u16, 0x34)) {
    case 0:
        StartEvent(o, &D_sc05_010_801923C4);
        TakePlayerControlNoStop();
        AF(o, s32, 0x1C) = 0x80;
        AF(o, s16, 0x34)++;
        func_800D0C48(4);
        p = (u8 *)&g_Actors;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (*(u16 *)p == 0x2B5) {
                FreeActor(p);
            }
        }
        AF(D_sc05_010_801C7E4C, s32, 0xE0) = 0x10000000;
        break;
    case 1:
        if ((--AF(o, s32, 0x1C) & 0xF) == 0) {
            p = (u8 *)SpawnActor(0x2DE, o);
            if (p != 0) {
                PlaySoundId(0x8B8, 0);
                AF(p, s16, 0xA) += 0x20;
                if (AF(o, s32, 0x1C) & 0x40) {
                    AF(p, s16, 0xFC) = (AF(o, s32, 0x1C) & 0x30) << 6;
                } else {
                    AF(p, s16, 0xFC) = ((AF(o, s32, 0x1C) & 0x30) << 6) + 0x200;
                }
                AF(p, s16, 0xFC) += rand() & 0x1FF;
                AF(p, s16, 0xFE) = AF(o, s32, 0x1C) + 0x60;
            }
        }
        if (AF(o, s32, 0x1C) == 0) {
            AF(o, s32, 0x1C) = 0x10;
            AF(o, s16, 0x34)++;
        }
        break;
    case 2:
        if (AF(o, s32, 0x1C) == 0) {
            AF(o, s32, 0x1C) = 0x3C;
            AF(o, s16, 0x34)++;
            SpawnActor(0x2DC, D_sc05_010_801C7E30[0]);
            SpawnPropFrom(D_sc05_010_801C7E30[0], 0x5F);
            PlaySoundId(0x8B9, 0);
        } else {
            AF(o, s32, 0x1C)--;
        }
        break;
    case 3:
        if (AF(o, s16, 0x84) == 0) {
            AF(o, s16, 0x84) = RequestBgmPack(0x6D);
        }
        if (AF(o, s32, 0x1C) != 0) {
            AF(o, s32, 0x1C)--;
            break;
        }
        FreeActor(D_sc05_010_801C7E30[0]);
        D_sc05_010_801C7E30[0] = 0;
        for (i = 2; i < 8; i++) {
            FreeActor(AF(D_sc05_010_801C7E30[i], u8 *, 0x6C));
            FreeActor(D_sc05_010_801C7E30[i]);
            D_sc05_010_801C7E30[i] = 0;
        }
        for (i = 8; i < 12; i++) {
            FreeActor(D_sc05_010_801C7E30[i]);
            D_sc05_010_801C7E30[i] = 0;
        }
        p = (u8 *)&g_Actors;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (*(u16 *)p == 0x275) {
                FreeActor(p);
            }
        }
        ClearPlayerMark4C(&g_Player);
        SelectCollisionMap(0);
        AF(o, s16, 0xA) = 0x77;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xE) = 0;
        D_80126B60 = 0x970000;
        D_80126B66 = 0x90;
        SpawnActor(0x2F7, o);
        for (i = 0; i < 0x18; i++) {
            p = (u8 *)SpawnActor(0x2E3, o);
            if (p != 0) {
                AF(AF(p, u8 *, 0x20), s32, 0x24) = D_sc05_010_80192D64[i];
            }
        }
        func_sc05_010_8017C068();
        func_sc05_010_80187874();
        AF(o, s16, 0x34)++;
        break;
    case 4:
        if (AF(o, s16, 0x84) == 0) {
            AF(o, s16, 0x84) = RequestBgmPack(0x6D);
        }
        break;
    case 5:
        if (func_80174774() != 0) {
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
            AF(o, s16, 0x34)++;
            GiveItem(0x1E);
        }
        break;
    case 6:
        break;
    }
    if (IsEventDone(o) != 0) {
        EndEvent(o);
        AF(o, s16, 2) = 6;
    }
}

extern s16 D_sc05_010_80192D4C;
extern s16 D_sc05_010_80192D4E;
extern s16 D_sc05_010_80192D50;
extern void (*D_sc05_010_80192DC4[])();
void func_sc05_010_80183C84(StageActor *o) {
    s16 t;
    if ((s32)o->model->unk04 >= 0) {
        t = (AF(o, u16, 0xDC) + 0x88) & 0xFFF;
        AF(o, s16, 0xDC) = t;
        D_sc05_010_80192D4C = (rsin(t) >> 6) + 0xC0;
        D_sc05_010_80192D4E = (rsin(AF(o, s16, 0xDC)) >> 6) + 0xC0;
        D_sc05_010_80192D50 = (rsin(AF(o, s16, 0xDC)) >> 6) + 0xC0;
        AF(o, s16, 0xDE) = (AF(o, u16, 0xDE) - 0x88) & 0xFFF;
        func_sc05_010_8018340C(o);
    }
    D_sc05_010_80192DC4[o->state](o);
}

void func_sc05_010_80183D5C(o)
    u8 *o;
{
    SV8 v0;
    SV8 v1;
    SV8 v2;
    XY s[3];
    s32 p;
    s32 flag;
    s32 otz;
    u32 *ot;
    u8 *prim;
    u8 *q;
    XY *sp;
    s32 i;

    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    v0.x = AF(o, s16, 6);
    v0.y = AF(o, s16, 0xA);
    v0.z = AF(o, s16, 0xE);
    v1.x = AF(o, s16, 6) - ((rsin(AF(o, s16, 0xFC) + 0x40) * AF(o, s16, 0x100)) >> 7);
    v1.y = AF(o, s16, 0xA) - (AF(o, u16, 0x100) << 5);
    v1.z = AF(o, s16, 0xE) - ((rcos(AF(o, s16, 0xFC) + 0x40) * AF(o, s16, 0x100)) >> 7);
    v2.x = AF(o, s16, 6) - ((rsin(AF(o, s16, 0xFC) - 0x40) * AF(o, s16, 0x100)) >> 7);
    v2.y = AF(o, s16, 0xA) - (AF(o, u16, 0x100) << 5);
    v2.z = AF(o, s16, 0xE) - ((rcos(AF(o, s16, 0xFC) - 0x40) * AF(o, s16, 0x100)) >> 7);
    otz = RotTransPers3(&v0, &v1, &v2, &s[0], &s[1], &s[2], &p, &flag);
    if (otz <= 0 || flag < 0) {
        AF(o, s16, 0x102) = 0;
        AF(o, s16, 0x100)--;
        return;
    }
    otz -= 0x10;
    ot = g_WorldOtOrg[D_800B9A02].ot + otz;
    prim = AllocPrim(0x30);
    if (prim == 0) return;
    SetDrawMode(prim, 0, 0, GetTPage(0, 1, 0, 0) & 0xFFFF, 0);
    q = prim + 0xC;
    i = 0;
    sp = s;
    for (; i < 3; i++, sp++) {
        if ((u16)(sp->x + 0xA0) > 0x140 || (u16)(sp->y + 0x78) > 0xF0) {
            AF(o, s16, 0x102) = 0;
        }
    }
    AF(q, u8, 4) = 0xFF;
    AF(q, u8, 0xC) = 0xFF;
    AF(q, u8, 0x14) = 0xFF;
    AF(q, u8, 0x1C) = 0xFF;
    AF(q, u8, 5) = 0xFF;
    AF(q, u8, 0xD) = 0xFF;
    AF(q, u8, 0x15) = 0xFF;
    AF(q, u8, 0x1D) = 0xFF;
    AF(q, u8, 6) = 0xFF;
    AF(q, u8, 0xE) = 0xFF;
    AF(q, u8, 0x16) = 0xFF;
    AF(q, u8, 0x1E) = 0xFF;
    AF(q, u8, 3) = 8;
    AF(q, u8, 7) = 0x3A;
    AF(q, s16, 8) = s[0].x;
    AF(q, s16, 0x10) = s[0].x;
    AF(q, s16, 0x18) = s[1].x;
    AF(q, s16, 0x20) = s[2].x;
    AF(q, s16, 0xA) = s[0].y;
    AF(q, s16, 0x12) = s[0].y;
    AF(q, s16, 0x1A) = s[1].y;
    AF(q, s16, 0x22) = s[2].y;
    AddPrim(ot, q);
    AddPrim(ot, prim);
}

void func_sc05_010_80184084(StageActor *arg0) {
    s32 temp_v0_2;
    u16 temp_v0;

    temp_v0 = arg0->state;
    if (temp_v0 == 0) {
        arg0->state = (u16) (temp_v0 + 1);
        arg0->work102 = 1U;
        return;
    }
    temp_v0_2 = arg0->timer + 1;
    arg0->timer = temp_v0_2;
    if (temp_v0_2 >= arg0->workFE) {
        FreeActor((s32) arg0);
        return;
    }
    arg0->work100 = (u16) ((u16)arg0->work100 + (u16)arg0->work102);
    func_sc05_010_80183D5C();
}

void func_sc05_010_80184100(u8 *p, s32 d0) {
    s8 d = d0;
    u8 lim;

    if (d == 0) return;
    if (d > 0) {
        lim = ~d;
        if (p[0] <= lim) p[0] += d;
        if (p[1] <= lim) p[1] += d;
        if (p[2] <= lim) p[2] += d;
    } else {
        lim = -d;
        if (p[0] >= lim) p[0] += d;
        if (p[1] >= lim) p[1] += d;
        if (p[2] >= lim) p[2] += d;
    }
}

void func_sc05_010_801841A8(u8 *arg0) {
    D_sc05_010_80192DE0[AF(arg0, u16, 2)]();
}

s32 func_sc05_010_801841E4(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = arg0->model;
    temp_v0->scale.vz = 0;
    temp_v0->scale.vy = 0;
    temp_v0->scale.vx = 0;
    return SetState(arg0, 1);
}

void func_sc05_010_80184214(arg0)
    s32 arg0;
{
    AF(arg0, u8, 0xFC) = 8;
    SetState(arg0, 2);
}

s32 func_sc05_010_8018423C(StageActor *arg0) {
    return SetState(arg0, 3);
}

void func_sc05_010_8018425C(StageActor *arg0) {
    D_sc05_010_80192DE8[arg0->state]();
}

void func_sc05_010_80184298(StageActor *arg0) {
    D_sc05_010_80192DF8[arg0->state]();
}

void func_sc05_010_801842D4(StageActor *arg0) {
    D_sc05_010_80192E34[arg0->state]();
}

void func_sc05_010_80184310(StageActor *arg0) {
    D_sc05_010_80192E50[arg0->state]();
}

void func_sc05_010_8018434C(StageActor *arg0) {
    D_sc05_010_80192E6C[arg0->state]();
}

void func_sc05_010_80184388(StageActor *arg0) {
    D_sc05_010_8019426C[arg0->state]();
}

extern u8 D_sc05_010_80193EB4;
extern u8 D_sc05_010_80192E74;
extern u8 D_sc05_010_80193674;
extern u8 D_sc05_010_80193E74;
extern u8 D_sc05_010_80193ECC;
void func_sc05_010_801843C4(StageActor *o) {
    LoadImage(&D_sc05_010_80193EB4, &D_sc05_010_80192E74);
    LoadImage(&D_sc05_010_80193EB4 + 8, &D_sc05_010_80193674);
    LoadImage(&D_sc05_010_80193EB4 + 0x10, &D_sc05_010_80193E74);
    o->pos[1].h.i = 0x97;
    o->pos[0].h.i = 0;
    o->pos[2].h.i = 0;
    o->ext0 = func_sc05_010_801849DC((s32)o, (s32)&D_sc05_010_80193ECC, 0x300, 0x100, 0xA1);
    if ((s32)o->ext0 == 0) {
        RejectSpawn(o);
        return;
    }
    o->ext1 = func_sc05_010_801849DC((s32)o, (s32)&D_sc05_010_80193ECC, 0x310, 0x100, 0xA2);
    if ((s32)o->ext1 == 0) {
        ZeroFill(o->ext0, 0x38);
        RejectSpawn(o);
        return;
    }
    o->state = 1;
}

void func_sc05_010_801844AC(u8 *o) {
    if (DistSqToPlayer(o) <= 0x400 || (u32)(AF(o, u16, 0x34) - 1) < 2) {
        switch (AF(o, u16, 0x34)) {
        case 0:
            TakePlayerControlNoStop();
            StartEvent(o, &D_sc05_010_80194234);
            AF(o, s16, 0x34)++;
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
            if (GetTechnique() == 5) {
                ArmCrest(5, &D_sc05_010_8018C490);
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
                if (!(AF(o, u16, 0x100) & 1) && (GetPlayerByte1C7() & 0x8000007F) == 0x80000005) {
                    AF(o, u16, 0x100) |= 1;
                    AF(o, s16, 0x34)++;
                }
            }
            break;
        }
        func_sc05_010_80184934((s32)o);
        func_sc05_010_80184988(o);
    } else {
        AF(AF(o, u8 *, 0xCC), u8, 0x27) = 0xA1;
        func_sc05_010_80184988(o);
    }
    if (AF(o, u16, 0x100) & 1) {
        AF(o, u16, 0x100) &= 0xFFFE;
        EndPlayerAction();
        AF(o, s16, 2) = 2;
        AF(o, s16, 0x34) = 0;
        AF(AF(o, u8 *, 0xCC), u8, 0x27) = 0xA1;
        AF(AF(o, u8 *, 0xD0), u8, 0x27) = 0xA2;
        StartEvent(o, &D_sc05_010_80194244);
        AF(o, s16, 0x102) = 10;
        AF(o, s32, 0x1C) = 0;
        AF(o, s16, 0x104) = 0xAF;
        func_8002959C();
    }
}

void ExitLiftPlayer(Mover *o) {
    Player *p = &g_Player;
    u8 *q;
    SV8 a;
    SV8 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer(o) != 0) {
            AF(o, u16, 0x34)++;
            PlaySoundId(0xC61, 0);
        }
        break;
    case 1:
        if (++o->timer > 10) {
            o->timer = 0x20;
            AF(o, u16, 0x34)++;
        } else {
            q = SpawnPropFrom(o, 0x7D);
            if (q != 0) {
                AF(q, u16, 0xA) -= o->timer << 6;
                AF(q, s16, 0x34) = D_sc05_010_801941E8[o->timer];
                AF(q, s16, 0x36) = 10 - o->timer;
            }
        }
        break;
    case 2:
        if (TickTimer(o) != 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        p->pos[1].w -= 0x300000;
        a.x = (u16)p->pos[0].h.i;
        a.y = (u16)p->pos[1].h.i;
        a.z = (u16)p->pos[2].h.i;
        ProjectPoint(&a, &r);
        if ((r.x < 0 ? -r.x : r.x) > 200 || (r.y < 0 ? -r.y : r.y) > 160) {
            func_800D1724(&D_sc05_010_8019222C);
            AF(o, u16, 0x34)++;
        }
        break;
    case 4:
        p->pos[1].w -= 0x300000;
        break;
    }
    if (UpdateScript(o) == 1) {
        EndEvent(o);
    }
}

s32 func_sc05_010_80184934(s32 arg0) {
    AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0xA3;
    return QueueImage((s32) ((D_sc05_010_801941CC[(D_800B99DA & 0x1F)] * 0x10) + &D_sc05_010_801C4148));
}

void func_sc05_010_80184988(u8 *arg0) {
    AF(AF(arg0, u8 *, 0xD0), u8, 0x27) = 0xA4;
    QueueImage(D_sc05_010_801C4048 + D_sc05_010_801941CC[D_800B99DA & 0x1F] * 0x10);
}

s32 func_sc05_010_801849DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
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

void func_sc05_010_80184AA4(StageActor *o) {
    SV8 a;
    SV8 b;
    s32 p;
    s32 flag;
    u8 *prim;
    u8 *q;
    s32 r;
    s32 ang;
    s32 otz;
    s32 i;
    s32 t;

    if (o->state == 0) {
        o->unkFC = rand() & 0xFFF;
        o->work102 = (rand() & 0x1F) + 0x30;
        o->work104 = rand() & 0x3F;
        o->workFE = o->work102 + 0x2C0;
        o->state++;
        return;
    }
    o->pos[1].w -= 0x4000;
    if (o->pos[1].w < (s32)0xFC000000) {
        FreeActor(o);
        return;
    }
    prim = AllocPrim(0x80);
    if (prim == 0) return;
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    r = o->workFE;
    ang = o->unkFC;
    o->work100 += 0x10;
    if (o->work100 > 0x400) {
        o->work100 = 0x400;
        o->pos[1].h.i -= 4;
        o->unkFC = (o->unkFC + 0x200) & 0xFFF;
    } else {
        o->workFE = o->work102 + ((rcos(o->work100) * 0x2C0) >> 12);
        o->unkFC = (o->unkFC + (rsin(o->work100) >> 4)) & 0xFFF;
    }
    a.x = o->pos[0].h.i + ((r * rcos(ang)) >> 12);
    a.y = o->pos[1].h.i;
    a.z = o->pos[2].h.i + ((r * rsin(ang)) >> 12);
    b.y = a.y;
    if (o->work104 != 0) {
        o->work104--;
    } else {
        o->work104 = rand() & 0x3F;
        q = SpawnKind205(o, 0);
        if (q != 0) {
            AF(q, s16, 6) = a.x;
            AF(q, s16, 0xA) = a.y;
            AF(q, s16, 0xE) = a.z;
            AF(q, s32, 0x10) = -(rsin(ang) << 8);
            AF(q, s16, 0x16) = -2;
            AF(q, s32, 0x18) = -(rcos(ang) << 8);
        }
    }
    for (i = 0; i < 8; i++) {
        AF(prim, s32, 4) = 0xFFFFFF;
        SetLineF2(prim);
        ang += 0x80;
        if ((r -= 8) < o->work102) {
            r = o->work102;
        }
        b.x = o->pos[0].h.i + ((r * rcos(ang)) >> 12);
        b.z = o->pos[2].h.i + ((r * rsin(ang)) >> 12);
        otz = RotTransPers(&a, prim + 8, &p, &flag);
        if (otz > 0 && flag >= 0 && RotTransPers(&b, prim + 0xC, &p, &flag) > 0 && flag >= 0) {
            AddPrim(g_WorldOtOrg[D_800B9A02].ot + otz, prim);
            prim += 0x10;
        }
        a.x = b.x;
        a.z = b.z;
    }
}

void func_sc05_010_80184E4C(u8 *o) {
    u8 *q;
    s32 w;
    s32 v;

    AF(AF(o, u8 *, 0x20), u16, 0x14) += 0x200;
    if ((++AF(o, s32, 0x1C) & 7) == 0) {
        q = SpawnProp(0x7E);
        if (q != 0) {
            AngleToVec2(&w, rand() % 0x1000, rand() % ((AF(AF(o, u8 *, 0x20), s16, 0x18) * 3) >> 9));
            v = w;
            AF(q, s16, 6) = AF(o, u16, 6) + v;
            AF(q, s16, 0xA) = AF(o, u16, 0xA);
            AF(q, s16, 0xE) = AF(o, u16, 0xE) + (v >> 16);
            AF(q, s32, 0x10) = rsgn((rand() % 4) << 16);
            AF(q, s32, 0x18) = rsgn((rand() % 4) << 16);
            AF(q, s32, 0x14) = 0xFFF40000 - ((rand() % 9) << 16);
            AF(q, u8 *, 0x2C) = o;
        }
    }
}

void func_sc05_010_80185020(u8 *arg0) {
    D_sc05_010_801942B4[AF(arg0, u16, 2)]();
}

void func_sc05_010_8018505C(u8 *o) {
    SV8 a;
    SV8 r;
    V3 d;
    u8 *t = AF(o, u8 *, 0x2C);
    d.x = AF(o, s16, 6) - AF(t, s16, 6);
    d.y = 0;
    d.z = AF(o, s16, 0xE) - AF(t, s16, 0xE);
    gte_ldlvl(&d);
    gte_sqr0();
    gte_stlvnl(&d);
    if (AF(o, s16, 0x36) == 0) {
        AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0x30);
        AF(AF(o, u8 *, 0x20), u16, 0x12) += AF(o, u16, 0x32);
        AF(AF(o, u8 *, 0x20), u16, 0x14) += AF(o, u16, 0x34);
        if (d.x + d.z > 0x9000) {
            AF(o, s32, 0x14) = 0x18000;
            AF(o, s32, 0x18) = 0;
            AF(o, s32, 0x10) = 0;
            AF(o, s16, 0x36)++;
        }
    } else {
        AF(AF(o, u8 *, 0x20), u16, 0x10) += 0x80;
        AF(AF(o, u8 *, 0x20), u16, 0x14) += 0x80;
        if (d.x + d.z <= 0x4000) {
            s32 n = rand();
            AF(o, s16, 0x36) = 0;
            AF(o, s32, 0x14) = 0xFFF00000 - ((n % 9) << 16);
        }
    }
    MoveProp(o);
    a.x = AF(o, u16, 6);
    a.y = AF(o, u16, 0xA);
    a.z = AF(o, u16, 0xE);
    ProjectPoint(&a, &r);
    if ((r.x < 0 ? -r.x : r.x) >= 0xB5 || (r.y < 0 ? -r.y : r.y) >= 0x8D || AF(o, s16, 0xA) >= 0x10) {
        FreeProp(o);
    }
}

void func_sc05_010_80185288(u8 *arg0) {
    D_sc05_010_801942CC[AF(arg0, u16, 2)]();
}

void func_sc05_010_801852C4(s32 arg0) {
    s32 temp_s0;

    func_sc05_010_80187B80(4);
    temp_s0 = arg0 + 0x76;
    func_sc05_010_8017BF08(temp_s0, temp_s0, 5, 0xD2);
    func_sc05_010_8017E910();
    PlaySoundId(0x89E, 0);
}

void func_sc05_010_8018531C(void) {
    func_sc05_010_80187BAC();
    func_sc05_010_8017E9B4();
}

s32 func_sc05_010_80185344(u8 *arg0) {
    if (AF(arg0, s16, 0x84) != 0) {
        RequestBgmPack(0x84);
        return 1;
    }
    return 0;
}

void func_sc05_010_80185378(void) {
    s16 *p = &D_80126B62;
    *p += 0xC;
}

void func_sc05_010_80185394(void) {
    s16 *p = &D_80126B62;
    *p -= 0xC;
}

void func_sc05_010_801853B0(StageActor *o) {
    u8 *q;
    s32 i;
    if (o->timer == 0) {
        o->state = 1;
        SetScript(o, &D_sc05_010_801A33AC);
        o->timer = 0xB4;
    } else if ((--o->timer & 7) == 0) {
        SpawnActor(0x275, o);
        AF(AF(D_sc05_010_801C7E4C, u8 *, 0x20), s16, 0x1A) = 0xC00;
        for (i = 0; i < 8; i++) {
            q = (u8 *)SpawnActor(0x2ED, o);
            if (q != 0) {
                AF(q, s16, 0x16) = -0x10;
                AF(q, s16, 6) += 0x25B;
                AF(q, s16, 0xA) -= 0x70;
                AF(q, s16, 0x12) = (rand() & 7) - 4;
                AF(q, s16, 0x1A) = -4 - (rand() & 7);
                PlaySoundId(0x895, 0);
            }
        }
    }
}

extern s16 D_sc05_010_801924DC[];
extern u8 *D_sc05_010_801C7E38[];
void func_sc05_010_801854B8(StageActor *o) {
    s32 i;
    u8 *q;
    s32 n;
    if (o->timer == 0) {
        if (--o->workFE != 0) {
            for (i = 0; i < 4; i++) {
                if (g_PlayerX < D_sc05_010_801924DC[i]) {
                    break;
                }
            }
            q = D_sc05_010_801C7E38[i];
            n = D_sc05_010_801C7E78;
            AF(q, s16, 0x10A) = 1;
            o->timer = 0x3C - n * 15;
        } else {
            o->timer = 0x5A;
            o->state = 1;
        }
    } else {
        o->timer--;
    }
}

void func_sc05_010_80185570(StageActor *o) {
    s32 i, n;
    u8 *e;
    for (i = 0; i < 0x14; i++) {
        n = rand() % 5 + 2;
        e = AF(D_sc05_010_801C7E30[n], u8 *, 0x6C);
        if (AF(e, s16, 0x76) > 0) {
            AF(AF(e, u8 *, 0x64), s16, 0x10A) = 2;
            if (n != 2) {
                n--; AF(D_sc05_010_801C7E30[n], s16, 0x10A) = 3; n++;
            }
            n++;
            AF(D_sc05_010_801C7E30[n], s16, 0x10A) = 3;
            o->timer = 0x5A;
            o->state = 1;
            return;
        }
    }
}

void func_sc05_010_80185684(void) {
}

extern u8 D_sc05_010_80192514;
extern s32 D_sc05_010_80192548[];
extern u16 D_sc05_010_8019255C[];
void func_sc05_010_8018568C(StageActor *o) {
    if (SetupActor(o, &D_sc05_010_80192514) == 0) return;
    InitModel(o->model, D_sc05_010_80192548[o->param]);
    o->pos[0].h.i += D_sc05_010_8019255C[o->param];
    o->state = 1;
    SetScript(o, &D_sc05_010_80188CCC);
    o->reactive = 1;
    o->model->flags |= 0x10;
    o->link = SpawnActor(0x28A, o);
}

void func_sc05_010_80185744(StageActor *o) {
    switch (o->work10A) {
    case 0:
        break;
    case 1:
        o->state = 2;
        o->timer = 0xF;
        break;
    case 2:
        o->state = 3;
        o->stateCount = 0;
        o->timer = 0;
        o->unkFC = 3;
        PlaySoundId(0x903, 0);
        break;
    case 3:
        o->state = 4;
        o->stateCount = 0;
        o->timer = 0;
        o->unkFC = 3;
        break;
    }
    o->work10A = 0;
}

void func_sc05_010_801857EC(StageActor *arg0) {
    s32 temp_v0;
    ModelObj *temp_v1;
    ModelObj *temp_v1_2;

    temp_v0 = arg0->timer;
    if (temp_v0 != 0) {
        temp_v1 = arg0->model;
        arg0->timer = (s32) (temp_v0 - 1);
        temp_v1->scale.vy = (u16) ((u16)temp_v1->scale.vy ^ 0x100);
        temp_v1_2 = arg0->model;
        temp_v1_2->scale.vz = (u16) ((u16)temp_v1_2->scale.vz ^ 0x100);
        if (arg0->timer & 1) {
            PlaySoundId(0x902, 0);
        }
    } else {
        arg0->model->scale.vy = 0x1000U;
        arg0->model->scale.vz = 0x1000U;
        arg0->state = 1;
        SpawnActorArg(0x274, (s32) arg0->param, (s32) arg0);
    }
}

void func_sc05_010_80185894(StageActor *arg0) {
    ModelObj *temp_v1;

    if (SetupActor(arg0, (s32) &D_sc05_010_8019257C) != 0) {
        arg0->state = 1;
        arg0->pos[0].h.i = (u16) ((u16)arg0->pos[0].h.i + 0x205);
        arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i + 1);
        SetScript(arg0, (s32) &D_sc05_010_80188CCC);
        temp_v1 = arg0->model;
        arg0->reactive = 1;
        temp_v1->flags = (u16) (temp_v1->flags | 0x10);
        arg0->link = SpawnActor(0x2D4, arg0);
    }
}

void func_sc05_010_80185920(StageActor *o) {
    ModelObj *p;
    switch (o->work10A) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        o->state = 4;
        o->stateCount = 0;
        o->timer = 0;
        o->unkFC = 3;
        break;
    }
    p = o->model;
    o->work10A = 0;
    if (p->scale.vy < 0x1000) {
        p->scale.vy += 0x40;
    }
}

void func_sc05_010_80185990(StageActor *o) {
    s32 v;
    switch (o->stateCount) {
    case 0:
        v = rsin(o->timer += 0x80) >> 6;
        v += 0x1000;
        o->model->scale.vy = v;
        o->model->scale.vz = v;
        if (o->timer >= 0x800) {
            o->timer &= 0x7FF;
            if (--o->unkFC == 0) {
                o->stateCount++;
            }
        }
        break;
    case 1:
        v = rsin(o->timer += 0x80) >> 3;
        v += 0x1000;
        o->model->scale.vy = v;
        o->model->scale.vz = v;
        if (o->timer >= 0x800) {
            o->model->scale.vy = 0x1000;
            o->model->scale.vz = 0x1000;
            o->state = 1;
        }
        break;
    }
}

void func_sc05_010_80185AAC(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x76) = (u16) (AF(arg0, u16, 0x76) - 0xA);
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    if ((s16) AF(arg0, u16, 0x76) < -0x12B) {
        AF(arg0, s16, 0x76) = -0x12C;
    }
    if ((u32) ((AF(arg0, u16, 0x76) + 0xA) & 0xFFFF) < 0xAU) {
        AF(arg0, s16, 0x76) = -0x12C;
    }
    func_sc05_010_801806A0((s32) arg0, 0);
}

void func_sc05_010_80185B20(StageActor *arg0) {
    u16 temp_v0;
    ModelObj *temp_a2;

    if (SetupActor(arg0, (s32) &D_sc05_010_801926E0) != 0) {
        temp_a2 = arg0->model;
        temp_a2->unk04 = (s32) ((s32)temp_a2->unk04 | 0x80000000);
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC, (s32) temp_a2);
        arg0->targetClass = 3;
        arg0->reactive = 1;
        arg0->params = &D_sc05_010_80192714;
        AF(arg0, s16, 0xAE) = -1;
        arg0->reactMask = 0;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        temp_v0 = (u16)arg0->parent->param;
        arg0->param = temp_v0;
        AF(arg0, void *, 0x58) = (void *) (((s32) (temp_v0 << 0x10) >> 0xC) + &D_sc05_010_801922B0);
    }
}

void func_sc05_010_80185BD8(StageActor *arg0) {
    u16 temp_v0;

    if ((arg0->unk74 != 0) && (func_800CF8B4() != 0) && (PlayerFlag1000() != 0)) {
        temp_v0 = (u16)arg0->hp - 4;
        arg0->hp = temp_v0;
        if ((s16) temp_v0 < -0x12B) {
            arg0->hp = -0x12C;
        }
        if ((u32) (((u16)arg0->hp + 4) & 0xFFFF) < 4U) {
            arg0->hp = -0x12C;
        }
        func_sc05_010_801806A0((s32) arg0, 0);
    }
}

void func_sc05_010_80185C80(StageActor *arg0) {
    ModelObj *temp_a2;

    if (SetupActor(arg0, (s32) &D_sc05_010_8019273C) != 0) {
        temp_a2 = arg0->model;
        temp_a2->unk04 = (s32) ((s32)temp_a2->unk04 | 0x80000000);
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC, (s32) temp_a2);
        arg0->targetClass = 3;
        arg0->reactive = 1;
        AF(arg0, s16, 0xAE) = -1;
    }
}

void func_sc05_010_80185CF8(void) {
}

void func_sc05_010_80185D00(StageActor *arg0) {
    ModelObj *temp_v1;

    if (SetupActor(arg0, (s32) &D_sc05_010_80192778) != 0) {
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC);
        temp_v1 = arg0->model;
        arg0->reactive = 1;
        arg0->workFE = 0xF;
        temp_v1->flags = (u16) (temp_v1->flags | 0x10);
        arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i + D_sc05_010_801927AC[((u16)arg0->param & 0xF)]);
    }
}

void func_sc05_010_80185D98(u8 *o) {
    V3 v;
    u8 *q;
    s32 i;
    AF(AF(o, u8 *, 0x20), s16, 0x12) -= 0x400;
    func_sc05_010_8017ECE4(o);
    v.x = 0;
    v.y = 0;
    v.z = 0x40000;
    SetLocalVelocityXZ(o, &v);
    AF(o, s32, 0x14) = 0xFFF80000;
    for (i = 0; i < 3; i++) {
        q = (u8 *)SpawnActor(0x2ED, o);
        if (q != 0) {
            AF(q, s16, 6) = AF(o, s16, 0x7C);
            AF(q, s16, 0xA) = AF(o, s16, 0x7E);
            AF(q, s16, 0xE) = AF(o, s16, 0x80);
            AF(q, s16, 0x12) = (AF(o, s16, 0x12) * (rand() & 0x3FF)) >> 8;
            AF(q, s16, 0x1A) = (AF(o, s16, 0x1A) * (rand() & 0x3FF)) >> 8;
            AF(q, s16, 0x16) = -0xC - (rand() & 3);
        }
    }
}

void func_sc05_010_80185EA0(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    Mover *temp_v0;

    if (!(rand(arg0, arg1, arg2, arg3) & 7)) {
        temp_v0 = SpawnActorArg(0x27B, 0, arg0);
        if (temp_v0 != 0) {
            StopMotion(temp_v0);
            temp_v0->pos[2].h.i = 0;
        }
    }
    FreeActor(arg0);
}

void func_sc05_010_80185F08(u16 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (*arg0 != 0) {
        func_sc05_010_8017ECE4((s32) arg0, arg1, arg2, arg3);
    }
}

void func_sc05_010_80185F38(u8 *arg0) {
    void *temp_v1;

    TakeDamageAndRecoil();
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) - 0x400);
    AF(arg0, s32, 0x1C) = 0x78;
    SpawnKind39Trio((s32) arg0);
    PlaySoundId(0x47B, 0);
    PlaySoundId(0x478, 0);
    func_800CB0E8((s32) arg0);
    func_sc05_010_8017ECE4((s32) arg0);
    StopWithGravity((s32) arg0);
}

void func_sc05_010_80185FB4(s32 arg0) {
    MoveCollidePassable(arg0);
    if (TickTimer(arg0) != 0) {
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
    }
    func_sc05_010_8017ECE4(arg0);
}

void func_sc05_010_80185FFC(s32 arg0) {
    s32 temp_ret;
    void *temp_v1;

    if (SetupActor(arg0, (s32) &D_sc05_010_801927D0) != 0) {
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -0x2041;
        AF(arg0, s16, 0xAE) = 0x2000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        StopWithGravity(arg0);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(arg0, s32 *, 0xBC) = &D_sc05_010_80192804;
        AF(arg0, s32, 4) = 0x025B0000;
        AF(arg0, s32, 8) = 0xFF900000;
        temp_ret = rand();
        AF(arg0, s32, 0x10) = (s32) (((temp_ret % 576) + 0x60) << 0xB);
        AF(arg0, s16, 0xFE) = (s16) ((rand() & 0x1FF) + 0x100);
    }
}

void func_sc05_010_801860F4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 == 0) {
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, u16, 0x5C) = 0x8000;
        return;
    }
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
}

void func_sc05_010_80186124(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc05_010_801928F0) != 0) {
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC);
        arg0->reactive = 1;
        arg0->reactMask = -1;
        AF(arg0, s16, 0xAE) = -1;
        arg0->model->rot.vz = 0x180;
        arg0->unkFC = 0;
        arg0->workFE = 0x400;
        arg0->work100 = 0;
        SetModelCullBox((s32) arg0->model, 0x400, 0x400);
        arg0->targetClass = 3;
        D_sc05_010_801C7E54 = SpawnActor(0x28D, arg0);
    }
}

void func_sc05_010_801861D0(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc05_010_8019294C) != 0) {
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc05_010_801AB1A8);
        arg0->targetClass = 3;
        arg0->reactive = 1;
        arg0->reactMask = -1;
        AF(arg0, s16, 0xAE) = -1;
        SetModelCullBox(arg0->model, 0x400, 0x400);
    }
}

void func_sc05_010_8018624C(StageActor *arg0) {
    s16 temp_s1;

    if (arg0->parent->work10A == 3) {
        temp_s1 = arg0->work10A;
        if ((temp_s1 == 1) && (ActorSegmentHitsPlayer((s32) arg0, (s32) &D_sc05_010_80192980, (s32) &D_sc05_010_80192988) == temp_s1)) {
            g_PlayerHitKind = 0x400F;
            g_PlayerHitDamage = 0;
            g_PlayerAttacker = arg0;
        }
    }
}

void func_sc05_010_801862D8(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc05_010_801929A8) != 0) {
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC);
        arg0->targetClass = 3;
        arg0->reactive = 1;
        arg0->reactMask = -1;
        AF(arg0, s16, 0xAE) = -1;
        arg0->model->rot.vz = 0x180;
        arg0->unkFC = 0;
        arg0->workFE = -0x400;
        arg0->work100 = 0;
        SetModelCullBox((s32) arg0->model, 0x400, 0x400);
        D_sc05_010_801C7E5C = SpawnActor(0x28F, arg0);
    }
}

void func_sc05_010_80186384(StageActor *o) {
    o->model->rot.vz = AF(AF(D_sc05_010_801C7E50[0], u8 *, 0x20), s16, 0x14);
    o->unkFC = -0x8000 - AF(D_sc05_010_801C7E50[0], s16, 0xFC);
    o->workFE = -0x8000 - AF(D_sc05_010_801C7E50[0], s16, 0xFE);
}

void func_sc05_010_801863E0(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc05_010_801929F4) != 0) {
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc05_010_801AB180);
        arg0->targetClass = 3;
        arg0->reactive = 1;
        arg0->reactMask = -1;
        AF(arg0, s16, 0xAE) = -1;
        SetModelCullBox(arg0->model, 0x400, 0x400);
    }
}

void func_sc05_010_8018645C(StageActor *arg0) {
    s16 temp_s1;

    if (AF(D_sc05_010_801C7E50[0], s16, 0x10A) == 3) {
        temp_s1 = arg0->work10A;
        if ((temp_s1 == 1) && (ActorSegmentHitsPlayer((s32) arg0, (s32) &D_sc05_010_80192980, (s32) &D_sc05_010_80192988) == temp_s1)) {
            g_PlayerHitKind = 0x400F;
            g_PlayerHitDamage = 0;
            g_PlayerAttacker = arg0;
        }
    }
}

void func_sc05_010_801864E4(StageActor *o) {
    s32 s;
    s32 v;
    u8 *p;

    o->unkFC += 0x20;
    o->pos[0].w = o->vel[0] + rcos(o->unkFC) * 0x2000;
    o->pos[1].w = o->vel[1] - rsin(o->unkFC) * 0x2000;
    if (o->unkFC >= 0x400) {
        if (rand() & 1) {
            v = -0x255555;
        } else {
            v = -0x1D5555;
        }
        for (s = v; s <= 0x3AAAA9; s += 0x1AAAAA) {
            p = (u8 *)SpawnActorArg(0x29E, 1, o);
            if (p != 0) {
                AF(p, s32, 0x10) = s;
            }
        }
        FreeActor(o);
    }
}

void func_sc05_010_801865E8(StageActor *arg0) {
    if (MoveCollide() & 0x2000) {
        FreeActor(arg0);
    }
}

void func_sc05_010_80186624(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    StopMotion(arg0);
    func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80192AFC);
    SetScript(arg0, (s32) &D_sc05_010_80192B38);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, s16, 0x1A) = 0x4000;
    AF(temp_v1_2, s16, 0x18) = 0x4000;
    AF(arg0, s32, 0x10) = (s32) (((rand(temp_a0) & 0x7FF) - 0x400) * 0x156);
    AF(arg0, s32, 0x14) = (s32) (((rand() & 0x7FF) - 0x400) << 7);
    AF(arg0, s16, 6) = 0x270;
    AF(arg0, s16, 0xA) = -0xC0;
    AF(arg0, s16, 0xE) = -0x40;
}

void func_sc05_010_8018672C(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    StopWithGravity(arg0);
    func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80192B70);
    SetScript(arg0, (s32) &D_sc05_010_80192C30);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
}

void func_sc05_010_801867E4(StageActor *o) {
    u8 *q;
    s32 i;
    s32 a;
    MoveCollide();
    if (func_sc05_010_8017ECE4(o) > 0) {
        q = SpawnKind205(o, 0);
        if (q != 0) {
            AF(AF(q, u8 *, 0x20), s16, 0x18) = 0x5000;
            AF(AF(q, u8 *, 0x20), s16, 0x1A) = 0x5000;
            AF(q, s16, 0x16) = -8;
        }
        for (i = 0; i < 8; i++) {
            q = (u8 *)SpawnActorArg(0x29E, 2, o);
            if (q != 0) {
                a = (rand() & 0x1FF) + (i << 9);
                AF(q, s32, 0x10) = rsin(a) << 6;
                AF(q, s32, 0x18) = rcos(a) << 6;
                AF(q, s32, 0x14) = 0xFFF80000 - ((rand() & 0x3FF) << 8);
            }
        }
        FreeActor(o);
    }
}

void func_sc05_010_801868EC(StageActor *o) {
    s32 t;
    AF(D_sc05_010_801C7E30[0], s16, 0x76) -= 0x80;
    func_sc05_010_8017C010((s32)((u8 *)o->parent + 0x76), (s32)&D_sc05_010_801924A0, 0xD2);
    ShowDamage(o, 0x80);
    func_8016B3F4(o);
    if (AF(D_sc05_010_801C7E30[0], s16, 0x76) <= 0) {
        AF(D_sc05_010_801C7E30[0], s16, 2) = 0xB;
        FreeActor(D_sc05_010_801C7E60);
        SetScript(D_sc05_010_801C7E30[0], &D_sc05_010_801A36FC);
        o->state = 4;
        o->stateCount = 0;
    } else {
        o->hp = 1000;
        o->timer = 0x1E;
        t = D_sc05_010_801C7E78;
        o->state = 5;
        D_sc05_010_801C7E78 = t + 1;
    }
    if (o->hitFx[0] != 0) {
        GainStat3FromActor(o);
    }
    o->hitState = 0;
    o->react = 0;
    PlaySoundId(0x9CE, 0);
}

extern u8 D_sc05_010_80192D54;
void func_sc05_010_80186A00(StageActor *o) {
    ModelObj *p;
    u16 t;

    if (SetupActor(o, &D_sc05_010_80192D18) == 0) return;
    o->state = 1;
    SetScript(o, &D_sc05_010_80188CCC);
    p = o->model;
    o->reactive = 1;
    t = p->flags;
    D_sc05_010_801C7E74 = 0;
    p->flags = t | 0x80;
    o->model->unk80 = (u8 *)&D_sc05_010_80192D4C;
    AF(o, s16, 0xAE) = -0x13;
    o->params = &D_sc05_010_80192D54;
    o->reactMask = 0;
    o->timer = 8;
    o->reactOpts |= 3;
}

void func_sc05_010_80186AA8(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer;
    if (temp_v0 != 0) {
        arg0->timer = (s32) (temp_v0 - 1);
        arg0->pos[0].h.i = (u16) ((u16)arg0->pos[0].h.i + 1);
        arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i - 1);
        return;
    }
    arg0->timer = 0x12C;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc05_010_80186AF4(StageActor *o) {
    s32 i;
    u8 *p;
    if (o->timer != 0) {
        o->timer--;
        return;
    }
    o->timer = 2;
    o->state++;
    PlaySoundId(0x89D, 0);
    for (i = 0; i < 8; i++) {
        p = (u8 *)SpawnActor(0x2ED, o);
        if (p != 0) {
            AF(p, s16, 0x16) = -0x10;
            AF(p, s16, 0xA) += 0x20;
            AF(p, s16, 0xE) -= 0x18;
            AF(p, s16, 0x12) = (rand() & 7) - 4;
            AF(p, s16, 0x1A) = -4 - (rand() & 7);
        }
    }
}

void func_sc05_010_80186BD8(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer;
    if (temp_v0 != 0) {
        arg0->timer = (s32) (temp_v0 - 1);
        arg0->pos[0].h.i = (u16) ((u16)arg0->pos[0].h.i - 6);
        arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i + 8);
        return;
    }
    D_sc05_010_801C7E34 = 0;
    AF(D_sc05_010_801C7E30[0], u16, 0x34) = (u16) (AF(D_sc05_010_801C7E30[0], u16, 0x34) + 1);
    FreeActor((s32) arg0);
}

void func_sc05_010_80186C44(StageActor *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        arg0->timer = 2;
        arg0->state = 3;
        PlaySoundId(0x89D, 0);
        var_s2 = 0;
        do {
            temp_v0_2 = SpawnActor(0x2ED, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s16, 0x16) = -0x10;
                AF(temp_v0_2, u16, 0xA) = (u16) (AF(temp_v0_2, u16, 0xA) + 0x20);
                AF(temp_v0_2, u16, 0xE) = (u16) (AF(temp_v0_2, u16, 0xE) - 0x18);
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 7) - 4);
                AF(temp_v0_2, s16, 0x1A) = (s16) (-4 - (rand() & 7));
            }
            var_s2 += 1;
        } while (var_s2 < 8);
        return;
    }
    arg0->pos[0].h.i = (u16) ((u16)arg0->pos[0].h.i ^ 4);
}

void func_sc05_010_80186D38(void) {
}

void func_sc05_010_80186D40(u8 *arg0) {
    s32 temp_a2;

    func_8001CD50(AF(arg0, s32, 0x20), (s32) &D_sc05_010_801C7E7C);
    temp_a2 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x100);
    AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x50000000);
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0x400;
    AF(arg0, s16, 0x2C) = 0x10;
    SetShapeCircle((s32) &D_sc05_010_801C7E7C, 0x10);
    *(B4 *) &D_sc05_010_801C7E7C = *(B4 *) &D_sc05_010_801C5B80;
    *(B4 *) &D_sc05_010_801C7E80 = *(B4 *) &D_sc05_010_801C5B84;
    AF(AF(arg0, s32, 0x20), s16, 0x1E) = 0xC00;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_010_80186E1C(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0x2C);
    if (temp_v0 < 0x700) {
        AF(arg0, s16, 0x2C) = (s16) (temp_v0 + 0x30);
        func_sc05_010_80184100((s32) &D_sc05_010_801C7E80, -4);
        SetShapeCircle((s32) (&D_sc05_010_801C7E80 - 4), (s32) (u16) AF(arg0, s16, 0x2C));
        return;
    }
    FreeProp((s32) arg0);
}

void func_sc05_010_80186E94(StageActor *arg0) {
    ModelObj *temp_v0;
    s32 temp_v0_2;
    ModelObj *temp_v1;
    ModelObj *temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc05_010_801B5C84);
    temp_v0_2 = AllocActorModel();
    arg0->ext0 = temp_v0_2;
    if (temp_v0_2 == 0) {
        RejectSpawn(arg0);
        arg0->model->type = 0;
        return;
    }
    func_8001C810(temp_v0_2, (s32) &D_sc05_010_801B6434);
    temp_v1 = arg0->model;
    arg0->reactive = 0;
    temp_v1->unk04 = (s32) ((s32)temp_v1->unk04 | 0x50000000);
    temp_v1_2 = arg0->model;
    temp_v1_2->flags = (u16) (temp_v1_2->flags | 0x10);
    temp_v1_3 = (s32)arg0->ext0;
    AF(temp_v1_3, s32, 4) = (s32) (AF(temp_v1_3, s32, 4) | 0x50000000);
    temp_v1_4 = (s32)arg0->ext0;
    AF(temp_v1_4, u16, 0x2C) = (u16) (AF(temp_v1_4, u16, 0x2C) | 0x10);
    func_sc05_010_801841E4(arg0);
}

void func_sc05_010_80186F7C(StageActor *arg0) {
    u16 temp_v1;
    u16 temp_v1_2;
    void *temp_a1;
    ModelObj *temp_a2;
    ModelObj *temp_v0;
    ModelObj *temp_v1_3;

    temp_a2 = arg0->model;
    temp_v1 = (u16)temp_a2->scale.vx;
    temp_a1 = arg0->ext0;
    if (temp_v1 < 0x3000U) {
        temp_a2->scale.vx = (u16) (temp_v1 + 0x100);
        temp_v0 = arg0->model;
        temp_v1_2 = (u16)temp_v0->scale.vx;
        temp_v0->scale.vz = temp_v1_2;
        temp_v0->scale.vy = temp_v1_2;
        temp_v1_3 = arg0->model;
        temp_v1_3->rot.vy = (u16) ((u16)temp_v1_3->rot.vy + 0x100);
        AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) - 0x100);
        AF(temp_a1, s16, 8) = (s16) ((u16)arg0->pos[0].h.i + (u16)arg0->ofs[0]);
        AF(temp_a1, s16, 0xA) = (s16) ((u16)arg0->pos[1].h.i + (u16)arg0->ofs[1]);
        AF(temp_a1, s16, 0xC) = (s16) ((u16)arg0->pos[2].h.i + (u16)arg0->ofs[2]);
        AF(temp_a1, u16, 0x18) = (u16) (u16)arg0->model->scale.vx;
        AF(temp_a1, u16, 0x1A) = (u16) (u16)arg0->model->scale.vy;
        AF(temp_a1, u16, 0x1C) = (u16) (u16)arg0->model->scale.vz;
        return;
    }
    func_sc05_010_80184214();
}

void func_sc05_010_80187074(u8 *arg0) {
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
        }
        break;
    case 1:
        if (TickTimer((s32) arg0) != 0) {
            func_sc05_010_8018423C((s32) arg0);
        }
        break;
    }
    DrawFadeWhite((s32) AF(arg0, u8, 0xFC), 0);
}

void func_sc05_010_80187144(StageActor *arg0, s32 arg1) {
    u32 temp_v1;
    u8 temp_v0;

    temp_v0 = AF(arg0, u8, 0xFC) - 3;
    temp_v1 = temp_v0 & 0xFF;
    AF(arg0, u8, 0xFC) = temp_v0;
    if (temp_v1 >= 9U) {
        DrawFadeWhite((s32) temp_v1, 0);
        return;
    }
    FreeActor((s32) arg0, arg1);
}

void func_sc05_010_80187198(StageActor *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    ModelObj *temp_a0;
    ModelObj *temp_a0_2;
    ModelObj *temp_a0_3;
    ModelObj *temp_a0_4;

    temp_v0 = MoveCollide();
    if (temp_v0 != 0) {
        arg0->unkFC = (u16) -(s32) (u16)arg0->unkFC;
        arg0->workFE = (u16) -(s32) (u16)arg0->workFE;
        arg0->work100 = (u16) -(s32) (u16)arg0->work100;
        if (temp_v0 & 0x8000) {
            arg0->vel[0] = (s32) -arg0->vel[0];
            arg0->vel[2] = (s32) -arg0->vel[2];
        } else {
            arg0->vel[1] = (s32) -arg0->vel[1];
        }
    }
    temp_a0 = arg0->model;
    temp_a0->rot.vx = (u16) ((u16)temp_a0->rot.vx + (u16)arg0->unkFC);
    temp_a0_2 = arg0->model;
    temp_a0_2->rot.vy = (u16) ((u16)temp_a0_2->rot.vy + (u16)arg0->workFE);
    temp_a0_3 = arg0->model;
    temp_a0_3->rot.vz = (u16) ((u16)temp_a0_3->rot.vz + (u16)arg0->work100);
    temp_v0_2 = arg0->timer - 1;
    arg0->timer = temp_v0_2;
    if (temp_v0_2 < 0x10) {
        temp_a0_4 = arg0->model;
        temp_a0_4->unk04 = (s32) ((s32)temp_a0_4->unk04 ^ 0x80000000);
        if (arg0->timer == 0) {
            FreeActor((s32) arg0);
        }
    }
}

void func_sc05_010_801872BC(s32 arg0) {
    if (SetupActor(arg0, (s32) &D_sc05_010_80192D18) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0x5C) = 0;
        SetScript(arg0, (s32) &D_sc05_010_80188CCC);
        AF(arg0, s16, 2) = 1;
        StopWithGravity(arg0);
        AF(arg0, s16, 0xFC) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0xFE) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0x100) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0x12) = (s16) ((rand() & 0xF) - 8);
        AF(arg0, s16, 0x1A) = (s16) ((rand() & 0xF) - 8);
        AF(arg0, s16, 0x16) = (s16) -((rand() & 0xF) + 0x28);
        AF(arg0, s32, 0x1C) = 0x5A;
    }
}

extern u8 D_sc05_010_80192E00;
void func_sc05_010_8018738C(StageActor *o) {
    if (SetupActor(o, &D_sc05_010_80192E00) != 0) {
        o->model->unk04 |= 0x40000040;
        o->reactive = 1;
        o->hitState = 0;
        SetScript(o, &D_sc05_010_80188CCC);
        o->state = 1;
        o->timer = 6;
    }
}

void func_sc05_010_80187404(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        FreeActor((s32) arg0);
    }
}

void func_sc05_010_80187438(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    StopWithGravity(arg0);
    func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80192E3C);
    SetScript(arg0, (s32) &D_sc05_010_80192E48);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0xE) = -0x30;
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x08000000);
    AF(AF(arg0, s32, 0x20), s16, 0x14) = 0xC00;
    AF(arg0, s32, 0x1C) = 0x14;
}

void func_sc05_010_801874DC(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        FreeActor((s32) arg0);
        D_sc05_010_801C7E64[0] = 0;
    }
    arg0->pos[1].h.i = 0U;
    func_sc05_010_8017ECE4((s32) arg0);
    arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i - 0x20);
}

extern u8 D_sc05_010_80192E58;
extern u8 D_sc05_010_80192E64;
void func_sc05_010_80187540(u8 *o) {
    s32 t;
    u8 *p;
    s32 r;
    t = AllocActorModel(o);
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    StopWithGravity(o);
    func_8001CA1C(AF(o, s32, 0x20), (s32) &D_sc05_010_80192E58);
    SetScript(o, (s32) &D_sc05_010_80192E64);
    p = AF(o, u8 *, 0x20);
    AF(o, s16, 2) = 1;
    AF(p, s32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    r = (rand() & 0x3FF) + 0xA00;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = r;
    AF(o, s32, 0x1C) = 0x1E;
}

void func_sc05_010_80187600(s32 arg0) {
    s32 temp_v0;

    MoveCollidePassable(arg0);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        FreeActor(arg0);
    }
}

void func_sc05_010_80187644(u8 *arg0) {
    s32 temp_a0;

    InitSpriteKind2(AF(arg0, s32, 0x20), (s32) &D_sc05_010_80194290, 0x254, 0x1C0);
    AF(AF(arg0, s32, 0x20), u8, 0x27) = 0x25;
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0xC00;
    AF(AF(arg0, s32, 0x20), s16, 0x14) = rand() % 0x1000;
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    AF(arg0, s32, 0x1C) = (s32) AF(arg0, s16, 0x36);
}

void func_sc05_010_801876EC(u8 *arg0, s32 arg2, s32 arg3) {
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) (AF(temp_v1, u16, 0x14) + 0x100);
    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
        return;
    }
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x18) = (u16) (AF(temp_v1_2, u16, 0x18) + 0x400);
    temp_v1_3 = AF(arg0, void *, 0x20);
    AF(temp_v1_3, u16, 0x1A) = (u16) (AF(temp_v1_3, u16, 0x1A) + 0x400);
    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0_2 = AF(arg0, s16, 0x34);
    if (temp_v0_2 < (s16) AF(temp_a1, u16, 0x18)) {
        AF(temp_a1, u16, 0x1A) = (u16) temp_v0_2;
        AF(temp_a1, u16, 0x18) = (u16) temp_v0_2;
        AF(arg0, s32, 0x1C) = rand();
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_010_801877A8(u8 *arg0) {
    s32 r;
    s32 p;
    s16 t;

    InitSpriteKind2(AF(arg0, s32, 0x20), (s32) &D_sc05_010_801942C0, 0x234, 0x1C0);
    AF(AF(arg0, s32, 0x20), u8, 0x27) = 0x26;
    AF(arg0, s16, 0x30) = (s16) (rand() & 0x1FF);
    AF(arg0, s16, 0x32) = (s16) (rand() & 0x1F);
    AF(arg0, s16, 0x34) = (s16) (rand() & 0x7F);
    r = rand();
    p = AF(arg0, s32, 0x20);
    t = (r % 0x1000) + 0x800;
    AF(p, s16, 0x1A) = t;
    AF(p, s16, 0x18) = t;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

s32 func_sc05_010_80187854(s32 arg0, s32 arg1) {
    return SelectCollisionMap(0);
}

s32 func_sc05_010_80187874(void) {
    return func_8013C08C((s32) &D_sc05_010_801C7FC0, (s32) &D_sc05_010_801988EC);
}

s32 func_sc05_010_801878A4(void) {
    return 0x6C;
}

void func_sc05_010_801878AC(u8 *arg0) {
    D_sc05_010_801C3CF0[AF(arg0, u16, 2)]();
}

void func_sc05_010_801878E8(u8 *o) {
    u8 *a;
    B4 *p;

    a = AllocSprite16To3E();
    if (a != 0) {
        AF(o, u8 *, 0x20) = a;
        InitSpriteKind0(a, &D_sc05_010_801C3BE0, D_sc05_010_801C3B7C[AF(o, s32, 0x2C)].x, D_sc05_010_801C3B7C[AF(o, s32, 0x2C)].y);
        AF(a, u8, 0x27) = D_sc05_010_801C3BA8[AF(o, s32, 0x2C)];
        AF(a, s16, 0x2C) = 3;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xA) = 0x50;
        D_sc05_010_801C3CE0 = D_sc05_010_801C3BB4[AF(o, s32, 0x2C)];
        D_sc05_010_801C3CDC = AF(&D_sc05_010_801C3CDC, B4, 0x4);
        D_sc05_010_801C3CAC = AF(&D_sc05_010_801C3CAC, B4, 0x30);
        D_sc05_010_801C3CA8 = AF(&D_sc05_010_801C3CA8, B4, 0x4);
        D_sc05_010_801C3C78 = AF(&D_sc05_010_801C3C78, B4, 0x30);
        D_sc05_010_801C3C74 = AF(&D_sc05_010_801C3C74, B4, 0x4);
        D_sc05_010_801C3C44 = AF(&D_sc05_010_801C3C44, B4, 0x30);
        p = &D_sc05_010_801C3C40;
        *p = D_sc05_010_801C3C44;
        D_sc05_010_801C3C18 = *p;
        AF(o, s16, 2)++;
    } else {
        FreeEffect(o);
    }
}

void func_sc05_010_80187AE8(s32 arg0) {
    func_sc05_010_80187B28(arg0);
}

void func_sc05_010_80187B08(s32 arg0) {
    FreeEffect(arg0);
}

s32 func_sc05_010_80187B28(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    DrawPrimF4Screen((s32) &D_sc05_010_801C3BF8);
    var_s1 = 0;
    var_s0 = &D_sc05_010_801C3C20;
    do {
        DrawPrimG4ScreenDithered((s32) var_s0);
        var_s1 += 1;
        temp_v0 = var_s1 < 4;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x34);
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc05_010_80187B80(s32 arg0) {
    return SpawnEffectOn(0x28, 0, arg0, 0);
}

void func_sc05_010_80187BAC(void) {
    s32 temp_v0;

    temp_v0 = FindEffectByKind((s32) &g_Player, 0x28);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 2) = (u16) (AF(temp_v0, u16, 2) + 1);
    }
}

void func_sc05_010_80187BF0(u8 *arg0) {
    D_sc05_010_801C3CFC[AF(arg0, u16, 2)]();
}

void func_sc05_010_80187C2C(s32 arg0) {
    CollidePlayerMove();
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    func_sc05_010_80187C74(arg0);
    NextObjState(arg0);
}

void func_sc05_010_80187C74(s32 arg0) {
    StartRumbleScript((s32) &D_80062C04);
    ShowQueuedDamageNumber(arg0);
    ClearPlayerHittable(arg0);
    SetPlayerFlag7E2(arg0);
    AF(arg0, u8, 0xDE) = 0x10;
    SetObjPush(arg0, 0, 0, 0);
    SetFallSpeed(arg0, 0x40000);
    LeavePlatform(arg0);
    ResetTiltVectors(arg0);
    NextObjState(arg0);
}

void func_sc05_010_80187D00(s32 arg0, s32 arg1) {
    u8 temp_v1;

    ClearPlayerHittable(arg0, arg1);
    SetVelFromPushKeepAxes(arg0);
    MoveObjByVel(arg0);
    AddFallSpeedLimited(arg0, 0x4000);
    ApplyFallSpeed(arg0);
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        func_801470B4(arg0);
        NextObjState(arg0);
    }
}

extern s16 D_sc05_010_801C3D10;
extern s16 D_sc05_010_801C3D12;
extern s16 D_sc05_010_801C3D14;
void func_sc05_010_80187D70(u8 *o) {
    s16 *p = &D_sc05_010_801C3D10;
    *p = func_sc05_010_8017EC7C(o);
    ClearPlayerHittable(o);
    AF(o, s16, 6) = EaseValue(AF(o, s16, 6), *p, 8);
    AF(o, s16, 0xA) = EaseValue(AF(o, s16, 0xA), D_sc05_010_801C3D12, 8);
    AF(o, s16, 0xE) = EaseValue(AF(o, s16, 0xE), D_sc05_010_801C3D14, 8);
    if (AF(o, s16, 6) == *p && AF(o, s16, 0xA) == D_sc05_010_801C3D12
        && AF(o, s16, 0xE) == D_sc05_010_801C3D14) {
        o[0xDE] = 0;
        o[0xDF] = 0;
        NextObjState(o);
    }
}

void func_sc05_010_80187E48(s32 arg0, s32 arg1) {
    s32 pad[4];
    ClearPlayerHittable(arg0, arg1);
    SetObjPush(arg0, 0, 0, 0);
    func_sc05_010_80187E9C(arg0);
    EnterPlayerStanding(arg0);
    func_80165718(arg0);
}

s32 func_sc05_010_80187E9C(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

void func_sc05_010_80187EDC(u8 *arg0) {
    D_sc05_010_801C3D18[AF(arg0, u16, 2)]();
}

void func_sc05_010_80187F18(s32 arg0) {
    func_sc05_010_80187F48();
    NextObjState(arg0);
}

extern u8 D_80062C14;
extern u8 D_800D5904;
void func_sc05_010_80187F48(u8 *o) {
    StartRumbleScript(&D_80062C14);
    SetPlayerMotion(o, &D_800D5904);
    StartFace(o, 0x20);
    AF(o, s32, 0x234) = 0;
    SetFallSpeed(o, 0xFFC00000);
    ClearPlayerHittable(o);
    PlaySe(0x451);
    SetObjTimer(o, 0x12C);
    NextObjState(o);
}

void func_sc05_010_80187FCC(u8 *o) {
    u8 unused[0x20];
    s32 r;
    ClearPlayerHittable();
    AF(AF(o, u8 *, 0x20), u16, 0x12) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x5B) & 0xFFF;
    AF(AF(o, u8 *, 0x20), u16, 0x10) = (AF(AF(o, u8 *, 0x20), u16, 0x10) - 0x16) & 0xFFF;
    if (AF(AF(o, u8 *, 0x20), s16, 0x10) < 0xC00) {
        AF(AF(o, u8 *, 0x20), s16, 0x10) = -0x400;
    }
    AddFallSpeedLimited(o, 0x10000);
    ApplyFallSpeed(o);
    if (AF(o, s32, 0x234) == 0 && AF(o, s32, 0x34) >= 0 && (AF(o, u16, 0xB8) & 0x8000)) {
        AF(o, u16, 0xB8) = AF(o, u16, 0xBA);
    }
    r = func_801535F4(o);
    if (r != 0) {
        if (r >= 0) {
            if (r < 3) goto body;
        }
    }
    if (TickObjTimer(o) == 0) return;
body:
    ShowQueuedDamageNumber(o);
    SetObjTimer(o, 0x1E);
    StartCameraShake(&D_sc05_010_801C3D28);
    NextObjState(o);
}

void func_sc05_010_801880FC(s32 arg0) {
    if (TickObjTimer(arg0) != 0) {
        func_sc05_010_80188168(arg0);
        EnterPlayerStanding(arg0);
        SpawnEffect(2, arg0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
        func_80165718(arg0);
    }
}

s32 func_sc05_010_80188168(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

void func_sc05_010_801881B0(u8 *arg0) {
    D_sc05_010_801C3D3C[AF(arg0, u16, 2)]();
}

void func_sc05_010_801881EC(s32 arg0) {
    CollidePlayerMove();
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    func_sc05_010_80188234(arg0);
    NextObjState(arg0);
}

extern u8 D_sc05_010_801C3D48;
extern void RotateVectorY();
extern void SetObjPushV();
extern s32 D_sc05_010_801C3D54;
void func_sc05_010_80188234(u8 *o) {
    u8 unused[0x10]; /* MATCH-TRICK: unused padding gives the original 0x40 frame (v at sp+0x20) */
    V3 v;
    SetObjTimer(o, 0x12);
    StartRumbleScript(&D_80062C04);
    ShowQueuedDamageNumber(o);
    if ((s16)AngleDist(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xF4)) > 0x400) {
        SetPlayerMotion(o, &D_800D5880);
    } else {
        SetPlayerMotion(o, &D_800D58AC);
    }
    StartFace(o, 0x16);
    ClearPlayerHittable(o);
    RotateVectorY((AF(o, u16, 0xF4) - AF(AF(o, u8 *, 0x20), u16, 0x12)) & 0xFFF, &D_sc05_010_801C3D48, &v);
    SetObjPushV(o, &v);
    SetFallSpeed(o, D_sc05_010_801C3D54);
    PlaySe(0x451);
    NextObjState(o);
}

void func_sc05_010_80188334(u8 *o) {
    ClearPlayerHittable();
    if (AF(o, s32, 0x1C) == 0) {
        if (AF(o, u16, 0xB8) == 0x8000) {
            func_sc05_010_80188468(o);
            EnterPlayerStanding(o);
            func_80165718(o);
            return;
        }
    } else {
        AF(o, s32, 0x1C)--;
    }
    SetVelFromPushKeepAxes(o);
    MoveObjByVel(o);
    AddFallSpeedLimited(o, 0x8000);
    SpawnEffect(3, o, AF(o, s16, 6), (s16)(AF(o, u16, 0xA) - 0x10), AF(o, s16, 0xE), 0x80FFFF8, 0xE000B000);
    ApplyFallSpeed(o);
    switch (func_801535F4(o)) {
    case 0:
        break;
    case 1:
        func_sc05_010_80188468(o);
        EnterPlayerStanding(o);
        SpawnEffect2(o, 1);
        func_80165718(o);
        break;
    case 2:
        func_sc05_010_80188468(o);
        StartPlayerSlide(o);
        SpawnEffect2(o, 1);
        func_80165718(o);
        break;
    }
}

s32 func_sc05_010_80188468(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

void func_sc05_010_801884A8(u8 *arg0) {
    D_sc05_010_801C3DD8[AF(arg0, u16, 2)]();
}

void func_sc05_010_801884E4(s32 arg0) {
    CollidePlayerMove();
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    func_sc05_010_8018852C(arg0);
    NextObjState(arg0);
}

void func_sc05_010_8018852C(u8 *o) {
    StartRumbleScript(&D_80062BF4);
    ClearPlayerHittable(o);
    PlaySe(0x451);
    ShowQueuedDamageNumber(o);
    if ((s16) AngleDist(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xF4)) > 0x400) {
        SetPlayerMotion(o, &D_800D5880);
    } else {
        SetPlayerMotion(o, &D_800D58AC);
    }
    StartFace(o, 0x16);
    ClearPlayerHittable(o);
    SpawnEffectOn(0x42, o, 0, 0);
    SpawnEffect(0x42, o, 0x20, 0, 0, 1, 0);
    SpawnEffect(0x42, o, 0, 0, 0x20, 1, 0);
    SpawnEffect(0x42, o, -0x20, 0, 0, 1, 0);
    SpawnEffect(0x42, o, 0, 0, -0x20, 1, 0);
    NextObjState(o);
}

void func_sc05_010_80188680(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_sc05_010_801886F4(arg0);
        EnterPlayerStanding(arg0);
        if (AF(arg0, s32, 0xB4) == &D_800D5880) {
            SetPlayerMotionBlend(arg0, (s32) &D_800D46E4, 0xE);
        }
        func_80165718(arg0);
    }
}

s32 func_sc05_010_801886F4(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

void func_sc05_010_80188734(u8 *arg0) {
    D_sc05_010_801C3E40[AF(arg0, u16, 2)]();
}

void func_sc05_010_80188770(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AllocSprite16To3E();
    if (temp_v0 == 0) {
        FreeEffect(arg0);
    }
    AF(arg0, s32, 0x20) = temp_v0;
    InitSpriteKind3(temp_v0, (s32) &D_sc05_010_801C3DE4, 0x270, 0x100);
    AF(temp_v0, u8, 0x27) = 0x9B;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
    if (AF(arg0, s32, 0x2C) == 0) {
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x18) = 0x3000;
    }
    AF(temp_v0, u8, 0x25) = 0xC0;
    AF(temp_v0, u8, 0x26) = 0x40;
    AF(temp_v0, u8, 0x24) = 0x40;
    StartSpriteAnim(temp_v0, arg0 + 0x24, (s32) &D_sc05_010_801C3DF0);
    AF(arg0, s32, 0x14) = 0xFFFC0000;
    func_sc05_010_8018890C(arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_010_80188848(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;
    u16 var_v0;
    u8 temp_v0_2;

    temp_s1 = AF(arg0, s32, 0x20);
    if (StepSpriteAnim(temp_s1, (s32) (arg0 + 0x24)) != 0) {
        FreeEffect((s32) arg0);
        return;
    }
    temp_v0 = AF(arg0, s32, 0x14) - 0x8000;
    AF(arg0, s32, 0x14) = temp_v0;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + temp_v0);
    AF(temp_s1, u16, 0x18) = (u16) (AF(temp_s1, u16, 0x18) + 0x500);
    if (AF(arg0, s32, 0x2C) == 0) {
        var_v0 = AF(temp_s1, u16, 0x1A) + 0x300;
    } else {
        var_v0 = AF(temp_s1, u16, 0x1A) + 0x600;
    }
    AF(temp_s1, u16, 0x1A) = var_v0;
    temp_v0_2 = AF(temp_s1, u8, 0x26) - 4;
    AF(temp_s1, u8, 0x26) = temp_v0_2;
    AF(temp_s1, u8, 0x24) = temp_v0_2;
    AF(temp_s1, u8, 0x25) = (u8) (AF(temp_s1, u8, 0x25) - 8);
}

s32 func_sc05_010_8018890C(s32 arg0) {
    s32 var_v0;

    ObjLocalToWorld16(AF(arg0, s32, 0x34), arg0 + 4);
    var_v0 = AF(arg0, s32, 0x2C);
    if (var_v0 == 0) {
        var_v0 = func_800D1FC8(arg0, 5);
    }
    return var_v0;
}
