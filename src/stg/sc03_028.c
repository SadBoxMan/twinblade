#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
extern s32 func_sc03_028_8017F9D8();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_028_8017BE9C(void) {
}

void func_sc03_028_8017BEA4(void) {
}

void func_sc03_028_8017BEAC(void) {
}

void func_sc03_028_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_028_8018F418[])();
extern void (*D_sc03_028_8018F6F4[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern s32 IsEventDone();
extern void SpawnEffect();
extern u8 D_sc03_028_8018F4A8;
extern s32 MoveCollide();
extern void UpdateModelZYX();
extern void SetLocalVelocity();
extern void EndEvent();
extern void FreeActor();
extern u8 D_sc03_028_8018F6E4[];
extern void SetFlag();
extern s32 SpawnActorArg();
extern void StartEvent();
extern u8 g_Status;
extern u8 D_sc03_028_8018F6C4;
extern s32 IsOnScreen();
extern void FreeShadow();
extern void (*D_sc03_028_8018F77C[])();
extern void (*D_sc03_028_8018F818[])();
void func_sc03_028_8017F8EC(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc03_028_8018F820[])();
void func_sc03_028_8017F914(void);
extern void func_800D1EBC();
extern u8 D_sc03_028_8018F834;
extern void StartPlayerActionScript();
extern u8 D_sc03_028_8018F84C;
extern void func_sc03_028_8017FBA4();
extern void (*D_sc03_028_8018F860[])();
extern void (*D_sc03_028_80190068[])();
extern void (*D_sc03_028_801900B8[])();
extern void (*D_sc03_028_8019025C[])();
extern void (*D_sc03_028_801902C0[])();
extern void (*D_sc03_028_80190400[])();
extern void (*D_sc03_028_8019040C[])();
extern void (*D_sc03_028_801904A0[])();
extern void (*D_sc03_028_80190594[])();
extern void (*D_sc03_028_8019066C[])();
extern void (*D_sc03_028_801906C8[])();
extern void (*D_sc03_028_80190724[])();
extern void (*D_sc03_028_80190B50[])();
extern void (*D_sc03_028_80190BE4[])();
extern void (*D_sc03_028_80190BEC[])();
extern void (*D_sc03_028_80190BF4[])();
extern void (*D_sc03_028_80190BFC[])();
extern void (*D_sc03_028_80190C78[])();
extern void (*D_sc03_028_80190CAC[])();
extern void (*D_sc03_028_80190E28[])();
extern s32 func_sc03_028_8018B1DC();
extern void (*D_sc03_028_80190E8C[])();
extern void (*D_sc03_028_80190EB4[])();
extern void (*D_sc03_028_80190EC4[])();

extern void (*D_sc03_028_8018F774[])();
extern void func_sc03_028_8017F04C();

extern s32 func_sc03_028_8017BF34();
extern void FreeProp();
extern u8 D_800D387C;
extern u8 D_800D3888;
extern void StartSpriteAnim();
extern void MoveProp();
extern s32 StepSpriteAnim();
extern void InitModel();
extern s32 AllocActorModel();
extern void RejectSpawn();
extern u8 D_sc03_028_80190C9C;

void func_sc03_028_8017BEBC(s32 arg0, s32 arg1) {
    func_sc03_028_8017BF34(arg0, arg1, 0xC, 0);
}

void func_sc03_028_8017BEE0(s32 arg0, s32 arg1, s16 arg2) {
    func_sc03_028_8017BF34(arg0, arg1, (s32) arg2, 0);
}

void func_sc03_028_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc03_028_8017BF34(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

extern u8 D_sc03_028_8018F718;
extern u8 D_sc03_028_8018F724;
extern s32 AllocSprite16To3E();
extern void FreeEffect();
extern void InitSpriteKind3();
extern s32 GetProgress();
extern s32 GetFlag();
extern void func_800D0C48();
extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D1E28();
extern s32 g_CameraProjTarget;
extern s16 g_CameraAngleTarget;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 g_CameraOfsTarget;
extern s16 D_80126978;
extern s16 D_8012697A;
extern s32 SetCameraUpdate();
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
extern void SnapCamera();
extern s32 SelectCamera();
extern u8 g_CameraFocus;
extern s32 EaseValue();
extern void func_sc03_028_8017FF68();
extern void PosToSVec();
extern s32 FindActorByKind();
extern u8 D_sc03_028_801ADC24;
extern s32 TurnStepToPlayer();
extern s32 SpawnActor();
extern s16 g_PlayerHitKind;
extern u8 D_sc03_028_80190314;
extern u8 D_sc03_028_8019031C;
extern void (*D_sc03_028_80190370[])();
extern s32 ActorSegmentDamagesPlayer();
extern void func_sc03_028_80184E9C();
extern u8 D_sc03_028_801903C0;
extern void func_8001CD50();
extern void (*D_sc03_028_80190460[])();
extern s32 GetPlayerByte1C7();
extern void (*D_sc03_028_801905BC[])();
extern u8 D_sc03_028_801905CC;
extern void StopWithGravity();
extern u8 D_sc03_028_801905D8;
extern u16 g_ClockMinutes;
extern void (*D_sc03_028_801907E4[])();
extern void (*D_sc03_028_801908A8[])();
extern void (*D_sc03_028_8019096C[])();
extern void (*D_sc03_028_80190A30[])();
extern s32 SetState();
extern s32 func_sc03_028_80180AC4();
extern u8 D_sc03_028_8018FEB0;
extern u8 D_sc03_028_8018FEBC;
extern u8 D_sc03_028_801ADC6C;
extern u8 D_sc03_028_801AE46C;
extern u8 D_sc03_028_801AE874;
extern u8 D_sc03_028_8018F8D4;
extern s16 D_sc03_028_8018FA14;
extern u16 D_sc03_028_8018F924;
extern s32 func_sc03_028_8018B234();
void func_sc03_028_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 func_sc03_028_8017FADC();
extern u8 D_sc03_028_8018C134;
extern s32 func_sc03_028_801843D8();
extern void StartCameraShake();
extern void func_sc03_028_80180B44();
extern u8 D_sc03_028_8018FB48;
extern void TakePlayerControlNoStop();
extern void func_sc03_028_80183264();
extern void func_sc03_028_80183E04();
extern u8 D_sc03_028_8018BD04;
extern u8 D_sc03_028_801900C4;
extern s32 SetupActor();
extern u8 D_sc03_028_8018F884;
extern u8 D_sc03_028_8018F898;
extern u8 D_sc03_028_8018F8AC;
extern u8 D_sc03_028_8018F8C0;
extern u8 D_sc03_028_80190414;
extern u8 D_sc03_028_80190420;
extern void func_8001CA1C();
extern s32 SpawnShadow();
extern s32 SpawnActorFromDef();
extern u8 D_sc03_028_80190484;
extern u8 D_sc03_028_80190490;
extern s32 ActorTouchesPlayer();
extern s32 TickTimer();
extern u8 D_sc03_028_801904A8;
extern u8 D_sc03_028_801904B4;
extern u8 D_sc03_028_801905A0;
extern u8 D_sc03_028_801905AC;
extern u8 D_sc03_028_801905E4;
extern u8 D_sc03_028_801905F0;
extern u8 D_sc03_028_801906D0;
extern u8 D_sc03_028_801906F4;
extern u8 D_sc03_028_801EC45C;
extern void func_sc03_028_801860F8();
extern void SetShapeCircle();
extern u8 D_sc03_028_801E2B98;
extern u8 D_sc03_028_801E3348;
extern void func_8001C810();
extern s32 func_sc03_028_801861DC();
extern void func_sc03_028_8018620C();
extern void func_sc03_028_80186234();
extern void DrawFadeWhite();
extern void UpdateClockTint();
extern u8 D_sc03_028_80191734;
extern u8 D_sc03_028_801E461C;
extern s32 func_8013C414();
extern s32 func_8013C360();
extern s32 SpawnEffectOn();
extern void func_sc03_028_8018B310();
extern void NextObjState();
extern void DamagePlayerHp();
extern s32 ResetPlayerAfterHit();
extern void func_sc03_028_8018B5F4();
extern u8 D_80062C14;
extern u8 D_sc03_028_80190E34;
extern void func_sc03_028_8017EE64();
extern void StartRumbleScript();
extern void ShowQueuedDamageNumber();
extern void SetPlayerMotion();
extern void SetFallSpeed();
extern void ClearPlayerHittable();
extern void PlaySe();
extern void SetObjTimer();

extern s32 UpdateScript();
extern void func_sc03_028_8017C068();
extern u8 *SpawnPropFrom();
extern u16 D_800B99DA;
extern u8 D_sc03_028_80190E98;
extern void SetVelFromPushKeepAxes();
extern void MoveObjByVel();
extern void AddFallSpeedLimited();
extern void ApplyFallSpeed();
extern void SpawnEffect2();
extern s32 func_801535F4();
extern s32 TickObjTimer();

extern u8 D_sc03_028_801ADE54;
extern u8 D_sc03_028_80190D30;
extern u8 D_sc03_028_80190D58;
extern void DrawPrimF4Screen();
extern void DrawPrimG4ScreenDithered();

extern s32 FindEffectByKind();

extern s32 g_CameraDistTarget;
void func_sc03_028_8017BEBC(s32 arg0, s32 arg1);

extern u8 g_Camera;

extern u8 D_sc03_028_80190078;

extern void func_80171A10();
extern void func_80171A04();
extern u8 D_sc03_028_8018FCB8;
extern s32 D_sc03_028_801EC454;
extern u8 D_sc03_028_80190C8C;
extern s32 func_sc03_028_8018AE50();

extern u8 D_sc03_028_80190A4C;
extern u8 D_sc03_028_80190ADC;
extern u8 D_sc03_028_80190B44;
extern void SetLocalVelocityXZ();
extern s16 D_sc03_028_801EC590;
extern void *D_sc03_028_801EC450[];
extern u8 D_sc03_028_8019001C;
extern u8 D_sc03_028_80190050;
extern void *D_sc03_028_801EC44C;

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern s32 D_sc03_028_801EB5B0;
extern s32 D_sc03_028_801EB5BC;
extern s32 D_sc03_028_801EB5C4;
extern void func_sc03_028_8017D294();
extern void func_sc03_028_8017D220();
extern s32 TurnStepToward();
extern s32 TurnStepToTarget();
extern void MoveObject();
extern s32 MoveCollidePassable();
extern void StopMotion();
extern u8 D_sc03_028_8018F420;
extern s32 MoveOnGround();

extern s32 ActorSegmentHitsPlayer();
extern s32 TraceMap();
extern s32 FirstActor();
extern s32 NextActor();
extern s32 SVecPosDistSq();
extern void RotTransSV();
extern void SetRotMatrix();
extern void SetTransMatrix();
extern s32 ratan2();
extern u8 D_sc03_028_8018F990;
extern u8 D_sc03_028_8018F998;
extern u8 D_sc03_028_8018F9A0;
extern u8 D_sc03_028_8018F9CC;
extern u8 D_sc03_028_801AE824;
extern u8 D_sc03_028_801AE99C;
extern u8 D_sc03_028_8018F8E4;
typedef struct { u8 pad[0x18]; u8 wsm[0x20]; } WorkHd53;
extern WorkHd53 D_800AF630;
extern u8 D_800AF648;
extern s32 g_PlayerPosX;
extern s32 D_80126B64;
extern u8 D_sc03_028_80190268;
extern u8 D_sc03_028_8019029C;
extern u8 D_sc03_028_801902AC;
extern u8 D_sc03_028_801902B8;

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
extern s32 HeadingToTarget();
extern s32 DistSqToPlayer();
extern s32 D_sc03_028_8018F688;
extern void RestorePrevPos();
extern void func_sc03_028_8017D370();
extern s32 DistSq();
extern s32 GetPlayerAction();
extern void StartEventKeepPlayer();
extern s32 TargetInFront();
extern void func_sc03_028_8017DC90();

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
extern u16 g_Actors;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern s32 EaseAngle();
extern void LocalToWorld();

extern u8 D_sc03_028_8018F5B8;
extern u8 D_sc03_028_8018F5EC;
extern s32 D_sc03_028_801EB5B4;
extern s32 D_sc03_028_801EB5B8;

typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
extern void ZeroFill();

extern u8 D_sc03_028_8018F3E8[];
extern s32 SpawnFromDef();

s32 func_sc03_028_8017BF34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FeS14s s;
    s32 r;

    s.a = 0x6B;
    s.x = -0x94;
    s.e = arg2;
    s.y = -0x68;
    s.z = 0;
    s.b = arg3;
    s.c = 0;
    s.f = ((s32 *)&D_sc03_028_8018F3E8)[(s16) arg2];
    r = SpawnFromDef((s32) &s);
    if (r != 0) {
        AF(r, s32, 0xD4) = arg0;
        AF(r, s32, 0xD8) = arg1;
    }
    return r;
}

void func_sc03_028_8017BFBC(s32 arg0, s32 arg1) {
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

void func_sc03_028_8017C010(s32 arg0, s32 arg1, s16 arg2) {
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

void func_sc03_028_8017C068(void) {
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

void func_sc03_028_8017C114(StageActor *arg0) {
    D_sc03_028_8018F418[arg0->state]();
}

extern u8 D_sc03_028_8018F958;
extern s32 D_sc03_028_8018FF24[];
extern u8 D_sc03_028_8018FF30[];
extern u8 D_sc03_028_8018FF40[];
extern u8 D_sc03_028_8018FF50[];
extern OtRef g_WorldOtOrg[];
extern u16 D_800B9A02;
extern s32 g_CameraProj;
extern u8 *AllocPrim(s32 n);
extern s32 func_sc03_028_801802F4();
extern u8 D_sc03_028_8018F970;
extern u8 D_sc03_028_8018F978;
extern u8 D_sc03_028_8018F980;
extern u8 D_sc03_028_8018F988;

extern s32 GetTPage();
extern void SetDrawMode();
extern void AddPrim();
extern u8 D_sc03_028_8018F968;
extern s32 D_sc03_028_801902C8[];
extern u8 D_sc03_028_801902D4[];
extern u8 D_sc03_028_801902E4[];
extern u8 D_sc03_028_801902F4[];

typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
typedef struct { CV a; CV b; u8 pad[0x38]; } E40;
typedef struct { u8 b[4]; } B4;
extern s16 D_sc03_028_8018F3E4; extern s16 D_sc03_028_8018F3D8; extern s16 D_sc03_028_8018F3CC; extern u8 D_sc03_028_801EB4E8; extern u8 *AllocActorSprite(); extern void SjisToGlyphs(); extern void InitTextSprite(); extern s16 D_sc03_028_801EB510; extern s16 D_sc03_028_801EB520; extern s16 D_sc03_028_801EB51A; extern s16 D_sc03_028_801EB512; extern s16 D_sc03_028_801EB52A; extern s16 D_sc03_028_801EB522; extern s16 D_sc03_028_801EB54E; extern s16 D_sc03_028_801EB546; extern s16 D_sc03_028_801EB55E; extern s16 D_sc03_028_801EB556; extern s16 D_sc03_028_801EB578; extern s16 D_sc03_028_801EB588; extern s16 D_sc03_028_801EB582; extern s16 D_sc03_028_801EB57A; extern s16 D_sc03_028_801EB592; extern s16 D_sc03_028_801EB58A; extern s16 D_sc03_028_801EB57C; extern s16 D_sc03_028_801EB548; extern s16 D_sc03_028_801EB514; extern u8 D_sc03_028_801EB538; extern u8 D_sc03_028_801EB530; extern u8 D_sc03_028_801EB53C; extern u8 D_sc03_028_801EB534; extern u8 D_sc03_028_801EB539; extern u8 D_sc03_028_801EB531; extern u8 D_sc03_028_801EB53E; extern u8 D_sc03_028_801EB53A; extern u8 D_sc03_028_801EB536; extern u8 D_sc03_028_801EB532; extern u8 D_sc03_028_801EB56C; extern u8 D_sc03_028_801EB564; extern u8 D_sc03_028_801EB56D; extern u8 D_sc03_028_801EB565; extern u8 D_sc03_028_801EB571; extern u8 D_sc03_028_801EB569; extern u8 D_sc03_028_801EB5A4; extern u8 D_sc03_028_801EB5A0; extern u8 D_sc03_028_801EB59C; extern u8 D_sc03_028_801EB598; extern u8 D_sc03_028_801EB5A5; extern u8 D_sc03_028_801EB5A1; extern u8 D_sc03_028_801EB59D; extern u8 D_sc03_028_801EB599; extern u8 D_sc03_028_801EB5A6; extern u8 D_sc03_028_801EB5A2; extern u8 D_sc03_028_801EB59E; extern u8 D_sc03_028_801EB59A; extern u8 D_sc03_028_801EB572; extern u8 D_sc03_028_801EB56E; extern u8 D_sc03_028_801EB56A; extern u8 D_sc03_028_801EB566; extern s32 D_sc03_028_801EB574; extern s32 D_sc03_028_801EB540; extern s32 D_sc03_028_801EB5A8;
extern u8 D_sc03_028_801EB5C8[];
extern void func_sc03_028_8017F40C();
extern void SetScaleMatrix();
extern SV8 D_sc03_028_8018F784[];
extern void RotateSVectorY();
extern s32 ProjectPoint();
extern void RotateMatrixByZYX();
extern void DrawPrimFT4Screen();
extern XY D_sc03_028_80190CB4[];
extern u8 D_sc03_028_80190CE0[];
extern B4 D_sc03_028_80190CEC[];
extern u8 D_sc03_028_80190D18;
extern B4 D_sc03_028_80190E18, D_sc03_028_80190E14, D_sc03_028_80190DE4, D_sc03_028_80190DE0, D_sc03_028_80190DB0, D_sc03_028_80190DAC, D_sc03_028_80190D7C, D_sc03_028_80190D78, D_sc03_028_80190D50;
extern void InitSpriteKind0();

void func_sc03_028_8017C150(StageActor *o) {
    u8 *m;
    s16 x1;
    s16 y1;
    s16 y2;
    s16 x2;
    s16 y;
    D_sc03_028_8018F3E4 = 0;
    D_sc03_028_8018F3D8 = 0;
    D_sc03_028_8018F3CC = 0;
    if (AF(o, u8 *, 0xD0) == 0) {
        m = AllocActorSprite();
        if (m == 0) return;
        SjisToGlyphs(o->message, &D_sc03_028_801EB4E8);
        InitTextSprite(m, &D_sc03_028_801EB4E8);
        AF(m, s16, 8) = o->pos[0].h.i + 6;
        AF(m, s16, 0xA) = o->pos[1].h.i + 9;
        AF(m, s16, 0x2C) = 3;
        AF(m, u8, 0x27) = 1;
        o->ext1 = m;
    }
    x1 = o->pos[0].h.i;
    D_sc03_028_801EB510 = x1;
    D_sc03_028_801EB520 = x1 - 4;
    y1 = AF(o, s16, 0xA);
    D_sc03_028_801EB512 = D_sc03_028_801EB51A = y1;
    D_sc03_028_801EB522 = D_sc03_028_801EB52A = y1 + 7;
    y2 = AF(o, s16, 0xA);
    D_sc03_028_801EB546 = D_sc03_028_801EB54E = y2;
    D_sc03_028_801EB556 = D_sc03_028_801EB55E = y2 + 7;
    x2 = AF(o, s16, 6);
    D_sc03_028_801EB578 = x2 + 2;
    D_sc03_028_801EB588 = x2 - 2;
    y = AF(o, s16, 0xA);
    D_sc03_028_801EB530 = D_sc03_028_801EB538 = 0xFF;
    D_sc03_028_801EB534 = D_sc03_028_801EB53C = 0xFF;
    D_sc03_028_801EB531 = D_sc03_028_801EB539 = 0;
    D_sc03_028_801EB53A = D_sc03_028_801EB53E = 0;
    D_sc03_028_801EB532 = D_sc03_028_801EB536 = 0;
    D_sc03_028_801EB564 = D_sc03_028_801EB56C = 0xFF;
    D_sc03_028_801EB57A = D_sc03_028_801EB582 = y + 4;
    D_sc03_028_801EB58A = D_sc03_028_801EB592 = y + 0xB;
    D_sc03_028_801EB565 = D_sc03_028_801EB56D = 0xFF;
    D_sc03_028_801EB569 = D_sc03_028_801EB571 = 0xFF;
    D_sc03_028_801EB598 = D_sc03_028_801EB59C = D_sc03_028_801EB5A0 = D_sc03_028_801EB5A4 = 0x40;
    D_sc03_028_801EB599 = D_sc03_028_801EB59D = D_sc03_028_801EB5A1 = D_sc03_028_801EB5A5 = 0x40;
    D_sc03_028_801EB59A = D_sc03_028_801EB59E = D_sc03_028_801EB5A2 = D_sc03_028_801EB5A6 = 0x40;
    D_sc03_028_801EB566 = D_sc03_028_801EB56A = D_sc03_028_801EB56E = D_sc03_028_801EB572 = 0;
    D_sc03_028_801EB514 = D_sc03_028_801EB548 = 2;
    D_sc03_028_801EB57C = 4;
    D_sc03_028_801EB540 = D_sc03_028_801EB574 = 0;
    D_sc03_028_801EB5A8 = 0x60000000;
    if (AF(o, s16, 0x70) == 0) o->param = 0x100;
    D_sc03_028_8018F3E4 = 2;
    AF(o, s16, 2)++;
}

typedef struct { s32 n; XY p; SV8 a; SV8 b; } Lerp;
typedef struct { SV8 p; SV8 q; s32 n; } Spawn;
extern void EnterPlayerStanding();
extern void func_80165718();
extern void StartPlayerSlide();

extern s32 D_sc03_028_801907B0[];
extern void QueueImage();
extern s32 D_sc03_028_8019079C[];
extern u8 D_sc03_028_801CFAFC;
extern u8 D_sc03_028_801CFB1C;
extern s32 D_sc03_028_80190780[];
extern u8 D_sc03_028_8019072C;
extern u8 D_sc03_028_80190738;
extern u8 D_sc03_028_801907C4;
extern u8 D_sc03_028_801907D4;

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern void AngleToVec2();
extern s32 HeadingTo();
extern u8 D_sc03_028_8018F620[];
extern XY D_sc03_028_8018F640[];
extern u8 D_sc03_028_8018F510;
typedef struct { s32 w[4]; } W16;
typedef struct { s32 x, y, z; u8 r, g, b, cd; } L16;
typedef struct { s32 a, b; } P8;
typedef struct { u16 a, b, c, d; u8 pad[12]; } S20;
typedef struct { s32 a, b; } W2;
extern u8 D_sc03_028_801EA170;
extern u8 D_sc03_028_801EA174;
extern u8 D_sc03_028_801EC458;

extern u8 D_sc03_028_801AE2DC;
extern s32 D_sc03_028_801EC448;
extern s32 SetScript();

extern s16 D_80126B66;
extern s32 rand();
extern s32 rsin();
extern s32 rcos();
extern s32 PathHitsModel();

extern s16 D_sc03_028_8018F9FC;
extern s16 D_sc03_028_8018F9FE;
extern s16 D_sc03_028_8018FA00;
extern void (*D_sc03_028_8018FF60[])();
extern s16 D_sc03_028_8018FA0C;
extern s16 D_sc03_028_8018FA0E;
extern s16 D_sc03_028_8018FA10;
extern s32 func_80174774();
extern u8 D_sc03_028_80190688;
extern u8 D_sc03_028_801906A0;
extern s32 D_sc03_028_801906C0;
extern u8 D_sc03_028_80190B58;
extern u8 D_sc03_028_80190BA0;
extern u8 D_sc03_028_80190BD8;
extern u8 D_sc03_028_801CF87C;
extern s32 D_sc03_028_80190760[];

extern u8 D_sc03_028_801D533C;
extern s32 D_sc03_028_80190834[];
extern u8 D_sc03_028_801E08BC;
extern s32 D_sc03_028_801908F8[];
extern u8 D_sc03_028_801DADFC;
extern s32 D_sc03_028_801909BC[];
extern s32 ApplyMatrixSV();

extern void func_80175414();
extern u8 D_sc03_028_8018FEC8;
extern s32 D_sc03_028_8018F9D8;
extern s32 D_sc03_028_8018F9DC;
extern s32 D_sc03_028_8018F9E0;
extern u8 D_sc03_028_801ADCEC;
extern u8 D_sc03_028_8018F870;

extern u8 D_sc03_028_801AE2C4;
extern u8 D_sc03_028_801AE3A4;
extern u8 D_sc03_028_8018F914;
extern s32 D_sc03_028_8018FA1C[];
extern u8 D_sc03_028_801ADBA4;
extern void GiveItem();
extern u8 D_sc03_028_80190C1C;
extern u8 D_sc03_028_80190C68;
extern void SetModelCullBox();
extern u8 *D_sc03_028_801E6214[];

extern s16 D_80126942;
extern s16 D_80126944;
extern s32 SVecDist();
extern s32 EaseValueFrac();
extern s32 RequestBgmPack();
extern s32 SpawnProp();
extern u8 D_sc03_028_8018F960;

extern void SnapToGround();

extern s32 D_sc03_028_80190430[];

extern u8 D_sc03_028_801AE7CC;

extern u8 D_sc03_028_801AE6DC;
extern void ShowDamage();
extern u8 D_sc03_028_8019053C;
extern u8 D_sc03_028_801904C4;
extern s32 EaseAngleFrac();
extern s32 ApproachValue();

extern u8 D_sc03_028_8019024C;
extern s32 TraceMapTwoCells();
extern u8 D_sc03_028_801AE734;
extern u8 D_sc03_028_8018C158;
extern u8 D_sc03_028_801AE944;
extern u8 D_sc03_028_801AE8D4;

extern void MoveImage();
extern SV8 D_sc03_028_801900F8[];
extern SV8 D_sc03_028_80190138[];
extern SV8 D_sc03_028_80190190[];
extern void (*D_sc03_028_801901D4[])();
extern s16 D_sc03_028_8018FF20;
extern s16 D_sc03_028_8018FF22;
extern u8 D_sc03_028_801901A8;
extern u8 D_sc03_028_801901B4;
extern u8 D_sc03_028_801901BC;
extern u8 D_sc03_028_801901C4;
extern u8 D_sc03_028_801901CC;
extern u8 D_sc03_028_80190600;
extern u8 D_sc03_028_80190610;
extern u8 D_sc03_028_80190638;

extern s32 HeadingToPoint();
extern s32 TurnStep();
extern void Square0();
extern u8 D_sc03_028_8018F9A8;
extern s16 D_sc03_028_8018FB2C[];
extern u8 D_sc03_028_801ADD34;
extern u8 D_sc03_028_801AE08C;

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
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern WMtx GsIDMATRIX;
extern s16 g_WallNormal;
extern s16 D_801152B4;
extern s32 CollidePath();

void func_sc03_028_8017C43C(StageActor *arg0) {
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
            ((XY *)&D_sc03_028_8018F3CC)->x = (arg0->work108 * arg0->param) / max;
            if (((XY *)&D_sc03_028_8018F3CC)->x == 0 && tgt != 0) {
                ((XY *)&D_sc03_028_8018F3CC)->x = 1;
            }
        } else {
            s16 t = arg0->work10A;
            if (cur < t) {
                arg0->work108 = cur + (max * 3) / arg0->param;
                if (tgt < arg0->work108) {
                    arg0->work108 = max;
                }
                ((XY *)&D_sc03_028_8018F3CC)->x = (arg0->work108 * arg0->param) / max;
            } else if (t < max) {
                arg0->work10A = t + (max * 3) / arg0->param;
                if (max < arg0->work10A) {
                    arg0->work10A = max;
                }
                D_sc03_028_8018F3D8 = (arg0->work10A * arg0->param) / max;
                D_sc03_028_8018F3E4 = D_sc03_028_8018F3D8 + 2;
            }
        }
    }
    if (arg0->unkFC == 0xB) {
        u8 c = (arg0->timer++ & 1) ? 0xC0 : 0;
        ((QuadArg *)&D_sc03_028_801EB510)[0].c[2].g = c;
        ((QuadArg *)&D_sc03_028_801EB510)[0].c[0].g = c;
        ((QuadArg *)&D_sc03_028_801EB510)[1].c[3].b = c;
        ((QuadArg *)&D_sc03_028_801EB510)[1].c[2].b = c;
        ((QuadArg *)&D_sc03_028_801EB510)[1].c[1].b = c;
        ((QuadArg *)&D_sc03_028_801EB510)[1].c[0].b = c;
        ((QuadArg *)&D_sc03_028_801EB510)[0].c[3].b = c;
        ((QuadArg *)&D_sc03_028_801EB510)[0].c[2].b = c;
        ((QuadArg *)&D_sc03_028_801EB510)[0].c[1].b = c;
        ((QuadArg *)&D_sc03_028_801EB510)[0].c[0].b = c;
    }
    half = arg0->param >> 1;
    n = ((XY *)&D_sc03_028_8018F3CC)->x;
    if (n < (s16)half) {
        s32 v;
        v = (n * 255) / (s16)half;
        ((QuadArg *)&D_sc03_028_801EB510)[0].p[1].x = ((QuadArg *)&D_sc03_028_801EB510)[0].p[0].x + n;
        ((QuadArg *)&D_sc03_028_801EB510)[0].p[3].x = ((QuadArg *)&D_sc03_028_801EB510)[0].p[1].x - 4;
        ((QuadArg *)&D_sc03_028_801EB510)[0].c[3].g = v;
        ((QuadArg *)&D_sc03_028_801EB510)[0].c[1].g = v;
    } else {
        s32 x;
        s16 xm;
        u8 *g;
        s32 v;
        v = ((n - (s16)half) * 255) / (s16)half;
        g = &((QuadArg *)&D_sc03_028_801EB510)[0].c[1].g;
        *g = ((QuadArg *)&D_sc03_028_801EB510)[0].c[3].g = 0xFF;
        x = (u16)((QuadArg *)&D_sc03_028_801EB510)[0].p[0].x + half;
        xm = x - 4;
        ((QuadArg *)&D_sc03_028_801EB510)[1].p[0].x = x;
        ((QuadArg *)&D_sc03_028_801EB510)[1].p[1].x = ((QuadArg *)&D_sc03_028_801EB510)[0].p[0].x + n;
        ((QuadArg *)&D_sc03_028_801EB510)[0].p[1].x = x;
        ((QuadArg *)&D_sc03_028_801EB510)[1].p[2].x = xm;
        ((QuadArg *)&D_sc03_028_801EB510)[0].p[3].x = xm;
        ((QuadArg *)&D_sc03_028_801EB510)[1].p[3].x = ((QuadArg *)&D_sc03_028_801EB510)[1].p[1].x - 4;
        ((QuadArg *)&D_sc03_028_801EB510)[1].c[3].r = -v;
        ((QuadArg *)&D_sc03_028_801EB510)[1].c[1].r = -v;
        DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc03_028_801EB510)[1]);
    }
    {
        s16 *p = &((QuadArg *)&D_sc03_028_801EB510)[2].p[3].x;
        ((QuadArg *)&D_sc03_028_801EB510)[2].p[1].x = ((QuadArg *)&D_sc03_028_801EB510)[2].p[0].x + D_sc03_028_8018F3D8;
        *p = ((QuadArg *)&D_sc03_028_801EB510)[2].p[1].x - 4;
    }
    DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc03_028_801EB510)[0]);
    DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc03_028_801EB510)[2]);
}

