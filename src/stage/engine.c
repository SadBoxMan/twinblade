#include "common.h"
#include "psyq.h"
#include "work.h"
#include "game.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

extern s32 GetFlag(s32 n);
#define PARTS(a) (*(s32 *)(*(u8 **)((a) + 0x20) + 0x24))

extern s16 D_80078E96;
extern s16 D_80078E9E;
extern s16 D_80078EA6;
extern u8 D_800D8D10[];
extern void QueueImage(s32 w);

void StageStep(void);

void StageMain(void) {
    StageStep();
}

typedef struct { s32 unk0; u8 *unk4; } LoadParam;   /* the loader's fifth argument (as ovl38's) */
extern LoadParam g_SoundLoadTable;
extern u8 g_SoundLoadBuf[];
extern s32 D_801EBC68;          /* where the stage's extra loads go */
extern s32 D_800AF558[];        /* archive file locations (g_ArchiveFileLoc entries) */
extern s32 D_800AF560[];
extern s32 D_800AECB0[];
extern s32 D_800AECB8[];
extern s32 D_800AEFD0[];
extern s32 RequestLoad(s32 kind, s32 id, s32 *file, s32 dest, LoadParam *param);
extern u16 D_800B99F6;          /* Work +0xA3C6: the stage step */
extern s16 D_800B9A08;          /* Work +0xA3D8: the map id */
extern u8 D_800B9A10;
extern u8 D_800B9A11;
extern u8 D_800B9A17;
extern u8 D_800B9A64;
extern s16 D_800B99F2;
extern void (*D_8018D7A4[])(void);
extern void SetGameState(s32 a);
extern void NextGameStateStep(void);
extern void DemoReset(void);
extern void NextGameState(void);
extern void ModeGoTrialEnd(void);
extern void ClearDebugText(void);
extern void ClearObjectPoolsAlt(void);
extern void DisableFog(void);
extern void ClearSaveRequest(void);
extern s32 GetProgress(void);
extern void PlaySoundId(s32 a, s32 b);
extern s32 func_800CF854(void);
extern void func_800CFBBC(void);
extern s32 func_800D0588(void);
extern void func_800D0630(void);
void func_801282EC(void);
void func_801285E4(void);
void func_80128678(void);
void func_80128714(void);
void func_80128A28(void);
void func_80128AF4(void);
void SetMapOtDepth(void);
void InitProps(void);
void ClearProps(void);
void InitCameras(s32 a);
void InitCameraShake(void);
void func_8013E558(void);
void func_8013E67C(void);
void LoadRoom(void);
void func_80145CEC(void);
void func_80146074(void);
void ClearHudSlots(void);
void func_80175308(void);
void func_80175494(void);
void InitMessages(void);
void func_80178608(void);
s32 func_801288B0(void);
s32 func_801288E8(void);
s32 func_80128940(void);
s32 func_80128998(void);
s32 func_801289F0(void);

void func_80128178(void) {
    func_801285E4();
}

void func_80128198(void) {
    func_80128678();
}

void func_801281B8(void) {
    func_80128714();
}

void func_801281D8(void) {
    func_8013E67C();
}

void func_801281F8(void) {
    func_8013E558();
}

s32 GetStageLoadAddr(void) {
    return D_801EBC68;
}

void func_80128228(void) {
    func_80128A28();
}

void func_80128248(void) {
    func_80128AF4();
}

void func_80128268(void) {
    func_801282EC();
}

/* the stage's step: one handler per stage step (0-8) */
void StageStep(void) {
    if (D_800B99F6 < 9) {
        D_8018D7A4[D_800B99F6]();
    }
}

void func_801282CC(void) {
    SetGameState(0x11);
}

void func_801282EC(void) {
    ClearObjectPoolsAlt();
    ClearDebugText();
    ClearProps();
    InitMessages();
    ModeGoTrialEnd();
}

/* a few maps load an extra file before the stage goes on */
void LoadMapExtras(void) {
    s32 t = GetProgress();
    s32 r;
    switch (D_800B9A08) {
    case 0x300E:
        if (func_800CF854() == 0) {
            r = func_80128998();
        } else {
            r = func_801289F0();
        }
        break;
    case 0x30A0:
        if (t < 0x640) {
            r = func_801288E8();
        } else {
            r = func_80128940();
        }
        break;
    case 0x3014:
        if (t != 0x4B0 || (GetFlag(0x138) & 0xFF) != 0) {
            r = 1;
        } else {
            r = func_801288B0();
        }
        break;
    default:
        NextGameStateStep();
        return;
    }
    if (r) {
        NextGameStateStep();
    }
}

void StageStart(void) {
    InitProps();
    InitMessages();
    DemoReset();
    SetMapOtDepth();
    ClearSaveRequest();
    func_800CFBBC();
    ClearDebugText();
    DisableFog();
    D_800B9A17 = 0;
    D_800B9A10 = 0;
    InitCameraShake();
    InitCameras(0);
    func_800D0630();
    func_80145CEC();
    LoadRoom();
    NextGameStateStep();
}

void func_801284B8(void) {
    if (func_800D0588() != 0) {
        ClearDebugText();
        NextGameStateStep();
    }
}

void func_801284F0(void) {
    func_80175308();
    ClearHudSlots();
    if (D_800B9A64 != 0) {
        func_80175494();
    }
    NextGameStateStep();
}

void func_8012853C(void) {
    func_80146074();
    NextGameStateStep();
}

void func_80128564(void) {
    SetSpadStack();
    func_80178608();
    ResetSpadStack();
    if (D_800B9A08 == 0x300A) {
        PlaySoundId(6, 0);
    }
    NextGameState();
    D_800B99F2 = 1;
}

void ClearWorkA3E1(void) {
    D_800B9A11 = 0;
}

/* the stage's hooks: a mode overlay fills them in (zero in the file) */
extern void (*D_8018D4D8)(void);
extern s16 (*D_8018D4DC)(void);
extern void (*D_8018D4E4)(void);
extern s16 (*D_8018D4E8)(void);
extern s32 D_801ED340;
extern s32 D_801ED344;
extern s16 D_800B9A00;
extern u16 D_800B99DA;
extern s32 D_801EF3F8;
extern s32 g_ArchiveFileLoc[][2];
extern s16 D_8018D7BC[];
extern s16 D_8018D7CC[];
extern u8 D_801EBC6C[];
/* a frame list: each frame shows its value for flags & 0x3F frames; flag 0x80 goes back to the first frame, 0xC0 ends */
typedef struct {
    union {
        s32 tex;
        struct { u16 x, y; } ofs;
    } v;
    s32 flags;
} AnimFrame;
typedef struct {
    /* 0x0 */ AnimFrame *frames;
    /* 0x4 */ s16 index;
    /* 0x6 */ s16 timer;
} AnimPlayer;

/* the stage's prop pool: 128 entries of 0x38 bytes, each run by its kind's handler and drawn with its own model */
typedef struct {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u8 pad02[2];
    /* 0x04 */ Fixed pos[3];
    /* 0x10 */ s32 vel[3];
    /* 0x1C */ u8 pad1C[4];
    /* 0x20 */ u8 *model;
    /* 0x24 */ u8 pad24[0x14];
} Prop;

