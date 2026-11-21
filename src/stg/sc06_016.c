#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
extern void func_sc06_016_8017F5FC();
void func_sc06_016_801845E8(s32 arg0);
void func_sc06_016_80184660(s16 arg0, s32 arg1);
s32 BossDefeat(s32 arg0);
void func_sc06_016_8017E4AC(s32 arg0);
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_016_8017BE9C(void) {
}

void func_sc06_016_8017BEA4(void) {
}

void func_sc06_016_8017BEAC(void) {
}

void func_sc06_016_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_016_801888D8[])();
extern void (*D_sc06_016_80188930[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_016_8017DB0C(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc06_016_80188938[])();
void func_sc06_016_80182BCC(void);
extern void (*D_sc06_016_80188940[])();
void func_sc06_016_8017DB34(void);
extern void func_800D1EBC();
extern void (*D_sc06_016_8018894C[])();
extern u8 D_sc06_016_80188958;
extern void StartPlayerActionScript();
extern u8 D_sc06_016_80188964;
extern void func_sc06_016_8017DBF8();
extern void (*D_sc06_016_80188970[])();
extern s32 IsEventDone();
extern void EndEvent();
extern void (*D_sc06_016_80188E60[])();
extern void (*D_sc06_016_801890AC[])();
extern void (*D_sc06_016_801890B4[])();
extern void (*D_sc06_016_801890E4[])();
extern void (*D_sc06_016_80189104[])();
extern void (*D_sc06_016_80189110[])();
extern void (*D_sc06_016_801891D4[])();
extern s16 D_sc06_016_8019F71C;
extern u8 D_sc06_016_8019A464;
extern void (*D_sc06_016_8019A47C[])();
extern u8 D_sc06_016_8019A484;
extern void (*D_sc06_016_8019A490[])();
extern void (*D_sc06_016_8019A524[])();
extern void (*D_sc06_016_8019A5A0[])();
extern void (*D_sc06_016_8019A5DC[])();

extern s32 PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 TickTimer();
extern void func_sc06_016_8017E1D8();
extern u8 D_sc06_016_801A001C;
extern u16 D_sc06_016_801A0014;
extern u16 D_sc06_016_801A0016;
extern s16 D_sc06_016_801A0018;
extern s16 D_sc06_016_801A001A;
extern s32 func_sc06_016_80184010();
extern void func_sc06_016_80183F3C();
extern void PosToSVec();
extern s32 func_sc06_016_80184484();
extern s32 func_sc06_016_801847C8();
extern void func_sc06_016_801846AC();

extern s16 D_sc06_016_8019FF14;

extern s32 func_sc06_016_8017BF34();
extern void SetClock();
extern void (*D_sc06_016_801889F4[])();
extern void CarryPlayer();
extern s32 D_80126B60;
extern void MoveObject();
s32 BossSpawn2FD(StageActor *arg0);

void func_sc06_016_8017BEBC(s32 arg0, s32 arg1) {
    func_sc06_016_8017BF34(arg0, arg1, 0xC, 0);
}

void func_sc06_016_8017BEE0(s32 arg0, s32 arg1, s16 arg2) {
    func_sc06_016_8017BF34(arg0, arg1, (s32) arg2, 0);
}

void func_sc06_016_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc06_016_8017BF34(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

extern void func_sc06_016_80184578();

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
extern u8 D_sc06_016_801889AC;
extern u8 D_sc06_016_801889EC;
extern s32 SetupActor();
extern void SetModelCullBox();
extern s16 D_sc06_016_80188A14;
extern u8 D_sc06_016_801947F4;
extern void func_sc06_016_8017EEFC();
extern u8 D_sc06_016_80194FFC;
extern u16 D_sc06_016_8019F708;
extern s16 D_sc06_016_8019F70C;
extern s32 SpawnActor();
extern u8 D_sc06_016_80188BFC;
extern u8 D_sc06_016_80196974;
extern void GainStat0FromActor();
extern void SetProgress();
extern void ResetScriptVM();
extern void TakePlayerControl();
extern s32 RunScript();
extern s16 D_sc06_016_8019F720;
extern void (*D_sc06_016_80188CF4[])();
extern void func_sc06_016_8017EE78();
extern s32 HeadingToPlayer();
extern s32 SpawnPropFrom();
extern s32 SpawnActorArg();
extern void func_sc06_016_8017ECE0();
extern void func_sc06_016_8017E114();
extern void func_sc06_016_8017E4FC();
extern u16 D_sc06_016_8019F710;
extern void func_sc06_016_8017E7D0();
extern void func_sc06_016_8017E96C();
extern void BossSpawn2FF();
extern u16 D_sc06_016_80188BB4;
extern void HidePlayerScene();
extern void SetPlayerFlag7E2();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern u8 D_sc06_016_80191CBC;
extern u8 D_sc06_016_80192B1C;
extern s32 D_sc06_016_8019F9FC;
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void InitModel();
extern void HideModel();
extern void func_sc06_016_8017FE90();
extern void func_80132784();
extern s32 FreeActor();
extern s16 D_sc06_016_801890E0[];
extern s32 DistSqToPlayer();
extern s32 func_sc06_016_80181018();
extern void func_80143994();
extern u8 D_sc06_016_801937DC;
extern void func_8001C810();
extern void func_sc06_016_801813B0();
extern void func_sc06_016_80181840();
extern void UpdateModelZYX();
extern u8 D_sc06_016_801891BC;
extern u8 D_sc06_016_801891C4;
extern void PlaceObject();
extern s32 func_sc06_016_80183020();
extern void NextPlayerActionHandler();
extern void BumpSub2Copy();
extern u8 D_sc06_016_801851C4;
extern u8 D_sc06_016_8019A4F0;
extern u8 D_sc06_016_8019A5A8;
extern void func_sc06_016_801830B4();

extern void RequestSave();
extern void func_sc06_016_8017E910();
extern s32 func_sc06_016_8017EB3C();

extern s16 D_sc06_016_80188A16;
extern u8 D_sc06_016_801963EC;
extern s16 D_sc06_016_8019F6FC;
extern s32 D_sc06_016_8019F700;
extern s16 D_sc06_016_8019F704;
extern s32 func_sc06_016_8017EEB4();
extern s16 D_sc06_016_80188A18;
extern u8 D_sc06_016_80195614;
extern void func_sc06_016_8017EDA0();
extern u8 D_sc06_016_80193CE4;
extern s16 D_80126B66;
extern s32 g_PlayerAction;

extern u16 D_sc06_016_8019F714;
extern u8 D_sc06_016_80188A04;
extern u8 D_sc06_016_80188A40;
extern u8 D_sc06_016_80188A70;
extern s32 D_sc06_016_8019F6F8;
extern s16 D_sc06_016_8019F724;

extern u16 D_sc06_016_80188A1A;
extern u8 D_sc06_016_80195E24;
extern u8 D_sc06_016_80188D38[];
extern void ShowModel();
s32 func_sc06_016_8017F124(s32 arg0);
s32 func_sc06_016_8017F13C(s32 arg0);

extern s16 D_sc06_016_80188A2A[];


extern u8 D_sc06_016_801890D8;
extern void func_sc06_016_80180F68();

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
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern PtSys D_sc06_016_8019FF08;
extern void func_sc06_016_80184804();
extern s16 D_sc06_016_8019FF0E;
extern void func_sc06_016_80184918();

extern WMtx GsIDMATRIX;
extern OtRef g_WorldOtOrg[];
extern Ot14 g_WorldOt[];
extern s32 AddDrawModeAbr();
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern u8 D_sc06_016_8019FF10;
extern u8 D_sc06_016_8019FF11;
extern u8 D_sc06_016_8019FF12;

extern void StopMotion();
extern void SetForwardVelocity();

extern u8 D_800AF648;

extern u16 g_Actors;

typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
extern u16 D_sc06_016_8019FF0A;

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern void func_sc06_016_8017DD14();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();


typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
extern u8 D_sc06_016_801888A8[];
extern s32 SpawnFromDef();

s32 func_sc06_016_8017BF34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FeS14s s;
    s32 r;

    s.a = 0x6B;
    s.x = -0x94;
    s.e = arg2;
    s.y = -0x68;
    s.z = 0;
    s.b = arg3;
    s.c = 0;
    s.f = ((s32 *)&D_sc06_016_801888A8)[(s16) arg2];
    r = SpawnFromDef((s32) &s);
    if (r != 0) {
        AF(r, s32, 0xD4) = arg0;
        AF(r, s32, 0xD8) = arg1;
    }
    return r;
}

void func_sc06_016_8017BFBC(s32 arg0, s32 arg1) {
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

void func_sc06_016_8017C010(s32 arg0, s32 arg1, s16 arg2) {
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

void func_sc06_016_8017C068(void) {
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

void func_sc06_016_8017C114(StageActor *arg0) {
    D_sc06_016_801888D8[arg0->state]();
}

typedef struct { u8 b[0x10C]; } O10C;
extern s32 PosDist();
extern void func_800D1724();
extern void SVecToPos();

extern void func_sc06_016_80182F44();
extern s32 AngleDist();
extern u8 *D_sc06_016_8019FF00;
extern s32 StopWithGravity();
extern u8 D_sc06_016_8019A53C;
extern s32 D_sc06_016_8019A570[];
extern u8 *D_80126CC8;
extern u8 D_sc06_016_8019CAAC;
extern u8 D_sc06_016_8019C10C;

extern s32 func_800CF8B4();
extern s32 PlayerFlag1000();
extern s32 PlayerEvent200();
extern s32 SpawnKind205();

typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
extern u8 *AllocPrim();
extern void SetGteLocalMatrix();

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
extern s16 D_sc06_016_801888A4; extern s16 D_sc06_016_80188898; extern s16 D_sc06_016_8018888C; extern u8 D_sc06_016_8019F630; extern u8 *AllocActorSprite(); extern void SjisToGlyphs(); extern void InitTextSprite(); extern s16 D_sc06_016_8019F658; extern s16 D_sc06_016_8019F668; extern s16 D_sc06_016_8019F662; extern s16 D_sc06_016_8019F65A; extern s16 D_sc06_016_8019F672; extern s16 D_sc06_016_8019F66A; extern s16 D_sc06_016_8019F696; extern s16 D_sc06_016_8019F68E; extern s16 D_sc06_016_8019F6A6; extern s16 D_sc06_016_8019F69E; extern s16 D_sc06_016_8019F6C0; extern s16 D_sc06_016_8019F6D0; extern s16 D_sc06_016_8019F6CA; extern s16 D_sc06_016_8019F6C2; extern s16 D_sc06_016_8019F6DA; extern s16 D_sc06_016_8019F6D2; extern s16 D_sc06_016_8019F6C4; extern s16 D_sc06_016_8019F690; extern s16 D_sc06_016_8019F65C; extern u8 D_sc06_016_8019F680; extern u8 D_sc06_016_8019F678; extern u8 D_sc06_016_8019F684; extern u8 D_sc06_016_8019F67C; extern u8 D_sc06_016_8019F681; extern u8 D_sc06_016_8019F679; extern u8 D_sc06_016_8019F686; extern u8 D_sc06_016_8019F682; extern u8 D_sc06_016_8019F67E; extern u8 D_sc06_016_8019F67A; extern u8 D_sc06_016_8019F6B4; extern u8 D_sc06_016_8019F6AC; extern u8 D_sc06_016_8019F6B5; extern u8 D_sc06_016_8019F6AD; extern u8 D_sc06_016_8019F6B9; extern u8 D_sc06_016_8019F6B1; extern u8 D_sc06_016_8019F6EC; extern u8 D_sc06_016_8019F6E8; extern u8 D_sc06_016_8019F6E4; extern u8 D_sc06_016_8019F6E0; extern u8 D_sc06_016_8019F6ED; extern u8 D_sc06_016_8019F6E9; extern u8 D_sc06_016_8019F6E5; extern u8 D_sc06_016_8019F6E1; extern u8 D_sc06_016_8019F6EE; extern u8 D_sc06_016_8019F6EA; extern u8 D_sc06_016_8019F6E6; extern u8 D_sc06_016_8019F6E2; extern u8 D_sc06_016_8019F6BA; extern u8 D_sc06_016_8019F6B6; extern u8 D_sc06_016_8019F6B2; extern u8 D_sc06_016_8019F6AE; extern s32 D_sc06_016_8019F6BC; extern s32 D_sc06_016_8019F688; extern s32 D_sc06_016_8019F6F0;
extern void SetShapeCircle();
extern E40 D_sc06_016_8019F95C[];
extern CV D_sc06_016_8019E28C;
extern CV D_sc06_016_8019E290;
extern CV D_sc06_016_8019E294;
extern void func_8001CD9C();

void func_sc06_016_8017C150(StageActor *o) {
    u8 *m;
    s16 x1;
    s16 y1;
    s16 y2;
    s16 x2;
    s16 y;
    D_sc06_016_801888A4 = 0;
    D_sc06_016_80188898 = 0;
    D_sc06_016_8018888C = 0;
    if (AF(o, u8 *, 0xD0) == 0) {
        m = AllocActorSprite();
        if (m == 0) return;
        SjisToGlyphs(o->message, &D_sc06_016_8019F630);
        InitTextSprite(m, &D_sc06_016_8019F630);
        AF(m, s16, 8) = o->pos[0].h.i + 6;
        AF(m, s16, 0xA) = o->pos[1].h.i + 9;
        AF(m, s16, 0x2C) = 3;
        AF(m, u8, 0x27) = 1;
        o->ext1 = m;
    }
    x1 = o->pos[0].h.i;
    D_sc06_016_8019F658 = x1;
    D_sc06_016_8019F668 = x1 - 4;
    y1 = AF(o, s16, 0xA);
    D_sc06_016_8019F65A = D_sc06_016_8019F662 = y1;
    D_sc06_016_8019F66A = D_sc06_016_8019F672 = y1 + 7;
    y2 = AF(o, s16, 0xA);
    D_sc06_016_8019F68E = D_sc06_016_8019F696 = y2;
    D_sc06_016_8019F69E = D_sc06_016_8019F6A6 = y2 + 7;
    x2 = AF(o, s16, 6);
    D_sc06_016_8019F6C0 = x2 + 2;
    D_sc06_016_8019F6D0 = x2 - 2;
    y = AF(o, s16, 0xA);
    D_sc06_016_8019F678 = D_sc06_016_8019F680 = 0xFF;
    D_sc06_016_8019F67C = D_sc06_016_8019F684 = 0xFF;
    D_sc06_016_8019F679 = D_sc06_016_8019F681 = 0;
    D_sc06_016_8019F682 = D_sc06_016_8019F686 = 0;
    D_sc06_016_8019F67A = D_sc06_016_8019F67E = 0;
    D_sc06_016_8019F6AC = D_sc06_016_8019F6B4 = 0xFF;
    D_sc06_016_8019F6C2 = D_sc06_016_8019F6CA = y + 4;
    D_sc06_016_8019F6D2 = D_sc06_016_8019F6DA = y + 0xB;
    D_sc06_016_8019F6AD = D_sc06_016_8019F6B5 = 0xFF;
    D_sc06_016_8019F6B1 = D_sc06_016_8019F6B9 = 0xFF;
    D_sc06_016_8019F6E0 = D_sc06_016_8019F6E4 = D_sc06_016_8019F6E8 = D_sc06_016_8019F6EC = 0x40;
    D_sc06_016_8019F6E1 = D_sc06_016_8019F6E5 = D_sc06_016_8019F6E9 = D_sc06_016_8019F6ED = 0x40;
    D_sc06_016_8019F6E2 = D_sc06_016_8019F6E6 = D_sc06_016_8019F6EA = D_sc06_016_8019F6EE = 0x40;
    D_sc06_016_8019F6AE = D_sc06_016_8019F6B2 = D_sc06_016_8019F6B6 = D_sc06_016_8019F6BA = 0;
    D_sc06_016_8019F65C = D_sc06_016_8019F690 = 2;
    D_sc06_016_8019F6C4 = 4;
    D_sc06_016_8019F688 = D_sc06_016_8019F6BC = 0;
    D_sc06_016_8019F6F0 = 0x60000000;
    if (AF(o, s16, 0x70) == 0) o->param = 0x100;
    D_sc06_016_801888A4 = 2;
    AF(o, s16, 2)++;
}

extern s16 D_sc06_016_80188A22;
extern void TakeDamage();
extern void GainStat3FromActor();
extern void GainStat2FromActor();
extern void SpawnKind1C();
extern u16 D_sc06_016_8019F718;
extern s16 D_sc06_016_80188A1C;
extern s32 SpawnPropAt();
extern void MoveProp();
extern u8 D_sc06_016_801890F0;
extern u8 D_sc06_016_801890FC;
extern void StartSpriteAnim();
extern s32 StepSpriteAnim();
extern void FreeProp();
extern void CopyPropPos();

extern B4 D_sc06_016_8019E2A0;
extern B4 D_sc06_016_8019E2A4;
extern B4 D_sc06_016_8019FA50;
extern u8 D_sc06_016_8019FA52;
extern u8 *D_sc06_016_8019FA00[];
extern s32 func_80135004();
extern s32 func_sc06_016_801803BC();
extern void RotTransSV();
extern u8 *D_sc06_016_8019FAD0;
extern u8 *D_sc06_016_8019FAD4;
extern E40 D_sc06_016_8019FAD8[];
extern u8 *D_sc06_016_8019FB58;
extern u8 *D_sc06_016_8019FB5C;
extern s16 D_sc06_016_8019FB60;
extern s16 D_sc06_016_8019FB64;
extern s32 D_sc06_016_8018910C;
extern s16 D_sc06_016_8019FD70[];
extern s32 D_sc06_016_8019FDF4[];
extern s32 D_sc06_016_8019FEF8;
extern s32 func_sc06_016_801816DC();

extern void QueueImage();
extern u8 D_sc06_016_80188E00;
extern u16 D_sc06_016_8019F8BC[];
extern u16 *D_sc06_016_80188DEC[];
extern s16 g_PlayerX;
extern s16 D_80126B62;
extern s32 HeadingToSV();
extern s32 SweepHitPlayer();
extern u8 D_sc06_016_801890BC;
extern u8 D_sc06_016_801890C8;
extern u8 D_sc06_016_801890D0;
extern void *g_PlayerModel;
extern s32 g_PlayerHitData;
extern s16 g_PlayerHitFacing;
extern u8 g_GroundNormal;
extern s32 PathHitsModel();
extern void HitPlayer();
extern void AngleToVec2();
extern u8 D_sc06_016_80189130;
extern u8 D_sc06_016_8018913C;

extern s16 D_sc06_016_8019F7B0;
extern SV8 D_sc06_016_80188B74[];
extern s16 D_sc06_016_80188B94[];
extern s32 StartEvent();
extern u8 D_sc06_016_80188AC4;
extern s32 RequestBgmPack();

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern CV4 D_sc06_016_8019E2E8;

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
extern void DrawPrimG4ScreenDithered();

void func_sc06_016_8017C43C(StageActor *arg0) {
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
            ((XY *)&D_sc06_016_8018888C)->x = (arg0->work108 * arg0->param) / max;
            if (((XY *)&D_sc06_016_8018888C)->x == 0 && tgt != 0) {
                ((XY *)&D_sc06_016_8018888C)->x = 1;
            }
        } else {
            s16 t = arg0->work10A;
            if (cur < t) {
                arg0->work108 = cur + (max * 3) / arg0->param;
                if (tgt < arg0->work108) {
                    arg0->work108 = max;
                }
                ((XY *)&D_sc06_016_8018888C)->x = (arg0->work108 * arg0->param) / max;
            } else if (t < max) {
                arg0->work10A = t + (max * 3) / arg0->param;
                if (max < arg0->work10A) {
                    arg0->work10A = max;
                }
                D_sc06_016_80188898 = (arg0->work10A * arg0->param) / max;
                D_sc06_016_801888A4 = D_sc06_016_80188898 + 2;
            }
        }
    }
    if (arg0->unkFC == 0xB) {
        u8 c = (arg0->timer++ & 1) ? 0xC0 : 0;
        ((QuadArg *)&D_sc06_016_8019F658)[0].c[2].g = c;
        ((QuadArg *)&D_sc06_016_8019F658)[0].c[0].g = c;
        ((QuadArg *)&D_sc06_016_8019F658)[1].c[3].b = c;
        ((QuadArg *)&D_sc06_016_8019F658)[1].c[2].b = c;
        ((QuadArg *)&D_sc06_016_8019F658)[1].c[1].b = c;
        ((QuadArg *)&D_sc06_016_8019F658)[1].c[0].b = c;
        ((QuadArg *)&D_sc06_016_8019F658)[0].c[3].b = c;
        ((QuadArg *)&D_sc06_016_8019F658)[0].c[2].b = c;
        ((QuadArg *)&D_sc06_016_8019F658)[0].c[1].b = c;
        ((QuadArg *)&D_sc06_016_8019F658)[0].c[0].b = c;
    }
    half = arg0->param >> 1;
    n = ((XY *)&D_sc06_016_8018888C)->x;
    if (n < (s16)half) {
        s32 v;
        v = (n * 255) / (s16)half;
        ((QuadArg *)&D_sc06_016_8019F658)[0].p[1].x = ((QuadArg *)&D_sc06_016_8019F658)[0].p[0].x + n;
        ((QuadArg *)&D_sc06_016_8019F658)[0].p[3].x = ((QuadArg *)&D_sc06_016_8019F658)[0].p[1].x - 4;
        ((QuadArg *)&D_sc06_016_8019F658)[0].c[3].g = v;
        ((QuadArg *)&D_sc06_016_8019F658)[0].c[1].g = v;
    } else {
        s32 x;
        s16 xm;
        u8 *g;
        s32 v;
        v = ((n - (s16)half) * 255) / (s16)half;
        g = &((QuadArg *)&D_sc06_016_8019F658)[0].c[1].g;
        *g = ((QuadArg *)&D_sc06_016_8019F658)[0].c[3].g = 0xFF;
        x = (u16)((QuadArg *)&D_sc06_016_8019F658)[0].p[0].x + half;
        xm = x - 4;
        ((QuadArg *)&D_sc06_016_8019F658)[1].p[0].x = x;
        ((QuadArg *)&D_sc06_016_8019F658)[1].p[1].x = ((QuadArg *)&D_sc06_016_8019F658)[0].p[0].x + n;
        ((QuadArg *)&D_sc06_016_8019F658)[0].p[1].x = x;
        ((QuadArg *)&D_sc06_016_8019F658)[1].p[2].x = xm;
        ((QuadArg *)&D_sc06_016_8019F658)[0].p[3].x = xm;
        ((QuadArg *)&D_sc06_016_8019F658)[1].p[3].x = ((QuadArg *)&D_sc06_016_8019F658)[1].p[1].x - 4;
        ((QuadArg *)&D_sc06_016_8019F658)[1].c[3].r = -v;
        ((QuadArg *)&D_sc06_016_8019F658)[1].c[1].r = -v;
        DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc06_016_8019F658)[1]);
    }
    {
        s16 *p = &((QuadArg *)&D_sc06_016_8019F658)[2].p[3].x;
        ((QuadArg *)&D_sc06_016_8019F658)[2].p[1].x = ((QuadArg *)&D_sc06_016_8019F658)[2].p[0].x + D_sc06_016_80188898;
        *p = ((QuadArg *)&D_sc06_016_8019F658)[2].p[1].x - 4;
    }
    DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc06_016_8019F658)[0]);
    DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc06_016_8019F658)[2]);
}

