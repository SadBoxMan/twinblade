#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
extern void func_sc06_029_801804C8();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_029_8017BE9C(void) {
}

void func_sc06_029_8017BEA4(void) {
}

void func_sc06_029_8017BEAC(void) {
}

void func_sc06_029_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_029_8018FFA8[])();
extern void (*D_sc06_029_8018FFB0[])();
extern void (*D_sc06_029_80190028[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_029_8017E408(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc06_029_80190030[])();
void func_sc06_029_8017E430(void);
extern void func_800D1EBC();
extern u8 D_sc06_029_801901CC;
extern void StartPlayerActionScript();
extern u8 D_sc06_029_801901D0;
extern void (*D_sc06_029_801901D8[])();
extern void func_sc06_029_8017E800();
extern void (*D_sc06_029_801901E0[])();
extern s32 func_sc06_029_8018612C();
extern void func_sc06_029_8018B20C();
extern void func_sc06_029_8018180C();
extern void (*D_sc06_029_8019073C[])();
extern void (*D_sc06_029_801908F8[])();
extern void (*D_sc06_029_80190940[])();
extern void (*D_sc06_029_801909E4[])();
extern void (*D_sc06_029_80190A00[])();
extern void (*D_sc06_029_80190A18[])();
extern void (*D_sc06_029_80190A20[])();
extern void (*D_sc06_029_80190A28[])();
extern void (*D_sc06_029_80190A30[])();
extern void (*D_sc06_029_80192174[])();
extern void func_sc06_029_80188BB0();
extern void (*D_sc06_029_801921BC[])();
extern void (*D_sc06_029_801921C8[])();
extern void (*D_sc06_029_801921D0[])();
extern void (*D_sc06_029_801921D8[])();
extern void (*D_sc06_029_801921E0[])();
extern void (*D_sc06_029_80192210[])();
extern void (*D_sc06_029_80192298[])();
extern void (*D_sc06_029_801922A4[])();
extern void (*D_sc06_029_801922F4[])();
extern void (*D_sc06_029_801D7288[])();
extern s32 func_sc06_029_8018B188();
extern void (*D_sc06_029_801D72C8[])();
extern void (*D_sc06_029_801D7300[])();
extern void (*D_sc06_029_801D7358[])();
extern void (*D_sc06_029_801D9980[])();

extern s32 PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();
extern u8 D_sc06_029_801D7294;
extern void (*D_sc06_029_801D72BC[])();
extern void StartRumbleScript();
extern void CollidePlayerMove();
extern s32 ProbePlatformByMove();
extern void ProbeGroundByMove();
extern s32 func_sc06_029_8018B2F8();
extern s32 PlaySe();
extern s32 NextObjState();
extern void PlaySePositional();
extern void DamagePlayerHp();
extern s32 ResetPlayerAfterHit();
extern s8 D_sc06_029_801E19A3;
extern u8 D_sc06_029_801E1990[];
extern s32 FreeEffect();
extern void SetObjTimer();
extern void func_801495C4();
extern s32 TickObjTimer();
extern void func_sc06_029_8018B8F8();
extern s32 D_sc06_029_801E2018;
extern s32 SpawnActor();

extern void (*D_sc06_029_801907B4[])();
extern void func_sc06_029_80181DF8();

extern s32 func_sc06_029_8017BF34();
extern s32 func_sc06_029_8017C8E4();

void func_sc06_029_8017BEBC(s32 arg0, s32 arg1) {
    func_sc06_029_8017BF34(arg0, arg1, 0xC, 0);
}

void func_sc06_029_8017BEE0(s32 arg0, s32 arg1, s16 arg2) {
    func_sc06_029_8017BF34(arg0, arg1, (s32) arg2, 0);
}

void func_sc06_029_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc06_029_8017BF34(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

extern s16 D_80126B30;
extern u8 D_sc06_029_801900B4;
extern void StartPlayerMotionAction();
extern s32 func_sc06_029_8018B1E0();
extern s32 SpawnEffectOn();
extern s32 FindEffectByKind();
extern s32 func_sc06_029_8018BF88();

extern s32 D_sc06_029_801DCCA0;
extern void SetClock();
extern s8 D_80078EC0;
extern void SetFlag80();
extern void SetFlag();
extern void ClearPlayerActionFlag01();
extern void SetPlayerActionFlag02();
extern void SetPlayerActionFlag08();
extern void SetWorkA3E7();
extern void SetPlayerMode1C6();
extern void BumpSub2Copy();
extern u8 D_sc06_029_8019003C;
extern u8 D_sc06_029_801900D8;
extern u8 D_sc06_029_80190148;
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
extern u8 D_sc06_029_80190448;
extern u8 D_sc06_029_80190780;
extern s32 SetupActor();
extern void SetModelCullBox();
extern s32 SpawnActorArg();
extern void func_sc06_029_80181D94();
extern void func_sc06_029_80182334();
extern void func_sc06_029_80181964();
extern s32 FreeActor();
extern u8 D_sc06_029_801DDB50;
extern s16 D_80126D20;
extern void func_sc06_029_80186044();
extern void NextState();
extern void ClearPlayerMode1C6();
extern s32 FindActorByKind();
extern s32 SetState();
extern s16 D_801152A0;
extern void (*D_sc06_029_80190D64[])();
extern s32 func_sc06_029_8018653C();
extern u16 D_800B99DA;
extern u8 D_sc06_029_801D79E4;
extern u8 D_sc06_029_80190D44[];
extern s32 QueueImage();
extern s32 TickTimer();
extern u8 D_sc06_029_801B956C;
extern u8 D_sc06_029_801D4D0C;
extern s32 D_sc06_029_801DFF6C;
extern s32 D_sc06_029_801DFF70;
extern s32 D_sc06_029_801DFF74;
extern s32 D_sc06_029_801DFF78;
extern s32 D_sc06_029_801DFF7C;
extern void MoveObject();
extern s32 TurnStepToPlayer();
extern s32 RequestBgmPack();
extern u16 D_sc06_029_801DFFDC;
extern void (*D_sc06_029_801922C4[])();
extern void func_sc06_029_80188D90();
extern void (*D_sc06_029_801922EC[])();
extern u8 D_sc06_029_801D812C;
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void func_8001C810();
extern void HideModel();
extern u8 D_sc06_029_801D7334;
extern void func_sc06_029_8018BE68();
extern u8 D_800D46E4;
extern u8 D_800D5880;
extern s32 ClearPlayerHittable();
extern void EnterPlayerStanding();
extern void SetPlayerMotionBlend();
extern void func_80165718();

extern u8 D_sc06_029_801DFDD4;
extern void ZeroFill();
extern u8 D_sc06_029_8018CCE8;
extern s32 MoveCollide();
extern void StartCameraShake();
extern void ShowModel();
extern s32 D_sc06_029_801DFF88;
extern u8 D_sc06_029_8018CCC4;
extern u8 D_sc06_029_801D7190;
extern u8 D_sc06_029_801D71B8;
extern void DrawPrimF4Screen();
extern void DrawPrimG4ScreenDithered();

extern s32 D_sc06_029_801DFD38[];

extern u8 *D_sc06_029_801DDB2C[];
extern s32 func_sc06_029_80180FE0();
extern void func_sc06_029_80181170();
extern s32 func_sc06_029_801812AC();
extern s32 func_sc06_029_80181334();

extern u8 D_sc06_029_801DFFF0;
extern void StepMime();

extern u8 D_sc06_029_80190534;
extern s32 GetPlayerAction();
extern void TakePlayerControlNoStop();
extern void StartEvent();
extern void DrawFadeWhite();

extern u8 D_sc06_029_801904F4;
extern u8 D_sc06_029_80190510;
extern u8 D_sc06_029_8019060C;
extern s32 GetFlag();
extern void func_8002959C();
extern s32 *D_sc06_029_80190680;
extern u8 D_sc06_029_801904D4;
extern s32 *D_sc06_029_801DFD8C;
extern void *D_sc06_029_801DFD90;
extern u8 D_sc06_029_801901F8;
extern s32 func_sc06_029_801857A4();
extern u8 D_sc06_029_801BF2BC;
extern void SetModelParts();
extern u8 D_sc06_029_8019122C;
extern void UpdateModelZYX();
extern u8 g_PlayerPosX;
extern s32 TurnStepToward();
extern void *g_PlayerModel;
extern u8 D_sc06_029_801D729C;
extern s32 ShowQueuedDamageNumber();
extern s32 SetPlayerMotion();
s32 func_sc06_029_8018B50C();
extern s32 SetPlayerEvent100();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
extern SV8 D_sc06_029_801E1EA4[4];
extern CV D_sc06_029_801E1EC4;
extern CV D_sc06_029_801E1EC8;
extern u8 D_sc06_029_801E1ECC;
extern u8 D_sc06_029_801E1ECD;
extern u8 D_sc06_029_801E1ECE;
extern u8 D_sc06_029_801E1ED0;
extern u8 D_sc06_029_801E1ED1;
extern u8 D_sc06_029_801E1ED2;
extern s32 D_sc06_029_801E1ED4;
extern void SetIdentityRot();
extern void DrawPrimG4Screen();

extern u8 D_sc06_029_80190490;
extern u8 D_sc06_029_801DDBF8;
extern u8 D_sc06_029_801DEBF8;
extern void func_sc06_029_8017C068();

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
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern s32 func_sc06_029_8018AE60();
extern s32 func_sc06_029_8018ADA4();

extern u8 D_sc06_029_80190970;
extern u8 D_sc06_029_801909B0;
extern void InitModel();

extern u8 D_sc06_029_801912F4;
extern s32 *D_sc06_029_801DFFE0;
extern void *D_sc06_029_801DFFE4;
extern void *D_sc06_029_801DFFE8;
extern void *D_sc06_029_801DFFEC;
extern u8 D_sc06_029_80191424;

extern u8 D_sc06_029_801913F4;

extern u8 D_sc06_029_801904A0;
extern s32 UpdateScript();
extern void EndEvent();
extern void BlendCameraThen();

extern u16 g_Actors;

typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 D_sc06_029_801E19A4;
extern s32 func_sc06_029_8018B7B8();

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
extern u8 D_sc06_029_8018FF78[];
extern s32 SpawnFromDef();

s32 func_sc06_029_8017BF34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FeS14s s;
    s32 r;

    s.a = 0x6B;
    s.x = -0x94;
    s.e = arg2;
    s.y = -0x68;
    s.z = 0;
    s.b = arg3;
    s.c = 0;
    s.f = ((s32 *)&D_sc06_029_8018FF78)[(s16) arg2];
    r = SpawnFromDef((s32) &s);
    if (r != 0) {
        AF(r, s32, 0xD4) = arg0;
        AF(r, s32, 0xD8) = arg1;
    }
    return r;
}

void func_sc06_029_8017BFBC(s32 arg0, s32 arg1) {
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

void func_sc06_029_8017C010(s32 arg0, s32 arg1, s16 arg2) {
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


void func_sc06_029_8017C068(void) {
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

void func_sc06_029_8017C114(StageActor *arg0) {
    D_sc06_029_8018FFA8[arg0->state]();
}

extern void func_800D20C0();
extern void func_800D23D0();
extern s32 D_sc06_029_8018C894[];
extern void LocalToWorld();
extern u8 g_GroundNormal;
extern u8 D_sc06_029_801D9948;
extern WMtx *D_sc06_029_801D997C;
extern WMtx D_sc06_029_801E1FF8[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern s32 FindGround();
extern s8 D_sc06_029_801D9934[];
extern void DrawPrimG4Mtx();

extern s32 rand();
extern WMtx D_800AF648;
extern SMtx D_sc06_029_801DFD94;
extern SMtx D_sc06_029_801DFDB4;
extern s32 D_sc06_029_801DFDA8[];
extern s32 D_sc06_029_801DFDC8[];
extern u8 D_sc06_029_80190450[];
extern u16 D_sc06_029_801904AC[];
extern u8 D_sc06_029_80190348;
extern u8 D_sc06_029_801903C8;
extern u8 D_sc06_029_801902C0;
extern u8 D_sc06_029_80190240;
extern u8 D_sc06_029_80190238;
extern SV8 D_sc06_029_80190218[];
extern u8 *D_sc06_029_801DDBF4;
extern u8 *D_sc06_029_801DDBF0;
extern void RotMatrixZYX();
extern void FaceHelper();
extern s32 rsin();
extern void func_sc06_029_80182388();
extern void func_sc06_029_801825D8();

extern void func_sc06_029_8017FE58();
extern s32 D_sc06_029_8019070C[];
extern s32 D_sc06_029_80190704[];
extern s32 D_sc06_029_801DFD4C;
extern u8 D_sc06_029_80190728[];
extern u8 *D_sc06_029_801DDB34[];
extern s32 SpawnActorFromDef();
extern u8 D_sc06_029_801A072C;
extern void SelectCollisionMap();
extern u8 D_sc06_029_801904A4;
extern void func_sc06_029_801814B0();
extern s32 func_80174774();
extern void GiveItem();

extern u8 *AllocActorSprite();
extern void func_8001CD9C();
extern u8 *D_sc06_029_801DDB28;
extern s32 func_sc06_029_8018452C();
extern void func_sc06_029_80184564();
extern s32 MoveCollideAt();
extern s32 D_sc06_029_801DFF68;
extern SV8 D_sc06_029_801912AC;
extern SV8 D_sc06_029_80191274;
extern u8 D_sc06_029_8019127C;
extern WMtx GsIDMATRIX;
extern SV8 D_sc06_029_8019125C;
extern SV8 D_sc06_029_80191264;
extern u8 D_sc06_029_8019218C;
extern s32 HeadingToPoint();
extern void func_sc06_029_801885C0();
extern s32 PosSVecDistSq();
extern void RotMatrixY();
extern void ApplyMatrixLV();
extern s32 D_801269A4;
extern s32 D_801269A8;
extern s32 D_801269AC;
extern s8 D_sc06_029_8018F650[];
extern s8 D_sc06_029_8018F664[];
extern SV8 D_sc06_029_801922AC;
extern SV8 D_sc06_029_801922B4;
extern SV8 D_sc06_029_801922BC;
static inline void aim_80188D90(StageActor *o, WMtx *m) {
    SV8 a;
    SV8 r;
    V3 v;
    FaceHelper(o, &D_sc06_029_801922BC, &a);
    func_800D20C0(&a, &r, 8);
    SetMatrixTrans(&a, m);
    r.x = D_sc06_029_801922AC.x - D_sc06_029_801922B4.x;
    r.y = D_sc06_029_801922AC.y - D_sc06_029_801922B4.y;
    r.z = D_sc06_029_801922AC.z - D_sc06_029_801922B4.z;
    ApplyMatrixSV((u8 *)o->model + 0x34, &r, &r);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, m);
    v.x = D_801269A4 - a.x;
    v.y = D_801269A8 - a.y;
    v.z = D_801269AC - a.z;
    ApplyTransposeMatrixLV(m, &v, &v);
    r.z = -ratan2(v.x, v.y);
    RotMatrixYXZ(&r, m);
}


typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
extern u8 D_sc06_029_801DCCA8[];
extern void func_sc06_029_8017DF74();
extern void PosToSVec();
extern SV8 D_sc06_029_8018FFB8[];
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
extern s16 D_sc06_029_8018FF74; extern s16 D_sc06_029_8018FF68; extern s16 D_sc06_029_8018FF5C; extern u8 D_sc06_029_801DCBD8; extern u8 *AllocActorSprite(); extern void SjisToGlyphs(); extern void InitTextSprite(); extern s16 D_sc06_029_801DCC00; extern s16 D_sc06_029_801DCC10; extern s16 D_sc06_029_801DCC0A; extern s16 D_sc06_029_801DCC02; extern s16 D_sc06_029_801DCC1A; extern s16 D_sc06_029_801DCC12; extern s16 D_sc06_029_801DCC3E; extern s16 D_sc06_029_801DCC36; extern s16 D_sc06_029_801DCC4E; extern s16 D_sc06_029_801DCC46; extern s16 D_sc06_029_801DCC68; extern s16 D_sc06_029_801DCC78; extern s16 D_sc06_029_801DCC72; extern s16 D_sc06_029_801DCC6A; extern s16 D_sc06_029_801DCC82; extern s16 D_sc06_029_801DCC7A; extern s16 D_sc06_029_801DCC6C; extern s16 D_sc06_029_801DCC38; extern s16 D_sc06_029_801DCC04; extern u8 D_sc06_029_801DCC28; extern u8 D_sc06_029_801DCC20; extern u8 D_sc06_029_801DCC2C; extern u8 D_sc06_029_801DCC24; extern u8 D_sc06_029_801DCC29; extern u8 D_sc06_029_801DCC21; extern u8 D_sc06_029_801DCC2E; extern u8 D_sc06_029_801DCC2A; extern u8 D_sc06_029_801DCC26; extern u8 D_sc06_029_801DCC22; extern u8 D_sc06_029_801DCC5C; extern u8 D_sc06_029_801DCC54; extern u8 D_sc06_029_801DCC5D; extern u8 D_sc06_029_801DCC55; extern u8 D_sc06_029_801DCC61; extern u8 D_sc06_029_801DCC59; extern u8 D_sc06_029_801DCC94; extern u8 D_sc06_029_801DCC90; extern u8 D_sc06_029_801DCC8C; extern u8 D_sc06_029_801DCC88; extern u8 D_sc06_029_801DCC95; extern u8 D_sc06_029_801DCC91; extern u8 D_sc06_029_801DCC8D; extern u8 D_sc06_029_801DCC89; extern u8 D_sc06_029_801DCC96; extern u8 D_sc06_029_801DCC92; extern u8 D_sc06_029_801DCC8E; extern u8 D_sc06_029_801DCC8A; extern u8 D_sc06_029_801DCC62; extern u8 D_sc06_029_801DCC5E; extern u8 D_sc06_029_801DCC5A; extern u8 D_sc06_029_801DCC56; extern s32 D_sc06_029_801DCC64; extern s32 D_sc06_029_801DCC30; extern s32 D_sc06_029_801DCC98;
extern s32 AllocSprite16To3E();
extern XY D_sc06_029_801D7114[];
extern u8 D_sc06_029_801D7140[];
extern B4 D_sc06_029_801D714C[];
extern u8 D_sc06_029_801D7178;
extern B4 D_sc06_029_801D7278, D_sc06_029_801D7274, D_sc06_029_801D7244, D_sc06_029_801D7240, D_sc06_029_801D7210, D_sc06_029_801D720C, D_sc06_029_801D71DC, D_sc06_029_801D71D8, D_sc06_029_801D71B0;
extern void InitSpriteKind0();

void func_sc06_029_8017C150(StageActor *o) {
    u8 *m;
    s16 x1;
    s16 y1;
    s16 y2;
    s16 x2;
    s16 y;
    D_sc06_029_8018FF74 = 0;
    D_sc06_029_8018FF68 = 0;
    D_sc06_029_8018FF5C = 0;
    if (AF(o, u8 *, 0xD0) == 0) {
        m = AllocActorSprite();
        if (m == 0) return;
        SjisToGlyphs(o->message, &D_sc06_029_801DCBD8);
        InitTextSprite(m, &D_sc06_029_801DCBD8);
        AF(m, s16, 8) = o->pos[0].h.i + 6;
        AF(m, s16, 0xA) = o->pos[1].h.i + 9;
        AF(m, s16, 0x2C) = 3;
        AF(m, u8, 0x27) = 1;
        o->ext1 = m;
    }
    x1 = o->pos[0].h.i;
    D_sc06_029_801DCC00 = x1;
    D_sc06_029_801DCC10 = x1 - 4;
    y1 = AF(o, s16, 0xA);
    D_sc06_029_801DCC02 = D_sc06_029_801DCC0A = y1;
    D_sc06_029_801DCC12 = D_sc06_029_801DCC1A = y1 + 7;
    y2 = AF(o, s16, 0xA);
    D_sc06_029_801DCC36 = D_sc06_029_801DCC3E = y2;
    D_sc06_029_801DCC46 = D_sc06_029_801DCC4E = y2 + 7;
    x2 = AF(o, s16, 6);
    D_sc06_029_801DCC68 = x2 + 2;
    D_sc06_029_801DCC78 = x2 - 2;
    y = AF(o, s16, 0xA);
    D_sc06_029_801DCC20 = D_sc06_029_801DCC28 = 0xFF;
    D_sc06_029_801DCC24 = D_sc06_029_801DCC2C = 0xFF;
    D_sc06_029_801DCC21 = D_sc06_029_801DCC29 = 0;
    D_sc06_029_801DCC2A = D_sc06_029_801DCC2E = 0;
    D_sc06_029_801DCC22 = D_sc06_029_801DCC26 = 0;
    D_sc06_029_801DCC54 = D_sc06_029_801DCC5C = 0xFF;
    D_sc06_029_801DCC6A = D_sc06_029_801DCC72 = y + 4;
    D_sc06_029_801DCC7A = D_sc06_029_801DCC82 = y + 0xB;
    D_sc06_029_801DCC55 = D_sc06_029_801DCC5D = 0xFF;
    D_sc06_029_801DCC59 = D_sc06_029_801DCC61 = 0xFF;
    D_sc06_029_801DCC88 = D_sc06_029_801DCC8C = D_sc06_029_801DCC90 = D_sc06_029_801DCC94 = 0x40;
    D_sc06_029_801DCC89 = D_sc06_029_801DCC8D = D_sc06_029_801DCC91 = D_sc06_029_801DCC95 = 0x40;
    D_sc06_029_801DCC8A = D_sc06_029_801DCC8E = D_sc06_029_801DCC92 = D_sc06_029_801DCC96 = 0x40;
    D_sc06_029_801DCC56 = D_sc06_029_801DCC5A = D_sc06_029_801DCC5E = D_sc06_029_801DCC62 = 0;
    D_sc06_029_801DCC04 = D_sc06_029_801DCC38 = 2;
    D_sc06_029_801DCC6C = 4;
    D_sc06_029_801DCC30 = D_sc06_029_801DCC64 = 0;
    D_sc06_029_801DCC98 = 0x60000000;
    if (AF(o, s16, 0x70) == 0) o->param = 0x100;
    D_sc06_029_8018FF74 = 2;
    AF(o, s16, 2)++;
}

extern s32 SpawnProp();
extern void AngleToVec2();
typedef struct { s16 lx, x, ly, y, lz, z; } P12;
extern u8 D_sc06_029_801DFBF8[];
extern void HeadingPitchTo();
extern void WorldToLocal();
extern void func_sc06_029_801859F4();
extern u16 g_PlayerX;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern u8 D_sc06_029_80191254;
extern void GetPartWorldMatrix();
extern s32 PosDistSq();
extern u8 D_sc06_029_801E0001;

extern s32 D_sc06_029_8019071C[];
extern u8 D_sc06_029_80190808;
extern SV8 D_sc06_029_801DFE94[];
extern SV8 D_sc06_029_801DFEDC[];
extern SV8 D_sc06_029_801DFED4;
extern SV8 D_sc06_029_801DFF1C;
extern s32 D_sc06_029_801DFF24;
extern s32 D_sc06_029_801DFF28;
extern void SetShapeCircle();
extern s32 rcos();

extern s32 EaseAngle();
extern s32 EaseValue();
extern u8 D_sc06_029_80190451;
extern u8 D_sc06_029_80190452;
extern s32 D_sc06_029_801DFD50;
extern void MapPartsTmd();
extern u8 D_sc06_029_801A0720;
extern s32 D_sc06_029_8019EA38[];
extern void StoreImage();
extern s32 func_sc06_029_80180030();

extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];
extern s32 D_sc06_029_801909F0[];
extern s32 PathHitsModel();
extern void HitPlayer();
extern SV8 D_sc06_029_801DDB40[];
extern void func_sc06_029_80185214();

extern s32 TakeDamage();
extern s32 func_8016B3F4();

extern void GetPartLocalMatrix();
extern void RotTransSV();

extern void SpawnEffect();
extern SV8 D_sc06_029_801D7314[];
extern CV *D_sc06_029_801D72F8[];

extern XY D_sc06_029_8019094C[];
extern s32 g_CameraProj;
extern u8 D_800AF630;

extern u8 D_800D3918;
extern SV8 D_sc06_029_801DDB48;
typedef struct { u8 pad[0x10]; SV8 v; } H20;
extern s32 D_sc06_029_8019EA7C[];
extern s32 HeadingToSV();

extern s32 D_sc06_029_801DFF80;
extern s32 D_sc06_029_801DFF84;
extern u8 D_sc06_029_8018FFFC;
extern void StopWithGravity();
extern void SetProgress();
extern void func_800D1724();
extern u8 D_sc06_029_801C2AA4;
extern u8 D_sc06_029_801C2AEC;
extern SV8 D_sc06_029_8019123C;
extern void SpawnKind1C();
extern SV8 D_sc06_029_8019126C;
extern u8 D_sc06_029_8019219C;

extern u16 D_800B99D8;
extern void MoveImage();
extern s32 GroundDistSqToPlayer();
extern u8 D_sc06_029_8019217C;
extern s32 SetForwardVelocity();
extern u8 D_sc06_029_801B5EC8;
extern u8 D_sc06_029_801B90F4;
extern u8 D_sc06_029_801C5C70;
extern u8 D_sc06_029_801C8E38;
extern u8 D_sc06_029_801D4F0C;

extern u8 D_sc06_029_80190900;
extern void func_sc06_029_801834D8();
extern u8 D_sc06_029_80191474;
extern u8 D_sc06_029_801C2994;
extern u8 D_sc06_029_801CBE14;
extern u8 D_sc06_029_801CEE2C;
extern u8 D_sc06_029_801E0040;
extern void func_sc06_029_80189440();

extern s32 SVecDistSq();
extern s32 EaseValueStep();

extern u8 D_sc06_029_801913E4;
extern s16 D_sc06_029_801913E6;


extern void func_8001CD50();
extern u8 D_sc06_029_801E0000[];
extern s32 D_sc06_029_801E0004;

extern s16 D_sc06_029_801904C6[];
extern s16 D_sc06_029_801904CE[];


typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern s16 D_sc06_029_801D6914[];

typedef struct { s32 a, b; } P8;
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

void func_sc06_029_8017C43C(StageActor *arg0) {
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
            ((XY *)&D_sc06_029_8018FF5C)->x = (arg0->work108 * arg0->param) / max;
            if (((XY *)&D_sc06_029_8018FF5C)->x == 0 && tgt != 0) {
                ((XY *)&D_sc06_029_8018FF5C)->x = 1;
            }
        } else {
            s16 t = arg0->work10A;
            if (cur < t) {
                arg0->work108 = cur + (max * 3) / arg0->param;
                if (tgt < arg0->work108) {
                    arg0->work108 = max;
                }
                ((XY *)&D_sc06_029_8018FF5C)->x = (arg0->work108 * arg0->param) / max;
            } else if (t < max) {
                arg0->work10A = t + (max * 3) / arg0->param;
                if (max < arg0->work10A) {
                    arg0->work10A = max;
                }
                D_sc06_029_8018FF68 = (arg0->work10A * arg0->param) / max;
                D_sc06_029_8018FF74 = D_sc06_029_8018FF68 + 2;
            }
        }
    }
    if (arg0->unkFC == 0xB) {
        u8 c = (arg0->timer++ & 1) ? 0xC0 : 0;
        ((QuadArg *)&D_sc06_029_801DCC00)[0].c[2].g = c;
        ((QuadArg *)&D_sc06_029_801DCC00)[0].c[0].g = c;
        ((QuadArg *)&D_sc06_029_801DCC00)[1].c[3].b = c;
        ((QuadArg *)&D_sc06_029_801DCC00)[1].c[2].b = c;
        ((QuadArg *)&D_sc06_029_801DCC00)[1].c[1].b = c;
        ((QuadArg *)&D_sc06_029_801DCC00)[1].c[0].b = c;
        ((QuadArg *)&D_sc06_029_801DCC00)[0].c[3].b = c;
        ((QuadArg *)&D_sc06_029_801DCC00)[0].c[2].b = c;
        ((QuadArg *)&D_sc06_029_801DCC00)[0].c[1].b = c;
        ((QuadArg *)&D_sc06_029_801DCC00)[0].c[0].b = c;
    }
    half = arg0->param >> 1;
    n = ((XY *)&D_sc06_029_8018FF5C)->x;
    if (n < (s16)half) {
        s32 v;
        v = (n * 255) / (s16)half;
        ((QuadArg *)&D_sc06_029_801DCC00)[0].p[1].x = ((QuadArg *)&D_sc06_029_801DCC00)[0].p[0].x + n;
        ((QuadArg *)&D_sc06_029_801DCC00)[0].p[3].x = ((QuadArg *)&D_sc06_029_801DCC00)[0].p[1].x - 4;
        ((QuadArg *)&D_sc06_029_801DCC00)[0].c[3].g = v;
        ((QuadArg *)&D_sc06_029_801DCC00)[0].c[1].g = v;
    } else {
        s32 x;
        s16 xm;
        u8 *g;
        s32 v;
        v = ((n - (s16)half) * 255) / (s16)half;
        g = &((QuadArg *)&D_sc06_029_801DCC00)[0].c[1].g;
        *g = ((QuadArg *)&D_sc06_029_801DCC00)[0].c[3].g = 0xFF;
        x = (u16)((QuadArg *)&D_sc06_029_801DCC00)[0].p[0].x + half;
        xm = x - 4;
        ((QuadArg *)&D_sc06_029_801DCC00)[1].p[0].x = x;
        ((QuadArg *)&D_sc06_029_801DCC00)[1].p[1].x = ((QuadArg *)&D_sc06_029_801DCC00)[0].p[0].x + n;
        ((QuadArg *)&D_sc06_029_801DCC00)[0].p[1].x = x;
        ((QuadArg *)&D_sc06_029_801DCC00)[1].p[2].x = xm;
        ((QuadArg *)&D_sc06_029_801DCC00)[0].p[3].x = xm;
        ((QuadArg *)&D_sc06_029_801DCC00)[1].p[3].x = ((QuadArg *)&D_sc06_029_801DCC00)[1].p[1].x - 4;
        ((QuadArg *)&D_sc06_029_801DCC00)[1].c[3].r = -v;
        ((QuadArg *)&D_sc06_029_801DCC00)[1].c[1].r = -v;
        DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc06_029_801DCC00)[1]);
    }
    {
        s16 *p = &((QuadArg *)&D_sc06_029_801DCC00)[2].p[3].x;
        ((QuadArg *)&D_sc06_029_801DCC00)[2].p[1].x = ((QuadArg *)&D_sc06_029_801DCC00)[2].p[0].x + D_sc06_029_8018FF68;
        *p = ((QuadArg *)&D_sc06_029_801DCC00)[2].p[1].x - 4;
    }
    DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc06_029_801DCC00)[0]);
    DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc06_029_801DCC00)[2]);
}

