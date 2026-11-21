#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_101_8017BE9C(void) {
}

void func_sc03_101_8017BEA4(void) {
}

void func_sc03_101_8017BEAC(void) {
}

void func_sc03_101_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void SpawnEffect();
extern void (*D_sc03_101_801872E0[])();
extern void PlaySe();
extern void func_sc03_101_8017C218();
extern void HidePlayerScene();
extern void SetPlayerFlag7E2();
extern void FreeEffect();
extern void (*D_sc03_101_801872F4[])();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern void (*D_sc03_101_80187308[])();
extern void func_800D22E4();
extern void func_sc03_101_8017C910();
extern void (*D_sc03_101_801873AC[])();
void func_sc03_101_8017DD60(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc03_101_801873B4[])();
void func_sc03_101_8017DD88(void);
extern void func_800D1EBC();
extern void (*D_sc03_101_801873C0[])();
extern void (*D_sc03_101_801873CC[])();
extern u8 D_sc03_101_801873DC;
extern void StartPlayerActionScript();
extern u8 D_sc03_101_801873E0;
extern void (*D_sc03_101_801873EC[])();
extern u8 D_sc03_101_801873E4;
extern void func_sc03_101_8017DFE0();
extern void (*D_sc03_101_801873F4[])();
extern void func_sc03_101_8017E35C();
extern void (*D_sc03_101_80196940[])();
extern void (*D_sc03_101_801969F4[])();
extern void (*D_sc03_101_801988E8[])();
extern void (*D_sc03_101_8019AA38[])();
extern void (*D_sc03_101_8019AADC[])();
extern void (*D_sc03_101_8019B168[])();
extern void (*D_sc03_101_8019B2AC[])();