void func_sc06_016_8017C8D0(u8 *obj) {
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

void func_sc06_016_8017D7B0(void) {
    SetClock(0x01A40000);
}

void func_sc06_016_8017D7D0(u8 *arg0) {
    D_sc06_016_80188930[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_016_8017D80C(u8 *arg0) {
    func_sc06_016_8017DB0C();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_016_8017D850(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc06_016_8017D874(u8 *arg0) {
    D_sc06_016_80188938[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_016_8017D8B0(u8 *arg0) {
    func_sc06_016_80182BCC();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc06_016_8017D8F4(u8 *arg0) {
    D_sc06_016_80188940[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_016_8017D930(u8 *arg0) {
    func_sc06_016_8017DB34();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_016_8017D970(u8 *arg0) {
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

void func_sc06_016_8017D9EC(void) {
    func_800D1EBC();
}

void func_sc06_016_8017DA0C(u8 *arg0) {
    D_sc06_016_8018894C[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_016_8017DA48(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0, arg2);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D0C48(1);
        StartFade(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 RoomExitAfterBoss(void) {
    if (FadeStep(4) & 0xFFFF) {
        SetClock(0x03930000);
        SetProgress(0x578);
        RequestSave();
        return 1;
    }
    return 0;
}

void func_sc06_016_8017DB0C(void) {
    StartPlayerActionScript((s32) &D_sc06_016_80188958, 0x01000000);
}

void func_sc06_016_8017DB34(void) {
    StartPlayerActionScript((s32) &D_sc06_016_80188964, 0x01000000);
}

void func_sc06_016_8017DB5C(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x3E8;
    g_CameraAngleTarget = 0x1C7;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc06_016_8017DBF8, 0);
    SnapCamera((s32) &g_Camera);
    func_sc06_016_8017DBF8((s32) &g_Camera);
}

void func_sc06_016_8017DBF8(s32 arg0) {
    D_sc06_016_80188970[AF(arg0, u8, 4)]();
}

extern s32 ProjectPointOtz();
extern s32 AddDrawModeAt();

extern s32 g_CameraProj;
extern SV8 D_sc06_016_8019A49C;
extern u32 D_sc06_016_8019A4A4[];
extern u8 D_sc06_016_8019A4B0[];
extern u8 D_sc06_016_8019A4C0[];
extern u8 D_sc06_016_8019A4D0[];


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
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;

extern void SetLocalVelocity();
extern u8 D_sc06_016_80188BEC;
extern s32 D_sc06_016_80188BF8;

extern SV8 g_CameraFocus;
extern s32 FindActorByKind();
void func_sc06_016_8017DC34(u8 *o) {
    SV8 v;
    s32 lim;
    s32 t;
    v = g_CameraFocus;
    v.y = -0x280;
    if (v.x < -0x80) v.x = -0x80;
    if (v.x > 0x80) v.x = 0x80;
    t = FindActorByKind(0x2D8);
    lim = -0x110;
    if (t != 0 && AF(t, s32, 0xDC) == 1) lim = 0x160;
    if (v.z < lim) v.z = lim;
    if (v.z > 0x240) v.z = 0x240;
    func_sc06_016_8017DD14(o, &v);
}

void func_sc06_016_8017DD14(u8 *arg0, u8 *arg1) {
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

s32 func_sc06_016_8017DEAC(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x6E;
    if (arg0 < 0x578) {
        var_v0 = 0x8B;
    }
    return var_v0;
}

void func_sc06_016_8017DEC4(StageActor *arg0) {
    D_sc06_016_801889F4[arg0->state]();
    if (arg0->kind != 0) {
        CarryPlayer((s32) arg0);
    }
}

s32 func_sc06_016_8017DF24(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x34);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = AF(arg0, u16, 0xFC) + 0x40;
        AF(arg0, u16, 0xFC) = temp_v0;
        if ((s16) temp_v0 >= 0x400) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
        AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - ((0x1000 - rcos((s32) (s16) AF(arg0, u16, 0xFC), arg1, arg2, arg3)) << 7));
        break;
    case 1:
        if (D_80126B60 != AF(arg0, s32, 0xDC)) {
            AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 8);
        }
        break;
    }
    AF(arg0, s32, 0xDC) = D_80126B60;
    return 0;
}

void func_sc06_016_8017DFFC(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc06_016_801889AC) != 0) {
        SetModelCullBox(arg0->model, 0xC8, 0x168);
        arg0->reactive = 1;
        arg0->reactMask = -1;
        AF(arg0, s16, 0xAE) = -1;
        arg0->state = 1;
        arg0->targetClass = 0;
        SetScript(arg0, (s32) &D_sc06_016_801889EC);
    }
}

extern s32 GroundDistSqToPlayer();
extern s32 func_sc06_016_80181B50(void);
extern u8 D_sc06_016_80188974;
void func_sc06_016_8017E074(StageActor *o) {
    if (GroundDistSqToPlayer() < 0x6401) {
        if (func_sc06_016_80181B50() == 1) {
            StartEvent(o, &D_sc06_016_80188974);
            o->state = 2;
        }
    }
}

void func_sc06_016_8017E0D4(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

extern s16 D_sc06_016_80188A12;
extern u16 D_sc06_016_80188A06;
extern s32 func_sc06_016_8017F5B4(s32 arg0, s32 arg1);
void func_sc06_016_8017E114(u8 *o) {
    func_sc06_016_8017EEFC(o, 3, &D_sc06_016_80188A04, &D_sc06_016_801947F4);
    AF(o, s32, 0x1C) = D_sc06_016_80188A12;
    AF(o, s16, 0xA) = D_sc06_016_80188A06;
    AF(o, s16, 8) = 0;
    PlaySoundId(0x97D, 0);
    PlaySoundId(0xA90, 0);
    func_sc06_016_8017F5B4((s32)o, (s32)o);
}

s32 func_sc06_016_8017E190(s32 arg0) {
    func_sc06_016_8017EEFC(arg0, 4, 0, (s32) &D_sc06_016_801947F4);
    AF(arg0, s32, 0x1C) = (s32) D_sc06_016_80188A14;
    return (s32) D_sc06_016_80188A14;
}

void func_sc06_016_8017E1D8(s32 arg0) {
    s16 temp_v0;
    s32 var_v1;

    func_sc06_016_8017EEFC(arg0, 5, 0, (s32) &D_sc06_016_801963EC);
    AF(arg0, s16, 0x34) = 0;
    D_sc06_016_8019F6FC = 0;
    AF(arg0, s32, 0x1C) = (s32) D_sc06_016_80188A16;
    temp_v0 = func_sc06_016_8017EEB4(arg0);
    D_sc06_016_8019F704 = temp_v0;
    var_v1 = -1;
    if ((temp_v0 << 0x10) == 0) {
        var_v1 = 1;
    }
    D_sc06_016_8019F700 = var_v1;
    PlaySoundId(0x97E, 0);
    PlaySoundId(0xA92, 0);
    AF(arg0, s16, 0x84) = 0;
}

void func_sc06_016_8017E26C(u8 *o) {
    u8 unused[8];
    Player *g;
    s32 s;
    s32 a;
    s32 t;
    s32 d;

    g = &g_Player;
    if (++AF(o, s16, 0x84) == 0x1E) {
        PlaySoundId(0x97F, 0);
    }
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (++D_sc06_016_8019F6FC >= D_sc06_016_80188A22) {
            AF(o, s16, 0x34) = 1;
            D_sc06_016_8019F6FC = 0x10;
        }
        break;
    case 1:
        s = func_sc06_016_8017EEB4(o);
        a = PosDist(o + 4, (u8 *)g + 4);
        if (a < 0) {
            a = 0x80;
        } else if (a > 0x180) {
            a = 0x180;
        }
        t = 0x60000 / a * 1303;
        d = t / 16;
        if (s != 0) {
            d = -d;
        }
        if (s == D_sc06_016_8019F704) {
            D_sc06_016_8019F6FC = 4;
            D_sc06_016_8019F700 += d;
            if (s == 0) {
                if (t < D_sc06_016_8019F700) {
                    D_sc06_016_8019F700 = t;
                }
            } else {
                if (D_sc06_016_8019F700 < -t) {
                    D_sc06_016_8019F700 = -t;
                }
            }
        } else {
            if (--D_sc06_016_8019F6FC <= 0) {
                D_sc06_016_8019F704 = s;
            }
        }
        AF(AF(o, u8 *, 0x20), s16, 0x12) += D_sc06_016_8019F700 >> 16;
        break;
    }
    if (TickTimer(o) != 0) {
        func_sc06_016_8017E4AC((s32)o);
    }
}

void func_sc06_016_8017E4AC(s32 arg0) {
    func_sc06_016_8017EEFC(arg0, 6, 0, (s32) &D_sc06_016_801963EC);
    AF(arg0, s32, 0x1C) = (s32) D_sc06_016_80188A18;
    PlaySoundId(4, 0x97E);
}

void func_sc06_016_8017E4FC(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    func_sc06_016_8017EEFC(arg0, 7, 0, (s32) &D_sc06_016_80195E24);
    D_sc06_016_8019F708 = 0;
    D_sc06_016_8019F710 = D_sc06_016_80188A1A;
    PlaySoundId(0xA97, 0);
}

void BossHurt(u8 *o) {
    s32 d;
    s32 k;

    TakeDamage();
    d = AF(o, s16, 0x60) * AF(AF(o, u8 *, 0x78), s16, 0x30) >> 12;
    if (d <= 0) {
        d = 1;
    }
    AF(o, s16, 0x76) -= d;
    if (AF(o, u8, 0xC8) != 0) {
        GainStat3FromActor(o);
    }
    if (AF(o, u8, 0xC9) != 0) {
        GainStat2FromActor(o);
    }
    if (AF(o, s16, 0x76) <= 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
        UpdateModelZYX(o);
        BossDefeat((s32)o);
        return;
    }
    if (D_sc06_016_8019F720 == 0) {
        D_sc06_016_8019F720 = 0xF;
        PlaySoundId(0xA95, 0);
    }
    if (AF(o, u16, 2) != 8) {
        D_sc06_016_8019F718 = AF(o, u16, 2);
    }
    func_sc06_016_8017EEFC(o, 8, 0, &D_sc06_016_80196974);
    AF(o, u16, 0x5C) &= 0xFFFE;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (AF(o, u16, 0x62) + 0x800) & 0xFFF;
    SpawnKind1C(o, 0);
    AF(o, u8, 0xC1) = 1;
    AF(o, s32, 0x1C) = D_sc06_016_80188A1C;
    k = AF(o, u8, 0x5E);
    if (k != 0 && (k < 5 || k == 8)) {
        D_sc06_016_8019F70C += 1;
    } else {
        D_sc06_016_8019F70C += 4;
    }
    if (D_sc06_016_8019F70C >= 4) {
        func_sc06_016_8017F13C((s32)o);
    }
}

extern void func_sc06_016_8017EB8C(s32 arg0);
void func_sc06_016_8017E710(u8 *o) {
    s32 k;

    if (D_sc06_016_8019F720 != 0) {
        D_sc06_016_8019F720 -= 1;
    }
    if (TickTimer(o) != 0) {
        AF(o, u8, 0xC1) = 0;
        k = D_sc06_016_8019F70C;
        AF(o, s16, 0x5E) = 0;
        if (k >= 4) {
            func_sc06_016_8017E7D0(o);
        } else if (*(s16 *)&D_sc06_016_8019F718 == 7) {
            func_sc06_016_8017EEFC((s32)o, 7, 0, (s32)&D_sc06_016_80195E24);
            PlaySoundId(0xA97, 0);
        } else {
            func_sc06_016_8017EB8C((s32)o);
        }
    }
}

extern s32 D_sc06_016_80188A34;
void func_sc06_016_8017E7D0(Mover *o) {
    func_sc06_016_8017EEFC(o, 9, 0, &D_sc06_016_80195614);
    o->timer = D_sc06_016_80188A2A[0];
    o->model->rot.vy = HeadingToPlayer(o);
    UpdateModelZYX(o);
    StopMotion(o);
    SetLocalVelocity(o, &D_sc06_016_80188A2A[3]);
    D_sc06_016_8019F70C = 0;
    o->accel[1] = -D_sc06_016_80188A34 / (D_sc06_016_80188A2A[0] / 2);
}

s32 BossSpawn2FD(StageActor *arg0) {
    D_sc06_016_8019F70C = 0;
    D_sc06_016_8019F708 += 1;
    func_sc06_016_8017EEFC(arg0, 0xA, 0, (s32) &D_sc06_016_80194FFC);
    arg0->timer = 0x18;
    return SpawnActor(0x2FD, arg0);
}

void func_sc06_016_8017E910(s32 arg0) {
    func_sc06_016_8017EEFC(arg0, 0xB, 0, (s32) &D_sc06_016_80195614);
    AF(arg0, s32, 0x1C) = 0x10;
    func_sc06_016_8017ECE0(arg0);
    func_sc06_016_8017EDA0(arg0);
    PlaySoundId(0x981, 0);
}

void func_sc06_016_8017E96C(StageActor *o) {
    func_sc06_016_8017EEFC(o, 0xC, 0, 0);
    o->timer = (&D_sc06_016_80188A22)[(s16)D_sc06_016_8019F708];
    o->hitState = 0;
    HideModel(o);
}

void func_sc06_016_8017E9CC(Mover *o) {
    s32 n;
    s32 r;
    s32 k;
    func_sc06_016_8017EEFC(o, 0xD, 0, &D_sc06_016_80195614);
    ((s32 *)o)[7] = 0x11;
    if ((s16)D_sc06_016_8019F708 == 1) {
        n = (g_PlayerX < 1) * 2;
        if (D_80126B66 < 0x218) {
            n++;
        }
        D_sc06_016_8019F7B0 = n;
        PlaceObject(o, &D_sc06_016_80188B74[n]);
    } else {
        r = rand();
        n = D_sc06_016_8019F7B0 * 3 + r % 3;
        n = D_sc06_016_80188B94[n];
        PlaceObject(o, &D_sc06_016_80188B74[n]);
    }
    UpdateModelZYX(o);
    func_sc06_016_8017ECE0(o);
    PlaySoundId(0xA94, 0);
}

void BossSpawn2FF(StageActor *o) {
    func_sc06_016_8017EEFC(o, 0xE, 0, &D_sc06_016_80194FFC);
    ((s32 *)o)[7] = 0x18;
    SpawnActorArg(0x2FF, (s16)D_sc06_016_8019F708 - 1, o);
}

s32 func_sc06_016_8017EB3C(s32 arg0) {
    u16 temp_v0;

    func_sc06_016_8017EEFC(arg0, 0xF, 0, (s32) &D_sc06_016_80193CE4);
    temp_v0 = D_sc06_016_80188A2A[(*(s16 *)&D_sc06_016_8019F708)];
    D_sc06_016_8019F714 = temp_v0;
    return (s32) temp_v0;
}

void func_sc06_016_8017EB8C(s32 arg0) {
    func_sc06_016_8017EEFC(arg0, 0xF, 0, (s32) &D_sc06_016_80193CE4);
}

s32 BossDefeat(s32 arg0) {
    GainStat0FromActor();
    func_sc06_016_8017EEFC(arg0, 0x10, 0, (s32) &D_sc06_016_80196974);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s16, 0x5E) = 0;
    AF(arg0, u8, 0xC1) = 0;
    AF(arg0, s16, 0x76) = 0;
    AF(arg0, s16, 0x5C) = 0x800;
    PlaySoundId(0xA96, 0);
    SetProgress(0x578);
    func_800D0C48(1);
    ResetScriptVM();
    TakePlayerControl();
    return RunScript(arg0, (s32) &D_sc06_016_80188BFC);
}

void func_sc06_016_8017EC50(StageActor *arg0) {
    D_sc06_016_80188CF4[arg0->state]();
    if ((arg0->kind != 0) && ((s32)arg0->message == 1)) {
        func_sc06_016_8017EE78();
        if (D_sc06_016_8019F720 != 0) {
            D_sc06_016_8019F720 -= 1;
        }
    }
}

void func_sc06_016_8017ECE0(arg0, arg1, arg2)
    s32 arg0;
    s32 arg1;
    s32 arg2;
{
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    void *temp_v1;

    var_s2 = 0;
loop_1:
    temp_v0 = SpawnPropFrom(arg0, 0x22);
    if (temp_v0 != 0) {
        temp_v1 = AF(temp_v0, void *, 0x20);
        if (temp_v1 != NULL) {
            AF(temp_v1, u16, 0x2C) = 0xC040;
        }
        temp_s0 = var_s2 << 9;
        temp_s0_2 = rsin(temp_s0);
        temp_v0_2 = rcos(temp_s0);
        var_s2 += 1;
        AF(temp_v0, s16, 0x34) = 0x2001;
        AF(temp_v0, s32, 0x14) = 0xFFF80000;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) + (temp_s0_2 << 9));
        AF(temp_v0, s32, 0xC) = (s32) (AF(temp_v0, s32, 0xC) + (temp_v0_2 << 9));
        if (var_s2 < 8) {
            goto loop_1;
        }
    }
}

void func_sc06_016_8017EDA0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    void *temp_v1;

    var_s2 = 0;
loop_1:
    temp_v0 = SpawnPropFrom(arg0, 0x22);
    if (temp_v0 != 0) {
        temp_v1 = AF(temp_v0, void *, 0x20);
        if (temp_v1 != NULL) {
            AF(temp_v1, u16, 0x2C) = 0xC040;
        }
        temp_s0 = var_s2 << 7;
        temp_s0_2 = rsin(temp_s0);
        temp_v0_2 = rcos(temp_s0);
        var_s2 += 1;
        AF(temp_v0, s16, 0x34) = 0x2002;
        AF(temp_v0, s32, 0x10) = (s32) (temp_s0_2 * 0x70);
        AF(temp_v0, s32, 0x18) = (s32) (temp_v0_2 * 0x70);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) + (temp_s0_2 << 8));
        AF(temp_v0, s32, 0xC) = (s32) (AF(temp_v0, s32, 0xC) + (temp_v0_2 << 8));
        if (var_s2 < 0x20) {
            goto loop_1;
        }
    }
}

void func_sc06_016_8017EE78(void) {
    if ((g_PlayerAction == 0) && (D_80126B66 < 0x80)) {
        D_80126B66 = 0x80;
    }
}

s32 func_sc06_016_8017EEB4(Mover *arg0, s32 arg1, s32 arg2) {
    return ((HeadingToPlayer(arg0) - arg0->model->rot.vy) & 0xFFF) >= 0x800;
}

void func_sc06_016_8017EEFC(s32 arg0, s32 arg1, s32 arg2, AnimEntry *arg3) {
    void *temp_v1;
    void *temp_v1_2;

    AF(arg0, s16, 2) = (s16) arg1;
    if (arg2 != 0) {
        PlaceObject(arg0, arg2);
    }
    if (arg3 != 0) {
        SetScript(arg0, arg3);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, s16, 0x1C) = 0x1000;
    AF(temp_v1_2, s16, 0x1A) = 0x1000;
    AF(temp_v1_2, s16, 0x18) = 0x1000;
    ShowModel(arg0);
    if (D_sc06_016_80188D38[arg1] != 0) {
        func_sc06_016_8017F124(arg0);
        return;
    }
    func_sc06_016_8017F13C(arg0);
}

void func_sc06_016_8017EFBC(u8 *o, s32 n) {
    s32 i;
    s32 j;
    u16 *d;
    u16 *s;
    u16 **t;
    u16 *q;
    u16 *d2;
    u16 *s2;
    u16 **t2;
    u16 *q2;
    u16 c;
    u32 rr;
    u32 gg;
    u32 bb;

    if (n <= 0) {
        HideModel();
    } else if (n >= 0x1000) {
        ShowModel();
        for (i = 0, d = D_sc06_016_8019F8BC, t = D_sc06_016_80188DEC; i < 5; d += 16, i++, t++) {
            for (j = 0, q = d, s = *t; j < 16; j++) {
                *q++ = *s++;
            }
        }
    } else {
        ShowModel();
        for (i = 0, d2 = D_sc06_016_8019F8BC, t2 = D_sc06_016_80188DEC; i < 5; d2 += 16, i++, t2++) {
            for (j = 0, q2 = d2, s2 = *t2; j < 16; j++) {
                c = *s2++;
                rr = c & 0x1F;
                rr *= n;
                gg = (c >> 5) & 0x1F;
                gg *= n;
                bb = ((c >> 10) & 0x1F) * n;
                rr = (rr >> 12) & 0x1F;
                gg = (gg >> 7) & 0x3E0;
                *q2++ = ((bb >> 2) & 0x7C00) | gg | rr;
            }
        }
    }
    QueueImage(&D_sc06_016_80188E00);
}

s32 func_sc06_016_8017F124(s32 arg0) {
    u16 temp_v0;

    AF(arg0, s16, 0xAE) = 0x6000;
    temp_v0 = AF(arg0, u16, 0x5C) | 0x8800;
    AF(arg0, u16, 0x5C) = temp_v0;
    return (s32) temp_v0;
}

s32 func_sc06_016_8017F13C(s32 arg0) {
    u16 temp_v0;

    AF(arg0, s16, 0xAE) = -1;
    temp_v0 = AF(arg0, u16, 0x5C) | 0x8800;
    AF(arg0, u16, 0x5C) = temp_v0;
    return (s32) temp_v0;
}

void func_sc06_016_8017F154(u8 *o) {
    WMtx m;
    SV8 v;
    CV c;
    s32 k;

    m = GsIDMATRIX;
    c = D_sc06_016_8019E290;
    k = AF(o, u16, 0x2C) & 1;
    func_8001CD9C(AF(o, u8 *, 0x20), &D_sc06_016_8019F95C[k]);
    AF(AF(o, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC040;
    if (k == 0) {
        SetShapeCircle(D_sc06_016_8019F95C, 0x80);
        D_sc06_016_8019F95C[0].a = D_sc06_016_8019E28C;
        D_sc06_016_8019F95C[0].b = D_sc06_016_8019E28C;
        func_sc06_016_80184438();
        func_sc06_016_80184578(0, &c, -8);
    } else {
        SetShapeCircle(&D_sc06_016_8019F95C[1], 0x10);
        D_sc06_016_8019F95C[1].a = D_sc06_016_8019E294;
        D_sc06_016_8019F95C[1].b = D_sc06_016_8019E28C;
        RotMatrixZ(rand() & 0xFFF, &m);
        v.x = 0xC0;
        v.z = 0;
        v.y = 0;
        ApplyMatrixSV(&m, &v, &v);
        AF(o, s16, 6) += v.x;
        AF(o, s16, 0xA) += v.y;
        AF(o, s16, 0xE) += v.z;
        AF(o, s32, 0x10) = -(v.x << 12);
        AF(o, s32, 0x14) = -(v.y << 12);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0;
        AF(o, s32, 0x1C) = 0xC;
    }
    AF(o, s16, 2)++;
}

void func_sc06_016_8017F3B8(u8 *o) {
    u8 *p;
    u8 *q;
    SV8 v;
    u8 b;
    s32 c;
    s16 t;

    p = AF(o, u8 *, 0x30);
    if (!(AF(o, u16, 0x2C) & 1)) {
        if (AF(p, u16, 2) == 3) {
            func_sc06_016_8017F5FC();
            func_sc06_016_801845E8((s32)(o + 4));
        }
        if (AF(p, u16, 2) == 4) {
            AF(o, u16, 2)++;
            return;
        }
        c = D_sc06_016_8019F95C[0].a.b;
        if (c < 0xFF) {
            t = c + 5;
            if (t >= 0x100) {
                t = 0xFF;
            }
            D_sc06_016_8019F95C[0].a.r = t;
            D_sc06_016_8019F95C[0].a.b++;
            D_sc06_016_8019F95C[0].a.g += 2;
        }
        if (AF(p, u16, 2) == 3) {
            if (!(++AF(o, s32, 0x1C) & 1)) {
                v.x = AF(o, u16, 6);
                v.y = AF(o, u16, 0xA);
                v.z = AF(o, u16, 0xE);
                q = (u8 *)SpawnPropAt(0x62, &v);
                if (q != 0) {
                    AF(q, u16, 0x2C) = 1;
                }
            } else {
                func_sc06_016_80184660(rand() & 0xFF0, 0x40);
            }
        }
        func_sc06_016_80184804();
        return;
    }
    if (AF(AF(o, u8 *, 0x20), s16, 0x18) < 0x1000) {
        AF(AF(o, u8 *, 0x20), s16, 0x18) += 0x400;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) += 0x400;
    }
    MoveProp(o);
    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C)--;
        return;
    }
    AF(o, u16, 2)++;
}

void func_sc06_016_8017F578(u8 *arg0) {
    D_sc06_016_80188E60[AF(arg0, u16, 2)]();
}

s32 func_sc06_016_8017F5B4(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = SpawnPropFrom(arg0, 0x62);
    if (temp_v0 != 0) {
        AF(temp_v0, s32, 0x34) = arg0;
        AF(temp_v0, s32, 0x30) = arg1;
    }
    return temp_v0;
}

void func_sc06_016_8017F5FC(u8 *o) {
    SV8 v;
    s32 flag;
    u8 *p;

    p = AF(o, u8 *, 0x34);
    v.y = -0x40;
    v.x = 0;
    v.z = -0x28;
    SetRotMatrix(AF(p, u8 *, 0x20) + 0x34);
    SetTransMatrix(AF(p, u8 *, 0x20) + 0x34);
    RotTransSV(&v, &v, &flag);
    AF(o, u16, 6) = v.x;
    AF(o, u16, 0xA) = v.y;
    AF(o, u16, 0xE) = v.z;
}

void func_sc06_016_8017F68C(void) {
}

extern u16 D_800B99DA;
extern u8 D_sc06_016_80188FAC[];
void func_sc06_016_8017F694(u8 *o) {
    u8 *p = (u8 *)D_sc06_016_8019F9FC;
    if (p != 0) {
        if (AF(AF(o, u8 *, 0x20), u32, 4) & 0x80000000) {
            AF(p, s32, 4) |= 0x80000000;
        } else {
            AF(p, s32, 4) &= 0x7FFFFFFF;
            AF(p, s16, 0x10) = 0;
            AF(p, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12);
            AF(p, s16, 0x14) = 0;
            AF(p, B8, 8) = AF(AF(o, u8 *, 0x20), B8, 8);
            AF(p, B8, 0x18) = AF(AF(o, u8 *, 0x20), B8, 0x18);
            QueueImage(&D_sc06_016_80188FAC[(D_800B99DA & 7) * 32]);
        }
    }
}

extern void WorldToActorLocal();

extern void UpdateModelYXZ();
extern u16 D_sc06_016_8019F9DC[];
extern u16 D_sc06_016_80188E6C[];
extern u8 D_sc06_016_80188E8C;
extern void func_sc06_016_801800E0();
extern void func_sc06_016_801803FC();
extern void func_sc06_016_8018048C();
extern void func_sc06_016_801807C4();
extern void func_sc06_016_80180BF0();
typedef struct { u8 pad[0xFC]; s16 fc; } OF_8017F784;

static inline void upd_8017F784(u8 *o) {
    s32 i;
    u16 *s;
    s = D_sc06_016_80188E6C;
    ((OF_8017F784 *)o)->fc = (((OF_8017F784 *)o)->fc - 1) & 0xF;
    for (i = 0; i < 16; i++) {
        D_sc06_016_8019F9DC[i] = s[(i + ((OF_8017F784 *)o)->fc) & 0xF];
    }
    QueueImage(&D_sc06_016_80188E8C);
    AF(o, s32, 4) = AF(AF(o, u8 *, 0x64), s32, 4);
    AF(o, s32, 8) = AF(AF(o, u8 *, 0x64), s32, 8) - 0x300000;
    AF(o, s32, 0xC) = AF(AF(o, u8 *, 0x64), s32, 0xC);
    AF(AF(o, u8 *, 0x20), u16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 0x12);
    AF(AF(o, u8 *, 0x20), u16, 0x14) += 0x78;
    UpdateModelYXZ(o);
    func_sc06_016_8017F694(o);
}

static inline void scale_8017F784(u8 *o, s32 x, s32 y, s32 z) {
    if (AF(o, u8 *, 0x20) != 0) {
        AF(AF(o, u8 *, 0x20), s16, 0x18) = x;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = y;
        AF(AF(o, u8 *, 0x20), s16, 0x1C) = z;
    }
}

void func_sc06_016_8017F784(u8 *o) {
    s32 v;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(D_sc06_016_8019F6F8, u16, 2) != 5) {
            return;
        }
        scale_8017F784(o, 0, 0, 0);
        ShowModel(o);
        AF(o, s32, 0x1C) = 0;
        AF(o, u16, 0x34) = 1;
        D_sc06_016_8019FB60 = 1;
        upd_8017F784(o);
        func_sc06_016_8018048C(o);
        break;
    case 1:
        v = ++AF(o, s32, 0x1C) << 10;
        scale_8017F784(o, v, v, v);
        ShowModel(o);
        if (AF(o, s32, 0x1C) == 4) {
            AF(o, u16, 0x34) = 2;
        scale_8017F784(o, 0x1000, 0x1000, 0x1000);
            ShowModel(o);
        }
        upd_8017F784(o);
        func_sc06_016_8018048C(o);
        break;
    case 2:
        ShowModel(o);
        func_sc06_016_80180BF0(o);
        if (AF(D_sc06_016_8019F6F8, u16, 2) == 6) {
            AF(o, u16, 0x34) = 3;
            AF(o, s32, 0x1C) = D_sc06_016_80188A18;
        scale_8017F784(o, 0x1000, 0x1000, 0x1000);
            ShowModel(o);
            upd_8017F784(o);
            func_sc06_016_801807C4(o);
            func_sc06_016_801803FC();
        } else {
            upd_8017F784(o);
            func_sc06_016_801800E0(o);
            func_sc06_016_8018048C(o);
        }
        break;
    case 3:
        v = ((AF(o, s32, 0x1C) - 5) << 12) / (D_sc06_016_80188A18 - 5);
        if (v < 0x100) {
            v = 0x100;
        }
        scale_8017F784(o, v, v, 0x1000);
        if (TickTimer(o) != 0) {
            HideModel(o);
            AF(o, u16, 0x34) = 0;
        }
        upd_8017F784(o);
        func_sc06_016_801807C4(o);
        break;
    }
}

