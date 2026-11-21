#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_006_8017BE9C(void) {
}

void func_sc03_006_8017BEA4(void) {
}

void func_sc03_006_8017BEAC(void) {
}

void func_sc03_006_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_006_8018FFE4[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void FreeEffect();
extern s32 SpawnEffect();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_006_8018FFCC;
extern void (*D_sc03_006_8018FFEC[])();
extern u8 D_sc03_006_8018FFD8;
extern void (*D_sc03_006_80190104[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void AddMaxBp();
extern void AddBp();
extern void PlaySoundId();
extern void func_sc03_006_8017C294();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern void InitModel();
extern s32 AllocActorModel();
extern void StartEvent();
extern s32 IsEventDone();
extern void EndEvent();
extern void SetVar();
extern void func_8002955C();
extern s32 func_8002953C();
extern void GiveItem();
extern void FreeActor();
extern void (*D_sc03_006_8019015C[])();
extern void PlaySe();
extern void func_sc03_006_8017D408();
extern void (*D_sc03_006_80190170[])();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern void (*D_sc03_006_80190184[])();
extern void func_800D22E4();
extern void func_sc03_006_8017DB00();
extern void (*D_sc03_006_80190460[])();
extern u8 D_sc03_006_80190450[];
extern void SetFlag();
extern s32 SpawnActorArg();
extern u8 g_Status;
extern u8 D_sc03_006_80190430;
extern s32 IsOnScreen();
extern void FreeShadow();
extern void (*D_sc03_006_80190534[])();
extern u8 D_sc03_006_80190484;
extern void SetPlayerMotion();
extern void BumpSub2Copy();
extern void SpawnObj68();
extern s32 FindObj68ByKind();
extern void SetObjByte1C7();
extern s32 GetTechnique();
extern u8 D_sc03_006_8019052C;
extern void StartPlayerActionScript();
extern s32 g_PlayerActionScript;
extern s16 D_80126B0C;
extern void (*D_sc03_006_8019057C[])();
extern void UpdateObj68Matrix();
extern s16 D_sc03_006_80190574;
extern s16 D_sc03_006_80190576;
extern s16 D_sc03_006_80190578;
extern u8 D_sc03_006_801F1068;
extern s32 AllocModel6To16();
extern void ObjLocalToWorld16();
extern void SetObjPush();
extern void NextObjState();
extern u8 D_sc03_006_80190544;
extern u8 D_sc03_006_8019058C;
extern u8 D_sc03_006_801F16C0;
extern void AddObj68PushSetVel();
extern void MoveObj68();
extern void StartCameraShake();
extern void func_8001C810();
extern void SpawnObj68On();
extern void FreeObj68();
extern void (*D_sc03_006_801905C0[])();
extern void func_sc03_006_8017F454();
extern u8 D_800DF2E0;
extern u8 D_sc03_006_801905A0;
extern void SetObjTimer();
extern s32 TickObjTimer();
extern void func_sc03_006_8017F510();
extern void (*D_sc03_006_801907B8[])();
void func_sc03_006_801810B4(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc03_006_801907C0[])();
void func_sc03_006_801810DC(void);
extern void (*D_sc03_006_801907C8[])();
extern void func_800D1E28();
extern void (*D_sc03_006_801907D4[])();
void func_sc03_006_80181104(void);
extern void func_800D1EBC();
extern void (*D_sc03_006_801907E0[])();
extern u8 D_sc03_006_801907EC;
extern u8 D_sc03_006_801907F8;
extern u8 D_sc03_006_801907FC;
extern void func_sc03_006_801811CC();
extern void (*D_sc03_006_80190810[])();
extern void func_sc03_006_80181228();
extern void (*D_sc03_006_80190824[])();
extern void (*D_sc03_006_80190844[])();
extern void (*D_sc03_006_801908B4[])();
extern u8 D_sc03_006_801F7618;
extern void func_sc03_006_80181FC4();
extern void (*D_sc03_006_80190C34[])();
extern void InitSpriteKind2();
extern s32 AllocActorSprite();
extern s32 func_sc03_006_801827E8();
extern void (*D_sc03_006_80190D34[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc03_006_8018C90C;
extern u8 D_sc03_006_80190CAC;
extern s32 * func_sc03_006_80182E4C();
extern void RunScript();
extern s32 D_sc03_006_80190D28[];
extern void (*D_sc03_006_80190D44[])();
extern void (*D_sc03_006_80190F70[])();
extern void (*D_sc03_006_801910DC[])();
extern void (*D_sc03_006_801C5B6C[])();
extern void (*D_sc03_006_801C5BD4[])();
extern void (*D_sc03_006_801C5C08[])();
extern void (*D_sc03_006_801C5C58[])();
extern void (*D_sc03_006_801C9794[])();
extern s32 GetFlag();
extern void RejectSpawn();
extern u8 D_sc03_006_801C9484;
extern s32 * func_sc03_006_801874BC();
extern s32 D_sc03_006_801C94EC[];
extern s32 D_sc03_006_801C96B8;
extern s32 D_sc03_006_801C96BC;
extern s32 D_sc03_006_801C96D0;
extern s32 D_sc03_006_801C96E4;
extern s32 D_sc03_006_801C9750;
extern s32 D_sc03_006_801C9634[];
extern s32 D_sc03_006_801C95B0[];
extern s32 UpdateScript();
extern void SetProgress();
extern void UploadFlagImages();
extern s32 func_sc03_006_80187264();
extern void AddMoney();
extern s32 func_80174764();
extern void (*D_sc03_006_801C97BC[])();
extern u8 D_sc03_006_801C94B8;
extern u8 D_sc03_006_801C9C5C;
extern u8 D_sc03_006_801C9E7C;
extern u8 D_sc03_006_801C9C6C;
extern u8 D_sc03_006_801C9D74;
extern s32 func_sc03_006_80189CD4();
extern void (*D_sc03_006_801E01A8[])();
extern void (*D_sc03_006_801E01F0[])();
extern void (*D_sc03_006_801F1714[])();
extern void (*D_sc03_006_801F2594[])();
void func_sc03_006_8018C118(u8 *arg0);
extern void (*D_sc03_006_801F25A4[])();
void func_sc03_006_8018C2CC(u8 *arg0);
extern void (*D_sc03_006_801F25AC[])();
void func_sc03_006_8018C3A4(u8 *arg0);
extern void (*D_sc03_006_801F25B8[])();
void func_sc03_006_8018C4BC(u8 *arg0);

void func_sc03_006_8017BEBC(u8 *arg0) {
    D_sc03_006_8018FFE4[AF(arg0, u16, 2)]();
}

void func_sc03_006_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc03_006_8018FFCC, 0xFD);
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

void func_sc03_006_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_006_8017C150(u8 *arg0) {
    D_sc03_006_8018FFEC[AF(arg0, u16, 2)]();
}

void func_sc03_006_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_006_8018FFD8, 0x18);
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

void func_sc03_006_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern s32 * func_sc03_006_80182E4C();
extern void ResetScriptVM();
extern void CallActionHandler();
extern s32 DistSqToPlayer();

extern void HidePlayerScene();
extern void SetPlayerFlag7E2();
extern u8 D_sc03_006_80190214;
extern s32 MoveCollide();
extern void UpdateModelZYX();
extern void SetLocalVelocity();

extern void ClearTimeChime();
extern void func_800D0C48();

extern s16 D_801270C0;
extern void (*D_sc03_006_801908EC[])();
extern s32 IsActorFar();
extern void (*D_sc03_006_801C5B08[])();
extern void func_sc03_006_80185D20();
extern s32 TickTimer();
extern s32 func_sc03_006_80185E8C();
extern s32 StopWithGravity();
extern s32 SetForwardVelocity();
extern u8 D_sc03_006_801C8CBC;
extern u8 D_800D3918;
extern s32 func_sc03_006_80185BD4();
extern u8 D_sc03_006_801C8DB4;
extern u8 D_sc03_006_801C8E8C;
extern u8 D_sc03_006_801C8F64;
extern s32 HeadingToTarget();
extern u8 D_sc03_006_801C93D4;
extern void TakeDamageAndRecoil();
extern u8 D_sc03_006_801C5B4C;
extern u8 D_sc03_006_801C5B58;
extern u8 D_sc03_006_801C9454;
extern u8 D_sc03_006_801C5A58;
extern void HideModel();
extern s32 func_sc03_006_801861D8();
extern void FreeProp();
extern void MoveProp();
extern void func_sc03_006_8018654C();
extern u8 D_sc03_006_801D76C0;
extern u8 D_sc03_006_801DF924;
extern u8 D_sc03_006_801DFF34;
extern u8 D_sc03_006_801DFB14;
extern s32 MoveCollidePassable();
extern void func_sc03_006_8018A3D4();
extern void DespawnActor();
extern s16 g_PlayerAbsorbCounter;
extern u8 D_sc03_006_801E7D24;
extern u8 D_sc03_006_801E81AC;
extern s32 DistSqToTarget();
extern u8 D_sc03_006_801E8104;
extern void func_sc03_006_8018B1B4();
extern u8 D_sc03_006_801E7EC4;
extern void SpawnHeadMarker();
extern void (*D_sc03_006_801E0188[])();
extern u8 D_sc03_006_801E01B0;
extern void func_8001CA88();
extern s32 func_80143994();
extern u8 D_sc03_006_801E01FC;
extern s32 ActorSegmentDamagesPlayer();
extern void func_sc03_006_8018B224();
extern void ZeroFill();
extern s32 func_sc03_006_8018C0F0();
extern s32 func_sc03_006_8018C2A4();
extern s32 func_sc03_006_8018C37C();
extern s32 func_sc03_006_8018C494();

extern s32 GetVar();
extern s32 GetProgress();
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
extern void SetCameraUpdate();
extern void SnapCamera();
extern u8 D_sc03_006_80190818;
extern s32 func_800D0CE0();
extern u16 D_800B99DA;
extern u8 D_sc03_006_801E867C;
extern u8 D_sc03_006_80190BF4[];
extern s32 QueueImage();
extern void func_sc03_006_80182F4C();
extern u8 D_sc03_006_80190D7C;
extern u8 D_sc03_006_801F2108;
extern void PlaceObject();
extern u8 D_sc03_006_801F9F30;
extern s32 func_sc03_006_80183118();
extern void SpawnActor();
extern u8 D_sc03_006_80190D9C;
extern s32 GroundDistSqTo();
extern u8 D_sc03_006_80190DA4;
extern s32 FindActorByKind();
extern void func_800D0CA0();
extern u8 D_sc03_006_801910C0;
extern u8 D_sc03_006_801BAEF0;
extern u8 D_sc03_006_801BD274;
extern void (*D_sc03_006_801BFF04[])();
extern void func_sc03_006_801846D0();
extern u16 D_sc03_006_801BFE40;
extern s32 SpawnShadow();
extern u16 D_sc03_006_801BFE42;
extern u8 g_Daytime;
extern u8 D_sc03_006_801C5614;
extern s32 func_sc03_006_80184300();
extern void DropItem();
extern void (*D_sc03_006_801CA170[])();
extern void func_sc03_006_80188A2C();
extern u8 D_sc03_006_801C9EEC;
extern s32 D_sc03_006_801CAE68;
extern u8 D_sc03_006_801F7730;
extern void InitMime();
extern s32 func_sc03_006_801888A8();
extern void StepMime();
extern u8 D_sc03_006_801C9F44;
extern u8 D_sc03_006_801CA0E8;
extern void SetReactionStep();
extern u8 D_sc03_006_801C9FFC;
extern u8 D_sc03_006_801CA030;
extern void func_sc03_006_80188978();
extern u8 D_sc03_006_801C9FD4;
extern void (*D_sc03_006_801D2B4C[])();
extern void func_sc03_006_8018A05C();
extern u8 D_sc03_006_801D477C;
extern u8 D_sc03_006_801D78A8;
extern void SetModelParts();
extern s32 TurnStepToTarget();
extern void func_sc03_006_80189B3C();
extern u8 D_sc03_006_801D612C;
extern u8 D_sc03_006_801D7D90;
extern s32 func_sc03_006_8018A168();
extern u8 D_sc03_006_801D7F28;
extern s32 MoveOnGround();
extern void RestorePrevPos();
extern void (*D_sc03_006_801D7F38[])();
extern void GainStat0FromActor();
extern s32 func_sc03_006_8018A698();
extern s32 TargetInSight();
void func_sc03_006_8018A4B4(StageActor *arg0);
extern s32 D_sc03_006_801D7F0C;
extern void ShowModel();
extern void func_sc03_006_8018A2F8();
extern void MoveObject();
extern void func_sc03_006_8018A384();
extern s32 func_sc03_006_8018A598();
extern void SetPlayerMotionIndex();
extern void func_sc03_006_8018C1C4();
extern u8 D_sc03_006_801F2528;
extern s32 func_sc03_006_8018C43C();

extern u8 D_sc03_006_801BAE98;
extern u8 D_sc03_006_801C553C;
extern u8 D_sc03_006_801C554C;
extern s32 func_sc03_006_801887B0();
extern u8 D_sc03_006_801D7A58;
extern void func_sc03_006_80189E1C();

extern u8 D_sc03_006_801D7F10;
extern void StopMotion();
extern void SpawnKind1C();

extern u8 D_sc03_006_801D2A40;
extern u8 D_sc03_006_801D2A74;
extern u8 D_sc03_006_801D7E98;
extern u8 D_sc03_006_801D7ECC;
extern void SnapToGround();



extern u8 D_sc03_006_801BFE74;




extern void *g_PlayerModel;
extern u8 D_sc03_006_801C5954;
extern u8 D_sc03_006_801C5A68;

void func_sc03_006_8018C58C();

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s16 D_80126B62;
extern s32 g_PlayerPosX;
extern u16 g_Actors;
extern s16 D_800B9A08;
extern u8 D_sc03_006_801900B4;
extern u8 D_sc03_006_80190050[];
extern s32 PosDist();
extern void TakePlayerControl();
extern void SetShapeCircle();
extern u8 D_sc03_006_801F73F0;
extern u8 D_sc03_006_801F73F1;
extern u8 D_sc03_006_801F73F2;
extern u8 D_sc03_006_801F73F4;
extern u8 D_sc03_006_801F73F5;
extern u8 D_sc03_006_801F73F6;
extern s32 D_sc03_006_801F75F4;
extern s32 D_sc03_006_801F75F8;
extern s32 D_sc03_006_801F75FC;
extern s32 AllocSpriteInRange();
extern void func_8001CD50();
extern u16 D_sc03_006_801E91DC;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
extern s8 D_sc03_006_80190130[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern void DrawPrimG4Mtx();
extern WMtx GsIDMATRIX;
extern void DrawPrimLineG2Mtx();

typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern s32 D_sc03_006_801F7600;
extern s32 D_sc03_006_801F760C;
extern s32 D_sc03_006_801F7614;
extern void func_sc03_006_8017E634();
extern void func_sc03_006_8017E5C0();
extern s32 TurnStepToward();
extern u8 D_sc03_006_8019018C;
extern void StepSpriteAnim();
extern s32 SpawnPropFrom();
extern void func_sc03_006_8018BFD0();

typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
extern u8 g_ClockHour;
extern u8 D_800AF630;
extern void SetState();
extern void func_sc03_006_80182080();
typedef struct { s32 x, y, z, pad; } V4;
extern s32 func_sc03_006_80189C68();

extern u8 D_sc03_006_80190C14;
extern u8 D_sc03_006_80190C24;
extern void ArmCrest();
extern s32 GetPlayerAction();
extern void func_80175454();
extern s32 GetPlayerByte1C7();
extern s32 func_sc03_006_80182794();
extern void func_sc03_006_801828B0();
extern s32 func_sc03_006_801829FC();
extern void EndPlayerAction();
extern void func_8002959C();
extern void func_80175414();

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
extern u8 D_sc03_006_8019001C;
extern u8 D_sc03_006_80190058;
extern u8 D_sc03_006_801E91B4;
extern u8 D_sc03_006_801F7380;
extern u8 D_sc03_006_801F738C;
extern u8 D_sc03_006_801F738D;
extern u8 D_sc03_006_801F738E;
extern u8 D_sc03_006_801F739C;
extern u8 D_sc03_006_801F739D;
extern u8 D_sc03_006_801F739E;
extern u8 D_sc03_006_801F73AD;
extern u8 D_sc03_006_801F73AE;
extern u8 D_sc03_006_801F73B0;
extern u8 D_sc03_006_801F73B1;
extern u8 D_sc03_006_801F73B2;
extern u8 D_sc03_006_801F73B4;
extern u8 D_sc03_006_801F73B5;
extern u8 D_sc03_006_801F73B6;
extern u8 D_sc03_006_801F73BC;
extern u8 D_sc03_006_801F7430;
extern s32 D_sc03_006_801903F4;
extern void func_sc03_006_8017E710();
extern s32 DistSq();
extern void StartEventKeepPlayer();
extern s32 TargetInFront();
extern void UpdateModelRot();
extern s32 D_sc03_006_801C5BB4[];
extern SV_8E8A0 D_sc03_006_801C5C18[][4];

typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc03_006_8018450C();
extern s32 UndoMoveIntoObject();

extern u8 D_sc03_006_801DFC6C;

extern u8 D_sc03_006_80190324;
extern u8 D_sc03_006_80190358;
extern s32 D_sc03_006_801F7604;
extern s32 D_sc03_006_801F7608;

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern s32 func_sc03_006_8018A6F4();
extern s32 HeadingTo();
extern void AngleToVec2();
extern s32 CollidePath();
extern s32 func_sc03_006_80188AF4();

extern u16 g_PlayerX;
extern u16 D_80126B66;
extern s32 PlayerFlag80();
extern void HitPlayer();

extern void DamageActorsNear();
extern s32 MoveCollidePassableAt();
extern u8 D_sc03_006_801C5B64;
extern void SpawnKind1CAt();
extern s32 func_sc03_006_80185EFC();
extern s32 func_sc03_006_80185F5C();
extern u16 g_PlayerTarget;
extern u16 D_80126CB6;
extern u16 D_80126CB8;
extern s32 MoveOnGroundOfs();
extern s16 g_PlayerHitKind;
extern u8 D_sc03_006_801E0170;
extern SV8 D_sc03_006_801E0180;
extern s32 SpawnActorFromDef();
extern u8 D_sc03_006_801E82FC;
extern u8 D_sc03_006_801E01A0;

extern s32 PlayerFlag400();
extern s32 func_sc03_006_80186334();
extern void func_80020DA4();
extern void func_80020F34();
extern SV8 D_sc03_006_801C5B74[];
extern s32 PathHitsModel();

extern u8 D_sc03_006_801CA074;
extern u8 D_sc03_006_801CA084;
extern u8 D_sc03_006_801CA094;
extern void func_sc03_006_8018893C();
extern u8 D_sc03_006_801C9F04;
extern s32 func_sc03_006_80188C18();
extern u8 D_sc03_006_801CA0A4;


extern s32 SquareRoot0();
extern s32 D_sc03_006_801CA0E4[];
extern s32 func_sc03_006_80188A94();
extern u8 D_sc03_006_801C9F24;

extern s32 func_sc03_006_80189E88();
extern void func_sc03_006_80189DE0();
extern s32 func_80135A4C();

extern s32 D_sc03_006_801F7384;
extern s32 D_sc03_006_801F7388;
extern s32 D_sc03_006_801F7390;
extern s32 D_sc03_006_801F7394;
extern s32 D_sc03_006_801F7398;
extern s32 D_sc03_006_801F73A0;
extern s32 D_sc03_006_801F73A4;
extern s32 D_sc03_006_801F73A8;

void func_sc03_006_8017C294(u8 *arg0, s32 arg1_0) {
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
    *(s32 *)&D_sc03_006_801F7380 = D_sc03_006_801F7390 = D_sc03_006_801F73A0 = v.vx;
    D_sc03_006_801F7384 = D_sc03_006_801F7394 = D_sc03_006_801F73A4 = v.vy;
    D_sc03_006_801F7388 = D_sc03_006_801F7398 = D_sc03_006_801F73A8 = v.vz;
}

void func_sc03_006_8017C3C4(StageActor *arg0) {
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
        if (SetupActor(arg0, &D_sc03_006_8019001C) == 0) {
            return;
        }
        func_8001C810(arg0->model, &D_sc03_006_801E91B4);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc03_006_80190058);
        arg0->model->flags |= 0x20;
        arg0->model->unk80 = &D_sc03_006_801F7380;
        arg0->model->unk04 |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext0 = o;
        p = &D_sc03_006_801F73B0;
        func_8001CD50(o, p);
        D_sc03_006_801F73B2 = 0x80;
        p[0] = 0x80;
        D_sc03_006_801F73B1 = 0xE0;
        D_sc03_006_801F73B5 = 0;
        D_sc03_006_801F73B4 = 0;
        D_sc03_006_801F73B6 = 0;
        SetShapeCircle(p, 0x38);
        s = (U12x9 *) &D_sc03_006_801E91DC;
        b = (U12x9 *) &D_sc03_006_801F7430;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = (u16)arg0->pos[0].h.i;
        AF(o, u16, 0xA) = arg0->pos[1].h.i -= 4;
        AF(o, u16, 0xC) = (u16)arg0->pos[2].h.i;
        AF(o, s32, 4) |= 0x50000000;
        D_sc03_006_801F73AE = 0xFF;
        D_sc03_006_801F73BC = 0xFF;
        D_sc03_006_801F739E = 0xFF;
        D_sc03_006_801F739C = 0xFF;
        D_sc03_006_801F738E = 0xFF;
        D_sc03_006_801F738C = 0xFF;
        D_sc03_006_801F73AD = 0x80;
        D_sc03_006_801F739D = 0x80;
        D_sc03_006_801F738D = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc03_006_801F7430;
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

void func_sc03_006_8017C750(u8 *arg0) {
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
    func_sc03_006_8017C294(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc03_006_80190050[(s16) i]) {
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
            StartEvent(arg0, &D_sc03_006_801900B4);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc03_006_8017C9C8(StageActor *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext1 = o;
        p = &D_sc03_006_801F73F0;
        func_8001CD50(o, p);
        D_sc03_006_801F73F1 = 0xFF;
        D_sc03_006_801F73F2 = 0xFF;
        p[0] = 0xFF;
        D_sc03_006_801F73F6 = 8;
        D_sc03_006_801F73F4 = 8;
        D_sc03_006_801F73F5 = 0x18;
        SetShapeCircle(p, 0x100);
        v.vx = (u16)arg0->pos[0].h.i;
        v.vy = (u16)arg0->pos[1].h.i - 0x38;
        v.vz = (u16)arg0->pos[2].h.i;
        func_800D20C0(&v, &r, 5);
        q = &D_sc03_006_801F75F4;
        q[0] = v.vx;
        D_sc03_006_801F75F8 = v.vy;
        D_sc03_006_801F75FC = v.vz;
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

void func_sc03_006_8017CB10(StageActor *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc03_006_801E91DC;
    r = AF(arg0, U12 *, 0xD8);
    p = (u8 *)arg0->message;
    o = (u8 *)arg0->ext1;
    s4 = (s16 *)arg0->model;
    if (p[1] != 0 && arg0->work108 == 0) {
        arg0->work108 = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--arg0->timer != -1) {
        func_sc03_006_8017C294(arg0, 0);
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

void func_sc03_006_8017CC90(StageActor *arg0) {
    D_sc03_006_80190104[arg0->state]();
}

void func_sc03_006_8017CCCC(void) {
    AddMaxBp((s32) &g_Player, 5);
    AddBp((s32) &g_Player, 0x270F);
    PlaySoundId(0xBFE, 0);
}

void func_sc03_006_8017CD18(StageActor *arg0) {
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
        func_sc03_006_8017C294((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    PlaySoundId(0x62E, 0);
    *temp_s2 = 0;
    arg0->timer = 0x28;
    arg0->state = (u16) (arg0->state + 1);
}

typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern u8 *g_PrimNext;
extern u32 g_WorldOtTable[2][0x1000];
extern s32 D_sc03_006_801F7790;
extern s16 D_sc03_006_801F7794;
extern s16 D_sc03_006_801F7796;
extern s16 D_sc03_006_801F7798;
extern s32 D_sc03_006_801F779C;
extern s32 D_sc03_006_801F77A8;

extern u8 D_sc03_006_801E857C;
extern s32 func_sc03_006_80184800();
extern u8 D_sc03_006_801C57D4;

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern u8 D_sc03_006_8019038C[];
extern XY D_sc03_006_801903AC[];
extern u8 D_sc03_006_8019027C;
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
extern u8 D_sc03_006_801908BC;
extern void func_sc03_006_80182C8C();
extern u16 D_sc03_006_80190C5C[];
extern u8 D_sc03_006_80190C7C;
extern u32 D_sc03_006_801F76A8;
extern u16 D_sc03_006_801F76AC[];
extern void func_sc03_006_8018584C();
extern s32 func_sc03_006_8018594C();
extern SV8 D_sc03_006_801C5A48;
extern SV8 D_sc03_006_801C5A50;
extern s32 D_sc03_006_801C5988[][16];
extern s32 SpawnPropAt();
extern u8 D_sc03_006_801C5BF4;
extern u8 D_sc03_006_801D478C;
extern void func_sc03_006_8018C090();
extern u8 D_sc03_006_801D7E70;
extern u8 D_sc03_006_801E00B4;
extern u8 D_sc03_006_801E00E8;
extern u8 D_sc03_006_801E1CA4;
extern void InitSpriteKind3();
extern void StartSpriteAnim();
extern u8 D_sc03_006_801F16C8;
extern u8 D_sc03_006_801F16D4;
extern s32 func_sc03_006_8018BF78();
extern void LocalToWorld();
extern void GetPartWorldMatrix();

void func_sc03_006_8017CE0C(StageActor *arg0) {
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

void func_sc03_006_8017CE8C(StageActor *arg0) {
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

void func_sc03_006_8017CF40(StageActor *arg0) {
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

void func_sc03_006_8017CFAC(StageActor *arg0, s32 arg1) {
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

void func_sc03_006_8017D038(StageActor *arg0, s32 arg1) {
    FreeActor(arg0, arg1);
}

void func_sc03_006_8017D058(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc03_006_8017C294(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

void func_sc03_006_8017D0AC(s32 arg0) {
    SpawnEffect(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_006_8017D0E8(u8 *arg0) {
    D_sc03_006_8019015C[AF(arg0, u16, 2)]();
}

void func_sc03_006_8017D124(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        PlaySe((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_006_8017D174(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_006_8017D408((s32) arg0);
}

void func_sc03_006_8017D1D0(u8 *arg0) {
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
    func_sc03_006_8017D408((s32) arg0);
}

void func_sc03_006_8017D254(u8 *arg0) {
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
    func_sc03_006_8017D408((s32) arg0);
}

void func_sc03_006_8017D3BC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_006_8017D408((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc03_006_8017D408(u8 *arg0) {
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
    t = D_sc03_006_80190130;
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
    t = D_sc03_006_80190130;
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
        t = D_sc03_006_80190130;
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

void func_sc03_006_8017D714(u8 *arg0) {
    D_sc03_006_80190170[AF(arg0, u16, 2)]();
}

void func_sc03_006_8017D750(u8 *arg0) {
    PlaySe((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_006_8017D790(u8 *arg0) {
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
    func_sc03_006_8017D408((s32) arg0);
}

void func_sc03_006_8017D800(u8 *arg0) {
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
    func_sc03_006_8017D408((s32) arg0);
}

void func_sc03_006_8017D88C(u8 *arg0) {
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
    func_sc03_006_8017D408((s32) arg0);
}

void func_sc03_006_8017D960(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_006_8017D408((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    FreeEffect((s32) arg0);
}

void func_sc03_006_8017D9B4(u8 *arg0) {
    D_sc03_006_80190184[AF(arg0, u16, 2)]();
}

void func_sc03_006_8017D9F0(u8 *arg0) {
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

void func_sc03_006_8017DAA4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_006_8017DB00((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc03_006_8017DB00(u8 *arg0) {
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

void func_sc03_006_8017DC70(StageActor *arg0) {
    u8 *g;

    g = &g_Status;
    if ((GetFlag(D_sc03_006_80190450[arg0->param]) & 0xFF) || (arg0->param == 4 && (u32) GetProgress() < 200)) {
        RejectSpawn(arg0);
        return;
    }
    if (AF(g, u16, 0x1A) < 300 || AF(g, u16, 0x1A) >= 1320) {
        if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc03_006_80190324) != 0) {
            arg0->hitState |= 0x10;
            SetScript(arg0, &D_sc03_006_8019018C);
            arg0->model->flags |= 0x10;
            D_sc03_006_801F7600 = arg0->origin[0] << 16;
            D_sc03_006_801F7604 = AF(arg0, s16, 0x8A) << 16;
            D_sc03_006_801F7608 = AF(arg0, s16, 0x8C) << 16;
            arg0->ext0 = SpawnShadow(arg0);
            arg0->unkFC = 0;
            arg0->timer = 0x10;
            arg0->state++;
        }
    } else if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc03_006_80190358) != 0) {
        AF(arg0, s16, 0xAE) = -4;
        arg0->ext0 = SpawnShadow(arg0);
        arg0->state = 7;
    }
}

void func_sc03_006_8017DE0C(u8 *arg0) {
    s32 r;
    s16 i;

    if (--AF(arg0, s32, 0x1C) == -1) {
        SetScript(arg0, &D_sc03_006_80190214);
        if (++AF(arg0, s16, 0x10A) & 3) {
            if (AF(arg0, s16, 0x104) == 0) {
                r = rand();
                D_sc03_006_801F760C = (AF(arg0, s16, 0x88) + (((r & 0x7F) << 3) - 0x200)) << 16;
                D_sc03_006_801F7614 = (AF(arg0, s16, 0x8C) + (((u32)(r & 0x7F00) >> 5) - 0x200)) << 16;
            } else {
                func_sc03_006_8017E634(arg0);
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0xC00;
            }
        } else {
            for (i = 0; i < 2; i++) {
                (&D_sc03_006_801F760C)[i] = (&D_sc03_006_801F7600)[i];
            }
        }
        if (AF(arg0, s16, 0x108) >= 0xD) {
            i = 2;
        } else {
            i = 8;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToward(arg0 + 4, &D_sc03_006_801F760C, AF(AF(arg0, u8 *, 0x20), s16, 0x12), i);
        func_sc03_006_8017E5C0(arg0, (s16)(-3 - AF(arg0, s16, 0x104)), 0x50);
        if (AF(arg0, s16, 0x104) != 0) {
            SpawnEffect(2, arg0, 0, 0, 0, 2, 0);
        }
        AF(arg0, s16, 0x108) = 0;
        AF(arg0, s16, 2)++;
    } else if (AF(arg0, s16, 0x102) != 0) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, AF(arg0, s16, 0x102));
    }
}

void func_sc03_006_8017E010(s32 a) {
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
        func_sc03_006_8017E710(a);
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
        if (!(AF(a, s32, 0x1C) & 3) && DistSq(a + 4, &D_sc03_006_801F760C) < 0x900) {
            AF(a, s32, 0x1C) = 1;
        }
        v = AF(a, s16, 0x106);
        if (v == 0) {
            AF(AF(a, s32, 0x20), s16, 0x12) += TurnStepToward(a + 4, &D_sc03_006_801F760C, AF(AF(a, s32, 0x20), s16, 0x12), 8);
            func_sc03_006_8017E5C0(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        } else {
            AF(AF(a, s32, 0x20), s16, 0x12) += v;
            func_sc03_006_8017E5C0(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
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
        SetScript(a, &D_sc03_006_8019018C);
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
            p = &D_sc03_006_801903F4;
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
        func_sc03_006_8017E5C0(a, -15, 0);
        func_sc03_006_8017E634(a);
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
                func_sc03_006_8017E634(a);
                if (AF(a, s16, 0x104) == 0) {
                    AF(AF(a, s32, 0x20), s16, 0x12) = HeadingToTarget(a) - 0x800;
                    go = 1;
                }
                AF(a, s16, 0x104) = k;
                func_sc03_006_8017E5C0(a, -7 - k, 0);
            }
        }
    }
    if (go) {
        SpawnEffect(2, a, 0, 0, 0, 2, 0);
    }
}

void func_sc03_006_8017E404(u8 *arg0) {
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
        SetScript(arg0, &D_sc03_006_8019018C);
        AF(arg0, s16, 0x104) = 0;
        AF(arg0, s16, 0x102) = 0xA;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
        FreeShadow(AF(arg0, u8 *, 0xCC));
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc03_006_8017E584(StageActor *arg0) {
    D_sc03_006_80190460[arg0->state]();
}

void func_sc03_006_8017E5C0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 w;

    AngleToVec2(&w, AF(AF(arg0, void *, 0x20), s16, 0x12), (s16)arg1 << 4);
    AF(arg0, s32, 0x10) = (s16)w << 12;
    AF(arg0, s32, 0x18) = (w >> 16) << 12;
    if ((s16)arg2 != 0) {
        AF(arg0, s32, 0x1C) = (s16)arg2;
    }
}

void func_sc03_006_8017E634(u8 *arg0) {
    s32 a;
    s32 i;
    s32 r;
    s32 x;
    s32 z;
    s32 pad[2];
    a = (HeadingTo(&g_PlayerPosX, &D_sc03_006_801F7600) >> 7) & 0x18;
    i = D_sc03_006_8019038C[a | ((HeadingTo(arg0 + 4, &D_sc03_006_801F7600) >> 9) & 7)];
    r = rand();
    x = AF(arg0, s16, 0x88) + D_sc03_006_801903AC[i].x - 0x100;
    D_sc03_006_801F760C = (x + ((r & 0x7F) << 2)) << 16;
    z = AF(arg0, s16, 0x8C) + D_sc03_006_801903AC[i].y - 0x100;
    D_sc03_006_801F7614 = (z + ((u32)(r & 0x7F00) >> 6)) << 16;
}


typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern s16 g_WallNormal;
extern s16 D_801152B4;
extern s32 TraceMap();

void func_sc03_006_8017E710(u8 *o) {
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

void func_sc03_006_8017E924(s32 arg0) {
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
            SetScript(arg0, (s32) &D_sc03_006_8019027C);
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

void func_sc03_006_8017E9F8(s32 arg0, s32 arg1) {
    s32 v[4];
    s32 temp_v0;
    u8 *temp_v1;

    IsEventDone(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (MoveCollide(arg0) & 0x2000)) {
        SpawnEffect(2, arg0, 0, 0, 0, 0, 0);
        SetScript(arg0, (s32) &D_sc03_006_80190214);
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

void func_sc03_006_8017EAC8(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        SetFlag((s32) D_sc03_006_80190450[arg0->param], 1);
        FreeActor(arg0);
    }
}

void func_sc03_006_8017EB20(u8 *arg0) {
    s32 temp_v0;
    u8 *g = &g_Status;

    if ((AF(arg0, s16, 0x100) == 0) && (AF(arg0, u16, 0x5E) != 0)) {
        StartEvent((s32) arg0, (s32) &D_sc03_006_80190430);
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

void func_sc03_006_8017EC18(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        arg0->state = 7;
    }
}

void func_sc03_006_8017EC58(u8 *arg0) {
    D_sc03_006_80190534[AF(arg0, u8, 0x216)]();
}

void func_sc03_006_8017EC94(s32 arg0) {
    EndScene();
    SetPlayerMotion(arg0, (s32) &D_sc03_006_80190484);
    BumpSub2Copy(arg0);
}

void func_sc03_006_8017ECD4(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x20000);
        SpawnObj68(0x16, (s32) arg0, 0, -0x80, /* extra? */ -0x10, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
        PlaySe(0x7BC);
        BumpSub2Copy((s32) arg0);
    }
}

void func_sc03_006_8017ED50(s32 arg0) {
    if (FindObj68ByKind(arg0, 0x16) == 0) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & 0xFFFDFFFF);
        SetObjByte1C7(arg0, GetTechnique() & 0xFF, 0x80);
        BumpSub2Copy(arg0);
    }
}

void func_sc03_006_8017EDB0(void) {
}

void func_sc03_006_8017EDB8(void) {
    StartPlayerActionScript((s32) &D_sc03_006_8019052C, 0x01000000);
}

s32 func_sc03_006_8017EDE0(void) {
    return g_PlayerActionScript == (s32) &D_sc03_006_8019052C;
}

s16 func_sc03_006_8017EDFC(void) {
    return D_80126B0C;
}

void func_sc03_006_8017EE0C(u8 *arg0) {
    D_sc03_006_8019057C[AF(arg0, u16, 2)]();
    if (AF(arg0, s32, 0x20) != 0) {
        UpdateObj68Matrix((s32) arg0);
    }
}

void func_sc03_006_8017EE6C(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = AF(arg0, s32, 0x4C);
    temp_v0 = AllocModel6To16();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc03_006_801F1068);
        AF(temp_v0, s16, 0x10) = 0x800;
        AF(arg0, s16, 0x60) = 0;
        ObjLocalToWorld16(temp_s2, (s32) (arg0 + 4));
        SetObjPush((s32) arg0, 0, -0x400000, 0);
        D_sc03_006_80190578 = 0x80;
        D_sc03_006_80190576 = 0x80;
        D_sc03_006_80190574 = 0x80;
        NextObjState((s32) arg0);
        if (AF(arg0, s32, 0x50) == 0) {
            AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        }
    }
}

void func_sc03_006_8017EF38(u8 *arg0) {
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
        StartCameraShake((s32) &D_sc03_006_8019058C);
        AF(arg0, s16, 0x60) = (s16) AF(temp_s0, u16, 0x18);
        func_8001C810((s32) temp_s0, (s32) &D_sc03_006_801F16C0);
        AF(temp_s0, s32 *, 0x80) = &D_sc03_006_80190544;
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

void func_sc03_006_8017F104(s32 arg0) {
    s16 temp_v0;

    temp_v0 = D_sc03_006_80190578 + 8;
    D_sc03_006_80190578 = (u16) temp_v0;
    D_sc03_006_80190576 = temp_v0;
    D_sc03_006_80190574 = temp_v0;
    if (temp_v0 >= 0x101) {
        NextObjState(arg0);
    }
}

void func_sc03_006_8017F160(s32 arg0) {
    s16 temp_v0;

    temp_v0 = D_sc03_006_80190578 - 8;
    D_sc03_006_80190578 = (u16) temp_v0;
    D_sc03_006_80190576 = temp_v0;
    D_sc03_006_80190574 = temp_v0;
    if (temp_v0 < -0x80) {
        FreeObj68(arg0);
    }
}

void func_sc03_006_8017F1BC(u8 *arg0) {
    func_sc03_006_8017F454();
    D_sc03_006_801905C0[AF(arg0, u16, 2)](arg0);
    if (AF(arg0, s32, 0x20) != 0) {
        UpdateObj68Matrix((s32) arg0);
    }
}

void func_sc03_006_8017F220(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocModel6To16();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C810(temp_v0, (s32) &D_800DF2E0);
        AF(temp_v0, s32 *, 0x80) = &D_sc03_006_80190544;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0xB0);
        AF(arg0, void *, 0x58) = (void *) ((AF(arg0, s32, 0x50) * 8) + &D_sc03_006_801905A0);
        AF(temp_v0, s16, 0x1C) = 0;
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        NextObjState((s32) arg0);
        return;
    }
    FreeObj68((s32) arg0);
}

void func_sc03_006_8017F2D0(u8 *arg0) {
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

void func_sc03_006_8017F394(u8 *arg0) {
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

void func_sc03_006_8017F454(u8 *arg0) {
    u8 *s = AF(arg0, u8 *, 0x4C);
    u8 *m = AF(arg0, u8 *, 0x20);

    AF(arg0, s32, 4) = AF(s, s32, 4);
    AF(arg0, s32, 8) = AF(s, s32, 8);
    AF(arg0, s32, 0xC) = AF(s, s32, 0xC);
    AF(m, u16, 0x12) += AF(AF(arg0, u8 *, 0x58), u16, 6);
}

s32 func_sc03_006_8017F498(s32 arg0) {
    s32 sp10[8];
    s32 temp_v0;

    GsInitCoordinate2(0, arg0);
    temp_v0 = GsGetLw(arg0, (s32) sp10);
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s32, 0x20) = 0;
    AF(arg0, s16, 0x50) = 0;
    AF(arg0, s16, 0x52) = 0;
    AF(arg0, s16, 0x54) = 0;
    return temp_v0;
}

void func_sc03_006_8017F4EC(u8 *arg0) {
    func_sc03_006_8017F510((s32) arg0, AF(arg0, s32, 8), (s32) (arg0 + 0x10));
}

void func_sc03_006_8017F510(u8 *arg0, u8 *arg1, u8 *arg2) {
    s32 sxy[3];
    SV8 box[8];
    SV8 scr[8];
    s32 ls[8];
    s32 otz;
    s32 flag;
    s32 z;
    s32 sz0, sz1, sz2, sz3;
    s32 far;
    s32 i;
    u32 j;
    u32 *ot;
    s16 vz3, vy3;
    u32 count;
    u8 *base;
    s32 n;
    u32 *bb;
    s16 x0, x1, y0, y1, z0, z1;
    s16 cx, cy, cz;
    s32 col;
    s32 r, r2, fog;
    u8 *w;
    u8 *pkt;
    u32 *o;
    u32 *face;
    u32 wx, wy, wz;




    s16 bz0, bz1;
    s32 mx0, mn0, mx1, mn1, mx, mn;
    s32 v;
    u8 *p0, *p1, *p2, *p3;
    u32 hi;
    s32 type;
    s16 tmx, tmn, umx, umn;
    s32 zm;
    s32 in;
    u32 q0, q1;
    s16 vx0, vy0, vz0, vx1, vy1, vz1, vx2, vy2, vz2, vx3;
    s32 d;
    s32 c0, c1, c2, c3;
    u32 *tex;
    u32 code;
    u32 cw;
    s32 zb;

    w = &D_800AF630;
    if (AF(arg0, s32, 0) != 0) {
        return;
    }
    far = ReadGeomScreen() + AF(arg0, s32, 0x64);
    GsGetLs(arg2, ls);
    GsSetLsMatrix(ls);
    if (D_sc03_006_801F7790 != 0) {
        cx = D_sc03_006_801F7794;
        cy = D_sc03_006_801F7796;
        cz = D_sc03_006_801F7798;
        r = D_sc03_006_801F779C;
        fog = D_sc03_006_801F77A8;
        r2 = r - 0x80;
        if (fog < 0x60) {
            {
                s32 t;
                t = (fog << 8) | 0x600000;
                col = fog | t;
            }
        } else {
            col = fog | (fog << 8) | (fog << 16);
        }
    } else {
        cx = cy = cz = 0x6000;
        r = 0x100;
        r2 = 0x80;
        fog = 0;
        col = 0;
    }
    pkt = g_PrimNext;
    x0 = cx - r;
    x1 = cx + r;
    y0 = cy - r;
    y1 = cy + r;
    z0 = cz - r;
    z1 = cz + r;
    ot = g_WorldOtTable[AF(w, u16, 0xA3D2)];
    n = AF(arg1, s32, 8);
    base = AF(arg1, u8 *, 0x10);
    bb = (u32 *)(arg1 + 0x14);
    for (i = 0; i < n; i++, bb += 5) {
        u32 *g;
        g = bb + 3;
        wx = bb[0];
        wy = g[-2];
        wz = g[-1];
        tmn = wx;
        tmx = wx >> 16;
        umn = wy;
        umx = wy >> 16;
        bz0 = wz;
        bz1 = wz >> 16;
        box[0].x = tmn;
        box[0].y = umn;
        box[1].x = tmx;
        box[1].y = umn;
        box[2].x = tmn;
        box[2].y = umn;
        box[3].x = tmx;
        box[3].y = umn;
        box[0].z = bz0;
        box[1].z = bz0;
        box[4].z = bz0;
        box[5].z = bz0;
        box[2].z = bz1;
        box[3].z = bz1;
        box[6].z = bz1;
        box[7].z = bz1;
        box[4].x = tmn;
        box[4].y = umx;
        box[5].x = tmx;
        box[5].y = umx;
        box[6].x = tmn;
        box[6].y = umx;
        box[7].x = tmx;
        box[7].y = umx;
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
        gte_stszotz(&otz);
        if (far < otz) continue;

        if (scr[0].x > scr[1].x) {
            mx0 = scr[0].x;
            mn0 = scr[1].x;
        } else {
            mn0 = scr[0].x;
            mx0 = scr[1].x;
        }
        v = scr[2].x;
        if (mx0 < v) mx0 = v;
        else if (v < mn0) mn0 = v;
        v = scr[3].x;
        if (mx0 < v) mx0 = v;
        else if (v < mn0) mn0 = v;
        if (scr[4].x > scr[5].x) {
            mx1 = scr[4].x;
            mn1 = scr[5].x;
        } else {
            mn1 = scr[4].x;
            mx1 = scr[5].x;
        }
        v = scr[6].x;
        if (mx1 < v) mx1 = v;
        else if (v < mn1) mn1 = v;
        v = scr[7].x;
        if (mx1 < v) mx1 = v;
        else if (v < mn1) mn1 = v;
        mn = mn0;
        if (mn1 < mn) mn = mn1;
        mx = mx0;
        if (mx < mx1) mx = mx1;
        if ((s16)mx < -0xA0 || (s16)mn > 0xA0) continue;

        if (scr[0].y > scr[1].y) {
            mx0 = scr[0].y;
            mn0 = scr[1].y;
        } else {
            mn0 = scr[0].y;
            mx0 = scr[1].y;
        }
        v = scr[2].y;
        if (mx0 < v) mx0 = v;
        else if (v < mn0) mn0 = v;
        v = scr[3].y;
        if (mx0 < v) mx0 = v;
        else if (v < mn0) mn0 = v;
        if (scr[4].y > scr[5].y) {
            mx1 = scr[4].y;
            mn1 = scr[5].y;
        } else {
            mn1 = scr[4].y;
            mx1 = scr[5].y;
        }
        v = scr[6].y;
        if (mx1 < v) mx1 = v;
        else if (v < mn1) mn1 = v;
        v = scr[7].y;
        if (mx1 < v) mx1 = v;
        else if (v < mn1) mn1 = v;
        mn = mn0;
        if (mn1 < mn) mn = mn1;
        mx = mx0;
        if (mx < mx1) mx = mx1;
        if ((s16)mx < -0x6E || (s16)mn > 0x6E) continue;

        face = (u32 *)g[1];
        count = g[0];
        for (j = 0; j < count; j++, face += 3) {
            hi = face[1];
            p0 = base + (hi & 0xFFFF);
            p1 = base + (hi >> 16);
            hi = face[2];
            p2 = base + (hi & 0xFFFF);
            hi = hi >> 16;
            gte_ldv3(p0, p1, p2);
            gte_rtpt();
            gte_stflg(&flag);
            if (flag & 0x7F85E000) continue;
            gte_nclip();
            type = hi & 7;
            p3 = base + (hi & 0xFFF8);
            gte_stopz(&z);
            if (z <= 0) continue;
            switch (type) {
            case 6:
            case 7: {
                gte_stsxy3c(sxy);
                gte_stsz3(&sz0, &sz1, &sz2);
                {
                    s16 pa, pb, pc;
                    pa = AF(sxy, s16, 0);
                    pb = AF(sxy, s16, 4);
                    if (pa > pb) {
                        tmx = pa;
                        tmn = pb;
                    } else {
                        tmn = pa;
                        tmx = pb;
                    }
                    pc = AF(sxy, s16, 8);
                    if (pc > tmx) tmx = pc;
                    else if (pc < tmn) tmn = pc;
                }
                if (tmx < -0xA0 || tmn > 0xA0) break;
                {
                    s16 pa, pb, pc;
                    pa = AF(sxy, s16, 2);
                    pb = AF(sxy, s16, 6);
                    if (pa > pb) {
                        umx = pa;
                        umn = pb;
                    } else {
                        umn = pa;
                        umx = pb;
                    }
                    pc = AF(sxy, s16, 10);
                    if (pc > umx) umx = pc;
                    else if (pc < umn) umn = pc;
                }
                if (umx < -0x6E || umn > 0x6E) break;
                if (sz0 > sz1) {
                    zm = sz0;
                    if (zm < sz2) zm = sz2;
                } else {
                    zm = sz1;
                    if (zm < sz2) zm = sz2;
                }
                z = zm;
                in = 0;
                q0 = AF(p0, u32, 0);
                q1 = AF(p0, u32, 4);
                vx0 = q0;
                vy0 = q0 >> 16;
                vz0 = q1;
                if (x0 < vx0 && vx0 < x1 && y0 < vy0 && vy0 < y1 && z0 < vz0 && vz0 < z1) in = 1;
                q0 = AF(p1, u32, 0);
                q1 = AF(p1, u32, 4);
                vx1 = q0;
                vy1 = q0 >> 16;
                vz1 = q1;
                if (x0 < vx1 && vx1 < x1 && y0 < vy1 && vy1 < y1 && z0 < vz1 && vz1 < z1) in = 1;
                q0 = AF(p2, u32, 0);
                q1 = AF(p2, u32, 4);
                vx2 = q0;
                vy2 = q0 >> 16;
                vz2 = q1;
                if (x0 < vx2 && vx2 < x1 && y0 < vy2 && vy2 < y1 && z0 < vz2 && vz2 < z1) in = 1;
                if (in) {
                    c0 = 0;
                    d = vx0 - cx;
                    if (d < 0) d = cx - vx0;
                    if (d < r) {
                        if (d < r2) c0 = 0x80;
                        else c0 = r - d;
                    }
                    d = vz0 - cz;
                    if (d < 0) d = cz - vz0;
                    if (r < d) c0 = 0;
                    else if (r2 < d) c0 = (c0 * (r - d)) >> 7;
                    d = vy0 - cy;
                    if (d < 0) d = cy - vy0;
                    if (r < d) c0 = 0;
                    else if (r2 < d) c0 = (c0 * (r - d)) >> 7;
                    c0 += fog;
                    if (c0 > 0x80) c0 = 0x80;
                    c1 = 0;
                    d = vx1 - cx;
                    if (d < 0) d = cx - vx1;
                    if (d < r) {
                        if (d < r2) c1 = 0x80;
                        else c1 = r - d;
                    }
                    d = vz1 - cz;
                    if (d < 0) d = cz - vz1;
                    if (r < d) c1 = 0;
                    else if (r2 < d) c1 = (c1 * (r - d)) >> 7;
                    d = vy1 - cy;
                    if (d < 0) d = cy - vy1;
                    if (r < d) c1 = 0;
                    else if (r2 < d) c1 = (c1 * (r - d)) >> 7;
                    c1 += fog;
                    if (c1 > 0x80) c1 = 0x80;
                    c2 = 0;
                    d = vx2 - cx;
                    if (d < 0) d = cx - vx2;
                    if (d < r) {
                        if (d < r2) c2 = 0x80;
                        else c2 = r - d;
                    }
                    d = vz2 - cz;
                    if (d < 0) d = cz - vz2;
                    if (r < d) c2 = 0;
                    else if (r2 < d) c2 = (c2 * (r - d)) >> 7;
                    d = vy2 - cy;
                    if (d < 0) d = cy - vy2;
                    if (r < d) c2 = 0;
                    else if (r2 < d) c2 = (c2 * (r - d)) >> 7;
                    c2 += fog;
                    if (c2 > 0x80) c2 = 0x80;
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x14) = sxy[1];
                    AF(pkt, s32, 0x20) = sxy[2];
                    tex = (u32 *)face[0];
                    code = (tex[0] & 0x2000000) | 0x34000000;
                    cw = code | c0 | (c0 << 8) | 0x800000;
                    AF(pkt, u32, 0x04) = cw;
                    cw = code | c1 | (c1 << 8) | 0x800000;
                    AF(pkt, u32, 0x10) = cw;
                    cw = code | c2 | (c2 << 8) | 0x800000;
                    AF(pkt, u32, 0x1C) = cw;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x18) = tex[2];
                    AF(pkt, u16, 0x24) = tex[3];
                    {
                        u32 *o;
                        o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                        *(u32 *)pkt = (*o & 0xFFFFFF) | ((9) << 24);
                        *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                    }
                    pkt += 0x28;
                } else {
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x10) = sxy[1];
                    AF(pkt, s32, 0x18) = sxy[2];
                    tex = (u32 *)face[0];
                    code = (tex[0] & 0xFF000000) | col;
                    AF(pkt, u32, 0x04) = code;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x14) = tex[2];
                    AF(pkt, u16, 0x1C) = tex[3];
                    {
                        u32 *o;
                        o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                        *(u32 *)pkt = (*o & 0xFFFFFF) | ((7) << 24);
                        *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                    }
                    pkt += 0x20;
                }
                break;
            }
            case 2:
            case 3: {
                gte_stsxy3c(sxy);
                gte_ldv0(p3);
                gte_rtps();
                {
                    s16 pa, pb, pc;
                    pa = AF(sxy, s16, 0);
                    pb = AF(sxy, s16, 4);
                    if (pa > pb) {
                        tmx = pa;
                        tmn = pb;
                    } else {
                        tmn = pa;
                        tmx = pb;
                    }
                    pc = AF(sxy, s16, 8);
                    if (pc > tmx) tmx = pc;
                    else if (pc < tmn) tmn = pc;
                }
                {
                    s16 pa, pb, pc;
                    pa = AF(sxy, s16, 2);
                    pb = AF(sxy, s16, 6);
                    if (pa > pb) {
                        umx = pa;
                        umn = pb;
                    } else {
                        umn = pa;
                        umx = pb;
                    }
                    pc = AF(sxy, s16, 10);
                    if (pc > umx) umx = pc;
                    else if (pc < umn) umn = pc;
                }
                gte_stflg(&flag);
                if (flag & 0x7F85E000) break;
                gte_stsz4(&sz0, &sz1, &sz2, &sz3);
                gte_stsxy(pkt + 0x20);
                {
                    s16 pd;
                    pd = AF(pkt, s16, 0x20);
                    if (pd < tmn) tmn = pd;
                    else if (tmx < pd) tmx = pd;
                }
                if (tmx < -0xA0 || tmn > 0xA0) break;
                {
                    s16 pd;
                    pd = AF(pkt, s16, 0x22);
                    if (pd < umn) umn = pd;
                    else if (umx < pd) umx = pd;
                }
                if (umx < -0x6E || umn > 0x6E) break;
                zb = sz2;
                if (zb < sz3) zb = sz3;
                zm = sz0;
                if (zm < sz1) zm = sz1;
                if (zm < zb) zm = zb;
                z = zm;
                in = 0;
                q0 = AF(p0, u32, 0);
                q1 = AF(p0, u32, 4);
                vx0 = q0;
                vy0 = q0 >> 16;
                vz0 = q1;
                if (x0 < vx0 && vx0 < x1 && y0 < vy0 && vy0 < y1 && z0 < vz0 && vz0 < z1) in = 1;
                q0 = AF(p1, u32, 0);
                q1 = AF(p1, u32, 4);
                vx1 = q0;
                vy1 = q0 >> 16;
                vz1 = q1;
                if (x0 < vx1 && vx1 < x1 && y0 < vy1 && vy1 < y1 && z0 < vz1 && vz1 < z1) in = 1;
                q0 = AF(p2, u32, 0);
                q1 = AF(p2, u32, 4);
                vx2 = q0;
                vy2 = q0 >> 16;
                vz2 = q1;
                if (x0 < vx2 && vx2 < x1 && y0 < vy2 && vy2 < y1 && z0 < vz2 && vz2 < z1) in = 1;
                q0 = AF(p3, u32, 0);
                q1 = AF(p3, u32, 4);
                vx3 = q0;
                vy3 = q0 >> 16;
                vz3 = q1;
                if (x0 < vx3 && vx3 < x1 && y0 < vy3 && vy3 < y1 && z0 < vz3 && vz3 < z1) in = 1;
                if (in) {
                    c0 = 0;
                    d = vx0 - cx;
                    if (d < 0) d = cx - vx0;
                    if (d < r) {
                        if (d < r2) c0 = 0x80;
                        else c0 = r - d;
                    }
                    d = vz0 - cz;
                    if (d < 0) d = cz - vz0;
                    if (r < d) c0 = 0;
                    else if (r2 < d) c0 = (c0 * (r - d)) >> 7;
                    d = vy0 - cy;
                    if (d < 0) d = cy - vy0;
                    if (r < d) c0 = 0;
                    else if (r2 < d) c0 = (c0 * (r - d)) >> 7;
                    c0 += fog;
                    if (c0 > 0x80) c0 = 0x80;
                    c1 = 0;
                    d = vx1 - cx;
                    if (d < 0) d = cx - vx1;
                    if (d < r) {
                        if (d < r2) c1 = 0x80;
                        else c1 = r - d;
                    }
                    d = vz1 - cz;
                    if (d < 0) d = cz - vz1;
                    if (r < d) c1 = 0;
                    else if (r2 < d) c1 = (c1 * (r - d)) >> 7;
                    d = vy1 - cy;
                    if (d < 0) d = cy - vy1;
                    if (r < d) c1 = 0;
                    else if (r2 < d) c1 = (c1 * (r - d)) >> 7;
                    c1 += fog;
                    if (c1 > 0x80) c1 = 0x80;
                    c2 = 0;
                    d = vx2 - cx;
                    if (d < 0) d = cx - vx2;
                    if (d < r) {
                        if (d < r2) c2 = 0x80;
                        else c2 = r - d;
                    }
                    d = vz2 - cz;
                    if (d < 0) d = cz - vz2;
                    if (r < d) c2 = 0;
                    else if (r2 < d) c2 = (c2 * (r - d)) >> 7;
                    d = vy2 - cy;
                    if (d < 0) d = cy - vy2;
                    if (r < d) c2 = 0;
                    else if (r2 < d) c2 = (c2 * (r - d)) >> 7;
                    c2 += fog;
                    if (c2 > 0x80) c2 = 0x80;
                    c3 = 0;
                    d = vx3 - cx;
                    if (d < 0) d = cx - vx3;
                    if (d < r) {
                        if (d < r2) c3 = 0x80;
                        else c3 = r - d;
                    }
                    d = vz3 - cz;
                    if (d < 0) d = cz - vz3;
                    if (r < d) c3 = 0;
                    else if (r2 < d) c3 = (c3 * (r - d)) >> 7;
                    d = vy3 - cy;
                    if (d < 0) d = cy - vy3;
                    if (r < d) c3 = 0;
                    else if (r2 < d) c3 = (c3 * (r - d)) >> 7;
                    c3 += fog;
                    if (c3 > 0x80) c3 = 0x80;
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x14) = sxy[1];
                    AF(pkt, s32, 0x20) = sxy[2];
                    gte_stsxy(pkt + 0x2C);
                    tex = (u32 *)face[0];
                    code = (tex[0] & 0x2000000) | 0x3C000000;
                    cw = code | c0 | (c0 << 8) | 0x800000;
                    AF(pkt, u32, 0x04) = cw;
                    cw = code | c1 | (c1 << 8) | 0x800000;
                    AF(pkt, u32, 0x10) = cw;
                    cw = code | c2 | (c2 << 8) | 0x800000;
                    AF(pkt, u32, 0x1C) = cw;
                    cw = code | c3 | (c3 << 8) | 0x800000;
                    AF(pkt, u32, 0x28) = cw;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x18) = tex[2];
                    q0 = tex[3];
                    AF(pkt, u16, 0x24) = q0;
                    AF(pkt, u16, 0x30) = q0 >> 16;
                    {
                        u32 *o;
                        o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                        *(u32 *)pkt = (*o & 0xFFFFFF) | ((12) << 24);
                        *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                    }
                    pkt += 0x34;
                } else {
                    AF(pkt, s32, 0x08) = sxy[0];
                    AF(pkt, s32, 0x10) = sxy[1];
                    AF(pkt, s32, 0x18) = sxy[2];
                    tex = (u32 *)face[0];
                    code = (tex[0] & 0xFF000000) | col;
                    AF(pkt, u32, 0x04) = code;
                    AF(pkt, u32, 0x0C) = tex[1];
                    AF(pkt, u32, 0x14) = tex[2];
                    q0 = tex[3];
                    AF(pkt, u16, 0x1C) = q0;
                    AF(pkt, u16, 0x24) = q0 >> 16;
                    {
                        u32 *o;
                        o = (u32 *)(((z >> 2) << 2) + (u32)ot);
                        *(u32 *)pkt = (*o & 0xFFFFFF) | ((9) << 24);
                        *o = (*o & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
                    }
                    pkt += 0x28;
                }
                break;
            }
            }
        }
    }
    g_PrimNext = pkt;
}

void RoomResetVarCC(void) {
    SetFlag(0x142, 0);
    if ((GetVar(0xCC) & 0xFF) == 1) {
        SetVar(0xCC, 2);
    }
}

void func_sc03_006_80180CF0(void) {
    SetFlag(0x142, 0);
}

void func_sc03_006_80180D14(u8 *arg0) {
    D_sc03_006_801907B8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_006_80180D50(u8 *arg0) {
    func_sc03_006_801810B4();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_006_80180D94(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc03_006_80180DB8(u8 *arg0) {
    D_sc03_006_801907C0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_006_80180DF4(u8 *arg0) {
    func_sc03_006_801810DC();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_006_80180E38(u8 *arg0) {
    D_sc03_006_801907C8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_006_80180E74(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_006_80180EC8(u8 *arg0) {
    D_sc03_006_801907D4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_006_80180F04(u8 *arg0) {
    func_sc03_006_80181104();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_006_80180F44(u8 *arg0) {
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

void func_sc03_006_80180FC0(void) {
    func_800D1EBC();
}

void func_sc03_006_80180FE0(u8 *arg0) {
    D_sc03_006_801907E0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_006_8018101C(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = GetProgress();
    temp_v1 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v1;
    if (temp_v1 == -1) {
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        if (temp_s1 >= 0x2C6) {
            func_800D0C48(1);
        }
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_006_801810B4(void) {
    StartPlayerActionScript((s32) &D_sc03_006_801907EC, 0x01000000);
}

void func_sc03_006_801810DC(void) {
    StartPlayerActionScript((s32) &D_sc03_006_801907F8, 0x01000000);
}

void func_sc03_006_80181104(void) {
    StartPlayerActionScript((s32) &D_sc03_006_801907FC, 0x01000000);
}

void RoomInitCamera(void) {
    g_CameraProjTarget = 0x1F4;
    g_CameraProj = 0x1F4;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x238;
    D_8012696A = 0x600;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_006_801811CC, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_006_801811CC((s32) &g_Camera);
}

void func_sc03_006_801811CC(s32 arg0) {
    D_sc03_006_80190810[AF(arg0, u8, 4)]();
}

void func_sc03_006_80181208(s32 arg0) {
    func_sc03_006_80181228(arg0);
}


extern SV8 D_sc03_006_801C97AC[];

extern s32 D_sc03_006_801F7740;
extern s32 func_sc03_006_8018A484(StageActor *arg0);
extern s32 func_sc03_006_8018A5C4(s32 arg0);
extern s32 ActorSegmentHitsPlayer();

typedef struct { u16 x0, y0, w; s16 pad6; u16 *idx; s32 padC[2]; u8 *lists; u8 *a; u8 *b; } MapGrid;
extern MapGrid D_sc03_006_801AD31C;
extern void func_sc03_006_8018A538();
extern s32 D_sc03_006_801D7E84;
extern s16 D_sc03_006_80190C40[];
extern s32 SpawnProp();
extern s16 g_PlayerHitDamage;
extern void CopyPropVel();
extern u8 D_sc03_006_80190834[];
extern s32 BoxHitsPlayer();
void func_sc03_006_8018185C(s32 arg0);
extern s32 GetObjPadPressed();
extern s16 D_sc03_006_80190814[];
extern s32 EaseValue();
extern s32 EaseAngle();
extern s16 g_CameraFocus[];
extern s16 D_80126942;
extern s16 D_80126944;
extern void RotMatrixZYX();

void func_sc03_006_80181228(u8 *p) {
    WMtx m;
    SV4 v;
    SV4 o;
    u8 t;

    if (GetObjPadPressed(&g_Player) & 3) {
        t = (AF(p, u8, 5) + 1) & 1;
        AF(p, u8, 5) = t;
        AF(p, s32, 0x14) = D_sc03_006_80190814[t];
    }
    AF(p, s32, 8) = (s16) EaseValue(AF(p, s16, 8), AF(p, s16, 0xC), 4);
    AF(p, s32, 0x10) = (s16) EaseValue(AF(p, s16, 0x10), AF(p, s16, 0x14), 4);
    AF(p, s16, 0x18) = EaseAngle(AF(p, s16, 0x18), AF(p, s16, 0x20), 4);
    AF(p, s16, 0x1A) = EaseAngle(AF(p, s16, 0x1A), AF(p, s16, 0x22), 4);
    AF(p, s16, 0x1C) = EaseAngle(AF(p, s16, 0x1C), AF(p, s16, 0x24), 4);
    AF(p, s16, 0x28) = EaseValue(AF(p, s16, 0x28), AF(p, s16, 0x2E), 0x10);
    AF(p, s16, 0x2A) = EaseValue(AF(p, s16, 0x2A), AF(p, s16, 0x30), 0x10);
    AF(p, s16, 0x2C) = EaseValue(AF(p, s16, 0x2C), AF(p, s16, 0x32), 0x10);
    AF(p, s32, 0x48) = AF(p, s16, 0x28) + g_CameraFocus[0];
    AF(p, s32, 0x4C) = AF(p, s16, 0x2A) + D_80126942;
    AF(p, s32, 0x50) = AF(p, s16, 0x2C) + D_80126944;
    RotMatrixZYX(p + 0x18, &m);
    m.t[0] = AF(p, s16, 0x28) + g_CameraFocus[0];
    m.t[1] = AF(p, s16, 0x2A) + D_80126942;
    m.t[2] = AF(p, s16, 0x2C) + D_80126944;
    v.x = 0;
    v.y = 0;
    v.z = AF(p, s32, 0x10);
    LocalToWorld(&m, &v, &o);
    AF(p, s32, 0x3C) = o.x;
    AF(p, s32, 0x40) = o.y;
    AF(p, s32, 0x44) = o.z;
}

void func_sc03_006_80181418(StageActor *arg0) {
    D_sc03_006_80190824[arg0->state]();
}

void func_sc03_006_80181454(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = AllocActorModel()) == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc03_006_801BD274);
    SetScript((s32) arg0, (s32) &D_sc03_006_801BAE98);
    temp_a1 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x80000000);
    StopWithGravity((s32) arg0, temp_a1);
}

extern u8 D_sc03_006_801910C8;
extern u8 D_sc03_006_801910D0;
extern u8 D_sc03_006_80190F78;
extern u8 D_sc03_006_80190D94;
extern s32 SetScript();
extern void func_sc03_006_801833E4();
extern void func_sc03_006_801834F0();
extern s32 D_sc03_006_801F782C;
extern s32 D_sc03_006_801F76CC;
extern s32 D_sc03_006_801F76D0;
extern s32 D_sc03_006_801F76D4;
extern s32 D_sc03_006_801F76D8;
extern s32 D_sc03_006_801F76F4;
extern u8 D_sc03_006_801BA07C;
extern u8 D_sc03_006_801F7848;
extern u8 D_sc03_006_8018CD3C;
extern u16 D_800B99DC[];
extern void func_8013B598();
extern void func_8013C0F8();
extern void UpdateClockTint();
extern void func_800D06E8();

typedef struct { SV8 v[4]; XY uv[4]; s32 col[4]; s32 code; u8 clut; } QuadSpr;
extern void DrawPrimGT4Screen();


s32 func_sc03_006_801841E4(s32 arg0);
s32 func_sc03_006_80184380(u8 *o);

extern int rand();


extern u8 D_sc03_006_801D7998;
extern u8 D_sc03_006_801D2B7C;

extern u8 D_sc03_006_801CB010;
extern u8 D_sc03_006_801CB1E0;

extern u8 D_sc03_006_801CA1A8;
extern u8 D_sc03_006_801CA1B4;

extern s32 FindOtherActorByKind();
extern u16 g_SpawnRejected;
extern u8 D_sc03_006_801CA040;
extern u8 D_sc03_006_801CA0F8;




extern s32 FindGround();
extern s32 D_sc03_006_801C5BDC[];
extern s32 D_sc03_006_801C5BE8[];
extern SV8 D_sc03_006_801C5C00;
typedef struct { s16 x, y, z, w, f, g, h, i; s32 j; } Arg15DC;

extern u8 D_sc03_006_801E0084;
extern void func_800D06CC();
extern s32 HeadingToPoint();
extern s32 TurnStep();

extern void NextState();
extern u8 D_sc03_006_80190DC8;
extern u8 D_sc03_006_801DFA6C;
extern void InitNullModel();
extern s16 D_sc03_006_801910D8;
extern s16 D_sc03_006_801910DA;

void func_sc03_006_801814DC(u8 *o) {
    if ((GetVar(0xCC) & 0xFF) == 1) {
        AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        if (DistSqToPlayer(o) <= 0x10000) {
            AF(o, s16, 2) = 2;
            SetScript(o, &D_sc03_006_801BAEF0);
        }
    }
    if ((GetVar(0xCC) & 0xFF) == 0xF) {
        AF(o, u16, 0xE) -= 0x100;
        AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        AF(o, s16, 2) = 3;
        SetScript(o, &D_sc03_006_801BAEF0);
    }
}

void func_sc03_006_801815A8(s32 arg0) {
    s16 temp_v0;
    void *temp_a0;

    SetLocalVelocity(arg0, (s32) &D_sc03_006_80190818);
    temp_a0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a0, s16, 0x12);
    if (temp_v0 < 0x800) {
        AF(temp_a0, s16, 0x12) = (s16) (temp_v0 + 0x100);
    }
    AF(arg0, s32, 0xC) = (s32) (AF(arg0, s32, 0xC) + AF(arg0, s32, 0x18));
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) + AF(arg0, s32, 0x10));
    if (AF(arg0, s16, 0xE) >= 0x104B) {
        SetVar(0xCC, 2);
        FreeActor(arg0);
    }
}

void func_sc03_006_8018163C(StageActor *arg0) {
    u16 temp_v0;

    temp_v0 = (u16)arg0->pos[2].h.i - 0x10;
    arg0->pos[2].h.i = temp_v0;
    if ((s16) temp_v0 < 0x345) {
        SetVar(0xCC, 0x10);
        FreeActor((s32) arg0);
    }
}

void PlayerHitUpdate(StageActor *o) {
    s16 dx, dy;
    s32 c;
    u8 *e;
    s32 d;
    s16 *q;

    dx = g_PlayerX - (u16)o->pos[0].h.i;
    if (dx < 0) dx = -dx;
    dy = D_80126B66 - (u16)o->pos[2].h.i;
    if (dy < 0) dy = -dy;
    if (dx < 0x201 && dy < 0x201) {
        c = o->timer;
        o->timer = c + 1;
        if (c & 1) {
            e = (u8 *)SpawnPropFrom(o, 0x22);
            if (e != 0) {
                CopyPropVel(e, o);
                AF(AF(e, u8 *, 0x20), s16, 0x18) = 0x7000;
                AF(AF(e, u8 *, 0x20), s16, 0x1A) = 0x5000;
            }
        }
        if (BoxHitsPlayer(o, D_sc03_006_80190834)) {
            q = &g_PlayerHitKind;
            g_PlayerHitDamage = 0xC;
            *q |= 0x4000;
        }
        if (!(o->timer & 3) && o->param != 0) {
            d = dx * dx + dy * dy;
            if (d <= 0x30000) {
                PlaySoundId(0x5A5, (u16)(((0x30000 - d) * 127 / 0x30000) | 0x1000));
                o->unkFC = 1;
            } else {
                func_sc03_006_8018185C((s32)o);
            }
        }
    } else {
        func_sc03_006_8018185C((s32)o);
    }
}

void func_sc03_006_8018185C(s32 arg0) {
    if (AF(arg0, s16, 0xFC) != 0) {
        PlaySoundId(4, 0x5A5);
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc03_006_8018189C(StageActor *arg0) {
    D_sc03_006_80190844[arg0->state]();
}

s32 BoxHitsPlayer(StageActor *o, u8 *p) {
    SV8 a, b;

    a.z = AF(p, s16, 0xC);
    b.z = AF(p, s16, 0xE);
    a.x = b.x = AF(p, s16, 4);
    a.y = b.y = AF(p, s16, 8) >> 1;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    a.y = b.y = 0;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    a.y = b.y = AF(p, s16, 0xA) >> 1;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    a.x = b.x = AF(p, s16, 6);
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    a.y = b.y = 0;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    a.y = b.y = AF(p, s16, 8) >> 1;
    if (ActorSegmentHitsPlayer(o, &a, &b)) return 1;
    return 0;
}

void func_sc03_006_80181A14(u8 *o) {
    s32 v[4];
    s32 r;

    if ((GetVar(0xCD) & 0xFF) || (r = AllocActorModel(), AF(o, s32, 0x20) = r, r == 0)) {
        RejectSpawn(o);
        return;
    }
    InitNullModel(r);
    AF(AF(o, u8 *, 0x20), s16, 0x10) = -0x400;
    UpdateModelZYX(o);
    v[1] = 0;
    v[0] = 0;
    v[2] = 0x240000;
    SetLocalVelocity(o, v);
    AF(o, s32, 0x58) = (s32)D_sc03_006_80190834 | 0x40000000;
    AF(o, s16, 0x5C) = 0x800;
    AF(o, s16, 0xFC) = 0;
    NextState(o);
}

void func_sc03_006_80181ACC(StageActor *arg0) {
    D_sc03_006_801908B4[arg0->state]();
}

s32 func_sc03_006_80181B08(u8 *arg0, s32 *t) {
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

extern s32 D_sc03_006_801D7E80;
void func_sc03_006_8018A624(StageActor *arg0);
extern u8 D_sc03_006_801908F4;
extern u8 D_sc03_006_801908A4;
extern s32 D_sc03_006_8019087C[];
extern s32 D_sc03_006_80190864[];
extern s32 D_sc03_006_8019084C[];
extern s32 D_sc03_006_80190894[];

void func_sc03_006_80181B50(StageActor *o) {
    s32 t;
    ModelObj *p;

    t = GetProgress();
    p = AllocActorModel();
    o->model = p;
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(p, 0);
    o->hitData = (s32)&D_sc03_006_801908A4;
    o->hitState = 0x80;
    o->state++;
    switch (o->param) {
    default:
    case 0:
        if (t >= 900) {
            o->message = func_sc03_006_80181B08(o, D_sc03_006_8019087C);
        } else if (t >= 600) {
            o->message = func_sc03_006_80181B08(o, D_sc03_006_80190864);
        } else if (t >= 200) {
            o->message = func_sc03_006_80181B08(o, D_sc03_006_8019084C);
        }
        break;
    case 1:
        if (t >= 750) {
            o->message = func_sc03_006_80181B08(o, D_sc03_006_80190894);
        }
        break;
    }
}

void func_sc03_006_80181C48(void) {
}

void func_sc03_006_80181C50(StageActor *arg0) {
    if (D_801270C0 != 3) {
        D_sc03_006_801908EC[arg0->state]();
    }
}

void func_sc03_006_80181C9C(StageActor *o) {
    s32 i;
    Fx24 *p;

    if (g_ClockHour == 7) {
        o->animFlags |= 0x1000;
        for (i = 0; i < 4; i++) {
            p = &((Fx24 *)&D_sc03_006_801F7618)[i];
            AF(p, s16, 0x16) = i;
            func_sc03_006_80181FC4((s32)p);
            if (i & 1) {
                p->done = 1;
            }
        }
        NextState(o);
    }
}

void func_sc03_006_80181D38(StageActor *arg0) {
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
            if (((Fx24 *) &D_sc03_006_801F7618)[j].done == 0) {
                n++;
            }
        }
        if (n == 0) {
            SetState(arg0, 0);
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        p = &((Fx24 *) &D_sc03_006_801F7618)[i];
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
                    func_sc03_006_80181F74((s32) p);
                }
            }
            func_sc03_006_80182080(p);
        }
    }
}

void func_sc03_006_80181F74(s32 arg0) {
    s32 *var_a0;
    s32 var_v1;

    var_v1 = 0;
    var_a0 = &D_sc03_006_801F7618;
loop_1:
    var_v1 += 1;
    if (AF(var_a0, s32, 0x1C) != 0) {
        func_sc03_006_80181FC4((s32) var_a0);
        return;
    }
    var_a0 = (s32 *)((u8 *)var_a0 + 0x24);
    if (var_v1 >= 4) {
        return;
    }
    goto loop_1;
}

void func_sc03_006_80181FC4(s32 arg0) {
    s32 r;

    AF(arg0, s32 *, 0) = (s32 *)&D_sc03_006_801908BC;
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

void func_sc03_006_80182080(u8 *o) {
    QuadSpr q;
    QuadSpr *p;
    u16 *t;
    s32 i;
    s32 k;
    u16 dx;
    u16 dy;

    t = AF(o, u16 *, 0);
    dx = AF(o, u16, 0x12);
    dy = AF(o, u16, 0x14);
    p = &q;
    k = 3;
    q.v[0].z = k;
    q.col[0] = q.col[1] = AF(o, s32, 4);
    q.col[2] = AF(o, s32, 8);
    q.clut = 0x36;
    q.col[3] = 0;
    q.code = 0x50000000;
    for (i = 0; i < 3; i++) {
        p->v[0].x = t[0] + dx;
        p->v[0].y = t[1] + dy;
        p->v[1].x = t[2] + dx;
        p->v[1].y = t[3] + dy;
        p->v[2].x = t[4] + dx;
        p->v[2].y = t[5] + dy;
        p->v[3].x = t[6] + dx;
        p->v[3].y = t[7] + dy;
        p->uv[0].x = AF(o, u16, 0xE) + 0xA00 + (s16)t[0] / 2;
        k = AF(o, u16, 0x10) + 0x100;
        p->uv[0].y = k;
        p->uv[1].x = AF(o, u16, 0xE) + 0xA00 + (s16)t[2] / 2;
        p->uv[1].y = AF(o, u16, 0x10) + 0x100;
        p->uv[2].x = AF(o, u16, 0xE) + 0xA00 + (s16)t[0] / 2;
        p->uv[2].y = AF(o, u16, 0x10) + 0x13F;
        p->uv[3].x = AF(o, u16, 0xE) + 0xA00 + (s16)t[2] / 2;
        p->uv[3].y = AF(o, u16, 0x10) + 0x13F;
        t += 8;
        DrawPrimGT4Screen(p);
    }
}

void func_sc03_006_80182290(StageActor *arg0) {
    D_sc03_006_80190C34[arg0->state]();
}

void func_sc03_006_801822CC(StageActor *o) {
    s32 r;

    r = func_sc03_006_801827E8((s32)o, (s32)&D_sc03_006_801908F4, 0x300, 0x140, 0x88);
    o->ext0 = r;
    if (r == 0) {
        goto fail;
    }
    r = func_sc03_006_801827E8((s32)o, (s32)&D_sc03_006_801908F4, 0x310, 0x140, 0x89);
    o->ext1 = r;
    if (r == 0) {
        ZeroFill(o->ext0, 0x38);
fail:
        RejectSpawn(o);
        return;
    }
    AF(o->ext0, u16, 0x12) = (u16)o->def->unkC;
    AF(o->ext1, u16, 0x12) = (u16)o->def->unkC;
    o->work100 = 0;
    if (!(GetFlag(0x121) & 0xFF)) {
        o->state = 1;
        o->stateCount = 0;
    } else {
        o->state = 2;
        o->stateCount = 1;
    }
}

void SetPieceTrigger(s32 arg0, s32 arg1) {
    u16 temp_a0;
    u16 temp_s1;
    u16 temp_v1;

    if ((DistSqToPlayer(arg0, arg1) < 0x401) || ((u32) (AF(arg0, u16, 0x34) - 1) < 2U)) {
        temp_s1 = AF(arg0, u16, 0x34);
        switch (temp_s1) {
        case 0:
            if (!(GetFlag(0x8B) & 0xFF)) {
                StartEvent(arg0, (s32) &D_sc03_006_80190C14);
                AF(arg0, u16, 0x34) = 2U;
            } else {
                StartEvent(arg0, (s32) &D_sc03_006_80190C24);
                AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            }
            break;
        case 1:
            if (UpdateScript(arg0) == temp_s1) {
                EndEvent(arg0);
                AF(arg0, u16, 0x34) = 3U;
            }
            break;
        case 2:
            if (UpdateScript(arg0) == 1) {
                EndEvent(arg0);
                AF(arg0, u16, 0x34) = 4U;
            }
            break;
        case 3:
            if (!(GetFlag(0x121) & 0xFF) && (GetTechnique() == temp_s1)) {
                ArmCrest(3, (s32) &D_sc03_006_8019052C);
                if (GetPlayerAction() != 0) {
                    temp_v1 = AF(arg0, u16, 0x100);
                    if (!(temp_v1 & 4)) {
                        AF(arg0, u16, 0x100) = (u16) (temp_v1 | 4);
                        AF(arg0, s32, 0x1C) = 0;
                        func_80175454();
                        goto block_21;
                    }
                    goto block_22;
                }
block_21:
                if (AF(arg0, u16, 0x100) & 4) {
block_22:
                    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
                }
                temp_a0 = AF(arg0, u16, 0x100);
                if (!(temp_a0 & 2) && (AF(arg0, s32, 0x1C) == 0x5A)) {
                    AF(arg0, u16, 0x100) = (u16) (temp_a0 | 2);
                    func_800D0CA0(1);
                }
                if (!(AF(arg0, u16, 0x100) & 1) && ((GetPlayerByte1C7() & 0x8000007F) == 0x80000003)) {
                    temp_v1 = AF(arg0, u16, 0x34) + 1;
                    AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) | 1);
                    AF(arg0, u16, 0x34) = temp_v1;
                    PlaySoundId(0xB11, 0);
                }
            }
            break;
        }
        if (!(GetFlag(0x8B) & 0xFF)) {
            return;
        }
        if (GetTechnique() == 3) {
            func_sc03_006_80182740(arg0);
            func_sc03_006_80182794(arg0);
            goto block_34;
        }
    } else if (!(GetFlag(0x8B) & 0xFF)) {
        return;
    }
    AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0x88;
    func_sc03_006_80182794(arg0);
block_34:
    if (AF(arg0, u16, 0x100) & 1) {
        func_sc03_006_801828B0(arg0);
        if (func_sc03_006_801829FC() == 1) {
            SetFlag(0x121, 1);
            AF(arg0, u16, 0x100) = (u16) (AF(arg0, u16, 0x100) & 0xFFFE);
            EndPlayerAction();
            AF(arg0, s16, 2) = 2;
            AF(arg0, u16, 0x34) = 0U;
            AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0x88;
            AF(AF(arg0, void *, 0xD0), u8, 0x27) = 0x89;
            func_8002959C();
            PlaySoundId(4, 0xB11);
            func_80175414();
        }
    }
}

void func_sc03_006_801826EC(StageActor *arg0) {
    if ((arg0->stateCount == 0) && (func_800D0CE0() != 0)) {
        arg0->stateCount = (u16) (arg0->stateCount + 1);
    }
}

s32 func_sc03_006_80182740(s32 arg0) {
    AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0x8A;
    return QueueImage((s32) ((D_sc03_006_80190BF4[(D_800B99DA & 0x1F)] * 0x10) + &D_sc03_006_801E867C));
}

s32 func_sc03_006_80182794(s32 arg0) {
    AF(AF(arg0, void *, 0xD0), u8, 0x27) = 0x8B;
    return QueueImage((s32) ((D_sc03_006_80190BF4[(D_800B99DA & 0x1F)] * 0x10) + &D_sc03_006_801E857C));
}

s32 func_sc03_006_801827E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
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

void func_sc03_006_801828B0(u8 *o) {
    s16 *p;
    u8 *e;
    s32 r;

    if (D_800B99DA & 3) return;
    for (p = D_sc03_006_80190C40; *p != -1; p++) {
        e = (u8 *)SpawnProp(0x22);
        if (e != 0) {
            AngleToVec2(&r, *p, rand() % 80 + 0x118);
            AF(e, s16, 6) = AF(o, u16, 6) + r;
            AF(e, s16, 0xE) = AF(o, u16, 0xE) + (r >> 16);
            AF(e, s16, 0xA) = AF(o, u16, 0xA) + 0x40;
            AF(e, s32, 0x14) = ((rand() % 9) << 16) - 0x100000;
            AF(e, s16, 0x34) = (rand() & 1) | 0x7FF0;
            AF(AF(e, u8 *, 0x20), u16, 0x2C) = 0xC008;
        }
    }
}

s32 func_sc03_006_801829FC(void) {
    if (D_sc03_006_801F782C != 2) {
        D_sc03_006_801F782C = 2;
        D_sc03_006_801F76CC = 0;
    } else if (D_sc03_006_801F76CC == 2) {
        return 1;
    }
    return 0;
}

void RoomFrame(void) {
    SV8 s;
    s32 *p;

    s.x = g_PlayerX;
    s.y = D_80126B62;
    s.z = D_80126B66;
    func_8013B598(0, &s);
    switch (D_sc03_006_801F782C) {
    case 0:
        func_8013C0F8(&D_sc03_006_801BA07C);
        func_sc03_006_8017F498((s32)&D_sc03_006_801F76D8);
        D_sc03_006_801F782C++;
        if (GetFlag(0x121) & 0xFF) {
            D_sc03_006_801F782C = 3;
        }
        break;
    case 2:
        switch (D_sc03_006_801F76CC) {
        case 0:
            D_sc03_006_801F76D0 = 0;
            D_sc03_006_801F76D4 = 1;
            D_sc03_006_801F76F4 = 0;
            D_sc03_006_801F76CC = 1;
        case 1:
            if (--D_sc03_006_801F76D4 == 0) {
                StartCameraShake(&D_sc03_006_8018CD3C);
                D_sc03_006_801F76D4 = (D_800B99DC[0] & 7) + 3;
            }
            D_sc03_006_801F76A8 += 0x100;
            if (++D_sc03_006_801F76D0 >= 0x39) {
                if (D_sc03_006_801F76D0 & 1) {
                    p = &D_sc03_006_801F76F4;
                    *p -= 1;
                } else {
                    p = &D_sc03_006_801F76F4;
                    *p += 2;
                }
                D_sc03_006_801F76D8 = 0;
                if (D_sc03_006_801F76F4 >= 0x71) {
                    D_sc03_006_801F76CC++;
                }
            }
            func_sc03_006_8017F510(&D_sc03_006_801F7848, &D_sc03_006_801BA07C, (u8 *)&D_sc03_006_801F76D8);
            break;
        case 2:
            break;
        }
        break;
    case 1:
        func_sc03_006_8017F510(&D_sc03_006_801F7848, &D_sc03_006_801BA07C, (u8 *)&D_sc03_006_801F76D8);
        break;
    }
    UpdateClockTint();
    func_sc03_006_80182C8C();
    func_800D06E8();
}

void func_sc03_006_80182C8C(void) {
    u32 i;

    for (i = 0; i < 16; i++) {
        D_sc03_006_801F76AC[i] = D_sc03_006_80190C5C[((D_sc03_006_801F76A8 >> 8) + i) & 0xF] | 0x8000;
    }
    QueueImage(&D_sc03_006_80190C7C);
    D_sc03_006_801F76A8 += 0x100;
}

void func_sc03_006_80182D18(StageActor *arg0) {
    D_sc03_006_80190D34[arg0->state]();
}

void func_sc03_006_80182D54(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_006_80190CAC) != 0) {
        arg0->reactive = 1;
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc03_006_8018C90C);
        SpawnTalkMarker(arg0, (s32) &func_sc03_006_80182E4C);
    }
}

void func_sc03_006_80182DB8(void) {
}

void func_sc03_006_80182DC0(StageActor *arg0) {
    RunScript((s32) arg0, D_sc03_006_80190D28[arg0->param]);
    arg0->state = 3;
}

void func_sc03_006_80182E0C(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

s32 *func_sc03_006_80182E4C(u8 *arg0) {
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

s32 func_sc03_006_80182EA8(s32 a0) {
    u8 *p = &g_Status;

    if (a0 == 0x4B0 && (u8) GetFlag(0x138) == 0) {
        func_800D06CC();
        return 0x79;
    }
    if (p[0x37] == 4) {
        return 0x3C;
    }
    return 0xA;
}

void func_sc03_006_80182F10(StageActor *arg0) {
    D_sc03_006_80190D44[arg0->state]();
}

void func_sc03_006_80182F4C(s32 a0, s32 a1) {
    MapGrid *g = &D_sc03_006_801AD31C;
    s16 id = a0;
    u16 i, j, n, k, x, y, v;
    u16 *e;
    u16 *l;
    u8 *q;
    u8 *a;
    u8 *b;
    u8 *base;
    for (i = 0xF800; i <= 0xFBFF; i += 0x80) {
        for (j = 0xFA00; j <= 0xFDFF; j += 0x80) {
            x = ((i + 0x8000) >> 7) & 0x1FF;
            y = ((j + 0x8000) >> 7) & 0x1FF;
            base = g->lists;
            a = g->a;
            b = g->b;
            k = ((u16)(y - g->y0) * g->w + (u16)(x - g->x0)) * 2;
            l = (u16 *)(base + g->idx[k]);
            n = g->idx[k + 1];
            while (n--) {
                v = *l;
                if (!(v & 0x8000)) {
                    q = a + v * 18;
                } else {
                    q = b + (v & 0x7FFF) * 22;
                }
                if (*(s16 *)q == id) {
                    *(s16 *)q = a1;
                }
                l++;
            }
        }
    }
}

void func_sc03_006_80183090(StageActor *arg0) {
    func_sc03_006_80182F4C(0x200, -0x7FFE);
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc03_006_801830D0(StageActor *arg0) {
    if (GetFlag(0x121) & 0xFF) {
        func_sc03_006_80182F4C(-0x7FFE, 0x200);
        FreeActor(arg0);
    }
}

s32 func_sc03_006_80183118(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    PlaceObject(arg0, (s32) &D_sc03_006_80190D7C);
    HideModel(arg0);
    return SetScript(arg0, (s32) &D_sc03_006_801F2108);
}

void func_sc03_006_8018316C(StageActor *arg0) {
    D_sc03_006_80190F70[arg0->state]();
}

void func_sc03_006_801831A8(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (++AF(o, s32, 0x1C) >= 0x5A) {
            AF(o, u16, 0x34)++;
            ShowModel(o);
            SetScript(o, &D_sc03_006_801BAEF0);
        }
        break;
    case 1:
        func_sc03_006_801834F0(o, &D_sc03_006_801910C8, -0x60000);
        MoveObject(o);
        func_sc03_006_801833E4(o);
        if (GroundDistSqTo(o, &D_sc03_006_801910C8) < 0x401) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        func_sc03_006_801834F0(o, &D_sc03_006_801910D0, -0x60000);
        MoveObject(o);
        func_sc03_006_801833E4(o);
        if (GroundDistSqTo(o, &D_sc03_006_801910D0) < 0x401) {
            AF(o, s32, 0x1C) = 0;
            AF(o, u16, 0x34)++;
            SetScript(o, &D_sc03_006_80190F78);
        }
        break;
    case 3:
        if (++AF(o, s32, 0x1C) >= 0x3C) {
            AF(o, s32, 0x1C) = 0;
            AF(o, u16, 0x34)++;
            SetScript(o, &D_sc03_006_801BAE98);
            AF(o, s16, 0xFC) = 0;
        }
        break;
    case 4:
        if (AF(o, s16, 0xFC) == 1) {
            AF(o, s32, 0x1C) = 0;
            AF(o, u16, 0x34)++;
            SetScript(o, &D_sc03_006_801BAEF0);
        }
        break;
    case 5:
        func_sc03_006_801833E4(o);
        AF(AF(o, u8 *, 0x20), s16, 0x12) -= 0x44;
        if (++AF(o, s32, 0x1C) >= 0xF) {
            AF(o, s32, 0x1C) = 0;
            AF(o, u16, 0x34)++;
        }
        break;
    case 6:
        func_sc03_006_801833E4(o);
        func_sc03_006_801834F0(o, &D_sc03_006_80190D94, -0x60000);
        MoveObject(o);
        if (GroundDistSqTo(o, &D_sc03_006_80190D94) < 0x401) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 7:
        FreeActor(o);
        break;
    }
}

void func_sc03_006_801833E4(u8 *o) {
    u8 *r;
    s32 w;
    s32 a;

    if (!(D_800B99DA & 7)) {
        r = (u8 *)SpawnPropFrom(o, 0x22);
        if (r != 0) {
            AF(r, s16, 0x34) = 0x1000;
            a = AF(AF(o, u8 *, 0x20), s16, 0x12);
            AngleToVec2(&w, a, D_sc03_006_801910D8);
            AF(r, s16, 6) += w;
            AF(r, s16, 0xE) += w >> 16;
            AF(r, s32, 0x10) = rcos(a) * D_sc03_006_801910DA;
            AF(r, s32, 0x18) = rsin(a) * D_sc03_006_801910DA;
        }
    }
}

void func_sc03_006_801834B4(StageActor *arg0) {
    D_sc03_006_801910DC[arg0->state]();
}

void func_sc03_006_801834F0(Mover *o, s32 a1, s32 a2) {
    s32 t = HeadingToPoint((u8 *)o + 4, a1);

    o->model->rot.vy += TurnStep(o->model->rot.vy, t, 8);
    UpdateModelZYX(o);
    SetForwardVelocity(o, a2);
}

void func_sc03_006_80183564(StageActor *arg0) {
    s32 temp_v0;

    if ((GetProgress() != 0x4B0) || (GetFlag(0x138) & 0xFF) || (temp_v0 = AllocActorModel(), arg0->model = temp_v0, (temp_v0 == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc03_006_801F9F30);
    arg0->def->unkC = 0x7FFF;
    func_sc03_006_80183118((s32) arg0);
    SpawnActor(0x3C9, (s32) arg0);
}

void func_sc03_006_801835FC(void) {
    AF(g_PlayerModel, s16, 0x10) = 0;
}

s32 func_sc03_006_8018360C(Mover *arg0) {
    return GroundDistSqTo(arg0, (s32) &D_sc03_006_80190D9C) < 0x401;
}

s32 func_sc03_006_80183634(Mover *arg0) {
    return GroundDistSqTo(arg0, (s32) &D_sc03_006_80190DA4) < 0x401;
}

void func_sc03_006_8018365C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0xFC) = 0;
}

void func_sc03_006_80183668(u8 *o) {
    switch (AF(o, s16, 0xFC)) {
    case 0:
        AF(AF(o, u8 *, 0x20), s16, 0x12) -= 0x3B;
        if (++AF(o, s32, 0x1C) >= 0x1E) {
            AF(o, s16, 0xFC)++;
        }
        break;
    case 1:
        func_sc03_006_801834F0(o, &D_sc03_006_80190D94, -0x40000);
        MoveObject(o);
        if (GroundDistSqTo(o, &D_sc03_006_80190D94) < 0x401) {
            AF(o, s16, 0xFC)++;
        }
        break;
    case 2:
        break;
    }
}

s32 func_sc03_006_80183738(u8 *arg0) {
    return AF(arg0, s16, 0xFC) > 0;
}

void func_sc03_006_80183744(void) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x3C9);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0xFC) = 1;
    }
}

void SetFlag138(void) {
    SetFlag(0x138, 1);
    func_800D0CA0(1);
}

s32 func_sc03_006_801837A0(void) {
    return func_800D0CE0() == 1;
}

void Event138Run(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        if (GetPlayerAction() == 0) {
            o->stateCount++;
            StartEvent(o, (s32)&D_sc03_006_80190DC8);
        }
        break;
    case 1:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            o->stateCount++;
            FreeActor(o);
        }
        break;
    case 2:
        break;
    }
}

void func_sc03_006_80183864(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc03_006_801BD274);
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0x10);
    SetScript((s32) arg0, (s32) &D_sc03_006_801BAEF0);
    PlaceObject((s32) arg0, (s32) &D_sc03_006_801910C0);
    HideModel((s32) arg0);
}

void func_sc03_006_801838FC(u8 *arg0) {
    s32 temp_v0_2;
    void *temp_v0;

    D_sc03_006_801BFF04[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (!(AF(arg0, u16, 0x70) & 0x800)) {
            temp_v0_2 = IsActorFar((s32) arg0);
            if (temp_v0_2 == 1) {
                AF(arg0, s32, 0xE4) = temp_v0_2;
                func_sc03_006_801846D0((s32) arg0);
            }
        }
    }
}

void func_sc03_006_801839A4(StageActor *arg0) {
    ModelObj *temp_a0;

    if (SetupActor(arg0, (s32) &D_sc03_006_801BFE40) != 0) {
        arg0->reactive = 1;
        arg0->params = &D_sc03_006_801BFE74;
        arg0->reactMask = 0xFFFBDFDD;
        AF(arg0, s16, 0xDE) = 0;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 1);
        SetScript(arg0, (s32) &D_sc03_006_801C553C);
        arg0->work100 = (u16) (u16)arg0->model->scale.vx;
        if ((u16)arg0->param & 1) {
            temp_a0 = arg0->model;
            arg0->state = 1;
            arg0->hitState = 0;
            temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x80000000);
            return;
        }
        arg0->state = 3;
        arg0->ext0 = SpawnShadow(arg0);
    }
}

void func_sc03_006_80183A70(s32 arg0, s32 arg1) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (DistSqToPlayer(arg0, arg1) > 0x18FFF) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0x10;
        AF(temp_v1, s32, 4) = (s32) (AF(temp_v1, s32, 4) & 0x7FFFFFFF);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, s16, 0x1C) = 1;
        AF(temp_v1_3, s16, 0x1A) = 1;
        AF(temp_v1_3, s16, 0x18) = 1;
        AF(arg0, s32, 0xCC) = SpawnShadow(arg0);
        AF(arg0, u16, 0x76) = (u16) D_sc03_006_801BFE40;
    }
}

void func_sc03_006_80183B14(s32 arg0, s32 arg1) {
    s16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (TickTimer(arg0, arg1) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
        AF(arg0, s16, 2) = 3;
        AF(arg0, u16, 0x5C) = (u16) D_sc03_006_801BFE42;
        return;
    }
    temp_v0 = rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 4);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, s16, 0x1C) = temp_v0;
    AF(temp_v1_2, s16, 0x1A) = temp_v0;
    AF(temp_v1_2, s16, 0x18) = temp_v0;
}

void func_sc03_006_80183B9C(StageActor *arg0, s32 arg1, s32 arg2) {
    arg0->state = 4;
    SetScript((s32) arg0, (s32) &D_sc03_006_801C553C, arg2);
}

void func_sc03_006_80183BC8(s32 arg0, s32 arg1) {
    if (DistSqToTarget(arg0, arg1) <= 0x18000) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_006_80183C08(StageActor *arg0, s32 arg1, s32 arg2) {
    arg0->state = 6;
    SetScript((s32) arg0, (s32) &D_sc03_006_801C554C, arg2);
    arg0->timer = 0x17;
    arg0->stateCount = 0;
}

void func_sc03_006_80183C4C(u8 *arg0, s32 arg1) {
    if (g_Daytime != 0) {
        if ((AF(arg0, u16, 0x34) == 0) && (AF(arg0, s32, 0x94) == 0xA)) {
            AF(arg0, s16, 0x98) = 0;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else if (TickTimer((s32) arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc03_006_80183CC4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(arg0, s16, 2) = 8;
    StopWithGravity((s32) arg0, arg1, arg2, arg3);
    func_sc03_006_80184300((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_006_801C5614);
    AF(arg0, s32, 0x1C) = 0x2D;
    AF(arg0, s32, 0xE0) = 0;
}

void func_sc03_006_80183D18(u8 *o) {
    u8 *p;
    s32 r;

    p = AF(o, u8 *, 0x20);
    AF(p, u16, 0x12) -= 0x71;
    func_sc03_006_80184380(o);
    if (AF(o, u16, 0x72) & 0x4000) {
        if (IsOnScreen(o, 0x8C00B4) == 1) {
            PlaySoundId(0x662, 0);
        }
    }
    r = func_sc03_006_801841E4((s32) o);
    if (r != -1 && TickTimer(o) != 0) {
        if (r != 0) {
            func_sc03_006_80184300((s32) o);
        }
        AF(o, s32, 0x1C) = 0x23;
    }
}

void func_sc03_006_80183DD4(u8 *o) {
    AF(o, s16, 0x5C) = 0;
    AF(o, s16, 0x98) = 0;
    AF(o, s32, 0x1C) = 0;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    if (AF(o, s16, 0xAA) == 0) {
        AF(o, s16, 0x100) = AF(AF(o, u8 *, 0x20), s16, 0x18);
        AF(o, s16, 0x106) = 0;
    } else {
        AF(o, s16, 0x104) = AF(AF(o, u8 *, 0x20), s16, 0x18);
        AF(o, s16, 0x106) = 1;
    }
}

void func_sc03_006_80183E3C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (g_PlayerAbsorbCounter * 8), arg1, arg2, arg3);
    if (AF(arg0, s16, 0xAA) == 0) {
        var_lo = temp_a0 * AF(arg0, s16, 0x100);
    } else {
        var_lo = temp_a0 * AF(arg0, s16, 0x104);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    var_v0 = var_lo;
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    temp_v0 = (u32) var_v0 >> 0xC;
    AF(temp_v1, s16, 0x1C) = (s16) temp_v0;
    AF(temp_v1, s16, 0x18) = (s16) temp_v0;
    temp_a0_2 = AF(arg0, void *, 0x20);
    if (AF(temp_a0_2, s16, 0x18) <= 0) {
        AF(temp_a0_2, s16, 0x1C) = 1;
        AF(temp_a0_2, s16, 0x18) = 1;
    }
}

void func_sc03_006_80183EE0(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}



void func_sc03_006_80183EF0(u8 *o) {
    s32 b;
    u8 *p;
    StageActor *q;
    if (TickTimer() != 0) {
        if (AF(o, s16, 0x106) != 0) {
            p = AF(o, u8 *, 0x20);
            AF(p, s16, 0x18) = AF(p, s16, 0x1C) = 0x1000;
            AF(o, s16, 0x106) = 0;
        } else {
            p = AF(o, u8 *, 0x20);
            AF(p, u16, 0x18) = AF(p, u16, 0x1C) = AF(o, u16, 0x100);
        }
        q = o;
        q->hitDamage = 0;
        q->hitState |= 1;
        q->hitAngle = (u16)q->model->rot.vy + 0x800;
        q->hitCode = 1;
        SetReactionStep(q, 1);
    } else {
        q = AF(o, u8 *, 0x20);
        b = AF(q, s16, 0x18);
        AF(q, s16, 0x18) = AF(q, s16, 0x1C) = b + (AF(o, s16, 0x100) - b) / 4;
    }
}

void func_sc03_006_80183FC8(u8 *arg0) {
    s32 t;
    s32 var_a0;

    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0x37;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    SetScript((s32) arg0, (s32) &D_sc03_006_801C57D4);
    AF(arg0, s16, 0x34) = 0;
    t = DistSqToTarget((s32) arg0);
    var_a0 = 0x52B;
    if (t <= 0x8FFF) {
        var_a0 = 0x52A;
    }
    PlaySoundId(var_a0, 0);
}

void func_sc03_006_80184034(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0xC) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (TickTimer((s32) arg0, arg1) != 0) {
        DropItem((s32) arg0);
        AF(arg0, s32, 0x1C) = 0x3C;
        AF(AF(arg0, void *, 0x20), s32, 4) = 0x80000000;
        func_sc03_006_801846D0((s32) arg0);
    }
}

void func_sc03_006_801840B8(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x102) = 1;
}

void func_sc03_006_801840D8(void) {
}

void func_sc03_006_801840E0(StageActor *o) {
    SV8 v;
    if (o->hitCode == 0x23) {
        o->workFE = 1;
        o->model->flags |= 0x10;
        PlaySoundId(0xAA1, 0);
    } else if (o->hitCode == 0x24) {
        v.z = 0;
        v.x = 0;
        v.y = -8;
        func_sc03_006_8018C090((s32)o, &v.x, 0xB);
    }
}

void func_sc03_006_8018415C(u8 *arg0) {
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_a0 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x1800) {
            AF(temp_a0, u16, 0x1C) = 0x1800U;
            AF(temp_a0, u16, 0x1A) = 0x1800U;
            AF(temp_a0, u16, 0x18) = 0x1800U;
        }
    }
}

s32 func_sc03_006_801841E4(s32 arg0) {
    s32 temp_v0;
    s32 var_s2;
    s32 var_s3;
    u8 *var_s0;
    u16 temp_v1;

    var_s3 = 1;
    temp_v0 = MoveOnGround(arg0);
    if (temp_v0 != 0) {
        if ((temp_v0 & 0xFF) == 2) {
            SetReactionStep(arg0, 0x12);
            return -1;
        }
        if (temp_v0 & 0x8000) {
            if (temp_v0 & 0x2000) {
                goto block_8;
            }
            goto block_7;
        }
        if (temp_v0 & 0x4000) {
            goto block_7;
        }
        goto block_9;
    }
block_7:
    RestorePrevPos(arg0);
block_8:
    func_sc03_006_8018450C(arg0, 2);
    var_s3 = 0;
block_9:
    var_s0 = (u8 *)&g_Actors;
    var_s2 = 0;
loop_10:
    temp_v1 = *(u16 *)var_s0;
    if ((temp_v1 != 0) && (AF(arg0, u16, 0) == temp_v1) && (arg0 != var_s0) && (UndoMoveIntoObject(arg0, (s32) var_s0) != 0)) {
        if (var_s3 == 0) {
            goto block_17;
        }
        func_sc03_006_8018450C(arg0, 2);
        return var_s3;
    }
    var_s2 += 1;
    var_s0 += 0x10C;
    if (var_s2 >= 0x60) {
block_17:
        return var_s3;
    }
    goto loop_10;
}

s32 func_sc03_006_80184300(s32 arg0) {
    if (AF(arg0, s16, 0xAA) > 0) {
        func_sc03_006_8018450C(arg0, 4);
        return 0;
    }
    if ((DistSqToTarget(arg0) > 0x24000) || (func_sc03_006_80184800(arg0) == 0)) {
        func_sc03_006_8018450C(arg0, 3);
        return 0;
    }
    func_sc03_006_8018450C(arg0, 0);
    return 1;
}

s32 func_sc03_006_80184380(u8 *o) {
    SV8 a;
    SV8 p;
    SV8 n;
    u8 *q;

    a.x = g_PlayerX;
    a.y = D_80126B62;
    a.z = D_80126B66;
    p.x = AF(o, s16, 6);
    p.y = AF(o, s16, 0xA);
    p.z = AF(o, s16, 0xE);
    a.y -= 0x2A;
    q = (u8 *)((AF(o, s32, 0x58) & 0x0FFFFFFF) | 0x80000000);
    if (AF(q, s16, 4) + p.x > a.x
        || AF(q, s16, 6) + p.x < a.x
        || AF(q, s16, 0xC) + p.z > a.z
        || AF(q, s16, 0xE) + p.z < a.z
        || AF(q, s16, 8) + p.y > a.y
        || AF(q, s16, 0xA) + p.y < a.y) {
        return 0;
    }
    n.x = a.x - p.x;
    n.y = a.y - p.y;
    n.z = a.z - p.z;
    VectorNormalSS(&n, &n);
    HitPlayer(1, 1, AF(o, s16, 0xDC), 0xD, &a, &n);
    return 1;
}

void func_sc03_006_8018450C(u8 *o, s32 mode) {
    typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
    V3 v;
    WMtx m;
    u8 *g = &g_Status;
    s32 t;

    v.x = v.y = 0;
    if (g_Daytime != 0) {
        v.z = -0x60000;
    } else {
        v.z = -0x80000;
    }
    switch (mode) {
    case 0:
        if (AF(g, u8, 0x36) != 0 && (rand() & 1)) {
            break;
        }
    case 1:
        AF(o, s16, 0xDC) = HeadingToTarget(o);
        break;
    case 2: {
        s32 d;
        t = rand() % 512;
        d = AF(o, s16, 0xDC);
        AF(o, s16, 0xDC) = !(rand() & 1) ? d + (0x800 - t) : d + (0x800 + t);
        break;
    }
    case 3:
        {
            s32 r;
            do {
                r = rand() % 4096;
            } while (AF(o, s16, 0xDC) == (s16)r);
        }
        break;
    case 4:
        AF(o, s16, 0xDC) = (HeadingToTarget(o) + 0x800) & 0xFFF;
        break;
    }
    m = *(WMtx *)&GsIDMATRIX;
    RotMatrixY(AF(o, s16, 0xDC), &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
}

void func_sc03_006_801846D0(u8 *o) {
    u8 *p;

    AF(o, s16, 0x76) = 0;
    if (AF(o, s32, 0xE4) == 0) {
        AF(o, u8, 0xC1) = 0;
        AF(o, s16, 2) = 1;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
        AF(o, s16, 0x5E) = 0;
        AF(o, s16, 0x5C) = 0;
        {
            u8 *q = AF(o, u8 *, 0x20);
            AF(q, s16, 0x14) = 0;
            AF(q, s16, 0x12) = 0;
            AF(q, s16, 0x10) = 0;
        }
        {
            u8 *q = AF(o, u8 *, 0x20);
            AF(q, s16, 0x1C) = 0x1000;
            AF(q, s16, 0x1A) = 0x1000;
            AF(q, s16, 0x18) = 0x1000;
        }
        AF(o, s16, 0xDE) = 0;
        AF(o, s16, 0xAA) = 0;
        AF(o, s16, 6) = AF(o, s16, 0x88);
        AF(o, s16, 0xA) = AF(o, s16, 0x8A);
        AF(o, s16, 0xE) = AF(o, s16, 0x8C);
        SetScript(o, &D_sc03_006_801C553C);
        UpdateModelZYX(o);
        GainStat0FromActor(o);
        if (AF(o, s32, 0xCC) != 0) {
            FreeShadow(AF(o, s32, 0xCC));
        }
    } else {
        if (!(AF(o, s16, 0x70) & 0x8000)) {
            p = AF(o, u8 *, 0x68);
            if (p != 0 && (AF(o, s16, 0x72) & 0x8000)) {
                AF(p, u16, 0xA) &= 0x7FFF;
            }
        }
        FreeActor(o);
    }
}

s32 func_sc03_006_80184800(u8 *o) {
    V3 v;

    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    return v.x + v.z < 0x190000;
}

void func_sc03_006_80184860(u8 *arg0) {
    D_sc03_006_801C5B08[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xFE) = (u16) (AF(arg0, u16, 0xFE) + 0x80);
        if (IsActorFar((s32) arg0) == 1) {
            AF(arg0, s16, 0x100) = 1;
            func_sc03_006_80185D20((s32) arg0);
        }
    }
}

s32 func_sc03_006_801848E4(StageActor *arg0) {
    ModelObj *temp_a0;

    if (SetupActor(arg0, (s32) &D_sc03_006_801C5954) != 0) {
        arg0->reactive = 1;
        arg0->params = &D_sc03_006_801C5A68;
        arg0->reactMask = -0x20AD;
        arg0->workE0 = 0;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 1);
        SetScript(arg0, (s32) &D_sc03_006_801C8CBC);
        if ((u16)arg0->param & 1) {
            temp_a0 = arg0->model;
            arg0->state = 1;
            arg0->hitState = 0;
            temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x80000000);
            return;
        }
        arg0->state = 3;
        arg0->ext0 = func_80143994(arg0, 0x3000);
    }
}

void func_sc03_006_801849A0(u8 *o) {
    s32 s;

    if (AF(o, s16, 0x102) == 0) {
        if (IsOnScreen(o, 0x64008C) == 0) return;
        AF(o, s16, 0x102) = 1;
    } else {
        if (TickTimer(o) == 0) return;
        if (DistSqToPlayer(o) < 0x19000) return;
    }
    AF(o, s16, 2) = 2;
    AF(o, s32, 0x1C) = 8;
    AF(o, u16, 0x5C) = 0xAA10;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    s = rcos(0x380);
    AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = s;
    s = rsin(0x380);
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = s * 2 + 0x1000;
    AF(o, s32, 0xCC) = func_80143994(o, 0x3000);
}

void func_sc03_006_80184A94(s32 arg0, s32 arg1) {
    s16 temp_v0_2;
    void *temp_v0;
    void *temp_v1;

    if (TickTimer(arg0, arg1) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) & 0xFFEF);
        AF(arg0, s16, 2) = 3;
        return;
    }
    temp_v0_2 = rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1C) = temp_v0_2;
    AF(temp_v1, s16, 0x18) = temp_v0_2;
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = (s16) ((rsin((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3) * 2) + 0x1000);
}

void func_sc03_006_80184B30(StageActor *arg0, s32 arg1, s32 arg2) {
    arg0->state = 4;
    arg0->hitState = 0xAA10;
    SetScript((s32) arg0, (s32) &D_sc03_006_801C8CBC, arg2);
    arg0->timer = 0x20;
    if (arg0->workE0 != 0) {
        arg0->workE0 = 0;
        arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i + 0x30);
    }
}

void func_sc03_006_80184B90(u8 *arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 0x40);
    if ((func_sc03_006_80185E8C() != 1) && (TickTimer((s32) arg0) != 0)) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_006_80184BF0(u8 *arg0) {
    AF(arg0, s16, 2) = 6;
    StopWithGravity((s32) arg0);
    SetForwardVelocity((s32) arg0, -0x18000);
    SetScript((s32) arg0, (s32) &D_sc03_006_801C8CBC);
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc03_006_80184C4C(StageActor *arg0) {
    if ((func_sc03_006_80185E8C() != 1) && (func_sc03_006_80185BD4(arg0, (s32) &D_800D3918) == 0)) {
        arg0->state = 3;
    }
}

void func_sc03_006_80184C9C(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    StopWithGravity((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_006_801C8DB4);
    AF(arg0, s32, 0x1C) = 0x24;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc03_006_80184CE8(u8 *arg0) {
    s32 v;
    s32 r;

    v = TurnStepToTarget(arg0, 8);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += v;
    if (AF(arg0, s32, 0x1C) < 0x19) {
        SetForwardVelocity(arg0, -0x40000);
        r = func_sc03_006_80185BD4(arg0, &D_800D3918);
        if (r == 0) {
            AF(arg0, s16, 2) = 9;
            return;
        }
        if (r == -1) {
            return;
        }
    }
    if (TickTimer(arg0) != 0 || DistSqToTarget(arg0) < 0x2001) {
        AF(arg0, s16, 2) = 9;
    }
}

void func_sc03_006_80184D98(StageActor *arg0) {
    ModelObj *temp_v1;

    temp_v1 = arg0->model;
    arg0->state = 0xA;
    arg0->hitState = 0;
    arg0->stateCount = 0;
    arg0->timer = 8;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
}

void func_sc03_006_80184DC8(u8 *o) {
    SV8 c;
    u8 *r;
    u8 *q;
    s32 s;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer(o) != 0) {
            AF(o, s16, 0x34) = 1;
            AF(o, s32, 0x1C) = 0x1E;
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
            AF(o, s16, 0xE4) = 3;
            return;
        }
        s = rsin((AF(o, s32, 0x1C) << 10) >> 3);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = s;
        s = rcos((AF(o, s32, 0x1C) << 10) >> 3);
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = s * 2 + 0x1000;
        return;
    case 1:
        if (--AF(o, s16, 0xE4) == 0) {
            c.x = AF(o, u16, 6);
            c.y = AF(o, u16, 0xA) - 0x38;
            c.z = AF(o, u16, 0xE);
            r = ((u8 *(*)())SpawnKind1CAt)(&c);
            if (r != 0) {
                q = AF(r, u8 *, 0xCC);
                if (q != 0) {
                    AF(q, s16, 0x18) = AF(q, s16, 0x1A) = 0x5000;
                }
            }
            AF(o, s16, 0x34) = 2;
        }
    case 2:
        if (TickTimer(o) != 0) {
            AF(o, s16, 0x34) = 3;
            AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
            func_sc03_006_801859E4(o);
            AF(o, s32, 0x1C) = 8;
            AF(o, u16, 0x5C) = 0xAA10;
        }
        return;
    case 3:
        if (TickTimer(o) != 0) {
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFFEF;
            AF(o, s16, 2) = 0xB;
            return;
        }
        s = rcos((AF(o, s32, 0x1C) << 10) >> 3);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = s;
        s = rsin((AF(o, s32, 0x1C) << 10) >> 3);
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = s * 2 + 0x1000;
        return;
    }
}

void func_sc03_006_80184FDC(u8 *arg0) {
    AF(arg0, s16, 2) = 0xC;
    StopWithGravity((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_006_801C8E8C);
    AF(arg0, s32, 0x1C) = 0x1A;
    AF(arg0, s16, 0xE6) = 0;
    StopWithGravity((s32) arg0);
}

void func_sc03_006_80185030(u8 *arg0) {
    s32 r;
    u8 *p;
    s32 s;

    r = TurnStepToTarget(arg0, 8);
    p = AF(arg0, u8 *, 0x20);
    s = AF(p, u16, 0x12) + r;
    AF(p, u16, 0x12) = s;
    SetForwardVelocity(arg0, -0x40000, s);
    if (func_sc03_006_80185BD4(arg0, &D_800D3918) != -1) {
        if (TickTimer(arg0) != 0) {
            if (DistSqToTarget(arg0) <= 0x7000) {
                AF(arg0, s16, 2) = 0xD;
            } else {
                AF(arg0, s16, 2) = 3;
            }
        } else if (DistSqToTarget(arg0) <= 0x3000) {
            AF(arg0, s16, 2) = 0xD;
        }
    }
}

void func_sc03_006_801850D8(StageActor *arg0) {
    arg0->state = 0xE;
    SetScript((s32) arg0, (s32) &D_sc03_006_801C8F64);
    arg0->timer = 0x5A;
    AF(arg0, s16, 0xDC) = 0;
    arg0->workFE = 0;
}

void func_sc03_006_80185120(u8 *arg0) {
    if (DistSqToTarget(arg0) > 0x14400) {
        AF(arg0, s16, 2) = 7;
        return;
    }
    if (AF(arg0, s32, 0x1C) >= 0x16) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 8);
    }
    if (AF(arg0, s32, 0x1C) == 0x15) {
        PlaySoundId(0x522, 0);
    }
    if (AF(arg0, s32, 0x1C) == 0x15 || AF(arg0, s32, 0x1C) == 0xB || AF(arg0, s32, 0x1C) == 1) {
        func_sc03_006_8018584C(arg0);
    }
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_006_801851F4(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 2) = 0x10;
    UpdateModelZYX((s32) arg0, arg1);
    StopWithGravity((s32) arg0);
    SetForwardVelocity((s32) arg0, -0x30000);
    SetScript((s32) arg0, (s32) &D_sc03_006_801C8DB4);
    AF(arg0, s32, 0x1C) = 0x1A;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc03_006_80185254(u8 *arg0, s32 arg1) {
    if (AF(arg0, s16, 0xAA) <= 0) {
        AF(arg0, s16, 2) = 3;
        return;
    }
    if (TickTimer((s32) arg0, arg1) != 0) {
        SetScript((s32) arg0, (s32) &D_sc03_006_801C8DB4);
        AF(arg0, s32, 0x1C) = 0x1A;
    }
    func_sc03_006_80185BD4((s32) arg0, (s32) &D_800D3918);
}

void func_sc03_006_801852C8(u8 *arg0) {
    u16 temp_v1;
    void *temp_a1;
    void *temp_v1_2;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_a1, u16, 0x2C);
    if (temp_v1 & 0x10) {
        AF(temp_a1, u16, 0x2C) = (u16) (temp_v1 & 0xFFEF);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, s16, 0x1C) = 0x1000;
        AF(temp_v1_2, s16, 0x1A) = 0x1000;
        AF(temp_v1_2, s16, 0x18) = 0x1000;
    }
}

void func_sc03_006_80185304(Mover *arg0) {
    arg0->state = 0xF;
    arg0->model->rot.vy = (s16) ((HeadingToTarget((s32) arg0) + 0x800) & 0xFFF);
}

void func_sc03_006_80185344(StageActor *arg0) {
    u16 temp_v1;
    ModelObj *temp_a0;
    ModelObj *temp_v1_2;

    temp_a0 = arg0->model;
    temp_v1 = temp_a0->flags;
    if (temp_v1 & 0x10) {
        temp_a0->flags = (u16) (temp_v1 & 0xFFEF);
        temp_v1_2 = arg0->model;
        temp_v1_2->scale.vz = 0x1000;
        temp_v1_2->scale.vy = 0x1000;
        temp_v1_2->scale.vx = 0x1000;
    }
    TakeDamageAndRecoil((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_006_801C93D4);
}

void func_sc03_006_801853B4(u8 *arg0) {
    s16 var_v0;
    u16 temp_v1_3;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((AF(arg0, u16, 0x62) + 0x800) & 0xFFF);
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x14) = 0;
    AF(temp_v0, s16, 0x10) = 0;
    StopWithGravity((s32) arg0);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, s16, 0x1C) = 0x1000;
    AF(temp_v1_2, s16, 0x1A) = 0x1000;
    AF(temp_v1_2, s16, 0x18) = 0x1000;
    temp_v1_3 = AF(arg0, u16, 0x5E);
    if ((temp_v1_3 == 9) || (temp_v1_3 == 0x1C)) {
        SetLocalVelocity((s32) arg0, (s32) &D_sc03_006_801C5B4C);
        var_v0 = 0xCC;
    } else {
        SetLocalVelocity((s32) arg0, (s32) &D_sc03_006_801C5B58);
        var_v0 = 0x100;
    }
    AF(arg0, s16, 0xDE) = var_v0;
    SetScript((s32) arg0, (s32) &D_sc03_006_801C9454);
}

void func_sc03_006_8018549C(u8 *o) {
    s32 r;

    if (AF(o, u8, 0xC2) == 0) {
        DamageActorsNear(o, 0x50, AF(AF(o, u8 *, 0x20), s16, 0x12) + 0x800, 0x1D);
        AF(AF(o, u8 *, 0x20), u16, 0x10) -= AF(o, u16, 0xDE);
        if (++AF(o, s32, 0x1C) >= 0x29) {
            SetReactionStep(o, 0xD);
            return;
        }
        r = MoveCollidePassableAt(o, &D_sc03_006_801C5B64);
        if (r & 0x2000) {
            if ((r & 0xFF) == 2) {
                SetReactionStep(o, 0x12);
                return;
            }
            if (AF(o, s16, 0x76) <= 0) {
                SetReactionStep(o, 6);
                return;
            }
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0x5E) = 0;
            AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
            AF(o, s16, 2) = 3;
            AF(o, s32, 0xE0) = 1;
        } else if (r & 0x4000) {
            AF(o, u8, 0xC2)++;
            AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
            StopWithGravity(o);
            AF(o, s32, 0x1C) = 0;
        }
    } else {
        r = MoveOnGround(o);
        if (r & 0x2000) {
            if ((r & 0xFF) == 2) {
                SetReactionStep(o, 0x12);
                return;
            }
            if (AF(o, s16, 0x76) <= 0) {
                SetReactionStep(o, 6);
            } else {
                AF(o, s16, 2) = 3;
                AF(o, u8, 0xC1) = 0;
                AF(o, s16, 0x5E) = 0;
                AF(o, s32, 0xE0) = 1;
            }
        }
        if ((AF(o, s32, 0x1C) & 3) == 3) {
            SpawnKind1C(o, 1);
        }
        if (++AF(o, s32, 0x1C) >= 0x3D) {
            SetReactionStep(o, 0xD);
        }
    }
}

void func_sc03_006_80185658(StageActor *arg0) {
    arg0->hitState = 0;
    arg0->model->rot.vx = 0;
    arg0->stateCount = 0;
    HideModel();
    SetScript((s32) arg0, (s32) &D_sc03_006_801C5A58);
}

void func_sc03_006_801856A0(StageActor *o) {
    SV8 v;
    s32 r;
    s32 i;
    s32 a;
    s32 base;
    s32 t;
    s32 *rp;

    i = 0;
    if (o->stateCount != 0) {
        if (TickTimer() != 0) {
            GiveItem(0xA);
            DropItem(o);
            func_sc03_006_80185D20(o);
        }
        return;
    }
    rp = &r;
    for (; i < 10; i++) {
        AngleToVec2(rp, rand() % 0x1000, rand() % 0x30);
        t = r;
        v.x = (u16)o->pos[0].h.i + t;
        a = rand() % 0x18;
        base = o->pos[1].h.i - 0x34;
        v.y = (rand() & 1) ? base + a : base - a;
        v.z = (u16)o->pos[2].h.i + (t >> 16);
        SpawnKind1CAt(&v);
    }
    o->timer = 0x10;
    o->stateCount++;
    for (i = 0; i < 3; i++) {
        SpawnActorArg(0x240, i, o);
    }
}

void func_sc03_006_8018584C(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;

    gte_SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    gte_SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc03_006_801C5A48, &a, &f);
    RotTransSV(&D_sc03_006_801C5A50, &b, &f);
    func_sc03_006_8018594C(AF(AF(o, u8 *, 0x20), s16, 0x12), &a, AF(o, s16, 0xDC));
    func_sc03_006_8018594C(AF(AF(o, u8 *, 0x20), s16, 0x12), &b, AF(o, s16, 0xDC));
    if (++AF(o, s16, 0xDC) >= 3) {
        AF(o, s16, 0xDC) = 2;
    }
}

s32 func_sc03_006_8018594C(s32 arg0, s32 arg1, s32 arg2) {
    u8 *o;
    u8 *a;
    s16 h = arg0;

    o = (u8 *)SpawnPropAt(0x17, arg1);
    if (o == 0) {
        return 0;
    }
    a = AF(o, u8 *, 0x20);
    func_8001CD50(a, D_sc03_006_801C5988[arg2]);
    AF(a, s16, 0x1E) = 0xC00;
    AF(a, s16, 0x1A) = 0x1000;
    AF(a, s16, 0x18) = 0x1000;
    AF(a, s16, 0x12) = h;
    AF(a, s32, 4) |= 0x40000000;
    return (s32)o;
}

void func_sc03_006_801859E4(u8 *o) {
    V3 d;
    V3 out;
    SV8 a;
    SV8 b;
    SV8 unused;
    WMtx m;
    V3 pos;

    StopWithGravity(o);
    a.x = AF(o, u16, 0x3A);
    a.y = AF(o, u16, 0x3E);
    a.z = AF(o, u16, 0x42);
    if (func_sc03_006_80185EFC(o) == 0) {
        AF(o, s16, 6) = AF(o, s16, 0x88);
        AF(o, s16, 0xA) = AF(o, s16, 0x8A);
        AF(o, s16, 0xE) = AF(o, s16, 0x8C);
        return;
    }
    AF(o, s16, 6) = g_PlayerTarget;
    AF(o, s16, 0xA) = D_80126CB6;
    AF(o, s16, 0xE) = D_80126CB8;
    d.z = 0xFF600000;
    d.x = d.y = 0;
    m = GsIDMATRIX;
    RotMatrixY(AF(g_PlayerModel, s16, 0x12), &m);
    pos.y = AF(o, s32, 8);
    do {
        pos.x = AF(o, s32, 4);
        pos.z = AF(o, s32, 0xC);
        ApplyMatrixLV(&m, &d, &out);
        pos.x += out.x;
        pos.z += out.z;
        b.x = AF(&pos, s16, 2);
        b.y = AF(&pos, s16, 6);
        b.z = AF(&pos, s16, 0xA);
        if (func_sc03_006_80185F5C(&a, &b) == 1) {
            AF(o, s16, 6) = b.x;
            AF(o, s16, 0xA) = b.y;
            AF(o, s16, 0xE) = b.z;
            AF(o, s32, 0x14) = 0;
            goto end;
        }
        d.z >>= 1;
    } while (-d.z > 0xFFFF);
    RestorePrevPos(o);
end:
    AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToTarget(o);
}

s32 func_sc03_006_80185BD4(u8 *o) {
    s32 r;
    s32 t;
    s32 i;
    u8 *p;

    t = MoveOnGroundOfs(o);
    if ((t & 0xFF) == 2) {
        SetReactionStep(o, 0x12);
        return -1;
    }
    if (t != 0x2000) {
        RestorePrevPos(o);
        return 0;
    }
    p = (u8 *) &g_Actors;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) != 0 && AF(o, u16, 0) == AF(p, u16, 0) && o != p && DistSq(o + 4, p + 4) < 0x1000) {
            AF(o, s32, 4) = AF(o, s32, 0x38);
            AF(o, s32, 8) = AF(o, s32, 0x3C);
            AF(o, s32, 0xC) = AF(o, s32, 0x40);
            AngleToVec2(&r, HeadingTo(o + 4, p + 4), 0x41);
            {
                s32 d = r;
                AF(o, s32, 4) = AF(p, s32, 4);
                AF(o, s32, 0xC) = AF(p, s32, 0xC);
                AF(o, s16, 6) += d;
                AF(o, s16, 0xE) += d >> 16;
            }
            break;
        }
    }
    return 1;
}

void func_sc03_006_80185D20(s32 arg0) {
    StageActor *temp_a0_2;
    u16 temp_v1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1_2;

    if (AF(arg0, s16, 0x100) == 0) {
        GainStat0FromActor();
    }
    if (AF(arg0, u8, 0xC1) == 0xE) {
        GiveItem(0xA);
    }
    temp_v1 = AF(arg0, u16, 0x70);
    if (temp_v1 & 1) {
        if (!(temp_v1 & 0x8000)) {
            if (AF(arg0, u8, 0xC1) != 0) {
                temp_a0 = AF(arg0, void *, 0x20);
                AF(arg0, u8, 0xC1) = 0U;
                AF(arg0, s16, 2) = 1;
                AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
                AF(arg0, s16, 0x5E) = 0;
                AF(arg0, s16, 0x5C) = 0;
                AF(arg0, u16, 0x76) = (u16) *AF(arg0, u16 *, 0x78);
                temp_v0 = AF(arg0, void *, 0x20);
                AF(temp_v0, s16, 0x14) = 0;
                AF(temp_v0, s16, 0x12) = 0;
                AF(temp_v0, s16, 0x10) = 0;
                AF(arg0, s32, 0x1C) = 0x40;
                AF(arg0, s16, 0xAA) = 0;
                AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
                AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
                AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
                SetScript(arg0, (s32) &D_sc03_006_801C8CBC);
                temp_a0_2 = AF(arg0, s32, 0xCC);
                if (temp_a0_2 != 0) {
                    FreeShadow(temp_a0_2);
                }
                UpdateModelZYX(arg0);
                return;
            }
            goto block_10;
        }
        goto block_14;
    }
block_10:
    if (!((s16) AF(arg0, u16, 0x70) & 0x8000)) {
        temp_v1_2 = AF(arg0, void *, 0x68);
        if ((temp_v1_2 != NULL) && (AF(arg0, s16, 0x72) & 0x8000)) {
            AF(temp_v1_2, u16, 0xA) = (u16) (AF(temp_v1_2, u16, 0xA) & 0x7FFF);
        }
    }
block_14:
    FreeActor(arg0);
}

s32 func_sc03_006_80185E8C(Mover *arg0) {
    s32 d = DistSqToTarget(arg0);

    if (d <= 0x2000 || (d <= 0x24000 && TargetInFront(arg0, 0x400) != 0)) {
        arg0->state = 7;
        return 1;
    }
    return 0;
}

s32 func_sc03_006_80185EFC(u8 *o) {
    V3 v;

    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    return v.x + v.z < 0x190000;
}

s32 func_sc03_006_80185F5C(s32 a, s16 *b) {
    SV8 p;
    SV8 q;
    SV8 r;

    if (TraceMap(1, a, b) & 0x8000) {
        return 0;
    }
    p.x = b[0];
    p.y = b[1];
    p.z = b[2];
    if (FindGround(&p) != 0) {
        q.x = p.x;
        q.y = p.y;
        q.z = p.z;
        r.x = p.x;
        r.y = p.y + 8;
        r.z = p.z;
        if (!(TraceMap(1, &q, &r) & 0x2000) || AF(&r, u8, 6) != 2) {
            b[1] = p.y;
            return 1;
        }
        return 0;
    }
    return 0;
}

void func_sc03_006_80186034(u8 *arg0) {
    D_sc03_006_801C5B6C[AF(arg0, u16, 2)]();
}

void func_sc03_006_80186070(u8 *o) {
    WMtx m;
    V3 v;

    v.y = 0;
    v.x = 0;
    if (g_Daytime == 0) {
        v.z = -0x48000;
    } else {
        v.z = -0x18000;
    }
    AF(o, s16, 0x2C) = 0x3C;
    AF(o, s16, 2) = 1;
    m = GsIDMATRIX;
    RotMatrixY(AF(AF(o, u8 *, 0x20), s16, 0x12), &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
}

void func_sc03_006_80186140(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (D_801270C0 != 2) {
        func_sc03_006_801861D8();
        temp_v0 = AF(arg0, u16, 0x2C);
        AF(arg0, u16, 0x2C) = (u16) (temp_v0 - 1);
        if ((s16) (temp_v0) < 0) {
            FreeProp((s32) arg0);
            return;
        }
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x100);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x100);
        MoveProp((s32) arg0);
    }
}