void func_sc03_028_8017C8D0(StageActor *arg0) {
    u8 *g;

    g = &g_Status;
    if ((GetFlag(D_sc03_028_8018F6E4[arg0->param]) & 0xFF) || (arg0->param == 4 && (u32) GetProgress() < 200)) {
        RejectSpawn(arg0);
        return;
    }
    if (AF(g, u16, 0x1A) < 300 || AF(g, u16, 0x1A) >= 1320) {
        if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc03_028_8018F5B8) != 0) {
            arg0->hitState |= 0x10;
            SetScript(arg0, &D_sc03_028_8018F420);
            arg0->model->flags |= 0x10;
            D_sc03_028_801EB5B0 = arg0->origin[0] << 16;
            D_sc03_028_801EB5B4 = AF(arg0, s16, 0x8A) << 16;
            D_sc03_028_801EB5B8 = AF(arg0, s16, 0x8C) << 16;
            arg0->ext0 = SpawnShadow(arg0);
            arg0->unkFC = 0;
            arg0->timer = 0x10;
            arg0->state++;
        }
    } else if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc03_028_8018F5EC) != 0) {
        AF(arg0, s16, 0xAE) = -4;
        arg0->ext0 = SpawnShadow(arg0);
        arg0->state = 7;
    }
}

void func_sc03_028_8017CA6C(u8 *arg0) {
    s32 r;
    s16 i;

    if (--AF(arg0, s32, 0x1C) == -1) {
        SetScript(arg0, &D_sc03_028_8018F4A8);
        if (++AF(arg0, s16, 0x10A) & 3) {
            if (AF(arg0, s16, 0x104) == 0) {
                r = rand();
                D_sc03_028_801EB5BC = (AF(arg0, s16, 0x88) + (((r & 0x7F) << 3) - 0x200)) << 16;
                D_sc03_028_801EB5C4 = (AF(arg0, s16, 0x8C) + (((u32)(r & 0x7F00) >> 5) - 0x200)) << 16;
            } else {
                func_sc03_028_8017D294(arg0);
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0xC00;
            }
        } else {
            for (i = 0; i < 2; i++) {
                (&D_sc03_028_801EB5BC)[i] = (&D_sc03_028_801EB5B0)[i];
            }
        }
        if (AF(arg0, s16, 0x108) >= 0xD) {
            i = 2;
        } else {
            i = 8;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToward(arg0 + 4, &D_sc03_028_801EB5BC, AF(AF(arg0, u8 *, 0x20), s16, 0x12), i);
        func_sc03_028_8017D220(arg0, (s16)(-3 - AF(arg0, s16, 0x104)), 0x50);
        if (AF(arg0, s16, 0x104) != 0) {
            SpawnEffect(2, arg0, 0, 0, 0, 2, 0);
        }
        AF(arg0, s16, 0x108) = 0;
        AF(arg0, s16, 2)++;
    } else if (AF(arg0, s16, 0x102) != 0) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, AF(arg0, s16, 0x102));
    }
}

void func_sc03_028_8017CC70(s32 a) {
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
        func_sc03_028_8017D370(a);
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
        if (!(AF(a, s32, 0x1C) & 3) && DistSq(a + 4, &D_sc03_028_801EB5BC) < 0x900) {
            AF(a, s32, 0x1C) = 1;
        }
        v = AF(a, s16, 0x106);
        if (v == 0) {
            AF(AF(a, s32, 0x20), s16, 0x12) += TurnStepToward(a + 4, &D_sc03_028_801EB5BC, AF(AF(a, s32, 0x20), s16, 0x12), 8);
            func_sc03_028_8017D220(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        } else {
            AF(AF(a, s32, 0x20), s16, 0x12) += v;
            func_sc03_028_8017D220(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
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
        SetScript(a, &D_sc03_028_8018F420);
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
            p = &D_sc03_028_8018F688;
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
        func_sc03_028_8017D220(a, -15, 0);
        func_sc03_028_8017D294(a);
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
                func_sc03_028_8017D294(a);
                if (AF(a, s16, 0x104) == 0) {
                    AF(AF(a, s32, 0x20), s16, 0x12) = HeadingToTarget(a) - 0x800;
                    go = 1;
                }
                AF(a, s16, 0x104) = k;
                func_sc03_028_8017D220(a, -7 - k, 0);
            }
        }
    }
    if (go) {
        SpawnEffect(2, a, 0, 0, 0, 2, 0);
    }
}