void func_sc06_016_8017FE54(StageActor *arg0) {
    D_sc06_016_801890AC[arg0->state]();
}

extern CV D_sc06_016_8019E288;
extern CV D_sc06_016_8019E29C;
extern E40 D_sc06_016_8019FA10;
extern void func_sc06_016_801806FC();

void func_sc06_016_8017FE90(u8 *o) {
    s32 i;
    u8 *m;

    SetShapeCircle(&D_sc06_016_8019FA10, 0xA0);
    D_sc06_016_8019FA10.a = D_sc06_016_8019E288;
    D_sc06_016_8019FA10.b = D_sc06_016_8019E28C;
    for (i = 0; i < 4; i++) {
        if ((D_sc06_016_8019FA00[i] = m = AllocActorSprite()) != 0) {
            func_8001CD9C(m, &D_sc06_016_8019FA10);
            AF(m, s16, 0x18) = 0x1000;
            AF(m, s16, 0x1A) = 0x1000;
            AF(m, u16, 0x2C) = 0xC060;
            AF(m, s32, 4) |= 0x50000000;
        }
    }
    SetShapeCircle((E40 *)&D_sc06_016_8019FA50, 0xE0);
    ((E40 *)&D_sc06_016_8019FA50)[0].a = D_sc06_016_8019E29C;
    ((E40 *)&D_sc06_016_8019FA50)[0].b = D_sc06_016_8019E28C;
    m = AllocActorSprite();
    D_sc06_016_8019FAD0 = m;
    if (m != 0) {
        func_8001CD9C(m, (E40 *)&D_sc06_016_8019FA50);
        AF(m, s16, 0x18) = 0x1000;
        AF(m, s16, 0x1A) = 0x1000;
        AF(m, u16, 0x2C) = 0xC060;
        AF(m, s32, 4) |= 0x50000000;
    }
    SetShapeCircle((E40 *)&D_sc06_016_8019FA50 + 1, 0xC0);
    ((E40 *)&D_sc06_016_8019FA50)[1].a = D_sc06_016_8019E29C;
    ((E40 *)&D_sc06_016_8019FA50)[1].b = D_sc06_016_8019E28C;
    m = AllocActorSprite();
    D_sc06_016_8019FAD4 = m;
    if (m != 0) {
        func_8001CD9C(m, (E40 *)&D_sc06_016_8019FA50 + 1);
        AF(m, s16, 0x18) = 0x1000;
        AF(m, s16, 0x1A) = 0x1000;
        AF(m, u16, 0x2C) = 0xC060;
        AF(m, s32, 4) |= 0x50000000;
    }
    func_sc06_016_801806FC(0);
    func_sc06_016_801806FC(1);
    D_sc06_016_8019FB60 = 0;
    D_sc06_016_8019FB64 = 0;
    func_sc06_016_801800E0(o);
}