s32 func_sc06_029_8017C8D0(void) {
    D_sc06_029_801DCCA0 = 0x80;
    return 0x80;
}

extern s32 D_sc06_029_801DDB3C;
extern SV8 D_sc06_029_80190858[];
extern SV8 D_sc06_029_801908D8[];
extern s32 D_sc06_029_801DFE54[];
typedef struct { u8 *a; u8 *b; } Pair;
extern void func_sc06_029_80183478();
extern s32 func_sc06_029_80183848();

extern void RotMatrixZ();

typedef struct { s32 w[4]; } W16;


typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s32 a; s32 b; s32 c; s8 d; s8 e; s8 f; } SndReq;
typedef struct { u32 *ot; s32 pad[4]; } OtE;
typedef struct { s32 w[0x95]; } B254;
typedef struct { s16 v; } S16R;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
typedef struct { s16 a; s16 b; s16 c[8]; s16 *p[8]; } S8A3FC;
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

s32 func_sc06_029_8017C8E4(void) {
    D_sc06_029_801DCCA0 -= 4;
    if (D_sc06_029_801DCCA0 < 0) {
        D_sc06_029_801DCCA0 = 0;
        return 1;
    }
    return 0;
}

s32 func_sc06_029_8017C918(void) {
    D_sc06_029_801DCCA0 += 4;
    if (D_sc06_029_801DCCA0 >= 0x80) {
        D_sc06_029_801DCCA0 = 0x80;
        return 1;
    }
    return 0;
}

extern s32 ReadGeomScreen();
extern void GsGetLs();
extern void GsSetLsMatrix();

void func_sc06_029_8017C954(u8 *obj) {
    s32 tmp[4];
    SV8 box[8];
    SV8 scr[8];
    SV8 v[3]; /* MATCH-TRICK: never used; the original frame has these 0x18 bytes before v3 (0xA0-0xB7) */
    SV8 v3;
    MtxDCM ls;
    GteDCM g;
    s32 zlim;
    u32 c1, c2;
    s32 i;
    u32 nf;
    s32 n;
    u8 *pk;
    u32 *ot;
    u8 *hdr;
    u8 *verts;
    ChunkDCM *c;
    u32 *poly;
    u32 j;
    u32 w;
    u32 x;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yh, yl, zh;
    s32 a, b;
    s32 type;
    u8 *d;
    u8 *d3;
    u32 t;
    s32 al;
    u32 al2;

    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(obj + 0x10, &ls);
    GsSetLsMatrix(&ls);
    pk = g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02];
    al = D_sc06_029_801DCCA0;
    c1 = (al << 16) | (al << 8) | al;
    al2 = al * 2;
    if (al2 >= 0x100) al2 = 0xFF;
    c2 = (al2 << 16) | (al2 << 8) | al2;
    c = AF(obj, ChunkDCM *, 0xC);
    hdr = AF(obj, u8 *, 8);
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, c++) {
        xl = c->x;
        xh = c->x >> 16;
        yl = c->y;
        yh = c->y >> 16;
        x = c->z;
        zh = x >> 16;
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
        box[2].z = zh;
        box[3].z = zh;
        box[6].z = zh;
        box[7].z = zh;
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
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
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
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
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
                t = poly[0];
                AF(pk, u32, 4) = AF(t, u32, 0);
                AF(pk, u32, 0xC) = AF(t, u32, 4);
                AF(pk, u32, 0x14) = AF(t, u32, 8);
                AF(pk, u16, 0x1C) = AF(t, u32, 0xC);
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
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
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
                t = poly[0];
                AF(pk, u32, 4) = AF(t, u32, 0);
                AF(pk, u32, 0xC) = AF(t, u32, 4);
                AF(pk, u32, 0x14) = AF(t, u32, 8);
                tw = AF(t, u32, 0xC);
                AF(pk, u16, 0x1C) = tw;
                tw >>= 16;
                AF(pk, u16, 0x24) = tw;
                otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x9000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x28;
                break;
            }
            case 3:
            { u32 *otp; u32 *otp2; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
                gte_stsxy3c(tmp);
                v3 = *(SV8 *)d;
                gte_ldv0(&v3);
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
                gte_stsxy(&tmp[3]);
                p3 = AF(tmp, s16, 0xC);
                if (p3 < xl) xl = p3; else if (p3 > xh) xh = p3;
                if (xh < -160 || xl > 160) continue;
                q3 = AF(tmp, s16, 0xE);
                if (q3 < yl) yl = q3; else if (q3 > yh) yh = q3;
                if (yh < -120 || yl > 120) continue;
                za = g.sz2; if (za < g.sz3) za = g.sz3;
                zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                if (zb < za) zb = za;
                g.z = zb;
                AF(pk, s32, 8) = tmp[0];
                AF(pk, s32, 0x10) = tmp[1];
                AF(pk, s32, 0x18) = tmp[2];
                AF(pk, s32, 0x20) = tmp[3];
                t = poly[0];
                AF(pk, u32, 4) = c1 | 0x2E000000;
                AF(pk, u32, 0xC) = AF(t, u32, 4);
                AF(pk, u32, 0x14) = AF(t, u32, 8);
                tw = AF(t, u32, 0xC);
                AF(pk, u16, 0x1C) = tw;
                tw >>= 16;
                AF(pk, u16, 0x24) = tw;
                otp = (u32 *)(((zb >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x9000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x28;
                AF(pk, u8, 3) = 6;
                AF(pk, u32, 8) = c2 | 0x2A000000;
                AF(pk, s32, 0xC) = tmp[0];
                AF(pk, u32, 4) = 0xE1000040;
                AF(pk, s32, 0x10) = tmp[1];
                AF(pk, s32, 0x14) = tmp[2];
                AF(pk, s32, 0x18) = tmp[3];
                otp2 = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp2 & 0xFFFFFF) | 0x6000000;
                *otp2 = (*otp2 & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x1C;
                break;
            }
            }
        }
    }
    g_PrimNext = pk;
}

void func_sc06_029_8017DBFC(u8 *arg0) {
    D_sc06_029_8018FFB0[AF(arg0, u16, 2)]();
}

void func_sc06_029_8017DC38(u8 *o) {
    s32 i, j;
    u8 *b, *e;
    for (i = 0; i < 8; i++) {
        b = D_sc06_029_801DCCA8 + i * 0x1D0;
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

void func_sc06_029_8017DDE0(u8 *o) {
    s32 i, j, n;
    u8 *b, *e;
    n = 0;
    for (i = 0; i < 8; i++) {
        b = D_sc06_029_801DCCA8 + i * 0x1D0;
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
        func_sc06_029_8017DF74(o, b);
    }
    if (n == 0x80) FreeEffect(o);
}

void func_sc06_029_8017DF74(u8 *o, u8 *b) {
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
        ApplyMatrixSV(&m, &D_sc06_029_8018FFB8[0], &v[0]);
        ApplyMatrixSV(&m, &D_sc06_029_8018FFB8[1], &v[1]);
        ApplyMatrixSV(&m, &D_sc06_029_8018FFB8[2], &v[2]);
        ApplyMatrixSV(&m, &D_sc06_029_8018FFB8[3], &v[3]);
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

void func_sc06_029_8017E22C(void) {
    SetClock(0x04740000);
}

void func_sc06_029_8017E24C(u8 *arg0) {
    D_sc06_029_80190028[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_029_8017E288(u8 *arg0) {
    func_sc06_029_8017E408();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_029_8017E2CC(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc06_029_8017E2F0(u8 *arg0) {
    D_sc06_029_80190030[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_029_8017E32C(u8 *arg0) {
    func_sc06_029_8017E430();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_029_8017E36C(u8 *arg0) {
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

void func_sc06_029_8017E3E8(void) {
    func_800D1EBC();
}

void func_sc06_029_8017E408(void) {
    StartPlayerActionScript((s32) &D_sc06_029_801901CC, 0x01000000);
}

void func_sc06_029_8017E430(void) {
    StartPlayerActionScript((s32) &D_sc06_029_801901D0, 0x01000000);
}

void func_sc06_029_8017E458(u8 *arg0) {
    D_sc06_029_801901D8[AF(arg0, u8, 0x216)]();
}

void EventGrantFinalState(s32 arg0) {
    SetFlag80(arg0);
    D_80078EC0 = 6;
    SetFlag(0x16, 1);
    SetFlag(0x17, 1);
    SetFlag(0x18, 1);
    SetFlag(0x19, 1);
    SetFlag(0x1A, 1);
    SetFlag(0x8A, 1);
    SetFlag(0x8B, 1);
    SetFlag(0x8C, 1);
    SetFlag(0x8D, 1);
    SetFlag(0x8E, 1);
    ClearPlayerActionFlag01();
    SetPlayerActionFlag02();
    SetPlayerActionFlag08();
    SetWorkA3E7();
    SetPlayerMode1C6();
    SpawnEffectOn(0x3B, arg0, 0, 0);
    BumpSub2Copy(arg0);
}

extern void func_800CCB78();
void func_sc06_029_8017E584(u8 *o) {
    s32 r;
    s16 y;

    r = FindEffectByKind(o, 0x3B);
    if (r != 0) {
        func_800CCB78(r);
    }
    if ((D_800B99DA & 0x1F) == 0) {
        SpawnEffectOn(0x3C, o, 0, 0);
    }
    y = AF(o, s16, 0xA);
    if (y > -0xC0) {
        AF(o, s16, 0xA) = -0xC0;
    } else if (y < -0x5C0) {
        AF(o, s16, 0xA) = -0x5C0;
    }
}

void func_sc06_029_8017E610(void) {
    StartPlayerMotionAction((s32) &D_sc06_029_8019003C);
    D_80126B30 = 0;
}

s32 func_sc06_029_8017E640(s32 arg0, s32 arg1) {
    StartPlayerMotionAction((s32) &D_sc06_029_801900B4);
    D_80126B30 = 0;
    return ClearActionHandler((s32) &g_Player);
}

void func_sc06_029_8017E680(void) {
    StartPlayerMotionAction((s32) &D_sc06_029_801900D8);
    D_80126B30 = 0;
}

void func_sc06_029_8017E6B0(void) {
    StartPlayerMotionAction((s32) &D_sc06_029_80190148);
    D_80126B30 = 0;
}

void func_sc06_029_8017E6E0(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x640;
    g_CameraAngleTarget = 0;
    D_8012696A = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc06_029_8017E800, 0);
    SnapCamera((s32) &g_Camera);
    func_sc06_029_8017E800((s32) &g_Camera);
}

void func_sc06_029_8017E770(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x640;
    g_CameraAngleTarget = 0;
    D_8012696A = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc06_029_8017E800, 1);
    SnapCamera((s32) &g_Camera);
    func_sc06_029_8017E800((s32) &g_Camera);
}

void func_sc06_029_8017E800(s32 arg0) {
    D_sc06_029_801901E0[AF(arg0, u8, 4)]();
}

extern SV8 g_CameraFocus;
extern void func_sc06_029_8017E95C(u8 *o, SV8 *a, SV8 *b, s32 dy);
void func_sc06_029_8017E83C(u8 *o) {
    SV8 a;
    SV8 b;
    s32 r;

    a = g_CameraFocus;
    b = g_CameraFocus;
    r = ratan2(a.x, a.z);
    a.y = -0x380;
    b.x = 0;
    b.z = 0;
    func_sc06_029_8017E95C(o, &a, &b, r & 0xFFF);
}

void func_sc06_029_8017E8DC(u8 *o) {
    SV8 a;
    SV8 b;

    *(B8 *)&a = *(B8 *)&g_CameraFocus;
    *(B8 *)&b = *(B8 *)&g_CameraFocus;
    a.y = -0x380;
    b.x = 0;
    b.z = 0;
    func_sc06_029_8017E95C(o, &a, &b, 0);
}

void func_sc06_029_8017E95C(u8 *o, SV8 *a, SV8 *b, s32 dy) {
    WMtx m;
    SV8 v;
    SV8 out;
    SV8 r;

    AF(o, s32, 8) = (s16)EaseValue(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)EaseValue(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = EaseAngle(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = EaseAngle(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = EaseAngle(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = EaseValue(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = EaseValue(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = EaseValue(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + b->x;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + b->y;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + b->z;
    r.x = AF(o, u16, 0x18);
    r.y = AF(o, u16, 0x1A) + dy;
    r.z = AF(o, u16, 0x1C);
    func_sc06_029_8018ABC0(&r, &m);
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    ApplyMatrixSV(&m, &v, &out);
    AF(o, s32, 0x3C) = (out.x >> 3) + AF(o, s16, 0x28);
    AF(o, s32, 0x40) = (out.y >> 3) + AF(o, s16, 0x2A) + a->y;
    AF(o, s32, 0x44) = (out.z >> 3) + AF(o, s16, 0x2C);
}

extern void (*D_sc06_029_801906C4[])();
extern SV8 D_sc06_029_801901E8[];
extern void func_sc06_029_80181378(u8 *o);
void func_sc06_029_8017EB24(StageActor *o) {
    D_sc06_029_801906C4[o->state](o);
    LocalToWorld((u8 *)g_PlayerModel + 0x34, &D_sc06_029_801901E8[0], &D_sc06_029_801DDB40[0]);
    LocalToWorld((u8 *)g_PlayerModel + 0x34, &D_sc06_029_801901E8[1], &D_sc06_029_801DDB40[1]);
    func_sc06_029_80181378(o);
}

void BossCoreInit(StageActor *o) {
    s32 i;
    s32 *q;

    if ((o->model = AllocActorModel()) == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(o->model, &D_sc06_029_801A0720);
    SetModelCullBox(o->model, 0x7FFF, 0x7FFF);
    MapPartsTmd(D_sc06_029_8019EA38);
    for (i = 0; i < 5; i++) {
        D_sc06_029_801DDB2C[i] = (u8 *)SpawnActorArg(0x294, i, o);
        AF(D_sc06_029_801DDB2C[i], s16, 0xA) -= i << 8;
        AF(D_sc06_029_801DDB2C[i], s16, 0xFC) = AF(AF(D_sc06_029_801DDB2C[i], u8 *, 0x20), s16, 0x12) = (i & 1) << 9;
        D_sc06_029_801DFD38[i] = 0;
    }
    D_sc06_029_801DDBF4 = AllocActorSprite();
    if (D_sc06_029_801DDBF4 != 0) {
        func_8001CD9C(D_sc06_029_801DDBF4, D_sc06_029_80190450);
        AF(D_sc06_029_801DDBF4, u16, 0x2C) = 0xC010;
        AF(D_sc06_029_801DDBF4, s32, 4) |= 0xD0000000;
        D_sc06_029_80190450[0] = 0;
        D_sc06_029_80190451 = 0;
        D_sc06_029_80190452 = 0;
    }
    o->timer = 0x100;
    D_sc06_029_801DDBF0 = 0;
    o->hp = 0x1E0;
    StoreImage(&D_sc06_029_80190490, &D_sc06_029_801DDBF8);
    StoreImage(&D_sc06_029_80190490 + 8, &D_sc06_029_801DEBF8);
    q = &D_sc06_029_801DFD4C;
    SetShapeCircle(q, 0xD0);
    *q = 0xFFFFFF;
    o->state = 1;
    D_sc06_029_801DFD50 = 0;
    D_sc06_029_801DDB28 = o;
    o->work10A = 0xFF;
    DrawFadeWhite(0xFF, 0);
    o->work100 = 2;
}

void BossIntro(s32 arg0) {
    if (GetPlayerAction() == 0) {
        TakePlayerControlNoStop();
        StartEvent(arg0, (s32) &D_sc06_029_80190534);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x34) = 0;
        AF(arg0, s32, 0x1C) = 3;
    }
    DrawFadeWhite(0xFF, 0);
}

void func_sc06_029_8017EE10(u8 *arg0) {
    s32 var_a1;
    void **var_a0;
    void *temp_v0;

    if (AF(arg0, u16, 0x34) == 0) {
        if (TickTimer((s32) arg0) == 0) {
            DrawFadeWhite(0xFF, 0);
        }
        if (UpdateScript((s32) arg0) == 1) {
            EndEvent((s32) arg0);
            func_sc06_029_8017BF08((s32) (arg0 + 0x76), (s32) &D_sc06_029_801904A0, 9, 0xF0);
            BlendCameraThen((s32) &func_sc06_029_8017E6E0);
            AF(arg0, s32, 0x1C) = 0x60;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else if (TickTimer((s32) arg0) != 0) {
        AF(arg0, s16, 2) = 4;
        for (var_a1 = 0; var_a1 < 5; var_a1++) {
            AF(((void **)&D_sc06_029_801DDB2C)[var_a1], s32, 0xE0) |= 4;
        }
    }
}

void func_sc06_029_8017EEFC(void) {
}

void func_sc06_029_8017EF04(StageActor *arg0) {
    arg0->state = 5;
    arg0->workEC = 0;
    arg0->stateCount = (s16) (arg0->work100 * 4);
    if (!(arg0->workE0 & 0x800)) {
        arg0->workFE = 0;
    }
}

void func_sc06_029_8017EF34(u8 *arg0) {
    s32 i;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        for (i = 0; i < 5; i++) {
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) |= 2;
        }
        AF(arg0, s32, 0x1C) = 0x180;
        AF(arg0, u16, 0x34) += 1;
        PlaySoundId(0x936, 0);
        break;
    case 1:
    case 5:
    case 9:
        if (func_sc06_029_801812AC(0) == 0) {
            break;
        }
        func_sc06_029_80180FE0(arg0, rand() % 5);
        if (!(AF(arg0, s32, 0xE0) & 0x800)) {
            if (AF(arg0, s16, 0xFE) < 3) {
                break;
            }
            AF(arg0, u16, 0x34) += 1;
            break;
        }
        if (AF(arg0, s16, 0x104) != AF(arg0, s16, 0xFE)) {
            AF(arg0, u16, 0x34) += 1;
            break;
        }
        if (TickTimer(arg0) == 0) {
            break;
        }
        AF(arg0, u16, 0x34) += 1;
        func_sc06_029_80181170(arg0);
        break;
    case 2:
        for (i = 0; i < 5; i++) {
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) &= ~2;
        }
        AF(arg0, u16, 0x34) += 1;
        break;
    case 3:
    case 7:
    case 11:
        if (func_sc06_029_80181334() != 1) {
            break;
        }
        AF(arg0, u16, 0x34) = 0xC;
        AF(arg0, s32, 0x1C) = 0x20;
        PlaySoundId(4, 0x936);
        func_sc06_029_80181170(arg0);
        break;
    case 4:
        for (i = 0; i < 5; i++) {
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) |= 1;
        }
        AF(arg0, s32, 0x1C) = 0x180;
        AF(arg0, u16, 0x34) += 1;
        PlaySoundId(0x936, 0);
        break;
    case 6:
        for (i = 0; i < 5; i++) {
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) &= ~1;
        }
        AF(arg0, u16, 0x34) += 1;
        break;
    case 8:
        AF(D_sc06_029_801DDB2C[0], s32, 0xE0) |= 1;
        AF(D_sc06_029_801DDB2C[1], s32, 0xE0) |= 2;
        AF(D_sc06_029_801DDB2C[2], s32, 0xE0) |= 1;
        AF(D_sc06_029_801DDB2C[3], s32, 0xE0) |= 2;
        AF(D_sc06_029_801DDB2C[4], s32, 0xE0) |= 1;
        AF(arg0, s32, 0x1C) = 0x180;
        AF(arg0, u16, 0x34) += 1;
        PlaySoundId(0x936, 0);
        break;
    case 10:
        AF(D_sc06_029_801DDB2C[0], s32, 0xE0) &= ~1;
        AF(D_sc06_029_801DDB2C[1], s32, 0xE0) &= ~2;
        AF(D_sc06_029_801DDB2C[2], s32, 0xE0) &= ~1;
        AF(D_sc06_029_801DDB2C[3], s32, 0xE0) &= ~2;
        AF(D_sc06_029_801DDB2C[4], s32, 0xE0) &= ~1;
        AF(arg0, u16, 0x34) += 1;
        break;
    case 12:
        if (TickTimer(arg0) == 0) {
            break;
        }
        if (!(AF(arg0, s32, 0xE0) & 0x800)) {
            AF(arg0, s16, 2) = 6;
        } else {
            AF(arg0, s16, 2) = 0xA;
            AF(arg0, u16, 0x102) += 1;
        }
        break;
    }
    AF(arg0, u16, 0x104) = AF(arg0, u16, 0xFE);
}

void func_sc06_029_8017F300(StageActor *arg0) {
    arg0->state = 7;
    arg0->workEC = 0;
    arg0->stateCount = (s16) (arg0->work100 * 4);
    if (!(arg0->workE0 & 0x800)) {
        arg0->workFE = 0;
    }
}

void func_sc06_029_8017F330(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(o, s32, 0xCC) = SpawnActorArg(0x2C1, 0, AF(D_sc06_029_801DDB2C[3], s32, 0xCC));
        AF(o, s32, 0xD0) = SpawnActorArg(0x2C1, 1, AF(D_sc06_029_801DDB2C[3], s32, 0xD0));
        AF(o, s32, 0xD4) = SpawnActorArg(0x2C1, 2, AF(D_sc06_029_801DDB2C[3], s32, 0xD4));
        AF(o, s32, 0xD8) = SpawnActorArg(0x2C1, 3, AF(D_sc06_029_801DDB2C[3], s32, 0xD8));
        AF(D_sc06_029_801DDB2C[1], s32, 0xE0) |= 2;
        AF(D_sc06_029_801DDB2C[3], s32, 0xE0) |= 2;
        AF(D_sc06_029_801DDB2C[0], s32, 0xE0) |= 8;
        AF(D_sc06_029_801DDB2C[2], s32, 0xE0) |= 8;
        AF(D_sc06_029_801DDB2C[4], s32, 0xE0) |= 8;
        AF(o, s32, 0x1C) = 0x180;
        AF(o, u16, 0x34) += 1;
        PlaySoundId(0x936, 0);
        break;
    case 1:
        if (func_sc06_029_801812AC(1) == 0) {
            break;
        }
        func_sc06_029_80180FE0(o, 2);
        if (!(AF(o, s32, 0xE0) & 0x800)) {
            if (AF(o, s16, 0xFE) < 3) {
                break;
            }
            AF(o, u16, 0x34) += 1;
            func_sc06_029_8017F970(AF(o, s32, 0xCC));
            func_sc06_029_8017F970(AF(o, s32, 0xD0));
            func_sc06_029_8017F970(AF(o, s32, 0xD4));
            func_sc06_029_8017F970(AF(o, s32, 0xD8));
            break;
        }
        if (AF(o, s16, 0x104) != AF(o, s16, 0xFE)) {
            AF(o, u16, 0x34) += 1;
            func_sc06_029_8017F970(AF(o, s32, 0xCC));
            func_sc06_029_8017F970(AF(o, s32, 0xD0));
            func_sc06_029_8017F970(AF(o, s32, 0xD4));
            func_sc06_029_8017F970(AF(o, s32, 0xD8));
            break;
        }
        if (TickTimer(o) == 0) {
            break;
        }
        AF(o, u16, 0x34) += 1;
        func_sc06_029_8017F970(AF(o, s32, 0xCC));
        func_sc06_029_8017F970(AF(o, s32, 0xD0));
        func_sc06_029_8017F970(AF(o, s32, 0xD4));
        func_sc06_029_8017F970(AF(o, s32, 0xD8));
        func_sc06_029_80181170(o);
        break;
    case 2:
        AF(D_sc06_029_801DDB2C[1], s32, 0xE0) &= ~2;
        AF(D_sc06_029_801DDB2C[3], s32, 0xE0) &= ~2;
        AF(D_sc06_029_801DDB2C[0], s32, 0xE0) |= 4;
        AF(D_sc06_029_801DDB2C[2], s32, 0xE0) |= 4;
        AF(D_sc06_029_801DDB2C[4], s32, 0xE0) |= 4;
        AF(o, u16, 0x34) += 1;
        break;
    case 3:
    case 7:
    case 11:
        if (func_sc06_029_80181334() != 1) {
            break;
        }
        AF(o, s32, 0x1C) = 0x20;
        AF(o, u16, 0x34) = 0xC;
        PlaySoundId(4, 0x936);
        func_sc06_029_80181170(o);
        break;
    case 4:
        AF(o, s32, 0xCC) = SpawnActorArg(0x2C1, 0, AF(D_sc06_029_801DDB2C[2], s32, 0xCC));
        AF(o, s32, 0xD4) = SpawnActorArg(0x2C1, 1, AF(D_sc06_029_801DDB2C[4], s32, 0xD0));
        AF(o, s32, 0xD0) = SpawnActorArg(0x2C1, 2, AF(D_sc06_029_801DDB2C[2], s32, 0xD4));
        AF(o, s32, 0xD8) = SpawnActorArg(0x2C1, 3, AF(D_sc06_029_801DDB2C[4], s32, 0xD8));
        AF(D_sc06_029_801DDB2C[0], s32, 0xE0) |= 1;
        AF(D_sc06_029_801DDB2C[2], s32, 0xE0) |= 1;
        AF(D_sc06_029_801DDB2C[4], s32, 0xE0) |= 1;
        AF(D_sc06_029_801DDB2C[1], s32, 0xE0) |= 8;
        AF(D_sc06_029_801DDB2C[3], s32, 0xE0) |= 8;
        AF(o, s32, 0x1C) = 0x180;
        AF(o, u16, 0x34) += 1;
        PlaySoundId(0x936, 0);
        break;
    case 5:
    case 9:
        if (func_sc06_029_801812AC(2) == 0) {
            break;
        }
        func_sc06_029_80180FE0(o, ((rand() & 1) * 2) | 1);
        if (!(AF(o, s32, 0xE0) & 0x800)) {
            if (AF(o, s16, 0xFE) < 3) {
                break;
            }
            AF(o, u16, 0x34) += 1;
            func_sc06_029_8017F970(AF(o, s32, 0xCC));
            func_sc06_029_8017F970(AF(o, s32, 0xD0));
            func_sc06_029_8017F970(AF(o, s32, 0xD4));
            func_sc06_029_8017F970(AF(o, s32, 0xD8));
            break;
        }
        if (AF(o, s16, 0x104) != AF(o, s16, 0xFE)) {
            AF(o, u16, 0x34) += 1;
            func_sc06_029_8017F970(AF(o, s32, 0xCC));
            func_sc06_029_8017F970(AF(o, s32, 0xD0));
            func_sc06_029_8017F970(AF(o, s32, 0xD4));
            func_sc06_029_8017F970(AF(o, s32, 0xD8));
            break;
        }
        if (TickTimer(o) == 0) {
            break;
        }
        AF(o, u16, 0x34) += 1;
        func_sc06_029_8017F970(AF(o, s32, 0xCC));
        func_sc06_029_8017F970(AF(o, s32, 0xD0));
        func_sc06_029_8017F970(AF(o, s32, 0xD4));
        func_sc06_029_8017F970(AF(o, s32, 0xD8));
        func_sc06_029_80181170(o);
        break;
    case 6:
        AF(D_sc06_029_801DDB2C[0], s32, 0xE0) &= ~1;
        AF(D_sc06_029_801DDB2C[2], s32, 0xE0) &= ~1;
        AF(D_sc06_029_801DDB2C[4], s32, 0xE0) &= ~1;
        AF(D_sc06_029_801DDB2C[1], s32, 0xE0) |= 4;
        AF(D_sc06_029_801DDB2C[3], s32, 0xE0) |= 4;
        AF(o, u16, 0x34) += 1;
        break;
    case 8:
        AF(o, s32, 0xCC) = SpawnActorArg(0x2C1, 0, AF(D_sc06_029_801DDB2C[2], s32, 0xCC));
        AF(o, s32, 0xD4) = SpawnActorArg(0x2C1, 1, AF(D_sc06_029_801DDB2C[4], s32, 0xD0));
        AF(o, s32, 0xD0) = SpawnActorArg(0x2C1, 2, AF(D_sc06_029_801DDB2C[2], s32, 0xD4));
        AF(o, s32, 0xD8) = SpawnActorArg(0x2C1, 3, AF(D_sc06_029_801DDB2C[4], s32, 0xD8));
        AF(D_sc06_029_801DDB2C[0], s32, 0xE0) |= 2;
        AF(D_sc06_029_801DDB2C[2], s32, 0xE0) |= 2;
        AF(D_sc06_029_801DDB2C[4], s32, 0xE0) |= 2;
        AF(D_sc06_029_801DDB2C[1], s32, 0xE0) |= 8;
        AF(D_sc06_029_801DDB2C[3], s32, 0xE0) |= 8;
        AF(o, s32, 0x1C) = 0x180;
        AF(o, u16, 0x34) += 1;
        PlaySoundId(0x936, 0);
        break;
    case 10:
        AF(D_sc06_029_801DDB2C[0], s32, 0xE0) &= ~2;
        AF(D_sc06_029_801DDB2C[2], s32, 0xE0) &= ~2;
        AF(D_sc06_029_801DDB2C[4], s32, 0xE0) &= ~2;
        AF(D_sc06_029_801DDB2C[1], s32, 0xE0) |= 4;
        AF(D_sc06_029_801DDB2C[3], s32, 0xE0) |= 4;
        AF(o, u16, 0x34) += 1;
        break;
    case 12:
        if (TickTimer(o) == 0) {
            break;
        }
        if (!(AF(o, s32, 0xE0) & 0x800)) {
            AF(o, s16, 2) = 8;
        } else {
            AF(o, s16, 2) = 0xA;
            AF(o, u16, 0x102) += 1;
        }
        break;
    }
    AF(o, u16, 0x104) = AF(o, u16, 0xFE);
}

void func_sc06_029_8017F970(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 0xE0) = 1;
    }
}

void func_sc06_029_8017F984(StageActor *arg0) {
    arg0->state = 9;
    arg0->workEC = 0;
    arg0->stateCount = (s16) (arg0->work100 * 4);
    arg0->work106 = (u16) arg0->work100;
    if (!(arg0->workE0 & 0x800)) {
        arg0->workFE = 0;
    }
}

void func_sc06_029_8017F9C0(u8 *o) {
    s32 i;
    s32 v;

    switch (AF(o, u16, 0x34)) {
    case 0:
        for (i = 0; i < 5; i++) {
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) |= 9;
        }
        AF(o, s32, 0x1C) = 0x180;
        AF(o, u16, 0x34) += 1;
        PlaySoundId(0x936, 0);
        break;
    case 1:
    case 5:
    case 9:
        if (func_sc06_029_801812AC(0) == 0) {
            break;
        }
        func_sc06_029_80180FE0(o, rand() % 5);
        func_sc06_029_8017FE58(o, D_sc06_029_8019070C[AF(o, s16, 0x106)]);
        if (!(AF(o, s32, 0xE0) & 0x800)) {
            if (AF(o, s16, 0xFE) < 3) {
                break;
            }
            AF(o, u16, 0x34) += 1;
            break;
        }
        if (AF(o, s16, 0x104) != AF(o, s16, 0xFE)) {
            AF(o, u16, 0x34) += 1;
            break;
        }
        if (TickTimer(o) == 0) {
            break;
        }
        AF(o, u16, 0x34) += 1;
        func_sc06_029_80181170(o);
        break;
    case 2:
        for (i = 0; i < 5; i++) {
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) &= ~1;
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) |= 4;
        }
        AF(o, u16, 0x34) += 1;
        break;
    case 3:
    case 7:
    case 11:
        if (func_sc06_029_80181334() != 1) {
            break;
        }
        AF(o, s32, 0x1C) = 0x20;
        AF(o, u16, 0x34) = 0xC;
        PlaySoundId(4, 0x936);
        func_sc06_029_80181170(o);
        break;
    case 4:
        for (i = 0; i < 5; i++) {
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) |= 0xA;
        }
        AF(o, s32, 0x1C) = 0x180;
        AF(o, u16, 0x34) += 1;
        PlaySoundId(0x936, 0);
        break;
    case 6:
        for (i = 0; i < 5; i++) {
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) &= ~2;
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) |= 4;
        }
        AF(o, u16, 0x34) += 1;
        break;
    case 8:
        for (i = 0; i < 5; i++) {
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) |= 8;
        }
        AF(D_sc06_029_801DDB2C[0], s32, 0xE0) |= 2;
        AF(D_sc06_029_801DDB2C[1], s32, 0xE0) |= 1;
        AF(D_sc06_029_801DDB2C[2], s32, 0xE0) |= 2;
        AF(D_sc06_029_801DDB2C[3], s32, 0xE0) |= 1;
        AF(D_sc06_029_801DDB2C[4], s32, 0xE0) |= 2;
        AF(o, s32, 0x1C) = 0x180;
        AF(o, u16, 0x34) += 1;
        PlaySoundId(0x936, 0);
        break;
    case 10:
        for (i = 0; i < 5; i++) {
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) |= 4;
        }
        AF(D_sc06_029_801DDB2C[0], s32, 0xE0) &= ~2;
        AF(D_sc06_029_801DDB2C[1], s32, 0xE0) &= ~1;
        AF(D_sc06_029_801DDB2C[2], s32, 0xE0) &= ~2;
        AF(D_sc06_029_801DDB2C[3], s32, 0xE0) &= ~1;
        AF(D_sc06_029_801DDB2C[4], s32, 0xE0) &= ~2;
        AF(o, u16, 0x34) += 1;
        break;
    case 12:
        if (TickTimer(o) == 0) {
            break;
        }
        if (FindActorByKind(0x2EF) != 0) {
            break;
        }
        if (AF(o, s32, 0xE0) & 0x800) {
            AF(o, s16, 0x102) = 0;
        }
        AF(o, s16, 2) = 0xA;
        break;
    }
    v = D_sc06_029_80190704[D_800B99DA & 1];
    AF(o, u16, 0x104) = AF(o, u16, 0xFE);
    D_sc06_029_801DFD4C = v;
}

void func_sc06_029_8017FE58(u8 *o, s32 n) {
    u8 avail[8];
    u8 found[0x8];
    s32 i;
    s32 j;
    s32 count;
    s32 navail;
    s32 flag;
    s32 r;
    u8 *p;

    count = 0;
    navail = 0;
    p = (u8 *)&g_Actors;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0x2EF) {
            found[count++] = AF(AF(p, u8 *, 0x64), u16, 0x70);
        }
    }
    if (count < n) {
        for (i = 0; i < 5; i++) {
            flag = 0;
            for (j = 0; j < count; j++) {
                if (found[j] == i) {
                    flag = 1;
                    break;
                }
            }
            if (!flag) {
                avail[navail++] = i;
            }
        }
        for (i = 0; i < n - count; i++) {
            r = rand() % navail;
            navail--;
            func_sc06_029_80180030(o, avail[r]);
            if (navail == 0) {
                return;
            }
            for (j = r; j < navail; j++) {
                avail[j] = avail[j + 1];
            }
        }
    }
}