s32 func_sc03_006_801861D8(u8 *o) {
    SV8 dir;
    SV8 pos;
    s32 flag;
    Player *pl;
    u8 *g;

    pl = &g_Player;
    g = &g_Status;
    flag = 0;
    if (PlayerFlag400() != 0) {
        if (g_Daytime != 0) {
            return 0;
        }
        flag = 1;
    }
    if (func_sc03_006_80186334(o) == 0) {
        return 0;
    }
    pos.x = pl->pos[0].h.i;
    pos.y = pl->pos[1].h.i;
    pos.z = pl->pos[2].h.i;
    dir.x = pos.x - AF(o, s16, 6);
    dir.y = pos.y - AF(o, s16, 0xA);
    dir.z = pos.z - AF(o, s16, 0xE);
    VectorNormalSS(&dir, &dir);
    pos.y -= 0x20;
    if (flag == 0) {
        HitPlayer(1, 0x5001, 0, (AF(g, u8, 0x36) ^ 1) * 10, &pos, &dir);
    } else {
        HitPlayer(1, 0x4001, 0, 10, &pos, &dir);
    }
    pl->hitAngle = AF(AF(o, u8 *, 0x20), u16, 0x12);
    return 1;
}

s32 func_sc03_006_80186334(u8 *o) {
    WMtx m;
    SV8 a;
    SV8 b;
    s32 f;
    u8 *q;
    Player *pl;
    s32 i;

    pl = &g_Player;
    q = AF(o, u8 *, 0x20);
    func_80020DA4(q + 0x10, &m);
    func_80020F34(&m, q + 0x18);
    m.t[0] = AF(q, s16, 8);
    m.t[1] = AF(q, s16, 0xA);
    m.t[2] = AF(q, s16, 0xC);
    for (i = 0; i < 4; i++) {
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        RotTransSV(&D_sc03_006_801C5B74[i], &a, &f);
        RotTransSV(&D_sc03_006_801C5B74[i + 4], &b, &f);
        if (PathHitsModel(pl->model, pl->hitData, &a, &b) != 0) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_006_80186484(StageActor *arg0) {
    D_sc03_006_801C5BD4[arg0->state]();
}

void func_sc03_006_801864C0(StageActor *arg0) {
    arg0->state = 1;
    arg0->timer = 2;
    AF(arg0, u8, 0xFC) = 1;
    AF(arg0, u8, 0xFE) = 2;
    AF(arg0, u8, 0xFD) = 0;
    AF(arg0, u8, 0xFF) = 4;
    AF(arg0, s16, 0xDC) = 0;
}

void func_sc03_006_801864F4(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        func_sc03_006_8018654C(0, arg0 + 0xFD);
        func_sc03_006_8018654C(1, arg0 + 0xFE);
        func_sc03_006_8018654C(2, arg0 + 0xFF);
        AF(arg0, s32, 0x1C) = 2;
    }
}

void func_sc03_006_8018654C(s32 arg0, u8 *arg1) {
    s32 pad[1];
    s32 *p;

    if (*arg1 >= 7) {
        *arg1 = 0;
    }
    p = D_sc03_006_801C5988[arg0];
    *p++ = D_sc03_006_801C5BB4[*arg1];
    if (*arg1 - 1 < 0) {
        *p = D_sc03_006_801C5BB4[6];
    } else {
        *p = D_sc03_006_801C5BB4[*arg1 - 1];
    }
    (*arg1)++;
}

void func_sc03_006_801865E8(StageActor *arg0) {
    D_sc03_006_801C5C08[arg0->state]();
}

void func_sc03_006_80186624(StageActor *o) {
    WMtx m;
    SV8 v;
    ModelObj *p;

    p = (u8 *) AllocActorModel();
    o->model = p;
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(p, D_sc03_006_801C5BDC[(u16)o->param & 0xF]);
    o->timer = 8;
    o->state++;
    GetPartWorldMatrix(o->parent, D_sc03_006_801C5BE8[(u16)o->param & 0xF], &m);
    LocalToWorld(&m, &D_sc03_006_801C5C00, &v);
    o->pos[0].h.i = v.x;
    o->pos[1].h.i = v.y;
    o->pos[2].h.i = v.z;
    o->model->rot.vy = o->parent->model->rot.vy;
}

void func_sc03_006_80186710(u8 *o) {
    s32 r;
    s32 t;

    if (TickTimer(o) != 0) {
        AF(o, u16, 2)++;
        r = rand();
        t = ((s32 *)&D_sc03_006_801C5BF4)[AF(o, u16, 0x70) & 0xF] + r % 1024;
        AF(o, s32, 0x1C) = 0x100;
        AF(o, s32, 0x48) = t;
        AF(o, s32, 0xE0) = rand();
    }
}

void func_sc03_006_801867A4(u8 *p) {
    V4 in;
    V4 out;
    u8 *o;

    if ((AF(p, u16, 0x70) & 0xF) == 2) {
        AF(AF(p, u8 *, 0x20), u16, 0x10) -= 0x10;
        o = AF(p, u8 *, 0x20);
        if (AF(o, s16, 0x10) < -0x400) {
            AF(o, s16, 0x10) = -0x400;
        }
    } else {
        in.x = rcos((AF(p, s32, 0xE0) << 6) & 0xFC0) << 8;
        in.y = 0;
        in.z = 0;
        ApplyMatrixLV(AF(p, u8 *, 0x20) + 0x34, &in, &out);
        AF(p, u16, 0x50) = (u32)out.x >> 16;
        AF(p, u16, 0x54) = (u32)out.z >> 16;
        AF(p, s32, 0xE0)++;
    }
    if (MoveCollidePassable(p) != 0) {
        AF(p, s32, 0x1C) = 0x20;
        AF(p, u16, 2)++;
    } else if (TickTimer(p) != 0) {
        FreeActor(p);
    }
}

void func_sc03_006_801868AC(u8 *arg0, s32 arg1) {
    s16 temp_v0_2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (AF(arg0, u16, 0x34) == 0) {
        if ((AF(arg0, u16, 0x70) & 0xF) == 2) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, u16, 0x10) = (u16) (AF(temp_v0, u16, 0x10) - 0x80);
            temp_v1 = AF(arg0, void *, 0x20);
            if ((s16) AF(temp_v1, u16, 0x10) < -0x400) {
                AF(temp_v1, s16, 0x10) = -0x400U;
            }
        }
        if (TickTimer((s32) arg0, arg1) != 0) {
            AF(arg0, s32, 0x1C) = 8;
            temp_v1_2 = AF(arg0, void *, 0x20);
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
        }
    } else {
        if (TickTimer((s32) arg0, arg1) != 0) {
            FreeActor((s32) arg0);
            return;
        }
        temp_v0_2 = rsin((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, s16, 0x1C) = temp_v0_2;
        AF(temp_v1_3, s16, 0x18) = temp_v0_2;
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = (s16) ((rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3) * 8) + 0x1000);
    }
}