void func_sc06_016_801800E0(u8 *o) {
    SV8 v;
    SV8 a;
    SV8 b;
    s32 flag;
    s32 i;
    s32 r;
    s32 k;
    u8 **p;
    u8 *e;

    SetRotMatrix(AF(o, u8 *, 0x20) + 0x54);
    SetTransMatrix(AF(o, u8 *, 0x20) + 0x54);
    a.x = AF(AF(o, u8 *, 0x20), s32, 0x68);
    a.y = AF(AF(o, u8 *, 0x20), s32, 0x6C);
    a.z = AF(AF(o, u8 *, 0x20), s32, 0x70);
    for (i = 0; i < 7; i++) {
        v.y = 0;
        v.x = 0;
        v.z = -((i + 1) << 7);
        RotTransSV(&v, &b, &flag);
        r = func_80135004(1, &a, &b);
        if (r != 0) {
            break;
        }
        a = b;
    }
    do {
        i = 0;
        k = -0x40;
        p = D_sc06_016_8019FA00;
    loop:
        e = *p;
        if (e != 0) {
            v.x = 0;
            v.y = 0;
            v.z = k;
            RotTransSV(&v, &v, &flag);
            AF(e, s16, 8) = v.x;
            AF(e, s16, 0xA) = v.y;
            AF(e, s16, 0xC) = v.z;
            AF(e, s32, 4) &= 0x7FFFFFFF;
        }
        k -= 0xA0;
        i++;
        p++;
        if (i < 4) goto loop;
    } while (0);
    if (r == 0) {
        e = D_sc06_016_8019FAD0;
        if (e != 0) {
            AF(e, s32, 4) |= 0x80000000;
        }
        e = D_sc06_016_8019FAD4;
        if (e != 0) {
            AF(e, s32, 4) |= 0x80000000;
        }
    } else {
        b.x = ((b.x - AF(AF(o, u8 *, 0x20), s32, 0x68)) * 20 >> 4) + AF(AF(o, u8 *, 0x20), s32, 0x68);
        b.y = ((b.y - AF(AF(o, u8 *, 0x20), s32, 0x6C)) * 20 >> 4) + AF(AF(o, u8 *, 0x20), s32, 0x6C);
        b.z = ((b.z - AF(AF(o, u8 *, 0x20), s32, 0x70)) * 20 >> 4) + AF(AF(o, u8 *, 0x20), s32, 0x70);
        func_sc06_016_801803BC(D_sc06_016_8019FAD0, &b);
        func_sc06_016_801803BC(D_sc06_016_8019FAD4, &b);
        if (D_sc06_016_8019FA52 == 0xB0) {
            D_sc06_016_8019FA50 = D_sc06_016_8019E2A0;
        } else {
            D_sc06_016_8019FA50 = D_sc06_016_8019E2A4;
        }
    }
}

