#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_031_8017BE9C(void) {
}

void func_sc03_031_8017BEA4(void) {
}

void func_sc03_031_8017BEAC(void) {
}

void func_sc03_031_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_031_80185D60[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_800D22E4();
extern void FreeEffect();
extern void (*D_sc03_031_80185E78[])();
extern void AddMaxBp();
extern void AddBp();
extern void PlaySoundId();
extern void func_sc03_031_8017C180();
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
extern void (*D_sc03_031_80185ED0[])();
extern void PlaySe();
extern void func_sc03_031_8017D2F4();
extern void HidePlayerScene();
extern void SetPlayerFlag7E2();
extern void (*D_sc03_031_80185EE4[])();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern void (*D_sc03_031_80185EF8[])();
extern void func_sc03_031_8017D9EC();
extern void (*D_sc03_031_80185F78[])();
void func_sc03_031_8017ECC8(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc03_031_80185F80[])();
void func_sc03_031_8017ECF0(void);
extern void func_800D1EBC();
extern void (*D_sc03_031_80185F8C[])();
extern u8 D_sc03_031_80185F98;
extern void StartPlayerActionScript();
extern u8 D_sc03_031_80185FA4;
extern void func_sc03_031_8017EDBC();
extern void (*D_sc03_031_80185FB8[])();
extern void (*D_sc03_031_80186150[])();
extern void (*D_sc03_031_801861E0[])();
extern void (*D_sc03_031_80186298[])();
extern void (*D_sc03_031_80186434[])();
extern void (*D_sc03_031_80186618[])();
extern void (*D_sc03_031_801BFB74[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc03_031_80182694;
extern s32 GetFlag();
extern void RejectSpawn();
extern u8 D_sc03_031_801BF864;
extern s32 * func_sc03_031_80182224();
extern s32 D_sc03_031_801BF8CC[];
extern s32 SpawnActorArg();
extern void SetFlag();
extern void RunScript();
extern s32 D_sc03_031_801BFA98;
extern s32 D_sc03_031_801BFA9C;
extern s32 D_sc03_031_801BFAB0;
extern s32 D_sc03_031_801BFAC4;
extern s32 D_sc03_031_801BFB30;
extern s32 D_sc03_031_801BFA14[];
extern s32 D_sc03_031_801BF990[];
extern s32 UpdateScript();
extern void SetProgress();
extern void UploadFlagImages();
extern s32 func_sc03_031_80181FCC();
extern void AddMoney();
extern s32 func_80174764();
extern void (*D_sc03_031_801BFB9C[])();
extern u8 D_sc03_031_801BF898;
extern u8 D_sc03_031_801C003C;
extern u8 D_sc03_031_801C025C;
extern u8 D_sc03_031_801C004C;
extern u8 D_sc03_031_801C0154;

extern void ClearTimeChime();
extern void func_800D1E28();

extern u8 D_sc03_031_801BF01C;
extern u8 D_sc03_031_801BF20C;
extern u8 D_sc03_031_801BF294;
extern s32 MoveCollidePassable();
extern void func_sc03_031_80181030();
extern s32 TickTimer();
extern void MoveObject();
extern void SpawnKind1C();

extern void DespawnActor();
extern void GainStat0FromActor();
extern s32 DistSqToTarget();
extern s32 D_sc03_031_801B6ED4;
extern void ShowModel();
extern s32 func_sc03_031_8018156C();

extern s32 GetProgress();
extern void func_800D0C48();
extern void UpdateClockTint();

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
extern s32 IsOnScreen();
extern s32 GetPlayerByte1C7();
extern void StopMotion();
extern s32 SetForwardVelocity();
extern u8 D_sc03_031_80186114;
extern u8 D_sc03_031_80186174;
extern void func_sc03_031_8017BEBC();
extern void StartCameraShake();
extern void func_sc03_031_8017F860();
extern u8 D_sc03_031_80185FF0;
extern u8 D_sc03_031_801860F4;
extern void func_sc03_031_8017F95C();
extern void UpdateModelZYX();
extern void MoveProp();
extern s32 StepSpriteAnim();
extern void FreeProp();
extern u8 D_sc03_031_80186218;
extern void func_8001C810();
extern void SetModelCullBox();
extern u8 D_sc03_031_80186280;
extern void SetLocalVelocity();
extern void (*D_sc03_031_80186498[])();
extern void (*D_sc03_031_801864FC[])();
extern void (*D_sc03_031_80186560[])();
extern void (*D_sc03_031_801865C4[])();
extern u8 D_sc03_031_801862FC;
extern u8 D_sc03_031_80186310;
extern u8 D_sc03_031_80186324;
extern u8 D_sc03_031_80186338;
extern void SpawnActorFromDef();
extern void func_sc03_031_8017FF20();
extern s16 D_80126B66;
extern u8 D_sc03_031_8018634C;
extern void TakePlayerControlNoStop();
extern u8 D_sc03_031_80186444;
extern u8 D_sc03_031_80186450;
extern void func_8001CA1C();
extern u8 D_sc03_031_801864A8;
extern u8 D_sc03_031_801864B4;
extern u8 D_sc03_031_8018650C;
extern u8 D_sc03_031_80186518;
extern u8 D_sc03_031_80186570;
extern u8 D_sc03_031_8018657C;
extern u8 D_sc03_031_801865E4;
extern u8 D_sc03_031_801B6ED8;
extern void SetReactionStep();

extern u8 D_sc03_031_8018609C;
extern u8 D_sc03_031_80186100;
extern s32 D_sc03_031_801860AC[];
extern s32 MoveCollideAt();

extern u8 D_sc03_031_801BF364;

extern u8 g_Actors;
extern u8 D_sc03_031_801862AC;

extern u8 D_sc03_031_801BF57C;
extern s32 StopWithGravity();

extern u8 D_sc03_031_80186478;
extern u8 D_sc03_031_801A46CC;
extern void QueueImage();
extern u8 D_sc03_031_801864DC;
extern u8 D_sc03_031_801AA18C;
extern u8 D_sc03_031_80186540;
extern u8 D_sc03_031_801AFC4C;
extern u8 D_sc03_031_801865A4;
extern u8 D_sc03_031_801B570C;

typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
extern s32 GetVar();
extern s16 D_80126B62;
extern s32 g_PlayerPosX;
extern u16 D_800B99DA;
extern s16 D_800B9A08;
extern u8 D_sc03_031_80185E28;
extern u8 D_sc03_031_80185DC4[];
extern s32 PosDist();
extern void TakePlayerControl();
extern s32 DistSqToPlayer();
extern void SetShapeCircle();
extern u8 D_sc03_031_801C5F28;
extern u8 D_sc03_031_801C5F29;
extern u8 D_sc03_031_801C5F2A;
extern u8 D_sc03_031_801C5F2C;
extern u8 D_sc03_031_801C5F2D;
extern u8 D_sc03_031_801C5F2E;
extern s32 D_sc03_031_801C612C;
extern s32 D_sc03_031_801C6130;
extern s32 D_sc03_031_801C6134;
extern s32 AllocSpriteInRange();
extern void func_8001CD50();
extern u16 D_sc03_031_801C0814;

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
extern s8 D_sc03_031_80185EA4[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern void DrawPrimG4Mtx();
extern WMtx GsIDMATRIX;
extern void DrawPrimLineG2Mtx();

typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern u8 D_sc03_031_80185D54;
extern u8 *func_800D21C4();

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
extern u8 D_sc03_031_80185D90;
extern u8 D_sc03_031_80185DCC;
extern u8 D_sc03_031_801C07EC;
extern u8 D_sc03_031_801C5EB8;
extern u8 D_sc03_031_801C5EC4;
extern u8 D_sc03_031_801C5EC5;
extern u8 D_sc03_031_801C5EC6;
extern u8 D_sc03_031_801C5ED4;
extern u8 D_sc03_031_801C5ED5;
extern u8 D_sc03_031_801C5ED6;
extern u8 D_sc03_031_801C5EE5;
extern u8 D_sc03_031_801C5EE6;
extern u8 D_sc03_031_801C5EE8;
extern u8 D_sc03_031_801C5EE9;
extern u8 D_sc03_031_801C5EEA;
extern u8 D_sc03_031_801C5EEC;
extern u8 D_sc03_031_801C5EED;
extern u8 D_sc03_031_801C5EEE;
extern u8 D_sc03_031_801C5EF4;
extern u8 D_sc03_031_801C5F68;

extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();
extern s32 GetObjPadPressed();
extern s16 D_sc03_031_80185FBC[];

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
extern s32 D_sc03_031_801C5EBC;
extern s32 D_sc03_031_801C5EC0;
extern s32 D_sc03_031_801C5EC8;
extern s32 D_sc03_031_801C5ECC;
extern s32 D_sc03_031_801C5ED0;
extern s32 D_sc03_031_801C5ED8;
extern s32 D_sc03_031_801C5EDC;
extern s32 D_sc03_031_801C5EE0;

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;

void func_sc03_031_8017BEBC(s32 arg0, SV *arg1, s32 arg2) {
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

void func_sc03_031_8017BF88(u8 *arg0) {
    SV4 v;
    WMtx m;
    u8 *q;
    u8 *o;
    WMtx *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc03_031_80185D54, 0x2A);
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

void func_sc03_031_8017C0E4(u8 *arg0) {
    D_sc03_031_80185D60[AF(arg0, u16, 2)]();
}

void func_sc03_031_8017C120(u8 *arg0) {
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

void func_sc03_031_8017C180(u8 *arg0, s32 arg1_0) {
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
    *(s32 *)&D_sc03_031_801C5EB8 = D_sc03_031_801C5EC8 = D_sc03_031_801C5ED8 = v.vx;
    D_sc03_031_801C5EBC = D_sc03_031_801C5ECC = D_sc03_031_801C5EDC = v.vy;
    D_sc03_031_801C5EC0 = D_sc03_031_801C5ED0 = D_sc03_031_801C5EE0 = v.vz;
}

void func_sc03_031_8017C2B0(StageActor *arg0) {
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
        if (SetupActor(arg0, &D_sc03_031_80185D90) == 0) {
            return;
        }
        func_8001C810(arg0->model, &D_sc03_031_801C07EC);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc03_031_80185DCC);
        arg0->model->flags |= 0x20;
        arg0->model->unk80 = &D_sc03_031_801C5EB8;
        arg0->model->unk04 |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext0 = o;
        p = &D_sc03_031_801C5EE8;
        func_8001CD50(o, p);
        D_sc03_031_801C5EEA = 0x80;
        p[0] = 0x80;
        D_sc03_031_801C5EE9 = 0xE0;
        D_sc03_031_801C5EED = 0;
        D_sc03_031_801C5EEC = 0;
        D_sc03_031_801C5EEE = 0;
        SetShapeCircle(p, 0x38);
        s = (U12x9 *) &D_sc03_031_801C0814;
        b = (U12x9 *) &D_sc03_031_801C5F68;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = (u16)arg0->pos[0].h.i;
        AF(o, u16, 0xA) = arg0->pos[1].h.i -= 4;
        AF(o, u16, 0xC) = (u16)arg0->pos[2].h.i;
        AF(o, s32, 4) |= 0x50000000;
        D_sc03_031_801C5EE6 = 0xFF;
        D_sc03_031_801C5EF4 = 0xFF;
        D_sc03_031_801C5ED6 = 0xFF;
        D_sc03_031_801C5ED4 = 0xFF;
        D_sc03_031_801C5EC6 = 0xFF;
        D_sc03_031_801C5EC4 = 0xFF;
        D_sc03_031_801C5EE5 = 0x80;
        D_sc03_031_801C5ED5 = 0x80;
        D_sc03_031_801C5EC5 = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc03_031_801C5F68;
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

void func_sc03_031_8017C63C(u8 *arg0) {
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
    func_sc03_031_8017C180(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc03_031_80185DC4[(s16) i]) {
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
            StartEvent(arg0, &D_sc03_031_80185E28);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc03_031_8017C8B4(StageActor *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext1 = o;
        p = &D_sc03_031_801C5F28;
        func_8001CD50(o, p);
        D_sc03_031_801C5F29 = 0xFF;
        D_sc03_031_801C5F2A = 0xFF;
        p[0] = 0xFF;
        D_sc03_031_801C5F2E = 8;
        D_sc03_031_801C5F2C = 8;
        D_sc03_031_801C5F2D = 0x18;
        SetShapeCircle(p, 0x100);
        v.vx = (u16)arg0->pos[0].h.i;
        v.vy = (u16)arg0->pos[1].h.i - 0x38;
        v.vz = (u16)arg0->pos[2].h.i;
        func_800D20C0(&v, &r, 5);
        q = &D_sc03_031_801C612C;
        q[0] = v.vx;
        D_sc03_031_801C6130 = v.vy;
        D_sc03_031_801C6134 = v.vz;
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

void func_sc03_031_8017C9FC(StageActor *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc03_031_801C0814;
    r = AF(arg0, U12 *, 0xD8);
    p = (u8 *)arg0->message;
    o = (u8 *)arg0->ext1;
    s4 = (s16 *)arg0->model;
    if (p[1] != 0 && arg0->work108 == 0) {
        arg0->work108 = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--arg0->timer != -1) {
        func_sc03_031_8017C180(arg0, 0);
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

void func_sc03_031_8017CB7C(StageActor *arg0) {
    D_sc03_031_80185E78[arg0->state]();
}

void func_sc03_031_8017CBB8(void) {
    AddMaxBp((s32) &g_Player, 5);
    AddBp((s32) &g_Player, 0x270F);
    PlaySoundId(0xBFE, 0);
}

void func_sc03_031_8017CC04(StageActor *arg0) {
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
        func_sc03_031_8017C180((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    PlaySoundId(0x62E, 0);
    *temp_s2 = 0;
    arg0->timer = 0x28;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc03_031_8017CCF8(StageActor *arg0) {
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

void func_sc03_031_8017CD78(StageActor *arg0) {
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

void func_sc03_031_8017CE2C(StageActor *arg0) {
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

void func_sc03_031_8017CE98(StageActor *arg0, s32 arg1) {
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

void func_sc03_031_8017CF24(StageActor *arg0, s32 arg1) {
    FreeActor(arg0, arg1);
}

void func_sc03_031_8017CF44(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc03_031_8017C180(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

void func_sc03_031_8017CF98(s32 arg0) {
    SpawnEffect(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_031_8017CFD4(u8 *arg0) {
    D_sc03_031_80185ED0[AF(arg0, u16, 2)]();
}

void func_sc03_031_8017D010(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        PlaySe((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_031_8017D060(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_031_8017D2F4((s32) arg0);
}

void func_sc03_031_8017D0BC(u8 *arg0) {
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
    func_sc03_031_8017D2F4((s32) arg0);
}

void func_sc03_031_8017D140(u8 *arg0) {
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
    func_sc03_031_8017D2F4((s32) arg0);
}

void func_sc03_031_8017D2A8(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_031_8017D2F4((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc03_031_8017D2F4(u8 *arg0) {
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
    t = D_sc03_031_80185EA4;
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
    t = D_sc03_031_80185EA4;
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
        t = D_sc03_031_80185EA4;
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

void func_sc03_031_8017D600(u8 *arg0) {
    D_sc03_031_80185EE4[AF(arg0, u16, 2)]();
}

void func_sc03_031_8017D63C(u8 *arg0) {
    PlaySe((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_031_8017D67C(u8 *arg0) {
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
    func_sc03_031_8017D2F4((s32) arg0);
}

void func_sc03_031_8017D6EC(u8 *arg0) {
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
    func_sc03_031_8017D2F4((s32) arg0);
}

void func_sc03_031_8017D778(u8 *arg0) {
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
    func_sc03_031_8017D2F4((s32) arg0);
}

void func_sc03_031_8017D84C(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_031_8017D2F4((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    FreeEffect((s32) arg0);
}

void func_sc03_031_8017D8A0(u8 *arg0) {
    D_sc03_031_80185EF8[AF(arg0, u16, 2)]();
}

void func_sc03_031_8017D8DC(u8 *arg0) {
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

void func_sc03_031_8017D990(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_031_8017D9EC((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc03_031_8017D9EC(u8 *arg0) {
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

void func_sc03_031_8017DB5C(u8 *obj) {
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

void func_sc03_031_8017EA3C(u8 *arg0) {
    D_sc03_031_80185F78[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_031_8017EA78(u8 *arg0) {
    func_sc03_031_8017ECC8();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_031_8017EABC(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc03_031_8017EAE0(u8 *arg0) {
    D_sc03_031_80185F80[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_031_8017EB1C(u8 *arg0) {
    func_sc03_031_8017ECF0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_031_8017EB5C(u8 *arg0) {
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

void func_sc03_031_8017EBF8(void) {
    func_800D1EBC();
}

void func_sc03_031_8017EC18(u8 *arg0) {
    D_sc03_031_80185F8C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_031_8017EC54(u8 *arg0) {
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

void func_sc03_031_8017ECC8(void) {
    StartPlayerActionScript((s32) &D_sc03_031_80185F98, 0x01000000);
}

void func_sc03_031_8017ECF0(void) {
    StartPlayerActionScript((s32) &D_sc03_031_80185FA4, 0x01000000);
}

void func_sc03_031_8017ED18(void) {
    g_CameraProjTarget = 0x12C;
    g_CameraProj = 0x12C;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0x100;
    SetCameraUpdate((s32) func_sc03_031_8017EDBC, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_031_8017EDBC((s32) &g_Camera);
}

void func_sc03_031_8017EDBC(s32 arg0) {
    D_sc03_031_80185FB8[AF(arg0, u8, 4)]();
}

typedef struct { u8 b[0x10C]; } O10C;
extern s32 TurnStepToTarget();
extern s32 TargetInSight();
extern void SpawnHeadMarker();
extern s32 D_sc03_031_801B6E34;
extern s32 MoveOnGround();
extern void RestorePrevPos();
extern s32 ActorSegmentDamagesPlayer();
extern u8 D_sc03_031_801B6EC4;
extern u8 D_sc03_031_801BEF74;
extern u8 D_sc03_031_801BF42C;

extern s32 HeadingToPoint();
extern u8 D_sc03_031_801BF164;

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
extern s32 TargetInFront();
extern s32 PathHitsModel();
extern void *g_PlayerModel;
extern void CallActionHandler();
extern SV8 D_sc03_031_801BFB8C[];

extern u8 D_sc03_031_80186000[];
extern u16 D_sc03_031_801860C4[];

extern SV8 D_sc03_031_8018618C;
extern u16 D_sc03_031_8018609E[];
extern WorkHead *SpawnPropAt();
extern void HitPlayer();
extern u8 g_GroundNormal;
extern s16 g_PlayerX;
extern u8 D_sc03_031_80186184;
extern void SyncModelPos();

extern s32 D_sc03_031_801B6E30;
extern s32 TurnStep();
s32 func_sc03_031_80181138(StageActor *arg0);
void func_sc03_031_80181168(StageActor *arg0);
extern u8 D_sc03_031_801B6E48;
extern u8 D_sc03_031_801B6E7C;
extern void SpawnShadow();
extern void SnapToGround();
extern void HideModel();

extern s32 TraceMap();
s32 func_sc03_031_80180FE4(s32 arg0);

extern void (*D_sc03_031_801B6EF0[])();
extern s32 IsActorFar();
extern s32 D_sc03_031_80186460[];
extern s32 D_sc03_031_80186528[];

extern s32 D_sc03_031_801864C4[];
extern s32 D_sc03_031_8018658C[];

extern u8 D_sc03_031_80186208;
extern s32 HeadingPitchTo();

extern s16 g_CameraFocus;
extern s16 D_80126942;
extern s16 D_80126944;
void func_sc03_031_8017EE98(u8 *p, s16 *q);
extern u8 D_sc03_031_80186194;
extern u8 D_sc03_031_801861A0;
extern void StartSpriteAnim();

void func_sc03_031_8017EDF8(u8 *o) {
    SV8 v;

    if (g_CameraFocus < -0xA0) {
        v.x = -0xA0;
    } else if (g_CameraFocus > 0xA00) {
        v.x = 0xA00;
    } else {
        v.x = g_CameraFocus;
    }
    if (D_80126944 < -0x8B0) {
        v.z = -0x8B0;
    } else if (D_80126944 > 0x800) {
        v.z = 0x800;
    } else {
        v.z = D_80126944;
    }
    v.y = D_80126942;
    func_sc03_031_8017EE98(o, (s16 *) &v);
}

void func_sc03_031_8017EE98(u8 *p, s16 *q) {
    WMtx m;
    SV4 v;
    SV4 o;
    u8 t;

    if (GetObjPadPressed(&g_Player) & 3) {
        t = (AF(p, u8, 5) + 1) & 1;
        AF(p, u8, 5) = t;
        AF(p, s32, 0x14) = D_sc03_031_80185FBC[t];
    }
    AF(p, s32, 8) = (s16) EaseValue(AF(p, s16, 8), AF(p, s16, 0xC), 4);
    AF(p, s32, 0x10) = (s16) EaseValue(AF(p, s16, 0x10), AF(p, s16, 0x14), 4);
    AF(p, s16, 0x18) = EaseAngle(AF(p, s16, 0x18), AF(p, s16, 0x20), 4);
    AF(p, s16, 0x1A) = EaseAngle(AF(p, s16, 0x1A), AF(p, s16, 0x22), 4);
    AF(p, s16, 0x1C) = EaseAngle(AF(p, s16, 0x1C), AF(p, s16, 0x24), 4);
    AF(p, s16, 0x28) = EaseValue(AF(p, s16, 0x28), AF(p, s16, 0x2E), 0x10);
    AF(p, s16, 0x2A) = EaseValue(AF(p, s16, 0x2A), AF(p, s16, 0x30), 0x10);
    AF(p, s16, 0x2C) = EaseValue(AF(p, s16, 0x2C), AF(p, s16, 0x32), 0x10);
    AF(p, s32, 0x48) = AF(p, s16, 0x28) + q[0];
    AF(p, s32, 0x4C) = AF(p, s16, 0x2A) + q[1];
    AF(p, s32, 0x50) = AF(p, s16, 0x2C) + q[2];
    RotMatrixZYX(p + 0x18, &m);
    m.t[0] = AF(p, s16, 0x28) + q[0];
    m.t[1] = AF(p, s16, 0x2A) + q[1];
    m.t[2] = AF(p, s16, 0x2C) + q[2];
    v.x = 0;
    v.y = 0;
    v.z = AF(p, s32, 0x10);
    LocalToWorld(&m, &v, &o);
    AF(p, s32, 0x3C) = o.x;
    AF(p, s32, 0x40) = o.y;
    AF(p, s32, 0x44) = o.z;
}

void func_sc03_031_8017F074(StageActor *arg0) {
    D_sc03_031_80186150[arg0->state]();
}

void PushBlockInit(u8 *o) {
    s32 idx;
    u16 *t;
    u16 *base;
    if (SetupActor(o, (AF(o, u16, 0x70) & 0xF) * 0x34 + D_sc03_031_80186000) != 0) {
        idx = AF(o, u16, 0x70) >> 12;
        if ((GetFlag(D_sc03_031_801860AC[idx]) & 0xFF) == 0) {
            AF(o, s16, 2) = 1;
        } else if (idx != 5) {
            base = D_sc03_031_801860C4;
            AF(o, s16, 2) = 8;
            t = base + idx * 4;
            AF(o, s16, 6) = t[0];
            AF(o, s16, 0xA) = t[1];
            AF(o, s16, 0xE) = t[2];
        } else {
            AF(o, s16, 2) = 7;
        }
        AF(o, u8, 0x75) = 1;
        SetScript(o, &D_sc03_031_80182694);
        UpdateModelZYX(o);
    }
}

void func_sc03_031_8017F1B4(s32 arg0) {
    s32 temp_v1;

    if ((IsOnScreen(arg0, 0x8200AA) == 1) && (temp_v1 = GetPlayerByte1C7() & 0x7FFFFFFF, (temp_v1 == 2))) {
        if ((AF(arg0, u16, 0x70) & 0xF) == temp_v1) {
            AF(arg0, s16, 2) = 6;
            AF(arg0, s32, 0x1C) = 3;
            return;
        }
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc03_031_8017F23C(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    StopMotion((s32) arg0);
    SetForwardVelocity((s32) arg0, -0x20000);
    AF(arg0, s32, 0x1C) = 0x41;
    PlaySoundId(0x5C2, 0);
}

void func_sc03_031_8017F28C(u8 *arg0) {
    s32 var_s1;
    void *temp_s2;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x10);
    MoveObject();
    if (TickTimer((s32) arg0) != 0) {
        var_s1 = 0;
        AF(AF(arg0, void *, 0x20), u16, 0x10) = 0x400U;
        AF(arg0, s16, 2) = 4;
        temp_s2 = ((AF(arg0, u16, 0x70) & 0xF) * 8) + &D_sc03_031_80186174;
        do {
            func_sc03_031_8017BEBC((s32) arg0, (s32) temp_s2, 0);
            var_s1 += 1;
        } while (var_s1 < 5);
    }
    if (AF(arg0, s32, 0x1C) == 0x38) {
        StartCameraShake((s32) &D_sc03_031_80186114);
    }
}

void func_sc03_031_8017F35C(u8 *arg0) {
    AF(arg0, s16, 2) = 5;
    StopMotion((s32) arg0);
    func_sc03_031_8017F860((s32) arg0);
}

void PushBlockLand(u8 *arg0) {
    s32 pad[2];
    if (MoveCollideAt((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 0xF) * 8) + &D_sc03_031_8018609C)) & 0x2000) {
        AF(arg0, s16, 2) = 8;
        AF(arg0, s32, 0x1C) = 3;
        StartCameraShake((s32) &D_sc03_031_80186100);
        SetFlag(D_sc03_031_801860AC[((u16) AF(arg0, u16, 0x70) >> 0xC)], 1);
        PlaySoundId(0x5C3, 0);
    }
}

static inline s32 rpm96_F428(s16 *q) {
    s32 r = rand() % 96;
    s32 x = *q;
    return (rand() & 1) ? x + r : x - r;
}

static inline s32 rpm5_F428(s16 *q) {
    s32 r = rand() % 5;
    s32 x = *q;
    return (rand() & 1) ? x + r : x - r;
}

void RollingBlockUpdate(u8 *o) {
    SV8 a;
    SV8 b;
    s32 i;
    u8 *p;
    
    AF(o, s32, 0xDC) += 0x40000;
    p = AF(o, u8 *, 0x20);
    if ((AF(p, s16, 0x10) += AF(o, u16, 0xDE)) >= 0x500) {
        a.x = g_PlayerX;
        a.y = D_80126B62;
        a.z = D_80126B66;
        b = a;
        b.y -= 0x50;
        if (PathHitsModel(AF(o, s32, 0x20), AF(o, s32, 0x58), &a, &b) != 0) {
            HitPlayer(1, 0x4002, 0, 10, &b, &g_GroundNormal);
        }
        AF(p, s16, 0x10) = 0x500;
        AF(o, s32, 0xDC) = -(AF(o, s32, 0xDC) >> 2);
        FaceHelper(o, &D_sc03_031_80186184, &a);
        b = a;
        for (i = 0; i < 5; i++) {
            b.x = rpm96_F428(&a.x);
            b.z = rpm5_F428(&a.z);
            SpawnPropAt(0x31, &b);
        }
        PlaySoundId(0x651, 0);
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, s16, 2) = 8;
            AF(o, s32, 0x58) = (s32) &D_sc03_031_80185FF0 | 0x40000000 | 0x20000000;
            AF(AF(o, u8 *, 0x20), s32, 0x20) = (s32) &D_sc03_031_801860F4;
            func_sc03_031_8017F95C(o);
            SyncModelPos(o);
            SetFlag(D_sc03_031_801860AC[AF(o, u16, 0x70) >> 12], 1);
        }
    }
}

void func_sc03_031_8017F6B8(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x500;
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc03_031_80185FF0 | 0x40000000 | 0x20000000);
    AF(AF(arg0, void *, 0x20), s32 *, 0x20) = &D_sc03_031_801860F4;
    func_sc03_031_8017F95C((s32) arg0);
    UpdateModelZYX((s32) arg0);
}

static inline s32 rpm_F728(s16 *p) {
    s32 r = rand() % 160;
    s32 x = *p;
    return (rand() & 1) ? x + r : x - r;
}

void func_sc03_031_8017F728(StageActor *o) {
    SV8 v;
    s32 i;

    if (o->timer != 0) {
        v.y = (u16)o->pos[1].h.i + D_sc03_031_8018609E[((u16)o->param & 0xF) * 4];
        for (i = 0; i < 10; i++) {
            v.x = rpm_F728(&o->pos[0].h.i);
            v.z = rpm_F728(&o->pos[2].h.i);
            SpawnPropAt(0x31, &v);
        }
        o->timer--;
    }
}

void func_sc03_031_8017F860(u8 *o) {
    WMtx m;
    SV8 r;
    V3 v;
    V3 p;
    s32 w;
    u16 *t;
    s32 x;
    t = &D_sc03_031_801860C4[(AF(o, u16, 0x70) >> 12) * 4];
    ((s16 *)&p.x)[1] = t[0];
    ((s16 *)&p.y)[1] = t[1];
    ((s16 *)&p.z)[1] = t[2];
    HeadingPitchTo(&w, o + 4, &p);
    x = w;
    m = GsIDMATRIX;
    r.z = 0;
    r.x = x;
    r.y = x >> 16;
    RotMatrixZYX(&r, &m);
    v.x = v.y = 0;
    v.z = -0x18000;
    ApplyMatrixLV(&m, &v, o + 0x44);
}

void func_sc03_031_8017F95C(u8 *o) {
    WMtx m;
    SV8 v;
    m = GsIDMATRIX;
    RotMatrixX(-0x300, &m);
    gte_SetRotMatrix(&m);
    gte_ldv0(&D_sc03_031_8018618C);
    gte_rtv0();
    gte_stsv(&v);
    AF(o, s16, 6) += v.x;
    AF(o, s16, 0xA) += v.y;
    AF(o, s16, 0xE) += v.z;
}

void func_sc03_031_8017FA7C(u8 *arg0) {
    D_sc03_031_801861E0[AF(arg0, u16, 2)]();
}

void func_sc03_031_8017FAB8(u8 *o) {
    u8 *p;
    s16 s;
    s32 k;

    p = AF(o, u8 *, 0x20);
    AF(p, s16, 0x28) = 0x340;
    AF(p, s16, 0x2A) = 0x100;
    AF(p, void *, 0x20) = &D_sc03_031_80186194;
    AF(p, u8, 0x27) = 0x65;
    AF(p, s32, 4) |= 0x70000000;
    if (AF(o, s32, 0x2C) == 0) {
        s = 0x3000;
    } else {
        s = (rand() % 4 + 2) << 12;
    }
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) = s;
    AF(p, s16, 0x10) = 0x400;
    StartSpriteAnim(p, o + 0x24, &D_sc03_031_801861A0);
    AF(o, s16, 2) = 1;
}

void func_sc03_031_8017FB84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 == 0) {
        MoveProp();
        if (StepSpriteAnim(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
            FreeProp((s32) arg0);
        }
    } else {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
    }
}

void func_sc03_031_8017FBE8(StageActor *arg0) {
    D_sc03_031_80186298[arg0->state]();
}

void func_sc03_031_8017FC24(StageActor *arg0) {
    ModelObj *temp_a0;
    ModelObj *temp_v0;
    ActorInit *temp_s1;

    temp_s1 = (((u16)arg0->param & 1) * 0x34) + &D_sc03_031_80186218;
    arg0->init = temp_s1;
    arg0->hitState = (u16) temp_s1->hitState;
    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001C810(temp_v0, temp_s1->model);
    temp_a0 = arg0->model;
    arg0->hitData = (s32) ((s32)temp_s1->hitData | 0x50000000);
    temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x8040);
    arg0->targetClass = 1;
    SetModelCullBox(arg0->model, 0x280, 0x1E0);
    arg0->state = 1;
    SetScript((s32) arg0, (s32) &D_sc03_031_80182694);
}

void func_sc03_031_8017FD00(u8 *o) {
    s16 s = AF(o, s16, 0xFC);
    if (s == 1) {
        AF(o, s16, 2) = 2;
        AF(o, s16, 0x5C) = 0;
    } else if (s == 2) {
        AF(o, s16, 2) = 4;
        SetLocalVelocity((s32) o, (s32) (((AF(o, u16, 0x70) & 1) * 0xC) + &D_sc03_031_80186280));
        AF(o, s32, 4) += AF(o, s32, 0x10) << 6;
        AF(o, s32, 8) += AF(o, s32, 0x14) << 6;
        AF(o, s32, 0xC) += AF(o, s32, 0x18) << 6;
        if (AF(o, s16, 0x70) == 0) {
            AF(o, s16, 0x5C) = 0x800;
            AF(o, s32, 0x58) = (s32) &D_sc03_031_80186208 | 0x40000000 | 0x10000000;
        } else {
            AF(o, s16, 0x5C) = 0;
        }
    }
}

void func_sc03_031_8017FDE4(u8 *arg0) {
    AF(arg0, s16, 2) = 3;
    StopMotion((s32) arg0);
    SetLocalVelocity((s32) arg0, (s32) (((AF(arg0, u16, 0x70) & 1) * 0xC) + &D_sc03_031_80186280));
    AF(arg0, s32, 0x1C) = 0x40;
    AF(arg0, s16, 0x34) = 0;
    PlaySoundId(0x5C4, 0);
}

void func_sc03_031_8017FE54(u8 *o) {
    SV8 v;
    u8 *p;
    s32 i;

    MoveObject(o);
    if (TickTimer(o) != 0) {
        AF(o, s16, 2) = 4;
    }
    if (!(AF(o, s32, 0x1C) & 7)) {
        v.x = AF(o, s16, 6) + ((AF(o, u16, 0x70) & 1) ? 0x80 : -0x80);
        v.y = -0x202;
        v.z = AF(o, u16, 0xE);
        for (i = -0x280; i < 0x300; i += 0x80) {
            p = (u8 *)SpawnPropAt(0x31, &v);
            if (p != 0) {
                AF(p, s32, 0x2C) = 1;
                AF(p, s16, 0xE) += i;
            }
        }
    }
}

void func_sc03_031_8017FF18(void) {
}

void func_sc03_031_8017FF20(s32 arg0) {
    s32 *var_v1;
    s32 var_a1;

    var_v1 = &g_Actors;
    var_a1 = 0;
    do {
        if (AF(var_v1, u16, 0) == 0xE5) {
            AF(var_v1, s16, 0xFC) = (s16) (arg0 + 1);
        }
        var_a1 += 1;
        var_v1 = (s32 *)((u8 *)var_v1 + 0x10C);
    } while (var_a1 < 0x60);
    if (arg0 == 0) {
        StartCameraShake((s32) &D_sc03_031_801862AC);
    }
}

void func_sc03_031_8017FF88(StageActor *arg0) {
    D_sc03_031_80186434[arg0->state]();
}

void func_sc03_031_8017FFC4(StageActor *arg0) {
    arg0->unkFC = (u16) ((u16)arg0->unkFC + 1);
    D_sc03_031_80186498[arg0->state]();
}

void func_sc03_031_80180008(StageActor *arg0) {
    arg0->unkFC = (u16) ((u16)arg0->unkFC + 1);
    D_sc03_031_801864FC[arg0->state]();
}

void func_sc03_031_8018004C(StageActor *arg0) {
    arg0->unkFC = (u16) ((u16)arg0->unkFC + 1);
    D_sc03_031_80186560[arg0->state]();
}

void func_sc03_031_80180090(StageActor *arg0) {
    arg0->unkFC = (u16) ((u16)arg0->unkFC + 1);
    D_sc03_031_801865C4[arg0->state]();
}

void func_sc03_031_801800D4(StageActor *arg0) {
    D_sc03_031_80186618[arg0->state]();
}

void func_sc03_031_80180110(StageActor *arg0) {
    arg0->state = 1;
}

void EventHostInit(StageActor *arg0) {
    if (GetProgress() == 0x96) {
        SpawnActorFromDef((s32) &D_sc03_031_801862FC, arg0);
        SpawnActorFromDef((s32) &D_sc03_031_80186310, arg0);
        SpawnActorFromDef((s32) &D_sc03_031_80186324, arg0);
        SpawnActorFromDef((s32) &D_sc03_031_80186338, arg0);
        arg0->state = 2;
        return;
    }
    if (GetProgress() >= 0xA0U) {
        func_sc03_031_8017FF20(1);
    }
    FreeActor(arg0);
}

void EventHostWaitZ(u8 *arg0) {
    if (D_80126B66 >= 0x800) {
        AF(arg0, s16, 2) = 3;
        StartEvent((s32) arg0, (s32) &D_sc03_031_8018634C);
        TakePlayerControlNoStop();
    }
}

void EventHostUpdate(StageActor *o) {
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
        o->message = 2;
        o->workE0 = 2;
        o->workE4 = 2;
        o->workE8 = 2;
        break;
    }
    o->workF8 = 0;
    if (UpdateScript(o) == 1) {
        SetProgress(0xA0);
        EndEvent(o);
        FreeActor(o);
    }
}

void func_sc03_031_801802E4(StageActor *arg0) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_031_80186444);
    SetScript((s32) arg0, (s32) &D_sc03_031_80186450);
    arg0->state = 1;
    arg0->reactive = 1;
    arg0->react = 0;
    arg0->model->scale.vx = 0x4000;
    arg0->model->scale.vy = 0x4000;
    arg0->model->scale.vz = 0x4000;
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    arg0->model->unk04 = 0x01000000;
    arg0->timer = 0x20;
    arg0->unkFC = 0;
}

void func_sc03_031_801803AC(StageActor *o) {
    u16 i = ((u16)o->unkFC >> 1) % 6;
    QueueImage(D_sc03_031_80186460[i]);
    o->pos[0].h.i -= 8;
    if (--o->timer == 0) {
        o->state = 2;
    }
}

void func_sc03_031_8018043C(StageActor *arg0) {
    s32 temp_v1;

    temp_v1 = (s32)arg0->parent->message;
    switch (temp_v1) {                              /* irregular */
    case 0:
        QueueImage((s32) &D_sc03_031_801A46CC);
        return;
    case 1:
        QueueImage(*(s32 *)((u8 *)&D_sc03_031_80186478 + (((u16)arg0->unkFC * 2) & 0x1C)));
        return;
    case 2:
        arg0->state = 3;
        arg0->unkFC = 0U;
        arg0->parent->message = 0;
        return;
    }
}

void func_sc03_031_801804EC(StageActor *arg0) {
    u16 temp_v0;

    QueueImage(*(s32 *)((u8 *)&D_sc03_031_80186478 + (((u16)arg0->unkFC * 2) & 0x1C)));
    temp_v0 = (u16)arg0->workFE + 0x40;
    arg0->workFE = temp_v0;
    if (((s16) temp_v0 >= 0x201) || ((s16) temp_v0 < 0x600)) {
        arg0->unkFC = 8U;
    }
    arg0->pos[0].h.i = (u16) ((u16)arg0->pos[0].h.i - 2);
    arg0->pos[1].h.i = (s16) (-0x32B - ((s32) (rsin((s32) (s16) (u16)arg0->workFE) << 6) >> 0xC));
    if ((s16) (u16)arg0->workFE == 0x800) {
        arg0->state = 2;
        func_sc03_031_8017FF20(0);
        PlaySoundId(0x63F, 0);
    }
}

void func_sc03_031_801805B8(StageActor *arg0) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_031_801864A8);
    SetScript((s32) arg0, (s32) &D_sc03_031_801864B4);
    arg0->state = 1;
    arg0->reactive = 1;
    arg0->react = 0;
    arg0->model->scale.vx = 0x4000;
    arg0->model->scale.vy = 0x4000;
    arg0->model->scale.vz = 0x4000;
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    arg0->model->unk04 = 0x01000000;
    arg0->timer = 0x20;
    arg0->unkFC = 0;
}

void func_sc03_031_80180680(StageActor *o) {
    u16 i = ((u16)o->unkFC >> 1) % 6;
    QueueImage(D_sc03_031_801864C4[i]);
    o->pos[0].h.i -= 8;
    if (--o->timer == 0) {
        o->state = 2;
    }
}

void func_sc03_031_80180710(StageActor *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->parent->workE0;
    switch (temp_v1) {                              /* irregular */
    case 0:
        QueueImage((s32) &D_sc03_031_801AA18C);
        return;
    case 1:
        QueueImage(*(s32 *)((u8 *)&D_sc03_031_801864DC + (((u16)arg0->unkFC * 2) & 0x1C)));
        return;
    case 2:
        arg0->state = 3;
        arg0->unkFC = 0U;
        arg0->parent->workE0 = 0;
        return;
    }
}

void func_sc03_031_801807C0(StageActor *arg0) {
    u16 temp_v0;

    QueueImage(*(s32 *)((u8 *)&D_sc03_031_801864DC + (((u16)arg0->unkFC * 2) & 0x1C)));
    temp_v0 = (u16)arg0->workFE + 0x40;
    arg0->workFE = temp_v0;
    if (((s16) temp_v0 >= 0x201) || ((s16) temp_v0 < 0x600)) {
        arg0->unkFC = 8U;
    }
    arg0->pos[0].h.i = (u16) ((u16)arg0->pos[0].h.i - 2);
    arg0->pos[1].h.i = (s16) (-0x32B - ((s32) (rsin((s32) (s16) (u16)arg0->workFE) << 6) >> 0xC));
    if ((s16) (u16)arg0->workFE == 0x800) {
        arg0->state = 2;
    }
}

void func_sc03_031_80180878(StageActor *arg0) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_031_8018650C);
    SetScript((s32) arg0, (s32) &D_sc03_031_80186518);
    arg0->state = 1;
    arg0->reactive = 1;
    arg0->react = 0;
    arg0->model->scale.vx = 0x4000;
    arg0->model->scale.vy = 0x4000;
    arg0->model->scale.vz = 0x4000;
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    arg0->model->unk04 = 0x01000000;
    arg0->timer = 0x20;
    arg0->unkFC = 0;
}

void func_sc03_031_80180940(StageActor *o) {
    u16 i = ((u16)o->unkFC >> 1) % 6;
    QueueImage(D_sc03_031_80186528[i]);
    o->pos[0].h.i += 8;
    if (--o->timer == 0) {
        o->state = 2;
    }
}

void func_sc03_031_801809D0(StageActor *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->parent->workE4;
    switch (temp_v1) {                              /* irregular */
    case 0:
        QueueImage((s32) &D_sc03_031_801AFC4C);
        return;
    case 1:
        QueueImage(*(s32 *)((u8 *)&D_sc03_031_80186540 + (((u16)arg0->unkFC * 2) & 0x1C)));
        return;
    case 2:
        arg0->state = 3;
        arg0->unkFC = 0U;
        arg0->parent->workE4 = 0;
        return;
    }
}

void func_sc03_031_80180A80(StageActor *arg0) {
    u16 temp_v0;

    QueueImage(*(s32 *)((u8 *)&D_sc03_031_80186540 + (((u16)arg0->unkFC * 2) & 0x1C)));
    temp_v0 = (u16)arg0->workFE + 0x40;
    arg0->workFE = temp_v0;
    if (((s16) temp_v0 >= 0x201) || ((s16) temp_v0 < 0x600)) {
        arg0->unkFC = 8U;
    }
    arg0->pos[0].h.i = (u16) ((u16)arg0->pos[0].h.i + 2);
    arg0->pos[1].h.i = (s16) (-0x32B - ((s32) (rsin((s32) (s16) (u16)arg0->workFE) << 6) >> 0xC));
    if ((s16) (u16)arg0->workFE == 0x800) {
        arg0->state = 2;
    }
}

void func_sc03_031_80180B38(StageActor *arg0) {
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_031_80186570);
    SetScript((s32) arg0, (s32) &D_sc03_031_8018657C);
    arg0->state = 1;
    arg0->reactive = 1;
    arg0->react = 0;
    arg0->model->scale.vx = 0x4000;
    arg0->model->scale.vy = 0x4000;
    arg0->model->scale.vz = 0x4000;
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    arg0->model->unk04 = 0x01000000;
    arg0->timer = 0x20;
    arg0->unkFC = 0;
}

void func_sc03_031_80180C00(StageActor *o) {
    u16 i = ((u16)o->unkFC >> 1) % 6;
    QueueImage(D_sc03_031_8018658C[i]);
    o->pos[0].h.i += 8;
    if (--o->timer == 0) {
        o->state = 2;
    }
}

void func_sc03_031_80180C90(StageActor *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->parent->workE8;
    switch (temp_v1) {                              /* irregular */
    case 0:
        QueueImage((s32) &D_sc03_031_801B570C);
        return;
    case 1:
        QueueImage(*(s32 *)((u8 *)&D_sc03_031_801865A4 + (((u16)arg0->unkFC * 2) & 0x1C)));
        return;
    case 2:
        arg0->state = 3;
        arg0->unkFC = 0U;
        arg0->parent->workE8 = 0;
        return;
    }
}

void func_sc03_031_80180D40(StageActor *arg0) {
    u16 temp_v0;

    QueueImage(*(s32 *)((u8 *)&D_sc03_031_801865A4 + (((u16)arg0->unkFC * 2) & 0x1C)));
    temp_v0 = (u16)arg0->workFE + 0x40;
    arg0->workFE = temp_v0;
    if (((s16) temp_v0 >= 0x201) || ((s16) temp_v0 < 0x600)) {
        arg0->unkFC = 8U;
    }
    arg0->pos[0].h.i = (u16) ((u16)arg0->pos[0].h.i + 2);
    arg0->pos[1].h.i = (s16) (-0x32B - ((s32) (rsin((s32) (s16) (u16)arg0->workFE) << 6) >> 0xC));
    if ((s16) (u16)arg0->workFE == 0x800) {
        arg0->state = 2;
    }
}

void func_sc03_031_80180DF8(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_031_801865E4) != 0) {
        arg0->reactive = 1;
        arg0->reactMask = 1;
        SetScript(arg0, (s32) &D_sc03_031_80182694);
        arg0->state = 1;
    }
}

void func_sc03_031_80180E54(void) {
}

void func_sc03_031_80180E5C(void) {
    UpdateClockTint();
}

s32 func_sc03_031_80180E7C(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x21;
    if ((u32) (arg0 - 0x96) >= 0x32U) {
        var_v0 = 0x18;
    }
    return var_v0;
}

void func_sc03_031_80180E98(StageActor *arg0) {
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

static inline s32 chk_floor_80180F0C(Mover *o) {
    SV8 a;
    SV8 b;
    a.x = o->pos[0].h.i;
    a.y = o->pos[1].h.i;
    a.z = o->pos[2].h.i;
    b = a;
    b.y += 8;
    if (TraceMap(1, &a, &b) & 0x6000) {
        return 1;
    }
    StopWithGravity(o);
    return 0;
}

void func_sc03_031_80180F0C(u8 *o) {
    if (chk_floor_80180F0C(o) == 0) {
        AF(o, s16, 2) = 8;
        AF(o, s16, 0x98) = 0;
    } else if (AF(o, s32, 0xC4) & 4) {
        func_sc03_031_80180FE4((s32)o);
    } else {
        func_sc03_031_80181030(o);
    }
}

s32 func_sc03_031_80180FE4(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
    SetScript(arg0, (s32) &D_sc03_031_801BF57C);
    return StopWithGravity(arg0);
}

void func_sc03_031_80181030(u8 *o) {
    V3 v;
    u8 *p;
    s32 r;
    s32 d;
    AF(o, s16, 2) = 1;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x24;
    p = o + 0x88;
    v.x = AF(o, s16, 6) - AF(p, s16, 0);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(p, s16, 4);
    Square0(&v, &v);
    if (v.x + v.z > 0x8FFFF) {
        AF(o, s16, 0xFC) = HeadingToPoint(o + 4, p);
    } else {
        r = rand() & 0x3FF;
        d = r - 0x200;
        if (d < 0) {
            d = r - 0x500;
        } else {
            d = r + 0x100;
        }
        AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + d) & 0xFFF;
    }
    StopWithGravity(o);
    SetScript(o, &D_sc03_031_801BF164);
}

s32 func_sc03_031_80181138(StageActor *arg0) {
    arg0->state = 2;
    arg0->stateCount = 0;
    return SetScript(arg0, (s32) &D_sc03_031_801BF01C);
}

void func_sc03_031_80181168(StageActor *arg0) {
    arg0->state = 3;
    if (arg0->unk86 & 2) {
        arg0->stateCount = 1;
        arg0->timer = 0x28;
        SetScript(arg0, (s32) &D_sc03_031_801BF20C);
        arg0->workFE = 0;
        return;
    }
    arg0->stateCount = 0;
    SetScript(arg0, (s32) &D_sc03_031_801BF294);
    arg0->timer = 0x19;
    arg0->unk86 = (u16) (arg0->unk86 | 2);
}

void func_sc03_031_801811EC(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 4);
        if (AF(o, s32, 0x1C) == 0xF) {
            SpawnHeadMarker(o, -0x78);
            PlaySoundId(0x6A9, 0);
        }
        if (TickTimer(o)) {
            AF(o, s16, 2) = 3;
            if (AF(o, u16, 0x86) & 2) {
                AF(o, s16, 0x34) = 1;
                AF(o, s32, 0x1C) = 0x28;
                SetScript(o, &D_sc03_031_801BF20C);
                AF(o, s16, 0xFE) = 0;
                return;
            }
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc03_031_801BF294);
            AF(o, s32, 0x1C) = 0x19;
            AF(o, u16, 0x86) |= 2;
        }
        break;
    case 1:
        if (AF(o, s32, 0x1C) >= 0x16) {
            AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 6);
        }
        SetForwardVelocity(o, D_sc03_031_801B6E34);
        if (MoveOnGround(o) != 0x2000) {
            RestorePrevPos(o);
        }
        if (--AF(o, s16, 0xFE) <= 0) {
            SpawnKind1C(o, 0);
            AF(o, s16, 0xFE) = 8;
        }
        if (TickTimer(o)) {
            func_sc03_031_80181030(o);
        }
        if (TargetInSight(o, 0x200, 0x1000)) {
            func_sc03_031_801813B4(o);
        }
        break;
    }
}

void func_sc03_031_801813B4(StageActor *arg0) {
    arg0->state = 4;
    arg0->stateCount = 0;
    SetScript(arg0, (s32) &D_sc03_031_801BF364);
    arg0->timer = 0x14;
}

void func_sc03_031_801813F8(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s32, 0x1C) == 7) {
            ActorSegmentDamagesPlayer(o, &D_sc03_031_801B6EC4, &D_sc03_031_801B6EC4 + 8, 0xB);
        }
        break;
    case 1:
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 6);
        break;
    case 2:
        if (AF(o, s32, 0x1C) == 0xA) {
            ActorSegmentDamagesPlayer(o, &D_sc03_031_801B6EC4, &D_sc03_031_801B6EC4 + 8, 0xB);
        }
        break;
    }
    if (TickTimer(o)) {
        switch (AF(o, u16, 0x34)) {
        case 0:
            if (TargetInSight(o, 0x400, 0x4000)) {
                AF(o, s16, 0x34) = 1;
                SetScript(o, &D_sc03_031_801BEF74);
                AF(o, s32, 0x1C) = 0xA;
            } else {
                AF(o, s16, 2) = 2;
                AF(o, s16, 0x34) = 0;
                SetScript(o, &D_sc03_031_801BF01C);
            }
            break;
        case 1:
            AF(o, s16, 0x34) = 2;
            AF(o, s32, 0x1C) = 0x18;
            SetScript(o, &D_sc03_031_801BF42C);
            break;
        case 2:
            AF(o, s16, 2) = 2;
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc03_031_801BF01C);
            break;
        }
    }
}

s32 func_sc03_031_8018156C(s32 arg0) {
    s32 *var_s1;
    s32 temp_v0;

    var_s1 = &D_sc03_031_801B6ED8;
    if (!(AF(arg0, u16, 0x70) & 0x2000)) {
        var_s1 = &D_sc03_031_801B6ED8 + 0xC;
    }
    AF(arg0, s16, 2) = 7;
    SetScript(arg0, AF(var_s1, s32, 0));
    UpdateModelZYX(arg0);
    StopMotion(arg0);
    SetForwardVelocity(arg0, AF(var_s1, s32, 4));
    temp_v0 = AF(var_s1, s32, 8);
    AF(arg0, s32, 0x1C) = temp_v0;
    return temp_v0;
}

void func_sc03_031_801815EC(u8 *o) {
    u8 t;

    D_sc03_031_801B6EF0[AF(o, u16, 2)](o);
    if (AF(o, u16, 0) != 0 && IsActorFar(o) != 0) {
        AF(o, s16, 0x100) = 1;
        t = AF(o, u8, 0xC1);
        if (t == 5 || t == 0xD || t == 0xB || t == 0xE) {
            GiveItem(7);
        }
        DespawnActor(o);
    }
}

void func_sc03_031_80181690(s32 arg0, s32 arg1, s32 arg2) {
    PlaySoundId(0x6AA, 0, arg2);
}

void func_sc03_031_801816B4(u8 *arg0) {
    if (AF(arg0, u8, 0x5E) == 0xC) {
        PlaySoundId(0x9DA, 0);
    }
}

void func_sc03_031_801816E4(s32 arg0) {
    MoveCollidePassable(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_sc03_031_80181030(arg0);
    }
}

void func_sc03_031_80181728(u8 *o) {
    if (AF(o, s32, 0x1C) >= 4) {
        AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xFC), 8);
    }
    SetForwardVelocity(o, D_sc03_031_801B6E30);
    if (MoveOnGround(o) != 0x2000) {
        RestorePrevPos(o);
    }
    if (TickTimer(o) != 0) {
        func_sc03_031_80181138((s32) o);
    }
}

void func_sc03_031_801817D0(u8 *o) {
    V3 v;

    if (AF(o, u16, 0x34) == 0 && (AF(o, u16, 0x72) & 0x4000)) {
        v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
        v.y = 0;
        v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
        Square0(&v, &v);
        if (v.x + v.z < 0x90000 && DistSqToTarget(o) <= 0x10000) {
            func_sc03_031_80181168((s32) o);
        } else {
            func_sc03_031_80181030(o);
        }
    }
}

void func_sc03_031_80181894(s32 arg0, s32 arg1) {
    if (DistSqToTarget(arg0, arg1) < D_sc03_031_801B6ED4) {
        ShowModel(arg0);
        func_sc03_031_8018156C(arg0);
    }
}

void func_sc03_031_801818E4(s32 arg0) {
    u16 temp_v0;

    MoveObject(arg0);
    if (AF(arg0, u16, 0x70) & 0x2000) {
        temp_v0 = AF(arg0, u16, 0xFE) - 1;
        AF(arg0, u16, 0xFE) = temp_v0;
        if ((temp_v0 << 0x10) <= 0) {
            SpawnKind1C(arg0, 0);
            AF(arg0, u16, 0xFE) = 8U;
        }
    }
    if (TickTimer(arg0) != 0) {
        AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
        AF(arg0, s16, 2) = 3;
        if (AF(arg0, u16, 0x86) & 2) {
            AF(arg0, s16, 0x34) = 1;
            AF(arg0, s32, 0x1C) = 0x28;
            SetScript(arg0, (s32) &D_sc03_031_801BF20C);
            AF(arg0, u16, 0xFE) = 0U;
            return;
        }
        AF(arg0, s16, 0x34) = 0;
        SetScript(arg0, (s32) &D_sc03_031_801BF294);
        AF(arg0, s32, 0x1C) = 0x19;
        AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
    }
}

void func_sc03_031_801819D0(u8 *arg0) {
    s32 temp_v0;
    u8 temp_v1;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        if (AF(arg0, s16, 0x100) == 0) {
            GainStat0FromActor();
        }
        temp_v1 = AF(arg0, u8, 0xC1);
        if ((temp_v1 == 5) || (temp_v1 == 0xD) || (temp_v1 == 0xB) || (temp_v1 == 0xE)) {
            GiveItem(7);
        }
        DespawnActor((s32) arg0);
        return;
    }
    temp_v0 = MoveCollidePassable((s32) arg0);
    if (temp_v0 & 0x2000) {
        if (temp_v0 & 0x1000) {
            SetReactionStep((s32) arg0, 0x12);
            return;
        }
        func_sc03_031_80181030((s32) arg0);
    }
}

void func_sc03_031_80181A98(u8 *o) {
    if (SetupActor(o, &D_sc03_031_801B6E48) != 0) {
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -1;
        AF(o, u8, 0xC1) = 0;
        AF(o, u8 *, 0xBC) = &D_sc03_031_801B6E7C;
        SpawnShadow(o);
        SnapToGround(o);
        if (AF(o, u16, 0x70) & 0x6000) {
            AF(o, s16, 2) = 6;
            SetScript(o, &D_sc03_031_801BF01C);
            HideModel(o);
        } else {
            func_sc03_031_80181030(o);
        }
    }
}

void func_sc03_031_80181B3C(StageActor *arg0) {
    D_sc03_031_801BFB74[arg0->state]();
}

void func_sc03_031_80181B78(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc03_031_801BF864) != 0) {
        if (!(GetFlag(D_sc03_031_801BF8CC[AF(arg0->message, u16, 0xA)]) & 0xFF)) {
            arg0->ext0 = SpawnTalkMarker(arg0, (s32) &func_sc03_031_80182224);
        } else {
            arg0->param = (u16) ((u16)arg0->param | 0x4000);
        }
        temp_v0 = SpawnActorArg(0x8F, (s32) (s16) (u16)arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc03_031_80182694);
        arg0->state = 1;
    }
}

void func_sc03_031_80181C4C(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc03_031_80181C74(void) {
}

void func_sc03_031_80181C7C(StageActor *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0->message;
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (GetFlag(0x1D) & 0xFF) {
            D_sc03_031_801BFAB0 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc03_031_801BFA14[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc03_031_801BFA9C = 0;
            SetFlag(D_sc03_031_801BFA14[AF(temp_s0, u16, 0xC)], 1);
            D_sc03_031_801BFA98 = 2;
        } else {
            D_sc03_031_801BFAB0 = AF(temp_s0, s32, 0);
            var_v0 = D_sc03_031_801BF990[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc03_031_801BFA98 = 0;
            D_sc03_031_801BFA9C = var_v0;
        }
        RunScript((s32) arg0, (s32) &D_sc03_031_801BFAC4);
    } else {
        var_a1 = &D_sc03_031_801BFB30;
        *var_a1 = AF(temp_s0, s32, 0);
        RunScript((s32) arg0, (s32) (var_a1 - 7));
    }
    arg0->state = 4;
    arg0->param = (u16) ((u16)arg0->param | 0x8000);
}

void func_sc03_031_80181DC8(StageActor *arg0) {
    void *temp_s2;

    temp_s2 = arg0->message;
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        if (GetFlag(D_sc03_031_801BF8CC[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc03_031_801BF8CC[AF(temp_s2, u16, 0xA)] == 0x54) {
                SetProgress(0x5A);
                SetFlag(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (GetFlag(0x1D) & 0xFF)) {
                UploadFlagImages(0);
            }
            if (func_sc03_031_80181FCC() == 1) {
                GiveItem(0x26);
            }
            arg0->param = (u16) ((u16)arg0->param & 0x8000);
            FreeActor(arg0->ext0);
        }
        arg0->state = 2;
    }
}

void func_sc03_031_80181EE8(StageActor *arg0) {
    arg0->state = 2;
    FreeActor(arg0->ext0);
}

void func_sc03_031_80181F14(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_031_80181F24(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc03_031_80181F34(u8 *arg0) {
    SetFlag(D_sc03_031_801BF8CC[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc03_031_80181F74(u8 *arg0) {
    AddMoney((s32) &g_Player, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc03_031_80181FA8(void) {
    return func_80174764() == 1;
}

s32 func_sc03_031_80181FCC(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(GetFlag(D_sc03_031_801BF8CC[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc03_031_80182030(StageActor *arg0) {
    D_sc03_031_801BFB9C[arg0->state]();
}

void func_sc03_031_8018206C(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_031_801BF898) != 0) {
        arg0->unkFC = (u16) arg0->parent->id;
        if ((u16)arg0->param & 0x4000) {
            SetScript(arg0, (s32) &D_sc03_031_801C025C);
            arg0->hitState = 0;
        } else {
            SetScript(arg0, (s32) &D_sc03_031_801C003C);
        }
        arg0->state = 1;
    }
}

void func_sc03_031_801820F4(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->unkFC != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_031_801C004C);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_031_801C0154);
        arg0->hitState = 0x8C00;
    }
}

void func_sc03_031_801821B4(StageActor *arg0) {
    s32 f;

    if (arg0->animTimer == 0) {
        f = arg0->workFE;
        arg0->state = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc03_031_801C025C);
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_031_801C003C);
        }
        arg0->workFE = 0;
    }
}

s32 *func_sc03_031_80182224(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    Mover *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) g_PlayerModel + 0x34);
    gte_SetTransMatrix((u8 *) g_PlayerModel + 0x34);
    RotTransSV(&D_sc03_031_801BFB8C[0], &a, &f);
    RotTransSV(&D_sc03_031_801BFB8C[1], &b, &f);
    if (PathHitsModel(p->model, p->hitData, &a, &b) != 0 && TargetInFront(p, 0x300) != 0) {
        p->state = 3;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}
