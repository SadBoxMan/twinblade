#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_030_8017BE9C(void) {
}

void func_sc06_030_8017BEA4(void) {
}

void func_sc06_030_8017BEAC(void) {
}

void func_sc06_030_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_030_80185898[])();
extern void (*D_sc06_030_801858F0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_030_8017DA6C(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc06_030_801858F8[])();
void func_sc06_030_8017DA94(void);
extern void func_800D1EBC();
extern void (*D_sc06_030_80185904[])();
extern u8 D_sc06_030_80185910;
extern void StartPlayerActionScript();
extern u8 D_sc06_030_80185914;
extern void func_sc06_030_8017DB58();
extern void (*D_sc06_030_80185920[])();
extern void (*D_sc06_030_80185E2C[])();
extern u8 D_sc06_030_801B4C6C;
extern void (*D_sc06_030_801B4C84[])();
extern u8 D_sc06_030_801B4C8C;
extern void (*D_sc06_030_801B4C98[])();
extern void (*D_sc06_030_801B4D2C[])();
extern void (*D_sc06_030_801B4DA8[])();
extern void (*D_sc06_030_801B4DE4[])();

extern s32 PlaySoundId();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 func_sc06_030_8017BF34();
extern s32 FreeActor();
extern s32 TickTimer();
extern void func_sc06_030_80180228();
extern s32 func_sc06_030_80180C5C();

void func_sc06_030_8017BEBC(s32 arg0, s32 arg1) {
    func_sc06_030_8017BF34(arg0, arg1, 0xC, 0);
}

void func_sc06_030_8017BEE0(s32 arg0, s32 arg1, s16 arg2) {
    func_sc06_030_8017BF34(arg0, arg1, (s32) arg2, 0);
}

void func_sc06_030_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc06_030_8017BF34(arg0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
}

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
extern s32 SetupActor();
extern u8 D_sc06_030_80182184;
extern u8 D_sc06_030_801B4CF8;
extern u8 D_sc06_030_801B4DB0;
extern void func_sc06_030_80181164();


extern s16 g_PlayerHitFacing;
extern void (*D_sc06_030_80185E24[])();
extern s32 ActorTouchesPlayer();
extern s32 HeadingToPlayer();
extern s32 RequestBgmPack();
extern s32 ZeroFill();
extern void GainStat0FromActor();
extern u8 D_sc06_030_80185DA0;
extern u8 D_sc06_030_80185DB8;
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void func_8001CA1C();
extern u8 D_sc06_030_8018F280;
extern void InitModel();
extern void SpawnShadow();
extern s32 MoveCollide();
extern u8 D_sc06_030_8018F000;
extern s32 func_sc06_030_801810D0();
extern void NextPlayerActionHandler();
extern void BumpSub2Copy();

extern void SetClock();
extern void SetProgress();
extern void RequestSave();
extern u8 D_sc06_030_80185C2C;
extern u8 D_sc06_030_8019FFA4;
extern void StartEvent();
extern s32 IsEventDone();
extern void EndEvent();
void func_sc06_030_8017BF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

extern u8 D_sc06_030_80185D14;
extern u8 D_sc06_030_80185D48;
extern u8 D_sc06_030_8018E4E4;
extern u8 D_sc06_030_8019EC8C;
extern void UpdateModelZYX();

extern u8 D_sc06_030_80185928;
extern u8 D_sc06_030_80185AB0;
extern s16 D_sc06_030_80185DC8[];

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
extern u32 g_WorldOtTable[2][0x1000];

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
extern void func_sc06_030_8017DC70();
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();

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
extern u8 D_sc06_030_80185868[];
extern s32 SpawnFromDef();

s32 func_sc06_030_8017BF34(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FeS14s s;
    s32 r;

    s.a = 0x6B;
    s.x = -0x94;
    s.e = arg2;
    s.y = -0x68;
    s.z = 0;
    s.b = arg3;
    s.c = 0;
    s.f = ((s32 *)&D_sc06_030_80185868)[(s16) arg2];
    r = SpawnFromDef((s32) &s);
    if (r != 0) {
        AF(r, s32, 0xD4) = arg0;
        AF(r, s32, 0xD8) = arg1;
    }
    return r;
}

void func_sc06_030_8017BFBC(s32 arg0, s32 arg1) {
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

void func_sc06_030_8017C010(s32 arg0, s32 arg1, s16 arg2) {
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


void func_sc06_030_8017C068(void) {
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

void func_sc06_030_8017C114(StageActor *arg0) {
    D_sc06_030_80185898[arg0->state]();
}

typedef struct { u8 b[0x10C]; } O10C;
extern s32 PosDist();
extern void func_800D1724();
extern void SVecToPos();

extern void func_sc06_030_80180FF4();
extern s32 AngleDist();
extern u8 *D_sc06_030_801B9F10;
extern s32 StopWithGravity();
extern u8 D_sc06_030_801B4D44;
extern s32 D_sc06_030_801B4D78[];
extern u8 *D_80126CC8;
extern u8 D_sc06_030_801B72B4;
extern u8 D_sc06_030_801B6914;

extern s32 func_800CF8B4();
extern s32 PlayerFlag1000();
extern s32 PlayerEvent200();
extern s32 SpawnKind205();

extern u8 D_sc06_030_8019F06C;
extern WMtx D_800AF648;
extern WorkHead D_800AF630;
extern s16 D_sc06_030_80185D62;
extern s32 TurnStepToPlayer();
extern s32 DistSqToPlayer();
extern s32 SquareRoot0();
extern void StartSpriteAnim();
extern u8 D_sc06_030_80185AC8;
extern s16 g_PlayerHitKind;
extern s32 SpawnActorArg();
extern s16 D_sc06_030_80185C0C;
extern s16 D_sc06_030_80185C10;
extern s16 D_sc06_030_80185C14;
extern s32 D_sc06_030_8019EB9C;
extern u8 D_sc06_030_80185C9C;
extern u8 D_sc06_030_8019FEFC;
extern void RestorePrevPos();
extern void func_sc06_030_8017DE08();
extern void *g_PlayerModel;
extern s16 D_80126B66;
extern void (*D_sc06_030_80185D80[])();
extern u16 g_PlayerX;
extern s16 D_80126B62;

typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
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
extern s16 D_sc06_030_80185864; extern s16 D_sc06_030_80185858; extern s16 D_sc06_030_8018584C; extern u8 D_sc06_030_801B9E38; extern u8 *AllocActorSprite(); extern void SjisToGlyphs(); extern void InitTextSprite(); extern s16 D_sc06_030_801B9E60; extern s16 D_sc06_030_801B9E70; extern s16 D_sc06_030_801B9E6A; extern s16 D_sc06_030_801B9E62; extern s16 D_sc06_030_801B9E7A; extern s16 D_sc06_030_801B9E72; extern s16 D_sc06_030_801B9E9E; extern s16 D_sc06_030_801B9E96; extern s16 D_sc06_030_801B9EAE; extern s16 D_sc06_030_801B9EA6; extern s16 D_sc06_030_801B9EC8; extern s16 D_sc06_030_801B9ED8; extern s16 D_sc06_030_801B9ED2; extern s16 D_sc06_030_801B9ECA; extern s16 D_sc06_030_801B9EE2; extern s16 D_sc06_030_801B9EDA; extern s16 D_sc06_030_801B9ECC; extern s16 D_sc06_030_801B9E98; extern s16 D_sc06_030_801B9E64; extern u8 D_sc06_030_801B9E88; extern u8 D_sc06_030_801B9E80; extern u8 D_sc06_030_801B9E8C; extern u8 D_sc06_030_801B9E84; extern u8 D_sc06_030_801B9E89; extern u8 D_sc06_030_801B9E81; extern u8 D_sc06_030_801B9E8E; extern u8 D_sc06_030_801B9E8A; extern u8 D_sc06_030_801B9E86; extern u8 D_sc06_030_801B9E82; extern u8 D_sc06_030_801B9EBC; extern u8 D_sc06_030_801B9EB4; extern u8 D_sc06_030_801B9EBD; extern u8 D_sc06_030_801B9EB5; extern u8 D_sc06_030_801B9EC1; extern u8 D_sc06_030_801B9EB9; extern u8 D_sc06_030_801B9EF4; extern u8 D_sc06_030_801B9EF0; extern u8 D_sc06_030_801B9EEC; extern u8 D_sc06_030_801B9EE8; extern u8 D_sc06_030_801B9EF5; extern u8 D_sc06_030_801B9EF1; extern u8 D_sc06_030_801B9EED; extern u8 D_sc06_030_801B9EE9; extern u8 D_sc06_030_801B9EF6; extern u8 D_sc06_030_801B9EF2; extern u8 D_sc06_030_801B9EEE; extern u8 D_sc06_030_801B9EEA; extern u8 D_sc06_030_801B9EC2; extern u8 D_sc06_030_801B9EBE; extern u8 D_sc06_030_801B9EBA; extern u8 D_sc06_030_801B9EB6; extern s32 D_sc06_030_801B9EC4; extern s32 D_sc06_030_801B9E90; extern s32 D_sc06_030_801B9EF8;

void func_sc06_030_8017C150(StageActor *o) {
    u8 *m;
    s16 x1;
    s16 y1;
    s16 y2;
    s16 x2;
    s16 y;
    D_sc06_030_80185864 = 0;
    D_sc06_030_80185858 = 0;
    D_sc06_030_8018584C = 0;
    if (AF(o, u8 *, 0xD0) == 0) {
        m = AllocActorSprite();
        if (m == 0) return;
        SjisToGlyphs(o->message, &D_sc06_030_801B9E38);
        InitTextSprite(m, &D_sc06_030_801B9E38);
        AF(m, s16, 8) = o->pos[0].h.i + 6;
        AF(m, s16, 0xA) = o->pos[1].h.i + 9;
        AF(m, s16, 0x2C) = 3;
        AF(m, u8, 0x27) = 1;
        o->ext1 = m;
    }
    x1 = o->pos[0].h.i;
    D_sc06_030_801B9E60 = x1;
    D_sc06_030_801B9E70 = x1 - 4;
    y1 = AF(o, s16, 0xA);
    D_sc06_030_801B9E62 = D_sc06_030_801B9E6A = y1;
    D_sc06_030_801B9E72 = D_sc06_030_801B9E7A = y1 + 7;
    y2 = AF(o, s16, 0xA);
    D_sc06_030_801B9E96 = D_sc06_030_801B9E9E = y2;
    D_sc06_030_801B9EA6 = D_sc06_030_801B9EAE = y2 + 7;
    x2 = AF(o, s16, 6);
    D_sc06_030_801B9EC8 = x2 + 2;
    D_sc06_030_801B9ED8 = x2 - 2;
    y = AF(o, s16, 0xA);
    D_sc06_030_801B9E80 = D_sc06_030_801B9E88 = 0xFF;
    D_sc06_030_801B9E84 = D_sc06_030_801B9E8C = 0xFF;
    D_sc06_030_801B9E81 = D_sc06_030_801B9E89 = 0;
    D_sc06_030_801B9E8A = D_sc06_030_801B9E8E = 0;
    D_sc06_030_801B9E82 = D_sc06_030_801B9E86 = 0;
    D_sc06_030_801B9EB4 = D_sc06_030_801B9EBC = 0xFF;
    D_sc06_030_801B9ECA = D_sc06_030_801B9ED2 = y + 4;
    D_sc06_030_801B9EDA = D_sc06_030_801B9EE2 = y + 0xB;
    D_sc06_030_801B9EB5 = D_sc06_030_801B9EBD = 0xFF;
    D_sc06_030_801B9EB9 = D_sc06_030_801B9EC1 = 0xFF;
    D_sc06_030_801B9EE8 = D_sc06_030_801B9EEC = D_sc06_030_801B9EF0 = D_sc06_030_801B9EF4 = 0x40;
    D_sc06_030_801B9EE9 = D_sc06_030_801B9EED = D_sc06_030_801B9EF1 = D_sc06_030_801B9EF5 = 0x40;
    D_sc06_030_801B9EEA = D_sc06_030_801B9EEE = D_sc06_030_801B9EF2 = D_sc06_030_801B9EF6 = 0x40;
    D_sc06_030_801B9EB6 = D_sc06_030_801B9EBA = D_sc06_030_801B9EBE = D_sc06_030_801B9EC2 = 0;
    D_sc06_030_801B9E64 = D_sc06_030_801B9E98 = 2;
    D_sc06_030_801B9ECC = 4;
    D_sc06_030_801B9E90 = D_sc06_030_801B9EC4 = 0;
    D_sc06_030_801B9EF8 = 0x60000000;
    if (AF(o, s16, 0x70) == 0) o->param = 0x100;
    D_sc06_030_80185864 = 2;
    AF(o, s16, 2)++;
}

extern u8 D_sc06_030_8019EF7C;
extern u8 D_sc06_030_80185D78;
extern u8 *SpawnActor();
extern s32 HeadingToTarget();

extern u8 D_sc06_030_80185D60;
extern u8 D_sc06_030_80185D68;
extern u8 D_sc06_030_801B9F00;
extern u8 D_sc06_030_801B9F08;
extern void InitNullModel();
extern void RotTransSV();
extern s32 ActorSegmentDamagesPlayer();

extern u8 D_sc06_030_80185AB8;
extern s32 ShowDamage();
extern s32 ShowDefeat();
extern s32 StartRumbleScript();
extern s32 GainStat3FromActor();
extern s32 GainStat2FromActor();
extern u8 D_sc06_030_8019EEAC;

extern s32 SpawnProp();

extern OtRef g_WorldOtOrg[];
extern s32 g_PadLostFrames;
extern void DrawPrimG4Screen();

typedef struct { s32 a, b; } P8;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
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

void func_sc06_030_8017C43C(StageActor *arg0) {
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
            ((XY *)&D_sc06_030_8018584C)->x = (arg0->work108 * arg0->param) / max;
            if (((XY *)&D_sc06_030_8018584C)->x == 0 && tgt != 0) {
                ((XY *)&D_sc06_030_8018584C)->x = 1;
            }
        } else {
            s16 t = arg0->work10A;
            if (cur < t) {
                arg0->work108 = cur + (max * 3) / arg0->param;
                if (tgt < arg0->work108) {
                    arg0->work108 = max;
                }
                ((XY *)&D_sc06_030_8018584C)->x = (arg0->work108 * arg0->param) / max;
            } else if (t < max) {
                arg0->work10A = t + (max * 3) / arg0->param;
                if (max < arg0->work10A) {
                    arg0->work10A = max;
                }
                D_sc06_030_80185858 = (arg0->work10A * arg0->param) / max;
                D_sc06_030_80185864 = D_sc06_030_80185858 + 2;
            }
        }
    }
    if (arg0->unkFC == 0xB) {
        u8 c = (arg0->timer++ & 1) ? 0xC0 : 0;
        ((QuadArg *)&D_sc06_030_801B9E60)[0].c[2].g = c;
        ((QuadArg *)&D_sc06_030_801B9E60)[0].c[0].g = c;
        ((QuadArg *)&D_sc06_030_801B9E60)[1].c[3].b = c;
        ((QuadArg *)&D_sc06_030_801B9E60)[1].c[2].b = c;
        ((QuadArg *)&D_sc06_030_801B9E60)[1].c[1].b = c;
        ((QuadArg *)&D_sc06_030_801B9E60)[1].c[0].b = c;
        ((QuadArg *)&D_sc06_030_801B9E60)[0].c[3].b = c;
        ((QuadArg *)&D_sc06_030_801B9E60)[0].c[2].b = c;
        ((QuadArg *)&D_sc06_030_801B9E60)[0].c[1].b = c;
        ((QuadArg *)&D_sc06_030_801B9E60)[0].c[0].b = c;
    }
    half = arg0->param >> 1;
    n = ((XY *)&D_sc06_030_8018584C)->x;
    if (n < (s16)half) {
        s32 v;
        v = (n * 255) / (s16)half;
        ((QuadArg *)&D_sc06_030_801B9E60)[0].p[1].x = ((QuadArg *)&D_sc06_030_801B9E60)[0].p[0].x + n;
        ((QuadArg *)&D_sc06_030_801B9E60)[0].p[3].x = ((QuadArg *)&D_sc06_030_801B9E60)[0].p[1].x - 4;
        ((QuadArg *)&D_sc06_030_801B9E60)[0].c[3].g = v;
        ((QuadArg *)&D_sc06_030_801B9E60)[0].c[1].g = v;
    } else {
        s32 x;
        s16 xm;
        u8 *g;
        s32 v;
        v = ((n - (s16)half) * 255) / (s16)half;
        g = &((QuadArg *)&D_sc06_030_801B9E60)[0].c[1].g;
        *g = ((QuadArg *)&D_sc06_030_801B9E60)[0].c[3].g = 0xFF;
        x = (u16)((QuadArg *)&D_sc06_030_801B9E60)[0].p[0].x + half;
        xm = x - 4;
        ((QuadArg *)&D_sc06_030_801B9E60)[1].p[0].x = x;
        ((QuadArg *)&D_sc06_030_801B9E60)[1].p[1].x = ((QuadArg *)&D_sc06_030_801B9E60)[0].p[0].x + n;
        ((QuadArg *)&D_sc06_030_801B9E60)[0].p[1].x = x;
        ((QuadArg *)&D_sc06_030_801B9E60)[1].p[2].x = xm;
        ((QuadArg *)&D_sc06_030_801B9E60)[0].p[3].x = xm;
        ((QuadArg *)&D_sc06_030_801B9E60)[1].p[3].x = ((QuadArg *)&D_sc06_030_801B9E60)[1].p[1].x - 4;
        ((QuadArg *)&D_sc06_030_801B9E60)[1].c[3].r = -v;
        ((QuadArg *)&D_sc06_030_801B9E60)[1].c[1].r = -v;
        DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc06_030_801B9E60)[1]);
    }
    {
        s16 *p = &((QuadArg *)&D_sc06_030_801B9E60)[2].p[3].x;
        ((QuadArg *)&D_sc06_030_801B9E60)[2].p[1].x = ((QuadArg *)&D_sc06_030_801B9E60)[2].p[0].x + D_sc06_030_80185858;
        *p = ((QuadArg *)&D_sc06_030_801B9E60)[2].p[1].x - 4;
    }
    DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc06_030_801B9E60)[0]);
    DrawPrimG4ScreenDithered(&((QuadArg *)&D_sc06_030_801B9E60)[2]);
}