s32 func_sc06_016_801803BC(u8 *e, SV8 *c) {
    if (e != 0) {
        AF(e, s16, 0x8) = c->x;
        AF(e, s16, 0xA) = c->y;
        AF(e, s16, 0xC) = c->z;
        AF(e, u32, 0x4) &= 0x7FFFFFFF;
    }
}

void func_sc06_016_801803FC(void) {
    s32 i;
    u8 *e;

    for (i = 0; i < 4; i++) {
        e = D_sc06_016_8019FA00[i];
        if (e != 0) {
            AF(e, s32, 4) |= 0x80000000;
        }
    }
    e = D_sc06_016_8019FAD0;
    if (e != 0) {
        AF(e, s32, 4) |= 0x80000000;
    }
    e = D_sc06_016_8019FAD4;
    if (e != 0) {
        AF(e, s32, 4) |= 0x80000000;
    }
}

void func_sc06_016_8018048C(StageActor *o) {
    typedef struct { u8 pad[4]; s32 f; u8 pad2[0xA]; u16 h; } OS;
    SV8 out;
    SV8 w;
    u8 *a;
    u8 *b;
    E40 *e;
    E40 *f;
    s32 s;
    u16 t;
    s32 c;

    a = D_sc06_016_8019FB58;
    b = D_sc06_016_8019FB5C;
    e = D_sc06_016_8019FAD8;
    f = e + 1;
    if (a == 0 || b == 0) {
        return;
    }
    switch (D_sc06_016_8019FB60) {
    case 0:
        AF(a, s32, 4) |= 0x80000000;
        AF(b, s32, 4) |= 0x80000000;
        return;
    case 1:
        AF(a, s32, 4) &= 0x7FFFFFFF;
        ((OS *)b)->f &= 0x7FFFFFFF;
        D_sc06_016_8019FB64 = 0;
        D_sc06_016_8019FB60 = 2;
    case 2:
        t = D_sc06_016_8019FB64 + 1;
        AF(a, s16, 0x1E) = 0xC00;
        AF(b, s16, 0x1E) = 0x1400;
        D_sc06_016_8019FB64 = t;
        s = (t << 6) & 0xFFC0;
        SetShapeCircle(e, s);
        SetShapeCircle(f, s);
        c = D_sc06_016_8019FB64 * 32 - 0x21;
        if (c > 0x100) {
            c = 0xFF;
        }
        c = 0xFF - c;
        e->a = D_sc06_016_8019E28C;
        e->b.r = c;
        e->b.g = c;
        e->b.b = c / 2;
        f->a = D_sc06_016_8019E28C;
        f->b.r = c;
        f->b.g = c;
        f->b.b = c / 2;
        w.x = 0;
        w.y = -0x20;
        w.z = -0x80;
        FaceHelper(o, &w, &out);
        *(SV8 *)(a + 8) = out;
        *(SV8 *)(b + 8) = *(SV8 *)(a + 8);
        AF(a, u16, 0x12) = (u16)o->model->rot.vy;
        ((OS *)b)->h = (u16)o->model->rot.vy;
        if (D_sc06_016_8019FB64 >= 9) {
            D_sc06_016_8019FB60 = 0;
        }
        break;
    }
}

extern void func_8001CD50();
void func_sc06_016_801806FC(s32 i) {
    u8 *m;

    SetShapeCircle(&D_sc06_016_8019FAD8[i], 0);
    D_sc06_016_8019FAD8[i].a = D_sc06_016_8019E28C;
    D_sc06_016_8019FAD8[i].b = D_sc06_016_8019E28C;
    m = AllocActorSprite();
    (&D_sc06_016_8019FB58)[i] = m;
    if (m != 0) {
        func_8001CD50(m, &D_sc06_016_8019FAD8[i]);
        AF(m, s32, 4) |= 0xD0000000;
    }
}

extern void func_sc06_016_80180894(SV8 *pa, SV8 *pb, s32 w, s32 sel);
void func_sc06_016_801807C4(StageActor *o) {
    SV8 a;
    SV8 b;
    SV8 pa;
    SV8 pb;
    s32 i;

    for (i = 0; i < 5; i++) {
        a.x = 0;
        a.y = 0;
        a.z = 0x40 - (i << 7);
        b.x = 0;
        b.y = 0;
        b.z = 0x40 - ((i + 1) << 7);
        FaceHelper(o, &a, &pa);
        FaceHelper(o, &b, &pb);
        func_sc06_016_80180894(&pa, &pb, o->model->scale.vx, i);
    }
}

void func_sc06_016_80180894(SV8 *pa, SV8 *pb, s32 w, s32 sel) {
    u8 unused[16];
    SV8 a;
    SV8 b;
    XY p[6];
    u8 *prim;
    s32 z;
    s32 dx;
    s32 dy;

    if (ProjectPointOtz(pa, &a) & ~0x1000) {
        return;
    }
    if (ProjectPointOtz(pb, &b) & ~0x1000) {
        return;
    }
    dy = ((b.y - a.y) * w) >> 12;
    dx = ((b.x - a.x) * w) >> 12;
    z = a.z;
    p[0].x = a.x;
    p[0].y = a.y;
    p[1].x = b.x;
    p[1].y = b.y;
    p[2].x = a.x + dy;
    p[2].y = a.y - dx;
    p[4].x = a.x - dy;
    p[3].x = b.x + dy;
    p[3].y = b.y - dx;
    p[4].y = a.y + dx;
    p[5].x = b.x - dy;
    p[5].y = b.y + dx;
    prim = AllocPrim(0x24);
    if (sel == 0) {
        AF(prim, CV, 4) = D_sc06_016_8019E28C;
    } else {
        AF(prim, CV, 4) = D_sc06_016_8019E288;
    }
    AF(prim, CV, 0xC) = D_sc06_016_8019E288;
    AF(prim, CV, 0x14) = D_sc06_016_8019E28C;
    AF(prim, CV, 0x1C) = D_sc06_016_8019E28C;
    AF(prim, XY, 8) = p[0];
    AF(prim, XY, 0x10) = p[1];
    AF(prim, XY, 0x18) = p[2];
    AF(prim, XY, 0x20) = p[3];
    AF(prim, u8, 7) = 0x3A;
    AF(prim, s32, 0) = 0x08000000;
    AddPrim(g_WorldOtOrg[D_800B9A02[0]].ot + z, prim);
    AddDrawModeAt(z, 1);
    prim = AllocPrim(0x24);
    if (sel == 0) {
        AF(prim, CV, 4) = D_sc06_016_8019E28C;
    } else {
        AF(prim, CV, 4) = D_sc06_016_8019E288;
    }
    AF(prim, CV, 0xC) = D_sc06_016_8019E288;
    AF(prim, CV, 0x14) = D_sc06_016_8019E28C;
    AF(prim, CV, 0x1C) = D_sc06_016_8019E28C;
    AF(prim, XY, 8) = p[0];
    AF(prim, XY, 0x10) = p[1];
    AF(prim, XY, 0x18) = p[4];
    AF(prim, XY, 0x20) = p[5];
    AF(prim, u8, 7) = 0x3A;
    AF(prim, s32, 0) = 0x08000000;
    AddPrim(g_WorldOtOrg[D_800B9A02[0]].ot + z, prim);
    AddDrawModeAt(z, 1);
}

void func_sc06_016_80180BF0(u8 *o) {
    SV8 a;
    SV8 b;
    s32 r;
    s32 i;

    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    b.x = g_PlayerX;
    b.y = D_80126B62;
    b.z = D_80126B66;
    r = HeadingToSV(&a, &b);
    a.z = -0x280;
    b.z = 0;
    for (i = 0; i < 3; i++) {
        a.x = b.x = (i - 1) * 0x2C;
        a.y = b.y = -0x2C;
        if (SweepHitPlayer(o, &a, &b, r & 0xFFF)) break;
        a.y = b.y = 0;
        if (SweepHitPlayer(o, &a, &b, r & 0xFFF)) break;
        a.y = b.y = 0x2C;
        if (SweepHitPlayer(o, &a, &b, r & 0xFFF)) break;
    }
}

s32 SweepHitPlayer(u8 *o, SV8 *a, SV8 *b, s32 r0) {
    SV8 va;
    SV8 vb;
    s16 r = r0;

    LocalToWorld(AF(o, u8 *, 0x20) + 0x54, a, &va);
    LocalToWorld(AF(o, u8 *, 0x20) + 0x54, b, &vb);
    if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &va, &vb) != 0) {
        HitPlayer(1, 0x4201, r, 0x5A, &vb, &g_GroundNormal);
        g_PlayerHitFacing = r;
        return 1;
    }
    return 0;
}

void func_sc06_016_80180DE8(StageActor *arg0) {
    D_sc06_016_801890B4[arg0->state]();
}

void func_sc06_016_80180E24(u8 *o) {
    SV8 v;
    StageActor *p;
    s32 n;

    p = AF(o, u8 *, 0x2C);
    if (AF(o, u16, 2) == 0) {
        AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_sc06_016_801890BC;
        AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x43;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2800;
        StartSpriteAnim(AF(o, u8 *, 0x20), o + 0x24, &D_sc06_016_801890C8);
        AF(o, u16, 2)++;
        StepSpriteAnim(AF(o, u8 *, 0x20), o + 0x24);
        AF(o, s32, 0x1C) = 0;
    }
    n = ++AF(o, s32, 0x1C);
    if (n >= 0x16 || (s16)p->id != AF(o, s16, 0x30)) {
        FreeProp(o);
        return;
    }
    if (n < 4) {
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = n * 0xA00;
    } else {
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x2800;
    }
    FaceHelper(p, &D_sc06_016_801890D0, &v);
    AF(o, s16, 6) = v.x;
    AF(o, s16, 0xA) = v.y;
    AF(o, s16, 0xE) = v.z;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC040;
}

void func_sc06_016_80180F68(s32 o) {
    u8 *p;

    p = AF(o, u8 *, 0x20);
    AF(o, u16, 2) = 2;
    AF(o, u16, 0x34) = 0;
    AF(p, s16, 0x14) = 0;
    AF(p, s16, 0x12) = 0;
    AF(p, s16, 0x10) = 0;
    UpdateModelZYX(o);
    StopMotion(o);
    if (AF(o, s16, 6) < 0) {
        if (AF(o, s16, 0x70) != 0) {
            AF(o, s32, 0x10) = 0x40000;
        } else {
            AF(o, s32, 0x10) = 0x30000;
        }
    } else {
        if (AF(o, s16, 0x70) != 0) {
            AF(o, s32, 0x10) = -0x40000;
        } else {
            AF(o, s32, 0x10) = -0x30000;
        }
    }
    AF(o, s32, 0x14) = 0x200000;
    AF(o, s32, 0x18) = 0;
    AF(o, s32, 0x48) = 0x20000;
    AF(o, s32, 0x1C) = 0;
    PlaySoundId(0x980, 0);
}

s32 func_sc06_016_80181018(StageActor *arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    do {
        SpawnActorArg(0x303, var_s0, arg0);
        var_s0 += 1;
        temp_v0 = var_s0 < 8;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc06_016_80181068(StageActor *arg0) {
    D_sc06_016_801890E4[arg0->state]();
}

void func_sc06_016_801810A4(u8 *o) {
    u8 *p;
    s32 n;

    p = AF(o, u8 *, 0x2C);
    switch (AF(o, u16, 2)) {
    case 0:
        AF(o, u16, 2)++;
        AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_sc06_016_801890F0;
        AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x44;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0xC00;
        StartSpriteAnim(AF(o, u8 *, 0x20), o + 0x24, &D_sc06_016_801890FC);
        StepSpriteAnim(AF(o, u8 *, 0x20), o + 0x24);
        AF(o, s32, 0x1C) = 0;
    case 1:
        if (AF(p, s16, 0x36) != AF(o, s16, 0x30)) {
            FreeProp(o);
            break;
        }
        n = ++AF(o, s32, 0x1C);
        if (n < 8) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = n * 0x180;
        } else if (n < 0x16) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0xC00;
        } else if (AF(p, s32, 0x1C) == 0) {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x600;
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0x1200;
        } else if (AF(p, s32, 0x1C) > 0x10) {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0xC00;
            AF(AF(o, u8 *, 0x20), s16, 0x18) = 0xC00;
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0xC00;
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(p, s32, 0x1C) * 0x60 + 0x600;
        }
        CopyPropPos(o, p);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC040;
        break;
    }
}

void func_sc06_016_80181254(StageActor *arg0) {
    D_sc06_016_80189104[arg0->state]();
}

void func_sc06_016_80181290(Mover *o) {
    typedef union { s32 w; XY s; } UXY;
    SV8 a;
    SV8 b;
    UXY w;
    s32 r;
    s32 v;

    if (DistSqToPlayer() < 0x57E5) {
        r = HeadingToPlayer(o);
        a.x = o->pos[0].h.i;
        a.y = o->pos[1].h.i;
        a.z = o->pos[2].h.i;
        b.x = g_PlayerX;
        b.y = D_80126B62;
        b.z = D_80126B66;
        b.y -= 0x40;
        if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b)) {
            HitPlayer(1, 0x4201, r, 0x5A, &b, &g_GroundNormal);
            g_PlayerHitFacing = r;
            AngleToVec2(&w, r, 0x9E);
            v = w.w;
            g_PlayerX = o->pos[0].h.i - v;
            D_80126B66 = o->pos[2].h.i - (v >> 16);
        }
    }
}

extern SV8 D_sc06_016_8019FB68[];
void func_sc06_016_801813B0() {
    s32 i;
    SV8 *src;

    D_sc06_016_8019FEF8 = 0;
    src = AF(*(u8 **)&D_sc06_016_801937DC, SV8 *, 0xC);
    for (i = 0; i < 0x41; i++) {
        D_sc06_016_8019FB68[i] = src[i];
        if (src[i].y == -0x96) {
            D_sc06_016_8019FD70[i] = 4;
        } else if (src[i].y == -0x8B) {
            D_sc06_016_8019FD70[i] = 3;
        } else if (src[i].y == -0x6A) {
            D_sc06_016_8019FD70[i] = 2;
        } else if (src[i].y == -0x39) {
            D_sc06_016_8019FD70[i] = 1;
        } else {
            D_sc06_016_8019FD70[i] = 0;
        }
    }
}