void func_sc03_101_8017BEBC(s32 arg0) {
    SpawnEffect(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc03_101_8017BEF8(u8 *arg0) {
    D_sc03_101_801872E0[AF(arg0, u16, 2)]();
}

void func_sc03_101_8017BF34(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        PlaySe((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_101_8017BF84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc03_101_8017C218((s32) arg0);
}

void func_sc03_101_8017BFE0(u8 *arg0) {
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
    func_sc03_101_8017C218((s32) arg0);
}

void func_sc03_101_8017C064(u8 *arg0) {
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
    func_sc03_101_8017C218((s32) arg0);
}

void func_sc03_101_8017C1CC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_101_8017C218((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

extern void PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

void func_sc03_101_8017DE88(void);
extern s32 func_sc03_101_8017DE34();
extern u8 D_800AE6BD;
extern s32 FindEffectByKind();
extern s32 NextPlayerActionHandler();
extern s32 D_sc03_101_80187444[];
extern s32 func_8013B7F4();
extern s32 SpawnActorArg();
extern u8 D_sc03_101_80183BF4;
extern u8 D_sc03_101_80196454;
extern u8 D_sc03_101_80196474;
extern s32 SetupActor();
extern u8 D_sc03_101_80196538;
extern s32 MoveCollide();
extern void PlaySoundAtActor();
extern s32 MoveOnGround();
extern void CarryPlayer();
extern void (*D_sc03_101_8019AA0C[])();
extern void func_sc03_101_8018095C();
extern void func_sc03_101_80181FA8();
extern void UpdateModelZYX();
extern void func_sc03_101_80181F30();
extern s32 func_sc03_101_80182178();
extern s8 D_sc03_101_8019DCF8;
extern s8 D_sc03_101_8019DCF9;
extern s8 D_sc03_101_8019DCFA;
extern void func_sc03_101_801809B0();
extern s32 AllocActorModel();
extern s32 D_sc03_101_8019A9DC;
extern u8 D_sc03_101_8019AA28;
extern void RejectSpawn();
extern void InitNullModel();
extern void NextState();
extern void func_sc03_101_801811C8();
extern u8 D_sc03_101_8019AA40;
extern void func_sc03_101_801814F8();
extern s32 func_sc03_101_801812B4();
extern s32 func_sc03_101_80181138();
extern void SetFlag();
extern s32 IsEventDone();
extern void EndEvent();
extern void func_800D1724();
extern u8 D_sc03_101_8019DE8C;
extern u16 D_sc03_101_8019DE84;
extern u16 D_sc03_101_8019DE86;
extern s16 D_sc03_101_8019DE88;
extern s16 D_sc03_101_8019DE8A;
extern s32 func_sc03_101_801820F0();
extern void func_sc03_101_8018201C();
extern void PosToSVec();
extern s32 func_sc03_101_80182564();
extern s32 func_sc03_101_801828A8();
extern void func_sc03_101_8018278C();
extern s8 D_sc03_101_8019E0B4;
extern void func_sc03_101_80182EF8();

extern s16 D_sc03_101_8019DD84;

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

extern void BumpSub2Copy();
extern void SpawnEffectOn();
extern void (*D_sc03_101_80198A84[])();
extern u8 D_sc03_101_80198884;
extern void SetModelCullBox();
extern s32 SetState();
extern u8 D_sc03_101_8019A9C0;
extern void StartEvent();
extern s32 func_sc03_101_801807F4();

extern u8 D_sc03_101_80195FF4;
extern s32 D_sc03_101_8019DCE8;
extern s32 D_sc03_101_8019DCEC;
extern s32 D_sc03_101_8019DCF0;
extern s32 D_sc03_101_8019DCF4;
extern s32 D_sc03_101_8019E19C;
extern s32 D_sc03_101_80187404[];
extern void func_sc03_101_8017E498();
extern void QueueImage();

extern void func_sc03_101_80182658();

extern void StopWithGravity();
extern void func_8001CA1C();
extern SV8 D_sc03_101_80196810[];
extern u8 D_sc03_101_80196574;
extern u8 D_sc03_101_80196634;
extern u8 D_sc03_101_801966BC;
extern u8 D_sc03_101_8019677C;
extern u8 D_sc03_101_80196860;
extern u8 D_sc03_101_80196884;
extern u8 D_sc03_101_80196870;
extern u8 D_sc03_101_8019687C;


extern void PushAlongView();
extern s32 D_sc03_101_8019AAC8[];

extern u8 D_sc03_101_80187574;
extern u8 D_sc03_101_8018781C;
s32 func_sc03_101_8017E30C(s32 arg0);
extern s32 *g_SpawnListFixed;
extern s32 *g_SpawnListRanged;
extern s32 D_8012704C;
extern u8 D_sc03_101_80187858;
extern u8 D_sc03_101_801878E4;
extern void *g_PlayerModel;


typedef struct { s16 vx, vy, vz, pad; } SV;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];

typedef struct { u16 x, y, z, pad; } UV4;
typedef void (*VoidFn)();
extern u8 g_Actors;
extern VoidFn D_sc03_101_8019656C[];
extern s32 HeadingTo();
extern s32 PathHitsModel();

typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
extern s8 D_sc03_101_801872B4[];
extern u16 D_800B99DA;
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern void DrawPrimG4Mtx();
extern WMtx GsIDMATRIX;
extern void DrawPrimLineG2Mtx();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
extern s16 D_sc03_101_8019B1CC;
extern s16 D_sc03_101_8019B1CE;
extern s16 D_sc03_101_8019B1D0;
extern Blk30 D_sc03_101_8019B1D4;
extern s16 D_sc03_101_8019B204;
extern s16 D_sc03_101_8019B206;
extern s16 D_sc03_101_8019B208;
extern Blk30 D_sc03_101_8019B20C;
extern s16 D_sc03_101_8019B23C;
extern s16 D_sc03_101_8019B23E;
extern s16 D_sc03_101_8019B240;
extern Blk30 D_sc03_101_8019B244;
extern s16 D_sc03_101_8019B274;
extern s16 D_sc03_101_8019B276;
extern s16 D_sc03_101_8019B278;
extern Blk30 D_sc03_101_8019B27C;
extern Blk30 g_Lights;
extern void SetAmbientColor();
extern void ApplyLight();

void func_sc03_101_8017C218(u8 *arg0) {
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
    t = D_sc03_101_801872B4;
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
    t = D_sc03_101_801872B4;
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
        t = D_sc03_101_801872B4;
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

void func_sc03_101_8017C524(u8 *arg0) {
    D_sc03_101_801872F4[AF(arg0, u16, 2)]();
}

void func_sc03_101_8017C560(u8 *arg0) {
    PlaySe((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_101_8017C5A0(u8 *arg0) {
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
    func_sc03_101_8017C218((s32) arg0);
}

void func_sc03_101_8017C610(u8 *arg0) {
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
    func_sc03_101_8017C218((s32) arg0);
}

void func_sc03_101_8017C69C(u8 *arg0) {
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
    func_sc03_101_8017C218((s32) arg0);
}

void func_sc03_101_8017C770(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc03_101_8017C218((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    FreeEffect((s32) arg0);
}

void func_sc03_101_8017C7C4(u8 *arg0) {
    D_sc03_101_80187308[AF(arg0, u16, 2)]();
}

typedef struct { u8 b[0x34]; } R34;
extern s32 DistSqToPlayer();
extern s16 g_PlayerHitKind;
extern s32 ActorSegmentHitsPlayer();
extern s16 D_80126B62;
extern u16 D_sc03_101_801964A8[];
extern u16 D_sc03_101_801964D0[];
extern u16 D_sc03_101_801964F8[];
extern VoidFn D_sc03_101_80196520[];
extern void PlaySoundFor();
typedef struct { u16 v[6]; } U12;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern PtSys D_sc03_101_8019DD78;
extern void func_sc03_101_801828E4();
extern s16 D_sc03_101_8019DD7E;
extern void func_sc03_101_801829F8();

typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern OtRef g_WorldOtOrg[];
extern Ot14 g_WorldOt[];
extern s32 AddDrawModeAbr();
extern u8 D_sc03_101_8019DD80;
extern u8 D_sc03_101_8019DD81;
extern u8 D_sc03_101_8019DD82;

extern SV4 D_sc03_101_8019B18C;
extern SV4 D_sc03_101_8019B194;
extern SV4 D_sc03_101_8019B19C;
extern SV4 D_sc03_101_8019B1A4;
extern SV4 D_sc03_101_8019B1AC;
extern SV4 D_sc03_101_8019B1B4;
extern SV4 D_sc03_101_8019B1BC;
extern SV4 D_sc03_101_8019B1C4;
extern s32 GetCameraHeading();

typedef struct { s16 xl, x, yl, y, zl, z, pl, ph; } HV16;
typedef struct { u16 a, b, c, d; } U16x4;
extern void SpawnActor();
extern u8 D_sc03_101_80198930;
extern U16x4 D_sc03_101_80198A34[];
extern s32 SetupActorTrans();


extern s32 TickTimer();
extern s16 D_sc03_101_8019A9F8[];
extern void func_sc03_101_801806B8();

extern void FreeActor();
extern void SpawnKind1C();
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
extern void func_sc03_101_80181914();

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 g_CameraFocus;
extern u8 D_sc03_101_801873FC[];
extern s32 GetObjPadPressed();
extern void func_sc03_101_8017E174();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
extern s32 D_800AF648[];


typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 w; } Arg8C51C;
typedef struct { u8 b[4]; } B4;
extern SV4 D_sc03_101_8019C988;
extern void SpawnActorFromDef();

extern s32 GetFlag();
extern void SetShapeCircle();
extern u8 D_sc03_101_8019DCFC;
extern u8 D_sc03_101_8019C978;
extern u8 D_sc03_101_8019C97C;
extern u8 D_sc03_101_8019A974;
extern u8 D_sc03_101_8019A9A8;
extern s32 D_sc03_101_8019A9E8[];
extern s32 AllocActorSprite();
extern void func_8001CD9C();

typedef struct { s32 a; s32 b; } P8;
extern void SetProgress();

typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
typedef struct { s16 v; } S16R;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
extern s32 ActorTouchesPlayer();
extern VoidFn D_sc03_101_80196894[];
extern s32 SetLocalVelocityXZ();
extern s32 DistSqToTarget();
extern s32 TurnStep();
extern s16 D_80126CB6;
extern u8 D_sc03_101_80196804;
extern s32 HeadingToTarget();
extern void SpawnShadow();
extern s32 HeadingToSV();
extern void GainStat0FromActor();
extern s16 D_sc03_101_80196906[];
extern u8 D_sc03_101_801968CC;
extern u16 D_sc03_101_80196900[];
extern u16 D_sc03_101_80196902[];
extern u16 D_sc03_101_80196904[];
extern u8 D_sc03_101_8019694C;
extern u8 D_sc03_101_801969AC;
extern s32 ActorSegmentDamagesPlayer();
extern u8 D_sc03_101_801988B8;
extern void UpdateModelRot();
extern CV4 D_sc03_101_8019C980;
extern CV4 D_sc03_101_8019C984;
extern s16 g_PlayerX;
extern u16 D_80126B66;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern CV4 D_sc03_101_8019C990;
extern SV4 D_sc03_101_8019B178;
extern void func_sc03_101_80182E40();
extern s32 IsOnScreen();
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern u8 D_sc03_101_8019E0B0[];
extern void func_8001CD50();
extern void func_sc03_101_80183284();
extern u8 D_sc03_101_8019DF70[];
extern s32 func_sc03_101_8018330C();
extern s32 ProjectPoint();
extern V16 D_sc03_101_8019B1F4;
extern s32 D_800A5EB0;
extern V16 D_sc03_101_8019B22C;
extern s32 D_800A5E90;

void func_sc03_101_8017C800(u8 *arg0) {
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

void func_sc03_101_8017C8B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc03_101_8017C910((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc03_101_8017C910(u8 *arg0) {
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

void func_sc03_101_8017CA80(u8 *obj) {
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

void func_sc03_101_8017D960(void) {
    g_SpawnListFixed = &D_sc03_101_80187574;
    g_SpawnListRanged = &D_sc03_101_8018781C;
    func_sc03_101_8017E30C(0);
}

void func_sc03_101_8017D9A0(void) {
    g_SpawnListFixed = &D_sc03_101_80187858;
    g_SpawnListRanged = &D_sc03_101_801878E4;
    func_sc03_101_8017E30C(1);
    D_8012704C = 1;
}

void func_sc03_101_8017D9EC(u8 *arg0) {
    D_sc03_101_801873AC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_101_8017DA28(u8 *arg0) {
    func_sc03_101_8017DD60();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_101_8017DA6C(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc03_101_8017DA90(u8 *arg0) {
    D_sc03_101_801873B4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_101_8017DACC(u8 *arg0) {
    func_sc03_101_8017DD88();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_101_8017DB0C(u8 *arg0) {
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

void func_sc03_101_8017DB88(void) {
    func_800D1EBC();
}

void func_sc03_101_8017DBA8(u8 *arg0) {
    D_sc03_101_801873C0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_101_8017DBE4(u8 *arg0) {
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

void func_sc03_101_8017DC58(u8 *arg0) {
    D_sc03_101_801873CC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_101_8017DC94(u8 *arg0) {
    func_sc03_101_8017DE88();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_101_8017DCD0(void) {
    return 0;
}

s32 func_sc03_101_8017DCD8(u8 *arg0) {
    PlaySoundId(0x1C, 0);
    ClearTimeChime();
    PlaySoundId(0x1D, 0);
    func_800D0C48(1);
    func_800D1E28();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_101_8017DD40(void) {
    func_800D1EBC();
}

void func_sc03_101_8017DD60(void) {
    StartPlayerActionScript((s32) &D_sc03_101_801873DC, 0x01000000);
}

void func_sc03_101_8017DD88(void) {
    StartPlayerActionScript((s32) &D_sc03_101_801873E0, 0x01000000);
}

void func_sc03_101_8017DDB0(u8 *arg0) {
    D_sc03_101_801873EC[AF(arg0, u8, 0x216)]();
}

void func_sc03_101_8017DDEC(s32 arg0) {
    BumpSub2Copy();
    SpawnEffectOn(0x19, arg0, 0x06960697, 0);
    func_sc03_101_8017DE34(arg0);
}

s32 func_sc03_101_8017DE34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = FindEffectByKind(arg0, 0x19);
    if (var_v0 == 0) {
        D_800AE6BD += 1;
        var_v0 = NextPlayerActionHandler(arg0);
    }
    return var_v0;
}

void func_sc03_101_8017DE88(void) {
    StartPlayerActionScript((s32) &D_sc03_101_801873E4, 0x01000000);
}

void func_sc03_101_8017DEB0(void) {
    g_CameraProjTarget = 0x1F4;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x2AA;
    D_8012696A = 0x600;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_101_8017DFE0, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_101_8017DFE0((s32) &g_Camera);
}

void func_sc03_101_8017DF48(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x3E8;
    g_CameraAngleTarget = 0x35;
    D_8012696A = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x73;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_101_8017DFE0, 1);
    SnapCamera((s32) &g_Camera);
    func_sc03_101_8017DFE0((s32) &g_Camera);
}

void func_sc03_101_8017DFE0(s32 arg0) {
    D_sc03_101_801873F4[AF(arg0, u8, 4)]();
}

void func_sc03_101_8017E01C(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc03_101_801873FC)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    func_sc03_101_8017E174((s32) arg0, (s32) &v);
}

typedef struct { s16 x, y; u16 c; s16 pad; } Rec8;
extern s32 GetVar();
extern s16 D_sc03_101_8019AA44[];
extern s16 D_sc03_101_8019AA46[];
extern Rec8 D_sc03_101_8019AAAC[];
extern s32 D_sc03_101_8019AABC[];
extern s32 D_sc03_101_8019DD38;
extern void InitSpriteKind2();
extern void InitNullSprite();

extern u8 D_sc03_101_8019A9B8;

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

extern s16 D_sc03_101_80187400[];

void func_sc03_101_8017E0BC(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = D_sc03_101_80187400[t];
    }
    v = *(B8 *)&g_CameraFocus;
    AF(&v, s16, 0) = 0xFC0;
    AF(&v, s16, 2) = -0x402;
    AF(&v, s16, 4) = 0x890;
    func_sc03_101_8017E174((s32) arg0, (s32) &v);
}

void func_sc03_101_8017E174(u8 *arg0, u8 *arg1) {
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

s32 func_sc03_101_8017E30C(s32 arg0) {
    return func_8013B7F4(D_sc03_101_80187444[arg0], 0);
}

void func_sc03_101_8017E33C(s32 arg0) {
    func_sc03_101_8017E35C(arg0);
}

void func_sc03_101_8017E35C(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    switch (D_sc03_101_8019E19C) {                  /* irregular */
    case 0:
        D_sc03_101_8019DCE8 = 1;
        D_sc03_101_8019DCEC = 0;
        D_sc03_101_8019DCF0 = 1;
        D_sc03_101_8019DCF4 = 1;
        D_sc03_101_8019E19C = 1;
        return;
    case 1:
        temp_v0 = D_sc03_101_8019DCE8 - 1;
        D_sc03_101_8019DCE8 = temp_v0;
        if (temp_v0 == 0) {
            D_sc03_101_8019DCE8 = 2;
            func_sc03_101_8017E498((s32) &D_sc03_101_80195FF4, D_sc03_101_8019DCEC * 6);
            D_sc03_101_8019DCEC = (D_sc03_101_8019DCEC + 1) & 7;
        }
        temp_v0_2 = D_sc03_101_8019DCF0 - 1;
        D_sc03_101_8019DCF0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            D_sc03_101_8019DCF0 = 8;
            QueueImage(D_sc03_101_80187404[D_sc03_101_8019DCF4]);
            D_sc03_101_8019DCF4 = (D_sc03_101_8019DCF4 + 1) & 0xF;
        }
        return;
    }
}

void func_sc03_101_8017E498(u16 *arg0, s32 arg1) {
    RECT r;

    r.x = arg0[arg1];
    r.y = arg0[arg1 + 1];
    r.w = arg0[arg1 + 2];
    r.h = arg0[arg1 + 3];
    MoveImage(&r, arg0[arg1 + 4], arg0[arg1 + 5]);
}

s32 func_sc03_101_8017E4F8(void) {
    if (D_8012704C == 0) {
        return 0x34;
    }
    return 0x46;
}

void func_sc03_101_8017E518(u8 *arg0) {
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
        a.x = D_sc03_101_801964A8[i];
        a.z = D_sc03_101_801964A8[i + 1];
        b.x = D_sc03_101_801964A8[i + 2];
        b.z = D_sc03_101_801964A8[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_101_801964D0[i];
        a.z = D_sc03_101_801964D0[i + 1];
        b.x = D_sc03_101_801964D0[i + 2];
        b.z = D_sc03_101_801964D0[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    for (i = 0; i < 20; i += 4) {
        a.x = D_sc03_101_801964F8[i];
        a.z = D_sc03_101_801964F8[i + 1];
        b.x = D_sc03_101_801964F8[i + 2];
        b.z = D_sc03_101_801964F8[i + 3];
        if (ActorSegmentHitsPlayer(arg0, &a, &b) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
    D_sc03_101_80196520[AF(arg0, u16, 2)](arg0);
    t = DistSqToPlayer(arg0);
    if (t > 0x3FFFF) {
        AF(arg0, s16, 0xFE) = 1;
        PlaySoundFor(4, 0x609, AF(arg0, u16, 0x70));
    } else if (--AF(arg0, s16, 0xFE) == 0) {
        AF(arg0, s16, 0xFE) = 4;
        PlaySoundFor(0x609, (u16)(((0x40000 - t) * 0x7F / 0x40000) | 0x1000), AF(arg0, u16, 0x70));
    }
}

void func_sc03_101_8017E7B0(u8 *arg0) {
    u8 unused[0x10];
    UV4 a;
    UV4 b;
    UV4 c;
    u8 *p;
    s32 i;
    s32 ang;

    p = &g_Actors;
    i = 0;
    D_sc03_101_8019656C[AF(arg0, u16, 2)]();
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

void func_sc03_101_8017E938(s32 arg0) {
    s32 o;

    o = AllocActorModel();
    AF(arg0, s32, 0x20) = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    StopWithGravity(arg0);
    AF(arg0, u16, 0x12) = D_sc03_101_80196810[AF(arg0, s16, 0xFC)].x;
    AF(arg0, u16, 0x16) = D_sc03_101_80196810[AF(arg0, s16, 0xFC)].y;
    AF(arg0, u16, 0x1A) = D_sc03_101_80196810[AF(arg0, s16, 0xFC)].z;
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_101_80196574);
        SetScript(arg0, &D_sc03_101_80196634);
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 1:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_101_801966BC);
        SetScript(arg0, &D_sc03_101_8019677C);
        AF(arg0, s16, 2) = 4;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x80000000;
        AF(arg0, s32, 0x1C) = 8;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, u8 *, 0x58) = &D_sc03_101_80196860;
        AF(arg0, u16, 0x5C) = 0x8000;
        AF(arg0, s16, 0xAE) = -9;
        AF(arg0, u8 *, 0xBC) = &D_sc03_101_80196884;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8 *, 0x78) = &D_sc03_101_80196538;
        AF(arg0, s32, 0xC4) |= 2;
        AF(arg0, s32, 0xCC) = SpawnActorArg(0x12F, 4, arg0);
        break;
    case 2:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_101_80196574);
        SetScript(arg0, &D_sc03_101_80196634);
        AF(arg0, s16, 2) = 6;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x2000;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x2000;
        break;
    case 3:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_101_801966BC);
        SetScript(arg0, &D_sc03_101_8019677C);
        AF(arg0, s16, 2) = 7;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        AF(arg0, s32, 0x1C) = 6;
        break;
    case 4:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_101_80196870);
        SetScript(arg0, &D_sc03_101_8019687C);
        AF(arg0, s16, 2) = 8;
        AF(AF(arg0, s32, 0x20), s32, 4) |= 0x08000000;
        AF(AF(arg0, s32, 0x20), s16, 0x1C) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x18) = 0x3C00;
        AF(AF(arg0, s32, 0x20), s16, 0x1A) = 0x3C00;
        break;
    case 5:
        func_8001CA1C(AF(arg0, s32, 0x20), &D_sc03_101_80196574);
        SetScript(arg0, &D_sc03_101_80196634);
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

void func_sc03_101_8017EDE4(StageActor *arg0) {
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

void func_sc03_101_8017EF78(StageActor *arg0) {
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

void func_sc03_101_8017F328(u8 *arg0) {
    s32 temp_v0;

    D_sc03_101_80196894[AF(arg0, u16, 2)]();
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

void func_sc03_101_8017F414(u8 *arg0) {
    D_sc03_101_80196940[AF(arg0, u16, 2)]();
}

void func_sc03_101_8017F450(u8 *arg0) {
    D_sc03_101_801969F4[AF(arg0, u16, 2)]();
}

void func_sc03_101_8017F48C(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xC800);
}

void func_sc03_101_8017F4A4(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_101_80196474) != 0) {
        arg0->reactive = 1;
        arg0->params = &D_sc03_101_80196454;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        SetScript(arg0, (s32) &D_sc03_101_80183BF4);
        arg0->state = 1;
        arg0->targetClass = 0;
        arg0->workFE = 1;
        SpawnActorArg(0x164, 0x555, arg0);
        SpawnActorArg(0x164, 0xAAA, arg0);
        SpawnActorArg(0x164, 0x1000, arg0);
    }
}

void func_sc03_101_8017F548(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + AF(arg0, u16, 0xFC));
}

void func_sc03_101_8017F564(StageActor *arg0) {
    ModelObj *temp_a2;

    if (SetupActor(arg0, (s32) &D_sc03_101_80196538) != 0) {
        temp_a2 = arg0->model;
        temp_a2->unk04 = (s32) ((s32)temp_a2->unk04 | 0x80000000);
        arg0->reactive = 1;
        arg0->params = &D_sc03_101_80196454;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 2);
        SetScript(arg0, (s32) &D_sc03_101_80183BF4, (s32) temp_a2);
        arg0->state = 1;
        arg0->targetClass = 0;
    }
}

void func_sc03_101_8017F5E8(u8 *arg0, s32 arg2) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x12) = (s16) (AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12) + AF(arg0, u16, 0x70));
    UpdateModelZYX((s32) arg0, (s32) temp_a1);
}

void func_sc03_101_8017F624(u8 *arg0) {
    if (AF(arg0, u16, 0x5E) != 0x1D) {
        AF(arg0, s16, 0x5C) = 0;
        AF(arg0, s16, 2) = 7;
    } else {
        AF(arg0, u16, 0x5C) = 0x8000;
    }
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, u16, 0x5E) = 0U;
}

void func_sc03_101_8017F654(s32 arg0) {
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

void func_sc03_101_8017F6D8(u8 *arg0) {
    if (DistSqToTarget(arg0) > 0x63FFF) {
        AF(arg0, s16, 2) = 5;
        return;
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToTarget(arg0), 0x10);
    SetLocalVelocityXZ(arg0, &D_sc03_101_80196804);
    AF(arg0, s32, 0x14) += (D_80126CB6 - AF(arg0, s16, 0xA)) << 8;
    if (MoveCollide(arg0) != 0) {
        AF(arg0, s16, 0x16) = -0x18;
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc03_101_8017F79C(s32 arg0) {
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
        AF(arg0, u16, 0x12) = D_sc03_101_80196810[AF(arg0, s16, 0xFC)].x;
        AF(arg0, u16, 0x16) = D_sc03_101_80196810[AF(arg0, s16, 0xFC)].y;
        AF(arg0, u16, 0x1A) = D_sc03_101_80196810[AF(arg0, s16, 0xFC)].z;
    }
}

void func_sc03_101_8017F87C(u8 *arg0) {
    if (DistSqToPlayer(arg0) <= 0x64000) {
        AF(arg0, s16, 2) = 1;
        AF(AF(arg0, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        SpawnShadow(arg0);
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc03_101_8017F8EC(u8 *arg0) {
    SV8 a;

    if (DistSqToTarget(arg0) <= 0x38400) {
        AF(arg0, s16, 2) = 2;
        return;
    }
    a.x = AF(arg0, s16, 6);
    a.z = AF(arg0, s16, 0xE);
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToSV(&a, arg0 + 0x88), 4);
    SetLocalVelocityXZ(arg0, &D_sc03_101_80196804);
    AF(arg0, s32, 0x14) += (AF(arg0, s16, 0x8A) - AF(arg0, s16, 0xA)) << 8;
    if (MoveCollide(arg0) & 0x8000) {
        AF(arg0, s16, 0x16) = -4;
        PlaySoundAtActor(arg0, 0xBA2, 0);
    }
}

void func_sc03_101_8017F9C8(void) {
}

void func_sc03_101_8017F9D0(StageActor *arg0) {
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

void func_sc03_101_8017FA88(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_101_801968CC) != 0) {
        SetScript(arg0, (s32) &D_sc03_101_80183BF4);
        arg0->state = 1;
        arg0->targetClass = 0;
        AF(arg0, u16, 0x12) = D_sc03_101_80196900[arg0->unkFC * 4];
        AF(arg0, u16, 0x16) = D_sc03_101_80196902[arg0->unkFC * 4];
        AF(arg0, u16, 0x1A) = D_sc03_101_80196904[arg0->unkFC * 4];
        arg0->timer = D_sc03_101_80196906[arg0->unkFC * 4];
        SpawnActor(0x1C4, arg0);
    }
}

void func_sc03_101_8017FB4C(s32 arg0) {
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

void func_sc03_101_8017FBA0(StageActor *arg0) {
    s32 t;

    if (--arg0->timer == 0) {
        t = D_sc03_101_80196906[arg0->unkFC * 4];
        AF(arg0, u16, 0x12) = -AF(arg0, u16, 0x12);
        AF(arg0, u16, 0x16) = -AF(arg0, u16, 0x16);
        AF(arg0, u16, 0x1A) = -AF(arg0, u16, 0x1A);
        arg0->state = 1;
        arg0->timer = t;
    }
    CarryPlayer(arg0);
}

void func_sc03_101_8017FC1C(StageActor *arg0) {
    ModelObj *o;
    s16 st;

    o = AllocActorModel();
    arg0->model = o;
    if (o == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(o, &D_sc03_101_8019694C);
    SetScript(arg0, &D_sc03_101_801969AC);
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

void func_sc03_101_8017FD00(u8 *arg0) {
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

void func_sc03_101_8017FDCC(u8 *o) {
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

void func_sc03_101_8017FEA4(StageActor *arg0) {
    D_sc03_101_801988E8[arg0->state]();
}

void func_sc03_101_8017FEE0(StageActor *arg0) {
    if (SetupActorTrans(arg0, &D_sc03_101_80198930 + ((u16)arg0->param & 0xF) * 0x34) != 0) {
        SetScript(arg0, &D_sc03_101_80183BF4);
        arg0->targetClass = 0;
        arg0->model->unk04 |= 0x8040;
        arg0->workFE = D_sc03_101_80198A34[arg0->unkFC].a;
        arg0->work100 = D_sc03_101_80198A34[arg0->unkFC].b;
        arg0->work102 = D_sc03_101_80198A34[arg0->unkFC].c;
        arg0->work104 = D_sc03_101_80198A34[arg0->unkFC].d;
        SetModelCullBox(arg0->model, 0x104, 0xDC);
        switch ((u16)arg0->param & 0xF0) {
        case 0:
            arg0->state = 1;
            break;
        case 0x10:
            arg0->state = 2;
            break;
        case 0x20:
            arg0->state = 3;
            break;
        }
        SpawnActor(0x1C4, arg0);
    }
}

void func_sc03_101_80180034(StageActor *arg0) {
    D_sc03_101_80198A84[arg0->state]();
    CarryPlayer((s32) arg0);
}

void func_sc03_101_80180084(StageActor *arg0) {
    u16 temp_v1;

    if (SetupActor(arg0, (s32) &D_sc03_101_80198884) != 0) {
        SetScript(arg0, (s32) &D_sc03_101_80183BF4);
        arg0->state = 1;
        arg0->targetClass = 8;
        SetModelCullBox(arg0->model, 0x104, 0xDC);
        temp_v1 = (u16)arg0->unkFC;
        arg0->unkFC = 0x60U;
        arg0->workFE = temp_v1;
    }
}

void func_sc03_101_801800FC(u8 *arg0) {
    s32 t;
    s32 i;
    u8 *a;
    u8 *b;

    t = AF(arg0, u16, 0xFE) + AF(arg0, u16, 0xFC);
    AF(arg0, u16, 0xFE) = t & 0xFFF;
    if ((t & 0x7FF) < 0x61) {
        PlaySoundId(0x6A5, 0);
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x14) = rcos(AF(arg0, s16, 0xFE)) >> 3;
    if (AF(arg0, s16, 0x70) != 0) {
        UpdateModelRot(arg0);
    }
    for (i = 0; i < 5; i++) {
        if (ActorSegmentDamagesPlayer(arg0, &D_sc03_101_801988B8 + i * 8, &D_sc03_101_801988B8 + i * 8 + 8, 0x30) == 1) {
            g_PlayerHitKind = 0x4004;
        }
    }
}

void func_sc03_101_801801FC(u8 *arg0) {
    s16 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFE));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + AF(arg0, u16, 0x100));
    temp_a0_3 = AF(arg0, void *, 0x20);
    AF(temp_a0_3, u16, 0x14) = (u16) (AF(temp_a0_3, u16, 0x14) + AF(arg0, u16, 0x102));
    temp_v0 = (s16) AF(arg0, u16, 0x100);
    if ((temp_v0 != 0) && (AF(arg0, u8, 0x74) != 0)) {
        AF(g_PlayerModel, u16, 0x12) = (u16) (AF(g_PlayerModel, u16, 0x12) + temp_v0);
    }
}

void func_sc03_101_80180290(u8 *arg0) {
    if (AF(arg0, s16, 0x108) != 0) {
        AF(arg0, s16, 0x108)--;
        return;
    }
    AF(arg0, s16, 0x106) += AF(arg0, s16, 0xFE);
    AF(arg0, s16, 0xE) = AF(arg0, s16, 0x8C) + ((rsin(AF(arg0, s16, 0x106)) * AF(arg0, s16, 0x104)) >> 12);
    AF(arg0, s16, 0xA) = AF(arg0, s16, 0x8A) + ((rcos(AF(arg0, s16, 0x106)) * AF(arg0, s16, 0x104)) >> 12);
    if ((AF(arg0, s16, 0x106) & 0x7FF) == 0) {
        AF(arg0, s16, 0x108) = 0xF;
    }
}

void func_sc03_101_80180348(u8 *arg0) {
    if (AF(arg0, s16, 0x108) != 0) {
        AF(arg0, s16, 0x108)--;
        return;
    }
    AF(arg0, s16, 0x106) += AF(arg0, s16, 0xFE);
    AF(arg0, s16, 0x6) = AF(arg0, s16, 0x88) + ((rsin(AF(arg0, s16, 0x106)) * AF(arg0, s16, 0x104)) >> 12);
    AF(arg0, s16, 0xA) = AF(arg0, s16, 0x8A) + ((rcos(AF(arg0, s16, 0x106)) * AF(arg0, s16, 0x104)) >> 12);
    if ((AF(arg0, s16, 0x106) & 0x7FF) == 0) {
        AF(arg0, s16, 0x108) = 0xF;
    }
}

void func_sc03_101_80180400(StageActor *p) {
    u8 *o;
    s8 *d;

    if (SetupActor(p, &D_sc03_101_8019A974) != 0) {
        p->reactive = 1;
        p->params = &D_sc03_101_8019A9A8;
        p->reactMask = 0;
        p->react = 0;
        p->targetClass = 0x14;
        p->reactOpts |= 2;
        p->animFlags |= 0x1000;
        if (GetFlag(D_sc03_101_8019A9E8[p->param]) & 0xFF) {
            p->model->unk04 |= 0x80000000;
            AF(p, s16, 0xAE) = -1;
            func_sc03_101_801807F4(p);
            p->stateCount++;
            return;
        }
        AF(p, s16, 0xAE) = -4;
        o = (u8 *) AllocActorSprite();
        p->ext0 = o;
        if (o != 0) {
            d = &D_sc03_101_8019DCF8;
            func_8001CD9C(o, d);
            SetShapeCircle(d, 0x80);
            *(B4 *) d = *(B4 *) &D_sc03_101_8019C978;
            *(B4 *) &D_sc03_101_8019DCFC = *(B4 *) &D_sc03_101_8019C97C;
            AF(o, s16, 0x18) = 0x800;
            AF(o, s16, 0x1A) = 0x800;
            AF(o, s32, 4) |= 0x50000000;
        }
        func_sc03_101_80181E3C();
        NextState(p);
    }
}

void func_sc03_101_80180584(u8 *arg0) {
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
        if (AF(o, s16, 0x18) > 0x1000 && (v = D_sc03_101_8019A9F8[AF(arg0, s16, 0xFC)]) >= 0) {
            func_sc03_101_801806B8(v);
            AF(arg0, s16, 0xFC)++;
        }
    }
    c = (u8 *) &D_sc03_101_8019DCF8;
    if (*c < 0xFF) {
        n = *c + 0x10;
        *c = n;
        D_sc03_101_8019DCF9 += 0x10;
        D_sc03_101_8019DCFA += 0x10;
        if (n == 0) {
            *c = 0xFF;
            *(u8 *) &D_sc03_101_8019DCF9 = 0xFF;
            *(u8 *) &D_sc03_101_8019DCFA = 0xFF;
        }
    }
    func_sc03_101_80180918(arg0);
    if (TickTimer(arg0) != 0) {
        func_sc03_101_80180754(arg0);
    }
}

void func_sc03_101_801806B8(s32 arg0) {
    CV4 a;
    CV4 b;
    SV4 v;

    a = D_sc03_101_8019C980;
    b = D_sc03_101_8019C984;
    a.b = (rand() & 0x3F) - 0x80;
    v.x = 0x100;
    v.y = arg0;
    v.z = 0x80;
    v.pad = 1;
    func_sc03_101_80181FC4((s32)&v, (s32)&a, (s32)&b);
}

s32 func_sc03_101_80180754(StageActor *arg0) {
    ModelObj *temp_a1;

    temp_a1 = arg0->model;
    temp_a1->unk04 = (s32) ((s32)temp_a1->unk04 | 0x80000000);
    arg0->unkFC = 0;
    return SetState(arg0, 3);
}

s32 func_sc03_101_80180790(StageActor *arg0) {
    arg0->timer = 0x20;
    return SetState(arg0, 4);
}

s32 func_sc03_101_801807B8(StageActor *arg0) {
    StartEvent(arg0, (s32) &D_sc03_101_8019A9C0);
    return SetState(arg0, 5);
}

s32 func_sc03_101_801807F4(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    return SetState(arg0, 6);
}

void func_sc03_101_80180814(StageActor *arg0) {
    D_sc03_101_8019AA0C[arg0->state]();
    func_sc03_101_8018095C((s32) arg0);
}

void func_sc03_101_80180864(u8 *arg0) {
    u16 sp10[2];
    s8 *d;

    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    *(B4 *) &D_sc03_101_8019DCF8 = *(B4 *) &D_sc03_101_8019C978;
    func_sc03_101_80181E3C();
    func_sc03_101_80181F00((s32) sp10, 0x1000, 0);
    UpdateModelZYX(arg0);
    func_sc03_101_80181F30(arg0 + 4);
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s32, 0x1C) = 0x40;
    StartEvent(arg0, &D_sc03_101_8019A9B8);
    SetState(arg0, 2);
    PlaySoundId(0x700, 0);
}

s32 func_sc03_101_80180918(Mover *arg0) {
    func_sc03_101_80181FA8(8);
    UpdateModelZYX(arg0);
    func_sc03_101_80181F30((u8 *)arg0 + 4);
    return func_sc03_101_80182178();
}

void func_sc03_101_8018095C(s32 arg0) {
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

void func_sc03_101_801809B0(u8 *p, s32 k) {
    Arg8C51C a;
    SV4 v;
    WMtx m;
    StageActor *q;

    v = D_sc03_101_8019C988;
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

void func_sc03_101_80180B10(StageActor *arg0) {
    D_sc03_101_8019AA38[arg0->state]();
}

void func_sc03_101_80180B4C(StageActor *arg0) {
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
    D_sc03_101_8019DCFA = temp_v0;
    D_sc03_101_8019DCF9 = temp_v0;
    D_sc03_101_8019DCF8 = temp_v0;
}

void func_sc03_101_80180BAC(StageActor *arg0) {
    u8 *o;
    u8 *c;

    o = (u8 *)arg0->ext0;
    if (arg0->unkFC < 0x10) {
        func_sc03_101_8018212C(arg0->unkFC, 1);
        arg0->unkFC++;
    }
    if (arg0->unkFC >= 9) {
        if (o != NULL && AF(o, s16, 0x18) > 0) {
            AF(o, s16, 0x18) -= 0x100;
            AF(o, s16, 0x1A) -= 0x100;
        }
        c = (u8 *) &D_sc03_101_8019DCF8;
        if (*c > 0x10) {
            *c -= 0x10;
            D_sc03_101_8019DCF9 -= 0x10;
            D_sc03_101_8019DCFA -= 0x10;
        } else {
            AF(o, s16, 0) = 0;
            arg0->ext0 = NULL;
            func_sc03_101_801809B0(arg0, 0x4000);
            func_sc03_101_80180790(arg0);
        }
    }
    func_sc03_101_80180918(arg0);
}

void func_sc03_101_80180CB8(u8 *arg0) {
    s32 any;
    s32 i;
    s32 *p;

    if (TickTimer(arg0) != 0) {
        EndEvent(arg0);
        any = 0;
        i = 0;
        p = D_sc03_101_8019A9E8;
        for (; i < 4; i++) {
            any |= GetFlag(*p++) & 0xFF;
        }
        if (any == 0) {
            func_sc03_101_801807B8(arg0);
        } else {
            func_sc03_101_801807F4(arg0);
        }
        any = 1;
        SetFlag(D_sc03_101_8019A9E8[AF(arg0, s16, 0x70)], 1);
        for (i = 0; i < 4; i++) {
            if (!(GetFlag(D_sc03_101_8019A9E8[i]) & 0xFF)) {
                any = 0;
            }
        }
        if (any != 0) {
            SetProgress(0x172);
        }
    }
}

void func_sc03_101_80180DC4(StageActor *arg0) {
    if (IsEventDone() != 0) {
        EndEvent(arg0);
        func_sc03_101_801807F4(arg0);
    }
}

void func_sc03_101_80180E04(StageActor *arg0) {
    if (arg0->stateCount != 0) {
        func_sc03_101_801809B0((s32) arg0, 0);
        arg0->stateCount = (u16) (arg0->stateCount - 1);
    }
}

void func_sc03_101_80180E50(StageActor *arg0, s32 arg1) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitNullModel(temp_v0);
    arg0->hitData = (s32) ((s32) &D_sc03_101_8019AA28 | 0x40000000);
    arg0->hitState = 0x800;
    arg0->animFlags = (u16) (arg0->animFlags | 0x1000);
    D_sc03_101_8019A9DC = (s32)arg0->message;
    NextState(arg0);
}

void func_sc03_101_80180ED8(void) {
}

void func_sc03_101_80180EE0(StageActor *arg0) {
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
        r = &D_sc03_101_8019AAAC[i];
        InitSpriteKind2(o, D_sc03_101_8019AABC[i], r->x, r->y);
        c = r->c;
        o->rot.vx = 0x400;
        o->scale.vy = 0x2000;
        o->scale.vx = 0x2000;
        AF(o, u8, 0x27) = c;
    } else {
        InitNullSprite(o);
        o->pose = &D_sc03_101_8019DD38;
        AF(o, s16, 0x28) = 0x300;
        AF(o, s16, 0x2A) = 0x110;
        AF(o, u8, 0x27) = 0x78;
        o->rot.vx = 0x400;
        o->scale.vy = 0x800;
        o->scale.vx = 0x800;
        if (!((u16)arg0->param & 3)) {
            SetShapeCircle(&D_sc03_101_8019DD38, 0x80);
        }
        if ((u16)arg0->param & 1) {
            D_sc03_101_8019AA44[((u16)arg0->param & 3) * 6] = 0x10;
            o->rot.vz = 0x400;
        } else {
            D_sc03_101_8019AA44[((u16)arg0->param & 3) * 6] = 0x20;
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
        D_sc03_101_8019AA46[((u16)arg0->param & 3) * 6] = 0x20;
        if ((u16)arg0->param & 0x4000) {
            o->scale.vy = 0;
            o->scale.vx = 0;
        }
    }
    NextState(arg0);
}

s32 func_sc03_101_80181138(StageActor *arg0) {
    D_sc03_101_8019AAC8[0] = (u16)arg0->pos[0].h.i | (arg0->pos[2].h.i << 0x10);
    StartEvent(arg0, (s32) (D_sc03_101_8019AAC8 - 0x1), D_sc03_101_8019AAC8);
    return SetState(arg0, 2);
}

void func_sc03_101_8018118C(StageActor *arg0) {
    D_sc03_101_8019AADC[arg0->state]();
}

void func_sc03_101_801811C8(s32 arg0) {
    s32 temp_s1;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_s2;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s2 = ((AF(arg0, u16, 0x70) & 3) * 0xC) + &D_sc03_101_8019AA40;
    func_sc03_101_801814F8(temp_s1, (s32) temp_s2);
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

s32 func_sc03_101_801812B4(s32 arg0, s32 arg1) {
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

void func_sc03_101_80181374(void) {
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

void func_sc03_101_801813C4(StageActor *arg0) {
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
            } else if (!((u16) arg0->param & 1) && (func_sc03_101_801812B4((s32) arg0, 0x30) != 0)) {
                func_sc03_101_80181138((s32) arg0);
                SetFlag(0xAE, 0);
                SetFlag(0xAF, 0);
                SetFlag(0xB0, 0);
            }
            func_sc03_101_801811C8((s32) arg0);
        }
    }
}

void func_sc03_101_801814AC(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        func_800D1724(arg0->message);
    }
    func_sc03_101_801811C8(arg0);
}

void func_sc03_101_801814F8(u8 *arg0, s32 arg1) {
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
        func_sc03_101_80181914(arg0, arg1, s.scr, ot);
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
        func_sc03_101_80181914(arg0, arg1, s.scr, &ot[d]);
    }
}

void func_sc03_101_80181914(u8 *o, u8 *s, u8 *v, u32 *ot) {
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

void func_sc03_101_80181E34(void) {
}

void func_sc03_101_80181E3C(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_101_8019DE8C;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

void func_sc03_101_80181E60(s32 arg0, s32 arg1, s32 arg2, u16 *arg3) {
    SV4 v;
    s32 i;
    s16 ang;

    func_sc03_101_80181F00(arg0, 0x1000, 0);
    v.x = arg3[0];
    v.z = arg3[1];
    v.pad = 1;
    for (i = 0, ang = 0; i < 0x10; i++, ang += 0x100) {
        v.y = ang;
        func_sc03_101_8018201C(i, (s32) &v, arg1, arg2);
    }
}

s32 func_sc03_101_80181F00(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc03_101_8019DE84 = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc03_101_8019DE88 = (s16) arg1;
    D_sc03_101_8019DE8A = (s16) arg2;
    D_sc03_101_8019DE86 = temp_v0;
    return (s32) temp_v0;
}

void func_sc03_101_80181F30(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc03_101_8019DE84 = sp10[0];
    D_sc03_101_8019DE86 = sp10[1];
}

void func_sc03_101_80181FA8(s32 arg0) {
    s16 *p = &D_sc03_101_8019DE8A;
    *p += arg0;
}

void func_sc03_101_80181FC4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc03_101_801820F0();
    if (temp_v0 >= 0) {
        func_sc03_101_8018201C(temp_v0, arg0, arg1, arg2);
    }
}

void func_sc03_101_8018201C(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
    struct C8E8 { u8 r, g, b, cd; };
    struct E8E8 { u16 a; s16 y; s16 z; struct C8E8 c0; struct C8E8 c1; } *e;

    e = (struct E8E8 *)(&D_sc03_101_8019DE8C + arg0 * 14);
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

s32 func_sc03_101_801820F0(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0xE) {
        if (*(u16 *)&((u8 *)&D_sc03_101_8019DE8C)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc03_101_8018212C(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc03_101_8019DE8C, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

s32 func_sc03_101_80182178(void) {
    u8 *p;
    s32 i;
    s16 v;
    s16 w;

    for (p = &D_sc03_101_8019DE8C, i = 0; i < 0x10; i++, p += 14) {
        if (AF(p, u16, 0) != 0) {
            func_sc03_101_80182254(i);
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

void func_sc03_101_80182254(s32 i) {
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
    r = &D_sc03_101_8019DE8C + i * 14;
    AF(p, u8, 4) = AF(r, u8, 6);
    AF(p, u8, 5) = AF(r, u8, 7);
    AF(p, u8, 6) = AF(r, u8, 8);
    AF(p, u8, 0xC) = AF(r, u8, 0xA);
    AF(p, u8, 0xD) = AF(r, u8, 0xB);
    AF(p, u8, 0xE) = AF(r, u8, 0xC);
    AF(p, u8, 0x14) = AF(r, u8, 0xA);
    AF(p, u8, 0x15) = AF(r, u8, 0xB);
    AF(p, u8, 0x16) = AF(r, u8, 0xC);
    cx = D_sc03_101_8019DE84;
    cy = D_sc03_101_8019DE86;
    RotMatrixZ(D_sc03_101_8019DE8A, &m);
    s.x = s.y = s.z = D_sc03_101_8019DE88;
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

s32 func_sc03_101_80182518(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_101_8019DD84;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc03_101_8018253C(s32 arg0) {
    s32 sp10;

    PosToSVec(arg0, (s32) &sp10);
    return func_sc03_101_80182564((s32) &sp10);
}

s32 func_sc03_101_80182564(s32 arg0) {
    s16 sxy[2];
    CV4 col;
    s32 p;
    s32 flag;

    col = D_sc03_101_8019C990;
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers(arg0, (s32) sxy, (s32) &p, (s32) &flag);
    return func_sc03_101_801825EC((s32) sxy, (s32) &col, 0x10, 0x18);
}

s32 func_sc03_101_801825EC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc03_101_80182658(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc03_101_8018278C(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc03_101_80182658(u16 *p, u8 *c, s32 g) {
    if (p != 0) {
        D_sc03_101_8019DD78.a = p[0];
        D_sc03_101_8019DD78.b = p[1];
    } else {
        D_sc03_101_8019DD78.a = 0;
        D_sc03_101_8019DD78.b = 0;
    }
    D_sc03_101_8019DD80 = c[0];
    D_sc03_101_8019DD81 = c[1];
    D_sc03_101_8019DD82 = c[2];
    AF(&D_sc03_101_8019DD78, s32, 4) = g << 16;
}

void func_sc03_101_801826C8(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc03_101_8019DD78.a = sp10[0];
    D_sc03_101_8019DD78.b = sp10[1];
}

void func_sc03_101_80182740(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc03_101_801828A8();
    if (temp_v0 >= 0) {
        func_sc03_101_8018278C(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

void func_sc03_101_8018278C(s32 i, s32 ang, s32 spd) {
    u8 unused[0x10];
    Pt16 *p;
    s16 vx;
    s16 vz;
    u16 s;
    s32 m;
    s32 gg;

    p = &D_sc03_101_8019DD78.pts[i];
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
    gg = D_sc03_101_8019DD78.g;
    p->dy = gg << 6;
}

s32 func_sc03_101_801828A8(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0x10) {
        if (*(u16 *)&((u8 *)&D_sc03_101_8019DD84)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc03_101_801828E4(void) {
    Pt16 *p;
    s32 i;
    s16 g;
    s32 dx;
    s32 dz;

    g = D_sc03_101_8019DD7E;
    p = (Pt16 *)&D_sc03_101_8019DD84;
    for (i = 0; i < 16; i++, p++) {
        if (p->active == 0) {
            continue;
        }
        if ((g > 0 && p->y >= 0x4001) || (g < 0 && p->y <= 0)) {
            p->active = 0;
            continue;
        }
        func_sc03_101_801829F8(i);
        dx = (rcos(p->ang) * g) << 4;
        dz = (rsin(p->ang) * g) << 4;
        p->x += dx;
        p->z += dz;
        p->y += p->dy;
    }
}

void func_sc03_101_801829F8(s32 i) {
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
    AF(p, u8, 4) = D_sc03_101_8019DD80;
    AF(p, u8, 5) = D_sc03_101_8019DD81;
    AF(p, u8, 6) = D_sc03_101_8019DD82;
    r = (Pt16 *)&D_sc03_101_8019DD84 + i;
    cx = AF(r, u16, 0xA) + D_sc03_101_8019DD78.a;
    cz = AF(r, u16, 0xE) + D_sc03_101_8019DD78.b;
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

void func_sc03_101_80182CDC(StageActor *arg0) {
    D_sc03_101_8019B168[arg0->state]();
}

void func_sc03_101_80182D18(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 4;
    if (AF(arg0, s16, 0xDE) != 0) {
        func_sc03_101_80182EF8();
        return;
    }
    var_v0 = &D_sc03_101_8019E0B4;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    arg0->timer = (s32) ((rand() & 0x7F) + 0x40);
    NextState((s32) arg0);
}

void func_sc03_101_80182D90(u8 *arg0) {
    s32 d;
    s32 r;
    u16 n;

    if (TickTimer(arg0) != 0) {
        r = rand();
        n = AF(arg0, u16, 0xFC);
        d = ((s16)n / 2 - (r & (n - 1))) * 2;
        D_sc03_101_8019B178.x = AF(arg0, u16, 6) + d;
        D_sc03_101_8019B178.y = AF(arg0, u16, 0xA);
        D_sc03_101_8019B178.z = AF(arg0, u16, 0xE) + d;
        func_sc03_101_80182E40(arg0, &D_sc03_101_8019B178);
        AF(arg0, s32, 0x1C) = (rand() & 0x7F) + 0x40;
    }
}

void func_sc03_101_80182E40(u8 *arg0, SpawnDef *arg1) {
    s32 i;

    i = 0;

    if (IsOnScreen(arg0, ((D_800AF7BE >> 1) << 16) | (D_800AF7BC >> 1))) {
        for (; i < 5; i++) {
            if (D_sc03_101_8019E0B0[i] == 0) {
                D_sc03_101_8019E0B0[i] = 1;
                arg1->unk10 = i | 0x80000000;
                arg1->unk8 = AF(arg0, u16, 0x70);
                SpawnActorFromDef(arg1, arg0);
                return;
            }
        }
    }
}

void func_sc03_101_80182EF8(StageActor *arg0) {
    ModelObj *o;
    u8 *p;

    p = (AF(arg0, s16, 0xDC) << 6) + D_sc03_101_8019DF70;
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
        func_sc03_101_80183284(arg0);
        arg0->state = 3;
    }
}

void func_sc03_101_80182FB8(StageActor *arg0) {
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
        D_sc03_101_8019E0B0[AF(arg0, s16, 0xDC)] = 0;
        FreeActor(arg0);
        return;
    }
    func_sc03_101_80183084(arg0);
}

void func_sc03_101_80183084(u8 *arg0) {
    QuadArg q;
    WMtx m;
    SV r;

    q.code = 0x50000000;
    *(s32 *) &q.c[0] = 0x80;
    *(s32 *) &q.c[1] = 0x80;
    *(s32 *) &q.c[2] = 0;
    *(s32 *) &q.c[3] = 0;
    q.p[0] = D_sc03_101_8019B18C;
    q.p[1] = D_sc03_101_8019B194;
    q.p[2] = D_sc03_101_8019B19C;
    q.p[3] = D_sc03_101_8019B1A4;
    SetScaleMatrix(arg0 + 0xFC, &m);
    RotMatrixY((s16) GetCameraHeading(), &m);
    PosToSVec(arg0 + 4, &r);
    SetMatrixTrans(&r, &m);
    DrawPrimG4Mtx(&q, &m);
    q.code = 0x60000000;
    *(s32 *) &q.c[0] = 0x808080;
    *(s32 *) &q.c[1] = 0x808080;
    q.p[0] = D_sc03_101_8019B1AC;
    q.p[1] = D_sc03_101_8019B1B4;
    q.p[2] = D_sc03_101_8019B1BC;
    q.p[3] = D_sc03_101_8019B1C4;
    DrawPrimG4Mtx(&q, &m);
}

void func_sc03_101_80183284(u8 *arg0) {
    switch (AF(arg0, s16, 0x70)) {
    case 0:
        PlaySoundId(0x6D5, 0);
        break;
    case 1:
        PlaySoundId(0x856, (func_sc03_101_8018330C() | 0x2000) & 0xFFFF);
        break;
    case 2:
        PlaySoundId(0x857, (func_sc03_101_8018330C() | 0x2000) & 0xFFFF);
        break;
    }
}

s32 func_sc03_101_8018330C(u8 *arg0) {
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

void func_sc03_101_80183390(StageActor *arg0) {
    D_sc03_101_8019B2AC[arg0->state]();
}

void func_sc03_101_801833CC(StageActor *arg0) {
    Blk30 *p;

    arg0->workFE = 0;
    switch (arg0->unkFC) {
    case 0:
        SetAmbientColor(D_sc03_101_8019B1CC, D_sc03_101_8019B1CE, D_sc03_101_8019B1D0);
        p = &D_sc03_101_8019B1D4;
        SetState(arg0, 1);
        break;
    case 1:
        SetAmbientColor(D_sc03_101_8019B204, D_sc03_101_8019B206, D_sc03_101_8019B208);
        p = &D_sc03_101_8019B20C;
        SetState(arg0, 2);
        break;
    case 2:
        SetAmbientColor(D_sc03_101_8019B23C, D_sc03_101_8019B23E, D_sc03_101_8019B240);
        p = &D_sc03_101_8019B244;
        SetState(arg0, 3);
        break;
    case 3:
        SetAmbientColor(D_sc03_101_8019B1CC, D_sc03_101_8019B1CE, D_sc03_101_8019B1D0);
        p = &D_sc03_101_8019B1D4;
        SetState(arg0, 4);
        break;
    case 4:
        SetAmbientColor(D_sc03_101_8019B274, D_sc03_101_8019B276, D_sc03_101_8019B278);
        p = &D_sc03_101_8019B27C;
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

void func_sc03_101_801835C0(StageActor *arg0) {
    g_Lights.c = D_sc03_101_8019B1F4;
    D_800A5EB0 = rsin(arg0->workFE) * 10 / 4096 - 5;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc03_101_80183670(StageActor *arg0) {
    g_Lights.c = D_sc03_101_8019B22C;
    D_800A5EB0 = rsin(arg0->workFE) * 6 / 4096 - 3;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(2, &g_Lights.c);
}

void func_sc03_101_80183720(StageActor *arg0) {
    g_Lights.a = D_sc03_101_8019B244.a;
    D_800A5E90 = rsin(arg0->workFE) * 20 / 4096 - 10;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}

void func_sc03_101_801837D0(void) {
}

void func_sc03_101_801837D8(StageActor *arg0) {
    g_Lights.a = D_sc03_101_8019B27C.a;
    D_800A5E90 = rsin(arg0->workFE) / 512 + 8;
    arg0->workFE = (AF(arg0, u16, 0xFE) + 0x71) & 0xFFF;
    ApplyLight(0, &g_Lights);
}
