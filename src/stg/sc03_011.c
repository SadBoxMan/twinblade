#include "common.h"
#include "gte.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_011_8017BE9C(void) {
}

void func_sc03_011_8017BEA4(void) {
}

void func_sc03_011_8017BEAC(void) {
}

void func_sc03_011_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_011_80184D78[])();
extern void func_sc03_011_8017C234();
extern void (*D_sc03_011_80184EB0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_011_8017DD30(void);
extern void StartFade();
extern void (*D_sc03_011_80184EB8[])();
extern s32 FadeStep();
extern void (*D_sc03_011_80184EC4[])();
extern void (*D_sc03_011_80184ED0[])();
void func_sc03_011_8017DBB0(void);
extern void func_800D1EBC();
extern void (*D_sc03_011_80184EDC[])();
extern void (*D_sc03_011_80184F10[])();
extern u8 D_sc03_011_80185010;
extern void StartPlayerActionScript();
extern u8 D_sc03_011_80185044;
extern void (*D_sc03_011_801851E0[])();
extern void func_sc03_011_8017E394();
extern void (*D_sc03_011_801851FC[])();
extern void func_sc03_011_8017E3F0();
extern void (*D_sc03_011_80185280[])();
extern void (*D_sc03_011_80185290[])();
extern void (*D_sc03_011_80185434[])();
extern void (*D_sc03_011_80185458[])();
extern void (*D_sc03_011_80185460[])();
extern void (*D_sc03_011_801854B0[])();
extern void (*D_sc03_011_80185568[])();
extern void (*D_sc03_011_80185804[])();
extern void (*D_sc03_011_801859A8[])();
extern void (*D_sc03_011_80185DC4[])();
extern void (*D_sc03_011_80185DE4[])();

extern void (*D_sc03_011_8018550C[])();
extern void func_sc03_011_801800F8();

extern void FreeProp();
extern void MoveProp();
extern s32 StepSpriteAnim();
extern s32 D_sc03_011_801A2278;
extern s32 D_sc03_011_801A2288;

extern void NextPlayerActionHandler();
extern void func_sc03_011_8017FB78();
extern void func_sc03_011_8017FBFC();
extern void BumpSub2Copy();
extern u8 D_sc03_011_80185EC8;
extern s32 OpenMessage();

extern s32 SpawnEffectOn();
extern s32 func_sc03_011_8017BEBC();
extern void (*D_sc03_011_80184D80[])();
extern void ClearObjPadInput();
extern void PlaySoundId();
extern u8 D_800D5DF4;
extern void SetPlayerMotion();
extern void func_sc03_011_8017C4C4();
extern s32 GetObjPadPressed();
extern void func_sc03_011_8017C6B8();
extern u8 D_80127058;
extern u8 D_800D5E18;
void func_sc03_011_8017C6F4(Player *arg0, s32 arg1);
extern void RestartPlayerMotion();
extern void PlaySe();
extern void SetActionTimer();
extern u8 D_sc03_011_80184D98[];
extern u8 D_sc03_011_80184DA0[];
extern s16 D_sc03_011_801A2270;

s32 func_sc03_011_8017BEBC(s32 arg0, s32 arg1) {
    return SpawnEffectOn(0x29, 0, arg0, arg1);
}

extern void EndEvent();
extern s32 IsEventDone();
s32 func_sc03_011_80180604(s32 arg0);

extern void func_sc03_011_8017DB78();
extern void func_sc03_011_8017DBD8();
extern void SetFlag();
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 D_sc03_011_801A23FC;
extern s32 GetFlag();
extern void ResetSkipSe();
void func_sc03_011_8017EB24(void);
extern void func_sc03_011_8017EB38();
extern void SetPlayerActionFlag02();
extern void SetPlayerActionFlag08();
extern void HitPlayerFatal();
extern s32 GetProgress();
extern void func_80171A10();
extern void func_80171A04();
extern void func_sc03_011_8017E170();
extern void TakePlayerControl();
extern void BlendCameraThen();
extern s32 func_sc03_011_8018032C();
extern s32 FindActorByKind();
extern void DespawnActor();
extern s32 GetVar();
extern u8 D_sc03_011_80185198;
extern void StartPlayerActionScriptArg();
extern u8 D_sc03_011_80185F04;
extern s32 GetMessageAnswer();
extern void CloseMessage();
extern u8 D_sc03_011_80185F44;
extern u8 D_sc03_011_80185F80;
extern u8 D_sc03_011_80185FA8;
extern u8 D_sc03_011_80186068;
extern void func_800D0F4C();
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
extern u8 D_sc03_011_80197608;
extern void StartCameraPan();
extern void SetCameraViewFromList();
extern void ClearCameraUpdate();
extern void StartCameraPanArg();
extern void UpdateClockTint();
extern void func_800D06E8();
extern u8 D_800D387C;
extern u8 D_800D3888;
extern void StartSpriteAnim();
extern void NextState();
extern u8 D_80062BE8;
extern void func_sc03_011_8017EB88();
extern s32 TickTimer();
extern void StartRumbleScript();
extern u8 D_sc03_011_801852D0;
extern u8 D_sc03_011_80185300;
extern void EmitProp23();
extern void DrawFadeWhite();
extern s32 SpawnPropFrom();
extern void CopyPropVel();
extern void FreeActor();
extern u8 D_sc03_011_80185500;
extern s32 AllocActorSprite();
extern void InitSpriteKind2();
extern void SetMoverTimer();
extern void SetState();
extern s32 ResetScriptVM();
extern u8 D_sc03_011_8018570C;
extern void ShowModel();
extern void RunScript();
void func_sc03_011_80180358(u8 *arg0);
extern u8 D_sc03_011_80185818;
extern u8 D_sc03_011_8019EC70;
extern s32 PlaceObject();
extern void SetProgress();
extern void StartDeadline8();
extern u8 D_sc03_011_80185BDC;
extern s32 StartEvent();
extern u8 D_sc03_011_801859BC;
extern u8 D_sc03_011_80185ABC;
extern s32 D_sc03_011_801A2280;
extern s32 D_sc03_011_801A2284;
extern void SetForwardVelocity();
extern void MoveObject();
extern s32 func_sc03_011_801809CC();
extern s32 UpdateScript();
extern void HideModel();
extern u8 g_DayPeriod;
extern void func_800D06CC();

extern void func_sc03_011_8017BEE8();
extern u16 D_800B99DC;
extern u8 D_sc03_011_801819E8;
extern u8 D_sc03_011_80185200;
extern void StartCameraShake();
extern void func_sc03_011_8017E92C();
extern void func_sc03_011_8017E884();
extern s16 D_sc03_011_80185BD8;
extern s16 D_sc03_011_80185BDA;

extern void PlaySePositional();
extern s32 FindEffectByKind();
extern void ZeroFill();
extern void FreeEffect();
extern u8 D_sc03_011_80184FF4;
extern s32 D_sc03_011_801A2238;
extern u8 D_sc03_011_80185024;
extern u8 D_sc03_011_801850B0;

void func_sc03_011_8017BEE8(arg0)
    s32 arg0;
{
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_v0;

    PlaySePositional(4, 0x542);
    PlaySePositional(4, 0x543);
    PlaySePositional(4, 0x541);
    temp_v0 = FindEffectByKind((s32) &g_Player, 0x29);
    if (temp_v0 != 0) {
        temp_a0 = AF(temp_v0, s32, 0x34);
        if (temp_a0 != 0) {
            ZeroFill(temp_a0, 0x38);
        }
        temp_a0_2 = AF(temp_v0, s32, 0x10);
        if (temp_a0_2 != 0) {
            ZeroFill(temp_a0_2, 0x38);
        }
        temp_a0_3 = AF(temp_v0, s32, 0x14);
        if (temp_a0_3 != 0) {
            ZeroFill(temp_a0_3, 0x38);
        }
        temp_a0_4 = AF(temp_v0, s32, 0x18);
        if (temp_a0_4 != 0) {
            ZeroFill(temp_a0_4, 0x38);
        }
        temp_a0_5 = AF(temp_v0, s32, 0x1C);
        if (temp_a0_5 != 0) {
            ZeroFill(temp_a0_5, 0x38);
        }
        FreeEffect(temp_v0);
    }
}

void func_sc03_011_8017BFC8(u8 *arg0) {
    D_sc03_011_80184D78[AF(arg0, u16, 2)]();
}

extern u8 D_sc03_011_80185A14;
extern u8 D_sc03_011_80185DD4;
extern u8 D_sc03_011_8019EBA4;
extern s32 AllocActorModel();
extern void RejectSpawn();
extern void InitModel();
extern void SetModelCullBox();


extern u8 g_PlayerPosX;
extern s32 TurnStep();
extern s32 HeadingTo();
extern s32 *g_PlayerModel;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02;
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
extern void InitSpriteKindA();
extern u8 D_sc03_011_80184C54;
extern u8 D_sc03_011_80184CC4;
extern u8 D_sc03_011_80184D50;
extern u8 D_sc03_011_80184D5C;
extern u8 D_sc03_011_80184D70;
extern s16 D_sc03_011_801A21D0;
extern s16 D_sc03_011_801A21D4;
extern s16 D_sc03_011_801A21D8;
extern u8 D_sc03_011_801A21DC;
extern u8 D_sc03_011_801A21FC;
extern u8 D_sc03_011_801A222C;
extern s32 AllocSprite16To3E();
extern void SjisToGlyphs();
extern void InitTextSprite();

void func_sc03_011_8017C004(u8 *arg0, s32 arg1) {
    s32 o;

    AF(arg0, s32, 0x20) = 0;
    AF(arg0, s32, 0x34) = 0;
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s32, 0x14) = 0;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x1C) = 0;
    o = AllocSprite16To3E((s32) arg0, arg1);
    if (o != 0) {
        AF(arg0, s32, 0x34) = o;
        InitSpriteKindA(o, (s32) &D_sc03_011_80184C54);
        AF(o, s16, 8) = 0x40;
        AF(o, s16, 0xA) = -0x20;
        AF(o, s16, 0x2C) = 1;
        AF(o, s32, 4) = (s32) (AF(o, s32, 4) | 0x40000000);
        o = AllocSprite16To3E();
        if (o != 0) {
            AF(arg0, s32, 0x10) = o;
            SjisToGlyphs((s32) &D_sc03_011_80184D50, (s32) &D_sc03_011_801A21DC);
            InitTextSprite(o, (s32) &D_sc03_011_801A21DC);
            AF(o, s16, 8) = 0x30;
            AF(o, s16, 0xA) = -0x2C;
            AF(o, s16, 0x2C) = 1;
            AF(o, u8, 0x27) = 1;
            o = AllocSprite16To3E();
            if (o != 0) {
                AF(arg0, s32, 0x14) = o;
                InitSpriteKindA(o, (s32) &D_sc03_011_80184CC4);
                AF(o, s16, 8) = -0x40;
                AF(o, s16, 0xA) = -0x20;
                AF(o, s16, 0x2C) = 1;
                o = AllocSprite16To3E();
                if (o != 0) {
                    AF(arg0, s32, 0x18) = o;
                    SjisToGlyphs((s32) &D_sc03_011_80184D5C, (s32) &D_sc03_011_801A21FC);
                    InitTextSprite(o, (s32) &D_sc03_011_801A21FC);
                    AF(o, s16, 8) = -0x58;
                    AF(o, s16, 0xA) = -0x2C;
                    AF(o, s16, 0x2C) = 1;
                    AF(o, u8, 0x27) = 1;
                    o = AllocSprite16To3E();
                    if (o != 0) {
                        AF(arg0, s32, 0x1C) = o;
                        SjisToGlyphs((s32) &D_sc03_011_80184D70, (s32) &D_sc03_011_801A222C);
                        InitTextSprite(o, (s32) &D_sc03_011_801A222C);
                        AF(o, s16, 8) = -0x68;
                        AF(o, s16, 0xA) = -0xC;
                        AF(o, s16, 0x2C) = 1;
                        AF(o, u8, 0x27) = 0xB6;
                        AF(arg0, s16, 0x2A) = 0;
                        AF(arg0, s16, 0x28) = 0;
                        D_sc03_011_801A21D8 = 0;
                        D_sc03_011_801A21D4 = 0;
                        D_sc03_011_801A21D0 = 0;
                        func_sc03_011_8017C234((s32) arg0);
                        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
                    }
                }
            }
        }
    }
}