void func_sc03_028_8017D064(u8 *arg0) {
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
        SetScript(arg0, &D_sc03_028_8018F420);
        AF(arg0, s16, 0x104) = 0;
        AF(arg0, s16, 0x102) = 0xA;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
        FreeShadow(AF(arg0, u8 *, 0xCC));
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc03_028_8017D1E4(StageActor *arg0) {
    D_sc03_028_8018F6F4[arg0->state]();
}

void func_sc03_028_8017D220(u8 *arg0, s32 arg1, s32 arg2) {
    s32 w;

    AngleToVec2(&w, AF(AF(arg0, void *, 0x20), s16, 0x12), (s16)arg1 << 4);
    AF(arg0, s32, 0x10) = (s16)w << 12;
    AF(arg0, s32, 0x18) = (w >> 16) << 12;
    if ((s16)arg2 != 0) {
        AF(arg0, s32, 0x1C) = (s16)arg2;
    }
}

void func_sc03_028_8017D294(u8 *arg0) {
    s32 a;
    s32 i;
    s32 r;
    s32 x;
    s32 z;
    s32 pad[2];
    a = (HeadingTo(&g_PlayerPosX, &D_sc03_028_801EB5B0) >> 7) & 0x18;
    i = D_sc03_028_8018F620[a | ((HeadingTo(arg0 + 4, &D_sc03_028_801EB5B0) >> 9) & 7)];
    r = rand();
    x = AF(arg0, s16, 0x88) + D_sc03_028_8018F640[i].x - 0x100;
    D_sc03_028_801EB5BC = (x + ((r & 0x7F) << 2)) << 16;
    z = AF(arg0, s16, 0x8C) + D_sc03_028_8018F640[i].y - 0x100;
    D_sc03_028_801EB5C4 = (z + ((u32)(r & 0x7F00) >> 6)) << 16;
}

void func_sc03_028_8017D370(u8 *o) {
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

void func_sc03_028_8017D584(s32 arg0) {
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
            SetScript(arg0, (s32) &D_sc03_028_8018F510);
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

void func_sc03_028_8017D658(s32 arg0, s32 arg1) {
    s32 v[4];
    s32 temp_v0;
    u8 *temp_v1;

    IsEventDone(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (MoveCollide(arg0) & 0x2000)) {
        SpawnEffect(2, arg0, 0, 0, 0, 0, 0);
        SetScript(arg0, (s32) &D_sc03_028_8018F4A8);
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

void func_sc03_028_8017D728(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        SetFlag((s32) D_sc03_028_8018F6E4[arg0->param], 1);
        FreeActor(arg0);
    }
}

void func_sc03_028_8017D780(u8 *arg0) {
    s32 temp_v0;
    u8 *g = &g_Status;

    if ((AF(arg0, s16, 0x100) == 0) && (AF(arg0, u16, 0x5E) != 0)) {
        StartEvent((s32) arg0, (s32) &D_sc03_028_8018F6C4);
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

void func_sc03_028_8017D878(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        arg0->state = 7;
    }
}

void func_sc03_028_8017D8B8(SV8 *r, SV8 *out, s32 arg2) {
    SV8 v[4];
    SV8 w4[4];
    SV8 p[4];
    SV8 c0;
    SV8 c;
    s32 x, y, x2, y2, z, d;
    s16 w, h, m;
    s32 i;
    s16 a;
    s16 x0, x1, x2_, x3, z0, z1, z2, z3, cx, cz;
    s16 a1, b1, e1, a2, b2, e2, a3, b3, e3, a4, b4, e4;
    s16 ex, ez, fx, fz;
    s32 minx, miny, maxx, maxy;

    x = r->x;
    y = r->y;
    w = r->z;
    h = r->pad;
    x2 = x + w;
    y2 = y + h;
    m = w < h ? h : w;
    d = (s16)(m / 20);
    z = ReadGeomScreen();
    v[0].x = x;  v[0].y = y;  v[0].z = z;
    v[1].x = x2; v[1].y = y;  v[1].z = z;
    v[2].x = x;  v[2].y = y2; v[2].z = z;
    v[3].x = x2; v[3].y = y2; v[3].z = z;
    c0.x = 0;
    c0.y = 0;
    c0.z = 0;
    func_sc03_028_8017DC90(&c0, &c);
    for (i = 0; i < 4; i++) {
        func_sc03_028_8017DC90(&v[i], &w4[i]);
        if (func_sc03_028_8017DD34(&c, &w4[i], &p[i], arg2) != 0) {
            func_sc03_028_8017DF2C(&p[i], &v[i]);
            v[i].x = v[i].x < x - d ? x - d : (v[i].x > x2 + d ? x2 + d : v[i].x);
            v[i].y = v[i].y < y - d ? y - d : (v[i].y > y2 + d ? y2 + d : v[i].y);
            func_sc03_028_8017DC90(&v[i], &w4[i]);
            func_sc03_028_8017DD34(&c, &w4[i], &p[i], arg2);
        }
    }
    ex = ((((p[0].x) < (p[1].x) ? (p[0].x) : (p[1].x))) < (((p[2].x) < (p[3].x) ? (p[2].x) : (p[3].x))) ? (((p[0].x) < (p[1].x) ? (p[0].x) : (p[1].x))) : (((p[2].x) < (p[3].x) ? (p[2].x) : (p[3].x))));
    minx = ex; if (c.x < minx) minx = c.x;
    ez = ((((p[0].z) < (p[1].z) ? (p[0].z) : (p[1].z))) < (((p[2].z) < (p[3].z) ? (p[2].z) : (p[3].z))) ? (((p[0].z) < (p[1].z) ? (p[0].z) : (p[1].z))) : (((p[2].z) < (p[3].z) ? (p[2].z) : (p[3].z))));
    miny = ez; if (c.z < miny) miny = c.z;
    fx = ((((p[0].x) > (p[1].x) ? (p[0].x) : (p[1].x))) > (((p[2].x) > (p[3].x) ? (p[2].x) : (p[3].x))) ? (((p[0].x) > (p[1].x) ? (p[0].x) : (p[1].x))) : (((p[2].x) > (p[3].x) ? (p[2].x) : (p[3].x))));
    maxx = fx; if (c.x > maxx) maxx = c.x;
    fz = ((((p[0].z) > (p[1].z) ? (p[0].z) : (p[1].z))) > (((p[2].z) > (p[3].z) ? (p[2].z) : (p[3].z))) ? (((p[0].z) > (p[1].z) ? (p[0].z) : (p[1].z))) : (((p[2].z) > (p[3].z) ? (p[2].z) : (p[3].z))));
    maxy = fz; if (c.z > maxy) maxy = c.z;
    out->z = maxx - minx;
    out->x = minx;
    out->y = miny;
    out->pad = maxy - miny;
}

void func_sc03_028_8017DC90(SV8 *zero, SV8 *out) {
    MtxDCM m;
    MtxDCM mt;
    SV8 d;
    ReadRotMatrix(&m);
    PushMatrix();
    d.x = zero->x - m.t[0];
    d.y = zero->y - m.t[1];
    d.z = zero->z - m.t[2];
    TransposeMatrix(&m, &mt);
    ApplyMatrixSV(&mt, &d, out);
    PopMatrix();
}

s32 func_sc03_028_8017DD34(SV4 *a, SV4 *b, SV4 *o, s32 lim) {
    s32 x;
    s32 z;
    s32 c;
    s32 r;

    r = 0;
    if (b->y <= a->y) {
        x = a->x - a->y * (b->x - a->x);
        z = a->z - a->y * (b->z - a->z);
    } else {
        x = b->x + b->y * (b->x - a->x) / (a->y - b->y);
        z = b->z + b->y * (b->z - a->z) / (a->y - b->y);
    }
    c = (x < -0x7FFF) ? -0x7FFF : (x > 0x7FFF) ? 0x7FFF : x;
    o->x = c;
    c = (z < -0x7FFF) ? -0x7FFF : (z > 0x7FFF) ? 0x7FFF : z;
    o->z = c;
    o->y = 0;
    if (o->x < a->x - lim) {
        r = -1;
        o->x = a->x - lim;
    }
    if (o->x > a->x + lim) {
        r = -1;
        o->x = a->x + lim;
    }
    if (o->z < a->z - lim) {
        r = -1;
        o->z = a->z - lim;
    }
    if (o->z > a->z + lim) {
        r = -1;
        o->z = a->z + lim;
    }
    return r;
}

s32 func_sc03_028_8017DF2C(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

extern s32 D_sc03_028_80190884[];
extern s32 D_sc03_028_80190948[];
extern s32 D_sc03_028_80190A0C[];
typedef struct { s16 a; u16 b; } P4;
typedef struct { u8 pad[6]; u16 f6; } OH06;
typedef struct { u8 pad[0x12]; s16 f12; } OH12;
typedef struct { u8 pad[0x76]; s16 f76; } OH76;
typedef struct { SV8 a; u8 rest[12]; } E20;
extern s32 D_sc03_028_80190854[];
extern s32 D_sc03_028_80190870[];
extern u8 D_sc03_028_801D55BC;
extern u8 D_sc03_028_801D55DC;
extern u8 D_sc03_028_80190800;
extern u8 D_sc03_028_8019080C;
extern u8 D_sc03_028_80190898;
extern s32 D_sc03_028_80190918[];
extern s32 D_sc03_028_80190934[];
extern u8 D_sc03_028_801E0B3C;
extern u8 D_sc03_028_801E0B5C;
extern u8 D_sc03_028_801908C4;
extern u8 D_sc03_028_801908D0;
extern u8 D_sc03_028_8019095C;
extern s32 D_sc03_028_801909DC[];
extern s32 D_sc03_028_801909F8[];
extern u8 D_sc03_028_801DB05C;
extern u8 D_sc03_028_801DB07C;
extern u8 D_sc03_028_80190988;
extern u8 D_sc03_028_80190994;
extern u8 D_sc03_028_80190A20;


extern s32 D_sc03_028_80190748[];
extern s32 D_sc03_028_801908E0[];

typedef struct { s32 a; s32 b; s32 c; s8 d; s8 e; s8 f; } SndReq;
typedef struct { u32 *ot; s32 pad[4]; } OtE;
typedef struct { s32 w[0x95]; } B254;
typedef struct { s16 a; s16 b; s16 c[8]; s16 *p[8]; } S8A3FC;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern void ShadowFollow();
extern s32 D_sc03_028_8019081C[];
extern s32 D_sc03_028_801909A4[];

extern s32 func_80143994();
s32 func_sc03_028_8017FB84(void);
extern void ObjLocalToWorld16();
extern s32 func_800D1FC8();
extern void func_sc03_028_8017F93C();


extern u8 D_sc03_028_80190324;
extern u8 D_sc03_028_80190358;
extern u8 D_sc03_028_801E2458;
extern s16 g_PlayerX;
extern u8 D_sc03_028_8019009C;
extern u8 D_sc03_028_801900A8;
void func_sc03_028_8018B260(void);
extern u8 D_sc03_028_80190218;
void func_sc03_028_801838B0(u8 *o);
void func_sc03_028_80180494(u8 *arg0);
extern u8 D_sc03_028_8018F9C0;

extern u8 D_sc03_028_8018F9B4;
extern u8 D_sc03_028_801AE89C;
extern u8 D_sc03_028_8018F8F4;
extern void SetObjPush();

extern void func_8016B3F4();
extern void GainStat3FromActor();
extern u8 D_sc03_028_801AE9C4;

extern s32 FindOtherActorByKind();
s32 func_sc03_028_8018ADD0(void);

typedef struct { u8 *verts; u32 pad; u32 x; u32 y; u32 z; u32 *start; u32 *end; } CellC77;
typedef struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteC77;
extern u8 *g_PrimNext;
extern u32 g_WorldOtTable[2][0x1000];
extern SV8 D_sc03_028_801EC4A0;

void func_sc03_028_8017DF98(u8 *o) {
    SV8 r;
    s32 tmp[4];
    SV8 box[8];
    SV8 scr[8];
    MtxDCM ls;
    GteC77 g;
    s32 x0, x1, y0, y1;
    s32 xi, yi;
    CellC77 **row;
    CellC77 **cp;
    CellC77 *c;
    u8 *pk;
    u32 *ot;
    u8 *verts;
    u32 *poly;
    u32 *end;
    u32 w;
    s32 hi;
    s32 xh, xl, yh, yl;
    s32 a, b;
    s32 type;
    u8 *d;
    u8 *d3;
    u32 *t;
    u32 cx, cy, cz;
    u32 bxl, bxh, byl, byh, bzl, bzh;

    ReadGeomScreen();
    GsGetLs(o + 0x10, &ls);
    GsSetLsMatrix(&ls);
    func_sc03_028_8017D8B8(&D_sc03_028_801EC4A0, &r, AF(o, s32, 0x60));
    pk = g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02];
    x0 = (r.x + 0x4000) / 512;
    x1 = (r.x + r.z + 0x4000) / 512 + 2;
    x0 = x0 < 0 ? 0 : (x0 > 63 ? 63 : x0);
    x1 = x1 < 0 ? 0 : (x1 > 63 ? 63 : x1);
    y0 = (r.y + 0x4000) / 512 - 1;
    y1 = (r.y + r.pad + 0x4000) / 512 + 2;
    y0 = y0 < 0 ? 0 : (y0 > 63 ? 63 : y0);
    y1 = y1 < 0 ? 0 : (y1 > 63 ? 63 : y1);
    row = &AF(o, CellC77 **, 0xC)[y0 * 64 + x0];
    for (yi = y0; yi < y1; yi++, row += 64) {
        for (xi = x0, cp = row; xi < x1; xi++, cp++) {
            c = *cp;
            if (c == 0) continue;
            cx = c->x; cy = c->y; cz = c->z;
            bxl = cx & 0xFFFF; byl = cy & 0xFFFF; bzl = cz & 0xFFFF;
            bxh = cx >> 16; bzh = cz >> 16; byh = cy >> 16;
            box[0].x = bxl; box[0].y = byl; box[0].z = bzl;
            box[1].x = bxh; box[1].y = byl; box[1].z = bzl;
            box[2].x = bxl; box[2].y = byl; box[2].z = bzh;
            box[3].x = bxh; box[3].y = byl; box[3].z = bzh;
            box[4].x = bxl; box[4].y = byh; box[4].z = bzl;
            box[5].x = bxh; box[5].y = byh; box[5].z = bzl;
            box[6].x = bxl; box[6].y = byh; box[6].z = bzh;
            box[7].x = bxh; box[7].y = byh; box[7].z = bzh;
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

            if (scr[0].x > scr[1].x) { hi = scr[0].x; xh = scr[1].x; } else { xh = scr[0].x; hi = scr[1].x; }
            if (scr[2].x > hi) hi = scr[2].x; else if (scr[2].x < xh) xh = scr[2].x;
            if (scr[3].x > hi) hi = scr[3].x; else if (scr[3].x < xh) xh = scr[3].x;
            if (scr[4].x > scr[5].x) { yl = scr[4].x; yh = scr[5].x; } else { yh = scr[4].x; yl = scr[5].x; }
            if (scr[6].x > yl) yl = scr[6].x; else if (scr[6].x < yh) yh = scr[6].x;
            if (scr[7].x > yl) yl = scr[7].x; else if (scr[7].x < yh) yh = scr[7].x;
            xl = xh; if (yh < xl) xl = yh;
            xh = hi; if (xh < yl) xh = yl;
            if (xh < -160 || xl > 160) continue;

            if (scr[0].y > scr[1].y) { xl = scr[0].y; yl = scr[1].y; } else { yl = scr[0].y; xl = scr[1].y; }
            if (scr[2].y > xl) xl = scr[2].y; else if (scr[2].y < yl) yl = scr[2].y;
            if (scr[3].y > xl) xl = scr[3].y; else if (scr[3].y < yl) yl = scr[3].y;
            if (scr[4].y > scr[5].y) { xh = scr[4].y; yh = scr[5].y; } else { yh = scr[4].y; xh = scr[5].y; }
            if (scr[6].y > xh) xh = scr[6].y; else if (scr[6].y < yh) yh = scr[6].y;
            if (scr[7].y > xh) xh = scr[7].y; else if (scr[7].y < yh) yh = scr[7].y;
            if (yh < yl) yl = yh;
            yh = xl; if (yh < xh) yh = xh;
            if (yh < -120 || yl > 120) continue;

            poly = c->start;
            end = c->end;
            verts = c->verts;
            for (; poly < end; poly += 3) {
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
                type = w & 0xF;
                d = verts + ((w & 0xFFF0) >> 1);
                gte_stopz(&g.z);
                if (g.z <= 0) continue;
                switch (type) {
                case 4:
                case 5:
                { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
                    gte_stsxy3_f3(pk);
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
                { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
                    gte_stsxy3c(tmp);
                    gte_stsz3(&g.sz0, &g.sz1, &g.sz2);
                    p0 = AF(tmp, s16, 0); p1 = AF(tmp, s16, 4);
                    if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                    p2 = AF(tmp, s16, 8);
                    if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                    if (xh < -160 || xl > 160) continue;
                    q0 = AF(tmp, s16, 2); q1 = AF(tmp, s16, 6);
                    if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                    q2 = AF(tmp, s16, 0xA);
                    if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                    if (yh < -120 || yl > 120) continue;
                    gte_avsz3();
                    if (g.sz0 > g.sz1) { m = g.sz0; if (m < g.sz2) m = g.sz2; } else { m = g.sz1; if (m < g.sz2) m = g.sz2; }
                    g.z = m;
                    if (type != 6) g.z = m + 0x200;
                    AF(pk, s32, 8) = tmp[0];
                    AF(pk, s32, 0x10) = tmp[1];
                    AF(pk, s32, 0x18) = tmp[2];
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
                { u32 *otp; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
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
                    if (zb < za) zb = za;
                    g.z = zb;
                    if (type != 0) g.z = zb + 0x200;
                    AF(pk, u32, 4) = poly[0];
                    otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                    *(u32 *)pk = (*otp & 0xFFFFFF) | 0x5000000;
                    *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                    pk += 0x18;
                    break;
                }
                case 2:
                case 3:
                { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
                    gte_stsxy3c(tmp);
                    gte_ldv0(d);
                    gte_rtps();
                    gte_stflg(&g.flag);
                    if (g.flag & 0x7F85E000) continue;
                    gte_stsxy(&tmp[3]);
                    gte_stsz4(&g.sz0, &g.sz1, &g.sz2, &g.sz3);
                    p0 = AF(tmp, s16, 0); p1 = AF(tmp, s16, 4);
                    if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                    p2 = AF(tmp, s16, 8);
                    if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                    p3 = AF(tmp, s16, 0xC);
                    if (p3 > xh) xh = p3; else if (p3 < xl) xl = p3;
                    if (xh < -160 || xl > 160) continue;
                    q0 = AF(tmp, s16, 2); q1 = AF(tmp, s16, 6);
                    if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                    q2 = AF(tmp, s16, 0xA);
                    if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                    q3 = AF(tmp, s16, 0xC);
                    if (q3 > yh) yh = q3; else if (q3 < yl) yl = q3;
                    if (yh < -120 || yl > 120) continue;
                    gte_avsz4();
                    za = g.sz2; if (za < g.sz3) za = g.sz3;
                    zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                    if (zb < za) zb = za;
                    g.z = zb;
                    if (type != 2) g.z = zb + 0x200;
                    AF(pk, s32, 8) = tmp[0];
                    AF(pk, s32, 0x10) = tmp[1];
                    AF(pk, s32, 0x18) = tmp[2];
                    AF(pk, s32, 0x20) = tmp[3];
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
    }
    g_PrimNext = pk;
}

void func_sc03_028_8017EE64(a)
    s32 a;
{
    SpawnEffectOn(0x49, a, 0, 0);
}

void func_sc03_028_8017EE90(u8 *arg0) {
    func_sc03_028_8017F04C();
    D_sc03_028_8018F774[AF(arg0, u16, 2)](arg0);
}

void func_sc03_028_8017EEDC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AllocSprite16To3E();
    if (temp_v0 == 0) {
        FreeEffect(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = temp_v0;
    InitSpriteKind3(temp_v0, (s32) &D_sc03_028_8018F718, 0x250, 0x100);
    AF(temp_v0, u8, 0x27) = 0x90;
    AF(temp_v0, s16, 0x18) = 0x6000;
    AF(temp_v0, s16, 0x1A) = 0x7000;
    AF(temp_v0, u8, 0x25) = 0x80;
    AF(temp_v0, u8, 0x26) = 0xFF;
    AF(temp_v0, u8, 0x24) = 0;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
    StartSpriteAnim(temp_v0, arg0 + 0x24, (s32) &D_sc03_028_8018F724);
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s32, 0x14) = 0xFFF40000;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_028_8017EFA8(u8 *arg0) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = AF(arg0, s32, 0x20);
    if (StepSpriteAnim(temp_s1, (s32) (arg0 + 0x24)) != 0) {
        FreeEffect((s32) arg0);
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

void func_sc03_028_8017F04C(u8 *o) {
    AF(o, s32, 4) = 0;
    AF(o, s32, 8) = 0;
    AF(o, s32, 0xC) = 0;
    ObjLocalToWorld16(AF(o, s32, 0x34), o + 4);
    func_800D1FC8(o, 5);
}

void func_sc03_028_8017F094(u8 *arg0) {
    D_sc03_028_8018F77C[AF(arg0, u16, 2)]();
}

void func_sc03_028_8017F0D0(u8 *o) {
    s32 i, j;
    u8 *b, *e;
    for (i = 0; i < 8; i++) {
        b = D_sc03_028_801EB5C8 + i * 0x1D0;
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

void func_sc03_028_8017F278(u8 *o) {
    s32 i, j, n;
    u8 *b, *e;
    n = 0;
    for (i = 0; i < 8; i++) {
        b = D_sc03_028_801EB5C8 + i * 0x1D0;
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
        func_sc03_028_8017F40C(o, b);
    }
    if (n == 0x80) FreeEffect(o);
}

void func_sc03_028_8017F40C(u8 *o, u8 *b) {
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
        ApplyMatrixSV(&m, &D_sc03_028_8018F784[0], &v[0]);
        ApplyMatrixSV(&m, &D_sc03_028_8018F784[1], &v[1]);
        ApplyMatrixSV(&m, &D_sc03_028_8018F784[2], &v[2]);
        ApplyMatrixSV(&m, &D_sc03_028_8018F784[3], &v[3]);
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

void func_sc03_028_8017F6C4(u8 *arg0) {
    D_sc03_028_8018F818[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_028_8017F700(u8 *arg0) {
    func_sc03_028_8017F8EC();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_028_8017F744(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc03_028_8017F768(u8 *arg0) {
    D_sc03_028_8018F820[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_028_8017F7A4(u8 *arg0) {
    func_sc03_028_8017F914();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_028_8017F7E4(u8 *arg0) {
    s32 temp_v0;

    GetProgress();
    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        if (!(GetFlag(0x118) & 0xFF)) {
            SetFlag(0x118, 1);
            func_800D0C48(1);
            PlaySoundId(0x1C, 0);
            ClearTimeChime();
            PlaySoundId(0x1D, 0);
        }
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_028_8017F880(void) {
    func_800D1EBC();
}

void func_sc03_028_8017F8A0(s32 arg0) {
    if (GetProgress() >= 0xC8) {
        func_80171A10(arg0);
        return;
    }
    func_80171A04(arg0);
}

void func_sc03_028_8017F8EC(void) {
    StartPlayerActionScript((s32) &D_sc03_028_8018F834, 0x01000000);
}

void func_sc03_028_8017F914(void) {
    StartPlayerActionScript((s32) &D_sc03_028_8018F84C, 0x01000000);
}

void func_sc03_028_8017F93C(arg0, arg1)
s32 arg0;
s32 arg1;
{
    g_CameraProjTarget = 0x12C;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x38E;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0x100;
    SetCameraUpdate((s32) func_sc03_028_8017FBA4, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_028_8017FBA4((s32) &g_Camera);
}

s32 func_sc03_028_8017F9D8(arg0)
s32 arg0;
{
    g_CameraProjTarget = 0x1F4;
    g_CameraAngleTarget = 0x38E;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    return SetCameraUpdate((s32) func_sc03_028_8017FBA4, 3);
}

void func_sc03_028_8017FA44(void) {
    g_CameraProjTarget = 0x12C;
    g_CameraDistTarget = 0x12C;
    g_CameraAngleTarget = -0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_028_8017FBA4, 1);
}

void func_sc03_028_8017FABC(void) {
    D_80126978 = -0x1A0;
    D_8012697A = 0x200;
}

s32 func_sc03_028_8017FADC(void) {
    D_80126E6C = 0x12C;
    D_80126E74 = 0x190;
    D_80126E80 = -0xE3;
    D_80126E82 = 0x98E;
    D_80126E84 = 0;
    D_80126E8E = 0;
    D_80126E90 = -0x60;
    D_80126E92 = 0;
    SetCameraUpdateOf((s32) &g_AltCameras, (s32) func_sc03_028_8017FBA4, 2);
    SnapCamera((s32) &g_AltCameras);
    func_sc03_028_8017FBA4((s32) &g_AltCameras);
    return SelectCamera(1);
}

s32 func_sc03_028_8017FB84(void) {
    return SelectCamera(0);
}

void func_sc03_028_8017FBA4(s32 arg0) {
    D_sc03_028_8018F860[AF(arg0, u8, 4)]();
}

void func_sc03_028_8017FBE0(u8 *o) {
    SV8 v;
    s16 a;
    s16 b;
    s16 c;
    s16 t;
    s16 s;

    a = AF(&g_CameraFocus, s16, 0);
    if (a < -0x80) {
        v.x = -0x80;
    } else if (a > 0x80) {
        v.x = 0x80;
    } else {
        v.x = a;
    }
    b = D_80126942;
    if (b < -2) {
        v.y = -2;
    } else {
        v.y = b;
    }
    c = D_80126944;
    if (c < 0) {
        v.z = 0;
    } else if (c > 0x380) {
        v.z = 0x380;
    } else {
        v.z = c;
    }
    t = D_80126944;
    if (t > 0x280) {
        s = t - 0x280;
        AF(o, s16, 0x18) = AF(o, s16, 0x20) = EaseAngleFrac(AF(o, s16, 0x18), (s16)(0x38E - s * 2 / 3), 0xA, 1);
        AF(o, s32, 0x10) = AF(o, s32, 0x14) = (s16)ApproachValue(AF(o, s16, 0x10), (s16)(0x4B0 - s / 3), 4);
    }
    func_sc03_028_8017FF68(o, &v);
}

void func_sc03_028_8017FD64(u8 *arg0) {
    AF(arg0, s16, 0x2A) = EaseValue((s32) AF(arg0, s16, 0x2A), (s32) AF(arg0, s16, 0x30), 4);
    AF(arg0, s16, 0x2C) = EaseValue((s32) AF(arg0, s16, 0x2C), (s32) AF(arg0, s16, 0x32), 4);
    func_sc03_028_8017FF68((s32) arg0, (s32) &g_CameraFocus);
}

void func_sc03_028_8017FDC0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    u16 temp_v0;

    PosToSVec(FindActorByKind(0x82, arg1, arg2) + 4, (s32) &sp10);
    temp_v0 = (AF(arg0, u16, 0x1A) - 5) & 0xFFF;
    AF(arg0, u16, 0x1A) = temp_v0;
    AF(arg0, u16, 0x22) = temp_v0;
    func_sc03_028_8017FF68((s32) arg0, (s32) &sp10);
}

void func_sc03_028_8017FE18(u8 *o) {
    SV8 v;
    SV8 m;

    if ((*(s16 *)&g_CameraFocus) < -0x200) {
        v.x = -0x200;
    } else if ((*(s16 *)&g_CameraFocus) > 0x40) {
        v.x = 0x40;
    } else {
        v.x = (*(s16 *)&g_CameraFocus);
    }
    if (D_80126942 < -2) {
        v.y = -2;
    } else {
        v.y = D_80126942;
    }
    if (D_80126944 < 0) {
        v.z = 0;
    } else if (D_80126944 > 0x340) {
        v.z = 0x340;
    } else {
        v.z = D_80126944;
    }
    v = *(SV8 *)&g_CameraFocus;
    PosToSVec(FindActorByKind(0x82) + 4, &m);
    AF(o, s32, 0x10) = AF(o, s32, 0x14) = (s16)EaseValueFrac(AF(o, s16, 0x10), (s16)(SVecDist(&v, &m) + 0x384), 10, 1);
    func_sc03_028_8017FF68(o, &v);
}

void func_sc03_028_8017FF68(u8 *arg0, u8 *arg1) {
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

s32 func_sc03_028_80180100(void) {
    return AF(D_sc03_028_801EC44C, u16, 2) == 0x1D;
}

void func_sc03_028_80180120(StageActor *o) {
    u16 v = o->hitCode;

    if ((v == 0x1D || v == 0x1F || v == 0x20) && o->state < 0x1B) {
        o->model->unk80 = &D_sc03_028_8018FA14;
        if (o->pos[1].h.i < -0x20) {
            SetScript(o, &D_sc03_028_801AE99C);
            o->state = 0x1C;
            AF(o, s16, 0x16) = -0x10;
            o->timer = 0;
            AF(o, s16, 0x12) = -o->pos[0].h.i >> 6;
            AF(o, s16, 0x1A) = (0x3C0 - o->pos[2].h.i) >> 6;
        } else {
            if (o->hitCode == 0x1D) {
                SetScript(o, &D_sc03_028_801AE944);
                o->state = 0x20;
                AF(o, s16, 0x16) = -0x10;
                o->vel[0] = (rand() << 4) - 0x40000;
                o->vel[2] = (rand() << 4) - 0x40000;
                o->timer = 0;
                PlaySoundId(0x599, 0);
            }
            if (o->hitCode == 0x1F) {
                SetScript(o, &D_sc03_028_801AE8D4);
                o->state = 0x1F;
            }
            if (o->hitCode == 0x20) {
                SetScript(o, &D_sc03_028_801AE8D4);
                o->state = 0x1F;
            }
        }
    }
    o->react = 0;
    o->hitCode = 0;
    o->hitState &= 0xFFFE;
}

s32 func_sc03_028_801802B8(void) {
    if (AF(D_sc03_028_801EC44C, u16, 2) != 4) {
        return 0;
    }
    func_sc03_028_8017FB84();
    return 1;
}

s32 func_sc03_028_801802F4(u8 *o) {
    s32 n = AF(o, s32, 0x1C) & (D_sc03_028_8018FF22 - 1);
    s32 amp = D_sc03_028_8018FF20;
    s32 v;
    if (rcos(0x4000 / D_sc03_028_8018FF22 * n) * 3 / 8 - 0x800 < 0) {
        v = -(rcos(0x4000 / D_sc03_028_8018FF22 * n) * 3 / 8 - 0x800);
    } else {
        v = rcos(0x4000 / D_sc03_028_8018FF22 * n) * 3 / 8 - 0x800;
    }
    return (v * amp >> 12) + 8;
}

void func_sc03_028_80180494(u8 *arg0) {
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

    m = AF(arg0, u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&D_sc03_028_8018F958, &sv, &flag);
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    otz = RotTransPers(&sv, &sxy, &p, &flag);
    if (otz <= 0) return;
    if (flag < 0) return;
    ot = g_WorldOtOrg[D_800B9A02].ot + otz;
    d = (func_sc03_028_801802F4(arg0) * (g_CameraProj + 500)) / (otz * 4);
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
    SetDrawMode(prim, 0, 0, GetTPage(0, 1, 0, 0) & 0xFFFF, 0);
    pp[0] = prim + 0xC;
    pp[1] = prim + 0x30;
    pp[2] = prim + 0x54;
    pp[3] = prim + 0x78;
    q = pp[0];
    for (i = 0; i < 4; i++, q += 0x24) {
        j = i * 4;
        AF(q, s32, 4) = D_sc03_028_8018FF24[D_sc03_028_8018FF50[j]];
        AF(q, s32, 0xC) = D_sc03_028_8018FF24[D_sc03_028_8018FF50[j + 1]];
        AF(q, s32, 0x14) = D_sc03_028_8018FF24[D_sc03_028_8018FF50[j + 2]];
        AF(q, s32, 0x1C) = D_sc03_028_8018FF24[D_sc03_028_8018FF50[j + 3]];
        AF(q, u8, 3) = 8;
        AF(q, u8, 7) = 0x3A;
        AF(q, s16, 8) = xs[D_sc03_028_8018FF30[j]];
        AF(q, s16, 0x10) = xs[D_sc03_028_8018FF30[j + 1]];
        AF(q, s16, 0x18) = xs[D_sc03_028_8018FF30[j + 2]];
        AF(q, s16, 0x20) = xs[D_sc03_028_8018FF30[j + 3]];
        AF(q, s16, 0xA) = ys[D_sc03_028_8018FF40[j]];
        AF(q, s16, 0x12) = ys[D_sc03_028_8018FF40[j + 1]];
        AF(q, s16, 0x1A) = ys[D_sc03_028_8018FF40[j + 2]];
        AF(q, s16, 0x22) = ys[D_sc03_028_8018FF40[j + 3]];
        AddPrim(ot, q);
    }
    AddPrim(ot, prim);
}

void func_sc03_028_801808CC(u8 *o, s32 a, s32 b, s32 c) {
    SV8 sv;
    s32 flag;
    u8 *obj;
    u8 *m;

    obj = (u8 *) FirstActor();
    if (obj != 0) {
        m = AF(o, u8 *, 0x20) + 0x34;
        gte_SetRotMatrix(m);
        gte_SetTransMatrix(m);
        RotTransSV(&D_sc03_028_8018F9A0, &sv, &flag);
        SetRotMatrix(&D_800AF648);
        SetTransMatrix(&D_800AF648);
        do {
            if ((AF(obj, u16, 0x5C) & 0x8000) && AF(obj, u16, 0x5E) != c
                && SVecPosDistSq(&sv, obj + 4) < 0x1E40) {
                AF(obj, s16, 0x60) = a;
                AF(obj, s16, 0x62) = b;
                AF(obj, s16, 0x5E) = c;
                AF(obj, u16, 0x5C) |= 1;
            }
            obj = (u8 *) NextActor();
        } while (obj != 0);
    }
}

s32 func_sc03_028_80180A08(u8 *o, s32 a1) {
    u8 *p;

    /* D_sc03_028_801EC44C is read through its neighbour here and in the last store (splat split one object) */
    if (D_sc03_028_801EC450[-1] == 0) {
        return 0;
    }
    p = D_sc03_028_801EC44C;
    if (AF(o, s16, 0xA) > AF(p, s16, 0xA) - 0x60) {
        if (AF(o, s16, 0xA) < AF(p, s16, 0xA) + 0x10) {
            if (AF(o, s16, 6) < AF(p, s16, 6) + 0x80) {
                if (AF(p, s16, 6) - 0x80 < AF(o, s16, 6)) {
                    if (AF(o, s16, 0xE) < AF(p, s16, 0xE) + 0x80) {
                        if (AF(p, s16, 0xE) - 0x80 < AF(o, s16, 0xE)) {
                            AF(p, u16, 0x5C) |= 1;
                            AF(D_sc03_028_801EC450[-1], s16, 0x5E) = a1;
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

s32 func_sc03_028_80180AC4(u8 *o, s32 lim) {
    s32 dz = AF(o, s16, 0xE) - 0x3C0;
    s32 dx = (s16) AF(o, u16, 6);
    s32 d = dz * dz;
    if (d < 0x1901) {
        d += 0x4000;
    }
    d += dx * dx;
    if (d < lim) {
        return 0;
    }
    AF(o, s32, 0x10) = 0;
    AF(o, s32, 0x18) = 0;
    AF(o, s16, 6) -= dx >> 5;
    AF(o, s16, 0xE) -= dz >> 5;
    return 1;
}

void func_sc03_028_80180B44(void *arg0, s32 arg1) {
    void *p;
    s32 i;
    s32 r;

    switch (arg1) {
    case 0:
        for (i = 0; i < 0x1000; i += 0x200) {
            p = SpawnPropFrom(arg0, 0x33);
            if (p != 0) {
                AF(AF(p, void *, 0x20), s16, 0x18) = 0x7000;
                AF(AF(p, void *, 0x20), s16, 0x1A) = 0x7000;
                AF(AF(p, void *, 0x20), s16, 0x1C) = 0x7000;
                AF(p, s32, 0x10) = rsin(i) << 8;
                AF(p, s32, 0x18) = rcos(i) << 8;
            }
        }
        break;
    case 1:
        for (i = 0; i < 0x1000; i += 0x200) {
            p = SpawnPropFrom(arg0, 0x33);
            if (p != 0) {
                AF(AF(p, void *, 0x20), s16, 0x18) = 0x7000;
                AF(AF(p, void *, 0x20), s16, 0x1A) = 0x7000;
                AF(AF(p, void *, 0x20), s16, 0x1C) = 0x7000;
                AF(p, s32, 0x10) = rsin(i) << 8;
                AF(p, s32, 0x18) = rcos(i) << 8;
                AF(p, s32, 4) -= rsin(AF(AF(D_sc03_028_801EC44C, void *, 0x20), s16, 0x12)) << 10;
                AF(p, s32, 0xC) -= rcos(AF(AF(D_sc03_028_801EC44C, void *, 0x20), s16, 0x12)) << 10;
            }
        }
        break;
    case 2:
        p = SpawnPropFrom(arg0, 0x33);
        if (p != 0) {
            AF(AF(p, void *, 0x20), s16, 0x18) = 0x7000;
            AF(AF(p, void *, 0x20), s16, 0x1A) = 0x7000;
            AF(AF(p, void *, 0x20), s16, 0x1C) = 0x7000;
        }
        break;
    case 3:
        p = SpawnPropFrom(arg0, 0x33);
        if (p != 0) {
            AF(p, s16, 6) += (rand() & 0x1FF) - 0x100;
            AF(p, s16, 0xE) += (rand() & 0x1FF) - 0x100;
            AF(p, s16, 0x16) = -8;
            AF(AF(p, void *, 0x20), s16, 0x18) = 0x3000;
            AF(AF(p, void *, 0x20), s16, 0x1A) = 0x3000;
            AF(AF(p, void *, 0x20), s16, 0x1C) = 0x3000;
        }
        break;
    case 4:
        p = SpawnPropFrom(arg0, 0x33);
        if (p != 0) {
            r = (rand() & 0x1FF) - 0x100;
            AF(p, s32, 0x10) = -(rsin((AF(AF(arg0, void *, 0x20), s16, 0x12) + r) & 0xFFF) << 9);
            r = (rand() & 0x1FF) - 0x100;
            AF(p, s32, 0x18) = -(rcos((AF(AF(arg0, void *, 0x20), s16, 0x12) + r) & 0xFFF) << 9);
            if (rand() & 1) {
                AF(p, s32, 8) = 0xFFFC0000;
            }
            AF(p, s32, 4) -= rsin(AF(AF(arg0, void *, 0x20), s16, 0x12) & 0xFFF) << 9;
            AF(p, s32, 0xC) -= rcos(AF(AF(arg0, void *, 0x20), s16, 0x12) & 0xFFF) << 9;
            AF(AF(p, void *, 0x20), s16, 0x18) = 0x5000;
            AF(AF(p, void *, 0x20), s16, 0x1A) = 0x5000;
            AF(AF(p, void *, 0x20), s16, 0x1C) = 0x5000;
        }
        break;
    case 5:
        p = SpawnPropFrom(arg0, 0x33);
        if (p != 0) {
            AF(AF(p, void *, 0x20), s16, 0x18) = 0x3000;
            AF(AF(p, void *, 0x20), s16, 0x1A) = 0x3000;
            AF(AF(p, void *, 0x20), s16, 0x1C) = 0x3000;
            AF(p, s32, 8) = 0xFFFC0000;
            AF(p, s32, 0x10) = -(rsin((AF(AF(arg0, void *, 0x20), s16, 0x12) - 0x400) & 0xFFF) << 8);
            AF(p, s32, 0x18) = -(rcos((AF(AF(arg0, void *, 0x20), s16, 0x12) - 0x400) & 0xFFF) << 8);
        }
        break;
    case 6:
        p = SpawnPropFrom(arg0, 0x33);
        if (p != 0) {
            AF(p, s16, 6) += (rand() & 0x3F) - 0x20;
            AF(p, s16, 0xE) += (rand() & 0x3F) - 0x20;
            AF(p, s32, 8) = 0xFFFC0000;
            AF(p, s16, 0x16) = -8;
            AF(AF(p, void *, 0x20), s16, 0x18) = 0x3000;
            AF(AF(p, void *, 0x20), s16, 0x1A) = 0x3000;
            AF(AF(p, void *, 0x20), s16, 0x1C) = 0x3000;
        }
        break;
    case 7:
        for (i = 0x100; i < 0x160; i += 0x20) {
            p = SpawnPropFrom(arg0, 0x33);
            if (p != 0) {
                AF(AF(p, void *, 0x20), s16, 0x18) = 0x3000;
                AF(AF(p, void *, 0x20), s16, 0x1A) = 0x3000;
                AF(AF(p, void *, 0x20), s16, 0x1C) = 0x3000;
                AF(p, s32, 8) = 0xFFFC0000;
                AF(p, s32, 4) += (rsin(AF(AF(arg0, void *, 0x20), s16, 0x12)) * i) << 4;
                AF(p, s32, 0xC) += (rcos(AF(AF(arg0, void *, 0x20), s16, 0x12)) * i) << 4;
            }
        }
        break;
    }
}

void func_sc03_028_80181000(u8 *o) {
    V3 v;
    SV8 t;
    s32 r;
    s32 i;
    s16 a;

    t.x = 0;
    t.z = 0x3C0;
    r = HeadingToPoint(o + 4, &t);
    AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 8);
    SetLocalVelocityXZ(o, &D_sc03_028_8018F9A8);
    MoveCollide(o);
    v.x = (s16) AF(o, u16, 6);
    v.z = AF(o, s16, 0xE) - 0x3C0;
    v.y = 0;
    AF(o, s16, 6) -= v.x >> 6;
    AF(o, s16, 0xE) -= v.z >> 6;
    Square0(&v, &v);
    if (v.x + v.z < 0x400) {
        a = AF(o, s16, 0x76);
        if (a > 0x50) {
            i = rand() & 3;
        } else if (a > 0x28) {
            i = (rand() & 5) + 3;
        } else {
            i = (rand() & 5) + 8;
        }
        switch (D_sc03_028_8018FB2C[i]) {
        case 0:
            AF(o, s16, 2) = 7;
            SetScript(o, &D_sc03_028_801ADC24);
            AF(o, s32, 0x1C) = 0x1E;
            break;
        case 1:
            AF(o, s16, 2) = 0xC;
            SetScript(o, &D_sc03_028_801ADD34);
            AF(o, s32, 0x1C) = 0;
            AF(o, s16, 0x84) = 0;
            AF(o, s16, 0xDE) = 0;
            AF(o, s16, 0x34) = 5;
            AF(o, s16, 0xDC) = 0x111 - AF(o, s16, 0x76) * 0x88 / 0x78;
            break;
        case 2:
            AF(o, s16, 2) = 0x16;
            SetScript(o, &D_sc03_028_801AE824);
            StopWithGravity(o);
            AF(o, s16, 0x16) = -0x1E;
            AF(o, s32, 0x10) = (g_PlayerPosX - AF(o, s32, 4)) >> 5;
            AF(o, s32, 0x18) = (D_80126B64 - AF(o, s32, 0xC)) >> 5;
            AF(o, s32, 0x58) = (s32) &D_sc03_028_8018F8E4 | 0x40000000 | 0x20000000;
            break;
        case 3:
            AF(o, s16, 2) = 0xD;
            SetScript(o, &D_sc03_028_801AE08C);
            AF(o, s32, 0x1C) = 0;
            AF(o, s16, 0x84) = 0;
            break;
        case 4:
            AF(o, s16, 2) = 0xE;
            AF(o, s16, 0xFE) = 0;
            break;
        case 5:
            AF(o, s16, 2) = 0x19;
            SetScript(o, &D_sc03_028_801ADC24);
            AF(o, s32, 0x1C) = 0x1E;
            break;
        case 6:
            AF(o, s16, 2) = 0xC;
            SetScript(o, &D_sc03_028_801ADD34);
            AF(o, s32, 0x1C) = 0;
            AF(o, s16, 0x84) = 0;
            AF(o, s16, 0xDE) = 0;
            AF(o, s16, 0x34) = 0x16;
            AF(o, s16, 0xDC) = 0x111 - AF(o, s16, 0x76) * 0x88 / 0x78;
            break;
        }
    }
}

void func_sc03_028_80181304(u8 *o) {
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(o, 4);
    if (--AF(o, s32, 0x1C) == 0) {
        AF(o, s16, 2) = 8;
        SetScript(o, &D_sc03_028_801ADE54);
    }
}

void func_sc03_028_80181374(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->index == 0xA) {
        if (arg0->animTimer == 1) {
            PlaySoundId(0x55B, 0, arg2);
        }
    }
    if ((arg0->index == 0x23) && (arg0->animTimer == 1)) {
        PlaySoundId(0x55C, 0);
        SpawnActor(0x8A, (s32) arg0);
    }
    if (arg0->index >= 0x2D) {
        arg0->state = 9;
        arg0->timer = 5;
    }
}

void func_sc03_028_80181414(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 0xA;
        SetScript((s32) arg0, (s32) &D_sc03_028_801ADC24);
        AF(arg0, s32, 0x1C) = 0xF;
        return;
    }
    if (AF(arg0, s32, 0x94) < 0x37) {
        temp_v0 = TurnStepToPlayer((s32) arg0, 1);
        if (temp_v0 >= 0x12) {
            temp_v1 = AF(arg0, void *, 0x20);
            AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x11);
            return;
        }
        if (temp_v0 < -0x11) {
            temp_v1_2 = AF(arg0, void *, 0x20);
            AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) - 0x11);
            return;
        }
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x12) = (u16) (AF(temp_v1_3, u16, 0x12) + temp_v0);
        return;
    }
    temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 > 0) {
        AF(arg0, s32, 0x94) = 0x2D;
    }
}

void func_sc03_028_8018150C(u8 *arg0) {
    SV8 a;
    SV8 b;
    s32 i;
    s32 x;
    s32 dz;
    s32 dx;
    s32 d;
    s32 lim;
    s32 flag;
    s32 p;
    s32 c;
    s32 cv;

    if (AF(arg0, s16, 0x108) != 0) {
        AF(arg0, s16, 0x108)--;
    } else {
        AF(arg0, s16, 0x108) = 7;
        PlaySoundId(0x6C1, 0);
    }
    a.z = -0x40;
    b.z = -0x60;
    for (x = -0x50, i = 0; i < 6; i++, x += 0x20) {
        a.x = x;
        b.x = x;
        a.y = -0x10;
        b.y = -0x10;
        if (ActorSegmentHitsPlayer((s32) arg0, (s32) &a, (s32) &b) == 1) {
            g_PlayerHitKind = 4;
        }
        a.y = -0x40;
        b.y = -0x40;
        if (ActorSegmentDamagesPlayer((s32) arg0, (s32) &a, (s32) &b, 0x18) == 1) {
            g_PlayerHitKind = 4;
        }
    }
    MoveCollide((s32) arg0);
    lim = 0x14400;
    dz = AF(arg0, s16, 0xE) - 0x3C0;
    dx = (s16) AF(arg0, u16, 6);
    d = dz * dz;
    if (d < 0x1901) {
        d += 0x4000;
    }
    d += dx * dx;
    if (d < lim) {
        flag = 0;
    } else {
        flag = 1;
        AF(arg0, s32, 0x10) = 0;
        AF(arg0, s32, 0x18) = 0;
        AF(arg0, s16, 6) -= dx >> 5;
        AF(arg0, s16, 0xE) -= dz >> 5;
    }
    if (flag != 0) {
        AF(arg0, s16, 2) = 5;
        SetScript((s32) arg0, (s32) &D_sc03_028_801ADC24);
        AF(arg0, s32, 0x1C) = 1;
        a.x = AF(arg0, s16, 6);
        a.z = AF(arg0, s16, 0xE);
        b.x = AF(arg0, s16, 6) - ((rsin(AF(AF(arg0, u8 *, 0x20), s16, 0x12)) << 7) >> 12);
        b.z = AF(arg0, s16, 0xE) - ((rcos(AF(AF(arg0, u8 *, 0x20), s16, 0x12)) << 7) >> 12);
        if (TraceMap(0x11, (s32) &a, (s32) &b) & 0x8000) {
            i = 0;
            x = (rsin(AF(AF(arg0, u8 *, 0x20), s16, 0x12)) << 6) >> 12;
            c = (rcos(AF(AF(arg0, u8 *, 0x20), s16, 0x12)) << 6) >> 12;
            for (; i < 16; i++) {
                p = SpawnActorArg(0xFE, 3, (s32) arg0);
                if (p != 0) {
                    AF(p, s16, 6) -= (rsin(AF(AF(arg0, u8 *, 0x20), s16, 0x12) + (rand() & 0x3FF) - 0x200) << 6) >> 12;
                    cv = (rcos(AF(AF(arg0, u8 *, 0x20), s16, 0x12) + (rand() & 0x3FF) - 0x200) << 6) >> 12;
                    AF(p, s32, 0x10) = AF(p, s32, 0x10) * (x << 11);
                    AF(p, s16, 0xE) -= cv;
                    AF(p, s16, 0xA) -= 0x7E;
                    AF(p, s32, 0x18) = AF(p, s32, 0x18) * (c << 11);
                }
            }
        }
    }
}

void func_sc03_028_80181850(u8 *arg0) {
    SV v;
    s32 i;
    u8 *p;
    u16 t;
    u16 s;

    if (AF(arg0, s16, 0xDE) >= 0x1000) {
        s = AF(arg0, u16, 0x34);
        AF(arg0, u16, 2) = s;
        if (s == 0x16) {
            SetScript((s32) arg0, (s32) &D_sc03_028_801AE824);
            StopWithGravity((s32) arg0);
            AF(arg0, s16, 0x16) = -0x1E;
            AF(arg0, s32, 0x10) = (g_PlayerPosX - AF(arg0, s32, 4)) >> 5;
            AF(arg0, s32, 0x18) = (D_80126B64 - AF(arg0, s32, 0xC)) >> 5;
            AF(arg0, s32, 0x58) = (s32) &D_sc03_028_8018F8E4 | 0x40000000 | 0x20000000;
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_028_801ADC24);
            AF(arg0, s32, 0x1C) = 0x14;
        }
    }
    t = AF(arg0, u16, 0x84) + 1;
    AF(arg0, u16, 0x84) = t;
    if ((s16) t == 0xF) {
        func_sc03_028_80180B44((s32) arg0, 7);
        PlaySoundId(0x55D, 0);
    }
    if (AF(arg0, s16, 0x84) == 0x23) {
        func_sc03_028_80180B44((s32) arg0, 7);
        PlaySoundId(0x55D, 0);
    }
    if (AF(arg0, s16, 0x84) == 0x2D) {
        PlaySoundId(0x55E, 0);
        SetScript((s32) arg0, (s32) &D_sc03_028_801ADC24);
        AF(arg0, s16, 0x98) = 0;
    }
    if (++AF(arg0, s32, 0x1C) >= 0x2E) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += AF(arg0, u16, 0xDC);
        AF(arg0, u16, 0xDE) += AF(arg0, u16, 0xDC);
        if (ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc03_028_8018F970, (s32) &D_sc03_028_8018F978, 0x1C) == 1) {
            g_PlayerHitKind = 0x400A;
        }
        func_sc03_028_80184E9C((s32) arg0, (s32) &D_sc03_028_8018F970, (s32) &D_sc03_028_8018F978);
        if (ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc03_028_8018F970, (s32) &D_sc03_028_8018F980, 0x1C) == 1) {
            g_PlayerHitKind = 0x400A;
        }
        func_sc03_028_80184E9C((s32) arg0, (s32) &D_sc03_028_8018F970, (s32) &D_sc03_028_8018F980);
        if (ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc03_028_8018F970, (s32) &D_sc03_028_8018F988, 0x1C) == 1) {
            g_PlayerHitKind = 0x400A;
        }
        func_sc03_028_80184E9C((s32) arg0, (s32) &D_sc03_028_8018F970, (s32) &D_sc03_028_8018F988);
        v.vx = (u32) (rsin(AF(AF(arg0, u8 *, 0x20), s16, 0x12)) * 0x11) >> 7;
        v.vy = 0x10;
        v.vz = (u32) (rcos(AF(AF(arg0, u8 *, 0x20), s16, 0x12)) * 0x11) >> 7;
        for (i = 0; i < 2; i++) {
            p = (u8 *) SpawnActorArg(0xFE, 1, (s32) arg0);
            if (p != 0) {
                AF(p, s16, 6) = AF(arg0, u16, 6) + v.vx * 5 / 8;
                AF(p, s16, 0xE) = AF(arg0, u16, 0xE) + v.vz * 5 / 8;
                AF(p, s32, 0x10) *= v.vz << 9;
                AF(p, s32, 0x18) *= -(v.vx << 9);
                func_sc03_028_80180B44(p, 5);
            }
        }
    }
}

void func_sc03_028_80181BD8(StageActor *arg0) {
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0_2;
    s32 var_s1;
    u16 temp_v0;

    if (arg0->animFlags & 0x4000) {
        arg0->state = 5;
        SetScript((s32) arg0, (s32) &D_sc03_028_801ADC24);
        arg0->timer = 1;
    }
    temp_a0 = arg0->timer;
    if ((temp_a0 < 0xE) && (arg0->index == 0x3D) && (arg0->animTimer == 1)) {
        arg0->timer = (s32) (temp_a0 + 1);
        arg0->index = 0x38;
        if (!(arg0->timer & 3)) {
            SpawnActor(0xD1, (s32) arg0);
        }
    }
    temp_v0 = (u16)arg0->unk84 + 1;
    arg0->unk84 = temp_v0;
    if ((s16) temp_v0 == 0x28) {
        PlaySoundId(0x55F, 0);
    }
    if ((s16) (u16)arg0->unk84 == 0x6C) {
        PlaySoundId(0x561, 0);
        var_s1 = 0;
        temp_s3 = (s32) (rsin((s32) arg0->model->rot.vy) << 6) >> 0xC;
        temp_s2 = (s32) (rcos((s32) arg0->model->rot.vy) << 6) >> 0xC;
        do {
            temp_v0_2 = SpawnActorArg(0xFE, 2, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, u16, 6) = (u16) (AF(temp_v0_2, u16, 6) + temp_s3);
                AF(temp_v0_2, u16, 0xE) = (u16) (AF(temp_v0_2, u16, 0xE) + temp_s2);
            }
            var_s1 += 1;
        } while (var_s1 < 8);
    }
}

void func_sc03_028_80181D4C(StageActor *o) {
    s16 y;

    y = o->pos[1].h.i - 2;
    o->pos[1].h.i = y;
    if (y < -0x158) {
        o->state = 0x12;
        SetScript(o, &D_sc03_028_801AE6DC);
    }
    if ((GetPlayerByte1C7() & 0x7FFFFFFF) == 2) {
        SetScript(o, &D_sc03_028_801AE99C);
        o->state = 0x1B;
        o->timer = 0;
        AF(o, s16, 0x12) = -o->pos[0].h.i >> 6;
        AF(o, s16, 0x16) = -0x10;
        AF(o, s16, 0x1A) = (0x3C0 - o->pos[2].h.i) >> 6;
        o->unkFC = (-o->pos[1].h.i - 0x40) / 5;
    }
    if (o->index == 1 || o->index == 0x1E) {
        SpawnActorArg(0xFE, 4, o);
        SpawnActorArg(0xFE, 4, o);
        SpawnActorArg(0xFE, 4, o);
    }
    if (o->index == 0xD) {
        SpawnActorArg(0xFE, 5, o);
        SpawnActorArg(0xFE, 5, o);
        SpawnActorArg(0xFE, 5, o);
    }
}

void func_sc03_028_80181EBC(u8 *arg0) {
    SV8 sp10;
    s32 flag;
    u8 *obj;
    u8 *m;
    s32 ang;
    s32 cnt;
    s32 id;
    s32 a;
    s32 b;

    if (AF(arg0, s32, 0x94) == 4) {
        ActorSegmentHitsPlayer(arg0, &D_sc03_028_8018F990, &D_sc03_028_8018F998);
        cnt = 10;
        ang = AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800;
        obj = (u8 *) FirstActor(arg0);
        id = 0x1D;
        if (obj != 0) {
            m = AF(arg0, u8 *, 0x20) + 0x34;
            gte_SetRotMatrix(m);
            gte_SetTransMatrix(m);
            RotTransSV(&D_sc03_028_8018F9A0, &sp10, &flag);
            SetRotMatrix(&D_800AF630.wsm);
            SetTransMatrix(&D_800AF648);
            do {
                if ((AF(obj, u16, 0x5C) & 0x8000) && AF(obj, u16, 0x5E) != id
                    && SVecPosDistSq(&sp10, obj + 4) < 0x1E40) {
                    AF(obj, s16, 0x60) = cnt;
                    AF(obj, s16, 0x62) = ang;
                    AF(obj, s16, 0x5E) = id;
                    AF(obj, u16, 0x5C) |= 1;
                }
                obj = (u8 *) NextActor();
            } while (obj != 0);
        }
    }
    if (AF(arg0, s16, 0x98) == 0) {
        s16 v = AF(arg0, s16, 0xFE);
        if (v == 0) {
            s16 s0;
            AF(arg0, s16, 0xFE) = v + 1;
            s0 = AF(AF(arg0, u8 *, 0x20), u16, 0x12);
            s0 &= 0xFFF;
            if (s0 > 0x800) {
                AF(AF(arg0, u8 *, 0x20), s16, 0x12) = (ratan2(AF(arg0, s16, 0xE) - 0x3F0, -0x178 - AF(arg0, s16, 6)) - 0x400) & 0xFFF;
            } else {
                AF(AF(arg0, u8 *, 0x20), s16, 0x12) = (ratan2(AF(arg0, s16, 0xE) - 0x390, 0x178 - AF(arg0, s16, 6)) - 0x400) & 0xFFF;
            }
            UpdateModelZYX(arg0);
            SetLocalVelocityXZ(arg0, &D_sc03_028_8018F9CC);
            AF(arg0, s16, 0x16) = -0x10;
            AF(arg0, s16, 0xFC) = AF(AF(arg0, u8 *, 0x20), u16, 0x12);
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = s0;
            UpdateModelZYX(arg0);
            AF(arg0, s16, 2) = 0x14;
            AF(AF(arg0, u8 *, 0x20), s16, 0x1C) = 0x1000;
            AF(AF(arg0, u8 *, 0x20), u16, 0x2C) |= 0x10;
            AF(arg0, s32, 0x1C) = 0x1000;
        } else {
            AF(arg0, s16, 2) = 0x16;
            SetScript(arg0, &D_sc03_028_801AE824);
            StopWithGravity(arg0);
            AF(arg0, s16, 0x16) = -0x10;
            AF(arg0, s32, 0x10) = (g_PlayerPosX - AF(arg0, s32, 4)) >> 5;
            AF(arg0, s32, 0x18) = (D_80126B64 - AF(arg0, s32, 0xC)) >> 5;
            AF(arg0, s32, 0x58) = (s32) &D_sc03_028_8018F8E4 | 0x40000000 | 0x20000000;
        }
    }
    if ((GetPlayerByte1C7() & 0x7FFFFFFF) == 2) {
        SetScript(arg0, &D_sc03_028_801AE99C);
        AF(arg0, s16, 2) = 0x1B;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, s16, 0x12) = -AF(arg0, s16, 6) >> 6;
        AF(arg0, s16, 0x16) = -0x10;
        AF(arg0, s16, 0x1A) = (0x3C0 - AF(arg0, s16, 0xE)) >> 6;
        AF(arg0, s16, 0xFC) = (-AF(arg0, s16, 0xA) - 0x40) / 5;
    }
}

void func_sc03_028_8018222C(u8 *o) {
    SV8 a;
    SV8 b;
    s32 x;
    s32 z;
    s16 v;
    s32 r;

    a.y = 0x40;
    b.y = 0x60;
    for (x = -0x50; x < 0x60; x += 0x20) {
        a.x = x;
        b.x = x;
        for (z = 0; z < 0x60; z += 0x20) {
            a.z = z;
            b.z = z;
            if (ActorSegmentDamagesPlayer(o, &a, &b, 0x24) == 1) {
                g_PlayerHitKind = 0x4002;
            }
        }
    }
    if (MoveCollide(o) & 0x2000) {
        PlaySoundId(0x560, 0);
        StartCameraShake(&D_sc03_028_8018C134);
        func_sc03_028_80180B44(o, 0);
        if (AF(o, s32, 0x1C) != 0) {
            D_sc03_028_801EC448 -= 2;
            if (D_sc03_028_801EC448 <= 0) {
                SetScript(o, &D_sc03_028_801AE2C4);
                AF(o, s16, 2) = 0x1D;
                func_sc03_028_8017F9D8();
                AF(o, u16, 0x5C) |= 0x200;
                AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFF7F;
                AF(AF(o, u8 *, 0x20), s16 *, 0x80) = &D_sc03_028_8018F9FC;
                AF(o, s32, 0x58) = (s32) &D_sc03_028_8018F914 | 0x40000000 | 0x20000000;
                v = AF(o, s16, 0x76);
                if (v > 0x50) {
                    AF(o, s32, 0x1C) = 0xD2;
                } else if (v > 0x28) {
                    AF(o, s32, 0x1C) = 0x96;
                } else {
                    AF(o, s32, 0x1C) = 0x5A;
                }
                r = SpawnActor(0xB8, o);
                AF(o, s32, 0x6C) = r;
                if (r == 0) {
                    AF(o, s32, 0x1C) = 1;
                }
                func_sc03_028_8018305C(o);
            } else {
                SetScript(o, &D_sc03_028_801AE3A4);
                AF(o, s16, 2) = 0x1E;
                AF(o, s32, 0x58) = (s32) &D_sc03_028_8018F914 | 0x40000000 | 0x20000000;
                AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFF7F;
            }
        } else {
            SetScript(o, &D_sc03_028_801AE7CC);
            AF(o, s16, 0x16) = -0xE;
            AF(o, s32, 0x58) = (s32) &D_sc03_028_8018F914 | 0x40000000 | 0x20000000;
            AF(o, s32, 0x1C)++;
        }
    }
}

void func_sc03_028_80182494(u8 *o) {
    SV8 a;
    SV8 b;
    s32 x;
    s32 z;
    s32 dz;
    s32 d;
    s32 px;
    s32 lim;

    a.y = 0x20;
    b.y = 0x40;
    for (x = -0x50; x < 0x60; x += 0x20) {
        a.x = x;
        b.x = x;
        for (z = -0x80; z < 0; z += 0x20) {
            a.z = z;
            b.z = z;
            if (ActorSegmentDamagesPlayer(o, &a, &b, 0x24) == 1) {
                g_PlayerHitKind = 0x4002;
            }
        }
    }
    lim = 0xE100;
    dz = AF(o, s16, 0xE) - 0x3C0;
    d = dz * dz;
    px = AF(o, s16, 6);
    if (d <= 0x1900) {
        d += 0x4000;
    }
    d += px * px;
    if (d >= lim) {
        AF(o, s32, 0x10) = 0;
        AF(o, s32, 0x18) = 0;
        AF(o, s16, 6) -= px >> 5;
        AF(o, s16, 0xE) -= dz >> 5;
    }
    if (MoveCollide(o) & 0x2000) {
        PlaySoundId(0x560, 0);
        StartCameraShake(&D_sc03_028_8018C134);
        func_sc03_028_80180B44(o, 1);
        AF(o, s16, 2) = 0x18;
        AF(o, s16, 0x16) = -0xE;
        SetScript(o, &D_sc03_028_801AE734);
        AF(o, s32, 0x58) = (s32) &D_sc03_028_8018F8D4 | 0x40000000 | 0x20000000;
    }
}

void func_sc03_028_80182628(u8 *o) {
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(o, 4);
    if (--AF(o, s32, 0x1C) == 0) {
        AF(o, s16, 2) = 0x1A;
        SetScript(o, &D_sc03_028_801ADE54);
    }
}

void func_sc03_028_80182698(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->index == 0xA) {
        if (arg0->animTimer == 1) {
            PlaySoundId(0x55B, 0, arg2);
        }
    }
    if ((arg0->index == 0x23) && (arg0->animTimer == 1)) {
        PlaySoundId(0x627, 0);
        SpawnActorArg(0x138, (s32) arg0->model->rot.vy, (s32) arg0);
        SpawnActorArg(0x138, arg0->model->rot.vy + 0x200, (s32) arg0);
        SpawnActorArg(0x138, arg0->model->rot.vy - 0x200, (s32) arg0);
    }
    if (arg0->animFlags & 0x4000) {
        arg0->state = 5;
        SetScript((s32) arg0, (s32) &D_sc03_028_801ADC24);
        arg0->timer = 0x64;
    }
}

void func_sc03_028_80182780(StageActor *o) {
    u8 *p;

    UpdateScript(o);
    if ((s32)o->model->unk04 >= 0) {
        if (--o->timer & 1) {
            func_sc03_028_80180B44(o, 3);
        }
        D_sc03_028_8018FA0C = (rsin(AF(o, s16, 0xE8) = (AF(o, u16, 0xE8) + 0x88) & 0xFFF) >> 6) + 0xC0;
        D_sc03_028_8018FA0E = (rsin(AF(o, s16, 0xE8)) >> 6) + 0xC0;
        D_sc03_028_8018FA10 = (rsin(AF(o, s16, 0xE8)) >> 6) + 0xC0;
        if (RequestBgmPack(0x24) != 0) {
            o->state = 0x25;
            p = AF(D_sc03_028_801EC450[0], u8 *, 0xCC);
            AF(p, s16, 2) = 2;
            AF(p, u16, 0x5C) = 0x8000;
            AF(p, u8, 0xC1) = 0;
            p = AF(D_sc03_028_801EC450[0], u8 *, 0xD0);
            AF(p, s16, 2) = 2;
            AF(p, u16, 0x5C) = 0x8000;
            AF(p, u8, 0xC1) = 0;
            p = AF(D_sc03_028_801EC450[0], u8 *, 0xD4);
            AF(p, s16, 2) = 2;
            AF(p, u16, 0x5C) = 0x8000;
            AF(p, u8, 0xC1) = 0;
            p = AF(D_sc03_028_801EC450[0], u8 *, 0xD8);
            AF(p, s16, 2) = 2;
            AF(p, u16, 0x5C) = 0x8000;
            AF(p, u8, 0xC1) = 0;
        }
    }
}

void func_sc03_028_801828DC(StageActor *o) {
    if (--o->timer & 1) {
        func_sc03_028_80180B44(o, 3);
    }
    D_sc03_028_8018FA0C = (rsin(AF(o, s16, 0xE8) = (AF(o, u16, 0xE8) + 0x88) & 0xFFF) >> 6) + 0xC0;
    D_sc03_028_8018FA0E = (rsin(AF(o, s16, 0xE8)) >> 6) + 0xC0;
    D_sc03_028_8018FA10 = (rsin(AF(o, s16, 0xE8)) >> 6) + 0xC0;
    if (AF(o, s16, 0x10A) != 0 && func_80174774() != 0) {
        o->model->unk04 |= 0x80000000;
        o->state = 0x26;
    }
    if (UpdateScript(o) != 0 && D_sc03_028_801EC590 == 0) {
        EndEvent(o);
    }
}

void func_sc03_028_801829F0(u8 *o) {
    u8 unused[16];

    AF(o, s32, 4) += AF(o, s32, 0x10);
    AF(o, s32, 8) += AF(o, s32, 0x14);
    AF(o, s32, 0x14) += 0x18000;
    AF(o, s32, 0xC) += AF(o, s32, 0x18);
    if (AF(o, s16, 0xA) >= -0x1C8) {
        PlaySoundId(0x560, 0);
        StartCameraShake(&D_sc03_028_8018C134);
        func_sc03_028_80180B44(o, 0);
        if ((AF(o, s16, 0x70) += 3) == 9) {
            AF(o, s16, 2) = 0x27;
            SnapToGround(o);
            SetScript(o, &D_sc03_028_801ADC24);
        } else {
            AF(o, s32, 0x10) = (&D_sc03_028_8018F9D8)[AF(o, s16, 0x70)];
            AF(o, s32, 0x14) = (&D_sc03_028_8018F9DC)[AF(o, s16, 0x70)];
            AF(o, s32, 0x18) = (&D_sc03_028_8018F9E0)[AF(o, s16, 0x70)];
            SetScript(o, &D_sc03_028_801ADCEC);
        }
    }
    if (AF(o, s32, 0x94) == 7) {
        AF(o, s16, 0x98) = 0;
    }
}

void func_sc03_028_80182B3C(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    s16 a = AF(p, s16, 0x12);
    if (a <= 0x300) {
        AF(p, s16, 0x12) = a + 0x100;
    } else if (a <= 0x500) {
        AF(p, s16, 0x12) = 0x400;
        AF(o, s16, 2) = 0xF;
        SetScript(o, &D_sc03_028_801AE824);
        SetLocalVelocityXZ(o, &D_sc03_028_8018F9C0);
        AF(o, s16, 0x16) = -0x1C;
        AF(o, s32, 0x58) = (s32) &D_sc03_028_8018F8E4 | 0x40000000 | 0x20000000;
    } else if (a <= 0x800) {
        AF(p, s16, 0x12) = a - 0x100;
    } else if (a <= 0xB00) {
        AF(p, s16, 0x12) = a + 0x100;
    } else if (a <= 0xD00) {
        AF(p, s16, 0x12) = 0xC00;
        AF(o, s16, 2) = 0xF;
        SetScript(o, &D_sc03_028_801AE824);
        SetLocalVelocityXZ(o, &D_sc03_028_8018F9C0);
        AF(o, s16, 0x16) = -0x1C;
        AF(o, s32, 0x58) = (s32) &D_sc03_028_8018F8E4 | 0x40000000 | 0x20000000;
    } else {
        AF(p, s16, 0x12) = a - 0x100;
    }
}

void func_sc03_028_80182C20(u8 *o) {
    s32 btn;
    s16 v;
    s32 r;

    btn = MoveCollide(o);
    switch (AF(o, s32, 0x1C)) {
    case 0:
        if (AF(o, s32, 0x94) == 3) {
            AF(o, s16, 0x98) = 0;
            AF(o, s32, 0x1C)++;
        }
        break;
    case 1:
        if (btn & 0x2000) {
            PlaySoundId(0x560, 0);
            StartCameraShake(&D_sc03_028_8018C134);
            func_sc03_028_80180B44(o, 0);
            AF(o, s16, 0x98) = 1;
            AF(o, s32, 0x14) = -0x80000;
            AF(o, s32, 0x1C)++;
        }
        break;
    case 2:
        if (btn & 0x2000) {
            PlaySoundId(0x560, 0);
            AF(o, s32, 0x14) = -0x40000;
            AF(o, s32, 0x1C)++;
        }
        break;
    case 3:
        if (btn & 0x2000) {
            PlaySoundId(0x560, 0);
            if (D_sc03_028_801EC448 <= 0) {
                AF(o, s32, 0x58) = (s32) &D_sc03_028_8018F914 | 0x40000000 | 0x20000000;
                SetScript(o, &D_sc03_028_801AE2C4);
                AF(o, s16, 2) = 0x1D;
                func_sc03_028_8017F9D8();
                AF(AF(o, u8 *, 0x20), s16 *, 0x80) = &D_sc03_028_8018F9FC;
                AF(o, u16, 0x5C) |= 0x200;
                v = AF(o, s16, 0x76);
                if (v > 0x50) {
                    AF(o, s32, 0x1C) = 0xD2;
                } else if (v > 0x28) {
                    AF(o, s32, 0x1C) = 0x96;
                } else {
                    AF(o, s32, 0x1C) = 0x5A;
                }
                r = SpawnActor(0xB8, o);
                AF(o, s32, 0x6C) = r;
                if (r == 0) {
                    AF(o, s32, 0x1C) = 1;
                }
                func_sc03_028_8018305C((s32) o);
            } else {
                SetScript(o, &D_sc03_028_801AE3A4);
                AF(o, s16, 2) = 0x1E;
                AF(o, s32, 0x58) = (s32) &D_sc03_028_8018F914 | 0x40000000 | 0x20000000;
                AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFF7F;
            }
        }
        break;
    }
}

void func_sc03_028_80182E2C(StageActor *o) {
    u16 v;
    s32 t;
    if (o->state < 0x21) {
        D_sc03_028_8018F9FC = (rsin(AF(o, s16, 0xE8) = (AF(o, u16, 0xE8) + 0x88) & 0xFFF) >> 6) + 0xC0;
        D_sc03_028_8018F9FE = (rsin(AF(o, s16, 0xE8)) >> 6) + 0xC0;
        D_sc03_028_8018FA00 = (rsin(AF(o, s16, 0xE8)) >> 6) + 0xC0;
        v = AF(o, u16, 2);
        if (v == 0x1F || v == 0x20 || v == 0x1C) {
            t = (AF(o, u16, 0xE8) + 0x800) & 0x800;
            AF(o, s16, 0xE8) = t;
            D_sc03_028_8018FA14 = (rcos((s16)t & 0xFFFF) >> 6) + 0xC0;
        }
    }
    D_sc03_028_8018FF60[o->state](o);
}

void BossWeakPointHit(StageActor *o) {
    if (o->parent->react != 0) {
        o->react = 0;
        o->hitCode = 0;
        o->hitState &= 0x7FFF;
        return;
    }
    o->hitState = 0;
    o->react = 0;
    o->parent->hp -= 0x28;
    func_sc03_028_8017C010((s32)o->parent + 0x76, (s32) &D_sc03_028_8018F924, 0x78);
    ShowDamage(o, 0x28);
    func_8016B3F4(o);
    o->parent->hitState &= 0xFDFF;
    o->parent->state = 0x27;
    o->state = 2;
    o->timer = 0xC;
    PlaySoundId(0xB08, 0);
    if (o->hitFx[0] != 0) {
        GainStat3FromActor(o);
    }
}

void func_sc03_028_80183020(StageActor *arg0) {
    D_sc03_028_80190068[arg0->state]();
}

s32 func_sc03_028_8018305C(StageActor *arg0) {
    SpawnActorArg(0xC8, 0, arg0);
    SpawnActorArg(0xC8, 1, arg0);
    return SpawnActorArg(0xC8, 2, arg0);
}

void func_sc03_028_801830B0(StageActor *arg0) {
    SpawnActorArg(0xC8, 4, arg0);
    SpawnActorArg(0xC8, 5, arg0);
    SpawnActorArg(0xC8, 6, arg0);
}

s32 func_sc03_028_80183104(StageActor *arg0) {
    StageActor *temp_a0;
    void *temp_a1;
    ModelObj *temp_s1;
    s32 k;

    k = 0x1000;
    arg0->pos[0].w = (s32) arg0->parent->pos[0].w;
    temp_s1 = arg0->model;
    arg0->pos[1].w = (s32) (arg0->parent->pos[1].w + 0xFF000000);
    temp_a1 = (((u16)arg0->param & 3) * 0xC) + &D_sc03_028_80190078;
    arg0->pos[2].w = (s32) arg0->parent->pos[2].w;
    temp_s1->rot.vz = (u16) AF(temp_a1, u16, 8);
    temp_s1->rot.vy = (u16) ((u16)temp_s1->rot.vy + AF(temp_a1, u16, 0xA));
    ApplyMatrixSV((s32) (AF(arg0, void *, 0x20) + 0x34), (s32) temp_a1, (s32) ((u8 *)arg0 + 0x50));
    if (arg0->workFE == 0) {
        temp_a0 = arg0->parent;
        if ((temp_a0 == NULL) || ((s16)temp_a0->id != arg0->unkFC) || (temp_a0->state != 0x1D)) {
            arg0->workFE = 1;
        }
    } else {
        FreeActor((s32) arg0);
        return;
    }
    temp_s1->scale.vz = k;
    temp_s1->scale.vy = k;
    temp_s1->scale.vx = k;
    return k;
}

void func_sc03_028_80183228(StageActor *arg0) {
    D_sc03_028_801900B8[arg0->state]();
}

void func_sc03_028_80183264(u8 *o) {
    s32 ang;
    s16 b;
    s16 c;
    s32 t;
    s32 d;

    ang = AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF;
    b = ang;
    AF(o, s16, 0xA) = AF(AF(o, u8 *, 0x64), s16, 0xA) - 0x28;
    c = ang;
    AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC);
    AF(o, s32, 0xC) -= rcos(c) << 9;
    AF(o, s32, 4) = AF(AF(o, u8 *, 0x64), s32, 4);
    AF(o, s32, 4) -= rsin(c) << 9;
    if (rsin(c) <= 0) {
        AF(o, s32, 4) += -0xC0000;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x30;
    if (D_80126B66 > 0x3C0 && (ang < 0x400 || ang > 0xC00)) {
        if (c > 0xC00) {
            b = 0x1000 - ang;
        }
        t = 0x400 - b;
        d = t * 0x68;
        AF(o, s16, 0xA) += d / 1024;
        AF(o, s16, 0xE) += d / 1024;
        AF(AF(o, u8 *, 0x20), s16, 0x10) -= t / 16;
    }
}

void func_sc03_028_801833D8(u8 *o) {
    AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
    if (--AF(o, s32, 0x1C) == 0) {
        AF(o, s32, 0x1C) = 0;
        StopWithGravity();
        UpdateModelZYX(o);
        SetLocalVelocity(o, &D_sc03_028_801901A8);
        AF(o, s16, 2) = 3;
    }
    if (ActorSegmentDamagesPlayer(o, &D_sc03_028_801901B4, &D_sc03_028_801901BC, 0x10) == 1) {
        s16 *q = &g_PlayerHitKind;
        *q |= 0x4000;
    }
    func_sc03_028_80184E9C(o, &D_sc03_028_801901B4, &D_sc03_028_801901BC);
    if (ActorSegmentDamagesPlayer(o, &D_sc03_028_801901B4, &D_sc03_028_801901C4, 0x10) == 1) {
        s16 *q = &g_PlayerHitKind;
        *q |= 0x4000;
    }
    func_sc03_028_80184E9C(o, &D_sc03_028_801901B4, &D_sc03_028_801901C4);
    if (ActorSegmentDamagesPlayer(o, &D_sc03_028_801901B4, &D_sc03_028_801901CC, 0x10) == 1) {
        s16 *q = &g_PlayerHitKind;
        *q |= 0x4000;
    }
    func_sc03_028_80184E9C(o, &D_sc03_028_801901B4, &D_sc03_028_801901CC);
    if (AF(o, s32, 0x1C) & 1) {
        SpawnActor(0xFD, o);
        func_sc03_028_80180B44(o, 4);
    }
    func_sc03_028_80183264(o);
}

void func_sc03_028_80183580(StageActor *o) {
    o->timer++;
    o->model->rot.vy = (u16)o->parent->model->rot.vy;
    if (o->timer == 4) {
        PlaySoundId(4, 0x55C);
        FreeActor(o);
        return;
    }
    o->pos[0].w += o->vel[0];
    o->pos[2].w += o->vel[1];
    o->pos[1].h.i += 2;
    o->model->scale.vx += 0x400;
    if (ActorSegmentDamagesPlayer(o, &D_sc03_028_801901B4, &D_sc03_028_801901BC, 0x10) == 1) {
        s16 *q = &g_PlayerHitKind;
        *q |= 0x4000;
    }
    func_sc03_028_80184E9C(o, &D_sc03_028_801901B4, &D_sc03_028_801901BC);
    if (ActorSegmentDamagesPlayer(o, &D_sc03_028_801901B4, &D_sc03_028_801901C4, 0x10) == 1) {
        s16 *q = &g_PlayerHitKind;
        *q |= 0x4000;
    }
    func_sc03_028_80184E9C(o, &D_sc03_028_801901B4, &D_sc03_028_801901C4);
    if (ActorSegmentDamagesPlayer(o, &D_sc03_028_801901B4, &D_sc03_028_801901CC, 0x10) == 1) {
        s16 *q = &g_PlayerHitKind;
        *q |= 0x4000;
    }
    func_sc03_028_80184E9C(o, &D_sc03_028_801901B4, &D_sc03_028_801901CC);
}

void func_sc03_028_80183728(StageActor *o) {
    if ((u16)(o->parent->state - 8) >= 2) {
        FreeActor(o);
        PlaySoundId(4, 0x55C);
        return;
    }
    o->unkFC++;
    o->workFE++;
    MoveImage(&D_sc03_028_801900F8[(s16)(o->unkFC % 8)], 0x2C0, 0x100);
    MoveImage(&D_sc03_028_80190138[(s16)(o->workFE % 11)], 0x300, 0x1A0);
    MoveImage(&D_sc03_028_80190190[(s16)(o->workFE % 3)], 0x361, 0x100);
    D_sc03_028_801901D4[o->state](o);
}

void func_sc03_028_801838B0(u8 *o) {
    SV8 a;
    SV8 b;
    s32 i;

    AF(o, u8, 0xC0) = 1;
    SetScript(o, &D_sc03_028_8018BD04);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12) + (rand() & 0xFF) - 0x80;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x10);
    UpdateModelZYX(o);
    SetLocalVelocity(o, &D_sc03_028_8019024C);
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    for (i = 0; i < 16; i++) {
        b.x = (AF(o, s32, 4) + AF(o, s32, 0x10) * i) >> 16;
        b.y = (AF(o, s32, 8) + AF(o, s32, 0x14) * i) >> 16;
        b.z = (AF(o, s32, 0xC) + AF(o, s32, 0x18) * i) >> 16;
        if (TraceMapTwoCells(1, &a, &b) != 0) {
            break;
        }
        a.x = b.x;
        a.y = b.y;
        a.z = b.z;
    }
    AF(o, s16, 6) = a.x;
    AF(o, s16, 0xE) = a.z;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
}

void func_sc03_028_80183A38(StageActor *arg0) {
    D_sc03_028_8019025C[arg0->state]();
}

void func_sc03_028_80183A74(void *arg0) {
    if (SetupActor(arg0, &D_sc03_028_80190268) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = 1;
        SetScript(arg0, &D_sc03_028_8018BD04);
        AF(arg0, s16, 2) = 1;
        StopWithGravity(arg0);
        switch (AF(arg0, s16, 0x70)) {
        case 0:
            AF(AF(arg0, void *, 0x20), s16, 0x12) = AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + (rand() & 0x3FF) - 0xA00;
            UpdateModelZYX(arg0);
            SetLocalVelocity(arg0, &D_sc03_028_8019029C);
            AF(arg0, s16, 0x16) = -(rand() & 0xF) - 4;
            break;
        case 1:
            AF(arg0, s16, 0x16) = -(rand() & 0xF) - 4;
            AF(arg0, s32, 0x10) = (rand() & 3) + 1;
            AF(arg0, s32, 0x18) = (rand() & 3) + 1;
            break;
        case 2:
            AF(arg0, s16, 0x16) = -(rand() & 0x1F) - 4;
            AF(arg0, s16, 0x12) = (rand() & 7) - 4;
            AF(arg0, s16, 0x1A) = (rand() & 7) - 4;
            break;
        case 3:
            AF(arg0, s32, 0x10) = (rand() & 3) + 1;
            AF(arg0, s32, 0x18) = (rand() & 3) + 1;
            AF(arg0, s16, 0x16) = -(rand() & 0x1F) - 4;
            break;
        case 4:
            AF(AF(arg0, void *, 0x20), s16, 0x12) = AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + (rand() & 0x3FF) - 0xA00;
            UpdateModelZYX(arg0);
            SetLocalVelocity(arg0, &D_sc03_028_8019029C);
            AF(arg0, s16, 0x16) = -(rand() & 7) - 4;
            AF(arg0, s16, 0xA) -= 0x40;
            AF(arg0, s32, 4) += rsin(AF(AF(AF(arg0, void *, 0x64), void *, 0x20), s16, 0x12) + 0xD00) << 10;
            AF(arg0, s32, 0xC) += rcos(AF(AF(AF(arg0, void *, 0x64), void *, 0x20), s16, 0x12) + 0xD00) << 10;
            break;
        case 5:
            AF(AF(arg0, void *, 0x20), s16, 0x12) = AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + (rand() & 0x3FF) - 0xA00;
            UpdateModelZYX(arg0);
            SetLocalVelocity(arg0, &D_sc03_028_8019029C);
            AF(arg0, s16, 0x16) = -(rand() & 7) - 4;
            AF(arg0, s16, 0xA) -= 0x40;
            AF(arg0, s32, 4) += rsin(AF(AF(AF(arg0, void *, 0x64), void *, 0x20), s16, 0x12) + 0x300) << 10;
            AF(arg0, s32, 0xC) += rcos(AF(AF(AF(arg0, void *, 0x64), void *, 0x20), s16, 0x12) + 0x300) << 10;
            break;
        }
        func_8001CA1C(AF(arg0, void *, 0x20), &D_sc03_028_801902AC);
        SetScript(arg0, &D_sc03_028_801902B8);
        AF(AF(arg0, void *, 0x20), s32, 4) |= 0x8000000;
        AF(AF(arg0, void *, 0x20), s16, 0x14) = rand();
        AF(arg0, s16, 0xFC) = 60;
    }
}

void func_sc03_028_80183DC8(StageActor *arg0) {
    D_sc03_028_801902C0[arg0->state]();
}

void func_sc03_028_80183E04(u8 *arg0) {
    u8 *pp[4];
    SV8 sv;
    s16 x[5];
    s16 y[5];
    s32 flag;
    s32 sxy;
    s32 p;
    u8 *m;
    u8 *prim;
    u8 *q;
    u32 *ot;
    s32 otz;
    s32 d;
    s32 k;
    s32 i;
    s32 n;
    s16 sx;
    s16 sy;

    m = AF(arg0, u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&D_sc03_028_8018F968, &sv, &flag);
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    otz = RotTransPers(&sv, &sxy, &p, &flag);
    if (otz <= 0) return;
    if (flag < 0) return;
    sx = ((s16 *)&sxy)[0];
    sy = ((s16 *)&sxy)[1];
    d = ((g_CameraProj + 500) * 24) / (otz * 4);
    ot = g_WorldOtOrg[D_800B9A02].ot + otz;
    x[2] = sx;
    y[2] = sy;
    k = (d * 179) >> 8;
    x[0] = sx - d;
    x[1] = sx - k;
    x[3] = sx + k;
    x[4] = sx + d;
    y[0] = sy - d;
    y[1] = sy - k;
    y[3] = sy + k;
    y[4] = sy + d;
    prim = AllocPrim(0x9C);
    if (prim == 0) return;
    SetDrawMode(prim, 0, 0, GetTPage(0, 1, 0, 0) & 0xFFFF, 0);
    pp[0] = prim + 0xC;
    pp[1] = prim + 0x30;
    pp[2] = prim + 0x54;
    pp[3] = prim + 0x78;
    q = pp[0];
    for (n = 0; n < 4; n++, q += 0x24) {
        i = n * 4;
        AF(q, s32, 4) = D_sc03_028_801902C8[D_sc03_028_801902F4[i]];
        AF(q, s32, 0xC) = D_sc03_028_801902C8[D_sc03_028_801902F4[i + 1]];
        AF(q, s32, 0x14) = D_sc03_028_801902C8[D_sc03_028_801902F4[i + 2]];
        AF(q, s32, 0x1C) = D_sc03_028_801902C8[D_sc03_028_801902F4[i + 3]];
        AF(q, u8, 3) = 8;
        AF(q, u8, 7) = 0x3A;
        AF(q, s16, 8) = x[D_sc03_028_801902D4[i]];
        AF(q, s16, 0x10) = x[D_sc03_028_801902D4[i + 1]];
        AF(q, s16, 0x18) = x[D_sc03_028_801902D4[i + 2]];
        AF(q, s16, 0x20) = x[D_sc03_028_801902D4[i + 3]];
        AF(q, s16, 0xA) = y[D_sc03_028_801902E4[i]];
        AF(q, s16, 0x12) = y[D_sc03_028_801902E4[i + 1]];
        AF(q, s16, 0x1A) = y[D_sc03_028_801902E4[i + 2]];
        AF(q, s16, 0x22) = y[D_sc03_028_801902E4[i + 3]];
        AddPrim(ot, q);
    }
    AddPrim(ot, prim);
}

void func_sc03_028_80184228(void) {
}

void func_sc03_028_80184230(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v1;

    if (arg0->parent->state == 0xD) {
        if (ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc03_028_80190314, (s32) &D_sc03_028_8019031C, 0xC) == 1) {
            g_PlayerHitKind = 0x6009;
        }
        func_sc03_028_80184E9C((s32) arg0, (s32) &D_sc03_028_80190314, (s32) &D_sc03_028_8019031C);
        temp_v1 = arg0->model;
        temp_v1->rot.vy = (u16) ((u16)temp_v1->rot.vy + 0x200);
        D_sc03_028_80190370[arg0->state](arg0);
        return;
    }
    FreeActor((s32) arg0, arg1);
}

void func_sc03_028_8018430C(StageActor *o) {
    u8 *s;
    SV8 unused;
    s16 d;

    s = (u8 *)o->ext0;
    if ((s32)o->parent->model->unk04 < 0) {
        AF(s, s32, 4) |= 0x80000000;
    } else {
        ShadowFollow(o);
    }
    AF(s, s16, 0x14) = o->parent->model->rot.vy;
    d = AF(s, u16, 0xA) - (u16)o->parent->pos[1].h.i;
    if (d < -0x20 || d > 0x400) {
        AF(s, s16, 0x1A) = 0;
        AF(s, s16, 0x18) = 0;
    } else {
        AF(s, s16, 0x18) = AF(s, s16, 0x1A) = -0x8000 - d * 32;
    }
}

s32 func_sc03_028_801843D8(o)
    s32 o;
{
    s32 p = func_80143994(o, 0x3FFF);
    AF(p, s16, 0) = 0x93;
    return p;
}

void func_sc03_028_801843FC(u8 *arg0) {
    s16 temp_v0;
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    func_8001CD50(temp_s0, (s32) &D_sc03_028_801903C0);
    AF(temp_s0, s16, 0x10) = 0x400;
    AF(temp_s0, s16, 0x1E) = 0;
    AF(temp_s0, s16, 0x12) = 0;
    AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) | 0x50000000);
    temp_v0 = rand() & 0x1FF;
    AF(temp_s0, s16, 0x14) = temp_v0;
    AF(temp_s0, s16, 0x14) = (s16) (temp_v0 + AF(arg0, s32, 0x2C));
    AF(arg0, s32, 0x2C) = 0x100;
    AF(temp_s0, s16, 0x18) = 0;
    AF(temp_s0, s16, 0x1A) = 0;
    AF(temp_s0, s16, 0x1C) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_028_8018449C(u8 *arg0) {
    s32 var_v1;
    u16 temp_v0;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a1, u16, 0x18) + AF(arg0, s32, 0x2C);
    AF(temp_a1, u16, 0x18) = temp_v0;
    if ((s16) temp_v0 >= 0x2000) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    AF(temp_a1, u16, 0x1A) = (u16) (AF(temp_a1, u16, 0x1A) + AF(arg0, s32, 0x2C));
    var_v1 = AF(arg0, s32, 0x2C);
    if (var_v1 < 0) {
        var_v1 += 3;
    }
    AF(temp_a1, u16, 0x1C) = (u16) (AF(temp_a1, u16, 0x1C) + (var_v1 >> 2));
    AF(arg0, s32, 0x2C) = (s32) (AF(arg0, s32, 0x2C) + 0x20);
}

void func_sc03_028_80184524(u8 *arg0) {
    D_sc03_028_80190400[AF(arg0, u16, 2)]();
}

void func_sc03_028_80184560(void) {
}

void func_sc03_028_80184568(StageActor *arg0) {
    D_sc03_028_8019040C[arg0->state]();
}

void func_sc03_028_801845A4(StageActor *o) {
    s16 v;
    s16 w;
    s32 k;

    if (AF(o, s16, 0x12) < 0) {
        o->workFE += AF(o, s16, 0x12);
    } else {
        o->workFE -= AF(o, s16, 0x12);
    }
    w = o->workFE;
    if (w > 0) {
        o->pos[0].h.i += AF(o, u16, 0x12);
        return;
    }
    if (w < 0) {
        if (AF(o, s16, 0x12) < 0) {
            o->pos[0].h.i -= w;
        } else {
            o->pos[0].h.i += w;
        }
    }
    if (o->unkFC != 0) {
        o->timer = 10;
    } else if (o->parent->state == 0x1D) {
        o->timer = 10;
    } else {
        AF(o, s32, 0x1C) = 0x3C;
        v = AF(D_sc03_028_801EC44C, s16, 0x76);
        if (v > 0x50) {
            k = (s16)(o->work102 % 3);
        } else if (v > 0x28) {
            k = (s16)(o->work102 % 4) + 3;
        } else {
            k = (s16)(o->work102 % 5) + 7;
        }
        o->work102 = ((u16)o->work102 + 1) & 7;
        k = D_sc03_028_80190430[k];
        if (k == 4) {
            if (FindActorByKind(0xCB) == 0) {
                AF(o, s16, 0x12) >>= 1;
            } else {
                k = 3;
            }
        }
        if (AF(o, s16, 0x12) < 0) {
            o->workE4 = k;
            o->workE8 = k;
        } else {
            o->message = k;
            o->workE0 = k;
        }
    }
    o->state = 1;
}

void func_sc03_028_801847E8(StageActor *o) {
    switch (o->workF8) {
    case 1:
        AF(o, s32, 0xDC) ^= 1;
        break;
    case 2:
        o->workE0 ^= 1;
        break;
    case 3:
        o->workE4 ^= 1;
        break;
    case 4:
        o->workE8 ^= 1;
        break;
    case 5:
        o->parent->state = 1;
        break;
    case 6:
        o->parent->state = 2;
        break;
    case 7:
        o->message = 6;
        o->workE0 = 6;
        o->workE4 = 6;
        o->workE8 = 6;
        break;
    case 8:
        o->parent->state = 0x28;
        break;
    case 9:
        func_800D0C48(1);
        break;
    case 10:
        o->message = 7;
        o->workE0 = 7;
        o->workE4 = 7;
        o->workE8 = 7;
        break;
    case 11:
        o->message = 8;
        o->workE0 = 8;
        o->workE4 = 8;
        o->workE8 = 8;
        break;
    }
    o->workF8 = 0;
    if (UpdateScript(o) != 0) {
        EndEvent(o);
        o->state = 1;
        o->work100 = 0;
        func_80175414();
    }
}

void func_sc03_028_80184914(StageActor *o) {
    switch (o->workF8) {
    case 1:
        AF(o, s32, 0xDC) ^= 1;
        break;
    case 2:
        o->workE0 ^= 1;
        break;
    case 3:
        o->workE4 ^= 1;
        break;
    case 4:
        o->workE8 ^= 1;
        break;
    case 5:
        o->parent->state = 1;
        break;
    case 6:
        o->parent->state = 2;
        break;
    case 7:
        o->message = 6;
        o->workE0 = 6;
        o->workE4 = 6;
        o->workE8 = 6;
        break;
    case 8:
        o->parent->state = 0x28;
        break;
    case 9:
        func_800D0C48(1);
        break;
    case 10:
        o->message = 7;
        o->workE0 = 7;
        o->workE4 = 7;
        o->workE8 = 7;
        break;
    case 11:
        o->message = 8;
        o->workE0 = 8;
        o->workE4 = 8;
        o->workE8 = 8;
        break;
    }
    o->workF8 = 0;
    if (UpdateScript(o) != 0) {
        EndEvent(o);
        o->state--;
    }
}

void func_sc03_028_80184A40(StageActor *arg0) {
    s32 temp_v1;
    u16 temp_a0;

    if (arg0->work100 == 0) {
        temp_v1 = GetPlayerByte1C7() & 0x7FFFFFFF;
        if (temp_v1 == 2) {
            temp_a0 = arg0->state;
            if ((u32) (temp_a0 - 3) >= 2U) {
                arg0->stateCount = temp_a0;
                arg0->state = 3U;
                arg0->message = temp_v1;
                arg0->workE0 = temp_v1;
                arg0->workE4 = temp_v1;
                arg0->workE8 = temp_v1;
            }
        } else if (arg0->parent->state == 0x1D) {
            arg0->message = 1;
            arg0->workE0 = 1;
            arg0->workE4 = 1;
            arg0->workE8 = 1;
        } else {
            arg0->message = 0;
            arg0->workE0 = 0;
            arg0->workE4 = 0;
            arg0->workE8 = 0;
        }
    }
    D_sc03_028_80190460[arg0->state](arg0);
}

void func_sc03_028_80184B28(StageActor *o) {
    StageActor *p = o->parent;
    s16 v;
    s16 a;

    if (p->model->scale.vy < 0x1801) {
        if (p->unkFC > 0) {
            SpawnActor(0xC4, o);
            o->parent->unkFC--;
        } else {
            p->unkFC = 0;
            FreeActor(o);
        }
    } else {
        AF(o, s16, 6) = p->pos[0].h.i;
        v = D_80126B66;
        if (v > 0x3C0) {
            v -= 0x3C0;
            a = v * 2;
            o->pos[1].h.i = o->parent->pos[1].h.i - (rcos(a) >> 9);
            o->pos[2].h.i = o->parent->pos[2].h.i - (rsin(a) >> 9);
        } else {
            o->pos[1].h.i = o->parent->pos[1].h.i - 8;
            o->pos[2].h.i = o->parent->pos[2].h.i;
        }
    }
}

void func_sc03_028_80184C54(StageActor *arg0) {
    D_sc03_028_801904A0[arg0->state]();
}

void BossHitSmall(u8 *o) {
    u8 *p;
    s32 hit;
    s32 k;
    s16 x, y, z;
    s32 n;

    k = 0x1D;
    p = D_sc03_028_801EC44C;
    if (p != 0 && AF(o, s16, 0xA) > AF(p, s16, 0xA) - 0x60 && AF(o, s16, 0xA) < AF(p, s16, 0xA) + 0x10
        && AF(o, s16, 6) < AF(p, s16, 6) + 0x80 && AF(p, s16, 6) - 0x80 < AF(o, s16, 6)
        && AF(o, s16, 0xE) < AF(p, s16, 0xE) + 0x80 && AF(p, s16, 0xE) - 0x80 < AF(o, s16, 0xE)) {
        hit = 1;
        AF(p, u16, 0x5C) |= 1;
        AF(((struct { u8 *v; } *)&D_sc03_028_801EC44C)->v, s16, 0x5E) = k;
    } else {
        hit = 0;
    }
    if (hit) {
        n = D_sc03_028_801EC448;
        x = AF(o, s16, 6);
        y = AF(o, s16, 0xA);
        z = AF(o, s16, 0xE);
        D_sc03_028_801EC448 = n - 1;
        AF(o, s16, 0x7C) = x;
        AF(o, s16, 0x7E) = y;
        AF(o, s16, 0x80) = z;
        ShowDamage(o, 0xA);
    }
    if (MoveCollide(o) != 0 || hit || ActorTouchesPlayer(o, 0x30, 0xA) != 0) {
        AF(AF(o, u8 *, 0x20), s32, 0x20) = (s32) &D_sc03_028_801904C4;
        SetScript(o, &D_sc03_028_8019053C);
        AF(o, s16, 2) = 2;
        AF(o, s32, 0x1C) = 0xA;
        PlaySoundId(0x598, 0);
    }
}

void func_sc03_028_80184E00(StageActor *arg0) {
    D_sc03_028_80190594[arg0->state]();
}

void func_sc03_028_80184E3C(StageActor *arg0, s32 arg1) {
    if (arg0->hitState & 1) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    D_sc03_028_801905BC[arg0->state]();
}

void func_sc03_028_80184E9C(u8 *o, SV8 *a, SV8 *b) {
    u8 *e;
    u8 *m;
    SV8 v0;
    SV8 v1;
    s32 flag;
    e = (u8 *)FindActorByKind(0xCB);
    if (e != 0 && AF(e, u16, 0x5C) != 0 && !(AF(e, u16, 0x5C) & 1)) {
        m = AF(o, u8 *, 0x20) + 0x34;
        gte_SetRotMatrix(m);
        gte_SetTransMatrix(m);
        RotTransSV(a, &v0, &flag);
        RotTransSV(b, &v1, &flag);
        if (PathHitsModel(AF(e, u8 *, 0x20), AF(e, s32, 0x58), &v0, &v1) != 0) {
            AF(e, s16, 0x5E) = 0x1D;
            AF(e, u16, 0x5C) |= 1;
        }
    }
}

void func_sc03_028_80184FAC(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc03_028_80184FB4(u8 *arg0, s32 arg1) {
    void *temp_v0;

    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((AF(arg0, u16, 0x62) + 0x800) & 0xFFF);
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x14) = 0;
    AF(temp_v0, s16, 0x10) = 0;
    UpdateModelZYX((s32) arg0, arg1);
    StopWithGravity((s32) arg0);
    AF(arg0, s16, 0x5C) = 0;
    SetLocalVelocity((s32) arg0, (s32) &D_sc03_028_801905CC);
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 2) = 5;
}

void func_sc03_028_80185028(u8 *arg0, s32 arg1) {
    void *temp_v0;

    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((AF(arg0, u16, 0x62) + 0x800) & 0xFFF);
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x14) = 0;
    AF(temp_v0, s16, 0x10) = 0;
    UpdateModelZYX((s32) arg0, arg1);
    StopWithGravity((s32) arg0);
    SetLocalVelocity((s32) arg0, (s32) &D_sc03_028_801905D8);
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 2) = 5;
}

void func_sc03_028_8018509C(StageActor *arg0) {
    s16 temp_v1;
    s32 var_s0;
    StageActor *temp_a0;

    var_s0 = 0;
    do {
        SpawnActorArg(0xCC, var_s0 << 9, arg0);
        var_s0 += 1;
    } while (var_s0 < 8);
    if ((u16) arg0->state < 2U) {
        arg0->parent->unkFC = 0;
        temp_a0 = arg0->parent;
        temp_v1 = AF(temp_a0, s16, 0x12);
        if (temp_v1 < 0) {
            if (temp_v1 != -4) {
                AF(temp_a0, s16, 0x12) = -4;
            }
        } else if (temp_v1 != 4) {
            AF(temp_a0, s16, 0x12) = 4;
        }
    }
    FreeActor(arg0);
    PlaySoundId(0x62A, 0);
}

void FallingObjHitBig(u8 *o) {
    s32 flag;
    u8 *p;
    s32 k;
    s32 t;
    u16 x, y, z;
    if (MoveCollide(o) != 0) {
        StartCameraShake(&D_sc03_028_8018C158);
        func_sc03_028_80180B44(o, 2);
        if (AF(o, s16, 0xA) < -0x10) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 2) = 6;
        } else {
            AF(o, u8, 0xC0) = 1;
            AF(o, s32, 0x58) = (s32)&D_sc03_028_80190600 | 0x40000000 | 0x20000000;
            AF(o, void *, 0xBC) = &D_sc03_028_80190610;
            AF(o, u16, 0x5C) = 0xCA00;
            AF(o, s16, 2) = 4;
            AF(o, s32, 0xB4) = 0;
            AF(o, u8, 0x75) = 0;
            AF(o, void *, 0x78) = &D_sc03_028_80190638;
            AF(o, s32, 0xC4) |= 2;
            PlaySoundId(0x62B, 0);
        }
    }
    ActorTouchesPlayer(o, 0x30, 0xA);
    p = ((struct { u8 *p; } *)&D_sc03_028_801EC44C)->p;
    k = 0x1F;
    if (p != 0 && AF(o, s16, 0xA) > AF(p, s16, 0xA) - 0x60 && AF(o, s16, 0xA) < AF(p, s16, 0xA) + 0x10
        && AF(o, s16, 6) < AF(p, s16, 6) + 0x80 && AF(p, s16, 6) - 0x80 < AF(o, s16, 6)
        && AF(o, s16, 0xE) < AF(p, s16, 0xE) + 0x80 && AF(p, s16, 0xE) - 0x80 < AF(o, s16, 0xE)) {
        AF(p, u16, 0x5C) |= 1;
        AF(D_sc03_028_801EC44C, s16, 0x5E) = k;
        flag = 1;
    } else {
        flag = 0;
    }
    if (flag) {
        PlaySoundId(0x62B, 0);
        AF(o, s16, 2) = 3;
        t = D_sc03_028_801EC448 - 10;
        x = AF(o, u16, 6);
        y = AF(o, u16, 0xA);
        z = AF(o, u16, 0xE);
        D_sc03_028_801EC448 = t;
        AF(o, u16, 0x7C) = x;
        AF(o, u16, 0x7E) = y;
        AF(o, u16, 0x80) = z;
        ShowDamage(o, 0x64);
        func_sc03_028_80180B44(o, 2);
    }
}

void BossHitMid(u8 *o) {
    s32 i;
    s32 hit;
    u8 *p;
    s32 n;
    s16 x;
    s16 y;
    s16 z;
    s32 d;

    if (MoveCollide(o) & 0x2000) {
        StartCameraShake(&D_sc03_028_8018C158);
        func_sc03_028_80180B44(o, 2);
        for (i = 0; i < 8; i++) {
            SpawnActorArg(0xCC, i << 9, o);
        }
        FreeActor(o);
        PlaySoundId(0x62A, 0);
        return;
    }
    p = (u8 *) ((UXY *) &D_sc03_028_801EC44C)->w;
    n = 0x20;
    if (p != 0 && AF(o, s16, 0xA) > AF(p, s16, 0xA) - 0x60 && AF(o, s16, 0xA) < AF(p, s16, 0xA) + 0x10
        && AF(o, s16, 6) < AF(p, s16, 6) + 0x80 && AF(p, s16, 6) - 0x80 < AF(o, s16, 6)
        && AF(o, s16, 0xE) < AF(p, s16, 0xE) + 0x80 && AF(p, s16, 0xE) - 0x80 < AF(o, s16, 0xE)) {
        AF(p, u16, 0x5C) |= 1;
        AF(D_sc03_028_801EC44C, s16, 0x5E) = n;
        hit = 1;
    } else {
        hit = 0;
    }
    if (hit) {
        PlaySoundId(0x62B, 0);
        AF(o, s16, 2) = 3;
        d = D_sc03_028_801EC448;
        x = AF(o, s16, 6);
        y = AF(o, s16, 0xA);
        z = AF(o, s16, 0xE);
        D_sc03_028_801EC448 = d - 4;
        AF(o, s16, 0x7C) = x;
        AF(o, s16, 0x7E) = y;
        AF(o, s16, 0x80) = z;
        ShowDamage(o, 0x28);
        func_sc03_028_80180B44(o, 2);
    }
}

void func_sc03_028_801854D8(StageActor *arg0) {
    D_sc03_028_8019066C[arg0->state]();
}

void func_sc03_028_80185514(StageActor *arg0) {
    D_sc03_028_801906C8[arg0->state]();
}

void func_sc03_028_80185550(StageActor *arg0) {
    D_sc03_028_80190724[arg0->state]();
}

void func_sc03_028_8018558C(StageActor *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x5E) = 0;
    arg0->react = 0;
    AF(arg0, u16, 2) = (u16) (u16)arg0->work10A;
    AF(arg0, s16, 0xDE) = (s16) (g_ClockMinutes + 0x3C);
    SpawnActorArg(0xC8, 4, (s32) arg0);
    SpawnActorArg(0xC8, 5, (s32) arg0);
    SpawnActorArg(0xC8, 6, (s32) arg0);
    PlaySoundId(0xBF2, 0);
    PlaySoundId(0x563, 0);
}

void func_sc03_028_8018561C(u8 *arg0) {
    s16 t;

    t = AF(arg0, u16, 0xFC) + 1;
    AF(arg0, u16, 0xFC) = t;
    if (t < 9) {
        QueueImage(D_sc03_028_801907B0[t >> 1]);
        return;
    }
    AF(arg0, s16, 2) = 2;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5C) = 0x8000;
}

void func_sc03_028_8018568C(StageActor *o) {
    ModelObj *p;
    s32 v;

    switch ((s32)o->parent->message) {
    case 0:
        QueueImage(&D_sc03_028_801CF87C);
        break;
    case 1:
        QueueImage(D_sc03_028_80190760[(s16)((o->unkFC >> 1) % 8)]);
        break;
    case 2:
        o->unkFC = 0;
        o->state = 4;
        break;
    case 3:
        o->workFE = 0xC3;
        o->state = 3;
        o->unkFC = 0;
        break;
    case 4:
        o->workFE = 0xCB;
        o->state = 3;
        o->unkFC = 0;
        break;
    case 5:
        o->workFE = 0xC5;
        o->state = 3;
        o->unkFC = 0;
        break;
    case 6:
        p = o->model;
        v = p->scale.vx;
        p->scale.vx = -v;
        o->timer = 0x20;
        o->state = 6;
        break;
    case 7:
    case 8:
        o->parent->message = 0;
        break;
    }
}

void func_sc03_028_801857AC(StageActor *arg0) {
    arg0->unkFC = (u16) (((u16)arg0->unkFC + 1) & 0xFFF);
    D_sc03_028_801907E4[arg0->state]();
}

void func_sc03_028_801857F4(u8 *arg0) {
    s16 t;

    t = AF(arg0, u16, 0xFC) + 1;
    AF(arg0, u16, 0xFC) = t;
    if (t < 9) {
        QueueImage(D_sc03_028_80190884[t >> 1]);
        return;
    }
    AF(arg0, s16, 2) = 2;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5C) = 0x8000;
}

void func_sc03_028_80185864(StageActor *o) {
    switch (o->parent->workE0) {
    case 0:
        QueueImage(&D_sc03_028_801D533C);
        break;
    case 1:
        QueueImage(D_sc03_028_80190834[(s16)(((s16)(u16)o->unkFC >> 1) % 8)]);
        break;
    case 2:
        o->unkFC = 0;
        o->state = 4;
        break;
    case 3:
        o->workFE = 0xC3;
        o->state = 3;
        o->unkFC = 0;
        break;
    case 4:
        o->workFE = 0xCB;
        o->state = 3;
        o->unkFC = 0;
        break;
    case 5:
        o->workFE = 0xC5;
        o->state = 3;
        o->unkFC = 0;
        break;
    case 6:
        { u8 *p = (u8 *)o->model; s32 v = AF(p, s16, 0x18); AF(p, s16, 0x18) = -v; }
        o->timer = 0x20;
        o->state = 6;
        break;
    case 7:
    case 8:
        o->parent->workE0 = 0;
        break;
    }
}

void func_sc03_028_80185984(StageActor *arg0) {
    arg0->unkFC = (u16) (((u16)arg0->unkFC + 1) & 0xFFF);
    D_sc03_028_801908A8[arg0->state]();
}

void func_sc03_028_801859CC(u8 *arg0) {
    s16 t;

    t = AF(arg0, u16, 0xFC) + 1;
    AF(arg0, u16, 0xFC) = t;
    if (t < 9) {
        QueueImage(D_sc03_028_80190948[t >> 1]);
        return;
    }
    AF(arg0, s16, 2) = 2;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5C) = 0x8000;
}

void func_sc03_028_80185A3C(StageActor *o) {
    switch (o->parent->workE4) {
    case 0:
        QueueImage(&D_sc03_028_801E08BC);
        break;
    case 1:
        QueueImage(D_sc03_028_801908F8[(s16)(((s16)(u16)o->unkFC >> 1) % 8)]);
        break;
    case 2:
        o->unkFC = 0;
        o->state = 4;
        break;
    case 3:
        o->workFE = 0xC3;
        o->state = 3;
        o->unkFC = 0;
        break;
    case 4:
        o->workFE = 0xCB;
        o->state = 3;
        o->unkFC = 0;
        break;
    case 5:
        o->workFE = 0xC5;
        o->state = 3;
        o->unkFC = 0;
        break;
    case 6:
        { u8 *p = (u8 *)o->model; s32 v = AF(p, s16, 0x18); AF(p, s16, 0x18) = -v; }
        o->timer = 0x20;
        o->state = 6;
        break;
    case 7:
    case 8:
        o->parent->workE4 = 0;
        break;
    }
}

void func_sc03_028_80185B5C(StageActor *arg0) {
    arg0->unkFC = (u16) (((u16)arg0->unkFC + 1) & 0xFFF);
    D_sc03_028_8019096C[arg0->state]();
}

void func_sc03_028_80185BA4(u8 *arg0) {
    s16 t;

    t = AF(arg0, u16, 0xFC) + 1;
    AF(arg0, u16, 0xFC) = t;
    if (t < 9) {
        QueueImage(D_sc03_028_80190A0C[t >> 1]);
        return;
    }
    AF(arg0, s16, 2) = 2;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5C) = 0x8000;
}

