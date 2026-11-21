#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_097_8017BE9C(void) {
}

void func_sc03_097_8017BEA4(void) {
}

void func_sc03_097_8017BEAC(void) {
}

void func_sc03_097_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_097_80189990[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void AddMaxBp();
extern void AddBp();
extern void PlaySoundId();
extern void func_sc03_097_8017BEBC();
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
extern void (*D_sc03_097_801899E8[])();
extern void PlaySe();
extern void func_sc03_097_8017D030();
extern void HidePlayerScene();
extern void SetPlayerFlag7E2();
extern void FreeEffect();
extern void (*D_sc03_097_801899FC[])();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern void (*D_sc03_097_80189A10[])();
extern void func_800D22E4();
extern void func_sc03_097_8017D728();
extern void (*D_sc03_097_80189B2C[])();
void func_sc03_097_8017ED78(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc03_097_80189B34[])();
void func_sc03_097_8017EDA0(void);
extern void func_800D1EBC();
extern void (*D_sc03_097_80189B40[])();
extern void (*D_sc03_097_80189B4C[])();
extern void (*D_sc03_097_80189B5C[])();
void func_sc03_097_8017EFD4(void);
extern void (*D_sc03_097_80189B64[])();
extern u8 D_sc03_097_80189B74;
extern void StartPlayerActionScript();
extern u8 D_sc03_097_80189B78;
extern void (*D_sc03_097_80189B84[])();
extern u8 D_sc03_097_80189B7C;
extern void (*D_sc03_097_80189B94[])();
extern u8 D_sc03_097_80189B8C;
extern void (*D_sc03_097_80189BAC[])();
extern u8 D_sc03_097_80189BA4;
extern void func_sc03_097_8017F2C8();
extern void (*D_sc03_097_80189BB4[])();
extern void (*D_sc03_097_8019AE50[])();
extern void (*D_sc03_097_8019AE68[])();
extern void (*D_sc03_097_8019AF44[])();
extern void (*D_sc03_097_8019AFE8[])();
extern void (*D_sc03_097_8019CA28[])();
extern void (*D_sc03_097_8019CADC[])();
extern void func_sc03_097_80180E14();
extern void (*D_sc03_097_801A73D0[])();
extern void (*D_sc03_097_801A7718[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc03_097_801861C0;
extern s32 GetFlag();
extern void RejectSpawn();
extern u8 D_sc03_097_801A7408;
extern s32 * func_sc03_097_80185D50();
extern s32 D_sc03_097_801A7470[];
extern s32 SpawnActorArg();
extern void SetFlag();
extern void RunScript();
extern s32 D_sc03_097_801A763C;
extern s32 D_sc03_097_801A7640;
extern s32 D_sc03_097_801A7654;
extern s32 D_sc03_097_801A7668;
extern s32 D_sc03_097_801A76D4;
extern s32 D_sc03_097_801A75B8[];
extern s32 D_sc03_097_801A7534[];
extern s32 UpdateScript();
extern void SetProgress();
extern void UploadFlagImages();
extern s32 func_sc03_097_80185AF8();
extern void AddMoney();
extern s32 func_80174764();
extern void (*D_sc03_097_801A7740[])();
extern u8 D_sc03_097_801A743C;
extern u8 D_sc03_097_801A7BE0;
extern u8 D_sc03_097_801A7E00;
extern u8 D_sc03_097_801A7BF0;
extern u8 D_sc03_097_801A7CF8;

extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

void func_sc03_097_8017EEA0(void);
void func_sc03_097_8017F0D4(void);
extern s32 func_sc03_097_8017EE4C();
extern u8 D_800AE6BD;
extern s32 FindEffectByKind();
extern s32 NextPlayerActionHandler();
extern s32 func_sc03_097_8017F080();
extern s32 D_sc03_097_80189BCC[];
extern s32 func_8013B7F4();
extern s32 D_sc03_097_801AAAD8;
extern void (*D_sc03_097_8019AF18[])();
extern void func_sc03_097_801803FC();
extern void func_sc03_097_80181A48();
extern void UpdateModelZYX();
extern void func_sc03_097_801819D0();
extern s32 func_sc03_097_80181C18();
extern s8 D_sc03_097_801AAAE0;
extern s8 D_sc03_097_801AAAE1;
extern s8 D_sc03_097_801AAAE2;
extern void func_sc03_097_80180450();
extern s32 D_sc03_097_8019AEE8;
extern u8 D_sc03_097_8019AF34;
extern void InitNullModel();
extern void NextState();
extern void func_sc03_097_80180C68();
extern u8 D_sc03_097_8019AF4C;
extern void func_sc03_097_80180F98();
extern s32 func_sc03_097_80180D54();
extern s32 func_sc03_097_80180BD8();
extern void func_800D1724();
extern u8 D_sc03_097_801AAC74;
extern u16 D_sc03_097_801AAC6C;
extern u16 D_sc03_097_801AAC6E;
extern s16 D_sc03_097_801AAC70;
extern s16 D_sc03_097_801AAC72;
extern s32 func_sc03_097_80181B90();
extern void func_sc03_097_80181ABC();
extern void PosToSVec();
extern s32 func_sc03_097_80182004();
extern s32 func_sc03_097_80182348();
extern void func_sc03_097_8018222C();
extern u8 D_sc03_097_8019C53C;
extern u8 D_sc03_097_8019C55C;
extern u8 D_sc03_097_8019C620;
extern s32 MoveCollide();
extern void PlaySoundAtActor();
extern s32 MoveOnGround();
extern void CarryPlayer();

extern s16 D_sc03_097_801AAB6C;

extern void SpawnEffectOn();
extern void BumpSub2Copy();
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
extern s32 SetState();
extern s32 D_sc03_097_8019AE5C[];
extern u8 D_sc03_097_8019AECC;
extern s32 func_sc03_097_80180294();
extern u8 D_sc03_097_8019EA40;
extern void (*D_sc03_097_8019EAA0[])();
extern s32 func_sc03_097_80184D28();
extern s32 TickTimer();
extern s32 GroundDistSqToPlayer();
extern void func_sc03_097_80184DB4();
extern void func_sc03_097_80184E6C();
extern void func_sc03_097_80184E4C();


extern void DrawFadeBlack();
extern void GainStat0FromActor();
extern void ZeroFill();
extern void DespawnActor();
extern void HideModel();
extern void SyncModelPos();
extern u8 D_sc03_097_8019EACC;

extern void func_sc03_097_801820F8();

extern void StopWithGravity();
extern void func_8001CA1C();
extern SV8 D_sc03_097_8019C8F8[];
extern u8 D_sc03_097_8019C65C;
extern u8 D_sc03_097_8019C71C;
extern u8 D_sc03_097_8019C7A4;
extern u8 D_sc03_097_8019C864;
extern u8 D_sc03_097_8019C948;
extern u8 D_sc03_097_8019C96C;
extern u8 D_sc03_097_8019C958;
extern u8 D_sc03_097_8019C964;


extern void PushAlongView();
extern s32 D_sc03_097_8019AFD4[];

extern u8 D_sc03_097_80189E9C;
extern u8 D_sc03_097_8018A068;
s32 func_sc03_097_8017F6D4(s32 arg0);
extern s32 *g_SpawnListFixed;
extern s32 *g_SpawnListRanged;
extern s32 D_8012704C;
extern u8 D_sc03_097_8018A07C;
extern u8 D_sc03_097_8018A108;
extern u8 D_sc03_097_8018A11C;
extern u8 D_sc03_097_8018A1D0;

void func_sc03_097_8017EF4C();

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 GetVar();
extern s16 D_80126B62;
extern s32 g_PlayerPosX;
extern u16 g_Actors;
extern u16 D_800B99DA;
extern s16 D_800B9A08;
extern u8 D_sc03_097_80189940;
extern u8 D_sc03_097_801898DC[];
extern s32 PosDist();
extern void TakePlayerControl();
extern s32 DistSqToPlayer();
extern void SetShapeCircle();
extern u8 D_sc03_097_801AA8C8;
extern u8 D_sc03_097_801AA8C9;
extern u8 D_sc03_097_801AA8CA;
extern u8 D_sc03_097_801AA8CC;
extern u8 D_sc03_097_801AA8CD;
extern u8 D_sc03_097_801AA8CE;
extern s32 D_sc03_097_801AAACC;
extern s32 D_sc03_097_801AAAD0;
extern s32 D_sc03_097_801AAAD4;
extern s32 AllocSpriteInRange();
extern void func_8001CD50();
extern u16 D_sc03_097_801A32C0;


typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];

typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
extern VoidFn D_sc03_097_8019C654[];
extern s32 HeadingTo();
extern s32 PathHitsModel();

typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
extern s8 D_sc03_097_801899BC[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern void DrawPrimG4Mtx();
extern WMtx GsIDMATRIX;
extern void DrawPrimLineG2Mtx();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern s16 D_sc03_097_801A72F0;
extern s16 D_sc03_097_801A72F2;
extern s16 D_sc03_097_801A72F4;
extern Blk30 D_sc03_097_801A72F8;
extern s16 D_sc03_097_801A7328;
extern s16 D_sc03_097_801A732A;
extern s16 D_sc03_097_801A732C;
extern Blk30 D_sc03_097_801A7330;
extern s16 D_sc03_097_801A7360;
extern s16 D_sc03_097_801A7362;
extern s16 D_sc03_097_801A7364;
extern Blk30 D_sc03_097_801A7368;
extern s16 D_sc03_097_801A7398;
extern s16 D_sc03_097_801A739A;
extern s16 D_sc03_097_801A739C;
extern Blk30 D_sc03_097_801A73A0;
extern Blk30 g_Lights;
extern void SetAmbientColor();
extern void ApplyLight();

typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern PtSys D_sc03_097_801AAB60;
extern void func_sc03_097_80182384();
extern s16 D_sc03_097_801AAB66;
extern void func_sc03_097_80182498();
typedef struct { u8 b[0x34]; } R34;
extern s16 g_PlayerHitKind;
extern s32 ActorSegmentHitsPlayer();
extern u16 D_sc03_097_8019C590[];
extern u16 D_sc03_097_8019C5B8[];
extern u16 D_sc03_097_8019C5E0[];
extern VoidFn D_sc03_097_8019C608[];
extern void PlaySoundFor();

typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern OtRef g_WorldOtOrg[];
extern Ot14 g_WorldOt[];
extern s32 AddDrawModeAbr();
extern u8 D_sc03_097_801AAB68;
extern u8 D_sc03_097_801AAB69;
extern u8 D_sc03_097_801AAB6A;

extern u8 D_sc03_097_8019E95C;
extern u8 D_sc03_097_8019E984;
extern s32 D_sc03_097_8019E9B8;
extern u8 D_sc03_097_8019EA58;
extern s32 func_sc03_097_80184DE8();
extern s32 FindOtherActorByKind();
extern s32 PlayerFlag80();
extern void func_sc03_097_80184CB0();
extern s32 MoveCollidePassable();
extern s32 func_sc03_097_80184FB0();
extern s32 func_sc03_097_80184BFC();
extern void FreeProp();

extern void AngleToVec2();
extern void SetForwardVelocity();
extern s32 func_sc03_097_80184E8C();
extern s32 func_sc03_097_80184F30();


extern s16 D_sc03_097_8019AF04[];
extern void func_sc03_097_80180158();

typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern u8 D_sc03_097_801898A8;
extern u8 D_sc03_097_801898E4;
extern u8 D_sc03_097_801A3298;
extern u8 D_sc03_097_801AA858;
extern u8 D_sc03_097_801AA864;
extern u8 D_sc03_097_801AA865;
extern u8 D_sc03_097_801AA866;
extern u8 D_sc03_097_801AA874;
extern u8 D_sc03_097_801AA875;
extern u8 D_sc03_097_801AA876;
extern u8 D_sc03_097_801AA885;
extern u8 D_sc03_097_801AA886;
extern u8 D_sc03_097_801AA888;
extern u8 D_sc03_097_801AA889;
extern u8 D_sc03_097_801AA88A;
extern u8 D_sc03_097_801AA88C;
extern u8 D_sc03_097_801AA88D;
extern u8 D_sc03_097_801AA88E;
extern u8 D_sc03_097_801AA894;
extern u8 D_sc03_097_801AA908;
extern void func_8001C810();
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
extern void SetSpriteMatrixLinked();
extern void SetSpriteMatrix();
extern void func_sc03_097_801813B4();
extern void SpawnKind1C();

typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc03_097_8017F53C();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
extern s32 D_800AF648[];
extern void *g_PlayerModel;


typedef struct { s16 x, y, z, a, b, c, d, e; s32 w; } Arg8C51C;
typedef struct { u8 b[4]; } B4;
extern SV4 D_sc03_097_801A94CC;
extern void SpawnActorFromDef();

extern u8 D_sc03_097_801AAAE4;
extern u8 D_sc03_097_801A94BC;
extern u8 D_sc03_097_801A94C0;
extern u8 D_sc03_097_8019AE80;
extern u8 D_sc03_097_8019AEB4;
extern s32 D_sc03_097_8019AEF4[];
extern s32 AllocActorSprite();
extern void func_8001CD9C();

extern s16 D_80126B66;
extern s16 D_sc03_097_8019AE44[];
extern s16 D_sc03_097_8019AE48;
extern s16 D_sc03_097_8019AE4A;
extern void func_sc03_097_8017FC1C();
extern s16 g_PlayerX;
extern s16 D_sc03_097_8019AE4C;
extern void func_sc03_097_8017FC80();

typedef struct { s32 a; s32 b; } P8;

extern s32 D_sc03_097_801AA85C;
extern s32 D_sc03_097_801AA860;
extern s32 D_sc03_097_801AA868;
extern s32 D_sc03_097_801AA86C;
extern s32 D_sc03_097_801AA870;
extern s32 D_sc03_097_801AA878;
extern s32 D_sc03_097_801AA87C;
extern s32 D_sc03_097_801AA880;

void func_sc03_097_8017BEBC(u8 *arg0, s32 arg1_0) {
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
    *(s32 *)&D_sc03_097_801AA858 = D_sc03_097_801AA868 = D_sc03_097_801AA878 = v.vx;
    D_sc03_097_801AA85C = D_sc03_097_801AA86C = D_sc03_097_801AA87C = v.vy;
    D_sc03_097_801AA860 = D_sc03_097_801AA870 = D_sc03_097_801AA880 = v.vz;
}

void func_sc03_097_8017BFEC(StageActor *arg0) {
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
        if (SetupActor(arg0, &D_sc03_097_801898A8) == 0) {
            return;
        }
        func_8001C810(arg0->model, &D_sc03_097_801A3298);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc03_097_801898E4);
        arg0->model->flags |= 0x20;
        arg0->model->unk80 = &D_sc03_097_801AA858;
        arg0->model->unk04 |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext0 = o;
        p = &D_sc03_097_801AA888;
        func_8001CD50(o, p);
        D_sc03_097_801AA88A = 0x80;
        p[0] = 0x80;
        D_sc03_097_801AA889 = 0xE0;
        D_sc03_097_801AA88D = 0;
        D_sc03_097_801AA88C = 0;
        D_sc03_097_801AA88E = 0;
        SetShapeCircle(p, 0x38);
        s = (U12x9 *) &D_sc03_097_801A32C0;
        b = (U12x9 *) &D_sc03_097_801AA908;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = (u16)arg0->pos[0].h.i;
        AF(o, u16, 0xA) = arg0->pos[1].h.i -= 4;
        AF(o, u16, 0xC) = (u16)arg0->pos[2].h.i;
        AF(o, s32, 4) |= 0x50000000;
        D_sc03_097_801AA886 = 0xFF;
        D_sc03_097_801AA894 = 0xFF;
        D_sc03_097_801AA876 = 0xFF;
        D_sc03_097_801AA874 = 0xFF;
        D_sc03_097_801AA866 = 0xFF;
        D_sc03_097_801AA864 = 0xFF;
        D_sc03_097_801AA885 = 0x80;
        D_sc03_097_801AA875 = 0x80;
        D_sc03_097_801AA865 = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc03_097_801AA908;
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

void func_sc03_097_8017C378(u8 *arg0) {
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
    func_sc03_097_8017BEBC(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc03_097_801898DC[(s16) i]) {
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
            StartEvent(arg0, &D_sc03_097_80189940);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc03_097_8017C5F0(StageActor *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext1 = o;
        p = &D_sc03_097_801AA8C8;
        func_8001CD50(o, p);
        D_sc03_097_801AA8C9 = 0xFF;
        D_sc03_097_801AA8CA = 0xFF;
        p[0] = 0xFF;
        D_sc03_097_801AA8CE = 8;
        D_sc03_097_801AA8CC = 8;
        D_sc03_097_801AA8CD = 0x18;
        SetShapeCircle(p, 0x100);
        v.vx = (u16)arg0->pos[0].h.i;
        v.vy = (u16)arg0->pos[1].h.i - 0x38;
        v.vz = (u16)arg0->pos[2].h.i;
        func_800D20C0(&v, &r, 5);
        q = &D_sc03_097_801AAACC;
        q[0] = v.vx;
        D_sc03_097_801AAAD0 = v.vy;
        D_sc03_097_801AAAD4 = v.vz;
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

void func_sc03_097_8017C738(StageActor *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc03_097_801A32C0;
    r = AF(arg0, U12 *, 0xD8);
    p = (u8 *)arg0->message;
    o = (u8 *)arg0->ext1;
    s4 = (s16 *)arg0->model;
    if (p[1] != 0 && arg0->work108 == 0) {
        arg0->work108 = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--arg0->timer != -1) {
        func_sc03_097_8017BEBC(arg0, 0);
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

void func_sc03_097_8017C8B8(StageActor *arg0) {
    D_sc03_097_80189990[arg0->state]();
}

void func_sc03_097_8017C8F4(void) {
    AddMaxBp((s32) &g_Player, 5);
    AddBp((s32) &g_Player, 0x270F);
    PlaySoundId(0xBFE, 0);
}

void func_sc03_097_8017C940(StageActor *arg0) {
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
        func_sc03_097_8017BEBC((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    PlaySoundId(0x62E, 0);
    *temp_s2 = 0;
    arg0->timer = 0x28;
    arg0->state = (u16) (arg0->state + 1);
}

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
extern void func_sc03_097_8017F724();
typedef struct { s16 v; } S16R;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern CV4 D_sc03_097_801A94C4;
extern CV4 D_sc03_097_801A94C8;
extern CV4 D_sc03_097_801A94D4;
extern s32 ActorTouchesPlayer();
extern VoidFn D_sc03_097_8019C97C[];
extern s32 SetLocalVelocityXZ();
extern s32 DistSqToTarget();
extern s32 TurnStep();
extern s16 D_80126CB6;
extern u8 D_sc03_097_8019C8EC;
extern s32 HeadingToTarget();
extern void SpawnShadow();
extern s32 HeadingToSV();
extern void SpawnActor();
extern s16 D_sc03_097_8019C9EE[];
extern u8 D_sc03_097_8019C9B4;
extern u16 D_sc03_097_8019C9E8[];
extern u16 D_sc03_097_8019C9EA[];
extern u16 D_sc03_097_8019C9EC[];
extern u8 D_sc03_097_8019CA34;
extern u8 D_sc03_097_8019CA94;
extern s16 g_PlayerAbsorbCounter;
extern s32 D_sc03_097_801AAD58;
extern s32 D_sc03_097_801AAD5C;
extern u8 D_sc03_097_8019E968;
extern void InitSpriteKind2();
extern V16 D_sc03_097_801A7318;
extern s32 D_800A5EB0;
extern V16 D_sc03_097_801A7350;
extern s32 D_800A5E90;

void func_sc03_097_8017CA34(StageActor *arg0) {
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

void func_sc03_097_8017CAB4(StageActor *arg0) {
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

void func_sc03_097_8017CB68(StageActor *arg0) {
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

void func_sc03_097_8017CBD4(StageActor *arg0, s32 arg1) {
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

void func_sc03_097_8017CC60(StageActor *arg0, s32 arg1) {
    FreeActor(arg0, arg1);
}

void func_sc03_097_8017CC80(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc03_097_8017BEBC(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

void func_sc03_097_8017CCD4(s32 arg0) {
    SpawnEffect(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_097_8017CD10(u8 *arg0) {
    D_sc03_097_801899E8[AF(arg0, u16, 2)]();
}

void func_sc03_097_8017CD4C(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        PlaySe((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_097_8017CD9C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_097_8017D030((s32) arg0);
}

void func_sc03_097_8017CDF8(u8 *arg0) {
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
    func_sc03_097_8017D030((s32) arg0);
}

void func_sc03_097_8017CE7C(u8 *arg0) {
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
    func_sc03_097_8017D030((s32) arg0);
}

void func_sc03_097_8017CFE4(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_097_8017D030((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc03_097_8017D030(u8 *arg0) {
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
    t = D_sc03_097_801899BC;
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
    t = D_sc03_097_801899BC;
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
        t = D_sc03_097_801899BC;
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

void func_sc03_097_8017D33C(u8 *arg0) {
    D_sc03_097_801899FC[AF(arg0, u16, 2)]();
}

void func_sc03_097_8017D378(u8 *arg0) {
    PlaySe((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_097_8017D3B8(u8 *arg0) {
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
    func_sc03_097_8017D030((s32) arg0);
}

void func_sc03_097_8017D428(u8 *arg0) {
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
    func_sc03_097_8017D030((s32) arg0);
}

void func_sc03_097_8017D4B4(u8 *arg0) {
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
    func_sc03_097_8017D030((s32) arg0);
}

void func_sc03_097_8017D588(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_097_8017D030((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    FreeEffect((s32) arg0);
}

void func_sc03_097_8017D5DC(u8 *arg0) {
    D_sc03_097_80189A10[AF(arg0, u16, 2)]();
}

void func_sc03_097_8017D618(u8 *arg0) {
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

void func_sc03_097_8017D6CC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_097_8017D728((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc03_097_8017D728(u8 *arg0) {
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

void func_sc03_097_8017D898(u8 *obj) {
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

void func_sc03_097_8017E778(void) {
    g_SpawnListFixed = &D_sc03_097_80189E9C;
    g_SpawnListRanged = &D_sc03_097_8018A068;
    func_sc03_097_8017F6D4(0);
}

void func_sc03_097_8017E7B8(void) {
    g_SpawnListFixed = &D_sc03_097_8018A07C;
    g_SpawnListRanged = &D_sc03_097_8018A108;
    func_sc03_097_8017F6D4(1);
    D_8012704C = 1;
}

void func_sc03_097_8017E804(void) {
    g_SpawnListFixed = &D_sc03_097_8018A11C;
    g_SpawnListRanged = &D_sc03_097_8018A1D0;
    func_sc03_097_8017F6D4(2);
}

void func_sc03_097_8017E844(u8 *arg0) {
    D_sc03_097_80189B2C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_097_8017E880(u8 *arg0) {
    func_sc03_097_8017ED78();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_097_8017E8C4(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc03_097_8017E8E8(u8 *arg0) {
    D_sc03_097_80189B34[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_097_8017E924(u8 *arg0) {
    func_sc03_097_8017EDA0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_097_8017E964(u8 *arg0) {
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

void func_sc03_097_8017E9E0(void) {
    func_800D1EBC();
}

void func_sc03_097_8017EA00(u8 *arg0) {
    D_sc03_097_80189B40[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_097_8017EA3C(u8 *arg0) {
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

void func_sc03_097_8017EAB0(u8 *arg0) {
    D_sc03_097_80189B4C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_097_8017EAEC(u8 *arg0) {
    func_sc03_097_8017EEA0();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_097_8017EB28(void) {
    return 0;
}

s32 func_sc03_097_8017EB30(u8 *arg0) {
    PlaySoundId(0x1C, 0);
    ClearTimeChime();
    PlaySoundId(0x1D, 0);
    func_800D0C48(1);
    func_800D1E28();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_097_8017EB98(void) {
    func_800D1EBC();
}

void func_sc03_097_8017EBB8(u8 *arg0) {
    D_sc03_097_80189B5C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_097_8017EBF4(u8 *arg0) {
    func_sc03_097_8017EFD4();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_097_8017EC38(void) {
    if (FadeStep(0) & 0xFFFF) {
        BumpSub2Copy((s32) &g_Player);
        return 1;
    }
    return 0;
}

void func_sc03_097_8017EC78(u8 *arg0) {
    D_sc03_097_80189B64[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_097_8017ECB4(u8 *arg0) {
    func_sc03_097_8017F0D4();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_097_8017ECF0(void) {
    return 0;
}

s32 func_sc03_097_8017ECF8(u8 *arg0) {
    PlaySoundId(0x1C, 0);
    ClearTimeChime();
    PlaySoundId(0x1D, 0);
    func_800D1E28();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_097_8017ED58(void) {
    func_800D1EBC();
}

void func_sc03_097_8017ED78(void) {
    StartPlayerActionScript((s32) &D_sc03_097_80189B74, 0x01000000);
}

void func_sc03_097_8017EDA0(void) {
    StartPlayerActionScript((s32) &D_sc03_097_80189B78, 0x01000000);
}

void func_sc03_097_8017EDC8(u8 *arg0) {
    D_sc03_097_80189B84[AF(arg0, u8, 0x216)]();
}

typedef struct { s16 x, y; u16 c; s16 pad; } Rec8;
extern s16 D_sc03_097_8019AF50[];
extern s16 D_sc03_097_8019AF52[];
extern Rec8 D_sc03_097_8019AFB8[];
extern s32 D_sc03_097_8019AFC8[];
extern s32 D_sc03_097_801AAB20;
extern void InitNullSprite();

extern u8 D_sc03_097_8019AE08;
extern u8 D_sc03_097_8019AE1C;
extern s32 D_sc03_097_8019AE38[];
extern u8 D_sc03_097_8019AEC4;
extern SV8 D_sc03_097_8019EABC[];
extern u8 g_GroundNormal;
extern void HitPlayer();
typedef struct { u16 x, y, z; } Pos3;
typedef struct { u8 r, g, b, cd; s32 pad[3]; } C16;
extern void QueueImage();
extern u8 D_sc03_097_8019EAD4;
extern s32 SpawnPropAt();
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
extern void ResetScriptVM();
extern s32 TargetInFront();
extern void CallActionHandler();
extern SV8 D_sc03_097_801A7730[];


void func_sc03_097_8017EE04(u8 *o) {
    BumpSub2Copy(o);
    SpawnEffectOn(0x19, o, 0x06940695, 0);
    func_sc03_097_8017EE4C(o);
}

s32 func_sc03_097_8017EE4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = FindEffectByKind(arg0, 0x19);
    if (var_v0 == 0) {
        D_800AE6BD += 1;
        var_v0 = NextPlayerActionHandler(arg0);
    }
    return var_v0;
}

void func_sc03_097_8017EEA0(void) {
    StartPlayerActionScript((s32) &D_sc03_097_80189B7C, 0x01000000);
}

void func_sc03_097_8017EEC8(u8 *arg0) {
    D_sc03_097_80189B94[AF(arg0, u8, 0x216)]();
}

void func_sc03_097_8017EF04(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    BumpSub2Copy(arg0, arg1, arg2, arg3);
    HidePlayerScene(arg0);
    SetPlayerFlag7E2(arg0);
    EndScene(arg0);
    func_sc03_097_8017EF4C(arg0);
}

void func_sc03_097_8017EF4C(void) {
}

void func_sc03_097_8017EF54(s32 arg0) {
    SpawnEffectOn(0x1A, arg0, 0x069407A4, 0);
    BumpSub2Copy(arg0);
}

void func_sc03_097_8017EF98(s32 arg0) {
    if (FindEffectByKind(arg0, 0x1A) == 0) {
        NextPlayerActionHandler(arg0);
    }
}

void func_sc03_097_8017EFD4(void) {
    StartPlayerActionScript((s32) &D_sc03_097_80189B8C, 0x01000000);
}

void func_sc03_097_8017EFFC(u8 *arg0) {
    D_sc03_097_80189BAC[AF(arg0, u8, 0x216)]();
}


void func_sc03_097_8017F038(u8 *o) {
    BumpSub2Copy(o);
    SpawnEffectOn(0x19, o, 0x06940695, 0);
    func_sc03_097_8017F080(o);
}

s32 func_sc03_097_8017F080(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = FindEffectByKind(arg0, 0x19);
    if (var_v0 == 0) {
        D_800AE6BD += 1;
        var_v0 = NextPlayerActionHandler(arg0);
    }
    return var_v0;
}

void func_sc03_097_8017F0D4(void) {
    StartPlayerActionScript((s32) &D_sc03_097_80189BA4, 0x01000000);
}

void func_sc03_097_8017F0FC(void) {
    g_CameraProjTarget = 0x1F4;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x31C;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_097_8017F2C8, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_097_8017F2C8((s32) &g_Camera);
}

void func_sc03_097_8017F194(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x3E8;
    g_CameraAngleTarget = 0x35;
    D_8012696A = 0x400;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x73;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_097_8017F2C8, 1);
    SnapCamera((s32) &g_Camera);
    func_sc03_097_8017F2C8((s32) &g_Camera);
}

void func_sc03_097_8017F230(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x3E8;
    g_CameraAngleTarget = 0x117;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_097_8017F2C8, 2);
    SnapCamera((s32) &g_Camera);
    func_sc03_097_8017F2C8((s32) &g_Camera);
}

void func_sc03_097_8017F2C8(s32 arg0) {
    D_sc03_097_80189BB4[AF(arg0, u8, 4)]();
}

extern u8 g_CameraFocus;
extern s32 GetObjPadPressed();
extern s16 D_sc03_097_80189BC8[];
extern s16 D_sc03_097_80189BC4[];
extern s16 D_sc03_097_80189BC0[];

void func_sc03_097_8017F304(u8 *arg0) {
    B8 v;
    u8 t;
    s16 lim;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = D_sc03_097_80189BC0[t];
    }
    v = *(B8 *)&g_CameraFocus;
    lim = -0x1440; if (AF(&v, s16, 0) < lim) AF(&v, s16, 0) = lim;
    lim = -0x10C0; if (AF(&v, s16, 0) > lim) AF(&v, s16, 0) = lim;
    func_sc03_097_8017F53C((s32) arg0, (s32) &v);
}

void func_sc03_097_8017F3D4(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = D_sc03_097_80189BC4[t];
    }
    v = *(B8 *)&g_CameraFocus;
    AF(&v, s16, 0) = -0x1720;
    AF(&v, s16, 2) = -0x202;
    AF(&v, s16, 4) = 0xF00;
    func_sc03_097_8017F53C((s32) arg0, (s32) &v);
}

void func_sc03_097_8017F48C(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = D_sc03_097_80189BC8[t];
    }
    v = *(B8 *)&g_CameraFocus;
    AF(&v, s16, 0) = -0x1280;
    AF(&v, s16, 4) = 0x11A0;
    func_sc03_097_8017F53C((s32) arg0, (s32) &v);
}

void func_sc03_097_8017F53C(u8 *arg0, u8 *arg1) {
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

s32 func_sc03_097_8017F6D4(s32 arg0) {
    return func_8013B7F4(D_sc03_097_80189BCC[arg0], 0);
}

s32 func_sc03_097_8017F704(void) { if (D_8012704C == 0) return 0x38; return 0x44; }

void func_sc03_097_8017F724(StageActor *o, u8 *arg1, s32 n) {
    typedef struct { s16 x, y, z; } P6;
    P6 *p;
    u8 *r;
    s32 i;

    p = (P6 *)arg1;
    for (i = 0; p[i].x != 0; i++) {
        r = (u8 *)SpawnActorArg(0x167, (s16)n, o);
        if (r != 0) {
            AF(r, s16, 6) = p[i].x;
            AF(r, s16, 0xA) = p[i].y;
            AF(r, s16, 0xE) = p[i].z;
        }
    }
}

s32 func_sc03_097_8017F7C0(StageActor *arg0) {
    arg0->unkFC = 0;
    return SetState(arg0, 1);
}

void func_sc03_097_8017F7E4(StageActor *p) {
    s16 k;
    s16 z;
    s32 good;
    s16 t;
    s16 *c;

    c = (s16 *) &g_Player;
    k = p->param;
    good = 0;
    switch (k) {
    case 0:
    case 1:
        z = p->pos[2].h.i;
        if (D_80126B66 < z && z + D_sc03_097_8019AE44[k] < D_80126B66) {
            good = 1;
        }
        break;
    case 2:
        z = p->pos[2].h.i;
        if (D_80126B66 > z && D_80126B66 < z + D_sc03_097_8019AE48) {
            good = 1;
        }
        break;
    case 3:
        z = p->pos[1].h.i;
        if (D_80126B62 > z && D_80126B62 < z + D_sc03_097_8019AE4A) {
            good = 1;
            break;
        }
        z = p->pos[0].h.i;
        if (c[3] < z && z + D_sc03_097_8019AE44[p->param + 1] < c[3]) {
            good = 1;
        }
        break;
    }
    if (good != 0 && D_sc03_097_801AAAD8 == 0) {
        func_sc03_097_8017FC1C(0x12F);
        func_sc03_097_8017F994(p);
    } else {
        t = p->workFE;
        if (t != 0) {
            p->workFE = t - 0x10;
            if (p->workFE < 0) {
                p->workFE = 0;
            }
        }
    }
    func_sc03_097_8017FBB4(p);
}

s32 func_sc03_097_8017F994(StageActor *arg0) {
    arg0->unkFC = 1;
    return SetState(arg0, 2);
}

void func_sc03_097_8017F9BC(StageActor *p) {
    s16 k;
    s16 z;
    s32 bad;
    s16 t;

    k = p->param;
    bad = 0;
    switch (k) {
    case 0:
    case 1:
        z = p->pos[2].h.i;
        if (D_80126B66 < z && z + D_sc03_097_8019AE44[k] < D_80126B66) {
            break;
        }
        bad = 1;
        break;
    case 2:
        z = p->pos[2].h.i;
        if (D_80126B66 > z && D_80126B66 < z + D_sc03_097_8019AE48) {
            break;
        }
        bad = 1;
        break;
    case 3:
        z = p->pos[1].h.i;
        if (D_80126B62 > z && D_80126B62 < z + D_sc03_097_8019AE4A) {
            break;
        }
        z = p->pos[0].h.i;
        if (g_PlayerX < z && z + D_sc03_097_8019AE4C < g_PlayerX) {
            break;
        }
        bad = 1;
        break;
    }
    if (bad != 0 || D_sc03_097_801AAAD8 != 0) {
        func_sc03_097_8017FC80(0x12F);
        p->unkFC = 0;
        SetState(p, 1);
    } else {
        t = p->workFE;
        if (t < 0x70) {
            p->workFE = t + 0x10;
        }
    }
    func_sc03_097_8017FBB4(p);
}

s32 func_sc03_097_8017FB54(s32 arg0, s32 arg1) {
    D_sc03_097_801AAAD8 = 1;
    return 1;
}

void func_sc03_097_8017FB68(void) {
    D_sc03_097_801AAAD8 = 0;
}

void func_sc03_097_8017FB78(StageActor *arg0) {
    D_sc03_097_8019AE50[arg0->state]();
}

void func_sc03_097_8017FBB4(s32 arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = AF(arg0, s16, 0xFE);
    if (temp_v0 != 0) {
        DrawFadeBlack(temp_v0 & 0xFF, 4);
        AF(arg0, s16, 0x2A) = -2;
        temp_v0_2 = 0x80 - (AF(arg0, s16, 0xFE) * 3);
        AF(arg0, s16, 0x28) = temp_v0_2;
        AF(arg0, s16, 0x26) = temp_v0_2;
        AF(arg0, s16, 0x24) = temp_v0_2;
    }
}

void func_sc03_097_8017FC1C(s32 arg0) {
    u8 *p;

    for (p = (u8 *) &g_Actors; p < (u8 *) &g_Actors + 0x6480; p += 0x10C) {
        if (AF(p, u16, 0) == (u16) arg0) {
            AF(AF(p, u8 *, 0x20), u32, 4) |= 0x80000000;
        }
    }
}

void func_sc03_097_8017FC80(s32 arg0) {
    u8 *p;

    for (p = (u8 *) &g_Actors; p < (u8 *) &g_Actors + 0x6480; p += 0x10C) {
        if (*(u16 *) p == (u16) arg0) {
            AF(AF(p, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        }
    }
}

void func_sc03_097_8017FCE8(StageActor *arg0) {
    D_sc03_097_8019AE68[arg0->state]();
}

void func_sc03_097_8017FD24(StageActor *arg0) {
    s16 n;
    u16 t;
    StageActor *p;

    n = arg0->param;
    if (n < 3) {
        func_sc03_097_8017F724(arg0, D_sc03_097_8019AE38[n], 0);
    } else {
        func_sc03_097_8017F724(arg0, &D_sc03_097_8019AE08, 1);
        func_sc03_097_8017F724(arg0, &D_sc03_097_8019AE1C, 2);
    }
    t = arg0->animFlags;
    p = arg0;
    p->workFE = 0;
    D_sc03_097_801AAAD8 = 0;
    p->animFlags = t | 0x1000;
    func_sc03_097_8017F7C0((s32) p);
}

void func_sc03_097_8017FDBC(StageActor *arg0) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, D_sc03_097_8019AE5C[arg0->param]);
    temp_v1 = arg0->model;
    temp_v1->unk04 = (s32) ((s32)temp_v1->unk04 | 0x8000);
    arg0->animFlags = (u16) (arg0->animFlags | 0x1000);
    NextState((s32) arg0);
}

void func_sc03_097_8017FE4C(StageActor *arg0) {
    ModelObj *temp_a0;
    ModelObj *temp_v0;

    if (arg0->parent->unkFC != 0) {
        temp_v0 = arg0->model;
        temp_v0->unk04 = (s32) ((s32)temp_v0->unk04 | 0x80000000);
        return;
    }
    temp_a0 = arg0->model;
    temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 & 0x7FFFFFFF);
}

void func_sc03_097_8017FEA0(StageActor *p) {
    u8 *o;
    s8 *d;

    if (SetupActor(p, &D_sc03_097_8019AE80) != 0) {
        p->reactive = 1;
        p->params = &D_sc03_097_8019AEB4;
        p->reactMask = 0;
        p->react = 0;
        p->targetClass = 0x14;
        p->reactOpts |= 2;
        p->animFlags |= 0x1000;
        if (GetFlag(D_sc03_097_8019AEF4[p->param]) & 0xFF) {
            p->model->unk04 |= 0x80000000;
            AF(p, s16, 0xAE) = -1;
            func_sc03_097_80180294(p);
            p->stateCount++;
            return;
        }
        AF(p, s16, 0xAE) = -4;
        o = (u8 *) AllocActorSprite();
        p->ext0 = o;
        if (o != 0) {
            d = &D_sc03_097_801AAAE0;
            func_8001CD9C(o, d);
            SetShapeCircle(d, 0x80);
            *(B4 *) d = *(B4 *) &D_sc03_097_801A94BC;
            *(B4 *) &D_sc03_097_801AAAE4 = *(B4 *) &D_sc03_097_801A94C0;
            AF(o, s16, 0x18) = 0x800;
            AF(o, s16, 0x1A) = 0x800;
            AF(o, s32, 4) |= 0x50000000;
        }
        func_sc03_097_801818DC();
        NextState(p);
    }
}

void func_sc03_097_80180024(u8 *arg0) {
    u8 *o;
    u8 *c;
    s16 v;
    u8 n;

    o = AF(arg0, u8 *, 0xCC);
    if (o != NULL) {
        if (AF(o, s16, 0x18) < 0x1C00) {
            AF(o, s16, 0x18) += 0x200;
            AF(o, s16, 0x1A) += 0x200;
        }
        if (AF(o, s16, 0x18) > 0x1000 && (v = D_sc03_097_8019AF04[AF(arg0, s16, 0xFC)]) >= 0) {
            func_sc03_097_80180158(v);
            AF(arg0, s16, 0xFC)++;
        }
    }
    c = (u8 *) &D_sc03_097_801AAAE0;
    if (*c < 0xFF) {
        n = *c + 0x10;
        *c = n;
        D_sc03_097_801AAAE1 += 0x10;
        D_sc03_097_801AAAE2 += 0x10;
        if (n == 0) {
            *c = 0xFF;
            *(u8 *) &D_sc03_097_801AAAE1 = 0xFF;
            *(u8 *) &D_sc03_097_801AAAE2 = 0xFF;
        }
    }
    func_sc03_097_801803B8(arg0);
    if (TickTimer(arg0) != 0) {
        func_sc03_097_801801F4(arg0);
    }
}

void func_sc03_097_80180158(s32 arg0) {
    CV4 a;
    CV4 b;
    SV4 v;

    a = D_sc03_097_801A94C4;
    b = D_sc03_097_801A94C8;
    a.b = (rand() & 0x3F) - 0x80;
    v.x = 0x100;
    v.y = arg0;
    v.z = 0x80;
    v.pad = 1;
    func_sc03_097_80181A64((s32)&v, (s32)&a, (s32)&b);
}

s32 func_sc03_097_801801F4(StageActor *arg0) {
    ModelObj *temp_a1;

    temp_a1 = arg0->model;
    temp_a1->unk04 = (s32) ((s32)temp_a1->unk04 | 0x80000000);
    arg0->unkFC = 0;
    return SetState(arg0, 3);
}

s32 func_sc03_097_80180230(StageActor *arg0) {
    arg0->timer = 0x20;
    return SetState(arg0, 4);
}

s32 func_sc03_097_80180258(StageActor *arg0) {
    StartEvent(arg0, (s32) &D_sc03_097_8019AECC);
    return SetState(arg0, 5);
}

s32 func_sc03_097_80180294(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    return SetState(arg0, 6);
}

void func_sc03_097_801802B4(StageActor *arg0) {
    D_sc03_097_8019AF18[arg0->state]();
    func_sc03_097_801803FC((s32) arg0);
}

void func_sc03_097_80180304(u8 *arg0) {
    u16 sp10[2];
    s8 *d;

    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    *(B4 *) &D_sc03_097_801AAAE0 = *(B4 *) &D_sc03_097_801A94BC;
    func_sc03_097_801818DC();
    func_sc03_097_801819A0((s32) sp10, 0x1000, 0);
    UpdateModelZYX(arg0);
    func_sc03_097_801819D0(arg0 + 4);
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s32, 0x1C) = 0x40;
    StartEvent(arg0, &D_sc03_097_8019AEC4);
    SetState(arg0, 2);
    PlaySoundId(0x700, 0);
}

s32 func_sc03_097_801803B8(Mover *arg0) {
    func_sc03_097_80181A48(8);
    UpdateModelZYX(arg0);
    func_sc03_097_801819D0((u8 *)arg0 + 4);
    return func_sc03_097_80181C18();
}

void func_sc03_097_801803FC(s32 arg0) {
    void *temp_a0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    if (temp_v1 != NULL) {
        AF(temp_v1, u16, 8) = (u16) AF(arg0, u16, 6);
        AF(temp_v1, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        temp_a0 = temp_v1 + 8;
        AF(temp_v1, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
        PushAlongView((s32) temp_a0, (s32) temp_a0, -0x100);
    }
}

void func_sc03_097_80180450(u8 *p, s32 k) {
    Arg8C51C a;
    SV4 v;
    WMtx m;
    StageActor *q;

    v = D_sc03_097_801A94CC;
    m = GsIDMATRIX;
    RotMatrixY(AF(AF(p, u8 *, 0x20), s16, 0x12), &m);
    ApplyMatrixSV(&m, &v, &v);
    if (p != 0 && AF(p, u16, 0) != 0) {
        a.x = AF(p, u16, 6) + v.x;
        a.y = AF(p, u16, 0xA) + v.y;
        a.z = AF(p, u16, 0xE) + v.z;
    } else {
        a.x = a.y = a.z = 0;
    }
    q = p;
    a.a = 0x1E1;
    a.b = k;
    a.c = 0;
    a.e = 0;
    a.w = (s32)q->message;
    a.d = 0x7FFF;
    SpawnActorFromDef(&a, q);
}

void func_sc03_097_801805B0(StageActor *arg0) {
    D_sc03_097_8019AF44[arg0->state]();
}

void func_sc03_097_801805EC(StageActor *arg0) {
    s32 temp_v1;
    s32 var_v0;
    s8 temp_v0;

    temp_v1 = arg0->timer + 1;
    arg0->timer = temp_v1;
    if (temp_v1 & 0x10) {
        var_v0 = ((s32) (temp_v1 & 0xF) >> 1) + 9;
    } else {
        var_v0 = 0x10 - ((s32) (temp_v1 & 0xF) >> 1);
    }
    temp_v0 = (var_v0 & 0xFF) * 8;
    D_sc03_097_801AAAE2 = temp_v0;
    D_sc03_097_801AAAE1 = temp_v0;
    D_sc03_097_801AAAE0 = temp_v0;
}

void func_sc03_097_8018064C(StageActor *arg0) {
    u8 *o;
    u8 *c;

    o = (u8 *)arg0->ext0;
    if (arg0->unkFC < 0x10) {
        func_sc03_097_80181BCC(arg0->unkFC, 1);
        arg0->unkFC++;
    }
    if (arg0->unkFC >= 9) {
        if (o != NULL && AF(o, s16, 0x18) > 0) {
            AF(o, s16, 0x18) -= 0x100;
            AF(o, s16, 0x1A) -= 0x100;
        }
        c = (u8 *) &D_sc03_097_801AAAE0;
        if (*c > 0x10) {
            *c -= 0x10;
            D_sc03_097_801AAAE1 -= 0x10;
            D_sc03_097_801AAAE2 -= 0x10;
        } else {
            AF(o, s16, 0) = 0;
            arg0->ext0 = NULL;
            func_sc03_097_80180450(arg0, 0x4000);
            func_sc03_097_80180230(arg0);
        }
    }
    func_sc03_097_801803B8(arg0);
}

void func_sc03_097_80180758(u8 *arg0) {
    s32 any;
    s32 i;
    s32 *p;

    if (TickTimer(arg0) != 0) {
        EndEvent(arg0);
        any = 0;
        i = 0;
        p = D_sc03_097_8019AEF4;
        for (; i < 4; i++) {
            any |= GetFlag(*p++) & 0xFF;
        }
        if (any == 0) {
            func_sc03_097_80180258(arg0);
        } else {
            func_sc03_097_80180294(arg0);
        }
        any = 1;
        SetFlag(D_sc03_097_8019AEF4[AF(arg0, s16, 0x70)], 1);
        for (i = 0; i < 4; i++) {
            if (!(GetFlag(D_sc03_097_8019AEF4[i]) & 0xFF)) {
                any = 0;
            }
        }
        if (any != 0) {
            SetProgress(0x172);
        }
    }
}

void func_sc03_097_80180864(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        func_sc03_097_80180294(arg0);
    }
}

void func_sc03_097_801808A4(StageActor *arg0) {
    if (arg0->stateCount != 0) {
        func_sc03_097_80180450((s32) arg0, 0);
        arg0->stateCount = (u16) (arg0->stateCount - 1);
    }
}

void func_sc03_097_801808F0(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitNullModel(temp_v0);
    arg0->hitData = (s32) ((s32) &D_sc03_097_8019AF34 | 0x40000000);
    arg0->hitState = 0x800;
    arg0->animFlags = (u16) (arg0->animFlags | 0x1000);
    D_sc03_097_8019AEE8 = (s32)arg0->message;
    NextState(arg0);
}

void func_sc03_097_80180978(void) {
}

void func_sc03_097_80180980(StageActor *arg0) {
    u8 unused[8];
    ModelObj *o;
    s32 k;
    Rec8 *r;
    s16 c;
    s32 i;
    s32 t;

    o = AllocActorSprite();
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    t = arg0->animFlags;
    k = arg0->param;
    arg0->model = o;
    t |= 0x1000;
    t &= 0xFFFF;
    arg0->animFlags = t;
    i = k;
    k &= 0x8000;
    if (k) {
        i &= 1;
        r = &D_sc03_097_8019AFB8[i];
        InitSpriteKind2(o, D_sc03_097_8019AFC8[i], r->x, r->y);
        c = r->c;
        o->rot.vx = 0x400;
        o->scale.vy = 0x2000;
        o->scale.vx = 0x2000;
        AF(o, u8, 0x27) = c;
    } else {
        InitNullSprite(o);
        o->pose = &D_sc03_097_801AAB20;
        AF(o, s16, 0x28) = 0x300;
        AF(o, s16, 0x2A) = 0x110;
        AF(o, u8, 0x27) = 0x78;
        o->rot.vx = 0x400;
        o->scale.vy = 0x800;
        o->scale.vx = 0x800;
        if (!((u16)arg0->param & 3)) {
            SetShapeCircle(&D_sc03_097_801AAB20, 0x80);
        }
        if ((u16)arg0->param & 1) {
            D_sc03_097_8019AF50[((u16)arg0->param & 3) * 6] = 0x10;
            o->rot.vz = 0x400;
        } else {
            D_sc03_097_8019AF50[((u16)arg0->param & 3) * 6] = 0x20;
            o->unk04 |= 0x40000000;
            if ((u16)arg0->param & 0x4000) {
                PlaySoundId(0x701, 0);
            }
            if ((u16)arg0->param & 0x2000) {
                if (!(GetVar(arg0->unkFC) & 0xFF)) {
                    arg0->param |= 0x4000;
                } else {
                    arg0->param &= 0xDFFF;
                }
            }
            SpawnActorArg(0x1E1, (s16) ((u16)arg0->param | 1), arg0);
        }
        D_sc03_097_8019AF52[((u16)arg0->param & 3) * 6] = 0x20;
        if ((u16)arg0->param & 0x4000) {
            o->scale.vy = 0;
            o->scale.vx = 0;
        }
    }
    NextState(arg0);
}

s32 func_sc03_097_80180BD8(StageActor *arg0) {
    D_sc03_097_8019AFD4[0] = (u16)arg0->pos[0].h.i | (arg0->pos[2].h.i << 0x10);
    StartEvent(arg0, (s32) (D_sc03_097_8019AFD4 - 0x1), D_sc03_097_8019AFD4);
    return SetState(arg0, 2);
}

void func_sc03_097_80180C2C(StageActor *arg0) {
    D_sc03_097_8019AFE8[arg0->state]();
}

void func_sc03_097_80180C68(s32 arg0) {
    s32 temp_s1;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_s2;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s2 = ((AF(arg0, u16, 0x70) & 3) * 0xC) + &D_sc03_097_8019AF4C;
    func_sc03_097_80180F98(temp_s1, (s32) temp_s2);
    if (AF(arg0, u16, 0x70) & 1) {
        AF(temp_s1, u16, 0x14) = (u16) (AF(temp_s1, u16, 0x14) - 4);
        temp_v0 = AF(temp_s2, u16, 4) + 1;
        AF(temp_s2, u16, 4) = temp_v0;
        if ((s16) temp_v0 >= 0x30) {
            AF(temp_s2, u16, 4) = 0x10U;
        }
    } else {
        AF(temp_s1, u16, 0x14) = (u16) (AF(temp_s1, u16, 0x14) + 4);
        temp_v0_2 = AF(temp_s2, u16, 4) - 1;
        AF(temp_s2, u16, 4) = temp_v0_2;
        if ((s16) temp_v0_2 < 0x11) {
            AF(temp_s2, u16, 4) = 0x30U;
        }
    }
}

s32 func_sc03_097_80180D54(s32 arg0, s32 arg1) {
    V3 v;
    V3 r;
    s16 dy;

    v.x = AF(arg0, s16, 6) - g_PlayerX;
    v.y = 0;
    v.z = AF(arg0, s16, 0xE) - (s16) D_80126B66;
    Square0(&v, &r);
    dy = D_80126B62 - AF(arg0, u16, 0xA);
    if (dy < 0) {
        dy = -dy;
    }
    if (r.x + r.z < (u16) arg1 * (u16) arg1 && dy < 4) {
        return 1;
    }
    return 0;
}

void func_sc03_097_80180E14()
{
    u8 *p;
    s32 i;

    p = (u8 *) &g_Actors;
    i = 0;
    do {
        if (AF(p, u16, 0) == 0x1E1) {
            AF(p, u16, 0x70) |= 0x1000;
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
}

void func_sc03_097_80180E64(StageActor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    ModelObj *temp_s1;

    temp_v0 = arg0->param;
    temp_s1 = arg0->model;
    if (!(temp_v0 & 0x8000)) {
        if (temp_v0 & 0x2000) {
            if (temp_v0 & 0x1000) {
                arg0->param = (s16) (temp_v0 & 0xDFFF);
                PlaySoundId(0x701, 0);
                goto block_4;
            }
        } else {
block_4:
            temp_v0_2 = temp_s1->scale.vx;
            if (temp_v0_2 < 0x800) {
                temp_s1->scale.vx = (s16) (temp_v0_2 + 0x40);
                temp_s1->scale.vy = (u16) ((u16)temp_s1->scale.vy + 0x40);
            } else if (!((u16) arg0->param & 1) && (func_sc03_097_80180D54((s32) arg0, 0x30) != 0)) {
                func_sc03_097_80180BD8((s32) arg0);
                SetFlag(0xAE, 0);
                SetFlag(0xAF, 0);
                SetFlag(0xB0, 0);
            }
            func_sc03_097_80180C68((s32) arg0);
        }
    }
}

void func_sc03_097_80180F4C(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        func_800D1724(arg0->message);
    }
    func_sc03_097_80180C68(arg0);
}

void func_sc03_097_80180F98(u8 *arg0, s32 arg1) {
    SV pos;
    SV v[3];
    struct { s32 scr[13]; s32 zs[6]; } s;
    s32 flag;
    s32 z;
    s32 flag2;
    u32 *ot;
    Pts80182FD4 *p;
    s32 i;
    s32 d;
    u16 t;

    ot = g_WorldOtTable[D_800B9A02[0]];
    p = AF(arg0, Pts80182FD4 *, 0x20);
    if (p == 0) {
        return;
    }
    if (AF(arg0, s32, 0x34) != 0) {
        SetSpriteMatrixLinked();
    } else {
        SetSpriteMatrix(arg0);
    }
    pos.vx = AF(arg0, s16, 0x2E);
    pos.vy = AF(arg0, s16, 0x30);
    pos.vz = AF(arg0, s16, 0x32);
    gte_ldv0(&pos);
    gte_rtps();
    gte_stsxy(&s.scr[0]);
    gte_stflg(&flag);
    gte_stszotz(&z);
    if (flag & ~0x1000) {
        return;
    }
    d = z + 1;
    t = AF(arg0, u16, 0x2C);
    if (t & 0xC000) {
        if ((t & 0xC000) == 0xC000) {
            d -= t & 0xFFF;
            if (d < 0) {
                d = 0;
            }
        } else {
            d += t & 0xFFF;
        }
    }
    if (d >= 0x1000) {
        return;
    }
    if (AF(arg0, s16, 0x1E) & 0x8000) {
        for (i = 0; i < 12; i += 6) {
            v[0].vx = pos.vx + p->pt[i].x;
            v[0].vy = pos.vy + p->pt[i].y;
            v[0].vz = pos.vz;
            v[1].vx = pos.vx + p->pt[i + 2].x;
            v[1].vy = pos.vy + p->pt[i + 2].y;
            v[1].vz = pos.vz;
            v[2].vx = pos.vx + p->pt[i + 4].x;
            v[2].vy = pos.vy + p->pt[i + 4].y;
            v[2].vz = pos.vz;
            gte_ldv3(&v[0], &v[1], &v[2]);
            gte_rtpt();
            gte_stsxy3(&s.scr[i + 1], &s.scr[i + 3], &s.scr[i + 5]);
        }
        for (i = 1; i < 12; i += 2) {
            v[0].vx = pos.vx + p->pt[i].x;
            v[0].vy = pos.vy + p->pt[i].y;
            v[0].vz = pos.vz;
            gte_ldv0(&v[0]);
            gte_rtps();
            gte_stsxy(&s.scr[i + 1]);
            gte_stflg(&flag2);
            gte_stszotz(&z);
            *(s.zs + (i >> 1)) = z + 1;
        }
        func_sc03_097_801813B4(arg0, arg1, s.scr, ot);
    } else {
        for (i = 0; i < 12; i += 3) {
            v[0].vx = pos.vx + p->pt[i].x;
            v[0].vy = pos.vy + p->pt[i].y;
            v[0].vz = pos.vz;
            v[1].vx = pos.vx + p->pt[i + 1].x;
            v[1].vy = pos.vy + p->pt[i + 1].y;
            v[1].vz = pos.vz;
            v[2].vx = pos.vx + p->pt[i + 2].x;
            v[2].vy = pos.vy + p->pt[i + 2].y;
            v[2].vz = pos.vz;
            gte_ldv3(&v[0], &v[1], &v[2]);
            gte_rtpt();
            gte_stsxy3(&s.scr[i + 1], &s.scr[i + 2], &s.scr[i + 3]);
        }
        func_sc03_097_801813B4(arg0, arg1, s.scr, &ot[d]);
    }
}

void func_sc03_097_801813B4(u8 *o, u8 *s, u8 *v, u32 *ot) {
    PFT4 *p;
    PMODE *m;
    FANUV *uv;
    u32 fl;
    s32 tp, sh, i;
    u16 x, y;
    s32 code, abr, tpage, clut, c, tb;
    u32 ty;
    u16 u;
    u8 u0, v0;
    u16 vv;
    s32 t;
    u16 u1, v1;
    u16 sflag;

    p = (PFT4 *)g_PrimNext;
    sflag = *(u16 *)(o + 0x1E) & 0x8000;
    fl = *(u32 *)(o + 4);
    tp = (fl >> 24) & 3;
    sh = 2 - tp;
    x = *(u16 *)(o + 0x28) + (*(s16 *)(s + 4) >> sh);
    y = *(u16 *)(o + 0x2A) + *(u16 *)(s + 6);
    uv = *(FANUV **)(o + 0x20);
    g_PrimNext = (u8 *)p + 0xF0;
    if (fl & 0x40000000) {
        code = 0x2E;
        abr = (fl >> 28) & 3;
    } else {
        code = 0x2C;
        abr = 1;
    }
    tb = (tp << 7) | (abr << 5);
    ty = y & 0x100;
    tpage = tb | (ty >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
    c = (o[0x27] + 0x100) << 6;
    if (o[0x27] < 0xE0) {
        clut = c | 0x16;
    } else {
        clut = c | 0x10;
    }
    u = ((x - ((tpage & 0xF) << 6)) << sh) + (*(u16 *)(s + 4) & ((1 << sh) - 1));
    u1 = u + s[2] - 1;
    if (u1 > 0xFF) u1 = 0xFF;
    t = y;
    if (tpage & 0x10) {
        vv = t - 0x100;
    } else {
        vv = t;
    }
    v1 = vv + s[3] - 1;
    if (v1 > 0xFF) v1 = 0xFF;
    i = 1;
    u0 = u;
    v0 = vv;
    for (; i < 13; i += 2, p++) {
        ((u8 *)p)[3] = 9;
        p->code = code;
        p->tpage = tpage;
        p->u2 = u;
        p->v2 = vv;
        p->u0 = (uv->t[i - 1].x >> 3) + u0;
        p->v0 = (uv->t[i - 1].y >> 3) + v0;
        p->u1 = (uv->t[i].x >> 3) + u0;
        p->v1 = (uv->t[i].y >> 3) + v0;
        p->u3 = (uv->t[i + 1].x >> 3) + u0;
        p->v3 = (uv->t[i + 1].y >> 3) + v0;
        p->clut = clut;
        p->r0 = o[0x24];
        p->g0 = o[0x25];
        p->b0 = o[0x26];
        p->x0 = *(s16 *)(v + i * 4);
        p->y0 = *(s16 *)(v + i * 4 + 2);
        p->x1 = *(s16 *)(v + i * 4 + 4);
        p->y1 = *(s16 *)(v + i * 4 + 6);
        p->x2 = *(s16 *)(v + 0);
        p->y2 = *(s16 *)(v + 2);
        p->x3 = *(s16 *)(v + i * 4 + 8);
        p->y3 = *(s16 *)(v + i * 4 + 10);
        if (sflag) {
            addPrim(&ot[*(s32 *)(v + (i >> 1) * 4 + 0x34)], p);
        } else {
            addPrim(ot, p);
        }
    }
    p[-1].x3 = *(s16 *)(v + 4);
    p[-1].y3 = *(s16 *)(v + 6);
    p[-1].u3 = u + (uv->t[0].x >> 3);
    p[-1].v3 = (uv->t[0].y >> 3) + vv;
    if (fl & 0x40000000) {
        m = (PMODE *)p;
        if (sflag) {
            g_PrimNext += 0x30;
            for (i = 0; i < 6; i++, m++) {
                ((u8 *)m)[3] = 1;
                m->code = (abr << 5) | 0xE100000A;
                addPrim(&ot[((s32 *)(v + i * 4))[13]], m);
            }
        } else {
            m->code = (abr << 5) | 0xE100000A;
            g_PrimNext += 8;
            ((u8 *)m)[3] = 1;
            addPrim(ot, m);
        }
    }
}

void func_sc03_097_801818D4(void) {
}

void func_sc03_097_801818DC(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_097_801AAC74;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

void func_sc03_097_80181900(s32 arg0, s32 arg1, s32 arg2, u16 *arg3) {
    SV4 v;
    s32 i;
    s16 ang;

    func_sc03_097_801819A0(arg0, 0x1000, 0);
    v.x = arg3[0];
    v.z = arg3[1];
    v.pad = 1;
    for (i = 0, ang = 0; i < 0x10; i++, ang += 0x100) {
        v.y = ang;
        func_sc03_097_80181ABC(i, (s32) &v, arg1, arg2);
    }
}

s32 func_sc03_097_801819A0(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc03_097_801AAC6C = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc03_097_801AAC70 = (s16) arg1;
    D_sc03_097_801AAC72 = (s16) arg2;
    D_sc03_097_801AAC6E = temp_v0;
    return (s32) temp_v0;
}

void func_sc03_097_801819D0(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc03_097_801AAC6C = sp10[0];
    D_sc03_097_801AAC6E = sp10[1];
}

void func_sc03_097_80181A48(s32 arg0) {
    s16 *p = &D_sc03_097_801AAC72;
    *p += arg0;
}

void func_sc03_097_80181A64(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc03_097_80181B90();
    if (temp_v0 >= 0) {
        func_sc03_097_80181ABC(temp_v0, arg0, arg1, arg2);
    }
}

void func_sc03_097_80181ABC(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
    struct C8E8 { u8 r, g, b, cd; };
    struct E8E8 { u16 a; s16 y; s16 z; struct C8E8 c0; struct C8E8 c1; } *e;

    e = (struct E8E8 *)(&D_sc03_097_801AAC74 + arg0 * 14);
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

s32 func_sc03_097_80181B90(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0xE) {
        if (*(u16 *)&((u8 *)&D_sc03_097_801AAC74)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc03_097_80181BCC(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc03_097_801AAC74, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

s32 func_sc03_097_80181C18(void) {
    u8 *p;
    s32 i;
    s16 v;
    s16 w;

    for (p = &D_sc03_097_801AAC74, i = 0; i < 0x10; i++, p += 14) {
        if (AF(p, u16, 0) != 0) {
            func_sc03_097_80181CF4(i);
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

void func_sc03_097_80181CF4(s32 i) {
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
    r = &D_sc03_097_801AAC74 + i * 14;
    AF(p, u8, 4) = AF(r, u8, 6);
    AF(p, u8, 5) = AF(r, u8, 7);
    AF(p, u8, 6) = AF(r, u8, 8);
    AF(p, u8, 0xC) = AF(r, u8, 0xA);
    AF(p, u8, 0xD) = AF(r, u8, 0xB);
    AF(p, u8, 0xE) = AF(r, u8, 0xC);
    AF(p, u8, 0x14) = AF(r, u8, 0xA);
    AF(p, u8, 0x15) = AF(r, u8, 0xB);
    AF(p, u8, 0x16) = AF(r, u8, 0xC);
    cx = D_sc03_097_801AAC6C;
    cy = D_sc03_097_801AAC6E;
    RotMatrixZ(D_sc03_097_801AAC72, &m);
    s.x = s.y = s.z = D_sc03_097_801AAC70;
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

s32 func_sc03_097_80181FB8(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_097_801AAB6C;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc03_097_80181FDC(s32 arg0) {
    s32 sp10;

    PosToSVec(arg0, (s32) &sp10);
    return func_sc03_097_80182004((s32) &sp10);
}

s32 func_sc03_097_80182004(s32 arg0) {
    s16 sxy[2];
    CV4 col;
    s32 p;
    s32 flag;

    col = D_sc03_097_801A94D4;
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers(arg0, (s32) sxy, (s32) &p, (s32) &flag);
    return func_sc03_097_8018208C((s32) sxy, (s32) &col, 0x10, 0x18);
}

s32 func_sc03_097_8018208C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc03_097_801820F8(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc03_097_8018222C(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc03_097_801820F8(u16 *p, u8 *c, s32 g) {
    if (p != 0) {
        D_sc03_097_801AAB60.a = p[0];
        D_sc03_097_801AAB60.b = p[1];
    } else {
        D_sc03_097_801AAB60.a = 0;
        D_sc03_097_801AAB60.b = 0;
    }
    D_sc03_097_801AAB68 = c[0];
    D_sc03_097_801AAB69 = c[1];
    D_sc03_097_801AAB6A = c[2];
    AF(&D_sc03_097_801AAB60, s32, 4) = g << 16;
}

void func_sc03_097_80182168(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc03_097_801AAB60.a = sp10[0];
    D_sc03_097_801AAB60.b = sp10[1];
}

void func_sc03_097_801821E0(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc03_097_80182348();
    if (temp_v0 >= 0) {
        func_sc03_097_8018222C(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

void func_sc03_097_8018222C(s32 i, s32 ang, s32 spd) {
    u8 unused[0x10];
    Pt16 *p;
    s16 vx;
    s16 vz;
    u16 s;
    s32 m;
    s32 gg;

    p = &D_sc03_097_801AAB60.pts[i];
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
    gg = D_sc03_097_801AAB60.g;
    p->dy = gg << 6;
}

s32 func_sc03_097_80182348(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0x10) {
        if (*(u16 *)&((u8 *)&D_sc03_097_801AAB6C)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc03_097_80182384(void) {
    Pt16 *p;
    s32 i;
    s16 g;
    s32 dx;
    s32 dz;

    g = D_sc03_097_801AAB66;
    p = (Pt16 *)&D_sc03_097_801AAB6C;
    for (i = 0; i < 16; i++, p++) {
        if (p->active == 0) {
            continue;
        }
        if ((g > 0 && p->y >= 0x4001) || (g < 0 && p->y <= 0)) {
            p->active = 0;
            continue;
        }
        func_sc03_097_80182498(i);
        dx = (rcos(p->ang) * g) << 4;
        dz = (rsin(p->ang) * g) << 4;
        p->x += dx;
        p->z += dz;
        p->y += p->dy;
    }
}

void func_sc03_097_80182498(s32 i) {
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
    AF(p, u8, 4) = D_sc03_097_801AAB68;
    AF(p, u8, 5) = D_sc03_097_801AAB69;
    AF(p, u8, 6) = D_sc03_097_801AAB6A;
    r = (Pt16 *)&D_sc03_097_801AAB6C + i;
    cx = AF(r, u16, 0xA) + D_sc03_097_801AAB60.a;
    cz = AF(r, u16, 0xE) + D_sc03_097_801AAB60.b;
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

void func_sc03_097_8018277C(u8 *arg0) {
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
        a.x = D_sc03_097_8019C590[i];
        a.z = D_sc03_097_8019C590[i + 1];
        b.x = D_sc03_097_8019C590[i + 2];
        b.z = D_sc03_097_8019C590[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_097_8019C5B8[i];
        a.z = D_sc03_097_8019C5B8[i + 1];
        b.x = D_sc03_097_8019C5B8[i + 2];
        b.z = D_sc03_097_8019C5B8[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_097_8019C5E0[i];
        a.z = D_sc03_097_8019C5E0[i + 1];
        b.x = D_sc03_097_8019C5E0[i + 2];
        b.z = D_sc03_097_8019C5E0[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    D_sc03_097_8019C608[AF(arg0, u16, 2)](arg0);
    t = DistSqToPlayer(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        PlaySoundFor(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        PlaySoundFor(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc03_097_80182A14(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    UV4 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &g_Actors;
    i = 0;
    D_sc03_097_8019C654[AF(arg0, u16, 2)]();
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

void func_sc03_097_80182B9C(s32 arg0) {
    s32 o;

    o = AllocActorModel();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    StopWithGravity(arg0);
    AF(arg0, u16, 0x12) = D_sc03_097_8019C8F8[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_097_8019C8F8[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_097_8019C8F8[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_097_8019C65C);
        SetScript(arg0, &D_sc03_097_8019C71C);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_097_8019C7A4);
        SetScript(arg0, &D_sc03_097_8019C864);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_097_8019C948;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_097_8019C96C;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_097_8019C620;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = SpawnActorArg(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_097_8019C65C);
        SetScript(arg0, &D_sc03_097_8019C71C);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_097_8019C7A4);
        SetScript(arg0, &D_sc03_097_8019C864);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_097_8019C958);
        SetScript(arg0, &D_sc03_097_8019C964);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_097_8019C65C);
        SetScript(arg0, &D_sc03_097_8019C71C);
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

void func_sc03_097_80183048(StageActor *arg0) {
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

void func_sc03_097_801831DC(StageActor *arg0) {
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

void func_sc03_097_8018358C(u8 *arg0) {
    s32 temp_v0;

    D_sc03_097_8019C97C[AF(arg0, u16, 2)]();
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

void func_sc03_097_80183678(u8 *arg0) {
    D_sc03_097_8019CA28[AF(arg0, u16, 2)]();
}

void func_sc03_097_801836B4(u8 *arg0) {
    D_sc03_097_8019CADC[AF(arg0, u16, 2)]();
}

void func_sc03_097_801836F0(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_097_80183708(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_097_8019C55C) != 0) {
        arg0->reactive = 1;
        arg0->params = &D_sc03_097_8019C53C;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        SetScript(arg0, (s32) &D_sc03_097_801861C0);
        arg0->state = 1;
        arg0->targetClass = 0;
        arg0->workFE = 1;
        SpawnActorArg(0x164, 0x555, arg0);
        SpawnActorArg(0x164, 0xAAA, arg0);
        SpawnActorArg(0x164, 0x1000, arg0);
    }
}

void func_sc03_097_801837AC(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_097_801837C8(StageActor *arg0) {
    ModelObj *temp_a2;

    if (SetupActor(arg0, (s32) &D_sc03_097_8019C620) != 0) {
        temp_a2 = arg0->model;
        temp_a2->unk04 = (s32) ((s32)temp_a2->unk04 | 0x80000000);
        arg0->reactive = 1;
        arg0->params = &D_sc03_097_8019C53C;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        SetScript(arg0, (s32) &D_sc03_097_801861C0, (s32) temp_a2);
        arg0->state = 1;
        arg0->targetClass = 0;
    }
}

void func_sc03_097_8018384C(u8 *arg0, s32 arg2) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    UpdateModelZYX((s32) arg0, (s32) temp_a1);
}

void func_sc03_097_80183888(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc03_097_801838B8(s32 arg0) {
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

void func_sc03_097_8018393C(u8 *arg0) {
    if (DistSqToTarget(arg0) > 0x63FFF) {
        AF(arg0, s16, 2) = 5;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToTarget(arg0), 0x10);
    SetLocalVelocityXZ(arg0, &D_sc03_097_8019C8EC);
    AF(arg0, s32, 0x14) += (D_80126CB6 - AF(arg0, s16, 0xA)) << 8;
    if (MoveCollide(arg0) != 0) {
        AF(arg0, s16, 0x16) = -0x18;
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc03_097_80183A00(s32 arg0) {
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
        AF(arg0, u16, 0x12) = D_sc03_097_8019C8F8[AF(arg0, s16, 0xFC)].x;
        AF(arg0, u16, 0x16) = D_sc03_097_8019C8F8[AF(arg0, s16, 0xFC)].y;
        AF(arg0, u16, 0x1A) = D_sc03_097_8019C8F8[AF(arg0, s16, 0xFC)].z;
    }
}

void func_sc03_097_80183AE0(u8 *arg0) {
    if (DistSqToPlayer(arg0) <= 0x64000) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        SpawnShadow(arg0);
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc03_097_80183B50(u8 *arg0) {
    SV8 a;

    if (DistSqToTarget(arg0) <= 0x38400) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    a.x = AF(arg0, s16, 6);
    a.z = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToSV(&a, arg0 + 0x88), 4);
    SetLocalVelocityXZ(arg0, &D_sc03_097_8019C8EC);
    AF(arg0, s32, 0x14) += (AF(arg0, s16, 0x8A) - AF(arg0, s16, 0xA)) << 8;
    if (MoveCollide(arg0) & 0x8000) {
        AF(arg0, s16, 0x16) = -4;
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc03_097_80183C2C(void) {
}

void func_sc03_097_80183C34(StageActor *arg0) {
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

void func_sc03_097_80183CEC(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_097_8019C9B4) != 0) {
        SetScript(arg0, (s32) &D_sc03_097_801861C0);
        arg0->state = 1;
        arg0->targetClass = 0;
        AF(arg0, u16, 0x12) = D_sc03_097_8019C9E8[arg0->unkFC * 4];
        AF(arg0, u16, 0x16) = D_sc03_097_8019C9EA[arg0->unkFC * 4];
        AF(arg0, u16, 0x1A) = D_sc03_097_8019C9EC[arg0->unkFC * 4];
        arg0->timer = D_sc03_097_8019C9EE[arg0->unkFC * 4];
        SpawnActor(0x1C4, arg0);
    }
}

void func_sc03_097_80183DB0(s32 arg0) {
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

void func_sc03_097_80183E04(StageActor *arg0) {
    s32 t;

    if (--arg0->timer == 0) {
        t = D_sc03_097_8019C9EE[arg0->unkFC * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        arg0->state = 1;
        arg0->timer = t;
    }
    CarryPlayer(arg0);
}

void func_sc03_097_80183E80(StageActor *arg0) {
    ModelObj *o;
    s16 st;

    o = AllocActorModel();
    arg0->model = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(o, &D_sc03_097_8019CA34);
    SetScript(arg0, &D_sc03_097_8019CA94);
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

void func_sc03_097_80183F64(u8 *arg0) {
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

void func_sc03_097_80184030(u8 *o) {
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

void func_sc03_097_80184108(StageActor *arg0) {
    s32 temp_a2;

    D_sc03_097_8019EAA0[arg0->state]();
    if (arg0->workE4 != 0) {
        func_sc03_097_80184D28((s32) arg0);
    }
    if (arg0->kind != 0) {
        temp_a2 = arg0->workD4;
        if (temp_a2 != 0) {
            FaceHelper((s32) arg0, (s32) &D_sc03_097_8019EA40, temp_a2 + 8);
        }
    }
}

void func_sc03_097_80184198(StageActor *arg0) {
    ModelObj *temp_v0;
    u16 temp_v1;

    SetupActor(arg0, (s32) &D_sc03_097_8019E984);
    temp_v0 = AllocActorModel();
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_097_8019E95C);
    temp_v0->unk80 = (s32) ((u8 *)arg0 + 0xFC);
    temp_v0->scale.vy = 0x2000;
    temp_v0->scale.vx = 0x2000;
    temp_v0->unk04 |= 0x50000000;
    temp_v0->flags |= 0x90;
    arg0->model = temp_v0;
    arg0->workD4 = func_sc03_097_80184DE8(arg0);
    arg0->hitMask = 0x2000;
    arg0->unkFC = 0x80;
    arg0->workFE = 0x80;
    arg0->work100 = 0x80;
    arg0->hitState = 0;
    if ((u16)arg0->param & 1) {
        arg0->reactive = 1;
        arg0->params = &D_sc03_097_8019EA58;
        arg0->reactMask = -0x2003;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 1);
    }
    temp_v1 = (u16)arg0->param;
    if (temp_v1 & 0x4000) {
        arg0->state = 5;
        arg0->unkFC = 0;
        arg0->workFE = 0;
        arg0->work100 = 0;
    } else if (!(temp_v1 & 0x8000)) {
        arg0->state = 3;
    } else {
        arg0->state = 1;
        arg0->unkFC = 0;
        arg0->workFE = 0;
        arg0->work100 = 0;
        func_sc03_097_80184E6C(arg0->workD4);
    }
    if (FindOtherActorByKind(arg0, 0x1A2) == 0) {
        arg0->workE4 = 1;
        arg0->ext1 = &D_sc03_097_8019E9B8;
        arg0->ext0 = &D_sc03_097_8019E9B8;
        arg0->workE0 = *(s32 *)arg0->ext0;
    }
}

void func_sc03_097_80184324(s32 arg0) {
    if ((TickTimer(arg0) != 0) && (GroundDistSqToPlayer(arg0) <= 0x40000)) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s32, 0x1C) = 0;
    }
}

void func_sc03_097_80184374(StageActor *o) {
    s16 v;
    v = ((u32)rsin(o->timer << 4) >> 5) & 0xFF;
    o->unkFC = o->workFE = o->work100 = v;
    if (++o->timer > 0x40) {
        o->state = 3;
        o->hitState = o->init->hitState;
        o->timer = rand();
        func_sc03_097_80184E4C(o->workD4);
    }
}

void func_sc03_097_801843F0(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_v0;

    arg0->state = 4;
    temp_v0 = rand((s32) arg0, arg1, arg2, arg3);
    var_v0 = temp_v0 / 64;
    arg0->workE8 = (s32) ((temp_v0 - (var_v0 << 6)) + 0x40);
}

void func_sc03_097_80184444(u8 *arg0) {
    SV p;
    u8 unused[8];

    if (!(AF(arg0, u16, 0x70) & 1)) {
        AF(arg0, s16, 0x52) = (u32) rsin(AF(arg0, s32, 0x1C) << 5) >> 8;
        if (AF(arg0, s32, 0x1C) % 24 == 0) {
            p.vx = AF(AF(arg0, u8 *, 0x20), s16, 8);
            p.vy = AF(AF(arg0, u8 *, 0x20), s16, 0xA) + 0x40;
            p.vz = AF(AF(arg0, u8 *, 0x20), s16, 0xC);
            func_sc03_097_80184FB0(&p, 0x60);
        }
    } else {
        if (AF(arg0, u8, 0x1C) == 0) {
            AF(arg0, s32, 0xE8) = rand() % 64 + 0x40;
        }
        if (PlayerFlag80() == 0) {
            func_sc03_097_80184CB0(arg0, -0x28000);
            MoveCollidePassable(arg0);
            AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        }
        if (AF(arg0, s32, 0x1C) % 24 == 0) {
            p.vx = AF(arg0, s16, 6);
            p.vy = AF(arg0, s16, 0xA);
            p.vz = AF(arg0, s16, 0xE);
            p.vy += 0x38;
            func_sc03_097_80184FB0(&p, 0x80);
        }
    }
    func_sc03_097_80184BFC(arg0);
    AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x2000 - (rsin((AF(arg0, s32, 0x1C) << 5) & 0x7E0) >> 1);
    AF(arg0, s32, 0x1C)++;
}

void func_sc03_097_80184618(u8 *arg0) {
    s32 w;
    s16 a;
    u8 c;

    AF(arg0, s16, 0x52) = (u32) rsin(D_800B99DA << 5) >> 8;
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        a = rand() % 4096;
        AngleToVec2(&w, a, rand() % AF(arg0, s16, 0xDC));
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88) + w;
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C) + (w >> 16);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = a;
        UpdateModelZYX(arg0);
        SetForwardVelocity(arg0, -0x20000);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 0x34)++;
        break;
    case 1:
        c = (u32) (AF(arg0, s16, 0xDE) * rsin(AF(arg0, s32, 0x1C) << 4)) >> 12;
        AF(arg0, s16, 0xFC) = AF(arg0, s16, 0xFE) = AF(arg0, s16, 0x100) = c;
        func_sc03_097_80184E8C(arg0);
        if (++AF(arg0, s32, 0x1C) >= 0x41) {
            AF(arg0, s32, 0x1C) = 0x96;
            AF(arg0, u16, 0x34)++;
            func_sc03_097_80184E4C(AF(arg0, s32, 0xD4));
        }
        break;
    case 2:
        if (func_sc03_097_80184E8C(arg0) == 0 || TickTimer(arg0) != 0 || func_sc03_097_80184F30(arg0, 0x400) != 0) {
            AF(arg0, s32, 0x1C) = 0x40;
            AF(arg0, u16, 0x34)++;
            func_sc03_097_80184E6C(AF(arg0, s32, 0xD4));
        }
        break;
    case 3:
        c = (u32) (AF(arg0, s16, 0xDE) * rsin(AF(arg0, s32, 0x1C) << 4)) >> 12;
        AF(arg0, s16, 0xFC) = AF(arg0, s16, 0xFE) = AF(arg0, s16, 0x100) = c;
        func_sc03_097_80184E8C(arg0);
        if (--AF(arg0, s32, 0x1C) < 0) {
            AF(arg0, u16, 0x34)++;
            AF(arg0, s32, 0x1C) = rand() % 96;
        }
        break;
    case 4:
        if (TickTimer(arg0) != 0) {
            AF(arg0, u16, 0x34) = 0;
        }
        break;
    }
}

void func_sc03_097_801848AC(void) {
}

void func_sc03_097_801848B4(u8 *arg0) {
    func_sc03_097_80184DB4(AF(arg0, s32, 0xD4), 1);
    AF(arg0, s32, 0x48) = 0;
}

void func_sc03_097_801848E8(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s32, 0x1C) = 0;
    func_sc03_097_80184E6C(AF(arg0, s32, 0xD4));
}

void func_sc03_097_80184914(u8 *arg0) {
    typedef struct { u8 pad[0x18]; s16 x18; u8 pad2[0x12]; u16 x2C; } Sub;
    typedef struct { u8 pad[0x20]; Sub *x20; } Obj;
    s32 x;
    s32 d;
    s32 k;
    s32 t;
    s32 v;

    AF(arg0, s16, 0x5C) = 0;
    x = g_PlayerAbsorbCounter;
    if (x == 0) {
        D_sc03_097_801AAD58 = 0x2000;
        D_sc03_097_801AAD5C = 0x2000;
    }
    x = ((0x90 - x) << 13) / 144;
    k = 0x2000;
    d = D_sc03_097_801AAD58 - x;
    if (d > 0) {
        D_sc03_097_801AAD58 -= d >> 2;
    } else if (d < 0) {
        D_sc03_097_801AAD58 += -d / 4;
    }
    t = D_sc03_097_801AAD5C;
    D_sc03_097_801AAD5C = k;
    v = D_sc03_097_801AAD58 - t + k;
    D_sc03_097_801AAD58 = v;
    ((Obj *)arg0)->x20->x2C |= 0x10;
    ((Obj *)arg0)->x20->x18 = v >= 0 ? v : -v;
}

void func_sc03_097_80184A00(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x40;
    func_sc03_097_80184E6C(AF(arg0, s32, 0xD4));
}

void func_sc03_097_80184A2C(u8 *arg0) {
    u8 temp_v0;

    temp_v0 = (u32) rsin(AF(arg0, s32, 0x1C) << 4) >> 5;
    AF(arg0, s16, 0x100) = temp_v0;
    AF(arg0, s16, 0xFE) = temp_v0;
    AF(arg0, s16, 0xFC) = temp_v0;
    if (TickTimer((s32) arg0) != 0) {
        func_sc03_097_80184AE8((s32) arg0);
    }
}

void func_sc03_097_80184A88(u8 *arg0) {
    void *temp_v1;

    func_sc03_097_80184DB4(AF(arg0, s32, 0xD4), 0);
    AF(arg0, s16, 2) = 4;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    AF(temp_v1, s16, 0x1A) = 0x2000;
    AF(temp_v1, s16, 0x18) = 0x2000;
    func_sc03_097_80184E4C(AF(arg0, s32, 0xD4));
}

void func_sc03_097_80184AE8(s32 arg0) {
    void *temp_v1;

    GainStat0FromActor(arg0);
    if ((AF(arg0, s32, 0xE4) == 0) && !(AF(arg0, u16, 0x70) & 0x800)) {
        ZeroFill(AF(arg0, s32, 0xD4), 0x38);
        DespawnActor(arg0);
        return;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0;
    if (!(AF(arg0, u16, 0x70) & 0x800)) {
        AF(arg0, s16, 2) = 6;
        HideModel(arg0);
        ZeroFill(AF(arg0, s32, 0xD4), 0x38);
        return;
    }
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 0x80;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x76) = (u16) *AF(arg0, u16 *, 0x78);
    AF(temp_v1, s16, 0x1A) = 0x2000;
    AF(temp_v1, s16, 0x18) = 0x2000;
    AF(arg0, s16, 0x108) = 0;
    AF(arg0, s16, 0x106) = 0;
    AF(arg0, s16, 0x104) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
    AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
    func_sc03_097_80184DB4(AF(arg0, s32, 0xD4), 0);
    SyncModelPos(arg0);
}

s32 func_sc03_097_80184BFC(u8 *arg0) {
    SV8 a;
    SV8 b;

    LocalToWorld((u8 *)g_PlayerModel + 0x34, &D_sc03_097_8019EABC[0], &a);
    LocalToWorld((u8 *)g_PlayerModel + 0x34, &D_sc03_097_8019EABC[1], &b);
    if (PathHitsModel(AF(arg0, s32, 0x20), AF(arg0, s32, 0x58), &a, &b) != 0) {
        HitPlayer(1, 1, AF(AF(arg0, u8 *, 0x20), s16, 0x12), 9, &b, &g_GroundNormal);
        return 1;
    }
    return 0;
}

void func_sc03_097_80184CB0(u8 *arg0, s32 arg1) {
    SMtx m;
    V4 v;

    AF(arg0, s16, 0x106) += TurnStep(AF(arg0, s16, 0x106), HeadingToTarget(arg0), AF(arg0, s32, 0xE8));
    v.y = 0;
    v.x = 0;
    v.z = arg1;
    RotMatrixZYX(arg0 + 0x104, &m);
    ApplyMatrixLV(&m, &v, arg0 + 0x10);
}

s32 func_sc03_097_80184D28(u8 *arg0) {
    s32 *p;
    s32 t;

    if (AF(arg0, s32, 0xE0) == 0) {
        return 1;
    }
    AF(arg0, s32, 0xE0)--;
    if (AF(arg0, s32, 0xE0) > 0) {
        return 0;
    }
    p = AF(arg0, s32 *, 0xD0);
    p += 2;
    t = *p;
    if (!(t & 0x40000000)) {
        if (t < 0) {
            AF(arg0, s32, 0xE0) = 0;
            return 1;
        }
    } else {
        p = AF(arg0, s32 *, 0xCC);
    }
    AF(arg0, s32, 0xE0) = p[0];
    AF(arg0, s32 *, 0xD0) = p;
    QueueImage(p[1]);
    return 0;
}

void func_sc03_097_80184DB4(s32 arg0, s32 arg1) {
    void *temp_v0;

    if (arg0 != 0) {
        temp_v0 = (arg1 * 4) + &D_sc03_097_8019EACC;
        AF(arg0, u16, 0x28) = (u16) AF(temp_v0, u16, 0);
        AF(arg0, u16, 0x2A) = (u16) AF(temp_v0, u16, 2);
    }
}

s32 func_sc03_097_80184DE8(void) {
    s32 temp_v0;

    temp_v0 = AllocActorSprite();
    if (temp_v0 == 0) {
        return 0;
    }
    InitSpriteKind2(temp_v0, (s32) &D_sc03_097_8019E968, 0x298, 0x1B0);
    AF(temp_v0, u8, 0x27) = 0x68;
    AF(temp_v0, s16, 0x1A) = 0x1800;
    AF(temp_v0, s16, 0x18) = 0x1800;
    return temp_v0;
}

void func_sc03_097_80184E4C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) & 0x7FFFFFFF);
    }
}

void func_sc03_097_80184E6C(s32 arg0) {
    if (arg0 != 0) {
        AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) | 0x80000000);
    }
}

s32 func_sc03_097_80184E8C(u8 *arg0) {
    SV p;
    s32 r;
    u16 m;

    r = MoveCollidePassable(arg0);
    if (D_800B99DA % 24 == 0) {
        p.vx = AF(arg0, u16, 6);
        p.vy = AF(arg0, u16, 0xA);
        p.vz = AF(arg0, u16, 0xE);
        p.vy += 0x38;
        func_sc03_097_80184FB0(&p, AF(arg0, s16, 0xDE));
    }
    return r == 0;
}

s32 func_sc03_097_80184F30(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = (HeadingTo((s32) &g_PlayerPosX, arg0 + 4) - AF(g_PlayerModel, s16, 0x12)) & 0xFFF;
    if (temp_a0 < 0x800) {
        return temp_a0 < (s16) arg1;
    }
    return (0x1000 - temp_a0) < (s16) arg1;
}

s32 func_sc03_097_80184FB0(s32 arg0, s32 arg1) {
    u8 *o;
    u8 *t;

    o = (u8 *)SpawnPropAt(0x44, arg0);
    if (o == 0) {
        return 0;
    }
    t = AF(o, u8 *, 0x20);
    AF(t, s32 *, 0x20) = (s32 *)&D_sc03_097_8019EAD4;
    AF(t, s16, 0x28) = 0x290;
    AF(t, s16, 0x2A) = 0x1A0;
    AF(t, u8, 0x27) = 0x70;
    AF(t, s16, 0x18) = AF(t, s16, 0x1A) = 1;
    AF(t, s32, 4) |= 0x50000000;
    AF(o, s32, 0x1C) = 1;
    AF(o, s32, 0x2C) = arg1;
    AF(t, u8, 0x24) = AF(t, u8, 0x25) = AF(t, u8, 0x26) = arg1;
    return (s32)o;
}

void func_sc03_097_80185054(u8 *arg0) {
    u8 *o;
    s16 v;
    s16 h;
    u32 c;

    o = AF(arg0, u8 *, 0x20);
    if (AF(arg0, u16, 2) == 0) {
        h = rsin(AF(arg0, s32, 0x1C) << 6) * 3 / 2;
        AF(o, s16, 0x18) = h;
        AF(o, s16, 0x1A) = h;
        if (++AF(arg0, s32, 0x1C) >= 0x10) {
            AF(arg0, u16, 2)++;
            AF(arg0, s32, 0x1C) = AF(arg0, s32, 0x1C) * 2 - 1;
        }
    } else {
        v = rsin(AF(arg0, s32, 0x1C) << 5);
        c = (u32) (AF(arg0, s32, 0x2C) * v) >> 12;
        h = v * 3 / 2;
        AF(o, s16, 0x18) = h;
        AF(o, s16, 0x1A) = h;
        AF(o, u8, 0x24) = c;
        AF(o, u8, 0x25) = c;
        AF(o, u8, 0x26) = c;
        if (--AF(arg0, s32, 0x1C) == 0) {
            FreeProp(arg0);
        }
    }
}

void func_sc03_097_8018515C(s32 arg0) {
    func_sc03_097_80180E14(arg0);
}

void func_sc03_097_8018517C(StageActor *arg0) {
    D_sc03_097_801A73D0[arg0->state]();
}

void func_sc03_097_801851B8(StageActor *arg0) {
    Blk30 *p;

    arg0->workFE = 0;
    switch (arg0->unkFC) {
    case 0:
        SetAmbientColor(D_sc03_097_801A72F0, D_sc03_097_801A72F2, D_sc03_097_801A72F4);
        p = &D_sc03_097_801A72F8;
        SetState(arg0, 1);
        break;
    case 1:
        SetAmbientColor(D_sc03_097_801A7328, D_sc03_097_801A732A, D_sc03_097_801A732C);
        p = &D_sc03_097_801A7330;
        SetState(arg0, 2);
        break;
    case 2:
        SetAmbientColor(D_sc03_097_801A7360, D_sc03_097_801A7362, D_sc03_097_801A7364);
        p = &D_sc03_097_801A7368;
        SetState(arg0, 3);
        break;
    case 3:
        SetAmbientColor(D_sc03_097_801A72F0, D_sc03_097_801A72F2, D_sc03_097_801A72F4);
        p = &D_sc03_097_801A72F8;
        SetState(arg0, 4);
        break;
    case 4:
        SetAmbientColor(D_sc03_097_801A7398, D_sc03_097_801A739A, D_sc03_097_801A739C);
        p = &D_sc03_097_801A73A0;
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

void func_sc03_097_801853AC(StageActor *arg0) {
    g_Lights.c = D_sc03_097_801A7318;
    D_800A5EB0 = rsin(arg0->workFE) * 10 / 4096 - 5;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc03_097_8018545C(StageActor *arg0) {
    g_Lights.c = D_sc03_097_801A7350;
    D_800A5EB0 = rsin(arg0->workFE) * 6 / 4096 - 3;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc03_097_8018550C(StageActor *arg0) {
    g_Lights.a = D_sc03_097_801A7368.a;
    D_800A5E90 = rsin(arg0->workFE) * 20 / 4096 - 10;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}

void func_sc03_097_801855BC(void) {
}

void func_sc03_097_801855C4(StageActor *arg0) {
    g_Lights.a = D_sc03_097_801A73A0.a;
    D_800A5E90 = rsin(arg0->workFE) / 512 + 8;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}

void func_sc03_097_80185668(StageActor *arg0) {
    D_sc03_097_801A7718[arg0->state]();
}

void func_sc03_097_801856A4(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc03_097_801A7408) != 0) {
        if (!(GetFlag(D_sc03_097_801A7470[AF(arg0->message, u16, 0xA)]) & 0xFF)) {
            arg0->ext0 = SpawnTalkMarker(arg0, (s32) &func_sc03_097_80185D50);
        } else {
            arg0->param = (u16) ((u16)arg0->param | 0x4000);
        }
        temp_v0 = SpawnActorArg(0x8F, (s32) (s16) (u16)arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc03_097_801861C0);
        arg0->state = 1;
    }
}

void func_sc03_097_80185778(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc03_097_801857A0(void) {
}

void func_sc03_097_801857A8(StageActor *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0->message;
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (GetFlag(0x1D) & 0xFF) {
            D_sc03_097_801A7654 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc03_097_801A75B8[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc03_097_801A7640 = 0;
            SetFlag(D_sc03_097_801A75B8[AF(temp_s0, u16, 0xC)], 1);
            D_sc03_097_801A763C = 2;
        } else {
            D_sc03_097_801A7654 = AF(temp_s0, s32, 0);
            var_v0 = D_sc03_097_801A7534[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc03_097_801A763C = 0;
            D_sc03_097_801A7640 = var_v0;
        }
        RunScript((s32) arg0, (s32) &D_sc03_097_801A7668);
    } else {
        var_a1 = &D_sc03_097_801A76D4;
        *var_a1 = AF(temp_s0, s32, 0);
        RunScript((s32) arg0, (s32) (var_a1 - 7));
    }
    arg0->state = 4;
    arg0->param = (u16) ((u16)arg0->param | 0x8000);
}

void func_sc03_097_801858F4(StageActor *arg0) {
    void *temp_s2;

    temp_s2 = arg0->message;
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        if (GetFlag(D_sc03_097_801A7470[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc03_097_801A7470[AF(temp_s2, u16, 0xA)] == 0x54) {
                SetProgress(0x5A);
                SetFlag(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (GetFlag(0x1D) & 0xFF)) {
                UploadFlagImages(0);
            }
            if (func_sc03_097_80185AF8() == 1) {
                GiveItem(0x26);
            }
            arg0->param = (u16) ((u16)arg0->param & 0x8000);
            FreeActor(arg0->ext0);
        }
        arg0->state = 2;
    }
}

void func_sc03_097_80185A14(StageActor *arg0) {
    arg0->state = 2;
    FreeActor(arg0->ext0);
}

void func_sc03_097_80185A40(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_097_80185A50(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc03_097_80185A60(u8 *arg0) {
    SetFlag(D_sc03_097_801A7470[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc03_097_80185AA0(u8 *arg0) {
    AddMoney((s32) &g_Player, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc03_097_80185AD4(void) {
    return func_80174764() == 1;
}

s32 func_sc03_097_80185AF8(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(GetFlag(D_sc03_097_801A7470[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc03_097_80185B5C(StageActor *arg0) {
    D_sc03_097_801A7740[arg0->state]();
}

void func_sc03_097_80185B98(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_097_801A743C) != 0) {
        arg0->unkFC = (u16) arg0->parent->id;
        if ((u16)arg0->param & 0x4000) {
            SetScript(arg0, (s32) &D_sc03_097_801A7E00);
            arg0->hitState = 0;
        } else {
            SetScript(arg0, (s32) &D_sc03_097_801A7BE0);
        }
        arg0->state = 1;
    }
}

void func_sc03_097_80185C20(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->unkFC != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_097_801A7BF0);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_097_801A7CF8);
        arg0->hitState = 0x8C00;
    }
}

void func_sc03_097_80185CE0(StageActor *arg0) {
    s32 f;

    if (arg0->animTimer == 0) {
        f = arg0->workFE;
        arg0->state = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc03_097_801A7E00);
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_097_801A7BE0);
        }
        arg0->workFE = 0;
    }
}

s32 *func_sc03_097_80185D50(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    Mover *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) g_PlayerModel + 0x34);
    gte_SetTransMatrix((u8 *) g_PlayerModel + 0x34);
    RotTransSV(&D_sc03_097_801A7730[0], &a, &f);
    RotTransSV(&D_sc03_097_801A7730[1], &b, &f);
    if (PathHitsModel(p->model, p->hitData, &a, &b) != 0 && TargetInFront(p, 0x300) != 0) {
        p->state = 3;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}