void func_sc03_011_8017C214(s32 arg0) {
    func_sc03_011_8017C234(arg0);
}

extern u16 D_800B99DA;
extern s16 D_sc03_011_80184C5A;
extern u16 D_sc03_011_80184C5E;
extern s16 D_sc03_011_80184CCA;
extern u16 D_sc03_011_80184CCE;
extern s8 D_sc03_011_80184CD0;
extern s8 D_sc03_011_80184CD1;
extern s8 D_sc03_011_80184CD4;
extern s8 D_sc03_011_80184CD5;
extern s32 EaseValueFrac();

void func_sc03_011_8017C234(u8 *arg0) {
    u16 x;
    s16 d;
    u16 y;
    s16 t;
    s32 c;
    u8 b;
    u16 e;
    s32 w;

    x = *AF(arg0, u16 *, 0x2C);
    d = x - D_sc03_011_801A21D4;
    y = *AF(arg0, u16 *, 0x30);
    if (D_sc03_011_801A21D8 == 0) {
        if (d != 0) {
            if (d > 0) {
                PlaySe(0x542);
            } else {
                PlaySe(0x543);
            }
        }
    } else if (d == 0) {
        PlaySePositional(4, 0x542);
        PlaySePositional(4, 0x543);
    }
    if (D_sc03_011_801A21D0 == 0) {
        PlaySe(0x541);
    }
    if ((s16) y == D_sc03_011_801A21D0) {
        PlaySePositional(4, 0x541);
    }
    w = AF(arg0, s16, 0x28); D_sc03_011_801A21D8 = d; D_sc03_011_801A21D0 = y; t = EaseValueFrac(w, (s16) x, 4, 1);
    AF(arg0, s16, 0x28) = t;
    D_sc03_011_801A21D4 = t;
    D_sc03_011_80184C5A = 0x61 - AF(arg0, u16, 0x28);
    e = AF(arg0, u16, 0x28); D_sc03_011_80184CCA = 0x61 - (u16) D_sc03_011_801A21D0;
    D_sc03_011_80184CCE = D_sc03_011_801A21D0;
    D_sc03_011_80184C5E = e;
    c = rsin((D_800B99DA & 0xF) << 8) / 64 + 0x40;
    b = c; D_sc03_011_80184CD1 = b; D_sc03_011_80184CD5 = b; c += (u8) D_sc03_011_801A21D0;
    D_sc03_011_80184CD0 = c;
    D_sc03_011_80184CD4 = c;
}

void func_sc03_011_8017C404(u8 *arg0) {
    D_sc03_011_80184D80[AF(arg0, u8, 0x216)]();
    ClearObjPadInput((s32) arg0);
}

void func_sc03_011_8017C454(u8 *arg0) {
    PlaySoundId(0x1A, 0);
    AF(arg0, s32, 0x204) = 0;
    EndScene((s32) arg0);
    SetPlayerMotion((s32) arg0, (s32) &D_800D5DF4);
    AF(arg0, s16, 0x20C) = 0;
    AF(arg0, s16, 0x20E) = 0;
    func_sc03_011_8017BEBC((s32) (arg0 + 0x20C), (s32) (arg0 + 0x20E));
    BumpSub2Copy((s32) arg0);
    func_sc03_011_8017C4C4((s32) arg0);
}

void func_sc03_011_8017C4C4(s32 arg0) {
    if (GetObjPadPressed(arg0) & 0x10) {
        AF(arg0, u8, 0x216) = 5;
        return;
    }
    func_sc03_011_8017C6B8(arg0, (s32) AF(arg0, u8, 0x218));
    if (GetObjPadPressed(arg0) & 0x40) {
        BumpSub2Copy(arg0);
    }
}

void func_sc03_011_8017C528(Player *arg0) {
    u16 temp_v0;

    if ((u32) ((u16)arg0->action20E - 0x44) < 0xDU) {
        func_sc03_011_8017C6F4((s32) arg0, (s32) arg0->action218);
        RestartPlayerMotion((s32) arg0, (s32) &D_800D5E18);
        D_80127058 = arg0->action218 + 1;
        PlaySe(0x544);
    } else {
        temp_v0 = (u16)arg0->action20C - 0x10;
        arg0->action20C = temp_v0;
        if ((s16) (temp_v0) < 0) {
            arg0->action20C = 0U;
        }
    }
    SetActionTimer((s32) arg0, 0x10);
    BumpSub2Copy((s32) arg0);
}

typedef struct { s8 b[4]; } B4;
extern s32 TickActionTimer();

void func_sc03_011_8017C5D8(u8 *arg0) {
    s8 v;

    if (TickActionTimer() != 0) {
        if (AF(arg0, s16, 0x20C) == 0x60) {
            v = 4;
        } else {
            v = 1;
            AF(arg0, s16, 0x20E) = 0;
        }
        AF(arg0, u8, 0x216) = v;
    }
}

void func_sc03_011_8017C628(s32 arg0, s32 arg1, s32 arg2) {
    PlaySoundId(0x1B, 0, arg2);
    BeginScene(arg0);
    func_sc03_011_8017BEE8();
    func_80171A04(arg0);
}

void func_sc03_011_8017C670(s32 arg0, s32 arg1, s32 arg2) {
    PlaySoundId(0x1B, 0, arg2);
    BeginScene(arg0);
    func_sc03_011_8017BEE8();
    func_80171A10(arg0);
}

void func_sc03_011_8017C6B8(s32 arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x20E) + D_sc03_011_80184D98[arg1];
    AF(arg0, u16, 0x20E) = temp_v0;
    if ((s16) temp_v0 >= 0x61) {
        AF(arg0, u16, 0x20E) = 0U;
    }
}