void func_sc03_028_80185C14(StageActor *o) {
    switch (o->parent->workE8) {
    case 0:
        QueueImage(&D_sc03_028_801DADFC);
        break;
    case 1:
        QueueImage(D_sc03_028_801909BC[(s16)(((s16)(u16)o->unkFC >> 1) % 8)]);
        break;
    case 2:
        o->unkFC = 0;
        o->state = 4;
        break;
    case 3:
        o->workFE = 0xC3;
        o->state = 3;
        o->unkFC = 0;
        break;
    case 4:
        o->workFE = 0xCB;
        o->state = 3;
        o->unkFC = 0;
        break;
    case 5:
        o->workFE = 0xC5;
        o->state = 3;
        o->unkFC = 0;
        break;
    case 6:
        { u8 *p = (u8 *)o->model; s32 v = AF(p, s16, 0x18); AF(p, s16, 0x18) = -v; }
        o->timer = 0x20;
        o->state = 6;
        break;
    case 7:
    case 8:
        o->parent->workE8 = 0;
        break;
    }
}

void func_sc03_028_80185D34(StageActor *arg0) {
    arg0->unkFC = (u16) (((u16)arg0->unkFC + 1) & 0xFFF);
    D_sc03_028_80190A30[arg0->state]();
}

void func_sc03_028_80185D7C(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_028_80190A4C);
    SetScript(arg0, (s32) &D_sc03_028_80190ADC);
    AF(arg0, s16, 2) = 1;
    StopWithGravity(arg0);
    AF(AF(arg0, s32, 0x20), s16, 0x12) = (s16) (AF(arg0, u16, 0x70) & 0xFFF);
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) - (rsin((s32) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), s16, 0x12)) * 0x280));
    temp_v0_2 = rcos((s32) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), s16, 0x12));
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, s32, 0xC) = (s32) (AF(arg0, s32, 0xC) - (temp_v0_2 * 0x280));
    UpdateModelZYX(arg0);
    SetLocalVelocityXZ(arg0, (s32) &D_sc03_028_80190B44);
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3000;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3000;
    AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3000;
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
}