void func_sc03_006_801869CC(StageActor *arg0) {
    VEC_8E8A0 v;
    PRIM_8E8A0 p;
    MAT_8E8A0 m;
    SV_8E8A0 rot;
    s32 s;
    s32 i, j;
    s32 a, b, ang, c;
    s32 col;
    SV_8E8A0 *src;
    SV_8E8A0 *dst;
    POS_8E8A0 *pos;

    arg0->model->rot.vz += 0x40;
    UpdateModelRot();
    v.z = 0xFFFC0000;
    rot.z = 0;
    col = D_sc03_006_801C5BB4[arg0->work10A++ & 7];
    p.code = 0x50000000;
    *(s32 *)&p.col[0] = col;
    *(s32 *)&p.col[1] = col;
    *(s32 *)&p.col[2] = col;
    *(s32 *)&p.col[3] = col;
    for (i = 0, pos = (POS_8E8A0 *)((u8 *)arg0 + 0xCC); i < ((s16 *)arg0)[0x108 / 2]; i++, pos++) {
        a = arg0->timer - i * 4;
        if (a > 0x40) {
            if (i == 4) {
                FreeActor(arg0);
                return;
            }
            continue;
        }
        b = a << 6;
        ang = b & 0xFFF;
        s = (rsin(ang) << 4) >> 12;
        switch (arg0->param) {
        case 0:
            c = rcos(ang);
             v.x = 0;
             v.y = (c << 4) * s;
             rot.x = -ratan2(v.y, v.z);
             rot.y = 0;
            break;
        case 1:
            c = rcos((b + 0x800) & 0xFC0);
             v.x = 0;
             v.y = (c << 4) * s;
             rot.x = -ratan2(v.y, v.z);
             rot.y = 0;
            break;
        case 2:
            c = rcos(ang);
             v.y = 0;
             rot.x = 0;
             v.x = (c << 4) * s;
             rot.y = ratan2(-v.z, v.x) - 0x400;
            break;
        case 3:
            c = rcos((b + 0x800) & 0xFC0);
             v.y = 0;
             rot.x = 0;
             v.x = (c << 4) * s;
             rot.y = ratan2(-v.z, v.x) - 0x400;
            break;
        }
        RotMatrixZYX(&rot, &m);
        pos->x += v.x;
        pos->y += v.y;
        pos->z += v.z;
        m.t[0] = pos->x >> 16;
        m.t[1] = pos->y >> 16;
        m.t[2] = pos->z >> 16;
        src = D_sc03_006_801C5C18[arg0->param / 2];
        dst = p.pt;
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        for (j = 0; j < 4; j++, src++, dst++) {
            RotTransSV(src, dst, &s);
        }
        DrawPrimG4Mtx(&p, (u8 *)arg0->model + 0x34);
    }
    if ((++arg0->timer & 3) == 0 && arg0->work108 < 5) {
        arg0->work108++;
    }
}