s32 func_sc06_029_80180030(u8 *o, s32 n) {
    u8 idx[4];
    s32 d[4];
    SV8 v;
    s32 cnt;
    s32 i;
    s32 best;
    s32 min;
    u8 *p;
    StageActor *e;
    u8 c;

    cnt = 0;
    p = (u8 *)func_sc06_029_80185C6C(n, 0);
    e = D_sc06_029_801DDB2C[n];
    for (i = 0; i < 4; i++, p += 8) {
        c = p[6];
        if (!(c & 0x80)) {
            FaceHelper(e, &D_sc06_029_80190218[c & 0xF], &v);
            d[cnt] = PosSVecDistSq(&g_PlayerPosX, &v);
            idx[cnt] = i;
            cnt++;
        }
    }
    if (cnt == 0) {
        return 0;
    }
    min = d[0];
    best = 0;
    for (i = 1; i < cnt; i++) {
        if (d[i] < min) {
            min = d[i];
            best = i;
        }
    }
    return SpawnActorArg(0x2EF, idx[best], D_sc06_029_801DDB2C[n]) != 0;
}

void func_sc06_029_80180198(StageActor *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->workE0;
    arg0->workEC = 0;
    if (temp_v1 & 0x800) {
        arg0->state = 0xB;
        arg0->stateCount = 0;
        return;
    }
    arg0->workE0 = (s32) (temp_v1 | 0x800);
    arg0->state = 4;
    arg0->workFE = 0;
}

void func_sc06_029_801801D8(u8 *o) {
    u8 *p;
    s32 i;
    s32 j;
    u8 unused[8];

    switch (AF(o, u16, 0x34)) {
    case 0:
        p = &D_sc06_029_801DDB50;
        for (i = 0; i < 20; i++, p += 8) {
            func_sc06_029_801856A4(p, &D_sc06_029_80190240);
            p[6] |= 0x80;
        }
        for (i = 0; i < 5; i++) {
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) |= 0x208;
            for (j = 0; j < 4; j++) {
                SpawnActorArg(0x2EA, j | 0x8000, D_sc06_029_801DDB2C[i]);
            }
        }
        AF(o, s32, 0x1C) = rand() % 64 + 0x80;
        AF(o, u16, 0x34)++;
        break;
    case 1:
        if (TickTimer(o) == 0) {
            break;
        }
        p = &D_sc06_029_801DDB50;
        for (i = 0; i < 20; i++, p += 8) {
            func_sc06_029_801856A4(p, &D_sc06_029_801902C0);
        }
        for (i = 0; i < 5; i++) {
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) &= ~0x200;
        }
        AF(o, s32, 0x1C) = 0x40;
        AF(o, u16, 0x34)++;
        break;
    case 2:
        if (TickTimer(o) == 0) {
            break;
        }
        AF(o, u16, 0x34)++;
        break;
    case 3:
        func_sc06_029_801804C8(o);
        AF(o, s32, 0x1C) = 0xC0;
        AF(o, u16, 0x34)++;
        break;
    case 4:
        if (TickTimer(o) == 0) {
            break;
        }
        p = &D_sc06_029_801DDB50;
        for (i = 0; i < 20; i++, p += 8) {
            if (p[6] & 0x80) {
                func_sc06_029_801856A4(p, &D_sc06_029_801902C0);
            }
        }
        for (i = 0; i < 5; i++) {
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) &= ~0x400;
            AF(D_sc06_029_801DDB2C[i], s32, 0xE0) |= 4;
        }
        AF(o, s32, 0x1C) = 0x40;
        AF(o, u16, 0x34)++;
        break;
    case 5:
        if (TickTimer(o) == 0) {
            break;
        }
        if (AF(o, s16, 0xFE) >= 3) {
            AF(o, s16, 2) = 4;
            AF(o, s32, 0xE0) &= ~0x800;
        } else {
            AF(o, s16, 2) = D_sc06_029_8019071C[AF(o, s16, 0x102)];
        }
        break;
    }
}

void func_sc06_029_801804C8(u8 *o) {
    s16 a[5][5];
    s16 b[5];
    s32 i;
    s32 j;
    s32 r;
    s32 m;
    s16 *row;
    u8 *p;
    u8 c;

    for (i = 0; i < 5; i++) {
        a[i][0] = 4;
        b[i] = i;
        for (j = 1; j < 5; j++) {
            a[i][j] = j - 1;
        }
    }
    for (i = 0; i < (u8)(D_sc06_029_80190728[AF(o, s16, 0x100)] / 5) * 5; i++) {
        j = a[i][0];
        j = rand() % j + 1;
        for (; j < 4; j++) {
            a[i][j] = a[i][j + 1];
        }
        a[i][0]--;
    }
    m = 5;
    for (i = 0; i < (u8)(D_sc06_029_80190728[AF(o, s16, 0x100)] % 5); i++) {
        r = b[rand() % m];
        row = a[r];
        j = row[0];
        j = rand() % j + 1;
        for (; j < 4; j++) {
            row[j] = row[j + 1];
        }
        for (j = r; j < 4; j++) {
            b[j] = b[j + 1];
        }
        a[r][0]--;
        if (--m == 0) {
            break;
        }
    }
    for (i = 0; i < 5; i++) {
        AF(D_sc06_029_801DDB2C[i], s32, 0xE0) |= 0x400;
        for (j = 0; j < a[i][0]; j++) {
            p = (u8 *)func_sc06_029_80185C6C(i, a[i][j + 1]);
            func_sc06_029_801856A4(p, &D_sc06_029_80190240);
            c = p[6];
            p[6] = c | 0x80;
            if (i == 0 && j == 0) {
                p[6] = c | 0xA0;
            }
        }
    }
}

void func_sc06_029_801808C4(StageActor *arg0) {
    s32 var_a2;
    void **var_a1;
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    var_a2 = 0;
    var_a1 = &D_sc06_029_801DDB2C;
    do {
        temp_v1 = *var_a1;
        if (AF(temp_v1, s16, 0x100) != 0) {
            AF(temp_v1, s32, 0xE0) = (s32) (AF(temp_v1, s32, 0xE0) | 8);
        }
        var_a2 += 1;
        var_a1 += 0x1;
    } while (var_a2 < 5);
    arg0->state = 0xD;
    arg0->timer = 0x40;
    temp_v1_2 = arg0->ext0;
    arg0->workE0 = (s32) (arg0->workE0 | 0x2000);
    if (temp_v1_2 != NULL) {
        AF(temp_v1_2, s32, 0xE0) = 1;
    }
    temp_v1_3 = arg0->ext1;
    if (temp_v1_3 != NULL) {
        AF(temp_v1_3, s32, 0xE0) = 1;
    }
    temp_v1_4 = AF(arg0, void *, 0xD4);
    if (temp_v1_4 != NULL) {
        AF(temp_v1_4, s32, 0xE0) = 1;
    }
    temp_a0 = AF(arg0, void *, 0xD8);
    if (temp_a0 != NULL) {
        AF(temp_a0, s32, 0xE0) = 1;
    }
    func_sc06_029_8018615C();
    LoadImage((s32) &D_sc06_029_80190490, (s32) &D_sc06_029_801DDBF8);
    LoadImage((s32) (&D_sc06_029_80190490 + 8), (s32) &D_sc06_029_801DEBF8);
    func_sc06_029_8017C068();
    PlaySoundId(4, 0x936);
}

void EventAfterBoss(Mover *arg0) {
    if ((TickTimer(arg0) != 0) && (FindActorByKind(0x2EF) == 0)) {
        arg0->state = 0xE;
        AF(arg0, s16, 0x34) = 0;
        if (!(GetFlag(0x11D) & 0xFF)) {
            D_sc06_029_80190680 = &D_sc06_029_801904F4;
            func_8002959C();
        } else {
            D_sc06_029_80190680 = &D_sc06_029_80190510;
        }
        StartEvent(arg0, (s32) &D_sc06_029_8019060C);
    }
}

void BossCollapseSequence(u8 *o) {
    struct { s16 x, y, z, kind, unk8, unkA, unkC, unkE; s32 unk10; } d;
    SV8 v;
    s32 i;
    s32 j;
    s32 a;
    s32 r;
    s32 n;
    s32 w;

    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        d.y = -0x100;
        d.kind = 0x32B;
        d.x = 0;
        d.z = 0;
        d.unk8 = 0;
        d.unkA = 0;
        d.unk10 = 0;
        d.unkC = 0x7FFF;
        for (i = 2; i < 5; i++) {
            for (j = 0; j < 8; j++) {
                a = j * 0x200 + 0x100;
                r = rand();
                n = r % 128;
                if (rand() & 1) {
                    w = a + n;
                } else {
                    w = a - n;
                }
                d.unkE = w;
                SpawnActorFromDef(&d, D_sc06_029_801DDB34[i - 2]);
            }
        }
        d.y = -0xA2;
        d.z = 0x260;
        d.kind = 0x32C;
        d.unkE = 0;
        AF(o, s32, 0xD0) = SpawnActorFromDef(&d, o);
        d.y = -0x680;
        d.z = 0;
        d.kind = 0x32D;
        AF(o, s32, 0xCC) = SpawnActorFromDef(&d, o);
        SetModelParts(AF(o, s32, 0x20), &D_sc06_029_801A072C);
        AF(o, u16, 0x34) += 1;
        SelectCollisionMap(0);
        func_800D0C48(1);
        AF(o, s32, 0x1C) = 0x1E;
        PlaySoundId(0xB35, 0);
        break;
    case 2:
        if (TickTimer(o) != 0) {
            AF(o, s32, 0xE0) |= 0x4000;
            AF(o, u16, 0x34)++;
        }
        break;
    case 5:
        AF(o, s32, 0x14) = 0x50000;
        AF(o, s32, 0x1C) = 0;
        AF(o, u16, 0x34) += 1;
        PlaySoundId(0x9C9, 0);
    case 6:
        MoveObject(o);
        if ((++AF(o, s32, 0x1C) & 3) == 0) {
            StartCameraShake(&D_sc06_029_801904A4);
        }
    case 4:
        if (!(D_800B99DA & 3)) {
            PlaySoundId(0x9C8, 0);
        }
        for (i = 2; i < 5; i++) {
            v.x = AF(D_sc06_029_801DDB34[i - 2], u16, 6);
            v.y = AF(D_sc06_029_801DDB34[i - 2], u16, 0xA) - 0x180;
            v.z = AF(D_sc06_029_801DDB34[i - 2], u16, 0xE);
            func_sc06_029_801814B0(&v, rand() % 3);
        }
        break;
    case 8:
        BlendCameraThen(func_sc06_029_8017E6E0);
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x8000;
        AF(AF(o, u8 *, 0x20), s16, 2) = 5;
        AF(o, u16, 0x34) += 1;
        break;
    case 10:
        if (func_80174774() != 0) {
            ZeroFill(D_sc06_029_801DDBF4, 0x38);
            FreeActor(AF(o, s32, 0xD0));
            AF(o, u16, 0x34) += 1;
        }
        break;
    }
    if (AF(o, s32, 0xE0) & 0x4000) {
        if (RequestBgmPack(0x88) == 1) {
            AF(o, s32, 0xE0) &= ~0x4000;
        }
    }
    if (UpdateScript(o) == 1) {
        EndEvent(o);
        AF(o, s16, 2) = 0xF;
        BlendCameraThen(func_sc06_029_8017E770);
        GiveItem(0x24);
    }
}

void func_sc06_029_80180E58(void) {
}

s32 func_sc06_029_80180E60(u8 *arg0) {
    s16 temp_v0;

    DrawFadeWhite((s32) AF(arg0, u8, 0x10A), 0);
    temp_v0 = AF(arg0, u16, 0x10A) - 3;
    AF(arg0, u16, 0x10A) = temp_v0;
    return (temp_v0 << 0x10) < 1;
}

void func_sc06_029_80180EA8(s32 arg0) {
    func_sc06_029_8018612C(arg0);
}

void func_sc06_029_80180EC8(void) {
    func_sc06_029_8018B1E0(5);
}

void func_sc06_029_80180EE8(s32 arg0) {
    func_sc06_029_8018B20C(arg0);
}

void func_sc06_029_80180F08(void) {
    D_sc06_029_801DFD8C = &D_sc06_029_801904D4;
    D_sc06_029_801DFD90 = &D_sc06_029_801904D4 + 8;
    SetCameraUpdate((s32) func_sc06_029_8018180C, 0);
}

extern s32 TurnStep();
extern void func_sc06_029_8018618C();
void func_sc06_029_80180F4C(void) {
    func_sc06_029_8018618C((s16)TurnStep(AF(g_PlayerModel, s16, 0x12), 0, 0x10));
}

s32 func_sc06_029_80180F88(u8 *o) {
    if (AF(o, s32, 8) > 0x57FFFFF) {
        AF(o, s32, 8) = 0x5800000;
        PlaySoundId(0x9C7, 0);
        PlaySoundId(4, 0x9C9);
        return 1;
    }
    return 0;
}

s32 func_sc06_029_80180FE0(u8 *o, s32 n) {
    u8 buf[4];
    s32 cnt;
    s32 i;
    u8 *p;
    u8 *q;

    if (AF(o, s16, 0xFE) >= 3) {
        return 0;
    }
    if (AF(o, s32, 0xE0) & 0x800) {
        if (AF(o, s16, 0x104) != AF(o, s16, 0xFE)) {
            return 0;
        }
    }
    if (AF(o, s32, 0xEC) != 0) {
        AF(o, s32, 0xEC)--;
        return 0;
    }
    if (func_sc06_029_80181268()) {
        return 0;
    }
    cnt = 0;
    AF(D_sc06_029_801DDB2C[n], s32, 0xE0) |= 0x100;
    p = (u8 *)func_sc06_029_80185C6C(n, 0);
    for (i = 0, q = buf; i < 4; i++, p += 8) {
        if (!(p[6] & 0x80)) {
            *q++ = i;
            cnt++;
        }
    }
    if (cnt == 0) {
        return 0;
    }
    p = (u8 *)func_sc06_029_80185C6C(n, buf[rand() % cnt]);
    func_sc06_029_801856A4(p, &D_sc06_029_80190348);
    p[6] |= 0x80;
    AF(D_sc06_029_801DDBF4, s32, 4) &= 0x7FFFFFFF;
    return 1;
}

void func_sc06_029_80181170(u8 *o) {
    s32 i;
    s32 j;
    u8 *p;

    for (i = 0; i < 5; i++) {
        if (AF(D_sc06_029_801DDB2C[i], s32, 0xE0) & 0x100) {
            p = (u8 *)func_sc06_029_80185C6C(i, 0);
            for (j = 0; j < 4; j++, p += 8) {
                if (AF(p, u8 *, 0) == &D_sc06_029_80190348 && AF(p, s16, 4) == 0 && D_sc06_029_801DDBF0 != 0) {
                    AF(&D_sc06_029_80190448, s16, 0) = AF(&D_sc06_029_80190448, s16, 2) = AF(&D_sc06_029_80190448, s16, 4) = 0xC0;
                    FreeActor(D_sc06_029_801DDBF0);
                }
            }
            return;
        }
    }
}

s32 func_sc06_029_80181268(void) {
    u8 **p;
    s32 i;

    i = 0;
    p = D_sc06_029_801DDB2C;
    do {
        if (AF(*p, s32, 0xE0) & 0x100) {
            return 1;
        }
        i++;
        p++;
    } while (i < 5);
    return 0;
}

extern u8 D_sc06_029_8019072C[];
s32 func_sc06_029_801812AC(s32 n) {
    u8 *p;
    u8 *e;
    s32 i;

    p = &D_sc06_029_8019072C[n * 5];
    for (i = 0; i < 5; i++, p++) {
        if (*p == 0xFF) {
            break;
        }
        e = D_sc06_029_801DDB2C[*p];
        if ((u16)(AF(e, u16, 2) - 2) >= 2) {
            return 0;
        }
        if (AF(e, u16, 0x34) != 1) {
            return 0;
        }
    }
    return 1;
}

s32 func_sc06_029_80181334(void) {
    s32 i;

    for (i = 0; i < 5; i++) {
        if (AF(D_sc06_029_801DDB2C[i], u16, 2) != 1) {
            return 0;
        }
    }
    return 1;
}

void func_sc06_029_80181378(u8 *o) {
    typedef struct { s16 x, y, w, h; } Rect;
    Rect r;
    s32 n;
    s32 m;
    s32 x;
    s32 y;

    if (AF(o, s32, 0xE0) & 0x2000) {
        return;
    }
    n = AF(o, s32, 0xE8);
    if (n == 0 && (D_800B99D8 & 0x1F)) {
        return;
    }
    if ((D_800B99DA % 3) & 0xFFFF) {
        return;
    }
    m = (n + 1) & 0xF;
    AF(o, s32, 0xE8) = m;
    x = (m & 3) << 5;
    y = (m >> 2) << 6;

    if (x == 0 && y == 0) {
        LoadImage(&D_sc06_029_80190490, &D_sc06_029_801DDBF8);
        LoadImage(&D_sc06_029_80190490 + 8, &D_sc06_029_801DEBF8);
        return;
    }
    r.x = x + 0x300;
    r.y = y;
    r.w = 0x20;
    r.h = 0x40;
    MoveImage(&r, 0x300, 0);
    r.x = x + 0x380;
    r.y = y;
    MoveImage(&r, 0x380, 0);
}

void func_sc06_029_801814B0(u8 *s, s32 n) {
    s32 out;
    u8 *p;
    u8 *q;
    s16 sgn;
    s32 a;
    s32 t;
    s32 i;

    for (i = n - 1; i != -1; i--) {
        p = (u8 *)SpawnProp(0x23);
        if (p == 0) {
            continue;
        }
        sgn = -1;
        if (rand() & 1) {
            sgn = 1;
        }
        AngleToVec2(&out, sgn * (rand() % 1024), 0x180);
        t = out;
        AF(p, s16, 6) = AF(s, u16, 0) + t;
        AF(p, s16, 0xA) = AF(s, u16, 2) + sgn * (rand() % 128);
        AF(p, s16, 0xE) = AF(s, u16, 4) + (t >> 16);
        AF(p, u16, 0x34) = ((rand() % 0x2FFF + 0x5000) & 0x7FF0) | (rand() & 1);
        AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC010;
        q = (u8 *)SpawnProp(0x22);
        if (q == 0) {
            continue;
        }
        AF(q, s16, 6) = AF(p, s16, 6);
        AF(q, s16, 0xA) = AF(p, s16, 0xA);
        AF(q, s16, 0xE) = AF(p, s16, 0xE);
        AF(q, s32, 0x14) = -0x80000 - ((rand() % 9) << 16);
        a = rand();
        AF(q, u16, 0x34) = (((a % 4) << 12) + 0x2000) | (rand() & 1);
        AF(AF(q, u8 *, 0x20), u16, 0x2C) = AF(AF(p, u8 *, 0x20), u16, 0x2C);
        AF(AF(q, u8 *, 0x20), u32, 4) |= 0x40000000;
    }
}

void func_sc06_029_80181708(u8 *o) {
    typedef struct { u8 pad[0x3C]; s32 f3C, f40, f44, f48, f4C, f50; } ObjS;

    ((ObjS *)o)->f48 = AF(D_sc06_029_801DFD8C, s16, 0);
    ((ObjS *)o)->f50 = AF(D_sc06_029_801DFD8C, s16, 4);
    ((ObjS *)o)->f3C = AF(D_sc06_029_801DFD90, s16, 0);
    ((ObjS *)o)->f44 = AF(D_sc06_029_801DFD90, s16, 4);
    ((ObjS *)o)->f4C += (s16)EaseValueStep(D_sc06_029_801904C6[0], AF(D_sc06_029_801DFD8C, s16, 2), 0xC0);
    ((ObjS *)o)->f40 += (s16)EaseValueStep(D_sc06_029_801904CE[0], AF(D_sc06_029_801DFD90, s16, 2), 0xC0);
    if (((ObjS *)o)->f4C < AF(D_sc06_029_801DFD8C, s16, 2)) {
        ((ObjS *)o)->f4C = AF(D_sc06_029_801DFD8C, s16, 2);
    }
    if (((ObjS *)o)->f40 < AF(D_sc06_029_801DFD90, s16, 2)) {
        ((ObjS *)o)->f40 = AF(D_sc06_029_801DFD90, s16, 2);
    }
}

void func_sc06_029_8018180C(s32 arg0) {
    D_sc06_029_8019073C[AF(arg0, u8, 4)]();
}

void func_sc06_029_80181848(StageActor *arg0) {
    D_sc06_029_801907B4[arg0->state]();
    func_sc06_029_80181DF8((s32) arg0);
}

void func_sc06_029_80181898(StageActor *arg0) {
    ModelObj *temp_v1;

    if (SetupActor(arg0, (s32) &D_sc06_029_80190780) != 0) {
        SetModelCullBox(arg0->model, 0x7FFF, 0x7FFF);
        temp_v1 = arg0->model;
        temp_v1->flags = (u16) (temp_v1->flags | 0x80);
        arg0->model->unk80 = &D_sc06_029_80190448;
        arg0->ext0 = SpawnActorArg(0x295, 0, arg0);
        arg0->ext1 = SpawnActorArg(0x295, 1, arg0);
        arg0->workD4 = SpawnActorArg(0x295, 2, arg0);
        arg0->workD8 = SpawnActorArg(0x295, 3, arg0);
        func_sc06_029_80181D94(arg0);
        func_sc06_029_80182334(arg0);
        arg0->state = 1;
    }
}