void func_sc03_028_80185ED4(u8 *o) {
    s32 i;

    if (--AF(o, s32, 0x1C) == 0) {
        for (i = 0x100; i < 0xF00; i += 0x200) {
            SpawnActorArg(0x142, i, o);
        }
        FreeActor(o);
        PlaySoundId(0x629, 0);
        return;
    }
    if (ActorTouchesPlayer(o, 0x30, 0xA) == 1) {
        g_PlayerHitKind = 0x4015;
    } else {
        i = MoveCollide(o);
        if (i & 0x6000) {
            AF(o, s16, 0x16) = -8;
        }
        if (i & 0x8000) {
            SpawnActorArg(0x142, AF(AF(o, u8 *, 0x20), s16, 0x12), o);
            SpawnActorArg(0x142, AF(AF(o, u8 *, 0x20), s16, 0x12), o);
            SpawnActorArg(0x142, AF(AF(o, u8 *, 0x20), s16, 0x12), o);
            AF(AF(o, u8 *, 0x20), s16, 0x12) += (rand() & 0x3FF) + 0x600;
            UpdateModelZYX(o);
            SetLocalVelocityXZ(o, &D_sc03_028_80190B44);
            PlaySoundId(0x628, 0);
        }
        if (AF(o, s16, 0xA) < 0x200) {
            return;
        }
    }
    FreeActor(o);
}