void func_sc03_006_80186D18(StageActor *arg0) {
    D_sc03_006_801C5C58[arg0->state]();
}

void func_sc03_006_80186D54(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, 0);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    UpdateModelZYX((s32) arg0);
    AF(arg0, s16, 0x108) = 1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_006_80186DD4(StageActor *arg0) {
    D_sc03_006_801C9794[arg0->state]();
}

void func_sc03_006_80186E10(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc03_006_801C9484) != 0) {
        if (!(GetFlag(D_sc03_006_801C94EC[AF(arg0->message, u16, 0xA)]) & 0xFF)) {
            arg0->ext0 = SpawnTalkMarker(arg0, (s32) &func_sc03_006_801874BC);
        } else {
            arg0->param = (u16) ((u16)arg0->param | 0x4000);
        }
        temp_v0 = SpawnActorArg(0x8F, (s32) (s16) (u16)arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc03_006_8018C90C);
        arg0->state = 1;
    }
}

void func_sc03_006_80186EE4(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc03_006_80186F0C(void) {
}

void func_sc03_006_80186F14(StageActor *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0->message;
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (GetFlag(0x1D) & 0xFF) {
            D_sc03_006_801C96D0 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc03_006_801C9634[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc03_006_801C96BC = 0;
            SetFlag(D_sc03_006_801C9634[AF(temp_s0, u16, 0xC)], 1);
            D_sc03_006_801C96B8 = 2;
        } else {
            D_sc03_006_801C96D0 = AF(temp_s0, s32, 0);
            var_v0 = D_sc03_006_801C95B0[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc03_006_801C96B8 = 0;
            D_sc03_006_801C96BC = var_v0;
        }
        RunScript((s32) arg0, (s32) &D_sc03_006_801C96E4);
    } else {
        var_a1 = &D_sc03_006_801C9750;
        *var_a1 = AF(temp_s0, s32, 0);
        RunScript((s32) arg0, (s32) (var_a1 - 7));
    }
    arg0->state = 4;
    arg0->param = (u16) ((u16)arg0->param | 0x8000);
}

void func_sc03_006_80187060(StageActor *arg0) {
    void *temp_s2;

    temp_s2 = arg0->message;
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        if (GetFlag(D_sc03_006_801C94EC[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc03_006_801C94EC[AF(temp_s2, u16, 0xA)] == 0x54) {
                SetProgress(0x5A);
                SetFlag(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (GetFlag(0x1D) & 0xFF)) {
                UploadFlagImages(0);
            }
            if (func_sc03_006_80187264() == 1) {
                GiveItem(0x26);
            }
            arg0->param = (u16) ((u16)arg0->param & 0x8000);
            FreeActor(arg0->ext0);
        }
        arg0->state = 2;
    }
}

void func_sc03_006_80187180(StageActor *arg0) {
    arg0->state = 2;
    FreeActor(arg0->ext0);
}

void func_sc03_006_801871AC(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_006_801871BC(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc03_006_801871CC(u8 *arg0) {
    SetFlag(D_sc03_006_801C94EC[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc03_006_8018720C(u8 *arg0) {
    AddMoney((s32) &g_Player, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc03_006_80187240(void) {
    return func_80174764() == 1;
}

s32 func_sc03_006_80187264(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(GetFlag(D_sc03_006_801C94EC[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc03_006_801872C8(StageActor *arg0) {
    D_sc03_006_801C97BC[arg0->state]();
}

void func_sc03_006_80187304(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_006_801C94B8) != 0) {
        arg0->unkFC = (u16) arg0->parent->id;
        if ((u16)arg0->param & 0x4000) {
            SetScript(arg0, (s32) &D_sc03_006_801C9E7C);
            arg0->hitState = 0;
        } else {
            SetScript(arg0, (s32) &D_sc03_006_801C9C5C);
        }
        arg0->state = 1;
    }
}

void func_sc03_006_8018738C(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->unkFC != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_006_801C9C6C);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_006_801C9D74);
        arg0->hitState = 0x8C00;
    }
}

void func_sc03_006_8018744C(StageActor *arg0) {
    s32 f;

    if (arg0->animTimer == 0) {
        f = arg0->workFE;
        arg0->state = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc03_006_801C9E7C);
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_006_801C9C5C);
        }
        arg0->workFE = 0;
    }
}

s32 *func_sc03_006_801874BC(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    Mover *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) g_PlayerModel + 0x34);
    gte_SetTransMatrix((u8 *) g_PlayerModel + 0x34);
    RotTransSV(&D_sc03_006_801C97AC[0], &a, &f);
    RotTransSV(&D_sc03_006_801C97AC[1], &b, &f);
    if (PathHitsModel(p->model, p->hitData, &a, &b) != 0 && TargetInFront(p, 0x300) != 0) {
        p->state = 3;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc03_006_801875B4(u8 *arg0) {
    D_sc03_006_801CA170[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (IsActorFar((s32) arg0) == 1)) {
        func_sc03_006_80188A2C((s32) arg0);
    }
}

void func_sc03_006_80187628(u8 *o) {
    u16 *q;

    if (FindOtherActorByKind(o, 0x6D) != 0) {
        q = &g_SpawnRejected;
        *q |= 1;
        return;
    }
    if (SetupActor(o, &D_sc03_006_801CA040) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, u8 *, 0xBC) = &D_sc03_006_801CA0F8;
        AF(o, s32, 0xB4) = -0x48D;
        AF(o, s16, 0xDC) = 1;
        AF(o, s32, 0xC4) |= 2;
        SpawnShadow(o);
        SetScript(o, &D_sc03_006_8018C90C);
        func_sc03_006_8018893C(o);
        StopWithGravity(o);
    }
}

void func_sc03_006_801876E4(StageActor *arg0) {
    s32 temp_ret;

    AF(arg0, s16, 2) = 2;
    InitMime((s32) &D_sc03_006_801F7730, (s32) &D_sc03_006_801C9EEC, D_sc03_006_801CAE68);
    temp_ret = rand();
    arg0->timer = (s32) ((temp_ret % 31) + 0x1E);
    func_sc03_006_801888A8((s32) arg0, 1, temp_ret / 31);
}

void func_sc03_006_80187778(s32 arg0, s32 arg1) {
    if (DistSqToTarget(arg0, arg1) < 0x4001) {
        AF(arg0, s16, 2) = 7;
        return;
    }
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 2) = 5;
    }
    StepMime((s32) &D_sc03_006_801F7730);
}

void func_sc03_006_801877D8(StageActor *o) {
    o->state = 4;
    func_sc03_006_801888A8(o, 1);
    AF(o, s16, 0xE0) = (rand() & 1) ? 1 : -1;
    if (AF(o, s16, 0xEA) != 0) {
        AF(o, s32, 0x1C) = rand() % 31 + 30;
        InitMime(&D_sc03_006_801F7730, &D_sc03_006_801C9EEC, D_sc03_006_801CAE68);
        return;
    }
    AF(o, s32, 0x1C) = rand() % 31 + 15;
    InitMime(&D_sc03_006_801F7730, &D_sc03_006_801C9F04, D_sc03_006_801CAE68);
    if (func_sc03_006_80188C18(o) == 1) {
        AF(o, s16, 0xE8) = 0;
    } else {
        AF(o, s16, 0xE8) = 1;
    }
}

void func_sc03_006_80187914(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x12) = (u16) (AF(temp_a0, u16, 0x12) + (AF(arg0, s16, 0xE0) * 0x22));
    if ((AF(arg0, s16, 0xEA) != 0) || (SetForwardVelocity((s32) arg0, -0x20000, arg2), (func_sc03_006_801887B0((s32) arg0) != -1))) {
        if (DistSqToTarget((s32) arg0) < 0x4001) {
            AF(arg0, s16, 2) = 7;
            return;
        }
        if (TickTimer((s32) arg0) != 0) {
            AF(arg0, s16, 2) = 5;
        }
        StepMime((s32) &D_sc03_006_801F7730);
    }
}

void func_sc03_006_801879C4(u8 *o) {
    AF(o, s16, 2) = 6;
    StopWithGravity(o);
    SetForwardVelocity(o, -0x20000);
    AF(o, s32, 0x1C) = rand() % 61 + 90;
    func_sc03_006_801888A8(o, 1);
    AF(o, s16, 0xE4) = 0;
    if (*(u8 **)&D_sc03_006_801F7730 != &D_sc03_006_801C9F04) {
        InitMime(&D_sc03_006_801F7730, &D_sc03_006_801C9F04, D_sc03_006_801CAE68);
    }
    if (func_sc03_006_80188C18(o) == 1) {
        AF(o, s16, 0xE8) = 0;
    } else {
        AF(o, s16, 0xE8) = 1;
    }
}

void func_sc03_006_80187A9C(u8 *o) {
    s32 d;
    s32 r;

    d = DistSqToTarget(o);
    if (d < 0x4001) {
        AF(o, s16, 2) = 7;
        return;
    }
    if (g_Daytime == 0 && d <= 0x8000 && AF(o, s16, 0xE4) != 0) {
        D_sc03_006_801CA0E4[0] = -(SquareRoot0(DistSqToTarget(o)) << 16);
        if (func_sc03_006_80188AF4(o, D_sc03_006_801CA0E4 - 2) & 0x2000) {
            AF(o, s16, 2) = 9;
            return;
        }
    }
    if (func_sc03_006_80188A94(o) == 0 || TargetInFront(o, 0x400) == 0) {
        if (AF(o, s16, 0xE4) != 0) {
            SetForwardVelocity(o, -0x20000);
            func_sc03_006_801888A8(o, 1);
            InitMime(&D_sc03_006_801F7730, &D_sc03_006_801C9F04, D_sc03_006_801CAE68);
            AF(o, s16, 0xE4) = 0;
        }
        if (TickTimer(o) != 0) {
            func_sc03_006_8018893C(o);
            return;
        }
    } else {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 4);
        SetForwardVelocity(o, -0x80000);
        if (AF(o, s16, 0xE4) == 0) {
            func_sc03_006_801888A8(o, 2);
            InitMime(&D_sc03_006_801F7730, &D_sc03_006_801C9F24, D_sc03_006_801CAE68);
            AF(o, s16, 0xE4) = 1;
        }
    }
    r = func_sc03_006_801887B0(o);
    if (r == 0) {
        if (AF(o, s16, 0xE4) == 0 || AF(o, s16, 0xEA) == 2) {
            AF(o, s16, 2) = 3;
        }
    } else if (r == -1) {
        return;
    }
    StepMime(&D_sc03_006_801F7730);
}

void func_sc03_006_80187C94(StageActor *arg0) {
    AF(arg0, s16, 2) = 8;
    InitMime((s32) &D_sc03_006_801F7730, (s32) &D_sc03_006_801C9F44, D_sc03_006_801CAE68);
    arg0->timer = 0x28;
    func_sc03_006_801888A8((s32) arg0, 2);
    AF(arg0, s16, 0xDE) = 0;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc03_006_80187CFC(u8 *o) {
    s32 r;

    AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 3);
    if (AF(o, s32, 0x1C) == 0x28) {
        PlaySoundId(0x7F, 0);
    }
    if (AF(o, s32, 0x1C) == 5) {
        PlaySoundId(0x524, 0);
    }
    if (AF(o, s32, 0x1C) < 0xB && AF(o, s16, 0xDE) == 0) {
        ActorSegmentDamagesPlayer(o, &D_sc03_006_801CA0E8, &D_sc03_006_801CA0E8 + 8, 0x15);
        AF(o, u16, 0xDE) ^= 1;
    }
    if (TickTimer(o) != 0) {
        r = DistSqToTarget(o);
        if (r > 0x30000) {
            func_sc03_006_8018893C(o);
            return;
        }
        if (r >= 0x4001) {
            AF(o, s16, 2) = 5;
            return;
        }
        AF(o, s32, 0x1C) = 0x28;
        AF(o, s16, 0xDE) = 0;
    }
    StepMime(&D_sc03_006_801F7730);
}

extern u8 D_sc03_006_801C9F6C;
extern s32 D_sc03_006_801CA1A4;

/* symbol split: splat split one original object into neighbouring symbols; read through the neighbour (offset form), as the original */
void func_sc03_006_80187E24(u8 *o) {
    s32 *p;

    AF(o, s16, 2) = 10;
    InitMime(&D_sc03_006_801F7730, &D_sc03_006_801C9F6C, D_sc03_006_801CAE68);
    func_sc03_006_801888A8(o, 2);
    AF(o, s16, 0xDE) = 0;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToTarget(o);
    UpdateModelZYX(o);
    p = &D_sc03_006_801CA1A4;
    *p = D_sc03_006_801CA0E4[0] / 30;
    StopWithGravity(o);
    SetLocalVelocity(o, p - 2);
    AF(o, s32, 0x1C) = 0;
    AF(o, s16, 0x34) = 0;
}

void func_sc03_006_80187EF0(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    if (AF(arg0, u16, 0x34) == 0) {
        if (AF(arg0, s32, 0x1C) < 0xF) {
            temp_v1 = AF(arg0, void *, 0x20);
            AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x44);
        }
        if (((u32) (AF(arg0, s32, 0x1C) - 0x15) < 0xAU) && (AF(arg0, s16, 0xDE) == 0)) {
            ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc03_006_801CA0E8, (s32) (&D_sc03_006_801CA0E8 + 8), 0x1F);
            AF(arg0, s16, 0xDE) = (s16) ((u16) AF(arg0, s16, 0xDE) ^ 1);
        }
        temp_v0 = MoveCollide((s32) arg0);
        if ((temp_v0 & 0xFF) == 2) {
            SetReactionStep((s32) arg0, 0x12);
            return;
        }
        if (temp_v0 & 0x2000) {
            AF(arg0, s32, 0x1C) = 0xF;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        temp_v0_2 = AF(arg0, s32, 0x1C) + 1;
        AF(arg0, s32, 0x1C) = temp_v0_2;
        if (temp_v0_2 >= 0x28) {
            SetReactionStep((s32) arg0, 0xD);
        }
        goto block_14;
    }
    if (TickTimer((s32) arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, void *, 0x20), u16, 0x10) = 0U;
    }