void func_sc06_030_8017C8D0(u8 *obj) {
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

void func_sc06_030_8017D7B0(u8 *arg0) {
    D_sc06_030_801858F0[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_030_8017D7EC(u8 *arg0) {
    func_sc06_030_8017DA6C();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_030_8017D830(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc06_030_8017D854(u8 *arg0) {
    D_sc06_030_801858F8[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_030_8017D890(u8 *arg0) {
    func_sc06_030_8017DA94();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_030_8017D8D0(u8 *arg0) {
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

void func_sc06_030_8017D94C(void) {
    func_800D1EBC();
}

void func_sc06_030_8017D96C(u8 *arg0) {
    D_sc06_030_80185904[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_030_8017D9A8(u8 *arg0) {
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

s32 RoomExitAfterBoss(void) {
    if (FadeStep(4) & 0xFFFF) {
        SetClock(0x03390000);
        SetProgress(0x514);
        RequestSave();
        return 1;
    }
    return 0;
}

void func_sc06_030_8017DA6C(void) {
    StartPlayerActionScript((s32) &D_sc06_030_80185910, 0x01000000);
}

void func_sc06_030_8017DA94(void) {
    StartPlayerActionScript((s32) &D_sc06_030_80185914, 0x01000000);
}

void func_sc06_030_8017DABC(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc06_030_8017DB58, 0);
    SnapCamera((s32) &g_Camera);
    func_sc06_030_8017DB58((s32) &g_Camera);
}

void func_sc06_030_8017DB58(s32 arg0) {
    D_sc06_030_80185920[AF(arg0, u8, 4)]();
}

extern s32 g_CameraProj;
extern u8 *AllocPrim();
extern SV8 D_sc06_030_801B4CA4;
extern u32 D_sc06_030_801B4CAC[];
extern u8 D_sc06_030_801B4CB8[];
extern u8 D_sc06_030_801B4CC8[];
extern u8 D_sc06_030_801B4CD8[];

typedef struct { s16 v[8]; s32 w; } Arg14ABC;
typedef union { s32 w; struct { u16 lo; s16 hi; } h; } FixABC;
typedef struct {
    u8 pad0[4];
    FixABC pos[3];
    u8 pad10[0xC];
    s32 count;
    u8 pad20[0x14];
    u16 sub;
    u8 pad36[0x1A];
    s16 c50;
    s16 s52;
    u8 pad54[0x40];
    s32 i94;
    u8 pad98[0x48];
    s32 fE0;
    s32 nE4;
    u8 padE8[0xC];
    s32 vF4;
} ActABC;
typedef struct { XY p[5]; } XY5;
typedef struct { s32 v; } S32R;
typedef struct { SV v[4]; u16 uv[4][2]; u8 r, g, b, pad; s32 code; u8 tp; } SPrim105;
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
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;


extern s32 GetObjPadPressed();
extern u8 D_sc06_030_80185924[];
extern u8 g_CameraFocus;
void func_sc06_030_8017DB94(u8 *arg0) {
    B8 v;
    u8 t;

    if (GetObjPadPressed((s32) &g_Player) & 3) {
        t = (AF(arg0, u8, 5) + 1) & 1;
        AF(arg0, u8, 5) = t;
        AF(arg0, s32, 0x14) = ((s16 *)&D_sc06_030_80185924)[t];
    }
    v = *(B8 *)&g_CameraFocus;
    if (AF(&v, s16, 0) < -0xE0) {
        AF(&v, s16, 0) = -0xE0;
    } else if (AF(&v, s16, 0) > 0xE0) {
        AF(&v, s16, 0) = 0xE0;
    }
    if (AF(&v, s16, 4) < -0xE0) {
        AF(&v, s16, 4) = -0xE0;
    }
    func_sc06_030_8017DC70(arg0, (u8 *) &v);
}

void func_sc06_030_8017DC70(u8 *arg0, u8 *arg1) {
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

void func_sc06_030_8017DE08(u8 *o) {
    u32 *ot;
    u8 *p;

    ot = g_WorldOtOrg[D_800B9A02].ot;
    p = AllocPrim(0x30);
    if (p != 0) {
        SetDrawMode(p, 0, 0, (u16) GetTPage(0, 1, 0, 0), 0);
        AF(p, u8, 0x10) = AF(o, s32, 0x1C);
        AF(p, u8, 0x18) = AF(o, s32, 0x1C);
        AF(p, u8, 0x20) = AF(o, s32, 0x1C);
        AF(p, u8, 0x28) = AF(o, s32, 0x1C);
        AF(p, u8, 0x11) = AF(o, s32, 0x1C);
        AF(p, u8, 0x19) = AF(o, s32, 0x1C);
        AF(p, u8, 0x21) = AF(o, s32, 0x1C);
        AF(p, u8, 0x29) = AF(o, s32, 0x1C);
        AF(p, u8, 0x12) = AF(o, s32, 0x1C);
        AF(p, u8, 0x1A) = AF(o, s32, 0x1C);
        AF(p, u8, 0x22) = AF(o, s32, 0x1C);
        AF(p, u8, 0x2A) = AF(o, s32, 0x1C);
        AF(p, u8, 0xF) = 8;
        AF(p, u8, 0x13) = 0x3A;
        AF(p, s16, 0x14) = -0xA0;
        AF(p, s16, 0x1C) = 0xA0;
        AF(p, s16, 0x24) = -0xA0;
        AF(p, s16, 0x2C) = 0xA0;
        AF(p, s16, 0x16) = -0x78;
        AF(p, s16, 0x1E) = -0x78;
        AF(p, s16, 0x26) = 0x78;
        AF(p, s16, 0x2E) = 0x78;
        AddPrim(ot, p + 0xC);
        AddPrim(ot, p);
    }
}

void BossHurt(StageActor *o) {
    s32 k;
    ActorInit *p;
    s32 d;

    k = AF(o, u8, 0x5E);
    if (o->hitDamage != 0) {
        if (k == 0x1D) {
            o->hitFlags = 0;
            o->hitPos[0] = o->pos[0].h.i;
            o->hitPos[1] = o->pos[1].h.i;
            o->hitPos[2] = o->pos[2].h.i;
        }
        p = o->init;
        if (p != 0 && o->hitDamage != 0) {
            d = o->hitDamage * p->damageScale >> 12;
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
            StartRumbleScript(&D_sc06_030_80185AB8);
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
        o->state = 7;
        o->stateCount = 0;
        PlaySoundId(0xA8F, 0);
        o->hp = 0;
    } else if (o->reactMode == 0) {
        PlaySoundId(0xA8E, 0);
    }
    func_sc06_030_8017C010((s32)((u8 *)o + 0x76), (s32)&D_sc06_030_80185D14, 0xD2);
    o->hitState = 0x800;
    o->reactMode = 0x10;
    o->hitDamage = 0;
    o->react = 0;
    o->hitCode = 0;
    if (o->state == 2) {
        o->index = 0x11;
    }
}

extern void PosToSVec();
extern void WorldToActorLocal();

extern s32 TurnStep();
extern u8 D_sc06_030_8019F454;
extern u8 D_sc06_030_8019F51C;
extern u8 D_sc06_030_8019F32C;
extern u8 D_sc06_030_8019F644;
extern u8 D_sc06_030_80185D70;
extern u8 D_sc06_030_80185AA8;
extern s32 D_sc06_030_8019F75C[];
extern s32 D_sc06_030_8019F89C[];
extern s32 D_sc06_030_8019FAD4[];
extern s32 D_sc06_030_8019F9C4[];
extern s16 D_sc06_030_80185B6C[];
extern s16 D_sc06_030_80185B18[];

void func_sc06_030_8017E120(u8 *o) {
    SV8 v;
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 w;
    u8 *m;
    u8 *q;
    s32 a;
    s32 c;

    m = AF(o, u8 *, 0xCC);
    switch (AF(o, u16, 0x34)) {
    case 0:
        SetScript(o, &D_sc06_030_8019F454);
        AF(m, s32, 4) &= 0x7FFFFFFF;
        AF(m, s32, 0x20) = D_sc06_030_8019F75C[AF(o, s32, 0x94) * 2];
        AF(o, s16, 0x34) = 1;
        pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
        pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16) (((s16 *)&sxy)[1] + 0x77) < 0xEF) {
            w = ((((s16 *)&sxy)[0] << 7) + 0x5000) / 320;
            if (w < 0) {
                w = 0;
            }
            if (w >= 0x80) {
                w = 0x7F;
            }
            PlaySoundId(0x942, (w | 0x2000) & 0xFFFF);
        }
        AF(o, s16, 0x84) = 0x1E;
        break;
    case 1:
        if (AF(o, s16, 0x84) != 0) {
            AF(o, s16, 0x84)--;
        } else {
            AF(o, s16, 0x84) = 0xF;
            pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
            pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
            pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
            SetRotMatrix(&D_800AF630.wsm);
            SetTransMatrix(&D_800AF648);
            RotTransPers(&pos, &sxy, &p, &flag);
            if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16) (((s16 *)&sxy)[1] + 0x77) < 0xEF) {
                w = ((((s16 *)&sxy)[0] << 7) + 0x5000) / 320;
                if (w < 0) {
                    w = 0;
                }
                if (w >= 0x80) {
                    w = 0x7F;
                }
                PlaySoundId(0x944, (w | 0x2000) & 0xFFFF);
            }
        }
        if (AF(o, s32, 0x94) == 0xE) {
            AF(o, s16, 0x34) = 2;
            a = (ratan2(-AF(o, s16, 0xE), AF(o, s16, 6)) - 0x400) & 0xFFF;
            a += (rand() & 0x3FF) - 0x200;
            a &= 0xFFF;
            AF(o, s16, 0xFE) = 0x800;
            AF(o, s16, 0xDC) = AF(o, s16, 6);
            AF(o, s16, 0xDE) = -((rsin(a) * 0x160) >> 12) - AF(o, s16, 6);
            AF(o, s16, 0xE0) = AF(o, s16, 0xA);
            AF(o, s16, 0xE2) = -0x200 - AF(o, s16, 0xA);
            AF(o, s16, 0xE4) = AF(o, s16, 0xE);
            c = rcos(a);
            AF(o, s16, 0x100) = (a + 0x800) & 0xFFF;
            AF(o, s16, 0xE6) = -((c * 0x160) >> 12) - AF(o, s16, 0xE);
        } else {
            AF(m, s32, 0x20) = D_sc06_030_8019F75C[AF(o, s32, 0x94) * 2];
        }
        break;
    case 2:
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0x100), 0x10);
        AF(o, s16, 0xFE) -= 0x40;
        if (AF(o, s16, 0xFE) <= 0) {
            AF(o, s16, 0x34) = 3;
            AF(o, s16, 0xFE) = 0;
            AF(o, s16, 0x102) = 0;
            SetScript(o, &D_sc06_030_8019F51C);
            AF(o, s32, 0xEC) = (rand() & 3) * 20;
        }
        AF(o, s16, 6) = AF(o, s16, 0xDC) + (((rcos(AF(o, s16, 0xFE)) + 0x1000) * AF(o, s16, 0xDE)) >> 13);
        AF(o, s16, 0xA) = AF(o, s16, 0xE0) + (((rcos(AF(o, s16, 0xFE)) + 0x1000) * AF(o, s16, 0xE2)) >> 13);
        AF(o, s16, 0xE) = AF(o, s16, 0xE4) + (((rcos(AF(o, s16, 0xFE)) + 0x1000) * AF(o, s16, 0xE6)) >> 13);
        AF(m, s32, 0x20) = D_sc06_030_8019F89C[AF(o, s32, 0x94) * 2];
        if (AF(o, s16, 0x84) != 0) {
            AF(o, s16, 0x84)--;
        } else {
            AF(o, s16, 0x84) = 0xF;
            pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
            pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
            pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
            SetRotMatrix(&D_800AF630.wsm);
            SetTransMatrix(&D_800AF648);
            RotTransPers(&pos, &sxy, &p, &flag);
            if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16) (((s16 *)&sxy)[1] + 0x77) < 0xEF) {
                w = ((((s16 *)&sxy)[0] << 7) + 0x5000) / 320;
                if (w < 0) {
                    w = 0;
                }
                if (w >= 0x80) {
                    w = 0x7F;
                }
                PlaySoundId(0x944, (w | 0x2000) & 0xFFFF);
            }
        }
        break;
    case 3:
        AF(o, s16, 0xFE) += 0x20;
        AF(o, s16, 0x100) += 0x20;
        AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(o, s16, 0x100);
        AF(o, s16, 6) = (rsin(AF(o, s16, 0x100)) * 0x160) >> 12;
        AF(o, s16, 0xE) = (rcos(AF(o, s16, 0x100)) * 0x160) >> 12;
        AF(o, s16, 0xE0) = (AF(o, s16, 0xE0) + 0x80) & 0xFFF;
        AF(o, s16, 0xA) = ((rsin(AF(o, s16, 0xE0)) * 32) >> 12) - 0x200;
        AF(m, s32, 0x20) = D_sc06_030_8019FAD4[AF(o, s32, 0x94) * 2];
        if (AF(o, s16, 0x84) != 0) {
            AF(o, s16, 0x84)--;
        } else {
            AF(o, s16, 0x84) = 0xF;
            pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
            pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
            pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
            SetRotMatrix(&D_800AF630.wsm);
            SetTransMatrix(&D_800AF648);
            RotTransPers(&pos, &sxy, &p, &flag);
            if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16) (((s16 *)&sxy)[1] + 0x77) < 0xEF) {
                w = ((((s16 *)&sxy)[0] << 7) + 0x5000) / 320;
                if (w < 0) {
                    w = 0;
                }
                if (w >= 0x80) {
                    w = 0x7F;
                }
                PlaySoundId(0x944, (w | 0x2000) & 0xFFFF);
            }
        }
        if (AF(o, s16, 0x102) <= AF(o, s16, 0xFE)) {
            AF(o, s32, 0x94) = 0xB;
            AF(o, s16, 0x102) += 0xD7;
        }
        if (AF(o, s32, 0x94) == 0x10) {
            q = SpawnActor(0x30B, o);
            if (q != 0) {
                FaceHelper(o, &D_sc06_030_80185D70, &v);
                AF(q, s16, 6) = AF(q, s16, 0x88) = v.x;
                AF(q, s16, 0xA) = AF(q, s16, 0x8A) = v.y;
                AF(q, s16, 0xE) = AF(q, s16, 0x8C) = v.z;
                AF(q, s32, 0x10) = (D_sc06_030_80185B18[D_sc06_030_80185B6C[AF(o, s32, 0xEC)]] - AF(q, s16, 6)) << 11;
                AF(q, s32, 0x14) = (-0x182 - AF(q, s16, 0xA)) << 11;
                AF(q, s32, 0x18) = (D_sc06_030_80185B18[D_sc06_030_80185B6C[AF(o, s32, 0xEC)] + 1] - AF(q, s16, 0xE)) << 11;
                PlaySoundId(0x943, 0);
            }
            AF(o, s32, 0xEC)++;
            if (AF(o, s16, 0x102) >= 0x1000) {
                AF(o, s16, 0x34) = 4;
                AF(o, s32, 0x14) = 0;
                SetScript(o, &D_sc06_030_8019F32C);
            }
        }
        break;
    case 4:
        AF(o, s32, 8) += AF(o, s32, 0x14);
        AF(o, s32, 0x14) += AF(o, s32, 0x48);
        if (AF(o, s16, 0xA) < -0x3FF) {
            AF(o, s16, 0x34) = 5;
            AF(o, s32, 0x1C) = 0x8E;
        }
        AF(m, s32, 0x20) = D_sc06_030_8019F89C[AF(o, s32, 0x94) * 2];
        if (AF(o, s16, 0x84) != 0) {
            AF(o, s16, 0x84)--;
        } else {
            AF(o, s16, 0x84) = 0xF;
            pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
            pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
            pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
            SetRotMatrix(&D_800AF630.wsm);
            SetTransMatrix(&D_800AF648);
            RotTransPers(&pos, &sxy, &p, &flag);
            if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16) (((s16 *)&sxy)[1] + 0x77) < 0xEF) {
                w = ((((s16 *)&sxy)[0] << 7) + 0x5000) / 320;
                if (w < 0) {
                    w = 0;
                }
                if (w >= 0x80) {
                    w = 0x7F;
                }
                PlaySoundId(0x944, (w | 0x2000) & 0xFFFF);
            }
        }
        break;
    case 5:
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, s16, 0x34) = 6;
            a = (ratan2(-D_80126B66, (s16)g_PlayerX) - 0x200) & 0xFFF;
            if (a < 0x400) {
                v.x = 0;
                v.z = 0x140;
            } else if (a < 0x800) {
                v.x = 0x160;
                v.z = 0;
            } else if (a < 0xC00) {
                v.x = 0;
                v.z = -0x140;
            } else {
                v.x = -0x160;
                v.z = 0;
            }
            AF(o, s16, 0xFE) = 0;
            AF(o, s16, 0xDC) = v.x;
            AF(o, s16, 0xDE) = AF(o, s16, 6) - v.x;
            AF(o, s16, 0xE0) = -0x182;
            AF(o, s16, 0xE2) = AF(o, s16, 0xA) + 0x182;
            AF(o, s16, 0xE4) = v.z;
            AF(o, s16, 0xE6) = AF(o, s16, 0xE) - v.z;
        }
        AF(m, s32, 0x20) = D_sc06_030_8019F89C[AF(o, s32, 0x94) * 2];
        if (AF(o, s16, 0x84) != 0) {
            AF(o, s16, 0x84)--;
        } else {
            AF(o, s16, 0x84) = 0xF;
            pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
            pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
            pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
            SetRotMatrix(&D_800AF630.wsm);
            SetTransMatrix(&D_800AF648);
            RotTransPers(&pos, &sxy, &p, &flag);
            if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16) (((s16 *)&sxy)[1] + 0x77) < 0xEF) {
                w = ((((s16 *)&sxy)[0] << 7) + 0x5000) / 320;
                if (w < 0) {
                    w = 0;
                }
                if (w >= 0x80) {
                    w = 0x7F;
                }
                PlaySoundId(0x944, (w | 0x2000) & 0xFFFF);
            }
        }
        break;
    case 6:
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(o, 8);
        AF(o, s16, 0xFE) += 0x20;
        AF(m, s32, 0x20) = D_sc06_030_8019F89C[AF(o, s32, 0x94) * 2];
        if (AF(o, s16, 0x84) != 0) {
            AF(o, s16, 0x84)--;
        } else {
            AF(o, s16, 0x84) = 0xF;
            pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
            pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
            pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
            SetRotMatrix(&D_800AF630.wsm);
            SetTransMatrix(&D_800AF648);
            RotTransPers(&pos, &sxy, &p, &flag);
            if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16) (((s16 *)&sxy)[1] + 0x77) < 0xEF) {
                w = ((((s16 *)&sxy)[0] << 7) + 0x5000) / 320;
                if (w < 0) {
                    w = 0;
                }
                if (w >= 0x80) {
                    w = 0x7F;
                }
                PlaySoundId(0x944, (w | 0x2000) & 0xFFFF);
            }
        }
        if (AF(o, s16, 0xFE) == 0x5C0) {
            SetScript(o, &D_sc06_030_8019F644);
        }
        if (AF(o, s16, 0xFE) >= 0x800) {
            AF(o, s16, 0x34) = 7;
        }
        AF(o, s16, 6) = AF(o, s16, 0xDC) + (((rcos(AF(o, s16, 0xFE)) + 0x1000) * AF(o, s16, 0xDE)) >> 13);
        AF(o, s16, 0xA) = AF(o, s16, 0xE0) + (((rcos(AF(o, s16, 0xFE)) + 0x1000) * AF(o, s16, 0xE2)) >> 13);
        AF(o, s16, 0xE) = AF(o, s16, 0xE4) + (((rcos(AF(o, s16, 0xFE)) + 0x1000) * AF(o, s16, 0xE6)) >> 13);
        break;
    case 7:
        if (AF(o, s16, 0x98) == 0) {
            AF(o, s16, 2) = 2;
            AF(m, s32, 4) |= 0x80000000;
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 0xFC) = 1;
            SetScript(o, &D_sc06_030_8019EC8C);
        } else {
            AF(m, s32, 0x20) = D_sc06_030_8019F9C4[AF(o, s32, 0x94) * 2];
        }
        break;
    }
    AF(m, s16, 8) = AF(o, s16, 6);
    AF(m, s16, 0xA) = AF(o, s16, 0xA);
    AF(m, s16, 0xC) = AF(o, s16, 0xE);
    AF(m, s16, 0xA) += 0x10;
    AF(m, s16, 0x10) = AF(AF(o, u8 *, 0x20), s16, 0x10);
    AF(m, s16, 0x12) = AF(AF(o, u8 *, 0x20), s16, 0x12);
    AF(m, s16, 0x14) = AF(AF(o, u8 *, 0x20), s16, 0x14);
    AF(o, s16, 0x104) = (s16)(AF(o, s16, 0x104) + 0x20) % 160;
    LoadImage((s32) &D_sc06_030_80185AA8, (s32) (AF(o, s16, 0x104) + &D_sc06_030_80185928));
}