void func_sc06_029_80181964(o)
    u8 *o;
{
    s32 f;

    if (AF(o, s32, 0xE0) & 4) {
        AF(AF(o, u8 *, 0xCC), s32, 0xE0) |= 4;
        AF(AF(o, u8 *, 0xD0), s32, 0xE0) |= 4;
        AF(AF(o, u8 *, 0xD4), s32, 0xE0) |= 4;
        AF(AF(o, u8 *, 0xD8), s32, 0xE0) |= 4;
        AF(o, s16, 0x100) = 1;
        AF(o, s32, 0xE0) &= ~4;
    }
    if (AF(o, s32, 0xE0) & 8) {
        AF(AF(o, u8 *, 0xCC), s32, 0xE0) |= 8;
        AF(AF(o, u8 *, 0xD0), s32, 0xE0) |= 8;
        AF(AF(o, u8 *, 0xD4), s32, 0xE0) |= 8;
        AF(AF(o, u8 *, 0xD8), s32, 0xE0) |= 8;
        AF(o, s16, 0x100) = 0;
        AF(o, s32, 0xE0) &= ~8;
    }
    f = AF(o, s32, 0xE0);
    if (f & 0x1000) {
        AF(o, s16, 2) = 4;
    } else if (f & 1) {
        AF(o, s16, 2) = 2;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0xE8) = 0;
    } else if (f & 2) {
        AF(o, s16, 2) = 3;
        AF(o, s16, 0x34) = 0;
        AF(o, s32, 0xE8) = 0;
    }
}

void func_sc06_029_80181AC0(StageActor *arg0) {
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    u16 temp_a0;
    ModelObj *temp_a0_3;

    temp_a0 = arg0->stateCount;
    temp_v1 = temp_a0 & 0xFFFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_a0_2 = arg0->workE8 + 0x2000;
        arg0->workE8 = temp_a0_2;
        temp_v1_2 = ((0x1E0 - arg0->parent->hp) << 9) + 0x80000;
        if (temp_a0_2 >= temp_v1_2) {
            arg0->workE8 = temp_v1_2;
            arg0->stateCount = (u16) (arg0->stateCount + 1);
        }
        break;
    case 1:
        if (!(arg0->workE0 & 1)) {
            arg0->stateCount = (u16) (temp_a0 + 1);
            arg0->timer = (s32) ((0x1000 - ((s16) (u16)arg0->model->rot.vy - (s16) (u16)arg0->unkFC)) & 0xFFF);
        }
        break;
    case 2:
        temp_v0 = arg0->timer - AF(arg0, s16, 0xEA);
        arg0->timer = temp_v0;
        if (temp_v0 <= 0) {
            arg0->workE8 = 0;
            arg0->model->rot.vy = (u16) (u16)arg0->unkFC;
            arg0->state = 1;
        }
        break;
    }
    temp_a0_3 = arg0->model;
    temp_a0_3->rot.vy = (u16) ((u16)temp_a0_3->rot.vy + (u16) AF(arg0, s16, 0xEA));
    if (arg0->workE0 & 0x1000) {
        arg0->state = 4;
        arg0->workE0 = (s32) (arg0->workE0 & ~1);
    }
}

void func_sc06_029_80181C04(StageActor *arg0) {
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    u16 temp_a0;
    ModelObj *temp_a0_3;

    temp_a0 = arg0->stateCount;
    temp_v1 = temp_a0 & 0xFFFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_a0_2 = arg0->workE8 + 0x2000;
        arg0->workE8 = temp_a0_2;
        temp_v1_2 = ((0x1E0 - arg0->parent->hp) << 9) + 0x80000;
        if (temp_a0_2 >= temp_v1_2) {
            arg0->workE8 = temp_v1_2;
            arg0->stateCount = (u16) (arg0->stateCount + 1);
        }
        break;
    case 1:
        if (!(arg0->workE0 & 2)) {
            arg0->stateCount = (u16) (temp_a0 + 1);
            arg0->timer = (s32) (((s16) (u16)arg0->model->rot.vy - (s16) (u16)arg0->unkFC) & 0xFFF);
        }
        break;
    case 2:
        temp_v0 = arg0->timer - AF(arg0, s16, 0xEA);
        arg0->timer = temp_v0;
        if (temp_v0 <= 0) {
            arg0->workE8 = 0;
            arg0->model->rot.vy = (u16) (u16)arg0->unkFC;
            arg0->state = 1;
        }
        break;
    }
    temp_a0_3 = arg0->model;
    temp_a0_3->rot.vy = (u16) ((u16)temp_a0_3->rot.vy - (u16) AF(arg0, s16, 0xEA));
    if (arg0->workE0 & 0x1000) {
        arg0->state = 4;
        arg0->workE0 = (s32) (arg0->workE0 & ~2);
    }
}

void func_sc06_029_80181D40(StageActor *arg0) {
    s32 temp_v0;

    func_sc06_029_80181964();
    temp_v0 = arg0->pos[1].w + arg0->parent->vel[1];
    arg0->pos[1].w = temp_v0;
    if (temp_v0 > 0xFFFFFF) {
        FreeActor((s32) arg0);
    }
}

void func_sc06_029_80181D94(u8 *o) {
    u8 *p;
    s32 i;

    p = (u8 *)func_sc06_029_80185C6C(AF(o, u16, 0x70) & 0xF, 0);
    for (i = 0; i < 4; i++) {
        func_sc06_029_801856A4(p, &D_sc06_029_80190238);
        p[6] = i;
        p += 8;
    }
}

void func_sc06_029_80181DF8(StageActor *o) {
    SMtx unused;
    SV8 sv;
    u8 *p;
    s32 i;
    s32 c;
    u8 *s;

    p = (u8 *)func_sc06_029_80185C6C((u16)o->param & 0xF, 0);
    i = 0;
    do {
        sv.x = o->model->rot.vx;
        sv.y = o->model->rot.vy + D_sc06_029_801904AC[p[6] & 0xF];
        sv.z = o->model->rot.vz;
        RotMatrixZYX(&sv, &D_sc06_029_801DFD94);
        D_sc06_029_801DFD94.t[0] = AF(o->model, s32, 0x68);
        D_sc06_029_801DFD94.t[1] = AF(o->model, s32, 0x6C);
        D_sc06_029_801DFD94.t[2] = AF(o->model, s32, 0x70);
        gte_SetRotMatrix(&D_800AF648);
        gte_ldclmv(&D_sc06_029_801DFD94);
        gte_rtir();
        gte_stclmv(&D_sc06_029_801DFDB4);
        gte_ldclmv((u8 *)&D_sc06_029_801DFD94 + 2);
        gte_rtir();
        gte_stclmv((u8 *)&D_sc06_029_801DFDB4 + 2);
        gte_ldclmv((u8 *)&D_sc06_029_801DFD94 + 4);
        gte_rtir();
        gte_stclmv((u8 *)&D_sc06_029_801DFDB4 + 4);
        gte_SetTransMatrix(&D_800AF648);
        gte_ldlv0(D_sc06_029_801DFDA8);
        gte_rtv0tr();
        gte_stlvnl(D_sc06_029_801DFDC8);
        gte_SetRotMatrix(&D_sc06_029_801DFDB4);
        gte_SetTransMatrix(&D_sc06_029_801DFDB4);
        func_sc06_029_801856C0(p);
        s = AF(p, u8 *, 0);
        if (s == &D_sc06_029_80190348) {
            FaceHelper(o, &D_sc06_029_80190218[p[6] & 0xF], D_sc06_029_801DDBF4 + 8);
            if (AF(p, s16, 4) != 0) {
                c = p[7] * 12;
                D_sc06_029_80190450[0] = D_sc06_029_80190450[1] = D_sc06_029_80190450[2] = c;
            } else {
                if (D_sc06_029_801DDBF0 != 0) {
                    if (AF(D_sc06_029_801DDBF0, u16, 0) == 0) {
                        func_sc06_029_801856A4(p, &D_sc06_029_801903C8);
                        D_sc06_029_801DDBF0 = 0;
                    }
                } else {
                    D_sc06_029_801DDBF0 = (u8 *)SpawnActorArg(0x2EA, p[6] & 0xF, o);
                }
                c = (rsin((D_800B99DA << 6) & 0x7C0) * 96 >> 12) + 0x60;
                D_sc06_029_80190450[0] = D_sc06_029_80190450[1] = D_sc06_029_80190450[2] = c;
            }
        } else if (s == &D_sc06_029_801903C8) {
            FaceHelper(o, &D_sc06_029_80190218[p[6] & 0xF], D_sc06_029_801DDBF4 + 8);
            if (AF(p, s16, 4) != 0) {
                c = -0x40 - p[7] * 12;
                D_sc06_029_80190450[0] = D_sc06_029_80190450[1] = D_sc06_029_80190450[2] = c;
            } else {
                o->workE0 &= ~0x100;
                func_sc06_029_801856A4(p, &D_sc06_029_80190238);
                AF(D_sc06_029_801DDBF4, s32, 4) |= 0x80000000;
                p[6] &= 0x7F;
            }
        } else if (s == &D_sc06_029_801902C0) {
            if (AF(p, s16, 4) == 0) {
                func_sc06_029_801856A4(p, &D_sc06_029_80190238);
                p[6] &= 0x3F;
            }
        } else if (s == &D_sc06_029_80190240) {
            if (AF(p, s16, 4) == 0) {
                if (o->workE0 & 0x200) {
                    func_sc06_029_80182388(o, i);
                } else if (o->workE0 & 0x400) {
                    func_sc06_029_801825D8(o, p);
                }
            }
        }
        i++;
        p += 8;
    } while (i < 4);
}

void func_sc06_029_80182334(u8 *o) {
    typedef struct { s16 a, b, c, pad; s32 d, e; } E;
    s32 i;
    E *e;

    e = (E *)(D_sc06_029_801DFBF8 + AF(o, s16, 0x70) * 64);
    for (i = 0; i < 4; i++, e++) {
        e->a = 0;
        e->b = -0x170;
        e->c = -0x178;
        e->d = 0;
        e->e = 0;
    }
}

void func_sc06_029_80182388(u8 *o, s32 i) {
    SV8 sv;
    SV8 q[4];
    SV8 r;
    V3 d;
    P12 a;
    SMtx m;
    s32 out;
    u8 *e;

    e = D_sc06_029_801DFBF8 + (i + AF(o, s16, 0x70) * 4) * 16;
    LocalToWorld(&D_sc06_029_801DFD94, e, &sv);
    a.x = sv.x + AF(e, s16, 0xA);
    a.y = sv.y + AF(e, s16, 0xE);
    a.z = sv.z;
    HeadingPitchTo(&out, &a, &g_PlayerPosX);
    r.x = out;
    r.y = out >> 16;
    r.z = 0;
    d.x = d.y = 0;
    d.z = -0x40000;
    RotMatrixZYX(&r, &m);
    ApplyMatrixLV(&m, &d, &d);
    AF(e, s32, 8) += d.x;
    AF(e, s32, 0xC) += d.y;
    sv.x += AF(e, s16, 0xA);
    sv.y += AF(e, s16, 0xE);
    WorldToLocal(&D_sc06_029_801DFD94, &sv, &sv);
    if (sv.x >= 0x1D) {
        sv.x = 0x1C;
    } else if (sv.x < -0x1C) {
        sv.x = -0x1C;
    }
    if (sv.y >= -0x153) {
        sv.y = -0x154;
    } else if (sv.y < -0x18C) {
        sv.y = -0x18C;
    }
    q[0].x = q[2].x = sv.x - 0x20;
    q[1].x = q[3].x = sv.x + 0x20;
    q[0].y = q[1].y = sv.y - 0x20;
    q[2].y = q[3].y = sv.y + 0x20;
    q[0].z = q[1].z = q[2].z = q[3].z = AF(e, s16, 4);
    gte_SetRotMatrix(&D_sc06_029_801DFDB4);
    gte_SetTransMatrix(&D_sc06_029_801DFDB4);
    func_sc06_029_801859F4(q, 0x3BC, 0x180, 0x170, 0x101, 0xF, 0xF, -6, 0);
}

void func_sc06_029_801825D8(StageActor *o, u8 *p) {
    SV8 v[4];
    SV8 w;
    SpawnDef d;
    SV8 *e;
    u8 c;

    e = (SV8 *)(D_sc06_029_801DFBF8 + ((p[6] & 0xF) + o->param * 4) * 16);
    if (!(p[6] & 0x40)) {
        LocalToWorld(&D_sc06_029_801DFD94, e, &w);
        d.x = w.x;
        d.y = w.y;
        d.z = w.z;
        d.kind = 0x31C;
        c = p[6] & 0xF;
        d.unk8 = c;
        d.flags = 0;
        d.unk10 = 0;
        d.unkE = 0;
        d.unkC = 0x7FFF;
        if (p[6] & 0x20) {
            d.unk8 = c | 0x4000;
            p[6] &= ~0x20;
        }
        SpawnActorFromDef(&d, o);
        SpawnActorArg(0x2EA, (p[6] & 0xF) | 0x8000, o);
        p[6] |= 0x40;
    }
    v[0].x = v[2].x = e->x - 0x20;
    v[1].x = v[3].x = e->x + 0x20;
    v[0].y = v[1].y = e->y - 0x20;
    v[2].y = v[3].y = e->y + 0x20;
    v[0].z = v[1].z = v[2].z = v[3].z = e->z;
    gte_SetRotMatrix(&D_sc06_029_801DFDB4);
    gte_SetTransMatrix(&D_sc06_029_801DFDB4);
    func_sc06_029_801859F4(v, 0x3BC, 0x180, 0x170, 0x101, 0xF, 0xF, -6, 0);
}

void func_sc06_029_801827D0(StageActor *arg0) {
    D_sc06_029_801908F8[arg0->state]();
}

extern void func_sc06_029_80182BC8(StageActor *o);
void func_sc06_029_8018280C(StageActor *o) {
    if ((o->model = AllocActorModel()) == 0) {
        RejectSpawn(o);
        return;
    }
    o->workF4 = D_sc06_029_8019EA7C[0];
    o->workF8 = 0;
    InitModel(o->model, (u8 *)o + 0xF4);
    SetModelCullBox(o->model, 0x7FFF, 0x7FFF);
    o->model->pose = &D_sc06_029_80190808 + ((u16)o->param & 0xF) * 12;
    o->hitState = 0xC800;
    o->hitData = (s32)((u8 *)o + 0xFC) | 0x50000000;
    func_sc06_029_80182BC8(o);
    o->targetClass = 0;
    o->stateCount = 0;
    o->state++;
    o->workEC = (s16)o->parent->id;
}

void func_sc06_029_801828E4(StageActor *o) {
    SV8 b;
    StageActor *p;
    s32 *t;
    s32 k;
    s32 n;

    p = o->parent;
    if (o->workEC != (s16)p->id) {
        FreeActor(o);
        return;
    }
    func_sc06_029_80182BC8(o);
    if (o->hitState != 0) {
        b = D_sc06_029_801DDB48;
        if (PathHitsModel(o->model, o->hitData, &D_sc06_029_801DDB48 - 1, &b) != 0) {
            HitPlayer(1, 0x4004, HeadingToSV(&D_800D3918, &g_GroundNormal), 0x30, &b, &g_GroundNormal);
        }
    }
    switch (o->stateCount) {
    case 0:
        if (o->workE0 & 4) {
            o->stateCount++;
            o->index = 0;
            o->hitState = 0xC800;
        }
        if (o->workE0 & 8) {
            o->stateCount = 2;
            o->index = 0;
        }
        break;
    case 1:
        o->workF0 -= 0x14;
        *o->model->parts = D_sc06_029_8019EA7C[++o->index];
        t = (s32 *)o->model->parts;
        if (*t == 0) {
            n = (o->index - 1) * 4;
            *t = *(s32 *)((u8 *)D_sc06_029_8019EA7C + n);
            o->stateCount = 0;
            o->workE0 &= ~4;
        }
        break;
    case 2:
        o->workF0 += 0x14;
        *o->model->parts = D_sc06_029_8019EA38[++o->index];
        t = (s32 *)o->model->parts;
        if (*t == 0) {
            n = (o->index - 1) * 4;
            *t = *(s32 *)((u8 *)D_sc06_029_8019EA38 + n);
            o->stateCount = 0;
            o->hitState = 0;
            o->workE0 &= ~8;
        }
        break;
    }
    o->pos[0].w = p->pos[0].w;
    o->pos[1].w = p->pos[1].w;
    o->pos[2].w = p->pos[2].w;
    AF(o->model, SV8, 0x10) = AF(p->model, SV8, 0x10);
}

void func_sc06_029_80182BC8(StageActor *o) {
    WMtx m;
    SV8 a;
    SV8 b;
    s32 flag;
    u8 *p;

    if (o->hitState == 0) {
        return;
    }
    GetPartLocalMatrix(o, 0, &m);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    a.x = -0x3E;
    a.y = -0x1E0;
    a.z = o->workF0 - 0x1B2;
    b.x = 0x3E;
    b.y = -0xA0;
    b.z = -0x1B2;
    RotTransSV(&a, &a, &flag);
    RotTransSV(&b, &b, &flag);
    p = (u8 *)((o->hitData & 0x0FFFFFFF) | 0x80000000);
    if (a.x > b.x) {
        AF(p, s16, 0x6) = a.x;
        AF(p, s16, 0x4) = b.x;
    } else {
        AF(p, s16, 0x6) = b.x;
        AF(p, s16, 0x4) = a.x;
    }
    if (a.y > b.y) {
        AF(p, s16, 0xA) = a.y;
        AF(p, s16, 0x8) = b.y;
    } else {
        AF(p, s16, 0xA) = b.y;
        AF(p, s16, 0x8) = a.y;
    }
    if (a.z > b.z) {
        AF(p, s16, 0xE) = a.z;
        AF(p, s16, 0xC) = b.z;
    } else {
        AF(p, s16, 0xE) = b.z;
        AF(p, s16, 0xC) = a.z;
    }
}

void func_sc06_029_80182D74(StageActor *arg0) {
    D_sc06_029_80190940[arg0->state]();
}

void func_sc06_029_80182DB0(StageActor *o) {
    u8 *p;
    u8 **q;
    s32 i;
    s32 *r;

    q = (u8 **)(&D_sc06_029_801DFDD4 + o->param * 32);
    for (i = 0; i < 8; i++) {
        p = AllocActorSprite();
        if (p != 0) {
            func_8001CD9C(p, &D_sc06_029_80190900);
            AF(p, u32, 4) |= 0x50000000;
            AF(p, u16, 0x2C) = 0xC030;
            AF(p, s16, 0x1A) = 0x400;
            AF(p, s16, 0x18) = 0x400;
        }
        q[i] = p;
    }
    func_sc06_029_801834D8(o, 1);
    r = (s32 *)((u8 *)o + 0xE4);
    for (i = 0; i < 4; i++) {
        *r = rand() % 8;
        r++;
    }
    o->pos[1].w = 0;
    o->workFE = 0;
    o->work100 = 0;
    o->state = 1;
}

void func_sc06_029_80182ED8(StageActor *o) {
    SV8 a;
    SV8 b;
    s32 *r;
    SV8 *t;
    u8 **pa;
    s32 i;
    u8 **pb;
    s32 *q6;
    s32 idx;
    s32 min;
    s32 v;

    switch (o->stateCount) {
    case 0:
        o->work100 += 0x20;
        if (o->work100 > 0x120) {
            o->work100 = 0x120;
            o->stateCount++;
            func_sc06_029_80183478(o, 1);
        }
        break;
    case 1:
        if (o->workE0 != 0) {
            func_sc06_029_801834D8(o, 0);
            o->stateCount++;
        }
        if (AF(D_sc06_029_801DDB28, s16, 0x100) == 2) {
            if (!(D_800B99DA & 0x7F)) {
                func_sc06_029_801834D8(o, 0);
                o->stateCount = 4;
            }
        }
        break;
    case 2:
        o->workFE += 0x20;
        if (o->workFE > 0x120) {
            o->workFE = 0x120;
            o->stateCount++;
            func_sc06_029_801834D8(o, 0);
            func_sc06_029_801834D8(o, 1);
        }
        break;
    case 3:
        o->state = 2;
        if (o->param == 3) {
            PlaySoundId(4, 0x9CF);
        }
        break;
    case 4:
        o->workFE += 0x20;
        if (o->workFE > 0x120) {
            o->workFE = 0;
            o->work100 = 0;
            o->stateCount = 0;
            if ((s32)o->parent->parent == D_sc06_029_801DDB3C) {
                if (o->pos[1].w == 0) {
                    o->pos[1].h.i = 0x200;
                } else {
                    o->pos[1].h.i = 0;
                }
            } else {
                if (o->pos[1].w == 0) {
                    o->pos[1].h.i = -0x200;
                } else {
                    o->pos[1].h.i = 0;
                }
            }
            func_sc06_029_80183478(o, 0);
            func_sc06_029_801834D8(o, 1);
        }
        break;
    }

    q6 = (s32 *)((u8 *)o + 0xE4);
    idx = o->param;
    t = &D_sc06_029_80190858[idx * 4];
    r = &D_sc06_029_801DFE54[idx * 4];
    {
        u8 **base = (u8 **)&D_sc06_029_801DFDD4;
        u8 **b1 = base + 1;
        pb = b1 + idx * 8;
        pa = base + idx * 8;
    }
    i = 0;
    do {
        do {
            FaceHelper(o->parent, t, &a);
        } while (0);
        b.x = a.x;
        b.y = a.y;
        b.z = a.z;
        a.y += o->workFE + o->pos[1].h.i;
        b.y += o->work100 + o->pos[1].h.i;
        if (*pa != 0) {
            AF(*pa, s16, 0x8) = a.x;
            AF(*pa, s16, 0xA) = a.y;
            AF(*pa, s16, 0xC) = a.z;
        }
        if (*pb != 0) {
            AF(*pb, s16, 0x8) = b.x;
            AF(*pb, s16, 0xA) = b.y;
            AF(*pb, s16, 0xC) = b.z;
        }
        func_sc06_029_80183534(o, &a, &b, q6);
        func_sc06_029_80183848(o, &a, &b);
        a.x = (a.x + b.x) >> 1;
        a.y = (a.y + b.y) >> 1;
        a.z = (a.z + b.z) >> 1;
        *r = PosSVecDistSq(&g_PlayerPosX, &a);
        i++;
        t++;
        pb += 2;
        pa += 2;
        q6++;
        r++;
    } while (i < 4);
    FaceHelper(o->parent, &D_sc06_029_801908D8[o->param], &a);
    b.x = a.x;
    b.y = a.y;
    b.z = a.z;
    a.y += o->workFE + o->pos[1].h.i;
    b.y += o->work100 + o->pos[1].h.i;
    func_sc06_029_80183848(o, &a, &b);
    if (o->stateCount != 3 && o->param == 3) {
        min = D_sc06_029_801DFE54[0];
        for (i = 1; i < 16; i++) {
            if (D_sc06_029_801DFE54[i] < min) {
                min = D_sc06_029_801DFE54[i];
            }
        }
        min -= 0x4000;
        if (min <= 0) {
            PlaySoundId(0x9CF, 0x107F);
        } else {
            v = 0x7F;
            if (min < 0x100000) {
                v -= min * 0x6F / 0x100000;
            } else {
                v = 0x10;
            }
            PlaySoundId(0x9CF, (u16)(v | 0x1000));
        }
    }
}

void func_sc06_029_801833FC(StageActor *arg0) {
    s32 *var_s0;
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = (arg0->param << 5) + &D_sc06_029_801DFDD4;
    do {
        temp_a0 = *var_s0;
        if (temp_a0 != 0) {
            ZeroFill(temp_a0, 0x38);
        }
        var_s1 += 1;
        var_s0 = (s32 *)((u8 *)var_s0 + 4);
    } while (var_s1 < 8);
    FreeActor((s32) arg0);
}

void func_sc06_029_80183478(u8 *o, s32 j) {
    u8 *p;
    s32 i;
    s32 k;

    k = AF(o, s16, 0x70) * 8;
    for (i = 0; i < 4; i++) {
        p = ((u8 **)&D_sc06_029_801DFDD4)[k + j];
        if (p != 0) {
            AF(p, u32, 4) &= 0x7FFFFFFF;
        }
        j += 2;
    }
}

void func_sc06_029_801834D8(u8 *o, s32 j) {
    u8 *p;
    s32 i;
    s32 k;

    k = AF(o, s16, 0x70) * 8;
    for (i = 0; i < 4; i++) {
        p = ((u8 **)&D_sc06_029_801DFDD4)[k + j];
        if (p != 0) {
            AF(p, u32, 4) |= 0x80000000;
        }
        j += 2;
    }
}

void func_sc06_029_80183534(u8 *o, SV8 *v0, SV8 *v1, s32 *cnt) {
    SV8 a;
    SV8 b;
    s32 flag;
    s32 z;
    XY *e;
    u8 *w;
    u8 *p;
    s32 r;
    s32 n;

    n = *cnt;
    e = &D_sc06_029_8019094C[n];
    *cnt = n + 1;
    w = &D_800AF630;
    if (e->x == 0) {
        *cnt = 1;
        e = &D_sc06_029_8019094C[0];
    }
    gte_SetRotMatrix(w + 0x18);
    gte_SetTransMatrix(w + 0x18);
    gte_ldv0(v0);
    gte_rtps();
    gte_stsxy(&a);
    gte_stflg(&flag);
    gte_stszotz(&z);
    if (flag & ~0x1000) {
        return;
    }
    gte_ldv0(v1);
    gte_rtps();
    gte_stsxy(&b);
    gte_stflg(&flag);
    if (flag & ~0x1000) {
        return;
    }
    {
        u8 unused[8];
        s16 vv;
        s32 t;
        s32 k;
        s32 d;
        s32 x;
        s32 y;

        d = g_CameraProj * 48 / (z * 4);
        p = g_PrimNext;
        g_PrimNext = p + 0x28;
        p[3] = 9;
        AF(p, s32, 4) = 0x808080;
        p[7] = 0x2E;
        y = e->y;
        x = e->x;
        AF(p, u16, 0x16) = 0x20 | ((y & 0x100) >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
        AF(p, u16, 0xE) = 0x63D6;
        p[0xC] = (e->x - ((AF(p, u16, 0x16) & 0xF) << 6)) << 2;
        r = d;
        t = e->y;
        if (AF(p, u16, 0x16) & 0x10) {
            vv = t - 0x100;
        } else {
            vv = t;
        }
        p[0xD] = vv;
        p[0x14] = p[0xC] + 0x1F;
        p[0x1D] = p[0xD] + 0x7F;
        p[0x15] = p[0xD];
        p[0x1C] = p[0xC];
        p[0x24] = p[0x14];
        p[0x25] = p[0x1D];
        AF(p, s16, 8) = a.x - r;
        AF(p, s16, 0xA) = AF(p, s16, 0x12) = a.y;
        AF(p, s16, 0x10) = a.x + r;
        AF(p, s16, 0x18) = b.x - r;
        AF(p, s16, 0x1A) = AF(p, s16, 0x22) = b.y;
        AF(p, s16, 0x20) = b.x + r;
        ((PTag *)p)->addr = ((PTag *)&g_WorldOtTable[AF(w, u16, 0xA3D2)][z + 1])->addr;
        ((PTag *)&g_WorldOtTable[AF(w, u16, 0xA3D2)][z + 1])->addr = (u32)p;
    }
}

extern s32 g_PlayerHitData;
s32 func_sc06_029_80183848(u8 *o, SV8 *a, SV8 *b) {
    if (PathHitsModel(g_PlayerModel, g_PlayerHitData, a, b) != 0) {
        HitPlayer(1, 0x18, 0, 0x40, b, &g_GroundNormal);
        return 1;
    }
    return 0;
}

void func_sc06_029_801838BC(SV8 *a, SV8 *b) {
    V3 v;
    s32 l;
    s32 r;
    s32 t;

    l = 0x7F;
    r = 0x7F;
    v.x = a->x - (s16)g_PlayerX;
    v.y = ((a->y + b->y) >> 1) - (s16)D_80126B62;
    v.z = a->z - (s16)D_80126B66;
    gte_ldlvl(&v);
    gte_sqr0();
    gte_stlvnl(&v);
    t = v.x + v.z - 0x4000;
    if (t > 0) {
        if (t < 0x40000) {
            l = r - (t * 0x6F) / 0x40000;
        } else {
            l = 0x10;
        }
    }
    t = v.y - 0x5100;
    if (t > 0) {
        if (t < 0x40000) {
            r -= (t * 0x6F) / 0x40000;
        } else {
            r -= 0x6F;
        }
    }
    PlaySoundId(0x9CF, (u16)((((s16)l + (s16)r) >> 1) | 0x1000));
}

void func_sc06_029_80183A1C(StageActor *arg0) {
    D_sc06_029_801909E4[arg0->state]();
}

void func_sc06_029_80183A58(StageActor *arg0) {
    ModelObj *temp_v0;

    arg0->init = &D_sc06_029_801909B0;
    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, 0);
    arg0->hitData = (s32) ((s32) ((((u16)arg0->param & 0xF) * 0x10) + &D_sc06_029_80190970) | 0x50000000);
    if (!((s16) (u16)arg0->param & 0x8000)) {
        arg0->targetClass = 0x15;
        arg0->hitState = 0x8000;
        AF(arg0, s16, 0xAE) = -3;
    } else {
        arg0->targetClass = 0x14;
        arg0->hitState = 0xC000;
    }
    arg0->state = (u16) (arg0->state + 1);
}