block_14:
    StepMime((s32) &D_sc03_006_801F7730);
}

void func_sc03_006_8018803C(StageActor *arg0) {
    func_sc03_006_80188978(arg0, (s32) &D_sc03_006_801C9FFC, 0);
    SetScript(arg0, (s32) &D_sc03_006_801CA030);
}

void func_sc03_006_80188080(void) {
    StepMime((s32) &D_sc03_006_801F7730);
}

void func_sc03_006_801880A8(u8 *o) {
    AF(o, u8, 0xC2) = 0;
    AF(o, u8, 0xC3) = 0;
    AF(o, s16, 0x98) = 0;
    func_sc03_006_80188978(o, &D_sc03_006_801C9FFC, 0);
    if (AF(o, u16, 0x5E) == 9 || AF(o, u16, 0x5E) == 0x1C) {
        SetLocalVelocity(o, &D_sc03_006_801CA1A8);
    } else {
        SetLocalVelocity(o, &D_sc03_006_801CA1B4);
    }
    SetScript(o, &D_sc03_006_801CA030);
}

void func_sc03_006_80188134(u8 *o) {
    s32 f;
    s32 sv;
    u8 unused[8];

    f = 0;
    if (AF(o, s32, 0x10) != 0 || AF(o, s32, 0x18) != 0) {
        DamageActorsNear(o, 0x50, AF(AF(o, u8 *, 0x20), s16, 0x12) + 0x800, 0x1D);
    }
    switch (AF(o, u8, 0xC2)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u16, 0x10) -= 0x100;
        if (++AF(o, s32, 0x1C) >= 0x29) {
            SetReactionStep(o, 0xD);
            break;
        }
        f = MoveCollidePassableAt(o, &D_sc03_006_801CA0A4);
        if (f & 0x2000) {
            AF(o, u8, 0xC2) = 1;
            SpawnKind1C(o, 1);
            AF(o, s32, 0x14) = 0xFFF30000;
            AF(o, s32, 0x1C) = 0;
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), u16, 0x10) -= 0x100;
        if (++AF(o, s32, 0x1C) >= 0x29) {
            SetReactionStep(o, 0xD);
            break;
        }
        sv = AF(o, s32, 0x14);
        f = MoveCollidePassableAt(o, &D_sc03_006_801CA0A4);
        if (f & 0x2000) {
            SpawnKind1C(o, 1);
            AF(o, s32, 0x14) = sv;
            AF(o, u8, 0xC2) = 2;
            AF(o, s32, 0x1C) = 0;
            AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
        } else if (f & 0x8000) {
            AF(o, u8, 0xC2) = 2;
            AF(o, s32, 0x1C) = 0;
            AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
            AF(o, s32, 0x18) = 0;
            AF(o, s32, 0x10) = 0;
        }
        break;
    case 2:
        AF(o, s32, 0x10) = AF(o, s32, 0x10) * 15 / 16;
        AF(o, s32, 0x18) = AF(o, s32, 0x18) * 15 / 16;
        if (AF(o, u8, 0xC3) & 1) {
            f = MoveOnGround(o);
            if (!(f & 0x2000)) {
                SetReactionStep(o, 0xD);
                break;
            }
        } else {
            f = MoveCollidePassable(o);
            if (f & 0x2000) {
                AF(o, u8, 0xC3) |= 1;
            } else if (f & 0x8000) {
                AF(o, s32, 0x18) = 0;
                AF(o, s32, 0x10) = 0;
            }
        }
        if (++AF(o, s32, 0x1C) >= 0x11) {
            if (f & 0x2000) {
                AF(o, u8, 0xC1) = 0;
                AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
                func_sc03_006_8018876C(o);
                return;
            }
            SetReactionStep(o, 0xD);
        }
        break;
    }
    StepMime(&D_sc03_006_801F7730);
    if ((u8)f == 2) {
        SetReactionStep(o, 0x12);
    }
}