void func_sc06_030_8017EEF0(u8 *o) {
    SV8 v;
    s32 i;
    Mover *p;
    s32 a;

    switch (AF(o, u16, 0x34)) {
    case 0:
        SetScript(o, &D_sc06_030_8019EEAC);
        AF(o, s16, 0x34) = 1;
        PlaySoundId(0xA8C, 0);
        break;
    case 1:
        if (AF(o, s32, 0x94) < 5) {
            AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(o, 4);
        }
        if (AF(o, s16, 0x98) == 0) {
            AF(o, s16, 2) = 2;
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 0xFC) = 2;
            SetScript(o, &D_sc06_030_8019EC8C);
        } else if (AF(o, s32, 0x94) == 10) {
            FaceHelper(o, &D_sc06_030_80185D78, &v);
            for (i = -0x100; i < 0x200; i += 0x100) {
                p = SpawnActor(0x30C, o);
                if (p != 0) {
                    p->pos[0].h.i = v.x;
                    p->pos[1].h.i = v.y;
                    p->pos[2].h.i = v.z;
                    a = (HeadingToTarget(p) + i) & 0xFFF;
                    p->vel[0] = -rsin(a) * 0x180;
                    p->vel[2] = -rcos(a) * 0x180;
                    p->model->rot.vy = a;
                }
            }
            PlaySoundId(0x945, 0);
        }
        break;
    }
}