void WeakPointHit(StageActor *o) {
    s16 t;
    s32 i;
    u8 **pp;
    u8 *d;

    o->pos[1].w = o->parent->pos[1].w;
    o->model->rot.vy = (u16)o->parent->model->rot.vy + 0xE00;
    t = o->param;
    if (t & 0x8000) {
        if (*(u8 **)func_sc06_029_80185C6C(o->parent->param, t & 0xF) == &D_sc06_029_801902C0) {
            FreeActor(o);
            return;
        }
    }
    if (o->hitState & 1) {
        o->hitDamage = 0x28;
        TakeDamage(o);
        func_8016B3F4(o);
        PlaySoundId(0xB7C, 0);
        d = D_sc06_029_801DDB28;
        o->hitState = 0;
        o->hitCode = 0;
        AF(d, s16, 0x76) -= o->hitDamage;
        if (AF(d, s16, 0x76) <= 0) {
            AF(d, s16, 0x76) = 0;
            AF(d, s16, 2) = 0xC;
            AF(d, s32, 0xE0) |= 0x1000;
            for (i = 0; i < 5; i++) {
                AF(D_sc06_029_801DDB2C[i], s32, 0xE0) |= 0x1000;
            }
        }
        AF(D_sc06_029_801DDB28, s16, 0xFE)++;
        AF(D_sc06_029_801DDB28, s32, 0xEC) = (o->work100 + 1) * 100;
        o->timer = 0x10;
        o->state++;
    }
}

void func_sc06_029_80183CB8(StageActor *o) {
    AF(&D_sc06_029_80190448, s16, 0) = ((rsin(o->timer << 7) << 7) >> 12) + 0x80;
    AF(&D_sc06_029_80190448, s16, 2) = AF(&D_sc06_029_80190448, s16, 4) = -0x40;
    if (--AF(o, s32, 0x1C) == 0) {
        AF(&D_sc06_029_80190448, s16, 0) = AF(&D_sc06_029_80190448, s16, 2) = AF(&D_sc06_029_80190448, s16, 4) = 0xC0;
        FreeActor(o);
    }
}

void func_sc06_029_80183D48(StageActor *arg0) {
    D_sc06_029_80190A00[arg0->state]();
}

void func_sc06_029_80183D84(StageActor *o) {
    u8 *m[4];
    ModelObj *t;
    s32 i;
    s32 a;
    u32 s;
    u32 c;
    u8 *p;
    s32 *q;

    t = AllocActorModel();
    o->model = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(t, 0);
    o->model->pose = &D_sc06_029_80190808 + ((u16)o->param & 0xF) * 12;
    o->model->flags |= 0x10;
    o->workE8 = 0;
    AF(o, s16, 0xEC) = -0x50;
    AF(o, s16, 0xEE) = 0x50;
    AF(o, s16, 0xF0) = -0x50;
    AF(o, s16, 0xF2) = 0x50;
    AF(o, s16, 0xF4) = 0;
    AF(o, s16, 0xF6) = 0;
    o->hitData = (s32)((u8 *)o + 0xE8) | 0x70000000;
    for (i = 0; i < 8; i++) {
        a = i << 9;
        s = rsin(a);
        c = rcos(a);
        D_sc06_029_801DFE94[i].x = (s * 13) >> 10;
        D_sc06_029_801DFE94[i].y = (c * 13) >> 10;
        D_sc06_029_801DFEDC[i].x = (s * 5) >> 9;
        D_sc06_029_801DFE94[i].z = -0x177;
        D_sc06_029_801DFEDC[i].y = (c * 5) >> 9;
        D_sc06_029_801DFEDC[i].z = -0x177;
    }
    D_sc06_029_801DFED4 = D_sc06_029_801DFE94[0];
    D_sc06_029_801DFF1C = D_sc06_029_801DFEDC[0];
    q = &D_sc06_029_801DFF24;
    SetShapeCircle(q, 0xB0);
    *q = 0xFF4040;
    D_sc06_029_801DFF28 = 0;
    for (i = 0; i < 4; i++) {
        p = AllocActorSprite();
        m[i] = p;
        if (p != 0) {
            func_8001CD9C(p, &D_sc06_029_801DFF24);
            AF(p, s16, 0x18) = 0x1000;
            AF(p, s16, 0x1A) = 0x1000;
            AF(p, u32, 4) |= 0x50000000;
            AF(p, u16, 0x2C) = 0xC020;
        }
    }
    o->ext0 = m[0];
    o->ext1 = m[1];
    AF(o, u8 *, 0xD4) = m[2];
    AF(o, u8 *, 0xD8) = m[3];
    o->timer = 0x10;
    p = (u8 *)func_sc06_029_80185C6C(o->parent->param, o->param);
    func_sc06_029_801856A4(p, &D_sc06_029_80190240);
    p[6] |= 0x80;
    o->workFE = -1;
    o->state++;
}

void func_sc06_029_80184084(u8 *o) {
    u8 *p;
    s32 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer(o) != 0) {
            AF(o, u16, 0x34)++;
            PlaySoundId(0xA7C, 0);
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), u16, 0x1A) += 0x400;
        switch (AF(o, u16, 0x70) & 0xF) {
        case 0:
        case 2:
            AF(AF(o, u8 *, 0x20), u16, 0x18) += 0x400;
            if (AF(AF(o, u8 *, 0x20), s16, 0x18) > 0x2000) {
                AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x2000;
                AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2000;
                AF(o, s16, 0x100) = 1;
            }
            break;
        case 1:
        case 3:
            AF(AF(o, u8 *, 0x20), u16, 0x1C) += 0x400;
            if (AF(AF(o, u8 *, 0x20), s16, 0x1C) > 0x2000) {
                AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2000;
                AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x2000;
                AF(o, s16, 0x100) = 1;
            }
            break;
        }
        if ((AF(o, s32, 0xE0) -= 0x40) < -0x180) {
            AF(o, s16, 0xFE) = func_sc06_029_8018452C();
            if (AF(o, s16, 0xFE) != -1) {
                p = AllocActorSprite();
                if (p != 0) {
                    func_8001CD9C(p, &D_sc06_029_801DFD4C);
                    AF(p, s16, 0x18) = 0x1000;
                    AF(p, s16, 0x1A) = 0x1000;
                    AF(p, u16, 0x2C) = 0xC020;
                    AF(p, u32, 4) |= 0x50000000;
                } else {
                    AF(o, s16, 0xFE) = -1;
                }
                D_sc06_029_801DFD38[AF(o, s16, 0xFE)] = (s32)p;
            }
            AF(o, s32, 0xE0) = -0x180;
            r = 0x80 - rand() % 32;
            AF(o, s32, 0x1C) = r - AF(D_sc06_029_801DDB28, s16, 0x100) * 32;
            AF(o, u16, 0x34)++;
        }
        func_sc06_029_80184564(o);
        break;
    case 2:
        if (TickTimer(o) != 0) {
            AF(o, u16, 0x34)++;
        }
        func_sc06_029_80184564(o);
        break;
    case 3:
        if ((AF(o, s32, 0xE4) -= 0x40) < -0x180) {
            AF(o, s32, 0xE4) = -0x180;
            AF(o, u16, 0x34)++;
            func_sc06_029_80184EA0(AF(o, s32, 0xCC));
            func_sc06_029_80184EA0(AF(o, s32, 0xD0));
            func_sc06_029_80184EA0(AF(o, s32, 0xD4));
            func_sc06_029_80184EA0(AF(o, s32, 0xD8));
            if (AF(o, s16, 0xFE) != -1) {
                AF(D_sc06_029_801DFD38[AF(o, s16, 0xFE)], u32, 4) |= 0x80000000;
            }
        }
        func_sc06_029_80184564(o);
        break;
    case 4:
        func_sc06_029_801856A4(func_sc06_029_80185C6C(AF(AF(o, u8 *, 0x64), s16, 0x70), AF(o, s16, 0x70)), &D_sc06_029_801902C0);
        AF(o, s32, 0x1C) = rand() % 16 + 0x10;
        AF(o, u16, 0x34)++;
        break;
    case 5:
        if (TickTimer(o) != 0) {
            func_sc06_029_80184464(o);
            return;
        }
        break;
    }
    AF(o, s32, 8) = AF(AF(o, u8 *, 0x64), s32, 8) - 0x1790000;
    AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12) + 0xE00;
}

void func_sc06_029_80184464(StageActor *arg0) {
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;

    temp_v1 = arg0->workFE;
    if (temp_v1 != -1) {
        ZeroFill(D_sc06_029_801DFD38[temp_v1], 0x38);
        D_sc06_029_801DFD38[arg0->workFE] = 0;
    }
    temp_a0 = (s32)arg0->ext0;
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x38);
    }
    temp_a0_2 = (s32)arg0->ext1;
    if (temp_a0_2 != 0) {
        ZeroFill(temp_a0_2, 0x38);
    }
    temp_a0_3 = arg0->workD4;
    if (temp_a0_3 != 0) {
        ZeroFill(temp_a0_3, 0x38);
    }
    temp_a0_4 = arg0->workD8;
    if (temp_a0_4 != 0) {
        ZeroFill(temp_a0_4, 0x38);
    }
    FreeActor(arg0);
}

s32 func_sc06_029_8018452C(void) {
    s32 i;

    for (i = 0; i < 5; i++) {
        if (D_sc06_029_801DFD38[i] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc06_029_80184C68(u8 *v, s32 n);
void func_sc06_029_80184E6C(s32 arg0, s32 arg1);

void func_sc06_029_80184564(StageActor *o) {
    WMtx m;
    SV8 v[5]; /* v[4] is never used; the original frame has these 8 bytes (natural: LuciDin 14 Nov, r687b) */
    s32 flag;
    u8 *p;
    s32 i;
    s32 j;
    s32 d;
    s32 k;
    SV8 *q;

    GetPartLocalMatrix(o, 0, &m);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    p = (u8 *)((o->hitData & 0x0FFFFFFF) | 0x80000000);
    v[0].x = -0x28;
    v[0].y = -0x28;
    v[0].z = o->workE0 - 0x177;
    v[1].x = 0x28;
    v[1].y = 0x28;
    v[1].z = o->workE4 - 0x177;
    RotTransSV(&v[0], &v[0], &flag);
    RotTransSV(&v[1], &v[1], &flag);
    if (v[0].x > v[1].x) {
        AF(p, s16, 0x6) = v[0].x;
        AF(p, s16, 0x4) = v[1].x;
    } else {
        AF(p, s16, 0x6) = v[1].x;
        AF(p, s16, 0x4) = v[0].x;
    }
    if (v[0].y > v[1].y) {
        AF(p, s16, 0xA) = v[0].y;
        AF(p, s16, 0x8) = v[1].y;
    } else {
        AF(p, s16, 0xA) = v[1].y;
        AF(p, s16, 0x8) = v[0].y;
    }
    if (v[0].z > v[1].z) {
        AF(p, s16, 0xE) = v[0].z;
        AF(p, s16, 0xC) = v[1].z;
    } else {
        AF(p, s16, 0xE) = v[1].z;
        AF(p, s16, 0xC) = v[0].z;
    }
    v[0] = D_sc06_029_801DDB48;
    if (PathHitsModel(o->model, o->hitData, &D_sc06_029_801DDB48 - 1, &v[0]) != 0) {
        HitPlayer(1, 0x4001, HeadingToSV(&D_800D3918, &g_GroundNormal), 0x78, &v[0], &g_GroundNormal);
    }
    gte_SetRotMatrix((u8 *)o->model + 0x34);
    gte_ldclmv(&m);
    gte_rtir();
    gte_stclmv(&m);
    gte_ldclmv((u8 *)&m + 2);
    gte_rtir();
    gte_stclmv((u8 *)&m + 2);
    gte_ldclmv((u8 *)&m + 4);
    gte_rtir();
    gte_stclmv((u8 *)&m + 4);
    gte_SetTransMatrix((u8 *)o->model + 0x34);
    gte_ldlv0(m.t);
    gte_rtv0tr();
    gte_stlvnl(m.t);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    d = o->workE0 - o->workE4;
    for (i = 0; i < 4; i++) {
        v[i].x = v[i].y = 0;
        k = o->workE4 - 0x177;
        v[i].z = (d >> 3) + (d >> 2) * i + k;
        RotTransSV(&v[i], &v[i], &flag);
    }
    func_sc06_029_80184E6C(o->ext0, (s32)&v[0]);
    func_sc06_029_80184E6C(o->ext1, (s32)&v[1]);
    func_sc06_029_80184E6C(o->workD4, (s32)&v[2]);
    func_sc06_029_80184E6C(o->workD8, (s32)&v[3]);
    if (o->workFE != -1) {
        v[0].x = v[0].y = 0;
        v[0].z = o->workE0 - 0x177;
        RotTransSV(&v[0], D_sc06_029_801DFD38[o->workFE] + 8, &flag);
    }
    gte_SetRotMatrix(&D_800AF648);
    gte_ldclmv(&m);
    gte_rtir();
    gte_stclmv(&m);
    gte_ldclmv((u8 *)&m + 2);
    gte_rtir();
    gte_stclmv((u8 *)&m + 2);
    gte_ldclmv((u8 *)&m + 4);
    gte_rtir();
    gte_stclmv((u8 *)&m + 4);
    gte_SetTransMatrix(&D_800AF648);
    gte_ldlv0(m.t);
    gte_rtv0tr();
    gte_stlvnl(m.t);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    for (i = 0; i < 2; i++) {
        q = &D_sc06_029_801DFE94[i * 9];
        for (j = 0; j < 8; j++) {
            v[0].x = q->x;
            v[0].y = q->y;
            v[0].z = q->z + o->workE4;
            v[1].x = q->x;
            v[1].y = q->y;
            v[1].z = q->z + o->workE0;
            q++;
            v[2].x = q->x;
            v[2].y = q->y;
            v[2].z = q->z + o->workE4;
            v[3].x = q->x;
            v[3].y = q->y;
            v[3].z = q->z + o->workE0;
            func_sc06_029_80184C68((u8 *)v, i);
        }
    }
}

void func_sc06_029_80184C68(u8 *v, s32 n) {
    s32 flag[2];
    s32 otz;
    u8 *pk;
    u8 *pk2;
    PTag *ot;
    s32 z;
    u32 *base;
    s32 c;

    pk = g_PrimNext;
    c = D_sc06_029_801909F0[n * 2 + (D_800B99DA & 1)];
    base = g_WorldOtTable[D_800B9A02];
    g_PrimNext = pk + 0x24;
    AF(pk, u8, 3) = 8;
    AF(pk, s32, 4) = c;
    AF(pk, u8, 7) = 0x38;
    AF(pk, s32, 0xC) = c;
    AF(pk, s32, 0x14) = c;
    AF(pk, s32, 0x1C) = c;
    gte_ldv3(v, v + 8, v + 0x10);
    gte_rtpt();
    gte_stflg(&flag[0]);
    gte_stsxy3(pk + 8, pk + 0x10, pk + 0x18);
    gte_ldv0(v + 0x18);
    gte_rtps();
    gte_stflg(&flag[1]);
    flag[0] |= flag[1];
    gte_stsxy(pk + 0x20);
    gte_avsz4();
    gte_stotz(&otz);
    if ((flag[0] & ~0x1000) == 0) {
        z = otz - 3;
        if (z < 0) {
            z = 0;
        } else if (z >= 0x1000) {
            z = 0xFFF;
        }
        ot = (PTag *)((z << 2) + (u32)base);
        AF(pk, u8, 7) |= 2;
        ((PTag *)pk)->addr = ot->addr;
        pk2 = g_PrimNext;
        ot->addr = (u32)pk;
        g_PrimNext = pk2 + 8;
        AF(pk2, u8, 3) = 1;
        AF(pk2, u32, 4) = 0xE100012A;
        ((PTag *)pk2)->addr = ot->addr;
        ot->addr = (u32)pk2;
    }
}

void func_sc06_029_80184E6C(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        AF(arg0, u16, 8) = (u16) AF(arg1, u16, 0);
        AF(arg0, u16, 0xA) = (u16) AF(arg1, u16, 2);
        AF(arg0, u16, 0xC) = (u16) AF(arg1, u16, 4);
    }
}

void func_sc06_029_80184EA0(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) | 0x80000000);
    }
}

void func_sc06_029_80184EC0(StageActor *arg0) {
    D_sc06_029_80190A18[arg0->state]();
}

extern u16 D_sc06_029_80190810[][6];
extern u8 D_sc06_029_80190A08;
void func_sc06_029_80184EFC(u8 *o) {
    s32 t;

    t = AllocActorModel();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(t, 0);
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(o, s32, 0x58) = (s32)&D_sc06_029_80190A08 | 0x10000000 | 0x20000000 | 0x40000000;
    if (AF(o, s16, 0x70) & 0x8000) {
        AF(o, s16, 0x34) = 1;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12) + D_sc06_029_80190810[AF(o, u16, 0x70) & 0xF][0] + 0xE00;
    UpdateModelZYX(o);
    SetForwardVelocity(o, 0xFFFC0000);
    AF(o, s32, 0x1C) = 0x20;
    AF(o, s16, 2)++;
}

void func_sc06_029_80184FF8(u8 *o) {
    SpawnDef d;
    SV8 c;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer() == 0) {
            return;
        }
        AF(o, s32, 0x1C) = 1;
        AF(o, u16, 0x34)++;
        if (AF(o, u16, 0x70) & 0x4000) {
            PlaySoundId(0x9C6, 0);
        }
    case 1:
        if ((AF(o, s32, 0x1C) & 0xF) == 0) {
            d.x = AF(o, u16, 0x88);
            d.y = AF(o, u16, 0x8A);
            d.z = AF(o, u16, 0x8C);
            d.kind = 0x31C;
            d.unk8 = AF(o, u16, 0x70) | 0x8000;
            d.flags = 0;
            d.unk10 = 0;
            d.unkE = 0;
            d.unkC = 0x7FFF;
            SpawnActorFromDef(&d, AF(o, s32, 0x64));
            if (++AF(o, s16, 0xFE) >= 2) {
                AF(o, u16, 0x34)++;
            }
        }
        break;
    case 2:
        break;
    }
    c = D_sc06_029_801DDB40[1];
    if (PathHitsModel(AF(o, s32, 0x20), AF(o, s32, 0x58), &D_sc06_029_801DDB40[0], &c) != 0) {
        HitPlayer(1, 0x4019, AF(AF(o, u8 *, 0x20), s16, 0x12), 0x50, &c, &g_GroundNormal);
    }
    AF(AF(o, u8 *, 0x20), u16, 0x18) += 0x140;
    AF(AF(o, u8 *, 0x20), u16, 0x1A) += 0x140;
    if (AF(AF(o, u8 *, 0x20), s16, 0x18) > 0x7000) {
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x7000;
    }
    MoveObject(o);
    if (++AF(o, s32, 0x1C) > 0x60) {
        FreeActor(o);
    } else {
        func_sc06_029_80185214(o);
    }
}

extern void DrawPrimGT4Mtx();

void func_sc06_029_80185214(u8 *o) {
    typedef struct { SV8 v[4]; s16 uv[4][2]; s32 col[4]; s32 flag; u8 b; } Q;
    Q q;
    s32 a;
    s32 c;

    a = AF(o, s32, 0x1C);
    q.flag = 0x50000000;
    a = a | (a << 8) | (a << 16);
    c = 0x808080 - a;
    q.v[2].x = -0x40;
    q.v[3].x = 0x40;
    q.v[1].x = 0x40;
    q.v[0].x = -0x40;
    q.v[3].y = 0x40;
    q.v[2].y = 0x40;
    q.v[1].y = -0x40;
    q.v[0].y = -0x40;
    q.v[3].z = 0;
    q.v[2].z = 0;
    q.v[1].z = 0;
    q.v[0].z = 0;
    q.b = 0x79;
    q.uv[0][0] = 0xC00; q.uv[0][1] = 0x180;
    q.uv[1][0] = 0xC7F; q.uv[1][1] = 0x180;
    q.uv[2][0] = 0xC00; q.uv[2][1] = 0x1FF;
    q.uv[3][0] = 0xC7F; q.uv[3][1] = 0x1FF;
    q.col[0] = c; q.col[1] = c; q.col[2] = c; q.col[3] = c;
    DrawPrimGT4Mtx(&q, AF(o, s32, 0x20) + 0x34);
}

void func_sc06_029_801852E4(StageActor *o) {
    QuadArg q;
    WMtx m;
    s32 z[4];
    s32 flag;
    SV4 *v;
    s32 i;
    s32 a;
    s32 b;
    StageActor *p;
    s32 t;

    p = o->parent;
    if ((s16)p->id != o->work100) {
        FreeActor(o);
        return;
    }
    o->pos[1].w = p->pos[1].w + 0xFF000000;
    t = o->workE0 - 0x40;
    o->workE0 = t;
    if (t < -0x200) {
        o->workE0 = -0x200;
    }
    q.p[0].x = -0x10;
    q.p[1].x = 0x10;
    q.p[0].z = q.p[1].z = -0x140;
    q.p[2].z = o->workE0;
    q.p[3].z = o->workE0;
    q.p[0].y = q.p[1].y = q.p[2].x = q.p[3].x = q.p[2].y = q.p[3].y = 0;
    FaceHelper(o, &q.p[0], &q.p[0]);
    FaceHelper(o, &q.p[1], &q.p[1]);
    m = GsIDMATRIX;
    RotMatrixY(o->model->rot.vy + o->workFE, &m);
    LocalToWorld(&m, &q.p[2], &q.p[2]);
    m = GsIDMATRIX;
    RotMatrixY(o->model->rot.vy - o->workFE, &m);
    LocalToWorld(&m, &q.p[3], &q.p[3]);
    q.p[2].x += q.p[0].x;
    q.p[2].y += q.p[0].y;
    q.p[2].z += q.p[0].z;
    q.p[3].x += q.p[1].x;
    q.p[3].y += q.p[1].y;
    q.p[3].z += q.p[1].z;
    gte_SetRotMatrix(&D_800AF648);
    gte_SetTransMatrix(&D_800AF648);
    for (i = 0, v = q.p; i < 4; i++, v++) {
        gte_ldv0(v);
        gte_rtps();
        gte_stsxy(v);
        gte_stflg(&flag);
        gte_stszotz(&z[i]);
        if (flag & ~0x1000) {
            return;
        }
    }
    a = z[2];
    if (z[3] < a) {
        a = z[3];
    }
    b = z[0];
    if (z[1] < b) {
        b = z[1];
    }
    if (a < b) {
        b = a;
    }
    *(s32 *)&q.c[1] = *(s32 *)&q.c[0] = 0xC0C0C0;
    q.p[0].z = b;
    *(s32 *)&q.c[3] = *(s32 *)&q.c[2] = 0;
    q.code = 0x50000000;
    DrawPrimG4ScreenDithered(&q);
}

void func_sc06_029_8018562C(StageActor *arg0) {
    D_sc06_029_80190A20[arg0->state]();
}

void func_sc06_029_80185668(StageActor *arg0) {
    D_sc06_029_80190A28[arg0->state]();
}

s32 func_sc06_029_801856A4(s32 arg0, s32 arg1) {
    s16 temp_v0;

    AF(arg0, s32, 0) = arg1;
    AF(arg0, u8, 7) = 0;
    temp_v0 = AF(arg1, s32, 4) & 0x3F;
    AF(arg0, s16, 4) = temp_v0;
    return (s32) temp_v0;
}

s32 func_sc06_029_801856C0(s32 arg0) {
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a1;
    s32 temp_a3;
    u8 temp_a2;
    void *temp_v0;

    temp_v0_2 = AF(arg0, s16, 4);
    temp_a3 = AF(arg0, s32, 0);
    if (temp_v0_2 != 0) {
        temp_v0_3 = temp_v0_2 - 1;
        AF(arg0, s16, 4) = temp_v0_3;
        if ((temp_v0_3 << 0x10) <= 0) {
            temp_a2 = AF(arg0, u8, 7);
            temp_a1 = AF(((temp_a2 * 8) + temp_a3), s32, 4);
            if ((temp_a1 & 0xC0) == 0xC0) {
                AF(arg0, s16, 4) = 0;
            } else {
                if (temp_a1 & 0x80) {
                    AF(arg0, u8, 7) = 0U;
                } else {
                    AF(arg0, u8, 7) = (u8) (temp_a2 + 1);
                }
                AF(arg0, s16, 4) = (s16) (AF(((AF(arg0, u8, 7) * 8) + temp_a3), s32, 4) & 0x3F);
            }
        }
    }
    temp_v0 = (AF(arg0, u8, 7) * 8) + temp_a3;
    return func_sc06_029_801857A4((s32) &D_sc06_029_801901F8, (s32) AF(temp_v0, u16, 0), (s32) AF(temp_v0, u16, 2), 0, /* extra? */ 0x1E0, /* extra? */ 0x1F, /* extra? */ 0x1F, /* extra? */ -4, /* extra? */ 1);
}

s32 func_sc06_029_801857A4(SV8 *v, u32 x0, u32 y0, u32 cx, s32 cy, s32 w0, s32 h0, s32 dz, s32 mode) {
    typedef struct { u32 addr : 24; u32 len : 8; } PTag;
    typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 u0, v0; u16 clut; s16 x1, y1; u8 u1, v1; u16 tpage; s16 x2, y2; u8 u2, v2; u16 pad1; s16 x3, y3; u8 u3, v3; u16 pad2; } FT4;
    u16 x = x0;
    u16 y = y0;
    u8 w = w0;
    u8 h = h0;
    s32 flag;
    s32 flag2;
    s32 otz;
    FT4 *p;
    u32 *ot;
    s32 tpage;
    s32 z;
    s32 t;
    s16 vv;
    s32 k;
    s32 u;

    p = (FT4 *)g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02];
    g_PrimNext = (u8 *)(p + 1);
    *(u32 *)&p->r0 = 0x808080;
    ((u8 *)p)[3] = 9;
    p->code = 0x2C;
    gte_ldv3(&v[0], &v[1], &v[2]);
    gte_rtpt();
    gte_stflg(&flag);
    gte_stsxy3(&p->x0, &p->x1, &p->x2);
    gte_ldv0(&v[3]);
    gte_rtps();
    gte_stflg(&flag2);
    flag |= flag2;
    gte_stsxy(&p->x3);
    gte_avsz4();
    gte_stotz(&otz);
    if (flag & ~0x1000) {
        return;
    }
    tpage = ((mode & 3) << 7) | ((y0 & 0x100) >> 4) | ((x0 & 0x3C0) >> 6) | ((y0 & 0x200) << 2);
    do {
        p->clut = (cy << 6) | ((cx >> 4) & 0x3F);
    } while (0);
    u = x - ((tpage & 0xF) << 6);
    p->tpage = tpage;
    p->u0 = u << (2 - mode);
    t = y;
    if (tpage & 0x10) {
        vv = t - 0x100;
    } else {
        vv = t;
    }
    p->v0 = vv;
    p->u1 = p->u0 + w;
    p->v2 = p->v0 + h;
    p->v1 = p->v0;
    p->u2 = p->u0;
    p->u3 = p->u1;
    p->v3 = p->v2;
    k = dz + 1;
    z = otz + k;
    if (z < 0) {
        z = 0;
    } else if (z >= 0x1000) {
        z = 0xFFF;
    }
    ((PTag *)p)->addr = ((PTag *)&ot[z])->addr;
    ((PTag *)&ot[z])->addr = (u32)p;
}