void func_sc03_028_80186044(StageActor *arg0) {
    D_sc03_028_80190B50[arg0->state]();
}

void func_sc03_028_80186080(StageActor *arg0) {
    D_sc03_028_80190BE4[arg0->state]();
}

void func_sc03_028_801860BC(u8 *arg0) {
    D_sc03_028_80190BEC[AF(arg0, u16, 2)]();
}

void func_sc03_028_801860F8(u8 *p, s32 d0) {
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

void func_sc03_028_801861A0(u8 *arg0) {
    D_sc03_028_80190BF4[AF(arg0, u16, 2)]();
}

s32 func_sc03_028_801861DC(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = arg0->model;
    temp_v0->scale.vz = 0;
    temp_v0->scale.vy = 0;
    temp_v0->scale.vx = 0;
    return SetState(arg0, 1);
}

void func_sc03_028_8018620C(arg0)
    s32 arg0;
{
    AF(arg0, u8, 0xFC) = 8;
    SetState(arg0, 2);
}

void func_sc03_028_80186234(StageActor *o) {
    ModelObj *p;
    StageActor *c;
    SetState(o, 3);
    p = o->parent->model;
    p->unk04 &= 0x7FFFFFFF;
    AF(D_sc03_028_801EC450[0], s16, 0x2) = 7;
    AF(D_sc03_028_801EC450[0], s16, 0x6) = 0x180;
    AF(D_sc03_028_801EC450[0], s16, 0xA) = -0x1C8;
    AF(D_sc03_028_801EC450[0], s16, 0xE) = 0x3C0;
    AF(D_sc03_028_801EC450[0], s16, 0x100) = 1;
    AF(D_sc03_028_801EC450[0], s32, 0xF8) = 0xB;
    while ((c = FindOtherActorByKind(o, 0xC3)) != 0) {
        FreeActor(c);
    }
    while ((c = FindOtherActorByKind(o, 0xCB)) != 0) {
        FreeActor(c);
    }
    func_sc03_028_8018ADD0();
}

void func_sc03_028_8018632C(StageActor *arg0) {
    D_sc03_028_80190BFC[arg0->state]();
}

void func_sc03_028_80186368(StageActor *o) {
    u8 *p;
    u8 *r;

    if (SetupActor(o, &D_sc03_028_80190C1C) != 0) {
        o->model->unk04 |= 0x8040;
        o->state = 1;
        AF(o, s16, 0xAE) = -1;
        o->targetClass = 8;
        SetScript(o, &D_sc03_028_80190C68);
        SetModelCullBox(o->model, 0x280, 0x1E0);
        PlaySoundId(0xB21, 0);
        p = D_sc03_028_801E6214[0];
        p += 0x2D;
        *p = 0; p += 4;
        *p = 0; p += 4;
        *p = 0; p += 4;
        *p = 0; p += 0x14;
        *p = 0x45; p += 4;
        *p = 0x45; p += 4;
        *p = 0x45; p += 4;
        *p = 0x45; p += 0x14;
        *p = 0xA1; p += 4;
        *p = 0xA1; p += 4;
        *p = 0xA1; p += 4;
        *p = 0xA1;
        r = D_sc03_028_801E6214[0];
        r += 0xEA;
        *(s16 *) r = -0x360; r += 8;
        *(s16 *) r = -0x360; r += 8;
        *(s16 *) r = -0x360; r += 8;
        *(s16 *) r = -0x360; r += 8;
        *(s16 *) r = -0x360; r += 8;
        *(s16 *) r = -0x360; r += 8;
        *(s16 *) r = -0x360; r += 8;
        *(s16 *) r = -0x360;
    }
}

void func_sc03_028_801864A8(StageActor *o) {
    u8 *p;
    u8 *h;
    u8 *b;
    s32 r;

    p = (u8 *) SpawnActorArg(0xFE, 2, o);
    if (p != 0) {
        r = rand() & 0x7F;
        AF(p, s16, 0xA) = 0;
        AF(p, s16, 6) -= 0x40;
        AF(p, s16, 6) += r;
        func_sc03_028_80180B44(p, 6);
    }
    o->pos[1].h.i -= 0x10;
    if (o->pos[1].h.i < -1) {
        o->state = 2;
        PlaySoundId(0xB22, 0);
    }
    o->pos[0].h.i ^= 8;
    o->pos[2].h.i ^= 8;
    h = D_sc03_028_801E6214[0];
    b = h;
    switch (o->stateCount) {
    case 0:
        h += 0xFA;
        b += 0x31;
        *(s16 *) h += 0x10;
        *b = (*(s16 *) h + 0x360) * 0x45 / 0x60;
        if (*(s16 *) h >= -0x300) {
            o->stateCount++;
            *(s16 *) h = -0x300;
            h += 0x10;
            *b = 0x45;
            *(s16 *) h = -0x300;
            h -= 0x10;
        }
        break;
    case 1:
        h += 0x10A;
        b += 0x51;
        *(s16 *) h += 0x10;
        *b = (*(s16 *) h + 0x300) * 0x5C / 0x80 + 0x45;
        if (*(s16 *) h >= -0x280) {
            o->stateCount++;
            *(s16 *) h = -0x280;
            h += 0x10;
            *b = 0xA2;
            *(s16 *) h = -0x280;
            h -= 0x10;
        }
        break;
    case 2:
        h += 0x11A;
        AF(b, s16, 0x11A) += 0x10;
        b += 0x71;
        *b = (*(s16 *) h + 0x280) * 0x4D / 0x80 - 0x5E;
        if (*(s16 *) h >= -0x200) {
            o->stateCount++;
            *(s16 *) h = -0x200;
            *b = 0xFF;
        }
        break;
    default:
        return;
    }
    b[8] = b[0];
    AF(h, s16, 8) = *(s16 *) h;
}

void func_sc03_028_80186754(StageActor *arg0) {
    D_sc03_028_80190C78[arg0->state]();
}

void BossSetDefeatFlags(void) {
    SetFlag(0x8A, 1);
    SetFlag(0xF3, 1);
}

void func_sc03_028_801867C0(s32 arg0) {
    func_sc03_028_80180AC4(arg0, 0x14400);
}

void func_sc03_028_801867E4(u8 *arg0) {
    AF(arg0, s32, 0xB4) = 8;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(arg0, s16, 0x98) = 0;
    SetLocalVelocity((s32) arg0, (s32) &D_sc03_028_8018FEB0);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
}

void func_sc03_028_80186838(u8 *arg0) {
    AF(arg0, s32, 0xB4) = 0x80;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(arg0, s16, 0x98) = 0;
    SetLocalVelocity((s32) arg0, (s32) &D_sc03_028_8018FEBC);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
}

void func_sc03_028_8018688C(u8 *arg0) {
    AF(arg0, s32, 0xB4) = 0;
}

void BossInit(StageActor *o) {
    if ((u32)GetProgress() >= 200) {
        RejectSpawn(o);
        return;
    }
    if (SetupActor(o, &D_sc03_028_8018F924) != 0) {
        o->reactive = 1;
        o->params = &D_sc03_028_8018FEC8;
        o->reactMask = 0;
        AF(o, s16, 0xAE) = -1;
        o->targetClass = 0;
        o->reactOpts |= 2;
        AF(o, s32, 0xCC) = func_sc03_028_801843D8(o);
        AF(o, s16, 2) = 0x27;
        AF(o, s32, 0x10) = D_sc03_028_8018F9D8;
        AF(o, s32, 0x14) = D_sc03_028_8018F9DC;
        o->vel[2] = D_sc03_028_8018F9E0;
        SetScript(o, &D_sc03_028_801ADCEC);
        {
            ModelObj *t = o->model;
            u16 h = t->flags;
            D_sc03_028_801EC448 = 0x10;
            t->flags = h | 0x80;
            AF(o->model, s16 *, 0x80) = &D_sc03_028_8018F9FC;
            D_sc03_028_801EC44C = o;
            D_sc03_028_801EC450[0] = (void *)SpawnActorFromDef(&D_sc03_028_8018F870, o);
        }
        func_sc03_028_8018ADA0();
    }
}

void func_sc03_028_801869C0(StageActor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        arg0->state = 6;
        SetScript((s32) arg0, (s32) &D_sc03_028_801ADC6C);
    }
}

void func_sc03_028_80186A00(u8 *o) {
    AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 4);
    if (--AF(o, s32, 0x1C) == 0) {
        UpdateModelZYX(o);
        AF(o, s16, 2) = 0xB;
        SetLocalVelocityXZ(o, &D_sc03_028_8018F9B4);
        SetScript(o, &D_sc03_028_801ADCEC);
    }
}

void func_sc03_028_80186A88(s32 arg0, s32 arg1) {
    if (MoveCollide(arg0, arg1) & 0x8000) {
        AF(arg0, s16, 2) = 0x11;
        SetScript(arg0, (s32) &D_sc03_028_801AE46C);
        PlaySoundId(0x640, 0);
        return;
    }
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 2) = 0x10;
        SetScript(arg0, (s32) &D_sc03_028_801AE874);
    }
}

void func_sc03_028_80186B0C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = MoveCollide(arg0, arg1);
    if (temp_v0 & 0x2000) {
        AF(arg0, s16, 2) = 5;
        SetScript(arg0, (s32) &D_sc03_028_801ADC24);
        AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_028_8018F8D4 | 0x40000000 | 0x20000000);
        AF(arg0, s32, 0x1C) = 1;
        return;
    }
    if (temp_v0 & 0x8000) {
        AF(arg0, s16, 2) = 0x11;
        SetScript(arg0, (s32) &D_sc03_028_801AE46C);
        PlaySoundId(0x640, 0);
    }
}

void func_sc03_028_80186BAC(StageActor *o) {
    if (o->animFlags & 0x4000) {
        SetScript(o, &D_sc03_028_801AE9C4);
        o->timer = 1;
        o->state = 0x13;
    }
    if ((GetPlayerByte1C7() & 0x7FFFFFFF) == 2) {
        SetScript(o, &D_sc03_028_801AE99C);
        o->state = 0x1B;
        o->timer = 0;
        AF(o, s16, 0x12) = -o->pos[0].h.i >> 6;
        AF(o, s16, 0x16) = -0x10;
        AF(o, s16, 0x1A) = (0x3C0 - o->pos[2].h.i) >> 6;
        o->unkFC = (-o->pos[1].h.i - 0x40) / 5;
    }
}

void func_sc03_028_80186C98(StageActor *arg0) {
    s32 temp_v1;
    ModelObj *temp_v1_2;

    temp_v1 = arg0->timer - 0x100;
    arg0->timer = temp_v1;
    if (temp_v1 >= 0xD01) {
        arg0->model->scale.vz = (s16) temp_v1;
        return;
    }
    SetScript((s32) arg0, (s32) &D_sc03_028_801AE874);
    temp_v1_2 = arg0->model;
    arg0->state = 0x15;
    temp_v1_2->flags = (u16) (temp_v1_2->flags & 0xFFEF);
}

void func_sc03_028_80186D0C(s32 arg0, s32 arg1) {
    void *temp_v1;

    if (MoveCollide(arg0, arg1) & 0x8000) {
        AF(arg0, s16, 2) = 0x11;
        SetScript(arg0, (s32) &D_sc03_028_801AE46C);
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xFC);
        PlaySoundId(0x640, 0);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x48);
}

void BossRecover(StageActor *o) {
    if (o->timer == 0 || --o->timer == 0) {
        if (o->hp > 0) {
            func_sc03_028_8017F93C();
            o->hitState &= ~0x200;
            func_sc03_028_8017BFBC((s32)((u8 *)o + 0x76), (s32)&D_sc03_028_8018F924);
            SetScript(o, &D_sc03_028_801AE3A4);
            o->state = 0x1E;
            if ((u8 *)o->link != 0) {
                FreeActor(o->link);
            }
            PlaySoundId(0x59A, 0);
            if (o->hp >= 0x28) {
                D_sc03_028_801EC448 = 0x10;
            } else if (o->hp >= 0x29) {
                D_sc03_028_801EC448 = 0x18;
            } else {
                D_sc03_028_801EC448 = 0x20;
            }
        }
    }
    func_sc03_028_80180494(o);
}

void func_sc03_028_80186E60(StageActor *arg0) {
    ModelObj *temp_v1;

    if (arg0->index == 0x10) {
        arg0->hitData = (s32) ((s32) &D_sc03_028_8018F8D4 | 0x40000000 | 0x20000000);
    }
    if (arg0->animFlags & 0x4000) {
        arg0->state = 5;
        SetScript((s32) arg0, (s32) &D_sc03_028_801ADC24);
        AF(arg0, s32, 0x1C) = 1;
        D_sc03_028_8018FA14 = 0x80;
        temp_v1 = AF(arg0, void *, 0x20);
        temp_v1->flags = (u16) (temp_v1->flags | 0x80);
        arg0->heightAdd = 0;
    }
}

void func_sc03_028_80186F04(u8 *o) {
    s32 pad[4];

    MoveCollide(o);
    AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 8);
    if (AF(o, s32, 0x94) == 8) {
        AF(o, s16, 0x98) = 0;
    }
    if (AF(o, s32, 0x14) >= 0) {
        AF(o, s16, 2) = 0x17;
        SetScript(o, &D_sc03_028_801AE89C);
        AF(o, s32, 0x58) = (s32) &D_sc03_028_8018F8F4 | 0x40000000 | 0x20000000;
    }
}

void func_sc03_028_80186FA4(u8 *o) {
    s32 dz;
    s32 d;
    s32 lim;
    s32 x;
    if (AF(o, s32, 0x94) == 6) {
        AF(o, s16, 0x98) = 0;
    }
    dz = AF(o, s16, 0xE) - 0x3C0;
    d = dz * dz;
    x = AF(o, s16, 6);
    lim = 0xE100;
    if (d < 0x1901) {
        d += 0x4000;
    }
    d += x * x;
    if (d >= lim) {
        AF(o, s32, 0x10) = 0;
        AF(o, s32, 0x18) = 0;
        AF(o, s16, 6) -= x >> 5;
        AF(o, s16, 0xE) -= dz >> 5;
    }
    if (MoveCollide(o) & 0x2000) {
        PlaySoundId(0x560, 0);
        AF(o, s16, 2) = 5;
        SetScript(o, &D_sc03_028_801ADC24);
        AF(o, s32, 0x1C) = 1;
    }
}

void func_sc03_028_80187084(StageActor *o) {
    SV8 sv;
    s32 flag;
    s32 p;
    u8 *m;
    s32 v;

    UpdateScript(o);
    o->pos[1].h.i ^= 2;
    if ((--o->timer & 0xF) == 0) {
        p = SpawnProp(0x1F);
        if (p != 0) {
            m = (u8 *)o->model + 0x34;
            gte_SetRotMatrix(m);
            gte_SetTransMatrix(m);
            RotTransSV(&D_sc03_028_8018F960, &sv, &flag);
            SetRotMatrix(&D_800AF648);
            SetTransMatrix(&D_800AF648);
            AF(p, s32, 4) = o->pos[0].w;
            AF(p, s32, 8) = o->pos[1].w - 0x800000;
            AF(p, s32, 0xC) = o->pos[2].w;
            v = o->timer;
            if (v & 0x40) {
                AF(p, s32, 0x2C) = (v & 0x30) << 6;
            } else {
                AF(p, s32, 0x2C) = ((v & 0x30) << 6) + 0x200;
            }
            AF(p, s32, 0x1C) = o->timer + 0x24;
            PlaySoundId(0x564, 0);
        }
    }
    if (o->timer == 0) {
        o->timer = 0x10;
        o->state = 0x22;
    }
}

void func_sc03_028_801871EC(StageActor *arg0) {
    s32 pad[2];
    s32 temp_v1;

    UpdateScript(arg0);
    temp_v1 = arg0->timer - 1;
    arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i ^ 2);
    arg0->timer = temp_v1;
    if (temp_v1 == 0) {
        func_sc03_028_8017C068();
        arg0->timer = 0xF;
        SpawnActor(0x144, arg0);
        SpawnPropFrom(arg0, 0x35);
        arg0->state = 0x23;
        PlaySoundId(0x565, 0);
    }
}