void func_sc06_030_8017F0A0(u8 *o) {
    SV8 v;
    u8 *p;
    s32 a;

    switch (AF(o, u16, 0x34)) {
    case 0:
        SetScript(o, &D_sc06_030_8019EF7C);
        AF(o, s16, 0x34) = 1;
        PlaySoundId(0xA8D, 0);
        AF(o, s16, 0x102) = 3;
        break;
    case 1:
        if (AF(o, s16, 0x98) == 0) {
            if (--AF(o, s16, 0x102) != 0) {
                SetScript(o, &D_sc06_030_8019EF7C);
            } else {
                AF(o, s16, 2) = 2;
                AF(o, s32, 0x1C) = 0x1E;
                AF(o, s16, 0xFC) = 3;
                SetScript(o, &D_sc06_030_8019EC8C);
            }
        } else {
            if (AF(o, s32, 0x94) < 5) {
                AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(o, 4);
            }
            if (AF(o, s32, 0x94) == 0x14) {
                FaceHelper(o, &D_sc06_030_80185D78, &v);
                p = SpawnActor(0x30D, o);
                if (p != 0) {
                    AF(p, s16, 6) = AF(p, s16, 0x88) = v.x;
                    AF(p, s16, 0xA) = AF(p, s16, 0x8A) = v.y;
                    AF(p, s16, 0xE) = AF(p, s16, 0x8C) = v.z;
                    a = HeadingToTarget(p);
                    AF(p, s32, 0x10) = -rsin(a) * 0x180;
                    AF(p, s32, 0x18) = -rcos(a) * 0x180;
                }
            }
        }
        break;
    }
}