extern s16 g_PropsActive;
extern Prop g_Props[];
extern void (**g_PropHandlers)(Prop *e);
extern s32 func_800D18DC(void);
extern s32 func_800D19F0(void);
extern void func_800D1754(void);
extern void TickPlayTime(void);
extern void func_8014607C(void);
extern void ClearRumbleScript(void);
extern void StopPadRumble(void);
extern void ModeGoTitle(void);
extern s32 GetSaveRequest(void);
extern s32 func_800CFBE8(void);
extern void SetOtDepthLimit(s32 n);
extern void QueueImageAt(s32 mode, s32 w);
extern void SetDebugText(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern void SetDebugNumber(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern void ZeroFill(void *p, s32 size);
extern u8 *AllocSpriteInRange(s32 a, s32 b);
extern void InitSpriteKind3(u8 *o, void *p, s16 x, s16 y);
extern void DrawDemoLogo(void);
extern void StepRumbleScript(void);
void func_801287B8(void);
void UpdateProps(void);
void UpdateCamera(void);
void DrawBgLayers(void);
void func_8013BC7C(s32 *p);
void RunSeqHook(void);
void UpdateCameraShake(void);
void UpdateMessages(void);
void FindFloorBelowPlayer(Player *p);
void CollectPickups(Player *p);
void StrikeTouchedActor(Player *p);
void UpdateShadow(void);
void UpdateObj68s(void);
void UpdateEffects(void);
void UpdateSwordTrails(void);
void UpdateHudSlots(void);
void func_801754A8(void);
void UpdateActors(void);
Prop *SpawnProp(u16 kind);
Prop *AllocProp(void);

void func_801285E4(void) {
    SetSpadStack();
    D_801ED344 = func_800D18DC();
    ResetSpadStack();
    func_8014607C();
    SetSpadStack();
    func_801287B8();
    ResetSpadStack();
    if (D_801ED344 != 0) {
        NextGameState();
    }
}

void func_80128678(void) {
    SetSpadStack();
    TickPlayTime();
    ResetSpadStack();
    func_8014607C();
    SetSpadStack();
    func_801287B8();
    ResetSpadStack();
    SetSpadStack();
    func_800D1754();
    ResetSpadStack();
}

void func_80128714(void) {
    SetSpadStack();
    D_801ED344 = func_800D19F0();
    ResetSpadStack();
    if (D_801ED344 == 0) {
        func_8014607C();
        SetSpadStack();
        func_801287B8();
        ResetSpadStack();
    } else {
        ClearRumbleScript();
        StopPadRumble();
    }
}

void func_801287B8(void) {
    UpdateCamera();
    UpdateActors();
    FindFloorBelowPlayer(&g_Player);
    CollectPickups(&g_Player);
    StrikeTouchedActor(&g_Player);
    UpdateSwordTrails();
    UpdateShadow();
    UpdateObj68s();
    UpdateEffects();
    UpdateProps();
    UpdateCameraShake();
    StepRumbleScript();
    DrawBgLayers();
    UpdateHudSlots();
    func_801754A8();
    {
        s32 *p = &D_801EF3F8;
        if (*p == 0) {
            func_8013BC7C(p);
        }
    }
    RunSeqHook();
    UpdateMessages();
    D_800B99DA++;
    if (D_800B9A64 != 0) {
        DrawDemoLogo();
    }
}

s32 func_801288B0(void) {
    return RequestLoad(0, 0, D_800AEFD0, D_801EBC68, NULL);
}

s32 func_801288E8(void) {
    g_SoundLoadTable.unk0 = 0x60;
    g_SoundLoadTable.unk4 = g_SoundLoadBuf;
    return RequestLoad(0, 0, D_800AF558, D_801EBC68, &g_SoundLoadTable);
}

s32 func_80128940(void) {
    g_SoundLoadTable.unk0 = 0x5E;
    g_SoundLoadTable.unk4 = g_SoundLoadBuf;
    return RequestLoad(0, 0, D_800AF560, D_801EBC68, &g_SoundLoadTable);
}

s32 func_80128998(void) {
    g_SoundLoadTable.unk0 = 0xD;
    g_SoundLoadTable.unk4 = g_SoundLoadBuf;
    return RequestLoad(0, 0, D_800AECB0, D_801EBC68, &g_SoundLoadTable);
}

s32 func_801289F0(void) {
    return RequestLoad(0, 0, D_800AECB8, D_801EBC68, NULL);
}

void func_80128A28(void) {
    s16 r;
    switch (D_800B99F6) {
    case 1:
        D_8018D4D8();
    case 0:
        NextGameStateStep();
        break;
    case 2:
        r = D_8018D4DC();
        if (r != 0) {
            if (r < 0) {
                SetGameState(0);
                D_800B9A00 = 1;
            } else {
                ModeGoTitle();
            }
        }
        break;
    }
}

void func_80128AF4(void) {
    switch (D_800B99F6) {
    case 0:
        D_801ED340 = GetSaveRequest();
        NextGameStateStep();
        break;
    case 1:
        D_8018D4E4();
        NextGameStateStep();
        break;
    case 2:
        if (D_8018D4E8() != 0) {
            if (D_801ED340 == 1) {
                if (func_800CFBE8() != 0) {
                    func_800CFBBC();
                    SetGameState(0x13);
                } else {
                    SetGameState(4);
                }
            } else {
                ModeGoTitle();
            }
            ClearSaveRequest();
        }
        break;
    }
}

void SetMapOtDepth(void) {
    s32 n;
    switch (D_800B9A08) {
    case 0x3023:
        n = 0x4E0;
        break;
    case 0x3081:
        n = 0x420;
        break;
    case 0x3067:
        n = 0x480;
        break;
    default:
        n = 0x3E0;
        break;
    case 0x3093:
    case 0x30A5:
        n = 0xFFB;
        break;
    }
    SetOtDepthLimit(n);
}

s32 func_80128C98(s32 i) {
    s16 n = D_8018D7BC[i];
    if (n < 0) {
        return 1;
    }
    return RequestLoad(0, 0, g_ArchiveFileLoc[n], D_801EBC68, NULL);
}

s32 func_80128CFC(s32 i) {
    s16 n = D_8018D7CC[i];
    if (n < 0) {
        return 1;
    }
    return RequestLoad(0, 0, g_ArchiveFileLoc[n], D_801EBC68, NULL);
}

void StartImageAnim(s32 mode, AnimPlayer *p, AnimFrame *f) {
    p->frames = f;
    p->index = 0;
    p->timer = f->flags & 0x3F;
    if (mode != 0) {
        QueueImageAt(mode, f->v.tex);
    } else {
        QueueImage(f->v.tex);
    }
}

s32 StepImageAnim(s32 mode, AnimPlayer *p) {
    AnimFrame *frames = p->frames;
    s32 flags;
    if (p->timer == 0) {
        return 1;
    }
    if (--p->timer > 0) {
        return 0;
    }
    flags = frames[p->index].flags;
    if ((flags & 0xC0) == 0xC0) {
        p->timer = 0;
        return 1;
    }
    if (flags & 0x80) {
        p->index = 0;
    } else {
        p->index++;
    }
    p->timer = frames[p->index].flags & 0x3F;
    if (mode != 0) {
        QueueImageAt(mode, frames[p->index].v.tex);
    } else {
        QueueImage(frames[p->index].v.tex);
    }
    return 0;
}

void StartSpriteAnim(u8 *o, AnimPlayer *p, AnimFrame *f) {
    p->frames = f;
    p->index = 0;
    p->timer = f->flags & 0x3F;
    *(u16 *)(o + 0x28) = f->v.ofs.x;
    *(u16 *)(o + 0x2A) = f->v.ofs.y;
}

s32 StepSpriteAnim(u8 *o, AnimPlayer *p) {
    AnimFrame *frames = p->frames;
    s32 flags;
    if (p->timer == 0) {
        return 1;
    }
    if (--p->timer <= 0) {
        flags = frames[p->index].flags;
        if ((flags & 0xC0) == 0xC0) {
            p->timer = 0;
            return 1;
        }
        if (flags & 0x80) {
            p->index = 0;
        } else {
            p->index++;
        }
        p->timer = frames[p->index].flags & 0x3F;
        *(u16 *)(o + 0x28) = frames[p->index].v.ofs.x;
        *(u16 *)(o + 0x2A) = frames[p->index].v.ofs.y;
    }
    return 0;
}

void func_80128FAC(u16 *n) {
    SetDebugText(4, (s32)D_801EBC6C, 0x80, 0x90, 0, 0);
    SetDebugNumber(5, *n, 0xA8, 0x90, 0x40, 0);
}

void UpdateProps(void) {
    Prop *e = g_Props;
    s32 i;
    if (g_PropsActive != 0) {
        for (i = 0; i < 0x80; i++, e++) {
            if (e->kind != 0) {
                g_PropHandlers[e->kind](e);
                if (e->model != NULL) {
                    *(u16 *)(e->model + 8) = e->pos[0].h.i;
                    *(u16 *)(e->model + 0xA) = e->pos[1].h.i;
                    *(u16 *)(e->model + 0xC) = e->pos[2].h.i;
                }
            }
        }
    }
}

Prop *SpawnPropAt(u16 kind, u16 *pos) {
    Prop *e = SpawnProp(kind);
    if (e != NULL) {
        e->pos[0].h.i = pos[0];
        e->pos[1].h.i = pos[1];
        e->pos[2].h.i = pos[2];
    }
    return e;
}

Prop *SpawnProp(u16 kind) {
    u8 *m = AllocSpriteInRange(0x7E, 0x100);
    Prop *e;
    if (m == NULL) {
        return NULL;
    }
    e = AllocProp();
    if (e == NULL) {
        return NULL;
    }
    e->kind = kind;
    e->model = m;
    InitSpriteKind3(m, 0, 0, 0);
    return e;
}

Prop *AllocProp(void) {
    Prop *e = g_Props;
    s32 i;
    for (i = 0; i < 0x80; i++, e++) {
        if (e->kind == 0) {
            ZeroFill(e, sizeof(Prop));
            return e;
        }
    }
    return NULL;
}

/* a background layer (two of them, at 0x800B9A78): a cell map and its GsBG. pri is the OT priority, or 0x7FFF off,
   0x7FFE a two-colour gradient, 0x7FFD the three-band sky gradient */
typedef struct {
    /* 0x00 */ GsMAP map;
    /* 0x10 */ GsBG bg;
    /* 0x34 */ u16 pri;
    /* 0x36 */ u16 rotating;        /* nonzero: drawn with GsSortBg, else GsSortFastBg */
    /* 0x38 */ u16 x;
    /* 0x3A */ s16 y;
    /* 0x3C */ u16 w;
    /* 0x3E */ s16 h;
    /* 0x40 */ s16 scrollx, scrolly;
    /* 0x44 */ u8 fade[6];          /* a gradient's two colours, scaled by the stage's fade (FadeBgLayerColours) */
    /* 0x4A */ u8 pad4A[2];
    /* 0x4C */ u8 *cells;           /* the cell file: GsCELLs from +8 */
    /* 0x50 */ u8 *mapfile;         /* the map file: ncellw, ncellh, cellw, cellh at +4, the cell index from +8 */
} BgLayer; /* size 0x54 */
extern BgLayer D_800B9A78[2];
extern s16 g_BgLayersOn;          /* the layers are on */
extern s32 D_8005128C;
extern u8 D_801ED348[4][4];     /* the gradients' colours (r, g, b) */
extern u8 D_801EF3F2;           /* the stage's fade: red, green, blue */
extern u8 D_801EF2F2;
extern u8 D_801EF2C8;
extern u8 D_801EF3C0;
extern GsOT g_WorldOt[2];
extern void DrawGradientRect(s16 x, s16 y, s16 w, s16 h, u8 r0, u8 g0, u8 b0, u8 r1, u8 g1, u8 b1);
void SetPropsActive(s16 on);
void FreeProp(Prop *e);
void InitBgLayerMap(BgLayer *l);
void FadeBgLayerColours(s16 on, s16 kind, BgLayer *l);

void InitProps(void) {
    ClearProps();
    SetPropsActive(1);
}

void SetPropsActive(s16 on) {
    g_PropsActive = on;
}

void ClearProps(void) {
    Prop *e = g_Props;
    s32 i;
    for (i = 0; i < 0x80; i++, e++) {
        e->kind = 0;
    }
}

void FreeAllProps(void) {
    Prop *e = g_Props;
    s32 i;
    for (i = 0; i < 0x80; i++, e++) {
        FreeProp(e);
    }
}

void FreeProp(Prop *e) {
    if (e->model != NULL) {
        ZeroFill(e->model, *(u16 *)e->model == 1 ? 0x84 : 0x38);
    }
    e->kind = 0;
}

void MoveProp(Prop *e) {
    e->pos[0].w += e->vel[0];
    e->pos[1].w += e->vel[1];
    e->pos[2].w += e->vel[2];
}

void CopyPropPos(Prop *e, Prop *from) {
    e->pos[0].w = from->pos[0].w;
    e->pos[1].w = from->pos[1].w;
    e->pos[2].w = from->pos[2].w;
}

void CopyPropVel(Prop *e, Prop *from) {
    e->vel[0] = from->vel[0];
    e->vel[1] = from->vel[1];
    e->vel[2] = from->vel[2];
}

void ResetBgLayers(void) {
    s32 i;
    for (i = 0; i < 2; i++) {
        D_800B9A78[i].pri = 0x7FFF;
        D_800B9A78[i].rotating = 0;
        D_800B9A78[i].x = 0xFFFF;
        D_800B9A78[i].y = 0;
        D_800B9A78[i].w = 0x140;
        D_800B9A78[i].h = 0xEE;
        D_800B9A78[i].scrollx = 0;
        D_800B9A78[i].scrolly = 0;
    }
}

void EnableBgLayers(void) {
    g_BgLayersOn = 1;
}

void DisableBgLayers(void) {
    g_BgLayersOn = 0;
}

void SetupBgLayers(void) {
    BgLayer *l;
    s32 i;
    s32 *p = &D_8005128C;
    if (*p == 0x34420200) {
        *p = 0;
    }
    g_BgLayersOn = 1;
    for (l = D_800B9A78, i = 0; i < 2; l++, i++) {
        switch (l->pri) {
        case 0x7FFF:
            break;
        case 0x7FFD:
            if (i == 0) {
                FadeBgLayerColours(1, 1, l);
            }
            break;
        case 0x7FFE:
            FadeBgLayerColours(1, i * 2, l);
            break;
        default:
            InitBgLayerMap(l);
            l->bg.scrolly = l->scrolly + l->y;
            FadeBgLayerColours(1, i + 3, l);
            break;
        }
    }
}

void DrawBgLayers(void) {
    GsMAP *map = (GsMAP *)0x1F800000;
    GsBG *bg = (GsBG *)0x1F800010;
    register Work *w = &D_800AF630;
    BgLayer *l;
    s32 i;
    if (g_BgLayersOn != 0) {
        for (l = D_800B9A78, i = 0; i < 2; l++, i++) {
            switch (l->pri) {
            case 0x7FFF:
                break;
            case 0x7FFD:
                if (i == 0) {
                    FadeBgLayerColours(D_801EF3C0, 1, l);
                }
                DrawGradientRect(-0xA0, -0x74, 0x140, 0x8C, D_801ED348[0][0], D_801ED348[0][1], D_801ED348[0][2],
                              D_801ED348[1][0], D_801ED348[1][1], D_801ED348[1][2]);
                DrawGradientRect(-0xA0, 0x18, 0x140, 0x3C, D_801ED348[1][0], D_801ED348[1][1], D_801ED348[1][2],
                              D_801ED348[2][0], D_801ED348[2][1], D_801ED348[2][2]);
                DrawGradientRect(-0xA0, 0x54, 0x140, 0x28, D_801ED348[2][0], D_801ED348[2][1], D_801ED348[2][2],
                              D_801ED348[3][0], D_801ED348[3][1], D_801ED348[3][2]);
                break;
            case 0x7FFE:
                FadeBgLayerColours(D_801EF3C0, i * 2, l);
                DrawGradientRect(-0xA0, l->y, 0x140, l->h, D_801ED348[i * 2][0], D_801ED348[i * 2][1], D_801ED348[i * 2][2],
                              D_801ED348[i * 2 + 1][0], D_801ED348[i * 2 + 1][1], D_801ED348[i * 2 + 1][2]);
                break;
            default:
                l->bg.scrollx = l->scrollx + l->x;
                l->bg.scrolly = l->scrolly + l->y;
                FadeBgLayerColours(D_801EF3C0, i + 3, l);
                *map = l->map;
                *bg = l->bg;
                bg->map = map;
                if (l->rotating == 0) {
                    GsSortFastBg(bg, &g_WorldOt[w->frame], l->pri);
                } else {
                    GsSortBg(bg, &g_WorldOt[w->frame], l->pri);
                }
                break;
            }
        }
    }
}

void InitBgLayerMap(BgLayer *l) {
    u8 *cells;
    u8 *p;
    u8 c;
    cells = l->cells;
    cells += 8;
    p = l->mapfile;
    p += 4;
    c = *p++;
    l->map.ncellw = c;
    c = *p++;
    l->map.ncellh = c;
    c = *p++;
    l->map.cellw = c;
    c = *p++;
    l->map.cellh = c;
    l->map.base = cells;
    l->map.index = (u16 *)p;
    l->bg.attribute = ((cells[6] >> 7) << 24) | 0x08000000;
    l->bg.x = l->x;
    l->bg.y = l->y;
    l->bg.w = l->w;
    l->bg.h = l->h;
    if (D_800AF630.state == 0) {
        l->bg.scrollx = l->bg.scrolly = 0;
    }
    l->bg.r = l->bg.g = l->bg.b = 0x80;
    l->bg.mx = 0xA0;
    l->bg.my = 0x78;
    l->bg.map = &l->map;
    l->bg.scalex = l->bg.scaley = 0x1000;
    l->bg.rotate = 0;
}

/* the layers' colours under the stage's fade: kind 1 the sky's four, 0 and 2 a gradient's two (from the layer),
   3 and 4 a map layer's tint */
void FadeBgLayerColours(s16 on, s16 kind, BgLayer *l) {
    s32 r, g, b;
    if (on != 0) {
        switch (kind) {
        case 1:
            r = D_801EF3F2;
            g = D_801EF2F2;
            b = D_801EF2C8;
            D_801ED348[0][0] = (r * 10) >> 4;
            D_801ED348[0][1] = (g * 128) >> 4;
            D_801ED348[0][2] = (b * 255) >> 4;
            D_801ED348[1][0] = (r * 143) >> 4;
            D_801ED348[1][1] = (g * 200) >> 4;
            D_801ED348[1][2] = (b * 255) >> 4;
            D_801ED348[2][0] = (r * 255) >> 4;
            D_801ED348[2][1] = (g * 255) >> 4;
            D_801ED348[2][2] = (b * 255) >> 4;
            D_801ED348[3][0] = (r * 143) >> 4;
            D_801ED348[3][1] = (g * 255) >> 4;
            D_801ED348[3][2] = (b * 180) >> 4;
            break;
        case 0:
        case 2:
            D_801ED348[kind][0] = (l->fade[0] * D_801EF3F2) >> 4;
            D_801ED348[kind][1] = (l->fade[1] * D_801EF2F2) >> 4;
            D_801ED348[kind][2] = (l->fade[2] * D_801EF2C8) >> 4;
            D_801ED348[kind + 1][0] = (l->fade[3] * D_801EF3F2) >> 4;
            D_801ED348[kind + 1][1] = (l->fade[4] * D_801EF2F2) >> 4;
            D_801ED348[kind + 1][2] = (l->fade[5] * D_801EF2C8) >> 4;
            break;
        case 3:
        case 4:
            l->bg.r = D_801EF3F2 * 8;
            l->bg.g = D_801EF2F2 * 8;
            l->bg.b = D_801EF2C8 * 8;
            break;
        }
    }
}

/* a camera: Camera (include/game.h) */
extern Camera g_Camera;
extern Camera g_CameraBlend;
extern Camera g_AltCameras[3];
extern Camera g_SavedCameras[3];
extern Camera g_KeptCamera;
extern Camera *g_ActiveCamera;      /* the camera used this frame */
extern u8 g_CameraIndex;           /* 0 the main camera, 1-3 an alternate */
extern u8 g_CameraBlendFrames;           /* frames left of easing the blend */
extern u8 g_CameraHeightLimitOn;           /* the height follow is limited (SetCameraHeightLimit) */
extern s16 g_CameraHeightLimitRange;
extern s16 g_CameraHeightLimitY;
extern s16 g_CameraFocus;          /* the point the camera follows */
extern s16 D_80126942;
extern s16 D_80126944;
extern MATRIX g_ViewMatrix;       /* the world-to-screen matrix GsSetRefView2L sets */
extern void InitDefaultView(void);
extern void GsSetProjection(s32 proj);
extern s16 EaseValueFrac(s16 a, s16 b, s16 c, s16 d);
void SetCameraUpdate(void (*update)(Camera *c), u8 mode);
void SetCameraUpdateOf(Camera *c, void (*update)(Camera *c), u8 mode);
void SelectCamera(u8 n);
void UpdateCameraFocus(void);

void InitCameras(s32 a) {
    ZeroFill(&g_CameraBlend, sizeof(Camera));
    ZeroFill(&g_Camera, sizeof(Camera));
    ZeroFill(&g_SavedCameras[0], sizeof(Camera));
    ZeroFill(&g_SavedCameras[1], sizeof(Camera));
    ZeroFill(&g_SavedCameras[2], sizeof(Camera));
    ZeroFill(&g_AltCameras[0], sizeof(Camera));
    ZeroFill(&g_AltCameras[1], sizeof(Camera));
    ZeroFill(&g_AltCameras[2], sizeof(Camera));
    g_CameraIndex = 0;
    g_CameraHeightLimitOn = 0;
    g_CameraBlendFrames = 0;
    InitDefaultView();
}

void UpdateCamera(void) {
    register Work *w;
    Camera *b;
    Camera *c;
    MATRIX unused;                  /* the original's frame has room for one */
    UpdateCameraFocus();
    w = &D_800AF630;
    b = &g_CameraBlend;
    if (g_CameraIndex == 1) {
        c = &g_AltCameras[0];
    } else if (g_CameraIndex == 2) {
        c = &g_AltCameras[1];
    } else if (g_CameraIndex == 3) {
        c = &g_AltCameras[2];
    } else {
        c = &g_Camera;
    }
    if (c->update != NULL) {
        c->update(c);
    }
    GsSetProjection(c->proj);
    if (g_CameraBlendFrames != 0) {
        b->base.vpx = EaseValueFrac(b->base.vpx, c->base.vpx, 2, 1);
        b->base.vpy = EaseValueFrac(b->base.vpy, c->base.vpy, 2, 1);
        b->base.vpz = EaseValueFrac(b->base.vpz, c->base.vpz, 2, 1);
        b->base.vrx = EaseValueFrac(b->base.vrx, c->base.vrx, 2, 1);
        b->base.vry = EaseValueFrac(b->base.vry, c->base.vry, 2, 1);
        b->base.vrz = EaseValueFrac(b->base.vrz, c->base.vrz, 2, 1);
        b->base.rz = EaseValueFrac(b->base.rz, c->base.rz, 2, 1);
        g_CameraBlendFrames--;
    } else {
        b->base.vpx = c->base.vpx;
        b->base.vpy = c->base.vpy;
        b->base.vpz = c->base.vpz;
        b->base.vrx = c->base.vrx;
        b->base.vry = c->base.vry;
        b->base.vrz = c->base.vrz;
        b->base.rz = c->base.rz;
    }
    c->rview.vpx = b->base.vpx + c->offset[0];
    c->rview.vpy = b->base.vpy + c->offset[1];
    c->rview.vpz = b->base.vpz + c->offset[2];
    c->rview.vrx = b->base.vrx + c->offset[3];
    c->rview.vry = b->base.vry + c->offset[4];
    c->rview.vrz = b->base.vrz + c->offset[5];
    c->rview.rz = b->base.rz + c->offset[6];
    c->rview.super = c->base.super;
    GsSetRefView2L(&c->rview);
    w->wsm = g_ViewMatrix;
    g_ActiveCamera = c;
}

void ClearCameraUpdate(void) {
    SetCameraUpdate(0, 0);
}

void SetCameraUpdate(void (*update)(Camera *c), u8 mode) {
    SetCameraUpdateOf(&g_Camera, update, mode);
}

void SetCameraUpdateOf(Camera *c, void (*update)(Camera *c), u8 mode) {
    c->update = update;
    c->mode = mode;
    c->unk9C = 0;
    c->unkA0 = 0;
    c->unkA2 = 0;
    g_CameraFocus = g_Player.pos[0].h.i;
    D_80126942 = g_Player.pos[1].h.i;
    D_80126944 = g_Player.pos[2].h.i;
}

void SnapCamera(Camera *c) {
    c->proj = c->projTo;
    c->dist = c->distTo;
    c->angle = c->angleTo;
    c->ofs.x = c->ofsTo.x;
    c->ofs.y = c->ofsTo.y;
    c->ofs.z = c->ofsTo.z;
}

void SelectMainCamera(void) {
    SelectCamera(0);
}

void SelectCamera(u8 n) {
    g_CameraIndex = n;
}

void ResetKeptCamera(void) {
    g_KeptCamera.proj = g_KeptCamera.projTo = 0x1F4;
    g_KeptCamera.dist = g_KeptCamera.distTo = 0x5DC;
    g_KeptCamera.angle.vx = g_KeptCamera.angleTo.vx = 0x238;
    g_KeptCamera.angle.vy = g_KeptCamera.angleTo.vy = 0;
    g_KeptCamera.angle.vz = g_KeptCamera.angleTo.vz = 0;
    g_KeptCamera.ofs.x = g_KeptCamera.ofsTo.x = 0;
    g_KeptCamera.ofs.y = g_KeptCamera.ofsTo.y = 0;
    g_KeptCamera.ofs.z = g_KeptCamera.ofsTo.z = 0;
    g_KeptCamera.unk9C = 0;
    g_KeptCamera.unkA0 = 0;
    g_KeptCamera.unkA2 = 0;
}

void RestoreKeptCamera(void) {
    g_Camera.proj = g_KeptCamera.proj;
    g_Camera.projTo = g_KeptCamera.projTo;
    g_Camera.dist = g_KeptCamera.dist;
    g_Camera.distTo = g_KeptCamera.distTo;
    g_Camera.angle = g_KeptCamera.angle;
    g_Camera.angleTo = g_KeptCamera.angleTo;
    g_Camera.ofs.x = g_KeptCamera.ofs.x;
    g_Camera.ofs.y = g_KeptCamera.ofs.y;
    g_Camera.ofs.z = g_KeptCamera.ofs.z;
    g_Camera.ofsTo.x = g_KeptCamera.ofsTo.x;
    g_Camera.ofsTo.y = g_KeptCamera.ofsTo.y;
    g_Camera.ofsTo.z = g_KeptCamera.ofsTo.z;
    g_Camera.unk9C = g_KeptCamera.unk9C;
    g_Camera.unkA0 = g_KeptCamera.unkA0;
    g_Camera.unkA2 = g_KeptCamera.unkA2;
}

void ClearCameraHeightLimit(void) {
    g_CameraHeightLimitOn = 0;
}

void SetCameraHeightLimit(s16 y, s16 range) {
    g_CameraHeightLimitOn = 1;
    g_CameraHeightLimitY = y;
    g_CameraHeightLimitRange = range;
}

/* the followed point: Musashi's, its height eased; with a limit set (SetCameraHeightLimit) the height stays at the given
   one while Musashi is within range of it */
void UpdateCameraFocus(void) {
    Player *m = &g_Player;
    s32 d;
    if (g_CameraHeightLimitOn != 0) {
        d = g_CameraHeightLimitY - g_Player.focus[1];
        if ((d < 0 ? g_Player.focus[1] - g_CameraHeightLimitY : d) > g_CameraHeightLimitRange) {
            s16 *v = &D_80126942;
            *v = EaseValueFrac(*v, m->focus[1], 4, 1);
        } else {
            s16 *v = &D_80126942;
            *v = EaseValueFrac(*v, g_CameraHeightLimitY, 4, 1);
        }
    } else {
        s16 *v = &D_80126942;
        *v = EaseValueFrac(*v, g_Player.focus[1], 4, 1);
    }
    g_CameraFocus = m->focus[0];
    D_80126944 = m->focus[2];
}

void SaveCamera(void) {
    g_SavedCameras[0] = *g_ActiveCamera;
}

extern s32 SquareRoot0(s32 a);
extern s32 ratan2(s32 y, s32 x);
extern StageActor g_Actors[]; /* the stage's actors (96) */
extern s16 D_801270C0;          /* 1: step every actor's animation */
void StartCameraBlend(void);
void StartCameraBlendFrames(u8 frames);
s16 PitchBetween(SVECTOR *a, SVECTOR *b);
s16 HeadingBetween(SVECTOR *a, SVECTOR *b);
void GetCameraView(SVECTOR *vp, SVECTOR *vr);
void AnimTick(StageActor *a);
void AnimStep(StageActor *a);
s32 AnimScriptLength(StageActor *obj);

void SaveCameraView(void) {
    g_SavedCameras[0].base = g_ActiveCamera->base;
}

/* back to the saved camera, eased from the current one over 48 frames */
void RestoreSavedCamera(void) {
    g_CameraBlend = *g_ActiveCamera;
    *g_ActiveCamera = g_SavedCameras[0];
    g_CameraBlendFrames = 0x30;
}

void BlendCameraThen(void (*f)(void)) {
    StartCameraBlend();
    f();
}

/* start easing from the current camera, over 48 frames */
void StartCameraBlend(void) {
    g_CameraBlend = *g_ActiveCamera;
    g_CameraBlendFrames = 0x30;
}

void BlendCameraFramesThen(void (*f)(void), u8 frames) {
    StartCameraBlendFrames(frames);
    f();
}

void StartCameraBlendFrames(u8 frames) {
    g_CameraBlend = *g_ActiveCamera;
    g_CameraBlendFrames = frames;
}

/* the camera's pitch */
s16 GetCameraPitch(void) {
    SVECTOR vp;
    SVECTOR vr;
    GetCameraView(&vp, &vr);
    return PitchBetween(&vp, &vr);
}

s16 PitchBetween(SVECTOR *a, SVECTOR *b) {
    s32 dz = a->vz - b->vz;
    s32 dx = a->vx - b->vx;
    s16 d = SquareRoot0(dz * dz + dx * dx);
    return ratan2(a->vy - b->vy, d);
}

/* the camera's heading */
s16 GetCameraHeading(void) {
    SVECTOR vp;
    SVECTOR vr;
    GetCameraView(&vp, &vr);
    return HeadingBetween(&vp, &vr);
}

s16 HeadingBetween(SVECTOR *a, SVECTOR *b) {
    return ratan2(a->vx - b->vx, a->vz - b->vz);
}

void GetCameraView(SVECTOR *vp, SVECTOR *vr) {
    vp->vx = g_ActiveCamera->base.vpx;
    vp->vy = g_ActiveCamera->base.vpy;
    vp->vz = g_ActiveCamera->base.vpz;
    vr->vx = g_ActiveCamera->base.vrx;
    vr->vy = g_ActiveCamera->base.vry;
    vr->vz = g_ActiveCamera->base.vrz;
}

void SetScript(StageActor *a, AnimEntry *script) {
    a->script = script;
    a->index = 0;
    a->retScript = NULL;
    a->retIndex = 0;
    a->animFlags &= 0xF9FF;
    AnimStep(a);
}

/* SetScriptAtEnd: the same, from the last entry, playing backwards (0x200) */
void SetScriptAtEnd(StageActor *a, AnimEntry *script) {
    a->script = script;
    a->index = AnimScriptLength(a) - 1;
    a->retScript = NULL;
    a->retIndex = 0;
    a->animFlags |= 0x200;
    AnimStep(a);
}

void SetScriptCopy(StageActor *a, AnimEntry *script) {
    a->script = script;
    a->index = 0;
    a->retScript = NULL;
    a->retIndex = 0;
    a->animFlags &= 0xF9FF;
    AnimStep(a);
}

void AnimStepNow(StageActor *a) {
    AnimStep(a);
}

/* every actor's animation, once a frame: those with flag 0x1000, or all of them while D_801270C0 is 1 */
void AnimateActors(void) {
    StageActor *a = g_Actors;
    s32 i;
    for (i = 0; i < 0x60; i++, a++) {
        if (D_801270C0 == 1 || (a->animFlags & 0x1000)) {
            AnimTick(a);
        }
    }
}

/* one actor's animation frame: count down the pose, then move to the next entry (forwards, backwards for 0x200, or
   back to the start for 0x400) and show it */
void AnimTick(StageActor *a) {
    s32 n;
    a->animFlags &= 0x9FFF;
    if (a->kind == 0) {
        return;
    }
    if (a->react == 0x11) {
        return;
    }
    if (a->animTimer == 0) {
        return;
    }
    if (--a->animTimer > 0) {
        return;
    }
    if (a->script == NULL) {
        return;
    }
    if (a->animFlags & 0x400) {
        if (--a->index < 0) {
            a->index = 1;
            a->animFlags &= 0xFBFF;
        }
    } else if (a->animFlags & 0x200) {
        if (--a->index < 0) {
            n = AnimScriptLength(a);
            if (a->script[n].value != -1) {
                a->index = 0;
                a->animTimer = 0;
                return;
            }
            a->index = n - 1;
        }
    } else {
        a->index++;
    }
    AnimStep(a);
}

extern AnimEntry D_8018D838[];  /* the default script (an idle) */

/* one step of an actor's animation script: show the entry's pose for its frames, or run its command
   (docs/animation_controller.md) */
void AnimStep(StageActor *a) {
    AnimEntry *e;
    AnimEntry *old;
    AnimEntry *r;
    s32 n;
    a->animFlags &= 0xBFFF;
    e = &a->script[a->index];
    if (e->value < 0) {
        switch (e->value) {
        case -2:
            r = a->retScript;
            if (r == NULL) {
                a->animTimer = 0;
                break;
            }
            goto ret;
        case -1:
            r = a->retScript;
            if (r != NULL) {
            ret:
                a->script = r;
                a->index = a->retIndex;
                a->retScript = NULL;
                a->retIndex = 0;
                AnimStep(a);
            } else {
                a->index = 0;
                AnimStep(a);
                a->animFlags |= 0x4000;
            }
            break;
        case -4:
            a->script = e->pose;
            a->index = 0;
            a->retScript = NULL;
            a->retIndex = 0;
            a->animFlags &= 0xF9FF;
            AnimStep(a);
            break;
        case -3:
            n = ++a->index;
            if (a->retScript != NULL) {
                AnimStep(a);
            } else {
                old = a->script;
                a->script = e->pose;
                a->index = 0;
                a->retScript = NULL;
                a->retIndex = 0;
                a->animFlags &= 0xF9FF;
                AnimStep(a);
                a->retScript = old;
                a->retIndex = n;
            }
            break;
        case -50:
            a->index++;
            AnimStep(a);
            a->animFlags |= 0x2000;
            break;
        case -5:
            a->animFlags |= 0x400;
            a->index--;
            AnimStep(a);
            break;
        }
    } else {
        a->model->pose = e->pose;
        a->animTimer = e->value;
    }
}

/* back to the default script */
void AnimStartDefault(StageActor *a) {
    a->script = D_8018D838;
    a->index = 0;
    a->retScript = NULL;
    a->retIndex = 0;
    a->animFlags &= 0xF9FF;
    AnimStep(a);
}

/* The number of entries in the actor's animation script before its first stop (-2), end (-1) or 0 */
s32 AnimScriptLength(StageActor *obj) {
    s32 i;
    i = 0;
    while (1) {
        switch (obj->script[i].value) {
        case -2:
        case -1:
        case 0:
            return i;
        case -50:
        case -3:
        case -4:
            break;
        }
        i++;
    }
}

void SetState(StageActor *a, u16 sub) {
    a->state = sub;
    a->stateCount = 0;
}

void NextState(StageActor *a) {
    a->stateCount = 0;
    a->state++;
}

void SetCounter(StageActor *a, u16 n) {
    a->stateCount = n;
}

void IncCounter(StageActor *a) {
    a->stateCount++;
}

inline void MoveObject(Mover *m) {
    m->vel[0] += m->accel[0];
    m->vel[1] += m->accel[1];
    m->vel[2] += m->accel[2];
    m->pos[0].w += m->vel[0];
    m->pos[1].w += m->vel[1];
    m->pos[2].w += m->vel[2];
}

void RestorePrevPos(Mover *m) {
    m->pos[0].w = m->prev[0].w;
    m->pos[1].w = m->prev[1].w;
    m->pos[2].w = m->prev[2].w;
}

/* two s16 packed in a word, x low and y high */
typedef union {
    s32 w;
    struct { s16 x, y; } v;
} XY;
extern s32 PathHitsModel(ModelObj *model, void *hitData, SVECTOR *from, SVECTOR *to);
extern s32 FindGround(SVECTOR *p);
extern s32 PosSVecDistSq(s16 *a, s16 *b);
extern s32 SVecDistSq(s16 *a, s16 *b);
extern s32 rsin(s32 a);
extern s32 rcos(s32 a);
extern void ApplyMatrixLV(MATRIX *m, VECTOR *v0, VECTOR *v1);

/* undo the move if the way from the last position to here crosses Musashi's model and he is nearer the last position */
s32 UndoMoveIntoPlayer(Mover *m) {
    Player *p = &g_Player;
    SVECTOR from;
    SVECTOR to;
    SVECTOR hit;
    from.vx = m->prev[0].h.i;
    from.vy = m->prev[1].h.i;
    from.vz = m->prev[2].h.i;
    to.vx = m->pos[0].h.i;
    to.vy = m->pos[1].h.i;
    to.vz = m->pos[2].h.i;
    hit = to;
    if (PathHitsModel(p->model, p->hitData, &from, &hit) == 0) {
        return 0;
    }
    if (PosSVecDistSq((s16 *)&p->pos, &from.vx) < PosSVecDistSq((s16 *)&p->pos, &to.vx)) {
        return 0;
    }
    m->pos[0].w = m->prev[0].w;
    m->pos[1].w = m->prev[1].w;
    m->pos[2].w = m->prev[2].w;
    return 1;
}

/* the same against another object's model */
s32 UndoMoveIntoObject(Mover *m, Mover *o) {
    SVECTOR from;
    SVECTOR to;
    SVECTOR hit;
    SVECTOR at;
    from.vx = m->prev[0].h.i;
    from.vy = m->prev[1].h.i;
    from.vz = m->prev[2].h.i;
    to.vx = m->pos[0].h.i;
    to.vy = m->pos[1].h.i;
    to.vz = m->pos[2].h.i;
    hit = to;
    if (PathHitsModel(o->model, o->hitData, &from, &hit) == 0) {
        return 0;
    }
    at.vx = o->pos[0].h.i;
    at.vy = o->pos[1].h.i;
    at.vz = o->pos[2].h.i;
    if (SVecDistSq(&at.vx, &from.vx) < SVecDistSq(&at.vx, &to.vx)) {
        return 0;
    }
    m->pos[0].w = m->prev[0].w;
    m->pos[1].w = m->prev[1].w;
    m->pos[2].w = m->prev[2].w;
    return 1;
}

s32 SnapToGround(Mover *m) {
    SVECTOR p;
    p.vx = m->pos[0].h.i;
    p.vy = m->pos[1].h.i;
    p.vz = m->pos[2].h.i;
    if (FindGround(&p) == 0) {
        return 0;
    }
    m->pos[0].h.i = p.vx;
    m->pos[1].h.i = p.vy;
    m->pos[2].h.i = p.vz;
    m->pos[0].h.frac = m->pos[1].h.frac = m->pos[2].h.frac = 0;
    return 1;
}

/* a 2D vector of length len at an angle (4096 a turn) */
XY *AngleToVec2(XY *out, s32 angle, s32 len) {
    XY v;
    angle = (angle - 0x400) & 0xFFF;
    v.v.x = (rcos(angle) * len) >> 12;
    v.v.y = (rsin(angle) * -len) >> 12;
    *out = v;
    return out;
}

/* velocity from a vector in the model's frame */
void SetLocalVelocity(Mover *m, VECTOR *v) {
    ApplyMatrixLV((MATRIX *)&m->model->coord.coord, v, (VECTOR *)m->vel);
}

/* velocity: straight ahead in the model's frame */
void SetForwardVelocity(Mover *m, s32 speed) {
    VECTOR v;
    v.vz = speed;
    v.vx = v.vy = 0;
    ApplyMatrixLV((MATRIX *)&m->model->coord.coord, &v, (VECTOR *)m->vel);
}

/* the horizontal velocity from a vector in the model's frame */
void SetLocalVelocityXZ(Mover *m, VECTOR *v) {
    VECTOR w;
    ApplyMatrixLV((MATRIX *)&m->model->coord.coord, v, &w);
    m->vel[0] = w.vx;
    m->vel[2] = w.vz;
}

void StopMotion(Mover *m) {
    m->vel[0] = m->vel[1] = m->vel[2] = 0;
    m->accel[0] = m->accel[1] = m->accel[2] = 0;
}

/* stop, with gravity 0.75 */
void StopWithHalfGravity(Mover *m) {
    m->vel[0] = m->vel[1] = m->vel[2] = 0;
    m->accel[0] = m->accel[2] = 0;
    m->accel[1] = 0xC000;
}

/* stop, with gravity 1.5 */
void StopWithGravity(Mover *m) {
    m->vel[0] = m->vel[1] = m->vel[2] = 0;
    m->accel[0] = m->accel[2] = 0;
    m->accel[1] = 0x18000;
}

/* the model follows: position plus offset */
void SyncModelPos(Mover *m) {
    ModelObj *o = m->model;
    o->coord.coord.t[0] = o->pos[0] = m->pos[0].h.i + m->ofs[0];
    o->coord.coord.t[1] = o->pos[1] = m->pos[1].h.i + m->ofs[1];
    o->coord.coord.t[2] = o->pos[2] = m->pos[2].h.i + m->ofs[2];
    o->flags |= 1;
}

extern MATRIX *RotMatrix(SVECTOR *r, MATRIX *m);
extern MATRIX *RotMatrixZYX(SVECTOR *r, MATRIX *m);
extern MATRIX *RotMatrixYXZ(SVECTOR *r, MATRIX *m);

/* the model's matrix from its rotation (ZYX), then the model follows (as SyncModelPos) */
inline void UpdateModelZYX(Mover *m) {
    ModelObj *o;
    if (m->model != NULL) {
        RotMatrixZYX(&m->model->rot, (MATRIX *)&m->model->coord.coord);
        o = m->model;
        o->coord.coord.t[0] = o->pos[0] = m->pos[0].h.i + m->ofs[0];
        o->coord.coord.t[1] = o->pos[1] = m->pos[1].h.i + m->ofs[1];
        o->coord.coord.t[2] = o->pos[2] = m->pos[2].h.i + m->ofs[2];
        o->flags |= 1;
    }
}

/* the same in YXZ order, then the model follows (as SyncModelPos) */
void UpdateModelYXZ(Mover *m) {
    ModelObj *o;
    if (m->model != NULL) {
        RotMatrixYXZ(&m->model->rot, (MATRIX *)&m->model->coord.coord);
        o = m->model;
        o->coord.coord.t[0] = o->pos[0] = m->pos[0].h.i + m->ofs[0];
        o->coord.coord.t[1] = o->pos[1] = m->pos[1].h.i + m->ofs[1];
        o->coord.coord.t[2] = o->pos[2] = m->pos[2].h.i + m->ofs[2];
        o->flags |= 1;
    }
}

/* the same with RotMatrix, then the model follows (as SyncModelPos) */
void UpdateModelRot(Mover *m) {
    ModelObj *o;
    if (m->model != NULL) {
        RotMatrix(&m->model->rot, (MATRIX *)&m->model->coord.coord);
        o = m->model;
        o->coord.coord.t[0] = o->pos[0] = m->pos[0].h.i + m->ofs[0];
        o->coord.coord.t[1] = o->pos[1] = m->pos[1].h.i + m->ofs[1];
        o->coord.coord.t[2] = o->pos[2] = m->pos[2].h.i + m->ofs[2];
        o->flags |= 1;
    }
}

extern void Square0(VECTOR *in, VECTOR *out);
extern s32 PosDistSq(s16 *a, s16 *b);
extern s32 (*g_FarTest)(Mover *m);    /* replaces the range test below when set */
extern s32 g_FarDistSq;
s32 TurnStep(s32 a, s32 b, s32 n);
s32 HeadingTo(Fixed *a, Fixed *b);
s32 HeadingToTarget(Mover *m);
s32 HeadingToPlayer(Mover *m);
s32 TargetInFront(Mover *m, s16 range);
s32 GroundDistSqTo(Mover *m, SVECTOR *p);

extern StageActor g_ActorSlots[97];   /* the actor table; slot 0 is never handed out */
extern ModelObj D_800B3DF0[];       /* the end of the model pool */
extern u8 *AllocModelInRange(s32 a, s32 b);
void FreeActor(StageActor *a);

extern u8 g_Daytime[];         /* nonzero: init values taken as they are (else x1.5) */
extern void InitModel(u8 *o, void *data);
extern void func_8001C810(u8 *o, void *data);
void RejectSpawn(StageActor *a);
StageActor *FindFreeActorAfter(StageActor *a);
StageActor *InitSpawnedActor(SpawnDef *d, StageActor *a, StageActor *parent);
/* an actor's set-up record: ActorInit (include/game.h) */

StageActor *FindLastFreeActor(void);
StageActor *SpawnActorFromDef(SpawnDef *d, StageActor *parent);
StageActor *SpawnActorFromDefAt(SpawnDef *d, StageActor *a);

extern u8 D_80190D1C[];         /* the default init record */
extern s16 g_NextActorId[];        /* the next actor id */
extern u16 g_SpawnRejected[];        /* bit 0: the kind's set-up turned the actor down */
extern void (**g_ActorHandlers)(StageActor *a);   /* the set-up handler of each kind */

extern SVECTOR D_800D3918;      /* no offset */
s32 MoveCollideOfs(Mover *m, s32 mode, SVECTOR *ofs);

void MoveObject(Mover *m);
s32 CollidePath(SVECTOR *from, SVECTOR *to, s32 mode);
extern s32 TraceMap(s16 mode, SVECTOR *from, SVECTOR *to);
extern u8 *AllocPrim(s32 n);
extern void SetPolyF3(POLY_F3 *p);
extern void SetRotMatrix(MATRIX *m);
extern void SetTransMatrix(MATRIX *m);
extern s32 RotTransPers(SVECTOR *v, s32 *sxy, s32 *p, s32 *flag);
extern void AddPrim(void *ot, void *p);

extern void SetLineF2(LINE_F2 *p);
extern void RotTransSV(SVECTOR *in, SVECTOR *out, s32 *flag);
extern u8 D_8018D848[];
void func_8012D098(StageActor *a, s32 n);
s32 PointHitsPlayer(SVECTOR *p, s32 r, s32 x);
s32 ActorSegmentHitsPlayer(StageActor *a, SVECTOR *p0, SVECTOR *p1);
s32 SegmentHitsPlayer(StageActor *a, SVECTOR *w0, SVECTOR *w1);
void HitPlayer(s32 flags, s32 b, s32 facing, s32 v, SVECTOR *p0, void *p1);
void FaceHelper(StageActor *a, SVECTOR *in, SVECTOR *out);

extern StageActor *D_801ED364;  /* the actor iterator's cursor */
extern StageActor *D_801ED360;  /* the actor it skips */
extern u8 g_GroundNormal[];
void CarryPlayerExact(StageActor *a);
void CarryPlayerClipped(StageActor *a);

extern u16 GetTPage(s32 tp, s32 abr, s32 x, s32 y);
extern void SetDrawMode(void *p, s32 dfe, s32 dtd, s32 tpage, RECT *tw);
void LoadWorldScreenMatrix(void);

extern s32 g_PlayerPosX;          /* his position words (read on their own here: as the struct, CSE folds them to one base) */
extern s32 D_80126B60;
extern s32 D_80126B64;
extern s16 g_PlayerX;          /* and their whole-unit halves */
extern s16 D_80126B62;
extern s16 D_80126B66;
void UpdateModelZYX(Mover *m);
void WorldToLocal16(MATRIX *m, VECTOR *in, VECTOR *out);
void LocalToWorld16(MATRIX *m, VECTOR *in, VECTOR *out);
void WorldToLocal(MATRIX *m, SVECTOR *in, SVECTOR *out);
void LocalToWorld(MATRIX *m, SVECTOR *in, SVECTOR *out);

extern s32 D_801ED358;          /* the squash scale (0x1000 = 1.0) */
extern s32 D_801ED35C;
void PlaySoundAtPoint(SVECTOR *v, u16 a, u16 b);

extern u8 D_8018D860[];
extern void StartRumbleScript(u8 *p);
void ShowDamage(StageActor *a, s32 n);
void ShowDefeat(StageActor *a);

extern s32 GetStat1Value(void);
extern void ApplyTransposeMatrixLV(MATRIX *m, VECTOR *v0, VECTOR *v1);
s32 ProjectPoint(SVECTOR *v, s32 *sxy);

extern void PosToSVec(Fixed *pos, SVECTOR *out);
extern void SVecToPos(SVECTOR *in, Fixed *pos);

s32 *ScreenPos(s32 *out, SVECTOR *v);

extern SVECTOR D_8018D850;
extern u8 D_8018D858[];
extern void SetFatalHit();

extern MATRIX *RotMatrixX(s32 r, MATRIX *m);
extern MATRIX *RotMatrixY(s32 r, MATRIX *m);
extern MATRIX *RotMatrixZ(s32 r, MATRIX *m);
extern MATRIX GsIDMATRIX;       /* an identity matrix (BSS, filled at boot) */

/* the model matrix from the rotation (X, Z, Y) and the position from the 16.16 position plus the offset.
   Matched 17 Oct: the identity copy inside `do { } while (0)` (a macro in the original, docs/decomp_recipes.md) */
void UpdateModelXZY(Mover *m) {
    ModelObj *o;
    ModelObj *p;
    MATRIX mat;
    o = m->model;
    if (o != NULL) {
        do { mat = GsIDMATRIX; } while (0);  /* a loop's end note ends cse's block: each RotMatrix call recomputes &mat */
        RotMatrixX(o->rot.vx, &mat);
        RotMatrixZ(o->rot.vz, &mat);
        RotMatrixY(o->rot.vy, &mat);
        *(MATRIX *)&o->coord.coord = mat;
        p = m->model;
        p->coord.coord.t[0] = p->pos[0] = m->pos[0].h.i + m->ofs[0];
        p->coord.coord.t[1] = p->pos[1] = m->pos[1].h.i + m->ofs[1];
        p->coord.coord.t[2] = p->pos[2] = m->pos[2].h.i + m->ofs[2];
        p->flags |= 1;
    }
}

/* a step from angle a toward angle b (4096 a turn, the short way round): the difference over n, at least 1.
   b is never assigned (the masked heading is a local): the inliner then keeps the parameter read-only and does not copy
   the argument, which TurnStepToward needs (docs/decomp_recipes.md) */
inline s32 TurnStep(s32 a, s32 b, s32 n) {
    s32 d;
    s32 t;
    s32 h;
    a &= 0xFFF;
    h = b & 0xFFF;
    if (a == h) {
        return 0;
    }
    d = h - a;
    if (d > 0x800) {
        t = a + 0x1000;
        d = h - t;
    }
    if (d < -0x800) {
        t = a - 0x1000;
        d = h - t;
    }
    if (d >= 0) {
        d /= n;
        if (d == 0) {
            d = 1;
        }
    } else {
        d /= n;
        if (d == 0) {
            d = -1;
        }
    }
    return d;
}

/* headings (4096 a turn) from one point to another on the ground */
inline s32 HeadingTo(Fixed *a, Fixed *b) {
    return (ratan2(a[2].h.i - b[2].h.i, b[0].h.i - a[0].h.i) - 0x400) & 0xFFF;
}

s32 HeadingToSV(SVECTOR *a, SVECTOR *b) {
    return (ratan2(a->vz - b->vz, b->vx - a->vx) - 0x400) & 0xFFF;
}

s32 HeadingToPoint(Fixed *a, SVECTOR *b) {
    return (ratan2(a[2].h.i - b->vz, b->vx - a[0].h.i) - 0x400) & 0xFFF;
}

/* the heading (high half) and pitch (low half) from a to b */
XY *HeadingPitchTo(XY *out, Fixed *a, Fixed *b) {
    XY v;
    s32 dz = b[2].h.i - a[2].h.i;
    s32 dx = b[0].h.i - a[0].h.i;
    s32 dy = b[1].h.i - a[1].h.i;
    s32 yaw;
    s32 c;
    yaw = (ratan2(-dz, dx) - 0x400) & 0xFFF;
    v.v.y = yaw;
    c = rcos(yaw);
    dz = (dz * c + dx * rsin(yaw)) >> 12;
    v.v.x = ratan2(dy, -dz);
    *out = v;
    return out;
}

/* the heading from an object to Musashi's other point */
inline s32 HeadingToTarget(Mover *m) {
    return (ratan2(m->pos[2].h.i - g_Player.point[2], g_Player.point[0] - m->pos[0].h.i) - 0x400) & 0xFFF;
}

/* the heading from an object to Musashi */
inline s32 HeadingToPlayer(Mover *m) {
    return (ratan2(m->pos[2].h.i - g_Player.pos[2].h.i, g_Player.pos[0].h.i - m->pos[0].h.i) - 0x400) & 0xFFF;
}

/* a turn step for the model toward Musashi's other point */
s32 TurnStepToTarget(Mover *m, s16 n) {
    return TurnStep(m->model->rot.vy, HeadingToTarget(m), n);
}

/* a turn step for the model toward Musashi */
s32 TurnStepToPlayer(Mover *m, s16 n) {
    return TurnStep(m->model->rot.vy, HeadingToPlayer(m), n);
}

extern StageActor g_Actors[];     /* the actor table from slot 1 (its own symbol: FindFreeActor) */

/* a turn step from an angle toward the heading from a to b. Matched 17 Oct, night: the heading in a local before the call (its
   `- 0x400` is then emitted at once, not deferred to the inline's parameter copy) and TurnStep's b never assigned
   (docs/decomp_recipes.md) */
s16 TurnStepToward(Fixed *a, Fixed *b, s32 cur, s16 n) {
    s32 h = ratan2(a[2].h.i - b[2].h.i, b[0].h.i - a[0].h.i) - 0x400;
    return TurnStep(cur, h, n);
}

/* squared distance between two 16.16 points (integer parts) */
s32 DistSq(Fixed *a, Fixed *b) {
    VECTOR d;
    d.vx = a[0].h.i - b[0].h.i;
    d.vy = a[1].h.i - b[1].h.i;
    d.vz = a[2].h.i - b[2].h.i;
    Square0(&d, &d);
    return d.vx + d.vy + d.vz;
}

/* squared distance to Musashi's other point, or the most there is when it is not set */
s32 DistSqToTarget(Mover *m) {
    Player *p = &g_Player;
    if (p->pointUnset != 0) {
        return 0x7FFFFFFF;
    }
    return PosSVecDistSq((s16 *)m->pos, p->point);
}

/* squared distance to Musashi */
s32 DistSqToPlayer(Mover *m) {
    return PosDistSq((s16 *)m->pos, (s16 *)g_Player.pos);
}

/* DistSqToTarget's test as TargetInSight has it inlined (its own copy: the address is not taken through a pointer) */
static inline s32 point2_dist(Mover *m) {
    if (g_Player.pointUnset != 0) {
        return 0x7FFFFFFF;
    }
    return PosSVecDistSq((s16 *)m->pos, g_Player.point);
}

/* Musashi's other point is within dist (squared) and within range of the model's facing */
s32 TargetInSight(Mover *m, s16 range, s32 dist) {
    if (point2_dist(m) > dist) {
        return 0;
    }
    return TargetInFront(m, range);
}

/* Musashi's other point is within range of the model's facing */
s32 TargetInFront(Mover *m, s16 range) {
    s32 d = (HeadingToTarget(m) - m->model->rot.vy) & 0xFFF;
    if (d < 0x800) {
        return d < range;
    }
    return (0x1000 - d) < range;
}

/* squared distance to Musashi on the ground */
s32 GroundDistSqToPlayer(Mover *m) {
    SVECTOR p;
    p.vx = g_Player.pos[0].h.i;
    p.vy = g_Player.pos[1].h.i;
    p.vz = g_Player.pos[2].h.i;
    return GroundDistSqTo(m, &p);
}

/* squared distance to a point on the ground (heights left out) */
s32 GroundDistSqTo(Mover *m, SVECTOR *p) {
    SVECTOR a;
    SVECTOR b;
    a.vx = m->pos[0].h.i;
    a.vy = 0;
    a.vz = m->pos[2].h.i;
    b.vx = p->vx;
    b.vy = 0;
    b.vz = p->vz;
    return SVecDistSq(&a.vx, &b.vx);
}

/* count the timer down: 1 when it is (or reaches) 0 */
s32 TickTimer(Mover *m) {
    if (m->timer != 0) {
        return --m->timer == 0;
    }
    return 1;
}

/* the same, restarting it at n when it runs out */
s32 TickTimerReload(Mover *m, s32 n) {
    s32 r;
    if (m->timer == 0) {
        r = 1;
    } else {
        r = --m->timer == 0;
    }
    if (r) {
        m->timer = n;
        return 1;
    }
    return 0;
}

void SetMoverTimer(Mover *m, s32 n) {
    m->timer = n;
}

void SetHittable(Mover *m) {
    m->hitState |= 0x8000;
}

void ClearHittable(Mover *m) {
    m->hitState &= 0x7FFF;
}

/* far from Musashi's focus in depth (0x360 or more) */
s32 IsFarInDepth(Mover *m) {
    s32 d;
    if ((d = m->pos[2].h.i - g_Player.focus[2]) < 0) {
        d = -d;
    }
    return d >= 0x360;
}

/* far from Musashi's focus (squared distance over 0xFFFFF) */
s32 IsFarFromFocus(Mover *m) {
    s32 v[3];
    s32 r[3];
    v[0] = g_Player.focus[0] - m->pos[0].h.i;
    v[1] = g_Player.focus[1] - m->pos[1].h.i;
    v[2] = g_Player.focus[2] - m->pos[2].h.i;
    gte_ldlvl(v);
    gte_sqr0();
    gte_stlvnl(r);
    return r[0] + r[1] + r[2] > 0xFFFFF;
}

/* in range of Musashi's focus: at least g_FarDistSq (squared), or the stage's own test when it set one */
s32 IsActorFar(Mover *m) {
    if (g_FarTest != NULL) {
        return g_FarTest(m);
    }
    return PosSVecDistSq((s16 *)m->pos, g_Player.focus) >= g_FarDistSq;
}

/* free an actor; one marked 0x8000 also marks its spawn definition as free again */
inline void DespawnActor(StageActor *a) {
    if (a->def != NULL && ((s16)a->animFlags & 0x8000)) {
        a->def->flags &= 0x7FFF;
    }
    FreeActor(a);
}

/* IsActorFar's test as DespawnIfFar has it inlined (its own copy, the test the other way round) */
static inline s32 in_range(Mover *m) {
    if (g_FarTest == NULL) {
        return PosSVecDistSq((s16 *)m->pos, g_Player.focus) >= g_FarDistSq;
    }
    return g_FarTest(m);
}

/* free the actor if it is in range of Musashi's focus */
s32 DespawnIfFar(StageActor *a) {
    if (!in_range((Mover *)a)) {
        return 0;
    }
    DespawnActor(a);
    return 1;
}

u8 *AllocActorSprite(void) {
    return AllocSpriteInRange(0x3E, 0x7D);
}

u8 *AllocActorModel(void) {
    return AllocModelInRange(0x26, 0x85);
}

/* the next free model after this actor's */
ModelObj *NextFreeModel(StageActor *a) {
    ModelObj *o;
    ModelObj *end = D_800B3DF0;
    for (o = a->model + 1; o != end; o++) {
        if (o->type == 0) {
            return o;
        }
    }
    return NULL;
}

/* clear an actor and its model */
inline void FreeActor(StageActor *a) {
    ModelObj *o = a->model;
    if (o != NULL) {
        switch (o->type) {
        case 2:
            ZeroFill(o, 0x38);
            break;
        case 1:
            ZeroFill(o, 0x84);
            break;
        }
    }
    ZeroFill(a, sizeof(StageActor));
}

/* the next free actor after a (from the first when a is NULL) */
inline StageActor *FindFreeActorAfter(StageActor *a) {
    StageActor *end = &g_ActorSlots[97];
    if (a == NULL) {
        a = &g_ActorSlots[1];
    } else {
        a++;
    }
    for (; a != end; a++) {
        if (a->kind == 0) {
            return a;
        }
    }
    return NULL;
}

/* the first free actor slot (slot 0 is never handed out). Matched 17 Oct: the start of the search as a separate
   single-use pointer to its own symbol and the base as the loop variable itself (docs/decomp_recipes.md) */
inline StageActor *FindFreeActor(void) {
    StageActor *first = g_Actors;
    StageActor *a = g_ActorSlots;
    StageActor *end;
    goto test;
found:
    return a;
test:
    end = a + 97;
    for (a = first; a != end; a++) {
        if (a->kind == 0) {
            goto found;
        }
    }
    return NULL;
}

/* the last free actor */
inline StageActor *FindLastFreeActor(void) {
    StageActor *a;
    StageActor *end = g_ActorSlots;
    for (a = end + 96; a != end; a--) {
        if (a->kind == 0) {
            return a;
        }
    }
    return NULL;
}

/* set an actor up from its init record, with a model (InitModel's kind); 0 when no model is free */
s32 SetupActor(StageActor *a, ActorInit *init) {
    ModelObj *o;
    a->init = init;
    if (g_Daytime[0] == 0) {
        a->hp = init->hp * 24 / 16;
    } else {
        a->hp = init->hp;
    }
    a->hitState = init->hitState;
    if (init->model != NULL) {
        o = AllocModelInRange(0x26, 0x85);
        a->model = (ModelObj *)o;
        if (o == NULL) {
            RejectSpawn(a);
            return 0;
        }
        InitModel(o, init->model);
    }
    if (init->hitData != 0) {
        a->hitData = init->hitData | 0x60000000;
    }
    return 1;
}

/* the same with func_8001C810's kind of model */
s32 SetupActorTrans(StageActor *a, ActorInit *init) {
    ModelObj *o;
    a->init = init;
    if (g_Daytime[0] == 0) {
        a->hp = init->hp * 24 / 16;
    } else {
        a->hp = init->hp;
    }
    a->hitState = init->hitState;
    if (init->model != NULL) {
        o = AllocModelInRange(0x26, 0x85);
        a->model = (ModelObj *)o;
        if (o == NULL) {
            RejectSpawn(a);
            return 0;
        }
        func_8001C810(o, init->model);
    }
    if (init->hitData != 0) {
        a->hitData = init->hitData | 0x60000000;
    }
    return 1;
}

/* spawn from a definition into the next free actor after parent */
inline StageActor *SpawnActorFromDef(SpawnDef *d, StageActor *parent) {
    StageActor *a = FindFreeActorAfter(parent);
    if (a == NULL) {
        return 0;
    }
    return InitSpawnedActor(d, a, parent);
}

/* spawn an actor of a kind at the parent's position (or the origin) */
StageActor *SpawnActor(s16 kind, StageActor *parent) {
    SpawnDef d;
    if (parent != NULL && parent->kind != 0) {
        d.x = parent->pos[0].h.i;
        d.y = parent->pos[1].h.i;
        d.z = parent->pos[2].h.i;
    } else {
        d.x = d.y = d.z = 0;
    }
    d.kind = kind;
    d.unk8 = d.flags = 0;
    d.unkE = d.unk10 = 0;
    d.unkC = 0x7FFF;
    return SpawnActorFromDef(&d, parent);
}

/* spawn an actor of a kind (with its second value) at the parent's position (or the origin) */
StageActor *SpawnActorArg(s16 kind, s16 unk8, StageActor *parent) {
    SpawnDef d;
    if (parent != NULL && parent->kind != 0) {
        d.x = parent->pos[0].h.i;
        d.y = parent->pos[1].h.i;
        d.z = parent->pos[2].h.i;
    } else {
        d.x = d.y = d.z = 0;
    }
    d.kind = kind;
    d.unk8 = unk8;
    d.flags = 0;
    d.unkE = d.unk10 = 0;
    d.unkC = 0x7FFF;
    return SpawnActorFromDef(&d, parent);
}

/* spawn from a definition, marking it as out */
inline StageActor *SpawnActorFromDefAt(SpawnDef *d, StageActor *a) {
    d->flags |= 0x8000;
    return InitSpawnedActor(d, a, NULL);
}

/* spawn from a definition into the last free actor (flag 0x800) or the first. Matched 17 Oct, night: the result doubles as the
   first-free search's end (`a = p + 97`, so the loop pointer conflicts with it and cannot inherit its a1 preference), and
   the call arm is written first with SpawnActorFromDefAt's body (jump.c swaps the arms of an if/else whose arms both end in a
   jump to the same place, docs/decomp_recipes.md) */
StageActor *SpawnFromDef(SpawnDef *d) {
    StageActor *a;
    if (d->flags & 0x800) {
        a = FindLastFreeActor();
    } else {
        StageActor *first = g_Actors;
        StageActor *p = g_ActorSlots;
        goto test;
found:
        a = p;
        goto done;
test:
        a = p + 97;
        for (p = first; p != a; p++) {
            if (p->kind == 0) {
                goto found;
            }
        }
        a = NULL;
    }
done:
    if (a != NULL) {
        d->flags |= 0x8000;
        return InitSpawnedActor(d, a, NULL);
    }
    return 0;
}

/* spawn from a definition into the last free actor */
StageActor *func_8012C820(SpawnDef *d) {
    StageActor *a = FindLastFreeActor();
    if (a == NULL) {
        return 0;
    }
    return SpawnActorFromDefAt(d, a);
}

/* make an actor from a spawn definition: position, flags and message from it, a serial id, the parent or the definition
   linked, then the kind's set-up handler. NULL (and the actor cleared, the definition free again) when that turns it down */
StageActor *InitSpawnedActor(SpawnDef *d, StageActor *a, StageActor *parent) {
    u16 *flg;
    a->kind = d->kind;
    a->origin[0] = a->pos[0].h.i = d->x;
    a->origin[1] = a->pos[1].h.i = d->y;
    a->origin[2] = a->pos[2].h.i = d->z;
    a->pos[0].h.frac = a->pos[1].h.frac = a->pos[2].h.frac = 0;
    a->param = d->unk8;
    a->animFlags = d->flags & 0xF7FF;
    a->unkFC = d->unkE;
    a->message = (void *)d->unk10;
    a->init = D_80190D1C;
    a->id = g_NextActorId[0];
    if (++g_NextActorId[0] == 0) {
        g_NextActorId[0] = 1;
    }
    if (parent != NULL) {
        a->parent = parent;
        a->def = NULL;
    } else {
        a->parent = NULL;
        a->def = d;
    }
    d->flags |= 0x8000;
    a->state = 0;
    flg = g_SpawnRejected;
    *flg &= 0xFFFE;
    g_ActorHandlers[a->kind](a);
    if (*flg & 1) {
        FreeActor(a);
        d->flags &= 0x7FFF;
        return NULL;
    }
    if (a->parent == NULL && a->model != NULL && a->model->type == 1 && d->unkC != 0x7FFF) {
        a->model->rot.vy = d->unkC;
    }
    if (a->model != NULL) {
        a->model->pos[0] = a->pos[0].h.i + a->ofs[0];
        a->model->pos[1] = a->pos[1].h.i + a->ofs[1];
        a->model->pos[2] = a->pos[2].h.i + a->ofs[2];
    }
    return a;
}

/* a kind's set-up turns its actor down: flag it for the spawner and clear the actor */
void RejectSpawn(StageActor *a) {
    g_SpawnRejected[0] |= 1;
    FreeActor(a);
}

s32 func_8012CB64(SVECTOR *p, s32 x0, s32 x1, s32 z0, s32 z1) {
    if (p->vx >= x0 && p->vx < x1 && p->vz >= z0 && p->vz < z1) return 1;
    return 0;
}

s32 MoveOnGround(Mover *m) {
    return MoveCollideOfs(m, 0, &D_800D3918);
}

s32 MoveCollide(Mover *m) {
    return MoveCollideOfs(m, 1, &D_800D3918);
}

s32 MoveCollidePassable(Mover *m) {
    return MoveCollideOfs(m, 0x11, &D_800D3918);
}

s32 MoveOnGroundOfs(Mover *m, SVECTOR *ofs) {
    return MoveCollideOfs(m, 0, ofs);
}

s32 MoveCollideAt(Mover *m, SVECTOR *ofs) {
    return MoveCollideOfs(m, 1, ofs);
}

s32 MoveCollidePassableAt(Mover *m, SVECTOR *ofs) {
    return MoveCollideOfs(m, 0x11, ofs);
}

/* one move: velocity and position stepped, then the way from the last position (both plus ofs) resolved by
   CollidePath; the result's 0x6000 bits stop the fall */
s32 MoveCollideOfs(Mover *m, s32 mode, SVECTOR *ofs) {
    SVECTOR from;
    SVECTOR to;
    s32 r;
    from.vx = m->prev[0].h.i;
    from.vy = m->prev[1].h.i;
    from.vz = m->prev[2].h.i;
    from.vx += ofs->vx;
    from.vy += ofs->vy;
    from.vz += ofs->vz;
    MoveObject(m);
    to.vx = m->pos[0].h.i;
    to.vy = m->pos[1].h.i;
    to.vz = m->pos[2].h.i;
    to.vx += ofs->vx;
    to.vy += ofs->vy;
    to.vz += ofs->vz;
    r = CollidePath(&from, &to, mode);
    to.vx -= ofs->vx;
    to.vy -= ofs->vy;
    to.vz -= ofs->vz;
    m->pos[0].h.i = to.vx;
    m->pos[1].h.i = to.vy;
    m->pos[2].h.i = to.vz;
    if (r & 0x6000) {
        m->vel[1] = 0;
    }
    return r;
}

/* standing on something: a short ray down from the position (8 units) leaves the height where it was */
s32 IsOnGround(Mover *m) {
    SVECTOR p;
    SVECTOR q;
    p.vx = m->pos[0].h.i;
    p.vy = m->pos[1].h.i;
    p.vz = m->pos[2].h.i;
    q = p;
    q.vy += 8;
    TraceMap(1, &p, &q);
    return p.vy == q.vy;
}

/* the move resolve: the first query's result, or a second query from the resolved point with the first's
   ground bit kept. Matched 17 Oct: `r2 &= 0xFFFF7FFF; r2 |= r & 0x8000;` as two statements (docs/decomp_recipes.md) */
s32 CollidePath(SVECTOR *from, SVECTOR *to, s32 mode) {
    s32 r;
    s32 r2;
    s32 type;
    SVECTOR hit;
    if (mode & 1) {
        r = TraceMap(mode, from, to) | ((u8 *)to)[6];
        if (((u8 *)to)[6] == 2 || ((u8 *)to)[6] == 0x1B) {
            r |= 0x1000;
        }
        return r;
    }
    r = TraceMap(0, from, to);
    if (r == 0) {
        return 0;
    }
    r2 = TraceMap(2, to, &hit);
    if (!(r2 & 0x6000)) {
        return 0;
    }
    r2 &= 0xFFFF7FFF;
    r2 |= r & 0x8000;
    type = ((u8 *)to)[6];
    to->vy = hit.vy;
    r2 |= type;
    if (type == 2 || type == 0x1B) {
        r2 |= 0x1000;
    }
    return r2;
}

/* a small red marker triangle at a point, 0x20 in front of its depth */
void func_8012CFA8(SVECTOR *v) {
    POLY_F3 *p;
    s32 sxy;
    s32 dummy;
    s32 flag;
    s32 z;
    p = (POLY_F3 *)AllocPrim(sizeof(POLY_F3));
    *(u32 *)&p->r0 = 0xFF;
    SetPolyF3(p);
    SetRotMatrix(&D_800AF630.wsm);
    SetTransMatrix(&D_800AF630.wsm);
    z = (RotTransPers(v, &sxy, &dummy, &flag) >> 2) - 0x20;
    if (z > 0) {
        *(s32 *)&p->x0 = sxy;
        p->x1 = p->x0 + 8;
        p->y1 = p->y0;
        p->x2 = p->x0;
        p->y2 = p->y0 + 8;
        AddPrim(g_WorldOt[D_800AF630.frame].org + z, p);
    }
}

extern void DebugDrawLine();

/* the actor's hit box (or the box n points at) drawn as 12 white lines (debug drawing)
   PORT NOTE: void, as the original (the return-delay slot holds lui v0): the file's s32 prototype becomes void and
   func_8012D38C calls it through ((s32 (*)())func_8012D098)(a, 0) */
void func_8012D098(StageActor *a, s32 n) {
    SVECTOR v[8];
    SVECTOR in;

    if (a != NULL && a->kind != 0) {
        if (n == 0) {
            if (a->hitData == 0) {
                return;
            }
            n = (a->hitData & 0x0FFFFFFF) | 0x80000000;
        }
        in.vx = AF(n, u16, 4); in.vy = AF(n, u16, 8); in.vz = AF(n, u16, 0xC);
        FaceHelper(a, &in, &v[0]);
        in.vx = AF(n, u16, 6); in.vy = AF(n, u16, 8); in.vz = AF(n, u16, 0xC);
        FaceHelper(a, &in, &v[1]);
        in.vx = AF(n, u16, 4); in.vy = AF(n, u16, 0xA); in.vz = AF(n, u16, 0xC);
        FaceHelper(a, &in, &v[2]);
        in.vx = AF(n, u16, 6); in.vy = AF(n, u16, 0xA); in.vz = AF(n, u16, 0xC);
        FaceHelper(a, &in, &v[3]);
        in.vx = AF(n, u16, 4); in.vy = AF(n, u16, 8); in.vz = AF(n, u16, 0xE);
        FaceHelper(a, &in, &v[4]);
        in.vx = AF(n, u16, 6); in.vy = AF(n, u16, 8); in.vz = AF(n, u16, 0xE);
        FaceHelper(a, &in, &v[5]);
        in.vx = AF(n, u16, 4); in.vy = AF(n, u16, 0xA); in.vz = AF(n, u16, 0xE);
        FaceHelper(a, &in, &v[6]);
        in.vx = AF(n, u16, 6); in.vy = AF(n, u16, 0xA); in.vz = AF(n, u16, 0xE);
        FaceHelper(a, &in, &v[7]);
        DebugDrawLine(&v[0], &v[1], 0xFFFFFF);
        DebugDrawLine(&v[1], &v[3], 0xFFFFFF);
        DebugDrawLine(&v[3], &v[2], 0xFFFFFF);
        DebugDrawLine(&v[2], &v[0], 0xFFFFFF);
        DebugDrawLine(&v[4], &v[5], 0xFFFFFF);
        DebugDrawLine(&v[5], &v[7], 0xFFFFFF);
        DebugDrawLine(&v[7], &v[6], 0xFFFFFF);
        DebugDrawLine(&v[6], &v[4], 0xFFFFFF);
        DebugDrawLine(&v[0], &v[4], 0xFFFFFF);
        DebugDrawLine(&v[1], &v[5], 0xFFFFFF);
        DebugDrawLine(&v[2], &v[6], 0xFFFFFF);
        DebugDrawLine(&v[3], &v[7], 0xFFFFFF);
    }
}

s32 func_8012D38C(StageActor *a) {
    return ((s32 (*)())func_8012D098)(a, 0);
}

void func_8012D3AC(void) {
}

/* a line between two world points, in the colour given (debug drawing) */
void DebugDrawLine(SVECTOR *a, SVECTOR *b, u32 colour) {
    LINE_F2 *p;
    s32 dummy;
    s32 flag;
    s32 z;
    p = (LINE_F2 *)AllocPrim(sizeof(LINE_F2));
    *(u32 *)&p->r0 = colour;
    SetLineF2(p);
    SetRotMatrix(&D_800AF630.wsm);
    SetTransMatrix(&D_800AF630.wsm);
    z = RotTransPers(a, (s32 *)&p->x0, &dummy, &flag);
    if (z > 0 && flag >= 0 && RotTransPers(b, (s32 *)&p->x1, &dummy, &flag) > 0 && flag >= 0) {
        AddPrim(g_WorldOt[D_800AF630.frame].org + z, p);
    }
}

/* a line between two points of an actor's model frame */
void DebugDrawActorLine(StageActor *a, SVECTOR *p0, SVECTOR *p1, u32 colour) {
    SVECTOR w0;
    SVECTOR w1;
    LINE_F2 *p;
    s32 dummy;
    s32 flag;
    s32 z;
    FaceHelper(a, p0, &w0);
    FaceHelper(a, p1, &w1);
    p = (LINE_F2 *)AllocPrim(sizeof(LINE_F2));
    *(u32 *)&p->r0 = colour;
    SetLineF2(p);
    SetRotMatrix(&D_800AF630.wsm);
    SetTransMatrix(&D_800AF630.wsm);
    z = RotTransPers(&w0, (s32 *)&p->x0, &dummy, &flag);
    if (z > 0 && flag >= 0 && RotTransPers(&w1, (s32 *)&p->x1, &dummy, &flag) > 0 && flag >= 0) {
        AddPrim(g_WorldOt[D_800AF630.frame].org + z, p);
    }
}

void func_8012D5DC(void) {
}

/* the hit test of ActorSegmentHitsPlayer, also leaving v in Musashi's +0x40 */
s32 ActorSegmentDamagesPlayer(StageActor *a, SVECTOR *p0, SVECTOR *p1, s16 v) {
    if (ActorSegmentHitsPlayer(a, p0, p1) != 0) {
        g_Player.hitDamage = v;
        return 1;
    }
    return 0;
}

s32 ActorTouchesPlayer(Mover *m, s32 r, s32 x) {
    SVECTOR p;
    p.vx = m->pos[0].h.i;
    p.vy = m->pos[1].h.i;
    p.vz = m->pos[2].h.i;
    return PointHitsPlayer(&p, r, x);
}

/* within r (plus 0x20) of Musashi's chest (0x40 above his position): then HitPlayer */
s32 PointHitsPlayer(SVECTOR *p, s32 r, s32 x) {
    SVECTOR m;
    m.vx = g_Player.pos[0].h.i;
    m.vy = g_Player.pos[1].h.i - 0x40;
    m.vz = g_Player.pos[2].h.i;
    if (SVecDistSq(&p->vx, &m.vx) < (r + 0x20) * (r + 0x20)) {
        HitPlayer(1, 1, 0, x, p, D_8018D848);
        return 1;
    }
    return 0;
}

/* the actor's collision box (x0 x1 y0 y1 z0 z1 at +4) edges hit Musashi: bit 1 the four x edges, 2 the y, 4 the z */
s32 HitBoxEdgesHitPlayer(StageActor *a, s32 edges) {
    SVECTOR p0;
    SVECTOR p1;
    s16 *h = (s16 *)((a->hitData & 0x0FFFFFFF) | 0x80000000);

    if (edges & 1) {
        p0.vx = h[2]; p0.vy = h[4]; p0.vz = h[6];
        p1.vx = h[3]; p1.vy = h[4]; p1.vz = h[6];
        if (ActorSegmentHitsPlayer(a, &p0, &p1) != 0) return 1;
        p0.vx = h[2]; p0.vy = h[5]; p0.vz = h[6];
        p1.vx = h[3]; p1.vy = h[5]; p1.vz = h[6];
        if (ActorSegmentHitsPlayer(a, &p0, &p1) != 0) return 1;
        p0.vx = h[2]; p0.vy = h[4]; p0.vz = h[7];
        p1.vx = h[3]; p1.vy = h[4]; p1.vz = h[7];
        if (ActorSegmentHitsPlayer(a, &p0, &p1) != 0) return 1;
        p0.vx = h[2]; p0.vy = h[5]; p0.vz = h[7];
        p1.vx = h[3]; p1.vy = h[5]; p1.vz = h[7];
        if (ActorSegmentHitsPlayer(a, &p0, &p1) != 0) return 1;
    }
    if (edges & 2) {
        p0.vx = h[2]; p0.vy = h[4]; p0.vz = h[6];
        p1.vx = h[2]; p1.vy = h[5]; p1.vz = h[6];
        if (ActorSegmentHitsPlayer(a, &p0, &p1) != 0) return 1;
        p0.vx = h[2]; p0.vy = h[4]; p0.vz = h[7];
        p1.vx = h[2]; p1.vy = h[5]; p1.vz = h[7];
        if (ActorSegmentHitsPlayer(a, &p0, &p1) != 0) return 1;
        p0.vx = h[3]; p0.vy = h[4]; p0.vz = h[6];
        p1.vx = h[3]; p1.vy = h[5]; p1.vz = h[6];
        if (ActorSegmentHitsPlayer(a, &p0, &p1) != 0) return 1;
        p0.vx = h[3]; p0.vy = h[4]; p0.vz = h[7];
        p1.vx = h[3]; p1.vy = h[5]; p1.vz = h[7];
        if (ActorSegmentHitsPlayer(a, &p0, &p1) != 0) return 1;
    }
    if (edges & 4) {
        p0.vx = h[2]; p0.vy = h[4]; p0.vz = h[6];
        p1.vx = h[2]; p1.vy = h[4]; p1.vz = h[7];
        if (ActorSegmentHitsPlayer(a, &p0, &p1) != 0) return 1;
        p0.vx = h[2]; p0.vy = h[5]; p0.vz = h[6];
        p1.vx = h[2]; p1.vy = h[5]; p1.vz = h[7];
        if (ActorSegmentHitsPlayer(a, &p0, &p1) != 0) return 1;
        p0.vx = h[3]; p0.vy = h[4]; p0.vz = h[6];
        p1.vx = h[3]; p1.vy = h[4]; p1.vz = h[7];
        if (ActorSegmentHitsPlayer(a, &p0, &p1) != 0) return 1;
        p0.vx = h[3]; p0.vy = h[5]; p0.vz = h[6];
        p1.vx = h[3]; p1.vy = h[5]; p1.vz = h[7];
        if (ActorSegmentHitsPlayer(a, &p0, &p1) != 0) return 1;
    }
    return 0;
}

/* Matched 17 Oct: the first call written without its argument (the callee reads this function's a0, as the
   pass-through row of docs/decomp_recipes.md); with `SetFatalHit(a)` the `a0 = 1` of the second call depends on the
   first and sched1 places it ahead of the stack arguments' addresses */
void HitPlayerFatal(StageActor *a) {
    SetFatalHit();
    HitPlayer(1, 0xC001, 0, 1000, &D_8018D850, D_8018D858);
}

StageActor *FirstActor(StageActor *skip);
StageActor *NextActor(void);

s32 DamageActorsNear(StageActor *a, s32 speed, s32 angle, s32 n) {
    StageActor *o;
    s32 r;
    s32 v;
    s16 *h;

    o = FirstActor(a);
    if (o != NULL) {
        if (a->hitData == 0) {
            r = 0x80;
        } else {
            h = (s16 *)(a->hitData & 0x0FFFFFFF);
            r = abs(h[2]);
            v = abs(h[3]);
            if (r < v) r = v;
            v = abs(h[4]);
            if (r < v) r = v;
            v = abs(h[5]);
            if (r < v) r = v;
            v = abs(h[6]);
            if (r < v) r = v;
            v = abs(h[7]);
            if (r < v) r = v;
        }
        r = r * r;
        do {
            if (o->hitState & 0x8000) {
                if (!(o->hitState & 0x4000) && (u16)o->hitCode != n
                    && !(o->hitMask & 1) && PosDistSq((s16 *)a->pos, (s16 *)o->pos) < r) {
                    o->hitDamage = speed;
                    o->hitAngle = angle;
                    o->hitCode = n;
                    o->hitState |= 1;
                }
            }
            o = NextActor();
        } while (o != NULL);
    }
    return 0;
}

/* the actor iterator: the next live actor that is not the one skipped */
StageActor *NextActor(void) {
    StageActor *a;
    StageActor *end = &g_ActorSlots[97];
    StageActor *skip;
    if (D_801ED364 != end) {
        skip = D_801ED360;
        do {
            a = D_801ED364;
            if (a->kind != 0 && a != skip) {
                D_801ED364 = a + 1;
                return a;
            }
            D_801ED364++;
        } while (D_801ED364 != end);
    }
    D_801ED364 = NULL;
    return NULL;
}

/* start the iterator, skipping one actor (or none), and return the first */
StageActor *FirstActor(StageActor *skip) {
    StageActor *a;
    StageActor *start = &g_ActorSlots[1];
    StageActor *end = start + 96;
    D_801ED364 = start;
    D_801ED360 = skip;
    for (; D_801ED364 != end; D_801ED364++) {
        a = D_801ED364;
        if (a->kind != 0 && a != skip) {
            D_801ED364 = a + 1;
            return a;
        }
    }
    D_801ED364 = NULL;
    return NULL;
}

/* the segment between two points of an actor's model frame hits Musashi (SegmentHitsPlayer): note its facing */
s32 ActorSegmentHitsPlayer(StageActor *a, SVECTOR *p0, SVECTOR *p1) {
    SVECTOR w0;
    SVECTOR w1;
    FaceHelper(a, p0, &w0);
    FaceHelper(a, p1, &w1);
    if (SegmentHitsPlayer(a, &w0, &w1) != 0) {
        g_Player.hitAngle = a->model->rot.vy;
        return 1;
    }
    return 0;
}

/* the segment between two world points hits Musashi's model (unless the actor is marked not to), then HitPlayer */
s32 SegmentHitsPlayer(StageActor *a, SVECTOR *w0, SVECTOR *w1) {
    Player *p = &g_Player;
    if (a != NULL && a->shrinkTimer != 0) {
        return 0;
    }
    if (PathHitsModel(p->model, p->hitData, w0, w1) != 0) {
        HitPlayer(1, 1, 0, 10, w1, g_GroundNormal);
        return 1;
    }
    return 0;
}

void func_8012DFBC(void) {
    VECTOR unused;
}

void func_8012DFCC(void) {
}

void CarryPlayer(StageActor *a) {
    if (a->unk74 != 0) {
        CarryPlayerExact(a);
    } else {
        CarryPlayerClipped(a);
    }
}

/* Musashi rides the actor's model: his position into its frame, the model turned and moved, and back out */
void CarryPlayerExact(StageActor *a) {
    VECTOR wp;
    VECTOR out;
    VECTOR local;
    wp.vx = g_PlayerPosX;
    wp.vy = D_80126B60;
    wp.vz = D_80126B64;
    WorldToLocal16((MATRIX *)&a->model->coord.coord, &wp, &local);
    UpdateModelZYX((Mover *)a);
    LocalToWorld16((MATRIX *)&a->model->coord.coord, &local, &out);
    g_PlayerPosX = out.vx;
    D_80126B60 = out.vy;
    D_80126B64 = out.vz;
}

/* the same with whole units, Musashi moved only where the way is clear of the model (PathHitsModel) */
void CarryPlayerClipped(StageActor *a) {
    SVECTOR p;
    SVECTOR np;
    SVECTOR local;
    p.vx = g_PlayerX;
    p.vy = D_80126B62;
    p.vz = D_80126B66;
    WorldToLocal((MATRIX *)&a->model->coord.coord, &p, &local);
    UpdateModelZYX((Mover *)a);
    LocalToWorld((MATRIX *)&a->model->coord.coord, &local, &np);
    if (PathHitsModel(a->model, (void *)a->hitData, &np, &p) != 0) {
        g_PlayerX = p.vx;
        D_80126B62 = p.vy;
        D_80126B66 = p.vz;
    }
}

s32 func_8012E27C(void) {
    return 1;
}

void func_8012E284(void) {
}

/* a draw-mode primitive at a depth: semi-transparency mode abr from there on */
void AddDrawModeAt(s32 z, s32 abr) {
    u32 *ot;
    u8 *p;
    if (z > 0) {
        ot = g_WorldOt[D_800AF630.frame].org + z;
        p = AllocPrim(0xC);
        SetDrawMode(p, 0, 0, GetTPage(0, abr, 0, 0), NULL);
        AddPrim(ot, p);
    }
}

/* the GTE's matrices: world to screen */
inline void LoadWorldScreenMatrix(void) {
    SetRotMatrix(&D_800AF630.wsm);
    SetTransMatrix(&D_800AF630.wsm);
}

/* squash and stretch: ease the scale toward a target set by Musashi's +0x188 (1.0 at 0, a third more at 0x90), then
   give the model that height and the inverse width. The quotient goes back into t (a global pseudo the allocator
   cannot tie), k is set before d (sched1's tie-break), o1 is the block's own temporary and abs() is one insn
   (docs/decomp_recipes.md) */
void func_8012E364(Mover *m) {
    s32 t;
    s32 d;
    s32 old;
    s32 v;
    s32 k;
    ModelObj *o;
    ModelObj *o1;
    m->hitState = 0;
    t = g_Player.absorbCount;
    if (t == 0) {
        D_801ED358 = 0x1000;
        D_801ED35C = 0x1000;
    }
    k = 0x1000;
    m->timer++;
    t = ((0x90 - t) << 12) / 144;
    d = D_801ED358 - t;
    if (d > 0) {
        D_801ED358 -= d >> 2;
    } else if (d < 0) {
        D_801ED358 += -d / 4;
    }
    old = D_801ED35C;
    o1 = m->model;
    v = D_801ED358 - old + k;
    D_801ED35C = k;
    D_801ED358 = v;
    o1->flags |= 0x10;
    o = m->model;
    o->scale.vx = o->scale.vz = abs(v);
    m->model->scale.vy = 0x1000;
}

/* ease the model's scale (x and z) a quarter of the way to 1.0, and count the timer down */
s32 EaseScaleNormal(Mover *m) {
    ModelObj *o;
    s32 v;
    o = m->model;
    v = o->scale.vx;
    v += (0x1000 - v) / 4;
    o->scale.vx = o->scale.vz = v;
    if (m->timer != 0) {
        return --m->timer == 0;
    }
    return 1;
}

void func_8012E4C8(StageActor *a) {
    a->model->scale.vx = a->model->scale.vz = 0x1000;
    a->hitDamage = 0;
    a->hitState |= 1;
    a->hitAngle = a->model->rot.vy + 0x800;
    a->hitCode = 1;
}

/* the first live actor of a kind other than skip */
StageActor *FindOtherActorByKind(StageActor *skip, s32 kind) {
    StageActor *a = &g_ActorSlots[1];
    StageActor *end = a + 96;
    for (; a != end; a++) {
        if (a != skip && a->kind == kind) {
            return a;
        }
    }
    return NULL;
}

/* the first actor of a kind */
StageActor *FindActorByKind(s32 kind) {
    StageActor *a = &g_ActorSlots[1];
    StageActor *end = a + 96;
    for (; a != end; a++) {
        if (a->kind == kind) {
            return a;
        }
    }
    return NULL;
}

/* the first actor of a kind with a given +0x70 */
StageActor *FindActorByKindArg(s32 kind, s16 n) {
    StageActor *a = &g_ActorSlots[1];
    StageActor *end = a + 96;
    for (; a != end; a++) {
        if (a->kind == kind && a->param == n) {
            return a;
        }
    }
    return NULL;
}

/* PlaySoundId(a, b) when the point is on screen (within 199 by 169 of the centre) */
inline void PlaySoundAtPoint(SVECTOR *v, u16 a, u16 b) {
    s32 sxy;
    s32 p;
    s32 flag;
    LoadWorldScreenMatrix();
    RotTransPers(v, &sxy, &p, &flag);
    if (flag >= 0 && (u16)(((s16 *)&sxy)[0] + 199) < 399 && (u16)(((s16 *)&sxy)[1] + 169) < 339) {
        PlaySoundId(a, b);
    }
}

/* PlaySoundId(a, b), from the actor's model position when it is on screen (always, without a model) */
void PlaySoundAtActor(StageActor *a, u16 x, u16 y) {
    SVECTOR v;
    if (a->model == NULL) {
        PlaySoundId(x, y);
        return;
    }
    v.vx = a->model->coord.coord.t[0];
    v.vy = a->model->coord.coord.t[1];
    v.vz = a->model->coord.coord.t[2];
    PlaySoundAtPoint(&v, x, y);
}

/* the object is on screen within a box: x limit in the low half of lim, y limit in the high half */
s32 IsOnScreen(Mover *m, s32 lim) {
    s32 v[3];
    s32 sxy;
    s32 lx;
    s32 ly;
    s16 x;
    s16 y;
    MATRIX *mt;
    v[0] = m->pos[0].h.i;
    v[1] = m->pos[1].h.i;
    v[2] = m->pos[2].h.i;
    mt = &D_800AF630.wsm;
    gte_SetRotMatrix(mt);
    gte_SetTransMatrix(mt);
    gte_ldlv0(v);
    gte_rtps();
    gte_stsxy(&sxy);
    x = ((s16 *)&sxy)[0];
    lx = (s16)lim;
    if (x >= 0) {
        if (lx < x) {
        out_x:
            return 0;
        }
    } else if (lx < -x) {
        goto out_x;
    }
    y = ((s16 *)&sxy)[1];
    ly = lim >> 16;
    if (y >= 0) {
        if (ly < y) {
        out_y:
            return 0;
        }
    } else {
        if (ly < -y) {
            goto out_y;
        }
    }
    return 1;
}

void ShowModel(StageActor *a) {
    a->model->unk04 &= 0x7FFFFFFF;
}

void HideModel(StageActor *a) {
    a->model->unk04 |= 0x80000000;
}

void ToggleModel(StageActor *a) {
    a->model->unk04 ^= 0x80000000;
}

/* put an object at a point, facing its pad (heading), and update its model */
void PlaceObject(Mover *m, SVECTOR *p) {
    ModelObj *o = m->model;
    m->pos[0].h.i = p->vx;
    m->pos[1].h.i = p->vy;
    m->pos[2].h.i = p->vz;
    m->pos[0].h.frac = m->pos[1].h.frac = m->pos[2].h.frac = 0;
    if (o != NULL) {
        o->rot.vy = p->pad;
        UpdateModelZYX(m);
    }
}

/* take pending damage (+0x60), scaled by the init record's damageScale (at least 1); a type 0x1D hit notes the position */
void TakeDamage(StageActor *a) {
    s32 n;
    if (a->hitDamage != 0) {
        if (*(u8 *)&a->hitCode == 0x1D) {
            a->hitFlags = 0;
            a->hitPos[0] = a->pos[0].h.i;
            a->hitPos[1] = a->pos[1].h.i;
            a->hitPos[2] = a->pos[2].h.i;
        }
        if (a->init != NULL) {
            n = (a->hitDamage * ((ActorInit *)a->init)->damageScale) >> 12;
            if (n <= 0) {
                n = 1;
            }
        } else {
            n = a->hitDamage;
        }
        ShowDamage(a, n);
        if (a->hitFlags & 1) {
            ShowDefeat(a);
            StartRumbleScript(D_8018D860);
        }
    }
}

/* a part's local matrix from the model's current pose (8- or 12-byte records; none: the model's own matrix) */
void GetPartLocalMatrix(StageActor *a, s32 part, MATRIX *out) {
    ModelObj *o = a->model;
    PoseRec12 *p = o->pose;
    SVECTOR r;
    SVECTOR unused;                 /* the original's frame has room for a second vector */
    if (p == NULL) {
        *out = *(MATRIX *)&o->coord.coord;
    } else if ((u32)p & 0x01000000) {
        PoseRec8 *q = (PoseRec8 *)((u32)p & 0xFEFFFFFF) + part;
        s32 w;
        r.vx = q->a0;
        w = *(s32 *)q;
        r.vy = q->b1 | ((w & 0xF) << 8);
        r.vz = ((w >> 16) & 0xFF) | ((w & 0xF0) << 4);
        RotMatrixZYX(&r, out);
        out->t[0] = q->t[0];
        out->t[1] = q->t[1];
        out->t[2] = q->t[2];
    } else {
        p += part;
        r.vx = p->a[0];
        r.vy = p->a[1];
        r.vz = p->a[2];
        RotMatrixZYX(&r, out);
        out->t[0] = p->t[0];
        out->t[1] = p->t[1];
        out->t[2] = p->t[2];
    }
}

void GetPartWorldMatrix(StageActor *a, s32 part, MATRIX *out) {
    ModelObj *o = a->model;
    PoseRec12 *p = o->pose;
    SVECTOR r;
    SVECTOR unused;
    if (p == NULL) {
        *out = *(MATRIX *)&o->coord.coord;
    } else if ((u32)p & 0x01000000) {
        PoseRec8 *q = (PoseRec8 *)((u32)p & 0xFEFFFFFF) + part;
        s32 w;
        r.vx = q->a0;
        w = *(s32 *)q;
        r.vy = q->b1 | ((w & 0xF) << 8);
        r.vz = ((w >> 16) & 0xFF) | ((w & 0xF0) << 4);
        RotMatrixZYX(&r, out);
        out->t[0] = q->t[0];
        out->t[1] = q->t[1];
        out->t[2] = q->t[2];
    } else {
        p += part;
        r.vx = p->a[0];
        r.vy = p->a[1];
        r.vz = p->a[2];
        RotMatrixZYX(&r, out);
        out->t[0] = p->t[0];
        out->t[1] = p->t[1];
        out->t[2] = p->t[2];
    }
    gte_SetRotMatrix(&a->model->coord.coord);
    gte_ldclmv(&out->m[0][0]);
    gte_rtir();
    gte_stclmv(&out->m[0][0]);
    gte_ldclmv(&out->m[0][1]);
    gte_rtir();
    gte_stclmv(&out->m[0][1]);
    gte_ldclmv(&out->m[0][2]);
    gte_rtir();
    gte_stclmv(&out->m[0][2]);
    gte_SetTransMatrix(&a->model->coord.coord);
    gte_ldlv0(out->t);
    gte_rtv0tr();
    gte_stlvnl(out->t);
}

/* x less x * GetStat1Value() * 100 / 7680 */
s32 ScaleDownByStat1(s32 x) {
    return x - x * GetStat1Value() * 100 / 7680;
}

/* a point to the screen: xy and depth (SZ) */
s32 ProjectPointZ(SVECTOR *v, SVECTOR *out) {
    s32 z;
    s32 flag = ProjectPoint(v, (s32 *)out);
    gte_stsz(&z);
    out->vz = z;
    return flag;
}

/* the same with the depth over 4 (an OT index) */
s32 ProjectPointOtz(SVECTOR *v, SVECTOR *out) {
    s32 z;
    s32 flag = ProjectPoint(v, (s32 *)out);
    gte_stszotz(&z);
    out->vz = z;
    return flag;
}

/* a point through the world-to-screen matrix; returns the GTE flag */
s32 ProjectPoint(SVECTOR *v, s32 *sxy) {
    MATRIX *mt;
    s32 flag;
    mt = &D_800AF630.wsm;
    gte_SetRotMatrix(mt);
    gte_SetTransMatrix(mt);
    gte_ldv0(v);
    gte_rtps();
    gte_stsxy(sxy);
    gte_stflg(&flag);
    return flag;
}

/* a world point (whole units) into a matrix's frame */
inline void WorldToLocal(MATRIX *m, SVECTOR *in, SVECTOR *out) {
    VECTOR d;
    VECTOR r;
    d.vx = in->vx - m->t[0];
    d.vy = in->vy - m->t[1];
    d.vz = in->vz - m->t[2];
    ApplyTransposeMatrixLV(m, &d, &r);
    out->vx = r.vx;
    out->vy = r.vy;
    out->vz = r.vz;
}

/* the same for a 16.16 point */
void WorldToLocal16(MATRIX *m, VECTOR *in, VECTOR *out) {
    VECTOR d;
    VECTOR r;
    d.vx = in->vx - (m->t[0] << 16);
    d.vy = in->vy - (m->t[1] << 16);
    d.vz = in->vz - (m->t[2] << 16);
    ApplyTransposeMatrixLV(m, &d, &r);
    out->vx = r.vx;
    out->vy = r.vy;
    out->vz = r.vz;
}

/* a point of a matrix's frame into the world (whole units) */
void LocalToWorld(MATRIX *m, SVECTOR *in, SVECTOR *out) {
    s32 flag;
    SetRotMatrix(m);
    SetTransMatrix(m);
    RotTransSV(in, out, &flag);
}

/* the same for a 16.16 point */
void LocalToWorld16(MATRIX *m, VECTOR *in, VECTOR *out) {
    ApplyMatrixLV(m, in, out);
    out->vx += m->t[0] << 16;
    out->vy += m->t[1] << 16;
    out->vz += m->t[2] << 16;
}

/* a point of an actor's model frame in the world (named before its use was known) */
inline void FaceHelper(StageActor *a, SVECTOR *in, SVECTOR *out) {
    MATRIX *m = (MATRIX *)&a->model->coord.coord;
    s32 flag;
    SetRotMatrix(m);
    SetTransMatrix(m);
    RotTransSV(in, out, &flag);
}

/* a 16.16 point from the actor's model frame into the world (whole units) */
void ActorLocalToWorld16(StageActor *a, Fixed *p) {
    SVECTOR in;
    SVECTOR out;
    PosToSVec(p, &in);
    FaceHelper(a, &in, &out);
    SVecToPos(&out, p);
}

/* a world point into the actor's model frame */
void WorldToActorLocal(StageActor *a, SVECTOR *in, SVECTOR *out) {
    WorldToLocal((MATRIX *)&a->model->coord.coord, in, out);
}

/* Musashi's other point in the actor's model frame */
void TargetToActorLocal(StageActor *a, SVECTOR *out) {
    WorldToLocal((MATRIX *)&a->model->coord.coord, (SVECTOR *)g_Player.point, out);
}

/* a point on the screen (0 when the GTE flags an error) */
inline s32 *ScreenPos(s32 *out, SVECTOR *v) {
    s32 sxy = 0;
    s32 p;
    s32 flag;
    LoadWorldScreenMatrix();
    RotTransPers(v, &sxy, &p, &flag);
    if (flag < 0) {
        *out = sxy = 0;
    } else {
        *out = sxy;
    }
    return out;
}

/* Matched 17 Oct: &w through a pointer variable, so its pseudo has two uses and stays in s0 across the inlined call
   (docs/decomp_recipes.md). A point of the actor's model frame on the screen (0 when the GTE flags an error) */
s32 *ActorPointScreenPos(s32 *out, StageActor *a, SVECTOR *v) {
    SVECTOR w;
    s32 r;
    SVECTOR *wp = &w;
    MATRIX *m = (MATRIX *)&a->model->coord.coord;
    SetRotMatrix(m);
    SetTransMatrix(m);
    RotTransSV(v, wp, &r);
    *out = *ScreenPos(&r, wp);
    return out;
}

/* note a hit on Musashi: flags, three values and the two points */
void HitPlayer(s32 flags, s32 b, s32 facing, s32 v, SVECTOR *p0, void *p1) {
    g_Player.hitP0 = *p0;
    g_Player.hitP1 = *(SVECTOR *)p1;
    g_Player.hitCode = b;
    g_Player.hitAngle = facing;
    g_Player.hitDamage = v;
    g_Player.hitState |= flags;
}