void func_sc03_028_8018726C(StageActor *o) {
    s32 i;
    s32 n;
    u8 *r;

    UpdateScript(o);
    o->pos[1].h.i ^= 2;
    n = o->timer - 1;
    o->timer = n;
    if (n == 0) {
        FreeShadow(o->ext0);
        for (i = 0; i < 0x15; i++) {
            r = (u8 *) SpawnActor(0xE7, o);
            if (r != 0) {
                AF(AF(r, u8 *, 0x20), s32, 0x24) = D_sc03_028_8018FA1C[i];
            }
        }
        AF(D_sc03_028_801EC454, s16, 0xFC) = 0xA;
        o->model->parts = &D_sc03_028_801ADBA4;
        SetScript(o, &D_sc03_028_8018BD04);
        o->pos[2].h.i = 0x3C0;
        o->state = 0x24;
        o->pos[0].h.i = 0;
        o->param = 0;
        o->pos[1].h.i -= 8;
        o->model->flags |= 0x80;
        o->model->unk80 = &D_sc03_028_8018FA0C;
        AF(o->model, u32, 4) |= 0x80000000;
        D_sc03_028_801EC44C = 0;
        GiveItem(0xC);
    }
}

void func_sc03_028_801873A8(StageActor *arg0) {
    AF(D_sc03_028_801EC450[0], s32, 0xF8) = (s32) arg0->workF8;
    arg0->workF8 = 0;
    if ((UpdateScript((s32) arg0) != 0) && (D_sc03_028_801EC590 == 0)) {
        EndEvent((s32) arg0);
        FreeActor((s32) arg0);
    }
}

void func_sc03_028_80187414(void) {
}

void func_sc03_028_8018741C(StageActor *arg0) {
    s16 temp_v0;
    StageActor *temp_a0_3;
    ModelObj *temp_a0;
    void *temp_a0_2;

    temp_a0 = arg0->model;
    temp_v0 = temp_a0->rot.vy;
    if (temp_v0 != 0) {
        temp_a0->rot.vy = (s16) (temp_v0 - 0x80);
        return;
    }
    func_sc03_028_8018B234(1);
    SetScript((s32) arg0, (s32) &D_sc03_028_801ADC24);
    temp_a0_2 = (u8 *)arg0 + 0x76;
    AF(arg0, s32, 0x1C) = 0x14;
    AF(arg0, s16, 2) = 0x2A;
    arg0->hp = (u16) D_sc03_028_8018F924;
    func_sc03_028_8017BF08((s32) temp_a0_2, (s32) temp_a0_2, 1, 0x78);
    func_sc03_028_8017FADC();
    temp_a0_3 = (s32)arg0->ext0;
    if (temp_a0_3 != 0) {
        FreeShadow(temp_a0_3);
        arg0->ext0 = 0;
    }
}

void func_sc03_028_801874D0(StageActor *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (arg0->animFlags & 0x4000) {
        PlaySoundId(0x619, 0, arg2);
    }
    if ((arg0->timer = temp_v0 = arg0->timer - 1) == 0) {
        SetScript((s32) arg0, (s32) &D_sc03_028_801ADE54);
        arg0->state = 3;
    }
}

void func_sc03_028_8018753C(u8 *o) {
    if (AF(o, s32, 0x1C) == 0) {
        if (AF(o, s32, 0x94) == 0xA && AF(o, s16, 0x98) == 1) {
            PlaySoundId(0x55B, 0);
        }
        if (AF(o, s32, 0x94) == 0x22) {
            SetScript(o, &D_sc03_028_801ADC24);
            AF(o, s32, 0x1C) = 0x23;
        }
    } else {
        if (--AF(o, s32, 0x1C) == 0) {
            func_sc03_028_8018B260();
            AF(o, s16, 2) = 4;
            StopWithGravity(o);
            AF(o, s16, 0x16) = -0x10;
            AF(o, s16, 0x1A) = -0xC;
        }
        if (AF(o, u16, 0x72) & 0x4000) {
            PlaySoundId(0x619, 0);
        }
    }
}

void func_sc03_028_80187610(u8 *arg0) {
    s16 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a0, s16, 0x12);
    if (temp_v0 != 0) {
        AF(temp_a0, s16, 0x12) = (s16) (temp_v0 - 0x80);
        return;
    }
    func_sc03_028_8017BEBC((s32) (arg0 + 0x76), (s32) &D_sc03_028_8018F924);
    AF(arg0, s16, 2) = 4;
    StopWithGravity((s32) arg0);
    AF(arg0, s16, 0x16) = -0x10;
    AF(arg0, s16, 0x1A) = -0xC;
}

void func_sc03_028_80187688(u8 *arg0) {
    if ((AF(arg0, s16, 0x16) > 0) && (AF(arg0, s32, 0xCC) == 0)) {
        AF(arg0, s32, 0xCC) = func_sc03_028_801843D8();
    }
    if (MoveCollide((s32) arg0) & 0x2000) {
        PlaySoundId(0x560, 0);
        StartCameraShake((s32) &D_sc03_028_8018C134);
        func_sc03_028_80180B44((s32) arg0, 0);
        AF(arg0, s16, 2) = 5;
        AF(arg0, s32, 0x1C) = 0x5A;
        SetScript((s32) arg0, (s32) &D_sc03_028_801ADC24);
    }
}

void func_sc03_028_80187730(StageActor *o) {
    s16 v;
    StageActor *r;

    if (o->index == 0xC) {
        if (D_sc03_028_801EC448 <= 0) {
            o->hitData = (s32) &D_sc03_028_8018F914 | 0x40000000 | 0x20000000;
            SetScript(o, &D_sc03_028_801AE2C4);
            o->state = 0x1D;
            func_sc03_028_8017F9D8();
            o->model->unk80 = &D_sc03_028_8018F9FC;
            o->hitState |= 0x200;
            v = o->hp;
            if (v > 0x50) {
                o->timer = 0xD2;
            } else if (v > 0x28) {
                o->timer = 0x96;
            } else {
                o->timer = 0x5A;
            }
            r = SpawnActor(0xB8, o);
            o->link = r;
            if (r == 0) {
                o->timer = 1;
            }
            func_sc03_028_8018305C((s32) o);
        } else {
            SetScript(o, &D_sc03_028_801AE3A4);
            o->state = 0x1E;
            o->hitData = (s32) &D_sc03_028_8018F914 | 0x40000000 | 0x20000000;
            o->model->flags &= 0xFF7F;
        }
    }
}

void func_sc03_028_80187860(StageActor *arg0) {
    StartEvent(arg0, (s32) &D_sc03_028_8018FB48);
    TakePlayerControlNoStop();
    arg0->state = 0x21;
    arg0->timer = 0x80;
}

void func_sc03_028_801878A8(s32 arg0) {
    void *temp_a1;

    if (SetupActor(arg0, (s32) &D_sc03_028_8019001C) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_028_80190050;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc03_028_8018BD04);
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
        UpdateModelZYX(arg0, (s32) temp_a1);
        AF(arg0, s16, 0xAE) = -0x40F3;
    }
}

void func_sc03_028_80187954(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 4) = (s32) AF(AF(arg0, void *, 0x64), s32, 4);
    AF(arg0, s32, 8) = (s32) AF(AF(arg0, void *, 0x64), s32, 8);
    AF(arg0, s32, 0xC) = (s32) AF(AF(arg0, void *, 0x64), s32, 0xC);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    UpdateModelZYX((s32) arg0, arg1);
}

void BossCheckDefeat(StageActor *o) {
    StageActor *p;
    s16 v;
    s32 d;

    if (o->timer != 0) {
        o->timer--;
        return;
    }
    p = o->parent;
    if (p->hp <= 0) {
        p->hitState = 0;
        o->parent->state = 0x29;
        func_800D0C48(4);
        PlaySoundId(0x5E0, 0);
        func_sc03_028_8017F93C();
        o->parent->link = 0;
        FreeActor(o);
        return;
    }
    SetScript(p, &D_sc03_028_801AE2DC);
    o->parent->state = 0x1E;
    PlaySoundId(0x566, 0);
    v = o->parent->hp;
    if (v > 0x50) {
        D_sc03_028_801EC448 = 0x10;
    } else if (v < 0x29) {
        D_sc03_028_801EC448 = 0x20;
    } else {
        D_sc03_028_801EC448 = 0x18;
    }
    o->timer = 0xF;
    o->state = 3;
}

void func_sc03_028_80187AB0(StageActor *o) {
    if (o->timer != 0) {
        o->timer -= 1;
    } else {
        func_sc03_028_8017F93C();
        o->parent->link = 0;
        FreeActor((s32) o);
    }
}

s32 func_sc03_028_80187B04(StageActor *arg0) {
    StageActor *temp_a0;
    void *temp_a1;
    ModelObj *temp_s1;
    s32 k;

    k = 0x1000;
    arg0->pos[0].w = (s32) arg0->parent->pos[0].w;
    temp_s1 = arg0->model;
    arg0->pos[1].w = (s32) (arg0->parent->pos[1].w + 0xFFC00000);
    temp_a1 = (((u16)arg0->param & 3) * 0xC) + &D_sc03_028_80190078;
    arg0->pos[2].w = (s32) arg0->parent->pos[2].w;
    temp_s1->rot.vz = (u16) AF(temp_a1, u16, 8);
    temp_s1->rot.vy = (u16) ((u16)temp_s1->rot.vy + AF(temp_a1, u16, 0xA));
    ApplyMatrixSV((s32) (AF(arg0, void *, 0x20) + 0x34), (s32) temp_a1, (s32) ((u8 *)arg0 + 0x50));
    if (arg0->workFE == 0) {
        temp_a0 = arg0->parent;
        if ((temp_a0 == NULL) || ((s16)temp_a0->id != arg0->unkFC) || (temp_a0->hitState != 0)) {
            arg0->workFE = 1;
        }
    } else {
        FreeActor((s32) arg0);
        return;
    }
    temp_s1->scale.vz = k;
    temp_s1->scale.vy = k;
    temp_s1->scale.vx = k;
    return k;
}

void func_sc03_028_80187C28(StageActor *o) {
    ModelObj *r;
    r = AllocActorModel(o);
    o->model = r;
    if (r == 0) {
        RejectSpawn(o);
    } else {
        StageActor *p;
        func_8001CA1C(r, &D_sc03_028_8019009C);
        o->pos[1].h.i -= 0x100;
        p = o->parent;
        if (p->kind != 0) {
            o->unkFC = p->id;
        }
        SetScript(o, &D_sc03_028_801900A8);
        o->model->rot.vy = (((u16)o->param & 3) << 12) / 3;
        if ((u16)o->param & 4) {
            o->state = 2;
        } else {
            o->state = 1;
        }
    }
}

void func_sc03_028_80187CF4(StageActor *arg0) {
    ModelObj *temp_v1;

    temp_v1 = arg0->model;
    temp_v1->scale.vz = (u16) ((u16)temp_v1->scale.vz + 0xA00);
    if (arg0->unkFC == 4) {
        arg0->state = 2;
        arg0->timer = 0x79;
    }
    func_sc03_028_80183264((s32) arg0);
}

void func_sc03_028_80187D48(StageActor *arg0) {
    ModelObj *temp_v1;

    if (SetupActor(arg0, (s32) &D_sc03_028_801900C4) != 0) {
        arg0->reactive = 1;
        arg0->reactMask = 1;
        SetScript(arg0, (s32) &D_sc03_028_8018BD04);
        arg0->state = 1;
        arg0->model->rot.vy = (u16) (u16)arg0->parent->model->rot.vy;
        func_sc03_028_80183264(arg0);
        arg0->model->rot.vx = 0x30;
        arg0->timer = 6;
        arg0->unkFC = 0;
        arg0->model->scale.vx = 0x3000;
        arg0->model->scale.vy = 0x1000;
        arg0->model->scale.vz = 0xC00;
        temp_v1 = arg0->model;
        temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    }
}

void func_sc03_028_80187E14(u8 *o) {
    if (SetupActor(o, &D_sc03_028_80190218) != 0) {
        func_sc03_028_801838B0(o);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x2000;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2000;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x333;
        UpdateModelZYX(o);
        AF(o, s32, 0x10) = (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) << 12) / 10;
        AF(o, s32, 0x18) = (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) << 12) / 10;
        AF(o, s16, 2) = 2;
    }
}

void func_sc03_028_80187EEC(StageActor *arg0) {
    s32 temp_v0;
    ModelObj *temp_v1;
    ModelObj *temp_v1_2;
    ModelObj *temp_v1_3;

    temp_v1 = arg0->model;
    temp_v1->scale.vx = (u16) ((u16)temp_v1->scale.vx + 0x333);
    temp_v1_2 = arg0->model;
    temp_v1_2->scale.vy = (u16) ((u16)temp_v1_2->scale.vy + 0x333);
    temp_v1_3 = arg0->model;
    temp_v1_3->scale.vz = (u16) ((u16)temp_v1_3->scale.vz + 0x333);
    temp_v0 = arg0->timer + 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 6) {
        SpawnActorArg(0xFE, 0, (s32) arg0);
    }
    if (arg0->timer >= 0xB) {
        FreeActor((s32) arg0);
    }
}

void func_sc03_028_80187F98(StageActor *arg0) {
    s32 temp_v0;
    ModelObj *temp_a0;

    arg0->pos[0].w = (s32) (arg0->pos[0].w + arg0->vel[0]);
    temp_a0 = arg0->model;
    arg0->pos[2].w = (s32) (arg0->pos[2].w + arg0->vel[2]);
    temp_a0->scale.vz = (u16) ((u16)temp_a0->scale.vz + 0x333);
    temp_v0 = arg0->timer + 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 6) {
        SpawnActorArg(0xFE, 0, (s32) arg0);
    }
    if (arg0->timer >= 0xB) {
        FreeActor((s32) arg0);
    }
}

void func_sc03_028_80188034(s32 arg0, s32 arg1) {
    s32 temp_v1;
    u16 temp_v0;

    if (((MoveCollide(arg0, arg1) & 0x2000) && (temp_v1 = AF(arg0, s32, 0x1C) + 1, AF(arg0, s32, 0x14) = (s32) -AF(arg0, s32, 0x14), AF(arg0, s32, 0x1C) = temp_v1, (temp_v1 == 2))) || (temp_v0 = AF(arg0, u16, 0xFC) - 1, AF(arg0, u16, 0xFC) = temp_v0, ((temp_v0 << 0x10) == 0))) {
        FreeActor(arg0);
    }
}

void func_sc03_028_801880AC(StageActor *o) {
    if (SetupActor(o, &D_sc03_028_80190324) != 0) {
        o->reactive = 1;
        o->params = &D_sc03_028_80190358;
        o->react = 0;
        o->reactMask = 0;
        o->targetClass = 0;
        o->reactOpts |= 2;
        o->hitState |= 0x4000;
        SetScript(o, &D_sc03_028_801E2458);
        AF(o, s16, 6) = g_PlayerX;
        o->pos[1].h.i = 0xC0;
        o->pos[2].h.i = D_80126B66;
        AF(o, s16, 2) = 1;
        AF(o, s32, 0x1C) = 0xF;
        PlaySoundId(0x562, 0);
    }
}

void func_sc03_028_80188164(StageActor *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        arg0->state = 2;
    }
    temp_v0_2 = SpawnActorArg(0xFE, 2, (s32) arg0);
    if (temp_v0_2 != 0) {
        func_sc03_028_80180B44(temp_v0_2, 6);
    }
    func_sc03_028_80183E04((s32) arg0);
}

void func_sc03_028_801881CC(StageActor *arg0) {
    s32 temp_v0_2;
    u16 temp_v0;

    temp_v0 = (u16)arg0->pos[1].h.i - 0x18;
    arg0->pos[1].h.i = temp_v0;
    if ((temp_v0 << 0x10) <= 0) {
        arg0->state = 3;
    }
    temp_v0_2 = SpawnActorArg(0xFE, 2, (s32) arg0);
    if (temp_v0_2 != 0) {
        func_sc03_028_80180B44(temp_v0_2, 6);
    }
    func_sc03_028_80183E04((s32) arg0);
}

void func_sc03_028_80188238(StageActor *arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = (u16)arg0->pos[1].h.i + 0x18;
    arg0->pos[1].h.i = temp_v0;
    if ((s16) temp_v0 >= 0xA0) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    func_sc03_028_80183E04((s32) arg0);
}

void func_sc03_028_8018828C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        FreeProp((s32) arg0);
    }
}

void func_sc03_028_801882C0(StageActor *arg0) {
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

void func_sc03_028_801883E4(s32 arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_028_801900C4) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = 1;
        SetScript(arg0, (s32) &D_sc03_028_8018BD04);
        AF(arg0, s16, 2) = 1;
        StopWithGravity(arg0);
        AF(arg0, s16, 0xFC) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0xFE) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0x100) = (s16) ((rand() & 0xFF) - 0x80);
        AF(arg0, s16, 0x12) = (s16) ((rand() & 0xF) - 8);
        AF(arg0, s16, 0x1A) = (s16) ((rand() & 0xF) - 8);
        AF(arg0, s16, 0x16) = -0x38;
        AF(arg0, s32, 0x1C) = 0x5A;
    }
}

void func_sc03_028_801884AC(StageActor *o) {
    u8 *a;
    u8 *b;

    if (AF(o, s16, 0x12) > 0) {
        a = (u8 *)o->ext0;
        b = (u8 *)o->ext1;
    } else {
        a = AF(o, u8 *, 0xD4);
        b = AF(o, u8 *, 0xD8);
    }
    if (AF(a, u16, 2) != 5 && AF(b, u16, 2) != 5 && o->parent->state != 0x1D) {
        o->timer--;
    }
    if (o->timer == 0) {
        o->workFE = 0x310;
        o->state = 2;
        AF(o, s16, 0x12) *= -1;
    }
}

void func_sc03_028_8018854C(StageActor *arg0) {
    ModelObj *temp_v1;

    temp_v1 = arg0->model;
    temp_v1->scale.vy = (u16) ((u16)temp_v1->scale.vy - 0x200);
    if ((s16) (u16)arg0->model->scale.vy < 0x1001) {
        arg0->state = 4;
    }
}

void func_sc03_028_8018858C(StageActor *o) {
    o->model->scale.vy += 0x200;
    if (o->model->scale.vy >= 0x2000) {
        s16 v;
        o->state = (s16)o->stateCount;
        v = AF(o, s16, 0x12);
        if (v < 0) {
            if (v != -4) {
                AF(o, s16, 0x12) = -4;
            }
        } else {
            if (v != 4) {
                AF(o, s16, 0x12) = 4;
            }
        }
    }
}

void func_sc03_028_80188600(StageActor *arg0) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_028_80190414);
    SetScript(arg0, (s32) &D_sc03_028_80190420);
    arg0->state = 5;
    AF(arg0, s16, 0x12) = 4;
    arg0->timer = 0x1E;
    SpawnShadow(arg0);
    arg0->model->scale.vx = 0x2000;
    arg0->model->scale.vy = 0x2000;
    arg0->model->scale.vz = 0x2000;
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    arg0->ext0 = SpawnActorFromDef((s32) &D_sc03_028_8018F884, arg0);
    arg0->ext1 = SpawnActorFromDef((s32) &D_sc03_028_8018F898, arg0);
    arg0->workD4 = SpawnActorFromDef((s32) &D_sc03_028_8018F8AC, arg0);
    arg0->workD8 = SpawnActorFromDef((s32) &D_sc03_028_8018F8C0, arg0);
    arg0->work100 = 1;
}

void func_sc03_028_8018870C(StageActor *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        StartEvent((s32) arg0, (s32) &D_sc03_028_8018FCB8);
        TakePlayerControlNoStop();
        arg0->state = 6;
        arg0->timer = 0xA;
        temp_v0_2 = SpawnActor(0x379, (s32) arg0);
        if (temp_v0_2 != 0) {
            D_sc03_028_801EC454 = temp_v0_2;
            AF(temp_v0_2, s16, 0xA) = 0x17E;
            AF(temp_v0_2, s16, 6) = 0;
            AF(temp_v0_2, s16, 0xE) = 0x220;
            AF(AF(temp_v0_2, void *, 0x20), s16, 0x10) = 0x40;
        }
    }
}

void func_sc03_028_801887A8(StageActor *o) {
    switch (o->workF8) {
    case 1:
        AF(o, s32, 0xDC) ^= 1;
        break;
    case 2:
        o->workE0 ^= 1;
        break;
    case 3:
        o->workE4 ^= 1;
        break;
    case 4:
        o->workE8 ^= 1;
        break;
    case 5:
        o->parent->state = 1;
        break;
    case 6:
        o->parent->state = 2;
        break;
    case 7:
        o->workE8 = o->workE4 = o->workE0 = o->message = 6;
        break;
    case 8:
        o->parent->state = 0x28;
        break;
    case 9:
        func_800D0C48(1);
        break;
    case 10:
        o->workE8 = o->workE4 = o->workE0 = o->message = 7;
        break;
    case 11:
        o->workE8 = o->workE4 = o->workE0 = o->message = 8;
        break;
    }
    o->workF8 = 0;
}

void func_sc03_028_801888AC(StageActor *arg0) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_028_80190484);
    SetScript(arg0, (s32) &D_sc03_028_80190490);
    arg0->state = 1;
    arg0->model->scale.vx = 0x2000;
    arg0->model->scale.vy = 0x2000;
    arg0->model->scale.vz = 0x2000;
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
}

void func_sc03_028_80188950(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_v1;

    ActorTouchesPlayer(arg0, 0x30, 0xA);
    temp_v0 = FindActorByKind(0xCB);
    if (temp_v0 != 0) {
        temp_v0_2 = AF(arg0, s16, 6) - AF(temp_v0, s16, 6);
        temp_v0_3 = AF(arg0, s16, 0xE) - AF(temp_v0, s16, 0xE);
        if (((temp_v0_2 * temp_v0_2) + (temp_v0_3 * temp_v0_3)) < 0x4000) {
            temp_v1 = AF(temp_v0, u16, 0x5C);
            if (temp_v1 & 0x8000) {
                AF(temp_v0, u16, 0x5C) = (u16) (temp_v1 | 1);
                AF(temp_v0, s16, 0x5E) = 0x1D;
            }
        }
    }
    if (TickTimer(arg0) != 0) {
        FreeActor(arg0);
    }
}

void func_sc03_028_80188A0C(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_028_801904A8);
    SetScript(arg0, (s32) &D_sc03_028_801904B4);
    AF(arg0, s16, 2) = 1;
    StopWithGravity(arg0);
    AF(arg0, s32, 0x10) = (s32) (((rand() & 0xFF) - 0x80) << 0xC);
    AF(arg0, s32, 0x18) = (s32) (((rand() & 0xFF) - 0x80) << 0xC);
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
    AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x2000;
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
}

void func_sc03_028_80188AE4(StageActor *o) {
    s16 a;
    if (o->parent->model->scale.vy < 0x1801) {
        o->parent->unkFC = 0;
        o->state = 2;
        o->unkFC = rand();
        o->workFE = rand();
        o->hitState = 0x100;
        return;
    }
    AF(o, s16, 6) = o->parent->pos[0].h.i;
    a = D_80126B66;
    if (a > 0x3C0) {
        a -= 0x3C0;
        a *= 2;
        o->pos[1].h.i = (u16)o->parent->pos[1].h.i - (rcos(a) >> 9);
        o->pos[2].h.i = (u16)o->parent->pos[2].h.i - (rsin(a) >> 9);
    } else {
        o->pos[1].h.i = (u16)o->parent->pos[1].h.i - 8;
        o->pos[2].h.i = (u16)o->parent->pos[2].h.i;
    }
}

void func_sc03_028_80188BEC(u8 *o) {
    AF(o, u16, 0xFC) = (AF(o, u16, 0xFC) + ((rand() & 0xFFF) >> 5)) & 0xFFF;
    AF(o, u16, 0xFC) = AF(o, u16, 0xFC) + ((rand() & 0xFFF) >> 5);
    AF(o, u16, 0xFE) &= 0xFFF;
    AF(o, s16, 6) += rsin(AF(o, s16, 0xFC)) >> 10;
    AF(o, s16, 0xE) += rsin(AF(o, s16, 0xFE)) >> 10;
    AF(o, s16, 0xA) += 0xC;
    if (MoveCollide(o) & 0x2000) {
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x78;
    }
}

void func_sc03_028_80188CAC(StageActor *arg0) {
    s32 temp_v0;
    ModelObj *temp_a0;

    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 < 0x1E) {
        temp_a0 = arg0->model;
        temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 ^ 0x80000000);
        if (arg0->timer == 0) {
            FreeActor((s32) arg0, (s32) arg0);
        }
    }
}

void func_sc03_028_80188D14(StageActor *arg0) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        arg0->parent->unkFC = 0;
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_028_801905A0);
    SetScript(arg0, (s32) &D_sc03_028_801905AC);
    arg0->state = 1;
    arg0->model->scale.vx = 0x2000;
    arg0->model->scale.vy = 0x2000;
    arg0->model->scale.vz = 0x2000;
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
}

void func_sc03_028_80188DC0(StageActor *o) {
    StageActor *p = o->parent;
    u16 a;
    if (p->model->scale.vy < 0x1801) {
        StopWithGravity();
        o->state = 2;
        o->parent->unkFC = 0;
        return;
    }
    AF(o, s16, 6) = p->pos[0].h.i;
    a = D_80126B66;
    if (D_80126B66 > 0x3C0) {
        a -= 0x3C0;
        a *= 2;
        o->pos[1].h.i = o->parent->pos[1].h.i - (rcos((s16) a) >> 9);
        o->pos[2].h.i = o->parent->pos[2].h.i - (rsin((s16) a) >> 9);
    } else {
        o->pos[1].h.i = o->parent->pos[1].h.i - 8;
        o->pos[2].h.i = o->parent->pos[2].h.i;
    }
}

void func_sc03_028_80188EC0(StageActor *arg0) {
    s32 var_s0;

    if (AF(D_sc03_028_801EC44C, u16, 2) == 0x1F) {
        arg0->pos[0].h.i = (u16) ((u16)arg0->pos[0].h.i ^ 2);
        return;
    }
    var_s0 = 0;
    do {
        SpawnActorArg(0xCC, var_s0 << 9, (s32) arg0);
        var_s0 += 1;
    } while (var_s0 < 8);
    FreeActor((s32) arg0);
    PlaySoundId(0x62A, 0);
}

void func_sc03_028_80188F4C(StageActor *arg0) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_028_801905E4);
    SetScript(arg0, (s32) &D_sc03_028_801905F0);
    arg0->state = 1;
    arg0->model->scale.vx = 0x2800;
    arg0->model->scale.vy = 0x2800;
    arg0->model->scale.vz = 0x2800;
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
}

void func_sc03_028_80188FF0(StageActor *o) {
    u8 *p;

    if (D_sc03_028_801EC44C != 0) {
        p = ((struct { u8 *p; } *) &D_sc03_028_801EC44C)->p;
        if (o->pos[1].h.i > AF(p, s16, 0xA) - 0x10 && o->pos[1].h.i < AF(p, s16, 0xA) + 0x10
            && o->pos[0].h.i < AF(p, s16, 6) + 0x80 && AF(p, s16, 6) - 0x80 < o->pos[0].h.i
            && o->pos[2].h.i < AF(p, s16, 0xE) + 0x80 && AF(p, s16, 0xE) - 0x80 < o->pos[2].h.i) {
            o->hitCode = 0x1D;
            o->hitState |= 1;
        }
    }
}

void func_sc03_028_80189094(StageActor *arg0) {
    s32 temp_v0;
    ModelObj *temp_a0;

    temp_a0 = arg0->model;
    temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 ^ 0x80000000);
    temp_v0 = arg0->timer - 1;
    arg0->timer = temp_v0;
    if (temp_v0 == 0) {
        FreeActor((s32) arg0, (s32) arg0);
    }
}

void func_sc03_028_801890E4(s32 arg0, s32 arg1) {
    if (MoveCollide(arg0, arg1) != 0) {
        FreeActor(arg0);
    }
}

void func_sc03_028_8018911C(u8 *o) {
    s32 t;
    s32 *q;

    t = AllocActorModel();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    func_8001CA1C(t, &D_sc03_028_80190688);
    SetScript(o, &D_sc03_028_801906A0);
    AF(o, s16, 2) = 1;
    StopWithGravity(o);
    AF(o, s32, 0x94) = rand() & 1;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0x70);
    UpdateModelZYX(o);
    q = &D_sc03_028_801906C0;
    *q = -(((rand() & 3) + 2) << 16);
    SetLocalVelocity(o, (u8 *)q - 8);
    AF(o, s16, 0x16) = -(rand() & 7) - 8;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x3000;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x3000;
    AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x3000;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
}