void func_sc06_016_80181478(u8 *o) {
    u8 unused[8];
    s32 w[5];
    u8 *q;
    u8 *p;
    s32 n;
    s32 i;

    q = *(u8 **)&D_sc06_016_801937DC;
    D_sc06_016_8019FEF8 -= 0xC7;
    p = AF(q, u8 *, 0x1C);
    n = AF(q, s32, 0x20);
    if (D_sc06_016_8019FEF8 >= 0x600) {
        D_sc06_016_8019FEF8 -= 0x600;
    }
    if (D_sc06_016_8019FEF8 < 0) {
        D_sc06_016_8019FEF8 += 0x600;
    }
    if (AF(AF(o, u8 *, 0x64), u16, 2) == 6) {
        D_sc06_016_8018910C = D_sc06_016_8018910C - 0x100;
    } else {
        D_sc06_016_8018910C = 0x1000;
    }
    w[0] = func_sc06_016_801816DC(D_sc06_016_8019FEF8, D_sc06_016_8018910C);
    w[1] = func_sc06_016_801816DC(D_sc06_016_8019FEF8 + 0x133, D_sc06_016_8018910C);
    w[2] = func_sc06_016_801816DC(D_sc06_016_8019FEF8 + 0x266, D_sc06_016_8018910C);
    w[3] = func_sc06_016_801816DC(D_sc06_016_8019FEF8 + 0x399, D_sc06_016_8018910C);
    w[4] = func_sc06_016_801816DC(D_sc06_016_8019FEF8 + 0x4CC, D_sc06_016_8018910C);
    for (i = 0; i < 0x41; i++) {
        D_sc06_016_8019FDF4[i] = w[D_sc06_016_8019FD70[i]];
    }
    for (i = 0; i < n; i++) {
        if ((p[3] & 0xFD) == 0x30) {
            AF(p, s32, 4) = D_sc06_016_8019FDF4[AF(p, u16, 0x12)] | 0x32000000;
            AF(p, s32, 8) = D_sc06_016_8019FDF4[AF(p, u16, 0x16)];
            AF(p, s32, 0xC) = D_sc06_016_8019FDF4[AF(p, u16, 0x1A)];
            p += 0x1C;
        } else {
            AF(p, s32, 4) = D_sc06_016_8019FDF4[AF(p, u16, 0x16)] | 0x3A000000;
            AF(p, s32, 8) = D_sc06_016_8019FDF4[AF(p, u16, 0x1A)];
            AF(p, s32, 0xC) = D_sc06_016_8019FDF4[AF(p, u16, 0x1E)];
            AF(p, s32, 0x10) = D_sc06_016_8019FDF4[AF(p, u16, 0x22)];
            p += 0x24;
        }
    }
}

s32 func_sc06_016_801816DC(s32 a, s32 s) {
    s32 lo;
    s32 r;
    s32 g;
    s32 b;

    a %= 0x600;
    lo = a & 0xFF;
    switch (a / 0x100) {
    case 0:
        r = 0;
        g = 0;
        b = 0;
        break;
    case 1:
        r = lo;
        g = r / 2;
        b = r / 4;
        break;
    case 2:
    case 3:
        r = 0xFF;
        g = 0x7F;
        b = 0x3F;
        break;
    case 4:
        r = 0xFF - lo;
        g = r / 2;
        b = r / 4;
        break;
    case 5:
        r = 0;
        g = 0;
        b = 0;
        break;
    }
    if (s < 0) {
        s = 0;
    }
    b = (u32)(b * s) >> 12;
    if ((u32)b >= 0x100) {
        b = 0xFF;
    }
    g = (u32)(g * s) >> 12;
    if ((u32)g >= 0x100) {
        g = 0xFF;
    }
    r = (u32)(r * s) >> 12;
    if ((u32)r >= 0x100) {
        r = 0xFF;
    }
    return (b & 0xFF) | ((g << 8) & 0xFF00) | ((r << 16) & 0xFF0000);
}

void func_sc06_016_80181804(StageActor *arg0) {
    D_sc06_016_80189110[arg0->state]();
}

extern u16 D_sc06_016_80189118[];
extern u16 D_sc06_016_80189124[];
extern void func_sc06_016_8018191C();
void func_sc06_016_80181840(Mover *o) {
    SV8 a;
    SV8 b;
    s32 r;
    s32 i;
    r = HeadingToPlayer(o);
    for (i = 0; i < 5; i++) {
        a.x = (u16)o->pos[0].h.i + D_sc06_016_80189118[i];
        a.y = (u16)o->pos[1].h.i + 0x40;
        a.z = (u16)o->pos[2].h.i + D_sc06_016_80189124[i];
        b = a;
        b.y -= 0x100;
        func_sc06_016_8018191C(o, &a, &b, r);
    }
}

void func_sc06_016_8018191C(u8 *o, SV8 *a, SV8 *b, s32 r) {
    if (PathHitsModel(g_PlayerModel, g_PlayerHitData, a, b)) {
        HitPlayer(1, 0x4201, r, 0x5A, b, &g_GroundNormal);
        g_PlayerHitFacing = r;
    }
}

void func_sc06_016_80181998(u8 *o) {
    u8 *p;
    s32 n;

    p = AF(o, u8 *, 0x2C);
    switch (AF(o, u16, 2)) {
    case 0:
        AF(AF(o, u8 *, 0x20), u8 *, 0x20) = &D_sc06_016_80189130;
        AF(AF(o, u8 *, 0x20), s32, 4) |= 0x58000000;
        AF(AF(o, u8 *, 0x20), u8, 0x27) = 0x42;
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x3800;
        StartSpriteAnim(AF(o, u8 *, 0x20), o + 0x24, &D_sc06_016_8018913C);
        AF(o, u16, 2)++;
        StepSpriteAnim(AF(o, u8 *, 0x20), o + 0x24);
        AF(o, s32, 0x1C) = 0;
    case 1:
        if (AF(p, s16, 0x36) != AF(o, s16, 0x30)) {
            FreeProp(o);
            break;
        }
        StepSpriteAnim(AF(o, u8 *, 0x20), o + 0x24);
        n = ++AF(o, s32, 0x1C);
        if (n < 8) {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = n * 0x700;
        } else {
            AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1A) = 0x3800;
        }
        CopyPropPos(o, p);
        AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
        AF(AF(o, u8 *, 0x20), u16, 0x14) = AF(AF(p, u8 *, 0x20), u16, 0x12);
        AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC040;
        break;
    }
}

void func_sc06_016_80181B14(StageActor *arg0) {
    D_sc06_016_801891D4[arg0->state]();
}

s32 func_sc06_016_80181B50(void) {
    return D_sc06_016_8019F71C;
}

void func_sc06_016_80181B60(void) {
}

void BossIntro(u8 *o) {
    Player *p = &g_Player;
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (p->pos[2].h.i > 0x80) {
            StartEvent(o, &D_sc06_016_80188AC4);
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        AF(o, u16, 0x34)++;
    case 2:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            AF(o, s32, 0x1C) = 3;
            AF(o, s32, 0xDC) = 1;
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        if (RequestBgmPack(0x7D) != 0) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 4:
        if (TickTimer(o) != 0) {
            func_sc06_016_8017BF08((s32)(o + 0x76), (s32)&D_sc06_016_8019F724, 7, 0xDC);
            func_sc06_016_8017E114(o);
        }
        break;
    }
}

void func_sc06_016_80181C78(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, s32, 0x1C) & 3) == 2) {
        func_sc06_016_8017ECE0((s32) arg0, arg1, arg2);
    }
    if (TickTimer((s32) arg0) != 0) {
        func_sc06_016_8017E114((s32) arg0);
    }
}

extern s32 TurnStepToTarget();
void func_sc06_016_80181CD0(u8 *o) {
    AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 4);
    if (AF(o, s32, 0x1C) == 7) {
        PlaySoundId(0xA91, 0);
    }
    if (TickTimer(o) != 0) {
        func_sc06_016_8017E190((s32)o);
    }
}

void func_sc06_016_80181D44(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        func_sc06_016_8017E1D8(arg0);
    }
}

void func_sc06_016_80181D7C(s32 arg0) {
    if (TickTimer(arg0) != 0) {
        PlaySoundId(4, 0x97F);
        func_sc06_016_8017E4FC(arg0);
    }
}

void func_sc06_016_80181DBC(StageActor *arg0) {
    u16 temp_v0;

    temp_v0 = D_sc06_016_8019F710 - 1;
    D_sc06_016_8019F710 = temp_v0;
    if ((temp_v0 << 0x10) <= 0) {
        func_sc06_016_8017E7D0(arg0);
    }
}

void func_sc06_016_80181DFC(s32 arg0, s32 arg1) {
    MoveObject(arg0, arg1);
    if (TickTimer(arg0) != 0) {
        BossSpawn2FD(arg0);
    }
}

void func_sc06_016_80181E3C(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s32, 0x1C) == 0xA) {
        PlaySoundId(0xA93, 0, arg2);
    }
    if (TickTimer((s32) arg0) != 0) {
        func_sc06_016_8017E910((s32) arg0);
    }
}

void func_sc06_016_80181E90(u8 *arg0, s32 arg1, s32 arg2) {
    if (!(AF(arg0, s32, 0x1C) & 3)) {
        func_sc06_016_8017ECE0((s32) arg0, arg1, arg2);
    }
    if (TickTimer((s32) arg0) != 0) {
        func_sc06_016_8017E96C((s32) arg0);
    }
}

extern s32 D_sc06_016_80188A00;
void func_sc06_016_80181EE8(u8 *o) {
    if (TickTimer(o) != 0) {
        PlaySoundId(0x982, 0);
        if (D_sc06_016_80188A00 == 0) {
            switch ((s16)D_sc06_016_8019F708) {
            case 0:
            case 1:
                func_sc06_016_8017E9CC(o);
                break;
            case 2:
                func_sc06_016_8017E9CC(o);
                break;
            case 3:
            default:
                func_sc06_016_8017EEFC((s32)o, 2, (s32)&D_sc06_016_80188A04, (s32)&D_sc06_016_80195614);
                AF(o, s32, 0x1C) = 0x11;
                UpdateModelZYX(o);
                func_sc06_016_8017ECE0(o);
                break;
            }
        } else if (D_sc06_016_80188A00 == 1) {
            func_sc06_016_8017EEFC((s32)o, 2, (s32)&D_sc06_016_80188A04, (s32)&D_sc06_016_80195614);
            AF(o, s32, 0x1C) = 0x11;
            UpdateModelZYX(o);
            func_sc06_016_8017ECE0(o);
        } else {
            D_sc06_016_8019F708 = 0;
            func_sc06_016_8017E9CC(o);
        }
    }
}

void func_sc06_016_80181FB0(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, s32, 0x1C) & 3) == 2) {
        func_sc06_016_8017ECE0((s32) arg0, arg1, arg2);
    }
    if (TickTimer((s32) arg0) != 0) {
        BossSpawn2FF((s32) arg0);
    }
}

void func_sc06_016_80182008(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s32, 0x1C) == 0xA) {
        PlaySoundId(0xA93, 0, arg2);
    }
    if (TickTimer((s32) arg0) != 0) {
        func_sc06_016_8017EB3C((s32) arg0);
    }
}

void func_sc06_016_8018205C(StageActor *arg0) {
    u16 temp_v0;

    temp_v0 = D_sc06_016_8019F714 - 1;
    D_sc06_016_8019F714 = temp_v0;
    if ((temp_v0 << 0x10) <= 0) {
        D_sc06_016_8019F70C = 0;
        D_sc06_016_8019F708 += 1;
        func_sc06_016_8017EEFC(arg0, 0xA, 0, (s32) &D_sc06_016_80194FFC);
        arg0->timer = 0x18;
        SpawnActor(0x2FD, arg0);
    }
}

extern s32 func_800D0CE0();
void func_sc06_016_801820E0(StageActor *o) {
    switch (o->stateCount) {
    case 0:
        o->stateCount++;
        break;
    case 1:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            o->message = 0;
            o->stateCount++;
        }
        break;
    case 2:
        if (func_800D0CE0() == 1) {
            o->stateCount++;
        }
        break;
    case 3:
        func_sc06_016_8017C068();
        D_sc06_016_8019F71C = 1;
        break;
    }
}

void func_sc06_016_801821B8(u8 *arg0) {
    D_sc06_016_80188BB4 = AF(AF(arg0, void *, 0x20), u16, 0x12);
}

void func_sc06_016_801821D4(Mover *o) {
    UpdateModelZYX(o);
    StopMotion(o);
    SetLocalVelocity(o, &D_sc06_016_80188BEC);
    o->accel[1] = D_sc06_016_80188BF8;
    o->timer = 0;
}

extern void DrawRect();
void func_sc06_016_80182224(Mover *o) {
    s32 v;
    MoveObject(o);
    v = o->timer += 4;
    if (v > 0xFF) {
        v = 0xFF;
    }
    DrawRect(-0xA0, -0x78, 0x140, 0xF0, (u8)v, (u8)v, (u8)v, 0x20, 1);
}

void func_sc06_016_801822A0(s32 arg0, s32 arg1, s32 arg2) {
    PlaySoundId(0xC0B, 0, arg2);
}

void func_sc06_016_801822C4(void) {
    HidePlayerScene((s32) &g_Player);
    SetPlayerFlag7E2((s32) &g_Player);
}

void func_sc06_016_801822FC(void) {
    ShowPlayerScene((s32) &g_Player);
    ClearPlayerFlag7E2((s32) &g_Player);
}

void BossInit(s32 arg0) {
    if (SetupActor(arg0, (s32) &D_sc06_016_80188A70) != 0) {
        PlaceObject(arg0, (s32) &D_sc06_016_80188A04);
        D_sc06_016_8019F6F8 = arg0;
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s32 *, 0xBC) = &D_sc06_016_80188A40;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 3);
        SpawnActor(0x2D9, arg0);
        SpawnActor(0x2EE, 0);
        SpawnActor(0x30A, arg0);
        AF(arg0, s32, 0xDC) = 0;
        D_sc06_016_8019F708 = 0;
        D_sc06_016_8019F70C = 0;
        D_sc06_016_8019F71C = 0;
        D_sc06_016_8019F720 = 0;
        D_sc06_016_8019F724 = 0x708;
        func_sc06_016_8017EEFC(arg0, 1, (s32) &D_sc06_016_80188A04, (s32) &D_sc06_016_80193CE4);
        AF(arg0, s16, 0x34) = 0;
    }
}