void func_sc03_006_80188410(u8 *o) {
    WMtx m;
    u8 *p;

    func_sc03_006_80188978(o, &D_sc03_006_801C9FFC, 0);
    SetScript(o, &D_sc03_006_801CA030);
    UpdateModelZYX(o);
    m = GsIDMATRIX;
    RotMatrixY((HeadingToTarget(o) + 0x800) & 0xFFF, &m);
    switch (AF(o, u16, 0x5E)) {
    case 8:
        p = &D_sc03_006_801CA084;
        break;
    case 5:
    case 29:
    case 32:
        p = &D_sc03_006_801CA094;
        break;
    case 1:
    case 50:
    default:
        p = &D_sc03_006_801CA074;
        break;
    }
    ApplyMatrixLV(&m, p, o + 0x10);
    AF(o, s16, 0x34) = 0;
    AF(o, s32, 0x1C) = 0;
}

void func_sc03_006_80188528(u8 *o) {
    s32 r = 0;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (++AF(o, s32, 0x1C) >= 0x29) {
            SetReactionStep(o, 0xD);
            break;
        }
        AF(AF(o, u8 *, 0x20), u16, 0x10) -= 0x100;
        r = MoveCollidePassableAt(o, &D_sc03_006_801CA0A4);
        if (r & 0x2000) {
            AF(o, s32, 0x1C) = 0xF;
            AF(o, u16, 0x34)++;
            AF(AF(o, u8 *, 0x20), u16, 0x10) = 0;
        }
        break;
    case 1:
        r = MoveOnGround(o);
        if (!(r & 0x2000)) {
            AF(o, s16, 0x34) = 2;
            AF(o, s32, 0x1C) = 0;
            StopWithGravity(o);
            break;
        }
        if (TickTimer(o) != 0) {
            AF(o, u8, 0xC1) = 0;
            AF(AF(o, u8 *, 0x20), u16, 0x10) = 0;
            AF(o, s16, 0x5E) = 0;
            func_sc03_006_8018876C(o);
        }
        break;
    case 2:
        if (++AF(o, s32, 0x1C) >= 0x29) {
            SetReactionStep(o, 0xD);
            break;
        }
        r = MoveCollide(o);
        if (r & 0x2000) {
            AF(o, u8, 0xC1) = 0;
            AF(AF(o, u8 *, 0x20), u16, 0x10) = 0;
            AF(o, s16, 0x5E) = 0;
            func_sc03_006_8018876C(o);
        }
        break;
    }
    StepMime(&D_sc03_006_801F7730);
    if ((r & 0xFF) == 2) {
        SetReactionStep(o, 0x12);
    }
}