void func_sc06_029_801859F4(SV8 *v, u32 x, u32 y, s32 cx0, s32 cy0, s32 w0, s32 h0, s32 zo, s32 mode) {
    typedef struct { u32 tag; u8 r0, g0, b0, code; s32 xy0; u8 u0, v0; u16 clut; s32 xy1; u8 u1, v1; u16 tpage; s32 xy2; u8 u2, v2; u16 pad1; s32 xy3; u8 u3, v3; u16 pad2; } FT4;
    u16 cx = cx0;
    u16 cy = cy0;
    u8 w = w0;
    u8 h = h0;
    s32 xy[4];
    s32 z[4];
    s32 flag;
    u8 *p;
    u32 *ot;
    s32 i;
    s32 a, b;
    u16 tp;
    s16 vv;
    s32 t;
    s32 k;

    ot = g_WorldOtTable[D_800B9A02];
    p = g_PrimNext;
    g_PrimNext = p + 0x28;
    p[3] = 9;
    AF(p, s32, 4) = 0x808080;
    p[7] = 0x2C;
    for (i = 0; i < 4; i++, v++) {
        gte_ldv0(v);
        gte_rtps();
        gte_stsxy(&xy[i]);
        gte_stflg(&flag);
        gte_stszotz(&z[i]);
        if (flag & ~0x1000) {
            return;
        }
    }
    a = z[2];
    if (z[3] < a) {
        a = z[3];
    }
    b = z[0];
    if (z[1] < b) {
        b = z[1];
    }
    if (a < b) {
        b = a;
    }
    ((FT4 *)p)->xy0 = xy[0];
    ((FT4 *)p)->xy1 = xy[1];
    ((FT4 *)p)->xy2 = xy[2];
    ((FT4 *)p)->xy3 = xy[3];
    tp = ((mode & 3) << 7) | ((y & 0x100) >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
    AF(p, u16, 0x16) = tp;
    AF(p, u16, 0xE) = (cy << 6) | ((cx >> 4) & 0x3F);
    p[0xC] = ((x & 0xFFFF) - ((tp & 0xF) << 6)) << (2 - mode);
    t = y & 0xFFFF;
    if (tp & 0x10) {
        vv = t - 0x100;
    } else {
        vv = t;
    }
    p[0xD] = vv;
    p[0x14] = p[0xC] + w;
    p[0x1D] = p[0xD] + h;
    p[0x15] = p[0xD];
    p[0x1C] = p[0xC];
    p[0x24] = p[0x14];
    p[0x25] = p[0x1D];
    k = zo + 1;
    b += k;
    if (b < 0) {
        b = 0;
    } else if (b >= 0x1000) {
        b = 0xFFF;
    }
    ((PTag *)p)->addr = ((PTag *)&ot[b])->addr;
    ((PTag *)&ot[b])->addr = (u32)p;
}

s32 func_sc06_029_80185C6C(s32 arg0, s32 arg1) {
    return (s32) ((((arg0 * 4) + arg1) * 8) + &D_sc06_029_801DDB50);
}

void func_sc06_029_80185C88(u8 *o) {
    s32 t;

    t = AllocActorModel();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(t, 0);
    AF(o, s32, 8) += AF(AF(o, u8 *, 0x64), s32, 8);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, u16, 0xFC);
    UpdateModelZYX(o);
    AF(o, s32, 0x1C) = 0x90;
    AF(o, s16, 0xFE) = rand() % 64 + 0x40;
    AF(o, s16, 0x100) = AF(AF(o, u8 *, 0x64), s16, 0x36);
    AF(o, s16, 2)++;
}

extern u8 D_sc06_029_801A0734;
void func_sc06_029_80185D44(StageActor *o) {
    typedef struct { u8 pad[0x2C]; u16 flags; u8 pad2[0x52]; void *link; } Sub;
    ModelObj *r;
    u8 *p;

    r = AllocActorModel();
    o->model = r;
    if (r == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(r, &D_sc06_029_801A0734);
    AF(o, s16, 0xDC) = AF(o, s16, 0xDE) = AF(o, s16, 0xE0) = 0x80;
    AF(o, s16, 0xE2) = -2;
    AF(o, Sub *, 0x20)->flags |= 0x80;
    AF(o, Sub *, 0x20)->link = (u8 *)o + 0xDC;
    p = D_sc06_029_801DDBF4;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0x800;
    AF(p, s32, 4) &= 0x7FFFFFFF;
    o->state++;
}

void func_sc06_029_80185E00(u8 *o) {
    u8 *m = AF(AF(o, u8 *, 0x20), u8 *, 0x80);
    u8 *b;
    s32 s;
    s16 a;
    u8 c;
    s16 d;
    s = rsin((D_800B99DA << 6) & 0x7C0);
    a = (s * 128 >> 12) + 0x80;
    c = (s * 96 >> 12) + 0x60;
    d = (s * 1024 >> 12) + 0x800;
    b = D_sc06_029_801DDBF4;
    AF(m, s16, 0) = AF(m, s16, 2) = AF(m, s16, 4) = a;
    D_sc06_029_80190450[0] = D_sc06_029_80190451 = D_sc06_029_80190452 = c;
    AF(b, s16, 0x18) = AF(b, s16, 0x1A) = d;
    AF(b, u16, 8) = AF(o, u16, 6);
    AF(b, u16, 0xA) = AF(o, u16, 0xA);
    AF(b, u16, 0xC) = AF(o, u16, 0xE);
    if (AF(o, u16, 0x34) == 0 && GroundDistSqToPlayer(o) < 0x7901) {
        RequestBgmPack(0x85);
        AF(o, u16, 0x34)++;
    }
}

void func_sc06_029_80185F08(StageActor *arg0) {
    D_sc06_029_80190A30[arg0->state]();
}

void func_sc06_029_80185F44(void) {
}

void FinalStateInit(StageActor *arg0) {
    SetFlag80((s32) &g_Player);
    D_80078EC0 = 6;
    SetFlag(0x16, 1);
    SetFlag(0x17, 1);
    SetFlag(0x18, 1);
    SetFlag(0x19, 1);
    SetFlag(0x1A, 1);
    SetFlag(0x8A, 1);
    SetFlag(0x8B, 1);
    SetFlag(0x8C, 1);
    SetFlag(0x8D, 1);
    SetFlag(0x8E, 1);
    SetPlayerMode1C6();
    D_80126D20 = 0xBA;
    SpawnEffectOn(0x3B, (s32) &g_Player, 0, 0);
    func_sc06_029_80186044(arg0);
    NextState(arg0);
}

extern void func_800CCB78();
void func_sc06_029_80186044() {
    s32 r;
    s16 y;

    D_80126D20 = 0xBA;
    r = FindEffectByKind((s32) &g_Player, 0x3B);
    if (r != 0) {
        func_800CCB78(r);
    }
    if (!(D_800B99DA & 0x1F)) {
        SpawnEffectOn(0x3C, (s32) &g_Player, 0, 0);
    }
    y = D_80126B62;
    if (y > -0x100) {
        *(s16 *)&D_80126B62 = -0x100;
    } else if (y < -0x580) {
        *(s16 *)&D_80126B62 = -0x580;
    }
}

void func_sc06_029_801860EC(StageActor *arg0) {
    ClearPlayerMode1C6();
    D_80126D20 = 0;
    NextState(arg0);
}

void func_sc06_029_80186124(void) {
}

s32 func_sc06_029_8018612C(void) {
    StageActor *var_v0;

    var_v0 = FindActorByKind(0x324);
    if (var_v0 != 0) {
        var_v0 = SetState(var_v0, 1);
    }
    return var_v0;
}

s32 func_sc06_029_8018615C(void) {
    StageActor *var_v0;

    var_v0 = FindActorByKind(0x324);
    if (var_v0 != 0) {
        var_v0 = SetState(var_v0, 3);
    }
    return var_v0;
}

void func_sc06_029_8018618C(s32 arg0, s32 arg1, s32 arg2) {
    D_801152A0 = (s16) arg0;
}

s32 func_sc06_029_8018619C(void) {
    return 0x82;
}

void func_sc06_029_801861A4(StageActor *arg0) {
    D_sc06_029_80190D64[arg0->state]();
    if (arg0->kind != 0) {
        func_sc06_029_8018653C((s32) arg0, arg0->ext0);
        func_sc06_029_8018653C((s32) arg0, arg0->ext1);
    }
}

extern u8 D_sc06_029_80190A44;
extern u8 *func_sc06_029_80186470();
void func_sc06_029_80186214(StageActor *o) {
    s32 v;

    v = func_sc06_029_80186470(o, &D_sc06_029_80190A44, 0x2E0, 0x1C0, 0xA5);
    o->ext0 = v;
    if (v == 0) {
        RejectSpawn(o);
        return;
    }
    v = func_sc06_029_80186470(o, &D_sc06_029_80190A44, 0x2F0, 0x1C0, 0xA6);
    o->ext1 = v;
    if (v == 0) {
        ZeroFill(o->ext0, 0x38);
        RejectSpawn(o);
        return;
    }
    o->state = 1;
    D_sc06_029_801DFF68 = 0;
    func_sc06_029_8017C8D0();
}

extern s32 func_sc06_029_8018656C(u8 *o);
extern void func_sc06_029_8018641C();
void Spawn353IfFlag8E(StageActor *o) {
    if (GetFlag(0x8E) & 0xFF) {
        if (func_sc06_029_8018656C(o) == 1) {
            SpawnActor(0x353, o);
            o->state = 2;
        } else {
            AF(o->ext0, u8, 0x27) = 0xA5;
            func_sc06_029_8018641C(o);
        }
    }
}

extern s32 func_sc06_029_8018656C(u8 *o);
extern s32 func_sc06_029_801863C8(s32 arg0);
extern void func_sc06_029_8018641C();
void func_sc06_029_80186334(StageActor *o) {
    if (D_sc06_029_801DFF68 != 0) {
        AF(o->ext0, u8, 0x27) = 0xA5;
        AF(o->ext1, u8, 0x27) = 0xA6;
        o->state = 3;
        return;
    }
    if (func_sc06_029_8018656C(o) == 1) {
        func_sc06_029_801863C8((s32) o);
        func_sc06_029_8018641C(o);
    } else {
        AF(o->ext0, u8, 0x27) = 0xA5;
        func_sc06_029_8018641C(o);
    }
}

void func_sc06_029_801863C0(void) {
}

s32 func_sc06_029_801863C8(s32 arg0) {
    AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0xA7;
    return QueueImage((s32) ((D_sc06_029_80190D44[(D_800B99DA & 0x1F)] * 0x10) + &D_sc06_029_801D79E4));
}

extern u8 D_sc06_029_801D78E4;
void func_sc06_029_8018641C(u8 *o) {
    AF(AF(o, u8 *, 0xD0), u8, 0x27) = 0xA8;
    QueueImage((s32) ((D_sc06_029_80190D44[(D_800B99DA & 0x1F)] * 0x10) + &D_sc06_029_801D78E4));
}

extern void InitSpriteKind2();
u8 *func_sc06_029_80186470(u8 *o, s32 a1, s32 a2, s32 a3, s32 a4) {
    u8 *p;

    p = AllocActorSprite();
    if (p == 0) {
        return 0;
    }
    InitSpriteKind2(p, a1, (s16)a2, (s16)a3);
    AF(p, s16, 0x10) = 0xC00;
    AF(p, u8, 0x27) = a4;
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = 0x2D00;
    AF(p, s16, 8) = AF(o, s16, 6);
    AF(p, s16, 0xA) = AF(o, s16, 0xA);
    AF(p, s16, 0xC) = AF(o, s16, 0xE);
    AF(p, u16, 0x2C) = 0xC002;
    return p;
}

s32 func_sc06_029_8018653C(s32 arg0, s32 arg1) {
    u16 temp_v0;

    AF(arg1, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(arg1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) + AF(AF(arg0, void *, 0x64), u16, 0xA));
    temp_v0 = AF(arg0, u16, 0xE);
    AF(arg1, u16, 0xC) = temp_v0;
    return (s32) temp_v0;
}

s32 func_sc06_029_8018656C(u8 *o) {
    SV8 a;
    SV8 b;
    u8 *m;
    s32 h;
    s32 y;
    s32 d;
    if (GroundDistSqToPlayer(o) < 0x1FA5) {
        h = (s16)D_80126B62;
        y = AF(o, s16, 0xA) + AF(AF(o, u8 *, 0x64), s16, 0xA);
        if (((d = h - y) >= 0 ? d : y - h) < 0x10) {
            return 1;
        }
    }
    m = (u8 *)FindActorByKind(0x356);
    if (m != 0) {
        a.x = AF(o, u16, 6);
        a.y = 0;
        a.z = AF(o, u16, 0xE);
        b.x = AF(m, u16, 6);
        b.y = 0;
        b.z = AF(m, u16, 0xE);
        if (SVecDistSq(&a, &b) >= 0x1FA5) {
            return 0;
        }
        y = AF(o, s16, 0xA) + AF(AF(o, u8 *, 0x64), s16, 0xA);
        h = AF(m, s16, 0xA);
        d = h - y;
        if ((d >= 0 ? d : y - h) < 0x10) {
            return 1;
        }
    }
    return 0;
}

void func_sc06_029_80186674(StageActor *arg0) {
    D_sc06_029_80192174[arg0->state]();
}

void func_sc06_029_801866B0(StageActor *o) {
    ModelObj *t;
    s32 n;

    t = AllocActorModel();
    o->model = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(t, 0);
    D_sc06_029_801DFF6C = SpawnActor(0x354, o);
    D_sc06_029_801DFF70 = SpawnActor(0x355, o);
    D_sc06_029_801DFF74 = SpawnActor(0x356, o);
    D_sc06_029_801DFF78 = SpawnActor(0x35F, o);
    D_sc06_029_801DFF7C = SpawnActor(0x330, o);
    D_sc06_029_801DFF80 = SpawnActorArg(0x38B, 0, o);
    D_sc06_029_801DFF84 = SpawnActorArg(0x38B, 1, o);
    D_sc06_029_801DFF88 = SpawnActor(0x39A, o);
    StartEvent(o, &D_sc06_029_80191474);
    n = o->state + 1;
    o->pos[1].h.i = -0x102;
    D_sc06_029_801DFFDC = 0;
    o->state = n;
}

void EventClosing(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        break;
    case 1:
        ShowModel(D_sc06_029_801DFF6C);
        ShowModel(D_sc06_029_801DFF70);
        ShowModel(D_sc06_029_801DFF74);
        ShowModel(D_sc06_029_801DFF80);
        ShowModel(D_sc06_029_801DFF84);
        o->timer = 0x48;
        o->stateCount++;
        PlaySoundId(0xBD2, 0);
        break;
    case 2:
        MoveObject(D_sc06_029_801DFF6C);
        MoveObject(D_sc06_029_801DFF70);
        MoveObject(D_sc06_029_801DFF74);
        MoveObject(D_sc06_029_801DFF80);
        MoveObject(D_sc06_029_801DFF84);
        break;
    case 3:
        break;
    case 4:
        if (AF(D_sc06_029_801DFF6C, s16, 0x98) == 0) {
            StopWithGravity(D_sc06_029_801DFF6C);
            o->stateCount++;
        }
        break;
    case 5:
        break;
    case 6:
        break;
    }
    if (UpdateScript(o) == 1) {
        SetProgress(0x636);
        EndEvent(o);
        FreeActor(o);
        func_800D1724(&D_sc06_029_8018FFFC);
    }
}

void func_sc06_029_80186960(Mover *arg0) {
    TickTimer(arg0);
}

void func_sc06_029_80186980(u8 *arg0) {
    StageActor *temp_a0;

    SetScript(D_sc06_029_801DFF6C, AF(arg0, s32, 0xF8));
    if (AF(arg0, s32, 0xF8) == &D_sc06_029_801B956C) {
        temp_a0 = AF(D_sc06_029_801DFF6C, s32, 0x6C);
        if (temp_a0 != 0) {
            SetScript(temp_a0, (s32) &D_sc06_029_801D4D0C);
        }
    }
}

void func_sc06_029_801869F8(u8 *arg0) {
    SetScript(D_sc06_029_801DFF70, AF(arg0, s32, 0xF8));
}

void func_sc06_029_80186A28(u8 *arg0) {
    SetScript(D_sc06_029_801DFF74, AF(arg0, s32, 0xF8));
}

void func_sc06_029_80186A58(u8 *arg0) {
    SetScript(D_sc06_029_801DFF78, AF(arg0, s32, 0xF8));
}

void func_sc06_029_80186A88(u8 *arg0) {
    SetScript(D_sc06_029_801DFF7C, AF(arg0, s32, 0xF8));
}

extern s32 D_sc06_029_801BC8A4[];
s32 func_sc06_029_80186AB8(void) {
    u8 *p = (u8 *)D_sc06_029_801DFF6C;

    if (AF(p, s32, 0x94) != 0x16) {
        return 0;
    }
    SetModelParts(AF(p, s32, 0x20), &D_sc06_029_801BC8A4);
    return 1;
}

extern s32 D_sc06_029_801DFF8C[];
extern s32 D_sc06_029_801BCF0C;
void func_sc06_029_80186B00(void) {
    s32 i;

    for (i = 0; i < 0x2C; i += 4) {
        AF(D_sc06_029_801DFF8C, s32, i) = AF(D_sc06_029_801BC8A4, s32, i);
    }
    AF(D_sc06_029_801DFF8C, s32, 0x10) = D_sc06_029_801BCF0C;
    SetModelParts(AF(D_sc06_029_801DFF6C, s32, 0x20), D_sc06_029_801DFF8C);
}

s32 func_sc06_029_80186B6C(void) {
    if (MoveCollide(D_sc06_029_801DFF6C) & 0x2000) {
        StartCameraShake((s32) &D_sc06_029_8018CCE8);
        AF(D_sc06_029_801DFF6C, s16, 6) = -0x180;
        AF(D_sc06_029_801DFF6C, s16, 0xE) = -0x180;
        PlaySoundId(0xB96, 0);
        return 1;
    }
    return 0;
}

s32 func_sc06_029_80186BD4(void) {
    return AF(D_sc06_029_801DFF6C, s16, 0x98) == 0;
}

void func_sc06_029_80186BEC(s32 arg0, s32 arg1, s32 arg2) {
    ShowModel(D_sc06_029_801DFF78, arg1, arg2);
}

void func_sc06_029_80186C14(s32 arg0, s32 arg1, s32 arg2) {
    HideModel(D_sc06_029_801DFF78, arg1, arg2);
}

s32 func_sc06_029_80186C3C(u8 *arg0) {
    u16 temp_v0;

    MoveObject(D_sc06_029_801DFF78);
    temp_v0 = AF(arg0, u16, 0x10A) - 1;
    AF(arg0, u16, 0x10A) = temp_v0;
    return (temp_v0 << 0x10) == 0;
}

s32 func_sc06_029_80186C88(void) {
    u8 *p = (u8 *)D_sc06_029_801DFF78;

    if (AF(p, s16, 0x98) == 0 || (AF(p, u16, 0x72) & 0x4000)) {
        return 1;
    }
    return 0;
}

extern s32 D_sc06_029_801DFFB8[];
extern s32 D_sc06_029_801BF990;
void func_sc06_029_80186CC4(void) {
    s32 i;

    for (i = 0; i < 0x24; i += 4) {
        AF(D_sc06_029_801DFFB8, s32, i) = AF(&D_sc06_029_801BF2BC, s32, i);
    }
    AF(D_sc06_029_801DFFB8, s32, 0x1C) = D_sc06_029_801BF990;
    SetModelParts(AF(D_sc06_029_801DFF70, s32, 0x20), D_sc06_029_801DFFB8);
}

void func_sc06_029_80186D30(void) {
    SetModelParts(AF((*(void * *)&D_sc06_029_801DFF70), s32, 0x20), (s32) &D_sc06_029_801BF2BC);
}

s32 func_sc06_029_80186D64(void) {
    u8 *p = (u8 *)D_sc06_029_801DFF74;

    if (AF(p, s16, 0x98) == 0 || (AF(p, u16, 0x72) & 0x4000)) {
        return 1;
    }
    return 0;
}

extern u8 D_sc06_029_80191234;
void func_sc06_029_80186DA0(void) {
    s32 r;

    r = HeadingToPoint(D_sc06_029_801DFF70 + 4, &D_sc06_029_80191234);
    AF(AF(D_sc06_029_801DFF70, u8 *, 0x20), s16, 0x12) = r;
    UpdateModelZYX(D_sc06_029_801DFF70);
    SetForwardVelocity(D_sc06_029_801DFF70, 0xFFF00000);
    AF(D_sc06_029_801DFF70, s32, 0x48) = 0xC000;
    AF(D_sc06_029_801DFF70, s16, 0x34) = 0;
    SetScript(D_sc06_029_801DFF70, &D_sc06_029_801C2AA4);
}

s32 func_sc06_029_80186E18(u8 *o) {
    u8 *p;

    p = (u8 *)D_sc06_029_801DFF70;
    if (AF(p, u8 *, 0x90) == &D_sc06_029_801C2AA4 && AF(p, s16, 0x98) == 0) {
        SetScript(p, &D_sc06_029_801C2AEC);
    }
    p = (u8 *)D_sc06_029_801DFF70;
    AF(AF(p, u8 *, 0x20), u16, 0x10) += 0x20;
    if (AF(p, u16, 0x34) != 0) {
        if (!(MoveCollide(p) & 0x2000)) {
            return 0;
        }
        {
        u8 *q = (u8 *)D_sc06_029_801DFF70;
        AF(AF(q, u8 *, 0x20), s16, 0x10) = 0;
        AF(AF(q, u8 *, 0x20), s16, 0x12) = 0xA00;
        AF(q, s16, 0x34) = 0;
        AF(q, s16, 6) = D_sc06_029_8019123C.x;
        AF(q, s16, 0xA) = D_sc06_029_8019123C.y;
        AF(q, s16, 0xE) = D_sc06_029_8019123C.z;
        StartCameraShake(&D_sc06_029_8018CCE8);
        }
        PlaySoundId(0xB97, 0);
        AF(o, s32, 0xD4) = D_sc06_029_801DFF70;
        return 1;
    }
    if (!(MoveCollide(p) & 0x2000)) {
        return 0;
    }
    {
    u8 *q = (u8 *)D_sc06_029_801DFF70;
    AF(q, s32, 0x14) = 0xFFF30000;
    AF(q, u16, 0x34)++;
    StartCameraShake(&D_sc06_029_8018CCE8);
    }
    SpawnKind1C(D_sc06_029_801DFF70, 1);
    PlaySoundId(0xB97, 0);
    return 0;
}

void func_sc06_029_80186F9C(s32 arg0, s32 arg1, s32 arg2) {
    ShowModel(D_sc06_029_801DFF7C, arg1, arg2);
}

s32 func_sc06_029_80186FC4(void) {
    u8 *p = AF(D_sc06_029_801DFF7C, u8 *, 0x20);

    AF(p, s16, 0x18) += 0xC0;
    AF(p, s16, 0x1A) += 0xC0;
    AF(p, s16, 0x1C) += 0xC0;
    if (AF(p, s16, 0x18) >= 0x3000) {
        AF(p, s16, 0x18) = AF(p, s16, 0x1A) = AF(p, s16, 0x1C) = 0x3000;
        return 1;
    }
    return 0;
}

void func_sc06_029_8018702C(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = (AF(arg0, s16, 0x10A) * 8) + &D_sc06_029_8019122C;
    AF((*(void * *)&D_sc06_029_801DFF74), u16, 6) = (u16) AF(temp_v0, u16, 0);
    AF((*(void * *)&D_sc06_029_801DFF74), u16, 0xA) = (u16) AF(temp_v0, u16, 2);
    AF((*(void * *)&D_sc06_029_801DFF74), u16, 0xE) = (u16) AF(temp_v0, u16, 4);
    AF(AF((*(void * *)&D_sc06_029_801DFF74), void *, 0x20), u16, 0x12) = (u16) AF(temp_v0, u16, 6);
    UpdateModelZYX((s32) (*(void * *)&D_sc06_029_801DFF74), arg1, arg2);
}

void func_sc06_029_80187094(void) {
    func_sc06_029_8018B1E0(6);
}

void func_sc06_029_801870B4(s32 arg0) {
    func_sc06_029_8018B20C(arg0);
}

extern s32 HeadingTo();
extern s32 TurnStep();
s32 func_sc06_029_801870D4(void) {
    s32 r;
    s32 t;

    t = HeadingTo(D_sc06_029_801DFF70 + 4, D_sc06_029_801DFF6C + 4);
    r = TurnStep(AF(AF(D_sc06_029_801DFF70, u8 *, 0x20), s16, 0x12), t, 8);
    AF(AF(D_sc06_029_801DFF70, u8 *, 0x20), u16, 0x12) += r;
    return r == 0;
}

extern s32 HeadingTo();
extern s32 TurnStep();
s32 func_sc06_029_80187148(u8 *o) {
    s32 r;

    r = HeadingTo(D_sc06_029_801DFF70 + 4, D_sc06_029_801DFF7C + 4);
    r = TurnStep(AF(AF(D_sc06_029_801DFF70, u8 *, 0x20), s16, 0x12), r, 8);
    AF(AF(D_sc06_029_801DFF70, u8 *, 0x20), u16, 0x12) += r;
    if (r == 0) {
        AF(o, s32, 0xD4) = D_sc06_029_801DFF7C;
        return 1;
    }
    return 0;
}

s32 func_sc06_029_801871E8(void) {
    s32 temp_v0;
    void *temp_a1;

    temp_v0 = TurnStepToPlayer(D_sc06_029_801DFF70, 8);
    temp_a1 = AF(D_sc06_029_801DFF70, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + temp_v0);
    return temp_v0 == 0;
}

s32 func_sc06_029_80187230(u8 *o) {
    s32 r;
    u8 *p;

    r = HeadingToPoint(D_sc06_029_801DFF70 + 4, &D_sc06_029_8019126C);
    r = TurnStep(AF(AF(D_sc06_029_801DFF70, u8 *, 0x20), s16, 0x12), r, 4);
    p = (u8 *)D_sc06_029_801DFF70;
    AF(AF(p, u8 *, 0x20), u16, 0x12) += r;
    if (r == 0) {
        AF(o, s32, 0xD4) = (s32)p;
        return 1;
    }
    return 0;
}

void func_sc06_029_801872C4(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
}

s32 func_sc06_029_801872E4(void) {
    return RequestBgmPack(0x95) != 0;
}

extern u8 D_sc06_029_801B25D0;
extern void func_sc06_029_80187D64(StageActor *o);
s32 func_sc06_029_80187304(void) {
    u8 *p = (u8 *)D_sc06_029_801DFF7C;

    if (AF(p, s16, 0x98) != 0) {
        return 0;
    }
    if (AF(p, void *, 0x90) != &D_sc06_029_801B25D0) {
        return 1;
    }
    StartCameraShake(&D_sc06_029_8018CCC4);
    func_sc06_029_80187D64((u8 *)D_sc06_029_801DFF7C);
    return 1;
}

void func_sc06_029_8018736C(s32 arg0, s32 arg1, s32 arg2) {
    HideModel(D_sc06_029_801DFF74, arg1, arg2);
}

extern u8 D_sc06_029_801B2B80;
void func_sc06_029_80187394(void) {
    AF(D_sc06_029_801DFF7C, s16, 6) = -0x100;
    AF(D_sc06_029_801DFF7C, s16, 0xA) = -0x302;
    AF(D_sc06_029_801DFF7C, s16, 0xE) = -0x1C0;
    AF(AF(D_sc06_029_801DFF7C, u8 *, 0x20), s16, 0x12) = 0x200;
    SetScript(D_sc06_029_801DFF7C, &D_sc06_029_801B2B80);
    UpdateModelZYX(D_sc06_029_801DFF7C);
}

s32 func_sc06_029_801873F4(void) {
    s32 temp_v0;
    void *temp_a1;

    temp_v0 = TurnStepToPlayer(D_sc06_029_801DFF74, 8);
    temp_a1 = AF(D_sc06_029_801DFF74, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + temp_v0);
    return temp_v0 == 0;
}

s32 func_sc06_029_8018743C(void) {
    V3 v;
    SMtx m;
    SV8 sv;
    P12 a;
    P12 b;
    s32 out;
    u8 *p;
    u8 *q;
    u8 *r;
    Mover *s;
    s32 n;

    if (AF(D_sc06_029_801DFF88, u16, 0x34) == 0) {
        GetPartWorldMatrix(D_sc06_029_801DFF74, 4, &m);
        LocalToWorld(&m, &D_sc06_029_80191254, &sv);
        p = (u8 *)D_sc06_029_801DFF88;
        a.x = AF(p, s16, 6) = g_PlayerX;
        a.y = AF(p, s16, 0xA) = D_80126B62 - 0x30;
        a.z = AF(p, s16, 0xE) = D_80126B66;
        b.x = sv.x;
        b.y = sv.y;
        b.z = sv.z;
        HeadingPitchTo(&out, &a, &b);
        AF(AF(D_sc06_029_801DFF88, u8 *, 0x20), s16, 0x12) = out >> 16;
        sv.x = out;
        sv.y = out >> 16;
        sv.z = 0;
        v.x = 0;
        v.y = -0x100000;
        v.z = -0x180000;
        RotMatrixZYX(&sv, &m);
        ApplyMatrixLV(&m, &v, D_sc06_029_801DFF88 + 0x10);
        ShowModel(D_sc06_029_801DFF88);
        r = (u8 *)D_sc06_029_801DFF88;
        AF(r, s32, 0x1C) = 0;
        AF(r, u16, 0x34)++;
        PlaySoundId(0xBD7, 0);
        return 0;
    }
    q = AF(D_sc06_029_801DFF88, u8 *, 0x20);
    AF(q, s16, 0x10) += 0x100;
    if (!(++AF(D_sc06_029_801DFF88, s32, 0x1C) & 0xF)) {
        PlaySoundId(0xBD6, 0);
    }
    MoveObject(D_sc06_029_801DFF88);
    if (PosDistSq(D_sc06_029_801DFF88 + 4, D_sc06_029_801DFF74 + 4) >= 0x4001) {
        return 0;
    }
    {
        s = (u8 *)D_sc06_029_801DFF88;
        s->model->rot.vx = 0x800;
        s->pos[0].h.i = 0x16F;
        s->pos[1].h.i = -0x264;
        AF(s, u16, 0x34) = 0;
        s->pos[2].h.i = -0x1DA;
        UpdateModelZYX(s);
    }
    return 1;
}