void func_sc03_011_8017C6F4(Player *arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = (u16)arg0->action20C + D_sc03_011_80184DA0[arg1];
    arg0->action20C = temp_v0;
    if ((s16) temp_v0 >= 0x61) {
        arg0->action20C = 0x60U;
    }
}

void func_sc03_011_8017C730(u8 *obj) {
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

void func_sc03_011_8017D610(u8 *arg0) {
    D_sc03_011_80184EB0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_011_8017D64C(u8 *arg0) {
    func_sc03_011_8017DD30();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_011_8017D690(u8 *arg0) {
    D_sc03_011_80184EB8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_011_8017D6CC(u8 *arg0) {
    func_sc03_011_8017DB78();
    AF(arg0, s32, 0x28) = 8;
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_011_8017D718(u8 *arg0) {
    s32 temp_v0;

    StartFade(0);
    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc03_011_8017D76C(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc03_011_8017D790(u8 *arg0) {
    D_sc03_011_80184EC4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_011_8017D7CC(u8 *arg0) {
    func_sc03_011_8017DBD8();
    AF(arg0, s32, 0x28) = 0x40;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc03_011_8017D80C(u8 *arg0) {
    D_sc03_011_80184ED0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_011_8017D848(u8 *arg0) {
    func_sc03_011_8017DBB0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 RoomExitStepSetFlag90(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        SetFlag(0x90, 1);
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D0C48(1);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_011_8017D910(void) {
    func_800D1EBC();
}

void func_sc03_011_8017D930(u8 *arg0) {
    D_sc03_011_80184EDC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_011_8017D96C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        if (!(GetFlag(0x90) & 0xFF) || (D_sc03_011_801A23FC != 0)) {
            SetFlag(0x90, 1);
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

void func_sc03_011_8017DA1C(s32 arg0) {
    ResetSkipSe();
    func_sc03_011_8017EB24();
    NextPlayerActionHandler(arg0);
}

void func_sc03_011_8017DA54(u8 *arg0) {
    D_sc03_011_80184F10[AF(arg0, u8, 0x216)]();
}

void func_sc03_011_8017DA90(u8 *arg0) {
    func_sc03_011_8017EB38();
    AF(arg0, s32, 0x200) = 0x78;
    BumpSub2Copy((s32) arg0);
}

void func_sc03_011_8017DAC8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        SetPlayerActionFlag02();
        SetPlayerActionFlag08();
        HitPlayerFatal();
        BumpSub2Copy((s32) arg0);
    }
}

void func_sc03_011_8017DB20(void) {
}

void func_sc03_011_8017DB28(s32 arg0) {
    if ((u32) (GetProgress() - 0x3B6) < 0x32U) {
        func_80171A10(arg0);
        return;
    }
    func_80171A04(arg0);
}

void func_sc03_011_8017DB78(void) {
    D_sc03_011_801A2238 = 0;
    D_sc03_011_801A23FC = 0;
    StartPlayerActionScript((s32) &D_sc03_011_80184FF4, 0x01000000);
}

void func_sc03_011_8017DBB0(void) {
    StartPlayerActionScript((s32) &D_sc03_011_80185010, 0x01000000);
}

void func_sc03_011_8017DBD8(void) {
    D_sc03_011_801A2238 = 0;
    StartPlayerActionScript((s32) &D_sc03_011_80185024, 0x01000000);
}

void func_sc03_011_8017DC08(void) {
    if (GetProgress() == 0x3E8) {
        TakePlayerControl();
        BlendCameraThen((s32) &func_sc03_011_8017E170);
        return;
    }
    TakePlayerControl();
    BlendCameraThen((s32) &func_sc03_011_8017E170);
    func_sc03_011_8018032C();
}

void func_sc03_011_8017DC74(s32 arg0) {
    D_sc03_011_801A23FC = 1;
    NextPlayerActionHandler(arg0);
}

void func_sc03_011_8017DCA0(void) {
    StartPlayerActionScript((s32) &D_sc03_011_80185044, 0x01000000);
}

extern s32 SetScript();
extern s32 SpawnTalkMarker();
extern s32 D_sc03_011_80185820[];
extern u8 D_sc03_011_80185834;
extern s32 * func_sc03_011_8018094C();
extern s32 SpawnActor();
extern u16 g_Day;
extern u8 g_ClockHour;
extern s16 D_800BA2BE;
extern s16 D_800BA30E;
extern s32 D_sc03_011_80185B14[];
extern u8 D_sc03_011_80185B68;
extern s32 D_801269B4;
extern s32 D_sc03_011_80185298[];
extern u8 D_sc03_011_801852A8[];
extern u8 D_sc03_011_801852D8[];
extern u8 D_sc03_011_80185308[];
extern s32 SpawnActorArg();
extern void func_sc03_011_8017F3F0();
extern s32 SpawnProp();
extern s32 rand();
extern void SpawnActorFromDef();
extern u8 D_sc03_011_8019712C;
extern u8 D_sc03_011_8019735C;
extern u8 D_sc03_011_80181594;
extern u8 g_Daytime;
extern s16 D_sc03_011_8018547C;
extern u16 D_sc03_011_8018547E;
extern s32 D_sc03_011_80185480;
extern s32 D_sc03_011_80185484;
extern void func_8001C810();

extern s16 g_PlayerX;
extern s16 D_80126B66;
extern s16 g_PlayerHitKind;
extern s16 g_PlayerHitDamage;
extern u8 D_sc03_011_80185448;
extern s32 func_sc03_011_8017F14C();
void func_sc03_011_8017F0D0(s32 arg0);
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();
extern void RotMatrixZYX();
extern s16 g_CameraFocus;
extern s16 D_80126942;
extern s16 D_80126944;
extern u8 D_sc03_011_80185DDC;

extern WMtx GsIDMATRIX;
extern V4 D_sc03_011_801A0E44;
extern V4 D_sc03_011_801A0E54;
extern SV8 D_sc03_011_801853A8[];

typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;

extern u8 g_Actors[];
extern void func_sc03_011_801805A0();

extern u8 D_sc03_011_80185870;
extern void SetVar();
extern s32 ratan2();
extern s32 DistSqToPlayer();
extern void CallActionHandler();

void func_sc03_011_8017DCC8(u8 *o) {
    if ((GetVar(0xCE) & 0xFF) == 9) {
        func_80171A04(o);
        SetVar(0xCE, 0);
    } else {
        func_80171A10(o);
        SetVar(0xCE, 1);
    }
}

void func_sc03_011_8017DD30(void) {
    D_sc03_011_801A2238 = 0;
    D_sc03_011_801A23FC = 0;
    StartPlayerActionScript((s32) &D_sc03_011_801850B0, 0x01000000);
}

void func_sc03_011_8017DD68(s32 arg0) {
    func_sc03_011_8017FB78();
    NextPlayerActionHandler(arg0);
}

void func_sc03_011_8017DD98(s32 arg0) {
    StageActor *temp_v0;

    temp_v0 = FindActorByKind(0x83);
    if (temp_v0 != 0) {
        DespawnActor(temp_v0);
    }
    func_sc03_011_8017FB78();
    NextPlayerActionHandler(arg0);
}

void func_sc03_011_8017DDE4(s32 arg0) {
    func_sc03_011_8017FBFC();
    NextPlayerActionHandler(arg0);
}

void func_sc03_011_8017DE14(s32 arg0) {
    u32 temp_v0;

    temp_v0 = GetVar(0xCE) & 0xFF;
    if ((temp_v0 != 0) && (temp_v0 < 0xAU)) {
        func_80171A04(arg0);
        return;
    }
    func_80171A10(arg0);
}

void func_sc03_011_8017DE6C(void) {
    StartPlayerActionScriptArg((s32) &D_sc03_011_80185198, 0x01000000, 0);
}

void func_sc03_011_8017DE98(u8 *arg0) {
    D_sc03_011_801851E0[AF(arg0, u8, 0x216)]();
}

void func_sc03_011_8017DED4(u8 *arg0) {
    AF(arg0, s32, 0x198) = OpenMessage((s32) &D_sc03_011_80185EC8);
    BumpSub2Copy((s32) arg0);
}

void func_sc03_011_8017DF14(u8 *arg0) {
    if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        SetFlag(0xBD, 1);
        AF(arg0, s32, 0x198) = OpenMessage((s32) &D_sc03_011_80185F04);
        BumpSub2Copy((s32) arg0);
    }
}

void func_sc03_011_8017DF84(u8 *arg0) {
    if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        AF(arg0, s32, 0x198) = OpenMessage((s32) &D_sc03_011_80185F44);
        BumpSub2Copy((s32) arg0);
    }
}

void func_sc03_011_8017DFE4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = GetMessageAnswer(AF(arg0, s32, 0x198));
    if (temp_v0 != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        if ((temp_v0 == 1) || (temp_v0 != 2)) {
            AF(arg0, s32, 0x198) = OpenMessage((s32) &D_sc03_011_80185F80);
            BumpSub2Copy((s32) arg0);
            return;
        }
        AF(arg0, s32, 0x198) = OpenMessage((s32) &D_sc03_011_80185FA8);
        AF(arg0, u8, 0x216) = 5;
    }
}

void func_sc03_011_8017E08C(u8 *arg0) {
    if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = OpenMessage((s32) &D_sc03_011_80186068);
        BumpSub2Copy((s32) arg0);
    }
}

void func_sc03_011_8017E0EC(u8 *arg0) {
    if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        BumpSub2Copy((s32) arg0);
    }
}

void func_sc03_011_8017E13C(s32 arg0) {
    func_800D0F4C(0x67);
    NextPlayerActionHandler(arg0);
}

void func_sc03_011_8017E170(void) {
    g_CameraProjTarget = 0x1F4;
    g_CameraProj = 0x1F4;
    g_CameraDistTarget = 0x384;
    g_CameraAngleTarget = 0x71;
    D_8012696A = 0x800;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc03_011_8017E394, 0);
    SnapCamera((s32) &g_Camera);
    func_sc03_011_8017E394((s32) &g_Camera);
}

void func_sc03_011_8017E214(void) {
    g_CameraProj = 0x1F4;
    StartCameraPan((s32) &D_sc03_011_80197608);
}

extern s32 D_sc03_011_801856D0[];
extern u8 D_sc03_011_801856C8;
s32 func_sc03_011_80180598(void);
extern u16 D_sc03_011_801854C2[];
extern u16 D_sc03_011_801854D0[];
extern u16 D_sc03_011_801854E0[];
extern u16 D_sc03_011_801854F0[];
extern s32 ActorSegmentHitsPlayer();
void func_sc03_011_8017F370(u8 *o);
extern u16 D_800B99D8;
extern u8 D_sc03_011_80185558;
extern s32 D_sc03_011_80185518[];
extern s32 D_sc03_011_80185528[];
extern s32 D_sc03_011_80185538[];
extern s32 D_sc03_011_80185548[];
s32 func_sc03_011_801801E0(u8 *arg0, s32 *t);

extern void func_sc03_011_8017FC44();
extern u8 D_sc03_011_801A0E34;
extern u8 D_sc03_011_801A0E3C;
extern s32 D_80126984;
extern s32 D_80126988;
extern s32 D_8012698C;
extern s32 D_80126990;
extern s32 D_80126994;
extern s32 D_80126998;
extern u8 D_sc03_011_801A0E64;
extern void FaceHelper();
extern void SVecToPos();
extern void InitNullModel();
extern void UpdateModelZYX();
extern void SetLocalVelocity();
extern u8 D_sc03_011_80185948;
extern void func_sc03_011_8017ECD4(u8 *o);
extern u8 D_80062BC0;

void func_sc03_011_8017E248(void) {
    SV8 a;
    SV8 b;

    *(B8 *)&a = *(B8 *)&D_sc03_011_801A0E34;
    *(B8 *)&b = *(B8 *)&D_sc03_011_801A0E3C;
    D_80126984 = a.x;
    D_80126988 = a.y;
    D_8012698C = a.z;
    D_80126990 = b.x;
    D_80126994 = b.y;
    D_80126998 = b.z;
}

void func_sc03_011_8017E2F0(void) {
    SetCameraViewFromList((s32) &g_Camera, (s32) &D_sc03_011_80197608, 0);
    ClearCameraUpdate();
}

void func_sc03_011_8017E328(void) {
    g_CameraProj = 0x1F4;
    StartCameraPanArg((s32) &D_sc03_011_80197608, 0xC7);
}

void func_sc03_011_8017E35C(void) {
    SetCameraViewFromList((s32) &g_Camera, (s32) &D_sc03_011_80197608, 0xC7);
    ClearCameraUpdate();
}

void func_sc03_011_8017E394(s32 arg0) {
    D_sc03_011_801851FC[AF(arg0, u8, 4)]();
}

void func_sc03_011_8017E3D0(s32 arg0) {
    func_sc03_011_8017E3F0(arg0);
}

void func_sc03_011_8017E3F0(u8 *o) {
    MtxDCM m;
    SV8 v;
    SV8 q;
    s16 *y;

    AF(o, s32, 8) = (s16) EaseValue(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16) EaseValue(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = EaseAngle(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = EaseAngle(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = EaseAngle(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = EaseValue(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = EaseValue(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = EaseValue(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    if (g_CameraFocus > 0x370) {
        q.x = 0x370;
    } else {
        q.x = g_CameraFocus;
    }
    y = &D_80126942;
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + q.x;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + *y;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + D_80126944;
    RotMatrixZYX(o + 0x18, &m);
    m.t[0] = AF(o, s16, 0x28) + q.x;
    m.t[1] = AF(o, s16, 0x2A) + *y;
    m.t[2] = AF(o, s16, 0x2C) + D_80126944;
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    LocalToWorld(&m, &v, &q);
    AF(o, s32, 0x3C) = q.x;
    AF(o, s32, 0x40) = q.y;
    AF(o, s32, 0x44) = q.z;
}

void RoomFrame(void) {
    UpdateClockTint();
    if (((GetVar(0xCE) & 0xFF) != 9) && !(GetFlag(0x95) & 0xFF) && (GetFlag(0x90) & 0xFF)) {
        func_800D06E8();
    }
}

void func_sc03_011_8017E620(StageActor *arg0) {
    D_sc03_011_80185280[arg0->state]();
}

void func_sc03_011_8017E65C(StageActor *o) {
    SpawnDef d;
    ModelObj *m;
    s32 n;
    s32 one;

    m = AllocActorModel();
    n = m;
    o->model = m;
    if (m == 0) {
        RejectSpawn(o);
        return;
    }
    if (o->param == 0) {
        InitModel(m, &D_sc03_011_8019712C);
        SetModelCullBox(m, 0x1000, 0x1000);
        d.kind = 0xBD;
        one = 1;
        d.flags = one;
        d.unk8 = one;
        o->message = 0;
        SpawnActorFromDef(&d, o);
        if ((GetVar(0xCE) & 0xFF) == 9) {
            AF(o, s16, 0xDE) = 0x40;
            o->pos[0].h.i = -0x40;
            AF(o, s16, 0xE4) = 0xD0;
            AF(o, s16, 0xE0) = one;
            o->state = 2;
        } else {
            o->state++;
        }
    } else {
        InitModel(n, &D_sc03_011_8019735C);
        SetModelCullBox(n, 0x1000, 0x1000);
        o->pos[0].h.i = o->parent->pos[0].h.i;
        o->pos[1].h.i = o->parent->pos[1].h.i;
        o->pos[2].h.i = o->parent->pos[2].h.i;
        o->state = 3;
    }
    AF(o, s16, 0xE0) = 3;
    AF(o, s16, 0xE2) = 1;
    SetScript(o, &D_sc03_011_80181594);
}

void func_sc03_011_8017E7C8(void) {
}

void func_sc03_011_8017E7D0(StageActor *arg0) {
    s32 *var_s0;
    s16 temp_v0;
    u16 temp_v0_2;
    u32 var_s1;

    temp_v0 = AF(arg0, s16, 0xE4);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xE4) = (s16) (temp_v0 - 1);
        temp_v0_2 = AF(arg0, u16, 0xE2) - 1;
        AF(arg0, u16, 0xE2) = temp_v0_2;
        if ((temp_v0_2 << 0x10) == 0) {
            AF(arg0, u16, 0xE2) = (u16) ((D_800B99DC & 3) + 7);
            StartCameraShake((s32) &D_sc03_011_801819E8);
        }
    }
    func_sc03_011_8017E92C((s32) arg0);
    var_s1 = 0;
    var_s0 = &D_sc03_011_80185200;
    do {
        func_sc03_011_8017E884((s32) arg0, (s32) var_s0);
        var_s1 += 1;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x10);
    } while (var_s1 < 8U);
}

void func_sc03_011_8017E884(u8 *o, u8 *d) {
    u8 *p;
    u8 *q;
    s32 v;

    if (--AF(d, s32, 8) == 0) {
        AF(d, s32, 8) = 4;
        p = (u8 *)SpawnPropFrom(o, 0x26);
        if (p != 0) {
            v = AF(d, s32, 0xC) << 12;
            q = AF(p, u8 *, 0x20);
            AF(q, s16, 0x18) = AF(q, s16, 0x1A) = AF(q, s16, 0x18) = v; /* the original stores 0x18 twice (0x18, 0x1A, 0x18), as 8017E92C below: likely a 0x1C typo in its source (unmarked: LuciDin 14 Nov, r687b) */
            AF(p, s16, 6) = AF(d, u16, 0);
            AF(p, s16, 0xA) = AF(d, u16, 2);
            AF(p, s16, 0xE) = AF(d, u16, 4);
            AF(p, s32, 0x14) = 0xFFE40000;
        }
    }
}

void func_sc03_011_8017E918(StageActor *arg0) {
    arg0->pos[0].h.i = (u16) AF(arg0->parent, u16, 0xDE);
}

void func_sc03_011_8017E92C(u8 *o) {
    u16 r;
    u16 d;
    s32 x;
    s32 z;
    u8 *p;
    u8 *q;

    r = D_800B99DC;
    d = D_800B99D8;
    for (x = -0x40; x < 0x40; x += 5) {
        for (z = -0x30; z < 0x30; d++) {
            z += (r & 0x1F) + 8;
            if (--AF(o, s16, 0xE0) == 0) {
                AF(o, s16, 0xE0) = (r & 0x1F) + 8;
                p = (u8 *)SpawnPropFrom(o, 0x26);
                if (p == 0) {
                    return;
                }
                q = AF(p, u8 *, 0x20);
                AF(q, s16, 0x18) = AF(q, s16, 0x1A) = AF(q, s16, 0x18) = 0x6000;
                AF(p, s16, 6) = x;
                AF(p, s16, 0xE) = z;
                AF(p, s16, 0xA) = AF(o, s16, 0xA);
                AF(p, s32, 0x14) = 0xFFC40000;
            }
            r += d;
        }
    }
}

void func_sc03_011_8017EA24(u8 *arg0) {
    D_sc03_011_80185290[AF(arg0, u16, 2)]();
}

void func_sc03_011_8017EA60(u8 *arg0) {
    void *temp_a0;

    AF(AF(arg0, void *, 0x20), s32 *, 0x20) = &D_800D387C;
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    AF(AF(arg0, void *, 0x20), u8, 0x27) = 0x9C;
    StartSpriteAnim((s32) AF(arg0, void *, 0x20), (s32) (arg0 + 0x24), (s32) &D_800D3888);
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_011_8017EAE0(s32 arg0, s32 arg1) {
    MoveProp(arg0, arg1);
    if (StepSpriteAnim(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) {
        FreeProp(arg0);
    }
}

void func_sc03_011_8017EB24(void) {
    D_sc03_011_801A2270 = 1;
}

void func_sc03_011_8017EB38(void) {
    D_sc03_011_801A2270 = 2;
}

void func_sc03_011_8017EB4C(StageActor *arg0) {
    D_sc03_011_80185434[arg0->state]();
}

void func_sc03_011_8017EB88(o)
    u8 *o;
{
    s32 i;
    s16 c;
    u8 *e;

    for (i = 0; i < 4; i++) {
        if (D_sc03_011_80185298[i] < D_801269B4) {
            break;
        }
    }
    EmitProp23(o + 0x100, &D_sc03_011_801852A8[i * 8], &D_sc03_011_801852D8[i * 8], 0);
    if (!(AF(o, u16, 0x100) & 3)) {
        c = AF(o, s16, 0xFC);
        if (c < (i + 1) * 4) {
            AF(o, s16, 0xFC) = c + 1;
            e = &D_sc03_011_80185308[c * 8];
            AF(o, u16, 6) = AF(e, u16, 0);
            AF(o, u16, 0xA) = AF(e, u16, 2);
            AF(o, u16, 0xE) = AF(e, u16, 4);
            SpawnActorArg(0xCE, AF(e, s16, 6), o);
        }
        if (AF(o, s16, 0xE8) == 0) {
            PlaySoundId(0x67E, 0);
        }
    }
    if (!(AF(o, u16, 0x100) & 0xF)) {
        func_sc03_011_8017F3F0(&D_sc03_011_801852A8[i * 8], &D_sc03_011_801852D8[i * 8], 0xFFF80000, 0x80000);
    }
}

void func_sc03_011_8017ECD4(u8 *o) {
    WMtx m;
    V4 a;
    V4 b;
    u8 *p;
    s32 i;

    a = D_sc03_011_801A0E44;
    b = D_sc03_011_801A0E54;
    AF(o, s16, 0xE) = 0;
    AF(o, s16, 6) = 0;
    AF(o, s16, 0xA) = -0x890;
    for (i = 0; i < 16; i++) {
        p = (u8 *)SpawnPropFrom(o, 0x23);
        if (p != 0) {
            AF(p, s16, 0x34) = 0x7001;
            m = GsIDMATRIX;
            RotMatrixY(i * 0x100, &m);
            ApplyMatrixLV(&m, &a, p + 0x10);
            MoveProp(p);
        }
        p = (u8 *)SpawnPropFrom(o, 0x22);
        if (p != 0) {
            AF(p, s16, 0x34) = 0x7003;
            RotMatrixY(i * 0x100 + 0x80, &m);
            ApplyMatrixLV(&m, &b, p + 0x10);
            MoveProp(p);
        }
    }
    for (i = 0; i < 4; i++) {
        p = (u8 *)SpawnPropFrom(o, 0x24);
        if (p != 0) {
            AF(p, s16, 6) += D_sc03_011_801853A8[i].x;
            AF(p, s16, 0xA) += D_sc03_011_801853A8[i].y;
            AF(p, s16, 0xE) += D_sc03_011_801853A8[i].z;
            AF(p, s32, 0x2C) = D_sc03_011_801853A8[i].pad << 16;
            AF(p, s32, 0x30) = 0x80000;
        }
    }
    AF(o, s16, 0xE8) = 1;
    PlaySoundId(0x67D, 0);
}

void func_sc03_011_8017EF28(StageActor *o) {
    s16 dx;
    s16 dz;
    s32 p;
    s32 d;

    dx = g_PlayerX - (u16)o->pos[0].h.i;
    if (dx < 0) {
        dx = -dx;
    }
    dz = D_80126B66 - (u16)o->pos[2].h.i;
    if (dz < 0) {
        dz = -dz;
    }
    if (dx <= 0x200 && dz <= 0x200) {
        if (o->timer++ & 1) {
            p = SpawnPropFrom(o, 0x22);
            if (p != 0) {
                CopyPropVel(p, o);
                AF(p, s16, 0x34) = 0x4000;
            }
        }
        if (func_sc03_011_8017F14C(o, &D_sc03_011_80185448) != 0) {
            s16 *q = &g_PlayerHitKind;
            g_PlayerHitDamage = 0xC;
            *q |= 0x4000;
        }
        if (o->timer & 3) {
            return;
        }
        d = dx * dx + dz * dz;
        if (d <= 0x30000) {
            PlaySoundId(0x645, (u16)(((0x30000 - d) * 0x7F / 0x30000) | 0x1000));
            o->unkFC = 1;
            return;
        }
    }
    func_sc03_011_8017F0D0((s32)o);
}

void func_sc03_011_8017F0D0(s32 arg0) {
    if (AF(arg0, s16, 0xFC) != 0) {
        PlaySoundId(4, 0x645);
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc03_011_8017F110(StageActor *arg0) {
    D_sc03_011_80185458[arg0->state]();
}

s32 func_sc03_011_8017F14C(StageActor *a0, u8 *b) {
    SV8 v;
    SV8 w;

    v.z = 0;
    w.z = AF(b, s16, 0xE);
    v.y = w.y = AF(b, s16, 8);
    v.x = w.x = (s16)AF(b, u16, 4) >> 1;
    if (ActorSegmentHitsPlayer(a0, &v, &w) != 0) {
        return 1;
    }
    v.x = w.x = (s16)AF(b, u16, 6) >> 1;
    if (ActorSegmentHitsPlayer(a0, &v, &w) != 0) {
        return 1;
    }
    v.y = w.y = AF(b, s16, 0xA);
    if (ActorSegmentHitsPlayer(a0, &v, &w) != 0) {
        return 1;
    }
    v.x = w.x = (s16)AF(b, u16, 4) >> 1;
    if (ActorSegmentHitsPlayer(a0, &v, &w) == 0) {
        return 0;
    }
    return 1;
}

void func_sc03_011_8017F240(StageActor *arg0) {
    D_sc03_011_80185460[arg0->state]();
}

void func_sc03_011_8017F27C(u8 *o) {
    u8 *p;

    if (AF(o, u16, 2) == 0) {
        func_sc03_011_8017F370(o);
        AF(o, s16, 2)++;
        return;
    }
    MoveProp(o);
    AF(o, s32, 0x1C)++;
    AF(o, s32, 0x14) += 0x18000;
    if (D_801269B4 + 0x180 < AF(o, s16, 0xA)) {
        FreeProp(o);
        return;
    }
    if (AF(o, s32, 0x1C) & 1) {
        p = (u8 *)SpawnProp(0x22);
        if (p != 0) {
            AF(p, s16, 6) = AF(o, s16, 6);
            AF(p, s16, 0xA) = AF(o, s16, 0xA);
            AF(p, s16, 0xE) = AF(o, s16, 0xE);
            AF(p, s16, 0x34) = 0x3000;
        }
    }
}

void func_sc03_011_8017F370(u8 *o) {
    WMtx m;
    V3 v;

    v.x = 0;
    v.y = AF(o, s32, 0x2C);
    v.z = AF(o, s32, 0x30);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (ratan2(-AF(o, s16, 0xE), AF(o, s16, 6)) + 0x400) & 0xFFF;
    RotMatrixZYX(AF(o, u8 *, 0x20) + 0x10, &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
}

void func_sc03_011_8017F3F0(SV8 *p, SV8 *r, s32 a, s32 b) {
    u8 *o;

    o = (u8 *)SpawnProp(0x24);
    if (o != 0) {
        AF(o, s16, 6) = p->x + rand() % (r->x * 2) - r->x;
        AF(o, s16, 0xA) = p->y + rand() % (r->y * 2) - r->y;
        AF(o, s16, 0xE) = p->z + rand() % (r->z * 2) - r->z;
        AF(o, s32, 0x2C) = a;
        AF(o, s32, 0x30) = b;
    }
}

void func_sc03_011_8017F54C(StageActor *arg0, s32 arg1) {
    D_sc03_011_801A2270 = 0;
    arg0->unkFC = 0;
    AF(arg0, s16, 0xE8) = 0;
    arg0->work104 = 0;
    arg0->timer = 0x10;
    NextState((s32) arg0, arg1);
}

void func_sc03_011_8017F584(u8 *o) {
    if (D_sc03_011_801A2270 & 0xFFFF) {
        func_sc03_011_8017EB88();
        if ((u16)D_sc03_011_801A2270 == 2 && TickTimer(o)) {
            func_sc03_011_8017ECD4(o);
            AF(o, s32, 0x1C) = 0x10;
            NextState(o);
            StartRumbleScript(&D_80062BE8);
        } else if (AF(o, s16, 0x104) != 0) {
            AF(o, s16, 0x104)--;
        } else {
            StartRumbleScript(&D_80062BC0);
            AF(o, s16, 0x104) = (rand() & 3) + 8;
        }
    }
}

void func_sc03_011_8017F64C(s32 arg0) {
    func_sc03_011_8017EB88();
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 0x104) = 0;
        AF(arg0, s32, 0x1C) = 0x18;
        NextState(arg0);
    }
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        StartRumbleScript((s32) &D_80062BE8);
    }
}

void func_sc03_011_8017F6B8(s32 arg0) {
    func_sc03_011_8017EB88();
    EmitProp23(arg0 + 0x102, (s32) &D_sc03_011_801852D0, (s32) &D_sc03_011_80185300, 0);
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 0xFE) = 0;
        NextState(arg0);
    }
}

void func_sc03_011_8017F718(StageActor *arg0) {
    u16 temp_v0;

    func_sc03_011_8017EB88();
    EmitProp23((u8 *)arg0 + 0x102, (s32) &D_sc03_011_801852D0, (s32) &D_sc03_011_80185300, 0);
    temp_v0 = (u16)arg0->workFE + 3;
    arg0->workFE = temp_v0;
    if ((s16) temp_v0 >= 0x100) {
        arg0->workFE = 0xFFU;
    }
    DrawFadeWhite((s32) (u8) (u16)arg0->workFE, 0);
}

void func_sc03_011_8017F790(u8 *o) {
    V3 v;
    s32 m;

    if ((GetVar(0xCD) & 0xFF) || (m = AllocActorModel(), AF(o, s32, 0x20) = m, m == 0)) {
        RejectSpawn(o);
        return;
    }
    InitNullModel(m);
    AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x400;
    AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x400;
    UpdateModelZYX(o);
    v.x = v.y = 0;
    v.z = 0xE0000;
    SetLocalVelocity(o, &v);
    AF(o, s32, 0x58) = (s32)&D_sc03_011_80185448 | 0x40000000;
    AF(o, s16, 0x5C) = 0x800;
    NextState(o);
}

void func_sc03_011_8017F84C(u8 *o) {
    V3 v;
    s32 m;
    u8 *p;

    m = AllocActorModel();
    AF(o, s32, 0x20) = m;
    if (m == 0) {
        RejectSpawn(o);
        return;
    }
    InitNullModel(m);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = (ratan2(-AF(o, s16, 0xE), AF(o, s16, 6)) + 0x400) & 0xFFF;
    AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(o, u16, 0x70);
    UpdateModelZYX(o);
    v.x = v.y = 0;
    v.z = 0x180000;
    SetLocalVelocity(o, &v);
    NextState(o);
    p = (u8 *)SpawnPropFrom(o, 0x23);
    if (p != 0) {
        AF(p, s16, 0x34) = 0x4000;
        AF(o, s32, 0x1C) = 8;
    }
}

void func_sc03_011_8017F910(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (TickTimer(arg0, arg1, arg2, arg3) != 0) {
        NextState(arg0);
        AF(arg0, s32, 0x1C) = 0x40;
    }
}

void func_sc03_011_8017F950(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s32, 0x1C) & 1) {
        temp_v0 = SpawnPropFrom((s32) arg0, 0x22);
        if (temp_v0 != 0) {
            CopyPropVel(temp_v0, (s32) arg0);
            AF(temp_v0, s16, 0x34) = 0x3000;
        }
    }
    if (TickTimer((s32) arg0) != 0) {
        FreeActor((s32) arg0);
    }
}

void func_sc03_011_8017F9CC(StageActor *o) {
    s16 *p;
    ModelObj *m;

    p = &D_sc03_011_8018547C;
    AF(o, s16 *, 0x78) = p;
    if (g_Daytime == 0) {
        o->hp = p[0] * 24 / 16;
    } else {
        o->hp = p[0];
    }
    AF(o, s16, 0x5C) = D_sc03_011_8018547E;
    if (D_sc03_011_80185480 != 0) {
        m = AllocActorModel();
        o->model = m;
        if (m == 0) {
            RejectSpawn(o);
            return;
        }
        func_8001C810(m, D_sc03_011_80185480);
    }
    if (D_sc03_011_80185484 != 0) {
        o->hitData = D_sc03_011_80185484 | 0x60000000;
    }
    o->model->unk04 |= 0x8040;
    o->reactive = 1;
    o->reactMask = 1;
    SetScript(o, &D_sc03_011_80181594);
    o->state = 1;
    o->targetClass = 8;
    SpawnActor(0xE1, o);
    o->model->scale.vx = 0xCCC;
    o->model->scale.vy = 0xCCC;
    o->model->scale.vz = 0xCCC;
    o->model->flags |= 0x10;
}

void func_sc03_011_8017FB3C(StageActor *arg0) {
    D_sc03_011_801854B0[arg0->state]();
}

void func_sc03_011_8017FB78(void) {
    u8 *p;
    s16 i;

    p = g_Actors;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0xBE) {
            AF(p, s16, 2) = 2;
            func_sc03_011_8017FC44(p);
        }
    }
}

void func_sc03_011_8017FBFC(void) {
    u8 *p = g_Actors;
    s16 i;
    for (i = 0; i < 0x60; i++) {
        if (AF(p, u16, 0) == 0xBE) {
            AF(p, s16, 2) = 3;
        }
        p += 0x10C;
    }
}

void func_sc03_011_8017FC44(u8 *o) {
    s32 i;
    u8 *p;
    u8 *q;

    for (i = 1; i < 7; i++) {
        p = (u8 *)SpawnPropFrom(o, 0x26);
        if (p == 0) {
            return;
        }
        q = AF(p, u8 *, 0x20);
        AF(q, s16, 0x18) = AF(q, s16, 0x1A) = AF(q, s16, 0x1C) = 0x4000;
        AF(p, s16, 6) = AF(o, s16, 6) + D_sc03_011_801854C2[i - 1];
        AF(p, s16, 0xA) = AF(o, s16, 0xA) + D_sc03_011_801854D0[i];
        AF(p, s16, 0xE) = AF(o, s16, 0xE) + D_sc03_011_801854E0[i];
        AF(p, s16, 0x12) = D_sc03_011_801854F0[i];
        AF(p, s16, 0x1A) = -0x40;
    }
}

void func_sc03_011_8017FD28(void) {
}

void func_sc03_011_8017FD30(StageActor *arg0, s32 arg1, s32 arg2) {
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_v0;
    ModelObj *temp_a0;
    ModelObj *temp_v0_2;
    ModelObj *temp_v1;

    temp_v0 = arg0->timer;
    if (temp_v0 == 0) {
        if (arg0->unk84 == 0) {
            PlaySoundId(0x54F, 0, arg2);
            arg0->unk84 = 1;
        }
        temp_v0_2 = arg0->model;
        temp_v0_2->rot.vx = (u16) ((u16)temp_v0_2->rot.vx & 0xFFF);
        temp_v0_3 = (s16) (u16)arg0->model->rot.vx;
        if ((temp_v0_3 != 0) && (temp_v0_3 < 0xC01)) {
            arg0->state = 1;
            arg0->unk84 = 0;
            return;
        }
        if ((s16) (u16)arg0->model->rot.vx == 0xF70) {
            arg0->timer = 0xA;
        }
        temp_a0 = arg0->model;
        temp_v0_4 = (s16) (u16)temp_a0->rot.vx;
        if (temp_v0_4 < 0xF81) {
            temp_a0->rot.vx = (u16) (temp_v0_4 - 0x10);
            return;
        }
        temp_a0->rot.vx = (u16) (temp_v0_4 - 0x40);
        return;
    }
    temp_v1 = arg0->model;
    arg0->timer = (s32) (temp_v0 - 1);
    temp_v1->rot.vx = (u16) ((u16)temp_v1->rot.vx + 4);
}

void func_sc03_011_8017FE30(StageActor *arg0, s32 arg1, s32 arg2) {
    s16 temp_v1_2;
    ModelObj *temp_a1;
    ModelObj *temp_v1;
    ModelObj *temp_v1_3;

    temp_v1 = arg0->model;
    temp_v1->rot.vx = (u16) ((u16)temp_v1->rot.vx & 0xFFF);
    temp_a1 = arg0->model;
    temp_v1_2 = (s16) (u16)temp_a1->rot.vx;
    if ((temp_v1_2 == 0) || (temp_v1_2 < 0x101)) {
        arg0->state = 1;
        arg0->model->rot.vx = 0U;
        arg0->unk84 = 0;
        return;
    }
    if (temp_v1_2 < 0xF81) {
        temp_a1->rot.vx = (u16) (temp_v1_2 + 0x10);
        return;
    }
    if ((arg0->unk84 == 0) && (temp_v1_2 >= 0xF88)) {
        PlaySoundId(0x550, 0, arg2);
        arg0->unk84 = 1;
    }
    temp_v1_3 = arg0->model;
    temp_v1_3->rot.vx = (u16) ((u16)temp_v1_3->rot.vx + 4);
}

void func_sc03_011_8017FEF8(StageActor *arg0) {
    D_sc03_011_8018550C[arg0->state]();
    func_sc03_011_801800F8((s32) arg0);
}

void func_sc03_011_8017FF48(StageActor *arg0) {
    s32 temp_s1;
    ModelObj *temp_v0;

    temp_s1 = GetProgress();
    temp_v0 = AllocActorSprite();
    if (temp_v0 != 0) {
        arg0->model = temp_v0;
        InitSpriteKind2(temp_v0, (s32) &D_sc03_011_80185500, 0x2F0, 0x198);
        AF(temp_v0, u8, 0x27) = 0x3C;
        if (((u32) (temp_s1 - 0x3B6) < 0x32U) && !(GetFlag(0xBD) & 0xFF)) {
            temp_v0->unk04 = (s32) ((s32)temp_v0->unk04 | 0x80000000);
        }
        NextState((s32) arg0);
    }
}

void func_sc03_011_8017FFF0(u8 *arg0) {
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    if (((u32) (GetProgress() - 0x3B6) < 0x32U) && (GetFlag(0xBD) & 0xFF) && (AF(temp_s0, s32, 4) < 0)) {
        PlaySoundId(0x854, 0);
        AF(temp_s0, s32, 4) = (s32) (AF(temp_s0, s32, 4) & 0x7FFFFFFF);
    }
    if (D_80127058 != 0) {
        SetMoverTimer((s32) arg0, 0x10);
        NextState((s32) arg0);
    }
}

void func_sc03_011_8018009C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) ((AF(temp_v1, u16, 0x14) - 0x71) & 0xFFF);
    if (TickTimer((s32) arg0, arg1, arg2, arg3) != 0) {
        D_80127058 = 0;
        SetState((s32) arg0, 1);
    }
}

void func_sc03_011_801800F8(u8 *o) {
    SV8 a;
    SV8 b;

    *(B8 *)&a = *(B8 *)&D_sc03_011_801A0E64;
    FaceHelper(AF(o, u8 *, 0x64), &a, &b);
    SVecToPos(&b, o + 4);
    AF(AF(o, u8 *, 0x20), s16, 0x10) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x10);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
}

void func_sc03_011_801801A4(StageActor *arg0) {
    D_sc03_011_80185568[arg0->state]();
}

s32 func_sc03_011_801801E0(u8 *arg0, s32 *t) {
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

void func_sc03_011_80180228(StageActor *o) {
    s32 n;
    ModelObj *m;

    n = GetProgress();
    m = AllocActorModel();
    o->model = m;
    if (m == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(m, 0);
    AF(o, u8 *, 0x58) = &D_sc03_011_80185558;
    o->hitState = 0x80;
    o->state++;
    switch (o->param) {
    case 0:
    default:
        if (n >= 900) {
            o->message = func_sc03_011_801801E0(o, D_sc03_011_80185538);
        } else if (n >= 600) {
            o->message = func_sc03_011_801801E0(o, D_sc03_011_80185528);
        } else if (n >= 200) {
            o->message = func_sc03_011_801801E0(o, D_sc03_011_80185518);
        }
        break;
    case 1:
        if ((u32)(n - 0x3B6) < 0x32U) {
            o->message = func_sc03_011_801801E0(o, D_sc03_011_80185548);
        }
        break;
    }
}

void func_sc03_011_80180324(void) {
}

s32 func_sc03_011_8018032C(void) {
    AF(FindActorByKind(0x106), s16, 2) = 2;
    return ResetScriptVM();
}

void func_sc03_011_80180358(u8 *arg0) {
    AF(arg0, s16, 2) = 4;
}

void func_sc03_011_80180364(StageActor *arg0) {
    D_sc03_011_80185804[arg0->state]();
}

void func_sc03_011_801803A0(void) {
    D_sc03_011_801A2278 = 0;
}

void func_sc03_011_801803B0(void) {
    D_sc03_011_801A2278++;
    if (D_sc03_011_801A2278 % 10 == 0) {
        PlaySoundId(0xB3D, 0);
    }
}

void func_sc03_011_80180414(void) {
}

void func_sc03_011_8018041C(StageActor *arg0, s32 arg1, s32 arg2) {
    arg0->state = 3;
    ShowModel((s32) arg0, arg1, arg2);
    SetScript((s32) arg0, AF(arg0->ext1, s32, 8));
    RunScript((s32) arg0, (s32) &D_sc03_011_8018570C);
}

void func_sc03_011_80180470(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        SetFlag(0xF2, 1);
        EndEvent(arg0);
        func_sc03_011_80180358(arg0);
    }
}

void func_sc03_011_801804B8(void) {
}

void func_sc03_011_801804C0(u8 *o) {
    s32 m;
    s32 *d;

    d = D_sc03_011_801856D0;
    if ((u32)GetProgress() < 0x82 || (GetFlag(0xF2) & 0xFF)) {
        goto fail;
    }
    AF(o, s32 *, 0xD0) = d;
    m = AllocActorModel();
    AF(o, s32, 0x20) = m;
    if (m == 0) {
fail:
        RejectSpawn(o);
        return;
    }
    InitModel(m, d[0]);
    SetModelCullBox(AF(o, s32, 0x20), 0x7FFF, 0x7FFF);
    AF(o, s16, 2) = 1;
    HideModel(o);
    AF(o, s16, 0x98) = 0;
    PlaceObject(o, &D_sc03_011_801856C8);
    AF(AF(o, u8 *, 0x68), s16, 0xC) = 0x7FFF;
    AF(o, s32, 0xD4) = SpawnTalkMarker(o, func_sc03_011_80180598);
}

s32 func_sc03_011_80180598(void) {
    return 0;
}

void func_sc03_011_801805A0(u8 *o) {
    AF(o, s16, 2) = 3;
    ShowModel((s32)o);
    SetScript(o, AF(AF(o, u8 *, 0xD0), s32, 8));
    PlaceObject(o, &D_sc03_011_80185818);
    StartEvent(o, &D_sc03_011_80185870);
}

s32 func_sc03_011_80180604(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    ShowModel(arg0);
    SetScript(arg0, (s32) &D_sc03_011_8019EC70);
    return PlaceObject(arg0, (s32) &D_sc03_011_80185818);
}

void func_sc03_011_80180658(StageActor *arg0) {
    D_sc03_011_801859A8[arg0->state]();
}

void SceneSetProgress3CA(void) {
    SetProgress(0x3CA);
}

void func_sc03_011_801806B4(void) {
    StartDeadline8();
}

void func_sc03_011_801806D4(StageActor *o) {
    s32 x = g_PlayerX;
    s32 z = D_80126B66;
    if (x >= -0x5F && x < 0x60) {
        if (z < -0x380) return;
    } else {
        if (x < -0x80) return;
        if (x >= 0xD1) return;
        if (z < -0x300) return;
    }
    func_sc03_011_801805A0(o);
}

void func_sc03_011_80180734(StageActor *arg0) {
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        func_sc03_011_80180604(arg0);
    }
}

void func_sc03_011_80180774(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        RunScript(o, &D_sc03_011_80185948);
        AF(o, s16, 0x34)++;
        break;
    case 2:
        if (IsEventDone(o)) {
            EndEvent(o);
            AF(o, s16, 2) = 4;
            AF(o, s16, 0x34) = 0;
            ShowModel(o);
            SetScript(o, &D_sc03_011_8019EC70);
            PlaceObject(o, &D_sc03_011_80185818);
        }
        break;
    }
}

void func_sc03_011_80180830(u8 *o) {
    s32 id;
    s32 *p;
    s32 r;

    p = D_sc03_011_80185820;
    id = GetProgress();
    if ((u32)(id - 0x3B6) >= 0x32) {
        RejectSpawn((s32)o);
        return;
    }
    AF(o, s32 *, 0xD0) = p;
    r = AllocActorModel();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        RejectSpawn((s32)o);
        return;
    }
    InitModel(r, p[0]);
    SetModelCullBox(AF(o, s32, 0x20), 0x7FFF, 0x7FFF);
    AF(o, s32, 0x58) = (s32)&D_sc03_011_80185834 | 0x40000000;
    AF(o, s16, 0x5C) = 0x800;
    if (id < 0x3CA) {
        AF(o, s16, 2) = 1;
        ShowModel((s32)o);
    } else {
        AF(o, s16, 2) = 4;
        AF(o, s16, 0x34) = 0;
        ShowModel((s32)o);
    }
    SetScript((s32)o, (s32)&D_sc03_011_8019EC70);
    PlaceObject((s32)o, (s32)&D_sc03_011_80185818);
    AF(AF(o, void *, 0x68), s16, 0xC) = 0x7FFF;
    AF(o, s32, 0xD4) = SpawnTalkMarker((s32)o, (s32)func_sc03_011_8018094C);
}

s32 *func_sc03_011_8018094C(u8 *o) {
    Mover *p;

    p = AF(o, u8 *, 0x64);
    if (p->state != 4) {
        return 0;
    }
    if (DistSqToPlayer(p) > 0x4000) {
        return 0;
    }
    p = AF(o, u8 *, 0x64);
    if (AF(p, u16, 0x34) == 0) {
        AF(p, u16, 0x34)++;
        ResetScriptVM();
        return (s32 *)&CallActionHandler;
    }
    return 0;
}

s32 func_sc03_011_801809CC(StageActor *arg0) {
    arg0->state = 3;
    arg0->stateCount = 0;
    ShowModel(arg0);
    return StartEvent(arg0, (s32) &D_sc03_011_80185BDC);
}

void Scene3E8Init(u8 *o) {
    s32 *p;
    s32 r;
    s32 v;

    p = D_sc03_011_80185B14;
    if (GetProgress() != 0x3E8) {
        RejectSpawn((s32)o);
        return;
    }
    AF(o, s32 *, 0xD0) = p;
    r = AllocActorModel();
    AF(o, s32, 0x20) = r;
    if (r == 0) {
        RejectSpawn((s32)o);
        return;
    }
    InitModel(r, p[0]);
    SetModelCullBox(AF(o, s32, 0x20), 0x7FFF, 0x7FFF);
    v = g_Day;
    v = g_ClockHour + v * 24;
    D_800BA2BE = v;
    D_800BA30E = v;
    r = SpawnActor(0x374, 0);
    D_sc03_011_801A2284 = r;
    if (r == 0) {
        RejectSpawn((s32)o);
        return;
    }
    D_sc03_011_801A2280 = (s32)o;
    AF(o, s16, 2) = 1;
    ShowModel((s32)o);
    SetScript((s32)o, (s32)&D_sc03_011_80185A14);
    PlaceObject((s32)o, (s32)&D_sc03_011_80185B68);
    AF(o, s32, 0x1C) = 0x17C;
    AF(o, s32, 0xDC) = 0;
    AF(AF(o, void *, 0x68), s16, 0xC) = 0x7FFF;
}

void func_sc03_011_80180B2C(StageActor *arg0) {
    D_sc03_011_80185DC4[arg0->state]();
}

void func_sc03_011_80180B68(u8 *o) {
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (++AF(o, s32, 0x1C) >= 0xE6) {
            AF(o, s32, 0x1C) = 0;
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        SetForwardVelocity(o, 0xFFFA0000);
        MoveObject(o);
        if (AF(o, s16, 0xE) >= -0x3C0) {
            AF(o, s32, 0x1C) = 0;
            AF(o, u16, 0x34)++;
            SetScript(o, &D_sc03_011_801859BC);
        }
        break;
    case 2:
        if (AF(o, s16, 0xFC) == 1) {
            AF(o, s32, 0x1C) = 0;
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        if (++AF(o, s32, 0x1C) > 0) {
            AF(o, s32, 0x1C) = 0;
            AF(o, u16, 0x34)++;
            SetScript(o, &D_sc03_011_80185A14);
        }
        break;
    case 4:
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), 0xC00, 6);
        if (++AF(o, s32, 0x1C) >= 0x10) {
            AF(o, s32, 0x1C) = 0;
            AF(o, u16, 0x34)++;
        }
        break;
    case 5:
        SetForwardVelocity(o, 0xFFFC0000);
        MoveObject(o);
        if (AF(o, s16, 0xFC) == 2) {
            AF(o, u16, 0x34)++;
            PlaceObject(o, &D_sc03_011_80185DDC);
        }
        break;
    case 6:
        SetForwardVelocity(o, 0xFFFC0000);
        MoveObject(o);
        if (AF(o, s16, 0xFC) == 3) {
            AF(o, u16, 0x34)++;
            HideModel(o);
        }
        break;
    case 7:
        break;
    }
}