void func_sc06_030_8017F268(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;
    s32 v;
    s32 w;
    u8 *c;
    u8 *q;

    switch (AF(o, u16, 0x34)) {
    case 0:
        SetScript(o, &D_sc06_030_8019F06C);
        AF(o, s16, 0x34) = 1;
        PlaySoundId(0xA8A, 0);
        pos.x = AF(AF(o, u8 *, 0x20), s32, 0x48);
        pos.y = AF(AF(o, u8 *, 0x20), s32, 0x4C);
        pos.z = AF(AF(o, u8 *, 0x20), s32, 0x50);
        SetRotMatrix(&D_800AF630.wsm);
        SetTransMatrix(&D_800AF648);
        RotTransPers(&pos, &sxy, &p, &flag);
        if (flag >= 0 && (u16) (((s16 *)&sxy)[0] + 0x9F) < 0x13F && (u16) (((s16 *)&sxy)[1] + 0x77) < 0xEF) {
            w = ((((s16 *)&sxy)[0] << 7) + 0x5000) / 320;
            if (w < 0) {
                w = 0;
            }
            if (w >= 0x80) {
                w = 0x7F;
            }
            PlaySoundId(0x93F, (w | 0x2000) & 0xFFFF);
        }
        break;
    case 1:
        if (AF(o, s32, 0x94) >= 0x2C) {
            D_sc06_030_80185D62 = 0x20;
            PlaySoundId(0xA8B, 0);
            AF(o, s16, 0x34) = 2;
            break;
        }
        if (ActorTouchesPlayer(o, 0x48, 0x50) != 0) {
            g_PlayerHitKind = 0x4004;
            g_PlayerHitFacing = HeadingToPlayer(o);
        }
        break;
    case 2:
        if (AF(o, s32, 0x94) < 0x31) {
            AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(o, 2);
            break;
        }
        v = DistSqToPlayer(o);
        if (v < 0x10000) {
            AF(o, s16, 0x34) = 4;
            break;
        }
        v = SquareRoot0(v) - 0x100;
        if (v < 0) {
            v = 0;
        }
        AF(o, s32, 0x10) = (rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) * v) << 2;
        AF(o, s32, 0x18) = (rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) * v) << 2;
        AF(o, s16, 0x34) = 3;
        AF(o, s32, 0x1C) = 0x10;
        AF(o, s32, 0x44) = AF(o, s32, 0x10) >> 4;
        AF(o, s32, 0x4C) = AF(o, s32, 0x18) >> 4;
        PlaySoundId(0xC65, 0);
        break;
    case 3:
        AF(o, s32, 4) -= AF(o, s32, 0x10);
        AF(o, s32, 0x10) -= AF(o, s32, 0x44);
        AF(o, s32, 0xC) -= AF(o, s32, 0x18);
        AF(o, s32, 0x18) -= AF(o, s32, 0x4C);
        c = (u8 *)SpawnKind205(o, 0);
        if (c != 0) {
            AF(c, s32, 0x18) = AF(o, s32, 0x18);
            AF(c, s16, 0x16) = -((rand() & 3) + 4);
            AF(c, s32, 0x10) = AF(o, s32, 0x10);
            q = AF(c, u8 *, 0xCC);
            AF(q, s16, 0x18) = AF(q, s16, 0x1A) = 0x6000;
            StartSpriteAnim(q, c + 0xD0, &D_sc06_030_80185AC8);
        }
        if (--AF(o, s32, 0x1C) == 0) {
            AF(o, s16, 0x34) = 4;
            PlaySoundId(0x93F, 0);
        }
        if (ActorTouchesPlayer(o, 0x48, 0x50) != 0) {
            g_PlayerHitKind = 0x4004;
            g_PlayerHitFacing = HeadingToPlayer(o);
        }
        break;
    case 4:
        SpawnActorArg(0x3DD, 0, o);
        if (AF(o, s16, 0x98) == 0) {
            AF(o, s16, 2) = 2;
            AF(o, s32, 0x1C) = 0x1E;
            AF(o, s16, 0xFC) = 0;
            SetScript(o, &D_sc06_030_8019EC8C);
            D_sc06_030_80185D62 = -0x50;
        }
        break;
    }
}