void func_sc03_006_801886C0(s32 arg0) {
    InitMime((s32) &D_sc03_006_801F7730, (s32) &D_sc03_006_801C9FD4, D_sc03_006_801CAE68);
    func_sc03_006_801888A8(arg0, 1);
}

void func_sc03_006_80188710(void) {
    StepMime((s32) &D_sc03_006_801F7730);
}

void func_sc03_006_80188738(s32 arg0) {
    func_sc03_006_80188978(arg0, (s32) &D_sc03_006_801C9FFC, 0);
    PlaySoundId(0xA74, 0);
}

void func_sc03_006_8018876C(StageActor *arg0) {
    arg0->state = 1;
    SetScript(arg0, (s32) &D_sc03_006_8018C90C);
    arg0->hitState = 0xAA10;
    AF(arg0, s16, 0xEA) = 0;
}

s32 func_sc03_006_801887B0(u8 *o) {
    s32 f;

    if (AF(o, s16, 0xE8) == 0) {
        f = MoveOnGround(o);
        if ((f & 0xFF) == 2) {
            SetReactionStep(o, 0x12);
            return -1;
        }
        if (!(f & 0x2000)) {
            RestorePrevPos(o);
            AF(o, s16, 0xEA) = 2;
            return 0;
        }
        if (f & 0x4000) {
            RestorePrevPos(o);
            AF(o, s16, 0xEA) = 1;
            return 0;
        }
        if (f & 0x8000) {
            AF(o, s16, 0xEA) = 1;
            return 0;
        }
        AF(o, s16, 0xEA) = 0;
        return 1;
    }
    if (!(MoveCollide(o) & 0x2000)) {
        if (++AF(o, s16, 0xE8) >= 0x5A) return -1;
    }
    AF(o, s16, 0xE8) = 0;
    return 1;
}

s32 func_sc03_006_801888A8(u8 *o, s32 m) {
    if (m & 1) {
        if (!(AF(o, u16, 0xDC) & 2)) {
            return 1;
        }
        QueueImage(&D_sc03_006_801CB010);
    } else {
        if (!(m & 2)) {
            return 1;
        }
        if (!(AF(o, u16, 0xDC) & 1)) {
            return 1;
        }
        QueueImage(&D_sc03_006_801CB1E0);
    }
    AF(o, s16, 0xDC) = m;
    return 0;
}

void func_sc03_006_8018893C(u8 *o) {
    if (rand() & 1) {
        AF(o, s16, 2) = 1;
    } else {
        AF(o, s16, 2) = 3;
    }
}

void func_sc03_006_80188978(u8 *arg0, s32 arg1, s32 arg2) {
    s32 one = 1;
    u8 *p;

    StopWithGravity((s32) arg0);
    InitMime(&D_sc03_006_801F7730, arg1, D_sc03_006_801CAE68);
    if (AF(arg0, u16, 0xDC) & 2) {
        QueueImage(&D_sc03_006_801CB010);
        AF(arg0, s16, 0xDC) = one;
    }
    AF(arg0, s32, 0x1C) = arg2;
    AF(arg0, u16, 0x5C) &= 0xFFFE;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = (AF(arg0, u16, 0x62) + 0x800) & 0xFFF;
    p = AF(arg0, u8 *, 0x20);
    AF(p, s16, 0x14) = 0;
    AF(p, s16, 0x10) = 0;
}

void func_sc03_006_80188A2C(StageActor *arg0) {
    SpawnDef *temp_v1;

    if (!(arg0->param & 0x8000)) {
        temp_v1 = arg0->def;
        if ((temp_v1 != NULL) && ((s16)arg0->animFlags & 0x8000)) {
            temp_v1->flags = (u16) (temp_v1->flags & 0x7FFF);
        }
    }
    FreeActor(arg0);
}

s32 func_sc03_006_80188A94(u8 *o) {
    V3 v;

    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    return v.x + v.z < 0x190000;
}

s32 func_sc03_006_80188AF4(Mover *o, V4 *d) {
    V4 pos;
    V4 out;
    SV8 a;
    SV8 b;
    WMtx m;

    m = GsIDMATRIX;
    RotMatrixY(HeadingToTarget(o), &m);
    ApplyMatrixLV(&m, d, &out);
    pos.x = o->pos[0].w + out.x;
    pos.y = o->pos[1].w + out.y;
    pos.z = o->pos[2].w + out.z;
    a.x = (u16)o->prev[0].h.i;
    a.y = (u16)o->prev[1].h.i;
    a.z = (u16)o->prev[2].h.i;
    b.x = AF(&pos, s16, 2);
    b.y = AF(&pos, s16, 6);
    b.z = AF(&pos, s16, 0xA);
    return CollidePath(&a, &b, 0);
}

s32 func_sc03_006_80188C18(u8 *o) {
    SV8 a;
    SV8 b;

    a.x = AF(o, u16, 6);
    a.y = AF(o, u16, 0xA);
    a.z = AF(o, u16, 0xE);
    b = a;
    b.y += 8;
    if (TraceMap(1, &a, &b) & 0x2000) {
        return 1;
    }
    return 0;
}

void func_sc03_006_80188C90(u8 *arg0) {
    void *temp_v0;

    D_sc03_006_801D2B4C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (IsActorFar((s32) arg0) == 1) {
            AF(arg0, s16, 0x102) = 1;
            func_sc03_006_8018A05C((s32) arg0);
        }
    }
}

void func_sc03_006_80188D1C(s32 arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_006_801D2A40) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_006_801D2A74;
        AF(arg0, s32, 0xB4) = 0xFFFBDFD9;
        AF(arg0, s32, 0xDC) = 0;
        AF(arg0, s16, 0x100) = 0x1000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        SpawnShadow(arg0);
        AF(arg0, s16, 2) = 1;
        UpdateModelZYX(arg0);
    }
}

s32 func_sc03_006_80188DA0(StageActor *arg0) {
    arg0->state = 2;
    arg0->stateCount = 0;
    return SetScript(arg0, (s32) &D_sc03_006_801D76C0);
}

void func_sc03_006_80188DD0(u8 *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_v0;

    if (AF(arg0, u16, 0x34) == 0) {
        if (DistSqToTarget((s32) arg0, arg1) <= 0x10000) {
            SetModelParts(AF(arg0, s32, 0x20), (s32) &D_sc03_006_801D477C);
            SetScript((s32) arg0, (s32) &D_sc03_006_801D78A8);
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else {
        temp_v0 = TurnStepToTarget((s32) arg0, 0xA);
        temp_a1 = AF(arg0, s32, 0x20);
        AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + temp_v0);
        if ((TickTimer((s32) arg0, temp_a1) != 0) || (temp_v0 == 0)) {
            AF(arg0, s16, 2) = 5;
        }
    }
}

void func_sc03_006_80188EA0(StageActor *arg0) {
    arg0->state = 4;
    SetScript((s32) arg0, (s32) &D_sc03_006_801D78A8);
    arg0->timer = (rand() % 17) + 0x28;
    arg0->ofs[1] = 0;
}

void func_sc03_006_80188F14(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_006_80188F48(u8 *o) {
    StopWithGravity(o);
    SetForwardVelocity(o, -0x20000);
    SetScript(o, &D_sc03_006_801D7998);
    AF(o, s32, 0x1C) = 0x96;
    if (g_Daytime == 0) {
        AF(o, s16, 2) = 7;
    } else {
        AF(o, s16, 2) = 6;
    }
}

void func_sc03_006_80188FB0(u8 *o) {
    if (TargetInSight(o, 0x400, 0x10000) == 1) {
        if (DistSqToTarget(o) < 0x3001) {
            AF(o, s16, 2) = 8;
            return;
        }
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, (s16) (rand() % 11 + 10));
        SetForwardVelocity(o, -0x20000);
        if (func_sc03_006_80189E88(o) == 0) {
            return;
        }
    } else {
        if (func_sc03_006_80189E88(o) == 0) {
            AF(o, s16, 2) = 10;
            AF(o, s32, 0xDC) |= 0x40;
            return;
        }
    }
    if (TickTimer(o) != 0) {
        func_sc03_006_80189DE0(o);
    }
}

void func_sc03_006_801890C4(u8 *o) {
    if (TargetInFront(o, 0x400) == 1) {
        if (DistSqToTarget(o) > 0x3000) {
            AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToTarget(o, (s16)(rand() % 5 + 4));
            SetForwardVelocity(o, -0x40000);
            func_sc03_006_80189E88(o);
        } else {
            AF(o, s16, 2) = 8;
        }
    } else if (func_sc03_006_80189E88(o) == 0) {
        AF(o, s16, 2) = 10;
    }
}

void func_sc03_006_80189194(StageActor *arg0, s32 arg1, s32 arg2) {
    arg0->state = 9;
    SetScript((s32) arg0, (s32) &D_sc03_006_801D7A58, arg2);
    arg0->timer = 0x1E;
    func_sc03_006_80189E1C((s32) arg0);
}

void func_sc03_006_801891DC(s32 arg0) {
    s32 f;
    s32 m;

    AF(AF(arg0, s32, 0x20), s16, 0x12) += TurnStepToTarget(arg0, 0xA);
    if (AF(arg0, s32, 0xDC) & 0x20) {
        if (AF(arg0, s32, 0x1C) >= 0xA && AF(arg0, s32, 0x1C) < 0x17) {
            func_sc03_006_80189C68(arg0);
        }
    } else {
        if (AF(arg0, s32, 0x1C) == 0x16) {
            func_sc03_006_80189B3C(arg0);
        }
        if (AF(arg0, s32, 0x1C) < 0x10) {
            func_sc03_006_80189CD4(arg0);
        }
    }
    if (TickTimer(arg0) != 0) {
        f = AF(arg0, s32, 0xDC);
        if (f & 1) {
            m = ~1;
        } else if (f & 0x10) {
            m = ~0x10;
        } else {
            goto other;
        }
        AF(arg0, s32, 0xDC) = f & m;
        AF(arg0, s16, 2) = 3;
        return;
other:
        if (TargetInSight(arg0, 0x400, 0x4000) == 0) {
            AF(arg0, s16, 2) = 5;
        } else {
            AF(arg0, s32, 0x1C) = 0x1E;
            func_sc03_006_80189E1C(arg0);
        }
    }
}

void func_sc03_006_80189304(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    AF(arg0, s16, 2) = 0xB;
    SetScript((s32) arg0, (s32) &D_sc03_006_801D78A8, arg2);
    temp_v0 = AF(arg0, s32, 0xDC);
    temp_v1 = temp_v0 & ~8;
    AF(arg0, s32, 0xDC) = temp_v1;
    if (temp_v0 & 0x40) {
        AF(arg0, s32, 0xDC) = (s32) (temp_v1 & ~0x40);
        var_v0 = 0x1E;
    } else {
        temp_v0_2 = rand();
        var_v0_2 = temp_v0_2 / 16;
        var_v0 = (temp_v0_2 - (var_v0_2 * 0x10)) + 0xF;
    }
    AF(arg0, s32, 0x1C) = var_v0;
    if (TargetInSight((s32) arg0, 0x400, 0x8000) == 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 8);
    }
}

void func_sc03_006_801893BC(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (AF(arg0, s32, 0xDC) & 8) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x44);
        goto block_3;
    }
    temp_v0 = TurnStepToTarget((s32) arg0, 8);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + temp_v0);
    if (temp_v0 != 0) {
block_3:
        if (TickTimer((s32) arg0) != 0) {
            goto block_4;
        }
    } else {
block_4:
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_006_8018944C(u8 *arg0) {
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
    func_sc03_006_80189B3C((s32) arg0);
}

void func_sc03_006_80189478(s32 arg0) {
    func_sc03_006_80189CD4(arg0);
}

void func_sc03_006_80189498(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, u16, 0x5C) = 0xAA10;
    AF(arg0, s16, 0xFE) = 0;
}

void func_sc03_006_801894B0(u8 *arg0) {
    if (AF(arg0, s16, 0x76) <= 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 2);
    }
    AF(arg0, s16, 0x52) = -0x30;
}

void func_sc03_006_801894DC(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == ((AF(arg0, s32, 0x1C) / 5) * 5)) {
        func_sc03_006_80189B3C((s32) arg0);
    }
    if (AF(arg0, s32, 0x1C) >= 0xB) {
        func_sc03_006_80189CD4((s32) arg0);
    }
}

void func_sc03_006_80189554(StageActor *arg0) {
    s16 sp[3];
    ModelObj *temp_a0;

    temp_a0 = arg0->model;
    if ((s32)temp_a0->parts == (s32) &D_sc03_006_801D478C) {
        SetModelParts(temp_a0, &D_sc03_006_801D477C);
    }
    arg0->timer = 0x18;
    AF(arg0, s32, 0xDC) &= ~0x10;
    if (arg0->hitCode == 0x23) {
        arg0->workFE = 1;
        PlaySoundId(0xAA1, 0);
    } else if (arg0->hitCode == 0x24) {
        sp[0] = 0;
        sp[1] = 0x10;
        sp[2] = 0;
        func_sc03_006_8018C090(arg0, sp, 0);
    }
}

void func_sc03_006_8018960C(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0xE) {
        func_sc03_006_80189B3C((s32) arg0);
    }
    if ((u32) (AF(arg0, s32, 0x1C) - 4) < 8U) {
        func_sc03_006_80189CD4((s32) arg0);
    }
    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_a0 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x1800) {
            AF(temp_a0, u16, 0x1C) = 0x1800U;
            AF(temp_a0, u16, 0x1A) = 0x1800U;
            AF(temp_a0, u16, 0x18) = 0x1800U;
        }
    }
}

void func_sc03_006_801896EC(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    if (AF(arg0, s16, 0xAA) == 0) {
        AF(arg0, u16, 0x100) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
        AF(arg0, s32, 0xDC) &= ~0x80;
    } else {
        AF(arg0, u16, 0x104) = AF(AF(arg0, u8 *, 0x20), u16, 0x18);
        AF(arg0, s32, 0xDC) |= 0x80;
    }
}

void func_sc03_006_80189744(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (g_PlayerAbsorbCounter * 8), arg1, arg2, arg3);
    if (AF(arg0, s16, 0xAA) == 0) {
        var_lo = temp_a0 * AF(arg0, s16, 0x100);
    } else {
        var_lo = temp_a0 * AF(arg0, s16, 0x104);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    var_v0 = var_lo;
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    temp_v0 = (u32) var_v0 >> 0xC;
    AF(temp_v1, s16, 0x1C) = (s16) temp_v0;
    AF(temp_v1, s16, 0x18) = (s16) temp_v0;
    temp_a0_2 = AF(arg0, void *, 0x20);
    if (AF(temp_a0_2, s16, 0x18) <= 0) {
        AF(temp_a0_2, s16, 0x1C) = 1;
        AF(temp_a0_2, s16, 0x18) = 1;
    }
}

void func_sc03_006_801897E8(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc03_006_801897F8(u8 *arg0, s32 arg1) {
    u8 *p1;
    u8 *p2;
    u8 *p3;
    s32 old;
    s32 d;

    if (TickTimer((s32) arg0, arg1) != 0) {
        if (AF(arg0, s32, 0xDC) & 0x80) {
            p1 = AF(arg0, u8 *, 0x20);
            AF(p1, s16, 0x18) = AF(p1, s16, 0x1C) = 0x1000;
            AF(arg0, s32, 0xDC) &= ~0x80;
        } else {
            p2 = AF(arg0, u8 *, 0x20);
            AF(p2, s16, 0x18) = AF(p2, s16, 0x1C) = AF(arg0, s16, 0x100);
        }
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, u16, 0x5C) |= 1;
        AF(arg0, s16, 0x62) = AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800;
        AF(arg0, s16, 0x5E) = 1;
        SetReactionStep((s32) arg0, 1);
    } else {
        p3 = AF(arg0, u8 *, 0x20);
        old = AF(p3, s16, 0x18);
        d = (AF(arg0, s16, 0x100) - old) / 4;
        old += d;
        AF(p3, s16, 0x18) = AF(p3, s16, 0x1C) = old;
    }
}

void func_sc03_006_801898E0(StageActor *arg0) {
    arg0->timer = 0x37;
    SetModelParts(arg0->model, (s32) &D_sc03_006_801D612C);
    SetScript((s32) arg0, (s32) &D_sc03_006_801D7D90);
    arg0->model->rot.vy = (u16) (u16)arg0->hitAngle;
}

void func_sc03_006_8018993C(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (TickTimer((s32) arg0, arg1) != 0) {
        GiveItem(0xB);
        DropItem((s32) arg0);
        func_sc03_006_8018A05C((s32) arg0);
    }
}

void func_sc03_006_801899B4(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    if (AF(arg0, s32, 0xDC) & 2) {
        AF(arg0, s32, 0x1C) = 0x2D;
        SetScript((s32) arg0, (s32) &D_sc03_006_801D7E70);
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) ((AF(arg0, u16, 0x62) + 0x800) & 0xFFF);
        AF(arg0, s16, 0x52) = 0;
    } else {
        AF(arg0, s32, 0x1C) = 0x37;
        SetModelParts((s32) AF(arg0, void *, 0x20), (s32) &D_sc03_006_801D612C);
        SetScript((s32) arg0, (s32) &D_sc03_006_801D7D90);
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
    }
    PlaySoundId(DistSqToTarget((s32) arg0) <= 0x8FFF ? 0x51F : 0x520, 0);
}

void func_sc03_006_80189A84(u8 *arg0, s32 arg1) {
    void *temp_v0;
    void *temp_v1;

    if ((AF(arg0, s32, 0xDC) & 2) && (AF(arg0, s32, 0x1C) >= 0x15)) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) - 0x28);
    }
    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (TickTimer((s32) arg0, arg1) != 0) {
        GiveItem(0xB);
        DropItem((s32) arg0);
        func_sc03_006_8018A05C((s32) arg0);
    }
}

void func_sc03_006_80189B3C(u8 *o) {
    UXY w;
    s32 a;
    u8 *p;
    s32 i;
    s32 t;

    if (AF(o, s16, 0xAA) > 0) {
        return;
    }
    for (i = 0; i < 10; i++) {
        p = (u8 *) SpawnPropFrom(o, 0x22);
        if (p != 0) {
            AngleToVec2(&w, rand() % 4096, rand() % 64);
            t = w.w;
            AF(p, u16, 6) += t;
            AF(p, u16, 0xA) -= 0x60;
            AF(p, u16, 0xE) += t >> 16;
            AF(p, s16, 0x34) = (rand() % 3 << 12) + 0x3000;
        }
    }
    PlaySoundId(0x521, 0);
}

s32 func_sc03_006_80189C68(StageActor *o) {
    if ((s32)o->message & 1) {
        return 0;
    }
    if (ActorSegmentDamagesPlayer(o, (s32)&D_sc03_006_801D2B7C, (s32)(&D_sc03_006_801D2B7C + 8), 0xB) != 1) {
        return 0;
    }
    AF(o, s32, 0xDC) |= 1;
    return 1;
}

s32 func_sc03_006_80189CD4(u8 *arg0) {
    SV4 d;
    SV4 p;
    u16 x;
    u16 y;
    u16 z;

    if (AF(arg0, u16, 0x5E) == 0x1E) {
        return 0;
    }
    if (PlayerFlag80() != 0) {
        return 0;
    }
    if (AF(arg0, s32, 0xDC) & 0x10) {
        return 0;
    }
    if (DistSqToPlayer(arg0) < 0x2401) {
        x = g_PlayerX;
        y = D_80126B62;
        z = D_80126B66;
        p.x = x;
        p.y = y;
        p.z = z;
        d.x = x - AF(arg0, u16, 6);
        d.y = y - AF(arg0, u16, 0xA);
        d.z = z - AF(arg0, u16, 0xE);
        VectorNormalSS(&d, &d);
        p.y -= 0x20;
        HitPlayer(1, 6, 0, 0, &p, &d);
        AF(arg0, s32, 0xDC) |= 0x10;
        return 1;
    }
    return 0;
}

void func_sc03_006_80189DE0(u8 *arg0) {
    if (rand() & 1) {
        AF(arg0, s16, 2) = 10;
    } else {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_006_80189E1C(u8 *o) {
    if (PlayerFlag80(o) != 0) {
        AF(o, s32, 0xDC) |= 0x20;
    } else if (rand() & 1) {
        AF(o, s32, 0xDC) |= 0x20;
    } else {
        AF(o, s32, 0xDC) &= ~0x20;
    }
}

s32 func_sc03_006_80189E88(u8 *o) {
    SV8 a;
    SV8 b;
    s32 ret;
    s32 f;
    s32 i;
    u8 *p;

    ret = 1;
    f = MoveOnGround(o);
    if ((f & 0xFF) == 2) {
        SetReactionStep(o, 0x12);
        return 0;
    }
    if (f & 0x8000) {
        if (!(f & 0x2000)) {
            RestorePrevPos(o);
        }
        ret = 0;
    }
    if ((f & 0x6000) != 0x2000) {
        RestorePrevPos(o);
        ret = 0;
    }
    AF(o, s32, 0xDC) &= ~0x40;
    for (p = (u8 *) &g_Actors, i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0xAF || AF(p, u16, 0) == 0x6F || AF(p, u16, 0) == 0x100) {
            if (AF(p, s32, 0x58) != 0 && o != p) {
                a.x = AF(o, u16, 0x3A);
                a.y = AF(o, u16, 0x3E);
                a.z = AF(o, u16, 0x42);
                b.x = AF(o, u16, 6);
                b.y = AF(o, u16, 0xA);
                b.z = AF(o, u16, 0xE);
                if (func_80135A4C(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0) {
                    if (!(CollidePath(&a, &b, 0) & 0x2000)) {
                        RestorePrevPos(o);
                        return ret;
                    }
                    AF(o, u16, 6) = b.x;
                    AF(o, u16, 0xA) = b.y;
                    AF(o, u16, 0xE) = b.z;
                    break;
                }
            }
        }
    }
    return ret;
}

void func_sc03_006_8018A05C(StageActor *arg0) {
    SpawnDef *temp_v1;

    if (arg0->work102 == 0) {
        GainStat0FromActor(arg0);
        if (arg0->react == 0xE) {
            GiveItem(0xB);
        }
    }
    if (!(arg0->param & 0x8000)) {
        temp_v1 = arg0->def;
        if ((temp_v1 != NULL) && ((s16)arg0->animFlags & 0x8000)) {
            temp_v1->flags = (u16) (temp_v1->flags & 0x7FFF);
        }
    }
    FreeActor(arg0);
}

void func_sc03_006_8018A100(s32 arg0, s32 arg1, s32 arg2) {
    PlaySoundId(0x6AA, 0, arg2);
}

void func_sc03_006_8018A124(StageActor *arg0) {
    if ((s32)arg0->reactOpts & 4) {
        func_sc03_006_8018A168();
        return;
    }
    func_sc03_006_8018A3D4((s32) arg0);
}

s32 func_sc03_006_8018A168(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
    SetScript(arg0, (s32) &D_sc03_006_801DFC6C);
    return StopWithGravity(arg0);
}

void func_sc03_006_8018A1B4(u8 *o) {
    s32 d;
    s32 r;
    u8 *p;
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 4);
        if (AF(o, s32, 0x1C) == 15) {
            SpawnHeadMarker(o, -0x78);
            PlaySoundId(0x6A9, 0);
        }
        if (TickTimer(o) != 0) {
            func_sc03_006_8018A4B4((s32)o);
        }
        break;
    case 1:
        r = TurnStepToTarget(o, 6);
        p = AF(o, u8 *, 0x20);
        d = D_sc03_006_801D7E84;
        AF(p, u16, 0x12) += r;
        SetForwardVelocity(o, d);
        func_sc03_006_8018A5C4((s32)o);
        func_sc03_006_8018A6F4(o);
        func_sc03_006_8018A384(o);
        func_sc03_006_8018A598(o);
        if (func_sc03_006_8018A698(o) != 0 || DistSqToTarget(o) > 0x40000) {
            func_sc03_006_8018A3D4(o);
        }
        if (TargetInSight(o, 0x300, 0x4000) != 0) {
            func_sc03_006_8018A538(o);
        }
        break;
    }
}

void func_sc03_006_8018A2F8(s32 arg0) {
    s32 *var_s1;

    var_s1 = &D_sc03_006_801D7F10;
    if (!(AF(arg0, u16, 0x70) & 0x2000)) {
        var_s1 = &D_sc03_006_801D7F10 + 0xC;
    }
    AF(arg0, s16, 2) = 7;
    SetScript(arg0, AF(var_s1, s32, 0));
    UpdateModelZYX(arg0);
    StopMotion(arg0);
    SetForwardVelocity(arg0, AF(var_s1, s32, 4));
    AF(arg0, s32, 0x1C) = (s32) AF(var_s1, s32, 8);
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
}

void func_sc03_006_8018A384(StageActor *arg0) {
    u16 temp_v0;

    temp_v0 = (u16)arg0->workFE - 1;
    arg0->workFE = temp_v0;
    if ((temp_v0 << 0x10) <= 0) {
        SpawnKind1C(arg0, 0);
        arg0->workFE = 8U;
    }
}

void func_sc03_006_8018A3D4(StageActor *o) {
    s32 a;

    o->state = 1;
    o->stateCount = 0;
    o->hitState = 0xAA10;
    o->timer = (rand() & 0x1F) + 0x24;
    if (func_sc03_006_8018A698(o) != 0) {
        o->unkFC = HeadingToPoint((u8 *)o + 4, (u8 *)o + 0x88);
    } else {
        a = (rand() & 0x3FF) - 0x200;
        if (a < 0) {
            a -= 0x300;
        } else {
            a += 0x300;
        }
        o->unkFC = ((u16)o->model->rot.vy + a) & 0xFFF;
    }
    SetScript(o, (s32)&D_sc03_006_801DFA6C);
}

s32 func_sc03_006_8018A484(StageActor *arg0) {
    arg0->state = 2;
    arg0->stateCount = 0;
    return SetScript(arg0, (s32) &D_sc03_006_801DF924);
}