void func_sc03_011_80180D38(StageActor *arg0) {
    D_sc03_011_80185DE4[arg0->state]();
}

void func_sc03_011_80180D74(void) {
    SetScript(D_sc03_011_801A2284, (s32) &D_sc03_011_80185ABC);
    SetScript(D_sc03_011_801A2280, (s32) &D_sc03_011_801859BC);
}

void func_sc03_011_80180DBC(void) {
    SetScript(D_sc03_011_801A2284, (s32) &D_sc03_011_801859BC);
    SetScript(D_sc03_011_801A2280, (s32) &D_sc03_011_80185ABC);
}

void func_sc03_011_80180E04(void) {
    SetScript(D_sc03_011_801A2284, (s32) &D_sc03_011_801859BC);
    SetScript(D_sc03_011_801A2280, (s32) &D_sc03_011_801859BC);
}

s32 TurnPlayerToActor(s32 arg0) {
    AF(g_PlayerModel, s16, 0x12) = (s16) ((u16) AF(g_PlayerModel, s16, 0x12) + TurnStep((s32) AF(g_PlayerModel, s16, 0x12), HeadingTo((s32) &g_PlayerPosX, arg0 + 4), 6));
}

void SceneTakeItem6C(void) {
    AF((*(void * *)&D_sc03_011_801A2284), s16, 0xFC) = 1;
    SetProgress(0x3F2);
    func_800D0F4C(0x6C);
}