void func_sc06_016_80182424(u8 *o) {
    u8 *p;

    MoveProp(o);
    p = AF(o, u8 *, 0x20);
    if (AF(p, s16, 0x18) >= 0x400) {
        AF(p, s16, 0x18) -= 0x400;
        AF(AF(o, u8 *, 0x20), s16, 0x1A) -= 0x400;
        if (!(AF(o, u16, 0x2C) & 1)) {
            D_sc06_016_8019F95C[0].a.r -= 0x30;
            D_sc06_016_8019F95C[0].a.g -= 0x20;
            D_sc06_016_8019F95C[0].a.b -= 8;
            func_sc06_016_8017F5FC(o);
        }
    } else {
        FreeProp(o);
    }
}

void func_sc06_016_801824F4(StageActor *arg0) {
    ModelObj *temp_v0;
    s32 temp_v0_2;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc06_016_80191CBC);
    temp_v0_2 = AllocActorModel();
    D_sc06_016_8019F9FC = temp_v0_2;
    if (temp_v0_2 != 0) {
        InitModel(temp_v0_2, (s32) &D_sc06_016_80192B1C);
        AF(D_sc06_016_8019F9FC, u16, 0x2C) = (u16) (AF(D_sc06_016_8019F9FC, u16, 0x2C) | 0x10);
    }
    temp_v1 = arg0->model;
    arg0->state = 1;
    arg0->stateCount = 0;
    arg0->unkFC = 0;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    arg0->model->scale.vx = 0x1000;
    arg0->model->scale.vy = 0x1000;
    arg0->model->scale.vz = 0x1000;
    HideModel(arg0);
    func_sc06_016_8017FE90(arg0);
}

void func_sc06_016_801825DC(StageActor *arg0) {
    arg0->pos[2].w = 0;
    arg0->pos[1].w = 0;
    arg0->pos[0].w = 0;
    func_80132784((s32) arg0, arg0->parent, 4);
    if (arg0->parent->state != 0xA) {
        FreeActor((s32) arg0);
    }
}

void func_sc06_016_80182638(StageActor *arg0) {
    ModelObj *temp_v0;
    s32 temp_v0_2;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    temp_v0_2 = SpawnPropFrom(arg0, 0x5D);
    if (temp_v0_2 != 0) {
        AF(temp_v0_2, s32, 0x2C) = arg0;
        AF(temp_v0_2, u16, 0x30) = (u16) arg0->id;
    }
    arg0->state = 1;
}

void func_sc06_016_801826B4(u8 *arg0) {
    u16 sp10[3];

    AF(arg0, s32, 0xC) = 0;
    AF(arg0, s32, 8) = 0;
    AF(arg0, s32, 4) = 0;
    func_80132784((s32) arg0, AF(arg0, s32, 0x64), 4);
    FaceHelper((s32) arg0, (s32) &D_sc06_016_801890D8, (s32) sp10);
    AF(arg0, u16, 6) = sp10[0];
    AF(arg0, u16, 0xA) = sp10[1];
    AF(arg0, u16, 0xE) = sp10[2];
    UpdateModelZYX((s32) arg0);
    if (TickTimer((s32) arg0) != 0) {
        func_sc06_016_80180F68((s32) arg0);
    }
}

void func_sc06_016_80182744(u8 *arg0) {
    u16 temp_v1;

    MoveObject();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
    if (AF(arg0, s16, 0xA) >= -0x27F) {
        AF(arg0, s16, 0xA) = -0x280;
        AF(arg0, s16, 8) = 0;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, s32, 0x14) = (s32) -AF(arg0, s32, 0x14);
        PlaySoundId(0x983, 0);
        temp_v1 = AF(arg0, u16, 0x34) + 1;
        AF(arg0, u16, 0x34) = temp_v1;
        if (D_sc06_016_801890E0[AF(arg0, s16, 0x70)] < (temp_v1 & 0xFFFF)) {
            PlaySoundId(0x984, 0);
            goto block_4;
        }
    }
    if (DistSqToPlayer((s32) arg0) < 0x900) {
block_4:
        func_sc06_016_80181018((s32) arg0);
        FreeActor((s32) arg0);
    }
}

void func_sc06_016_80182810(StageActor *arg0) {
    ModelObj *temp_v0;
    s32 temp_v0_2;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    temp_v0_2 = SpawnPropFrom(arg0, 0x5E);
    if (temp_v0_2 != 0) {
        AF(temp_v0_2, s32, 0x2C) = arg0;
        AF(temp_v0_2, u16, 0x30) = (u16) arg0->id;
    }
    arg0->state = 1;
    arg0->timer = 0x16;
    arg0->unk84 = 0;
    func_80143994(arg0, 0x1800);
}

void func_sc06_016_801828A0(StageActor *o) {
    StageActor *s = o->parent;
    s32 v;
    switch (s->state) {
    case 5:
    case 6:
        o->pos[0].w = s->pos[0].w;
        o->pos[1].w = s->pos[1].w;
        o->pos[2].w = s->pos[2].w;
        o->timer++;
        v = o->timer << 10;
        if (v > 0x1000) v = 0x1000;
        if ((u8 *)o->model != 0) {
            o->model->scale.vx = v;
            o->model->scale.vy = v;
            o->model->scale.vz = v;
        }
        func_sc06_016_80181478(o);
        ShowModel(o);
        if (s->state == 5) {
            func_sc06_016_80181290(o);
        }
        break;
    default:
        o->timer = 0;
        HideModel(o);
        break;
    }
}

void func_sc06_016_80182990(StageActor *arg0) {
    ModelObj *temp_a0;
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001C810(temp_v0, (s32) &D_sc06_016_801937DC);
    temp_a0 = arg0->model;
    temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x50000000);
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    func_sc06_016_801813B0(arg0);
    arg0->state = 1;
}

void func_sc06_016_80182A1C(s32 arg0) {
    MoveObject();
    func_sc06_016_80181840(arg0);
    if (TickTimer(arg0) != 0) {
        FreeActor(arg0);
    }
}

void func_sc06_016_80182A64(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 0x40);
    temp_v0_2 = SpawnPropFrom(arg0, 0x60);
    if (temp_v0_2 != 0) {
        AF(temp_v0_2, s32, 0x2C) = arg0;
        AF(temp_v0_2, u16, 0x30) = (u16) AF(arg0, u16, 0x36);
    }
    AF(arg0, s16, 2) = 1;
    AF(AF(arg0, s32, 0x20), s16, 0x12) = AF(arg0, s16, 0x70) * 512;
    UpdateModelZYX(arg0);
    StopMotion(arg0);
    SetForwardVelocity(arg0, -0xD0000);
    AF(arg0, s32, 0x1C) = 0x5A;
    func_80143994(arg0, 0x3800);
}

void func_sc06_016_80182B2C(s32 arg0, s32 arg1) {
    UpdateModelZYX(arg0, arg1);
}

void func_sc06_016_80182B4C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    AF(arg0, s16, 2) = 1;
    PlaceObject(arg0, (s32) &D_sc06_016_801891BC);
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc06_016_801891C4 | 0x40000000);
    AF(arg0, s16, 0x5C) = 0x400;
}

void func_sc06_016_80182BCC(void) {
    StartPlayerActionScript((s32) &D_sc06_016_8019A464, 0x01000000);
}

void func_sc06_016_80182BF4(u8 *arg0) {
    D_sc06_016_8019A47C[AF(arg0, u8, 0x216)]();
}

void func_sc06_016_80182C30(u8 *o) {
    func_sc06_016_80182F44(o);
    if (AF(o, s16, 0x210) < 0) {
        AF(o, s16, 0x210) = -0x30;
    } else {
        AF(o, s16, 0x210) = 0x30;
    }
    BumpSub2Copy(o);
}

void func_sc06_016_80182C78(s32 arg0) {
    if (func_sc06_016_80183020() != 0) {
        PlaySoundId(0x8B1, 0);
        NextPlayerActionHandler(arg0);
    }
}

void func_sc06_016_80182CB8(void) {
    StartPlayerActionScript((s32) &D_sc06_016_8019A484, 0x01000000);
}

void func_sc06_016_80182CE0(u8 *arg0) {
    D_sc06_016_8019A490[AF(arg0, u8, 0x216)]();
}

void func_sc06_016_80182D1C(u8 *o) {
    u8 *m;
    s16 a;
    s32 c;
    s32 d;
    m = AF(o, u8 *, 0x20);
    func_sc06_016_80182F44(o);
    if (D_sc06_016_8019FF00 != 0) {
        a = (AF(m, u16, 0x12) + 0x800) & 0xFFF;
        if (AF(AF(D_sc06_016_8019FF00, u8 *, 0x20), u16, 0x12) & 0x400) {
            c = AngleDist(a, 0x400);
            d = AngleDist(a, 0xC00);
            if ((s16)c <= (s16)d) {
                AF(m, s16, 0x12) = 0x400;
            } else {
                AF(m, s16, 0x12) = 0xC00;
            }
        } else {
            c = AngleDist(a, 0);
            d = AngleDist(a, 0x800);
            if ((s16)c <= (s16)d) {
                AF(m, s16, 0x12) = 0;
            } else {
                AF(m, s16, 0x12) = 0x800;
            }
        }
    }
    BumpSub2Copy(o);
}

void func_sc06_016_80182E24(s32 arg0) {
    if (func_sc06_016_80183020() != 0) {
        PlaySoundId(0x8B1, 0);
        BumpSub2Copy(arg0);
    }
}

void func_sc06_016_80182E64(u8 *o) {
    u8 *found;
    s32 best;
    s32 i;
    u8 *p;
    s16 d;
    found = 0;
    best = 0x7FFFFFFF;
    for (i = 0; i < 0x60; i++) {
        p = (u8 *)&((O10C *)&g_Actors)[i];
        if (AF(p, u16, 0) != 0 && (AF(p, u16, 0x5C) & 0x80)) {
            d = PosDist(o + 4, p + 4);
            if (d < best) {
                best = d;
                found = p;
            }
        }
    }
    if (found != 0) func_800D1724(AF(found, s32, 0xDC));
    NextPlayerActionHandler(o);
}

void func_sc06_016_80182F44(u8 *o) {
    typedef struct { u8 b[0x10C]; } O10C;
    SV8 v;
    s32 i;
    s32 best;
    u8 *p;
    s16 d;
    best = 0x7FFFFFFF;
    D_sc06_016_8019FF00 = 0;
    for (i = 0; i < 0x60; i++) {
        p = (u8 *)&((O10C *)&g_Actors)[i];
        if (AF(p, u16, 0) == 0x26E) {
            d = PosDist(o + 4, p + 4);
            if (d < best) {
                best = d;
                D_sc06_016_8019FF00 = p;
            }
        }
    }
    AF(o, s16, 0x208) = 0;
    PosToSVec(o + 4, &v);
    WorldToActorLocal(D_sc06_016_8019FF00, &v, o + 0x20C);
    AF(o, u8 *, 0x204) = D_sc06_016_8019FF00;
    PlaySoundId(0x8B0, 0);
}

s32 func_sc06_016_80183020(u8 *o) {
    SV8 v;
    u8 *q;
    u8 *t;
    s16 a;
    q = AF(o, u8 *, 0x204);
    t = AF(q, u8 *, 0x20);
    if (q != 0) {
        AF(t, s16, 0x12) += 0x80;
        LocalToWorld(t + 0x34, o + 0x20C, &v);
        SVecToPos(&v, o + 4);
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) += 0x80;
    a = AF(o, s16, 0x208) + 0x80;
    AF(o, s16, 0x208) = a;
    return a == 0x800;
}

void func_sc06_016_801830B4(o)
    u8 *o;
{
    u8 *pp[4];
    SV8 v;
    s16 x[8];
    s16 y[8];
    s32 flag;
    s32 sxy;
    s32 p;
    u8 *m;
    s32 z;
    s32 r;
    s32 h;
    u32 *ot;
    u8 *prim;
    u8 *q;
    s32 i;
    s32 j;
    s16 sx;
    s16 sy;

    m = AF(o, u8 *, 0x20) + 0x34;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    RotTransSV(&D_sc06_016_8019A49C, &v, &flag);
    SetRotMatrix((WMtx *)&D_800AF648);
    SetTransMatrix((WMtx *)&D_800AF648);
    z = RotTransPers(&v, &sxy, &p, &flag);
    if (z > 0 && flag >= 0) {
        sx = AF(&sxy, s16, 0);
        sy = AF(&sxy, s16, 2);
        r = (g_CameraProj + 500) * 48 / (z * 4);
        ot = g_WorldOtOrg[D_800B9A02[0]].ot + z;
        h = r * 179 >> 8;
        x[0] = sx - r;
        x[1] = sx - h;
        x[2] = sx;
        x[3] = sx + h;
        x[4] = sx + r;
        y[0] = sy - r;
        y[1] = sy - h;
        y[2] = sy;
        y[3] = sy + h;
        y[4] = sy + r;
        prim = AllocPrim(0x9C);
        if (prim != 0) {
            SetDrawMode(prim, 0, 0, (u16) GetTPage(0, 1, 0, 0), 0);
            q = pp[0] = prim + 0xC;
            pp[1] = prim + 0x30;
            pp[2] = prim + 0x54;
            pp[3] = prim + 0x78;
            for (j = 0; j < 4;) {
                i = j * 4;
                AF(q, u32, 4) = D_sc06_016_8019A4A4[D_sc06_016_8019A4D0[i]];
                AF(q, u32, 0xC) = D_sc06_016_8019A4A4[D_sc06_016_8019A4D0[i + 1]];
                AF(q, u32, 0x14) = D_sc06_016_8019A4A4[D_sc06_016_8019A4D0[i + 2]];
                AF(q, u32, 0x1C) = D_sc06_016_8019A4A4[D_sc06_016_8019A4D0[i + 3]];
                AF(q, u8, 3) = 8;
                AF(q, u8, 7) = 0x3A;
                AF(q, s16, 8) = x[D_sc06_016_8019A4B0[i]];
                AF(q, s16, 0x10) = x[D_sc06_016_8019A4B0[i + 1]];
                AF(q, s16, 0x18) = x[D_sc06_016_8019A4B0[i + 2]];
                AF(q, s16, 0x20) = x[D_sc06_016_8019A4B0[i + 3]];
                AF(q, s16, 0xA) = y[D_sc06_016_8019A4C0[i]];
                AF(q, s16, 0x12) = y[D_sc06_016_8019A4C0[i + 1]];
                AF(q, s16, 0x1A) = y[D_sc06_016_8019A4C0[i + 2]];
                AF(q, s16, 0x22) = y[D_sc06_016_8019A4C0[i + 3]];
                AddPrim(ot, q);
                j++;
                q += 0x24;
            }
            AddPrim(ot, prim);
        }
    }
}

