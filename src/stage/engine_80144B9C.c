/*
 * Stage engine, 0x80144B9C-0x801458E0: the second source file built without optimisation (-O0), between
 * engine_8013C98C.c and engine_801458E0.c (docs/stage_engine.md, "Source files"; docs/decomp_recipes.md section 6).
 */
#include "common.h"
#include "psyq.h"
#include "work.h"

/* the stage's room records (docs/demos.md); word 0 is the default */
extern s32 D_8018D220[];

/* a map's room record (GetRoomRecord) */
typedef struct {
    /* 0x00 */ s16 x, y, z;          /* SetAmbientColor */
    /* 0x06 */ s16 l0x, l0y, l0z;    /* the three lights' directions and colours */
    /* 0x0C */ u8 l0r, l0g, l0b;
    /* 0x0F */ u8 padF;
    /* 0x10 */ s16 l1x, l1y, l1z;
    /* 0x16 */ u8 l1r, l1g, l1b;
    /* 0x19 */ u8 pad19;
    /* 0x1A */ s16 l2x, l2y, l2z;
    /* 0x20 */ u8 l2r, l2g, l2b;
    /* 0x23 */ u8 pad23;
    /* 0x24 */ u16 unk24, unk26;
    /* 0x28 */ s32 unk28, unk2C, unk30, unk34;
    /* 0x38 */ u16 unk38, unk3A, unk3C, unk3E;
    /* 0x40 */ u8 unk40[12];
    /* 0x4C */ s32 unk4C, unk50, unk54, unk58;
    /* 0x5C */ s32 unk5C, unk60, unk64;
    /* 0x68 */ u8 unk68[0x20];
    /* 0x88 */ s32 unk88, unk8C, unk90;     /* SetCollisionMaps */
    /* 0x94 */ u8 *unk94, *unk98;           /* func_8013B83C */
    /* 0x9C */ s32 unk9C, unkA0, unkA4;
    /* 0xA8 */ void (*unkA8)(void);         /* func_8013B568 */
    /* 0xAC */ u8 unkAC[8];
    /* 0xB4 */ s32 unkB4, unkB8, unkBC, unkC0, unkC4;
    /* 0xC8 */ s32 *entries;                /* the entry records */
    /* 0xCC */ s32 padCC[2];
    /* 0xD4 */ s32 unkD4, unkD8;
} RoomRec;
/* a stage entry record (0x24 bytes): where Musashi starts and what runs; the one used is kept at D_80078E50 */
typedef struct {
    /* 0x00 */ u8 pad0[3];
    /* 0x03 */ u8 unk3;              /* the camera's mode (Camera +0xA0) */
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ s32 unkC;             /* Musashi's +0x198 unless it is D_8010F5C8 */
    /* 0x10 */ u16 x, y, z;
    /* 0x16 */ u16 dir;
    /* 0x18 */ void (*init)(void);
    /* 0x1C */ s32 unk1C;
    /* 0x20 */ void (*start)(void);
} StageEntry;
/* the stage request at g_EntryPoint (which entry, where to place Musashi) */
typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ StageEntry *entry;
    /* 0x08 */ s32 flags;            /* zero on a fresh load */
    /* 0x0C */ s32 unkC;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 entryIdx;          /* 0xFF: D_80078E50 */
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u8 unk18;
    /* 0x19 */ u8 pad19[3];
    /* 0x1C */ s32 *entries;
    /* 0x20 */ u16 x, y, z, dir;
} StageReq;
/* a model object: only its facing is set here */
typedef struct {
    /* 0x00 */ u8 pad0[0x12];
    /* 0x12 */ u16 dir;
} ModelLoad;
/* Musashi (game.h's Player at g_Player) as the loader sets him up */
typedef struct {
    /* 0x000 */ u8 pad0[4];
    /* 0x004 */ u16 xf;
    /* 0x006 */ s16 x;
    /* 0x008 */ u16 yf;
    /* 0x00A */ s16 y;
    /* 0x00C */ u16 zf;
    /* 0x00E */ s16 z;
    /* 0x010 */ u8 pad10[0x10];
    /* 0x020 */ ModelLoad *model;
    /* 0x024 */ u8 pad24[0x29];
    /* 0x04D */ u8 unk4D;
    /* 0x04E */ u8 pad4E[0x3A];
    /* 0x088 */ s16 unk88, unk8A, unk8C;
    /* 0x08E */ u8 pad8E[2];
    /* 0x090 */ s16 unk90, unk92, unk94;
    /* 0x096 */ u8 pad96[0x1A];
    /* 0x0B0 */ s32 unkB0;
    /* 0x0B4 */ u8 padB4[0x18];
    /* 0x0CC */ s32 unkCC;
    /* 0x0D0 */ u8 padD0[0x84];
    /* 0x154 */ s16 focus[3];
    /* 0x15A */ u8 pad15A[2];
    /* 0x15C */ s16 unk15C[3];
    /* 0x162 */ u8 pad162[0x36];
    /* 0x198 */ s32 unk198;
    /* 0x19C */ u8 *unk19C;
    /* 0x1A0 */ u8 pad1A0[0x48];
    /* 0x1E8 */ s32 unk1E8;
    /* 0x1EC */ s32 pad1EC;
    /* 0x1F0 */ s32 unk1F0;
} PlayerLoad;
typedef struct {
    /* 0x00 */ u8 pad0[0x3A];
    /* 0x3A */ u16 unk3A;
    /* 0x3C */ u16 pad3C;
    /* 0x3E */ u16 unk3E;
} StatsLoad;
/* the camera (engine.c's Camera at g_Camera); the loader writes +0xA0 as a byte */
typedef struct {
    /* 0x00 */ u8 pad0[0xA0];
    /* 0xA0 */ u8 mode;
} CameraLoad;
typedef struct {
    /* 0x0 */ s32 vx;
    /* 0x4 */ s32 vy;
    /* 0x8 */ s32 vz;
    /* 0xC */ u8 r;
    /* 0xD */ u8 g;
    /* 0xE */ u8 b;
} LightDir; /* GsF_LIGHT */
extern PlayerLoad g_Player;
extern StatsLoad g_Status;
extern StageReq g_EntryPoint;
extern CameraLoad g_Camera;
extern StageEntry D_80078E50;
extern u8 D_8010F5C8;
extern s32 D_8011DB14;
extern s32 D_8011DB1C;
extern s32 D_80128150;
extern u8 D_80126DB0[];
extern u16 D_80126DB6;
extern CameraLoad *g_ActiveCamera;
extern LightDir g_Lights[3];
extern u16 D_800B9AAC, D_800B9B00, D_800B9AB2, D_800B9B06, D_800B9AB6, D_800B9B0A;
extern s32 D_800B9AC4, D_800B9B18, D_800B9AC8, D_800B9B1C;
extern u8 D_800B9ABC, D_800B9ABD, D_800B9ABE, D_800B9B10, D_800B9B11, D_800B9B12;
extern u8 D_800B9ABF, D_800B9AC0, D_800B9AC1, D_800B9B13, D_800B9B14, D_800B9B15;
extern s32 g_EffectHandlers, g_ActorHandlers, g_PropHandlers;
extern u8 D_801151F0[8];
extern s32 g_SpawnListFixed, g_SpawnListRanged, D_801274D0, g_FarTest, D_801270B8, D_80127520;
extern s32 D_801151D8, D_8011DB28;
extern void EnableRumbleScripts(void);
extern void ResetSelectHold(void);
extern void func_8002AB64(void);
extern void PosToSVec(void *a, void *b);
extern void RestoreKeptCamera(void);
extern void SetAmbientColor(s32 x, s32 y, s32 z);
extern void ApplyLight(s32 n, LightDir *l);
extern void ResetBgLayers(void);
extern void SetupBgLayers(void);
extern void SetCollisionMaps(s32 a, s32 b, s32 c);
void func_8013B83C(u8 *a, u8 *b, s32 c);
void func_8013B568(void (*f)(void));
extern void func_800D02C0(s32 a);
extern void SetDemoStream(s32 a);
extern void SetupClockTint(s32 a, s32 b);
extern void PlaySoundId(s32 a, s32 b);
extern void *memcpy(void *dst, const void *src, u32 n);
extern s32 func_800CF854(void);
extern void func_8001C14C(void);
extern void ResetKeptCamera(void);
s32 GetRoomRecord(s32 id);