void func_sc03_011_80180EE0(void) {
    AF((*(void * *)&D_sc03_011_801A2284), s16, 0xFC) = 2;
}

void func_sc03_011_80180EF4(void) {
    AF((*(void * *)&D_sc03_011_801A2284), s16, 0xFC) = 3;
}

void func_sc03_011_80180F08(void) {
    D_sc03_011_801A2288 = 0;
}

void func_sc03_011_80180F18(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = D_sc03_011_801A2288 + 1;
    D_sc03_011_801A2288 = temp_v1;
    if ((temp_v1 % (s16) D_sc03_011_80185BD8) == D_sc03_011_80185BDA) {
        PlaySoundId(0xB3D, 0, arg2);
    }
}

void func_sc03_011_80180F90(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    u16 temp_a1;

    temp_a1 = AF(arg0, u16, 0x34);
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) + 1);
    temp_v1 = temp_a1 & 0xFFFF;
    temp_a0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_a0;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (AF(arg0, s32, 0xDC) == 0xE6) {
            AF(arg0, u16, 0x34) = (u16) (temp_a1 + 1);
            return;
        }
        return;
    case 1:
        SetForwardVelocity((s32) arg0, -0x60000);
        MoveObject((s32) arg0);
        if (AF(arg0, s16, 0xE) >= -0x390) {
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            SetScript((s32) arg0, (s32) &D_sc03_011_801859BC);
            return;
        }
        break;
    case 2:
        if (temp_a0 <= 0) {
            func_sc03_011_801809CC((s32) arg0);
        }
        break;
    }
}

void func_sc03_011_8018107C(StageActor *arg0) {
    if ((arg0->stateCount == 0) && (UpdateScript() != 0)) {
        EndEvent((s32) arg0);
        BlendCameraThen((s32) &func_sc03_011_8017E170);
        arg0->stateCount = (u16) (arg0->stateCount + 1);
        HideModel((s32) arg0);
    }
}

void func_sc03_011_801810EC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc03_011_8019EBA4);
    SetModelCullBox(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x34) = 0;
    ShowModel((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc03_011_80185A14);
    PlaceObject((s32) arg0, (s32) &D_sc03_011_80185DD4);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0xFC) = 0;
}

s32 func_sc03_011_80181194(void) {
    s32 var_v0;

    var_v0 = 0x25;
    if (!(GetFlag(0x95) & 0xFF)) {
        if ((GetVar(0xCE) & 0xFF) == 9) {
            func_800D06CC();
            return 0x23;
        }
        if (GetFlag(0x90) & 0xFF) {
            var_v0 = 0xA;
            if (g_DayPeriod == 4) {
                return 0x3C;
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return var_v0;
        }
        var_v0 = 0x20;
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