void func_sc06_030_8017F65C(u8 *o) {
    u8 *p;
    s32 i;

    AF(o, u8, 0xC2) = 0x10;
    switch (AF(o, u16, 0x34)) {
    case 0:
        D_sc06_030_80185C0C = AF(o, u16, 6) - (rsin(AF(AF(o, u8 *, 0x20), s16, 0x12) + 0x100) >> 4);
        D_sc06_030_80185C10 = AF(o, u16, 0xE) - (rcos(AF(AF(o, u8 *, 0x20), s16, 0x12) + 0x100) >> 4);
        D_sc06_030_80185C14 = AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x100;
        AF(AF(o, u8 *, 0x20), s32, 0x20) = D_sc06_030_8019EB9C;
        AF(o, s16, 0x98) = 0;
        AF(AF(o, u8 *, 0xCC), s32, 4) |= 0x80000000;
        StartEvent(o, &D_sc06_030_80185C9C);
        AF(o, s16, 0x34) = 1;
        AF(o, s16, 0x16) = -4;
        AF(o, s32, 0x48) = 0xC00;
        AF(o, s32, 0x44) = 0;
        AF(o, s32, 0x4C) = 0;
        AF(o, s32, 0x10) = rsin(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 3;
        AF(o, s32, 0x18) = rcos(AF(AF(o, u8 *, 0x20), s16, 0x12)) << 3;
        AF(o, s32, 0x1C) = 0;
        func_800D0C48(1);
        break;
    case 1:
        IsEventDone(o);
        AF(AF(o, u8 *, 0x20), s16, 0x10) -= 0x10;
        if (MoveCollide(o) != 0) {
            RestorePrevPos(o);
        }
        AF(o, s32, 0x1C) += 4;
        func_sc06_030_8017DE08(o);
        if (AF(o, s32, 0x1C) >= 0xFC) {
            AF(o, s32, 0x1C) = 0xFF;
            AF(o, s16, 0x34) = 2;
            SetScript(o, &D_sc06_030_8019FEFC);
            AF(o, s16, 6) = 0;
            AF(o, s16, 0xA) = -0x182;
            AF(o, s16, 0xE) = 0x80;
            AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
            AF(AF(o, u8 *, 0x20), s16, 0x12) = 0;
            AF(o, s16, 0x10A) = 3;
            AF(o, s16, 0x108) = 0x1E;
            D_80126B66 = -0x80;
            g_PlayerX = 0;
            D_80126B62 = -0x182;
            AF(g_PlayerModel, s16, 0x12) = 0x800;
            func_sc06_030_8017C068();
        }
        break;
    case 2:
        IsEventDone(o);
        func_sc06_030_8017DE08(o);
        if (--AF(o, s16, 0x108) == 0) {
            AF(o, s16, 0x34) = 3;
        }
        break;
    case 3:
        IsEventDone(o);
        func_sc06_030_8017DE08(o);
        if ((AF(o, s32, 0x1C) -= 0x10) <= 0) {
            AF(o, s16, 0x34) = AF(o, s16, 0x10A) = 4;
        }
        break;
    case 4:
        if (IsEventDone(o) != 0) {
            EndEvent(o);
            AF(o, s16, 0x34) = 5;
            p = (u8 *)&g_Actors;
            for (i = 0; i < 0x60; p += 0x10C, i++) {
                if (*(u16 *)p == 0x26E) {
                    AF(p, u16, 0x5C) = 0x9000;
                    AF(p, s16, 0x34) = 0;
                }
            }
        } else if (AF(o, s32, 0x94) == 0x35) {
            PlaySoundId(0xA47, 0);
        }
        break;
    case 5:
        break;
    }
}

void func_sc06_030_8017F98C(StageActor *o) {
    typedef struct { s32 flg; WMtx m; u8 rest[0x34]; } Coord;
    u8 buf[0x10];
    SV8 rot;
    u8 unused1[0x18];
    Coord c;
    SV8 a;
    SV8 b;
    s32 flag;
    u8 *p;

    D_sc06_030_80185D80[o->state](o);
    if (o->kind != 0) {
        if (o->state < 7) {
            InitNullModel(buf);
            p = (u8 *)o->model->pose;
            p += 0x84;
            rot.x = AF(p, u16, 6);
            rot.y = AF(p, u16, 8);
            rot.z = AF(p, u16, 0xA);
            RotMatrixZYX(&rot, &c.m);
            c.m.t[0] = AF(p, s16, 0);
            c.m.t[1] = AF(p, s16, 2);
            c.m.t[2] = AF(p, s16, 4);
            SetRotMatrix(&c.m);
            SetTransMatrix(&c.m);
            RotTransSV(&D_sc06_030_80185D60, &a, &flag);
            RotTransSV(&D_sc06_030_80185D68, &b, &flag);
            LocalToWorld((u8 *)o->model + 0x34, &a, &D_sc06_030_801B9F00);
            LocalToWorld((u8 *)o->model + 0x34, &b, &D_sc06_030_801B9F08);
            if (ActorSegmentDamagesPlayer(o, &a, &b, 0x96) != 0) {
                {
                    s16 *q = &g_PlayerHitKind;
                    *q |= 0x4000;
                }
            }
            if (o->state >= 2) {
                s16 *r = &D_80126B66;
                if (*r < -0x1FD) {
                    *r = -0x1FD;
                }
            }
        }
        if (o->pos[2].h.i < -0x1FD) {
            o->pos[2].h.i = -0x1FD;
        }
        if (o->pos[2].h.i > 0x1FD) {
            o->pos[2].h.i = 0x1FD;
        }
        if (o->reactMode != 0) {
            if (--o->reactMode == 0) {
                o->hitState = 0x8800;
            }
        }
    }
}

void func_sc06_030_8017FBA4(StageActor *o) {
    s32 i;
    u8 *p;
    for (i = 0; i < 4; i++) {
        p = (u8 *)SpawnProp(0x23);
        if (p != 0) {
            AF(p, s16, 6) = o->pos[0].h.i + rand() % 160 - 0x50;
            AF(p, s16, 0xA) = o->pos[1].h.i - rand() % 160;
            AF(p, s16, 0xE) = o->pos[2].h.i + rand() % 160 - 0x50;
            AF(p, s16, 0x34) = 0x7000;
            AF(p, s32, 0x10) = AF(p, s32, 0x14) = AF(p, s32, 0x18) = 0;
        }
    }
    o->model->unk04 |= 0x80000000;
    o->timer = 6;
    o->state = 5;
}

extern void (*D_sc06_030_80185DDC[])();
void func_sc06_030_8017FCF4(u8 *o) {
    D_sc06_030_80185DDC[AF(o, u16, 2)]();
    if (AF(o, u16, 0) != 0) {
        AF(o, s16, 0xA) -= 0x40;
        if (AF(o, u16, 2) >= 5) {
            if (ActorTouchesPlayer(o, 0xA0, 0x78) == 1) {
                s16 *q = &g_PlayerHitKind;
                *q |= 0x4000;
            }
        } else if (ActorTouchesPlayer(o, 0x10, 0x78) == 1) {
            AF(o, s16, 2) = 4;
            PlaySoundId(0x941, 0);
            {
                s16 *q = &g_PlayerHitKind;
                *q |= 0x4000;
            }
        }
        AF(o, s16, 0xA) += 0x40;
    }
}

extern void (*D_sc06_030_80185E08[])();
extern void UpdateModelYXZ();
void func_sc06_030_8017FDDC(u8 *o) {
    SV8 a;
    SV8 b;
    s32 i;
    D_sc06_030_80185E08[AF(o, u16, 2)]();
    if (AF(o, u16, 0) != 0) {
        UpdateModelYXZ(o);
        a.x = 0;
        b.y = 0;
        a.y = 0;
        a.z = 0;
        for (i = 0; i < 0x1000; i += 0x200) {
            b.x = rsin(i) >> 7;
            b.z = rcos(i) >> 7;
            ActorSegmentDamagesPlayer(o, &a, &b, 0x40);
        }
    }
}

void func_sc06_030_8017FE9C(u8 *o) {
    SV8 pos;
    s32 sxy;
    s32 p;
    s32 flag;

    if (AF(o, s16, 0x84) != 0) {
        AF(o, s16, 0x84)--;
    } else {
        AF(o, s16, 0x84) = 0xF;
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
            x <<= 8; PlaySoundId(0x93E, (a | (x | 0x3000)) & 0xFFFF);
        }
    }
    AF(AF(o, u8 *, 0x20), s16, 0x12) += 0x300;
    if (MoveCollide(o) != 0) {
        FreeActor(o);
    }
    if (--AF(o, s32, 0x1C) == 0) {
        FreeActor(o);
    }
}

