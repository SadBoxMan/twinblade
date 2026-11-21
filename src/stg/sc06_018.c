#include "common.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_018_8017BE9C(void) {
}

void func_sc06_018_8017BEA4(void) {
}

void func_sc06_018_8017BEAC(void) {
}

void func_sc06_018_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_018_80196FCC[])();
extern void (*D_sc06_018_80197048[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_018_8017D3B8(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc06_018_80197050[])();
void func_sc06_018_8017D3E0(void);
extern void func_800D1EBC();
extern void (*D_sc06_018_8019705C[])();
extern u8 D_sc06_018_80197068;
extern void StartPlayerActionScript();
extern u8 D_sc06_018_8019706C;
extern void func_sc06_018_8017D4A0();
extern void (*D_sc06_018_80197080[])();
extern void (*D_sc06_018_80197088[])();
extern void (*D_sc06_018_8019714C[])();
extern void (*D_sc06_018_80197184[])();
extern void (*D_sc06_018_801AAF88[])();
extern void (*D_sc06_018_801AAFA8[])();
extern void (*D_sc06_018_801ACD5C[])();
extern void (*D_sc06_018_801B53F4[])();
extern void (*D_sc06_018_801B554C[])();
extern void (*D_sc06_018_801B5580[])();
extern void (*D_sc06_018_801B55A0[])();
extern void (*D_sc06_018_801B55AC[])();
extern void (*D_sc06_018_801CD4B0[])();

void func_sc06_018_8017BEBC(u8 *arg0) {
    D_sc06_018_80196FCC[AF(arg0, u16, 2)]();
}

extern void func_800D22E4();
extern void SetObjTimer();
extern s32 PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();
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
extern void NextState();
extern u8 D_sc06_018_80197118;
extern void (*D_sc06_018_80197140[])();
extern void StartRumbleScript();
extern void CollidePlayerMove();
extern s32 ProbePlatformByMove();
extern void ProbeGroundByMove();
extern s32 func_sc06_018_8017DF54();
extern s32 PlaySe();
extern s32 NextObjState();
extern void PlaySePositional();
extern void DamagePlayerHp();
extern s32 ResetPlayerAfterHit();
extern s8 D_sc06_018_801D4F2B;
extern u8 D_sc06_018_801D4F18[];
extern s32 FreeEffect();
extern void func_801495C4();
extern s32 TickObjTimer();
extern void func_sc06_018_8017E574();
extern s32 DespawnActor();
extern void ZeroFill();
extern void func_sc06_018_8017ED60();
extern void (*D_sc06_018_801AAF5C[])();
extern s32 IsActorFar();
extern void GainStat0FromActor();
extern s32 FreeActor();
extern void func_sc06_018_8017EB8C();
extern void SetReactionStep();
extern s32 SpawnKind205();
extern s32 TickTimer();
extern void FinishEnemy();
extern s32 MoveCollidePassable();
extern void EndReaction();
extern void UpdateModelYXZ();
extern void MoveObject();
extern u8 D_800D3918;
extern u8 D_sc06_018_801AAF74;
extern u8 D_sc06_018_801AAF80;
extern void SetLocalVelocity();
extern s32 ActorSegmentDamagesPlayer();
extern s32 D_sc06_018_801D55A0;
extern s32 SpawnActor();
extern u8 D_sc06_018_801B498C;
extern u8 D_sc06_018_801B4A8C;
extern u8 D_sc06_018_801B4B8C;
extern void InitModel();
extern void StopWithGravity();
extern u8 D_sc06_018_801AD514;
extern u8 D_sc06_018_801AD548;
extern u8 D_sc06_018_801B244C;
extern s32 SetupActor();
extern void SnapToGround();
extern u8 D_sc06_018_801AD58C;
extern u8 D_sc06_018_801AD5C0;
extern u8 D_sc06_018_801B31B8;
extern void (*D_sc06_018_801B52BC[])();
extern s32 func_sc06_018_80187250();
extern void func_sc06_018_80187320();
extern void DespawnIfFar();
extern void SpawnHeadMarker();
extern u8 D_sc06_018_801CC1E8;
extern u8 D_sc06_018_801CC180;
extern u8 D_sc06_018_801CC290;
extern u8 D_sc06_018_801CCBA8;
extern u16 D_800B99DA;
extern s16 g_PlayerHitKind;
extern s32 func_sc06_018_80187130();
extern s32 func_sc06_018_8018765C();
extern s32 SpawnKind1C();
extern s32 func_sc06_018_80189E60();
extern u8 D_sc06_018_801CC4D8;
extern s32 g_PlayerFlags;
extern u8 D_sc06_018_801B5164;
extern s32 func_sc06_018_80189284();
extern s32 HeadingToTarget();
extern s32 TurnStep();
extern s32 TargetInFront();
extern u8 D_sc06_018_801CC868;
extern u8 D_sc06_018_801CC530;
extern u8 D_sc06_018_801CC358;
extern u8 D_sc06_018_801CC6E8;
extern void func_sc06_018_80187038();
extern void TakeDamageAndRecoil();
extern u8 D_sc06_018_801B51DC;
extern u8 D_sc06_018_801CCD68;
extern s32 func_sc06_018_801874E4();
extern s32 D_sc06_018_801B535C[];
extern s32 D_sc06_018_801B521C[];
extern void HideModel();
extern void func_sc06_018_80189000();
extern s32 func_sc06_018_8018944C();
extern void DropItem();
extern s32 func_sc06_018_80186EF4();
extern void GiveItem();
extern u8 D_sc06_018_801B54E4;
extern s32 DistSqToPlayer();
extern s32 MoveCollidePassableAt();
extern s32 ActorTouchesPlayer();
extern void DrawPrimF4Mtx();
extern u8 D_800D387C;
extern u8 D_800D3888;
extern void StartSpriteAnim();
extern void MoveProp();
extern s32 StepSpriteAnim();
extern void FreeProp();
extern s32 SetState();
extern void (*D_sc06_018_801CD444[])();
extern void func_sc06_018_8018C3F8();
extern void func_sc06_018_8018AB74();
extern u8 D_sc06_018_801CD3B0;
extern s32 D_sc06_018_801CD478[];
extern s32 D_sc06_018_801CD47C[];
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void func_sc06_018_8018AF88();
extern void func_sc06_018_8018B1D8();
extern void func_sc06_018_8018B4D8();
extern void func_sc06_018_8018BBB8();
extern s32 func_sc06_018_8018B998();
extern void (*D_sc06_018_801CD4D0[])();
extern u8 D_sc06_018_801D55B0;
extern u16 g_PlayerX;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern s32 HeadingToPlayer();
extern void func_sc06_018_8018ABD4();
extern void UpdateModelZYX();
extern s32 func_sc06_018_8018A86C();
extern void func_sc06_018_8018C334();
extern void func_sc06_018_8018B8F8();
extern void func_sc06_018_8018CC88();
extern void func_sc06_018_8018CD04();
extern s32 func_sc06_018_8018D364();
extern s32 SpawnPropAt();

extern void SetClock();
extern void (*D_sc06_018_80197108[])();
extern void CarryPlayer();
extern u8 D_sc06_018_801970C0;
extern u8 D_sc06_018_80197100;
extern void SetModelCullBox();
extern u8 D_sc06_018_80197090;
extern void StartEvent();
extern s32 IsEventDone();
extern void EndEvent();

extern s32 D_sc06_018_801D55A8;
extern s32 TurnStepToTarget();
extern s32 SetForwardVelocity();
extern s32 DistSqToTarget();
extern s32 func_sc06_018_80187844();

extern s32 SpawnPropFrom();

extern s16 D_800B9A08;
extern u8 D_sc06_018_80197120;
extern s32 ShowQueuedDamageNumber();
extern s32 SetPlayerMotion();
extern s32 ClearPlayerHittable();
s32 func_sc06_018_8017E188();
extern s32 D_sc06_018_80193900[];
extern u8 D_sc06_018_801ACC48;

extern u8 D_sc06_018_801B5588;
extern u8 g_PlayerPosX;
extern u8 D_sc06_018_801B54EC;
extern u8 D_sc06_018_801B54F4;
extern u8 D_sc06_018_801CD278;
extern s32 func_sc06_018_80189380();
extern s32 PosDist();
extern s32 SpawnActorArg();

extern void DamageActorsNear();
extern s32 MoveOnGround();

extern u8 D_sc06_018_801B538C;
extern void func_sc06_018_80186D80();

#include "gte.h"
#include "psyq.h"
extern void (*D_sc06_018_801AD5E0[])();
extern void (*D_sc06_018_801AD568[])();
extern void (*D_sc06_018_801AD4E0[])();
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern u8 D_sc06_018_801B4F5C;
extern u8 D_sc06_018_801CC598;
extern u8 D_sc06_018_801CC920;
extern u8 D_sc06_018_801B5174;
extern s32 IsOnScreen();
extern void GetPartLocalMatrix();
extern s32 LocalToWorld();
extern s32 func_sc06_018_80180354();
extern s32 func_sc06_018_8018931C();
typedef struct { u8 r, g, b, cd; } CV;
extern SV8 D_sc06_018_801D542C[4];
extern CV D_sc06_018_801D544C;
extern CV D_sc06_018_801D5450;
extern u8 D_sc06_018_801D5454;
extern u8 D_sc06_018_801D5455;
extern u8 D_sc06_018_801D5456;
extern u8 D_sc06_018_801D5458;
extern u8 D_sc06_018_801D5459;
extern u8 D_sc06_018_801D545A;
extern s32 D_sc06_018_801D545C;
extern void SetIdentityRot();
extern void DrawPrimG4Screen();

typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
extern WorkHead D_800AF630;
extern WMtx D_800AF648;
extern s32 SpawnProp();
extern u8 D_sc06_018_801B47F4;
extern u8 D_sc06_018_801B487C;
extern u8 D_sc06_018_801B4904;
extern s32 D_sc06_018_801AD334[];

extern void *g_ActiveCamera;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;

extern s32 HeadingTo();
extern void *g_PlayerModel;


extern u8 D_sc06_018_801CD4C8;
extern void InitNullModel();
extern UXY * func_sc06_018_8018BFA8();
extern void WorldToLocal();

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
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
extern void func_sc06_018_8017D648();
extern s32 EaseValue();
extern s32 EaseAngle();

extern u8 D_sc06_018_801D4F2C;
extern s32 func_sc06_018_8017E434();

extern void func_sc06_018_80186928();

extern void GetPartWorldMatrix();

extern void func_sc06_018_801876BC();
extern void RestorePrevPos();


extern s32 HeadingToSV();

extern s32 SyncModelPos();

extern u8 D_sc06_018_801CC7A0;

extern u8 D_sc06_018_801CCCA0;
extern u8 D_sc06_018_801B536C;
extern u8 D_sc06_018_801B537C;
extern u8 D_sc06_018_801CD170;
extern s32 D_sc06_018_801B51FC[];
extern s32 D_sc06_018_801B520C[];
extern u8 D_sc06_018_801CCEC0;
extern u8 D_sc06_018_801B53B4;
extern s32 CollidePath();
extern s32 SVecDistSq();
extern u8 GsIDMATRIX;
extern void DrawPrimG4Mtx();

typedef void (*VoidFn)();
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;

extern s32 TraceMap();
extern s32 func_sc06_018_8017EA54();
extern s32 SetLocalVelocityXZ();
extern s32 MoveCollide();
extern s32 D_80126B60;
extern u8 D_sc06_018_801ACD08;
extern u8 D_sc06_018_801AD4D0;
extern u8 D_sc06_018_801B4C8C;
extern u8 D_sc06_018_801B4D7C;
extern u8 D_sc06_018_801B4E6C;
extern s32 func_sc06_018_801808A4();

extern u8 D_sc06_018_801AAE28;
extern u8 D_sc06_018_801AAE5C;
extern u8 D_sc06_018_801AC878;
extern u8 D_sc06_018_801ACB50;
extern u8 D_sc06_018_801ACB68;
extern void SpawnShadow();
extern void StopMotion();

extern u8 D_sc06_018_801AAF90;
extern u8 D_sc06_018_801AD450;
extern void ShowDamage();
extern void ShowDefeat();
extern void GainStat3FromActor();
extern void GainStat2FromActor();
extern u8 D_sc06_018_801AD374;
extern u8 D_sc06_018_801AD394;
extern u8 D_sc06_018_801AD3B4;
extern u8 D_sc06_018_801AD3BC;
extern u8 D_sc06_018_801AD470;
extern u8 D_sc06_018_801AD4B0;
extern u8 D_sc06_018_801B16DC;


extern void SetScript();
extern void RotTransSV();
extern s32 PathHitsModel();
extern void HitPlayer();
extern SV8 D_sc06_018_801B5394[];
extern s32 g_PlayerHitData;
extern u8 g_GroundNormal;
extern void func_80143994();
extern void func_8001CA1C();
extern u8 D_sc06_018_801B545C;
extern u8 D_sc06_018_801B5490;
extern u8 D_sc06_018_801B5430;
typedef struct { SV8 v[4]; CV4 c[4]; s32 code; } Q34;

extern s32 PosDistSq();
extern void SetModelParts();
extern u8 D_sc06_018_801CD0E8;
extern u8 D_sc06_018_801BC090;
extern u8 D_sc06_018_801BBC78;

extern u8 D_sc06_018_801BC494;
extern s32 GroundDistSqToPlayer();
extern void ProjectPoint();
extern s32 rand();
extern void RotMatrixZYX();
extern void SpawnEffect();
extern SV8 D_sc06_018_801B54D4[];

extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc06_018_801ACD24;
extern WMtx *D_sc06_018_801ACD58;
extern WMtx D_sc06_018_801D5580[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern s32 FindGround();
extern s8 D_sc06_018_801ACD10[];
extern s32 GroundDistSqTo();
extern s32 HeadingToPoint();
extern s16 D_801270C0;
extern u8 D_sc06_018_801AD3C4;
extern u8 D_sc06_018_801AD3D0;
extern s32 PointHitsPlayer();


typedef struct { u8 b[0x34]; } T34;
extern T34 D_sc06_018_801B5094[];
extern u8 D_sc06_018_801B522C;
extern u8 D_sc06_018_801B51B4;
extern s16 D_sc06_018_801CC674;
extern s16 D_sc06_018_801CC4CC;
extern u8 g_Actors;
extern s32 AngleToVec2();


extern u8 D_sc06_018_801B7EB8;
extern u8 D_sc06_018_801BB67C;
typedef struct { s16 m[3][3]; s32 t[3]; } MTX;
extern u8 D_sc06_018_801B517C;
extern u8 D_sc06_018_801B518C;
extern u8 D_sc06_018_801CC3D0;
extern void FaceHelper();
extern void ApplyMatrixLV();
typedef struct { s32 vx, vy, vz, pad; } VEC;

extern SV8 D_sc06_018_801B5400[];
extern s32 MoveCollideAt();
extern void ToggleModel();

extern u16 g_PlayerTarget;
extern u16 D_80126CB6;
extern u16 D_80126CB8;
extern u8 D_sc06_018_801B54C4[];
extern u8 D_sc06_018_801B5578;

extern u8 D_sc06_018_801B5184;
extern s32 PosSVecDistSq();
extern u8 D_sc06_018_801B5084;
extern u8 D_sc06_018_801B51EC;
extern u8 *D_sc06_018_801B534C[];
extern u8 D_sc06_018_801B51CC;
extern u8 D_sc06_018_801B51BC;
extern void TakeDamage();
extern OtRef g_WorldOtOrg[];
extern Ot14 g_WorldOt[];
extern u8 *AllocPrim();
extern s32 AddDrawModeAbr();

extern u8 D_sc06_018_801AAF24;
extern u8 D_sc06_018_801AAF2C;
extern u8 D_sc06_018_801AAF34;

extern u8 D_sc06_018_801D1210;
extern u8 D_sc06_018_801D233C;
extern void func_sc06_018_8018D654();
extern u8 D_sc06_018_801D11F0;
extern void func_sc06_018_8018F060();
extern s32 PathHitsModelTwoCells();
extern s32 SegmentHitsPlayer();
extern s16 g_PlayerHitDamage[];


extern u8 D_sc06_018_801D1200;
extern u8 D_sc06_018_801D11DC;
extern u8 D_sc06_018_801D110C;
extern u8 D_sc06_018_801D57F0[];
extern CV4 D_sc06_018_801D59F0;
extern CV4 D_sc06_018_801D59F4;
extern CV4 D_sc06_018_801D3B14;
extern CV4 D_sc06_018_801D3B18;
extern void SetShapeCircle();
extern u8 D_sc06_018_801D1D50;
extern u8 D_sc06_018_801D10CC;
extern u8 D_sc06_018_801D1258;
extern u8 D_sc06_018_801D1F80;
extern u8 D_sc06_018_801D11C8;
extern u8 D_sc06_018_801D10DC;
extern u8 D_sc06_018_801D1940;
extern u8 D_sc06_018_801D10AC;
extern SV8 D_sc06_018_801D1220;
extern s32 ratan2();
extern s32 rcos();
extern s32 rsin();
extern u8 D_sc06_018_801D1BB0;
extern u8 D_sc06_018_801D10BC;
extern u8 D_sc06_018_801D1268;
extern u8 D_sc06_018_801D10EC;
extern u8 D_sc06_018_801D1278;
extern u8 D_sc06_018_801D1140;
extern u8 D_sc06_018_801D16C0;
extern u8 D_sc06_018_801D11B4;
extern u8 D_sc06_018_801D109C;
extern u8 D_sc06_018_801D1288;
extern u8 D_sc06_018_801D1298;
extern u8 D_sc06_018_801D12A8;
extern u8 D_sc06_018_801D20CC;
extern u8 D_sc06_018_801D10FC;
extern u8 D_sc06_018_801D12B8;
extern u8 D_sc06_018_801D1174;


extern u8 *func_800D21C4();
extern void RotateVectorY();
extern u8 D_sc06_018_80196FC0;
extern u8 D_sc06_018_80196FE0;
extern s32 D_sc06_018_80196FE8;
extern s32 PlayerFlag1000();
extern void StrikeActorFacing();

void func_sc06_018_8017BEF8(u8 *o) {
    V3 t;
    u8 *p;
    s32 a;
    s32 b;
    u32 v;

    p = func_800D21C4(o, &D_sc06_018_80196FC0, 0x26);
    AF(o, u8 *, 0x20) = p;
    if (p != 0) {
        AF(p, s16, 0x28) = 0x234;
        AF(p, s16, 0x2A) = 0x1C0;
        AF(p, s32, 4) |= 0x8000000;
        D_sc06_018_80196FE8 = (rand() & 3) * 0x20000 + (b = (rand() & 3) * 0x8000 + 0x40000);
        v = AF(o, u32, 0x2C) >> 20;
        t.x = v & 0x3FF;
        if (v & 0x200) {
            t.x |= -0x200;
        } else {
            t.x = v & 0x1FF;
        }
        v = AF(o, u32, 0x2C);
        t.z = v & 0x3FF;
        if (v & 0x200) {
            t.z |= -0x200;
        } else {
            t.z = v & 0x1FF;
        }
        a = ratan2(t.x, t.z);
        a = (a = a - 0x1C7) + (rand() & 7) * 0x71;
        AF(p, s16, 0x14) = a;
        RotateVectorY((s16)a, &D_sc06_018_80196FE0, &t);
        AF(o, s32, 0x10) = t.x;
        AF(o, s32, 0x18) = t.z;
        AF(o, s32, 0x14) = 0xFFFC0000;
        SetObjTimer(o, (rand() & 7) | 8);
        AF(o, u16, 2)++;
    } else {
        FreeEffect(o);
    }
}

void func_sc06_018_8017C090(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc06_018_8017C0A4(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0xC000);
    func_800D22E4();
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s32, 0x2C) = 0;
        AF(arg0, s32, 0x10) = (s32) AF(arg0, s32, 4);
        AF(arg0, s32, 0x18) = (s32) AF(arg0, s32, 0xC);
        SetObjTimer((s32) arg0, 0x14);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern u8 D_sc06_018_801CD3D8;
extern void func_sc06_018_8018AB00();
extern u8 D_sc06_018_801CD3C0;
extern u8 D_sc06_018_801D1094;
extern u8 D_sc06_018_801CD4A8;
typedef struct { SV8 v[4]; CV c; s32 code; } Quad28;
extern SV8 D_sc06_018_801CD4E0[];
extern s32 func_sc06_018_8018C090();
extern void SetRotMatrix();
extern void SetTransMatrix();
typedef struct { u8 pad[0x20]; u8 *m; } ObjM;

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
extern s32 AllocSprite16To3E();
extern void func_8001CD9C();
extern void PosToSVec();
extern SV8 D_sc06_018_80197198[];
extern CV *D_sc06_018_8019717C[];

extern s32 DistSq();

extern void func_sc06_018_8017DB20();
extern s32 DrawPrimGT4Screen();

extern u8 D_sc06_018_801CD490;
extern void func_sc06_018_8018B698();
extern u8 D_sc06_018_801CD40C;
extern void RotMatrixY();
extern void ApplyMatrixSV();
extern void func_sc06_018_8018BC40();
extern s32 ActorSegmentHitsPlayer();

extern u8 D_sc06_018_801CF2BC;
extern void func_sc06_018_8018A5D8();
extern void func_sc06_018_8018ACD4();
extern void func_sc06_018_8018AC58();
extern u8 D_sc06_018_801CD3B8;
extern u8 D_sc06_018_801CD458;
extern u16 D_800B99D8;

extern void EnterPlayerStanding();
extern void func_80165718();

extern u8 *D_sc06_018_801B53CC[];
extern u8 D_sc06_018_811B53E4;

extern SV8 g_CameraFocus;
extern s16 D_sc06_018_80197084[];
extern s32 GetObjPadPressed();

extern s16 D_sc06_018_80196FF4;
extern void RotateSVectorY();

void func_sc06_018_8017C120(u8 *arg0) {
    SV8 out;
    u8 *b;
    s16 *p;
    s32 a;

    b = AF(arg0, u8 *, 0x20);
    a = AF(arg0, s32, 0x2C) + 0xE3;
    AF(arg0, s32, 0x2C) = a;
    *(p = &D_sc06_018_80196FF4) = rsin(a) / 256;
    RotateSVectorY(AF(b, s16, 0x14), p - 2, &out);
    AF(arg0, s16, 6) = AF(arg0, u16, 0x12) + out.x;
    AF(arg0, s16, 0xE) = AF(arg0, u16, 0x1A) + out.z;
    if (--AF(arg0, s32, 0x1C) == -1) {
        SetObjTimer(arg0, 0x10);
        AF(arg0, u16, 2)++;
    }
}

void func_sc06_018_8017C1DC(u8 *arg0) {
    void *o;

    o = AF(arg0, void *, 0x20);
    if (AF(arg0, s32, 0x1C) & 1) {
        AF(o, s32, 4) |= 0x80000000;
    } else {
        AF(o, s32, 4) &= 0x7FFFFFFF;
    }
    if (TickObjTimer((s32) arg0) != 0) {
        FreeEffect((s32) arg0);
    }
}

void func_sc06_018_8017C24C(u8 *obj) {
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

void func_sc06_018_8017D12C(void) {
    SetClock(0x01A40000);
}

void func_sc06_018_8017D14C(u8 *arg0) {
    D_sc06_018_80197048[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_018_8017D188(u8 *arg0) {
    func_sc06_018_8017D3B8();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_018_8017D1CC(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc06_018_8017D1F0(u8 *arg0) {
    D_sc06_018_80197050[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_018_8017D22C(u8 *arg0) {
    func_sc06_018_8017D3E0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_018_8017D26C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D0C48(1);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc06_018_8017D2E8(void) {
    func_800D1EBC();
}

void func_sc06_018_8017D308(u8 *arg0) {
    D_sc06_018_8019705C[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_018_8017D344(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc06_018_8017D3B8(void) {
    StartPlayerActionScript((s32) &D_sc06_018_80197068, 0x01000000);
}

void func_sc06_018_8017D3E0(void) {
    StartPlayerActionScript((s32) &D_sc06_018_8019706C, 0x01000000);
}

void func_sc06_018_8017D408(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc06_018_8017D4A0, 0);
    SnapCamera((s32) &g_Camera);
    func_sc06_018_8017D4A0((s32) &g_Camera);
}

void func_sc06_018_8017D4A0(s32 arg0) {
    D_sc06_018_80197080[AF(arg0, u8, 4)]();
}

void func_sc06_018_8017D4DC(u8 *o) {
    SV8 v;
    s16 lo;
    s32 hi;
    s32 a;
    s32 b;
    u8 *p;

    if (GetObjPadPressed(&g_Player) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
        AF(o, s32, 0x14) = D_sc06_018_80197084[AF(o, u8, 5)];
    }
    v = g_CameraFocus;
    if (v.y < -0x150) {
        v.y = -0x150;
    }
    if (v.z > 0x5B0) {
        v.z = 0x5B0;
    }
    if (v.z < -0x880) {
        lo = -0xC0;
        hi = 0xC0;
        a = 0;
        b = 0xA0;
    } else if (v.z < 0x280) {
        lo = -0xC0;
        hi = 0xC0;
        a = 0;
        b = 0xA0;
    } else if (v.x < 0x700) {
        lo = -0xC0;
        hi = 0xA70;
        if (v.x < 0) {
            a = 0;
            b = 0;
        } else {
            a = 0xA0;
            b = 0;
        }
    } else {
        lo = -0xC0;
        hi = 0xA70;
        a = 0;
        b = 0xA0;
    }
    if (v.x < lo) {
        v.x = lo;
    } else if (v.x > hi) {
        v.x = hi;
    }
    p = o;
    AF(p, s16, 0x2E) = a;
    AF(p, s16, 0x32) = b;
    func_sc06_018_8017D648(p, &v);
}

void func_sc06_018_8017D648(u8 *arg0, u8 *arg1) {
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

typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;
typedef struct { u16 a, b, c, d; } U16x4;
typedef struct { s32 a; s32 b; } P8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern VoidFn D_sc06_018_801D12C8[];

extern void func_sc06_018_8018C7A8();


typedef struct { SV8 v[4]; CV4 c; s32 code; } Q1C;
extern s32 g_PadLostFrames;
extern void DrawPrimF4Screen();
extern SV8 D_sc06_018_801D1228[][3];

extern s32 func_sc06_018_801893CC();
extern s32 SpawnActorFromDef();

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
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


extern void EmitProp23();
extern u8 D_sc06_018_801CD460;
extern u8 D_sc06_018_801CD4C0;
extern u8 D_sc06_018_801CD43C;

extern CV4 D_sc06_018_801D57B0;
extern CV4 D_sc06_018_801D57B4;
extern CV4 D_sc06_018_801D3B08;
extern CV4 D_sc06_018_801D3B0C;
extern CV4 D_sc06_018_801D3B10;
extern void func_sc06_018_8018AD74();
extern u8 D_sc06_018_801CD498;

extern u8 *AllocActorSprite();

extern u8 D_sc06_018_801CD468;

typedef struct { u8 a, b; } B2;
typedef struct { u8 type; u8 kind; s16 a[2]; s16 b[2]; s16 x; s16 z; } E14;
typedef struct { s16 h; u8 a, b, c; u8 pad[11]; } Col16;
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
extern s16 g_PlayerFocus;
extern s16 D_80126CB0;

s32 func_sc06_018_8017D7E0(u8 *o) {
    V3 d;

    d.x = g_PlayerFocus - AF(o, s16, 0);
    d.y = 0;
    d.z = D_80126CB0 - AF(o, s16, 4);
    gte_ldlvl(&d);
    gte_sqr0();
    gte_stlvnl(&d);
    return (u32)(d.x + d.y + d.z - 0x90001) <= 0x18FFE;
}

s32 func_sc06_018_8017D874(u8 *o) {
    V3 d;

    d.x = g_PlayerFocus - AF(o, s16, 6);
    d.y = 0;
    d.z = D_80126CB0 - AF(o, s16, 0xE);
    gte_ldlvl(&d);
    gte_sqr0();
    gte_stlvnl(&d);
    return d.x + d.y + d.z > 0xFFFFF;
}

void func_sc06_018_8017D8F8(StageActor *arg0) {
    D_sc06_018_80197088[arg0->state]();
}

void func_sc06_018_8017D934(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;

    arg0->message = 0;
    arg0->workE0 = 0;
    arg0->workE4 = 0;
    arg0->work100 = (u16) (u16)arg0->unkFC;
    arg0->work102 = (u16) (u16)arg0->param;
    temp_s0 = rand();
    arg0->workFE = (s16) ((temp_s0 & 0x1F) + (rand() & 0x1F) + 0x3C);
    NextState((s32) arg0);
}

void func_sc06_018_8017D9A4(StageActor *o) {
    s32 s, c, m, k;
    if (o->workFE == 0) {
        s = rsin(o->work100) / 128;
        o->work100 += o->work102;
        c = rcos(o->work100) / 128;
        o->workE4 += 4;
        if (o->workE4 >= 0x40) {
            o->workE4 = 0;
        }
        o->workE0 += 0xB;
        k = (s32)o->message;
        m = rsin(o->workE0) * 48 / 4096;
        if (o->workE0 >= 0x800) {
            o->state--;
        } else {
            m = m | ((m << 16) | (m << 8));
            func_sc06_018_8017DB20(o, 0, (s16) s, (s16) c, k, m);
            func_sc06_018_8017DB20(o, 1, (s16) s, (s16) c, k, m);
        }
    } else {
        o->workFE--;
    }
}

void func_sc06_018_8017DB20(u8 *o, s32 n, s32 a, s32 b, s32 k, s32 m) {
    typedef struct { SV8 v[4]; XY uv[4]; s32 c[4]; s32 code; u8 tp; } P;
    P q;
    XY xy;
    P *p;
    p = &q;
    PosToSVec(o + 4, &xy);
    p->v[0].x = xy.x + a;
    p->v[0].y = xy.y + 0x80;
    p->v[1].x = xy.x + b;
    p->v[1].y = xy.y - 0x80;
    switch (n) {
    case 0:
        p->v[2].x = xy.x - 0xA0;
        p->v[2].y = xy.y + 0x80;
        p->v[3].x = xy.x - 0xA0;
        p->v[3].y = xy.y - 0x80;
        break;
    case 1:
        p->v[2].x = xy.x + 0xA0;
        p->v[2].y = xy.y + 0x80;
        p->v[3].x = xy.x + 0xA0;
        p->v[3].y = xy.y - 0x80;
        break;
    }
    p->v[0].z = 0;
    p->c[0] = p->c[1] = k;
    p->c[2] = p->c[3] = m;
    p->uv[0].x = AF(o, s32, 0xE4) + 0xC00;
    p->uv[0].y = 0x100;
    p->uv[1].x = AF(o, s32, 0xE4) + 0xC3F;
    p->uv[1].y = 0x100;
    p->uv[2].x = AF(o, s32, 0xE4) + 0xC00;
    p->uv[2].y = 0x13F;
    p->uv[3].x = AF(o, s32, 0xE4) + 0xC3F;
    p->uv[3].y = 0x13F;
    p->tp = 0x36;
    p->code = 0x50000000;
    DrawPrimGT4Screen(p);
}

s32 func_sc06_018_8017DC58(void) {
    return 0x7E;
}

void func_sc06_018_8017DC60(StageActor *arg0) {
    D_sc06_018_80197108[arg0->state]();
    if (arg0->kind != 0) {
        CarryPlayer((s32) arg0);
    }
}

s32 RiseAndBob(u8 *arg0) {
    s16 temp_v0_2;
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, u16, 0xA) - 8;
        AF(arg0, u16, 0xA) = temp_v0;
        if ((s16) temp_v0 < -0x5F) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            PlaySoundId(0xB02, 0);
            return 0;
        }
block_7:
        return 0;
    case 1:
        temp_v0_2 = AF(arg0, u16, 0xFC) + 0x40;
        AF(arg0, u16, 0xFC) = (u16) temp_v0_2;
        AF(arg0, u16, 0xA) = (u16) (-0x60 - (rsin((s32) temp_v0_2) >> 5));
        if ((s16) AF(arg0, u16, 0xFC) >= 0x400) {
            return 1;
        }
        goto block_7;
    default:
        return 0;
    }
}

void func_sc06_018_8017DD88(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc06_018_801970C0) != 0) {
        SetModelCullBox(arg0->model, 0xC8, 0x168);
        arg0->reactive = 1;
        arg0->reactMask = -1;
        AF(arg0, s16, 0xAE) = -1;
        arg0->state = 1;
        arg0->targetClass = 0;
        SetScript(arg0, (s32) &D_sc06_018_80197100);
        arg0->timer = 0xA;
    }
}

void EventObjStart(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        StartEvent((s32) arg0, (s32) &D_sc06_018_80197090);
        AF(arg0, s16, 2) = 2;
        PlaySoundId(0xB23, 0);
    }
}

void EventObjWait(s32 arg0) {
    if (IsEventDone() != 0) {
        EndEvent(arg0);
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc06_018_8017DEA4(void) {
}

void func_sc06_018_8017DEAC(u8 *arg0) {
    StartRumbleScript((s32) &D_sc06_018_80197118);
    D_sc06_018_80197140[AF(arg0, u16, 2)](arg0);
}

void func_sc06_018_8017DF04(s32 arg0) {
    CollidePlayerMove();
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    func_sc06_018_8017DF54(arg0);
    PlaySe(0x92F);
    NextObjState(arg0);
}

s32 func_sc06_018_8017DF54(s32 arg0) {
    if (D_800B9A08 == 0x3083) {
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 8);
    }
    PlaySe(0x451);
    ShowQueuedDamageNumber(arg0);
    SetPlayerMotion(arg0, (s32) &D_sc06_018_80197120);
    ClearPlayerHittable(arg0);
    AF(arg0, u8, 0xDE) = 0xA;
    AF(arg0, u8, 0xDF) = 0;
    func_sc06_018_8017E188();
    return NextObjState(arg0);
}

void func_sc06_018_8017DFD8(u8 *o) {
    SV8 v;
    s32 k;
    s32 r0;
    s32 r1;
    s32 r2;
    u8 t;

    PosToSVec(o + 4, &v);
    v.y -= 0x40;
    while (k < 3) {
        k = func_sc06_018_8017E1AC();
        if (k >= 0) {
            SpawnEffect(0x51, o, v.x, v.y, v.z, k, 1);
            r0 = rand();
            r1 = rand();
            r2 = rand();
            SpawnEffect(0x52, o, 0, -0x20, 0x10, (s16)((r0 & 3) * 0x400 + (r1 & 3) * 0xFA + (r2 & 3) * 0x44), 1);
        }
    }
    t = AF(o, u8, 0xDE);
    AF(o, u8, 0xDE) = t + 0xFF;
    if (t == 0) {
        func_sc06_018_8017E134(o);
        EnterPlayerStanding(o);
        func_80165718(o);
    }
}

s32 func_sc06_018_8017E134(s32 arg0) {
    PlaySePositional(4, 0x92F);
    PlaySe(0x930);
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

s32 func_sc06_018_8017E188(s32 arg0) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0x13;
    var_v0 = &D_sc06_018_801D4F2B;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    return (s32) var_v0;
}

s32 func_sc06_018_8017E1AC(void) {
    s32 i;
    s32 one;
    u8 *p;

    i = 0;
    one = 1;
    for (p = &D_sc06_018_801D4F18; i < 0x14; i++, p++) {
        if (*p != 0) {
            continue;
        }
        *p = one;
        return i;
    }
    return -1;
}

void func_sc06_018_8017E1F0(u8 *arg0) {
    D_sc06_018_8019714C[AF(arg0, u16, 2)]();
}

void func_sc06_018_8017E22C(u8 *o) {
    u8 *p;
    u8 *e;
    u8 *q;

    p = (AF(o, s32, 0x2C) << 6) + &D_sc06_018_801D4F2C;
    e = (u8 *)AllocSprite16To3E();
    q = e;
    AF(o, u8 *, 0x20) = e;
    if (e != 0) {
        func_8001CD9C(e, p);
        SetShapeCircle(p, 0x10);
        func_sc06_018_8017E420(p);
        AF(e, s32, 4) |= 0x50000000;
        if (AF(o, s32, 0x2C) != 0) {
            AF(e, s16, 0x18) = AF(e, s16, 0x1A) = (rand() & 3) * 0x800 + 0x1000;
            AF(o, s16, 0x12) = (rand() & 0xF) + 3;
            if (rand() & 1) {
                AF(o, s16, 0x12) = -AF(o, s16, 0x12);
            }
            AF(o, s16, 0x1A) = (rand() & 0xF) + 3;
            if (rand() & 1) {
                AF(o, s16, 0x1A) = -AF(o, s16, 0x1A);
            }
        } else {
            AF(q, s16, 0x18) = AF(q, s16, 0x1A) = 0x4000;
        }
        AF(o, u16, 2)++;
    } else {
        func_sc06_018_8017E3F0(o);
    }
}

void func_sc06_018_8017E378(u8 *arg0) {
    s32 t;
    u8 *p;
    u16 a;
    u16 e;

    t = AF(arg0, s32, 0x2C);
    p = (t << 6) + (u8 *)&D_sc06_018_801D4F2C;
    if (t != 0) {
        AF(arg0, u16, 6) += AF(arg0, u16, 0x12);
        e = AF(arg0, u16, 0xE);
        a = AF(arg0, u16, 0x1A);
        AF(arg0, u16, 0xE) = e + a;
        if (func_sc06_018_8017E434((s32) arg0, (s32) p, (s32) a) == 0) {
            return;
        }
    }
    func_sc06_018_8017E3F0((s32) arg0);
}

s32 func_sc06_018_8017E3F0(s32 arg0) {
    D_sc06_018_801D4F18[AF(arg0, s32, 0x2C)] = 0;
    return FreeEffect(arg0);
}

void func_sc06_018_8017E420(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0) = 0xF0F0F0;
    AF(arg0, s32, 4) = 0;
}

s32 func_sc06_018_8017E434(u8 *o, u8 *p) {
    s32 v;

    if (AF(o, s32, 0x30) == 0) {
        v = p[1];
        v -= 0x20;
    } else {
        v = p[2];
        v -= 0x20;
    }
    if (v > 0) {
        if (AF(o, s32, 0x30) == 0) {
            v = 0xFF0000 | (v << 8) | v;
        } else {
            v = (v << 16) | 0xFFFF;
        }
        AF(p, s32, 0) = v;
        return 0;
    }
    return 1;
}

void func_sc06_018_8017E49C(u8 *arg0) {
    D_sc06_018_80197184[AF(arg0, u16, 2)]();
}

void func_sc06_018_8017E4D8(u8 *arg0) {
    s32 pad[10];
    func_801495C4(AF(arg0, s32, 0x34), (s32) (arg0 + 4));
    SetObjTimer((s32) arg0, 3);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc06_018_8017E524(s32 arg0) {
    if (TickObjTimer(arg0) != 0) {
        FreeEffect(arg0);
        return;
    }
    func_sc06_018_8017E574(arg0);
}

void func_sc06_018_8017E56C(void) {
}

void func_sc06_018_8017E574(u8 *o) {
    SV8 m;
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 i;
    s32 j;
    CV *col;

    col = D_sc06_018_8019717C[AF(o, s32, 0x30)];
    AF(o, s16, 0x10) = AF(o, s32, 0x2C);
    PosToSVec(o + 4, &m);
    for (j = 0; j < 4; j++) {
        a.x = 0;
        a.y = 0;
        a.z = 0;
        b = a;
        c = a;
        for (i = 0; i < 4; i++) {
            d = D_sc06_018_80197198[i];
            AF(o, s16, 0x12) = i + j;
            func_sc06_018_8017E6D8(o, &m, &a, &b, &c, &d, o + 0x10, &col[i]);
        }
    }
}

void func_sc06_018_8017E6D8(u8 *arg0, SV8 *arg1, SV8 *arg2, SV8 *arg3, SV8 *arg4, SV8 *arg5,
                            s16 *arg6, CV *arg7) {
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
    d = D_sc06_018_801D542C;
    if (*(s16 *)(arg0 + 0x12) == 0) {
        D_sc06_018_801D545C = 0x50000000;
        D_sc06_018_801D5454 = 0;
        D_sc06_018_801D5455 = 0;
        D_sc06_018_801D5456 = 0;
        D_sc06_018_801D5458 = 0;
        D_sc06_018_801D5459 = 0;
        D_sc06_018_801D545A = 0;
    }
    D_sc06_018_801D544C = arg7[0];
    D_sc06_018_801D5450 = arg7[1];
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

s32 func_sc06_018_8017EA54(u8 *o, s32 d0) {
    s16 d = d0;
    SV8 a;
    SV8 b;
    s32 s;
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA) - 0x20;
    a.z = AF(o, s16, 0xE);
    s = rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF);
    b.y = a.y;
    b.x = a.x - ((s * d) >> 12);
    b.z = a.z - ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    if (!(TraceMap(1, &a, &b) & 0x8000)) return 0;
    AF(o, s16, 6) = b.x + ((rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    AF(o, s16, 0xE) = b.z + ((rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    return 1;
}

void func_sc06_018_8017EB8C(o)
    u8 *o;
{
    u8 *c;
    if (AF(o, u16, 0) == 0) return;
    c = AF(o, u8 *, 0xCC);
    AF(c, s16, 8) = AF(o, s16, 6);
    AF(c, s16, 0xA) = AF(o, s16, 0xA);
    AF(c, s16, 0xC) = AF(o, s16, 0xE);
    AF(c, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(c, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFC);
    AF(c, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    AF(c, s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x18);
    AF(c, s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1A);
    AF(c, s16, 0x1C) = AF(AF(o, u8 *, 0x20), s16, 0x1C);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(c, s32, 4) |= 0x80000000;
    } else {
        AF(c, s32, 4) &= 0x7FFFFFFF;
    }
    c = AF(o, u8 *, 0xD0);
    AF(c, s16, 8) = AF(o, s16, 6);
    AF(c, s16, 0xA) = AF(o, s16, 0xA);
    AF(c, s16, 0xC) = AF(o, s16, 0xE);
    AF(c, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(c, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12) + AF(o, s16, 0xFE);
    AF(c, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    AF(c, s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x18);
    AF(c, s16, 0x1A) = AF(AF(o, u8 *, 0x20), s16, 0x1A);
    AF(c, s16, 0x1C) = AF(AF(o, u8 *, 0x20), s16, 0x1C);
    if (AF(AF(o, u8 *, 0x20), s32, 4) & 0x80000000) {
        AF(c, s32, 4) |= 0x80000000;
    } else {
        AF(c, s32, 4) &= 0x7FFFFFFF;
    }
}

void func_sc06_018_8017ED60(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 v;
    if (AF(o, u16, 0) == 0) return;
    v = AF(o, s16, 0x84);
    if (v == 0) {
        pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
        pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x849, (a | (x | 0x3000)) & 0xFFFF);
        }
        AF(o, s16, 0x84) = 10;
    } else {
        AF(o, s16, 0x84) = v - 1;
    }
    AF(o, s16, 0xFC) += 0x280;
    AF(o, s16, 0xFE) -= 0x280;
    func_sc06_018_8017EB8C(o);
}

void func_sc06_018_8017EF0C(StageActor *o) {
    SV8 v;
    u8 *pl = g_ActiveCamera;
    u8 *c;
    if (o->kind == 0) return;
    switch (o->timer & 3) {
    case 0:
        c = (u8 *)SpawnActor(0x281, o);
        if (c != 0) {
            AF(c, s32, 0x1C) = 2;
            AF(c, s16, 0x12) = (rand() & 0x1F) - 0x10;
            AF(c, s16, 0x16) = -((rand() & 0xF) + 0x10);
            AF(c, s16, 0x1A) = (rand() & 0x1F) - 0x10;
        }
        break;
    case 1:
        break;
    case 2:
    case 3:
        c = (u8 *)SpawnProp(0x23);
        if (c != 0) {
            AF(c, s16, 6) = o->pos[0].h.i + (rand() & 0x3F) - 0x20;
            AF(c, s16, 0xA) = o->pos[1].h.i + (rand() & 0x3F) - 0x30;
            AF(c, s16, 0xE) = o->pos[2].h.i + (rand() & 0x3F) - 0x20;
            AF(c, s32, 0x10) = AF(c, s32, 0x14) = AF(c, s32, 0x18) = 0;
            AF(c, s16, 0x34) = (rand() & 0x17FF) + 0x800;
            v.x = AF(pl, s32, 0x5C) - AF(c, s16, 6);
            v.y = AF(pl, s32, 0x60) - AF(c, s16, 0xA);
            v.z = AF(pl, s32, 0x64) - AF(c, s16, 0xE);
            VectorNormalSS(&v, &v);
            AF(c, s16, 6) += v.x >> 6;
            AF(c, s16, 0xA) += v.y >> 6;
            AF(c, s16, 0xE) += v.z >> 6;
        }
        break;
    }
    func_sc06_018_8017EB8C(o);
}

void func_sc06_018_8017F0F4(u8 *o) {
    V3 v;
    s32 d;
    s32 r;
    s16 h;
    s16 y;

    h = AF(o, s16, 0x8A);
    y = AF(o, s16, 0xA);
    if (y >= h - 8) {
        if (AF(o, s32, 0x48) >= 0) {
            AF(o, s32, 0x48) = -0x8000;
            AF(o, s32, 0x14) >>= 1;
        }
    } else if (h + 8 >= y && AF(o, s32, 0x48) <= 0) {
        AF(o, s32, 0x48) = 0x8000;
        AF(o, s32, 0x14) >>= 1;
    }
    if (AF(o, s32, 0xDC) < -0x40000) {
        AF(o, s32, 0xDC) = -0x40000;
    }
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0xDC);
    SetLocalVelocityXZ(o, &v);
    MoveCollide(o);
    switch (AF(o, u16, 0x34)) {
    case 0:
        if ((d = GroundDistSqTo(o, o + 0x88)) > 0x3FFFF || func_sc06_018_8017EA54(o, 0x51) != 0) {
            r = HeadingToPoint(o + 4, o + 0x88);
            AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 8);
            AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
            SetLocalVelocityXZ(o, &v);
        } else {
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 1:
        AF(o, s32, 0xDC) *= 2;
        if ((d = GroundDistSqTo(o, o + 0x88)) > 0x3FFFF || func_sc06_018_8017EA54(o, 0x51) != 0) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        }
        break;
    case 2:
        r = HeadingToPoint(o + 4, o + 0x88);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 0x10);
        AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        AF(o, s32, 0xDC) >>= 1;
        func_sc06_018_8017EA54(o, 0x51);
        if (AF(o, s16, 0x102) == 0) {
            AF(o, s16, 0x34) = 3;
        } else {
            AF(o, s16, 0x102)--;
        }
        break;
    case 3:
        d = GroundDistSqTo(o, o + 0x88);
        AF(o, s32, 0xDC) *= 2;
        if (func_sc06_018_8017EA54(o, 0x51) != 0) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        } else if (d > 0x40000) {
            r = HeadingToPoint(o + 4, o + 0x88);
            r = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 1);
            if (r < -0xFF || r > 0xFF) {
                AF(o, s16, 0x34) = 2;
                AF(o, s16, 0x102) = (rand() & 7) + 8;
            }
        } else {
            AF(o, s16, 0x34) = 1;
        }
        break;
    }
    if (AF(o, s16, 0x100) != 0) {
        AF(o, s16, 0x100)--;
    } else if ((d = GroundDistSqToPlayer(o)) <= 0x24000) {
        AF(o, s16, 2) = 2;
        AF(o, s16, 0x100) = 0x3C;
    }
}

void func_sc06_018_8017F430(StageActor *o) {
    SV8 tmp;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 v;
    u8 *q;
    s32 t;
    t = o->timer;
    if (t == 0) {
        v = o->work100 - 1;
        o->work100 = v;
        if (v == 0) {
            o->state = 1;
            o->work100 = 0x3C;
            o->origin[1] = o->pos[1].h.i - 0x140;
            return;
        }
        if (v == 1) {
            o->timer = 0x3C;
        } else {
            o->timer = 3;
        }
        func_sc06_018_80180354(o, &D_sc06_018_801AAF24);
        q = SpawnActor(0x260, o);
        if (q) {
            LocalToWorld((u8 *)o->model + 0x34, &D_sc06_018_801AAF2C, &tmp);
            AF(q, s16, 6) = tmp.x;
            AF(q, s16, 0xA) = tmp.y;
            AF(q, s16, 0xE) = tmp.z;
            UpdateModelYXZ(q);
            SpawnActorArg(0x261, 0, q);
        }
        q = SpawnActor(0x260, o);
        if (q) {
            LocalToWorld((u8 *)o->model + 0x34, &D_sc06_018_801AAF34, &tmp);
            AF(q, s16, 6) = tmp.x;
            AF(q, s16, 0xA) = tmp.y;
            AF(q, s16, 0xE) = tmp.z;
            UpdateModelYXZ(q);
            SpawnActorArg(0x261, 1, q);
        }
        pos.x = AF(o->model, s32, 0x48);
        pos.y = AF(o->model, s32, 0x4C);
        pos.z = AF(o->model, s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x84A, (a | (x | 0x3000)) & 0xFFFF);
        }
    } else {
        o->timer = t - 1;
    }
}

extern u8 D_sc06_018_801AAF3C;

void func_sc06_018_8017F6D8(StageActor *o) {
    s16 *t;
    switch (o->stateCount) {
    case 0:
        t = (s16 *)&D_sc06_018_801AAF3C + (o->param - 1) * 4;
        if (*t++ < *(s16 *)((u8 *)&g_PlayerPosX + 2) && *(s16 *)((u8 *)&g_PlayerPosX + 2) < *t++ && *t < *(s16 *)((u8 *)&g_PlayerPosX + 10) && *(s16 *)((u8 *)&g_PlayerPosX + 10) < t[1]) {
            AF(o->model, s32, 4) &= 0x7FFFFFFF;
            AF(o, s16, 6) = AF(o, s16, 0x88) = *(s32 *)&g_PlayerPosX >> 16;
            AF(o, s16, 0x8A) = *(s16 *)((u8 *)&D_80126B60 + 2) - 0x80;
            o->pos[2].h.i = o->origin[2] = *(s32 *)((u8 *)&g_PlayerPosX + 8) >> 16;
            o->stateCount++;
        }
        break;
    case 1:
        if ((o->pos[1].h.i += 8) >= o->origin[1]) {
            o->state = 1;
            o->stateCount = 0;
        }
        break;
    }
}

void func_sc06_018_8017F808(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    D_sc06_018_801AAF5C[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (func_sc06_018_8017ED60((s32) arg0), (IsActorFar((s32) arg0) != 0))) {
        if (AF(arg0, s16, 0x70) == 0) {
            temp_a0 = AF(arg0, s32, 0xCC);
            if (temp_a0 != 0) {
                ZeroFill(temp_a0, 0x84);
            }
            temp_a0_2 = AF(arg0, s32, 0xD0);
            if (temp_a0_2 != 0) {
                ZeroFill(temp_a0_2, 0x84);
            }
            DespawnActor((s32) arg0);
            return;
        }
        if ((u16) AF(arg0, u16, 2) < 4U) {
            AF(arg0, u16, 2) = 4U;
        }
    }
}

void func_sc06_018_8017F8E0(StageActor *arg0) {
    D_sc06_018_801AAF88[arg0->state]();
}

void func_sc06_018_8017F91C(u8 *o) {
    SV8 a;
    SV8 b;
    if (AF(o, u16, 0x34) == 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        UpdateModelZYX();
        StopWithGravity(o);
        SetLocalVelocity(o, (u8 *)&D_sc06_018_801AAF90 + AF(o, s16, 0x70) * 12);
        a.x = 0;
        a.y = 0;
        a.z = 0x10;
        FaceHelper(o, &a, &b);
        AF(o, s16, 6) = b.x;
        AF(o, s16, 0xA) = b.y;
        AF(o, s16, 0xE) = b.z;
        AF(o, s32, 0x1C) = 0x5A;
        AF(o, s16, 0x34) = 1;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x10) -= 0x80;
    AF(AF(o, u8 *, 0x20), s16, 0x12) += 4;
    AF(AF(o, u8 *, 0x20), s16, 0x14) += AF(o, s16, 0xFC);
    AF(o, s32, 0xDC) = AF(o, s32, 0x14);
    if (MoveCollide(o) & 0x6000) {
        AF(o, s32, 0x14) = -AF(o, s32, 0xDC);
        if (--AF(o, s16, 0xAC) == 0) FreeActor(o);
    }
    if (--AF(o, s32, 0x1C) == 0) FreeActor(o);
}

void func_sc06_018_8017FA90(StageActor *arg0) {
    D_sc06_018_801AAFA8[arg0->state]();
}

void func_sc06_018_8017FACC(StageActor *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    if (arg0->param != 0) {
        arg0->state = 4;
        arg0->hitState = 0;
        arg0->hitCode = 0;
        arg0->react = 0;
        return;
    }
    temp_a0 = (s32)arg0->ext0;
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x84);
    }
    temp_a0_2 = (s32)arg0->ext1;
    if (temp_a0_2 != 0) {
        ZeroFill(temp_a0_2, 0x84);
    }
    GainStat0FromActor((s32) arg0);
    FreeActor((s32) arg0);
}

void func_sc06_018_8017FB54(s32 arg0) {
    PlaySoundId(0xB32, 0);
    func_sc06_018_8017EB8C(arg0);
}

void func_sc06_018_8017FB8C(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xE00;
    func_sc06_018_8017ED60((s32) arg0);
}

void func_sc06_018_8017FBB4(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x20);
    func_sc06_018_8017ED60((s32) arg0);
}

void func_sc06_018_8017FBE8(StageActor *arg0) {
    if (arg0->hp < 0) {
        SetReactionStep((s32) arg0, 6);
        return;
    }
    arg0->state = 1;
    arg0->work100 = 0x3C;
    arg0->stateCount = 0;
    func_sc06_018_8017ED60((s32) arg0);
}

void func_sc06_018_8017FC34(StageActor *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (arg0->kind != 0) {
        temp_v0 = SpawnKind205((s32) arg0, 0, arg2);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 6) = (s16) (((u16)arg0->pos[0].h.i + (rand() & 0x3F)) - 0x20);
            AF(temp_v0, s16, 0xA) = (s16) (((u16)arg0->pos[1].h.i + (rand() & 0x3F)) - 0x30);
            AF(temp_v0, s16, 0xE) = (s16) (((u16)arg0->pos[2].h.i + (rand() & 0x3F)) - 0x20);
            AF(temp_v0, s32, 0x10) = (s32) -arg0->vel[0];
            AF(temp_v0, s32, 0x14) = (s32) -arg0->vel[1];
            AF(temp_v0, s32, 0x18) = (s32) -arg0->vel[2];
            AF(AF(temp_v0, void *, 0x20), s16, 0x18) = 0x800;
            AF(AF(temp_v0, void *, 0x20), s16, 0x1A) = 0x800;
        }
        func_sc06_018_8017ED60((s32) arg0);
    }
}

void func_sc06_018_8017FD20(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x10) = (s32) ((s32) AF(arg0, s32, 0x10) >> 1);
    AF(arg0, s32, 0x18) = (s32) ((s32) AF(arg0, s32, 0x18) >> 1);
    func_sc06_018_8017EB8C((s32) arg0, arg1);
}

void func_sc06_018_8017FD54(u8 *arg0, s32 arg1) {
    AF(arg0, u8, 0xC1) = 0xC;
    AF(arg0, s32, 0x1C) = 0x3C;
    func_sc06_018_8017EB8C((s32) arg0, arg1);
}

void func_sc06_018_8017FD80(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s16, 0xA) >= 0x10) {
        FinishEnemy();
        return;
    }
    if (TickTimer((s32) arg0, arg1, arg2) != 0) {
        SetReactionStep((s32) arg0, 6);
        return;
    }
    if (MoveCollidePassable((s32) arg0) & 0x2000) {
        EndReaction((s32) arg0);
    }
    func_sc06_018_8017EB8C((s32) arg0);
}

void func_sc06_018_8017FE0C(u8 *o) {
    u8 *c;
    s32 t;
    if (!SetupActor(o, &D_sc06_018_801AAE28)) return;
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = -0x1001;
    SpawnShadow(o);
    SetScript(o, &D_sc06_018_801ACB68);
    AF(o, s16, 2)++;
    StopMotion(o);
    AF(o, u8 *, 0xBC) = &D_sc06_018_801AAE5C;
    c = (u8 *)AllocActorModel();
    if (c == 0) goto fail;
    AF(o, u8 *, 0xCC) = c;
    InitModel(c, &D_sc06_018_801AC878);
    t = D_sc06_018_80193900[0];
    AF(c, s32, 0x20) = t;
    AF(c, u16, 0x2C) |= 0x10;
    c = (u8 *)AllocActorModel();
    if (c == 0) {
        ZeroFill(AF(o, u8 *, 0xCC), 0x84);
fail:
        RejectSpawn(o);
        return;
    }
    AF(o, u8 *, 0xD0) = c;
    InitModel(c, &D_sc06_018_801ACB50);
    t = D_sc06_018_80193900[0];
    AF(c, u16, 0x2C) |= 0x10;
    AF(c, s32, 0x20) = t;
    AF(o, s16, 0x100) = 0x3C;
    AF(o, s32, 0xDC) = 0xFFFC0000;
}

void func_sc06_018_8017FF34(u8 *o) {
    s32 v[3];
    s32 g = D_80126B60;
    s32 x = AF(o, s32, 8);
    if (x >= g - 0x200000) {
        if (AF(o, s32, 0x48) >= 0) {
            AF(o, s32, 0x48) = -0x8000;
            AF(o, s32, 0x14) >>= 1;
        }
    } else if (x <= g - 0x180000) {
        if (AF(o, s32, 0x48) <= 0) {
            AF(o, s32, 0x48) = 0x8000;
            AF(o, s32, 0x14) >>= 1;
        }
    }
    AF(o, s32, 0xDC) >>= 1;
    v[0] = 0;
    v[1] = 0;
    v[2] = AF(o, s32, 0xDC);
    SetLocalVelocityXZ(o, v);
    MoveCollide(o);
    func_sc06_018_8017EA54(o, 0x51);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToTarget(o, 0x10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    if (--AF(o, s16, 0x100) == 0) {
        AF(o, s16, 2) = 3;
        AF(o, s16, 0x100) = 5;
        AF(o, s32, 0x1C) = 0;
    }
}

void func_sc06_018_80180068(StageActor *arg0) {
    ModelObj *temp_a1;
    ModelObj *temp_v1;

    temp_a1 = arg0->model;
    arg0->pos[0].h.i = 0x7FFF;
    arg0->pos[1].h.i = -0x1000;
    arg0->state = 5;
    arg0->stateCount = 0;
    arg0->timer = 0x12C;
    temp_a1->unk04 = (s32) ((s32)temp_a1->unk04 | 0x80000000);
    temp_v1 = arg0->model;
    temp_v1->scale.vz = 0x1000;
    temp_v1->scale.vy = 0x1000;
    temp_v1->scale.vx = 0x1000;
    arg0->hp = 0x1E0;
    arg0->hitState = 0x8810;
}

void func_sc06_018_801800C8(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc06_018_801ACC48);
    SetScript((s32) arg0, (s32) &D_sc06_018_80193900);
    arg0->state = 1;
    arg0->timer = 0x40;
    arg0->model->rot.vx = (u16) (u16)arg0->parent->model->rot.vx;
    arg0->model->rot.vy = (u16) (u16)arg0->parent->model->rot.vy;
    arg0->model->rot.vz = (u16) (u16)arg0->parent->model->rot.vz;
}

void func_sc06_018_80180188(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    if ((AF(arg0, s16, 6) == AF(arg0, s16, 0xDE)) && (AF(arg0, s16, 0xE) == AF(arg0, s16, 0xE2))) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    AF(arg0, s32, 0xDC) = (s32) AF(arg0, s32, 4);
    AF(arg0, s32, 0xE0) = (s32) AF(arg0, s32, 0xC);
    SetLocalVelocity((s32) arg0, (s32) &D_sc06_018_801AAF74);
    MoveObject((s32) arg0);
    if ((ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc06_018_801AAF80, (s32) &D_800D3918, 0x30) != 0) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        FreeActor((s32) arg0);
        return;
    }
    UpdateModelYXZ((s32) arg0);
}

void func_sc06_018_8018025C(StageActor *o) {
    ModelObj *p;
    p = AllocActorModel(o);
    o->model = p;
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(p, &D_sc06_018_801ACD08);
    o->state = 1;
    o->stateCount = 0;
    o->pos[2].w += rcos(o->parent->model->rot.vy) << 8;
    o->pos[0].w += rsin(o->parent->model->rot.vy) << 8;
    o->model->flags |= 0x10;
    o->model->scale.vx = 0x1800;
    o->model->scale.vy = 0x1800;
    o->model->scale.vz = 0x1800;
    o->heightAdd = 2;
    o->unkFC = rand() & 0xFF;
}

s32 func_sc06_018_80180354(arg0, arg1, arg2)
StageActor *arg0;
s32 arg1;
s32 arg2;
{
    D_sc06_018_801D55A0 = arg1;
    return SpawnActor(0x85, arg0);
}

void func_sc06_018_80180384(StageActor *o) {
    SV8 a;
    SV8 r;
    SV8 b;
    WMtx mat;
    ModelObj *p;
    u8 *m;
    WMtx *q;
    s16 y;

    if (SetupActor(o, &D_sc06_018_801ACD24) == 0) {
        FreeActor(o);
    }
    SetScript(o, &D_sc06_018_80193900);
    p = o->model;
    o->param = 0x80;
    p->unk04 |= 0x50000040;
    p->flags |= 1;
    m = (u8 *)o->parent->model + 0x34;
    LocalToWorld(m, D_sc06_018_801D55A0, &a);
    b = a;
    r.x = r.y = r.z = 0x1800;
    SetScaleMatrix(&r, &mat);
    RotMatrixZ(rand() & 0xFFF, &mat);
    MulMatrix0(m, &mat, (u8 *)p + 0x34);
    SetMatrixTrans(&b, (u8 *)p + 0x34);
    q = D_sc06_018_801ACD58++;
    o->ext0 = q;
    if (D_sc06_018_801ACD58 > D_sc06_018_801D5580) {
        D_sc06_018_801ACD58 = D_sc06_018_801D5580 - 9;
    }
    func_800D20C0(&a, &r, 7);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, q);
    SetMatrixTrans(&a, q);
    y = b.y;
    if (FindGround(&b) != 0 && y - b.y < 0x80) {
        b.y = b.y - 4;
        q = D_sc06_018_801ACD58++;
        o->ext1 = q;
        if (D_sc06_018_801ACD58 > D_sc06_018_801D5580) {
            D_sc06_018_801ACD58 = D_sc06_018_801D5580 - 9;
        }
        func_800D23D0(&g_GroundNormal);
        RotMatrixYXZ(&g_GroundNormal, q);
        SetMatrixTrans(&b, q);
    }
    o->state++;
}

void func_sc06_018_801805C8(StageActor *o) {
    QuadArg q;
    ModelObj *p;
    u8 *m;
    u8 *mm;
    s8 *t;
    s16 i;
    s16 j;
    u16 v;

    p = o->model;
    if (o->timer++ < 2) {
        t = D_sc06_018_801ACD10;
        i = 0;
        m = (u8 *)o->ext0;
        v = (u16)o->param;
        q.p[1].x = q.p[1].y = q.p[1].z = 0;
        q.p[0].z = q.p[2].z = q.p[3].z = 0;
        q.c[0].r = q.c[0].g = q.c[0].b = 0;
        q.c[2].r = q.c[2].g = q.c[2].b = 0;
        q.c[3].r = q.c[3].g = q.c[3].b = 0;
        q.code = 0x50000000;
        q.c[1].g = v;
        q.c[1].b = v;
        q.c[1].r = v;
        for (; i < 4; i++) {
            q.p[0].x = *t++;
            q.p[0].y = *t++;
            q.p[2].x = *t++;
            q.p[2].y = *t++;
            q.p[3].x = *t++;
            q.p[3].y = *t++;
            t -= 2;
            DrawPrimG4Mtx(&q, m);
        }
        mm = (u8 *)o->ext1;
        if (mm != 0) {
            m = mm;
            t = D_sc06_018_801ACD10;
            j = 0;
            v = (u16)o->param;
        q.p[1].x = q.p[1].y = q.p[1].z = 0;
        q.p[0].z = q.p[2].z = q.p[3].z = 0;
        q.c[0].r = q.c[0].g = q.c[0].b = 0;
        q.c[2].r = q.c[2].g = q.c[2].b = 0;
        q.c[3].r = q.c[3].g = q.c[3].b = 0;
        q.code = 0x50000000;
        q.c[1].g = v;
        q.c[1].b = v;
        q.c[1].r = v;
        for (; j < 4; j++) {
            q.p[0].x = *t++;
            q.p[0].y = *t++;
            q.p[2].x = *t++;
            q.p[2].y = *t++;
            q.p[3].x = *t++;
            q.p[3].y = *t++;
            t -= 2;
            DrawPrimG4Mtx(&q, m);
        }
        }
        o->param >>= 1;
        p->flags |= 1;
    } else {
        FreeActor(o);
    }
}

void func_sc06_018_80180868(StageActor *arg0) {
    D_sc06_018_801ACD5C[arg0->state]();
}

s32 func_sc06_018_801808A4(u8 *o, s32 r0) {
    s16 r = r0;
    SV8 a;
    SV8 b;

    if (AF(o, s32, 0xDC) != 0) {
        return 0;
    }
    a.x = AF(o, s16, 0x6);
    a.y = AF(o, s16, 0xA) - 0x20;
    a.z = AF(o, s16, 0xE);
    b.x = a.x - (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    b.y = a.y;
    b.z = a.z - (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    if (TraceMap(1, &a, &b) & 0x8000) {
        AF(o, s16, 0x6) = b.x + (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
        AF(o, s16, 0xE) = b.z + (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
        return 1;
    }
    a.x = AF(o, s16, 0x6) - (rsin(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    a.y = AF(o, s16, 0xA) - 0x10;
    b.z = a.z = AF(o, s16, 0xE) - (rcos(AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) * r >> 12);
    b.x = a.x;
    b.y = a.y + 0x20;
    if (!(TraceMap(1, &a, &b) & 0x6000)) {
        AF(o, s32, 0x4) = AF(o, s32, 0x38);
        AF(o, s32, 0x8) = AF(o, s32, 0x3C);
        AF(o, s32, 0xC) = AF(o, s32, 0x40);
        return 1;
    }
    return 0;
}

void func_sc06_018_80180AB4(StageActor *arg0) {
    SV8 v;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 var_v1;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_6;
    s32 var_a2;
    s32 var_s1;
    void *temp_s1;

    temp_s1 = g_ActiveCamera;
    if (arg0->unkFC == 0) {
        temp_v0 = SpawnActorArg(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) - 5);
        }
        temp_v0 = SpawnActorArg(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) + 5);
        }
        temp_v0 = SpawnActorArg(0x32, 2, (s32) arg0);
        if (temp_v0 != 0) {
            AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 8);
        }
        GiveItem(0x22);
        var_s1 = 0;
        temp_v0 = (s32)arg0->ext0;
        AF(temp_v0, s16, 2) = 2;
        AF(temp_v0, s16, 0xFC) = 1;
        temp_v0 = (s32)arg0->ext1;
        AF(temp_v0, s16, 2) = 2;
        AF(temp_v0, s16, 0xFC) = 1;
        do {
            temp_v0 = SpawnActor(0x281, (s32) arg0);
            if (temp_v0 != 0) {
                AF(temp_v0, s32, 0x1C) = 2;
                AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) - 0x30);
                AF(temp_v0, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
            var_s1 += 1;
        } while (var_s1 < 8);
        pos.x = (s16) AF(arg0->model, s32, 0x48);
        pos.y = (s16) AF(arg0->model, s32, 0x4C);
        pos.z = (s16) AF(arg0->model, s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
        GainStat0FromActor((s32) arg0);
        FreeActor((s32) arg0);
        return;
    }
    temp_v0 = SpawnProp(0x23);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) (((rand() & 0x7F) + (u16)arg0->pos[0].h.i) - 0x40);
        AF(temp_v0, u16, 0xA) = (u16) (((rand() & 0x7F) + (u16)arg0->pos[1].h.i) - 0xE0);
        AF(temp_v0, u16, 0xE) = (u16) (((rand() & 0x7F) + (u16)arg0->pos[2].h.i) - 0x40);
        AF(temp_v0, s16, 0x34) = 0x1800;
        AF(temp_v0, s32, 0x18) = 0;
        AF(temp_v0, s32, 0x14) = 0;
        AF(temp_v0, s32, 0x10) = 0;
        v.x = AF(temp_s1, s32, 0x5C) - AF(temp_v0, u16, 6);
        v.y = AF(temp_s1, s32, 0x60) - AF(temp_v0, u16, 0xA);
        v.z = AF(temp_s1, s32, 0x64) - AF(temp_v0, u16, 0xE);
        VectorNormalSS(&v, &v);
        AF(temp_v0, u16, 6) = (u16) (AF(temp_v0, u16, 6) + (v.x >> 6));
        AF(temp_v0, u16, 0xA) = (u16) (AF(temp_v0, u16, 0xA) + (v.y >> 6));
        AF(temp_v0, u16, 0xE) = (u16) (AF(temp_v0, u16, 0xE) + (v.z >> 6)); AF(temp_v0, s16, 0x34) = 0x3000;
        PlaySoundId(0xAF8, 0);
    }
    arg0->unkFC = (s16) ((u16) arg0->unkFC - 1);
}

void func_sc06_018_80180EB8(StageActor *o) {
    s32 st;
    s32 d;
    st = AF(o, u8, 0x5E);
    o->react = 0;
    o->hitCode = 0;
    o->hitState &= 0xFFFE;
    if (AF(o, s16, 0xE2) != 0) return;
    AF(o, s16, 0xE2) = 0xA;
    o->hitState |= 0x4000;
    PlaySoundId(0x9B7, 0);
    if (o->hitDamage != 0) {
        if (st == 0x1D) {
            o->hitFlags = 0;
            o->hitPos[0] = o->pos[0].h.i;
            o->hitPos[1] = o->pos[1].h.i;
            o->hitPos[2] = o->pos[2].h.i;
        }
        if ((u8 *)o->init != 0) {
            d = (o->hitDamage * o->init->damageScale) >> 12;
            if (d <= 0) d = 1;
        }
        o->hp -= d;
        ShowDamage(o, d);
        if (o->hitFlags & 1) {
            ShowDefeat(o);
            StartRumbleScript(&D_sc06_018_801AD450);
        }
    }
    if (st != 0x1D) {
        if (o->hitFx[0]) GainStat3FromActor(o);
        if (o->hitFx[1]) GainStat2FromActor(o);
    }
    if (o->hp <= 0) {
        o->hitState = 0;
        SetReactionStep(o, 6);
    }
}

void func_sc06_018_8018102C(u8 *o) {
    s32 c;
    if (!SetupActor(o, &D_sc06_018_801AD470)) return;
    if (AF(o, s16, 0x70) != 0) {
        LoadImage(&D_sc06_018_801AD3B4, &D_sc06_018_801AD374);
        LoadImage(&D_sc06_018_801AD3BC, &D_sc06_018_801AD394);
        InitModel(AF(o, u8 *, 0x20), &D_sc06_018_801B16DC);
    }
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = -0x2022;
    SpawnShadow(o);
    SnapToGround(o);
    AF(o, s16, 0xAE) = 0x2100;
    SetScript(o, &D_sc06_018_801B498C);
    AF(o, s16, 2)++;
    StopWithGravity(o);
    AF(o, s32, 0xC4) |= 2;
    c = SpawnActorArg(0x26F, AF(o, s16, 0x70), o);
    if (c == 0) {
        RejectSpawn(o);
        return;
    }
    AF(o, s32, 0xCC) = c;
    c = SpawnActorArg(0x270, AF(o, s16, 0x70), o);
    if (c == 0) {
        FreeActor(AF(o, u8 *, 0xCC));
        RejectSpawn(o);
        return;
    }
    AF(o, s32, 0xD0) = c;
    AF(o, u8 *, 0xBC) = &D_sc06_018_801AD4B0;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x2400;
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2400;
    AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x2400;
    AF(o, s16, 2) = 8;
    SetScript(o, &D_sc06_018_801B47F4);
    SetScript(AF(o, u8 *, 0xCC), &D_sc06_018_801B487C);
    SetScript(AF(o, u8 *, 0xD0), &D_sc06_018_801B4904);
}

void func_sc06_018_801811DC(u8 *o) {
    s32 d;
    s32 r;

    SetLocalVelocityXZ(o, &D_sc06_018_801AD4D0);
    MoveCollide(o);
    switch (AF(o, u16, 0x34)) {
    case 0:
        if ((d = func_sc06_018_801808A4(o, 0x48)) != 0 || (d = GroundDistSqTo(o, o + 0x88)) > 0x3FFFF) {
            r = HeadingToPoint(o + 4, o + 0x88);
            AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 8);
            AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
            SetLocalVelocityXZ(o, &D_sc06_018_801AD4D0);
        } else {
            AF(o, s16, 0x34) = 1;
        }
        break;
    case 1:
        if ((d = func_sc06_018_801808A4(o, 0x48)) != 0 || (d = GroundDistSqTo(o, o + 0x88)) > 0x3FFFF) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        }
        break;
    case 2:
        r = HeadingToPoint(o + 4, o + 0x88);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 0x10);
        AF(AF(o, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        func_sc06_018_801808A4(o, 0x48);
        if (AF(o, s16, 0x102) == 0) {
            AF(o, s16, 0x34) = 3;
        } else {
            AF(o, s16, 0x102)--;
        }
        break;
    case 3:
        d = GroundDistSqTo(o, o + 0x88);
        if (func_sc06_018_801808A4(o, 0x48) != 0) {
            AF(o, s16, 0x34) = 2;
            AF(o, s16, 0x102) = (rand() & 7) + 8;
        } else if (d > 0x40000) {
            r = HeadingToPoint(o + 4, o + 0x88);
            r = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), r, 1);
            if (r < -0xFF || r > 0xFF) {
                AF(o, s16, 0x34) = 2;
                AF(o, s16, 0x102) = (rand() & 7) + 8;
            }
        } else {
            AF(o, s16, 0x34) = 1;
        }
        break;
    }
    if (AF(o, s16, 0x100) != 0) {
        AF(o, s16, 0x100)--;
    } else if ((d = GroundDistSqToPlayer(o)) <= 0x24000) {
        AF(o, s16, 2) = 5;
        AF(o, s16, 0x100) = 0x3C;
    }
}

void func_sc06_018_80181468(StageActor *arg0) {
    u8 unused[8];
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 e;
    s32 ang;
    s16 c;
    s32 r;
    StageActor *q;

    if (arg0->animTimer == 0) {
        e = SpawnProp(0x7F);
        if (e != 0) {
            ang = arg0->model->rot.vy + (rsin(arg0->work104) >> 3);
            AF(e, s16, 6) = (u16)arg0->pos[0].h.i - (rsin(ang) * 0x6C) / 4096;
            AF(e, s16, 0xA) = (u16)arg0->pos[1].h.i - 0x34;
            AF(e, s16, 0xE) = (u16)arg0->pos[2].h.i - (rcos(ang) * 0x6C) / 4096; AF(e, s32, 0x14) = 0x40000;
            AF(e, s32, 0x10) = -(rsin(ang) * 0xC0);
            AF(e, s32, 0x18) = -(rcos(ang) * 0xC0);
        }
        c = arg0->work104 + 0x100;
        arg0->work104 = c;
        ang = (c / 256) % 16;
        if (c == 0x100) {
            pos.x = (s16) AF(arg0->model, s32, 0x48);
            pos.y = (s16) AF(arg0->model, s32, 0x4C);
            pos.z = (s16) AF(arg0->model, s32, 0x50);
            SetRotMatrix(&D_800AF630.wsm);
            SetTransMatrix(&D_800AF648);
            RotTransPers(&pos, &sxy, &p, &flag);
            if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
                s32 x = ((s16 *)&sxy)[0];
                s32 a;
                if (x >= 0) { a = x; } else { a = -x; }
                a = ((0xF0 - a) * 0x7F) / 240;
                x = (x + 0xF0) / 30;
                if (x == 0x10) {
                    x = 0xF;
                }
                x <<= 8;
                PlaySoundId(0x95F, (a | (x | 0x3000)) & 0xFFFF);
            }        } else if (ang == 0) {
            pos.x = (s16) AF(arg0->model, s32, 0x48);
            pos.y = (s16) AF(arg0->model, s32, 0x4C);
            pos.z = (s16) AF(arg0->model, s32, 0x50);
            SetRotMatrix(&D_800AF630.wsm);
            SetTransMatrix(&D_800AF648);
            RotTransPers(&pos, &sxy, &p, &flag);
            if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
                s32 x = ((s16 *)&sxy)[0];
                s32 a;
                if (x >= 0) { a = x; } else { a = -x; }
                a = ((0xF0 - a) * 0x7F) / 240;
                x = (x + 0xF0) / 30;
                if (x == 0x10) {
                    x = 0xF;
                }
                x <<= 8;
                PlaySoundId(0x960, (a | (x | 0x3000)) & 0xFFFF);
            }        }
        arg0->model->pose = D_sc06_018_801AD334[ang];
        if (--arg0->work100 == 0) {
            q = (s32)arg0->ext0; arg0->animTimer = 1; if (q != 0) { q->animTimer = 1; } q = (s32)arg0->ext1; if (q != 0) { q->animTimer = 1; }
        }
    } else if (arg0->animFlags & 0x4000) {
        arg0->state = 7;
        arg0->work100 = 0x3C;
        SetScript((s32) arg0, (s32) &D_sc06_018_801B47F4);
        q = (s32)arg0->ext0;
        if (q != 0) {
            SetScript(q, (s32) &D_sc06_018_801B487C);
        }
        q = (s32)arg0->ext1;
        if (q != 0) {
            SetScript(q, (s32) &D_sc06_018_801B4904);
        }
    }
}

void func_sc06_018_8018192C(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 a, b;
    u8 *c;
    if (AF(AF(o, u8 *, 0x20), s16, 0x14) < 0x301) {
        a = AF(o, s16, 0xFC) + 1;
        b = AF(o, s16, 0xFE) + a;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xFE) = b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) += b;
    } else {
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s16, 0x98) = 0;
        c = AF(o, u8 *, 0xD0);
        AF(c, s16, 2) = 3;
        AF(c, s32, 0x1C) = 0x1E;
        AF(c, s16, 0x98) = 0;
        pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
        pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
    }
    UpdateModelYXZ(o);
}

void func_sc06_018_80181AFC(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 a, b, h;
    u8 *c;
    h = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (h >= 0xD00 || h == 0) {
        a = AF(o, s16, 0xFC) + 1;
        b = AF(o, s16, 0xFE) + a;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xFE) = b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) -= b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) &= 0xFFF;
    } else {
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s16, 0x98) = 0;
        c = AF(o, u8 *, 0xCC);
        AF(c, s16, 2) = 3;
        AF(c, s32, 0x1C) = 0x1E;
        AF(c, s16, 0x98) = 0;
        pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
        pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
    }
    UpdateModelYXZ(o);
}

void func_sc06_018_80181CEC(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 v;
    u8 *q;
    D_sc06_018_801AD4E0[AF(o, u16, 2)]();
    if (AF(o, u16, 0) == 0) return;
    if (AF(o, s16, 0x70) == 0 && IsActorFar(o)) {
        if (AF(o, u8 *, 0xCC)) FreeActor(AF(o, u8 *, 0xCC));
        if (AF(o, u8 *, 0xD0)) FreeActor(AF(o, u8 *, 0xD0));
        DespawnActor(o);
        return;
    }
    v = AF(o, s16, 0xE2);
    if (v != 0) {
        v--;
        AF(o, s16, 0xE2) = v;
        if (v == 0) {
            AF(o, u16, 0x5C) &= 0xBFFF;
        }
    }
    if (AF(o, s16, 0x76) < 5 && (rand() & 3) == 0) {
        q = (u8 *)SpawnKind205(o, 0);
        if (q) {
            AF(q, s32, 0x10) = ((rand() & 0x7FF) - 0x400) << 8;
            AF(q, s32, 0x14) = 0xFFF00000;
            AF(q, s32, 0x18) = ((rand() & 0x7FF) - 0x400) << 8;
            AF(q, s16, 6) += (rand() & 0x3F) - 0x20;
            AF(q, s16, 0xA) -= 0xC0;
            AF(q, s16, 0xE) += (rand() & 0x3F) - 0x20;
        }
    }
    if (AF(o, u16, 2) != 1 && AF(o, u16, 2) != 5) {
        AF(o, s16, 0x84) = 0xE;
        return;
    }
    v = AF(o, s16, 0x84);
    if (v != 0) {
        AF(o, s16, 0x84) = v - 1;
        return;
    }
    AF(o, s16, 0x84) = 0xE;
    pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
    pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
    pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
    SetRotMatrix(&D_800AF630.wsm);
    SetTransMatrix(&D_800AF648);
    RotTransPers(&pos, &sxy, &p, &flag);
    if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
        s32 x = ((s16 *)&sxy)[0];
        s32 a;
        if (x >= 0) { a = x; } else { a = -x; }
        a = ((0xF0 - a) * 0x7F) / 240;
        x = (x + 0xF0) / 30;
        if (x == 0x10) {
            x = 0xF;
        }
        x <<= 8; PlaySoundId(0x8BF, (a | (x | 0x3000)) & 0xFFFF);
    }
}

void func_sc06_018_80182004(StageActor *o) {
    s32 st;
    s32 n;

    st = AF(o, u8, 0x5E);
    o->react = 0;
    o->hitCode = 0;
    o->hitState &= ~1;
    if (o->unkFC == 0) {
        o->pos[0].w = o->parent->pos[0].w;
        o->pos[1].w = o->parent->pos[1].w;
        o->pos[2].w = o->parent->pos[2].w;
        o->model->rot.vx = o->parent->model->rot.vx;
        o->model->rot.vy = o->parent->model->rot.vy;
        o->model->rot.vz = o->parent->model->rot.vz;
    }
    if (o->work102 == 0) {
        o->work102 = 10;
        o->hitState |= 0x4000;
        PlaySoundId(0x9B7, 0);
        if (o->hitDamage != 0) {
            if (st == 0x1D) {
                o->hitFlags = 0;
                o->hitPos[0] = o->pos[0].h.i;
                o->hitPos[1] = o->pos[1].h.i;
                o->hitPos[2] = o->pos[2].h.i;
            }
            if ((u8 *)o->init != 0) {
                n = o->hitDamage * o->init->damageScale >> 12;
                if (n <= 0) {
                    n = 1;
                }
            }
            o->hp -= n;
            ShowDamage(o, n);
            if (o->hitFlags & 1) {
                ShowDefeat(o);
                StartRumbleScript(&D_sc06_018_801AD450);
            }
        }
        if (st != 0x1D) {
            if (o->hitFx[0] != 0) {
                GainStat3FromActor(o);
            }
            if (o->hitFx[1] != 0) {
                GainStat2FromActor(o);
            }
        }
        if (o->hp <= 0) {
            o->hitState = 0;
            SetReactionStep(o, 6);
        }
    }
}

void func_sc06_018_801821FC(StageActor *arg0) {
    SV8 v;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 var_v1;
    s32 temp_a2;
    StageActor *temp_v0;
    s32 temp_v0_6;
    s32 var_a2;
    s32 var_s1;
    void *temp_s1;

    temp_s1 = g_ActiveCamera;
    if (arg0->unkFC >= 0x1F) {
        temp_v0 = SpawnActorArg(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) - 5);
        }
        temp_v0 = SpawnActorArg(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) + 5);
        }
        temp_v0 = SpawnActorArg(0x32, 2, (s32) arg0);
        if (temp_v0 != 0) {
            temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 8);
        }
        GiveItem(0x22);
        temp_v0 = arg0->parent;
        temp_v0->state = 2;
        var_s1 = 0;
        temp_v0 = (s32)arg0->parent->ext1;
        temp_v0->state = 4;
        arg0->parent->ext0 = 0;
        do {
            temp_v0 = SpawnActor(0x281, (s32) arg0);
            if (temp_v0 != 0) {
                temp_v0->timer = 2;
                AF(temp_v0, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
            var_s1 += 1;
        } while (var_s1 < 8);
        pos.x = (s16) AF(arg0->model, s32, 0x48);
        pos.y = (s16) AF(arg0->model, s32, 0x4C);
        pos.z = (s16) AF(arg0->model, s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
        GainStat0FromActor((s32) arg0);
        FreeActor((s32) arg0);
        return;
    }
    temp_v0 = SpawnProp(0x23);
    if (temp_v0 != 0) {
        temp_v0->pos[0].h.i = (u16) (((rand() & 0x7F) + (u16)arg0->pos[0].h.i) - 0x40);
        temp_v0->pos[1].h.i = (u16) (((rand() & 0x7F) + (u16)arg0->pos[1].h.i) - 0x80);
        temp_v0->pos[2].h.i = (u16) (((rand() & 0x7F) + (u16)arg0->pos[2].h.i) - 0x40);
        temp_v0->pos[0].w = (s32) (temp_v0->pos[0].w + (rcos((s32) arg0->model->rot.vy) << 0xA));
        temp_v0_6 = rsin((s32) arg0->model->rot.vy);
        temp_v0->stateCount = 0x1800;
        temp_v0->vel[2] = 0;
        temp_v0->vel[1] = 0;
        temp_v0->vel[0] = 0;
        temp_v0->pos[2].w = (s32) (temp_v0->pos[2].w - (temp_v0_6 << 0xA));
        v.x = AF(temp_s1, s32, 0x5C) - (u16)temp_v0->pos[0].h.i;
        v.y = AF(temp_s1, s32, 0x60) - (u16)temp_v0->pos[1].h.i;
        v.z = AF(temp_s1, s32, 0x64) - (u16)temp_v0->pos[2].h.i;
        VectorNormalSS(&v, &v);
        temp_v0->pos[0].h.i = (u16) ((u16)temp_v0->pos[0].h.i + (v.x >> 6));
        temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i + (v.y >> 6));
        temp_v0->pos[2].h.i = (u16) ((u16)temp_v0->pos[2].h.i + (v.z >> 6)); temp_v0->stateCount = 0x3000;
        PlaySoundId(0xAF8, 0);
    }
    arg0->unkFC = (s16) ((u16) arg0->unkFC + 1);
}

void func_sc06_018_80182644(StageActor *o) {
    u8 *p;

    if (o->work102 != 0) {
        if (--o->work102 == 0) {
            o->hitState &= ~0x4000;
        }
    }
    D_sc06_018_801AD568[o->state](o);
    if (o->kind != 0) {
        if (o->unkFC == 0) {
            o->pos[0].w = o->parent->pos[0].w;
            o->pos[1].w = o->parent->pos[1].w;
            o->pos[2].w = o->parent->pos[2].w;
            o->model->rot.vx = o->parent->model->rot.vx;
            o->model->rot.vy = o->parent->model->rot.vy;
            o->model->rot.vz = o->parent->model->rot.vz;
        }
        if (o->hp < 5 && (rand() & 3) == 0) {
            p = (u8 *)SpawnKind205(o, 0);
            if (p != 0) {
                AF(p, s32, 0x10) = ((rand() & 0x7FF) - 0x400) << 8;
                AF(p, s32, 0x14) = 0xFFF00000;
                AF(p, s32, 0x18) = ((rand() & 0x7FF) - 0x400) << 8;
                AF(p, s32, 0x4) += rcos(o->model->rot.vy) << 10;
                AF(p, s32, 0xC) -= rsin(o->model->rot.vy) << 10;
                AF(p, s16, 0x6) += (rand() & 0x3F) - 0x20;
                AF(p, s16, 0xA) -= 0x40;
                AF(p, s16, 0xE) += (rand() & 0x3F) - 0x20;
            }
        }
    }
}

void func_sc06_018_80182854(StageActor *arg0) {
    SV8 v;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s16 var_v1;
    s32 temp_a2;
    StageActor *temp_v0;
    s32 temp_v0_6;
    s32 var_a2;
    s32 var_s1;
    void *temp_s1;

    temp_s1 = g_ActiveCamera;
    if (arg0->unkFC >= 0x1F) {
        temp_v0 = SpawnActorArg(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) - 5);
        }
        temp_v0 = SpawnActorArg(0x33, 3, (s32) arg0);
        if (temp_v0 != 0) {
            temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) - 8);
            AF(temp_v0, u16, 0x1A) = (u16) (AF(temp_v0, u16, 0x1A) + 5);
        }
        temp_v0 = SpawnActorArg(0x32, 2, (s32) arg0);
        if (temp_v0 != 0) {
            temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i - 0x20);
            AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 8);
        }
        GiveItem(0x22);
        temp_v0 = arg0->parent;
        temp_v0->state = 4;
        var_s1 = 0;
        temp_v0 = (s32)arg0->parent->ext0;
        temp_v0->state = 4;
        do {
            temp_v0 = SpawnActor(0x281, (s32) arg0);
            if (temp_v0 != 0) {
                temp_v0->timer = 2;
                AF(temp_v0, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
            var_s1 += 1;
        } while (var_s1 < 8);
        pos.x = (s16) AF(arg0->model, s32, 0x48);
        pos.y = (s16) AF(arg0->model, s32, 0x4C);
        pos.z = (s16) AF(arg0->model, s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0xEF) < 0x1DF && (u16) (((s16 *)&sxy)[1] + 0xB3) < 0x167) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xF0 - a) * 0x7F) / 240;
            x = (x + 0xF0) / 30;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x961, (a | (x | 0x3000)) & 0xFFFF);
        }
        arg0->parent->ext1 = 0;
        GainStat0FromActor((s32) arg0);
        FreeActor((s32) arg0);
        return;
    }
    temp_v0 = SpawnProp(0x23);
    if (temp_v0 != 0) {
        temp_v0->pos[0].h.i = (u16) (((rand() & 0x7F) + (u16)arg0->pos[0].h.i) - 0x40);
        temp_v0->pos[1].h.i = (u16) (((rand() & 0x7F) + (u16)arg0->pos[1].h.i) - 0x80);
        temp_v0->pos[2].h.i = (u16) (((rand() & 0x7F) + (u16)arg0->pos[2].h.i) - 0x40);
        temp_v0->pos[0].w = (s32) (temp_v0->pos[0].w - (rcos((s32) arg0->model->rot.vy) << 0xA));
        temp_v0_6 = rsin((s32) arg0->model->rot.vy);
        temp_v0->stateCount = 0x1800;
        temp_v0->vel[2] = 0;
        temp_v0->vel[1] = 0;
        temp_v0->vel[0] = 0;
        temp_v0->pos[2].w = (s32) (temp_v0->pos[2].w + (temp_v0_6 << 0xA));
        v.x = AF(temp_s1, s32, 0x5C) - (u16)temp_v0->pos[0].h.i;
        v.y = AF(temp_s1, s32, 0x60) - (u16)temp_v0->pos[1].h.i;
        v.z = AF(temp_s1, s32, 0x64) - (u16)temp_v0->pos[2].h.i;
        VectorNormalSS(&v, &v);
        temp_v0->pos[0].h.i = (u16) ((u16)temp_v0->pos[0].h.i + (v.x >> 6));
        temp_v0->pos[1].h.i = (u16) ((u16)temp_v0->pos[1].h.i + (v.y >> 6));
        temp_v0->pos[2].h.i = (u16) ((u16)temp_v0->pos[2].h.i + (v.z >> 6)); temp_v0->stateCount = 0x3000;
        PlaySoundId(0xAF8, 0);
    }
    arg0->unkFC = (s16) ((u16) arg0->unkFC + 1);
}

void func_sc06_018_80182C98(StageActor *o) {
    u8 *p;

    if (o->work102 != 0) {
        if (--o->work102 == 0) {
            o->hitState &= 0xBFFF;
        }
    }
    D_sc06_018_801AD5E0[o->state](o);
    if (o->kind != 0) {
        if (o->unkFC == 0) {
            o->pos[0].w = o->parent->pos[0].w;
            o->pos[1].w = o->parent->pos[1].w;
            o->pos[2].w = o->parent->pos[2].w;
            o->model->rot.vx = o->parent->model->rot.vx;
            o->model->rot.vy = o->parent->model->rot.vy;
            o->model->rot.vz = o->parent->model->rot.vz;
        }
        if (o->hp < 5 && (rand() & 3) == 0) {
            p = (u8 *)SpawnKind205(o, 0);
            if (p != 0) {
                AF(p, s32, 0x10) = ((rand() & 0x7FF) - 0x400) << 8;
                AF(p, s32, 0x14) = 0xFFF00000;
                AF(p, s32, 0x18) = ((rand() & 0x7FF) - 0x400) << 8;
                AF(p, s32, 4) -= rcos(o->model->rot.vy) << 10;
                AF(p, s32, 0xC) += rsin(o->model->rot.vy) << 10;
                AF(p, s16, 6) += (rand() & 0x3F) - 0x20;
                AF(p, s16, 0xA) -= 0x40;
                AF(p, s16, 0xE) += (rand() & 0x3F) - 0x20;
            }
        }
    }
}

void func_sc06_018_80182EA8(u8 *o) {
    SV8 v;
    u8 *p;
    u16 *q;

    if (AF(o, u16, 2) == 0) {
        AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_sc06_018_801AD3C4;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
        AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x59;
        StartSpriteAnim(AF(o, u8 *, 0x20), o + 0x24, &D_sc06_018_801AD3D0);
        AF(o, s16, 0x28) = rand() % 15;
        AF(o, s32, 0x1C) = 0x10;
        AF(o, s32, 0x2C) = 0x200;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1200;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1200;
        AF(o, u16, 2)++;
    } else if (D_801270C0 == 1) {
        MoveProp(o);
        StepSpriteAnim(AF(o, u8 *, 0x20), o + 0x24);
        AF(o, s32, 0x1C)--;
        if ((rand() & 7) == 0) {
            p = (u8 *)SpawnProp(0x22);
            if (p != 0) {
                AF(p, s16, 6) = AF(o, s16, 6);
                AF(p, s16, 0xA) = AF(o, s16, 0xA);
                AF(p, s16, 0xE) = AF(o, s16, 0xE);
                AF(p, s32, 0x10) = AF(o, s32, 0x10) >> 3;
                AF(p, s32, 0x14) = AF(o, s32, 0x14) >> 3;
                AF(p, s32, 0x18) = AF(o, s32, 0x18) >> 3;
                AF(p, s16, 0x34) = AF(AF(o, u8 *, 0x20), s16, 0x18) + 1;
                AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC008;
            }
        }
        if (AF(o, s32, 0x1C) == 0) {
            FreeProp(o);
        } else {
            AF(o, s32, 0x14) = 0xFFFF0000;
            AF(o, s32, 0x2C) += 0x80;
            AF(AF(o, u8 *, 0x20), s16, 0x18) += AF(o, s32, 0x2C);
            AF(AF(o, u8 *, 0x20), s16, 0x1A) += AF(o, s32, 0x2C);
            AF(o, s16, 0xA) -= 0x20;
            v.x = AF(o, s16, 6);
            v.y = AF(o, s16, 0xA);
            v.z = AF(o, s16, 0xE);
            if (PointHitsPlayer(&v, 0x10, 0xB4) == 1) {
                q = &g_PlayerHitKind;
                *q |= 0x4200;
            }
            AF(o, s16, 0xA) += 0x20;
        }
    }
}

void func_sc06_018_8018312C(u8 *arg0) {
    u8 *p;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0xFC) = 0x1E;
    p = AF(arg0, u8 *, 0xCC);
    AF(p, s16, 0x5C) = 0;
    p = AF(arg0, u8 *, 0xD0);
    AF(p, s16, 0x5C) = 0;
}

void func_sc06_018_8018314C(u8 *o) {
    u8 unused[0x10];
    SetLocalVelocityXZ(o, &D_sc06_018_801AD4D0);
    MoveCollide(o);
    func_sc06_018_801808A4(o, 0x48);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToTarget(o, 0x10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) &= 0xFFF;
    if (--AF(o, s16, 0x100) == 0) {
        AF(o, s16, 2) = 6;
        AF(o, s16, 0x100) = 0x2D;
        AF(o, s32, 0x1C) = 0;
        AF(o, s16, 0x104) = 0;
        SetScript(o, &D_sc06_018_801B4C8C);
        if (AF(o, u8 *, 0xCC)) SetScript(AF(o, u8 *, 0xCC), &D_sc06_018_801B4D7C);
        if (AF(o, u8 *, 0xD0)) SetScript(AF(o, u8 *, 0xD0), &D_sc06_018_801B4E6C);
    }
}

void func_sc06_018_8018324C(StageActor *arg0) {
    s16 temp_v0;
    StageActor *temp_a0;
    StageActor *temp_a0_2;

    temp_v0 = arg0->work100;
    if (temp_v0 == 0) {
        arg0->state = 1;
        arg0->work100 = 0x3C;
        SetScript((s32) arg0, (s32) &D_sc06_018_801B498C);
        temp_a0 = (s32)arg0->ext0;
        if (temp_a0 != 0) {
            SetScript(temp_a0, (s32) &D_sc06_018_801B4A8C);
        }
        temp_a0_2 = (s32)arg0->ext1;
        if (temp_a0_2 != 0) {
            SetScript(temp_a0_2, (s32) &D_sc06_018_801B4B8C);
        }
    } else {
        arg0->work100 = (s16) (temp_v0 - 1);
    }
}

void func_sc06_018_801832EC(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        UpdateModelYXZ((s32) arg0, (s32) temp_a1);
        if (AF(arg0, s32, 0x1C) & 3) {
            temp_v0_2 = SpawnActor(0x281, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s32, 0x1C) = 2;
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
        }
    } else {
        FreeActor((s32) arg0, arg1);
    }
}

void func_sc06_018_801833AC(StageActor *arg0) {
    s16 temp_v0;
    StageActor *temp_a0;
    StageActor *temp_a0_2;

    temp_v0 = arg0->unkFC;
    if (temp_v0 == 0) {
        arg0->state = 1;
        SetScript((s32) arg0, (s32) &D_sc06_018_801B498C);
        temp_a0 = (s32)arg0->ext0;
        if (temp_a0 != 0) {
            SetScript(temp_a0, (s32) &D_sc06_018_801B4A8C);
        }
        temp_a0_2 = (s32)arg0->ext1;
        if (temp_a0_2 != 0) {
            SetScript(temp_a0_2, (s32) &D_sc06_018_801B4B8C);
        }
    } else {
        arg0->unkFC = (s16) (temp_v0 - 1);
    }
}

void func_sc06_018_80183444(u8 *arg0) {
    AF(AF(arg0, void *, 0x64), s16, 0x5C) = 0;
    AF(AF(AF(arg0, void *, 0x64), void *, 0xD0), s16, 0x5C) = 0;
}

void func_sc06_018_80183464(s32 arg0) {
    s32 temp_v1;

    if (SetupActor(arg0, (s32) &D_sc06_018_801AD514) != 0) {
        if (AF(arg0, s16, 0x70) != 0) {
            InitModel(AF(arg0, s32, 0x20), (s32) &D_sc06_018_801B244C);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -0x2021;
        SnapToGround(arg0);
        AF(arg0, s16, 0xAE) = 0x2100;
        SetScript(arg0, (s32) &D_sc06_018_801B4A8C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        StopWithGravity(arg0);
        AF(arg0, s32 *, 0xBC) = &D_sc06_018_801AD548;
        temp_v1 = AF(arg0, s32, 0x20);
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x2400;
    }
}

void func_sc06_018_80183554(void) {
}

void func_sc06_018_8018355C(u8 *o) {
    s16 a, b;
    if (AF(AF(o, u8 *, 0x20), s16, 0x14) < 0x401) {
        a = AF(o, s16, 0xFC) + 1;
        b = AF(o, s16, 0xFE) + a;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xFE) = b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) += b;
        AF(o, s16, 0xA) -= 4;
        AF(o, s32, 4) += rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 6;
        AF(o, s32, 0xC) -= rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 6;
    } else {
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s16, 0x98) = 0;
    }
    UpdateModelYXZ(o);
}

void func_sc06_018_80183630(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        UpdateModelYXZ((s32) arg0, (s32) temp_a1);
        if (AF(arg0, s32, 0x1C) & 3) {
            temp_v0_2 = SpawnActor(0x281, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s32, 0x1C) = 2;
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
        }
    } else {
        FreeActor((s32) arg0, arg1);
    }
}

void func_sc06_018_801836F0(s32 arg0, s32 arg1) {
    UpdateModelYXZ(arg0, arg1);
}

void func_sc06_018_80183710(u8 *arg0) {
    AF(AF(arg0, void *, 0x64), s16, 0x5C) = 0;
    AF(AF(AF(arg0, void *, 0x64), void *, 0xCC), s16, 0x5C) = 0;
}

void func_sc06_018_80183730(s32 arg0) {
    s32 temp_v1;

    if (SetupActor(arg0, (s32) &D_sc06_018_801AD58C) != 0) {
        if (AF(arg0, s16, 0x70) != 0) {
            InitModel(AF(arg0, s32, 0x20), (s32) &D_sc06_018_801B31B8);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -0x2021;
        SnapToGround(arg0);
        AF(arg0, s32 *, 0xBC) = &D_sc06_018_801AD5C0;
        AF(arg0, s16, 0xAE) = 0x2100;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 2);
        SetScript(arg0, (s32) &D_sc06_018_801B4B8C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        StopWithGravity(arg0);
        temp_v1 = AF(arg0, s32, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2400;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x2400;
    }
}

void func_sc06_018_80183824(void) {
}

void func_sc06_018_8018382C(u8 *o) {
    s16 a, b, h;
    h = AF(AF(o, u8 *, 0x20), s16, 0x14);
    if (h >= 0xC00 || h == 0) {
        a = AF(o, s16, 0xFC) + 1;
        b = AF(o, s16, 0xFE) + a;
        AF(o, s16, 0xFC) = a;
        AF(o, s16, 0xFE) = b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) -= b;
        AF(AF(o, u8 *, 0x20), s16, 0x14) &= 0xFFF;
        AF(o, s16, 0xA) -= 8;
        AF(o, s32, 4) -= rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 7;
        AF(o, s32, 0xC) += rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 7;
    } else {
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s16, 0x98) = 0;
    }
    UpdateModelYXZ(o);
}

void func_sc06_018_80183920(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        temp_a1 = AF(arg0, void *, 0x20);
        AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) ^ 0x80000000);
        UpdateModelYXZ((s32) arg0, (s32) temp_a1);
        if (AF(arg0, s32, 0x1C) & 3) {
            temp_v0_2 = SpawnActor(0x281, (s32) arg0);
            if (temp_v0_2 != 0) {
                AF(temp_v0_2, s32, 0x1C) = 2;
                AF(temp_v0_2, s16, 0x12) = (s16) ((rand() & 0x1F) - 0x10);
                AF(temp_v0_2, s16, 0x16) = (s16) -((rand() & 0xF) + 0x10);
                AF(temp_v0_2, s16, 0x1A) = (s16) ((rand() & 0x1F) - 0x10);
            }
        }
    } else {
        FreeActor((s32) arg0, arg1);
    }
}

void func_sc06_018_801839E0(s32 arg0, s32 arg1) {
    UpdateModelYXZ(arg0, arg1);
}

void func_sc06_018_80183A00(StageActor *arg0) {
    D_sc06_018_801B52BC[arg0->state]();
    if (arg0->kind != 0) {
        func_sc06_018_80187250((s32) arg0);
        func_sc06_018_80187320((s32) arg0);
        DespawnIfFar((s32) arg0);
    }
}

void func_sc06_018_80183A70(u8 *o) {
    if (SetupActor(o, &D_sc06_018_801B5094[AF(o, u16, 0x70) & 0xF]) == 0) return;
    AF(o, u8, 0xC0) = 1;
    AF(o, u8 *, 0xBC) = &D_sc06_018_801B522C;
    AF(o, s32, 0xB4) = -0x8AD;
    AF(o, s32, 0xC4) |= 2;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x80;
    AF(AF(o, u8 *, 0x20), u8 *, 0x80) = &D_sc06_018_801B51B4;
    func_80143994(o, 0x4000);
    AF(o, s32, 0x48) = 0x18000;
    switch (AF(o, u16, 0x70) & 0xF) {
    case 0:
        AF(o, s32, 0xE0) |= 1;
        AF(o, s16, 0xFE) = AF(AF(o, s16 *, 0x78), s16, 0) / 2;
        if (!(AF(o, s16, 0x70) & 0x8000)) {
            AF(o, s16, 2) = 2;
        } else {
            AF(o, s16, 2) = 1;
            AF(o, s32, 0x1C) = 0x1E;
            SetScript(o, &D_sc06_018_801CC180);
        }
        break;
    case 1:
        AF(o, s16, 2) = 0x13;
        D_sc06_018_801CC674 = 0x28;
        if (AF(o, s16, 0x70) & 0x8000) AF(o, s32, 0xE0) |= 0x400;
        break;
    case 2:
        AF(o, s16, 2) = 0x18;
        D_sc06_018_801CC4CC = 0x28;
        break;
    case 3:
        AF(o, s16, 2) = 0x1F;
        if (!SpawnActorArg(0x27F, 5, o)) {
            RejectSpawn(o);
            return;
        }
        break;
    }
    SnapToGround(o);
    AF(o, s32, 0x38) = AF(o, s32, 4);
    AF(o, s32, 0x3C) = AF(o, s32, 8);
    AF(o, s32, 0x40) = AF(o, s32, 0xC);
    UpdateModelZYX(o);
}

void func_sc06_018_80183C8C(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == 0xF) {
        SpawnHeadMarker((s32) arg0, -0x90);
    }
    if (TickTimer((s32) arg0) != 0) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc06_018_80183CDC(StageActor *o) {
    s32 r, e;
    o->timer = rand() % 64 + 0x80;
    o->accel[1] = 0x4650;
    r = rand() % 1024;
    e = o->workE8;
    o->workE8 = (rand() & 1) ? e + r : e - r;
    SetScript(o, &D_sc06_018_801CCCA0);
    o->state = 3;
    o->workE0 &= ~0x40;
}

void func_sc06_018_80183DA4(u8 *o) {
    s32 r;
    s32 e;
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE8), 8);
    SetForwardVelocity(o, 0xFFFB0000);
    AF(o, s32, 0xE0) &= ~0x40;
    if (func_sc06_018_8018765C(o) == 0) {
        func_sc06_018_801877E4(o);
    }
    if (TargetInFront(o, 0x300) != 0) {
        if (DistSqToTarget(o) < 0x100000) {
            AF(o, s16, 2) = 4;
            return;
        }
    } else {
        if (DistSqToTarget(o) < 0x4000) {
            AF(o, s16, 2) = 0xF;
            return;
        }
    }
    if (AF(o, s32, 0xE0) & 0x40) return;
    if (TickTimer(o) == 0) return;
    r = rand() % 1024;
    e = AF(o, s32, 0xE8);
    AF(o, s32, 0xE8) = (rand() & 1) ? e + r : e - r;
    AF(o, s32, 0x1C) = rand() % 64 + 0x80;
}

void func_sc06_018_80183F10(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc06_018_801CC1E8);
    arg0->accel[1] = 0x4650;
    arg0->state = 5;
}

void func_sc06_018_80183F50(s32 arg0) {
    s32 t;
    s32 o;
    s32 d;

    o = TurnStepToTarget(arg0, 8);
    t = AF(arg0, s32, 0x20);
    AF(t, u16, 0x12) += o;
    SetForwardVelocity(arg0, -0x70000, t);
    if ((u16)(D_800B99DA % 10) == 0) {
        o = SpawnKind1C(arg0, 0);
        if (o != 0) {
            AF(AF(o, s32, 0xCC), s16, 0x18) = 0x5000;
            AF(AF(o, s32, 0xCC), s16, 0x1A) = 0x5000;
        }
    }
    func_sc06_018_8018765C(arg0);
    if (TargetInFront(arg0, 0x300) != 0) {
        d = DistSqToTarget(arg0);
        if (d <= 0xFFFFF) {
            if (d < 0x6400) {
                if (func_sc06_018_80187844(arg0, 0) == 0 || d < D_sc06_018_801D55A8) {
                    AF(arg0, s16, 2) = 8;
                }
            } else if ((u32)(d - 0x10001) <= 0x13FFE && TargetInFront(arg0, 0x100) != 0) {
                if (func_sc06_018_80187844(arg0, 0) == 0) {
                    AF(arg0, s16, 2) = 0xA;
                } else if (d < D_sc06_018_801D55A8) {
                    AF(arg0, s16, 2) = 8;
                }
            }
            return;
        }
    }
    AF(arg0, s16, 2) = 6;
}

void func_sc06_018_801840D8(StageActor *arg0) {
    arg0->timer = 0x20;
    arg0->state = 7;
    SetScript((s32) arg0, (s32) &D_sc06_018_801CC180);
}

void func_sc06_018_8018410C(s32 arg0) {
    s32 d;

    if (TargetInFront(arg0, 0x300) != 0) {
        d = DistSqToTarget(arg0);
        if (d < 0x100000) {
            if (d < 0x6400) {
                AF(arg0, s16, 2) = 8;
                return;
            }
            AF(arg0, s16, 2) = 4;
            return;
        }
    } else if (DistSqToTarget(arg0) < 0x4000) {
        AF(arg0, s16, 2) = 15;
        return;
    }
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc06_018_80184194(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc06_018_801CC290);
    arg0->state = 9;
    arg0->workE0 = (s32) ((arg0->workE0 | 2) & ~0x10);
}

void func_sc06_018_801841E0(u8 *o) {
    s32 d;
    if (func_sc06_018_80187130(o, 100) == 1) {
        AF(o, s32, 0xE0) |= 0x10;
    }
    if (AF(o, u8 *, 0x90) == &D_sc06_018_801CC290) {
        if (AF(o, s32, 0x94) == 0xB) {
            func_sc06_018_80189E60(o, 0x8C0);
        }
    } else if (AF(o, s32, 0x94) == 8) {
        func_sc06_018_80189E60(o, 0x8C0);
    }
    if (AF(o, u16, 0x72) & 0x4000) {
        if (TargetInFront(o, 0x300) != 0) {
            d = DistSqToTarget(o);
            if (d <= 0xFFFFF) {
                if (d < 0x4000) {
                    SetScript(o, &D_sc06_018_801CCBA8);
                    AF(o, s32, 0xE0) &= ~0x10;
                } else if (d < 0x6400) {
                    if (!(AF(o, s32, 0xE0) & 0x10)) {
                        SetScript(o, &D_sc06_018_801CCBA8);
                    } else {
                        SetScript(o, &D_sc06_018_801CC290);
                        AF(o, s32, 0xE0) &= ~0x10;
                    }
                } else {
                    AF(o, s16, 2) = 4;
                }
            } else {
                AF(o, s16, 2) = 2;
            }
        } else {
            AF(o, s16, 2) = 6;
        }
    }
}

void func_sc06_018_8018431C(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc06_018_801CCBA8);
    arg0->state = 0xB;
    arg0->stateCount = 0;
    arg0->vel[0] = (s32) (arg0->vel[0] * 2);
    arg0->vel[2] = (s32) (arg0->vel[2] * 2);
}

void func_sc06_018_80184370(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    if (func_sc06_018_80187130(arg0, 0x64) == 1) {
        g_PlayerHitKind = 4;
    }
    var_v1 = AF(arg0, s32, 0x10) * 0x1F;
    if (var_v1 < 0) {
        var_v1 += 0x1F;
    }
    AF(arg0, s32, 0x10) = (s32) (var_v1 >> 5);
    var_v0 = AF(arg0, s32, 0x18) * 0x1F;
    if (var_v0 < 0) {
        var_v0 += 0x1F;
    }
    AF(arg0, s32, 0x18) = (s32) (var_v0 >> 5);
    func_sc06_018_8018765C(arg0);
    if (!((D_800B99DA % 6) & 0xFFFF)) {
        temp_v0 = SpawnKind1C(arg0, 0);
        if (temp_v0 != 0) {
            AF(AF(temp_v0, void *, 0xCC), s16, 0x18) = 0x5000;
            AF(AF(temp_v0, void *, 0xCC), s16, 0x1A) = 0x5000;
        }
    }
    if (AF(arg0, s32, 0x94) == 8) {
        func_sc06_018_80189E60(arg0, 0x8C0);
    }
    if (AF(arg0, u16, 0x34) == 0) {
        if (AF(arg0, s32, 0x94) == 0xE) {
            AF(arg0, s16, 0x98) = 0;
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc06_018_801844C0(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc06_018_801CC4D8);
    arg0->state = 0xD;
    arg0->timer = 0x28;
}

void func_sc06_018_80184500(s32 arg0) {
    s32 sp10;

    FaceHelper(arg0, (s32) &D_sc06_018_801B5164, (s32) &sp10);
    if (((TickTimer(arg0) != 0) && !(g_PlayerFlags & 2)) || (func_sc06_018_80189284((s32) &sp10, (s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x400) == 0)) {
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc06_018_8018457C(u8 *o) {
    u8 *t;
    switch (AF(o, u16, 0x34)) {
    case 0:
        t = AF(o, u8 *, 0xCC);
        if (t == 0 || AF(t, s16, 0x36) != AF(o, s16, 0xEC) || TickTimer(o) != 0) {
            AF(o, s16, 2) = 0x23;
            AF(o, s32, 0xE0) |= 0x800;
            return;
        }
        AF(o, s32, 0xE8) = HeadingTo(o + 4, t + 4);
        break;
    case 1:
        if (AF(o, s16, 0x98) != 0) return;
        FreeActor(AF(o, u8 *, 0xCC));
        AF(o, u8 *, 0xCC) = 0;
        SetModelParts(AF(o, u8 *, 0x20), &D_sc06_018_801BB67C);
        SetScript(o, &D_sc06_018_801CC1E8);
        AF(o, s32, 0x1C) = 0x200;
        AF(o, s32, 0xE0) &= ~4;
        AF(o, s16, 0x34)++;
        return;
    case 2:
        t = AF(o, u8 *, 0xD0);
        if (t == 0 || AF(t, s16, 0x36) != AF(o, s16, 0xEE) || TickTimer(o) != 0) {
            AF(o, s16, 2) = 4;
            AF(o, s32, 0xE0) &= ~1;
            return;
        }
        AF(o, s32, 0xE8) = HeadingTo(o + 4, t + 4);
        break;
    case 3:
        FreeActor(AF(o, u8 *, 0xD0));
        AF(o, u8 *, 0xD0) = 0;
        SetModelParts(AF(o, u8 *, 0x20), &D_sc06_018_801B7EB8);
        SetScript(o, &D_sc06_018_801CC1E8);
        AF(o, s32, 0x48) = 0x4650;
        AF(o, s16, 2) = 5;
        AF(o, s32, 0xE0) |= 1;
        return;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE8), 8);
    if (AF(o, u16, 0x34) == 0) SetForwardVelocity(o, 0xFFF8D000);
    else SetForwardVelocity(o, 0xFFF90000);
    func_sc06_018_8018765C(o);
    if (PosDistSq(o + 4, t + 4) < 0x900) {
        if (AF(o, u16, 0x34) == 0) SetScript(o, &D_sc06_018_801CD0E8);
        AF(o, s16, 0x34)++;
    }
}

void func_sc06_018_801847FC(s32 arg0) {
    SetScript(arg0, (s32) &D_sc06_018_801CC180);
    AF(arg0, s16, 2) = 0x10;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE8) = HeadingToTarget(arg0);
}

void func_sc06_018_80184844(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    void *temp_a2;

    if (AF(arg0, u16, 0x34) == 0) {
        temp_v0 = TurnStep((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), AF(arg0, s32, 0xE8), 4);
        temp_a2 = AF(arg0, void *, 0x20);
        AF(temp_a2, s16, 0x12) = (s16) ((u16) AF(temp_a2, s16, 0x12) + temp_v0);
        if (TargetInFront((s32) arg0, 0x200, (s32) temp_a2) != 0) {
            AF(arg0, s32, 0x1C) = 0xF;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            SpawnHeadMarker((s32) arg0, -0x90);
            return;
        }
        if (temp_v0 == 0) {
            AF(arg0, s16, 2) = 2;
        }
    } else if (TickTimer((s32) arg0, arg1, arg2) != 0) {
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc06_018_80184904(StageActor *arg0) {
    SetScript(arg0, (s32) &D_sc06_018_801CC868);
    arg0->accel[1] = 0x4650;
    arg0->state = 0x12;
}

void func_sc06_018_80184944(u8 *o) {
    s32 d = DistSqToTarget();
    if (d > 0x144000) {
        AF(o, s16, 2) = 0x13;
        return;
    }
    if (d > 0xC4000) {
        if (!(AF(o, s32, 0xE0) & 0x40)) {
            AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToTarget(o, 8);
        }
    } else if ((u32)(d - 0x24000) <= 0xA0000) {
        AF(o, s16, 2) = 0x15;
        return;
    } else {
        if (!(AF(o, s32, 0xE0) & 0x40) && TickTimer(o) != 0) {
            AF(o, s32, 0xE8) = (HeadingToPlayer(o) + 0x800) & 0xFFF;
            AF(o, s32, 0x1C) = rand() % 64 + 0x40;
        }
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE8), 8);
    }
    SetForwardVelocity(o, 0xFFF9C000);
    AF(o, s32, 0xE0) &= ~0x40;
    if (func_sc06_018_8018765C(o) == 0) {
        func_sc06_018_801877E4(o);
    }
}

void func_sc06_018_80184AA8(StageActor *arg0) {
    s32 *var_a1;

    arg0->state = 0x14;
    if (!(arg0->workE0 & 0x400)) {
        arg0->stateCount = 1;
        var_a1 = &D_sc06_018_801CC530;
    } else {
        arg0->stateCount = 0;
        var_a1 = &D_sc06_018_801B4F5C;
    }
    SetScript((s32) arg0, (s32) var_a1);
}

void func_sc06_018_80184AFC(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc06_018_801CC530);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (DistSqToTarget(o) <= 0x24000) {
            if (!(AF(o, s32, 0xE0) & 0x400)) {
                AF(o, s16, 2) = 0x15;
            } else {
                SetScript(o, &D_sc06_018_801CC920);
                AF(o, u16, 0x34)++;
            }
        }
        break;
    case 2:
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc06_018_801CC868);
            AF(o, s32, 0x48) = 0x4650;
            AF(o, s16, 2) = 0x12;
        }
        break;
    }
}

void func_sc06_018_80184C0C(StageActor *arg0) {
    arg0->state = 0x16;
    if (!(arg0->workE0 & 0x400)) {
        SetScript((s32) arg0, (s32) &D_sc06_018_801CC530);
        arg0->stateCount = 4;
        arg0->timer = 0xF;
        return;
    }
    arg0->timer = 0x1E;
    arg0->stateCount = 0;
}

void func_sc06_018_80184C74(s32 arg0) {
    SV8 p;
    SMtx m;
    s32 d;
    s32 t;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        d = TurnStepToTarget(arg0, 8);
        t = AF(arg0, s32, 0x20);
        AF(t, u16, 0x12) += d;
        if (TickTimer(arg0) == 0 && d != 0) {
            break;
        }
        SetScript(arg0, &D_sc06_018_801B4F5C);
        AF(arg0, u16, 0x34)++;
        break;
    case 1:
        if (AF(arg0, u16, 0x72) & 0x4000) {
            SetScript(arg0, &D_sc06_018_801CC598);
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 2:
        if (AF(arg0, u16, 0x72) & 0x4000) {
            if (IsOnScreen(arg0, 0xA000C8) == 0) {
                AF(arg0, s16, 2) = 0x14;
if (!(AF(arg0, s32, 0xE0) & 0x400)) {
                    AF(arg0, u16, 0x34) = 1;
                    SetScript(arg0, &D_sc06_018_801CC530);
                } else {
                    AF(arg0, u16, 0x34) = 0;
                    SetScript(arg0, &D_sc06_018_801B4F5C);
                }
                break;
            }
            d = DistSqToTarget(arg0);
            if (!(AF(arg0, s32, 0xE0) & 0x400)) {
                if (d >= 0x64000) {
                    AF(arg0, s16, 2) = 0x14;
if (!(AF(arg0, s32, 0xE0) & 0x400)) {
                        AF(arg0, u16, 0x34) = 1;
                        SetScript(arg0, &D_sc06_018_801CC530);
                    } else {
                        AF(arg0, u16, 0x34) = 0;
                        SetScript(arg0, &D_sc06_018_801B4F5C);
                    }
                    break;
                }
            } else if ((u32) (d - 0x24000) > 0xA0000) {
                SetScript(arg0, &D_sc06_018_801CC920);
                AF(arg0, u16, 0x34)++;
                break;
            }
        }
        if (AF(arg0, s32, 0x94) < 8) {
            d = TurnStepToTarget(arg0, 8);
            AF(AF(arg0, s32, 0x20), u16, 0x12) += d;
        }
        if (AF(arg0, s32, 0x94) == 7) {
            GetPartLocalMatrix(arg0, 0xB, &m);
            LocalToWorld(&m, &D_sc06_018_801B5174, &p);
            func_sc06_018_80180354(arg0, &p);
            gte_SetRotMatrix((SMtx *) (AF(arg0, s32, 0x20) + 0x34));
            gte_ldclmv(&m);
            gte_rtir();
            gte_stclmv(&m);
            gte_ldclmv((u8 *) &m + 2);
            gte_rtir();
            gte_stclmv((u8 *) &m + 2);
            gte_ldclmv((u8 *) &m + 4);
            gte_rtir();
            gte_stclmv((u8 *) &m + 4);
            gte_SetTransMatrix((SMtx *) (AF(arg0, s32, 0x20) + 0x34));
            gte_ldlv0(m.t);
            gte_rtv0tr();
            gte_stlvnl(m.t);
            LocalToWorld(&m, &D_sc06_018_801B5174, &p);
            func_sc06_018_8018931C(arg0, &p, 0x282, 2, -0x120, 0);
            func_sc06_018_8018931C(arg0, &p, 0x282, 2, 0, 0);
            func_sc06_018_8018931C(arg0, &p, 0x282, 2, 0x120, 0);
            func_sc06_018_80189E60(arg0, 0x8BD);
        }
        break;
    case 3:
        if (AF(arg0, u16, 0x72) & 0x4000) {
            SetScript(arg0, &D_sc06_018_801CC868);
            AF(arg0, s32, 0x48) = 0x4650;
            AF(arg0, s16, 2) = 0x12;
        }
        break;
    case 4:
        if (TickTimer(arg0) != 0) {
            SetScript(arg0, &D_sc06_018_801CC598);
            AF(arg0, u16, 0x34) = 2;
        }
        break;
    }
}


void func_sc06_018_801850F4(u8 *o) {
    u8 *t;
    s32 v;
    if (AF(o, u16, 0x34) == 0) {
        t = AF(o, u8 *, 0xCC);
        if (t == 0 || AF(t, s16, 0x36) != AF(o, s16, 0xEC) || TickTimer() != 0) {
            AF(o, s16, 2) = 0x23;
            AF(o, s32, 0xE0) |= 0x800;
            return;
        }
        v = HeadingTo(o + 4, t + 4);
        AF(o, s32, 0xE8) = v;
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), v, 8);
        SetForwardVelocity(o, 0xFFF8D000);
        func_sc06_018_8018765C(o);
        if (PosDistSq(o + 4, t + 4) < 0x900) {
            AF(o, s16, 0x34)++;
            SetScript(o, &D_sc06_018_801CD0E8);
        }
    } else if (AF(o, s16, 0x98) == 0) {
        FreeActor(AF(o, u8 *, 0xCC));
        AF(o, u8 *, 0xCC) = 0;
        SetModelParts(AF(o, u8 *, 0x20), &D_sc06_018_801BC090);
        SetScript(o, &D_sc06_018_801CC868);
        AF(o, s32, 0x48) = 0x4650;
        AF(o, s16, 2) = 0x12;
        AF(o, s32, 0xE0) &= ~4;
    }
}

void func_sc06_018_80185268(StageActor *arg0) {
    s32 r;
    s32 e;

    arg0->state = 0x19;
    SetScript((s32) arg0, (s32) &D_sc06_018_801CC7A0);
    arg0->timer = rand() % 64 + 0x80;
    r = rand() % 1024;
    e = arg0->workE8;
    arg0->workE8 = (rand() & 1) ? e + r : e - r;
    arg0->accel[1] = 0x4650;
}

void func_sc06_018_80185320(u8 *o) {
    s32 sp10[2];
    s32 t;
    t = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE8), 0x10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += t;
    SetForwardVelocity(o, -0x43000);
    AF(o, s32, 0xE0) &= ~0x40;
    if (!func_sc06_018_8018765C(o)) func_sc06_018_801877E4(o);
    FaceHelper(o, &D_sc06_018_801B5164, sp10);
    if (func_sc06_018_80189284(sp10, AF(AF(o, u8 *, 0x20), s16, 0x12), 0x380) && DistSqToTarget(o) < 0x64000) {
        AF(o, s16, 2) = 0x1C;
    } else if (TickTimer(o)) {
        AF(o, s16, 2) = 0x1A;
    }
}

void func_sc06_018_80185400(StageActor *arg0) {
    arg0->state = 0x1B;
    SetScript((s32) arg0, (s32) &D_sc06_018_801CC358);
    arg0->timer = 0x20;
}

void func_sc06_018_80185440(s32 arg0) {
    s32 sp10[2];

    FaceHelper(arg0, (s32) &D_sc06_018_801B5164, (s32) sp10);
    if (func_sc06_018_80189284((s32) sp10, (s32) AF(AF(arg0, void *, 0x20), s16, 0x12), 0x380) != 0 && DistSqToTarget(arg0) <= 0x63FFF) {
        AF(arg0, s16, 2) = 0x1C;
        return;
    }
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 2) = 0x18;
    }
}

void func_sc06_018_801854C0(StageActor *arg0) {
    arg0->state = 0x1D;
    arg0->stateCount = 0;
    arg0->timer = 0xF;
    SetScript((s32) arg0, (s32) &D_sc06_018_801CC358);
}

void func_sc06_018_801854F8(u8 *o) {
    MTX m;
    V3 vec;
    SV8 rot;
    SV8 pos;
    SV8 face;
    u8 *c;
    s32 i;
    if (AF(o, u16, 0x34) == 0) {
        if (!TickTimer()) {
            return;
        }
        SetScript(o, &D_sc06_018_801CC3D0);
        AF(o, s16, 0x34)++;
    }
    if (AF(o, s32, 0x94) < 0xE) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToTarget(o, 8);
    }
    if (AF(o, s32, 0x94) == 0xE) {
        func_sc06_018_80189380(o, &D_sc06_018_801B517C, &pos, 0xB);
        func_sc06_018_8018931C(o, &pos, 0x282, 0, 0, 0);
        c = SpawnPropFrom(o, 0x22);
        if (c != 0) {
            AF(c, s16, 0x34) = 0x7002;
            AF(c, s16, 6) = pos.x;
            AF(c, s16, 0xA) = pos.y;
            AF(c, s16, 0xE) = pos.z;
            AF(AF(c, u8 *, 0x20), u16, 0x2C) = 0xC006;
        }
        rot.x = 0x40;
        rot.y = AF(AF(o, u8 *, 0x20), s16, 0x12);
        rot.z = 0;
        RotMatrixZYX(&rot, &m);
        for (i = 0; i < 5; i++) {
            c = SpawnPropFrom(o, 0x22);
            if (c != 0) {
                vec.x = vec.y = 0;
                vec.z = (rand() % 5 + 4) << 16;
                ApplyMatrixLV(&m, &vec, c + 0x10);
                AF(c, s16, 0x34) = ((rand() % 2 + 2) << 12) | 1;
                AF(AF(c, u8 *, 0x20), u16, 0x2C) = 0xC006;
                func_sc06_018_80189380(o, &D_sc06_018_801B518C + i * 8, &pos, 0xB);
                AF(c, s16, 6) = pos.x;
                AF(c, s16, 0xA) = pos.y;
                AF(c, s16, 0xE) = pos.z;
            }
        }
        func_sc06_018_80189E60(o, 0x8BE);
    }
    if (AF(o, u16, 0x72) & 0x4000) {
        FaceHelper(o, &D_sc06_018_801B5164, &face);
        if (DistSqToTarget(o) > 0x63FFF || func_sc06_018_80189284(&face, AF(AF(o, u8 *, 0x20), s16, 0x12), 0x380) == 0) {
            AF(o, s16, 2) = 0x1B;
            SetScript(o, &D_sc06_018_801CC358);
            AF(o, s32, 0x1C) = 0x20;
        }
    }
}

void func_sc06_018_801857CC(u8 *o) {
    u8 *t;
    s32 v;
    if (AF(o, u16, 0x34) == 0) {
        t = AF(o, u8 *, 0xCC);
        if (t == 0 || AF(t, s16, 0x36) != AF(o, s16, 0xEC) || TickTimer() != 0) {
            AF(o, s16, 2) = 0x23;
            AF(o, s32, 0xE0) |= 0x800;
            return;
        }
        v = HeadingTo(o + 4, t + 4);
        AF(o, s32, 0xE8) = v;
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), v, 8);
        SetForwardVelocity(o, 0xFFF8D000);
        func_sc06_018_8018765C(o);
        if (PosDistSq(o + 4, t + 4) < 0x900) {
            AF(o, s16, 0x34)++;
            SetScript(o, &D_sc06_018_801CD0E8);
        }
    } else if (AF(o, s16, 0x98) == 0) {
        FreeActor(AF(o, u8 *, 0xCC));
        AF(o, u8 *, 0xCC) = 0;
        SetModelParts(AF(o, u8 *, 0x20), &D_sc06_018_801BBC78);
        AF(o, s16, 2) = 0x1D;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0x1C) = 0xF;
        SetScript(o, &D_sc06_018_801CC358);
        AF(o, s32, 0xE0) &= ~4;
    }
}

void func_sc06_018_80185944(StageActor *arg0) {
    arg0->state = 0x20;
    SetScript((s32) arg0, (s32) &D_sc06_018_801CC6E8);
    arg0->timer = 0;
    arg0->workE4 = 0;
    arg0->accel[1] = 0x4650;
}

void func_sc06_018_8018598C(u8 *o) {
    SV8 x;
    SV8 w;
    s32 v;
    s32 *vp;
    s32 t;
    s32 r;
    s32 n;
    u8 *p;
    Player *q;
    s32 a;
    s32 base;
    q = &g_Player;
    p = o + 0xEC;
    if (TickTimer(o)) {
        vp = &v;
        a = rand() % 1024;
        base = AF(g_PlayerModel, s16, 0x12) + 0x800;
        if (!(rand() & 1)) {
            n = base - a;
        } else {
            n = base + a;
        }
        AngleToVec2(vp, n, rand() % 512 + 0x200);
        t = v;
        AF(p, s16, 0) = q->pos[0].h.i + t;
        AF(p, s16, 2) = q->pos[1].h.i;
        AF(p, s16, 4) = q->pos[2].h.i + (t >> 16);
        r = rand();
        AF(o, s32, 0x1C) = 0x80;
        AF(o, s16, 0x100) = r % 9 + 8;
    }
    if (!(AF(o, s32, 0xE0) & 0x40)) {
        AF(o, s32, 0xE8) = HeadingToPoint(o + 4, p);
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE8), AF(o, s16, 0x100));
    SetForwardVelocity(o, 0xFFFA0000);
    AF(o, s32, 0xE0) &= ~0x40;
    if (func_sc06_018_8018765C(o) == 0) {
        func_sc06_018_801877E4(o);
        w.x = w.y = 0;
        w.z = -0x100;
        LocalToWorld(AF(o, u8 *, 0x20) + 0x34, &w, p);
    }
    if (D_800B99DA % 40 == 0) {
        if (!(AF(o, s32, 0xE0) & 0x80)) {
            func_sc06_018_80189380(o, &D_sc06_018_801B5184, &x, 0xB);
            func_sc06_018_8018931C(o, &x, 0x282, 1, 0, 0);
            AF(o, s32, 0xE0) |= 0x80;
        }
    }
    if (PosSVecDistSq(o + 4, p) < 0x400) {
        AF(o, s32, 0x1C) = 0;
    }
}

void func_sc06_018_80185C2C(u8 *o) {
    u8 *p;
    s32 e;
    s32 t;

    if (AF(o, u16, 0x34) == 0) {
        p = AF(o, u8 *, 0xCC);
        if (p == 0 || AF(p, s16, 0x36) != AF(o, s16, 0xEC) || TickTimer(o)) {
            AF(o, s16, 2) = 0x23;
            AF(o, s32, 0xE0) |= 0x800;
            return;
        }
        e = HeadingTo(o + 4, p + 4);
        AF(o, s32, 0xE8) = e;
        t = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), e, 8);
        AF(AF(o, u8 *, 0x20), s16, 0x12) += t;
        SetForwardVelocity(o, -0x73000);
        func_sc06_018_8018765C(o);
        if (PosDistSq(o + 4, p + 4) < 0x900) {
            AF(o, s16, 0x34)++;
            SetScript(o, &D_sc06_018_801CD0E8);
        }
    } else if (AF(o, s16, 0x98) == 0) {
        FreeActor(AF(o, u8 *, 0xCC));
        AF(o, u8 *, 0xCC) = 0;
        SetModelParts(AF(o, s32, 0x20), &D_sc06_018_801BC494);
        AF(o, s16, 2) = 0x20;
        SetScript(o, &D_sc06_018_801CC6E8);
        AF(o, s32, 0x48) = 0x4650;
        AF(o, s32, 0x1C) = 0;
        AF(o, s32, 0xE4) = 0;
        AF(o, s32, 0xE0) &= ~4;
    }
}

void func_sc06_018_80185DA8(StageActor *arg0) {
    if (arg0->animTimer == 0) {
        func_sc06_018_80187038();
    }
}

void func_sc06_018_80185DD8(u8 *o) {
    SV8 p;
    SV8 q;
    s32 t;

    if (!(AF(o, s32, 0xE0) & 0x40)) {
        if (GroundDistSqToPlayer() <= 0x63FFF && TickTimer(o)) {
            AF(o, s32, 0xE8) = (HeadingToPlayer(o) + 0x800) & 0xFFF;
            AF(o, s32, 0x1C) = rand() % 64 + 0x40;
        }
    }
    t = TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s32, 0xE8), 8);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += t;
    AF(o, s32, 0xE0) &= ~0x40;
    SetForwardVelocity(o, -0x73000);
    if (!func_sc06_018_8018765C(o)) func_sc06_018_801877E4(o);
    p.x = AF(o, s16, 6);
    p.y = AF(o, s16, 0xA);
    p.z = AF(o, s16, 0xE);
    ProjectPoint(&p, &q);
    if ((q.x < 0 ? -q.x : q.x) > 0x104 || (q.y < 0 ? -q.y : q.y) > 0xC8) {
        DespawnActor(o);
    }
}

void func_sc06_018_80185F58(u8 *o) {
    SV8 v;
    s16 d;
    u8 *p;
    TakeDamage();
    AF(o, s32, 0x1C) = 0;
    AF(o, u16, 0x5C) &= ~1;
    StopWithGravity(o);
    d = (AF(o, s16, 0x60) * AF(AF(o, u8 *, 0x78), s16, 0x30)) >> 12;
    if (d <= 0) {
        d = 1;
    }
    if (AF(o, s32, 0xE0) & 1) {
        FaceHelper(o, &D_sc06_018_801B5164, &v);
        if (func_sc06_018_80189284(&v, AF(AF(o, u8 *, 0x20), s16, 0x12), 0x400)) {
            SpawnEffect(6, o, AF(o, s16, 0x7C), AF(o, s16, 0x7E), AF(o, s16, 0x80), 0, 0);
            AF(o, s16, 0xFE) -= d;
            if (AF(o, s16, 0xFE) <= 0) {
                func_sc06_018_80189380(o, &D_sc06_018_801B5164 + 8, &v, 0xC);
                func_sc06_018_8018931C(o, &v, 0x27F, 0, 0, 0);
                AF(o, s32, 0x58) = (s32)&D_sc06_018_801B5084 | 0x40000000 | 0x20000000;
                AF(o, s32, 0xE0) &= ~1;
                SetModelParts(AF(o, u8 *, 0x20), &D_sc06_018_801BB67C);
            }
            SetLocalVelocity(o, &D_sc06_018_801B51EC);
            AF(o, s16, 0x34) = 3;
            return;
        }
    }
    if (AF(o, u16, 0x5E) != 0x1D) {
        if (AF(o, u8, 0xC8)) {
            GainStat3FromActor(o);
        }
        if (AF(o, u8, 0xC9)) {
            GainStat2FromActor(o);
        }
    }
    AF(o, s16, 0x76) -= d;
    if (AF(o, s16, 0x76) <= 0) {
        SetReactionStep(o, 0xC);
        return;
    }
    AF(o, s16, 0x98) = 0;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x14) = 0;
    UpdateModelZYX(o);
    func_sc06_018_80189E60(o, 0x9B7);
    switch (AF(o, u16, 0x5E)) {
    case 1: case 2: case 3: case 4: case 6: case 7: case 11: case 12: case 16:
    case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26:
    case 35: case 36: case 37: case 40:
    case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50:
        AF(o, s16, 0x34) = 4;
        SetScript(o, D_sc06_018_801B534C[AF(o, u16, 0x70) & 0xF]);
        return;
    case 8:
        SetScript(o, D_sc06_018_801B534C[AF(o, u16, 0x70) & 0xF]);
        p = &D_sc06_018_801B51CC;
        break;
    case 5: case 29: case 32: case 38: case 42:
        p = &D_sc06_018_801B51DC;
        SetScript(o, &D_sc06_018_801CCD68);
        AF(o, s32, 0xE0) |= 8;
        AF(o, u16, 0xAE) |= 1;
        func_sc06_018_801874E4(o, -0x8000);
        break;
    default:
        p = &D_sc06_018_801B51BC;
        break;
    }
    SetLocalVelocity(o, p);
    AF(o, s16, 0x34) = 0;
}

void func_sc06_018_80186270(s32 arg0) {
    s32 f;
    s32 e;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc06_018_80186EF4(arg0);
        return;
    }
    if ((AF(arg0, s32, 0xE0) & 8) && (AF(arg0, s32, 0x10) != 0 || AF(arg0, s32, 0x18) != 0)) {
        DamageActorsNear(arg0, 0x50, AF(AF(arg0, s32, 0x20), s16, 0x12) + 0x800, 0x1D);
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        f = MoveCollidePassable(arg0);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x2000) {
            AF(arg0, u16, 0x34)++;
            if (AF(arg0, s32, 0x90) == (s32) &D_sc06_018_801CCD68) {
                func_sc06_018_80189E60(arg0, 0x9B8);
            }
            break;
        }
        if (f & 0x4000) {
            StopWithGravity(arg0);
            AF(arg0, u16, 0x34) = 2;
        }
        if (AF(arg0, u8, 0xC1) == 0xB && AF(arg0, s32, 0x14) >= 0) {
            SetReactionStep(arg0, 6);
        }
        break;
    case 1:
        AF(arg0, s32, 0x10) = (AF(arg0, s32, 0x10) * 15) / 16;
        AF(arg0, s32, 0x18) = (AF(arg0, s32, 0x18) * 15) / 16;
        f = MoveOnGround(arg0);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x4000) {
            StopWithGravity(arg0);
            AF(arg0, u16, 0x34) = 2;
            break;
        }
        if (!(f & 0x6000)) {
            goto tail_d;
        }
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            e = SpawnKind1C(arg0, 1);
            if (e != 0) {
                AF(AF(e, s32, 0xCC), s16, 0x18) = 0x6000;
                AF(AF(e, s32, 0xCC), s16, 0x1A) = 0x6000;
            }
        }
        if (++AF(arg0, s32, 0x1C) < 0x11) {
            break;
        }
        if (AF(arg0, s32, 0x90) == (s32) &D_sc06_018_801CCD68) {
            func_sc06_018_80189E60(arg0, 0x9B8);
        }
tail76:
        if (AF(arg0, s16, 0x76) <= 0) { SetReactionStep(arg0, 6); } else { EndReaction(arg0); }
        break;
    case 2:
        f = MoveOnGround(arg0);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x2000) {
            goto tail76;
        }
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            e = SpawnKind1C(arg0, 1);
            if (e != 0) {
                AF(AF(e, s32, 0xCC), s16, 0x18) = 0x6000;
                AF(AF(e, s32, 0xCC), s16, 0x1A) = 0x6000;
            }
        }
        if (++AF(arg0, s32, 0x1C) < 0x3D) {
            break;
        }
        goto tail_d;
    case 3:
        AF(arg0, s32, 0x10) = (AF(arg0, s32, 0x10) * 15) / 16;
        AF(arg0, s32, 0x18) = (AF(arg0, s32, 0x18) * 15) / 16;
        f = MoveOnGround(arg0);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x6000) {
            goto x3;
        }
tail_d:
        SetReactionStep(arg0, 0xD);
        break;
x3:
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            e = SpawnKind1C(arg0, 1);
            if (e != 0) {
                AF(AF(e, s32, 0xCC), s16, 0x18) = 0x6000;
                AF(AF(e, s32, 0xCC), s16, 0x1A) = 0x6000;
            }
        }
        if (++AF(arg0, s32, 0x1C) < 5) {
            break;
        }
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s16, 0x5C) = AF(AF(arg0, s32, 0x78), s16, 2);
        AF(arg0, s16, 0x5E) = 0;
        if (AF(arg0, u16, 2) != 0xD) {
            AF(arg0, s16, 2) = 2;
        }
        break;
    case 4:
        f = MoveCollidePassable(arg0);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if ((f & 0x2000) && AF(arg0, s16, 0x98) == 0) {
            if (AF(arg0, s16, 0x76) <= 0) { SetReactionStep(arg0, 6); } else { EndReaction(arg0); }
        }
        break;
    case 5:
        break;
    }
}

void func_sc06_018_801866D4(s32 arg0) {
    s32 pad[2];
    TakeDamageAndRecoil();
    SetLocalVelocity(arg0, (s32) &D_sc06_018_801B51DC);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE0) = (s32) (AF(arg0, s32, 0xE0) | 8);
    SetScript(arg0, (s32) &D_sc06_018_801CCD68);
    func_sc06_018_801874E4(arg0, 0);
}

void func_sc06_018_80186738(StageActor *arg0) {
    SetScript((s32) arg0, D_sc06_018_801B535C[((u16)arg0->param & 0xF)]);
    arg0->workE4 = 0;
}

void func_sc06_018_80186784(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (AF(arg0, u8, 0xC1) != 0) {
        AF(AF(arg0, void *, 0x20), s16, 0x10) = (s16) (rcos(AF(arg0, s32, 0xE4) << 7, arg1, arg2, arg3) >> 5);
        AF(AF(arg0, void *, 0x20), s16, 0x14) = (s16) (rsin(AF(arg0, s32, 0xE4) << 7) >> 4);
        UpdateModelYXZ((s32) arg0);
        AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) + 1);
    }
}

void func_sc06_018_80186800(StageActor *arg0) {
    TakeDamageAndRecoil();
    arg0->ofs[1] = -0x30;
    SetScript((s32) arg0, D_sc06_018_801B521C[((u16)arg0->param & 0xF)]);
}

void func_sc06_018_80186850(u8 *arg0) {
    AF(arg0, s16, 0x52) = 0;
    AF(arg0, s32, 0xE0) |= 0x28;
    AF(arg0, u16, 0xAE) |= 1;
    AF(arg0, s32, 0xC4) |= 4;
    func_sc06_018_80186928();
}

void func_sc06_018_80186894(StageActor *arg0) {
    arg0->hitState = 0;
    HideModel((s32) arg0);
    arg0->timer = 0xA;
    func_sc06_018_80189000((s32) arg0, ((u16)arg0->param & 0xF) + 2);
}

void func_sc06_018_801868DC(StageActor *arg0) {
    if (func_sc06_018_8018944C(arg0, 0x60, 0xA) == 1) {
        DropItem(arg0);
        func_sc06_018_80186EF4(arg0);
    }
}

void func_sc06_018_80186928(u8 *o) {
    AF(o, u8, 0xC2) = 0;
    AF(o, u8, 0xC3) = 0;
    AF(o, s32, 0x1C) = 0;
    TakeDamageAndRecoil();
    if (AF(o, u16, 0x5E) == 9 || AF(o, u16, 0x5E) == 0x1C) {
        SetLocalVelocity(o, &D_sc06_018_801B536C);
    } else {
        SetLocalVelocity(o, &D_sc06_018_801B537C);
    }
}

void func_sc06_018_80186994(s32 arg0) {
    s32 f;
    u8 unused[8];
    s32 s;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        func_sc06_018_80186EF4(arg0);
        return;
    }
    if (AF(arg0, s32, 0x10) != 0 || AF(arg0, s32, 0x18) != 0) {
        DamageActorsNear(arg0, 0x50, AF(AF(arg0, s32, 0x20), s16, 0x12) + 0x800, 0x1D);
    }
    switch (AF(arg0, u8, 0xC2)) {
    case 0:
        func_sc06_018_80186D80(arg0, &D_sc06_018_801B538C);
        AF(arg0, u8, 0xC2)++;
    case 1:
        AF(AF(arg0, s32, 0x20), u16, 0x10) -= 0x100;
        if (++AF(arg0, s32, 0x1C) >= 0x29) {
            goto tail_d;
        }
        f = MoveCollidePassableAt(arg0, &D_sc06_018_801B538C);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x4000) {
            goto tail_b;
        }
        if (f & 0x2000) {
            AF(arg0, u8, 0xC2) = 2;
            SpawnKind1C(arg0, 1);
            AF(arg0, s32, 0x14) = -0xD0000;
            AF(arg0, s32, 0x1C) = 0;
            func_sc06_018_80189E60(arg0, 0x9B8);
        }
        break;
    case 2:
        AF(AF(arg0, s32, 0x20), u16, 0x10) -= 0x100;
        if (++AF(arg0, s32, 0x1C) >= 0x29) {
            goto tail_d;
        }
        s = AF(arg0, s32, 0x14);
        f = MoveCollidePassableAt(arg0, &D_sc06_018_801B538C);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x4000) {
            goto tail_b;
        }
        if (f & 0x2000) {
            SpawnKind1C(arg0, 1);
            AF(arg0, u8, 0xC2) = 3;
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, s32, 0x14) = -s / 3;
            AF(AF(arg0, s32, 0x20), s16, 0x10) = 0;
        }
        break;
    case 3:
        AF(arg0, s32, 0x10) = (AF(arg0, s32, 0x10) * 15) / 16;
        AF(arg0, s32, 0x18) = (AF(arg0, s32, 0x18) * 15) / 16;
        if (AF(arg0, u8, 0xC3) & 1) {
            f = MoveOnGround(arg0);
            if (f & 0x8000) {
                AF(arg0, s32, 0x18) = 0;
                AF(arg0, s32, 0x10) = 0;
            }
            if (f & 0x6000) {
                goto c78;
            }
            goto tail_d;
        } else {
            f = MoveCollidePassable(arg0);
            if (f & 0x8000) {
                AF(arg0, s32, 0x18) = 0;
                AF(arg0, s32, 0x10) = 0;
            }
            if (f & 0x4000) {
            tail_b:
                StopWithGravity(arg0);
                AF(arg0, u8, 0xC2) = 4;
                break;
            }
            if (f & 0x2000) {
                AF(arg0, u8, 0xC3) |= 1;
                func_sc06_018_80189E60(arg0, 0x9B8);
            }
        }
    c78:
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            SpawnKind1C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) < 0x11) {
            break;
        }
        if (!(f & 0x6000)) {
            goto tail_d;
        }
        if (AF(arg0, s16, 0x76) > 0) {
            goto tail_c;
        }
        SetReactionStep(arg0, 6); break;
    case 4:
        f = MoveOnGround(arg0);
        if (f & 0x8000) {
            AF(arg0, s32, 0x18) = 0;
            AF(arg0, s32, 0x10) = 0;
        }
        if (f & 0x2000) {
            if (AF(arg0, s16, 0x76) <= 0) { SetReactionStep(arg0, 6); } else { tail_c: EndReaction(arg0); } break;
        }
        if ((AF(arg0, s32, 0x1C) & 3) == 3) {
            SpawnKind1C(arg0, 1);
        }
        if (++AF(arg0, s32, 0x1C) < 0x3D) {
            break;
        }
    tail_d:
        SetReactionStep(arg0, 0xD);
        break;
    }
}

void func_sc06_018_80186D80(u8 *o, SV8 *v) {
    SV8 a;
    SV8 b;
    SV8 c;
    a.x = AF(o, s16, 0x3A);
    a.y = AF(o, s16, 0x3E);
    a.z = AF(o, s16, 0x42);
    b = a;
    b.x += v->x;
    b.y += v->y;
    b.z += v->z;
    c = b;
    CollidePath(&a, &b, 1);
    b.x -= v->x;
    b.y -= v->y;
    b.z -= v->z;
    AF(o, s16, 0x3A) = b.x;
    AF(o, s16, 0x3E) = b.y;
    AF(o, s16, 0x42) = b.z;
    AF(o, s16, 6) = b.x;
    AF(o, s16, 0xA) = b.y;
    AF(o, s16, 0xE) = b.z;
}

void func_sc06_018_80186ED4(s32 arg0) {
    func_sc06_018_80189E60(arg0, 0x9B7);
}

s32 func_sc06_018_80186EF4(StageActor *arg0) {
    s32 temp_v1;
    s32 var_a0;

    temp_v1 = (u16)arg0->param & 0xF;
    if (temp_v1 != 1) {
        if (temp_v1 < 2) {
            var_a0 = 0x1F;
            if (temp_v1 != 0) {

            } else {
                goto block_7;
            }
        } else {
            var_a0 = 0x21;
            if (temp_v1 != 2) {

            } else {
                goto block_7;
            }
        }
    } else {
        var_a0 = 0x20;
block_7:
        GiveItem(var_a0);
    }
    GainStat0FromActor(arg0);
    return DespawnActor(arg0);
}

void func_sc06_018_80186F78(StageActor *arg0) {
    s32 temp_v1;
    ModelObj *temp_v0;
    u16 t;

    temp_v1 = arg0->workE0;
    arg0->stateCount = 0;
    if (!(temp_v1 & 8)) {
        func_sc06_018_80187038();
    } else {
        if (temp_v1 & 0x20) {
            func_sc06_018_801874E4((s32) arg0, -0x8000);
        }
        arg0->state = 0x22;
        SetScript((s32) arg0, (s32) &D_sc06_018_801CD170);
    }
    temp_v0 = arg0->model;
    temp_v0->rot.vz = 0;
    temp_v0->rot.vx = 0;
    t = arg0->init->hitState;
    arg0->workE0 = (s32) ((arg0->workE0 & ~0x2A) | 0x400);
    arg0->hitCode = 0;
    arg0->hitMask = (u16) (arg0->hitMask & 0xFFFE);
    arg0->reactOpts = (s32) ((s32)arg0->reactOpts & ~4);
    arg0->hitState = t;
}

void func_sc06_018_80187038(StageActor *o) {
    s32 e = o->workE0;
    if (!(e & 4)) {
        if (e & 0x800) {
            o->state = 0xE;
            SetScript(o, &D_sc06_018_801CCEC0);
        } else if (!(e & 1) && (s32)o->ext1 != 0) {
            o->state = 0xE;
            o->stateCount = 2;
            o->timer = 0x200;
            SetScript(o, &D_sc06_018_801CC1E8);
        } else {
            o->state = D_sc06_018_801B51FC[(u16)o->param & 0xF];
        }
    } else {
        o->state = D_sc06_018_801B520C[(u16)o->param & 0xF];
        SetScript(o, &D_sc06_018_801CCEC0);
        o->timer = 0x200;
    }
}

s32 func_sc06_018_80187130(StageActor *o, s32 k) {
    s32 m[8];
    SV8 a;
    SV8 b;
    u8 unused[8];
    s32 flag;
    GetPartWorldMatrix(o, 0xB, m);
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&D_sc06_018_801B5394[0], &a, &flag);
    RotTransSV(&D_sc06_018_801B5394[1], &b, &flag);
    if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b) != 0) {
        HitPlayer(1, 1, o->model->rot.vy, k, &b, &g_GroundNormal);
        return 1;
    }
    return 0;
}

s32 func_sc06_018_80187250(u8 *o) {
    s32 sp10[2];
    s32 r;
    if (!(AF(o, s32, 0xE0) & 1)) return 0;
    if (AF(o, u16, 2) == 1) return 0;
    if (AF(o, u16, 2) == 0xD) return 0;
    if (!(g_PlayerFlags & 2)) return 0;
    if (DistSqToTarget(o) > 0x10000) return 0;
    if ((r = func_sc06_018_801893CC(o, 0x380)) != 0) {
        FaceHelper(o, &D_sc06_018_801B5164, sp10);
        if (func_sc06_018_80189284(sp10, AF(AF(o, u8 *, 0x20), s16, 0x12), 0x380) == 0) return 0;
        AF(o, u16, 2) = 0xC;
        r = 1;
    }
    return r;
}

void func_sc06_018_80187320(u8 *o) {
    typedef struct { s32 v; } W;
    SV8 b;
    SV8 a;
    W d;
    u8 *p;
    s32 i;
    s32 z;
    s32 w;
    s32 y;
    p = &g_Actors;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (o == p) continue;
        switch (AF(p, u16, 0)) {
        case 0x27A:
            if (DistSq(o + 4, p + 4) < 0x6400) {
                d = ((W (*)())AngleToVec2)(HeadingTo(o + 4, p + 4), 0xA1);
                a.x = AF(p, s16, 6);
                a.y = AF(p, s16, 0xA);
                a.z = AF(p, s16, 0xE);
                a.x += d.v;
                a.z += d.v >> 16;
                a.y = AF(o, s16, 0xA);
                b.x = AF(o, s16, 0x3A);
                b.y = AF(o, s16, 0x3E);
                b.z = AF(o, s16, 0x42);
                if (!(CollidePath(&b, &a, 0) & 0x2000)) {
                    RestorePrevPos(o);
                } else {
                    AF(o, s16, 6) = a.x;
                    AF(o, s16, 0xA) = a.y;
                    AF(o, s16, 0xE) = a.z;
                }
                return;
            }
            break;
        case 0x2F4: {
            u8 unused[8];
            z = AF(p, s16, 0xE);
            w = (s16)z;
            do {
                y = AF(o, s16, 0xE);
                if (z + 0x10 < y) {
                    DespawnActor(o, w);
                    return;
                }
            } while (0);
            if (z - 0x60 < y) {
                AF(o, s16, 0xE) = w - 0x60;
            }
            }
            break;
        }
    }
}

extern u8 D_sc06_018_801B516C;
extern s32 D_sc06_018_801B53A4[];
s32 func_sc06_018_801874E4(StageActor *o, s32 a1) {
    s16 arg1 = a1;
    SV8 buf;
    s16 n;
    s32 flags;
    u8 *r;

    n = (u16)o->param & 0xF;
    flags = o->workE0;
    if (flags & 4) return 0;
    switch (n) {
    case 0:
        if (flags & 1) {
            func_sc06_018_80189380(o, &D_sc06_018_801B516C, &buf, 0xC);
            r = func_sc06_018_8018931C(o, &buf, 0x27F, (s16)arg1, 0, 0);
            o->ext1 = r;
            o->workE0 &= ~1;
            if (r) AF(o, s16, 0xEE) = AF(r, s16, 0x36);
        }
    case 1:
    case 2:
    case 3:
        func_sc06_018_80189380(o, &D_800D3918, &buf, 0xB);
        r = func_sc06_018_8018931C(o, &buf, 0x27F, (s16)(arg1 | (n + 1)), 0, 0);
        o->ext0 = r;
        o->workE0 |= 4;
        SetModelParts(o->model, D_sc06_018_801B53A4[n]);
        if (r) AF(o, s16, 0xEC) = AF(r, s16, 0x36);
        break;
    }
    return 1;
}

s32 func_sc06_018_8018765C(Mover *arg0, s32 arg1) {
    s32 t;
    s32 m;

    t = MoveOnGround(arg0);
    func_sc06_018_801876BC(arg0, t);
    if (t & 0x2000) {
        m = t & 0x8000;
        return m == 0;
    }
    RestorePrevPos(arg0);
    return 0;
}

extern s32 SpawnEffectLimited();
void func_sc06_018_801876BC(u8 *o, s32 k0) {
    u8 k = k0;
    if ((AF(o, s16, 0x70) & 0x8000) && k == 0x24) {
        if (AF(o, u8 *, 0x90) == &D_sc06_018_801CC1E8) {
            if (D_800B99DA % 3 == 0) { SpawnEffectLimited(0x53, o, AF(o, s16, 6), (s16)(AF(o, s16, 0xA) - 0xA0), AF(o, s16, 0xE), 0, 0, 0x14); }
        } else if (AF(o, u8 *, 0x90) == &D_sc06_018_801CCBA8 && AF(o, u16, 2) == 0xB) {
            SpawnEffectLimited(0x53, o, AF(o, s16, 6), (s16)(AF(o, s16, 0xA) - 0xA0), AF(o, s16, 0xE), 0, 0, 0x14);
        } else if ((AF(o, u8 *, 0x90) == &D_sc06_018_801CCCA0 || AF(o, u8 *, 0x90) == &D_sc06_018_801CC868) && D_800B99DA % 6 == 0) {
            SpawnEffectLimited(0x53, o, AF(o, s16, 6), (s16)(AF(o, s16, 0xA) - 0xA0), AF(o, s16, 0xE), 0, 0, 0x14);
        }
    }
}

void func_sc06_018_801877E4(s32 arg0) {
    if (func_sc06_018_80187844(arg0, 2) == 0) {
        AF(arg0, s32, 0xE8) += 0x40;
    } else {
        AF(arg0, s32, 0xE8) -= 0x40;
    }
    AF(arg0, s32, 0xE0) |= 0x40;
}

s32 func_sc06_018_80187844(u8 *o, s32 i) {
    SV8 d;
    SV8 a;
    SV8 b;
    s32 r;
    ApplyMatrixSV(AF(o, u8 *, 0x20) + 0x34, (SV8 *)&D_sc06_018_801B53B4 + i, &d);
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA);
    b.z = AF(o, s16, 0xE);
    b.x += d.x;
    b.y += d.y;
    b.z += d.z;
    r = CollidePath(&a, &b, 0);
    D_sc06_018_801D55A8 = SVecDistSq(&a, &b);
    return r != 0x2000;
}

void func_sc06_018_80187924(StageActor *arg0) {
    D_sc06_018_801B53F4[arg0->state]();
}

void func_sc06_018_80187960(StageActor *o) {
    typedef struct { s16 m[3][3]; s32 t[3]; } MTX;
    MTX m;
    SV8 r;
    V3 v;
    s32 n;
    ModelObj *p;

    p = (u8 *)AllocActorModel();
    o->model = p;
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(p, D_sc06_018_801B53CC[(u16)o->param & 0xF]);
    o->work10A = o->parent->id;
    if (((u16)o->param & 0xF) == 4) {
        o->model->pose = &D_sc06_018_811B53E4;
    }
    if (((u16)o->param & 0xF) == 5) {
        o->state = 2;
        return;
    }
    v.x = v.y = 0;
    v.z = 0xFFE80000;
    n = rand() % 128;
    r.x = !(rand() & 1) ? n - 0x380 : -0x380 - n;
    r.y = (u16)o->parent->model->rot.vy + 0x800;
    r.z = 0;
    RotMatrixZYX(&r, &m);
    ApplyMatrixLV(&m, &v, (u8 *)o + 0x10);
    o->accel[1] = 0x18000;
    o->unkFC = rand() & 0xF0;
    o->workFE = rand() & 0x7F;
    o->work100 = rand() & 0x30;
    o->timer = 0;
    o->state++;
}

void func_sc06_018_80187AEC(u8 *o) {
    s32 t;
    if (AF(o, s16, 0xA) >= 0x10) {
        FreeActor(o);
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0xFC);
        AF(AF(o, u8 *, 0x20), u16, 0x12) += AF(o, u16, 0xFE);
        if (MoveCollideAt(o, &D_sc06_018_801B5400[AF(o, u16, 0x70) & 0xF]) & 0x2000) {
            if (++AF(o, s32, 0x1C) >= 4) {
                if ((AF(AF(o, u8 *, 0x20), u16, 0x10) & 0xFFF) > 0x800) {
                    AF(o, s16, 0x102) = 0xC00;
                } else {
                    AF(o, s16, 0x102) = 0x400;
                }
                t = AF(o, u16, 0x70) & 0xF;
                if (t < 4 && t != 0) {
                    AF(o, s16, 0x102) += 0x400;
                }
                AF(o, s32, 0x1C) = 0x1E;
                AF(o, s16, 0x34)++;
            } else {
                AF(o, s32, 0x14) = -(0x80000 / AF(o, s32, 0x1C));
                SpawnKind1C(o, 1);
            }
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), u16, 0x10) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x10), AF(o, s16, 0x102), 4);
        if (TickTimer(o)) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 0x34)++;
            if (AF(o, s16, 0x70) & 0x8000) {
                AF(o, s16, 0x34)++;
            } else if ((AF(o, s16, 0x70) & 0xF) == 4) {
                AF(o, s16, 0x34) = 4;
                AF(o, s32, 0x1C) = 0x1E;
            }
        }
        break;
    case 2:
        ToggleModel(o);
        if (TickTimer(o) == 1) {
            FreeActor(o);
        }
        break;
    case 3:
        if (AF(AF(o, u8 *, 0x64), s16, 0x36) != AF(o, s16, 0x10A) && AF(o, s32, 0xE0) == 0) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 0x34) = ((AF(o, u16, 0x70) & 0xF) == 4) ? 4 : 2;
            AF(o, s32, 0xE0) = 1;
        }
        break;
    case 4:
        if (TickTimer(o)) {
            AF(o, s32, 0x1C) = 10;
            AF(o, s16, 0x34)++;
            HideModel(o);
            func_sc06_018_80189000(o, 1);
        }
        break;
    case 5:
        if (func_sc06_018_8018944C(o, 0x60, 0xA0) == 1) {
            FreeActor(o);
        }
        break;
    }
}

void func_sc06_018_80187DD0(StageActor *o) {
    StageActor *par;
    u8 *d;
    u8 *s;
    s32 v;
    par = o->parent;
    if ((s16)par->id != o->work10A) {
        FreeActor();
        return;
    }
    if (par->workE0 & 4) {
        HideModel(o);
        return;
    }
    s = (u8 *)par->model->pose;
    d = (u8 *)o + 0xFC;
    if (s != 0) {
        if ((u32)s & 0x1000000) {
            o->work102 = AF(((u8 *)((u32)s & ~0x1000000)), u16, 0x66);
            v = AF(((u8 *)((u32)s & ~0x1000000)), s32, 0x60);
            o->work104 = (u8)(v >> 8) | ((v & 0xF) << 8);
            o->work106 = ((v >> 16) & 0xFF) | ((v & 0xF0) << 4);
            o->unkFC = AF(((u8 *)((u32)s & ~0x1000000)), s8, 0x63);
            o->workFE = AF(((u8 *)((u32)s & ~0x1000000)), s8, 0x64);
            o->work100 = AF(((u8 *)((u32)s & ~0x1000000)), s8, 0x65);
        } else {
            AF(o, S12, 0xFC) = AF(s, S12, 0x90);
        }
        o->model->pose = d;
    }
    if (par->workE0 & 0x80) {
        if (o->stateCount == 0) {
            o->work108 += 0x40;
            if (o->work108 > 0x200) {
                o->work108 = 0x200;
                o->stateCount++;
            }
        } else {
            o->work108 -= 0x80;
            if (o->work108 < 0) {
                o->work108 = 0;
                o->stateCount = 0;
                par->workE0 &= ~0x80;
            }
        }
    }
    AF(d, s16, 6) += o->work108;
    o->pos[0].w = par->pos[0].w;
    o->pos[1].w = par->pos[1].w;
    o->pos[2].w = par->pos[2].w;
    AF(o, SV8, 0x50) = AF(par, SV8, 0x50);
    AF(o->model, SV8, 0x10) = AF(par->model, SV8, 0x10);
    AF(o->model, SV8, 0x18) = AF(par->model, SV8, 0x18);
    o->model->unk04 = (s32)par->model->unk04;
    o->model->flags = (s16)par->model->flags;
}

void func_sc06_018_80188088(StageActor *arg0) {
    D_sc06_018_801B554C[arg0->state]();
}

void func_sc06_018_801880C4(StageActor *o) {
    ModelObj *v;
    switch ((u16)o->param & 0xF) {
    case 0:
        if (SetupActor(o, &D_sc06_018_801B545C) == 0) {
            return;
        }
        o->model->pose = (u8 *)o + 0xE8;
        o->work104 = 0x78;
        func_sc06_018_80188234(o);
        func_80143994(o, 0x1800);
        break;
    case 1:
        if (SetupActor(o, &D_sc06_018_801B5490) == 0) {
            return;
        }
        o->work104 = 0xA0;
        if (!(o->param & 0x8000)) {
            o->state = 3;
            break;
        }
        o->state = 5;
        func_80143994(o, 0x1800);
        break;
    case 2:
        v = AllocActorModel();
        o->model = v;
        if (v == 0) {
            RejectSpawn(o);
            break;
        }
        func_8001CA1C(v, &D_sc06_018_801B5430);
        o->model->scale.vx = 0x14CC;
        o->model->scale.vy = 0x1199;
        o->model->unk04 |= 0x58000000;
        o->model->flags |= 0x10;
        func_sc06_018_80188B00(o);
        break;
    }
}

void func_sc06_018_80188234(s32 arg0) {
    AF(arg0, s32, 0x1C) = 0x18;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x80;
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    UpdateModelZYX(arg0);
    SetForwardVelocity(arg0, -0x100000);
    AF(arg0, s16, 2) = 2;
}

void func_sc06_018_8018829C(u8 *o) {
    u8 *p;
    SV8 v;
    if (AF(o, s16, 0xA) >= 0x10) {
        FreeActor(o);
        return;
    }
    if (ActorSegmentDamagesPlayer(o, D_sc06_018_801B54C4, D_sc06_018_801B54C4 + 8, 0x78) == 1 || (AF(o, u16, 0x5C) & 1)) {
        func_sc06_018_80189000(o, 1);
        FreeActor(o);
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), s16, 0x10) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x10), 0, 0x18);
        if (MoveCollidePassable(o) != 0) {
            AF(o, s16, 2) = 9;
            func_sc06_018_80189000(o, 1);
            return;
        }
        if (TickTimer(o)) {
            AF(o, u16, 0xF4) = g_PlayerTarget;
            AF(o, u16, 0xF6) = D_80126CB6;
            AF(o, u16, 0xF8) = D_80126CB8;
            AF(o, s16, 0x34)++;
            AF(o, s32, 0x1C) = 0x3C;
        }
        return;
    case 1:
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToTarget(o, 0x20);
        if (TickTimer(o)) {
            AF(o, s32, 0x1C) = 0x5A;
            AF(o, s16, 0x34)++;
        }
    case 2:
        AF(o, s16, 0xF2) -= 0x100;
        SetForwardVelocity(o, 0xFFEC0000);
        if (MoveCollidePassable(o) != 0 || (AF(o, u16, 0x34) == 2 && TickTimer(o) == 1)) {
            AF(o, s16, 2) = 9;
            func_sc06_018_80189000(o, 1);
            return;
        }
        p = SpawnProp(0x80);
        if (p != 0) {
            FaceHelper(o, &D_sc06_018_801B5578, &v);
            AF(p, s16, 6) = v.x;
            AF(p, s16, 0xA) = v.y;
            AF(p, s16, 0xE) = v.z;
        }
        break;
    }
}

void func_sc06_018_801884F4(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x48) = 0xC000;
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    UpdateModelZYX((s32) arg0, arg1);
    SetForwardVelocity((s32) arg0, 0x20000);
    AF(arg0, s16, 2) = 4;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc06_018_80188554(u8 *arg0, s32 arg1) {
    s32 temp_v1;
    void *temp_v0;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    if (DistSqToPlayer((s32) arg0) >= 0x1001) {
        if (AF(arg0, u16, 0x34) == 0) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, u16, 0x10) = (u16) (AF(temp_v0, u16, 0x10) - 0x40);
            if (MoveCollidePassableAt((s32) arg0, (s32) &D_sc06_018_801B54E4) & 0x2000) {
                temp_v1 = AF(arg0, s32, 0x1C) + 1;
                AF(arg0, s32, 0x1C) = temp_v1;
                if (temp_v1 >= 4) {
                    AF(arg0, s32, 0x1C) = 0xA;
                    AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
                    return;
                }
                AF(arg0, s32, 0x14) = (s32) -(0x80000 / temp_v1);
                SpawnKind1C((s32) arg0, 1);
            }
        } else if (TickTimer((s32) arg0) == 1) {
            goto block_9;
        }
    } else {
block_9:
        AF(arg0, s16, 2) = 9;
        func_sc06_018_80189000((s32) arg0, 0);
    }
}

void func_sc06_018_8018868C(StageActor *arg0) {
    arg0->state = 6;
    arg0->stateCount = 0;
    arg0->model->rot.vy = (u16) (u16)arg0->parent->model->rot.vy;
}

void func_sc06_018_801886B0(u8 *arg0, s32 arg1) {
    SV8 a;
    SV8 b;
    V3 c;
    s32 temp_v0_2;
    s32 temp_v1_3;
    s32 var_a2;
    s32 var_v0;
    u16 temp_v1;
    void *temp_a0;
    StageActor *temp_s2;
    void *temp_v0;
    void *temp_v1_2;
    void *temp_v1_4;
    void *temp_v1_5;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_s2 = AF(arg0, void *, 0x64);
        if ((temp_s2->kind == 0) || ((s32)temp_s2->script != (s32) &D_sc06_018_801CD278)) {
            FreeActor((s32) arg0, arg1);
            return;
        }
        if (temp_s2->index < 0x11) {
            func_sc06_018_80189380((s32) temp_s2, (s32) &D_sc06_018_801B54EC, (s32) &a, 5);
            AF(arg0, s16, 6) = a.x;
            AF(arg0, s16, 0xA) = a.y;
            AF(arg0, s16, 0xE) = a.z;
            return;
        }
        func_sc06_018_80189380((s32) temp_s2, (s32) &D_sc06_018_801B54F4, (s32) &a, 4);
        func_sc06_018_80189380((s32) temp_s2, (s32) &D_sc06_018_801B54F4, (s32) &b, 5);
        AF(arg0, s16, 6) = (a.x + b.x) >> 1;
        AF(arg0, s16, 0xA) = (a.y + b.y) >> 1;
        AF(arg0, s16, 0xE) = (a.z + b.z) >> 1;
        if (temp_s2->index == 0x19) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            c.x = 0;
            c.y = -0xC0000;
            c.z = -((PosDist((s32) &g_PlayerPosX, arg0 + 4) << 0x10) / 34);
            SetLocalVelocity((s32) arg0, (s32) &c);
            AF(arg0, s32, 0x48) = 0xC000;
            return;
        }
        return;
    case 1:
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x10) = (u16) (AF(temp_v1_2, u16, 0x10) + 0x80);
        if (MoveCollidePassableAt((s32) arg0, (s32) &D_sc06_018_801B54E4) != 0) {
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            return;
        }
        break;
    case 2:
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x10) = (u16) (AF(temp_v0, u16, 0x10) + 0x40);
        if (MoveCollidePassableAt((s32) arg0, (s32) &D_sc06_018_801B54E4) & 0x2000) {
            temp_v0_2 = AF(arg0, s32, 0x1C) + 1;
            AF(arg0, s32, 0x1C) = temp_v0_2;
            if (temp_v0_2 >= 4) {
                AF(arg0, s32, 0x1C) = 0x1E;
                AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
                return;
            }
            var_v0 = AF(arg0, s32, 0x10) * 0xC;
            if (var_v0 < 0) {
                var_v0 += 0xF;
            }
            AF(arg0, s32, 0x10) = (s32) (var_v0 >> 4);
            var_a2 = AF(arg0, s32, 0x18) * 0xC;
            if (var_a2 < 0) {
                var_a2 += 0xF;
            }
            AF(arg0, s32, 0x18) = (s32) (var_a2 >> 4);
            AF(arg0, s32, 0x14) = (s32) -(0x80000 / (s32) AF(arg0, s32, 0x1C));
            SpawnKind1C((s32) arg0, 1);
            return;
        }
        break;
    case 3:
        temp_v1_3 = AF(arg0, s32, 0x1C);
        if ((u32) (temp_v1_3 - 0xE) < 0xBU) {
            if (!(temp_v1_3 & 1)) {
                SpawnActorArg(0x2A8, (s32) AF(arg0, s16, 0x104), (s32) arg0);
                AF(arg0, s16, 0x104) = (s16) ((u16) AF(arg0, s16, 0x104) + 1);
            }
        }
        if (AF(arg0, s32, 0x1C) == 9) {
            temp_a0 = AF(arg0, void *, 0xCC);
            AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
            AF(AF(arg0, void *, 0xCC), u16, 8) = (u16) AF(arg0, u16, 6);
            AF(AF(arg0, void *, 0xCC), s16, 0xA) = (s16) ((u16) AF(arg0, s16, 0xA) - 0x24);
            AF(AF(arg0, void *, 0xCC), u16, 0xC) = (u16) AF(arg0, u16, 0xE);
        }
        if ((u32) (AF(arg0, s32, 0x1C) - 4) < 6U) {
            temp_v1_4 = AF(arg0, void *, 0xCC);
            AF(temp_v1_4, u16, 0x18) = (u16) (AF(temp_v1_4, u16, 0x18) + 0x200);
            temp_v1_5 = AF(arg0, void *, 0xCC);
            AF(temp_v1_5, u16, 0x1A) = (u16) (AF(temp_v1_5, u16, 0x1A) + 0x200);
        }
        if (TickTimer((s32) arg0) == 1) {
            ZeroFill((s32) AF(arg0, void *, 0xCC), 0x38);
            AF(arg0, s16, 2) = 9;
            func_sc06_018_80189000((s32) arg0, 0);
        }
        break;
    }
}

void func_sc06_018_80188B00(s32 arg0) {
    s32 v[4];
    FeSv a;
    FeMtx m;
    s16 t;

    v[2] = 0xFFF00000;
    v[1] = 0;
    v[0] = 0;
    a.x = 0x10;
    t = AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0xFC);
    a.y = t;
    AF(arg0, s16, 0xFE) = t;
    a.z = 0;
    RotMatrixZYX((s32) &a, (s32) &m);
    ApplyMatrixLV((s32) &m, (s32) v, arg0 + 0x10);
    AF(arg0, s16, 2) = 8;
    AF(arg0, s32, 0x1C) = 0x40;
    SyncModelPos(arg0);
}

void func_sc06_018_80188B9C(u8 *o) {
    s32 m[8];
    SV8 r;
    SV8 a;
    SV8 b;
    s32 flag[2];
    u8 *p;

    r.x = AF(AF(o, u8 *, 0x20), s16, 0x10);
    r.y = AF(AF(o, u8 *, 0x20), s16, 0x12);
    r.z = 0;
    RotMatrixZYX(&r, m);
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc06_018_801B54D4[0], &a, flag);
    RotTransSV(&D_sc06_018_801B54D4[1], &b, flag);
    if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b)) {
        HitPlayer(1, 1, AF(o, s16, 0xFE), 0x50, &b, &g_GroundNormal);
        FreeActor(o);
        return;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x14) -= 0x100;
    if (MoveCollidePassable(o)) {
        SpawnEffect(6, o, AF(o, s16, 6), AF(o, s16, 0xA), AF(o, s16, 0xE), 0, 0);
        p = SpawnPropFrom(o, 0x22);
        if (p) AF(p, s16, 0x34) = 0x2000;
        FreeActor(o);
        return;
    }
    if (TickTimer(o)) FreeActor(o);
}

void func_sc06_018_80188D54(StageActor *arg0) {
    HideModel(arg0);
    arg0->timer = 0xA;
    arg0->hitState = 0;
    arg0->state = 0xA;
}

void func_sc06_018_80188D90(u8 *arg0) {
    if (AF(arg0, u16, 0x70) & 1) {
        if (ActorTouchesPlayer((s32) arg0, 0x60, (s32) AF(arg0, s16, 0x104)) == 1) {
            g_PlayerHitKind = 0x4001;
        }
    }
    if (func_sc06_018_8018944C((s32) arg0, 0x60, (s32) AF(arg0, s16, 0x104)) == 1) {
        FreeActor((s32) arg0);
    }
}

s32 func_sc06_018_80188E10(StageActor *o, u8 *a1, u8 *a2, s32 a3, s32 k0) {
    u16 k = k0;
    SV8 s;
    SV8 t;
    SV8 u;
    u8 *p;
    s32 i;
    FaceHelper(o, a1, &s);
    FaceHelper(o, a2, &t);
    u = t;
    if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &s, &t)) {
        HitPlayer(1, 1, o->model->rot.vy, a3, &t, &g_GroundNormal);
        return 1;
    }
    p = &g_Actors;
    if (k != 0xFFFF) {
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x282 && (AF(p, s16, 0x70) == k || AF(p, s16, 0x70) == o->param) && p != o
                && PathHitsModel(AF(p, s32, 0x20), AF(p, s32, 0x58), &s, &u)) {
                AF(p, s16, 2) = 9;
                func_sc06_018_80189000(p, 0);
                return 1;
            }
        }
        return 0;
    } else {
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x282 && AF(p, s16, 0x70) == o->param && p != o
                && PathHitsModel(AF(p, s32, 0x20), AF(p, s32, 0x58), &s, &u)) {
                AF(p, s16, 2) = 9;
                func_sc06_018_80189000(p, 0);
                return 1;
            }
        }
        return 0;
    }
}

void func_sc06_018_80189000(StageActor *o, s32 n) {
    MTX m;
    VEC v;
    SV8 r;
    s32 xy[2];
    s32 *q;
    s32 t;
    s32 i;
    s32 a;
    s32 k;
    s32 k2;
    u8 *p;
    i = 0;
    q = xy;
    a = 0x100;
    for (; i < 8; i++) {
        p = SpawnPropFrom(o, 0x23);
        if (p != 0) {
            AF(p, s16, 0x34) = rand() % 0x4000 + 0x1000;
            AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC008;
            AngleToVec2(q, rand() % 0x1000, rand() % 88);
            t = xy[0];
            AF(p, s16, 6) += t;
            AF(p, s16, 0xE) += t >> 16;
            k = rand() % 0x80;
            r.x = ((rand() & 1) ? k : -k) + 0x400;
            k2 = rand() % 192;
            r.y = (rand() & 1) ? a + k2 : a - k2;
            r.z = 0;
            v.vy = 0;
            v.vx = 0;
            v.vz = (rand() % 4 + 3) << 16;
            RotMatrixZYX(&r, &m);
            ApplyMatrixLV(&m, &v, p + 0x10);
        }
        a += 0x200;
    }
    p = SpawnPropFrom(o, 0x23);
    if (p != 0) {
        AF(p, s16, 0x34) = 0x7FF1;
        AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC004;
        AF(p, s32, 0x14) = 0xFFFB0000;
    }
    for (i = 0; i < 4; i++) SpawnActorArg(0x29D, n & 0xFFFF, o);
    func_sc06_018_80189E60(o, 0x95E);
}

s32 func_sc06_018_80189284(s32 arg0, s32 arg1, s32 arg2) {
    FeSv v;
    s32 d;

    v.x = g_PlayerX;
    v.y = D_80126B62;
    v.z = D_80126B66;
    d = (HeadingToSV(arg0, (s32) &v) - (s16) arg1) & 0xFFF;
    if (d < 0x800) {
        return d < (s16) arg2;
    }
    return (0x1000 - d) < (s16) arg2;
}

s32 func_sc06_018_8018931C(StageActor *o, SV8 *p, s32 a, s32 b, s32 e0, s32 f) {
    typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } S14;
    S14 s;
    s16 e = e0;
    s.x = p->x;
    s.y = p->y;
    s.z = p->z;
    s.a = a;
    s.b = b;
    s.c = 0;
    s.e = e;
    s.f = f;
    s.d = 0x7FFF;
    return SpawnActorFromDef(&s, o);
}

s32 func_sc06_018_80189380(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 m[8];

    GetPartWorldMatrix(arg0, arg3, (s32) m);
    return LocalToWorld((s32) m, arg1, arg2);
}

s32 func_sc06_018_801893CC(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = (HeadingTo((s32) &g_PlayerPosX, arg0 + 4) - AF(g_PlayerModel, s16, 0x12)) & 0xFFF;
    if (temp_a0 < 0x800) {
        return temp_a0 < (s16) arg1;
    }
    return (0x1000 - temp_a0) < (s16) arg1;
}

s32 func_sc06_018_8018944C(Mover *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (TickTimer(arg0, arg1, arg2) != 0) {
        temp_v0 = SpawnPropFrom(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x7FFF;
            AF(AF(temp_v0, void *, 0x20), u16, 0x2C) = 0xC006;
            AF(temp_v0, s32, 0x14) = 0xFFFE0000;
        }
        return 1;
    }
    return 0;
}

void func_sc06_018_801894B4(StageActor *arg0) {
    D_sc06_018_801B5580[arg0->state]();
}

void func_sc06_018_801894F0(s32 arg0) {
    s32 o;
    s32 r;
    s32 t;
    u8 unused[8];
    s32 sign;
    s32 v;
    u8 *c;
    u8 *q;

    o = AllocActorModel();
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = o;
    InitModel(o, 0);
    t = rand();
    r = (s16) t;
    AF(o, u16, 0x2C) |= 0x10;
    AF(o, s16, 0x18) = AF(o, s16, 0x1A) = AF(o, s16, 0x1C) = r % 0x180 + 0x400;
    sign = -1;
    if (t & 1) {
        sign = 1;
    }
    AF(o, s16, 0x10) = sign * (r % 0x80) - 0x300;
    AF(o, s16, 0x12) = r % 0x1000;
    AF(arg0, s32, 0x48) = 0xC000;
    AF(arg0, u16, 0xA) -= 0x19;
    UpdateModelZYX(arg0);
    SetForwardVelocity(arg0, -0xC0000 - ((r % 8) << 0x10));
    AF(arg0, s32, 0x1C) = 0x3C;
    AF(arg0, s16, 0xFE) = rand() & 0xF0;
    AF(arg0, s16, 0x100) = rand() & 0x1F0;
    AF(arg0, s16, 0x102) = rand() & 0x30;
    c = &D_sc06_018_801B5588 + (AF(arg0, u16, 0x70) & 0xF) * 4;
    v = rand() % 12;
    q = (u8 *) arg0 + 0xDC;
    AF(q, s16, 0) = (rand() & 1) == 0 ? -v - 0x18 : v - 0x18;
    AF(q, s16, 2) = 0;
    v = rand() % 12;
    AF(q, s16, 4) = (rand() & 1) == 0 ? -v - 0x18 : v - 0x18;
    v = rand() % 12;
    AF(q, s16, 8) = (rand() & 1) == 0 ? -v + 0x18 : v + 0x18;
    AF(q, s16, 0xA) = 0;
    v = rand() % 12;
    AF(q, s16, 0xC) = (rand() & 1) == 0 ? -v - 0x18 : v - 0x18;
    v = rand() % 12;
    AF(q, s16, 0x10) = (rand() & 1) == 0 ? -v - 0x18 : v - 0x18;
    AF(q, s16, 0x12) = 0;
    v = rand() % 12;
    AF(q, s16, 0x14) = (rand() & 1) == 0 ? -v + 0x18 : v + 0x18;
    v = rand() % 12;
    AF(q, s16, 0x18) = (rand() & 1) == 0 ? -v + 0x18 : v + 0x18;
    AF(q, s16, 0x1A) = 0;
    v = rand() % 12;
    AF(q, s16, 0x1C) = (rand() & 1) == 0 ? -v + 0x18 : v + 0x18;
    AF(q, u8, 0x20) = c[0];
    AF(q, u8, 0x21) = c[1];
    AF(q, u8, 0x22) = c[2];
    AF(arg0, u16, 2)++;
}

void func_sc06_018_80189954(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFE));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + AF(arg0, u16, 0x100));
    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x14) = (u16) (AF(temp_a1, u16, 0x14) + AF(arg0, u16, 0x102));
    if ((MoveCollidePassable((s32) arg0, (s32) temp_a1, arg2) != 0) || (TickTimer((s32) arg0) != 0)) {
        FreeActor((s32) arg0);
        return;
    }
    DrawPrimF4Mtx((s32) (arg0 + 0xDC), (s32) (AF(arg0, void *, 0x20) + 0x34));
}

void func_sc06_018_801899F8(StageActor *arg0) {
    D_sc06_018_801B55A0[arg0->state]();
}

void func_sc06_018_80189A34(u8 *o) {
    s32 d;
    u8 *t;
    u8 *m;
    s32 r;
    s32 base;
    t = (u8 *)AllocActorModel();
    AF(o, u8 *, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(AF(o, u8 *, 0x20), 0);
    if (!(AF(o, s16, 0x70) & 0x8000)) {
        AF(AF(o, u8 *, 0x20), s16, 0x10) = -0x80 - rand() % 0x300;
        m = AF(o, u8 *, 0x20);
        r = rand() % 0xC0;
        base = AF(o, s16, 0x70) * 0x300 + 0x180;
        AF(m, s16, 0x12) = (rand() & 1) ? base + r : base - r;
        AngleToVec2(&d, AF(AF(o, u8 *, 0x20), s16, 0x12) + 0x800, rand() % 16 + 8);
        AF(o, s16, 6) += d;
        AF(o, s16, 0xE) += d >> 16;
        AF(o, s16, 0xA) -= 0x10;
        UpdateModelZYX(o);
        AF(o, s32, 0x1C) = 4;
        AF(o, s16, 2)++;
    } else {
        AF(o, s16, 0xDC) = AF(AF(o, u8 *, 0x64), s16, 0xCC);
        AF(o, s16, 0xDE) = AF(AF(o, u8 *, 0x64), s16, 0xCE);
        AF(o, s16, 0xE0) = AF(AF(o, u8 *, 0x64), s16, 0xD0);
        AF(o, s16, 0xE4) = AF(AF(o, u8 *, 0x64), s16, 0xD4);
        AF(o, s16, 0xE6) = AF(AF(o, u8 *, 0x64), s16, 0xD6);
        AF(o, s16, 0xE8) = AF(AF(o, u8 *, 0x64), s16, 0xD8);
        AF(o, s16, 2) = 2;
        AF(o, s32, 0x1C) = 8;
    }
}

void func_sc06_018_80189C28(StageActor *o) {
    Q34 q;
    StageActor *p;
    if (o->stateCount == 0) {
        o->workE0 -= 0x14;
        if (TickTimer() != 0) {
            o->stateCount++;
        }
    } else {
        p = o->parent;
        if ((s32)p->model->unk04 < 0 || p->kind == 0) {
            FreeActor(o);
            return;
        }
    }
    q.v[0].x = 4;
    q.v[0].y = 0;
    q.v[0].z = 0;
    q.v[1].x = -4;
    q.v[1].y = 0;
    q.v[1].z = 0;
    q.v[2].x = 0xC;
    q.v[2].y = 0;
    q.v[2].z = o->workE0;
    q.v[3].x = -0xC;
    q.v[3].y = 0;
    q.v[3].z = o->workE0;
    q.code = 0x50000000;
    q.c[0].r = q.c[0].g = q.c[0].b = 0x80;
    q.c[1].r = q.c[1].g = q.c[1].b = 0x80;
    q.c[2].r = q.c[2].g = q.c[2].b = 0x30;
    q.c[3].r = q.c[3].g = q.c[3].b = 0x30;
    DrawPrimG4Mtx(&q, (u8 *)o->model + 0x34);
}

void func_sc06_018_80189D64(StageActor *o) {
    u8 *p = (u8 *)o + 0xCC;
    u8 c;
    if (o->stateCount == 0) {
        AF(o, u16, 0xCC) = AF(o->parent, u16, 0xCC);
        AF(o, u16, 0xCE) = AF(o->parent, u16, 0xCE);
        AF(o, u16, 0xD0) = AF(o->parent, u16, 0xD0);
        AF(o, u16, 0xD4) = AF(o->parent, u16, 0xD4);
        AF(o, u16, 0xD6) = AF(o->parent, u16, 0xD6);
        AF(o, u16, 0xD8) = AF(o->parent, u16, 0xD8);
        o->stateCount++;
    }
    AF(o, s32, 0xFC) = 0x50000000;
    c = o->timer * 30;
    AF(o, u8, 0xFA) = c;
    AF(o, u8, 0xF9) = c;
    AF(o, u8, 0xF8) = c;
    AF(o, u8, 0xF6) = c;
    AF(o, u8, 0xF5) = c;
    AF(o, u8, 0xF4) = c;
    AF(o, u8, 0xF2) = c;
    AF(o, u8, 0xF1) = c;
    AF(o, u8, 0xF0) = c;
    AF(o, u8, 0xEE) = c;
    AF(o, u8, 0xED) = c;
    AF(o, u8, 0xEC) = c;
    DrawPrimG4Mtx(p, &GsIDMATRIX);
    if (--o->timer == 0) FreeActor(o);
}

s32 func_sc06_018_80189E60(u8 *o, s32 snd0) {
    u16 snd = snd0;
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 vol;
    s16 pan;
    s32 dist;
    Player *p;
    s32 x;
    vol = 0x7F;
    p = &g_Player;
    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    ProjectPoint(&a, &b);
    b.z = 0;
    pan = b.x / 25 + 7;
    if (pan < 0) {
        pan = 0;
    } else if (pan >= 16) {
        pan = 15;
    }
    c.x = p->pos[0].h.i;
    c.y = p->pos[1].h.i;
    c.z = p->pos[2].h.i;
    ProjectPoint(&c, &d);
    d.z = 0;
    dist = SVecDistSq(&b, &d) - 0x400;
    if (dist > 0) {
        if (dist < 0x6E40) {
            vol -= dist * 95 / 0x6E40;
        } else {
            vol = 0x2F;
        }
    }
    PlaySoundId((u16)snd, (u16)(vol | ((pan << 8) | 0x3000)));
    return 1;
}

void func_sc06_018_80189FCC(u8 *arg0) {
    D_sc06_018_801B55AC[AF(arg0, u16, 2)]();
}

void func_sc06_018_8018A008(u8 *arg0) {
    void *temp_a0;
    void *temp_v1;

    AF(AF(arg0, void *, 0x20), s32 *, 0x20) = &D_800D387C;
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x9C;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1A) = 0x2000;
    AF(temp_v1, s16, 0x18) = 0x2000;
    AF(AF(arg0, void *, 0x20), u8, 0x24) = 0xFF;
    AF(AF(arg0, void *, 0x20), u8, 0x25) = 0;
    AF(AF(arg0, void *, 0x20), u8, 0x26) = 0;
    StartSpriteAnim((s32) AF(arg0, void *, 0x20), (s32) (arg0 + 0x24), (s32) &D_800D3888);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc06_018_8018A0B8(u8 *arg0) {
    u16 temp_v0_3;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_s0, u8, 0x24) - 0x20;
    AF(temp_s0, u8, 0x24) = temp_v0;
    if ((u32) (temp_v0 & 0xFF) < 0x80U) {
        AF(temp_s0, u8, 0x24) = 0x80U;
    }
    temp_v0_2 = AF(temp_s0, u8, 0x25) + 0x20;
    AF(temp_s0, u8, 0x25) = temp_v0_2;
    if ((u32) (temp_v0_2 & 0xFF) >= 0x81U) {
        AF(temp_s0, u8, 0x25) = 0x80U;
    }
    temp_v0_3 = AF(temp_s0, u16, 0x1A) + 0x400;
    AF(temp_s0, u8, 0x26) = (u8) AF(temp_s0, u8, 0x25);
    AF(temp_s0, u16, 0x1A) = temp_v0_3;
    AF(temp_s0, u16, 0x18) = temp_v0_3;
    MoveProp((s32) arg0);
    if (StepSpriteAnim((s32) temp_s0, (s32) (arg0 + 0x24)) != 0) {
        FreeProp((s32) arg0);
    }
}

void func_sc06_018_8018A170(u8 *o) {
    s32 r;
    s32 v;
    u8 *q;
    if (AF(o, u16, 2) == 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, u16, 2)++;
        StopWithGravity(o);
        AF(o, s32, 0x1C) = 1;
        return;
    }
    AF(o, s32, 0xDC) = AF(o, s32, 0x14);
    r = MoveCollide(o);
    if (r && (r & 0x6000)) {
        v = AF(o, s32, 0x1C) - 1;
        AF(o, s32, 0x1C) = v;
        if (v == 0) goto kill;
        AF(o, s32, 0x14) = -AF(o, s32, 0xDC) >> 2;
    }
    if (++AF(o, u16, 0xFC) & 1) {
        q = SpawnProp(0x23);
        if (q) {
            AF(q, s16, 6) = AF(o, s16, 6);
            AF(q, s16, 0xA) = AF(o, s16, 0xA);
            AF(q, s16, 0xE) = AF(o, s16, 0xE);
            AF(q, s32, 0x10) = AF(q, s32, 0x14) = AF(q, s32, 0x18) = 0;
            AF(q, s16, 0x34) = 0x3000;
        }
    }
    if (AF(o, s16, 0xA) < 0x20) return;
kill:
    FreeActor(o);
}

void func_sc06_018_8018A28C(StageActor *o) {
    ModelObj *c;
    switch ((u16)o->param & 3) {
    case 0:
    case 2:
        if (SetupActor(o, &D_sc06_018_801CD3D8) == 0) {
            return;
        }
        o->ext0 = SpawnActorArg(0x2E4, ((u16)o->param & 2) | 1, o);
        o->work104 = (u16)o->param & 0x102;
        o->param &= 1;
        if ((u16)o->work104 & 0x100) {
            func_sc06_018_8018C310();
            func_sc06_018_8018AB00();
        }
        o->reactive = 1;
        o->params = &D_sc06_018_801CD3C0;
        o->reactMask = 0;
        o->react = 0;
        o->hitMask = 0x6918;
        o->reactOpts |= 2;
        break;
    case 1:
    case 3:
        o->model = (u8 *)AllocActorModel();
        if ((u8 *)o->model == 0) {
            RejectSpawn(o);
            return;
        }
        InitModel(o->model, &D_sc06_018_801D1094);
        o->work104 = (u16)o->param & 2;
        o->param &= 1;
        o->pos[1].h.i -= 0xA0;
        break;
    }
    o->model->flags |= 0x10;
    c = o->model;
    c->scale.vx = c->scale.vy = c->scale.vz = 0xE00;
    o->targetClass = 0;
    o->model->flags |= 0x80;
    o->model->unk80 = &D_sc06_018_801CD3B0;
    if (o->param != 0 && o->work104 != 0) {
        func_sc06_018_8018A474(o);
    } else {
        NextState(o);
    }
}

s32 func_sc06_018_8018A474(StageActor *arg0) {
    arg0->work108 = 0;
    return SetState(arg0, 2);
}

void func_sc06_018_8018A498(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer() != 0) {
            SetModelParts(AF(o, u8 *, 0x20), &D_sc06_018_801CF2BC);
            if (AF(o, u8 *, 0xCC) != 0) {
                func_sc06_018_8018A5D8(AF(o, u8 *, 0xCC));
            }
            SpawnActorArg(0x304, 0, o);
            SpawnActorArg(0x304, 1, o);
            SpawnActorArg(0x304, 2, o);
            SpawnActorArg(0x304, 3, o);
            SpawnActorArg(0x304, 4, o);
            SpawnActorArg(0x304, 5, o);
            func_sc06_018_8018ACD4(o);
            AF(o, s32, 0x1C) = 0x40;
            AF(o, u16, 0x34)++;
            PlaySoundId(0x9BA, 0);
        }
        func_sc06_018_8018AC58(o);
        break;
    case 1:
        func_sc06_018_8018AC58(o);
        if (TickTimer(o) != 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        break;
    }
}

void func_sc06_018_8018A5D8(u8 *o) {
    StopWithGravity(o);
    AF(o, s32, 0x14) = 0xFFD80000;
    AF(o, s32, 0x1C) = 0x10;
    SetState(o, 4);
}

void func_sc06_018_8018A61C(StageActor *arg0) {
    D_sc06_018_801CD444[arg0->state]();
    if ((u16)arg0->work104 & 0x100) {
        func_sc06_018_8018C3F8();
        func_sc06_018_8018AB74();
    }
}

void func_sc06_018_8018A688(StageActor *o) {
    u8 *c;
    ActorInit *q;
    s32 n;
    s32 i;
    s32 cnt;
    q = o->init;
    c = (u8 *)o->ext0;
    if (q != 0) {
        n = (o->hitDamage * q->damageScale) >> 12;
        if (n <= 0) {
            n = 1;
        }
    }
    if (o->hp != 0) {
        ShowDamage(o, n);
        o->hp -= n;
        if (o->hp < 0) {
            o->hp = 0;
        }
        o->work10A = rand() & 0x3F0;
        cnt = (rand() & 3) + 1;
        for (i = 0; i < cnt; i++) {
            SpawnActorArg(0x304, i + 0x10, o);
        }
    }
    o->react = 1;
    o->hitState &= 0xFFFE;
    o->model->unk80 = &D_sc06_018_801CD3B8;
    if (c != 0) {
        AF(AF(c, u8 *, 0x20), u8 *, 0x80) = &D_sc06_018_801CD3B8;
    }
    o->workFE = 8;
    if (o->hp == 0) {
        o->hitState = 0x800;
    }
    PlaySoundId(0xAAC, 0);
}

void func_sc06_018_8018A7C8(StageActor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_a1;

    temp_a1 = arg0->ext0;
    if (temp_a1 != NULL) {
        temp_v0 = (u16)arg0->workFE & 1;
        AF(temp_a1, s16, 0x54) = temp_v0;
        AF(temp_a1, s16, 0x50) = temp_v0;
        arg0->ofs[2] = temp_v0;
        arg0->ofs[0] = temp_v0;
    }
    temp_v0_2 = (s16) (u16)arg0->workFE;
    if (temp_v0_2 != 0) {
        arg0->workFE = (u16) (temp_v0_2 - 1);
        return;
    }
    arg0->react = 0;
    arg0->hitCode = 0;
    arg0->model->unk80 = &D_sc06_018_801CD3B0;
    if (temp_a1 != NULL) {
        AF(AF(temp_a1, void *, 0x20), s32 *, 0x80) = &D_sc06_018_801CD3B0;
    }
    if (arg0->hp == 0) {
        arg0->timer = 4;
        SetState((s32) arg0, 3);
    }
}

s32 func_sc06_018_8018A86C(u8 *o) {
    SV8 a;
    s32 b;
    u8 *m;
    s16 d;
    s32 col;
    s16 k;
    if (GroundDistSqToPlayer() > 0x24000) {
        goto fail;
    }
    m = AF(o, u8 *, 0x20);
    d = (AF(o, u16, 0x106) & 0xFFF) - (AF(m, u16, 0x12) & 0xFFF);
    if (d < 0) {
        d = -d;
    }
    if (d > 0x180) {
    fail:
        AF(o, s16, 0x108) = 0;
        return 0;
    }
    SetRotMatrix(m + 0x34);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc06_018_801CD458, &a, &b);
    col = 0x202080;
    if (D_800B99D8 & 1) {
        col = 0xE0;
    }
    func_sc06_018_8018A974(&a, (SV8 *) (o + 0xE0), col);
    if (AF(o, s16, 0x108) == 0) {
        PlaySoundId(0xAE3, 0);
    }
    k = AF(o, s16, 0x108) + 1;
    AF(o, s16, 0x108) = k;
    return k > 0x27;
}

void func_sc06_018_8018A974(SV8 *a, SV8 *b, s32 c) {
    s32 pp;
    s32 flag;
    u8 *p;
    s32 z;
    p = AllocPrim(0x10);
    AF(p, s32, 4) = c;
    AF(p, u8, 3) = 3;
    AF(p, u8, 7) = 0x42;
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    z = RotTransPers(a, p + 8, &pp, &flag);
    if (z > 0 && flag >= 0) {
        if (RotTransPers(b, p + 0xC, &pp, &flag) > 0 && flag >= 0) {
            ((PTag *)p)->addr = ((PTag *)&g_WorldOtOrg[D_800B9A02[0]].ot[z])->addr;
            ((PTag *)&g_WorldOtOrg[D_800B9A02[0]].ot[z])->addr = (u32)p;
            AddDrawModeAbr(&g_WorldOt[D_800B9A02[0]], z, 1);
        }
    }
}

void func_sc06_018_8018AB00(void) {
    SetShapeCircle(&D_sc06_018_801D57B0, 0x80);
    D_sc06_018_801D57B0 = D_sc06_018_801D3B08;
    D_sc06_018_801D57B4 = D_sc06_018_801D3B0C;
}

void func_sc06_018_8018AB74(void) {
    if (D_sc06_018_801D57B0.r == 0xFF) {
        D_sc06_018_801D57B0 = D_sc06_018_801D3B10;
    } else {
        D_sc06_018_801D57B0 = D_sc06_018_801D3B08;
    }
}

void func_sc06_018_8018ABD4(s32 a, u16 *p, s32 n) {
    s32 v;
    s16 d;
    s16 m;

    v = (a - *p) & 0xFFF;
    d = v >= 0x800 ? v | 0xF000 : v;
    if (d < 0) {
        m = -d;
    } else {
        m = d;
    }
    if (m > (u16)n) {
        if (d < 0) {
            *p -= n;
        } else {
            *p += n;
        }
    } else {
        *p = a;
    }
}

void func_sc06_018_8018AC58(u8 *o) {
    SV8 v;

    v.x = AF(o, s16, 6);
    v.y = AF(o, s16, 0xA) - 0x60;
    v.z = AF(o, s16, 0xE);
    v.pad = 0x3800;
    EmitProp23(o + 0x100, &v, &D_sc06_018_801CD460, 0);
    if (!(AF(o, u16, 0x100) & 3)) {
        PlaySoundId(0xA9F, 0);
    }
}

void func_sc06_018_8018ACD4(Mover *o) {
    s32 t;
    s32 a;
    s32 b;

    t = HeadingToPlayer(o);
    a = t;
    func_sc06_018_8018AD74(o, 0x32, 2, (s16)t);
    b = a - 0x200;
    func_sc06_018_8018AD74(o, 0x33, 3, (s16)(b - (rand() & 0x3F0)));
    a += 0x200;
    func_sc06_018_8018AD74(o, 0x33, 2, (s16)(a + (rand() & 0x3F0)));
}

void func_sc06_018_8018AD74(StageActor *o, s32 a0, s32 b0, s32 c0) {
    typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
    WMtx m;
    s32 v[4];
    u8 *p;
    WMtx *mp;

    m = *(WMtx *)&GsIDMATRIX;
    p = (u8 *)SpawnActorArg((s16)a0, (s16)b0, o);
    do { /* MATCH-TRICK: empty do-while(0) ends cse's block so mp = &m gets its own pseudo after the call */
    } while (0);
    mp = &m;
    if (p != 0) {
        AF(p, u16, 0xA) -= 0x80;
        RotMatrixY((s16)c0, mp);
        ApplyMatrixLV(mp, &D_sc06_018_801CD468, v);
        AF(p, s32, 0x10) = v[0];
        AF(p, s32, 0x14) = 0xFFD80000;
        AF(p, s32, 0x18) = v[2];
    }
}

void func_sc06_018_8018AE64(u8 *arg0) {
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    temp_v1 = AF(arg0, s16, 0x70);
    if (temp_v1 < 0x10) {
        InitModel(temp_v0, D_sc06_018_801CD478[temp_v1]);
        temp_v1_2 = AF(arg0, s32, 0x20);
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
        StopWithGravity((s32) arg0);
        if (AF(arg0, s16, 0x70) == 0) {
            func_sc06_018_8018AF88((s32) arg0);
            return;
        }
        func_sc06_018_8018B1D8((s32) arg0);
        return;
    }
    InitModel(AF(arg0, s32, 0x20), D_sc06_018_801CD47C[(rand(temp_v0) & 3)]);
    temp_v1_3 = AF(arg0, s32, 0x20);
    AF(temp_v1_3, u16, 0x2C) = (u16) (AF(temp_v1_3, u16, 0x2C) | 0x10);
    temp_v0_2 = (rand() & 0x1F0) | 0x400;
    temp_v1_4 = AF(arg0, s32, 0x20);
    AF(temp_v1_4, s16, 0x1C) = temp_v0_2;
    AF(temp_v1_4, s16, 0x1A) = temp_v0_2;
    AF(temp_v1_4, s16, 0x18) = temp_v0_2;
    StopWithGravity((s32) arg0);
    func_sc06_018_8018B4D8((s32) arg0);
}

void func_sc06_018_8018AF88(u8 *o) {
    WMtx m;

    m = *(WMtx *)&GsIDMATRIX;
    RotMatrixY(HeadingToPlayer(o), &m);
    ApplyMatrixLV(&m, &D_sc06_018_801CD498, o + 0x10);
    AF(o, s32, 0xE0) = AF(o, s32, 0x14) = 0xFFDC0000;
    AF(o, s32, 0x1C) = 0x10;
    AF(o, s16, 0x106) = rand() & 0x70;
    AF(o, s16, 0x108) = rand() & 0x70;
    SetState(o, 1);
}

void func_sc06_018_8018B060(u8 *o) {
    s32 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        r = MoveCollideAt(o, &D_sc06_018_801CD490);
        AF(AF(o, u8 *, 0x20), s16, 0x10) += AF(o, s16, 0x106);
        AF(AF(o, u8 *, 0x20), s16, 0x14) += AF(o, s16, 0x108);
        if (r != 0) {
            AF(o, s32, 0x18) = 0;
            AF(o, s32, 0x10) = 0;
            AF(o, s32, 0x14) = AF(o, s32, 0xE0) >> 1;
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        r = MoveCollideAt(o, &D_sc06_018_801CD490);
        func_sc06_018_8018B698(o);
        if (r != 0) {
            AF(o, s32, 0x1C) = 0x10;
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        func_sc06_018_8018B698(o);
        if (TickTimer(o) != 0) {
            FreeActor(o);
        } else if (AF(o, s32, 0x1C) & 1) {
            AF(AF(o, u8 *, 0x20), u32, 4) |= 0x80000000;
        } else {
            AF(AF(o, u8 *, 0x20), u32, 4) &= 0x7FFFFFFF;
        }
        break;
    }
}

void func_sc06_018_8018B1D8(StageActor *o) {
    WMtx m;
    SV8 v;

    m = *(WMtx *)&GsIDMATRIX;
    RotMatrixY(rand() & 0x1F0, &m);
    ApplyMatrixSV(&m, (SV8 *)&D_sc06_018_801CD40C + o->param, &v);
    o->pos[0].h.i = o->parent->pos[0].h.i + v.x;
    o->pos[1].h.i = o->parent->pos[1].h.i + v.y;
    o->pos[2].h.i = o->parent->pos[2].h.i + v.z;
    o->vel[0] = v.x << 12;
    o->workE0 = o->vel[1] = -(((rand() & 0x3F) << 12) + 0x200000);
    o->vel[2] = v.z << 12;
    o->work106 = rand() & 0xF0;
    o->work108 = rand() & 0xF0;
    o->workFE = o->param;
    SetState(o, 2);
}

void func_sc06_018_8018B330(u8 *o) {
    s32 v;
    switch (AF(o, u16, 0x34)) {
    case 0:
        v = MoveCollideAt(o, &D_sc06_018_801CD4A8);
        AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0x106);
        AF(AF(o, u8 *, 0x20), u16, 0x14) += AF(o, u16, 0x108);
        if (v != 0) {
            AF(o, s32, 0x14) = AF(o, s32, 0xE0) >> 1;
            AF(o, s32, 0x10) >>= 1;
            AF(o, s32, 0x18) >>= 1;
            AF(o, u16, 0x34)++;
        }
        func_sc06_018_8018B714(o);
        break;
    case 1:
        v = MoveCollideAt(o, &D_sc06_018_801CD4A8);
        AF(AF(o, u8 *, 0x20), u16, 0x10) += AF(o, u16, 0x106);
        AF(AF(o, u8 *, 0x20), u16, 0x14) += AF(o, u16, 0x108);
        if (v != 0) {
            AF(o, s32, 0x1C) = 0x10;
            AF(o, u16, 0x34)++;
        }
        func_sc06_018_8018B714(o);
        break;
    case 2:
        if (TickTimer(o) != 0) {
            FreeActor(o);
        } else if (AF(o, s32, 0x1C) & 1) {
            AF(AF(o, u8 *, 0x20), u32, 4) |= 0x80000000;
        } else {
            AF(AF(o, u8 *, 0x20), u32, 4) &= 0x7FFFFFFF;
        }
        break;
    }
}

void func_sc06_018_8018B4D8(StageActor *o) {
    WMtx m;
    SV8 v;

    m = *(WMtx *)&GsIDMATRIX;
    v.x = 0;
    v.y = -((rand() & 0x3F) + 0x50);
    v.z = -0x40;
    RotMatrixY((s16)((((u16)o->param & 3) << 10) + (rand() & 0x3F0) + (s16)(o->parent->work10A - 0x200)), &m);
    ApplyMatrixSV(&m, &v, &v);
    o->pos[0].h.i += v.x;
    o->pos[1].h.i += v.y;
    o->pos[2].h.i += v.z;
    o->vel[0] = v.x << 13;
    o->vel[2] = v.z << 13;
    o->vel[1] = -(((rand() & 0xF) << 15) + 0x80000);
    o->work106 = rand() & 0xF0;
    o->work108 = rand() & 0xF0;
    o->timer = 0x20;
    SetState(o, 3);
}

void func_sc06_018_8018B65C(StageActor *arg0) {
    D_sc06_018_801CD4B0[arg0->state]();
}

void func_sc06_018_8018B698(u8 *o) {
    SV8 v;

    v.x = AF(o, s16, 6);
    v.y = AF(o, s16, 0xA) - 0x40;
    v.z = AF(o, s16, 0xE);
    v.pad = 0x3000;
    EmitProp23(o + 0xFE, &v, &D_sc06_018_801CD4C0, 0);
    if (!(AF(o, u16, 0xFE) & 3)) {
        PlaySoundId(0xA9F, 0);
    }
}

void func_sc06_018_8018B714(s32 arg0) {
    s32 temp_v0_2;
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xFE) + 1;
    AF(arg0, u16, 0xFE) = temp_v0;
    if (!(temp_v0 & 7)) {
        temp_v0_2 = SpawnPropFrom(arg0, 0x22);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, s32, 0x14) = 0xFFF80000;
            AF(temp_v0_2, s16, 0x34) = 0x4001;
            AF(AF(temp_v0_2, void *, 0x20), u16, 0x2C) = 0xC010;
        }
    }
}

void func_sc06_018_8018B774(u8 *arg0) {
    u16 sp10[3];
    u16 sp18[4];
    s32 sp20[2];
    s32 sp28;
    s32 v;
    s32 temp_v0;
    void *temp_s0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitNullModel(temp_v0);
    AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x64), u16, 0x36);
    SetRotMatrix(AF(AF(arg0, void *, 0x64), s32, 0x20) + 0x34);
    SetTransMatrix(AF(AF(arg0, void *, 0x64), s32, 0x20) + 0x34);
    RotTransSV((s32) &D_sc06_018_801CD4C8, (s32) sp10, (s32) sp20);
    AF(arg0, u16, 6) = sp10[0];
    AF(arg0, u16, 0xA) = sp10[1];
    AF(arg0, u16, 0xE) = sp10[2];
    AF(arg0, s32, 0xE0) = (s32) AF(AF(arg0, void *, 0x64), s32, 0xE0);
    temp_s0 = arg0 + 0xE0;
    AF(arg0, s32, 0xE4) = (s32) AF(AF(arg0, void *, 0x64), s32, 0xE4);
    func_sc06_018_8018BFA8((s32) &sp28, (s32) sp10, (s32) temp_s0);
    v = sp28;
    AF(AF(arg0, s32, 0x20), s16, 0x10) = v;
    AF(AF(arg0, s32, 0x20), s16, 0x12) = v >> 0x10;
    AF(AF(arg0, s32, 0x20), s16, 0x14) = 0;
    UpdateModelZYX((s32) arg0);
    AF(arg0, s16, 0xE8) = 0;
    AF(arg0, s16, 0xEA) = 0;
    WorldToLocal(AF(arg0, s32, 0x20) + 0x34, (s32) temp_s0, (s32) sp18);
    AF(arg0, s16, 0xFE) = (s16) -(s16) sp18[2];
    func_sc06_018_8018B8B0((s32) arg0);
}

s32 func_sc06_018_8018B8B0(StageActor *arg0) {
    AF(arg0, s16, 0xE6) = 0x800;
    func_sc06_018_8018BBB8();
    PlaySoundId(0xAE4, 0);
    return SetState(arg0, 1);
}

void func_sc06_018_8018B8F8(StageActor *o) {
    u8 *e;

    e = AllocActorSprite(o);
    if (e != 0) {
        o->ext0 = e;
        func_8001CD9C(e, &D_sc06_018_801D57B0);
        AF(e, u16, 8) = (u16)o->pos[0].h.i;
        AF(e, u16, 0xA) = (u16)o->pos[1].h.i;
        AF(e, u16, 0xC) = (u16)o->pos[2].h.i;
        AF(e, u32, 4) |= 0x50000000;
        AF(e, s16, 0x18) = AF(e, s16, 0x1A) = 0x80;
        AF(e, u16, 0x2C) = 0xC006;
    }
    o->timer = 8;
    SetState(o, 2);
}

s32 func_sc06_018_8018B998(StageActor *arg0) {
    PlaySoundId(0xAE5, 0);
    return SetState(arg0, 3);
}

void func_sc06_018_8018B9D4(StageActor *o) {
    SV8 a;
    SV8 b;

    func_sc06_018_8018BCC4(o, 0, (s16 *)((u8 *)o + 0xE8), 0x81818);
    func_sc06_018_8018BCC4(o, 1, (s16 *)((u8 *)o + 0xE8), 0x204040);
    a.y = 0;
    a.x = 0;
    a.z = -AF(o, u16, 0xE8);
    b.y = 0;
    b.x = 0;
    b.z = -AF(o, u16, 0xEA);
    if (ActorSegmentHitsPlayer(o, &a, &b) != 0) {
        g_PlayerHitKind = 0x4018;
        g_PlayerHitDamage[0] = 0x96;
    }
    if (AF(o, s16, 0xEA) < o->workFE) {
        AF(o, s16, 0xEA) += 0x40;
        if (AF(o, s16, 0xEA) >= o->workFE) {
            AF(o, s16, 0xEA) = o->workFE;
            func_sc06_018_8018BC40(o);
        }
    } else {
        AF(o, s16, 0xE8) += 0x40;
        if (AF(o, s16, 0xE8) >= o->workFE) {
            if ((u8 *)o->ext0 != 0) {
                ZeroFill(o->ext0, 0x38);
            }
            o->parent->ext1 = 0;
            FreeActor(o);
        }
    }
}

void func_sc06_018_8018BB18(StageActor *arg0) {
    s32 temp_a0_2;
    void *temp_a0;

    D_sc06_018_801CD4D0[arg0->state]();
    if ((arg0->kind != 0) && ((temp_a0 = arg0->parent, (AF(temp_a0, s16, 0x36) != arg0->work100)) || (AF(temp_a0, u16, 2) == 4))) {
        temp_a0_2 = (s32)arg0->ext0;
        if (temp_a0_2 != 0) {
            ZeroFill(temp_a0_2, 0x38);
        }
        FreeActor((s32) arg0);
    }
}

void func_sc06_018_8018BBB8(u8 *o) {
    SV8 v;
    u8 *p;

    v.x = AF(o, s16, 6);
    v.y = AF(o, s16, 0xA);
    v.z = AF(o, s16, 0xE);
    v.pad = 0xC;
    p = func_sc06_018_8018D364(&v, 0, 0x40C0C0);
    if (p != 0) {
        AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC006;
        AF(AF(p, u8 *, 0x20), s32, 4) |= 0x50000000;
        AF(AF(p, u8 *, 0x20), s16, 0x18) = 0xA00;
    }
}

void func_sc06_018_8018BC40(u8 *o) {
    u8 *p;

    p = SpawnPropFrom(o, 0x23);
    if (p != 0) {
        AF(p, s16, 6) = AF(o, s16, 0xE0);
        AF(p, s16, 0xA) = AF(o, s16, 0xE2);
        AF(p, s16, 0xE) = AF(o, s16, 0xE4);
        AF(p, s16, 0x34) = 0x3001;
        AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC008;
        AF(AF(p, u8 *, 0x20), s32, 4) |= 0x50000000;
    }
}

void func_sc06_018_8018BCC4(u8 *o, s32 n, s16 *h, s32 col) {
    u8 unused[0x20];
    SV8 v;
    SV8 out[6];
    Quad28 q;
    s32 flag;
    SV8 *t;
    s32 i;
    SetRotMatrix(((ObjM *)o)->m + 0x34);
    SetTransMatrix(((ObjM *)o)->m + 0x34);
    t = &D_sc06_018_801CD4E0[(n & 1) * 3];
    for (i = 0; i < 3; i++) {
        v.x = t[i].x;
        v.y = t[i].y;
        v.z = -h[0];
        RotTransSV(&v, &out[i], &flag);
    }
    for (i = 0; i < 3; i++) {
        v.x = t[i].x;
        v.y = t[i].y;
        v.z = -h[1];
        RotTransSV(&v, &out[i + 3], &flag);
    }
    q.c = *(CV *)&col;
    q.code = 0x50000000;
    q.v[0] = out[0];
    q.v[1] = out[1];
    q.v[2] = out[3];
    q.v[3] = out[4];
    func_sc06_018_8018C090(&q);
    q.v[0] = out[1];
    q.v[1] = out[2];
    q.v[2] = out[4];
    q.v[3] = out[5];
    func_sc06_018_8018C090(&q);
    q.v[0] = out[2];
    q.v[1] = out[0];
    q.v[2] = out[5];
    q.v[3] = out[3];
    func_sc06_018_8018C090(&q);
}

UXY *func_sc06_018_8018BFA8(UXY *out, SV8 *a, SV8 *b) {
    UXY u;
    s32 dx, dy, dz, t, c, s;

    dz = b->z - a->z;
    dx = b->x - a->x;
    dy = b->y - a->y;
    t = (ratan2(-dz, dx) - 0x400) & 0xFFF;
    u.s.y = t;
    c = rcos(t);
    s = rsin(t);
    dz = (dz * c + dx * s) >> 12;
    u.s.x = ratan2(dy, -dz);
    *out = u;
    return out;
}

s32 func_sc06_018_8018C090(SV8 *v) {
    s32 f0;
    s32 f1;
    s32 otz;

    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    gte_ldv3(&v[0], &v[1], &v[2]);
    gte_rtpt();
    gte_stflg(&f0);
    gte_stsxy3(&v[0], &v[1], &v[2]);
    gte_ldv0(&v[3]);
    gte_rtps();
    gte_stflg(&f1);
    f0 |= f1;
    gte_stsxy(&v[3]);
    gte_avsz4();
    gte_stotz(&otz);
    v[0].z = otz;
    if ((u32)otz < 0x1000) {
        DrawPrimF4Screen(v);
    }
}

void func_sc06_018_8018C190(u8 *o) {
    WMtx m;
    SV8 v;
    u8 unused[8];
    SV8 q;
    SV8 r;
    s32 flag[2];
    UXY u;
    SV8 ang;
    s32 dx, dy, dz, a, c, s;

    SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc06_018_801CD4C8, &v, flag);
    dz = AF(o, s16, 0xE4) - v.z;
    dx = AF(o, s16, 0xE0) - v.x;
    dy = AF(o, s16, 0xE2) - v.y;
    a = (ratan2(-dz, dx) - 0x400) & 0xFFF;
    u.s.y = a;
    c = rcos(a);
    s = rsin(a);
    dz = (dz * c + dx * s) >> 12;
    u.s.x = ratan2(dy, -dz);
    *(UXY *)&ang = u;
    r.x = u.s.x;
    r.y = u.s.y;
    r.z = 0;
    RotMatrixZYX(&r, &m);
    m.t[0] = v.x;
    m.t[1] = v.y;
    m.t[2] = v.z;
    SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    WorldToLocal(AF(o, u8 *, 0x20) + 0x34, o + 0xE0, &q);
    AF(o, s16, 0xFE) = -q.z;
}

s32 func_sc06_018_8018C310(void) {
    s32 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc06_018_801D55B0;
    var_v0 = 0x1F;
    do {
        AF(var_v1, s16, 0xE) = 0;
        var_v0 -= 1;
        var_v1 = (s32 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

void func_sc06_018_8018C334(u8 *pos, s32 col) {
    u8 *e;
    s32 i;

    e = &D_sc06_018_801D55B0;
    for (i = 0; i < 0x20; i++, e += 0x10) {
        if (AF(e, s16, 0xE) == 0) {
            AF(e, SV8, 8) = *(SV8 *)pos;
            AF(e, CV4, 0) = *(CV4 *)&col;
            if ((e[4] = e[0] >> 3) == 0) e[4] = 1;
            if ((e[5] = e[1] >> 3) == 0) e[5] = 1;
            if ((e[6] = e[2] >> 3) == 0) e[6] = 1;
            return;
        }
    }
}

void func_sc06_018_8018C3F8(void) {
    XY sxy;
    XY a;
    XY b;
    s32 flag;
    s32 otz;
    u32 *ot;
    u8 *e;
    u8 *t;
    u32 *p;
    s32 i;
    s32 n;
    s32 h;
    s32 w;
    s32 z;
    s32 v;
    s32 d;

    ot = g_WorldOtTable[D_800B9A02[0]];
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    e = &D_sc06_018_801D55B0;
    for (i = 0; i < 0x20; i++, e += 0x10) {
        n = AF(e, s16, 0xE);
        if (n == 0) continue;
        gte_ldv0(e + 8);
        gte_rtps();
        gte_stsxy(&sxy);
        gte_stflg(&flag);
        gte_stszotz(&otz);
        if ((u16)(sxy.x + 0x200) > 0x400) continue;
        if ((u16)(sxy.y + 0x180) > 0x300) continue;
        z = otz - 0x10;
        if ((u32)z >= 0x1000) continue;
        { s16 m = n; h = m >> 6; }
        w = n * 3 >> 8;
        p = ot + z;
        a.x = sxy.x - h;
        a.y = sxy.y - h;
        b.x = a.x + w;
        b.y = a.y;
        func_sc06_018_8018C7A8(&a, &b, e, p);
        b.x = a.x;
        b.y = a.y + w;
        func_sc06_018_8018C7A8(&a, &b, e, p);
        a.x = sxy.x + h;
        b.x = a.x - w;
        b.y = a.y;
        func_sc06_018_8018C7A8(&a, &b, e, p);
        b.x = a.x;
        b.y = a.y + w;
        func_sc06_018_8018C7A8(&a, &b, e, p);
        a.y = sxy.y + h;
        b.x = a.x - w;
        b.y = a.y;
        func_sc06_018_8018C7A8(&a, &b, e, p);
        b.x = a.x;
        b.y = a.y - w;
        func_sc06_018_8018C7A8(&a, &b, e, p);
        a.x = sxy.x - h;
        b.x = a.x + w;
        b.y = a.y;
        func_sc06_018_8018C7A8(&a, &b, e, p);
        b.x = a.x;
        b.y = a.y - w;
        func_sc06_018_8018C7A8(&a, &b, e, p);
        t = AllocPrim(8);
        AF(t, s32, 4) = 0xE1000020;
        AF(t, u8, 3) = 1;
        ((PTag *)t)->addr = ((PTag *)p)->addr;
        ((PTag *)p)->addr = (u32)t;
        v = e[0];
        d = v - e[4];
        v = d;
        if (d < 0) v = 0;
        e[0] = v;
        v = e[1];
        d = v - e[5];
        v = d;
        if (d < 0) v = 0;
        e[1] = v;
        v = e[2];
        d = v - e[6];
        v = d;
        if (d < 0) v = 0;
        e[2] = v;
        d = e[0] | e[1] | e[2];
        if (d == 0) {
            AF(e, s16, 0xE) = 0;
        }
    }
}

void func_sc06_018_8018C7A8(XY *a, XY *b, u8 *e, u32 *p) {
    typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
    u8 *t;

    t = AllocPrim(0x10);
    t[3] = 3;
    t[7] = 0x42;
    t[4] = e[0];
    t[5] = e[1];
    t[6] = e[2];
    AF(t, s16, 8) = a->x;
    AF(t, s16, 0xA) = a->y;
    AF(t, s16, 0xC) = b->x;
    AF(t, s16, 0xE) = b->y;
    ((PTag *)t)->addr = ((PTag *)p)->addr;
    ((PTag *)p)->addr = (u32)t;
}

void func_sc06_018_8018C884(void) {
}

void func_sc06_018_8018C88C(u8 *arg0, s32 arg1, s32 arg2) {
    s16 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = HeadingToPlayer((s32) arg0);
        AF(arg0, s16, 0x106) = temp_v0;
        func_sc06_018_8018ABD4((s32) temp_v0, AF(arg0, s32, 0x20) + 0x12, 0x20);
        UpdateModelZYX((s32) arg0);
        AF(arg0, u16, 0xE0) = (u16) g_PlayerX;
        AF(arg0, s16, 0xE2) = (s16) (D_80126B62 - 0x38);
        AF(arg0, u16, 0xE4) = (u16) D_80126B66;
        if (func_sc06_018_8018A86C((s32) arg0) != 0) {
            AF(arg0, s32, 0xD0) = SpawnActor(0x30E, (s32) arg0);
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            return;
        }
        return;
    case 1:
        if (AF(arg0, s32, 0xD0) == 0) {
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            return;
        }
        break;
    case 2:
        if (TickTimer((s32) arg0, arg1, arg2) != 0) {
            AF(arg0, s16, 0x108) = 0;
            AF(arg0, u16, 0x34) = 0U;
        }
        break;
    }
}

void func_sc06_018_8018C9B0(u8 *o) {
    SV8 v;

    MoveObject(o);
    v.x = AF(o, s16, 6);
    v.y = AF(o, s16, 0xA);
    v.z = AF(o, s16, 0xE);
    v.pad = 0x3000;
    EmitProp23(o + 0x100, &v, &D_sc06_018_801CD43C, 0);
    if (!(AF(o, u16, 0x100) & 3)) {
        PlaySoundId(0xA9F, 0);
    }
    if (TickTimer(o) != 0) {
        FreeActor(o);
    }
}

void func_sc06_018_8018CA44(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_a0;
    void *temp_a0_2;

    if (TickTimer(arg0, arg1, arg2) != 0) {
        FreeActor(arg0);
        return;
    }
    MoveObject(arg0);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0x106));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x14) = (u16) (AF(temp_a0_2, u16, 0x14) + AF(arg0, u16, 0x108));
}

void func_sc06_018_8018CABC(StageActor *arg0) {
    u16 temp_v0;

    func_sc06_018_8018C334((u8 *)arg0 + 0xE0, 0x4040FF);
    temp_v0 = AF(arg0, u16, 0xE6) - 0x100;
    AF(arg0, u16, 0xE6) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_sc06_018_8018B8F8((s32) arg0);
    }
}

void func_sc06_018_8018CB14(u8 *arg0, s32 arg1, s32 arg2) {
    s16 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0xCC);
    if (temp_a0 != NULL) {
        temp_v0 = AF(temp_a0, s16, 0x18);
        if (temp_v0 < 0x500) {
            AF(temp_a0, s16, 0x18) = (s16) (temp_v0 + 0xC0);
            AF(temp_a0, u16, 0x1A) = (u16) (AF(temp_a0, u16, 0x1A) + 0xC0);
        }
    }
    if (TickTimer((s32) arg0, arg1, arg2) != 0) {
        func_sc06_018_8018B998((s32) arg0);
    }
}

void func_sc06_018_8018CB88(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    if (AF(arg0, u16, 2) == 0) {
        func_sc06_018_8018CC88();
        return;
    }
    temp_v0 = AF(arg0, s32, 0x1C);
    if ((temp_v0 == 0) || ((AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1), MoveProp((s32) arg0), (AF(arg0, s16, 0x32) == 0)) && ((u32) ((AF(arg0, u16, 0xA) + 0x1000) & 0xFFFF) >= 0x1001U))) {
        FreeProp((s32) arg0);
        return;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + AF(arg0, s32, 0x34));
    AF(temp_a0, u16, 0x14) = (u16) (AF(temp_a0, u16, 0x14) + AF(arg0, u16, 0x30));
    AF(AF(arg0, void *, 0x20), u16, 8) = (u16) AF(arg0, u16, 6);
    AF(AF(arg0, void *, 0x20), u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(AF(arg0, void *, 0x20), u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    func_sc06_018_8018CD04((s32) AF(arg0, void *, 0x20));
}

void func_sc06_018_8018CC88(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    AF(p, s16, 2) = 0xB;
    AF(p, s32, 4) |= 0x50000000;
    if (AF(p, s16, 0x18) == 0) AF(p, s16, 0x18) = 0x600;
    AF(p, s16, 0x14) = rand() & 0xFF0;
    AF(o, s16, 0x30) = 0x100;
    AF(o, s16, 2)++;
}

void func_sc06_018_8018CD04(u8 *arg0) {
    XY sxy;
    MAT3 m;
    SV8 v;
    s32 unused[6];
    s32 flag;
    s32 sz;
    s32 otz;
    UXY d;
    u32 fl;
    s32 z;
    u32 *ot;
    u16 h;
    s32 r;
    s32 hi;
    PF4 *p;
    PF4 *p1;
    u32 semi;
    PTAG *t;
    s32 *wm;

    wm = (s32 *)&D_800AF648;
    fl = AF(arg0, u32, 4);
    gte_SetRotMatrix(wm);
    gte_SetTransMatrix(wm);
    gte_ldv0(arg0 + 8);
    gte_rtps();
    gte_stsxy(&sxy);
    gte_stflg(&flag);
    gte_stsz(&sz);
    gte_stszotz(&otz);
    if (flag & ~0x1000) return;
    z = otz + 1;
    ot = g_WorldOtTable[D_800B9A02[0]];
    h = AF(arg0, u16, 0x2C);
    if ((h & 0xC000) != 0) {
        if ((h & 0xC000) == 0xC000) {
            z -= h & 0xFFF;
            if (z < 0) z = 0;
        } else {
            z += h & 0xFFF;
        }
    }
    if ((u32)z >= 0x1000) return;
    m.m[0][0] = AF(arg0, s16, 0x18);
    m.m[0][1] = 0;
    m.m[0][2] = 0;
    m.m[1][0] = 0;
    m.m[1][1] = AF(arg0, s16, 0x18);
    m.m[1][2] = 0;
    m.m[2][0] = 0;
    m.m[2][1] = 0;
    m.m[2][2] = 0x1000;
    m.t[2] = 0;
    m.t[1] = 0;
    m.t[0] = 0;
    r = (s32)&m;
    RotMatrixZ(AF(arg0, s16, 0x14), r);
    gte_SetRotMatrix(r);
    gte_SetTransMatrix(r);
    v.x = 0x20;
    v.y = 0;
    v.z = sz;
    gte_ldv0(&v);
    gte_rtps();
    gte_stsxy(&d);
    r = (d.s.x >> 3) & 0xFFFF;
    r |= (d.s.y >> 3) << 16;
    p = (PF4 *)g_PrimNext;
    p1 = p + 1;
    p->tag.len = 5;
    p->code = 0x28;
    p1->tag.len = 5;
    p1->code = 0x28;
    semi = fl & 0x40000000;
    if (semi) {
        p->code |= 2;
        p1->code |= 2;
    }
    p->r0 = arg0[0x24];
    p->g0 = arg0[0x25];
    p->b0 = arg0[0x26];
    p1->r0 = arg0[0x24];
    p1->g0 = arg0[0x25];
    p1->b0 = arg0[0x26];
    hi = r >> 16;
    p->x0 = sxy.x + d.s.x;
    p->y0 = sxy.y + d.s.y;
    p->x1 = sxy.x - hi;
    p->y1 = sxy.y + r;
    p->x2 = sxy.x + hi;
    p->y2 = sxy.y - r;
    p->x3 = sxy.x - d.s.x;
    p->y3 = sxy.y - d.s.y;
    p1->x0 = sxy.x - d.s.y;
    p1->y0 = sxy.y + d.s.x;
    p1->x1 = sxy.x - r;
    p1->y1 = sxy.y - hi;
    p1->x2 = sxy.x + r;
    p1->y2 = sxy.y + hi;
    p1->x3 = sxy.x + d.s.y;
    p1->y3 = sxy.y - d.s.x;
    p->tag.addr = ((PTAG *)(ot + z))->addr;
    ((PTAG *)(ot + z))->addr = (u32)p;
    p1->tag.addr = ((PTAG *)(ot + z))->addr;
    ((PTAG *)(ot + z))->addr = (u32)p1;
    g_PrimNext += 0x30;
    if (semi) {
        s32 unused2[2];
        t = (PTAG *)g_PrimNext;
        g_PrimNext += 8;
        t->len = 1;
        ((u32 *)t)[1] = 0xE1000000 | ((fl >> 23) & 0x60);
        t->addr = ((PTAG *)(ot + z))->addr;
        ((PTAG *)(ot + z))->addr = (u32)t;
    }
}

void func_sc06_018_8018D1A4(u16 *cnt, s16 *pos, s16 *rng, s32 sh, s32 arg4) {
    SV8 v;
    u8 *r;
    if (!(*cnt & (s16)((1 << sh) - 1))) {
        v.x = pos[0] + rand() % (rng[0] * 2) - rng[0];
        v.y = pos[1] + rand() % (rng[1] * 2) - rng[1];
        v.z = pos[2] + rand() % (rng[2] * 2) - rng[2];
        v.pad = rng[3];
        r = func_sc06_018_8018D364(&v, 0, arg4);
        if (r != 0) {
            AF(AF(r, u8 *, 0x20), s16, 0x18) = pos[3];
        }
    }
    (*cnt)++;
}

s32 func_sc06_018_8018D330(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc06_018_8018D364(arg0, arg1, arg2);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x32) = 1;
    }
    return temp_v0;
}

s32 func_sc06_018_8018D364(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = SpawnPropAt(0x55, arg0);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0x1C) = (s32) AF(arg0, s16, 6);
        if (arg1 != 0) {
            AF(temp_v0, s32, 0x10) = (s32) AF(arg1, s32, 0);
            AF(temp_v0, s32, 0x14) = (s32) AF(arg1, s32, 4);
            AF(temp_v0, s32, 0x18) = (s32) AF(arg1, s32, 8);
            AF(temp_v0, s32, 0x34) = (s32) AF(arg1, s32, 0xC);
        }
        if (arg2 != 0) {
            AF(AF(temp_v0, void *, 0x20), s32, 0x24) = arg2;
        }
    }
    return temp_v0;
}

void func_sc06_018_8018D40C(u8 *o) {
    s32 a, d, t;
    u8 *p;
    a = HeadingToTarget(o);
    p = AF(o, u8 *, 0x20);
    d = a + AF(o, s16, 0x100) - AF(p, s16, 0x12);
    if (d > 0x800) {
        t = AF(p, s16, 0x12) + 0x1000;
        d = a - t;
    }
    if (d < -0x800) {
        t = AF(p, s16, 0x12) - 0x1000;
        d = a - t;
    }
    if (d > 0) {
        if (d > 0x20) {
            d = 0x20;
        }
        AF(p, s16, 0x12) += d;
    } else if (d < 0) {
        if (d < -0x20) {
            d = -0x20;
        }
        AF(p, s16, 0x12) += d;
    } else {
        AF(o, s16, 0x100) = (rand() & 0x7FF) - 0x400;
    }
    d = AF(AF(o, u8 *, 0x64), s16, 0xFC) - AF(o, s16, 0xFC);
    if (d > 0) {
        if (d > 8) {
            d = 8;
        }
        AF(o, s16, 0xFC) += d;
    } else if (d < 0) {
        if (d < -8) {
            d = -8;
        }
        AF(o, s16, 0xFC) += d;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(o, u16, 0xFC) & 0xFFF;
}

void func_sc06_018_8018D514(u8 *o) {
    s32 a, d, t;
    u8 *p;
    a = HeadingToTarget(o);
    p = AF(o, u8 *, 0x20);
    d = a + AF(o, s16, 0x100) - AF(p, s16, 0x12);
    if (d > 0x800) {
        t = AF(p, s16, 0x12) + 0x1000;
        d = a - t;
    }
    if (d < -0x800) {
        t = AF(p, s16, 0x12) - 0x1000;
        d = a - t;
    }
    if (d > 0) {
        if (d > 0x20) {
            d = 0x20;
        }
        AF(o, s16, 0xFE) += d;
        if (AF(o, s16, 0xFE) > 0x200) {
            AF(o, s16, 0xFE) = 0x200;
        }
    } else if (d < 0) {
        if (d < -0x20) {
            d = -0x20;
        }
        AF(o, s16, 0xFE) += d;
        if (AF(o, s16, 0xFE) < -0x200) {
            AF(o, s16, 0xFE) = -0x200;
        }
    } else {
        AF(o, s16, 0x100) = (rand() & 0x7FF) - 0x400;
    }
    d = AF(AF(o, u8 *, 0x64), s16, 0xFC) - AF(o, s16, 0xFC);
    if (d > 0) {
        if (d > 8) {
            d = 8;
        }
        AF(o, s16, 0xFC) += d;
    } else if (d < 0) {
        if (d < -8) {
            d = -8;
        }
        AF(o, s16, 0xFC) += d;
    }
}

void func_sc06_018_8018D654(u8 *o) {
    SV8 v;
    s32 i;
    s32 t;
    u8 *p;

    if (AF(o, u16, 0) == 0) {
        return;
    }
    if (AF(AF(o, u8 *, 0x20), u16, 0x12) & 0xFFF) {
        return;
    }
    if (g_Player.pos[2].w >= AF(o, s32, 0xC) - 0x800000 && PlayerFlag1000() != 0
        && AF(o, u8, 0x5E) != 0x25 && AF(o, s16, 0x76) > 0) {
        i = AF(o, s16, 6) - (s16)g_PlayerX;
        v.x = g_PlayerX;
        v.y = D_80126B62 - 0x40;
        v.z = AF(o, u16, 0xE) - 0x30;
        v.pad = 0;
        if (AF(o, s16, 0x70) == 4 && i >= -8 && i <= 0xB0) {
            StrikeActorFacing(&g_Player, o, 0x25, &v);
        }
        if (AF(o, s16, 0x70) == 5 && i >= -0xB0 && i <= 8) {
            StrikeActorFacing(&g_Player, o, 0x25, &v);
        }
    }
    if (g_Player.pos[2].w >= AF(o, s32, 0xC) - 0x500000) {
        g_Player.pos[2].w = AF(o, s32, 0xC) - 0x500000;
    }
    p = &g_Actors;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) != 0 && AF(p, u16, 0) != 0x318 && AF(p, s32, 0x3C) != 0) {
            if ((AF(p, s16, 0xE) >= AF(o, s16, 0xE) && AF(p, s16, 0x42) < AF(o, s16, 0xE))
                || (AF(p, s16, 0xE) < AF(o, s16, 0xE) && AF(p, s16, 0x42) >= AF(o, s16, 0xE))) {
                AF(p, s16, 6) = AF(p, u16, 0x3A);
                AF(p, s16, 0xE) = AF(p, u16, 0x42);
                AF(p, s32, 0x10) = 0;
                AF(p, s32, 0x18) = 0;
            }
        }
    }
}

void func_sc06_018_8018D870(StageActor *o) {
    ActorInit *t;
    u8 *q;
    StageActor *e;
    u8 *f;
    u8 *p;
    s32 i;
    s32 d;
    s32 k;
    k = AF(o, u8, 0x5E);
    if (o->hitDamage != 0) {
        if (k == 0x1D) {
            o->hitFlags = 0;
            o->hitPos[0] = (u16)o->pos[0].h.i;
            o->hitPos[1] = (u16)o->pos[1].h.i;
            o->hitPos[2] = (u16)o->pos[2].h.i;
        }
        t = o->init;
        if (t != 0 && o->hitDamage != 0) {
            d = (o->hitDamage * t->damageScale) >> 12;
            if (d <= 0) {
                d = 1;
            }
        } else {
            d = o->hitDamage;
        }
        o->hp -= d;
        ShowDamage(o, d);
        if (o->hitFlags & 1) {
            ShowDefeat(o);
            StartRumbleScript(&D_sc06_018_801D1210);
        }
    }
    if (k != 0x1D) {
        if (o->hitFx[0] != 0) {
            GainStat3FromActor(o);
        }
        if (o->hitFx[1] != 0) {
            GainStat2FromActor(o);
        }
    }
    if (o->hp < 0) {
        PlaySoundId(0xAE0, 0);
        q = (u8 *)SpawnActorArg(0x33, 3, o);
        if (q != 0) {
            AF(q, s16, 0x12) = 0;
            AF(q, s16, 0x16) = -0x10;
            AF(q, s16, 0x1A) = -4;
        }
        q = (u8 *)SpawnActorArg(0x33, 2, o);
        if (q != 0) {
            AF(q, s16, 0x12) = 5;
            AF(q, s16, 0x16) = -0x10;
            AF(q, s16, 0x1A) = 4;
        }
        q = (u8 *)SpawnActorArg(0x32, 2, o);
        if (q != 0) {
            AF(q, s16, 0x12) = -5;
            AF(q, s16, 0x16) = -0x10;
            AF(q, s16, 0x1A) = 4;
        }
        i = 0;
        do {
            p = (u8 *)SpawnActor(0x281, o);
            if (p != 0) {
                AF(p, s32, 0x1C) = 2;
                AF(p, s16, 0x12) = (rand() & 0x1F) - 0x10;
                AF(p, s16, 0x16) = -((rand() & 0xF) + 0x10);
                AF(p, s16, 0x1A) = (rand() & 0x1F) - 0x10;
            }
            i++;
        } while (i < 8);
        i = 0;
        do {
            p = (u8 *)SpawnProp(0x23);
            if (p != 0) {
                AF(p, s16, 6) = (u16)o->pos[0].h.i + (rand() & 0x3F) - 0x20;
                AF(p, s16, 0xA) = (u16)o->pos[1].h.i - (rand() & 0x3F) - 0x20;
                AF(p, s16, 0xE) = (u16)o->pos[2].h.i + (rand() & 0x3F) - 0x20;
                AF(p, s32, 0x18) = 0;
                AF(p, s32, 0x14) = 0;
                AF(p, s32, 0x10) = 0;
                AF(p, s16, 0x34) = (rand() & 0x17FF) + 0x1800;
            }
            i++;
        } while (i < 8);
        p = (u8 *)o->ext0;
        if (p != 0) {
            AF(p, s16, 2) = 5;
            AF(p, s16, 0x34) = 0;
            StopWithGravity(p);
            SetLocalVelocityXZ(p, &D_sc06_018_801D1200);
            AF(p, s16, 0x16) = (rand() & 3) - 0x1B;
            SetScript(p, &D_sc06_018_801D11DC);
            AF(p, s16, 0xA) -= 0x38;
            AF(p, s16, 0xFC) = (rand() & 0xFF) - 0x80;
            AF(p, s16, 0xFE) = (rand() & 0xFF) - 0x80;
            AF(p, s16, 0x100) = (rand() & 0xFF) - 0x80;
            AF(p, s32, 0x1C) = 0x3C;
        }
        p = (u8 *)o->ext1;
        if (p != 0) {
            AF(p, s16, 2) = 5;
            AF(p, s16, 0x34) = 0;
            StopWithGravity(p);
            SetLocalVelocityXZ(p, &D_sc06_018_801D1200);
            AF(p, s16, 0x16) = (rand() & 3) - 0x1B;
            SetScript(p, &D_sc06_018_801D11DC);
            AF(p, s16, 0xA) -= 0x38;
            AF(p, s16, 0xFC) = (rand() & 0xFF) - 0x80;
            AF(p, s16, 0xFE) = (rand() & 0xFF) - 0x80;
            AF(p, s16, 0x100) = (rand() & 0xFF) - 0x80;
            AF(p, s32, 0x1C) = 0x3C;
        }
        p = AF(o, u8 *, 0xD4);
        if (p != 0) {
            AF(p, s16, 2) = 5;
            AF(p, s16, 0x34) = 0;
            StopWithGravity(p);
            SetLocalVelocityXZ(p, &D_sc06_018_801D1200);
            AF(p, s16, 0x16) = (rand() & 3) - 0x1B;
            SetScript(p, &D_sc06_018_801D11DC);
            AF(p, s16, 0xA) -= 0x38;
            AF(p, s16, 0xFC) = (rand() & 0xFF) - 0x80;
            AF(p, s16, 0xFE) = (rand() & 0xFF) - 0x80;
            AF(p, s16, 0x100) = (rand() & 0xFF) - 0x80;
            AF(p, s32, 0x1C) = 0x3C;
        }
        f = AF(o, u8 *, 0xD8);
        if (f != 0) {
            e = f;
            i = 0;
            do {
                p = (u8 *)SpawnActor(0x281, e);
                if (p != 0) {
                    AF(p, s32, 0x1C) = 2;
                    AF(p, s16, 0x12) = (rand() & 0x1F) - 0x10;
                    AF(p, s16, 0x16) = -((rand() & 0xF) + 0x10);
                    AF(p, s16, 0x1A) = (rand() & 0x1F) - 0x10;
                }
                i++;
            } while (i < 8);
            i = 0;
            do {
                p = (u8 *)SpawnProp(0x23);
                if (p != 0) {
                    AF(p, s16, 6) = (u16)e->pos[0].h.i + (rand() & 0x3F) - 0x20;
                    AF(p, s16, 0xA) = (u16)e->pos[1].h.i - (rand() & 0x3F) - 0x20;
                    AF(p, s16, 0xE) = (u16)e->pos[2].h.i + (rand() & 0x3F) - 0x20;
                    AF(p, s32, 0x18) = 0;
                    AF(p, s32, 0x14) = 0;
                    AF(p, s32, 0x10) = 0;
                    AF(p, s16, 0x34) = (rand() & 0x17FF) + 0x1800;
                }
                i++;
            } while (i < 8);
            FreeActor(e);
        }
        FreeActor(o);
    } else {
        PlaySoundId(0x9B7, 0);
        o->hitState = 0x8800;
        o->hitDamage = 0;
        o->react = 0;
        o->reactMode = 0x10;
    }
}

void func_sc06_018_8018DE60(StageActor *o) {
    ActorInit *t;
    s32 d;
    s32 k;
    k = AF(o, u8, 0x5E);
    if (o->hitDamage != 0) {
        if (k == 0x1D) {
            o->hitFlags = 0;
            o->hitPos[0] = (u16)o->pos[0].h.i;
            o->hitPos[1] = (u16)o->pos[1].h.i;
            o->hitPos[2] = (u16)o->pos[2].h.i;
        }
        t = o->init;
        if (t != 0 && o->hitDamage != 0) {
            d = (o->hitDamage * t->damageScale) >> 12;
            if (d <= 0) {
                d = 1;
            }
        } else {
            d = o->hitDamage;
        }
        o->hp -= d;
        ShowDamage(o, d);
        if (o->hitFlags & 1) {
            ShowDefeat(o);
            StartRumbleScript(&D_sc06_018_801D1210);
        }
    }
    if (k != 0x1D) {
        if (o->hitFx[0] != 0) {
            GainStat3FromActor(o);
        }
        if (o->hitFx[1] != 0) {
            GainStat2FromActor(o);
        }
    }
    if (o->hp < 0) {
        o->state = 0xA;
        o->hitState = 0x800;
        o->stateCount = 0;
        o->react = 0;
        o->workF4 = 1;
        o->model->flags &= ~0x80;
    } else {
        PlaySoundId(0xAD8, 0);
        o->hitState = 0x8800;
        o->hitDamage = 0;
        o->react = 0;
        o->reactMode = 0x10;
        func_sc06_018_8018D654(o);
    }
}

void func_sc06_018_8018DFF4(StageActor *o) {
    ActorInit *t;
    s32 d;
    s32 k;
    k = AF(o, u8, 0x5E);
    if (o->hitDamage != 0) {
        if (k == 0x1D) {
            o->hitFlags = 0;
            o->hitPos[0] = (u16)o->pos[0].h.i;
            o->hitPos[1] = (u16)o->pos[1].h.i;
            o->hitPos[2] = (u16)o->pos[2].h.i;
        }
        t = o->init;
        if (t != 0 && o->hitDamage != 0) {
            d = (o->hitDamage * t->damageScale) >> 12;
            if (d <= 0) {
                d = 1;
            }
        } else {
            d = o->hitDamage;
        }
        o->hp -= d;
        ShowDamage(o, d);
        if (o->hitFlags & 1) {
            ShowDefeat(o);
            StartRumbleScript(&D_sc06_018_801D1210);
        }
    }
    if (k != 0x1D) {
        if (o->hitFx[0] != 0) {
            GainStat3FromActor(o);
        }
        if (o->hitFx[1] != 0) {
            GainStat2FromActor(o);
        }
    }
    if (o->hp < 0) {
        o->state = 0xB;
        o->hitState = 0x800;
        o->stateCount = 0;
        o->react = 0;
        o->workF4 = 1;
        o->model->flags &= ~0x80;
    } else {
        PlaySoundId(0xAD8, 0);
        o->hitState = 0x8800;
        o->hitDamage = 0;
        o->react = 0;
        o->reactMode = 0x10;
        func_sc06_018_8018D654(o);
    }
}

void func_sc06_018_8018E188(StageActor *o) {
    ActorInit *t;
    u8 *p;
    s32 i;
    s32 d;
    s32 k;
    k = AF(o, u8, 0x5E);
    if (o->hitDamage != 0) {
        if (k == 0x1D) {
            o->hitFlags = 0;
            o->hitPos[0] = (u16)o->pos[0].h.i;
            o->hitPos[1] = (u16)o->pos[1].h.i;
            o->hitPos[2] = (u16)o->pos[2].h.i;
        }
        t = o->init;
        if (t != 0 && o->hitDamage != 0) {
            d = (o->hitDamage * t->damageScale) >> 12;
            if (d <= 0) {
                d = 1;
            }
        } else {
            d = o->hitDamage;
        }
        o->hp -= d;
        ShowDamage(o, d);
        if (o->hitFlags & 1) {
            ShowDefeat(o);
            StartRumbleScript(&D_sc06_018_801D1210);
        }
    }
    if (k != 0x1D) {
        if (o->hitFx[0] != 0) {
            GainStat3FromActor(o);
        }
        if (o->hitFx[1] != 0) {
            GainStat2FromActor(o);
        }
    }
    if (o->hp < 0) {
        if (o->hp >= -0x3E7) {
            PlaySoundId(0xAE0, 0);
        }
        i = 0;
        do {
            p = (u8 *)SpawnActor(0x281, o);
            if (p != 0) {
                AF(p, s32, 0x1C) = 2;
                AF(p, s16, 0x12) = (rand() & 0x1F) - 0x10;
                AF(p, s16, 0x16) = -((rand() & 0xF) + 0x10);
                AF(p, s16, 0x1A) = (rand() & 0x1F) - 0x10;
            }
            i++;
        } while (i < 8);
        i = 0;
        do {
            p = (u8 *)SpawnProp(0x23);
            if (p != 0) {
                AF(p, s16, 6) = (u16)o->pos[0].h.i + (rand() & 0x3F) - 0x20;
                AF(p, s16, 0xA) = (u16)o->pos[1].h.i - (rand() & 0x3F) - 0x20;
                AF(p, s16, 0xE) = (u16)o->pos[2].h.i + (rand() & 0x3F) - 0x20;
                AF(p, s32, 0x18) = 0;
                AF(p, s32, 0x14) = 0;
                AF(p, s32, 0x10) = 0;
                AF(p, s16, 0x34) = (rand() & 0x17FF) + 0x1800;
            }
            i++;
        } while (i < 8);
        p = (u8 *)o->ext0;
        if (p != 0) {
            AF(p, s16, 2) = 5;
            AF(p, s16, 0x34) = 0;
            StopWithGravity(p);
            SetLocalVelocityXZ(p, &D_sc06_018_801D1200);
            AF(p, s16, 0x16) = (rand() & 3) - 0x1B;
            SetScript(p, &D_sc06_018_801D11DC);
            AF(p, s16, 0xA) -= 0x38;
            AF(p, s16, 0xFC) = (rand() & 0xFF) - 0x80;
            AF(p, s16, 0xFE) = (rand() & 0xFF) - 0x80;
            AF(p, s16, 0x100) = (rand() & 0xFF) - 0x80;
            AF(p, s32, 0x1C) = 0x3C;
        }
        p = (u8 *)o->ext1;
        if (p != 0) {
            AF(p, s16, 2) = 5;
            AF(p, s16, 0x34) = 0;
            StopWithGravity(p);
            SetLocalVelocityXZ(p, &D_sc06_018_801D1200);
            AF(p, s16, 0x16) = (rand() & 3) - 0x1B;
            SetScript(p, &D_sc06_018_801D11DC);
            AF(p, s16, 0xA) -= 0x38;
            AF(p, s16, 0xFC) = (rand() & 0xFF) - 0x80;
            AF(p, s16, 0xFE) = (rand() & 0xFF) - 0x80;
            AF(p, s16, 0x100) = (rand() & 0xFF) - 0x80;
            AF(p, s32, 0x1C) = 0x3C;
        }
        p = AF(o, u8 *, 0xD4);
        if (p != 0) {
            AF(p, s16, 2) = 5;
            AF(p, s16, 0x34) = 0;
            StopWithGravity(p);
            SetLocalVelocityXZ(p, &D_sc06_018_801D1200);
            AF(p, s16, 0x16) = (rand() & 3) - 0x1B;
            SetScript(p, &D_sc06_018_801D11DC);
            AF(p, s16, 0xA) -= 0x38;
            AF(p, s16, 0xFC) = (rand() & 0xFF) - 0x80;
            AF(p, s16, 0xFE) = (rand() & 0xFF) - 0x80;
            AF(p, s16, 0x100) = (rand() & 0xFF) - 0x80;
            AF(p, s32, 0x1C) = 0x3C;
        }
        o->parent->ext0 = 0;
        FreeActor(o);
    } else {
        o->hitState = 0x8800;
        o->hitDamage = 0;
        o->react = 0;
        o->reactMode = 0x10;
    }
}

void func_sc06_018_8018E5DC(StageActor *o) {
    SV8 pos;
    s32 sxy;
    s32 pz;
    s32 flag;
    u8 *obj;
    ActorInit *t;
    u8 *p;
    s32 i;
    s32 d;
    s32 k;
    k = AF(o, u8, 0x5E);
    if (o->hitDamage != 0) {
        if (k == 0x1D) {
            o->hitFlags = 0;
            o->hitPos[0] = (u16)o->pos[0].h.i;
            o->hitPos[1] = (u16)o->pos[1].h.i;
            o->hitPos[2] = (u16)o->pos[2].h.i;
        }
        t = o->init;
        if (t != 0 && o->hitDamage != 0) {
            d = (o->hitDamage * t->damageScale) >> 12;
            if (d <= 0) {
                d = 1;
            }
        } else {
            d = o->hitDamage;
        }
        o->hp -= d;
        ShowDamage(o, d);
        if (o->hitFlags & 1) {
            ShowDefeat(o);
            StartRumbleScript(&D_sc06_018_801D1210);
        }
    }
    if (k != 0x1D) {
        if (o->hitFx[0] != 0) {
            GainStat3FromActor(o);
        }
        if (o->hitFx[1] != 0) {
            GainStat2FromActor(o);
        }
    }
    if (o->hp < 0) {
        p = (u8 *)SpawnActorArg(0x33, 3, o);
        if (p != 0) {
            AF(p, s16, 0x12) = -4;
            AF(p, s16, 0x16) = -0x10;
            AF(p, s16, 0x1A) = -4;
        }
        p = (u8 *)SpawnActorArg(0x33, 2, o);
        if (p != 0) {
            AF(p, s16, 0x12) = -4;
            AF(p, s16, 0x16) = -0x10;
            AF(p, s16, 0x1A) = 0;
        }
        p = (u8 *)SpawnActorArg(0x32, 2, o);
        if (p != 0) {
            AF(p, s16, 0x12) = -4;
            AF(p, s16, 0x16) = -0x10;
            AF(p, s16, 0x1A) = 4;
        }
        i = 0;
        do {
            obj = (u8 *)SpawnActor(0x281, o);
            if (obj != 0) {
                AF(obj, s32, 0x1C) = 2;
                AF(obj, s16, 0x12) = (rand() & 0x1F) - 0x10;
                AF(obj, s16, 0x16) = -((rand() & 0xF) + 0x10);
                AF(obj, s16, 0x1A) = (rand() & 0x1F) - 0x10;
            }
            i++;
        } while (i < 8);
        i = 0;
        do {
            obj = (u8 *)SpawnProp(0x23);
            if (obj != 0) {
                AF(obj, s16, 6) = (u16)o->pos[0].h.i + (rand() & 0x3F) - 0x20;
                AF(obj, s16, 0xA) = (u16)o->pos[1].h.i - (rand() & 0x3F) - 0x20;
                AF(obj, s16, 0xE) = (u16)o->pos[2].h.i + (rand() & 0x3F) - 0x20;
                AF(obj, s32, 0x18) = 0;
                AF(obj, s32, 0x14) = 0;
                AF(obj, s32, 0x10) = 0;
                AF(obj, s16, 0x34) = (rand() & 0x17FF) + 0x1800;
            }
            i++;
        } while (i < 8);
        pos.x = AF(o->model, s32, 0x48);
        pos.y = AF(o->model, s32, 0x4C);
        pos.z = AF(o->model, s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &pz, &flag);
        if (flag >= 0 && (u16)(((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16)(((s16 *)&sxy)[1] + 0x77) < 0xEF) {
            s32 a = ((s16 *)&sxy)[0];
            if (a < 0) a = -a;
            a = ((0xA0 - a) * 0x7F) / 160;
            PlaySoundId(0xB32, (a | 0x1000) & 0xFFFF);
        }
        FreeActor(o);
    } else {
        o->hitState = 0x8800;
        o->hitDamage = 0;
        o->react = 0;
        o->reactMode = 0x10;
    }
}

void func_sc06_018_8018E9BC(StageActor *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 st;
    s32 d;
    s32 i;
    u8 *c;
    u8 *t;
    s32 r;

    st = AF(o, u8, 0x5E);
    if (o->hitDamage != 0) {
        if (st == 0x1D) {
            o->hitFlags = 0;
            o->hitPos[0] = o->pos[0].h.i;
            o->hitPos[1] = o->pos[1].h.i;
            o->hitPos[2] = o->pos[2].h.i;
        }
        if ((u8 *)o->init != 0 && o->hitDamage != 0) {
            d = o->hitDamage * o->init->damageScale >> 12;
            if (d <= 0) {
                d = 1;
            }
        } else {
            d = o->hitDamage;
        }
        o->hp -= d;
        ShowDamage(o, d);
        if (o->hitFlags & 1) {
            ShowDefeat(o);
            StartRumbleScript(&D_sc06_018_801D1210);
        }
    }
    if (st != 0x1D) {
        if (o->hitFx[0] != 0) {
            GainStat3FromActor(o);
        }
        if (o->hitFx[1] != 0) {
            GainStat2FromActor(o);
        }
    }
    if (o->hp < 0) {
        t = (u8 *)SpawnActorArg(0x33, 3, o);
        if (t != 0) {
            AF(t, s16, 0x12) = 4;
            AF(t, s16, 0x16) = -0x10;
            AF(t, s16, 0x1A) = -4;
        }
        t = (u8 *)SpawnActorArg(0x33, 2, o);
        if (t != 0) {
            AF(t, s16, 0x12) = 4;
            AF(t, s16, 0x16) = -0x10;
            AF(t, s16, 0x1A) = 0;
        }
        t = (u8 *)SpawnActorArg(0x32, 2, o);
        if (t != 0) {
            AF(t, s16, 0x12) = 4;
            AF(t, s16, 0x16) = -0x10;
            AF(t, s16, 0x1A) = 4;
        }
        for (i = 0; i < 8; i++) {
            c = (u8 *)SpawnActor(0x281, o);
            if (c != 0) {
                AF(c, s32, 0x1C) = 2;
                AF(c, s16, 0x12) = (rand() & 0x1F) - 0x10;
                AF(c, s16, 0x16) = -((rand() & 0xF) + 0x10);
                AF(c, s16, 0x1A) = (rand() & 0x1F) - 0x10;
            }
        }
        for (i = 0; i < 8; i++) {
            c = (u8 *)SpawnProp(0x23);
            if (c != 0) {
                AF(c, u16, 0x6) = (u16)o->pos[0].h.i + (rand() & 0x3F) - 0x20;
                AF(c, u16, 0xA) = (u16)o->pos[1].h.i - (rand() & 0x3F) - 0x20;
                r = (u16)o->pos[2].h.i + (rand() & 0x3F);
                AF(c, s32, 0x10) = AF(c, s32, 0x14) = AF(c, s32, 0x18) = 0;
                AF(c, u16, 0xE) = r - 0x20;
                AF(c, s16, 0x34) = (rand() & 0x17FF) + 0x1800;
            }
        }
        if ((s16)o->parent->id == o->unkFC) {
            o->parent->ext0 = 0;
        }
        pos.x = AF(o->model, s32, 0x48);
        pos.y = AF(o->model, s32, 0x4C);
        pos.z = AF(o->model, s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16) (((s16 *)&sxy)[1] + 0x77) < 0xEF) {
            s32 x = ((s16 *)&sxy)[0];
            if (x < 0) {
                x = -x;
            }
            x = (0xA0 - x) * 0x7F / 160;
            PlaySoundId(0xB32, (x | 0x1000) & 0xFFFF);
        }
        FreeActor(o);
    } else {
        o->hitState = 0x8800;
        o->hitDamage = 0;
        o->react = 0;
        o->reactMode = 0x10;
    }
}

void func_sc06_018_8018EDB8(StageActor *o) {
    ActorInit *t;
    StageActor *p;
    s32 i;
    s32 d;
    s32 k;
    k = AF(o, u8, 0x5E);
    if (o->hitDamage != 0) {
        if (k == 0x1D) {
            o->hitFlags = 0;
            o->hitPos[0] = (u16)o->pos[0].h.i;
            o->hitPos[1] = (u16)o->pos[1].h.i;
            o->hitPos[2] = (u16)o->pos[2].h.i;
        }
        t = o->init;
        if (t != 0 && o->hitDamage != 0) {
            d = (o->hitDamage * t->damageScale) >> 12;
            if (d <= 0) {
                d = 1;
            }
        } else {
            d = o->hitDamage;
        }
        o->hp -= d;
        ShowDamage(o, d);
        if (o->hitFlags & 1) {
            ShowDefeat(o);
            StartRumbleScript(&D_sc06_018_801D1210);
        }
    }
    if (k != 0x1D) {
        if (o->hitFx[0] != 0) {
            GainStat3FromActor(o);
        }
        if (o->hitFx[1] != 0) {
            GainStat2FromActor(o);
        }
    }
    if (o->hp < 0) {
        for (i = 0; i < 8; i++) {
            p = (u8 *)SpawnActor(0x281, o);
            if (p != 0) {
                p->timer = 2;
                AF(p, s16, 0x12) = (rand() & 0x1F) - 0x10;
                AF(p, s16, 0x16) = -((rand() & 0xF) + 0x10);
                AF(p, s16, 0x1A) = (rand() & 0x1F) - 0x10;
            }
        }
        for (i = 0; i < 8; i++) {
            p = (u8 *)SpawnProp(0x23);
            if (p != 0) {
                p->pos[0].h.i = (u16)o->pos[0].h.i + (rand() & 0x3F) - 0x20;
                p->pos[1].h.i = (u16)o->pos[1].h.i - (rand() & 0x3F) - 0x20;
                p->pos[2].h.i = (u16)o->pos[2].h.i + (rand() & 0x3F) - 0x20;
                p->vel[2] = 0;
                p->vel[1] = 0;
                p->vel[0] = 0;
                p->stateCount = (rand() & 0x17FF) + 0x1800;
            }
        }
        p = o->parent;
        p->hitState = 1;
        p->hitDamage = 0;
        p->hitAngle = (u16)p->model->rot.vy - 0x800;
        p->hitCode = 0x1D;
        p->workD8 = 0;
        p->hp = -0xA;
        func_sc06_018_8018D870(p);
        FreeActor(o);
    } else {
        PlaySoundId(0x9B7, 0);
        o->hitState = 0x8800;
        o->hitDamage = 0;
        o->react = 0;
        o->reactMode = 0x10;
    }
}

static inline void SetWsm(void) {
    SetRotMatrix(&D_800AF630.wsm);
    SetTransMatrix(&D_800AF630.wsm);
}

void func_sc06_018_8018F060(u8 *o, s32 n, s16 *p, s32 col) {
    typedef struct { u8 pad[0x20]; u8 *m; } ObjM;
    typedef struct { SV8 v[4]; CV4 c; s32 code; } Q1C;
    u8 unused[32];
    SV8 in;
    SV8 v[6];
    Q1C q;
    s32 flag[2];
    s32 f0;
    s32 f1;
    s32 otz;
    SV8 *tab;
    s32 i;
    u8 *pq;

    SetRotMatrix(((ObjM *)o)->m + 0x34);
    SetTransMatrix(((ObjM *)o)->m + 0x34);
    tab = D_sc06_018_801D1228[n & 1];
    for (i = 0; i < 3; i++) {
        in.x = tab[i].x;
        in.y = tab[i].y;
        in.z = -p[0];
        RotTransSV(&in, &v[i], flag);
    }
    for (i = 0; i < 3; i++) {
        in.x = tab[i].x;
        in.y = tab[i].y;
        in.z = -p[1];
        RotTransSV(&in, &v[i + 3], flag);
    }
    q.c = *(CV4 *)&col;
    q.code = 0x50000000;
    q.v[0] = v[0];
    q.v[1] = v[1];
    q.v[2] = v[3];
    q.v[3] = v[4];
    do {
        pq = (u8 *)&D_800AF630; /* MATCH-TRICK: dead store gives cse a base register for D_800AF630 */
        SetWsm();
    } while (0);
    pq = (u8 *)&q;
    {
        SV8 *a;
        SV8 *b;
        SV8 *c;
        SV8 *d;
        s32 *fp;

        b = &q.v[1];
        c = &q.v[2];
        d = &q.v[3];
        fp = &f0;
        a = &q.v[0];
        gte_ldv3(a, b, c);
        gte_rtpt();
        gte_stflg(fp);
        gte_stsxy3(a, b, c);
        gte_ldv0(d);
        gte_rtps();
        gte_stflg(&f1);
        f0 |= f1;
        gte_stsxy(d);
        gte_avsz4();
        gte_stotz(&otz);
        q.v[0].z = otz;
    }
    if (otz > 0 && f0 >= 0 && (u32)&g_PadLostFrames >= (u32)(g_WorldOtOrg[D_800B9A02[0]].ot + otz)) {
        DrawPrimF4Screen(pq);
    }
    q.v[0] = v[1];
    q.v[1] = v[2];
    q.v[2] = v[4];
    q.v[3] = v[5];
    do {
        pq = (u8 *)&D_800AF630; /* MATCH-TRICK: dead store gives cse a base register for D_800AF630 */
        SetWsm();
    } while (0);
    pq = (u8 *)&q;
    {
        SV8 *a;
        SV8 *b;
        SV8 *c;
        SV8 *d;
        s32 *fp;

        b = &q.v[1];
        c = &q.v[2];
        d = &q.v[3];
        fp = &f0;
        a = &q.v[0];
        gte_ldv3(a, b, c);
        gte_rtpt();
        gte_stflg(fp);
        gte_stsxy3(a, b, c);
        gte_ldv0(d);
        gte_rtps();
        gte_stflg(&f1);
        f0 |= f1;
        gte_stsxy(d);
        gte_avsz4();
        gte_stotz(&otz);
        q.v[0].z = otz;
    }
    if (otz > 0 && f0 >= 0 && (u32)&g_PadLostFrames >= (u32)(g_WorldOtOrg[D_800B9A02[0]].ot + otz)) {
        DrawPrimF4Screen(pq);
    }
    q.v[0] = v[2];
    q.v[1] = v[0];
    q.v[2] = v[5];
    q.v[3] = v[3];
    do {
        pq = (u8 *)&D_800AF630; /* MATCH-TRICK: dead store gives cse a base register for D_800AF630 */
        SetWsm();
    } while (0);
    pq = (u8 *)&q;
    {
        SV8 *a;
        SV8 *b;
        SV8 *c;
        SV8 *d;
        s32 *fp;

        b = &q.v[1];
        c = &q.v[2];
        d = &q.v[3];
        fp = &f0;
        a = &q.v[0];
        gte_ldv3(a, b, c);
        gte_rtpt();
        gte_stflg(fp);
        gte_stsxy3(a, b, c);
        gte_ldv0(d);
        gte_rtps();
        gte_stflg(&f1);
        f0 |= f1;
        gte_stsxy(d);
        gte_avsz4();
        gte_stotz(&otz);
        q.v[0].z = otz;
    }
    if (otz > 0 && f0 >= 0 && (u32)&g_PadLostFrames >= (u32)(g_WorldOtOrg[D_800B9A02[0]].ot + otz)) {
        DrawPrimF4Screen(pq);
    }
}

typedef struct { u8 r, g, b, cd; u8 dr, dg, db, pad; s16 x, y, z, size; } Fade8018F694;

static inline void line_8018F694(Fade8018F694 *e, SV8 *a, SV8 *b, u32 *t) {
    u8 *p;
    p = AllocPrim(0x10);
    p[3] = 3; p[7] = 0x42;
    p[4] = e->r;
    p[5] = e->g;
    p[6] = e->b;
    AF(p, s16, 8) = a->x; AF(p, s16, 0xA) = a->y; AF(p, s16, 0xC) = b->x; AF(p, s16, 0xE) = b->y;
    addPrim(t, p);
}

void func_sc06_018_8018F694(void) {
    SV8 sxy;
    SV8 a;
    SV8 b;
    s32 flag;
    s32 z;
    s32 i;
    u32 *ot;
    u32 *t;
    u8 *p;
    s32 size;
    s32 h;
    s32 w;
    s32 v;
    s32 x;
    s32 n;
    Fade8018F694 *e;

    ot = g_WorldOtTable[D_800B9A02[0]];
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    e = (Fade8018F694 *)D_sc06_018_801D57F0;
    for (i = 0; i < 0x20; i++, e++) {
        size = e->size;
        if (size == 0) continue;
        gte_ldv0(&e->x);
        gte_rtps();
        gte_stsxy(&sxy);
        gte_stflg(&flag);
        gte_stszotz(&z);
        if ((u16)(sxy.x + 0x200) > 0x400) continue;
        if ((u16)(sxy.y + 0x180) > 0x300) continue;
        n = z - 0x10;
        if ((u32)n >= 0x1000) continue;
        h = (size * 4) >> 8;
        w = (size * 3) >> 8;
        t = (u32 *)((n << 2) + (s32)ot);
        a.x = sxy.x - h;
        a.y = sxy.y - h;
        b.x = a.x + w;
        b.y = a.y;
        line_8018F694(e, &a, &b, t);
        b.x = a.x;
        b.y = a.y + w;
        line_8018F694(e, &a, &b, t);
        a.x = sxy.x + h;
        b.x = a.x - w;
        b.y = a.y;
        line_8018F694(e, &a, &b, t);
        b.x = a.x;
        b.y = a.y + w;
        line_8018F694(e, &a, &b, t);
        a.y = sxy.y + h;
        b.x = a.x - w;
        b.y = a.y;
        line_8018F694(e, &a, &b, t);
        b.x = a.x;
        b.y = a.y - w;
        line_8018F694(e, &a, &b, t);
        a.x = sxy.x - h;
        b.x = a.x + w;
        b.y = a.y;
        line_8018F694(e, &a, &b, t);
        b.x = a.x;
        b.y = a.y - w;
        line_8018F694(e, &a, &b, t);
        {
            u8 *q;
            q = AllocPrim(8);
            q[3] = 1;
            AF(q, u32, 4) = 0xE100002A;
            addPrim(t, q);
        }
        x = e->r;
        v = x - e->dr;
        x = v;
        if (v < 0) x = 0;
        e->r = x;
        x = e->g;
        v = x - e->dg;
        x = v;
        if (v < 0) x = 0;
        e->g = x;
        x = e->b;
        v = x - e->db;
        x = v;
        if (v < 0) x = 0;
        e->b = x;
        v = e->r | e->g | e->b;
        if (v == 0) {
            e->size = 0;
        }
    }
}

void func_sc06_018_8018FE0C(SV8 *a, SV8 *b, s32 c) {
    s32 pp;
    s32 flag;
    u8 *p;
    s32 z;
    p = AllocPrim(0x10);
    AF(p, s32, 4) = c;
    AF(p, u8, 3) = 3;
    AF(p, u8, 7) = 0x42;
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    z = RotTransPers(a, p + 8, &pp, &flag);
    if (z > 0 && flag >= 0) {
        if (RotTransPers(b, p + 0xC, &pp, &flag) > 0 && flag >= 0) {
            ((PTag *)p)->addr = ((PTag *)&g_WorldOtOrg[D_800B9A02[0]].ot[z])->addr;
            ((PTag *)&g_WorldOtOrg[D_800B9A02[0]].ot[z])->addr = (u32)p;
            AddDrawModeAbr(&g_WorldOt[D_800B9A02[0]], z, 1);
        }
    }
}

void func_sc06_018_8018FF98(u8 *o) {
    SV8 sv;
    u8 unused[8];
    s32 flag[2];
    s32 w;
    UXY r;
    s32 dx;
    s32 dy;
    s32 dz;
    s32 a;
    s32 c;
    s32 v;
    s32 i;
    u8 *p;
    u8 *q;
    if (SetupActor(o, &D_sc06_018_801D110C) == 0) return;
    AF(o, s16, 0xAE) = -1;
    if (AF(o, s16, 0x70) >= 0x10) {
        q = D_sc06_018_801D57F0;
        for (i = 0x1F; i >= 0; i--) {
            AF(q, s16, 0xE) = 0;
            q += 0x10;
        }
        SetShapeCircle(D_sc06_018_801D57F0 + 0x200, 0x80);
        D_sc06_018_801D59F0 = D_sc06_018_801D3B14;
        D_sc06_018_801D59F4 = D_sc06_018_801D3B18;
        AF(o, u16, 0x70) &= 0xF;
    }
    switch (AF(o, s16, 0x70)) {
    case 0:
        InitModel(AF(o, u8 *, 0x20), &D_sc06_018_801D1D50);
        AF(o, s32, 0x58) = (s32)&D_sc06_018_801D10CC | 0x40000000 | 0x20000000;
        AF(o, s16, 2) = 2;
        AF(o, u8 *, 0xBC) = &D_sc06_018_801D1258;
        AF(o, u8, 0x75) = 4;
        break;
    case 1:
        InitModel(AF(o, u8 *, 0x20), &D_sc06_018_801D1F80);
        AF(o, s32, 0x58) = (s32)&D_sc06_018_801D10DC | 0x40000000 | 0x20000000;
        AF(o, s16, 0x5C) = 0;
        SetScript(o, &D_sc06_018_801D11C8);
        AF(o, s16, 2) = 3;
        AF(o, u8, 0x75) = 4;
        break;
    case 2:
        InitModel(AF(o, u8 *, 0x20), &D_sc06_018_801D1940);
        AF(o, s32, 0x58) = (s32)&D_sc06_018_801D10AC | 0x40000000 | 0x20000000;
        AF(o, s16, 2) = 4;
        AF(o, u8, 0x75) = 8;
        break;
    case 3:
        p = AF(o, u8 *, 0x20);
        AF(p, s32, 4) |= 0x80000000;
        AF(o, s16, 2) = 6;
        AF(o, u16, 0x100) = AF(AF(o, u8 *, 0x64), u16, 0x36);
        SetRotMatrix(AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34);
        SetTransMatrix(AF(AF(o, u8 *, 0x64), u8 *, 0x20) + 0x34);
        RotTransSV(&D_sc06_018_801D1220, &sv, flag);
        AF(o, s16, 6) = sv.x;
        AF(o, s16, 0xA) = sv.y;
        AF(o, s16, 0xE) = sv.z;
        AF(o, s32, 0xDC) = AF(AF(o, u8 *, 0x64), s32, 0xDC);
        AF(o, s32, 0xE0) = AF(AF(o, u8 *, 0x64), s32, 0xE0);
        dx = AF(o, s16, 0xDC) - sv.x;
        dz = AF(o, s16, 0xE0) - sv.z;
        dy = AF(o, s16, 0xDE) - sv.y;
        a = (ratan2(-dz, dx) - 0x400) & 0xFFF;
        r.s.y = a;
        c = rcos(a);
        dz = (dz * c + dx * rsin(a)) >> 12;
        r.s.x = ratan2(dy, -dz);
        *(UXY *)&w = r;
        v = w;
        AF(AF(o, u8 *, 0x20), s16, 0x10) = v;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = v >> 16;
        AF(AF(o, u8 *, 0x20), s16, 0x14) = 0;
        UpdateModelZYX(o);
        AF(o, s16, 0xE4) = 0;
        AF(o, s16, 0xE6) = 0;
        AF(o, s16, 0xE2) = 0x800;
        break;
    case 4:
        InitModel(AF(o, u8 *, 0x20), &D_sc06_018_801D1BB0);
        AF(o, s32, 0x58) = (s32)&D_sc06_018_801D10BC | 0x40000000 | 0x20000000;
        AF(o, s16, 2) = 7;
        AF(o, u8 *, 0xBC) = &D_sc06_018_801D1268;
        AF(o, u8, 0x75) = 8;
        AF(o, s16, 0x76) = 0x258;
        AF(o, s16, 0xE8) = 0x100;
        AF(o, s16, 0xEA) = 0x100;
        AF(o, s16, 0xEC) = 0x100;
        AF(o, s16, 0xEE) = -2;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(o, u8 *, 0x20), u8 *, 0x80) = o + 0xE8;
        AF(o, u8 *, 0x78) = &D_sc06_018_801D1140;
        break;
    case 5:
        InitModel(AF(o, u8 *, 0x20), &D_sc06_018_801D1BB0);
        SetScript(o, &D_sc06_018_801D11F0);
        AF(o, s32, 0x58) = (s32)&D_sc06_018_801D10EC | 0x40000000 | 0x20000000;
        AF(o, s16, 2) = 8;
        AF(o, u8 *, 0xBC) = &D_sc06_018_801D1278;
        AF(o, u8, 0x75) = 8;
        AF(o, s16, 0x76) = 0x258;
        AF(o, s16, 0xE8) = 0x100;
        AF(o, s16, 0xEA) = 0x100;
        AF(o, s16, 0xEC) = 0x100;
        AF(o, s16, 0xEE) = -2;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(o, u8 *, 0x20), u8 *, 0x80) = o + 0xE8;
        AF(o, u8 *, 0x78) = &D_sc06_018_801D1140;
        break;
    case 6:
        InitModel(AF(o, u8 *, 0x20), &D_sc06_018_801D16C0);
        AF(o, s32, 0x58) = (s32)&D_sc06_018_801D109C | 0x40000000 | 0x20000000;
        SetScript(o, &D_sc06_018_801D11B4);
        AF(o, u8, 0x75) = 8;
        AF(o, u8 *, 0xBC) = &D_sc06_018_801D1288;
        AF(o, s16, 2) = 9;
        break;
    case 7:
        InitModel(AF(o, u8 *, 0x20), &D_sc06_018_801D16C0);
        AF(o, s32, 0x58) = (s32)&D_sc06_018_801D109C | 0x40000000 | 0x20000000;
        SetScript(o, &D_sc06_018_801D11B4);
        AF(o, u8, 0x75) = 8;
        AF(o, u8 *, 0xBC) = &D_sc06_018_801D1298;
        AF(o, s16, 2) = 0xC;
        AF(o, s16, 0xAE) = 0;
        AF(o, s16, 0x76) = 0x28;
        break;
    case 8:
        InitModel(AF(o, u8 *, 0x20), &D_sc06_018_801D16C0);
        AF(o, s32, 0x58) = (s32)&D_sc06_018_801D109C | 0x40000000 | 0x20000000;
        SetScript(o, &D_sc06_018_801D11B4);
        AF(o, u8, 0x75) = 8;
        AF(o, u8 *, 0xBC) = &D_sc06_018_801D12A8;
        AF(o, s16, 2) = 0xD;
        AF(o, s16, 0xAE) = 0;
        AF(o, s16, 0x76) = 0x28;
        break;
    case 9:
        InitModel(AF(o, u8 *, 0x20), &D_sc06_018_801D20CC);
        AF(o, s32, 0x58) = (s32)&D_sc06_018_801D10FC | 0x40000000 | 0x20000000;
        AF(o, u8, 0x75) = 8;
        AF(o, u8 *, 0xBC) = &D_sc06_018_801D12B8;
        AF(o, s16, 0xAE) = 0;
        AF(o, u8 *, 0x78) = &D_sc06_018_801D1174;
    default:
        AF(o, s16, 2) = 1;
        break;
    }
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = 0;
    AF(o, s32, 0xC4) = 3;
}

extern u8 D_sc06_018_801D11F8;
extern s32 HeadingPitchTo();

static inline void Boost_9C(u8 *o) {
    u8 *p;
    s32 i;
    p = &g_Actors;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        if (AF(p, u16, 0) == 0x318 && p != o && (AF(p, s16, 0x70) == 0 || AF(p, s16, 0x70) == 6)
            && AF(p, u16, 0x34) == 6 && AF(p, s32, 0x1C) <= 0x10) {
            AF(p, s32, 0x1C) += 0x10;
        }
    }
}

static inline void Step_9C(u8 *o, Mover *q, s32 off) {
    SV8 v;
    u8 *n;
    UpdateModelZYX(q);
    LocalToWorld((u8 *)q->model + 0x34, &D_sc06_018_801D11F8, &v);
    n = AF(o, u8 *, off);
    AF(n, s16, 6) = v.x;
    AF(n, s16, 0xA) = v.y;
    AF(n, s16, 0xE) = v.z;
    AF(AF(n, u8 *, 0x20), s16, 0x10) = AF(n, s16, 0xFC) + q->model->rot.vx;
    AF(AF(n, u8 *, 0x20), s16, 0x12) = AF(n, s16, 0xFE) + q->model->rot.vy;
}

static inline void Last_9C(u8 *o, Mover *q) {
    SV8 v;
    UpdateModelZYX(q);
    LocalToWorld((u8 *)q->model + 0x34, &D_sc06_018_801D11F8, &v);
    AF(o, s16, 6) = v.x;
    AF(o, s16, 0xA) = v.y;
    AF(o, s16, 0xE) = v.z;
}

static inline void Turn_9C(u8 *o) {
    SV8 v;
    s32 r;
    HeadingPitchTo(&v, o + 4, &g_PlayerPosX);
    r = *(s32 *)&v;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = r;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = r >> 16;
}

static inline void Spark_9C(u8 *o) {
    SV8 s;
    SV8 t;
    s32 flag;
    s32 c;
    t.x = g_PlayerX;
    t.y = D_80126B62 - 0x38;
    t.z = D_80126B66;
    SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc06_018_801D1220, &s, &flag);
    c = 0x202080;
    if (D_800B99D8 & 1) c = 0xE0;
    func_sc06_018_8018FE0C(&s, &t, c);
}

static inline void Chain_9C(u8 *o) {
    Step_9C(o, AF(o, u8 *, 0xCC), 0xD0);
    Step_9C(o, AF(o, u8 *, 0xD0), 0xD4);
    Last_9C(o, AF(o, u8 *, 0xD4));
}

void func_sc06_018_8019059C(u8 *o) {
    s32 i;
    u8 *p;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (GroundDistSqToPlayer(o) > 0x3FFFF) break;
        AF(o, s16, 0x34) = 9;
        InitModel(AF(o, u8 *, 0x20), &D_sc06_018_801D16C0);
        AF(o, s32, 0x58) = (s32)&D_sc06_018_801D109C | 0x40000000 | 0x20000000;
        SetScript(o, &D_sc06_018_801D11B4);
        AF(o, u8, 0x75) = 8;
        AF(o, s16, 0xAE) = 0;
        for (i = 0x200; i < 0x1000; i += 0x400) {
            p = (u8 *)SpawnActorArg(0x318, 1, o);
            if (p != 0) {
                AF(AF(p, u8 *, 0x20), s16, 0x12) = i;
                AF(p, s32, 0x1C) = 0x18;
                AF(p, s16, 0xFC) = AF(o, u16, 0x36);
            }
        }
        AF(o, s32, 0x1C) = 0x32;
        break;
    case 9:
        AF(o, s32, 0x1C)--;
        p = (u8 *)SpawnActorArg(0x318, 9, o);
        if (p == 0) break;
        AF(o, u8 *, 0xD8) = p;
        AF(o, s16, 0x34) = 1;
        AF(o, s32, 0x1C)++;
    case 1:
        AF(o, s32, 0x1C)--;
        p = (u8 *)SpawnActorArg(0x318, 2, o);
        if (p == 0) break;
        AF(p, s16, 0xA) -= 0x60;
        AF(AF(p, u8 *, 0x20), s16, 0x10) = 0xC00;
        AF(o, u8 *, 0xCC) = p;
        AF(o, s32, 0x1C)++;
        AF(o, u16, 0x34)++;
    case 2:
        AF(o, s32, 0x1C)--;
        p = (u8 *)SpawnActorArg(0x318, 2, o);
        if (p == 0) break;
        AF(p, s16, 0xFC) = 0x600;
        AF(o, u8 *, 0xD0) = p;
        AF(o, s32, 0x1C)++;
        AF(o, u16, 0x34)++;
    case 3:
        AF(o, s32, 0x1C)--;
        p = (u8 *)SpawnActorArg(0x318, 2, o);
        if (p == 0) break;
        AF(p, s16, 0xFC) = 0x600;
        AF(o, u8 *, 0xD4) = p;
        AF(o, u16, 0x34)++;
        break;
    case 4:
        if (--AF(o, s32, 0x1C) <= 0) {
            AF(o, u16, 0x34)++;
        }
        Chain_9C(o);
        break;
    case 5:
        p = AF(o, u8 *, 0xCC);
        AF(AF(p, u8 *, 0x20), s16, 0x10) += 0x40;
        p = AF(o, u8 *, 0xD0);
        AF(p, s16, 0xFC) -= 0x60;
        p = AF(o, u8 *, 0xD4);
        if ((AF(p, s16, 0xFC) -= 0x60) == 0) {
            AF(o, s32, 0x1C) = 0x96;
            AF(o, u16, 0x34)++;
            p = AF(o, u8 *, 0xCC);
            AF(AF(p, u8 *, 0x20), s16, 0x10) = 0;
        }
        Chain_9C(o);
        break;
    case 6:
        func_sc06_018_8018D40C(AF(o, u8 *, 0xCC));
        Step_9C(o, AF(o, u8 *, 0xCC), 0xD0);
        func_sc06_018_8018D514(AF(o, u8 *, 0xD0));
        Step_9C(o, AF(o, u8 *, 0xD0), 0xD4);
        func_sc06_018_8018D514(AF(o, u8 *, 0xD4));
        Last_9C(o, AF(o, u8 *, 0xD4));
        Turn_9C(o);
        if ((AF(o, s32, 0x1C) & 0xF) == 0) {
            AF(o, s16, 0xFC) = rand() % 160 + 0x100;
        }
        if (--AF(o, s32, 0x1C) != 0) break;
        AF(o, s32, 0x1C) = 0x10;
        if (GroundDistSqToPlayer(o) > 0x8FFFF) break;
        Boost_9C(o);
        AF(o, s32, 0x1C) = 0x3C;
        AF(o, u16, 0x34)++;
        PlaySoundId(0x9BB, 0);
        break;
    case 7:
        if (GroundDistSqToPlayer(o) > 0x8FFFF) {
            AF(o, s16, 0x34) = 6;
            AF(o, s32, 0x1C) = 0x96;
            break;
        }
        Boost_9C(o);
        Chain_9C(o);
        Turn_9C(o);
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34)++;
            AF(o, s16, 0xDC) = g_PlayerX;
            AF(o, s16, 0xDE) = D_80126B62 - 0x38;
            AF(o, s16, 0xE0) = D_80126B66;
            AF(o, s32, 0x1C) = 0xF;
            SpawnActorArg(0x318, 3, o);
            PlaySoundId(0x9BC, 0);
        } else {
            Spark_9C(o);
        }
        break;
    case 8:
        if (--AF(o, s32, 0x1C) != 0) {
            Boost_9C(o);
            Chain_9C(o);
        } else {
            AF(o, s16, 0x34) = 6;
            AF(o, s32, 0x1C) = 0x96;
        }
        break;
    }
}

void func_sc06_018_80191020(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;

    if (AF(o, s16, 0xFC) != AF(AF(o, u8 *, 0x64), s16, 0x36)) {
        AF(o, s16, 2) = 5;
        AF(o, s16, 0x34) = 0;
        StopWithGravity();
        SetLocalVelocityXZ(o, &D_sc06_018_801D1200);
        AF(o, s16, 0x16) = (rand() & 3) - 0x1B;
        AF(o, u16, 0xA) -= 0x38;
        AF(o, s16, 0xFC) = (rand() & 0xFF) - 0x80;
        AF(o, s16, 0xFE) = (rand() & 0xFF) - 0x80;
        AF(o, s16, 0x100) = (rand() & 0xFF) - 0x80;
        AF(o, s32, 0x1C) = 0x3C;
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s32, 0x1C) != 0) {
            AF(o, s32, 0x1C)--;
            AF(o, u16, 0xA) -= 4;
            break;
        }
        AF(o, s32, 0x1C) = 0x14;
        AF(o, u16, 0x34)++;
        pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
        pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16) (((s16 *)&sxy)[1] + 0x77) < 0xEF) {
            s32 x = ((s16 *)&sxy)[0];
            s32 a;
            if (x >= 0) { a = x; } else { a = -x; }
            a = ((0xA0 - a) * 0x7F) / 160;
            x = (x + 0xA0) / 20;
            if (x == 0x10) {
                x = 0xF;
            }
            x <<= 8; PlaySoundId(0x9E5, (a | (x | 0x3000)) & 0xFFFF);
        }
        break;
    case 1:
        if (AF(o, s32, 0x1C) != 0) {
            AF(o, s32, 0x1C)--;
            AF(o, s32, 4) -= rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 5;
            AF(o, s32, 0xC) -= rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 5;
        } else {
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        AF(AF(o, u8 *, 0x20), u16, 0x10) += 0x20;
        if (AF(AF(o, u8 *, 0x20), s16, 0x10) == 0x380) {
            AF(o, u16, 0x34)++;
        }
        break;
    }
}

extern CV4 D_sc06_018_801D3B1C;
extern void func_sc06_018_8018F694();
typedef struct { u8 pad[0x1C]; s32 cnt; } Par1C;
typedef struct { CV4 c; u8 dr, dg, db, pad; SV8 pos; } Spark57F0;

static inline void Spawn57F0(SV8 *pos, s32 col) {
    Spark57F0 *e;
    s32 i;
    e = (Spark57F0 *)D_sc06_018_801D57F0;
    for (i = 0; i < 0x20; i++, e++) {
        if (e->pos.pad == 0) {
            e->pos = *pos;
            e->c = *(CV4 *)&col;
            e->dr = e->c.r >> 3;
            if (e->dr == 0) e->dr = 1;
            e->dg = e->c.g >> 3;
            if (e->dg == 0) e->dg = 1;
            e->db = e->c.b >> 3;
            if (e->db == 0) e->db = 1;
            break;
        }
    }
}

void func_sc06_018_80191320(u8 *o) {
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    SV8 *pos;
    s16 *r;
    u8 *p;
    u8 *q;

    if (AF(o, s16, 0x100) != AF(AF(o, u8 *, 0x64), s16, 0x36)) {
        if (AF(o, u8 *, 0xCC) != 0) {
            ZeroFill(AF(o, u8 *, 0xCC), 0x38);
        }
        FreeActor(o);
        return;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        pos = (SV8 *)(o + 0xDC);
        ((Par1C *)AF(o, u8 *, 0x64))->cnt++;
        Spawn57F0(pos, 0x4040FF);
        pos->pad -= 0x100;
        if (pos->pad != 0) break;
        p = AllocActorSprite();
        if (p != 0) {
            AF(o, u8 *, 0xCC) = p;
            func_8001CD9C(p, &D_sc06_018_801D59F0);
            AF(p, s16, 8) = AF(o, s16, 6);
            AF(p, s16, 0xA) = AF(o, s16, 0xA);
            AF(p, s16, 0xC) = AF(o, s16, 0xE);
            AF(p, s32, 4) |= 0x50000000;
            AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0x80;
            AF(p, u16, 0x2C) = 0xC006;
        }
        AF(o, s32, 0x1C) = 8;
        AF(o, u16, 0x34)++;
        break;
    case 1:
        AF(AF(o, u8 *, 0x64), s32, 0x1C)++;
        p = AF(o, u8 *, 0xCC);
        if (AF(p, s16, 0x18) < 0x500) {
            AF(p, s16, 0x18) += 0xC0;
            AF(p, s16, 0x1A) += 0xC0;
        }
        if (TickTimer(o) != 0) {
            AF(o, s16, 0x102) = 0;
            AF(o, u16, 0x34)++;
            PlaySoundId(0x9B9, 0);
        }
        break;
    case 2:
        r = (s16 *)(o + 0xE4);
        AF(AF(o, u8 *, 0x64), s32, 0x1C)++;
        func_sc06_018_8018F060(o, 0, r, 0x81818);
        func_sc06_018_8018F060(o, 1, r, 0x204040);
        a.x = a.y = 0;
        a.z = -AF(o, s16, 0xE4);
        b.x = b.y = 0;
        b.z = -AF(o, s16, 0xE6);
        if (ActorSegmentDamagesPlayer(o, &a, &b, 0x96) != 0) {
            g_PlayerHitKind = 0x4018;
        }
        a.x = a.y = 0;
        a.z = -AF(o, s16, 0xE6);
        AF(o, s16, 0xE6) += 0x40;
        b.x = b.y = 0;
        b.z = -AF(o, s16, 0xE6);
        FaceHelper(o, &a, &c);
        FaceHelper(o, &b, &d);
        if (TraceMap(0x11, &c, &d) != 0) {
            WorldToLocal(AF(o, u8 *, 0x20) + 0x34, &d, &c);
            AF(o, s16, 0xE6) = -c.z;
            AF(o, u16, 0x34)++;
            AF(o, s16, 0xDC) = d.x;
            AF(o, s16, 0xDE) = d.y;
            AF(o, s16, 0xE0) = d.z;
            q = (u8 *)SpawnPropFrom(o, 0x23);
            if (q != 0) {
                AF(q, s16, 6) = AF(o, s16, 0xDC);
                AF(q, s16, 0xA) = AF(o, s16, 0xDE);
                AF(q, s16, 0xE) = AF(o, s16, 0xE0);
                AF(q, s16, 0x34) = 0x3001;
                AF(AF(q, u8 *, 0x20), u16, 0x2C) = 0xC008;
                AF(AF(q, u8 *, 0x20), s32, 4) |= 0x50000000;
            }
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 0x102) = 1;
            break;
        }
        if (AF(o, s16, 0xE6) >= 0x800) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        r = (s16 *)(o + 0xE4);
        AF(AF(o, u8 *, 0x64), s32, 0x1C)++;
        func_sc06_018_8018F060(o, 0, r, 0x81818);
        func_sc06_018_8018F060(o, 1, r, 0x204040);
        a.x = a.y = 0;
        a.z = -AF(o, s16, 0xE4);
        b.x = b.y = 0;
        b.z = -AF(o, s16, 0xE6);
        if (AF(o, s16, 0x102) != 0) {
            FaceHelper(o, &b, &d);
            p = (u8 *)SpawnKind205(o, 0);
            if (p != 0) {
                AF(p, s16, 6) = d.x;
                AF(p, s16, 0xA) = d.y;
                AF(p, s16, 0xE) = d.z;
                AF(p, s32, 0x10) = ((rand() & 0x7F) - 0x40) << 12;
                AF(p, s16, 0x16) = -0x10;
                AF(p, s32, 0x18) = ((rand() & 0x7F) - 0x40) << 12;
            }
        }
        if (ActorSegmentDamagesPlayer(o, &a, &b, 0x96) != 0) {
            g_PlayerHitKind = 0x4018;
        }
        if (--AF(o, s32, 0x1C) == 0) {
            p = AF(o, u8 *, 0xCC);
            if (p != 0) {
                ZeroFill(p, 0x38);
                AF(o, u8 *, 0xCC) = 0;
                AF(o, u16, 0x34)++;
            }
        }
        break;
    case 4:
        r = (s16 *)(o + 0xE4);
        func_sc06_018_8018F060(o, 0, r, 0x81818);
        func_sc06_018_8018F060(o, 1, r, 0x204040);
        a.x = a.y = 0;
        a.z = -AF(o, s16, 0xE4);
        b.x = b.y = 0;
        b.z = -AF(o, s16, 0xE6);
        if (AF(o, s16, 0x102) != 0) {
            FaceHelper(o, &b, &d);
            p = (u8 *)SpawnKind205(o, 0);
            if (p != 0) {
                AF(p, s16, 6) = d.x;
                AF(p, s16, 0xA) = d.y;
                AF(p, s16, 0xE) = d.z;
                AF(p, s32, 0x10) = ((rand() & 0x7F) - 0x40) << 12;
                AF(p, s16, 0x16) = -0x10;
                AF(p, s32, 0x18) = ((rand() & 0x7F) - 0x40) << 12;
            }
        }
        if (ActorSegmentDamagesPlayer(o, &a, &b, 0x96) != 0) {
            g_PlayerHitKind = 0x4018;
        }
        r[0] += 0x40;
        if (r[0] >= r[1]) {
            FreeActor(o);
            return;
        }
        break;
    }
    func_sc06_018_8018F694();
    if ((&D_sc06_018_801D59F4)[-1].r == 0xFF) {
        D_sc06_018_801D59F0 = D_sc06_018_801D3B1C;
    } else {
        D_sc06_018_801D59F0 = D_sc06_018_801D3B14;
    }
}

void func_sc06_018_80191A78(StageActor *o) {
    StageActor *p;
    s32 dx;
    s32 dz;

    AF(o, s16, 0xE8) = o->reactMode * 16 + 0x100;
    switch (o->stateCount) {
    case 0:
        p = (u8 *)SpawnActorArg(0x318, 5, o);
        if (p != 0) {
            p->model->rot.vy = 0xD00;
            p->pos[0].h.i -= 0x180;
            o->link = p;
            o->stateCount++;
        }
        break;
    case 1:
        p = (u8 *)SpawnActorArg(0x318, 6, o);
        if (p != 0) {
            p->pos[0].h.i += 0x30;
            p->pos[1].h.i -= 0xF0;
            p->model->rot.vx = 0xC00;
            p->model->rot.vy = 0xC00;
            o->ext0 = p;
            o->stateCount++;
        }
        break;
    case 2:
        dx = (s16)g_PlayerX - o->pos[0].h.i - 0xC0;
        dz = (s16)D_80126B66 - o->pos[2].h.i;
        if (dx * dx + dz * dz <= 0x3FFFF) {
            o->stateCount++;
            p = o->link;
            p->stateCount++;
        }
        break;
    case 3:
        o->model->rot.vy -= 0x40;
        if (o->model->rot.vy == 0) {
            p = (u8 *)o->ext0;
            o->hitMask = 0;
            o->stateCount++;
            p->stateCount++;
            PlaySoundId(0xAD5, 0);
        }
        break;
    case 4:
        break;
    }
    func_sc06_018_8018D654(o);
}

void func_sc06_018_80191C50(u8 *o) {
    u8 *p;

    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        p = (u8 *)SpawnActorArg(0x318, 2, o);
        if (p == 0) break;
        AF(AF(p, u8 *, 0x20), s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12);
        AF(p, s16, 0xA) += 0x120;
        AF(o, u8 *, 0xCC) = p;
        AF(o, u16, 0x34)++;
        AF(AF(p, u8 *, 0x20), s32, 4) |= 0x80000000;
    case 2:
        p = (u8 *)SpawnActorArg(0x318, 2, o);
        if (p == 0) break;
        AF(p, s16, 0xA) += 0xC0;
        AF(o, u8 *, 0xD0) = p;
        AF(o, u16, 0x34)++;
        AF(AF(p, u8 *, 0x20), s32, 4) |= 0x80000000;
    case 3:
        p = (u8 *)SpawnActorArg(0x318, 2, o);
        if (p == 0) break;
        AF(p, s16, 0xA) += 0x60;
        AF(o, s16, 0x34) = 0xA;
        AF(o, u8 *, 0xD4) = p;
        AF(o, s32, 0x1C) = 2;
        break;
    case 4:
        p = AF(o, u8 *, 0xCC);
        AF(p, s16, 0xA) -= 0x30;
        if (--AF(o, s32, 0x1C) <= 0) {
            AF(o, s32, 0x1C) = 2;
            AF(o, s16, 0xAE) = 0;
            AF(o, u16, 0x34)++;
        }
        Chain_9C(o);
        break;
    case 5:
        p = AF(o, u8 *, 0xCC);
        AF(AF(p, u8 *, 0x20), s16, 0x10) += 0x40;
        if (AF(AF(p, u8 *, 0x20), s16, 0x10) >= 0x200) {
            AF(o, s16, 0x34) = 9;
        }
        p = AF(o, u8 *, 0xD0);
        AF(p, s16, 0xFC) -= 0x40;
        p = AF(o, u8 *, 0xD4);
        AF(p, s16, 0xFC) -= 0x40;
        Chain_9C(o);
        break;
    case 6:
        func_sc06_018_8018D40C(AF(o, u8 *, 0xCC));
        Step_9C(o, AF(o, u8 *, 0xCC), 0xD0);
        func_sc06_018_8018D514(AF(o, u8 *, 0xD0));
        Step_9C(o, AF(o, u8 *, 0xD0), 0xD4);
        func_sc06_018_8018D514(AF(o, u8 *, 0xD4));
        Last_9C(o, AF(o, u8 *, 0xD4));
        Turn_9C(o);
        if ((AF(o, s32, 0x1C) & 0xF) == 0) {
            AF(o, s16, 0xFC) = rand() % 384 + 0x180;
        }
        if (--AF(o, s32, 0x1C) != 0) break;
        AF(o, s32, 0x1C) = 0x10;
        if (GroundDistSqToPlayer(o) > 0x8FFFF) break;
        Boost_9C(o);
        AF(o, s32, 0x1C) = 0x3C;
        AF(o, u16, 0x34)++;
        PlaySoundId(0x9BB, 0);
        break;
    case 7:
        if (GroundDistSqToPlayer(o) > 0x8FFFF) {
            AF(o, s16, 0x34) = 6;
            AF(o, s32, 0x1C) = 0x96;
            break;
        }
        Boost_9C(o);
        Chain_9C(o);
        Turn_9C(o);
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, u16, 0x34)++;
            AF(o, s16, 0xDC) = g_PlayerX;
            AF(o, s16, 0xDE) = D_80126B62 - 0x38;
            AF(o, s16, 0xE0) = D_80126B66;
            AF(o, s32, 0x1C) = 0xF;
            PlaySoundId(0x9BC, 0);
            SpawnActorArg(0x318, 3, o);
        } else {
            Spark_9C(o);
        }
        break;
    case 8:
        if (--AF(o, s32, 0x1C) != 0) {
            Boost_9C(o);
            Chain_9C(o);
        } else {
            AF(o, s16, 0x34) = 6;
            AF(o, s32, 0x1C) = 0x96;
        }
        break;
    case 9:
        p = AF(o, u8 *, 0xCC);
        AF(AF(p, u8 *, 0x20), s16, 0x10) -= 0x40;
        AF(AF(p, u8 *, 0x20), s16, 0x10) &= 0xFFF;
        if (AF(AF(p, u8 *, 0x20), s16, 0x10) == 0) {
            if (--AF(o, s32, 0x1C) != 0) {
                AF(o, s16, 0x34) = 5;
            } else {
                AF(o, s16, 0x34) = 6;
                AF(o, s32, 0x1C) = 0x1E;
            }
        }
        p = AF(o, u8 *, 0xD0);
        AF(p, s16, 0xFC) += 0x40;
        p = AF(o, u8 *, 0xD4);
        AF(p, s16, 0xFC) += 0x40;
        Chain_9C(o);
        break;
    case 10:
        p = AF(o, u8 *, 0xCC);
        AF(p, s16, 0xA) -= 0x30;
        if (--AF(o, s32, 0x1C) <= 0) {
            AF(o, s32, 0x1C) = 2;
            AF(o, u16, 0x34)++;
        }
        p = AF(o, u8 *, 0xD0);
        AF(AF(p, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        Chain_9C(o);
        break;
    case 11:
        p = AF(o, u8 *, 0xCC);
        AF(p, s16, 0xA) -= 0x30;
        if (--AF(o, s32, 0x1C) <= 0) {
            AF(o, s16, 0x34) = 4;
            AF(o, s32, 0x1C) = 2;
        }
        AF(AF(p, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        Chain_9C(o);
        break;
    }
}

void func_sc06_018_80192768(StageActor *o) {
    u8 *obj;
    u8 *t;
    s32 i;
    s32 r;
    s32 a;
    s32 q;
    s32 b;
    switch (o->stateCount) {
    case 0:
        o->timer = 0x1E;
        o->stateCount++;
        break;
    case 1:
        o->reactMode = 0xA;
        obj = (u8 *)SpawnProp(0x23);
        if (obj != 0) {
            AF(obj, s16, 6) = (u16)o->pos[0].h.i - rand() % 224 + 0x10;
            AF(obj, s16, 0xA) = (u16)o->pos[1].h.i - rand() % 320;
            AF(obj, s16, 0xE) = (u16)o->pos[2].h.i - 0x28;
            AF(obj, s32, 0x18) = 0;
            AF(obj, s32, 0x14) = 0;
            AF(obj, s32, 0x10) = 0;
            AF(obj, s16, 0x34) = (rand() & 0x17FF) + 0x1800;
            PlaySoundId(0xAD7, 0);
        }
        if (--o->timer == 0) {
            obj = (u8 *)o->ext0;
            o->stateCount++;
            if (obj != 0) {
                AF(obj, u16, 0x5C) |= 1;
                if (o->link->workF4 != 0) {
                    AF(obj, s16, 0x76) = -0x3E8;
                } else {
                    AF(obj, s16, 0x76) = -0x1F4;
                }
                AF(obj, s16, 0x5E) = 2;
                o->ext0 = 0;
            }
        }
        break;
    case 2:
        if (o->link->workF4 != 0) {
            u8 *p;
            PlaySoundId(0xAD6, 0);
            p = (u8 *)SpawnActorArg(0x33, 3, o);
            if (p != 0) {
                AF(p, s16, 0x12) = -3;
                AF(p, s16, 0x16) = -0x10;
                AF(p, s16, 0x1A) = -4;
                AF(p, u16, 6) -= 0x140;
            }
            p = (u8 *)SpawnActorArg(0x33, 2, o);
            if (p != 0) {
                AF(p, s16, 0x12) = 3;
                AF(p, s16, 0x16) = -0x10;
                AF(p, s16, 0x1A) = -4;
                AF(p, u16, 6) -= 0x140;
            }
            p = (u8 *)SpawnActorArg(0x32, 2, o);
            if (p != 0) {
                AF(p, s16, 0x12) = 0;
                AF(p, s16, 0x16) = -0x10;
                AF(p, s16, 0x1A) = -4;
                AF(p, u16, 6) -= 0x140;
            }
            i = 0;
            do {
                obj = (u8 *)SpawnActor(0x281, o);
                if (obj != 0) {
                    AF(obj, s32, 0x1C) = 2;
                    r = rand();
                    a = AF(obj, u16, 6) - 0x30;
                    AF(obj, u16, 6) = a - r % 320;
                    q = rand(); b = AF(obj, u16, 0xA) - 0x20; AF(obj, u16, 0xA) = b - q % 256;
                    AF(obj, s16, 0x12) = (rand() & 0x1F) - 0x10;
                    AF(obj, s16, 0x16) = -((rand() & 0xF) + 0x10);
                    AF(obj, s16, 0x1A) = (rand() & 0x1F) - 0x10;
                }
                i++;
            } while (i < 8);
            GainStat0FromActor(o);
            t = (u8 *)o->link->ext0;
            if (t != 0) {
                obj = t;
                AF(obj, s16, 0x76) = -0x3E8;
                AF(obj, s16, 0x5E) = 2;
                AF(obj, u16, 0x5C) |= 1;
            }
            FreeActor(o->link);
            FreeActor(o);
        } else {
            i = o->model->rot.vy;
            InitModel(o->model, &D_sc06_018_801D233C);
            o->model->rot.vy = i;
            AF(o, s16, 0xAE) = -1;
            o->stateCount++;
        }
        break;
    }
    func_sc06_018_8018D654(o);
}

void func_sc06_018_80192B60(StageActor *o) {
    u8 *obj;
    u8 *t;
    s32 i;
    s32 r;
    s32 a;
    s32 q;
    s32 b;
    switch (o->stateCount) {
    case 0:
        o->timer = 0x1E;
        o->stateCount++;
        break;
    case 1:
        o->reactMode = 0xA;
        obj = (u8 *)SpawnProp(0x23);
        if (obj != 0) {
            AF(obj, s16, 6) = (u16)o->pos[0].h.i + rand() % 224 + 0x10;
            AF(obj, s16, 0xA) = (u16)o->pos[1].h.i - rand() % 320;
            AF(obj, s16, 0xE) = (u16)o->pos[2].h.i - 0x28;
            AF(obj, s32, 0x18) = 0;
            AF(obj, s32, 0x14) = 0;
            AF(obj, s32, 0x10) = 0;
            AF(obj, s16, 0x34) = (rand() & 0x17FF) + 0x1800;
            PlaySoundId(0xAD7, 0);
        }
        if (--o->timer == 0) {
            obj = (u8 *)o->ext0;
            o->stateCount++;
            if (obj != 0) {
                if (o->parent->workF4 != 0) {
                    AF(obj, s16, 0x76) = -0x3E8;
                } else {
                    AF(obj, s16, 0x76) = -0x1F4;
                }
                AF(obj, s16, 0x5E) = 2;
                AF(obj, u16, 0x5C) |= 1;
                o->ext0 = 0;
            }
        }
        break;
    case 2:
        if (o->parent->workF4 != 0) {
            u8 *p;
            PlaySoundId(0xAD6, 0);
            p = (u8 *)SpawnActorArg(0x33, 3, o);
            if (p != 0) {
                AF(p, s16, 0x12) = -3;
                AF(p, s16, 0x16) = -0x10;
                AF(p, s16, 0x1A) = -4;
                AF(p, u16, 6) += 0x140;
            }
            p = (u8 *)SpawnActorArg(0x33, 2, o);
            if (p != 0) {
                AF(p, s16, 0x12) = 3;
                AF(p, s16, 0x16) = -0x10;
                AF(p, s16, 0x1A) = -4;
                AF(p, u16, 6) += 0x140;
            }
            p = (u8 *)SpawnActorArg(0x32, 2, o);
            if (p != 0) {
                AF(p, s16, 0x12) = 0;
                AF(p, s16, 0x16) = -0x10;
                AF(p, s16, 0x1A) = -4;
                AF(p, u16, 6) += 0x140;
            }
            i = 0;
            do {
                obj = (u8 *)SpawnActor(0x281, o);
                if (obj != 0) {
                    AF(obj, s32, 0x1C) = 2;
                    r = rand();
                    a = AF(obj, u16, 6) + 0x30;
                    AF(obj, u16, 6) = a + r % 320;
                    q = rand(); b = AF(obj, u16, 0xA) - 0x20; AF(obj, u16, 0xA) = b - q % 256;
                    AF(obj, s16, 0x12) = (rand() & 0x1F) - 0x10;
                    AF(obj, s16, 0x16) = -((rand() & 0xF) + 0x10);
                    AF(obj, s16, 0x1A) = (rand() & 0x1F) - 0x10;
                }
                i++;
            } while (i < 8);
            GainStat0FromActor(o);
            t = (u8 *)o->parent->ext0;
            if (t != 0) {
                obj = t;
                AF(obj, s16, 0x76) = -0x3E8;
                AF(obj, s16, 0x5E) = 2;
                AF(obj, u16, 0x5C) |= 1;
            }
            FreeActor(o->parent);
            FreeActor(o);
        } else {
            i = o->model->rot.vy;
            InitModel(o->model, &D_sc06_018_801D233C);
            SetScript(o, &D_sc06_018_801D11F0);
            o->model->rot.vy = i;
            AF(o, s16, 0xAE) = -1;
            o->stateCount++;
        }
        break;
    }
    func_sc06_018_8018D654(o);
}

void func_sc06_018_80192F64(u8 *o) {
    SV8 b0;
    SV8 b;
    SV8 c;
    SV8 a;
    u8 *p;
    s32 i;
    s32 n;
    s32 s;
    u16 t;
    switch (AF(o, u16, 0x34)) {
    case 0:
        p = (u8 *)SpawnActorArg(0x318, 8, o);
        if (p != 0) {
            AF(o, u16, 0x34) = (AF(o, u16, 0xFC) & 1) + 1;
            AF(AF(p, u8 *, 0x20), u16, 0x12) = AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x800;
            AF(p, s32, 4) -= AF(o, s32, 0xDC);
            AF(o, u8 *, 0xCC) = p;
            AF(p, u16, 0xFC) = AF(o, u16, 0x36);
        }
        break;
    case 1:
        AF(o, s16, 0xE) -= 4;
        if (AF(o, s16, 0x8C) - AF(o, s16, 0xE) >= AF(o, s16, 0xFC)) {
            AF(o, u16, 0x34) = 2;
        }
        break;
    case 2:
        AF(o, s16, 0xE) += 4;
        if (AF(o, s16, 0xE) - AF(o, s16, 0x8C) >= AF(o, s16, 0xFC)) {
            AF(o, u16, 0x34) = 1;
        }
        break;
    }
    p = AF(o, u8 *, 0xCC);
    if (p == 0) {
        AF(o, u16, 2)++;
        return;
    }
    AF(p, s32, 0xC) = AF(o, s32, 0xC);
    a.x = 0;
    a.y = AF(o, u16, 0xDE);
    UpdateModelZYX(o);
    func_sc06_018_8018F060(o, 0, &a, 0x81818);
    func_sc06_018_8018F060(o, 1, &a, 0x204040);
    b0.x = AF(o, u16, 6);
    b0.y = b.y = AF(o, u16, 0xA);
    b0.z = b.z = AF(o, u16, 0xE);
    p = &g_Actors;
    s = rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) >> 4;
    for (i = 0; i < 0x60; p += 0x10C, i++) {
        t = AF(p, u16, 0);
        if (t != 0 && t != 0x25D && t != 0x318 && (AF(p, u16, 0x5C) & 0x8000) && AF(p, u16, 0x5E) != 0x1D
            && !(AF(p, u16, 0xAE) & 1)) {
            n = ((s16)AF(o, u16, 0xDE) >> 8) + 1;
            b.x = b0.x;
            c.y = b.y;
            c.z = b.z;
            do {
                c.x = b.x - s;
                if (PathHitsModelTwoCells(AF(p, s32, 0x20), AF(p, s32, 0x58), &b, &c) == 1) {
                    AF(p, s16, 0x60) = 0xA;
                    AF(p, u16, 0x5C) |= 1;
                    n = 1;
                    AF(p, s16, 0x62) = AF(AF(p, u8 *, 0x20), u16, 0x12) - 0x800;
                    AF(p, s16, 0x5E) = 0x1D;
                }
                n--;
                b.x -= s;
            } while (n != 0);
        }
    }
    n = ((s16)AF(o, u16, 0xDE) >> 8) + 1;
    b.x = b0.x;
    c.y = b.y;
    c.z = b.z;
    do {
        c.x = b.x - s;
        if (SegmentHitsPlayer(o, &b, &c) == 1) {
            n = 1;
            g_PlayerHitDamage[0] = 0x96; g_PlayerHitDamage[-1] = 0x4018;
        }
        n--;
        b.x -= s;
    } while (n != 0);
}

void func_sc06_018_801932EC(StageActor *arg0) {
    if (arg0->reactMode != 0) {
        if (--arg0->reactMode == 0) {
            arg0->hitCode = 0;
        }
    }
    D_sc06_018_801D12C8[arg0->state]();
}

void func_sc06_018_8019334C(void) {
}

void func_sc06_018_80193354(void) {
}

void func_sc06_018_8019335C(u8 *o) {
    s32 v;
    s32 t;

    v = MoveCollide(o);
    if (v != 0) {
        AF(o, s16, 0xFC) = -AF(o, s16, 0xFC);
        AF(o, s16, 0xFE) = -AF(o, s16, 0xFE);
        AF(o, s16, 0x100) = -AF(o, s16, 0x100);
        if (v & 0x8000) {
            AF(o, s32, 0x10) = -AF(o, s32, 0x10);
            AF(o, s32, 0x18) = -AF(o, s32, 0x18);
        }
        if (v & 0x6000) {
            AF(o, s32, 0x14) = -8;
        }
    }
    AF(AF(o, u8 *, 0x20), s16, 0x10) += AF(o, s16, 0xFC);
    AF(AF(o, u8 *, 0x20), s16, 0x12) += AF(o, s16, 0xFE);
    AF(AF(o, u8 *, 0x20), s16, 0x14) += AF(o, s16, 0x100);
    t = --AF(o, s32, 0x1C);
    if (t < 0x10 && t == 0) {
        FreeActor(o);
    }
}

void func_sc06_018_80193458(StageActor *o) {
    u8 *c;
    AF(o, s16, 0xE8) = o->reactMode * 16 + 0x100;
    switch (o->stateCount) {
    case 0:
        c = (u8 *) SpawnActorArg(0x318, 6, o);
        if (c != 0) {
            AF(c, s16, 6) -= 0x30;
            AF(c, s16, 0xA) -= 0xF0;
            AF(AF(c, u8 *, 0x20), s16, 0x10) = 0xC00;
            AF(AF(c, u8 *, 0x20), s16, 0x12) = 0x400;
            o->ext0 = c;
            o->stateCount++;
        }
        break;
    case 1:
        break;
    case 2:
        o->model->rot.vy += 0x40;
        if (o->model->rot.vy == 0x1000) {
            c = (u8 *)o->ext0;
            o->hitMask = 0;
            o->stateCount++;
            AF(c, s16, 0x34)++;
        }
        break;
    }
    func_sc06_018_8018D654(o);
}

void func_sc06_018_80193580(void) {
}