void func_sc03_028_80189234(void) {
}

void func_sc03_028_8018923C(StageActor *arg0) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_028_801906D0);
    SetScript(arg0, (s32) &D_sc03_028_801906F4);
    arg0->state = 1;
    arg0->model->scale.vx = 0x1800;
    arg0->model->scale.vy = 0x1800;
    arg0->model->scale.vz = 0x1800;
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
}

void func_sc03_028_801892E0(StageActor *o) {
    s32 t;

    QueueImage(D_sc03_028_80190748[(s16)(((s16)(u16)o->unkFC >> 1) % 6)]);
    o->pos[0].h.i -= 8;
    t = o->timer - 1;
    o->timer = t;
    if (t == 0) {
        o->state = 2;
    }
}

void func_sc03_028_80189380(StageActor *arg0) {
    s16 t;
    u8 *q;

    t = (u16)arg0->unkFC;
    if (t < 0xD) {
        QueueImage(D_sc03_028_80190780[t >> 1]);
        if (arg0->unkFC == 5 && arg0->parent->unkFC == 0) {
            q = (u8 *)SpawnActor(arg0->workFE, arg0);
            if (q != 0) {
                AF(q, u8 *, 0x64) = (u8 *)arg0->parent;
                AF(q, s32, 4) = arg0->parent->pos[0].w;
                AF(q, s32, 8) = arg0->parent->pos[1].w + 0xFFFC0000;
                AF(q, s32, 0xC) = arg0->parent->pos[2].w;
                arg0->parent->unkFC = 8;
            }
        }
    } else {
        arg0->state = 2;
    }
}

void func_sc03_028_8018947C(StageActor *arg0) {
    s16 t;

    if ((GetPlayerByte1C7() & 0x7FFFFFFF) == 2 && arg0->unkFC == 5) {
        arg0->unkFC--;
    }
    t = arg0->unkFC;
    if (t < 9) {
        QueueImage(D_sc03_028_8019079C[t >> 1]);
    } else {
        arg0->state = 2;
    }
}

void func_sc03_028_80189518(StageActor *arg0) {
    u8 *g;
    s16 t;
    s32 r;

    g = &g_Status;
    if ((u16)arg0->unkFC & 0xF) {
        QueueImage(&D_sc03_028_801CFB1C);
    } else {
        QueueImage(&D_sc03_028_801CFAFC);
    }
    t = AF(arg0, s16, 0xDE);
    if (t >= 0x564 && AF(g, s16, 0x1A) < 0x3D) {
        r = (AF(g, s16, 0x1A) + 0x5A0) < t;
    } else {
        r = AF(arg0, s16, 0xDE) > AF(g, s16, 0x1A);
    }
    if (r == 0) {
        arg0->state = 2;
        arg0->react = 0;
        arg0->hitState = 0x8000;
    }
}

void func_sc03_028_801895CC(StageActor *o) {
    s32 t;

    QueueImage(D_sc03_028_80190748[(s16)(((s16)(u16)o->unkFC >> 1) % 6)]);
    o->pos[0].h.i += 8;
    t = o->timer - 1;
    o->timer = t;
    if (t == 0) {
        FreeActor(o);
    }
}

void func_sc03_028_8018966C(StageActor *arg0) {
    s32 t;
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, &D_sc03_028_8019072C);
    SetScript(arg0, &D_sc03_028_80190738);
    arg0->state = 1;
    arg0->reactive = 1;
    arg0->react = 0;
    arg0->reactMask = 0;
    arg0->params = &D_sc03_028_801907D4;
    arg0->hitState = 0x8000;
    AF(arg0, u8 *, 0x58) = &D_sc03_028_801907C4;
    arg0->reactOpts |= 2;
    arg0->model->scale.vx = 0x4000;
    arg0->model->scale.vy = 0x4000;
    arg0->model->scale.vz = 0x4000;
    arg0->model->flags |= 0x10;
    arg0->model->unk04 = 0x01000000;
    arg0->timer = 0x20;
    arg0->work10A = 5;
}

void func_sc03_028_80189768(StageActor *o) {
    s32 t;

    QueueImage(D_sc03_028_8019081C[(s16)(((s16)(u16)o->unkFC >> 1) % 6)]);
    o->pos[0].h.i -= 8;
    t = o->timer - 1;
    o->timer = t;
    if (t == 0) {
        o->state = 2;
    }
}

void func_sc03_028_80189808(StageActor *arg0) {
    s16 t;
    u8 *q;

    t = (u16)arg0->unkFC;
    if (t < 0xD) {
        QueueImage(D_sc03_028_80190854[t >> 1]);
        if (arg0->unkFC == 5 && arg0->parent->unkFC == 0) {
            q = (u8 *)SpawnActor(arg0->workFE, arg0);
            if (q != 0) {
                AF(q, u8 *, 0x64) = (u8 *)arg0->parent;
                AF(q, s32, 4) = arg0->parent->pos[0].w;
                AF(q, s32, 8) = arg0->parent->pos[1].w + 0xFFFC0000;
                AF(q, s32, 0xC) = arg0->parent->pos[2].w;
                arg0->parent->unkFC = 8;
            }
        }
    } else {
        arg0->state = 2;
    }
}

void func_sc03_028_80189904(StageActor *arg0) {
    s16 t;

    if ((GetPlayerByte1C7() & 0x7FFFFFFF) == 2 && arg0->unkFC == 5) {
        arg0->unkFC--;
    }
    t = arg0->unkFC;
    if (t < 9) {
        QueueImage(D_sc03_028_80190870[t >> 1]);
    } else {
        arg0->state = 2;
    }
}

void func_sc03_028_801899A0(StageActor *arg0) {
    u8 *g;
    s16 t;
    s32 r;

    g = &g_Status;
    if ((u16)arg0->unkFC & 0xF) {
        QueueImage(&D_sc03_028_801D55DC);
    } else {
        QueueImage(&D_sc03_028_801D55BC);
    }
    t = AF(arg0, s16, 0xDE);
    if (t >= 0x564 && AF(g, s16, 0x1A) < 0x3D) {
        r = (AF(g, s16, 0x1A) + 0x5A0) < t;
    } else {
        r = AF(arg0, s16, 0xDE) > AF(g, s16, 0x1A);
    }
    if (r == 0) {
        arg0->state = 2;
        arg0->react = 0;
        arg0->hitState = 0x8000;
    }
}

void func_sc03_028_80189A54(StageActor *o) {
    s32 t;

    QueueImage(D_sc03_028_8019081C[(s16)(((s16)(u16)o->unkFC >> 1) % 6)]);
    o->pos[0].h.i += 8;
    t = o->timer - 1;
    o->timer = t;
    if (t == 0) {
        FreeActor(o);
    }
}

void func_sc03_028_80189AF4(StageActor *arg0) {
    s32 t;
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, &D_sc03_028_80190800);
    SetScript(arg0, &D_sc03_028_8019080C);
    arg0->state = 1;
    arg0->reactive = 1;
    arg0->react = 0;
    arg0->reactMask = 0;
    arg0->params = &D_sc03_028_80190898;
    arg0->hitState = 0x8000;
    AF(arg0, u8 *, 0x58) = &D_sc03_028_801907C4;
    arg0->reactOpts |= 2;
    arg0->model->scale.vx = 0x4000;
    arg0->model->scale.vy = 0x4000;
    arg0->model->scale.vz = 0x4000;
    arg0->model->flags |= 0x10;
    arg0->model->unk04 = 0x01000000;
    arg0->timer = 0x20;
    arg0->work10A = 5;
}

void func_sc03_028_80189BF0(StageActor *o) {
    s32 t;

    QueueImage(D_sc03_028_801908E0[(s16)(((s16)(u16)o->unkFC >> 1) % 6)]);
    o->pos[0].h.i += 8;
    t = o->timer - 1;
    o->timer = t;
    if (t == 0) {
        o->state = 2;
    }
}

void func_sc03_028_80189C90(StageActor *arg0) {
    s16 t;
    u8 *q;

    t = (u16)arg0->unkFC;
    if (t < 0xD) {
        QueueImage(D_sc03_028_80190918[t >> 1]);
        if (arg0->unkFC == 5 && arg0->parent->unkFC == 0) {
            q = (u8 *)SpawnActor(arg0->workFE, arg0);
            if (q != 0) {
                AF(q, u8 *, 0x64) = (u8 *)arg0->parent;
                AF(q, s32, 4) = arg0->parent->pos[0].w;
                AF(q, s32, 8) = arg0->parent->pos[1].w + 0xFFFC0000;
                AF(q, s32, 0xC) = arg0->parent->pos[2].w;
                arg0->parent->unkFC = 8;
            }
        }
    } else {
        arg0->state = 2;
    }
}

void func_sc03_028_80189D8C(StageActor *arg0) {
    s16 t;

    if ((GetPlayerByte1C7() & 0x7FFFFFFF) == 2 && arg0->unkFC == 5) {
        arg0->unkFC--;
    }
    t = arg0->unkFC;
    if (t < 9) {
        QueueImage(D_sc03_028_80190934[t >> 1]);
    } else {
        arg0->state = 2;
    }
}

void func_sc03_028_80189E28(StageActor *arg0) {
    u8 *g;
    s16 t;
    s32 r;

    g = &g_Status;
    if ((u16)arg0->unkFC & 0xF) {
        QueueImage(&D_sc03_028_801E0B5C);
    } else {
        QueueImage(&D_sc03_028_801E0B3C);
    }
    t = AF(arg0, s16, 0xDE);
    if (t >= 0x564 && AF(g, s16, 0x1A) < 0x3D) {
        r = (AF(g, s16, 0x1A) + 0x5A0) < t;
    } else {
        r = AF(arg0, s16, 0xDE) > AF(g, s16, 0x1A);
    }
    if (r == 0) {
        arg0->state = 2;
        arg0->react = 0;
        arg0->hitState = 0x8000;
    }
}

void func_sc03_028_80189EDC(StageActor *o) {
    s32 t;

    QueueImage(D_sc03_028_801908E0[(s16)(((s16)(u16)o->unkFC >> 1) % 6)]);
    o->pos[0].h.i -= 8;
    t = o->timer - 1;
    o->timer = t;
    if (t == 0) {
        FreeActor(o);
    }
}

void func_sc03_028_80189F7C(StageActor *arg0) {
    s32 t;
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, &D_sc03_028_801908C4);
    SetScript(arg0, &D_sc03_028_801908D0);
    arg0->state = 1;
    arg0->reactive = 1;
    arg0->react = 0;
    arg0->reactMask = 0;
    arg0->params = &D_sc03_028_8019095C;
    arg0->hitState = 0x8000;
    AF(arg0, u8 *, 0x58) = &D_sc03_028_801907C4;
    arg0->reactOpts |= 2;
    arg0->model->scale.vx = 0x4000;
    arg0->model->scale.vy = 0x4000;
    arg0->model->scale.vz = 0x4000;
    arg0->model->flags |= 0x10;
    arg0->model->unk04 = 0x01000000;
    arg0->timer = 0x20;
    arg0->work10A = 5;
}

void func_sc03_028_8018A078(StageActor *o) {
    s32 t;

    QueueImage(D_sc03_028_801909A4[(s16)(((s16)(u16)o->unkFC >> 1) % 6)]);
    o->pos[0].h.i += 8;
    t = o->timer - 1;
    o->timer = t;
    if (t == 0) {
        o->state = 2;
    }
}

void func_sc03_028_8018A118(StageActor *arg0) {
    s16 t;
    u8 *q;

    t = (u16)arg0->unkFC;
    if (t < 0xD) {
        QueueImage(D_sc03_028_801909DC[t >> 1]);
        if (arg0->unkFC == 5 && arg0->parent->unkFC == 0) {
            q = (u8 *)SpawnActor(arg0->workFE, arg0);
            if (q != 0) {
                AF(q, u8 *, 0x64) = (u8 *)arg0->parent;
                AF(q, s32, 4) = arg0->parent->pos[0].w;
                AF(q, s32, 8) = arg0->parent->pos[1].w + 0xFFFC0000;
                AF(q, s32, 0xC) = arg0->parent->pos[2].w;
                arg0->parent->unkFC = 8;
            }
        }
    } else {
        arg0->state = 2;
    }
}

void func_sc03_028_8018A214(StageActor *arg0) {
    s16 t;

    if ((GetPlayerByte1C7() & 0x7FFFFFFF) == 2 && arg0->unkFC == 5) {
        arg0->unkFC--;
    }
    t = arg0->unkFC;
    if (t < 9) {
        QueueImage(D_sc03_028_801909F8[t >> 1]);
    } else {
        arg0->state = 2;
    }
}

void func_sc03_028_8018A2B0(StageActor *arg0) {
    u8 *g;
    s16 t;
    s32 r;

    g = &g_Status;
    if ((u16)arg0->unkFC & 0xF) {
        QueueImage(&D_sc03_028_801DB07C);
    } else {
        QueueImage(&D_sc03_028_801DB05C);
    }
    t = AF(arg0, s16, 0xDE);
    if (t >= 0x564 && AF(g, s16, 0x1A) < 0x3D) {
        r = (AF(g, s16, 0x1A) + 0x5A0) < t;
    } else {
        r = AF(arg0, s16, 0xDE) > AF(g, s16, 0x1A);
    }
    if (r == 0) {
        arg0->state = 2;
        arg0->react = 0;
        arg0->hitState = 0x8000;
    }
}

void func_sc03_028_8018A364(StageActor *o) {
    s32 t;

    QueueImage(D_sc03_028_801909A4[(s16)(((s16)(u16)o->unkFC >> 1) % 6)]);
    o->pos[0].h.i -= 8;
    t = o->timer - 1;
    o->timer = t;
    if (t == 0) {
        FreeActor(o);
    }
}

void func_sc03_028_8018A404(StageActor *arg0) {
    s32 t;
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, &D_sc03_028_80190988);
    SetScript(arg0, &D_sc03_028_80190994);
    arg0->state = 1;
    arg0->reactive = 1;
    arg0->react = 0;
    arg0->reactMask = 0;
    arg0->params = &D_sc03_028_80190A20;
    arg0->hitState = 0x8000;
    AF(arg0, u8 *, 0x58) = &D_sc03_028_801907C4;
    arg0->reactOpts |= 2;
    arg0->model->scale.vx = 0x4000;
    arg0->model->scale.vy = 0x4000;
    arg0->model->scale.vz = 0x4000;
    arg0->model->flags |= 0x10;
    arg0->model->unk04 = 0x01000000;
    arg0->timer = 0x20;
    arg0->work10A = 5;
}

void func_sc03_028_8018A500(u8 *o) {
    s32 t;
    s32 r;

    t = AllocActorModel();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    func_8001CA1C(t, &D_sc03_028_80190B58);
    SetScript(o, &D_sc03_028_80190BA0);
    AF(o, s16, 2) = 1;
    StopWithGravity(o);
    r = (rand() & 0x3FF) + 0x600;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x70) + r) & 0xFFF;
    UpdateModelZYX(o);
    SetLocalVelocityXZ(o, &D_sc03_028_80190BD8);
    AF(o, s16, 0x16) = -((rand() & 3) + 5);
    AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x3000;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x3000;
    AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x3000;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
}

void func_sc03_028_8018A618(s32 arg0, s32 arg1) {
    if ((MoveCollide(arg0, arg1) != 0) || (AF(arg0, s16, 0xA) >= 0x200)) {
        FreeActor(arg0);
    }
}

void func_sc03_028_8018A664(u8 *arg0) {
    void *temp_a0;

    AF(AF(arg0, void *, 0x20), s32 *, 0x20) = &D_800D387C;
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x9C;
    StartSpriteAnim((s32) AF(arg0, void *, 0x20), (s32) (arg0 + 0x24), (s32) &D_800D3888);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_028_8018A6E0(s32 arg0, s32 arg1) {
    MoveProp(arg0, arg1);
    if (StepSpriteAnim(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) {
        FreeProp(arg0);
    }
}

void func_sc03_028_8018A724(u8 *arg0) {
    s32 temp_a2;

    func_8001CD50(AF(arg0, s32, 0x20), (s32) &D_sc03_028_801EC458);
    temp_a2 = AF(arg0, s32, 0x20);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x100);
    AF(temp_a2, s32, 4) = (s32) (AF(temp_a2, s32, 4) | 0x50000000);
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0x400;
    AF(arg0, s16, 0x2C) = 0x10;
    SetShapeCircle((s32) &D_sc03_028_801EC458, 0x10);
    *(B4 *) &D_sc03_028_801EC458 = *(B4 *) &D_sc03_028_801EA170;
    *(B4 *) &D_sc03_028_801EC45C = *(B4 *) &D_sc03_028_801EA174;
    AF(AF(arg0, s32, 0x20), s16, 0x1E) = 0xC00;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_028_8018A800(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0x2C);
    if (temp_v0 < 0x700) {
        AF(arg0, s16, 0x2C) = (s16) (temp_v0 + 0x30);
        func_sc03_028_801860F8((s32) &D_sc03_028_801EC45C, -4);
        SetShapeCircle((s32) (&D_sc03_028_801EC45C - 4), (s32) (u16) AF(arg0, s16, 0x2C));
        return;
    }
    FreeProp((s32) arg0);
}

void func_sc03_028_8018A878(StageActor *arg0) {
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
    func_8001C810(temp_v0, (s32) &D_sc03_028_801E2B98);
    temp_v0_2 = AllocActorModel();
    arg0->ext0 = temp_v0_2;
    if (temp_v0_2 == 0) {
        RejectSpawn(arg0);
        arg0->model->type = 0;
        return;
    }
    func_8001C810(temp_v0_2, (s32) &D_sc03_028_801E3348);
    temp_v1 = arg0->model;
    arg0->reactive = 0;
    temp_v1->unk04 = (s32) ((s32)temp_v1->unk04 | 0x50000000);
    temp_v1_2 = arg0->model;
    temp_v1_2->flags = (u16) (temp_v1_2->flags | 0x10);
    temp_v1_3 = (s32)arg0->ext0;
    AF(temp_v1_3, s32, 4) = (s32) (AF(temp_v1_3, s32, 4) | 0x50000000);
    temp_v1_4 = (s32)arg0->ext0;
    AF(temp_v1_4, u16, 0x2C) = (u16) (AF(temp_v1_4, u16, 0x2C) | 0x10);
    func_sc03_028_801861DC(arg0);
}

void func_sc03_028_8018A960(StageActor *arg0) {
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
    func_sc03_028_8018620C();
}

void func_sc03_028_8018AA58(u8 *arg0) {
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
            func_sc03_028_80186234((s32) arg0);
        }
        break;
    }
    DrawFadeWhite((s32) AF(arg0, u8, 0xFC), 0);
}

void func_sc03_028_8018AB28(StageActor *arg0, s32 arg1) {
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

void func_sc03_028_8018AB7C(StageActor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = arg0->unkFC;
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 - 1;
        arg0->unkFC = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            arg0->state = 3;
            arg0->animTimer = 1;
            arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i - 0x80);
        }
    }
}

void func_sc03_028_8018ABC4(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    StopWithGravity((s32) arg0);
    AF(arg0, s16, 0xFC) = (s16) ((rand() & 0xFF) - 0x80);
    AF(arg0, s16, 0xFE) = (s16) ((rand() & 0xFF) - 0x80);
    AF(arg0, s16, 0x100) = (s16) ((rand() & 0xFF) - 0x80);
    AF(arg0, s16, 0x12) = (s16) ((rand() & 0xF) - 8);
    AF(arg0, s16, 0x1A) = (s16) ((rand() & 0xF) - 8);
    AF(arg0, s16, 0x16) = -0x38;
    AF(arg0, s32, 0x1C) = 0x5A;
    AF(arg0, s16, 2) = 4;
}

void func_sc03_028_8018AC5C(StageActor *arg0) {
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

void func_sc03_028_8018AD80(void) {
    UpdateClockTint();
}

s32 func_sc03_028_8018ADA0(void) {
    return func_8013C414((s32) &D_sc03_028_80191734, (s32) &D_sc03_028_801E461C);
}

s32 func_sc03_028_8018ADD0(void) {
    return func_8013C360((s32) &D_sc03_028_801E461C);
}

s32 func_sc03_028_8018ADF8(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x18;
    if ((u32) (arg0 - 0x96) < 0x32U) {
        var_v0 = 0x21;
    }
    return var_v0;
}

void func_sc03_028_8018AE14(StageActor *arg0) {
    D_sc03_028_80190CAC[arg0->state]();
}

s32 func_sc03_028_8018AE50(u8 *arg0, s32 *t) {
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

void func_sc03_028_8018AE98(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    AF(arg0, s32 *, 0x58) = &D_sc03_028_80190C9C;
    arg0->hitState = 0x80;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc03_028_8018AF04(StageActor *arg0) {
    if ((GetProgress() == 0xC8) && !(GetFlag(0x118) & 0xFF)) {
        arg0->message = func_sc03_028_8018AE50(arg0, (s32) &D_sc03_028_80190C8C);
    }
}

void func_sc03_028_8018AF60(u8 *arg0) {
    D_sc03_028_80190E28[AF(arg0, u16, 2)]();
}

void func_sc03_028_8018AF9C(u8 *o) {
    u8 *a;
    B4 *p;

    a = AllocSprite16To3E();
    if (a != 0) {
        AF(o, u8 *, 0x20) = a;
        InitSpriteKind0(a, &D_sc03_028_80190D18, D_sc03_028_80190CB4[AF(o, s32, 0x2C)].x, D_sc03_028_80190CB4[AF(o, s32, 0x2C)].y);
        AF(a, u8, 0x27) = D_sc03_028_80190CE0[AF(o, s32, 0x2C)];
        AF(a, s16, 0x2C) = 3;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xA) = 0x50;
        D_sc03_028_80190E18 = D_sc03_028_80190CEC[AF(o, s32, 0x2C)];
        D_sc03_028_80190E14 = AF(&D_sc03_028_80190E14, B4, 0x4);
        D_sc03_028_80190DE4 = AF(&D_sc03_028_80190DE4, B4, 0x30);
        D_sc03_028_80190DE0 = AF(&D_sc03_028_80190DE0, B4, 0x4);
        D_sc03_028_80190DB0 = AF(&D_sc03_028_80190DB0, B4, 0x30);
        D_sc03_028_80190DAC = AF(&D_sc03_028_80190DAC, B4, 0x4);
        D_sc03_028_80190D7C = AF(&D_sc03_028_80190D7C, B4, 0x30);
        p = &D_sc03_028_80190D78;
        *p = D_sc03_028_80190D7C;
        D_sc03_028_80190D50 = *p;
        AF(o, s16, 2)++;
    } else {
        FreeEffect(o);
    }
}

void func_sc03_028_8018B19C(s32 arg0) {
    func_sc03_028_8018B1DC(arg0);
}

void func_sc03_028_8018B1BC(s32 arg0) {
    FreeEffect(arg0);
}

s32 func_sc03_028_8018B1DC(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    DrawPrimF4Screen((s32) &D_sc03_028_80190D30);
    var_s1 = 0;
    var_s0 = &D_sc03_028_80190D58;
    do {
        DrawPrimG4ScreenDithered((s32) var_s0);
        var_s1 += 1;
        temp_v0 = var_s1 < 4;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x34);
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc03_028_8018B234(s32 arg0) {
    return SpawnEffectOn(0x28, 0, arg0, 0);
}

void func_sc03_028_8018B260(void) {
    s32 temp_v0;

    temp_v0 = FindEffectByKind((s32) &g_Player, 0x28);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 2) = (u16) (AF(temp_v0, u16, 2) + 1);
    }
}

void func_sc03_028_8018B2A4(u8 *arg0) {
    D_sc03_028_80190E8C[AF(arg0, u16, 2)]();
}

void func_sc03_028_8018B2E0(s32 arg0) {
    func_sc03_028_8018B310();
    NextObjState(arg0);
}

void func_sc03_028_8018B310(u8 *o) {
    StartRumbleScript(&D_80062C14);
    ShowQueuedDamageNumber(o);
    SetPlayerMotion(o, &D_sc03_028_80190E34);
    AF(o, s32, 0x234) = 0;
    SetFallSpeed(o, 0xFFC00000);
    ClearPlayerHittable(o);
    PlaySe(0x451);
    SetObjTimer(o, 0x12C);
    NextObjState(o);
}

void func_sc03_028_8018B390(u8 *o) {
    s32 pad[8];
    ClearPlayerHittable(o);
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
    switch (func_801535F4(o)) {
    case 1:
        func_sc03_028_8018B540(o);
        EnterPlayerStanding(o);
        SpawnEffect(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    case 2:
        func_sc03_028_8018B540(o);
        StartPlayerSlide(o);
        SpawnEffect(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    case 0:
    default:
        if (TickObjTimer(o) != 0) {
            func_sc03_028_8018B540(o);
            EnterPlayerStanding(o);
            SpawnEffect(2, o, 0, 0, 0, 1, 0);
            func_80165718(o);
        }
        break;
    }
}

s32 func_sc03_028_8018B540(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

void func_sc03_028_8018B588(u8 *arg0) {
    D_sc03_028_80190EB4[AF(arg0, u16, 2)]();
}

void func_sc03_028_8018B5C4(s32 arg0) {
    func_sc03_028_8018B5F4();
    NextObjState(arg0);
}

void func_sc03_028_8018B5F4(u8 *o) {
    StartRumbleScript(&D_80062C14);
    ShowQueuedDamageNumber(o);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x42) + 0x800) & 0xFFF;
    SetPlayerMotion(o, &D_sc03_028_80190E34);
    SetObjTimer(o, 0x20);
    SetObjPush(o, 0, 0xFFFF0000, 0xFFE80000);
    SetFallSpeed(o, 0xFFF00000);
    ClearPlayerHittable(o);
    PlaySe(0x451);
    NextObjState(o);
}

void func_sc03_028_8018B698(s32 arg0, s32 arg1) {
    s32 pad[8];
    ClearPlayerHittable(arg0, arg1);
    SetVelFromPushKeepAxes(arg0);
    MoveObjByVel(arg0);
    AddFallSpeedLimited(arg0, 0x18000);
    ApplyFallSpeed(arg0);
    if (!(D_800B99DA & 1)) {
        SpawnEffect2(arg0, 2);
    }
    if (func_801535F4(arg0) == 4) {
        StartCameraShake((s32) &D_sc03_028_80190E98);
        goto block_5;
    }
    if (TickObjTimer(arg0) != 0) {
block_5:
        SetFallSpeed(arg0, 0x40000);
        NextObjState(arg0);
        return;
    }
    if (AF(arg0, s16, 0xE) < 0x240) {
        AF(arg0, s16, 0xE) = 0x240;
    }
}

void func_sc03_028_8018B774(u8 *o) {
    s32 pad[8];
    ClearPlayerHittable(o);
    AddFallSpeedLimited(o, 0x18000);
    ApplyFallSpeed(o);
    if (AF(o, s32, 0x234) == 0 && AF(o, s32, 0x34) >= 0 && (AF(o, u16, 0xB8) & 0x8000)) {
        AF(o, u16, 0xB8) = AF(o, u16, 0xBA);
    }
    switch (func_801535F4(o)) {
    case 1:
        func_sc03_028_8018B87C(o);
        EnterPlayerStanding(o);
        SpawnEffect(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    case 2:
        func_sc03_028_8018B87C(o);
        StartPlayerSlide(o);
        SpawnEffect(2, o, 0, 0, 0, 1, 0);
        func_80165718(o);
        break;
    case 0:
        break;
    }
}

s32 func_sc03_028_8018B87C(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

void func_sc03_028_8018B8C4(u8 *arg0) {
    D_sc03_028_80190EC4[AF(arg0, u16, 2)]();
}

void func_sc03_028_8018B900(s32 arg0) {
    func_sc03_028_8017EE64();
    StartRumbleScript((s32) &D_80062C14);
    ShowQueuedDamageNumber(arg0);
    SetPlayerMotion(arg0, (s32) &D_sc03_028_80190E34);
    AF(arg0, s32, 0x234) = 0;
    SetFallSpeed(arg0, -0x400000);
    ClearPlayerHittable(arg0);
    PlaySe(0x451);
    SetObjTimer(arg0, 0x12C);
    NextObjState(arg0);
    NextObjState(arg0);
}