void func_sc06_030_80180058(u8 *arg0) {
    D_sc06_030_80185E24[AF(arg0, u16, 2)]();
    if ((AF(arg0, u16, 0) != 0) && (ActorTouchesPlayer((s32) arg0, 0x1E, 0x64) != 0)) {
        g_PlayerHitFacing = HeadingToPlayer((s32) arg0);
    }
}

void func_sc06_030_801800D4(u8 *arg0) {
    D_sc06_030_80185E2C[AF(arg0, u16, 2)]();
}

void func_sc06_030_80180110(u8 *arg0) {
    AF(arg0, s16, 0xDC) = AF(&D_sc06_030_801B9F00, s16, 0);
    AF(arg0, s16, 0xDE) = AF(&D_sc06_030_801B9F00, s16, 2);
    AF(arg0, s16, 0xE0) = AF(&D_sc06_030_801B9F00, s16, 4);
    AF(arg0, s16, 0xE4) = AF(&D_sc06_030_801B9F08, s16, 0);
    AF(arg0, s16, 0xE6) = AF(&D_sc06_030_801B9F08, s16, 2);
    AF(arg0, s16, 0xE8) = AF(&D_sc06_030_801B9F08, s16, 4);
    AF(arg0, s16, 2)++;
}

void func_sc06_030_8018017C(u8 *arg0) {
    AF(arg0, s16, 0xFC) = AF(&D_sc06_030_801B9F00, s16, 0);
    AF(arg0, s16, 0xFE) = AF(&D_sc06_030_801B9F00, s16, 2);
    AF(arg0, s16, 0x100) = AF(&D_sc06_030_801B9F00, s16, 4);
    AF(arg0, s16, 0x104) = AF(&D_sc06_030_801B9F08, s16, 0);
    AF(arg0, s16, 0x106) = AF(&D_sc06_030_801B9F08, s16, 2);
    AF(arg0, s16, 0x108) = AF(&D_sc06_030_801B9F08, s16, 4);
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, s16, 2)++;
}

void func_sc06_030_801801E8(s32 arg0) {
    func_sc06_030_80180228();
    if (TickTimer(arg0) != 0) {
        FreeActor(arg0);
    }
}

void func_sc06_030_80180228(u8 *o) {
    QuadArg q;
    s32 flag[2];
    s32 otz;
    s16 v;
    s16 h;
    s16 w;
    s16 k;
    u8 *wk = (u8 *)&D_800AF630;

    v = AF(o, s32, 0x1C) * 15;
    h = v >> 1;
    q.c[0].b = q.c[1].b = h;
    q.c[0].r = q.c[1].r = v;
    q.c[0].g = q.c[1].g = v;
    w = v - 0x10;
    if (w < 0) {
        w = 0;
    }
    k = h - 0x10;
    if (k < 0) {
        k = 0;
    }
    q.c[2].b = q.c[3].b = k;
    do {
        q.c[2].r = q.c[3].r = w;
        q.c[2].g = q.c[3].g = w;
    } while (0);
    q.code = 0x50000000;
    gte_SetRotMatrix(wk + 0x18);
    gte_SetTransMatrix(wk + 0x18);
    gte_ldv3(o + 0xFC, o + 0x104, o + 0xDC);
    gte_rtpt();
    gte_stflg(&flag[0]);
    gte_stsxy3(&q.p[0], &q.p[1], &q.p[2]);
    gte_ldv0(o + 0xE4);
    gte_rtps();
    gte_stflg(&flag[1]);
    flag[0] |= flag[1];
    gte_stsxy(&q.p[3]);
    gte_avsz4();
    gte_stotz(&otz);
    if (otz > 0 && flag[0] >= 0 && (u32)(g_WorldOtOrg[D_800B9A02].ot + otz) <= (u32)&g_PadLostFrames && (flag[0] & ~0x1000) == 0) {
        q.p[0].z = otz;
        DrawPrimG4Screen(&q);
    }
}

s32 func_sc06_030_80180438(void) {
    return RequestBgmPack(0x7C) != 0;
}

s32 func_sc06_030_80180458(u8 *o) {
    if (AF(o, s16, 0x10A) != 0) {
        AF(o, s16, 0x10A) = 0;
        return 1;
    }
    return 0;
}

void func_sc06_030_8018047C(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
}

s32 func_sc06_030_8018049C(void) {
    return func_sc06_030_80180C5C() != 0;
}

void func_sc06_030_801804BC(StageActor *arg0) {
    s32 temp_a0;

    temp_a0 = (s32)arg0->ext0;
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x84);
    }
    GainStat0FromActor((s32) arg0);
    FreeActor((s32) arg0);
}

void func_sc06_030_80180508(s32 arg0) {
    s32 temp_v0;

    if (SetupActor(arg0, (s32) &D_sc06_030_80185D14) != 0) {
        temp_v0 = AllocActorModel();
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        AF(arg0, s32, 0xCC) = temp_v0;
        InitModel(temp_v0, (s32) &D_sc06_030_8018E4E4);
        AF(temp_v0, s32, 0x20) = (s32) (*(s32 *)&D_sc06_030_80182184);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x80000000);
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xC4) = 3;
        AF(arg0, s32, 0xB4) = 0;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc06_030_8019EC8C);
        AF(arg0, u8, 0x75) = 0;
        AF(arg0, s32 *, 0xBC) = &D_sc06_030_80185D48;
        SpawnShadow(arg0);
        AF(arg0, s32, 0x48) = 0xFFFE8000;
        UpdateModelZYX(arg0);
        AF(arg0, s32, 0x1C) = 0xF;
    }
}

void EventObjStart(StageActor *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u16 temp_v1;
    void *temp_a0;

    temp_v1 = arg0->stateCount;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((arg0->timer = temp_v0 = arg0->timer - 1) == 0) {
            StartEvent((s32) arg0, (s32) &D_sc06_030_80185C2C, arg2);
            arg0->stateCount = 1U;
            SetScript((s32) arg0, (s32) &D_sc06_030_8019FFA4);
            return;
        }
        return;
    case 1:
        if (IsEventDone((s32) arg0) != 0) {
            EndEvent((s32) arg0);
            arg0->state = 2;
            temp_a0 = (u8 *)arg0 + 0x76;
            func_sc06_030_8017BF08((s32) temp_a0, (s32) temp_a0, 6, 0xD2);
            return;
        }
        if (arg0->index == 0x22) {
            PlaySoundId(0xC7C, 0);
        }
        break;
    }
}

void func_sc06_030_801806D4(u8 *o) {
    if (AF(o, s32, 0x1C) != 0) {
        AF(o, s32, 0x1C)--;
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStepToPlayer(o, 8);
    } else {
        AF(o, s16, 0x34) = 0;
        switch (AF(o, s16, 0xFC)) {
        case 0:
            AF(o, s16, 2) = 3;
            break;
        case 1:
            AF(o, s16, 2) = 4;
            AF(o, s16, 0x106) = AF(o, s16, 0x76);
            break;
        case 2:
            AF(o, s16, 2) = 5;
            break;
        case 3:
            if (AF(o, s16, 0x76) < AF(o, s16, 0x106)) {
                AF(o, s16, 2) = 6;
            } else {
                AF(o, s16, 2) = 3;
            }
            break;
        }
    }
}

void func_sc06_030_801807B4(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc06_030_80185DA0);
    SetScript((s32) arg0, (s32) &D_sc06_030_80185DB8);
    arg0->state = 1;
}

void func_sc06_030_8018081C(StageActor *o) {
    s32 n;
    n = o->timer + 1;
    o->timer = n;
    o->pos[0].w = (o->origin[0] << 16) + o->vel[0] * n;
    o->pos[1].w = (o->origin[1] << 16) + o->vel[1] * o->timer;
    o->pos[2].w = (o->origin[2] << 16) + o->vel[2] * o->timer;
    o->pos[1].w -= rsin(o->timer << 6) << 11;
    if (o->timer == 0x20) {
        o->state = 2;
        o->timer = 0x80;
        PlaySoundId(0x943, 0);
    }
}

void func_sc06_030_801808F0(StageActor *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if ((arg0->timer = temp_v0 = arg0->timer - 1) == 0) {
        arg0->state = 3;
        arg0->timer = 0x1E;
        arg0->animTimer = 1;
        PlaySoundId(0x940, 0, arg2);
    }
}

void func_sc06_030_80180940(StageActor *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_v0;

    temp_v0 = arg0->timer;
    temp_a1 = temp_v0 - 1;
    arg0->timer = temp_a1;
    if (temp_a1 <= 0) {
        arg0->state = 4;
        PlaySoundId(0x941, 0);
        return;
    }
    LoadImage((s32) &D_sc06_030_80185AB0, (s32) (D_sc06_030_80185DC8[((temp_v0 - 1) % 10)] + &D_sc06_030_80185928));
}

