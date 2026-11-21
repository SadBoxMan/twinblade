#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_029_8017BE9C(void) {
}

void func_sc03_029_8017BEA4(void) {
}

void func_sc03_029_8017BEAC(void) {
}

void func_sc03_029_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_029_8018B214[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void FreeEffect();
extern s32 SpawnEffect();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_029_8018B1FC;
extern void (*D_sc03_029_8018B21C[])();
extern u8 D_sc03_029_8018B208;
extern void (*D_sc03_029_8018B334[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void AddMaxBp();
extern void AddBp();
extern void PlaySoundId();
extern void func_sc03_029_8017C294();
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
extern void (*D_sc03_029_8018B38C[])();
extern void PlaySe();
extern void func_sc03_029_8017D408();
extern void (*D_sc03_029_8018B3A0[])();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern void (*D_sc03_029_8018B3B4[])();
extern void func_800D22E4();
extern void func_sc03_029_8017DB00();
extern void (*D_sc03_029_8018B568[])();
void func_sc03_029_8017F0C8(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc03_029_8018B570[])();
void func_sc03_029_8017F0F0(void);
extern void (*D_sc03_029_8018B578[])();
void func_sc03_029_8017F118(void);
extern void func_800D1EBC();
extern void (*D_sc03_029_8018B584[])();
void func_sc03_029_8017F140(void);
extern void (*D_sc03_029_8018B590[])();
extern void (*D_sc03_029_8018B59C[])();
extern void (*D_sc03_029_8018B5A8[])();
void func_sc03_029_8017F49C(void);
extern u8 D_sc03_029_8018B5B8;
extern void StartPlayerActionScript();
extern u8 D_sc03_029_8018B5C4;
extern u8 D_sc03_029_8018B5C8;
extern u8 D_sc03_029_8018B5DC;
extern void (*D_sc03_029_8018B614[])();
extern u8 D_sc03_029_8018B5EC;
extern void func_sc03_029_8017F724();
extern void (*D_sc03_029_8018B624[])();
extern void (*D_sc03_029_8018B92C[])();
extern void (*D_sc03_029_8018B934[])();
extern void (*D_sc03_029_8018B944[])();
extern void (*D_sc03_029_8018B94C[])();
extern void (*D_sc03_029_8018B9B8[])();
extern void (*D_sc03_029_8018BB08[])();
extern void (*D_sc03_029_8018BBBC[])();
extern void NextState();
extern void (*D_sc03_029_8018BC04[])();
extern void RejectSpawn();
extern u8 D_sc03_029_8018BBF4;
extern u8 D_sc03_029_8018BBE4;
extern u8 D_sc03_029_8018BBD4;
extern u8 D_sc03_029_8018BBC4;
extern s32 GetProgress();
extern s32 func_sc03_029_801821F4();
extern void (*D_sc03_029_8018BC1C[])();
extern void (*D_sc03_029_8018BCBC[])();
extern void (*D_sc03_029_8018BCC4[])();
extern void (*D_sc03_029_8018BCFC[])();
extern void (*D_sc03_029_8018BD9C[])();
extern void (*D_sc03_029_8018BE04[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc03_029_80187B3C;
extern u8 D_sc03_029_8018BDB8;
extern s32 * func_sc03_029_80182B34();
extern void RunScript();
extern u8 D_sc03_029_8018BDEC;
extern void (*D_sc03_029_801C4250[])();
extern void (*D_sc03_029_801C4954[])();
extern void (*D_sc03_029_801C49BC[])();
extern void (*D_sc03_029_801C49F0[])();
extern void (*D_sc03_029_801C4A40[])();
extern void (*D_sc03_029_801C89CC[])();
extern s32 GetFlag();
extern u8 D_sc03_029_801C86BC;
extern s32 * func_sc03_029_80185AE0();
extern s32 D_sc03_029_801C8724[];
extern s32 SpawnActorArg();
extern void SetFlag();
extern s32 D_sc03_029_801C88F0;
extern s32 D_sc03_029_801C88F4;
extern s32 D_sc03_029_801C8908;
extern s32 D_sc03_029_801C891C;
extern s32 D_sc03_029_801C8988;
extern s32 D_sc03_029_801C886C[];
extern s32 D_sc03_029_801C87E8[];
extern s32 UpdateScript();
extern void SetProgress();
extern void UploadFlagImages();
extern s32 func_sc03_029_80185888();
extern void AddMoney();
extern s32 func_80174764();
extern void (*D_sc03_029_801C89F4[])();
extern u8 D_sc03_029_801C86F0;
extern u8 D_sc03_029_801C8E94;
extern u8 D_sc03_029_801C90B4;
extern u8 D_sc03_029_801C8EA4;
extern u8 D_sc03_029_801C8FAC;

void func_sc03_029_8017BEBC(u8 *arg0) {
    D_sc03_029_8018B214[AF(arg0, u16, 2)]();
}

void func_sc03_029_8017BEF8(u8 *a) {
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
    o = func_800D222C(a, &D_sc03_029_8018B1FC, 0xFD);
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

void func_sc03_029_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_029_8017C150(u8 *arg0) {
    D_sc03_029_8018B21C[AF(arg0, u16, 2)]();
}

void func_sc03_029_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_029_8018B208, 0x18);
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

void func_sc03_029_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

extern void HidePlayerScene();
extern void SetPlayerFlag7E2();

extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern u8 D_sc03_029_801C8570;
extern u8 D_sc03_029_801C8610;
extern void BumpSub2Copy();
extern u8 D_sc03_029_8018B5FC;
extern s32 WalkToPointTurning();
extern s32 TickTimer();
extern void MoveObject();
extern void DespawnActor();
extern s32 func_800D0CE0();
extern u8 D_sc03_029_8018BAF0;
extern s32 D_8012704C;
extern u8 D_sc03_029_8018BC0C;
extern s32 IsActorFar();
extern void (*D_sc03_029_801C48F0[])();
extern void func_sc03_029_80184344();
extern s32 func_sc03_029_801844B0();
extern s32 StopWithGravity();
extern s32 SetForwardVelocity();
extern u8 D_sc03_029_801C7AA4;
extern u8 D_800D3918;
extern s32 func_sc03_029_801841F8();
extern u8 D_sc03_029_801C7B9C;
extern u8 D_sc03_029_801C7C74;
extern u8 D_sc03_029_801C7D4C;
extern void UpdateModelZYX();
extern s32 HeadingToTarget();
extern u8 D_sc03_029_801C81BC;
extern void TakeDamageAndRecoil();
extern void SetLocalVelocity();
extern u8 D_sc03_029_801C4934;
extern u8 D_sc03_029_801C4940;
extern u8 D_sc03_029_801C823C;
extern u8 D_sc03_029_801C4840;
extern void HideModel();
extern s16 D_801270C0;
extern s32 func_sc03_029_801847FC();
extern void FreeProp();
extern void MoveProp();
extern void func_sc03_029_80184B70();

extern u8 D_sc03_029_801D9760;
extern void func_8001CD50();
extern void SetShapeCircle();
extern void (*D_sc03_029_801C93A8[])();
extern void func_sc03_029_80187050();
extern u8 D_sc03_029_801C9124;
extern s32 D_sc03_029_801CA0A0;
extern u8 D_sc03_029_801D98C8;
extern void InitMime();
extern s32 func_sc03_029_80186ECC();
extern s32 DistSqToTarget();
extern void StepMime();
extern s32 func_sc03_029_80186DD4();
extern u8 D_sc03_029_801C917C;
extern s32 MoveCollide();
extern s32 ActorSegmentDamagesPlayer();
extern u8 D_sc03_029_801C9320;
extern void SetReactionStep();
extern u8 D_sc03_029_801C9234;
extern u8 D_sc03_029_801C9268;
extern void func_sc03_029_80186F9C();
extern u8 D_sc03_029_801C920C;

extern s32 D_sc03_029_8018B754[];
extern s32 D_sc03_029_8018B768[];
extern void func_sc03_029_8017FF7C();
extern void func_sc03_029_801800D0();
extern u8 D_sc03_029_8018B720;
extern s32 FindOtherActorByKind();
extern s32 SpawnShadow();
extern u8 D_sc03_029_8018B690;
extern s32 D_sc03_029_801ADB78;
extern u8 D_sc03_029_801D9740;
extern u8 D_sc03_029_8018B6E8;
extern void func_sc03_029_80180234();
extern void GainStat0FromActor();
extern void ToughEnemyDie();
extern void EndReaction();
extern u8 D_sc03_029_8018B8CC;
extern u8 D_sc03_029_801C0028;
extern void SetVar16();
extern void (*D_sc03_029_8018B8FC[])();
extern u8 D_sc03_029_8018B910;
extern u8 D_sc03_029_8018B91C;
extern void func_8001CA1C();
extern void SnapToGround();
extern s32 GetVarCF();
extern u8 D_sc03_029_801D2038;
extern u8 D_sc03_029_8118B93C;
extern void func_sc03_029_80181708();
extern s32 D_sc03_029_801D99BC;
extern s32 D_sc03_029_801D99C0;
extern void UpdateClockTint();
extern void func_sc03_029_8018246C();
extern u8 D_sc03_029_801C0B48;
extern s32 D_sc03_029_8018BCB4[];
extern s32 GetVar();
extern u8 D_sc03_029_801C0ED8;
extern s16 g_PlayerX;
extern void func_sc03_029_80182860();
extern u8 D_sc03_029_8018BD04;
extern u8 D_sc03_029_801D3318;
extern void PlaceObject();
extern u8 D_sc03_029_801D5BC8;
extern u8 D_sc03_029_801C4200;
extern u8 D_sc03_029_801C4240;
extern u8 D_sc03_029_801C473C;
extern u8 D_sc03_029_801C4850;
extern s32 func_80143994();

extern u8 D_sc03_029_8018B8C0;
extern u8 D_sc03_029_801C02A8;
extern s32 HeadingTo();
extern void SetLocalVelocityXZ();
extern s32 DistSq();

extern u8 D_sc03_029_801D9750;
extern u16 D_sc03_029_801D9754;
extern s32 FindActorByKind();
extern void SetState();
extern void SetMoverTimer();

extern s32 D_sc03_029_8018BCCC[];
extern S12 D_sc03_029_8018BCD8[];

extern void FreeShadow();

extern u8 D_800D6078;
extern u8 D_800D6118;
extern u8 D_sc03_029_8018B5B0;
extern u8 D_sc03_029_8018B602[];
extern void StartRumbleScript();
extern void func_sc03_029_8017F3AC();
s32 func_sc03_029_8017F378(s32 arg0);
extern void ClearVarCF();
extern void PressCross();



typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s16 D_80126B62;
extern s32 g_PlayerPosX;
extern u16 g_Actors;
extern u16 D_800B99DA;
extern s16 D_800B9A08;
extern u8 D_sc03_029_8018B2E4;
extern u8 D_sc03_029_8018B280[];
extern s32 PosDist();
extern void TakePlayerControl();
extern s32 DistSqToPlayer();
extern u8 D_sc03_029_801D9530;
extern u8 D_sc03_029_801D9531;
extern u8 D_sc03_029_801D9532;
extern u8 D_sc03_029_801D9534;
extern u8 D_sc03_029_801D9535;
extern u8 D_sc03_029_801D9536;
extern s32 D_sc03_029_801D9734;
extern s32 D_sc03_029_801D9738;
extern s32 D_sc03_029_801D973C;
extern s32 AllocSpriteInRange();
extern u16 D_sc03_029_801D5FFC;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
extern s8 D_sc03_029_8018B360[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern void DrawPrimG4Mtx();
extern WMtx GsIDMATRIX;
extern void DrawPrimLineG2Mtx();

typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern s32 func_sc03_029_80187718();
extern s32 func_sc03_029_8018765C();

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
extern u8 D_sc03_029_8018B24C;
extern u8 D_sc03_029_8018B288;
extern u8 D_sc03_029_801D5FD4;
extern u8 D_sc03_029_801D94C0;
extern u8 D_sc03_029_801D94CC;
extern u8 D_sc03_029_801D94CD;
extern u8 D_sc03_029_801D94CE;
extern u8 D_sc03_029_801D94DC;
extern u8 D_sc03_029_801D94DD;
extern u8 D_sc03_029_801D94DE;
extern u8 D_sc03_029_801D94ED;
extern u8 D_sc03_029_801D94EE;
extern u8 D_sc03_029_801D94F0;
extern u8 D_sc03_029_801D94F1;
extern u8 D_sc03_029_801D94F2;
extern u8 D_sc03_029_801D94F4;
extern u8 D_sc03_029_801D94F5;
extern u8 D_sc03_029_801D94F6;
extern u8 D_sc03_029_801D94FC;
extern u8 D_sc03_029_801D9570;
extern void func_8001C810();
extern u8 D_sc03_029_8018B9C4;
extern void InitSpriteKind3();
extern void StartSpriteAnim();
extern void UpdateModelRot();
extern s32 D_sc03_029_801C499C[];
extern SV_8E8A0 D_sc03_029_801C4A00[][4];

extern u16 D_sc03_029_8018B8E4;
extern u16 D_sc03_029_8018B8E6;
extern u16 D_sc03_029_8018B8E8;
extern u8 D_sc03_029_801C00D0;
extern u8 D_sc03_029_801C0200;
extern u8 D_sc03_029_801C03F0;
extern s32 D_sc03_029_801D9758;
extern s32 D_sc03_029_801D975C;
extern void SpawnKind1C();
static inline void sc03_029_hit(StageActor *a) {
    a->state = 4;
    a->react = 0;
    a->hitCode = 0;
    a->timer = 0x30;
    SetScript(a, &D_sc03_029_801C00D0);
    PlaySoundId(0x531, 0);
    PlaySoundId(0x526, 0);
}

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
extern s32 MoveOnGround();
extern void DamageActorsNear();
extern s32 MoveCollidePassableAt();
extern u8 D_sc03_029_801C494C;
extern void AngleToVec2();
extern void DropItem();
extern u8 *SpawnKind1CAt();
extern void RestorePrevPos();
extern s32 func_sc03_029_80184520();
extern s32 func_sc03_029_80184580();
extern u16 g_PlayerTarget;
extern u16 D_80126CB6;
extern u16 D_80126CB8;
extern void *g_PlayerModel;
extern s32 MoveOnGroundOfs();

extern s32 EaseValue(); extern s32 EaseAngle(); extern void func_sc03_029_80187478(); extern void ApplyMatrixSV();

extern u8 g_Status;
extern u8 g_Daytime;
extern s32 PlayerFlag400();
extern s32 func_sc03_029_80184958();
extern void HitPlayer();
extern void func_80020DA4();
extern void func_80020F34();
extern SV8 D_sc03_029_801C495C[];
extern s32 PathHitsModel();

typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
extern u8 D_sc03_029_801C913C;
extern s32 func_sc03_029_8018723C();
extern s32 TurnStepToTarget();
extern void func_sc03_029_80186F60();
extern u8 D_sc03_029_801C92AC;
extern u8 D_sc03_029_801C92BC;
extern u8 D_sc03_029_801C92CC;
extern u8 D_sc03_029_801C92DC;
extern s32 CollidePath();

extern s32 TargetInFront();
extern s32 D_sc03_029_801C931C[];
extern s32 func_sc03_029_801870B8();
extern u8 D_sc03_029_801C915C;
extern s32 MoveCollidePassable();

extern s32 D_sc03_029_801D94C4;
extern s32 D_sc03_029_801D94C8;
extern s32 D_sc03_029_801D94D0;
extern s32 D_sc03_029_801D94D4;
extern s32 D_sc03_029_801D94D8;
extern s32 D_sc03_029_801D94E0;
extern s32 D_sc03_029_801D94E4;
extern s32 D_sc03_029_801D94E8;

void func_sc03_029_8017C294(u8 *arg0, s32 arg1_0) {
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
    *(s32 *)&D_sc03_029_801D94C0 = D_sc03_029_801D94D0 = D_sc03_029_801D94E0 = v.vx;
    D_sc03_029_801D94C4 = D_sc03_029_801D94D4 = D_sc03_029_801D94E4 = v.vy;
    D_sc03_029_801D94C8 = D_sc03_029_801D94D8 = D_sc03_029_801D94E8 = v.vz;
}

void func_sc03_029_8017C3C4(StageActor *arg0) {
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
        if (SetupActor(arg0, &D_sc03_029_8018B24C) == 0) {
            return;
        }
        func_8001C810(arg0->model, &D_sc03_029_801D5FD4);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc03_029_8018B288);
        arg0->model->flags |= 0x20;
        arg0->model->unk80 = &D_sc03_029_801D94C0;
        arg0->model->unk04 |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext0 = o;
        p = &D_sc03_029_801D94F0;
        func_8001CD50(o, p);
        D_sc03_029_801D94F2 = 0x80;
        p[0] = 0x80;
        D_sc03_029_801D94F1 = 0xE0;
        D_sc03_029_801D94F5 = 0;
        D_sc03_029_801D94F4 = 0;
        D_sc03_029_801D94F6 = 0;
        SetShapeCircle(p, 0x38);
        s = (U12x9 *) &D_sc03_029_801D5FFC;
        b = (U12x9 *) &D_sc03_029_801D9570;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = (u16)arg0->pos[0].h.i;
        AF(o, u16, 0xA) = arg0->pos[1].h.i -= 4;
        AF(o, u16, 0xC) = (u16)arg0->pos[2].h.i;
        AF(o, s32, 4) |= 0x50000000;
        D_sc03_029_801D94EE = 0xFF;
        D_sc03_029_801D94FC = 0xFF;
        D_sc03_029_801D94DE = 0xFF;
        D_sc03_029_801D94DC = 0xFF;
        D_sc03_029_801D94CE = 0xFF;
        D_sc03_029_801D94CC = 0xFF;
        D_sc03_029_801D94ED = 0x80;
        D_sc03_029_801D94DD = 0x80;
        D_sc03_029_801D94CD = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc03_029_801D9570;
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

void func_sc03_029_8017C750(u8 *arg0) {
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
    func_sc03_029_8017C294(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc03_029_8018B280[(s16) i]) {
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
            StartEvent(arg0, &D_sc03_029_8018B2E4);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc03_029_8017C9C8(StageActor *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext1 = o;
        p = &D_sc03_029_801D9530;
        func_8001CD50(o, p);
        D_sc03_029_801D9531 = 0xFF;
        D_sc03_029_801D9532 = 0xFF;
        p[0] = 0xFF;
        D_sc03_029_801D9536 = 8;
        D_sc03_029_801D9534 = 8;
        D_sc03_029_801D9535 = 0x18;
        SetShapeCircle(p, 0x100);
        v.vx = (u16)arg0->pos[0].h.i;
        v.vy = (u16)arg0->pos[1].h.i - 0x38;
        v.vz = (u16)arg0->pos[2].h.i;
        func_800D20C0(&v, &r, 5);
        q = &D_sc03_029_801D9734;
        q[0] = v.vx;
        D_sc03_029_801D9738 = v.vy;
        D_sc03_029_801D973C = v.vz;
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

void func_sc03_029_8017CB10(StageActor *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc03_029_801D5FFC;
    r = AF(arg0, U12 *, 0xD8);
    p = (u8 *)arg0->message;
    o = (u8 *)arg0->ext1;
    s4 = (s16 *)arg0->model;
    if (p[1] != 0 && arg0->work108 == 0) {
        arg0->work108 = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--arg0->timer != -1) {
        func_sc03_029_8017C294(arg0, 0);
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

void func_sc03_029_8017CC90(StageActor *arg0) {
    D_sc03_029_8018B334[arg0->state]();
}

void func_sc03_029_8017CCCC(void) {
    AddMaxBp((s32) &g_Player, 5);
    AddBp((s32) &g_Player, 0x270F);
    PlaySoundId(0xBFE, 0);
}

void func_sc03_029_8017CD18(StageActor *arg0) {
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
        func_sc03_029_8017C294((s32) arg0, rand() & 1);
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
extern s32 EaseValueFrac();
extern void SyncModelPos();
extern s32 D_sc03_029_8018B9A4[];
extern s32 StepSpriteAnim();
extern void func_sc03_029_80183E70();
extern s32 func_sc03_029_80183F70();
extern SV8 D_sc03_029_801C4830;
extern SV8 D_sc03_029_801C4838;
extern s32 D_sc03_029_801C4770[][16];
extern s32 SpawnPropAt();
extern u8 D_sc03_029_801C49DC;
extern void SetIdentityRot();
extern s16 D_sc03_029_801D617C[];

void func_sc03_029_8017CE0C(StageActor *arg0) {
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

void func_sc03_029_8017CE8C(StageActor *arg0) {
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

void func_sc03_029_8017CF40(StageActor *arg0) {
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

void func_sc03_029_8017CFAC(StageActor *arg0, s32 arg1) {
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

void func_sc03_029_8017D038(StageActor *arg0, s32 arg1) {
    FreeActor(arg0, arg1);
}

void func_sc03_029_8017D058(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc03_029_8017C294(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

void func_sc03_029_8017D0AC(s32 arg0) {
    SpawnEffect(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_029_8017D0E8(u8 *arg0) {
    D_sc03_029_8018B38C[AF(arg0, u16, 2)]();
}

void func_sc03_029_8017D124(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        PlaySe((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_029_8017D174(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_029_8017D408((s32) arg0);
}

void func_sc03_029_8017D1D0(u8 *arg0) {
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
    func_sc03_029_8017D408((s32) arg0);
}

void func_sc03_029_8017D254(u8 *arg0) {
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
    func_sc03_029_8017D408((s32) arg0);
}

void func_sc03_029_8017D3BC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_029_8017D408((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc03_029_8017D408(u8 *arg0) {
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
    t = D_sc03_029_8018B360;
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
    t = D_sc03_029_8018B360;
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
        t = D_sc03_029_8018B360;
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

void func_sc03_029_8017D714(u8 *arg0) {
    D_sc03_029_8018B3A0[AF(arg0, u16, 2)]();
}

void func_sc03_029_8017D750(u8 *arg0) {
    PlaySe((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_029_8017D790(u8 *arg0) {
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
    func_sc03_029_8017D408((s32) arg0);
}

void func_sc03_029_8017D800(u8 *arg0) {
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
    func_sc03_029_8017D408((s32) arg0);
}

void func_sc03_029_8017D88C(u8 *arg0) {
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
    func_sc03_029_8017D408((s32) arg0);
}

void func_sc03_029_8017D960(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_029_8017D408((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    FreeEffect((s32) arg0);
}

void func_sc03_029_8017D9B4(u8 *arg0) {
    D_sc03_029_8018B3B4[AF(arg0, u16, 2)]();
}

void func_sc03_029_8017D9F0(u8 *arg0) {
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

void func_sc03_029_8017DAA4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_029_8017DB00((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc03_029_8017DB00(u8 *arg0) {
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

void func_sc03_029_8017DC70(u8 *obj) {
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

void func_sc03_029_8017EB50(u8 *arg0) {
    D_sc03_029_8018B568[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_029_8017EB8C(u8 *arg0) {
    func_sc03_029_8017F0C8();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_029_8017EBD0(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc03_029_8017EBF4(u8 *arg0) {
    D_sc03_029_8018B570[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_029_8017EC30(u8 *arg0) {
    func_sc03_029_8017F0F0();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_029_8017EC74(u8 *arg0) {
    D_sc03_029_8018B578[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_029_8017ECB0(u8 *arg0) {
    func_sc03_029_8017F118();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_029_8017ECF0(u8 *arg0) {
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

void func_sc03_029_8017ED6C(void) {
    func_800D1EBC();
}

void func_sc03_029_8017ED8C(u8 *arg0) {
    D_sc03_029_8018B584[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_029_8017EDC8(u8 *arg0) {
    func_sc03_029_8017F140();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_029_8017EE08(u8 *arg0) {
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

void func_sc03_029_8017EE7C(void) {
    func_800D1EBC();
}

void func_sc03_029_8017EE9C(u8 *arg0) {
    D_sc03_029_8018B590[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_029_8017EED8(u8 *arg0) {
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

void func_sc03_029_8017EF4C(u8 *arg0) {
    D_sc03_029_8018B59C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_029_8017EF88(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = GetProgress();
    temp_v1 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v1;
    if (temp_v1 == -1) {
        if (temp_a0 < 0xC8) {
            if ((u32) (temp_a0 - 0x96) < 0x32U) {
                func_800D0C48(1);
            }
        }
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_029_8017F024(u8 *arg0) {
    D_sc03_029_8018B5A8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_029_8017F060(u8 *arg0) {
    func_sc03_029_8017F49C();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_029_8017F0A4(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc03_029_8017F0C8(void) {
    StartPlayerActionScript((s32) &D_sc03_029_8018B5B8, 0x01000000);
}

void func_sc03_029_8017F0F0(void) {
    StartPlayerActionScript((s32) &D_sc03_029_8018B5C4, 0x01000000);
}

void func_sc03_029_8017F118(void) {
    StartPlayerActionScript((s32) &D_sc03_029_8018B5C8, 0x01000000);
}

void func_sc03_029_8017F140(void) {
    StartPlayerActionScript((s32) &D_sc03_029_8018B5DC, 0x01000000);
}

void func_sc03_029_8017F168(u8 *arg0) {
    D_sc03_029_8018B614[AF(arg0, u8, 0x216)]();
}

void func_sc03_029_8017F1A4(u8 *arg0) {
    AF(arg0, s32 *, 0xB0) = &D_sc03_029_801C8570;
    AF(arg0, s32 *, 0xCC) = &D_sc03_029_801C8610;
    AF(arg0, s16, 0x20C) = 0;
    AF(arg0, s16, 0x20E) = 0;
    AF(arg0, s16, 0x210) = 0;
    BumpSub2Copy((s32) arg0);
}

void func_sc03_029_8017F1E4(s32 arg0) {
    s16 temp_v0;

    StartRumbleScript((s32) &D_sc03_029_8018B5B0);
    func_sc03_029_8017F3AC(arg0);
    if (func_sc03_029_8017F378(arg0) != 0) {
        temp_v0 = AF(arg0, s16, 0x210);
        if ((*(s16 *)&D_sc03_029_8018B602[(temp_v0 * 8)]) != 0) {
            AF(arg0, s32 *, 0xB0) = &D_800D6078;
            AF(arg0, s32 *, 0xCC) = &D_800D6118;
            AF(arg0, s16, 0x12E) = 0;
            ClearVarCF();
            PressCross(arg0);
            BumpSub2Copy(arg0);
            return;
        }
        AF(arg0, s16, 0x210) = (s16) (temp_v0 + 1);
        func_sc03_029_8017F378(arg0);
    }
}

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
extern SV8 D_sc03_029_801C89E4[];

extern u8 D_sc03_029_8018B6A8;

extern SV8 D_sc03_029_8018B774[];
extern u8 D_sc03_029_8018B878;
extern u8 D_sc03_029_801C0178;
extern void TakePlayerControlNoStop();
extern s32 HeadingToPlayer();
extern void PlaySoundAtActor();

extern void PosToSVec();
extern s32 D_800AF648[];
extern u8 *D_sc03_029_8018BBA4[];
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern void func_sc03_029_80182050();
extern void func_sc03_029_801820E4();
extern u8 D_sc03_029_8018B7E4;
extern u8 D_sc03_029_8018B818;
extern u8 D_sc03_029_801C01A8;
extern s32 GetObjPadPressed();
extern SV8 g_CameraFocus;
extern SV8 D_sc03_029_801D8028;
extern s16 D_sc03_029_8018B62C[];
extern s32 ratan2();
extern s32 SVecDist();
extern s16 D_801274E8;
extern s16 D_801274EA;
extern s16 D_801274EC;
void func_sc03_029_801872B4(s32 arg0, s32 arg1, s32 arg2);
void func_sc03_029_8017FA84(u8 *o, u8 *b, s32 ry);

typedef void (*StepFn)(void);

extern u8 D_sc03_029_8018BD1C;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
typedef struct { u16 x0, y0, w; s16 pad6; u16 *idx; s32 padC[2]; u8 *lists; u8 *a; u8 *b; } MapGrid;
typedef struct { SV8 v[4]; XY uv[4]; s32 col[4]; s32 code; u8 clut; } QuadSpr;
extern s32 TraceMap();

extern void ShowDamage();
extern B8 D_sc03_029_801D80B0;
void func_sc03_029_801817D8(s32 arg0, SV8 *arg1);
extern u32 D_sc03_029_801D9860;
extern u16 D_sc03_029_801D9864[];
extern u16 D_sc03_029_801D98A4[];
extern u16 D_sc03_029_8018BC24[];
extern u16 D_sc03_029_8018BC64[];
extern u8 D_sc03_029_8018BC84;
extern s32 QueueImage();
extern s32 IsOnScreen();
extern s32 FindGround();
extern void LocalToWorld();
extern void GetPartWorldMatrix();
extern s32 D_sc03_029_801C49C4[];
extern s32 D_sc03_029_801C49D0[];
extern SV8 D_sc03_029_801C49E8;
extern u16 g_SpawnRejected;
extern u8 D_sc03_029_801C9278;
extern u8 D_sc03_029_801C9330;
extern u8 D_sc03_029_801C93E0;
extern u8 D_sc03_029_801C93EC;
extern u8 D_sc03_029_801CA248;
extern u8 D_sc03_029_801CA418;

extern SV8 D_sc03_029_801D8020;
extern s32 StepToward();
extern void NextPlayerActionHandler();
extern u8 *SpawnProp();
extern SV8 D_sc03_029_801D8018;
void StartKind116(void);
extern void HoldCross();

void func_sc03_029_8017F298(u8 *o) {
    SV8 v = D_sc03_029_801D8018;
    if (StepToward(o, &v) != 0) {
        StartKind116();
        BumpSub2Copy(o);
    }
    HoldCross(o);
}

void func_sc03_029_8017F310(u8 *o) {
    SV8 v = D_sc03_029_801D8020;
    if (StepToward(o, &v) != 0) {
        NextPlayerActionHandler(o);
    }
}

s32 func_sc03_029_8017F378(s32 arg0) {
    return WalkToPointTurning(arg0, (s32) ((AF(arg0, s16, 0x210) * 8) + &D_sc03_029_8018B5FC), 0xA);
}

void func_sc03_029_8017F3AC(u8 *arg0) {
    u16 *p = &D_800B99DA;
    AF(arg0, s16, 0x20E) = EaseValueFrac(AF(arg0, s16, 0x20E), 0, 10, 1);
    AF(arg0, s16, 0x12E) = 1;
    AF(arg0, s16, 0x128) = AF(arg0, u16, 0x20E) + rsin((*p & 0x3F) << 6) / 4;
    AF(arg0, s16, 0x12C) = rcos((*p & 0x3F) << 6) / 8;
    if (AF(arg0, s16, 0x13A) != 0) {
        AF(arg0, s16, 0x13A) += (s8)AF(arg0, u8, 0x20D);
        AF(arg0, s16, 0x20C) -= 0xE0;
        if (AF(arg0, s16, 0x13A) < 0) {
            AF(arg0, s16, 0x13A) = 0;
            AF(arg0, s16, 0x20C) = 0;
        }
    }
}

void func_sc03_029_8017F49C(void) {
    StartPlayerActionScript((s32) &D_sc03_029_8018B5EC, 0x01000000);
}

extern SV8 D_sc03_029_8018BBAC[];
extern void ShowDefeat();
extern u8 D_sc03_029_8018B8EC;
extern void func_sc03_029_80180F3C(u8 *o);

extern void CarryPlayer();
void func_sc03_029_80182D70(u8 *o);

extern s32 g_CameraProjTarget;
extern s32 g_CameraDistTarget;
extern s16 g_CameraAngleTarget;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 g_CameraOfsTarget;
extern s16 D_80126978;
extern s16 D_8012697A;
extern u8 g_Camera;
extern s32 SetCameraUpdate();
extern void SnapCamera();

void func_sc03_029_8017F4C4(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x384;
    g_CameraAngleTarget = 0x2D8;
    D_8012696A = 0xE00;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_029_8017F724, 0);
    SnapCamera((s32) &g_Camera);
    *(SV8 *) &D_801274E8 = g_CameraFocus;
    func_sc03_029_8017F724((s32) &g_Camera);
}

void func_sc03_029_8017F590(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x384;
    g_CameraAngleTarget = 0x38E;
    D_8012696A = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_029_8017F724, 1);
    SnapCamera((s32) &g_Camera);
    *(SV8 *) &D_801274E8 = g_CameraFocus;
    func_sc03_029_8017F724((s32) &g_Camera);
}

void func_sc03_029_8017F658(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x384;
    g_CameraAngleTarget = 0x38E;
    D_8012696A = 0xE00;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x80;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_029_8017F724, 0);
    SnapCamera((s32) &g_Camera);
    *(SV8 *) &D_801274E8 = g_CameraFocus;
    func_sc03_029_8017F724((s32) &g_Camera);
}

void func_sc03_029_8017F724(s32 arg0) {
    D_sc03_029_8018B624[AF(arg0, u8, 4)]();
}

void func_sc03_029_8017F760(u8 *o) {
    SV8 v;
    SV8 c;
    s16 ang;
    s16 d;
    s16 *t;

    c = D_sc03_029_801D8028;
    if (GetObjPadPressed(&g_Player) & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
    }
    AF(o, s32, 0x14) = D_sc03_029_8018B62C[AF(o, u8, 5)];
    v = g_CameraFocus;
    ang = ratan2(v.x, v.z) & 0xFFF;
    if ((u16)(v.x - 0x601) < 0x2FF && (u16)(v.z + 0x23F) < 0x35F) {
        AF(o, s16, 0x20) = 0x38E;
    } else if (v.x < 0 || v.z < -0x500) {
        AF(o, s16, 0x20) = 0x155;
        if (v.y < -0x1C4) {
            v.y = -0x1C4;
        }
        c.y = v.y;
        d = SVecDist(&v, &c);
        if (ang < 0xA00 && d > 0xAE0) {
            v.x = 0;
            v.z = 0xAE0;
            func_sc03_029_801872B4(ang, (s32) &v, (s32) &v);
            v.x >>= 3;
            v.y >>= 3;
            v.z >>= 3;
        }
    } else {
        if (AF(o, s32, 0x14) == 0x2BC) {
            AF(o, s32, 0x14) = 0x384;
        }
        AF(o, s16, 0x20) = 0x2D8;
    }
    c.y = v.y;
    d = SVecDist(&v, &c);
    if (d < 0x780) {
        v.x = 0;
        v.z = 0x780;
        func_sc03_029_801872B4(ang, (s32) &v, (s32) &v);
        v.x >>= 3;
        v.y >>= 3;
        v.z >>= 3;
    }
    t = &D_801274E8;
    *t = EaseValue(*t, v.x, 4);
    D_801274EA = EaseValue(D_801274EA, v.y, 4);
    D_801274EC = EaseValue(D_801274EC, v.z, 4);
    func_sc03_029_8017FA84(o, (u8 *) t, ang);
}

void func_sc03_029_8017FA2C(u8 *o) {
    func_sc03_029_8017FA84(o, (u8 *) &g_CameraFocus, ratan2(g_CameraFocus.x, g_CameraFocus.z) & 0xFFF);
}

void func_sc03_029_8017FA84(u8 *o, u8 *b, s32 ry) {
    WMtx m;
    SV8 v;
    SV8 out;
    SV8 r;
    AF(o, s32, 8) = (s16) EaseValue(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16) EaseValue(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = EaseAngle(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = EaseAngle(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = EaseAngle(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = EaseValue(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = EaseValue(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = EaseValue(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + AF(b, s16, 0);
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + AF(b, s16, 2);
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + AF(b, s16, 4);
    r.x = AF(o, u16, 0x18);
    r.y = AF(o, u16, 0x1A) + ry;
    r.z = AF(o, u16, 0x1C);
    func_sc03_029_80187478(&r, &m);
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    ApplyMatrixSV(&m, &v, &out);
    AF(o, s32, 0x3C) = (out.x >> 3) + AF(o, s16, 0x28) + AF(b, s16, 0);
    AF(o, s32, 0x40) = (out.y >> 3) + AF(o, s16, 0x2A) + AF(b, s16, 2);
    AF(o, s32, 0x44) = (out.z >> 3) + AF(o, s16, 0x2C) + AF(b, s16, 4);
}

void func_sc03_029_8017FC50(StageActor *arg0) {
    s32 (*var_v0)(void *);
    u16 temp_v0;

    if (arg0->hitState & 1) {
        func_sc03_029_8017FF7C();
    }
    func_sc03_029_801800D0((s32) arg0);
    temp_v0 = arg0->stateCount;
    if (temp_v0 == 0) {
        var_v0 = D_sc03_029_8018B754[arg0->state];
    } else {
        var_v0 = D_sc03_029_8018B768[temp_v0];
    }
    var_v0(arg0);
}

void ToughEnemyInit(StageActor *arg0) {
    if ((FindOtherActorByKind(arg0, 0x95) != 0) || (GetFlag(0x9D) & 0xFF)) {
        RejectSpawn(arg0);
        return;
    }
    if (SetupActor(arg0, (s32) &D_sc03_029_8018B720) != 0) {
        SpawnShadow(arg0);
        SetScript(arg0, (s32) &D_sc03_029_80187B3C);
        arg0->state = 1;
        arg0->stateCount = 0;
    }
}

void func_sc03_029_8017FD74(StageActor *arg0) {
    arg0->state = 2;
    InitMime((s32) &D_sc03_029_801D9740, (s32) &D_sc03_029_8018B690, D_sc03_029_801ADB78);
}

void func_sc03_029_8017FDB4(s32 arg0) {
    if (DistSqToTarget(arg0) <= 0x11000) {
        AF(arg0, s16, 2) = 3;
        return;
    }
    StepMime((s32) &D_sc03_029_801D9740);
}

void func_sc03_029_8017FE08(StageActor *arg0) {
    AF(arg0, s16, 2) = 4;
    InitMime((s32) &D_sc03_029_801D9740, (s32) &D_sc03_029_8018B6E8, D_sc03_029_801ADB78);
    arg0->timer = 0x1E;
    arg0->message = 0;
}

void func_sc03_029_8017FE60(u8 *o) {
    s32 i;

    if (AF(o, s16, 0xAA) == 0 && AF(o, s32, 0x1C) < 11 && AF(o, s32, 0xDC) == 0) {
        for (i = 0; i < 12; i += 2) {
            ActorSegmentDamagesPlayer(o, &D_sc03_029_8018B774[i], &D_sc03_029_8018B774[i + 1], 0x21);
        }
        AF(o, s32, 0xDC) ^= 1;
    }
    if (AF(o, s32, 0x1C) == 12) {
        PlaySoundId(0xAD3, 0);
    }
    if (TickTimer(o) != 0) {
        if (DistSqToTarget(o) > 0x7000) {
            AF(o, s16, 2) = 1;
            return;
        }
        AF(o, s32, 0x1C) = 0x1E;
        AF(o, s32, 0xDC) = 0;
    }
    StepMime(&D_sc03_029_801D9740);
}

void func_sc03_029_8017FF7C(u8 *o) {
    u8 *p;

    AF(o, u16, 0x5C) &= 0xFFFE;
    switch (AF(o, u16, 0x5E)) {
    case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8:
    case 11: case 12: case 16: case 19: case 20: case 21: case 22:
    case 23: case 24: case 25: case 26: case 29: case 32:
        AF(o, s16, 0x34) = 1;
        InitMime(&D_sc03_029_801D9740, &D_sc03_029_8018B6A8, D_sc03_029_801ADB78);
        AF(o, s32, 0x1C) = 0x20;
        UpdateModelZYX(o);
        break;
    case 30:
        AF(o, s16, 0xAA) = 0x100;
        AF(o, s16, 0xFC) = 0;
        break;
    case 31:
        p = AF(o, u8 *, 0x20);
        AF(o, s16, 0x34) = 2;
        AF(o, s32, 0x1C) = 0x10;
        AF(o, s16, 0xAA) = 0;
        AF(o, s16, 0x5C) = 0;
        AF(p, s16, 0x18) = AF(p, s16, 0x1C) = 0x400;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x200;
        AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
        AF(o, u16, 0x70) |= 0x8000;
        PlaySoundId(0x6A8, 0);
        break;
    }
}

void func_sc03_029_80180088(Mover *arg0) {
    if (TickTimer(arg0) != 0) {
        func_sc03_029_80180234(arg0);
    }
    StepMime((s32) &D_sc03_029_801D9740);
}

void func_sc03_029_801800D0(s32 arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xAA);
    if ((temp_v0 != 0) && ((u32) (temp_v0 - 0x10) < 0xE1U)) {
        if (AF(arg0, s16, 0xFC) == 0) {
            AF(&D_sc03_029_801D9750, u16, 0) = (u16) ((s32) (AF(AF(arg0, void *, 0x20), u16, 0x18) << 0x10) >> 0x11);
            AF(&D_sc03_029_801D9750, u16, 2) = (u16) ((s32) (AF(AF(arg0, void *, 0x20), u16, 0x1A) << 0x10) >> 0x11);
            D_sc03_029_801D9754 = (u16) ((s32) (AF(AF(arg0, void *, 0x20), u16, 0x1C) << 0x10) >> 0x11);
            AF(arg0, s16, 0xFC) = 1;
            return;
        }
        AF(AF(arg0, void *, 0x20), u16, 0x18) = (u16) AF(&D_sc03_029_801D9750, u16, 0);
        AF(AF(arg0, void *, 0x20), u16, 0x1A) = (u16) AF(&D_sc03_029_801D9750, u16, 2);
        AF(AF(arg0, void *, 0x20), u16, 0x1C) = (u16) D_sc03_029_801D9754;
    }
}

void func_sc03_029_801801AC(u8 *arg0) {
    s16 temp_v0;
    void *temp_a0;
    void *temp_v1;

    temp_a0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a0, s16, 0x18);
    if (temp_v0 < 0x1000) {
        AF(temp_a0, s16, 0x18) = (s16) (temp_v0 + 0x400);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x1C) = (u16) (AF(temp_v1, u16, 0x1C) + 0x400);
    }
    if (TickTimer((s32) arg0) != 0) {
        GiveItem(9);
        GainStat0FromActor((s32) arg0);
        ToughEnemyDie((s32) arg0);
    }
}

void func_sc03_029_80180234(s32 arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x5E) = 0;
}

void ToughEnemyDie(StageActor *arg0) {
    SpawnDef *temp_v1;

    if (!(arg0->param & 0x8000)) {
        temp_v1 = arg0->def;
        if ((temp_v1 != NULL) && ((s16)arg0->animFlags & 0x8000)) {
            temp_v1->flags = (u16) (temp_v1->flags & 0x7FFF);
        }
    }
    FreeActor(arg0);
    SetFlag(0x9D, 1);
}

void ToughEnemyHurt(u8 *o) {
    u8 *p;
    s32 k;

    PlaySoundId(0x526, 0);
    k = AF(o, u8, 0x5E);
    if (AF(o, s16, 0x60) != 0) {
        if (k == 0x1D) {
            AF(o, s16, 0x82) = 0;
            AF(o, s16, 0x7C) = AF(o, s16, 6);
            AF(o, s16, 0x7E) = AF(o, s16, 0xA);
            AF(o, s16, 0x80) = AF(o, s16, 0xE);
        }
        ShowDamage(o, AF(o, s16, 0x60));
        if (AF(o, u16, 0x82) & 1) {
            ShowDefeat(o);
            StartRumbleScript(&D_sc03_029_8018B8EC);
        }
    }
    AF(o, u16, 0x5C) &= 0xFFFE;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x14) = 0;
    AF(p, s16, 0x10) = 0;
    UpdateModelZYX(o);
    StopWithGravity(o);
    AF(o, u8, 0xC2) = 1;
    AF(o, s16, 0x98) = 0;
    AF(o, s32, 0x1C) = 0x10;
}

void func_sc03_029_801803B0(s32 arg0) {
    if ((MoveCollide(arg0) & 0xFF) == 2) {
        SetReactionStep(arg0, 0x12);
        return;
    }
    if (TickTimer(arg0) != 0) {
        EndReaction(arg0);
    }
}

void func_sc03_029_80180410(u8 *arg0) {
    AF(arg0, s16, 0x98) = 1;
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, u16, 0x5C) = 0x8A10;
    if (AF(arg0, s16, 0x76) < 0x320) {
        AF(arg0, s16, 0x76) = 0x384;
    }
}

void func_sc03_029_80180444(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, u8, 0xC2) = 0;
    SetLocalVelocity((s32) arg0, (s32) &D_sc03_029_8018B8CC);
    SetScript((s32) arg0, (s32) &D_sc03_029_801C0028);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u8, 0x109) = 0x28;
}

void func_sc03_029_801804A0(u8 *arg0) {
    s32 flags;
    s32 t;
    u8 *p;
    u8 *end;
    s32 found;
    u8 unused[0x10];

    switch (AF(arg0, u8, 0xC2)) {
    case 0:
        flags = MoveCollide(arg0);
        D_sc03_029_801D9758 = flags;
        if (flags & 0x2000) {
            if (flags & 0x1000) {
                sc03_029_hit(arg0);
                SetVar16(0xA, 0x3025);
                return;
            }
            SpawnKind1C(arg0, 1);
            AF(arg0, u8, 0xC2) = 1;
            AF(arg0, s32, 0x14) = -0xD0000;
            AF(arg0, s32, 0x1C) = 0;
        }
        if (++AF(arg0, s32, 0x1C) >= 0x78) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(arg0, s16, 2) = 3;
            AF(arg0, s32, 0x1C) = 2;
            AF(arg0, s16, 0xFC) = 0x3C;
            AF(arg0, u16, 6) = D_sc03_029_8018B8E4;
            AF(arg0, u16, 0xA) = D_sc03_029_8018B8E6;
            AF(arg0, u16, 0xE) = D_sc03_029_8018B8E8;
            SnapToGround(arg0);
            AF(arg0, u16, 0x5C) = 0x8A10;
            if (AF(arg0, s16, 0x76) < 0x320) {
                AF(arg0, s16, 0x76) = 0x384;
            }
            SetVar16(0xA, 0x3025);
        }
        break;
    case 1:
        D_sc03_029_801D975C = AF(arg0, s32, 0x14);
        flags = MoveCollide(arg0);
        D_sc03_029_801D9758 = flags;
        if (flags & 0x2000) {
            if (flags & 0x1000) {
                sc03_029_hit(arg0);
                SetVar16(0xA, 0x3025);
                return;
            }
            SpawnKind1C(arg0, 1);
            flags = -D_sc03_029_801D975C;
            AF(arg0, u8, 0xC2) = 2;
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, s32, 0x14) = flags;
        }
        if (++AF(arg0, s32, 0x1C) >= 0x28) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
            AF(arg0, s16, 2) = 3;
            AF(arg0, s32, 0x1C) = 2;
            AF(arg0, s16, 0xFC) = 0x3C;
            AF(arg0, u16, 6) = D_sc03_029_8018B8E4;
            AF(arg0, u16, 0xA) = D_sc03_029_8018B8E6;
            AF(arg0, u16, 0xE) = D_sc03_029_8018B8E8;
            SnapToGround(arg0);
            AF(arg0, u16, 0x5C) = 0x8A10;
            if (AF(arg0, s16, 0x76) < 0x320) {
                AF(arg0, s16, 0x76) = 0x384;
            }
            SetVar16(0xA, 0x3025);
        }
        break;
    case 2:
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 15 / 16;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 15 / 16;
        flags = MoveCollide(arg0);
        D_sc03_029_801D9758 = flags;
        if (flags & 0x2000) {
            if (flags & 0x1000) {
                sc03_029_hit(arg0);
                SetVar16(0xA, 0x3025);
                SetScript(arg0, &D_sc03_029_801C00D0);
            } else {
                if (++AF(arg0, s32, 0x1C) >= 0x11) {
                    EndReaction(arg0);
                    SetScript(arg0, &D_sc03_029_801C0200);
                    found = 0;
                    for (p = (u8 *) &g_Actors, end = p + 0x6480; p != end; p += 0x10C) {
                        if (*(u16 *) p == 0xF2 && DistSq(arg0 + 4, p + 4) < 0x4000) {
                            found = 1;
                            AF(arg0, s16, 2) = 2;
                            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = HeadingTo(arg0 + 4, p + 4);
                            AF(arg0, u8 *, 0xCC) = p;
                            SetScript(arg0, &D_sc03_029_801C03F0);
                            UpdateModelZYX(arg0);
                            SetLocalVelocityXZ(arg0, &D_sc03_029_8018B8C0);
                            AF(arg0, s16, 0x16) = -2;
                        }
                    }
                    if (!found) {
                        SnapToGround(arg0);
                        AF(arg0, s16, 2) = 1;
                    }
                    SetVar16(0xA, 0x3025);
                }
                if ((AF(arg0, s32, 0x1C) & 3) == 3) {
                    SpawnKind1C(arg0, 1);
                }
            }
        }
        break;
    }
    if (--AF(arg0, u8, 0x109) == 0) {
        SetVar16(0xA, 0x3025);
    }
}

void func_sc03_029_80180904(StageActor *o) {
    o->shrinkTimer = 0;
    o->hitState = 0;
    o->model->scale.vx = 0x1800;
    o->model->scale.vz = 0x1800;
    o->model->scale.vy = 0x100;
    o->model->flags |= 0x10;
    o->stateCount = 0;
    o->timer = 0x1E;
    o->animTimer = 0;
    PlaySoundId(0x526, 0);
    o->hitPos[0] = o->pos[0].h.i;
    o->hitPos[1] = o->pos[1].h.i;
    o->hitPos[2] = o->pos[2].h.i;
    ShowDamage(o, 0xA);
}

void func_sc03_029_801809A4(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (--AF(o, s32, 0x1C) & 2) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1600;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1600;
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x400;
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1800;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1800;
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x100;
        }
        if (AF(o, s32, 0x1C) == 0) {
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFFEF;
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1000;
            AF(AF(o, u8 *, 0x20), s16, 0x1C) = 0x1000;
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x1000;
            AF(o, u16, 0x34)++;
            AF(o, s16, 0xA) -= 0x40;
            StopWithGravity(o);
        }
        break;
    case 2:
        if (MoveCollide(o) != 0) {
            AF(o, s16, 0x98) = 1;
            AF(o, u8, 0xC1) = 0;
            AF(o, s32, 0x1C) = 1;
            AF(o, u16, 0x5C) = 0x8A10;
            if (AF(o, s16, 0x76) < 800) {
                AF(o, s16, 0x76) = 900;
            }
        }
        break;
    }
}

void func_sc03_029_80180B44(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) & 0x7FFFFFFF);
    AF(arg0, s16, 0xFC) = 0;
    SetVar16(0xA, 0x3065);
}

void OpeningWalkerInit(u8 *arg0) {
    u8 *p;
    u8 *end;
    s32 found;

    if (SetupActor(arg0, &D_sc03_029_8018B7E4) == 0) {
        return;
    }
    if (GetProgress() >= 0x14U || !(GetFlag(0xDF) & 0xFF)) {
        FreeActor(arg0);
        return;
    }
    AF(arg0, u8, 0xC0) = 1;
    AF(arg0, s32, 0xB4) = -0x808A;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u8 *, 0xBC) = &D_sc03_029_8018B818;
    AF(arg0, s32, 0xC4) |= 3;
    StopWithGravity(arg0);
    SetScript(arg0, &D_sc03_029_801C01A8);
    SnapToGround(arg0);
    SpawnShadow(arg0);
    found = 0;
    for (p = (u8 *) &g_Actors, end = p + 0x6480; p != end; p += 0x10C) {
        if (*(u16 *) p == 0xF2 && DistSq(arg0 + 4, p + 4) < 0x4000) {
            found = 1;
            AF(arg0, s16, 2) = 2;
            AF(AF(arg0, u8 *, 0x20), s16, 0x12) = HeadingTo(arg0 + 4, p + 4);
            AF(arg0, u8 *, 0xCC) = p;
            SetScript(arg0, &D_sc03_029_801C03F0);
            UpdateModelZYX(arg0);
            SetLocalVelocityXZ(arg0, &D_sc03_029_8018B8C0);
            AF(arg0, s16, 0x16) = -2;
        }
    }
    if (!found) {
        SnapToGround(arg0);
        AF(arg0, s16, 2) = 1;
    }
    SetVar16(0xA, 0x3025);
    AF(arg0, s16, 0x10A) = 1;
}

void RunnerMeet(u8 *o) {
    AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingTo(o + 4, AF(o, u8 *, 0xCC) + 4);
    SetScript(o, &D_sc03_029_801C02A8);
    AF(o, s16, 0x98) = 0;
    if (--AF(o, s32, 0x1C) == 0) {
        AF(AF(o, u8 *, 0x20), u16, 0x10) ^= 0xFE0;
        AF(o, s32, 0x1C) = 2;
    }
    switch (AF(o, s16, 0x10A)) {
    case 0:
        break;
    case 1:
        if (DistSqToPlayer(o) < 0x1001) {
            StartEvent(o, &D_sc03_029_8018B878);
            TakePlayerControlNoStop();
            AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToPlayer(o);
            AF(o, s16, 0x10A) = 2;
        }
        break;
    case 2:
        if (UpdateScript(o) == 1) {
            EndEvent(o);
            AF(o, s16, 0x10A) = 0;
            AF(o, u16, 0x5C) |= 0x200;
        }
        if (AF(o, u16, 0x72) & 0x4000) {
            SetScript(o, &D_sc03_029_801C0178);
            PlaySoundAtActor(o, 0x525, 0);
        }
        break;
    }
}

void func_sc03_029_80180E94(StageActor *arg0) {
    s16 temp_v0;
    ModelObj *temp_a0;

    temp_v0 = arg0->unkFC;
    if (temp_v0 != 0) {
        temp_a0 = arg0->model;
        arg0->unkFC = (s16) (temp_v0 - 1);
        temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 ^ 0x80000000);
    }
    D_sc03_029_8018B8FC[arg0->state](arg0, arg0);
}

void func_sc03_029_80180F00(StageActor *arg0) {
    D_sc03_029_8018B92C[arg0->state]();
}

void func_sc03_029_80180F3C(u8 *o) {
    u8 *p = SpawnProp(0x2B);
    s32 v;
    if (p != 0) {
        v = (AF(o, u16, 0x106) + 1) & 3;
        AF(o, u16, 0x106) = v;
        AF(p, s32, 0x2C) = v;
        AF(p, s32, 4) = AF(o, s32, 4);
        AF(p, s32, 8) = AF(o, s32, 8);
        AF(p, s32, 0xC) = AF(o, s32, 0xC);
    }
}

void func_sc03_029_80180FB0(u8 *arg0) {
    D_sc03_029_8018B934[AF(arg0, u16, 2)]();
}

void func_sc03_029_80180FEC(StageActor *o) {
    if (o->animFlags & 0x4000) {
        switch (rand() & 3) {
        case 0:
            SetScript(o, &D_sc03_029_801C0178);
            PlaySoundAtActor(o, 0x525, 0);
            break;
        case 1:
            SetScript(o, &D_sc03_029_801C01A8);
            break;
        case 2:
            SetScript(o, &D_sc03_029_801C0178);
            break;
        case 3:
            SetScript(o, &D_sc03_029_801C01A8);
            break;
        }
    }
}

void func_sc03_029_801810BC(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = arg0 + 4;
    temp_s1 = AF(arg0, s32, 0xCC) + 4;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = HeadingTo(temp_s2, temp_s1, arg2);
    UpdateModelZYX((s32) arg0);
    SetLocalVelocityXZ((s32) arg0, (s32) &D_sc03_029_8018B8C0);
    if (MoveCollide((s32) arg0) & 0xA000) {
        AF(arg0, u16, 0x16) = (u16) (AF(arg0, u16, 0x16) - 2);
    }
    if (DistSq(temp_s2, temp_s1) < 0x900) {
        SnapToGround((s32) arg0);
        AF(arg0, s16, 2) = 3;
        SetScript((s32) arg0, (s32) &D_sc03_029_801C02A8);
        AF(arg0, s16, 0x98) = 0;
        AF(arg0, s32, 0x1C) = 2;
    }
}

void func_sc03_029_8018118C(u8 *o) {
    s32 t;

    AF(AF(o, u8 *, 0x20), u16, 0x10) -= 0x30;
    AF(o, u16, 0xA) += 2;
    t = AF(o, s32, 0x1C) - 1;
    AF(o, s32, 0x1C) = t;
    if ((t & 7) == 0) {
        func_sc03_029_80180F3C(o);
    }
    if (AF(o, s32, 0x1C) == 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 2;
        AF(o, s16, 0xFC) = 0x3C;
        AF(o, u16, 6) = D_sc03_029_8018B8E4;
        AF(o, u16, 0xA) = D_sc03_029_8018B8E6;
        AF(o, u16, 0xE) = D_sc03_029_8018B8E8;
        SnapToGround(o);
        AF(o, u16, 0x5C) = 0x8A10;
        if (AF(o, s16, 0x76) < 0x320) {
            AF(o, s16, 0x76) = 0x384;
        }
        SetVar16(0xA, 0x3025);
    }
}

void func_sc03_029_8018127C(void) {
}

void func_sc03_029_80181284(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_029_8018B910);
    SetScript((s32) arg0, (s32) &D_sc03_029_8018B91C);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x5C) = 0x100;
    SnapToGround((s32) arg0);
    AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x1800;
    AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x1800;
    AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x1800;
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
}

void func_sc03_029_80181338(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_029_801D9760;
    func_8001CD50(temp_s1, (s32) temp_s0);
    AF(temp_s1, s16, 0x1E) = 0xCCC;
    AF(temp_s1, s16, 0x10) = 0x400;
    AF(temp_s1, s16, 0x1A) = 0;
    AF(temp_s1, s16, 0x18) = 0;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x50000000);
    SetShapeCircle((s32) temp_s0, 0x80);
    AF(temp_s0, u8, 2) = 0xFF;
    AF(temp_s0, u8, 1) = 0xFF;
    AF(temp_s0, u8, 0) = 0xFF;
    AF(temp_s0, u8, 5) = 0x40;
    AF(temp_s0, u8, 4) = 0x40;
    AF(temp_s0, u8, 6) = 0x80;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_029_801813FC(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_029_801D9760;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x1C) = temp_a1;
    if (temp_a1 != -1) {
        temp_v0 = (0x10 - temp_a1) << 8;
        AF(temp_v1, s16, 0x1A) = temp_v0;
        AF(temp_v1, s16, 0x18) = temp_v0;
        var_v0 = AF(arg0, s32, 0x1C) * 0xFF;
        if (var_v0 < 0) {
            var_v0 += 0xF;
        }
        temp_v0_2 = (u32) var_v0 >> 4;
        AF(temp_a2, u8, 2) = (s8) temp_v0_2;
        AF(temp_a2, u8, 1) = (s8) temp_v0_2;
        AF(temp_a2, u8, 0) = (s8) temp_v0_2;
        temp_v0_3 = AF(arg0, s32, 0x1C) * 4;
        AF(temp_a2, u8, 5) = temp_v0_3;
        AF(temp_a2, u8, 4) = temp_v0_3;
        AF(temp_a2, u8, 6) = (s8) (AF(arg0, s32, 0x1C) * 8);
        return;
    }
    FreeProp((s32) arg0);
}

void func_sc03_029_801814B0(StageActor *arg0) {
    D_sc03_029_8018B944[arg0->state]();
}

void func_sc03_029_801814EC(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s0;

    var_s0 = GetVarCF(arg0, arg1, arg2, arg3);
    if (var_s0 & 0xFF) {
        do {
            SpawnActorArg(0x103, (var_s0 & 0xFF) - 1, arg0);
            var_s0 -= 1;
        } while (var_s0 & 0xFF);
    }
    NextState(arg0);
}

void func_sc03_029_80181554(void) {
}

void func_sc03_029_8018155C(StageActor *arg0) {
    D_sc03_029_8018B94C[arg0->state]();
}

void func_sc03_029_80181598(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc03_029_801D2038);
        temp_v0->pose = &D_sc03_029_8118B93C;
        func_sc03_029_80181708((s32) arg0);
        NextState((s32) arg0);
    }
}

void func_sc03_029_80181600(u8 *o) {
    B8 v = D_sc03_029_801D80B0;
    s32 n;

    n = GetVarCF() & 0xFF;
    if (AF(o, s16, 0x70) >= n) {
        StopWithGravity(o);
        PlaySoundId(0x580, 0);
        SetMoverTimer(o, 0x10);
        NextState(o);
    } else {
        func_sc03_029_80181708(o);
        if (!(D_800B99DA & 3)) {
            func_sc03_029_801817D8((s32)o, (SV8 *)&v);
        }
    }
}

void func_sc03_029_801816C8(s32 arg0) {
    MoveObject(arg0);
    if (TickTimer(arg0) != 0) {
        DespawnActor(arg0);
    }
}

void func_sc03_029_80181708(u8 *arg0) {
    SV8 c;
    u8 *p;
    u8 *s;

    p = AF(arg0, u8 *, 0x20);
    s = g_PlayerModel;
    AF(p, V16, 0x34) = AF(s, V16, 0x34);
    AF(p, V16, 0x44) = AF(s, V16, 0x44);
    FaceHelper(arg0, D_sc03_029_8018B9A4[GetVarCF() & 0xFF] + AF(arg0, s16, 0x70) * 8, &c);
    AF(arg0, s16, 6) = c.x;
    AF(arg0, s16, 0xA) = c.y;
    AF(arg0, s16, 0xE) = c.z;
    SyncModelPos(arg0);
}

void func_sc03_029_801817D8(s32 arg0, SV8 *arg1) {
    SV8 v;

    v.x = AF(arg0, s16, 6);
    v.y = AF(arg0, s16, 0xA);
    v.z = AF(arg0, s16, 0xE);
    v.x += arg1->x;
    v.y += arg1->y;
    v.z += arg1->z;
}

void func_sc03_029_80181838(StageActor *arg0) {
    D_sc03_029_8018B9B8[arg0->state]();
}

void func_sc03_029_80181874(void) {
}

void func_sc03_029_8018187C(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        NextState(arg0);
    }
}

void func_sc03_029_801818B4(StageActor *arg0) {
    if (func_800D0CE0() != 0) {
        DespawnActor(arg0);
    }
}

void StartKind116(void) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x116);
    if (temp_v0 != 0) {
        func_800D0C48(1);
        SetState(temp_v0, 1);
        SetMoverTimer(temp_v0, 0x30);
    }
}

void func_sc03_029_80181940(u8 *arg0) {
    D_sc03_029_8018BB08[AF(arg0, u16, 2)]();
}

void func_sc03_029_8018197C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_s1;

    temp_s1 = (AF(arg0, s32, 0x2C) * 0xC) + &D_sc03_029_8018BAF0;
    if (AF(temp_s1, u16, 6) != 0) {
        AF(arg0, s32, 0x1C) = (s32) (rand((s32) arg0, arg1, arg2, arg3) % (s32) AF(temp_s1, u16, 6));
    } else {
        AF(arg0, s32, 0x1C) = 0;
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_029_80181A30(u8 *arg0) {
    u8 *obj;
    u8 *ent;
    V4F20 range;
    V4F20 off;
    s32 r;

    obj = AF(arg0, u8 *, 0x20);
    if (--AF(arg0, s32, 0x1C) == -1) {
        InitSpriteKind3(obj, &D_sc03_029_8018B9C4, 0, 0);
        AF(obj, u8, 0x27) = 0x9C;
        AF(obj, s16, 0x1A) = 0x4000;
        AF(obj, s16, 0x18) = 0x4000;
        AF(obj, s32, 4) |= 0x50000040;
        ent = (AF(arg0, s32, 0x2C) * 0xC) + &D_sc03_029_8018BAF0;
        StartSpriteAnim(obj, arg0 + 0x24, AF(ent, s32, 0));
        range = *(V4F20 *)(AF(ent, u8 *, 8) + 0x10);
        r = rand();
        off.vx = r % (range.vx + 1);
        if (r & 1) off.vx = -off.vx;
        off.vy = r % (range.vy + 1);
        if (r & 1) off.vy = -off.vy;
        off.vz = r % (range.vz + 1);
        if (r & 1) off.vz = -off.vz;
        AF(arg0, s32, 0x10) = AF(AF(ent, u8 *, 8), s32, 0) + off.vx;
        AF(arg0, s32, 0x14) = AF(AF(ent, u8 *, 8), s32, 4) + off.vy;
        AF(arg0, s32, 0x18) = AF(AF(ent, u8 *, 8), s32, 8) + off.vz;
        range = *(V4F20 *)(AF(ent, u8 *, 8) + 0x30);
        r = rand();
        off.vx = r % (range.vx + 1);
        if (r & 1) off.vx = -off.vx;
        off.vy = r % (range.vy + 1);
        if (r & 1) off.vy = -off.vy;
        off.vz = r % (range.vz + 1);
        if (r & 1) off.vz = -off.vz;
        AF(arg0, s32, 0x2C) = AF(AF(ent, u8 *, 8), s32, 0x20) + off.vx;
        AF(arg0, s32, 0x30) = AF(AF(ent, u8 *, 8), s32, 0x24) + off.vy;
        AF(arg0, s32, 0x34) = AF(AF(ent, u8 *, 8), s32, 0x28) + off.vz;
        AF(arg0, s32, 0x1C) = AF(ent, u16, 4);
        AF(arg0, u16, 2)++;
    }
}

void func_sc03_029_80181D9C(u8 *arg0) {
    u8 *p;

    p = AF(arg0, u8 *, 0x20);
    AF(arg0, s32, 0x10) += AF(arg0, s32, 0x2C);
    AF(arg0, s32, 0x14) += AF(arg0, s32, 0x30);
    AF(arg0, s32, 0x18) += AF(arg0, s32, 0x34);
    MoveProp(arg0);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) -= 0x100;
    if (StepSpriteAnim(p, arg0 + 0x24) != 0 || (AF(arg0, s32, 0x1C) != 0 && --AF(arg0, s32, 0x1C) == 0)) {
        FreeProp(arg0);
    }
}

void func_sc03_029_80181E44(StageActor *arg0) {
    D_sc03_029_8018BBBC[arg0->state]();
}

void func_sc03_029_80181E80(StageActor *arg0, s32 arg1) {
    NextState(arg0, arg1);
}

void func_sc03_029_80181EA0(StageActor *o) {
    SV8 sv;
    s32 flag;
    u8 *p;
    s32 *m;

    p = D_sc03_029_8018BBA4[o->unkFC];
    m = D_800AF648;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    PosToSVec((u8 *)o + 4, &sv);
    gte_ldv0(&sv);
    gte_rtps();
    gte_stsxy(&sv);
    gte_stflg(&flag);
    if (-D_800AF7BE / 2 < sv.y && sv.y < (D_800AF7BE >> 1)) {
        if (-D_800AF7BC / 2 < sv.x && sv.x < (D_800AF7BC >> 1) && flag >= 0) {
            if (o->timer == 0) {
                while (AF(p, s16, 6) != 0xFF) {
                    func_sc03_029_80182050(o, p);
                    p += 8;
                }
                o->timer = (s32)o->message;
            }
            o->timer--;
        }
    }
    func_sc03_029_801820E4(o);
}

void func_sc03_029_80182050(u8 *o, s16 *d) {
    SV8 v;
    u8 *p;
    v.x = AF(o, s16, 6);
    v.y = AF(o, s16, 0xA);
    v.z = AF(o, s16, 0xE);
    v.x += d[0];
    v.y += d[1];
    v.z += d[2];
    p = (u8 *) SpawnPropAt(0x3D, &v);
    if (p != 0) {
        AF(p, s32, 0x2C) = d[3];
    }
}

void func_sc03_029_801820E4(u8 *o) {
    SV8 v;
    SV8 *p;
    Player *w;
    s16 d;
    s16 vol;

    w = &g_Player;
    p = &D_sc03_029_8018BBAC[AF(o, s16, 0xFC)];
    if (p->pad != 0) {
        PosToSVec((u8 *)w + 4, &v);
        d = SVecDist(&v, p);
        if (d < 0xC00) {
            vol = (0xC00 - d) * 0x7F / 0xC00;
            if (vol < 0) {
                vol = 0;
            }
            if (vol >= 0x80) {
                vol = 0x7F;
            }
            PlaySoundId((u16) p->pad, (u16) (vol | 0x1000));
        }
    }
}

void func_sc03_029_801821B8(StageActor *arg0) {
    D_sc03_029_8018BC04[arg0->state]();
}

s32 func_sc03_029_801821F4(u8 *arg0, s32 *t) {
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

void func_sc03_029_8018223C(StageActor *arg0) {
    s32 temp_s1;
    ModelObj *temp_v0;

    temp_s1 = GetProgress();
    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, 0);
    AF(arg0, s32 *, 0x58) = (s32 *) &D_sc03_029_8018BBF4;
    arg0->hitState = 0x80;
    arg0->state = (u16) (arg0->state + 1);
    if (temp_s1 >= 0x384) {
        arg0->message = func_sc03_029_801821F4(arg0, &D_sc03_029_8018BBE4);
    } else if (temp_s1 >= 0x258) {
        arg0->message = func_sc03_029_801821F4(arg0, &D_sc03_029_8018BBD4);
    } else if (temp_s1 >= 0xC8) {
        arg0->message = func_sc03_029_801821F4(arg0, &D_sc03_029_8018BBC4);
    }
}

void func_sc03_029_80182308(void) {
}

void func_sc03_029_80182310(void) {
    D_8012704C = 1;
}

void func_sc03_029_80182324(StageActor *arg0) {
    D_sc03_029_8018BC1C[arg0->state]();
}

void func_sc03_029_80182360(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    arg0->state = 1;
    arg0->hitState = 0x40;
    AF(arg0, s32 *, 0x58) = &D_sc03_029_8018BC0C;
}

void func_sc03_029_801823C8(void) {
}

void func_sc03_029_801823D0(void) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;

    UpdateClockTint();
    func_sc03_029_8018246C();
    if (D_sc03_029_801D99C0 != 1) {
        if (D_sc03_029_801D99C0 < 2) {
            var_a0 = 0x617;
            if (D_sc03_029_801D99C0 == 0) {
                var_a1 = 0;
                goto block_6;
            }
        }
    } else {
        temp_v0 = D_sc03_029_801D99BC + 1;
        D_sc03_029_801D99BC = temp_v0;
        var_a0 = 0xD;
        if (temp_v0 >= 0x97) {
            var_a1 = 0x617;
block_6:
            PlaySoundId(var_a0, var_a1);
            D_sc03_029_801D99C0 += 1;
        }
    }
}

void func_sc03_029_8018246C(void) {
    u32 i;

    for (i = 0; i < 0x20; i++) {
        D_sc03_029_801D9864[i] = D_sc03_029_8018BC24[((D_sc03_029_801D9860 >> 8) + i) & 0x1F] | 0x8000;
    }
    for (i = 0; i < 0x10; i++) {
        D_sc03_029_801D98A4[i] = D_sc03_029_8018BC64[((D_sc03_029_801D9860 >> 8) + i) & 0xF] | 0x8000;
    }
    QueueImage(&D_sc03_029_8018BC84);
    D_sc03_029_801D9860 += 0x100;
}

void func_sc03_029_80182544(StageActor *arg0) {
    D_sc03_029_8018BCBC[arg0->state]();
}

void VarPropInit(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc03_029_801C0B48);
    if ((GetVar(D_sc03_029_8018BCB4[((u16)arg0->param & 0xF)]) & 0xFF) != 3) {
        SpawnActorArg(0x15A, (s32) (s16) (u16)arg0->param, (s32) arg0);
    }
    arg0->state = 1;
    SetScript((s32) arg0, (s32) &D_sc03_029_80187B3C);
}

void func_sc03_029_80182628(void) {
}

void func_sc03_029_80182630(StageActor *arg0) {
    D_sc03_029_8018BCC4[arg0->state]();
}

void PairPropInit(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc03_029_801C0ED8);
    arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i - 0x42);
    SpawnActorArg(0x15B, 0, (s32) arg0);
    SpawnActorArg(0x15B, 1, (s32) arg0);
    arg0->state = 1;
    SetScript((s32) arg0, (s32) &D_sc03_029_80187B3C);
}

void func_sc03_029_80182700(void) {
}

void func_sc03_029_80182708(StageActor *arg0) {
    D_sc03_029_8018BCFC[arg0->state]();
}

void func_sc03_029_80182744(StageActor *arg0) {
    ModelObj *t;

    t = AllocActorModel();
    arg0->model = t;
    if (t == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(t, D_sc03_029_8018BCCC[(u16)arg0->param & 0xF]);
    arg0->state = 1;
    AF(arg0, S12, 0xFC) = D_sc03_029_8018BCD8[(u16)arg0->param & 0xF];
    arg0->ext0 = (u8 *)arg0 + 0xFC;
    AF(arg0, s16, 0xD0) = 1;
    arg0->workD4 = 0;
    AF(arg0, s16, 0xD8) = -2;
    arg0->work108 = arg0->parent->id;
    SetScript(arg0, (u8 *)arg0 + 0xCC);
}

void func_sc03_029_80182858(void) {
}

void func_sc03_029_80182860(arg0)
    u8 *arg0;
{
    AF(arg0, u16, 2) = 2;
    StartEvent((s32) arg0, (s32) &D_sc03_029_8018BD1C);
}

void func_sc03_029_8018288C(StageActor *arg0) {
    D_sc03_029_8018BD9C[arg0->state]();
}

void func_sc03_029_801828C8(void) {
    if (g_PlayerX < 0xB60) {
        func_sc03_029_80182860();
    }
}

void func_sc03_029_801828F8(s32 arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        AF(arg0, s16, 2) = 1;
        PlaceObject(arg0, (s32) &D_sc03_029_8018BD04);
        SetScript(arg0, (s32) &D_sc03_029_801D3318);
    }
}

void func_sc03_029_80182958(u8 *arg0) {
    s32 temp_v0;

    if (((u32) (GetProgress() - 0xD2) >= 0x14U) || (temp_v0 = AllocActorModel(), AF(arg0, s32, 0x20) = temp_v0, (temp_v0 == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc03_029_801D5BC8);
    AF(arg0, s16, 2) = 1;
    PlaceObject((s32) arg0, (s32) &D_sc03_029_8018BD04);
    SetScript((s32) arg0, (s32) &D_sc03_029_801D3318);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
}


typedef struct { s16 x, y, z, w, f, g, h, i; s32 j; } Arg15DC;
extern u8 D_sc03_029_801C91A4;
extern s32 D_sc03_029_801C93DC;

s32 func_sc03_029_801829F4(void) {
    if (D_8012704C == 0) {
        return 0x18;
    }
    return 0x2B;
}

void func_sc03_029_80182A14(StageActor *arg0) {
    D_sc03_029_8018BE04[arg0->state]();
}

void func_sc03_029_80182A50(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_029_8018BDB8) != 0) {
        arg0->reactive = 1;
        arg0->state = 1;
        SetScript(arg0, (s32) &D_sc03_029_80187B3C);
        SpawnTalkMarker(arg0, (s32) &func_sc03_029_80182B34);
    }
}

void func_sc03_029_80182AB4(void) {
}

void func_sc03_029_80182ABC(StageActor *arg0) {
    RunScript(arg0, (s32) &D_sc03_029_8018BDEC);
    arg0->state = 3;
}

void func_sc03_029_80182AF4(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

s32 *func_sc03_029_80182B34(u8 *arg0) {
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

void func_sc03_029_80182B90(StageActor *arg0) {
    D_sc03_029_801C4250[arg0->state]();
}

void EarlyActorInit(StageActor *arg0) {
    ModelObj *temp_a0;

    if (((u16)arg0->param & 1) && !(GetFlag(0xE7) & 0xFF) && (GetProgress() < 0x46U)) {
        RejectSpawn((s32) arg0);
        return;
    }
    if (SetupActor((s32) arg0, (s32) &D_sc03_029_801C4200) != 0) {
        SetScript((s32) arg0, (s32) &D_sc03_029_801C4240);
        temp_a0 = arg0->model;
        temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x40000000);
        arg0->timer = 0;
        AF(arg0, s16, 0xE0) = 1;
        arg0->unkFC = 0;
        arg0->targetClass = 0xE;
        arg0->state = 1;
        arg0->message = (s32) ((s32)arg0->message | 1);
    }
}

void func_sc03_029_80182CA4(StageActor *o) {
    u32 f = (u32)o->message;
    if (f & 1) {
        if (o->unk74 != 0) {
            o->unkFC = HeadingToPlayer() + 0x400;
            AF(o, s16, 0xE0) = 0x10;
            AF(o, u32, 0xDC) &= ~1;
        }
    } else if (o->unk74 == 0) {
        o->message = f | 1;
    }
    func_sc03_029_80182D70(o);
    CarryPlayer(o);
    if ((o->timer = (o->timer + 1) & 0x1F) == 0) {
        if (--AF(o, s16, 0xE0) == 0) {
            AF(o, s16, 0xE0) = 1;
        }
    }
}

void func_sc03_029_80182D70(u8 *o) {
    WMtx m;
    V4 v;
    V4 out;

    v.x = AF(o, s16, 0xE0) * rcos(AF(o, s32, 0x1C) << 7);
    v.y = AF(o, s16, 0xE0) * rsin(AF(o, s32, 0x1C) << 7);
    v.z = 0;
    m = GsIDMATRIX;
    RotMatrixY(AF(o, s16, 0xFC), &m);
    ApplyMatrixLV(&m, &v, &out);
    AF(o, s16, 6) = AF(o, u16, 0x88) + (out.x >> 12);
    AF(o, s16, 0xA) = AF(o, u16, 0x8A) + (out.y >> 12);
    AF(o, s16, 0xE) = AF(o, u16, 0x8C) + (out.z >> 12);
}

void func_sc03_029_80182E84(u8 *arg0) {
    D_sc03_029_801C48F0[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xFE) = (u16) (AF(arg0, u16, 0xFE) + 0x80);
        if (IsActorFar((s32) arg0) == 1) {
            AF(arg0, s16, 0x100) = 1;
            func_sc03_029_80184344((s32) arg0);
        }
    }
}

void func_sc03_029_80182F08(StageActor *arg0) {
    ModelObj *temp_a0;

    if (SetupActor(arg0, (s32) &D_sc03_029_801C473C) != 0) {
        arg0->reactive = 1;
        arg0->params = &D_sc03_029_801C4850;
        arg0->reactMask = -0x20AD;
        arg0->workE0 = 0;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 1);
        SetScript(arg0, (s32) &D_sc03_029_801C7AA4);
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

void func_sc03_029_80182FC4(u8 *o) {
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

void func_sc03_029_801830B8(s32 arg0, s32 arg1) {
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

void func_sc03_029_80183154(StageActor *arg0, s32 arg1, s32 arg2) {
    arg0->state = 4;
    arg0->hitState = 0xAA10;
    SetScript((s32) arg0, (s32) &D_sc03_029_801C7AA4, arg2);
    arg0->timer = 0x20;
    if (arg0->workE0 != 0) {
        arg0->workE0 = 0;
        arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i + 0x30);
    }
}

void func_sc03_029_801831B4(u8 *arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 0x40);
    if ((func_sc03_029_801844B0() != 1) && (TickTimer((s32) arg0) != 0)) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc03_029_80183214(u8 *arg0) {
    AF(arg0, s16, 2) = 6;
    StopWithGravity((s32) arg0);
    SetForwardVelocity((s32) arg0, -0x18000);
    SetScript((s32) arg0, (s32) &D_sc03_029_801C7AA4);
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc03_029_80183270(StageActor *arg0) {
    if ((func_sc03_029_801844B0() != 1) && (func_sc03_029_801841F8(arg0, (s32) &D_800D3918) == 0)) {
        arg0->state = 3;
    }
}

void func_sc03_029_801832C0(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    StopWithGravity((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_029_801C7B9C);
    AF(arg0, s32, 0x1C) = 0x24;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc03_029_8018330C(u8 *arg0) {
    s32 v;
    s32 r;

    v = TurnStepToTarget(arg0, 8);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += v;
    if (AF(arg0, s32, 0x1C) < 0x19) {
        SetForwardVelocity(arg0, -0x40000);
        r = func_sc03_029_801841F8(arg0, &D_800D3918);
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

void func_sc03_029_801833BC(StageActor *arg0) {
    ModelObj *temp_v1;

    temp_v1 = arg0->model;
    arg0->state = 0xA;
    arg0->hitState = 0;
    arg0->stateCount = 0;
    arg0->timer = 8;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
}

void func_sc03_029_801833EC(u8 *o) {
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
            r = SpawnKind1CAt(&c);
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
            func_sc03_029_80184008(o);
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

void func_sc03_029_80183600(u8 *arg0) {
    AF(arg0, s16, 2) = 0xC;
    StopWithGravity((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_029_801C7C74);
    AF(arg0, s32, 0x1C) = 0x1A;
    AF(arg0, s16, 0xE6) = 0;
    StopWithGravity((s32) arg0);
}

void func_sc03_029_80183654(u8 *arg0) {
    s32 r;
    u8 *p;
    s32 s;

    r = TurnStepToTarget(arg0, 8);
    p = AF(arg0, u8 *, 0x20);
    s = AF(p, u16, 0x12) + r;
    AF(p, u16, 0x12) = s;
    SetForwardVelocity(arg0, -0x40000, s);
    if (func_sc03_029_801841F8(arg0, &D_800D3918) != -1) {
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

void func_sc03_029_801836FC(StageActor *arg0) {
    arg0->state = 0xE;
    SetScript((s32) arg0, (s32) &D_sc03_029_801C7D4C);
    arg0->timer = 0x5A;
    AF(arg0, s16, 0xDC) = 0;
    arg0->workFE = 0;
}

void func_sc03_029_80183744(u8 *arg0) {
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
        func_sc03_029_80183E70(arg0);
    }
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_029_80183818(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 2) = 0x10;
    UpdateModelZYX((s32) arg0, arg1);
    StopWithGravity((s32) arg0);
    SetForwardVelocity((s32) arg0, -0x30000);
    SetScript((s32) arg0, (s32) &D_sc03_029_801C7B9C);
    AF(arg0, s32, 0x1C) = 0x1A;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc03_029_80183878(u8 *arg0, s32 arg1) {
    if (AF(arg0, s16, 0xAA) <= 0) {
        AF(arg0, s16, 2) = 3;
        return;
    }
    if (TickTimer((s32) arg0, arg1) != 0) {
        SetScript((s32) arg0, (s32) &D_sc03_029_801C7B9C);
        AF(arg0, s32, 0x1C) = 0x1A;
    }
    func_sc03_029_801841F8((s32) arg0, (s32) &D_800D3918);
}

void func_sc03_029_801838EC(u8 *arg0) {
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

void func_sc03_029_80183928(Mover *arg0) {
    arg0->state = 0xF;
    arg0->model->rot.vy = (s16) ((HeadingToTarget((s32) arg0) + 0x800) & 0xFFF);
}

void func_sc03_029_80183968(StageActor *arg0) {
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
    SetScript((s32) arg0, (s32) &D_sc03_029_801C81BC);
}

void func_sc03_029_801839D8(u8 *arg0) {
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
        SetLocalVelocity((s32) arg0, (s32) &D_sc03_029_801C4934);
        var_v0 = 0xCC;
    } else {
        SetLocalVelocity((s32) arg0, (s32) &D_sc03_029_801C4940);
        var_v0 = 0x100;
    }
    AF(arg0, s16, 0xDE) = var_v0;
    SetScript((s32) arg0, (s32) &D_sc03_029_801C823C);
}

void func_sc03_029_80183AC0(u8 *o) {
    s32 r;

    if (AF(o, u8, 0xC2) == 0) {
        DamageActorsNear(o, 0x50, AF(AF(o, u8 *, 0x20), s16, 0x12) + 0x800, 0x1D);
        AF(AF(o, u8 *, 0x20), u16, 0x10) -= AF(o, u16, 0xDE);
        if (++AF(o, s32, 0x1C) >= 0x29) {
            SetReactionStep(o, 0xD);
            return;
        }
        r = MoveCollidePassableAt(o, &D_sc03_029_801C494C);
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

void func_sc03_029_80183C7C(StageActor *arg0) {
    arg0->hitState = 0;
    arg0->model->rot.vx = 0;
    arg0->stateCount = 0;
    HideModel();
    SetScript((s32) arg0, (s32) &D_sc03_029_801C4840);
}

void func_sc03_029_80183CC4(StageActor *o) {
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
            func_sc03_029_80184344(o);
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

void func_sc03_029_80183E70(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;

    gte_SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    gte_SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc03_029_801C4830, &a, &f);
    RotTransSV(&D_sc03_029_801C4838, &b, &f);
    func_sc03_029_80183F70(AF(AF(o, u8 *, 0x20), s16, 0x12), &a, AF(o, s16, 0xDC));
    func_sc03_029_80183F70(AF(AF(o, u8 *, 0x20), s16, 0x12), &b, AF(o, s16, 0xDC));
    if (++AF(o, s16, 0xDC) >= 3) {
        AF(o, s16, 0xDC) = 2;
    }
}

s32 func_sc03_029_80183F70(s32 arg0, s32 arg1, s32 arg2) {
    u8 *o;
    u8 *a;
    s16 h = arg0;

    o = (u8 *)SpawnPropAt(0x17, arg1);
    if (o == 0) {
        return 0;
    }
    a = AF(o, u8 *, 0x20);
    func_8001CD50(a, D_sc03_029_801C4770[arg2]);
    AF(a, s16, 0x1E) = 0xC00;
    AF(a, s16, 0x1A) = 0x1000;
    AF(a, s16, 0x18) = 0x1000;
    AF(a, s16, 0x12) = h;
    AF(a, s32, 4) |= 0x40000000;
    return (s32)o;
}

void func_sc03_029_80184008(u8 *o) {
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
    if (func_sc03_029_80184520(o) == 0) {
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
        if (func_sc03_029_80184580(&a, &b) == 1) {
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

s32 func_sc03_029_801841F8(u8 *o) {
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

void func_sc03_029_80184344(s32 arg0) {
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
                SetScript(arg0, (s32) &D_sc03_029_801C7AA4);
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

s32 func_sc03_029_801844B0(Mover *arg0) {
    s32 d = DistSqToTarget(arg0);

    if (d <= 0x2000 || (d <= 0x24000 && TargetInFront(arg0, 0x400) != 0)) {
        arg0->state = 7;
        return 1;
    }
    return 0;
}

s32 func_sc03_029_80184520(u8 *o) {
    V3 v;

    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    return v.x + v.z < 0x190000;
}

s32 func_sc03_029_80184580(s32 a, s16 *b) {
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

void func_sc03_029_80184658(u8 *arg0) {
    D_sc03_029_801C4954[AF(arg0, u16, 2)]();
}

void func_sc03_029_80184694(u8 *o) {
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

void func_sc03_029_80184764(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (D_801270C0 != 2) {
        func_sc03_029_801847FC();
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

s32 func_sc03_029_801847FC(u8 *o) {
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
    if (func_sc03_029_80184958(o) == 0) {
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

s32 func_sc03_029_80184958(u8 *o) {
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
        RotTransSV(&D_sc03_029_801C495C[i], &a, &f);
        RotTransSV(&D_sc03_029_801C495C[i + 4], &b, &f);
        if (PathHitsModel(pl->model, pl->hitData, &a, &b) != 0) {
            return 1;
        }
    }
    return 0;
}

void func_sc03_029_80184AA8(StageActor *arg0) {
    D_sc03_029_801C49BC[arg0->state]();
}

void func_sc03_029_80184AE4(StageActor *arg0) {
    arg0->state = 1;
    arg0->timer = 2;
    AF(arg0, u8, 0xFC) = 1;
    AF(arg0, u8, 0xFE) = 2;
    AF(arg0, u8, 0xFD) = 0;
    AF(arg0, u8, 0xFF) = 4;
    AF(arg0, s16, 0xDC) = 0;
}

void func_sc03_029_80184B18(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        func_sc03_029_80184B70(0, arg0 + 0xFD);
        func_sc03_029_80184B70(1, arg0 + 0xFE);
        func_sc03_029_80184B70(2, arg0 + 0xFF);
        AF(arg0, s32, 0x1C) = 2;
    }
}

void func_sc03_029_80184B70(s32 arg0, u8 *arg1) {
    s32 pad[1];
    s32 *p;

    if (*arg1 >= 7) {
        *arg1 = 0;
    }
    p = D_sc03_029_801C4770[arg0];
    *p++ = D_sc03_029_801C499C[*arg1];
    if (*arg1 - 1 < 0) {
        *p = D_sc03_029_801C499C[6];
    } else {
        *p = D_sc03_029_801C499C[*arg1 - 1];
    }
    (*arg1)++;
}

void func_sc03_029_80184C0C(StageActor *arg0) {
    D_sc03_029_801C49F0[arg0->state]();
}

void func_sc03_029_80184C48(StageActor *o) {
    WMtx m;
    SV8 v;
    ModelObj *p;

    p = (u8 *) AllocActorModel();
    o->model = p;
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(p, D_sc03_029_801C49C4[(u16)o->param & 0xF]);
    o->timer = 8;
    o->state++;
    GetPartWorldMatrix(o->parent, D_sc03_029_801C49D0[(u16)o->param & 0xF], &m);
    LocalToWorld(&m, &D_sc03_029_801C49E8, &v);
    o->pos[0].h.i = v.x;
    o->pos[1].h.i = v.y;
    o->pos[2].h.i = v.z;
    o->model->rot.vy = o->parent->model->rot.vy;
}

void func_sc03_029_80184D34(u8 *o) {
    s32 r;
    s32 t;

    if (TickTimer(o) != 0) {
        AF(o, u16, 2)++;
        r = rand();
        t = ((s32 *)&D_sc03_029_801C49DC)[AF(o, u16, 0x70) & 0xF] + r % 1024;
        AF(o, s32, 0x1C) = 0x100;
        AF(o, s32, 0x48) = t;
        AF(o, s32, 0xE0) = rand();
    }
}

void func_sc03_029_80184DC8(u8 *p) {
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

void func_sc03_029_80184ED0(u8 *arg0) {
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
        if (TickTimer((s32) arg0) != 0) {
            AF(arg0, s32, 0x1C) = 8;
            temp_v1_2 = AF(arg0, void *, 0x20);
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
        }
    } else {
        if (TickTimer((s32) arg0) != 0) {
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

void func_sc03_029_80184FF0(StageActor *arg0) {
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
    col = D_sc03_029_801C499C[arg0->work10A++ & 7];
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
        src = D_sc03_029_801C4A00[arg0->param / 2];
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

void func_sc03_029_8018533C(u8 *arg0) {
    D_sc03_029_801C4A40[AF(arg0, u16, 2)]();
}

void func_sc03_029_80185378(u8 *arg0) {
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

void func_sc03_029_801853F8(StageActor *arg0) {
    D_sc03_029_801C89CC[arg0->state]();
}

void func_sc03_029_80185434(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc03_029_801C86BC) != 0) {
        if (!(GetFlag(D_sc03_029_801C8724[AF(arg0->message, u16, 0xA)]) & 0xFF)) {
            arg0->ext0 = SpawnTalkMarker(arg0, (s32) &func_sc03_029_80185AE0);
        } else {
            arg0->param = (u16) ((u16)arg0->param | 0x4000);
        }
        temp_v0 = SpawnActorArg(0x8F, (s32) (s16) (u16)arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc03_029_80187B3C);
        arg0->state = 1;
    }
}

void func_sc03_029_80185508(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc03_029_80185530(void) {
}

void func_sc03_029_80185538(StageActor *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0->message;
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (GetFlag(0x1D) & 0xFF) {
            D_sc03_029_801C8908 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc03_029_801C886C[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc03_029_801C88F4 = 0;
            SetFlag(D_sc03_029_801C886C[AF(temp_s0, u16, 0xC)], 1);
            D_sc03_029_801C88F0 = 2;
        } else {
            D_sc03_029_801C8908 = AF(temp_s0, s32, 0);
            var_v0 = D_sc03_029_801C87E8[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc03_029_801C88F0 = 0;
            D_sc03_029_801C88F4 = var_v0;
        }
        RunScript((s32) arg0, (s32) &D_sc03_029_801C891C);
    } else {
        var_a1 = &D_sc03_029_801C8988;
        *var_a1 = AF(temp_s0, s32, 0);
        RunScript((s32) arg0, (s32) (var_a1 - 7));
    }
    arg0->state = 4;
    arg0->param = (u16) ((u16)arg0->param | 0x8000);
}

void func_sc03_029_80185684(StageActor *arg0) {
    void *temp_s2;

    temp_s2 = arg0->message;
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        if (GetFlag(D_sc03_029_801C8724[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc03_029_801C8724[AF(temp_s2, u16, 0xA)] == 0x54) {
                SetProgress(0x5A);
                SetFlag(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (GetFlag(0x1D) & 0xFF)) {
                UploadFlagImages(0);
            }
            if (func_sc03_029_80185888() == 1) {
                GiveItem(0x26);
            }
            arg0->param = (u16) ((u16)arg0->param & 0x8000);
            FreeActor(arg0->ext0);
        }
        arg0->state = 2;
    }
}

void func_sc03_029_801857A4(StageActor *arg0) {
    arg0->state = 2;
    FreeActor(arg0->ext0);
}

void func_sc03_029_801857D0(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_029_801857E0(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc03_029_801857F0(u8 *arg0) {
    SetFlag(D_sc03_029_801C8724[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc03_029_80185830(u8 *arg0) {
    AddMoney((s32) &g_Player, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc03_029_80185864(void) {
    return func_80174764() == 1;
}

s32 func_sc03_029_80185888(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(GetFlag(D_sc03_029_801C8724[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc03_029_801858EC(StageActor *arg0) {
    D_sc03_029_801C89F4[arg0->state]();
}

void func_sc03_029_80185928(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_029_801C86F0) != 0) {
        arg0->unkFC = (u16) arg0->parent->id;
        if ((u16)arg0->param & 0x4000) {
            SetScript(arg0, (s32) &D_sc03_029_801C90B4);
            arg0->hitState = 0;
        } else {
            SetScript(arg0, (s32) &D_sc03_029_801C8E94);
        }
        arg0->state = 1;
    }
}

void func_sc03_029_801859B0(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->unkFC != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_029_801C8EA4);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_029_801C8FAC);
        arg0->hitState = 0x8C00;
    }
}

void func_sc03_029_80185A70(StageActor *arg0) {
    s32 f;

    if (arg0->animTimer == 0) {
        f = arg0->workFE;
        arg0->state = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc03_029_801C90B4);
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_029_801C8E94);
        }
        arg0->workFE = 0;
    }
}

s32 *func_sc03_029_80185AE0(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    Mover *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) g_PlayerModel + 0x34);
    gte_SetTransMatrix((u8 *) g_PlayerModel + 0x34);
    RotTransSV(&D_sc03_029_801C89E4[0], &a, &f);
    RotTransSV(&D_sc03_029_801C89E4[1], &b, &f);
    if (PathHitsModel(p->model, p->hitData, &a, &b) != 0 && TargetInFront(p, 0x300) != 0) {
        p->state = 3;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}

void func_sc03_029_80185BD8(u8 *arg0) {
    D_sc03_029_801C93A8[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (IsActorFar((s32) arg0) == 1)) {
        func_sc03_029_80187050((s32) arg0);
    }
}

void func_sc03_029_80185C4C(u8 *o) {
    u16 *q;

    if (FindOtherActorByKind(o, 0x6D) != 0) {
        q = &g_SpawnRejected;
        *q |= 1;
        return;
    }
    if (SetupActor(o, &D_sc03_029_801C9278) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, u8 *, 0xBC) = &D_sc03_029_801C9330;
        AF(o, s32, 0xB4) = -0x48D;
        AF(o, s16, 0xDC) = 1;
        AF(o, s32, 0xC4) |= 2;
        SpawnShadow(o);
        SetScript(o, &D_sc03_029_80187B3C);
        func_sc03_029_80186F60(o);
        StopWithGravity(o);
    }
}

void func_sc03_029_80185D08(StageActor *arg0) {
    s32 temp_ret;

    AF(arg0, s16, 2) = 2;
    InitMime((s32) &D_sc03_029_801D98C8, (s32) &D_sc03_029_801C9124, D_sc03_029_801CA0A0);
    temp_ret = rand();
    arg0->timer = (s32) ((temp_ret % 31) + 0x1E);
    func_sc03_029_80186ECC((s32) arg0, 1, temp_ret / 31);
}

void func_sc03_029_80185D9C(s32 arg0, s32 arg1) {
    if (DistSqToTarget(arg0, arg1) < 0x4001) {
        AF(arg0, s16, 2) = 7;
        return;
    }
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 2) = 5;
    }
    StepMime((s32) &D_sc03_029_801D98C8);
}

void func_sc03_029_80185DFC(StageActor *o) {
    o->state = 4;
    func_sc03_029_80186ECC(o, 1);
    AF(o, s16, 0xE0) = (rand() & 1) ? 1 : -1;
    if (AF(o, s16, 0xEA) != 0) {
        AF(o, s32, 0x1C) = rand() % 31 + 30;
        InitMime(&D_sc03_029_801D98C8, &D_sc03_029_801C9124, D_sc03_029_801CA0A0);
        return;
    }
    AF(o, s32, 0x1C) = rand() % 31 + 15;
    InitMime(&D_sc03_029_801D98C8, &D_sc03_029_801C913C, D_sc03_029_801CA0A0);
    if (func_sc03_029_8018723C(o) == 1) {
        AF(o, s16, 0xE8) = 0;
    } else {
        AF(o, s16, 0xE8) = 1;
    }
}

void func_sc03_029_80185F38(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x12) = (u16) (AF(temp_a0, u16, 0x12) + (AF(arg0, s16, 0xE0) * 0x22));
    if ((AF(arg0, s16, 0xEA) != 0) || (SetForwardVelocity((s32) arg0, -0x20000, arg2), (func_sc03_029_80186DD4((s32) arg0) != -1))) {
        if (DistSqToTarget((s32) arg0) < 0x4001) {
            AF(arg0, s16, 2) = 7;
            return;
        }
        if (TickTimer((s32) arg0) != 0) {
            AF(arg0, s16, 2) = 5;
        }
        StepMime((s32) &D_sc03_029_801D98C8);
    }
}

void func_sc03_029_80185FE8(u8 *o) {
    AF(o, s16, 2) = 6;
    StopWithGravity(o);
    SetForwardVelocity(o, -0x20000);
    AF(o, s32, 0x1C) = rand() % 61 + 90;
    func_sc03_029_80186ECC(o, 1);
    AF(o, s16, 0xE4) = 0;
    if (*(u8 **)&D_sc03_029_801D98C8 != &D_sc03_029_801C913C) {
        InitMime(&D_sc03_029_801D98C8, &D_sc03_029_801C913C, D_sc03_029_801CA0A0);
    }
    if (func_sc03_029_8018723C(o) == 1) {
        AF(o, s16, 0xE8) = 0;
    } else {
        AF(o, s16, 0xE8) = 1;
    }
}

void func_sc03_029_801860C0(u8 *o) {
    s32 d;
    s32 r;

    d = DistSqToTarget(o);
    if (d < 0x4001) {
        AF(o, s16, 2) = 7;
        return;
    }
    if (g_Daytime == 0 && d <= 0x8000 && AF(o, s16, 0xE4) != 0) {
        D_sc03_029_801C931C[0] = -(SquareRoot0(DistSqToTarget(o)) << 16);
        if (func_sc03_029_80187118(o, D_sc03_029_801C931C - 2) & 0x2000) {
            AF(o, s16, 2) = 9;
            return;
        }
    }
    if (func_sc03_029_801870B8(o) == 0 || TargetInFront(o, 0x400) == 0) {
        if (AF(o, s16, 0xE4) != 0) {
            SetForwardVelocity(o, -0x20000);
            func_sc03_029_80186ECC(o, 1);
            InitMime(&D_sc03_029_801D98C8, &D_sc03_029_801C913C, D_sc03_029_801CA0A0);
            AF(o, s16, 0xE4) = 0;
        }
        if (TickTimer(o) != 0) {
            func_sc03_029_80186F60(o);
            return;
        }
    } else {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 4);
        SetForwardVelocity(o, -0x80000);
        if (AF(o, s16, 0xE4) == 0) {
            func_sc03_029_80186ECC(o, 2);
            InitMime(&D_sc03_029_801D98C8, &D_sc03_029_801C915C, D_sc03_029_801CA0A0);
            AF(o, s16, 0xE4) = 1;
        }
    }
    r = func_sc03_029_80186DD4(o);
    if (r == 0) {
        if (AF(o, s16, 0xE4) == 0 || AF(o, s16, 0xEA) == 2) {
            AF(o, s16, 2) = 3;
        }
    } else if (r == -1) {
        return;
    }
    StepMime(&D_sc03_029_801D98C8);
}

void func_sc03_029_801862B8(StageActor *arg0) {
    AF(arg0, s16, 2) = 8;
    InitMime((s32) &D_sc03_029_801D98C8, (s32) &D_sc03_029_801C917C, D_sc03_029_801CA0A0);
    arg0->timer = 0x28;
    func_sc03_029_80186ECC((s32) arg0, 2);
    AF(arg0, s16, 0xDE) = 0;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc03_029_80186320(u8 *o) {
    s32 r;

    AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 3);
    if (AF(o, s32, 0x1C) == 0x28) {
        PlaySoundId(0x7F, 0);
    }
    if (AF(o, s32, 0x1C) == 5) {
        PlaySoundId(0x524, 0);
    }
    if (AF(o, s32, 0x1C) < 0xB && AF(o, s16, 0xDE) == 0) {
        ActorSegmentDamagesPlayer(o, &D_sc03_029_801C9320, &D_sc03_029_801C9320 + 8, 0x15);
        AF(o, u16, 0xDE) ^= 1;
    }
    if (TickTimer(o) != 0) {
        r = DistSqToTarget(o);
        if (r > 0x30000) {
            func_sc03_029_80186F60(o);
            return;
        }
        if (r >= 0x4001) {
            AF(o, s16, 2) = 5;
            return;
        }
        AF(o, s32, 0x1C) = 0x28;
        AF(o, s16, 0xDE) = 0;
    }
    StepMime(&D_sc03_029_801D98C8);
}

/* symbol split: splat split one original object into neighbouring symbols; read through the neighbour (offset form), as the original */
void func_sc03_029_80186448(u8 *o) {
    s32 *p;

    AF(o, s16, 2) = 10;
    InitMime(&D_sc03_029_801D98C8, &D_sc03_029_801C91A4, D_sc03_029_801CA0A0);
    func_sc03_029_80186ECC(o, 2);
    AF(o, s16, 0xDE) = 0;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToTarget(o);
    UpdateModelZYX(o);
    p = &D_sc03_029_801C93DC;
    *p = D_sc03_029_801C931C[0] / 30;
    StopWithGravity(o);
    SetLocalVelocity(o, p - 2);
    AF(o, s32, 0x1C) = 0;
    AF(o, s16, 0x34) = 0;
}

void func_sc03_029_80186514(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    if (AF(arg0, u16, 0x34) == 0) {
        if (AF(arg0, s32, 0x1C) < 0xF) {
            temp_v1 = AF(arg0, void *, 0x20);
            AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x44);
        }
        if (((u32) (AF(arg0, s32, 0x1C) - 0x15) < 0xAU) && (AF(arg0, s16, 0xDE) == 0)) {
            ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc03_029_801C9320, (s32) (&D_sc03_029_801C9320 + 8), 0x1F);
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
    StepMime((s32) &D_sc03_029_801D98C8);
}

void func_sc03_029_80186660(StageActor *arg0) {
    func_sc03_029_80186F9C(arg0, (s32) &D_sc03_029_801C9234, 0);
    SetScript(arg0, (s32) &D_sc03_029_801C9268);
}

void func_sc03_029_801866A4(void) {
    StepMime((s32) &D_sc03_029_801D98C8);
}

void func_sc03_029_801866CC(u8 *o) {
    AF(o, u8, 0xC2) = 0;
    AF(o, u8, 0xC3) = 0;
    AF(o, s16, 0x98) = 0;
    func_sc03_029_80186F9C(o, &D_sc03_029_801C9234, 0);
    if (AF(o, u16, 0x5E) == 9 || AF(o, u16, 0x5E) == 0x1C) {
        SetLocalVelocity(o, &D_sc03_029_801C93E0);
    } else {
        SetLocalVelocity(o, &D_sc03_029_801C93EC);
    }
    SetScript(o, &D_sc03_029_801C9268);
}

void func_sc03_029_80186758(u8 *o) {
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
        f = MoveCollidePassableAt(o, &D_sc03_029_801C92DC);
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
        f = MoveCollidePassableAt(o, &D_sc03_029_801C92DC);
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
                func_sc03_029_80186D90(o);
                return;
            }
            SetReactionStep(o, 0xD);
        }
        break;
    }
    StepMime(&D_sc03_029_801D98C8);
    if ((u8)f == 2) {
        SetReactionStep(o, 0x12);
    }
}

void func_sc03_029_80186A34(u8 *o) {
    WMtx m;
    u8 *p;

    func_sc03_029_80186F9C(o, &D_sc03_029_801C9234, 0);
    SetScript(o, &D_sc03_029_801C9268);
    UpdateModelZYX(o);
    m = GsIDMATRIX;
    RotMatrixY((HeadingToTarget(o) + 0x800) & 0xFFF, &m);
    switch (AF(o, u16, 0x5E)) {
    case 8:
        p = &D_sc03_029_801C92BC;
        break;
    case 5:
    case 29:
    case 32:
        p = &D_sc03_029_801C92CC;
        break;
    case 1:
    case 50:
    default:
        p = &D_sc03_029_801C92AC;
        break;
    }
    ApplyMatrixLV(&m, p, o + 0x10);
    AF(o, s16, 0x34) = 0;
    AF(o, s32, 0x1C) = 0;
}

void func_sc03_029_80186B4C(u8 *o) {
    s32 r = 0;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (++AF(o, s32, 0x1C) >= 0x29) {
            SetReactionStep(o, 0xD);
            break;
        }
        AF(AF(o, u8 *, 0x20), u16, 0x10) -= 0x100;
        r = MoveCollidePassableAt(o, &D_sc03_029_801C92DC);
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
            func_sc03_029_80186D90(o);
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
            func_sc03_029_80186D90(o);
        }
        break;
    }
    StepMime(&D_sc03_029_801D98C8);
    if ((r & 0xFF) == 2) {
        SetReactionStep(o, 0x12);
    }
}

void func_sc03_029_80186CE4(s32 arg0) {
    InitMime((s32) &D_sc03_029_801D98C8, (s32) &D_sc03_029_801C920C, D_sc03_029_801CA0A0);
    func_sc03_029_80186ECC(arg0, 1);
}

void func_sc03_029_80186D34(void) {
    StepMime((s32) &D_sc03_029_801D98C8);
}

void func_sc03_029_80186D5C(s32 arg0) {
    func_sc03_029_80186F9C(arg0, (s32) &D_sc03_029_801C9234, 0);
    PlaySoundId(0xA74, 0);
}

void func_sc03_029_80186D90(StageActor *arg0) {
    arg0->state = 1;
    SetScript(arg0, (s32) &D_sc03_029_80187B3C);
    arg0->hitState = 0xAA10;
    AF(arg0, s16, 0xEA) = 0;
}

s32 func_sc03_029_80186DD4(u8 *o) {
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

s32 func_sc03_029_80186ECC(u8 *o, s32 m) {
    if (m & 1) {
        if (!(AF(o, u16, 0xDC) & 2)) {
            return 1;
        }
        QueueImage(&D_sc03_029_801CA248);
    } else {
        if (!(m & 2)) {
            return 1;
        }
        if (!(AF(o, u16, 0xDC) & 1)) {
            return 1;
        }
        QueueImage(&D_sc03_029_801CA418);
    }
    AF(o, s16, 0xDC) = m;
    return 0;
}

void func_sc03_029_80186F60(u8 *o) {
    if (rand() & 1) {
        AF(o, s16, 2) = 1;
    } else {
        AF(o, s16, 2) = 3;
    }
}

void func_sc03_029_80186F9C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 one = 1;
    u8 *p;

    StopWithGravity((s32) arg0);
    InitMime(&D_sc03_029_801D98C8, arg1, D_sc03_029_801CA0A0);
    if (AF(arg0, u16, 0xDC) & 2) {
        QueueImage(&D_sc03_029_801CA248);
        AF(arg0, s16, 0xDC) = one;
    }
    AF(arg0, s32, 0x1C) = arg2;
    AF(arg0, u16, 0x5C) &= 0xFFFE;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = (AF(arg0, u16, 0x62) + 0x800) & 0xFFF;
    p = AF(arg0, u8 *, 0x20);
    AF(p, s16, 0x14) = 0;
    AF(p, s16, 0x10) = 0;
}

void func_sc03_029_80187050(StageActor *arg0) {
    SpawnDef *temp_v1;

    if (!(arg0->param & 0x8000)) {
        temp_v1 = arg0->def;
        if ((temp_v1 != NULL) && ((s16)arg0->animFlags & 0x8000)) {
            temp_v1->flags = (u16) (temp_v1->flags & 0x7FFF);
        }
    }
    FreeActor(arg0);
}

s32 func_sc03_029_801870B8(u8 *o) {
    V3 v;

    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    return v.x + v.z < 0x190000;
}

void func_sc03_029_80187118(Mover *o, V4 *d) {
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
    CollidePath(&a, &b, 0);
}

s32 func_sc03_029_8018723C(u8 *o) {
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

void func_sc03_029_801872B4(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;

    SetIdentityRot(&m);
    func_sc03_029_80187318((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc03_029_80187318(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc03_029_80187718(a);
    s = func_sc03_029_8018765C(a);
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

void func_sc03_029_80187478(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc03_029_80187718(r[0] & 0xFFF);
    cx = func_sc03_029_8018765C(r[0] & 0xFFF);
    sy = func_sc03_029_80187718(r[1] & 0xFFF);
    cy = func_sc03_029_8018765C(r[1] & 0xFFF);
    sz = func_sc03_029_80187718(r[2] & 0xFFF);
    cz = func_sc03_029_8018765C(r[2] & 0xFFF);
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

s32 func_sc03_029_8018765C(u32 a) {
    if (a < 0x400) {
        return D_sc03_029_801D617C[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc03_029_801D617C[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc03_029_801D617C[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc03_029_801D617C[0xFFF - a];
    }
}

s32 func_sc03_029_80187718(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc03_029_801D617C[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc03_029_801D617C[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc03_029_801D617C[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc03_029_801D617C[a - 0xC00];
    }
}