void func_sc06_016_801834D8(StageActor *o) {
    s32 dz;
    s32 s;
    u8 *p;

    o->model->rot.vz += o->unkFC;
    if (g_Player.pos[1].h.i < -0x4E0) {
        dz = g_Player.pos[2].h.i - o->pos[2].h.i;
        if (dz < 0x140) {
            o->unkFC -= 0x10;
            if (o->unkFC < 0) {
                o->unkFC = 0;
            }
        } else {
            o->unkFC += 0x10;
            if (o->unkFC > 0x300) {
                o->unkFC = 0x300;
            }
            if (dz < 0x900 && func_800CF8B4() != 0 && PlayerFlag1000() == 0) {
                s = o->unkFC * 13 / 0x300;
                s = s * (0x900 - dz) / 0x900;
                if (PlayerEvent200(&g_Player) != 0) {
                    s *= 2;
                }
                g_Player.pos[2].h.i += s;
                PlaySoundId(0x978, (s * 127 / 13 | 0x1000) & 0xFFFF);
                o->workFE = 1;
            }
        }
    } else {
        o->unkFC += 0x10;
        if (o->unkFC > 0x300) {
            o->unkFC = 0x300;
        }
    }
    if (o->timer != 0) {
        o->timer--;
    } else if (o->unkFC > 0x40) {
        o->timer = 3;
        p = (u8 *) SpawnKind205(o, 0);
        if (p != 0) {
            AF(p, s16, 6) = rand() % 0x120 - 0xE0;
            AF(p, s16, 0xA) = -(rand() & 0x3F) - 0x502;
            dz = rand() % 0x560 + 0x140;
            AF(p, s16, 0xE) += dz;
            s = o->unkFC * 13 / 0x300;
            s = s * (0x800 - dz) / 0x800;
            AF(p, s16, 0x1A) = s * 2;
            AF(p, s32, 0x48) = -((rand() & 0x1FF) << 7);
        }
    }
    if (o->workFE == 2) {
        o->workFE = 0;
        PlaySoundId(4, 0x978);
    }
    if (o->workFE == 1) {
        o->workFE = 2;
    }
}

void func_sc06_016_8018384C(u8 *arg0) {
    D_sc06_016_8019A524[AF(arg0, u16, 2)]();
}

void func_sc06_016_80183888(u8 *o) {
    u16 v;
    if (SetupActor(o, &D_sc06_016_8019A53C) != 0) {
        v = AF(o, u16, 0x70);
        if (v & 0x10) {
            v &= ~0x10;
            AF(o, u16, 0x70) = v;
            InitModel(AF(o, u8 *, 0x20), D_sc06_016_8019A570[(s16)v]);
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x60000040;
        } else {
            InitModel(AF(o, u8 *, 0x20), D_sc06_016_8019A570[(s16)v]);
        }
        if (AF(o, s16, 0x70) == 8 || AF(o, s16, 0x70) == 10) {
            AF(o, s16, 0x34) = 3;
            AF(o, u16, 0x5C) = 0x8800;
        }
        if (AF(o, s16, 0x70) == 9) {
            AF(o, s16, 0x34) = 2;
            AF(o, u16, 0x5C) = 0x8800;
        }
        if (AF(o, s16, 0x70) == 11) {
            AF(o, s16, 0x34) = 4;
        }
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -1;
        AF(o, u8, 0x75) = 8;
        SetScript(o, &D_sc06_016_801851C4);
        AF(o, u16, 2)++;
        StopWithGravity(o);
        AF(o, s16, 0xAE) = -1;
    }
}

void func_sc06_016_801839D0(StageActor *o) {
    s32 i;
    u8 *p;
    switch (o->stateCount) {
    case 4:
        p = &g_Actors;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x2E7 && AF(p, u16, 2) == 4) {
                InitModel(o->model, &D_sc06_016_8019CAAC);
                o->hitState = 0x8800;
                o->model->rot.vy = 0x400;
                o->stateCount = 3;
            }
        }
    case 0:
        if (D_80126CC8 == o) {
            o->stateCount = 1;
            o->hitState = 0;
            o->pos[0].h.i = o->origin[0];
            o->pos[1].h.i = o->origin[1];
            o->pos[2].h.i = o->origin[2];
            func_sc06_016_80182CB8();
        }
        break;
    case 1:
        break;
    case 2:
        p = &g_Actors;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x2E7 && AF(p, u16, 2) == 4) {
                InitModel(o->model, &D_sc06_016_8019C10C);
                o->model->unk04 |= 0x60000040;
                o->hitState = 0x9000;
                o->model->rot.vy = 0x400;
                o->stateCount = 0;
            }
        }
        break;
    case 3:
        break;
    }
}

void func_sc06_016_80183B80(StageActor *arg0) {
    D_sc06_016_8019A5A0[arg0->state]();
}

void func_sc06_016_80183BBC(u8 *arg0) {
    D_sc06_016_8019A5DC[AF(arg0, u16, 2)]();
}

void func_sc06_016_80183BF8(StageActor *arg0) {
    ModelObj *temp_v1;

    if (SetupActor(arg0, (s32) &D_sc06_016_8019A4F0) != 0) {
        arg0->reactive = 1;
        AF(arg0, s16, 0xAE) = -1;
        SetScript(arg0, (s32) &D_sc06_016_801851C4);
        temp_v1 = arg0->model;
        arg0->state = (u16) (arg0->state + 1);
        temp_v1->flags = (u16) (temp_v1->flags | 0x10);
        arg0->model->scale.vx = 0xE00;
        arg0->model->scale.vy = 0xE00;
        arg0->model->scale.vz = 0xE00;
        arg0->unkFC = 0x300;
        arg0->targetClass = 8;
    }
}

void func_sc06_016_80183CA0(StageActor *arg0) {
    ModelObj *temp_v1;

    if (SetupActor(arg0, (s32) &D_sc06_016_8019A5A8) != 0) {
        arg0->reactive = 1;
        SetScript(arg0, (s32) &D_sc06_016_801851C4);
        temp_v1 = arg0->model;
        arg0->state = (u16) (arg0->state + 1);
        temp_v1->flags = (u16) (temp_v1->flags | 0x10);
        arg0->model->scale.vx = 0xAAA;
        arg0->model->scale.vz = 0xAAA;
    }
}

void func_sc06_016_80183D24(u8 *arg0) {
    func_sc06_016_801830B4();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

void func_sc06_016_80183D5C(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc06_016_801A001C;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

void func_sc06_016_80183D80(s32 arg0, s32 arg1, s32 arg2, u16 *arg3) {
    SV4 v;
    s32 i;
    s16 ang;

    func_sc06_016_80183E20(arg0, 0x1000, 0);
    v.x = arg3[0];
    v.z = arg3[1];
    v.pad = 1;
    for (i = 0, ang = 0; i < 0x10; i++, ang += 0x100) {
        v.y = ang;
        func_sc06_016_80183F3C(i, (s32) &v, arg1, arg2);
    }
}

s32 func_sc06_016_80183E20(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc06_016_801A0014 = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc06_016_801A0018 = (s16) arg1;
    D_sc06_016_801A001A = (s16) arg2;
    D_sc06_016_801A0016 = temp_v0;
    return (s32) temp_v0;
}

void func_sc06_016_80183E50(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc06_016_801A0014 = sp10[0];
    D_sc06_016_801A0016 = sp10[1];
}

void func_sc06_016_80183EC8(s32 arg0) {
    s16 *p = &D_sc06_016_801A001A;
    *p += arg0;
}

void func_sc06_016_80183EE4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc06_016_80184010();
    if (temp_v0 >= 0) {
        func_sc06_016_80183F3C(temp_v0, arg0, arg1, arg2);
    }
}

void func_sc06_016_80183F3C(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
    struct C8E8 { u8 r, g, b, cd; };
    struct E8E8 { u16 a; s16 y; s16 z; struct C8E8 c0; struct C8E8 c1; } *e;

    e = (struct E8E8 *)(&D_sc06_016_801A001C + arg0 * 14);
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

s32 func_sc06_016_80184010(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0xE) {
        if (*(u16 *)&((u8 *)&D_sc06_016_801A001C)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc06_016_8018404C(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc06_016_801A001C, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

void func_sc06_016_80184098(void) {
    u8 *p;
    s32 i;
    s16 v;
    s16 w;

    for (p = &D_sc06_016_801A001C, i = 0; i < 0x10; i++, p += 14) {
        if (AF(p, u16, 0) != 0) {
            func_sc06_016_80184174(i);
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

void func_sc06_016_80184174(s32 i) {
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
    r = &D_sc06_016_801A001C + i * 14;
    AF(p, u8, 4) = AF(r, u8, 6);
    AF(p, u8, 5) = AF(r, u8, 7);
    AF(p, u8, 6) = AF(r, u8, 8);
    AF(p, u8, 0xC) = AF(r, u8, 0xA);
    AF(p, u8, 0xD) = AF(r, u8, 0xB);
    AF(p, u8, 0xE) = AF(r, u8, 0xC);
    AF(p, u8, 0x14) = AF(r, u8, 0xA);
    AF(p, u8, 0x15) = AF(r, u8, 0xB);
    AF(p, u8, 0x16) = AF(r, u8, 0xC);
    cx = D_sc06_016_801A0014;
    cy = D_sc06_016_801A0016;
    RotMatrixZ(D_sc06_016_801A001A, &m);
    s.x = s.y = s.z = D_sc06_016_801A0018;
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

s32 func_sc06_016_80184438(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc06_016_8019FF14;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc06_016_8018445C(s32 arg0) {
    s32 sp10;

    PosToSVec(arg0, (s32) &sp10);
    return func_sc06_016_80184484((s32) &sp10);
}

s32 func_sc06_016_80184484(s32 arg0) {
    s16 sxy[2];
    CV4 col;
    s32 p;
    s32 flag;

    col = D_sc06_016_8019E2E8;
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers(arg0, (s32) sxy, (s32) &p, (s32) &flag);
    return func_sc06_016_8018450C((s32) sxy, (s32) &col, 0x10, 0x18);
}

s32 func_sc06_016_8018450C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc06_016_80184578(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc06_016_801846AC(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc06_016_80184578(u16 *p, u8 *c, s32 g) {
    if (p != 0) {
        D_sc06_016_8019FF08.a = p[0];
        D_sc06_016_8019FF08.b = p[1];
    } else {
        D_sc06_016_8019FF08.a = 0;
        D_sc06_016_8019FF08.b = 0;
    }
    D_sc06_016_8019FF10 = c[0];
    D_sc06_016_8019FF11 = c[1];
    D_sc06_016_8019FF12 = c[2];
    AF(&D_sc06_016_8019FF08, s32, 4) = g << 16;
}

void func_sc06_016_801845E8(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc06_016_8019FF08.a = sp10[0];
    D_sc06_016_8019FF08.b = sp10[1];
}

void func_sc06_016_80184660(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc06_016_801847C8();
    if (temp_v0 >= 0) {
        func_sc06_016_801846AC(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

void func_sc06_016_801846AC(s32 i, s32 ang, s32 spd) {
    u8 unused[0x10];
    Pt16 *p;
    s16 vx;
    s16 vz;
    u16 s;
    s32 m;
    s32 gg;

    p = &D_sc06_016_8019FF08.pts[i];
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
    gg = D_sc06_016_8019FF08.g;
    p->dy = gg << 6;
}

s32 func_sc06_016_801847C8(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0x10) {
        if (*(u16 *)&((u8 *)&D_sc06_016_8019FF14)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc06_016_80184804(void) {
    Pt16 *p;
    s32 i;
    s16 g;
    s32 dx;
    s32 dz;

    g = D_sc06_016_8019FF0E;
    p = (Pt16 *)&D_sc06_016_8019FF14;
    for (i = 0; i < 16; i++, p++) {
        if (p->active == 0) {
            continue;
        }
        if ((g > 0 && p->y >= 0x4001) || (g < 0 && p->y <= 0)) {
            p->active = 0;
            continue;
        }
        func_sc06_016_80184918(i);
        dx = (rcos(p->ang) * g) << 4;
        dz = (rsin(p->ang) * g) << 4;
        p->x += dx;
        p->z += dz;
        p->y += p->dy;
    }
}

void func_sc06_016_80184918(s32 i) {
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
    AF(p, u8, 4) = D_sc06_016_8019FF10;
    AF(p, u8, 5) = D_sc06_016_8019FF11;
    AF(p, u8, 6) = D_sc06_016_8019FF12;
    r = (Pt16 *)&D_sc06_016_8019FF14 + i;
    cx = AF(r, u16, 0xA) + D_sc06_016_8019FF08.a;
    cz = AF(r, u16, 0xE) + D_sc06_016_8019FF08.b;
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

void func_sc06_016_80184BFC(u8 *o) {
    SV8 v[4];
    SMtx m;
    s32 pp;
    s32 flag;
    u32 *ot;
    u8 *p;
    u8 *t;
    s32 z;
    u16 w;

    ot = g_WorldOtTable[D_800B9A02[0]];
    w = AF(o, u16, 6);
    if (w == 0) return;
    v[0].x = 0;
    v[0].y = -(AF(o, u16, 0x18) >> 1);
    v[0].z = 0;
    v[1].x = 0;
    v[1].y = AF(o, u16, 0x18) >> 1;
    v[1].z = 0;
    v[2].x = w;
    v[2].y = -(AF(o, u16, 0x1A) >> 1);
    v[2].z = 0;
    v[3].x = w;
    v[3].y = AF(o, u16, 0x1A) >> 1;
    v[3].z = 0;
    RotMatrixZYX(o + 8, &m);
    m.t[0] = AF(o, s16, 0);
    m.t[1] = AF(o, s16, 2);
    m.t[2] = AF(o, s16, 4);
    p = AllocPrim(0x24);
    AF(p, s32, 4) = AF(o, s32, 0x10);
    AF(p, s32, 0xC) = AF(o, s32, 0x10);
    AF(p, s32, 0x14) = AF(o, s32, 0x14);
    AF(p, s32, 0x1C) = AF(o, s32, 0x14);
    p[3] = 8;
    p[7] = 0x38;
    SetGteLocalMatrix(&m);
    z = RotTransPers4(&v[0], &v[1], &v[2], &v[3], p + 8, p + 0x10, p + 0x18, p + 0x20, &pp, &flag);
    if (flag & ~0x1000) return;
    z++;
    if ((u32)z >= 0x1000) return;
    ((PTAG *)p)->addr = ((PTAG *)(ot + z))->addr;
    ((PTAG *)(ot + z))->addr = (u32)p;
    if (AF(o, u32, 0x1C) & 0x40000000) {
        p[7] |= 2;
        t = AllocPrim(8);
        t[3] = 1;
        AF(t, u32, 4) = 0xE1000200 | ((AF(o, u32, 0x1C) >> 23) & 0x60);
        ((PTAG *)t)->addr = ((PTAG *)(ot + z))->addr;
        ((PTAG *)(ot + z))->addr = (u32)t;
    }
}