extern s32 PosDistSq();
void func_sc06_030_801809DC(StageActor *o) {
    s32 n;
    s32 i;
    u8 *p;

    n = o->timer - 1;
    o->timer = n;
    if (n == 0) {
        FreeActor(o);
    } else if (n == 3) {
        p = (u8 *)&g_Actors;
        for (i = 0; i < 0x60; p += 0x10C, i++) {
            if (AF(p, u16, 0) == 0x30B && AF(p, u16, 2) < 5 && PosDistSq((u8 *)o + 4, p + 4) < 0x6400) {
                AF(p, s16, 2) = 4;
            }
        }
    }
}

void func_sc06_030_80180ABC(StageActor *arg0) {
    ModelObj *temp_a0;
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc06_030_8018F280);
    arg0->reactive = 1;
    arg0->state = 1;
    SpawnShadow((s32) arg0);
    temp_a0 = arg0->model;
    temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x08000000);
    arg0->model->rot.vz = 0x400;
    arg0->timer = 0x78;
}

void func_sc06_030_80180B50(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x300);
    if (MoveCollide((s32) arg0) != 0) {
        FreeActor((s32) arg0);
    }
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        FreeActor((s32) arg0);
    }
}

void func_sc06_030_80180BBC(StageActor *arg0) {
    ModelObj *temp_a0;
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc06_030_8018F000);
    arg0->state = 1;
    arg0->reactive = 1;
    SpawnShadow((s32) arg0);
    temp_a0 = arg0->model;
    temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x08000000);
    arg0->timer = 0x78;
}

s32 func_sc06_030_80180C44(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x6F;
    if (arg0 < 0x514) {
        var_v0 = 0x8A;
    }
    return var_v0;
}

s32 func_sc06_030_80180C5C(void) {
    return RequestBgmPack(0x6F);
}

void func_sc06_030_80180C7C(void) {
    StartPlayerActionScript((s32) &D_sc06_030_801B4C6C, 0x01000000);
}

void func_sc06_030_80180CA4(u8 *arg0) {
    D_sc06_030_801B4C84[AF(arg0, u8, 0x216)]();
}

void func_sc06_030_80180CE0(u8 *o) {
    func_sc06_030_80180FF4(o);
    if (AF(o, s16, 0x210) < 0) {
        AF(o, s16, 0x210) = -0x30;
    } else {
        AF(o, s16, 0x210) = 0x30;
    }
    BumpSub2Copy(o);
}

void func_sc06_030_80180D28(s32 arg0) {
    if (func_sc06_030_801810D0() != 0) {
        PlaySoundId(0x8B1, 0);
        NextPlayerActionHandler(arg0);
    }
}

void func_sc06_030_80180D68(void) {
    StartPlayerActionScript((s32) &D_sc06_030_801B4C8C, 0x01000000);
}

void func_sc06_030_80180D90(u8 *arg0) {
    D_sc06_030_801B4C98[AF(arg0, u8, 0x216)]();
}

void func_sc06_030_80180DCC(u8 *o) {
    u8 *m;
    s16 a;
    s32 c;
    s32 d;
    m = AF(o, u8 *, 0x20);
    func_sc06_030_80180FF4(o);
    if (D_sc06_030_801B9F10 != 0) {
        a = (AF(m, u16, 0x12) + 0x800) & 0xFFF;
        if (AF(AF(D_sc06_030_801B9F10, u8 *, 0x20), u16, 0x12) & 0x400) {
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

void func_sc06_030_80180ED4(s32 arg0) {
    if (func_sc06_030_801810D0() != 0) {
        PlaySoundId(0x8B1, 0);
        BumpSub2Copy(arg0);
    }
}

void func_sc06_030_80180F14(u8 *o) {
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

void func_sc06_030_80180FF4(u8 *o) {
    typedef struct { u8 b[0x10C]; } O10C;
    SV8 v;
    s32 i;
    s32 best;
    u8 *p;
    s16 d;
    best = 0x7FFFFFFF;
    D_sc06_030_801B9F10 = 0;
    for (i = 0; i < 0x60; i++) {
        p = (u8 *)&((O10C *)&g_Actors)[i];
        if (AF(p, u16, 0) == 0x26E) {
            d = PosDist(o + 4, p + 4);
            if (d < best) {
                best = d;
                D_sc06_030_801B9F10 = p;
            }
        }
    }
    AF(o, s16, 0x208) = 0;
    PosToSVec(o + 4, &v);
    WorldToActorLocal(D_sc06_030_801B9F10, &v, o + 0x20C);
    AF(o, u8 *, 0x204) = D_sc06_030_801B9F10;
    PlaySoundId(0x8B0, 0);
}

s32 func_sc06_030_801810D0(u8 *o) {
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

void func_sc06_030_80181164(o)
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
    RotTransSV(&D_sc06_030_801B4CA4, &v, &flag);
    SetRotMatrix(&D_800AF648);
    SetTransMatrix(&D_800AF648);
    z = RotTransPers(&v, &sxy, &p, &flag);
    if (z > 0 && flag >= 0) {
        sx = AF(&sxy, s16, 0);
        sy = AF(&sxy, s16, 2);
        r = (g_CameraProj + 500) * 48 / (z * 4);
        ot = g_WorldOtOrg[D_800B9A02].ot + z;
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
                AF(q, u32, 4) = D_sc06_030_801B4CAC[D_sc06_030_801B4CD8[i]];
                AF(q, u32, 0xC) = D_sc06_030_801B4CAC[D_sc06_030_801B4CD8[i + 1]];
                AF(q, u32, 0x14) = D_sc06_030_801B4CAC[D_sc06_030_801B4CD8[i + 2]];
                AF(q, u32, 0x1C) = D_sc06_030_801B4CAC[D_sc06_030_801B4CD8[i + 3]];
                AF(q, u8, 3) = 8;
                AF(q, u8, 7) = 0x3A;
                AF(q, s16, 8) = x[D_sc06_030_801B4CB8[i]];
                AF(q, s16, 0x10) = x[D_sc06_030_801B4CB8[i + 1]];
                AF(q, s16, 0x18) = x[D_sc06_030_801B4CB8[i + 2]];
                AF(q, s16, 0x20) = x[D_sc06_030_801B4CB8[i + 3]];
                AF(q, s16, 0xA) = y[D_sc06_030_801B4CC8[i]];
                AF(q, s16, 0x12) = y[D_sc06_030_801B4CC8[i + 1]];
                AF(q, s16, 0x1A) = y[D_sc06_030_801B4CC8[i + 2]];
                AF(q, s16, 0x22) = y[D_sc06_030_801B4CC8[i + 3]];
                AddPrim(ot, q);
                j++;
                q += 0x24;
            }
            AddPrim(ot, prim);
        }
    }
}

void func_sc06_030_80181588(StageActor *o) {
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

void func_sc06_030_801818FC(u8 *arg0) {
    D_sc06_030_801B4D2C[AF(arg0, u16, 2)]();
}

void func_sc06_030_80181938(u8 *o) {
    u16 v;
    if (SetupActor(o, &D_sc06_030_801B4D44) != 0) {
        v = AF(o, u16, 0x70);
        if (v & 0x10) {
            v &= ~0x10;
            AF(o, u16, 0x70) = v;
            InitModel(AF(o, u8 *, 0x20), D_sc06_030_801B4D78[(s16)v]);
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x60000040;
        } else {
            InitModel(AF(o, u8 *, 0x20), D_sc06_030_801B4D78[(s16)v]);
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
        SetScript(o, &D_sc06_030_80182184);
        AF(o, u16, 2)++;
        StopWithGravity(o);
        AF(o, s16, 0xAE) = -1;
    }
}

void func_sc06_030_80181A80(StageActor *o) {
    s32 i;
    u8 *p;
    switch (o->stateCount) {
    case 4:
        p = &g_Actors;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x2E7 && AF(p, u16, 2) == 4) {
                InitModel(o->model, &D_sc06_030_801B72B4);
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
            func_sc06_030_80180D68();
        }
        break;
    case 1:
        break;
    case 2:
        p = &g_Actors;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0x2E7 && AF(p, u16, 2) == 4) {
                InitModel(o->model, &D_sc06_030_801B6914);
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

void func_sc06_030_80181C30(StageActor *arg0) {
    D_sc06_030_801B4DA8[arg0->state]();
}

void func_sc06_030_80181C6C(u8 *arg0) {
    D_sc06_030_801B4DE4[AF(arg0, u16, 2)]();
}

void func_sc06_030_80181CA8(StageActor *arg0) {
    ModelObj *temp_v1;

    if (SetupActor(arg0, (s32) &D_sc06_030_801B4CF8) != 0) {
        arg0->reactive = 1;
        AF(arg0, s16, 0xAE) = -1;
        SetScript(arg0, (s32) &D_sc06_030_80182184);
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

void func_sc06_030_80181D50(StageActor *arg0) {
    ModelObj *temp_v1;

    if (SetupActor(arg0, (s32) &D_sc06_030_801B4DB0) != 0) {
        arg0->reactive = 1;
        SetScript(arg0, (s32) &D_sc06_030_80182184);
        temp_v1 = arg0->model;
        arg0->state = (u16) (arg0->state + 1);
        temp_v1->flags = (u16) (temp_v1->flags | 0x10);
        arg0->model->scale.vx = 0xAAA;
        arg0->model->scale.vz = 0xAAA;
    }
}

void func_sc06_030_80181DD4(u8 *arg0) {
    func_sc06_030_80181164();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}