void func_sc03_006_8018A4B4(StageActor *arg0) {
    arg0->state = 3;
    if (arg0->unk86 & 2) {
        arg0->stateCount = 1;
        arg0->timer = 0x28;
        SetScript(arg0, (s32) &D_sc03_006_801DFF34);
        arg0->workFE = 0;
        return;
    }
    arg0->stateCount = 0;
    SetScript(arg0, (s32) &D_sc03_006_801DFB14);
    arg0->timer = 0x19;
    arg0->unk86 = (u16) (arg0->unk86 | 2);
}

void func_sc03_006_8018A538(StageActor *o) {
    s32 t;

    o->state = 4;
    o->stateCount = 0;
    SetScript(o, (s32) &D_sc03_006_801E0084);
    t = D_sc03_006_801D7E84;
    o->timer = 0x28;
    D_sc03_006_801F7740 = t;
    PlaySoundId(0x660, 0);
}

s32 func_sc03_006_8018A598(StageActor *arg0) {
    return ActorSegmentDamagesPlayer(arg0, (s32) &D_sc03_006_801D7F28, (s32) (&D_sc03_006_801D7F28 + 8), 0x11);
}

s32 func_sc03_006_8018A5C4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = MoveOnGround(arg0);
    if (temp_v0 & 0x1000) {
        SetReactionStep(arg0, 0x12);
        return 0;
    }
    if (temp_v0 != 0x2000) {
        RestorePrevPos(arg0);
    }
    return 1;
}

void func_sc03_006_8018A624(StageActor *arg0) {
    u8 temp_v1;

    if (arg0->work100 == 0) {
        GainStat0FromActor(arg0);
    }
    temp_v1 = arg0->react;
    if ((temp_v1 == 5) || (temp_v1 == 0xD) || (temp_v1 == 0xB) || (temp_v1 == 0xE)) {
        GiveItem(7);
    }
    DespawnActor(arg0);
}

s32 func_sc03_006_8018A698(u8 *o) {
    V3 v;

    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    return v.x + v.z >= 0x190000;
}

s32 func_sc03_006_8018A6F4(Mover *p) {
    SV4 a;
    SV4 b;
    UXY w;
    UXY x;
    UXY *wp;
    s32 t;
    u16 c;
    u8 *q;
    u8 *o;
    s32 i;

    for (o = (u8 *) &g_Actors, i = 0; i < 0x60; i++, o += 0x10C) {
        if (p->kind == AF(o, u16, 0) && p != o) {
            if (DistSq((u8 *)p + 4, o + 4) < 0x1000) {
                wp = &w;
                AngleToVec2(wp, HeadingTo((u8 *)p + 4, o + 4), 0x41);
                b.x = AF(o, u16, 6);
                b.y = AF(o, u16, 0xA);
                b.z = AF(o, u16, 0xE);
                x = w;
                b.x += x.s.x;
                b.z += x.s.y;
                a.x = (u16)p->prev[0].h.i;
                a.y = (u16)p->prev[1].h.i;
                a.z = (u16)p->prev[2].h.i;
                if (!(CollidePath(&a, &b, 0) & 0x2000)) {
                    RestorePrevPos(p);
                } else {
                    p->pos[0].h.i = b.x;
                    p->pos[1].h.i = b.y;
                    p->pos[2].h.i = b.z;
                }
                return 1;
            }
        }
    }
    return 0;
}

void func_sc03_006_8018A86C(StageActor *arg0) {
    u8 temp_v1;

    D_sc03_006_801D7F38[arg0->state]();
    if ((arg0->kind != 0) && (arg0->pos[1].h.i >= 0x10)) {
        if (arg0->work100 == 0) {
            GainStat0FromActor((s32) arg0);
        }
        temp_v1 = arg0->react;
        if ((temp_v1 == 5) || (temp_v1 == 0xD) || (temp_v1 == 0xB) || (temp_v1 == 0xE)) {
            GiveItem(7);
        }
        DespawnActor((s32) arg0);
    }
}

void func_sc03_006_8018A928(s32 arg0) {
    MoveCollidePassable(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_sc03_006_8018A3D4(arg0);
    }
}

void func_sc03_006_8018A96C(u8 *o) {
    if (AF(o, s32, 0x1C) >= 4) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xFC), 8);
    }
    if (func_sc03_006_8018A698(o) == 0 && TargetInSight(o, 0x300, 0x10000) != 0) {
        func_sc03_006_8018A4B4((s32)o);
        return;
    }
    SetForwardVelocity(o, D_sc03_006_801D7E80);
    func_sc03_006_8018A5C4((s32)o);
    func_sc03_006_8018A6F4(o);
    if (TickTimer(o) != 0) {
        func_sc03_006_8018A484((s32)o);
        return;
    }
    if (IsActorFar(o) != 0) {
        AF(o, s16, 0x100) = 1;
        func_sc03_006_8018A624((s32)o);
    }
}

void func_sc03_006_8018AA60(u8 *arg0) {
    if ((AF(arg0, u16, 0x34) == 0) && (AF(arg0, u16, 0x72) & 0x4000)) {
        if ((func_sc03_006_8018A698((s32) arg0) == 0) && (TargetInSight((s32) arg0, 0x300, 0x40000) != 0)) {
            func_sc03_006_8018A4B4((s32) arg0);
            return;
        }
        func_sc03_006_8018A3D4((s32) arg0);
    }
}

void func_sc03_006_8018AAE4(u8 *o) {
    if (AF(o, u16, 0x34) == 0) {
        if (AF(o, s32, 0x1C) % 10 == 0) {
            D_sc03_006_801F7740 += 0x10000;
        }
        SetForwardVelocity(o, D_sc03_006_801F7740);
        func_sc03_006_8018A5C4((s32)o);
        func_sc03_006_8018A6F4(o);
        func_sc03_006_8018A598(o);
        if (--AF(o, s16, 0xFE) <= 0) {
            SpawnKind1C(o, 0);
            AF(o, s16, 0xFE) = -(D_sc03_006_801F7740 / 0x10000);
        }
        if (TickTimer(o)) {
            AF(o, s32, 0x1C) = 10;
            AF(o, u16, 0x34)++;
        }
    } else {
        if (TickTimer(o)) {
            func_sc03_006_8018A484((s32)o);
        }
    }
}

void func_sc03_006_8018AC10(s32 arg0, s32 arg1) {
    if (DistSqToTarget(arg0, arg1) < D_sc03_006_801D7F0C) {
        ShowModel(arg0);
        func_sc03_006_8018A2F8(arg0);
    }
}

void func_sc03_006_8018AC60(s32 arg0, s32 arg1, s32 arg2) {
    MoveObject(arg0, arg1, arg2);
    if (AF(arg0, u16, 0x70) & 0x2000) {
        func_sc03_006_8018A384(arg0);
        func_sc03_006_8018A598(arg0);
    }
    if (TickTimer(arg0) != 0) {
        AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
        func_sc03_006_8018A4B4(arg0);
    }
}

void func_sc03_006_8018ACD0(s32 arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_006_801D7E98) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s32 *, 0xBC) = &D_sc03_006_801D7ECC;
        SpawnShadow(arg0);
        SnapToGround(arg0);
        if (AF(arg0, u16, 0x70) & 0x6000) {
            AF(arg0, s16, 2) = 6;
            SetScript(arg0, (s32) &D_sc03_006_801DF924);
            HideModel(arg0);
            AF(arg0, s16, 0x5C) = 0;
        } else {
            func_sc03_006_8018A3D4(arg0);
        }
        UpdateModelZYX(arg0);
    }
}

void func_sc03_006_8018AD7C(StageActor *arg0) {
    DespawnActor(arg0);
}

void func_sc03_006_8018AD9C(StageActor *arg0) {
    s16 v[3];
    u16 t;

    t = arg0->hitCode;
    if (t == 0x23) {
        arg0->workFE = 1;
        PlaySoundId(0xAA1, 0);
    } else if (t == 0x24) {
        v[0] = 2;
        v[1] = 0xF;
        v[2] = -2;
        func_sc03_006_8018C090((s32) arg0, v, 0xD);
    }
}

void func_sc03_006_8018AE08(u8 *arg0) {
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_a0 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x1800) {
            AF(temp_a0, u16, 0x1C) = 0x1800U;
            AF(temp_a0, u16, 0x1A) = 0x1800U;
            AF(temp_a0, u16, 0x18) = 0x1800U;
        }
    }
}

void func_sc03_006_8018AE90(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    if (AF(arg0, s16, 0xAA) == 0) {
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
        return;
    }
    AF(arg0, u16, 0x102) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
}

void func_sc03_006_8018AED4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (g_PlayerAbsorbCounter * 8), arg1, arg2, arg3);
    if (AF(arg0, s16, 0xAA) == 0) {
        var_lo = temp_a0 * AF(arg0, s16, 0x100);
    } else {
        var_lo = temp_a0 * AF(arg0, s16, 0x102);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    var_v0 = var_lo;
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    temp_v0 = (u32) var_v0 >> 0xC;
    AF(temp_v1, s16, 0x1C) = (s16) temp_v0;
    AF(temp_v1, s16, 0x18) = (s16) temp_v0;
    temp_a0_2 = AF(arg0, void *, 0x20);
    if (AF(temp_a0_2, s16, 0x18) <= 0) {
        AF(temp_a0_2, s16, 0x1C) = 1;
        AF(temp_a0_2, s16, 0x18) = 1;
    }
}

void func_sc03_006_8018AF78(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc03_006_8018AF88(u8 *arg0) {
    u8 *p2;
    u8 *p3;
    s32 old;
    s32 d;

    if (TickTimer((s32) arg0) != 0) {
        p2 = AF(arg0, u8 *, 0x20);
        AF(p2, s16, 0x18) = AF(p2, s16, 0x1C) = AF(arg0, s16, 0x100);
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, u16, 0x5C) |= 1;
        AF(arg0, s16, 0x62) = AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800;
        AF(arg0, s16, 0x5E) = 1;
        SetReactionStep((s32) arg0, 1);
    } else {
        p3 = AF(arg0, u8 *, 0x20);
        old = AF(p3, s16, 0x18);
        d = (AF(arg0, s16, 0x100) - old) / 4;
        old += d;
        AF(p3, s16, 0x18) = AF(p3, s16, 0x1C) = old;
    }
}

void func_sc03_006_8018B034(StageActor *arg0) {
    if ((arg0->reactBits & 1) && ((s32)arg0->script != &D_sc03_006_801E7D24)) {
        SetScript((s32) arg0, (s32) &D_sc03_006_801E7D24);
    }
}

void func_sc03_006_8018B07C(u8 *arg0) {
    s32 var_a0;

    GiveItem(8);
    var_a0 = 0x43F;
    if (AF(arg0, u16, 0x5E) == 0x1D) {
        var_a0 = 0x440;
    }
    PlaySoundId(var_a0, 0);
}

void func_sc03_006_8018B0C4(StageActor *arg0) {
    arg0->state = 2;
    SetScript(arg0, (s32) &D_sc03_006_801E81AC);
    arg0->timer = 0x14;
}

s32 func_sc03_006_8018B104(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0 = DistSqToTarget(arg0);
    if (arg1 >= temp_v0) {
        func_sc03_006_8018B1B4(arg0);
        return 1;
    }
    temp_v0_2 = AF(arg0, u16, 0xDC) + 1;
    AF(arg0, u16, 0xDC) = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x79) {
        if (arg2 < temp_v0) {
            AF(arg0, s16, 2) = 1;
            SetScript(arg0, (s32) &D_sc03_006_801E8104);
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_sc03_006_8018B1B4(StageActor *arg0) {
    arg0->state = 4;
    SetScript(arg0, (s32) &D_sc03_006_801E7EC4);
    arg0->timer = 0x1E;
    if (arg0->unkFC == 0) {
        arg0->unkFC = 1;
        SpawnHeadMarker(arg0, -0x96);
    }
}

s32 func_sc03_006_8018B210(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0x14;
    return 0x14;
}

void func_sc03_006_8018B224(StageActor *arg0) {
    arg0->state = 3;
    SetScript(arg0, &D_sc03_006_801E7D24);
    arg0->hitState = arg0->init->hitState;
    arg0->hitCode = 0;
    AF(arg0, s16, 0xDC) = 0;
    arg0->timer = 0x3C;
    arg0->workFE = 0;
}

void func_sc03_006_8018B280(u8 *arg0) {
    void *temp_v1;

    D_sc03_006_801E0188[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        if (IsActorFar((s32) arg0) != 0) {
            DespawnActor((s32) arg0);
        }
    }
}

void func_sc03_006_8018B304(StageActor *arg0) {
    D_sc03_006_801E01A8[arg0->state]();
}

void func_sc03_006_8018B340(StageActor *arg0) {
    D_sc03_006_801E01F0[arg0->state]();
}

void func_sc03_006_8018B37C(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    arg0->state = 1;
    func_8001CA88(arg0->model, (s32) &D_sc03_006_801E01B0);
    func_80143994(arg0, 0x1000);
}

void func_sc03_006_8018B3E0(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x50;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(arg0, u16, 0xFC);
    UpdateModelZYX(arg0);
    StopMotion(arg0);
    SetForwardVelocity(arg0, -0xE0000);
}

void func_sc03_006_8018B438(s32 arg0) {
    s32 temp_v0;

    if ((MoveCollidePassable(arg0) != 0) || (ActorSegmentDamagesPlayer(arg0, (s32) &D_sc03_006_801E01FC, (s32) &D_800D3918, 0xA) != 0) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        FreeActor(arg0);
    }
}

void func_sc03_006_8018B4A4(u8 *o) {
    SV8 c;
    SpawnDef d;

    if (AF(o, s32, 0x1C) == 9) {
        if (ActorSegmentDamagesPlayer(o, &D_sc03_006_801E0170, &D_sc03_006_801E0170 + 8, 10) != 0) {
            g_PlayerHitKind |= 0x800;
        }
        if (AF(o, s16, 0x70) & 0x8000) {
            FaceHelper(o, &D_sc03_006_801E0180, &c);
            d.kind = 0x126;
            d.flags = 0;
            d.unkC = 0x7FFF;
            d.x = c.x;
            d.y = c.y;
            d.z = c.z;
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12);
            SpawnActorFromDef(&d, o);
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x100;
            SpawnActorFromDef(&d, o);
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12) - 0x100;
            SpawnActorFromDef(&d, o);
        }
        PlaySoundId(0x43E, 0);
    }
    if (TickTimer(o) != 0) {
        func_sc03_006_8018B224(o);
    }
}

void func_sc03_006_8018B5E0(u8 *arg0) {
    if (AF(arg0, s16, 0x70) & 0x8000) {
        if (DistSqToTarget(arg0) <= 0x90000) {
            func_sc03_006_8018B0C4((s32) arg0);
        }
    } else {
        if (DistSqToTarget(arg0) <= 0x24000) {
            func_sc03_006_8018B0C4((s32) arg0);
        }
    }
}

void func_sc03_006_8018B64C(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        func_sc03_006_8018B224(arg0);
    }
}

void func_sc03_006_8018B684(s32 arg0) {
    if (TickTimer(arg0) == 1) {
        if (AF(arg0, s16, 0x70) & 0x8000) {
            func_sc03_006_8018B104(arg0, 0x40000, 0xC4000);
        } else {
            func_sc03_006_8018B104(arg0, 0x9000, 0x24000);
        }
    }
}

void func_sc03_006_8018B6E8(s32 arg0) {
    s32 v;
    void *p;

    v = TurnStepToTarget(arg0, 4);
    p = AF(arg0, void *, 0x20);
    AF(p, u16, 0x12) += v;
    if (TickTimer(arg0) != 0) {
        func_sc03_006_8018B210(arg0);
    }
}

void func_sc03_006_8018B740(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, &D_sc03_006_801E00B4) != 0) {
        arg0->reactive = 1;
        arg0->reactMask = 0xFFFBFFFD;
        arg0->params = (s32 *)&D_sc03_006_801E00E8;
        arg0->reactOpts = 1;
        arg0->model->flags |= 0x10;
        arg0->work100 = (u16)arg0->model->scale.vx;
        temp_v0 = SpawnActorArg(0x125, arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        arg0->state = 1;
        SetScript(arg0, &D_sc03_006_801E8104);
    }
}

void func_sc03_006_8018B7F8(StageActor *arg0) {
    ModelObj *temp_v0;
    u16 t;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc03_006_801E1CA4);
    t = arg0->parent->id;
    arg0->state = 1;
    arg0->workFE = 0x7FFF;
    arg0->unkFC = t;
}

void func_sc03_006_8018B868(StageActor *o) {
    StageActor *p;
    SV8 c;

    p = o->parent;
    if (o->workFE == 0x7FFF) {
        o->workFE = (u16)o->model->rot.vy;
    }
    if (o->unkFC != (s16)o->parent->id) {
        FreeActor(o);
        return;
    }
    AF(o->model, SV8, 0x10) = AF(p->model, SV8, 0x10);
    if ((u8 *)o->parent->script != &D_sc03_006_801E82FC) {
        o->model->rot.vy = o->workFE;
        o->pos[0].w = o->parent->pos[0].w;
        o->pos[1].w = o->parent->pos[1].w;
        o->pos[2].w = o->parent->pos[2].w;
    } else {
        FaceHelper(o->parent, &D_sc03_006_801E01A0, &c);
        o->pos[0].h.i = c.x;
        o->pos[1].h.i = c.y;
        o->pos[2].h.i = c.z;
    }
    AF(o->model, SV8, 0x18) = AF(p->model, SV8, 0x18);
    o->model->flags |= p->model->flags & 0x10;
    o->model->unk04 = (s32)p->model->unk04;
}

void SetFlagF0(void) {
    SetFlag(0xF0, 1);
}

void func_sc03_006_8018BA1C(StageActor *arg0) {
    D_sc03_006_801F1714[arg0->state]();
}

void func_sc03_006_8018BA58(StageActor *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc03_006_8018BF78() == 1) || (temp_v0 = AllocActorSprite(), (temp_v0 == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    arg0->ext0 = temp_v0;
    InitSpriteKind3(temp_v0, (s32) &D_sc03_006_801F16C8, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    StartSpriteAnim(temp_v0, (s32) ((u8 *)arg0 + 0xDC), (s32) &D_sc03_006_801F16D4);
    func_sc03_006_8018BFD0((s32) arg0);
    AF(temp_v0, u16, 8) = (u16) (u16)arg0->pos[0].h.i;
    AF(temp_v0, u16, 0xA) = (u16) (u16)arg0->pos[1].h.i;
    AF(temp_v0, u16, 0xC) = (u16) (u16)arg0->pos[2].h.i;
    AF(temp_v0, s16, 0x1A) = 0x2000;
    AF(temp_v0, s16, 0x18) = 0x2000;
    AF(temp_v0, u16, 0x2C) = 0xC010;
    x = arg0->state;
    x++;
    temp_a2 = arg0->parent->id;
    arg0->timer = 0x180;
    arg0->state = x;
    arg0->work10A = temp_a2;
    PlaySoundId(0xAA0, 0, temp_a2);
}

void func_sc03_006_8018BB54(u8 *arg0) {
    u8 *q;
    u8 *o;
    u8 *p;
    s32 t;

    q = AF(arg0, u8 *, 0x64);
    if (AF(arg0, s16, 0x10A) == AF(q, s16, 0x36) && AF(q, s16, 0x76) > 0) {
        if (AF(arg0, s32, 0x1C) % 48 == 0 && AF(q, u8, 0xC1) == 0) {
            AF(q, s16, 0x60) = 0xA;
            AF(q, u16, 0x5C) |= 1;
            AF(q, s16, 0x62) = AF(AF(q, u8 *, 0x20), s16, 0x12) + 0x800;
            AF(q, s16, 0x5E) = 1;
            AF(q, s16, 0x7C) = AF(arg0, s16, 6);
            AF(q, s16, 0x7E) = AF(arg0, s16, 0xA);
            AF(q, s16, 0x80) = AF(arg0, s16, 0xE);
        }
        if (!(AF(arg0, s32, 0x1C) & 7)) {
            o = SpawnPropFrom(arg0, 0x22);
            if (o != 0) {
                AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
                AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
                AF(o, s16, 0xA) -= 0x20;
                AF(o, s32, 0x14) = 0xFFFC0000 - ((rand() % 3) << 16);
                t = rand();
                AF(o, s16, 0x34) = ((t % 6144 + 0x1000) & ~0xF) | (rand() & 1);
                AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC010;
                AF(AF(o, u8 *, 0x20), s32, 4) |= 0x40000000;
            }
        }
        p = AF(arg0, u8 *, 0xCC);
        if (p != 0) {
            StepSpriteAnim(p, arg0 + 0xDC);
            func_sc03_006_8018BFD0(arg0);
            AF(p, s16, 8) = AF(arg0, s16, 6);
            AF(p, s16, 0xA) = AF(arg0, s16, 0xA);
            AF(p, s16, 0xC) = AF(arg0, s16, 0xE);
            AF(p, s16, 0x18) += 0x15;
            AF(p, s16, 0x1A) += 0x15;
        }
        if (AF(q, u16, 0x5E) == 0x23) {
            AF(arg0, s16, 2)++;
        }
        if (TickTimer(arg0) == 0) {
            return;
        }
    }
    func_sc03_006_8018C04C(arg0);
}

void func_sc03_006_8018BDE4(StageActor *arg0) {
    u8 *p;
    u8 *o;

    p = (u8 *)arg0->ext0;
    if (p != 0) {
        StepSpriteAnim(p, (u8 *)arg0 + 0xDC);
        func_sc03_006_8018BFD0(arg0);
        AF(p, s16, 8) = arg0->pos[0].h.i;
        AF(p, s16, 0xA) = arg0->pos[1].h.i;
        AF(p, s16, 0xC) = arg0->pos[2].h.i;
        AF(p, s16, 0x18) -= 0x200;
        AF(p, s16, 0x1A) -= 0x200;
        if (AF(p, s16, 0x18) >= 0) {
            if (D_800B99DA % 5 == 0) {
                o = SpawnPropFrom(arg0, 0x22);
                if (o != 0) {
                    AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
                    AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
                    AF(o, s16, 0xA) -= 0x20;
                    AF(o, s32, 0x14) = 0xFFFC0000 - ((rand() % 4) << 16);
                    AF(o, s16, 0x34) = rand() % 6144 + 0x2000;
                    AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC010;
                }
            }
            return;
        }
    }
    func_sc03_006_8018C04C(arg0);
}

s32 func_sc03_006_8018BF78(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &g_Actors, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_006_8018BFD0(u8 *o) {
    SMtx m;
    SV8 c;
    StageActor *p;

    p = AF(o, u8 *, 0x64);
    if ((s16)p->id == AF(o, s16, 0x10A)) {
        GetPartWorldMatrix(p, AF(o, s16, 0xFC), &m);
        LocalToWorld(&m, o + 0x88, &c);
        AF(o, s16, 6) = c.x;
        AF(o, s16, 0xA) = c.y;
        AF(o, s16, 0xE) = c.z;
    }
}

void func_sc03_006_8018C04C(StageActor *arg0) {
    s32 temp_a0;

    temp_a0 = (s32)arg0->ext0;
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x38);
    }
    FreeActor(arg0);
}

void func_sc03_006_8018C090(StageActor *o, s16 *v, s32 arg2) {
    SpawnDef d;

    d.x = v[0];
    d.y = v[1];
    d.z = v[2];
    d.kind = 0x35C;
    d.flags = 0;
    d.unk8 = 0;
    d.unkE = arg2;
    d.unk10 = 0;
    d.unkC = 0x7FFF;
    SpawnActorFromDef(&d, o);
}

s32 func_sc03_006_8018C0F0()
{
    return SetActionHandler((s32) func_sc03_006_8018C118);
}

void func_sc03_006_8018C118(u8 *arg0) {
    D_sc03_006_801F2594[AF(arg0, u8, 0x214)]();
}

void func_sc03_006_8018C154(Player *arg0) {
    EndScene();
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    SetPlayerMotionIndex(arg0, 0x26);
    StartFace(arg0, 0x1E);
    arg0->model->rot.vx = 0xFE9;
    arg0->action208 = 0;
    NextPhase(arg0);
    func_sc03_006_8018C1C4(arg0);
}

void func_sc03_006_8018C1C4(Player *arg0) {
    ModelObj *temp_a0;
    ModelObj *temp_v1;

    temp_a0 = arg0->model;
    arg0->action208 = (s32) (arg0->action208 + 0x1C000);
    temp_a0->rot.vx = (u16) (((u16)temp_a0->rot.vx - AF(arg0, u16, 0x20A)) & 0xFFF);
    temp_v1 = arg0->model;
    if ((s16) (u16)temp_v1->rot.vx < 0xC00) {
        temp_v1->rot.vx = 0xC00U;
        arg0->animStatus = 1;
        NextPhase(arg0, arg0);
    }
}

void func_sc03_006_8018C240(Player *arg0) {
    if (arg0->animStatus & 0x8000) {
        SetPlayerMotionIndex((s32) arg0, 0x27);
        StartFace((s32) arg0, 0x1F);
        NextPhase((s32) arg0);
        ClearActionHandler((s32) arg0);
    }
}

void func_sc03_006_8018C29C(void) {
}

s32 func_sc03_006_8018C2A4()
{
    return SetActionHandler((s32) func_sc03_006_8018C2CC);
}

void func_sc03_006_8018C2CC(u8 *arg0) {
    D_sc03_006_801F25A4[AF(arg0, u8, 0x214)]();
}

void func_sc03_006_8018C308(Player *arg0) {
    EndScene();
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    arg0->model->rot.vx = 0xC00;
    SetPlayerMotionIndex(arg0, 0x27);
    StartFace(arg0, 0x1F);
    NextPhase(arg0);
    ClearActionHandler(arg0);
}

void func_sc03_006_8018C374(void) {
}

s32 func_sc03_006_8018C37C()
{
    return SetActionHandler((s32) func_sc03_006_8018C3A4);
}

void func_sc03_006_8018C3A4(u8 *arg0) {
    D_sc03_006_801F25AC[AF(arg0, u8, 0x214)]();
}

void func_sc03_006_8018C3E0(s32 arg0) {
    EndScene();
    SetPlayerMotion(arg0, (s32) &D_sc03_006_801F2528);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xC00;
    PlaySe(0xA05);
    NextPhase(arg0);
    func_sc03_006_8018C43C(arg0);
}

s32 func_sc03_006_8018C43C(s32 arg0) {
    s32 var_v0;

    var_v0 = AF(arg0, u16, 0xB8) & 0x8000;
    if (var_v0 != 0) {
        BeginScene();
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_sc03_006_8018C48C(void) {
}

s32 func_sc03_006_8018C494()
{
    return SetActionHandler((s32) func_sc03_006_8018C4BC);
}

void func_sc03_006_8018C4BC(u8 *arg0) {
    D_sc03_006_801F25B8[AF(arg0, u8, 0x214)]();
}

void func_sc03_006_8018C4F8(Player *arg0) {
    EndScene();
    SetPlayerMotionIndex(arg0, 0x24);
    StartFace(arg0, 0x1D);
    NextPhase(arg0);
    func_sc03_006_8018C58C(arg0);
}

void func_sc03_006_8018C548(Player *arg0) {
    if (arg0->animStatus == 0x8000) {
        SetPlayerMotionIndex((s32) arg0, 0x25);
        NextPhase((s32) arg0);
    }
}

void func_sc03_006_8018C58C(void) {
}