void func_sc06_029_80187660(u8 *o) {
    SV8 s;
    u8 *p;
    s32 i;
    u8 *e;
    u8 *q;
    u8 *r;

    switch (AF(D_sc06_029_801DFF88, u16, 0x34)) {
    case 0:
        PlaySoundId(0xBD7, 0);
        AF(D_sc06_029_801DFF88, s16, 0x10A) = 1;
        AF(D_sc06_029_801DFF88, u16, 0x34)++;
    case 1:
        MoveObject(D_sc06_029_801DFF88);
        p = (u8 *)D_sc06_029_801DFF88;
        if (AF(p, s32, 0x14) >= 0) {
            AF(p, u16, 0x34)++;
            AF(AF(p, u8 *, 0x20), u16, 0x2C) |= 0x10;
            AF(AF(p, u8 *, 0x20), s16, 0x10) = 0;
            AF(AF(p, u8 *, 0x20), s16, 0x18) = AF(AF(p, u8 *, 0x20), s16, 0x1A) = AF(AF(p, u8 *, 0x20), s16, 0x1C) = 0x4000;
            AF(p, s16, 6) = 0;
            AF(p, s16, 0xE) = 0;
            D_sc06_029_801912AC.x = D_sc06_029_801912AC.y = D_sc06_029_801912AC.z = 0x80;
        }
        break;
    case 2:
        s.x = s.z = 0;
        s.y = 0x80;
        if (MoveCollideAt(D_sc06_029_801DFF88, &s) & 0x2000) {
            AF(D_sc06_029_801DFF88, u16, 0x34)++;
            StartCameraShake(&D_sc06_029_8018CCC4);
            q = (u8 *)D_sc06_029_801DFF88;
            AF(AF(q, u8 *, 0x20), u16, 0x2C) |= 0xA0;
            AF(AF(q, u8 *, 0x20), u8 *, 0x80) = &D_sc06_029_8019127C;
            AF(AF(q, u8 *, 0x20), u32, 4) |= 0x50000000;
            for (i = 0; i < 4; i++) {
                SpawnActorArg(0x3C7, i, o);
            }
            PlaySoundId(0x81D, 0);
        }
        break;
    case 3:
        D_sc06_029_801912AC.x = D_sc06_029_801912AC.y = D_sc06_029_801912AC.z = D_sc06_029_801912AC.z + 8;
        if (D_sc06_029_801912AC.x > 0x100) {
            AF(D_sc06_029_801DFF88, u16, 0x34)++;
        }
        break;
    case 4:
        D_sc06_029_801912AC.x = D_sc06_029_801912AC.y = D_sc06_029_801912AC.z = D_sc06_029_801912AC.z - 8;
        if (D_sc06_029_801912AC.x < -0x80) {
            r = (u8 *)D_sc06_029_801DFF88;
            AF(r, u16, 0x34)++;
            AF(AF(r, u8 *, 0x20), u16, 0x2C) &= 0xFF4F;
            AF(AF(r, u8 *, 0x20), u32, 4) &= 0xEFFFFFFF;
            AF(r, s16, 6) = D_sc06_029_80191274.x;
            AF(r, s16, 0xA) = D_sc06_029_80191274.y;
            AF(r, s16, 0xE) = D_sc06_029_80191274.z;
            AF(AF(r, u8 *, 0x20), s16, 0x10) = -0x200;
            AF(AF(r, u8 *, 0x20), s16, 0x12) = -0x80;
            AF(AF(r, u8 *, 0x20), s16, 0x14) = 0x400;
            AF(r, s16, 0x10A) = 0;
            UpdateModelZYX(o);
            HideModel(D_sc06_029_801DFF88);
            for (i = 0, e = (u8 *)&g_Actors; i < 0x60; i++, e += 0x10C) {
                if (*(u16 *)e == 0x3C7) {
                    FreeActor(e);
                }
            }
            D_sc06_029_801DFF68 = 1;
            SpawnActor(0x3D3, o);
            SpawnActorArg(0x3D3, 1, o);
        }
        break;
    }
}

s32 func_sc06_029_80187A04(void) {
    SV8 a;
    WMtx m;
    V3 v;

    a.x = g_PlayerX;
    a.z = D_80126B66;
    m = GsIDMATRIX;
    RotMatrixY(HeadingToPoint(D_sc06_029_801DFF88 + 4, &a), &m);
    ApplyMatrixLV(&m, &D_sc06_029_8019217C, &v);
    AF(D_sc06_029_801DFF88, s32, 4) += v.x;
    AF(D_sc06_029_801DFF88, s32, 8) += v.y;
    AF(D_sc06_029_801DFF88, s32, 0xC) += v.z;
    if (GroundDistSqToPlayer(D_sc06_029_801DFF88) < 0x191) {
        HideModel(D_sc06_029_801DFF88);
        PlaySoundId(4, 0x449);
        return 1;
    }
    return 0;
}

void func_sc06_029_80187B30(s32 arg0, s32 arg1, s32 arg2) {
    ShowModel(D_sc06_029_801DFF88, arg1, arg2);
}

void func_sc06_029_80187B58(s32 arg0, s32 arg1, s32 arg2) {
    HideModel(D_sc06_029_801DFF88, arg1, arg2);
}

void func_sc06_029_80187B80(void) {
    SMtx m;
    SV8 sv;
    Mover *p;

    GetPartWorldMatrix(D_sc06_029_801DFF74, 4, &m);
    LocalToWorld(&m, &D_sc06_029_80191254, &sv);
    p = (u8 *)D_sc06_029_801DFF88;
    p->pos[0].h.i = sv.x - 0x17;
    p->pos[1].h.i = sv.y - 7;
    p->pos[2].h.i = sv.z - 3;
    p->model->rot.vx = 0x400;
    p->model->rot.vy = -0x400;
    UpdateModelZYX(p);
    FreeActor(D_sc06_029_801DFF80);
    FreeActor(D_sc06_029_801DFF84);
}

extern void SetLocalVelocity();
void func_sc06_029_80187C2C(void) {
    SMtx m;
    SV8 sv;
    V3 v;
    Mover *p;

    GetPartWorldMatrix(D_sc06_029_801DFF74, 4, &m);
    LocalToWorld(&m, &D_sc06_029_80191254, &sv);
    p = (u8 *)D_sc06_029_801DFF88;
    p->pos[0].h.i = sv.x;
    p->pos[1].h.i = sv.y;
    p->pos[2].h.i = sv.z;
    p->model->rot.vx = 0;
    p->model->rot.vy = 0;
    UpdateModelZYX(p);
    v.x = v.z = 0;
    v.y = -0x300000;
    SetLocalVelocity(D_sc06_029_801DFF88, &v);
    AF(D_sc06_029_801DFF88, s32, 0x48) = 0x18000;
    AF(AF(D_sc06_029_801DFF88, u8 *, 0x20), s16, 0x10) = 0x800;
}

s32 func_sc06_029_80187CE4(void) {
    StageActor *p = (u8 *)D_sc06_029_801DFF7C;
    s16 v;

    v = (u16)p->pos[1].h.i + 0x14;
    p->pos[1].h.i = v;
    if (v >= -0x82) {
        p->pos[1].h.i = -0x82;
        func_sc06_029_80187D64(p);
        HideModel(D_sc06_029_801DFF6C);
        StartCameraShake(&D_sc06_029_8018CCC4);
        PlaySoundId(0xB5F, 0);
        return 1;
    }
    return 0;
}

void func_sc06_029_80187D64(StageActor *o) {
    SV8 a;
    SV8 b;
    WMtx m;
    u8 *p;
    s32 i;

    a.x = 0;
    a.y = 0x20;
    a.z = -0xC;
    GetPartWorldMatrix(o, 0xE, &m);
    LocalToWorld(&m, &a, &b);
    for (i = 0; i < 16; i++) {
        p = (u8 *)SpawnProp(0x22);
        if (p == 0) {
            continue;
        }
        AF(p, s16, 6) = b.x;
        AF(p, s16, 0xA) = b.y;
        AF(p, s16, 0xE) = b.z;
        AF(p, s32, 0x10) = rcos(i << 9) * 320;
        AF(p, s32, 0x18) = rsin(i << 9) * 320;
        AF(p, u16, 0x34) = (((rand() % 3) << 12) + 0x4000) | 1;
        AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC004;
    }
}

s32 func_sc06_029_80187E84(u8 *o) {
    WMtx m;
    V4 v;
    Player *p;

    u8 *r;
    u8 *t;

    p = &g_Player;
    if (AF(o, s16, 0xFE) == 0) {
        m = GsIDMATRIX;
        RotMatrixY(HeadingToPoint((u8 *)p + 4, &D_sc06_029_8019125C), &m);
        ApplyMatrixLV(&m, &D_sc06_029_8019218C, &v);
        p->pos[0].w += v.x;
        g_Player.pos[1].w += v.y;
        g_Player.pos[2].w += v.z;
        AF(g_PlayerModel, u16, 0x12) += 0x200;
        if (!(D_800B99DA & 1)) {
            func_sc06_029_801885C0((u8 *)p + 4, &v);
        }
        if (PosSVecDistSq((u8 *)p + 4, &D_sc06_029_8019125C) < 0x401) {
            g_Player.pos[0].h.i = D_sc06_029_8019125C.x;
            g_Player.pos[1].h.i = D_sc06_029_8019125C.y;
            g_Player.pos[2].h.i = D_sc06_029_8019125C.z;
            AF(o, s16, 0xFE)++;
        }
    }
    if (AF(o, s16, 0x100) == 0) {
        m = GsIDMATRIX;
        RotMatrixY(HeadingToPoint(D_sc06_029_801DFF70 + 4, &D_sc06_029_80191264), &m);
        ApplyMatrixLV(&m, &D_sc06_029_8019218C, &v);
        r = (u8 *)D_sc06_029_801DFF70;
        AF(r, s32, 4) += v.x;
        AF(r, s32, 8) += v.y;
        AF(r, s32, 0xC) += v.z;
        AF(AF(r, u8 *, 0x20), u16, 0x12) += 0x200;
        if (!(D_800B99DA & 1)) {
            func_sc06_029_801885C0(r + 4, &v);
        }
        if (PosSVecDistSq(D_sc06_029_801DFF70 + 4, &D_sc06_029_80191264) < 0x401) {
            t = (u8 *)D_sc06_029_801DFF70;
            AF(t, s16, 6) = D_sc06_029_80191264.x;
            AF(t, s16, 0xA) = D_sc06_029_80191264.y;
            AF(t, s16, 0xE) = D_sc06_029_80191264.z;
            AF(o, s16, 0x100)++;
        }
    }
    if (AF(o, s16, 0xFE) != 0 && AF(o, s16, 0x100) != 0) {
        AF(o, s32, 0xD4) = D_sc06_029_801DFF6C;
        return 1;
    }
    return 0;
}

void func_sc06_029_801881D8(s32 arg0, s32 arg1) {
    if (!((D_800B99DA % 60) & 0xFFFF)) {
        StartCameraShake((s32) &D_sc06_029_8018CCC4, arg1);
        PlaySoundId(0xB5F, 0);
    }
}

void func_sc06_029_80188240(void) {
    WMtx m;
    V4 v;
    u8 *r;
    u8 *t;

    m = GsIDMATRIX;
    RotMatrixY(HeadingToPoint(D_sc06_029_801DFF70 + 4, &D_sc06_029_8019126C), &m);
    ApplyMatrixLV(&m, &D_sc06_029_8019219C, &v);
    r = (u8 *)D_sc06_029_801DFF70;
    AF(r, s32, 4) += v.x;
    AF(r, s32, 8) += v.y;
    AF(r, s32, 0xC) += v.z;
    if (PosSVecDistSq(r + 4, &D_sc06_029_8019126C) < 0x401) {
        t = (u8 *)D_sc06_029_801DFF70;
        AF(t, s16, 6) = D_sc06_029_8019126C.x;
        AF(t, s16, 0xA) = D_sc06_029_8019126C.y;
        AF(t, s16, 0xE) = D_sc06_029_8019126C.z;
    }
    if (!(AF(D_sc06_029_801DFF70, s32, 0x94) & 7)) {
        SpawnKind1C(D_sc06_029_801DFF70, 0);
    }
}

extern u8 D_sc06_029_801921AC;
void func_sc06_029_801883A0(void) {
    typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
    SV8 sv;
    WMtx m;

    GetPartLocalMatrix(D_sc06_029_801DFF78, 4, &m);
    LocalToWorld(&m, &D_sc06_029_801921AC, &sv);
    func_sc06_029_8018BFC8(D_sc06_029_801DFF78, &sv);
}

extern u8 D_sc06_029_801B23E8;
extern u8 D_sc06_029_801B27B8;
void func_sc06_029_801883FC(void) {
    u8 *p = (u8 *)D_sc06_029_801DFF7C;
    s32 s = AF(p, s32, 0x94);

    if ((s == 7 && AF(p, void *, 0x90) == &D_sc06_029_801B23E8)
        || ((s == 10 || s == 0x42) && AF(p, void *, 0x90) == &D_sc06_029_801B27B8)) {
        PlaySoundId(0xBD4, 0);
    }
}

s32 func_sc06_029_80188470(void) {
    return func_sc06_029_8017C8E4() != 0;
}

extern u8 D_sc06_029_801921B4;
void func_sc06_029_80188490(void) {
    SMtx m;
    SV8 sv;
    s32 r;
    StageActor *o;

    o = (u8 *)D_sc06_029_801DFF7C;
    if (o->index >= 0x23) {
        GetPartWorldMatrix(o, 0xE, &m);
        LocalToWorld(&m, &D_sc06_029_801921B4, &sv);
        if (sv.y + 0x102 >= 0) {
            r = ((sv.y + 0x102) << 12) / 103;
        } else {
            r = ((-0x102 - sv.y) << 12) / 103;
        }
        if (r > 0 && r < 0x1000) {
            AF(AF(D_sc06_029_801DFF74, u8 *, 0x20), s16, 0x1A) = r;
        }
    }
}

void func_sc06_029_80188548(void) {
    D_sc06_029_801DFFDC += 1;
}

s32 func_sc06_029_80188568(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = TurnStepToward((s32) &g_PlayerPosX, AF(arg0, s32, 0xD4) + 4, (s32) AF(g_PlayerModel, s16, 0x12), 8);
    AF(g_PlayerModel, s16, 0x12) = (s16) ((u16) AF(g_PlayerModel, s16, 0x12) + temp_v0);
    return (temp_v0 << 0x10) == 0;
}

void func_sc06_029_801885C0(s32 *a, s32 *b) {
    u8 *p;

    p = (u8 *)SpawnProp(0x22);
    if (p != 0) {
        AF(p, s32, 4) = a[0];
        AF(p, s32, 8) = a[1];
        AF(p, s32, 0xC) = a[2];
        AF(p, s32, 0x10) = -(b[0] >> 1);
        AF(p, s32, 0x18) = -(b[2] >> 1);
        AF(p, s16, 0x34) = 0x3000;
        AF(AF(p, u8 *, 0x20), u16, 0x2C) = 0xC004;
    }
}

void func_sc06_029_8018865C(void) {
    V3 v;
    WMtx m;
    s32 i;
    s32 a;
    s32 x;
    u8 *p;
    s32 r;
    s32 b;

    if (D_sc06_029_801DFFDC < 3) {
        if (D_800B99DA & 1) {
            return;
        }
    } else {
        if (!(D_800B99DA & 3)) {
            return;
        }
    }
    a = -0xC0;
    x = -0x40;
    v.x = 0;
    v.z = 0;
    for (i = 0; i < 4; i++, a += 0x80, x += 0x20) {
        m = GsIDMATRIX;
        RotMatrixZ(a, &m);
        v.y = (rand() % 9) * 0x10000 - 0x300000;
        p = (u8 *)SpawnProp(0x22);
        if (p != 0) {
            AF(p, s16, 6) = x;
            AF(p, s16, 0xA) = -0x102;
            AF(p, s16, 0xE) = rand() % 128 - 0x40;
            r = rand();
            b = rand();
            AF(p, s16, 0x34) = ((r % 4) << 12) + 0x4000 | (b & 1);
            AF(AF(p, u8 *, 0x20), s32, 4) |= 0x60000000;
            ApplyMatrixLV(&m, &v, p + 0x10);
        }
    }
}

void func_sc06_029_8018884C(void) {
    D_sc06_029_801DFFE0 = &D_sc06_029_801912F4;
    D_sc06_029_801DFFE4 = &D_sc06_029_801912F4 + 8;
    D_sc06_029_801DFFE8 = &D_sc06_029_801912F4 - 0x10;
    D_sc06_029_801DFFEC = &D_sc06_029_801912F4 - 8;
    SetCameraUpdate((s32) func_sc06_029_80188BB0, 0);
}

void func_sc06_029_801888A8(void) {
    D_sc06_029_801DFFE0 = &D_sc06_029_801913F4;
    D_sc06_029_801DFFE4 = &D_sc06_029_801913F4 + 8;
    D_sc06_029_801DFFE8 = &D_sc06_029_801913F4 - 0x10;
    D_sc06_029_801DFFEC = &D_sc06_029_801913F4 - 8;
    SetCameraUpdate((s32) func_sc06_029_80188BB0, 1);
}

void func_sc06_029_80188904(void) {
    D_sc06_029_801DFFE0 = &D_sc06_029_80191424;
    D_sc06_029_801DFFE4 = &D_sc06_029_80191424 + 8;
    D_sc06_029_801DFFE8 = &D_sc06_029_80191424 - 0x20;
    D_sc06_029_801DFFEC = &D_sc06_029_80191424 - 0x18;
    SetCameraUpdate((s32) func_sc06_029_80188BB0, 1);
}

void func_sc06_029_80188960(void) {
    SetCameraUpdate((s32) func_sc06_029_80188BB0, 2);
}

void func_sc06_029_80188988(u8 *o) {
    typedef struct { u8 pad[0x3C]; s32 x3C, x40, x44, x48, x4C, x50; } ObjS;
    u8 *a = (u8 *)D_sc06_029_801DFFE0;
    u8 *b = D_sc06_029_801DFFE4;
    s16 v;
    ((ObjS *)o)->x4C = AF(a, s16, 2);
    ((ObjS *)o)->x50 = AF(a, s16, 4);
    ((ObjS *)o)->x40 = AF(b, s16, 2);
    ((ObjS *)o)->x44 = AF(b, s16, 4);
    ((ObjS *)o)->x48 += (s16)EaseValueStep(AF(D_sc06_029_801DFFE8, s16, 0), AF(a, s16, 0), 0x80);
    ((ObjS *)o)->x3C += (s16)EaseValueStep(AF(D_sc06_029_801DFFEC, s16, 0), AF(D_sc06_029_801DFFE4, s16, 0), 0x80);
    v = AF(D_sc06_029_801DFFE0, s16, 0);
    if (v < ((ObjS *)o)->x48) {
        ((ObjS *)o)->x48 = v;
    }
    v = AF(D_sc06_029_801DFFE4, s16, 0);
    if (v < ((ObjS *)o)->x3C) {
        ((ObjS *)o)->x3C = v;
    }
}

void func_sc06_029_80188A90(u8 *o) {
    typedef struct { u8 pad[0x3C]; s32 x3C, x40, x44, x48, x4C, x50; } ObjS;
    SV8 *a = (SV8 *)D_sc06_029_801DFFE0;
    SV8 *b = D_sc06_029_801DFFE4;
    s16 v;
    ((ObjS *)o)->x48 = a->x;
    ((ObjS *)o)->x50 = a->z;
    ((ObjS *)o)->x3C = b->x;
    ((ObjS *)o)->x44 = b->z;
    D_sc06_029_801DFFE8 = &D_sc06_029_801913E4;
    D_sc06_029_801DFFEC = &D_sc06_029_801913E4 + 8;
    ((ObjS *)o)->x4C += (s16)EaseValueStep(((SV8 *)D_sc06_029_801DFFE8)->y, a->y, 0x80);
    ((ObjS *)o)->x40 += (s16)EaseValueStep(((SV8 *)D_sc06_029_801DFFEC)->y, ((SV8 *)D_sc06_029_801DFFE4)->y, 0x80);
    v = AF(D_sc06_029_801DFFE0, s16, 2);
    if (((ObjS *)o)->x4C < v) {
        ((ObjS *)o)->x4C = v;
    }
    v = AF(D_sc06_029_801DFFE4, s16, 2);
    if (((ObjS *)o)->x40 < v) {
        ((ObjS *)o)->x40 = v;
    }
}

void func_sc06_029_80188BB0(s32 arg0) {
    D_sc06_029_801921BC[AF(arg0, u8, 4)]();
}

void func_sc06_029_80188BEC(StageActor *arg0) {
    D_sc06_029_801921C8[arg0->state]();
}

void func_sc06_029_80188C28(StageActor *arg0) {
    D_sc06_029_801921D0[arg0->state]();
}

void func_sc06_029_80188C64(StageActor *arg0) {
    D_sc06_029_801921D8[arg0->state]();
}

void func_sc06_029_80188CA0(StageActor *arg0) {
    D_sc06_029_801921E0[arg0->state]();
}

void func_sc06_029_80188CDC(StageActor *arg0) {
    D_sc06_029_80192210[arg0->state]();
}

void func_sc06_029_80188D18(StageActor *arg0) {
    D_sc06_029_80192298[arg0->state]();
}

void func_sc06_029_80188D54(StageActor *arg0) {
    D_sc06_029_801922A4[arg0->state]();
}

void func_sc06_029_80188D90(StageActor *o) {
    WMtx m;
    QuadArg q;
    u8 unused[0x20];
    s8 *t;
    s32 i;

    aim_80188D90(o, &m);
    q.p[0].z = q.p[2].z = q.p[3].z = 0;
    q.p[1].x = q.p[1].y = q.p[1].z = 0;
    if (D_800B99DA & 1) {
        q.c[1].r = 0xA0;
    } else if (D_800B99DA & 2) {
        q.c[1].r = 0xC0;
    } else {
        q.c[1].r = 0x80;
    }
    t = D_sc06_029_8018F650;
    q.c[0].r = q.c[0].g = q.c[0].b = 0;
    q.c[2].r = q.c[2].g = q.c[2].b = 0;
    q.c[3].r = q.c[3].g = q.c[3].b = 0;
    q.code = 0x50000000;
    q.c[1].g = q.c[1].b = q.c[1].r >> 2;
    for (i = 0; i < 4; i++) {
        q.p[0].x = *t++;
        q.p[0].y = *t++;
        q.p[2].x = *t++;
        q.p[2].y = *t++;
        q.p[3].x = *t++;
        q.p[3].y = *t++;
        t -= 2;
        DrawPrimG4Mtx(&q, &m);
    }
    t = D_sc06_029_8018F664;
    q.p[0].y = q.p[2].y = q.p[3].y = 0;
    q.p[1].x = q.p[1].y = 0;
    q.p[1].z = -0x20;
    for (i = 0; i < 4; i++) {
        q.p[0].x = *t++;
        q.p[0].z = *t++;
        q.p[2].x = *t++;
        q.p[2].z = *t++;
        q.p[3].x = *t++;
        q.p[3].z = *t++;
        t -= 2;
        DrawPrimG4Mtx(&q, &m);
        if (i == 1) {
            q.p[1].z = 0x20;
            t += 2;
        }
    }
    t += 2;
    q.p[0].x = 0;
    q.p[0].z = -0x20;
    q.c[0].r = q.c[1].r;
    q.c[0].g = q.c[0].b = q.c[1].g;
    for (i = 0; i < 2; i++) {
        q.p[2].x = *t++;
        q.p[2].z = *t++;
        q.p[3].x = *t++;
        q.p[3].z = *t++;
        DrawPrimG4Mtx(&q, &m);
    }
}

void func_sc06_029_80189148(StageActor *arg0) {
    D_sc06_029_801922C4[arg0->state]();
    if (((s32)arg0->model->unk04 >= 0) && (arg0->work10A == 0) && (arg0->kind != 0)) {
        func_sc06_029_80188D90((s32) arg0);
    }
}

void func_sc06_029_801891D0(StageActor *arg0) {
    ModelObj *temp_a0;

    D_sc06_029_801922EC[arg0->state]();
    if (arg0->kind != 0) {
        temp_a0 = arg0->model;
        temp_a0->rot.vy = (u16) ((u16)temp_a0->rot.vy + AF(arg0->message, u16, 6));
    }
}

void func_sc06_029_80189244(SV8 *o) {
    s32 i;
    s32 j;
    s32 h;
    s32 x;
    s32 y;
    s32 w;

    h = 0;
    for (i = 0; i < 0x34; i++) {
        o[i].x = 0;
        o[i].z = 0;
    }
    for (i = 0x33, j = 0x190; i > 0; j -= 0x10, i -= 2) {
        o[i].y = h;
        AF((u8 *)o + j, s16, 2) = h;
        h += -8 - rand() % 8;
    }
    AF(o, s16, 0x1A2) = rand() % 0x1000;
    AF(o, s16, 0x1A0) = rand() % 48 + 0x30;
    x = rand() % 16;
    AF(o, s16, 0x1A4) = (rand() & 1) ? x : -x;
    y = rand() % 64;
    AF(o, s16, 0x1A6) = (rand() & 1) ? y : -y;
    w = rand() % 384;
    AF(o, s16, 0x1A8) = (rand() & 1) ? w : -w;
    AF(o, s16, 0x1AA) = 2;
    AF(o, s32, 0x1AC) = rand() % 64 + 0x40;
}

void func_sc06_029_80189440(u8 *o, SV8 *w) {
    WMtx m;
    s32 flag;
    s32 flag2;
    s32 otz;
    s32 i;
    s32 j;
    s32 t;
    s32 r;
    s32 c;
    u32 *ot;
    u32 *z;
    u8 *p;
    u8 *q;
    SV8 *v;
    u32 dm;
    SV8 (*pr)[2];
    s32 k;

    j = 0x33;
    for (i = 0x32, v = &w[0x32]; i >= 2; i -= 2, v -= 2) {
        v->x = w[j - 3].x;
        w[j].x = w[j - 2].x;
        j -= 2;
    }
    r = (AF(w, s16, 0x1A0) * rcos(AF(w, s16, 0x1A2))) >> 12;
    AF(w, u16, 0x1A2) += AF(w, s32, 0x1AC);
    w[0].x = r - AF(w, u16, 0x1AA);
    w[1].x = AF(w, u16, 0x1AA) + r;
    c = AF(o, s32, 0xE0);
    m = GsIDMATRIX;
    ot = (u32 *)g_WorldOtTable + (D_800B9A02 << 12);
    RotMatrixZ(AF(w, s16, 0x1A8), &m);
    m.t[0] = AF(w, s16, 0x1A4);
    m.t[1] = -0xF2;
    m.t[2] = AF(w, s16, 0x1A6);
    gte_SetRotMatrix(&D_800AF648);
    gte_ldclmv(&m.m[0][0]);
    gte_rtir();
    gte_stclmv(&m.m[0][0]);
    gte_ldclmv(&m.m[0][1]);
    gte_rtir();
    gte_stclmv(&m.m[0][1]);
    gte_ldclmv(&m.m[0][2]);
    gte_rtir();
    gte_stclmv(&m.m[0][2]);
    gte_SetTransMatrix(&D_800AF648);
    gte_ldlv0(m.t);
    gte_rtv0tr();
    gte_stlvnl(m.t);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    for (i = 0, v = w; i < 25; i++, v += 2) {
        p = g_PrimNext;
        g_PrimNext = p + 0x24;
        p[3] = 8;
        AF(p, s32, 4) = c;
        p[7] = 0x3A;
        AF(p, s32, 0xC) = c;
        AF(p, s32, 0x14) = c;
        AF(p, s32, 0x1C) = c;
        gte_ldv3(&v[0], &v[1], &v[2]);
        gte_rtpt();
        gte_stflg(&flag);
        gte_stsxy3(p + 8, p + 0x10, p + 0x18);
        gte_ldv0(&v[3]);
        gte_rtps();
        gte_stflg(&flag2);
        flag |= flag2;
        gte_stsxy(p + 0x20);
        gte_avsz4();
        gte_stotz(&otz);
        if (!(flag & ~0x1000)) {
            t = otz + 1;
            if (t >= 0x1000) {
                t = 0xFFF;
            }
            z = (u32 *)((t << 2) + (s32)ot);
            ((PTag *)p)->addr = ((PTag *)z)->addr;
            ((PTag *)z)->addr = (u32)p;
            dm = 0xE100004A;
            q = g_PrimNext;
            g_PrimNext = q + 8;
            q[3] = 1;
            AF(q, u32, 4) = dm;
            ((PTag *)q)->addr = ((PTag *)z)->addr;
            ((PTag *)z)->addr = (u32)q;
        }
        c += AF(o, s32, 0xE0);
    }
}