/* the stage loader: the room record of the map, the entry, Musashi's place, lights, the stage's code blocks */
void LoadRoom(void) {
    PlayerLoad *g = &g_Player;
    StatsLoad *q = &g_Status;
    register Work *w = &D_800AF630;
    StageReq *cd = &g_EntryPoint;
    CameraLoad *h = &g_Camera;
    RoomRec *room;
    StageEntry *entry;
    s32 *tbl;
    s16 i;
    void (*fn)(void);
    s32 first;

    EnableRumbleScripts();
    ResetSelectHold();
    if (cd->flags == 0) {
        room = (RoomRec *)GetRoomRecord(w->mapId);
        cd->entryIdx = 0;
        first = 1;
        D_8011DB14 = q->unk3A;
        D_8011DB1C = q->unk3E;
        D_80128150 = 100;
        func_8002AB64();
    } else {
        room = (RoomRec *)GetRoomRecord(w->mapId);
        first = 0;
    }
    cd->entries = room->entries;
    tbl = room->entries;
    if (cd->entryIdx == 0xFF) {
        entry = &D_80078E50;
    } else {
        entry = (StageEntry *)tbl[cd->entryIdx];
    }
    cd->unkC = entry->unk8;
    cd->unk14 = 0;
    g->unk4D = 0;
    if (entry->unkC != (s32)&D_8010F5C8) {
        g->unk198 = entry->unkC;
    }
    if (w->mapGroup == 0x1000 && w->unkA3DC == 0x1000) {
        g->x = g->unk88 = g->unk90 = cd->x;
        g->y = g->unk8A = g->unk92 = cd->y;
        g->z = g->unk8C = g->unk94 = cd->z;
        g->model->dir = cd->dir;
        cd->unk18 = 0;
    } else {
        g->x = g->unk88 = g->unk90 = entry->x;
        g->y = g->unk8A = g->unk92 = entry->y;
        g->z = g->unk8C = g->unk94 = entry->z;
        g->model->dir = entry->dir;
    }
    g->focus[0] = g->unk15C[0] = g->x;
    g->focus[1] = g->unk15C[1] = g->y;
    g->focus[2] = g->unk15C[2] = g->z;
    PosToSVec(&g->xf, D_80126DB0);
    D_80126DB6 = g->model->dir;
    if (w->mapGroup == 0x1000 && (w->unkA3DC == 0x1000 || w->unkA3DC == 0x2000) && first == 0) {
        entry->init();
        RestoreKeptCamera();
    } else {
        if (w->mapGroup == 0x1000 && w->unkA3DC == 0x3000) {
            h->mode = entry->unk3;
        } else {
            h->mode = 0;
        }
        entry->init();
    }
    if (w->mapId == 0x3069) {
        h->mode = entry->unk3;
    }
    g_ActiveCamera = h;
    SetAmbientColor(room->x, room->y, room->z);
    g_Lights[0].vx = room->l0x;
    g_Lights[0].vy = room->l0y;
    g_Lights[0].vz = room->l0z;
    g_Lights[0].r = room->l0r;
    g_Lights[0].g = room->l0g;
    g_Lights[0].b = room->l0b;
    ApplyLight(0, &g_Lights[0]);
    g_Lights[1].vx = room->l1x;
    g_Lights[1].vy = room->l1y;
    g_Lights[1].vz = room->l1z;
    g_Lights[1].r = room->l1r;
    g_Lights[1].g = room->l1g;
    g_Lights[1].b = room->l1b;
    ApplyLight(1, &g_Lights[1]);
    g_Lights[2].vx = room->l2x;
    g_Lights[2].vy = room->l2y;
    g_Lights[2].vz = room->l2z;
    g_Lights[2].r = room->l2r;
    g_Lights[2].g = room->l2g;
    g_Lights[2].b = room->l2b;
    ApplyLight(2, &g_Lights[2]);
    ResetBgLayers();
    D_800B9AAC = room->unk24;
    D_800B9B00 = room->unk26;
    D_800B9AC4 = room->unk28;
    D_800B9B18 = room->unk2C;
    D_800B9AC8 = room->unk30;
    D_800B9B1C = room->unk34;
    D_800B9AB2 = room->unk38;
    D_800B9B06 = room->unk3A;
    D_800B9AB6 = room->unk3C;
    D_800B9B0A = room->unk3E;
    D_800B9ABC = room->unk40[0];
    D_800B9ABD = room->unk40[1];
    D_800B9ABE = room->unk40[2];
    D_800B9B10 = room->unk40[3];
    D_800B9B11 = room->unk40[4];
    D_800B9B12 = room->unk40[5];
    D_800B9ABF = room->unk40[6];
    D_800B9AC0 = room->unk40[7];
    D_800B9AC1 = room->unk40[8];
    D_800B9B13 = room->unk40[9];
    D_800B9B14 = room->unk40[10];
    D_800B9B15 = room->unk40[11];
    SetupBgLayers();
    g->unkB0 = room->unk4C;
    g->unkCC = room->unk50;
    g->unk1E8 = room->unk54;
    g->unk1F0 = room->unk58;
    g_EffectHandlers = room->unk5C;
    g_ActorHandlers = room->unk60;
    g_PropHandlers = room->unk64;
    g->unk19C = room->unk68;
    SetCollisionMaps(room->unk88, room->unk8C, room->unk90);
    func_8013B83C(room->unk94, room->unk98, room->unk9C);
    func_8013B568(room->unkA8);
    func_800D02C0(room->unkD4);
    SetDemoStream(room->unkD8);
    for (i = 0; i < 8; i++) {
        D_801151F0[i] = *(i + (u8 *)room + 0xAC);  /* not room->unkAC[i]: -O0 adds i to room first */
    }
    g_SpawnListFixed = room->unkB4;
    g_SpawnListRanged = room->unkB8;
    D_801274D0 = room->unkBC;
    g_FarTest = room->unkC0;
    D_801270B8 = room->unkC4;
    D_80127520 = room->unkC4;
    D_801151D8 = 0;
    D_8011DB28 = 0;
    fn = entry->start;
    fn();
    SetupClockTint(room->unkA0, room->unkA4);
    PlaySoundId(0x1E, 0);
    if (cd->flags == 0) {
        D_80078E50 = *entry;
    }
    cd->entry = &D_80078E50;
    cd->flags = cd->flags & 0x7F000000;
    if (func_800CF854() != 0) {
        func_8001C14C();
        ResetKeptCamera();
    }
}

/* the room record of a map id; the -O0 `break` after the default's return still emits its jump */
s32 GetRoomRecord(s32 id) {
    switch (id) {
    case 0x1010: case 0x1052: case 0x1077: case 0x1094: case 0x2013:
    case 0x2015: case 0x2016: case 0x2017: case 0x2018: case 0x2019: case 0x201A:
    case 0x2055: case 0x2056: case 0x2057: case 0x2058: case 0x2059: case 0x205A: case 0x205B:
    case 0x207A: case 0x207B: case 0x207C: case 0x207D: case 0x207E: case 0x207F: case 0x2080:
    case 0x2097: case 0x2098: case 0x2099: case 0x209A: case 0x209B: case 0x209C: case 0x209D:
        return D_8018D220[id & 0xFFFF0FFF];
    default: return D_8018D220[0]; break;
    }
}