void func_sc06_029_801898CC(u8 *o) {
    u8 unused[16];
    u8 *p;
    u8 *q;

    p = AF(o, u8 *, 0xCC);
    if (!(D_800B99DA & 1)) {
        D_sc06_029_801E0001 = 0x20;
    } else {
        D_sc06_029_801E0001 = 0;
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (D_sc06_029_801DFFDC == 1) {
            AF(p, u32, 4) &= 0x7FFFFFFF;
            AF(o, u16, 0x34)++;
            PlaySoundId(0xCA1, 0);
        }
        break;
    case 1:
        AF(p, s16, 0xE) -= 0x40;
        if (AF(p, s16, 0xE) < -0x2FF) {
            AF(p, s16, 0xE) = -0x300;
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        if (D_sc06_029_801DFFDC == 2) {
            AF(o, s32, 0x1C) = 0x20;
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        AF(p, s16, 0xA) -= 0x40;
        if (TickTimer(o)) {
            ZeroFill(p, 0x38);
            FreeActor(o);
        }
        break;
    case 4:
        if (D_800B99DA & 1) {
            return;
        }
        q = (u8 *)SpawnProp(0x22);
        if (q != 0) {
            AF(q, s16, 6) = rand() % 128 - 0x40;
            AF(q, s16, 0xA) = rand() % 128 - 0x182;
            AF(q, s16, 0xE) = rand() % 128 - 0x40;
            AF(q, u16, 0x34) = ((rand() % 5) << 12) + 0x3000 | (rand() & 1);
            AF(AF(q, u8 *, 0x20), u16, 0x2C) = 0xC008;
        }
        if (TickTimer(o)) {
            ZeroFill(p, 0x38);
            FreeActor(o);
        }
        break;
    }
}

void func_sc06_029_80189B38(StageActor *arg0) {
    D_sc06_029_801922F4[arg0->state]();
}

void func_sc06_029_80189B74(u8 *o) {
    typedef struct { s16 xl, xh, yl, yh, zl, zh; } H;
    AF(o, s32, 0x48) = (*(H *)&g_PlayerPosX).xh;
    AF(o, s32, 0x50) = (*(H *)&g_PlayerPosX).zh;
    AF(o, s32, 0x3C) = (*(H *)&g_PlayerPosX).xh;
    AF(o, s32, 0x44) = (*(H *)&g_PlayerPosX).zh;
}

void func_sc06_029_80189BB4(u8 *o) {
    WMtx m;
    V3 v;
    s32 t;

    m = GsIDMATRIX;
    t = AllocActorModel();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(t, &D_sc06_029_801B5EC8);
    SetScript(o, &D_sc06_029_801B90F4);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = 0xA00;
    HideModel(o);
    RotMatrixY(0x200, &m);
    v.x = 0;
    v.y = 0xFE000000;
    v.z = 0xFC800000;
    ApplyMatrixLV(&m, &v, o + 4);
    UpdateModelZYX(o);
    AF(o, s32, 0x6C) = SpawnActor(0x382, o);
    SetForwardVelocity(o, 0xFFFC0000);
    AF(o, s16, 2)++;
}

void func_sc06_029_80189CE4(void) {
}

void func_sc06_029_80189CEC(u8 *o) {
    WMtx m;
    V3 v;
    s32 t;

    m = GsIDMATRIX;
    t = AllocActorModel();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(t, &D_sc06_029_801BF2BC);
    SetScript(o, &D_sc06_029_801C2994);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x600;
    HideModel(o);
    RotMatrixY(-0x200, &m);
    v.x = 0x280000;
    v.y = 0xFE000000;
    v.z = 0xFC800000;
    ApplyMatrixLV(&m, &v, o + 4);
    UpdateModelZYX(o);
    SetForwardVelocity(o, 0xFFFC0000);
    AF(o, s16, 2)++;
}

void func_sc06_029_80189E10(void) {
}

void func_sc06_029_80189E18(u8 *o) {
    WMtx m;
    V3 v;
    s32 t;

    m = GsIDMATRIX;
    t = AllocActorModel();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(t, &D_sc06_029_801C5C70);
    SetScript(o, &D_sc06_029_801C8E38);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x600;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    HideModel(o);
    RotMatrixY(-0x200, &m);
    v.x = 0xFFD80000;
    v.y = 0xFE000000;
    v.z = 0xFC800000;
    ApplyMatrixLV(&m, &v, o + 4);
    UpdateModelZYX(o);
    SetForwardVelocity(o, 0xFFFC0000);
    AF(o, s16, 2)++;
}

void func_sc06_029_80189F50(void) {
}

void func_sc06_029_80189F58(u8 *o) {
    WMtx m;
    V3 v;
    s32 t;

    m = GsIDMATRIX;
    t = AllocActorModel();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(t, &D_sc06_029_801CBE14);
    SetScript(o, &D_sc06_029_801CEE2C);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = 0xA00;
    HideModel(o);
    RotMatrixY(0x200, &m);
    v.x = 0;
    v.y = 0xFE000000;
    v.z = 0xFC800000;
    ApplyMatrixLV(&m, &v, o + 4);
    UpdateModelZYX(o);
    SetForwardVelocity(o, 0xFFFC0000);
    AF(o, s32, 0x1C) = 0x20;
    AF(o, s16, 2)++;
}

void func_sc06_029_8018A07C(void) {
}

extern u8 D_sc06_029_801A7A34;
extern u8 D_sc06_029_801B23E8;
void func_sc06_029_8018A084(StageActor *o) {
    WMtx m;
    V3 v; /* MATCH-TRICK: unused local fills the original frame */
    ModelObj *t;
    ModelObj *p;

    m = GsIDMATRIX;
    t = AllocActorModel();
    o->model = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(t, &D_sc06_029_801A7A34);
    SetModelCullBox(o->model, 0x7FFF, 0x7FFF);
    o->model->flags |= 0x10;
    p = o->model;
    p->scale.vx = p->scale.vy = p->scale.vz = 1;
    SetScript(o, &D_sc06_029_801B23E8);
    HideModel(o);
    o->pos[1].h.i = -0x102;
    o->state++;
}

extern void DrawPrimF4Mtx();
extern u8 D_sc06_029_801921E8;
extern u8 D_sc06_029_801921F0;
extern u8 D_sc06_029_801921F8;
extern u8 D_sc06_029_80192200;

static inline void shadow_8018A180(StageActor *o) {
    struct { SV8 v[4]; s32 col; s32 code; } s;
    WMtx m;
    u8 unused[8];
    s.col = 0x282828;
    s.code = 0x60000000;
    GetPartLocalMatrix(o, 0xE, &m);
    LocalToWorld(&m, &D_sc06_029_801921E8, &s.v[0]);
    LocalToWorld(&m, &D_sc06_029_801921F0, &s.v[1]);
    LocalToWorld(&m, &D_sc06_029_801921F8, &s.v[2]);
    LocalToWorld(&m, &D_sc06_029_80192200, &s.v[3]);
    s.v[0].y = 0;
    s.v[1].y = 0;
    s.v[2].y = 0;
    s.v[3].y = 0;
    m = *(WMtx *)((u8 *)o->model + 0x34);
    m.t[1] = -0x82;
    DrawPrimF4Mtx(&s, &m);
}

void func_sc06_029_8018A180(StageActor *o) {
    shadow_8018A180(o);
}

extern void InitMime();
extern s32 D_sc06_029_801CFCA4[];
extern u8 D_sc06_029_80192260;
extern u8 D_sc06_029_80190EDC;
void func_sc06_029_8018A27C(StageActor *o) {
    ModelObj *v;

    v = AllocActorModel();
    o->model = v;
    if (v == 0) {
        RejectSpawn(o);
    } else {
        InitModel(v, D_sc06_029_801CFCA4);
        InitMime(&D_sc06_029_801DFFF0, &D_sc06_029_80192260, D_sc06_029_801CFCA4[0]);
        SetScript(o, &D_sc06_029_80190EDC);
        o->state++;
    }
}

void func_sc06_029_8018A314(StageActor *o) {
    StageActor *p;
    ModelObj *q;

    p = o->parent;
    q = o->model;
    o->pos[0].w = p->pos[0].w;
    o->pos[1].w = p->pos[1].w;
    o->pos[2].w = p->pos[2].w;
    AF(q, B8, 0x10) = AF(p->model, B8, 0x10);
    if ((u8 *)o->script == &D_sc06_029_801D4D0C && o->animTimer == 0) {
        o->accel[1] = 0x2000;
        o->timer = 0x80;
        o->state++;
        PlaySoundId(0xB5C, 0);
    }
}

void func_sc06_029_8018A3CC(s32 arg0) {
    MoveObject(arg0);
    StepMime((s32) &D_sc06_029_801DFFF0);
    if (TickTimer(arg0) != 0) {
        FreeActor(arg0);
    }
}

void func_sc06_029_8018A41C(u8 *o) {
    WMtx m;
    V3 v;
    s32 t;

    m = GsIDMATRIX;
    t = AllocActorModel();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(t, &D_sc06_029_801D4F0C);
    SetModelCullBox(AF(o, s32, 0x20), 0x7FFF, 0x7FFF);
    if (AF(o, s16, 0x70) == 0) {
        RotMatrixY(0x200, &m);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0xA00;
    } else {
        RotMatrixY(-0x200, &m);
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x600;
    }
    v.x = 0;
    v.y = 0xFE200000;
    v.z = 0xFBE00000;
    ApplyMatrixLV(&m, &v, o + 4);
    UpdateModelZYX(o);
    HideModel(o);
    SetForwardVelocity(o, 0xFFFC0000);
    AF(o, s16, 2)++;
}

void func_sc06_029_8018A564(void) {
}

void func_sc06_029_8018A56C(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc06_029_801D812C);
    SetModelCullBox(arg0->model, 0x7FFF, 0x7FFF);
    HideModel((s32) arg0);
    arg0->accel[1] = 0xC000;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc06_029_8018A5E8(void) {
}

extern u8 D_800DF2E0;
extern u8 D_sc06_029_801922CC;
void func_sc06_029_8018A5F0(StageActor *o) {
    ModelObj *p;

    p = (u8 *)AllocActorModel();
    o->model = p;
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    func_8001C810(p, &D_800DF2E0);
    p->unk80 = &D_sc06_029_8019127C;
    p->scale.vx = p->scale.vy = p->scale.vz = 0;
    p->unk04 |= 0x60000000;
    p->flags |= 0xB0;
    o->message = &D_sc06_029_801922CC + o->param * 8;
    o->state++;
}

void func_sc06_029_8018A6A4(StageActor *o) {
    ModelObj *p = o->model;
    s16 *t;
    s16 v;
    if (o->stateCount == 0) {
        t = (s16 *)o->message;
        v = (u16)p->scale.vz + 0x800;
        p->scale.vx = p->scale.vz = v;
        if (v > t[0]) {
            p->scale.vx = p->scale.vz = t[0];
        }
        p->scale.vy += 0x800;
        if (t[1] < p->scale.vy) {
            p->scale.vy = t[1];
            o->timer = t[2];
            o->stateCount++;
        }
    } else if (TickTimer() != 0) {
        v = (u16)p->scale.vz + 0x400;
        p->scale.vx = p->scale.vz = v;
        if (v > 0x7000) {
            p->scale.vx = p->scale.vz = 0x7000;
        }
        p->scale.vy += 0x100;
        if (p->scale.vy > 0x7000) {
            p->scale.vy = 0x7000;
        }
    }
}

void func_sc06_029_8018A7C4(StageActor *o) {
    u8 *m;
    u8 *q;
    s32 i;
    if ((u16)o->param & 1) {
        m = AllocActorSprite();
        if (m == 0) {
            RejectSpawn(o);
            return;
        }
        q = D_sc06_029_801E0000;
        o->ext0 = m;
        SetShapeCircle(q, 0x80);
        AF(q, s32, 0) = 0x402040;
        D_sc06_029_801E0004 = 0;
        func_8001CD50(m, q);
        AF(m, s16, 0x10) = -0x400;
        AF(m, u16, 0x2C) = 0xC008;
        AF(m, s16, 0xA) = -0x102;
        AF(m, s32, 4) |= 0xD0000000;
        o->state += 2;
    } else {
        q = &D_sc06_029_801E0040;
        o->pos[1].h.i = -0x102;
        o->state++;
        for (i = 0; i < 15; i++) {
            func_sc06_029_80189244(q);
            q += 0x1B0;
        }
    }
}

void func_sc06_029_8018A8D4(StageActor *o) {
    u8 *p;
    s32 i;
    u16 s;

    s = o->stateCount;
    switch (s) {
    case 0:
        if (D_sc06_029_801DFFDC != 3) {
            return;
        }
        if (++o->workE0 >= 10) {
            o->workE0 = 10;
            o->stateCount++;
        }
        break;
    case 1:
        if (D_sc06_029_801DFFDC == 4) {
            o->stateCount = s + 1;
        }
        break;
    case 2:
        if (--o->workE0 <= 0) {
            FreeActor(o);
            return;
        }
        break;
    }
    i = 0;
    p = &D_sc06_029_801E0040;
    for (; i < 15; i++) {
        func_sc06_029_80189440(o, p);
        p += 0x1B0;
    }
}

void func_sc06_029_8018A9FC(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;

    SetIdentityRot(&m);
    func_sc06_029_8018AA60((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc06_029_8018AA60(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc06_029_8018AE60(a);
    s = func_sc06_029_8018ADA4(a);
    r.m[0][0] = c;
    r.m[0][1] = 0;
    r.m[0][2] = s;
    r.m[1][0] = 0;
    r.m[1][1] = 0x7FF8;
    r.m[1][2] = 0;
    r.m[2][0] = -s;
    r.m[2][1] = 0;
    r.m[2][2] = c;
    gte_SetRotMatrix(m);
    gte_ldclmv(&r.m[0][0]);
    gte_rtir();
    gte_stclmv(&m->m[0][0]);
    gte_ldclmv(&r.m[0][1]);
    gte_rtir();
    gte_stclmv(&m->m[0][1]);
    gte_ldclmv(&r.m[0][2]);
    gte_rtir();
    gte_stclmv(&m->m[0][2]);
}

void func_sc06_029_8018ABC0(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc06_029_8018AE60(r[0] & 0xFFF);
    cx = func_sc06_029_8018ADA4(r[0] & 0xFFF);
    sy = func_sc06_029_8018AE60(r[1] & 0xFFF);
    cy = func_sc06_029_8018ADA4(r[1] & 0xFFF);
    sz = func_sc06_029_8018AE60(r[2] & 0xFFF);
    cz = func_sc06_029_8018ADA4(r[2] & 0xFFF);
    c = (sx * cz) >> 15;
    b = (sx * sz) >> 15;
    a = (cx * cy) >> 15;
    m[0] = (sz * sy) >> 15;
    m[1] = ((a * sz) >> 15) - c;
    m[2] = ((b * cy) >> 15) + ((cx * cz) >> 15);
    m[3] = (cz * sy) >> 15;
    m[4] = ((a * cz) >> 15) + b;
    m[5] = ((c * cy) >> 15) - ((cx * sz) >> 15);
    m[6] = -cy;
    m[7] = (sy * cx) >> 15;
    m[8] = (sy * sx) >> 15;
}

s32 func_sc06_029_8018ADA4(u32 a) {
    if (a < 0x400) {
        return D_sc06_029_801D6914[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc06_029_801D6914[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc06_029_801D6914[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc06_029_801D6914[0xFFF - a];
    }
}

s32 func_sc06_029_8018AE60(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc06_029_801D6914[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc06_029_801D6914[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc06_029_801D6914[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc06_029_801D6914[a - 0xC00];
    }
}

void func_sc06_029_8018AF0C(u8 *arg0) {
    D_sc06_029_801D7288[AF(arg0, u16, 2)]();
}

void func_sc06_029_8018AF48(u8 *o) {
    u8 *a;
    B4 *p;

    a = AllocSprite16To3E();
    if (a != 0) {
        AF(o, u8 *, 0x20) = a;
        InitSpriteKind0(a, &D_sc06_029_801D7178, D_sc06_029_801D7114[AF(o, s32, 0x2C)].x, D_sc06_029_801D7114[AF(o, s32, 0x2C)].y);
        AF(a, u8, 0x27) = D_sc06_029_801D7140[AF(o, s32, 0x2C)];
        AF(a, s16, 0x2C) = 3;
        AF(o, s16, 6) = 0;
        AF(o, s16, 0xA) = 0x50;
        D_sc06_029_801D7278 = D_sc06_029_801D714C[AF(o, s32, 0x2C)];
        D_sc06_029_801D7274 = AF(&D_sc06_029_801D7274, B4, 0x4);
        D_sc06_029_801D7244 = AF(&D_sc06_029_801D7244, B4, 0x30);
        D_sc06_029_801D7240 = AF(&D_sc06_029_801D7240, B4, 0x4);
        D_sc06_029_801D7210 = AF(&D_sc06_029_801D7210, B4, 0x30);
        D_sc06_029_801D720C = AF(&D_sc06_029_801D720C, B4, 0x4);
        D_sc06_029_801D71DC = AF(&D_sc06_029_801D71DC, B4, 0x30);
        p = &D_sc06_029_801D71D8;
        *p = D_sc06_029_801D71DC;
        D_sc06_029_801D71B0 = *p;
        AF(o, s16, 2)++;
    } else {
        FreeEffect(o);
    }
}

void func_sc06_029_8018B148(s32 arg0) {
    func_sc06_029_8018B188(arg0);
}

void func_sc06_029_8018B168(s32 arg0) {
    FreeEffect(arg0);
}

s32 func_sc06_029_8018B188(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    DrawPrimF4Screen((s32) &D_sc06_029_801D7190);
    var_s1 = 0;
    var_s0 = &D_sc06_029_801D71B8;
    do {
        DrawPrimG4ScreenDithered((s32) var_s0);
        var_s1 += 1;
        temp_v0 = var_s1 < 4;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x34);
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc06_029_8018B1E0(s32 arg0) {
    return SpawnEffectOn(0x28, 0, arg0, 0);
}

void func_sc06_029_8018B20C(void) {
    s32 temp_v0;

    temp_v0 = FindEffectByKind((s32) &g_Player, 0x28);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 2) = (u16) (AF(temp_v0, u16, 2) + 1);
    }
}

void func_sc06_029_8018B250(u8 *arg0) {
    StartRumbleScript((s32) &D_sc06_029_801D7294);
    D_sc06_029_801D72BC[AF(arg0, u16, 2)](arg0);
}

void func_sc06_029_8018B2A8(s32 arg0) {
    CollidePlayerMove();
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    func_sc06_029_8018B2F8(arg0);
    PlaySe(0x92F);
    NextObjState(arg0);
}

s32 func_sc06_029_8018B2F8(s32 arg0) {
    PlaySe(0x451);
    ShowQueuedDamageNumber(arg0);
    SetPlayerMotion(arg0, (s32) &D_sc06_029_801D729C);
    ClearPlayerHittable(arg0);
    AF(arg0, u8, 0xDE) = 0x1E;
    AF(arg0, u8, 0xDF) = 0;
    func_sc06_029_8018B50C();
    SetPlayerEvent100(arg0);
    return NextObjState(arg0);
}

void func_sc06_029_8018B364(u8 *o) {
    SV8 v;
    s32 i;
    s32 k;
    s32 r0;
    s32 r1;
    s32 r2;
    u8 t;

    PosToSVec(o + 4, &v);
    v.y -= 0x40;
    for (i = 0; i < 3; i++) {
        k = func_sc06_029_8018B530();
        if (k >= 0) {
            SpawnEffect(0x51, o, v.x, v.y, v.z, k, 0);
            r0 = rand();
            r1 = rand();
            r2 = rand();
            SpawnEffect(0x52, o, 0, -0x20, 0x10, (s16)((r0 & 3) * 0x400 + (r1 & 3) * 0xFA + (r2 & 3) * 0x44), 0);
        }
    }
    t = AF(o, u8, 0xDE);
    AF(o, u8, 0xDE) = t + 0xFF;
    if (t == 0) {
        func_sc06_029_8018B4B8(o);
        EnterPlayerStanding(o);
        func_80165718(o);
    } else {
        SetPlayerEvent100(o);
    }
}

s32 func_sc06_029_8018B4B8(s32 arg0) {
    PlaySePositional(4, 0x92F);
    PlaySe(0x930);
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

s32 func_sc06_029_8018B50C(s32 arg0) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0x13;
    var_v0 = &D_sc06_029_801E19A3;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    return (s32) var_v0;
}

s32 func_sc06_029_8018B530(void) {
    s32 i;
    s32 one;
    u8 *p;

    i = 0;
    one = 1;
    for (p = &D_sc06_029_801E1990; i < 0x14; i++, p++) {
        if (*p != 0) {
            continue;
        }
        *p = one;
        return i;
    }
    return -1;
}

void func_sc06_029_8018B574(u8 *arg0) {
    D_sc06_029_801D72C8[AF(arg0, u16, 2)]();
}

void func_sc06_029_8018B5B0(u8 *o) {
    u8 *p;
    u8 *e;
    u8 *q;

    p = (AF(o, s32, 0x2C) << 6) + &D_sc06_029_801E19A4;
    e = (u8 *)AllocSprite16To3E();
    q = e;
    AF(o, u8 *, 0x20) = e;
    if (e != 0) {
        func_8001CD9C(e, p);
        SetShapeCircle(p, 0x10);
        func_sc06_029_8018B7A4(p);
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
        func_sc06_029_8018B774(o);
    }
}

void func_sc06_029_8018B6FC(u8 *arg0) {
    s32 t;
    u8 *p;
    u16 a;
    u16 e;

    t = AF(arg0, s32, 0x2C);
    p = (t << 6) + (u8 *)&D_sc06_029_801E19A4;
    if (t != 0) {
        AF(arg0, u16, 6) += AF(arg0, u16, 0x12);
        e = AF(arg0, u16, 0xE);
        a = AF(arg0, u16, 0x1A);
        AF(arg0, u16, 0xE) = e + a;
        if (func_sc06_029_8018B7B8((s32) arg0, (s32) p, (s32) a) == 0) {
            return;
        }
    }
    func_sc06_029_8018B774((s32) arg0);
}

s32 func_sc06_029_8018B774(s32 arg0) {
    D_sc06_029_801E1990[AF(arg0, s32, 0x2C)] = 0;
    return FreeEffect(arg0);
}

void func_sc06_029_8018B7A4(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0) = 0xF0F0F0;
    AF(arg0, s32, 4) = 0;
}

s32 func_sc06_029_8018B7B8(u8 *o, u8 *p) {
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

void func_sc06_029_8018B820(u8 *arg0) {
    D_sc06_029_801D7300[AF(arg0, u16, 2)]();
}

void func_sc06_029_8018B85C(u8 *arg0) {
    s32 pad[10];
    func_801495C4(AF(arg0, s32, 0x34), (s32) (arg0 + 4));
    SetObjTimer((s32) arg0, 3);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc06_029_8018B8A8(s32 arg0) {
    if (TickObjTimer(arg0) != 0) {
        FreeEffect(arg0);
        return;
    }
    func_sc06_029_8018B8F8(arg0);
}

void func_sc06_029_8018B8F0(void) {
}

void func_sc06_029_8018B8F8(u8 *o) {
    SV8 m;
    SV8 a;
    SV8 b;
    SV8 c;
    SV8 d;
    s32 i;
    s32 j;
    CV *col;

    col = D_sc06_029_801D72F8[AF(o, s32, 0x30)];
    AF(o, s16, 0x10) = AF(o, s32, 0x2C);
    PosToSVec(o + 4, &m);
    for (j = 0; j < 4; j++) {
        a.x = 0;
        a.y = 0;
        a.z = 0;
        b = a;
        c = a;
        for (i = 0; i < 4; i++) {
            d = D_sc06_029_801D7314[i];
            AF(o, s16, 0x12) = i + j;
            func_sc06_029_8018BA5C(o, &m, &a, &b, &c, &d, o + 0x10, &col[i]);
        }
    }
}

void func_sc06_029_8018BA5C(u8 *arg0, SV8 *arg1, SV8 *arg2, SV8 *arg3, SV8 *arg4, SV8 *arg5,
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
    d = D_sc06_029_801E1EA4;
    if (*(s16 *)(arg0 + 0x12) == 0) {
        D_sc06_029_801E1ED4 = 0x50000000;
        D_sc06_029_801E1ECC = 0;
        D_sc06_029_801E1ECD = 0;
        D_sc06_029_801E1ECE = 0;
        D_sc06_029_801E1ED0 = 0;
        D_sc06_029_801E1ED1 = 0;
        D_sc06_029_801E1ED2 = 0;
    }
    D_sc06_029_801E1EC4 = arg7[0];
    D_sc06_029_801E1EC8 = arg7[1];
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

void func_sc06_029_8018BDD8(u8 *arg0) {
    D_sc06_029_801D7358[AF(arg0, u16, 2)]();
}

void func_sc06_029_8018BE14(u8 *arg0) {
    AF(arg0, s32 *, 0x1B4) = &D_sc06_029_801D7334;
    CollidePlayerMove();
    ProbePlatformByMove((s32) arg0);
    ProbeGroundByMove((s32) arg0);
    func_sc06_029_8018BE68((s32) arg0);
    NextObjState((s32) arg0);
}

extern u8 D_80062BF4;
extern s32 AngleDist();
extern u8 D_800D58AC;
void func_sc06_029_8018BE68(s32 arg0) {
    StartRumbleScript(&D_80062BF4);
    ClearPlayerHittable(arg0);
    PlaySe(0x451);
    ShowQueuedDamageNumber(arg0);
    if ((s16)AngleDist(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s16, 0xF4)) > 0x400) {
        SetPlayerMotion(arg0, &D_800D5880);
    } else {
        SetPlayerMotion(arg0, &D_800D58AC);
    }
    StartFace(arg0, 0x16);
    ClearPlayerHittable(arg0);
    NextObjState(arg0);
}

void func_sc06_029_8018BF1C(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    AF(arg0, s32, 0x1B0) = 0x12C;
    func_sc06_029_8018BF88(arg0);
    EnterPlayerStanding(arg0);
    if (AF(arg0, s32, 0xB4) == &D_800D5880) {
        SetPlayerMotionBlend(arg0, (s32) &D_800D46E4, 0xE);
    }
    func_80165718(arg0);
}

s32 func_sc06_029_8018BF88(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return ResetPlayerAfterHit(arg0);
}

s32 func_sc06_029_8018BFC8(StageActor *arg0, s32 arg1, s32 arg2) {
    D_sc06_029_801E2018 = arg1;
    return SpawnActor(0x85, arg0);
}

void func_sc06_029_8018BFF8(StageActor *o) {
    SV8 a;
    SV8 r;
    SV8 b;
    WMtx mat;
    ModelObj *p;
    u8 *m;
    WMtx *q;
    s16 y;

    if (SetupActor(o, &D_sc06_029_801D9948) == 0) {
        FreeActor(o);
    }
    SetScript(o, &D_sc06_029_8018C894);
    p = o->model;
    o->param = 0x80;
    p->unk04 |= 0x50000040;
    p->flags |= 1;
    m = (u8 *)o->parent->model + 0x34;
    LocalToWorld(m, D_sc06_029_801E2018, &a);
    b = a;
    r.x = r.y = r.z = 0x1800;
    SetScaleMatrix(&r, &mat);
    RotMatrixZ(rand() & 0xFFF, &mat);
    MulMatrix0(m, &mat, (u8 *)p + 0x34);
    SetMatrixTrans(&b, (u8 *)p + 0x34);
    q = D_sc06_029_801D997C++;
    o->ext0 = q;
    if (D_sc06_029_801D997C > D_sc06_029_801E1FF8) {
        D_sc06_029_801D997C = D_sc06_029_801E1FF8 - 9;
    }
    func_800D20C0(&a, &r, 7);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, q);
    SetMatrixTrans(&a, q);
    y = b.y;
    if (FindGround(&b) != 0 && y - b.y < 0x80) {
        b.y = b.y - 4;
        q = D_sc06_029_801D997C++;
        o->ext1 = q;
        if (D_sc06_029_801D997C > D_sc06_029_801E1FF8) {
            D_sc06_029_801D997C = D_sc06_029_801E1FF8 - 9;
        }
        func_800D23D0(&g_GroundNormal);
        RotMatrixYXZ(&g_GroundNormal, q);
        SetMatrixTrans(&b, q);
    }
    o->state++;
}

void func_sc06_029_8018C23C(StageActor *o) {
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
        t = D_sc06_029_801D9934;
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
            t = D_sc06_029_801D9934;
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

void func_sc06_029_8018C4DC(StageActor *arg0) {
    D_sc06_029_801D9980[arg0->state]();
}
