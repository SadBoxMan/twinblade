#include "common.h"
#include "gte.h"
#include "psyq.h"

/* Five slots with an SPU RAM address each (0x10000, 0x14000, ...) */
typedef struct {
    /* 0x00 */ u8 pad0[2];
    /* 0x02 */ s16 unk2;
    /* 0x04 */ s16 unk4;
    /* 0x06 */ u8 pad6[2];
    /* 0x08 */ s16 unk8;
    /* 0x0A */ u8 padA[6];
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 pad11[3];
    /* 0x14 */ s32 spuAddr;
} SoundSlot; /* size 0x18 */

/* Sound channels: 0-7 and 8-15 are initialised differently */
typedef struct {
    /* 0x00 */ s16 unk0;
    /* 0x02 */ u8 pad2[2];
    /* 0x04 */ s32 unk4;
    /* 0x08 */ u8 pad8[2];
    /* 0x0A */ s16 unkA;
    /* 0x0C */ u8 padC[0x34];
    /* 0x40 */ s32 unk40;
    /* 0x44 */ u8 pad44[0xA];
    /* 0x4E */ u8 unk4E;
    /* 0x4F */ u8 pad4F;
    /* 0x50 */ u8 unk50;
    /* 0x51 */ u8 unk51;
    /* 0x52 */ u8 pad52[2];
} SoundChan; /* size 0x54 */

typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ u8 unk4;
    /* 0x5 */ u8 unk5;
    /* 0x6 */ u8 pad6[0x42];
} SoundUnk48; /* size 0x48 */

typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ u8 pad4[8];
} SoundUnkC; /* size 0xC */

extern SpuCommonAttr g_SpuCommonAttr;
extern s32 g_SoundVSyncCount;
extern s32 D_800A463C;
extern SoundSlot g_SoundSlot[5];
extern SoundChan g_SoundChan[16];
extern SoundUnk48 D_800A4C68[8];
extern SoundUnkC g_SoundTimer[8];

extern s32 D_800A4E68;
extern s16 D_800A4E6C;
extern s16 D_800A4E6E;
extern u8 D_800A4E70;
extern u8 D_800A4E7A;
extern u16 g_BgmFlags;
extern u16 g_SuspendedBgmFlags;
extern u16 g_MusicDuck;
extern s16 D_800A4EE4;
extern u8 D_800A4EE6;
extern s32 g_StageSfxTable;
extern s32 g_SoundRand;
extern s16 g_StageSfxTableId;
extern s16 D_800A4EF6;
extern s16 g_MusicVolume;
extern s16 g_SfxVolume;
extern s16 g_SfxMuteTimer;
extern u8 D_800A4F16;
extern u8 g_SoundLock;
extern u8 g_SfxTickPending;
extern u8 g_SoundStereo;
extern u8 g_SfxEnabled;
extern u8 g_BgmExtraParts;
extern u8 D_800A4F1D;
extern u8 D_800A4F1E;
extern s16 g_NextBgm;
extern s16 g_StartBgm;
extern s32 g_SoundFrameHook;
extern u8 g_CdFadeOut;
extern u8 D_800A46E4;
extern s32 g_KeyOffBits;
extern s32 g_ReverbOffBits;
extern s32 g_KeyOnBits;
extern s32 g_ReverbOnBits;

extern void SpuInit(void);
extern void SetReverbMode(s16 mode);
extern void func_80037D98(void);
extern void func_8002CC4C(void);
extern void ResetBankLoader(void);
extern void ResetSpuOwner(void);
extern void InitCdAudio(void);
extern void ClearBgmLoadQueue(void);


extern s32 D_800A4E7C;
extern u16 D_8006A990;
extern s32 g_SpuXferOwner;
extern s32 D_8007623C;
extern s32 g_CdAudioReqIds[];
extern s32 g_CdAudioReqCount;
extern s32 StopCdAudio();
extern s32 PlaySoundId();
extern u8 D_800B9CF0[];
extern void ReleaseSpuTransfer();
extern s32 PlaySfx();
extern void ReleaseAllSfx();
extern s16 g_BankLoadStep;
extern void ClearBankMap();
extern u8 D_800638FE[];
extern s32 D_80078EEC;
extern u8 D_80063900[];
extern s32 D_80078EFC;
extern u8 g_StatTable[];
extern s32 g_Stat0Level;
extern u8 g_SpuXferFlags;
extern u8 D_80076251[];

extern u8 g_Vars[];
extern u8 D_800B9E92[];
extern void StopBgm(void);
extern void StopCdTrack();
extern void SsSetSerialVol(char s_num, short voll, short volr); /* libsnd.h */

extern s32 D_800760E0;
extern void _SpuInit(s32 n);
extern u8 D_80063904[];
extern s32 D_80078EF4;
extern void ZeroFill(void *p, s32 size);
extern u8 g_VarBlock60[];
extern void FadeOutFlaggedSfxVoices();
extern void ReleaseAllScriptSfx();
extern s16 D_800760E8;
extern s16 D_800760EC;
extern void StepMovieFade();

extern u8 D_80063902[];
extern s32 GetStat3Exp();
extern s32 GetStat3ExpNeeded();
extern s32 GetStat1Exp();
extern s32 GetStat1ExpNeeded();
extern s32 GetStat2Exp();
extern s32 GetStat2ExpNeeded();
extern s32 GetStat0Exp();
extern s32 GetStat0ExpNeeded();
extern void PauseCdAudio();
extern u8 g_XaPlaying;
extern s32 g_PausedCdTrack;
extern void ResetSprite();

extern u8 D_800B9ED2[];
extern u8 D_800B9ED3[];
extern void DrawFadeBlack(s32 a, s32 b);
extern s16 D_800AF7CE;
extern void DrawAllSprites();
extern void DrawAllModels();
extern u8 D_800B9A11;
extern s32 D_80078EF0;
extern s32 GainStat0(s16 a);
extern void func_8001B26C();
extern s32 D_800C6D10;
extern s32 D_800C6D34;

extern void GsGetLw(void *c, void *m);
extern void GsInitCoordinate2(void *super, void *c);
extern void ResetModelFields();
extern s32 SpuRead(s32 a, s32 n);
extern s32 SpuSetTransferStartAddr(s32 a);
extern s32 D_80076218;
extern s32 PlaySfx(u32 a, s32 b);
extern void PlaySeq(s32 n);
extern s16 g_BgmSeq;

extern s32 D_80078F00;
extern s32 D_80078EF8;
extern void CdMix(u8 *v);

extern u8 g_BgmPacks[];
extern u8 g_StreamPhase;
extern void UpdateSeqVolume(u8 *p);
extern u8 g_SeqPlayer[];

extern s32 CdReadyCallback();
extern s32 D_8006AEF0;
extern u8 D_80076110;
extern s32 GetStat0Value();
extern void MulMatrix2(void *a, void *b);
extern void RotMatrix(void *r, void *m);

extern s16 D_800760E4;
extern void SsSetSerialAttr(s32 a, s32 b, s32 c);

extern void CloseSeq(s32 n);
extern s16 D_800A4E9A;
extern u8 *D_800762B0;
extern u8 g_SeqVoiceKeyed;

extern s32 ClaimSpuTransfer();
extern s32 CancelBankUpload();

extern s32 g_CdAudioHead;
extern s32 g_CdAudioTail;
extern u8 g_CdAudioStatus;
extern u8 D_8006ADD8[];
extern s16 g_ReverbDepth;
extern s32 D_800A4ECC;
extern u16 D_800A4ED4;
extern u16 D_800A4ED6;
extern void SpuSetReverbModeParam();

extern void PlayCdTrack(s32 n);

typedef struct { u8 b[0x1A]; } E1A;
typedef struct { u8 pad0[6]; s16 idx; u8 pad8[0x48]; E1A *list; u8 pad54[6]; u8 on; u8 pad5B[5]; } Ch60;
extern Ch60 g_SeqVoice[];

extern s32 SpuIsTransferCompleted(s32 n);

extern u16 D_8006A9C8[];
extern u16 D_800A4EE2;
typedef struct { u8 pad0[0x20]; s32 unk20; s32 unk24; s32 unk28; s32 unk2C; s16 unk30; u8 pad32[5]; u8 unk37; u8 unk38; u8 pad39[0x1B]; } Chan54;

extern void StopSfxTrackVoices(s32 k, s16 n);

extern void KeyOffSfxVoice(void *c, s16 n);
extern void CancelCdAudioRequest(s16 n);
extern void SpuNSetVoiceAttr(s32 n, void *a);
extern s32 D_800A63E8;
extern void StopAllSfx(void);

extern void PauseSeq(s32 n);

extern u16 D_8006A9EC[];
extern u16 g_BgmIndex;

extern s32 CdGetToc(void *p);
extern s8 D_8006AEF5;
extern s32 g_BgmLoadStep;
extern s32 D_8007610C;
extern s32 D_80076114;
extern u8 g_CdAudioError;
extern s32 D_80078F20;
extern s32 D_800A5BC8;
extern u8 D_800A63E4;
extern s32 D_800A6544;
extern u8 D_800C7D30[];

extern void PauseBgm(void);
extern u16 D_8006A9D4[];

extern void StopSfxTrack(u16 a);

extern void FlushSfxVoices(void);
extern void PlayBgm(u32 n);
extern void DoSoundCommand(u32 a, s32 b, s32 c);
extern void UpdateSfxVoices(void);
extern void UpdateSfxTracks(void);

extern u8 g_LoopSfxFlags;
extern s8 D_800760D0;
extern s8 D_800760D4;
extern s8 D_800760D8;
extern s8 D_800760DC;
extern void UpdateLoopSfx();

extern s32 g_StageImageEntry;
extern s32 D_80078E88;
extern s32 g_LoadQueueState;
extern s16 D_800B9ECA;
extern void SortPresetObjectGBody();
extern s32 GainStat3();
extern void GsGetLw(void *coord, void *m);

extern void ClearStageSfxTable(void);

extern u16 D_8006A9E0[];

typedef struct { u8 b0, b1, b2, b3, b4, b5, b6, b7; s32 w[10]; } Req;
extern Req g_CdAudioRing[];

extern s32 g_XaClipState;
extern u8 g_Flags[];
extern u8 g_ItemValues[];
extern s32 GetFlag(s32 n);
extern s32 GetVar(s32 a);
extern s32 VecDistSq();
extern s32 SVecDistSq();
extern s32 SVecPosDistSq();
extern s32 SquareRoot0(s32 a);
extern void ZeroFill(void *p, s32 size); /* zero-fills size bytes */
extern s32 DrawPrimFT4(u8 *a, s32 m, s32 k);
extern s32 DrawPrimF4(u8 *a, s32 m);
extern s32 DrawPrimLineG2();
extern s32 GetCdAudioState(void);
extern void GsSetLightMode(s32 m);

extern s32 DrawPrimG4();
extern s32 DrawPrimGT4();
extern s32 SetFlag();
extern void SetVar();
extern void UpdateClockPhase();
extern s32 PosDistSq();
extern s32 PosSVecDistSq();
extern void SVecToVec();
extern void VectorNormalSScaled();
extern s32 ApproachStepImpl(s32 a, s32 b, s32 c);
extern void RequestLoad(s32 a, void *b, s32 c, s32 d, s32 e);
extern void BgmPackStepImpl(void);
extern void ApplyBgColor(void);
extern u16 g_Pad0PrevHeld;
extern u16 g_Pad0Held;
extern s32 g_Clock;
extern s8 D_800AF7C2;
extern s8 D_800AF7C3;
extern s8 D_800AF7C4;
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } Mtx;

/* Controller state, one per port (0x4C bytes) */
typedef struct {
    /* 0x00 */ u8 pad0[4];
    /* 0x04 */ s32 unk4;
    /* 0x08 */ u8 data[0x44]; /* receive buffer handed to PadInitDirect */
} Pad;
extern Pad g_Pads[2];
extern s32 D_800A4ED0;
extern s32 DrawPrimG3();
extern s32 DrawPrimGT3();
extern void DrawFadeWhite(u8 a, s32 b);
extern void RotMatrixZYX(void *r, void *m);
extern s32 D_80078EE8;
typedef struct { s16 lo; s16 hi; } Pair;
extern Pair g_BankSlotMap[]; /* 0x79 pairs; D_800C532A is the hi half */
extern u8 D_800C532A[];
extern u8 g_StateSlots[];
extern s32 GetLevelCap(void);
extern void ApplyMatrixLV();
extern s32 D_800747C8;
extern u8 D_800B9A64;
extern s32 g_RumbleScript;
extern u8 D_800747C4;
extern u8 D_800747C5;
extern void ApplyLight();
extern s16 EaseValueStep(s16 a, s16 b, s16 c);
extern s16 EaseAngleStepRec(s16 a, s16 b, s16 c, s16 *p);

void ClearBankMap(void) {
    s16 v = -1;
    u32 i;
    for (i = 0; i < 0x1E4; i += 4) {
        *(s16 *)((u8 *)g_BankSlotMap + i) = v;
        *(s16 *)(D_800C532A + i) = v;
    }
}

/*
 * Sound init: SPU master/CD volume and reverb, then default state for the
 * sound driver (5 SPU RAM slots, 16 channels, misc. mixer variables).
 */
void InitSound(void)
{
    SpuEnv env;
    s32 i;
    s32 voice;
    SoundChan *ch;

    SpuInit();
    SsInit();

    g_SpuCommonAttr.mask = 0x23CF;
    g_SpuCommonAttr.mvol.left = 0x3FFF;
    g_SpuCommonAttr.mvol.right = 0x3FFF;
    g_SpuCommonAttr.cd.volume.left = 0x3FFF;
    g_SpuCommonAttr.cd.volume.right = 0x3FFF;
    g_SpuCommonAttr.mvolmode.left = 0;
    g_SpuCommonAttr.mvolmode.right = 0;
    g_SpuCommonAttr.cd.reverb = 0;
    g_SpuCommonAttr.cd.mix = 1;
    g_SpuCommonAttr.ext.mix = 0;
    SpuSetCommonAttr(&g_SpuCommonAttr);
    SpuReserveReverbWorkArea(1);
    SetReverbMode(4);
    SpuSetReverb(1);
    func_80037D98();

    D_800A4E68 = 0x3C;
    D_800A4E6C = 0x2F;
    D_800A4E6E = 0x2F;
    D_800A4E70 = 1;
    g_SfxTickPending = 1;
    g_SoundStereo = 1;
    D_800A4EF6 = 1;
    D_800A463C = 0x1010;
    g_SoundVSyncCount = 0;
    D_800A4E7A = 0;
    D_800A46E4 = 0;
    g_SoundSlot[0].spuAddr = 0x10000;
    g_SoundSlot[1].spuAddr = 0x14000;
    g_SoundSlot[2].spuAddr = 0x18000;
    g_SoundSlot[3].spuAddr = 0x39F00;

    for (i = 0; i < 8; i++) {
        g_SoundTimer[i].unk0 = 0;
    }
    for (i = 0; i < 5; i++) {
        g_SoundSlot[i].unk10 = 1;
        g_SoundSlot[i].unk4 = 0;
        g_SoundSlot[i].unk2 = -1;
    }
    for (i = 0; i < 8; i++) {
        g_SoundChan[i].unk0 = 0;
    }
    voice = 16;
    ch = &g_SoundChan[8];
    for (i = 0; i < 8; i++, voice++, ch++) {
        ch->unk51 = i;
        ch->unkA = voice;
        ch->unk4E = 0;
        ch->unk4 = 0;
        ch->unk40 = 0;
        ch->unk50 = 0;
        D_800A4C68[i].unk0 = voice;
        D_800A4C68[i].unk4 = 0;
        D_800A4C68[i].unk5 = 0;
    }
    func_8002CC4C();

    g_SfxVolume = 0x7F;
    g_MusicVolume = 0x7F;
    g_SfxEnabled = 1;
    g_CdFadeOut = 0;
    g_KeyOffBits = 0;
    g_KeyOnBits = 0;
    g_ReverbOnBits = 0;
    g_ReverbOffBits = 0;
    g_SoundLock = 0;
    g_BgmFlags = 0;
    g_SuspendedBgmFlags = 0;
    g_StageSfxTableId = 0;
    g_StageSfxTable = 0;
    g_SfxMuteTimer = 0;
    g_NextBgm = 0;
    g_StartBgm = 0;
    D_800A4F1D = 0;
    g_SoundRand = 0;
    D_800A4EE6 = 0;
    g_MusicDuck = 0x4000;
    D_800A4EE4 = 0x4000;
    g_SoundFrameHook = 0;
    D_800A4F16 = 0;
    ResetBankLoader();
    ResetSpuOwner();
    SpuSetReverbVoice(0, 0xFFFFFF);
    env.mask = 1;
    env.queueing = 0;
    SpuSetEnv(&env);
    g_BgmExtraParts = 0;
    D_800A4F1E = 0;
    InitCdAudio();
    ClearBgmLoadQueue();
}

typedef struct {
    s16 flag;
    u8 pad2[14];
} Ent10;
extern Ent10 D_800B97D8[];
extern s32 g_LoadKey;
extern s32 D_800AE6F0;
extern s32 D_800AE6F8;
extern s32 D_800AE6FC;
extern s32 D_800AE700;
extern s32 D_800AE70C;
extern s32 D_800AE728;
extern s32 D_800AE748;
extern s32 D_800AE74C;
extern s8 D_800AE798;
extern s8 D_800AE799;
extern u8 *D_8006A970[];
extern s32 D_80065504[];
typedef struct { s32 w[9]; } Blk24;
extern Blk24 g_ContinueMapRecord;
extern s32 SetSoundMode(s32 a);
extern s32 SetOptionD(s32 a);
extern void SetMusicVolume(s32 a);
extern void SetEffectsVolume(s32 a);
extern s32 libc_memset();
extern u16 GetPadPressedDirWide(s32 n);
extern u16 GetPadHeldDirWide(s32 n);
extern void GsMapModelingData(s32 p);
extern void StopPadRumble(void);
extern void ResetModelFields(u8 *a);
extern void ClearVars(void);
extern void ClearVarBlock60(void);
extern void ClearEntryPoint(void);
extern void ClearRumbleScript(void);
extern void ResetBgmPacks(void);
extern void ClearFlags(void);
extern s16 EaseAngleFracStepImpl(s32 a, s32 b, s16 n, s16 m, s16 *f);
extern s16 EaseValueFracStep(s16 a, s16 b, s16 c, s16 d);
extern s32 StageAlwaysReloads(s32 n);
extern s32 rand(void);
extern void LoadStateSlot(s32 a);

extern u8 D_800C6E2A[];
typedef struct { u8 flag; } Flag8;
extern Flag8 D_80076242;
extern void OpenStreamedMusic(void);

extern s32 D_80074808;
extern u16 D_800A4E8A;
extern s16 D_800A4EF4;
extern s16 D_800A46B8;
extern u8 D_80075AC0[];
extern s16 D_8006A9BC[];
extern u16 D_8006A9B0[];
extern Mtx D_800AF648;
extern s32 rsin(s32 a);
extern s32 rcos(s32 a);
extern s32 ratan2(s32 y, s32 x);
extern void SsVabClose(s32 id);
extern void SetBackColor(s32 r, s32 g, s32 b);
extern void CompMatrix();
extern void SetRotMatrix();
extern void SetTransMatrix();
extern void ZeroFill(void *p, s32 size); /* zero-fills size bytes */
extern void StopMusic(void);
extern void SetSeqFade(s32 i, s16 a, s16 b, s16 c);

extern s32 func_800381E4(s32 a, s32 b);

extern void StopScriptSfx(u8 *a, s32 n);
extern void DimScriptSfx(u8 *p);

extern u8 D_800C6E2E[];
extern void SpuSetVoiceRR(s32 ch, s32 rr);

extern s32 func_8002FF0C(s32 a, s32 b);
extern void SetReverbDepth(s16 n);

void func_8002CC4C(void) {
    s32 i;
    s32 k;
    u8 **pp;
    u8 *q;
    pp = D_8006A970;
    for (i = 0; i < 4; i++, pp++) {
        q = *pp;
        for (k = 0; k < D_80065504[i]; ) {
            k++;
            q[0xA] = 0;
            q += 0xC;
        }
    }
}

s32 StopAllSound(void) {
    return PlaySoundId(2, 0);
}

extern void SpuSetReverbModeDepth();
extern void func_8003D630();
extern void SpuSetKey(s32 on_off, u32 voice_bit);
extern void SpuGetReverbModeDepth(s16 *left, s16 *right);
extern void SsEnd(void);
extern void SpuQuit(void);

void ShutdownSound(void) {
    s16 l;
    s16 r;
    s32 i;
    s16 v;

    VSyncCallback(0);
    VSync(0);
    for (i = 0; i < 24; i++) {
        SpuSetVoiceRR(i, 8);
    }
    SpuSetKey(0, 0xFFFFFF);
    SpuGetReverbModeDepth(&l, &r);
    for (i = 15; i != 0; i--) {
        VSync(0);
        r = l * i >> 4;
        SpuSetReverbModeDepth(r, r);
        v = i * 0x3FF;
        g_SpuCommonAttr.mask = 3;
        g_SpuCommonAttr.mvol.left = v;
        g_SpuCommonAttr.mvol.right = v;
        SpuSetCommonAttr(&g_SpuCommonAttr);
    }
    SsEnd();
    func_8003D630();
    SpuQuit();
}

extern u8 g_VoiceKeyStatus;
extern void SfxTick(void);
extern void UpdateBgm(void);
extern void SpuRGetAllKeysStatus(s32 min, s32 max, u8 *status);

void SoundVSync(void) {
    s32 *q;
    u16 n;
    s32 t;
    u8 f;
    s16 e;
    s16 c;

    q = &g_SoundVSyncCount;
    *q += 1;
    n = g_StartBgm;
    if (n != 0) {
        D_8006A990 = n;
        PlayBgm(n);
        g_StartBgm = 0;
    }
    f = D_800A4EE6;
    if (f & 1) {
        e = D_800A4EE4;
        D_800A4F16 = 1;
        if ((u16)e < g_MusicDuck) {
            t = g_MusicDuck - D_800A4EE2;
            g_MusicDuck = t;
            t = (u16)e < (u16)t;
        } else {
            t = g_MusicDuck + D_800A4EE2;
            g_MusicDuck = t;
            t = (u16)t < (u16)e;
        }
        if (!t) {
            g_MusicDuck = e;
            D_800A4EE6 = f & 0xFE;
        }
    }
    SpuRGetAllKeysStatus(0, 0x17, &g_VoiceKeyStatus);
    if (g_BgmFlags & 8) {
        UpdateBgm();
        c = D_800A4E8A;
        if (c != 0) {
            c--;
            D_800A4E8A = c;
            if (c == 0) {
                StopBgm();
            }
        }
        if ((IsSeqPlaying(g_BgmSeq) << 16) == 0) {
            g_BgmFlags &= 0xFFF7;
        }
    }
    if (g_SoundLock == 0) {
        g_SfxTickPending = 0;
        SfxTick();
    } else {
        g_SfxTickPending = 1;
    }
    if ((g_SpuXferFlags & 1) && !(g_SpuXferFlags & 2) && SpuIsTransferCompleted(0)) {
        g_SpuXferFlags &= 0xFE;
    }
}

void SfxTick(void) {
    register s16 *p = &g_SfxMuteTimer;
    if (*p != 0) {
        *p = *p - 1;
    }
    UpdateSfxVoices();
    FlushSfxVoices();
    UpdateSfxTracks();
}

extern u8 g_MergedSfxFlags;
extern s16 D_800A4E76;
extern s16 D_800A4E78;
extern void StepCdFadeOut(void);
extern s32 FlushMergedSfx(void);

void UpdateSound(void) {
    SoundUnkC *p;
    s32 i;
    s16 cur;
    s16 tgt;
    u8 *f;

    if (g_CdFadeOut != 0) {
        StepCdFadeOut();
    }
    p = g_SoundTimer;
    for (i = 0; i < 8; i++, p++) {
        if (p->unk0 != 0) {
            if (--p->unk0 == 0) {
                PS1_FN((void (*)(SoundUnkC *))*(s32 *)(p->pad4 + 4))(p);
            }
        }
    }
    if (g_MergedSfxFlags & 0xEF) {
        FlushMergedSfx();
    }
    if (g_SoundFrameHook != 0) {
        PS1_FN((void (*)(void))g_SoundFrameHook)();
    }
    if (D_800A4E70 != 0) {
        if (--D_800A4E68 == 0) {
            D_800A4E70 = 0;
            SetReverbDepth(D_800A4E6C);
        }
    }
    f = &D_800A4E7A;
    if (*f != 0) {
        tgt = D_800A4E76;
        cur = g_ReverbDepth;
        if (tgt > cur) {
            if (cur < tgt - D_800A4E78) {
                g_ReverbDepth = cur + D_800A4E78;
            } else {
                goto snap;
            }
        } else if (tgt + D_800A4E78 < cur) {
            g_ReverbDepth = cur - D_800A4E78;
        } else {
snap:
            g_ReverbDepth = tgt;
            *f = 0;
        }
        SetReverbDepth(g_ReverbDepth);
    }
}

void SetReverbMode(s16 mode) {
    register s32 *r;
    r = &D_800A4ECC;
    *r = 1;
    D_800A4ED0 = mode;
    D_800A4ED4 = 0;
    D_800A4ED6 = 0;
    SpuSetReverbModeParam(r);
}

void SetReverbDepth(s16 n) {
    u16 v;
    register s32 *r;
    v = *(u16 *)(D_8006ADD8 + n * 2);
    r = &D_800A4ECC;
    *r = 6;
    g_ReverbDepth = n;
    D_800A4ED4 = v;
    D_800A4ED6 = v;
    SpuSetReverbModeParam(r, r);
}

void StepCdFadeOut(void) {
    register s32 *p = &g_SoundSlot[4].spuAddr;
    s32 v = *p;
    SsSetSerialVol(0, (v * D_800A4EF4) >> 16, (v * D_800A4EF4) >> 16);
    v -= D_800A46B8;
    if (v <= 0) {
        g_CdFadeOut = 0;
        StopMusic();
        v = 0;
    }
    *p = v;
}

extern struct { u8 pad0[4]; s32 unk4; u8 pad8[0x3D]; u8 unk45; u8 pad46[2]; } g_SfxVoiceAttr[];

void FlushSfxVoices(void) {
    s32 i;
    u8 *p;

    p = (u8 *)g_SfxVoiceAttr;
    for (i = 0; i < 8; i++, p += 0x48) {
        if (p[0x45] != 0) {
            if (p[0x44] == 0 || !(*(s32 *)(p + 4) & 0x60000)) {
                SpuSetVoiceRR(*(s32 *)(p + 0x40), 1);
            }
            p[0x45] = 0;
        }
    }
    if (g_KeyOffBits & 0xFF0000) {
        SpuSetKey(0, g_KeyOffBits & 0xFF0000);
        g_KeyOffBits = (u16)g_KeyOffBits;
    }
    if (g_ReverbOffBits & 0xFF0000) {
        SpuSetReverbVoice(0, g_ReverbOffBits & 0xFF0000);
        g_ReverbOffBits = (u16)g_ReverbOffBits;
    }
    p = (u8 *)g_SfxVoiceAttr;
    for (i = 0; i < 8; p += 0x48, i++) {
        if (p[0x44] != 0) {
            p[0x44] = 0;
            SpuNSetVoiceAttr(*(s32 *)(p + 0x40), p);
            *(s32 *)(p + 4) = 0;
        }
    }
    if (g_KeyOnBits & 0xFF0000) {
        SpuSetKey(1, g_KeyOnBits & 0xFF0000);
        g_KeyOnBits = (u16)g_KeyOnBits;
    }
    if (g_ReverbOnBits & 0xFF0000) {
        SpuSetReverbVoice(1, g_ReverbOnBits & 0xFF0000);
        g_ReverbOnBits = (u16)g_ReverbOnBits;
    }
}

u8 IsCdFadeOut(void) {
    return g_CdFadeOut;
}

s32 PlaySoundId(s32 id, s32 b) {
    u32 k = id & 0xFFFF;
    u8 *q;
    g_SoundLock = 1;
    if (k < 0x80) {
        DoSoundCommand(k, b & 0xFFFF, 0);
    } else if (k >= 0x100) {
        if (k < 0x400) {
            PlayBgm(k);
        } else {
            PlaySfx(k, b & 0xFFFF);
        }
    }
    q = &g_SoundLock;
    *q = g_SfxTickPending;
    if (g_SfxTickPending != 0) {
        if (g_SfxMuteTimer != 0) {
            g_SfxMuteTimer -= 1;
        }
        UpdateSfxVoices();
        FlushSfxVoices();
        UpdateSfxTracks();
        g_SfxTickPending = 0;
        *q = 0;
    }
}

void PlaySoundFor(u16 id, u16 b, u16 c) {
    register u8 *f;
    u8 v;
    g_SoundLock = 1;
    if (id < 0x80) {
        DoSoundCommand(id, b, c);
    } else if (id >= 0x100) {
        if (id < 0x400) {
            PlayBgm(id);
        } else {
            PlaySfx(id | (c << 16), b);
        }
    }
    f = &g_SoundLock;
    v = g_SfxTickPending;
    *f = v;
    if (v != 0) {
        if (g_SfxMuteTimer != 0) {
            g_SfxMuteTimer = g_SfxMuteTimer - 1;
        }
        UpdateSfxVoices();
        FlushSfxVoices();
        UpdateSfxTracks();
        g_SfxTickPending = 0;
        *f = 0;
    }
}

s32 func_8002D678(s32 a, s32 b) {
    s32 r;
    u32 id = a & 0xFFFF;
    g_SoundLock = 1;
    if (id >= 0x400) {
        r = PlaySfx(id, b & 0xFFFF);
        if (r != 0) {
            r |= id << 16;
        }
        return r;
    }
    return 0;
}

extern u8 g_SfxTable[];
extern s32 ResolveSfxAlias(u8 *p);

void func_8002D6D8(u32 a) {
    u32 v;
    u8 *p;
    ((u8 *)g_SoundChan)[0x82F] = 1;
    v = a >> 16;
    a &= 0xFFFF;
    if ((v & 0xFFFF) < 0x100) {
        return;
    }
    p = &g_SfxTable[(v & 0xFFFF) * 4];
    if ((*p & 0x7F) == 6) {
        v = ResolveSfxAlias(p);
        if ((v & 0xFFFF) == 0) {
            return;
        }
    }
    if (a == 0) {
        return;
    }
    a--;
    if (*(u16 *)&g_SoundChan[a].unk4 == (v & 0xFFFF)) {
        StopSfxTrack(a);
    }
    ((u8 *)g_SoundChan)[0x82F] = g_SfxTickPending;
    if (g_SfxTickPending != 0) {
        if (g_SfxMuteTimer != 0) {
            g_SfxMuteTimer -= 1;
        }
        UpdateSfxVoices();
        FlushSfxVoices();
        UpdateSfxTracks();
        g_SfxTickPending = 0;
        ((u8 *)g_SoundChan)[0x82F] = 0;
    }
}

void SoundNop(void) {
}

void func_8002D7FC(s32 a) {
    D_800A4E7C = a;
}

u16 func_8002D80C(void) {
    if (g_BgmFlags & 1) {
        return D_8006A990;
    }
    return 0;
}

void func_8002D834(void) {
    D_8006A990 = 0;
}

s32 SetCustomBgmData(s32 v) {
    return D_800760E0 = v;
}

s16 InitMovieSound(void) {
    D_800760E4 = 0x64;
    SsSetSerialAttr(0, 1, 0);
    SsSetSerialVol(0, D_800760E4, D_800760E4);
    return D_800760E4;
}

s32 FadeOutMovieSound(void) {
    D_800760EC = 6;
    g_SoundFrameHook = (s32)PS1_FN_ADDR(StepMovieFade);
    D_800760E8 = 0;
    return 0x10;
}

s32 StopMovieSound(void) {
    g_SoundFrameHook = 0;
    SsSetSerialVol(0, 0, 0);
    return 0;
}

void StopMusicForBgm(void);
s32 OpenSeq(s32 a, s16 b, s32 c);
void SetSeqVolume(s32 i, s16 v);
void MuteSeqChannel(s32 a, s32 b);
extern s16 D_800A4E84;
extern u16 D_800A4EA0;
extern u16 D_80068B66[];
extern s16 g_BgmTable[];
extern u16 D_80068B5E[];
extern s16 D_80068B60[];
extern s16 D_80068B62[];
typedef struct { u16 v; } U16R;
extern U16R D_80065438[];
extern s32 D_800652F0[];

void PlayBgm(u32 n) {
    s32 i;
    s16 ch;
    s32 p;
    s32 off;
    s32 h;
    s32 vol;
    s32 k;
    u16 *ea2;
    s16 *r;
    s16 *r2;
    u16 *fl;

    i = (u16)n - 0x100;
    StopMusicForBgm();
    ch = g_SoundSlot[g_BgmTable[i * 8]].unk2;
    if (ch < 0) {
        return;
    }
    if (!(g_BgmFlags & 0x20)) {
        return;
    }
    if (D_800A4F1E != 0) {
        return;
    }
    if ((u16)n == 0x18E) {
        p = D_800760E0;
    } else {
        h = D_80068B62[i * 8];
        if (h != 0) {
            off = *(s32 *)(h * 4 + D_800A4E7C);
            if (off == 0) {
                return;
            }
            p = D_800A4E7C + off + 4;
        } else {
            p = D_800A4E7C + 0x10;
        }
    }
    ea2 = &g_SuspendedBgmFlags;
    vol = D_800652F0[D_80065438[D_80068B60[i * 8]].v];
    if ((*ea2 & 4) && D_800A4EA0 == i) {
        D_800A4EA0 = 0;
        g_BgmFlags = *ea2;
        *ea2 = 0;
        g_BgmFlags |= 4;
        g_BgmIndex = i;
        D_800A4E8A = 0;
        g_BgmSeq = D_800A4E9A;
        D_800A4E84 = *(u16 *)((u8 *)D_80068B5E + g_BgmIndex * 16);
        SetSeqFade(g_BgmSeq, 0, 0x4000, 0x111);
        SetSeqVolume(g_BgmSeq, D_800A4E84);
        PlaySeq(g_BgmSeq);
        g_BgmFlags |= 9;
        return;
    }
    k = OpenSeq(p, ch, vol);
    r = &g_BgmSeq;
    *r = k;
    if (*r == -1) {
        return;
    }
    if ((u16)n == 0x134) {
        if (!(g_BgmExtraParts & 2)) {
            MuteSeqChannel(*r, 4);
        }
        if (!(g_BgmExtraParts & 4)) {
            MuteSeqChannel(*r, 5);
            MuteSeqChannel(*r, 6);
            MuteSeqChannel(*r, 7);
        }
        if (!(g_BgmExtraParts & 8)) {
            MuteSeqChannel(*r, 8);
        }
    }
    fl = &g_BgmFlags;
    *fl = (*fl & 0x20) | 4;
    D_800A4E84 = *(u16 *)((u8 *)D_80068B5E + i * 16);
    g_BgmIndex = i;
    if (*(u16 *)((u8 *)D_80068B66 + i * 16) & 1) {
        *fl |= 0x100;
    } else {
        *fl &= ~0x100;
    }
    r2 = &g_BgmSeq;
    SetSeqVolume(*r2, D_800A4E84);
    D_800A4E8A = 0;
    PlaySeq(*r2);
    g_BgmFlags |= 9;
}

extern s16 D_8006A982;
extern u8 D_8006A984;
extern u8 D_8006A988[];
void SetLoopSfxLevel(s32 n, s32 v);
s32 PlaySfxSingle(s32 a, u8 *p, u32 f);
s32 PlaySfxRestart(s32 a, u8 *p, s32 flags0);
extern s32 PlaySfxPoly(s32 a, u8 *p, s32 c, s32 d);
extern s32 PlaySfxPerOwner(s32 a, u8 *p, s32 c);
extern s32 PlayScriptSfx(s32 a, u8 *p, s32 c);
extern void func_8002F248(u8 *p, s32 c);

s32 PlaySfx(u32 a, s32 b) {
    u8 *p;
    s32 r;
    u8 save;
    u16 v;
    u8 *q;

    if (g_SfxMuteTimer != 0) {
        return 0;
    }
    p = &g_SfxTable[(a & 0xFFFF) * 4];
    if (g_SfxEnabled == 0 && !(*p & 0x80)) {
        return 0;
    }
    if ((*p & 0x3F) == 6) {
        v = ResolveSfxAlias(p);
        if (v == 0) {
            return 0;
        }
        p = &g_SfxTable[v * 4];
    }
    q = &g_SoundLock;
    save = *q;
    *q = 1;
    r = 0;
    switch (*p & 0x3F) {
    case 1:
        r = PlaySfxSingle(a, p, b & 0xFFFF);
        break;
    case 9:
        r = PlaySfxPoly(a, p, b & 0xFFFF, 0);
        break;
    case 7:
        r = PlaySfxPoly(a, p, b & 0xFFFF, 1);
        break;
    case 10:
        PlaySfxRestart(a, p, b & 0xFFFF);
    case 8:
        r = PlaySfxPerOwner(a, p, b & 0xFFFF);
        break;
    case 5:
        r = PlayScriptSfx(a, p, b & 0xFFFF);
        break;
    case 2:
        func_8002F248(p, b & 0xFFFF);
        break;
    case 11:
        if (g_MergedSfxFlags & 4) {
            D_8006A982 = D_8006A982 + D_8006A988[b & 7] - 2;
        } else {
            g_MergedSfxFlags |= 4;
            D_8006A982 = D_8006A988[b & 7];
        }
        if ((b & 7) == 6) {
            g_MergedSfxFlags |= 1;
        } else if ((b & 7) == 2) {
            g_MergedSfxFlags |= 2;
        }
        break;
    case 12:
        g_MergedSfxFlags |= 8;
        if (D_8006A984 < (u8)b % 128) {
            D_8006A984 = b & 0x7F;
        }
        break;
    case 13:
        r = PlaySfxSingle((a & 0xFFFF) | 0x08F40000, p, 0xFFFF);
        break;
    case 14:
        r = PlaySfxSingle((a & 0xFFFF) | 0x0A8A0000, p, 0xFFFF);
        break;
    case 15:
        r = PlaySfxSingle((a & 0xFFFF) | 0x08960000, p, 0xFFFF);
        break;
    case 17:
        SetLoopSfxLevel(p[3], b & 0xFFFF);
        break;
    case 16:
        r = PlaySfxSingle((a & 0xFFFF) | 0x0B7D0000, p, 0xFFFF);
        break;
    case 18:
        r = PlaySfxSingle((a & 0xFFFF) | 0x04F30000, p, 0xFFFF);
        break;
    }
    g_SoundLock = save;
    return r;
}

extern u8 g_MergedSfxFlags;
extern s16 D_8006A982;
extern u8 D_8006A984;

s32 FlushMergedSfx(void) {
    s32 var_a0;
    u8 var_v0;

    if (g_MergedSfxFlags & 7) {
        if ((g_MergedSfxFlags & 1) && (g_MergedSfxFlags & 2)) {
            PlaySfx(0x719, 0);
            g_MergedSfxFlags &= 0xF8;
        }
        if (g_MergedSfxFlags & 7) {
            if (D_8006A982 <= 0) {
                var_a0 = 0x710;
            } else {
                var_a0 = 0x711;
                if (D_8006A982 >= 4) {
                    var_a0 = 0x712;
                }
            }
            PlaySfx(var_a0, 0);
            D_8006A982 = 0;
            g_MergedSfxFlags &= 0xF8;
        }
    }
    var_v0 = g_MergedSfxFlags & 8;
    if (var_v0 != 0) {
        if (D_8006A984 != 0) {
            PlaySfx(0xA75, D_8006A984 | 0x1000);
            D_8006A984 = 0;
            g_MergedSfxFlags |= 0x10;
        } else {
            g_MergedSfxFlags &= 0xEF;
            g_SoundLock = 1;
            DoSoundCommand(4, 0xA75, 0);
            g_SoundLock = g_SfxTickPending;
            if (g_SfxTickPending != 0) {
                if (g_SfxMuteTimer != 0) {
                    g_SfxMuteTimer -= 1;
                }
                UpdateSfxVoices();
                FlushSfxVoices();
                UpdateSfxTracks();
                g_SfxTickPending = 0;
                g_SoundLock = 0;
            }
        }
        var_v0 = g_MergedSfxFlags & 0xF7;
        g_MergedSfxFlags = var_v0;
    }
    return (s32) var_v0;
}

void SetCdMono(void);
void SetCdStereo(void);
void FadeOutMusic(s32 n);
void FadeOutBgm(u16 n);
void func_8002E79C(s32 n);
void func_8002E818(s32 n);
void func_8002E8DC(s32 n);
void func_8002E94C(s32 n);
void PauseMusic(void);
void ResumeMusic(void);
void StopMusicAndSfx(void);
s32 StopCdAudioCmd(void);
void StopSfx(s32 a);
void func_8002EFD0(void);
void ClearSoundTimers(void);
void DimSfx(void);
void UndimSfx(void);
void SilenceSfx(void);
void UnsilenceSfx(void);
void ReleaseSfx(s32 a);
void UnmuteSeqChannel(s32 i, s32 j);
extern u8 D_8006A994[];

void DoSoundCommand(u32 a0, s32 b, s32 c) {
    u16 a = a0;
    u8 t;
    if (a == 0x7F) {
        return;
    }
    switch (a) {
    case 1:
        FadeOutMusic((u16)b);
        break;
    case 8:
        FadeOutBgm((u16)b);
        break;
    case 2:
        ClearSoundTimers();
        StopMusicAndSfx();
        g_SfxEnabled = 1;
        g_MusicDuck = 0x4000;
        g_BgmExtraParts = 0;
        g_LoopSfxFlags = 0;
        g_MergedSfxFlags = 0;
        D_8006A982 = 0;
        D_8006A984 = 0;
        D_800A4EE6 = 0;
        g_SfxMuteTimer = 0x1E;
        D_800A4F1E = 0;
        break;
    case 3:
        ClearSoundTimers();
        StopAllSfx();
        g_SfxMuteTimer = 0;
        break;
    case 4:
        StopSfx((b & 0xFFFF) | (c << 16));
        break;
    case 5:
        StopMusic();
        break;
    case 6:
    case 16:
    case 31:
        D_800A4EF6 = 2;
        break;
    case 7:
    case 17:
    case 32:
        D_800A4EF6 = 1;
        break;
    case 11:
        if (g_SoundStereo != 0) {
            SetCdMono();
        }
        break;
    case 12:
        if (g_SoundStereo == 0) {
            SetCdStereo();
        }
        break;
    case 13:
        ReleaseSfx((b & 0xFFFF) | (c << 16));
        break;
    case 14:
        PauseMusic();
        break;
    case 15:
        ResumeMusic();
        break;
    case 18:
        func_8002E79C((u16)b);
        break;
    case 19:
        func_8002E8DC((u16)b);
        break;
    case 20:
        SilenceSfx();
        func_8002E818(0);
        break;
    case 21:
        UnsilenceSfx();
        func_8002E94C(0);
        break;
    case 22:
        StopCdAudioCmd();
        break;
    case 23:
        StopBgm();
        break;
    case 24:
    case 26:
        DimSfx();
        break;
    case 25:
    case 27:
        UndimSfx();
        break;
    case 28:
        func_8002EFD0();
        break;
    case 29:
        g_SfxEnabled = 0;
        break;
    case 30:
        g_SfxEnabled = 1;
        break;
    case 33:
        t = D_8006A994[b & 7];
        D_800A4F16 = 1;
        g_MusicVolume = t;
        break;
    case 34:
        g_SfxVolume = D_8006A994[b & 7];
        break;
    case 35:
        {
            u8 *p = &g_BgmExtraParts;
            *p |= 1;
        }
        if (g_BgmIndex + 0x100 == 0x134) {
            UnmuteSeqChannel(g_BgmSeq, 3);
        }
        break;
    case 36:
        {
            u8 *p = &g_BgmExtraParts;
            *p |= 2;
        }
        if (g_BgmIndex + 0x100 == 0x134) {
            UnmuteSeqChannel(g_BgmSeq, 4);
        }
        break;
    case 37:
        {
            u8 *p = &g_BgmExtraParts;
            *p |= 4;
        }
        if (g_BgmIndex + 0x100 == 0x134) {
            UnmuteSeqChannel(g_BgmSeq, 5);
            UnmuteSeqChannel(g_BgmSeq, 6);
            UnmuteSeqChannel(g_BgmSeq, 7);
        }
        break;
    case 38:
        {
            u8 *p = &g_BgmExtraParts;
            *p |= 8;
        }
        if (g_BgmIndex + 0x100 == 0x134) {
            UnmuteSeqChannel(g_BgmSeq, 8);
        }
        break;
    case 39:
        if (g_BgmFlags & 1) {
            D_8006A990 = 0;
            g_NextBgm = b;
        } else {
            PlayBgm((u16)b);
        }
        break;
    case 42:
        g_BgmExtraParts = 0;
        break;
    case 40:
        D_800A4F1E = 1;
        break;
    case 41:
        D_800A4F1E = 0;
        StopAllSfx();
        break;
    }
}

void SetCdMono(void) {
    u8 v[4];
    v[0] = 0x5A;
    v[1] = 0x5A;
    v[2] = 0x5A;
    v[3] = 0x5A;
    CdMix(v);
    g_SoundStereo = 0;
}

void SetCdStereo(void) {
    u8 v[4];
    v[0] = 0x80;
    v[1] = 0;
    v[2] = 0x80;
    v[3] = 0;
    CdMix(v);
    g_SoundStereo = 1;
}

extern u16 D_8006A99C[];
extern u8 D_8006AEEC;
void FadeOutBgm(u16 n);

void FadeOutMusic(s32 n) {
    u16 k;
    u16 v;
    if ((g_BgmFlags & 4) && (IsSeqPlaying(g_BgmSeq) << 16) != 0) {
        FadeOutBgm(n);
    } else if (g_CdAudioReqIds[0] != 0) {
        k = n;
        if (k < 5) {
            v = D_8006A99C[k * 2];
        } else {
            v = 0x1F;
        }
        D_800A46B8 = v;
        g_SoundSlot[4].spuAddr = 0xFFFF;
        g_CdFadeOut = 1;
        v = D_8006AEEC;
        D_800A4EF4 = v;
    }
}

void FadeOutBgm(u16 n) {
    if (g_BgmFlags & 4) {
        if ((IsSeqPlaying(g_BgmSeq) << 16) != 0) {
            u16 k = n;
            if (k >= 5) {
                k = 4;
            }
            SetSeqFade(g_BgmSeq, 0, 0, D_8006A9BC[k]);
            D_800A4E8A = D_8006A9B0[k];
        }
    }
}

void func_8002E79C(s32 n) {
    register u8 *p = &D_800A4EE6;
    u8 f = *p;
    u8 g;
    u16 t;
    if (!(f & 2)) {
        g = f | 2;
        *p = g;
        g &= 4; if (g == 0) {
            if ((u32)(n & 0xFFFF) >= 5) {
                n = 4;
            }
            g_MusicDuck = 0x4000;
            D_800A4EE4 = 0x2FFF;
            t = D_8006A9C8[n & 0xFFFF]; *p = f | 3; D_800A4EE2 = t;
        }
    }
}

void func_8002E818(s32 n) {
    register u8 *p;
    u8 f;
    u8 g;
    u16 t;
    if ((g_BgmFlags & 4) && g_BgmIndex == 0x3E) {
        PauseBgm();
    }
    p = &D_800A4EE6;
    f = *p;
    if (!(f & 4)) {
        g = f | 4;
        *p = g;
        g &= 2;
        if (g == 0) {
            if ((u32)(n & 0xFFFF) >= 5) {
                n = 4;
            }
            g_MusicDuck = 0x4000;
            D_800A4EE4 = 0x2000;
            t = D_8006A9D4[n & 0xFFFF];
            *p = f | 5;
            D_800A4EE2 = t;
        }
    }
}

void func_8002E8DC(s32 n) {
    register u8 *p = &D_800A4EE6;
    u8 f = *p;
    u16 t;
    if (f & 2) {
        *p = f & 0xFD;
        if (!(f & 4)) {
            if ((u32)(n & 0xFFFF) >= 5) {
                n = 4;
            }
            D_800A4EE4 = 0x4000;
            t = D_8006A9E0[n & 0xFFFF]; *p = (f & 0xFD) | 1; D_800A4EE2 = t;
        }
    }
}

void func_8002E94C(s32 n) {
    register u8 *p;
    u8 f;
    u8 g;
    u16 t;
    if ((g_BgmFlags & 4) && g_BgmIndex == 0x3E && (g_BgmFlags & 0x10)) {
        ResumeBgm(g_BgmFlags);
    }
    p = &D_800A4EE6;
    f = *p;
    if (f & 4) {
        g = f & 0xFB;
        *p = g;
        g &= 2; if (g == 0) {
            if ((u32)(n & 0xFFFF) >= 5) {
                n = 4;
            }
            D_800A4EE4 = 0x4000;
            t = D_8006A9EC[n & 0xFFFF]; *p = (f & 0xFB) | 1; D_800A4EE2 = t;
        }
    }
}

void PauseBgm(void) {
    register u16 *f = &g_BgmFlags;
    if (*f & 4) {
        if ((IsSeqPlaying(g_BgmSeq) << 16) != 0) {
            if (func_800381E4(g_BgmSeq, 0) != 0) {
                StopBgm();
            } else {
                PauseSeq(g_BgmSeq);
                *f |= 0x10;
            }
        }
    }
}

void ResumeBgm(u16 flags) {
    register u16 *f = &g_BgmFlags;
    if (*f & 0x10) {
        PlaySeq(g_BgmSeq);
        *f = (*f | 9) & 0xFFEF;
    }
}

void PauseMusic(void) {
    if ((g_BgmFlags & 4) && (IsSeqPlaying(g_BgmSeq) << 16) != 0) {
        if (func_800381E4(g_BgmSeq, 0) != 0) {
            StopBgm();
        } else {
            PauseSeq(g_BgmSeq);
            g_BgmFlags |= 0x10;
        }
    }
    PauseCdAudio();
}

void ResumeMusic(void) {
    PlayCdTrack(0);
    if (g_BgmFlags & 0x10) {
        PlaySeq(g_BgmSeq);
        g_BgmFlags = (g_BgmFlags | 9) & 0xFFEF;
    }
}

extern u16 D_800A4EA0;
extern u16 D_80068B66[];
void StopSeq(s32 i);

void StopBgm(void) {
    g_NextBgm = 0;
    g_StartBgm = 0;
    D_800A4E8A = 0;
    if (g_BgmFlags & 4) {
        if ((IsSeqPlaying(g_BgmSeq) << 16) != 0 && (D_80068B66[g_BgmIndex * 8] & 1)) {
            if (g_SuspendedBgmFlags & 4) {
                CloseSeq(D_800A4E9A);
                g_SuspendedBgmFlags &= 0xFEE8;
            }
            PauseSeq(g_BgmSeq);
            g_BgmFlags &= 0xFFFD;
            g_SuspendedBgmFlags = g_BgmFlags;
            D_800A4E9A = g_BgmSeq;
            D_800A4EA0 = g_BgmIndex;
            g_BgmFlags &= 0xFEFB;
        } else {
            s16 *p = &g_BgmSeq;
            if ((IsSeqPlaying(*p) << 16) != 0) {
                StopSeq(*p);
            }
            g_BgmFlags &= 0xFEE8;
            CloseSeq(*p);
        }
    }
}

void StopBgmAll(void) {
    register u16 *f = &g_SuspendedBgmFlags;
    StopBgm();
    if (*f & 4) {
        CloseSeq(D_800A4E9A);
        *f = 0;
    }
}

void StopMusicAndSfx(void) {
    StopMusic();
    StopAllSfx();
    StopBgm();
    if (g_SuspendedBgmFlags & 4) {
        CloseSeq(D_800A4E9A);
        g_SuspendedBgmFlags = 0;
    }
    D_800A4EF6 = 1;
    D_800A4EE6 &= 0xF9;
}

void StopMusicForBgm(void) {
    u8 c = 0x88;
    u8 *q = &c;
    StopCdTrack();
    StopBgm();
}

void StopMusic(void) {
    StopCdAudio();
    StopBgm();
}

s32 StopCdAudioCmd(void) {
    return StopCdAudio();
}

extern void StopSfxById();
void SetLoopSfxLevel(s32 n, s32 v);
void StopScriptSfxById(s32 a);

void StopSfx(s32 a) {
    u8 *p;
    u8 save;
    u8 *q;
    s16 r;
    if ((s16)a < 0x100) {
        return;
    }
    p = g_SfxTable + (s16)a * 4;
    if ((*p & 0x7F) == 6) {
        r = ResolveSfxAlias(p);
        if (r == 0) {
            return;
        }
        p = g_SfxTable + r * 4;
    }
    q = &g_SoundLock;
    save = *q;
    *q = 1;
    switch (*p & 0x3F) {
    case 5:
        StopScriptSfxById(a);
        break;
    case 1:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 18:
        StopSfxById(a);
        break;
    case 17:
        SetLoopSfxLevel(p[3], 0x1000);
        break;
    }
    g_SoundLock = save;
}

void func_8002EFD0(void) {
    ReleaseAllScriptSfx();
    FadeOutFlaggedSfxVoices();
}

void QueueKey(s32 mode, s32 bits) {
    if (mode == 1) {
        g_KeyOffBits &= ~bits;
        g_KeyOnBits |= bits;
        return;
    }
    g_KeyOnBits &= ~bits;
    g_KeyOffBits |= bits;
}

void QueueReverb(s32 which, u32 bits) {
    if (which == 1) {
        g_ReverbOffBits &= ~bits;
        g_ReverbOnBits |= bits;
    } else {
        g_ReverbOnBits &= ~bits;
        g_ReverbOffBits |= bits;
    }
}

void ClearSoundTimers(void) {
    s32 i;
    for (i = 0x54; i >= 0; i -= 0xC) {
        *(s32 *)((u8 *)g_SoundTimer + i) = 0;
    }
}

SoundUnkC *AllocSoundTimer(void) {
    s32 i;
    SoundUnkC *p = g_SoundTimer;
    for (i = 0; i < 8; i++, p++) {
        if (p->unk0 == 0) {
            return p;
        }
    }
    return 0;
}

void PlayTimerSfx(u8 *a) {
    PlaySfx(*(s32 *)(a + 0x4), 0);
}

void func_8002F150(s32 a) {
    u8 *t = (u8 *)&g_SoundChan[a - 1];
    s32 i;
    for (i = 0; i < 8; i++) {
        u8 *p = (u8 *)&g_SoundChan[8 + i];
        if (*(t + i + 0xE) != 0) {
            *(s16 *)(p + 0x30) = 0;
            p[0x38] = 0;
            *(s32 *)(p + 0x2C) = -0x18;
            *(s32 *)(p + 0x28) = *(s32 *)(p + 0x20) - 0x100;
            p[0x37] |= 1;
        }
    }
}

void func_8002F1CC(s32 n) {
    u8 *q = n * 0x54 + ((u8 *)g_SoundSlot + 0x54);
    s32 i = 0;
    Chan54 *arr = (Chan54 *)((u8 *)g_SoundSlot + 0x54 + 0x2F4);
    do {
        if ((q + i)[0xE] != 0) {
            arr[i].unk30 = 0; arr[i].unk38 = 0; arr[i].unk2C = 0x18; arr[i].unk28 = arr[i].unk20 + 0x100; arr[i].unk37 |= 1;
        }
        i++;
    } while (i < 8);
}

extern s32 FindSfxTrack(s32 arg);
extern u16 D_8006A9F8[];

void func_8002F248(u8 *a, s32 b) {
    s32 id;
    s32 n;
    s32 i;
    u8 *q;
    Chan54 *arr;

    switch (a[3]) {
    case 0:
        g_SoundRand = g_SoundRand * 0x41C64E6D + 0x3039;
        switch (((u32)g_SoundRand >> 16) & 7) {
        case 0:
        case 3:
            id = 0x67C;
            break;
        case 1:
        case 2:
            id = 0x689;
            break;
        case 4:
        case 5:
            id = 0x67B;
            break;
        default:
            return;
        }
        break;
    case 1:
        id = b & 0xFFFF;
        break;
    case 2:
        n = FindSfxTrack(0x95C);
        if (n != 0) {
            q = n * 0x54 + ((u8 *)g_SoundSlot + 0x54);
            i = 0;
            arr = (Chan54 *)((u8 *)g_SoundSlot + 0x54 + 0x2F4);
            do {
                if ((q + i)[0xE] != 0) {
                    arr[i].unk30 = 0; arr[i].unk38 = 0; arr[i].unk2C = -0x18; arr[i].unk28 = arr[i].unk20 - 0x100; arr[i].unk37 |= 1;
                }
                i++;
            } while (i < 8);
        }
        return;
    case 3:
        n = FindSfxTrack(0x95C);
        if (n != 0) {
            q = n * 0x54 + ((u8 *)g_SoundSlot + 0x54);
            i = 0;
            arr = (Chan54 *)((u8 *)g_SoundSlot + 0x54 + 0x2F4);
            do {
                if ((q + i)[0xE] != 0) {
                    arr[i].unk30 = 0; arr[i].unk38 = 0; arr[i].unk2C = 0x18; arr[i].unk28 = arr[i].unk20 + 0x100; arr[i].unk37 |= 1;
                }
                i++;
            } while (i < 8);
        }
        return;
    case 4:
        g_SoundRand = g_SoundRand * 0x41C64E6D + 0x3039;
        switch (((u32)g_SoundRand >> 16) & 7) {
        case 0:
        case 3:
            id = 0xAFD;
            break;
        case 1:
        case 2:
        case 5:
            id = 0xAFF;
            break;
        case 4:
            id = 0xAFE;
            break;
        default:
            return;
        }
        break;
    case 5:
        PlaySfx(0xB06, 0);
        id = 0xB07;
        break;
    case 6:
        PlaySfx(0xB06, 0);
        id = 0xC60;
        break;
    case 7:
        g_SoundRand = g_SoundRand * 0x41C64E6D + 0x3039;
        id = *(u16 *)((u8 *)D_8006A9F8 + (((u32)g_SoundRand >> 15) & 0x1E));
        break;
    default:
        return;
    }
    PlaySfx(id, 0);
}

s32 ResolveSfxAlias(u8 *p) {
    u8 *tbl;
    s32 n;
    s32 idx;
    u16 v;
    u8 *row;
    if (g_StageSfxTableId == 0) {
        return 0;
    }
    tbl = (u8 *)g_StageSfxTable;
    if (tbl == 0) {
        return 0;
    }
    n = *(s16 *)&g_SoundSlot[p[2]];
    if (n < *(s16 *)(tbl + 4)) {
        return 0;
    }
    n -= *(s16 *)(tbl + 4);
    if (n >= *(s16 *)(tbl + 2)) {
        return 0;
    }
    idx = *(s16 *)(*(u8 **)(tbl + 8) + n * 2);
    if (idx == 0) {
        return 0;
    }
    if (p[3] < *(s16 *)(tbl + 0xC)) {
        idx--;
        row = *(u8 **)(tbl + 0x10) + p[3] * (*(s16 *)(tbl + 0xE) << 1);
        v = *(u16 *)(idx * 2 + (s32)row);
        if (v == 0x7F) {
            return 0;
        }
        return v;
    }
    return 0;
}

void SetStageSfxTable(u16 *p) {
    register s16 *f = &g_StageSfxTableId;
    if (*f) {
        ClearStageSfxTable();
    }
    *f = *p;
    g_StageSfxTable = (s32)p;
}

void ClearStageSfxTable(void) {
    g_StageSfxTableId = 0;
    ReleaseAllSfx();
}

s32 GetStageSfxTableId(void) {
    return g_StageSfxTableId;
}

s16 func_8002F658(void) {
    if (((u8 *)g_SoundSlot)[0x58] != 0) {
        return -1;
    }
    return *(s16 *)((u8 *)g_SoundSlot + 0x48);
}

void FreeStageBanks(void) {
    if (g_SoundSlot[3].unk10 == 0) {
        *(s16 *)((u8 *)g_BankSlotMap + *(s16 *)g_SoundSlot[3].pad0 * 4) = -1;
        g_SoundSlot[3].unk10 = 1;
    }
    if (g_SoundSlot[4].unk2 >= 0) {
        SsVabClose(g_SoundSlot[4].unk2);
        g_SoundSlot[4].unk2 = -1;
    }
    if (g_SoundSlot[4].unk10 == 0) {
        g_SoundSlot[4].unk10 = 1;
    }
}

void SetLoopSfxLevel(s32 n, s32 v) {
    switch (n & 0xFFFF) {
    case 0:
        D_800760D0 = v & 0x7F;
        g_SoundFrameHook = (s32)PS1_FN_ADDR(UpdateLoopSfx);
        g_LoopSfxFlags |= 1;
        break;
    case 1:
        D_800760D4 = v & 0x7F;
        g_SoundFrameHook = (s32)PS1_FN_ADDR(UpdateLoopSfx);
        g_LoopSfxFlags |= 2;
        break;
    case 2:
        D_800760D8 = v & 0x7F;
        g_SoundFrameHook = (s32)PS1_FN_ADDR(UpdateLoopSfx);
        g_LoopSfxFlags |= 4;
        break;
    case 3:
        D_800760DC = v & 0x7F;
        g_SoundFrameHook = (s32)PS1_FN_ADDR(UpdateLoopSfx);
        g_LoopSfxFlags |= 8;
        break;
    }
}

extern s16 D_8006A96C;

void UpdateLoopSfx(void) {
    u8 f;
    s32 m;
    s32 x;
    u8 t;

    f = 0;
    m = 0;
    if (g_LoopSfxFlags & 1) {
        f = 1;
        m = (D_800760D0 & 0xFF);
    }
    if (g_LoopSfxFlags & 2) {
        f = 1;
        x = *(u8 *)&D_800760D4;
        if (m < x) {
            m = x & 0xFF;
        }
    }
    if (g_LoopSfxFlags & 4) {
        f = 1;
        x = *(u8 *)&D_800760D8;
        if (m < x) {
            m = x & 0xFF;
        }
    }
    if (g_LoopSfxFlags & 8) {
        f = 1;
        x = *(u8 *)&D_800760DC;
        if (m < x) {
            m = x & 0xFF;
        }
    }
    t = g_LoopSfxFlags;
    g_LoopSfxFlags = t & 0xF0;
    if (f) {
        D_8006A96C = 0x10;
        if (m != 0) {
            PlaySfx(0xBEB, m | 0x1000);
            g_LoopSfxFlags |= 0x10;
        } else if (t & 0x10) {
            g_SoundLock = 1;
            DoSoundCommand(4, 0xBEB, 0);
            g_SoundLock = g_SfxTickPending;
            if (g_SfxTickPending != 0) {
                if (g_SfxMuteTimer != 0) {
                    g_SfxMuteTimer -= 1;
                }
                UpdateSfxVoices();
                FlushSfxVoices();
                UpdateSfxTracks();
                g_SfxTickPending = 0;
                g_SoundLock = 0;
            }
            g_SoundFrameHook = 0;
            g_LoopSfxFlags &= 0xEF;
        }
    } else if (D_8006A96C != 0) {
        if (--D_8006A96C == 0 && (t & 0x10)) {
            g_SoundLock = 1;
            DoSoundCommand(4, 0xBEB, 0);
            g_SoundLock = g_SfxTickPending;
            if (g_SfxTickPending != 0) {
                if (g_SfxMuteTimer != 0) {
                    g_SfxMuteTimer -= 1;
                }
                UpdateSfxVoices();
                FlushSfxVoices();
                UpdateSfxTracks();
                g_SfxTickPending = 0;
                g_SoundLock = 0;
            }
            g_SoundFrameHook = 0;
            g_LoopSfxFlags &= 0xEF;
        }
    }
}

void StepMovieFade(void) {
    s16 v;
    D_800760E8++;
    if ((s16)D_800760E8 < 0x10) {
        if (D_800760E4 > D_800760EC) {
            v = D_800760E4 - D_800760EC;
            D_800760E4 = v;
            SsSetSerialVol(0, v, v);
            return;
        }
    }
    SsSetSerialVol(0, 0, 0);
    g_SoundFrameHook = 0;
}

void ResetBankLoader(void) {
    g_BankLoadStep = 0;
    ClearBankMap();
}

extern s32 D_800A46C8;
extern u8 D_80064D49[];
extern u8 D_80064D4D[];
extern void StopOrphanSfxVoices(void);

s32 BeginBankUpload(s32 a) {
    s32 n;
    if (ClaimSpuTransfer(PS1_FN_ADDR(CancelBankUpload)) == 0) {
        return 0;
    }
    a *= 12;
    n = D_80064D49[a];
    D_800A46C8 = (&D_800A463C)[n * 6];
    if (g_SoundSlot[n].unk10 == 0) {
        g_BankSlotMap[*(s16 *)g_SoundSlot[n].pad0].lo = -1;
    }
    StopOrphanSfxVoices();
    n = D_80064D4D[a];
    if (n != 0) {
        if (g_SoundSlot[n].unk2 >= 0) {
            StopBgm();
            SsVabClose(g_SoundSlot[n].unk2);
            g_SoundSlot[n].unk2 = -1;
            *(s16 *)g_SoundSlot[n].pad0 = -1;
        }
        g_SoundSlot[n].unk10 = 1;
    }
    g_BankLoadStep = 0;
    g_SpuXferFlags |= 2;
    return 1;
}

s32 UploadBankData(s32 n, u8 *dst) {
    s32 *p;
    if ((g_SpuXferFlags & 1) && SpuIsTransferCompleted(0) == 0) {
        goto fail;
    }
    p = &D_800A46C8;
    if (SpuSetTransferStartAddr(*p) == 0) {
fail:
        ReleaseSpuTransfer();
        return 0;
    }
    SpuRead((s32)dst, n);
    *p += n;
    g_SpuXferFlags |= 1;
    return 1;
}

s32 OpenSoundBank(s32 a, s32 b) {
    if (g_BankLoadStep == 0) {
        ReleaseSpuTransfer();
        if (SpuIsTransferCompleted(0) != 0) {
            g_SpuXferFlags &= 0xFE;
            b = func_8002FF0C(a, b);
        } else {
            b = 0;
        }
    } else {
        b = func_8002FF0C(a, b);
    }
    if (b != 0) {
        if (a == 0x1A) {
            SetReverbDepth(0x28);
        }
        return b;
    }
    return 0;
}

void AbortBankUpload(void) {
    ReleaseSpuTransfer();
}

extern s16 D_800A46D2;
extern s32 D_800652F0[];
extern s16 SsVabFakeHead(u8 *addr, s16 vabid, u32 sbaddr);
extern s16 SsVabFakeBody(s16 vabid);

extern s16 D_800A46A0;
extern s16 D_800A46A2;
extern u8 D_800A46B0;
extern s32 D_800A469C;
s32 OpenMusicVab(s32 a, u8 *b) {
    StopBgmAll();
    if (D_800A46A2 >= 0) {
        SsVabClose(D_800A46A2);
        D_800A46A2 = -1;
    }
    D_800A46A0 = a | 0x4000;
    D_800A46B0 = 1;
    D_800A469C = *(s32 *)((u8 *)D_800652F0 + a * 4);
    D_800A46A2 = D_800A46D2 = SsVabFakeHead(b, -1, D_800A469C);
    if (D_800A46A2 == -1) {
        D_800A46B0 = 1;
        return 1;
    }
    if (SsVabFakeBody(D_800A46A2) == -1) {
        SsVabClose(D_800A46D2);
        D_800A46A2 = -1;
        D_800A46B0 = 1;
        return 1;
    }
    D_800A46B0 = 0;
    return 1;
}

extern s32 D_800A46BC;
extern s16 D_800A46CE;
extern s16 D_800A46D0;
typedef struct { u8 c; u8 pad[11]; } Row12;
extern Row12 D_80064D4A[];
extern u8 D_80064D4E[];
typedef struct { u8 pad0[8]; SoundSlot slot[5]; u8 pad80[0x1A]; s16 unk9A; } SoundBlk;
extern s32 func_80030730(void);
extern s32 func_80030A14(void);
extern s16 SsVabFakeHead(u8 *addr, s16 vabid, u32 sbaddr);
extern s16 SsVabFakeBody(s16 vabid);

s32 func_8002FF0C(s32 a, s32 b) {
    s32 n;
    s16 r;
    s32 t;
    s16 *p;
    s32 c;
    s32 off;

    if (g_BankLoadStep == 0) {
        n = D_80064D49[a * 12];
        if (g_SoundSlot[n].unk4 != 0 && g_SoundSlot[n].unk4 != D_80064D4A[a].c) {
            *(s16 *)(D_800C532A + g_SoundSlot[n].unk8 * 4) = -1;
            g_SoundSlot[n].unk4 = 0;
            g_SoundSlot[n].unk8 = 0;
        }
        if (g_SoundSlot[n].unk10 == 0) {
            g_BankSlotMap[*(s16 *)g_SoundSlot[n].pad0].lo = -1;
            StopOrphanSfxVoices();
        }
        *(s16 *)((u8 *)&g_SoundVSyncCount + 0x96) = n;
        off = n * 0x18;
        *(s16 *)((u8 *)g_SoundSlot + off) = a;
        D_800A46D0 = a;
        D_800A46BC = b;
        *(s32 *)&g_SoundSlot[n].padA[2] = b;
        c = D_80064D4E[a * 12];
        if (c != 0) {
            D_800A4EF6 = c;
        }
        ((SoundBlk *)&g_SoundVSyncCount)->slot[n].unk2 = D_800A46D2 = r = SsVabFakeHead((u8 *)b, -1, (&D_800A463C)[n * 6]);
        if (r == -1 || SsVabFakeBody(((SoundBlk *)&g_SoundVSyncCount)->unk9A) == -1) {
            g_SoundSlot[n].unk10 = 1;
            return 1;
        }
        g_BankLoadStep = 1;
    }
    t = 0;
    switch (g_BankLoadStep) {
    case 1:
        t = func_80030730();
        break;
    case 2:
        t = func_80030A14();
        break;
    }
    if (t != 0) {
        p = &D_800A46D2;
        SsVabClose(*p);
        *p = -1;
        g_SoundSlot[D_800A46CE].unk2 = -1;
        return 1;
    }
    return 0;
}

s32 CancelBankUpload(void) {
    g_BankLoadStep = 0;
    g_SpuXferFlags &= 0xFD;
    return 1;
}

extern s32 D_800A46C0;
extern s32 D_800A46C4;
extern s32 (*D_8006AA14[])(void);
extern s16 SsVabOpenHeadSticky(u8 *addr, s16 vabid, u32 sbaddr);

s32 func_800301C8(s32 a, s32 b, s32 c) {
    s32 i;
    s32 n;
    s32 t;
    s16 v;
    s32 o;
    s16 *p;
    u8 *q;
    s16 r;
    s32 ret;
    if (g_BankLoadStep == 0) {
        i = a * 12;
        D_800A46C4 = 0;
        t = D_80064D49[i];
        D_800A46C0 = c;
        D_800A46BC = b;
        D_800A46CE = t;
        n = t;
        o = n * 24;
        *(s32 *)((u8 *)g_SoundSlot + o + 0xC) = b;
        v = *(s16 *)((u8 *)g_SoundSlot + o + 4);
        if (v != 0) {
            if (v != D_80064D49[i + 1]) {
                *(s16 *)(D_800C532A + g_SoundSlot[n].unk8 * 4) = -1;
                g_SoundSlot[n].unk4 = 0;
                g_SoundSlot[n].unk8 = 0;
            }
        }
        if (g_SoundSlot[n].unk10 == 0) {
            g_BankSlotMap[*(s16 *)g_SoundSlot[n].pad0].lo = -1;
            StopOrphanSfxVoices();
            SsVabClose(g_SoundSlot[n].unk2);
        }
        p = &D_800A46D0;
        *(s16 *)g_SoundSlot[n].pad0 = *p = a;
        g_SoundSlot[n].unk10 = 1;
        r = SsVabOpenHeadSticky((u8 *)b, -1, (&D_800A463C)[n * 6]);
        D_800A46D2 = r;
        q = (u8 *)p - 0x98;
        *(s16 *)(q + n * 24 + 0xA) = r;
        if (r == -1) {
            g_SoundSlot[n].unk10 = 1;
            return 1;
        }
        if (ClaimSpuTransfer(PS1_FN_ADDR(CancelBankUpload)) != 0) {
            g_SpuXferFlags |= 2;
            if (g_SpuXferFlags & 1) {
                g_BankLoadStep = 2;
            } else {
                g_BankLoadStep = 3;
            }
        } else {
            g_BankLoadStep = 1;
        }
        return 0;
    }
    ret = PS1_FN(D_8006AA14[g_BankLoadStep])();
    if (ret != 0) {
        if (D_800A46D2 >= 0) {
            SsVabClose(D_800A46D2);
            D_800A46D2 = -1;
            g_SoundSlot[D_800A46CE].unk2 = -1;
        }
    }
    return ret;
}

s32 func_80030470(void) {
    u16 *c;
    if (ClaimSpuTransfer(PS1_FN_ADDR(CancelBankUpload)) != 0) {
        c = (u16 *)&g_BankLoadStep;
        *c += 1;
        g_SpuXferFlags |= 2;
    }
    return 0;
}

s32 func_800304C8(void) {
    u16 *c;
    if (g_SpuXferFlags & 1) {
        if (SpuIsTransferCompleted(0) != 0) {
            g_SpuXferFlags &= 0xFE;
        }
    } else {
        c = (u16 *)&g_BankLoadStep;
        *c += 1;
    }
    return 0;
}

extern s16 D_800A46CE;
extern s32 D_800A46C0;
extern s32 D_800A46C4;
extern s32 SsVabTransBodyPartly(void *addr, s32 size, s32 id);

s32 func_80030538(void) {
    s32 i = D_800A46CE;
    u16 *cnt;
    s16 r = SsVabTransBodyPartly((u8 *)D_800A46C0 + D_800A46C4, 0x8000, g_SoundSlot[i].unk2);
    switch (r) {
    case -2:
        D_800A46C4 += 0x8000;
        g_BankLoadStep++;
        break;
    case -1:
        g_SoundSlot[i].unk10 = 1;
        g_BankLoadStep += 2;
        return 1;
    default:
        cnt = (u16 *)&g_BankLoadStep;
        *cnt += 2;
        break;
    }
    return 0;
}

extern s16 SsVabTransCompleted(s16 mode);

s32 func_80030634(void) {
    s32 i;
    u16 *cnt;
    s16 r;
    if (SsVabTransCompleted(0) != 0) {
        i = D_800A46CE;
        r = SsVabTransBodyPartly((u8 *)D_800A46C0 + D_800A46C4, 0x8000, g_SoundSlot[i].unk2);
        switch (r) {
        case -2:
            D_800A46C4 += 0x8000;
            break;
        case -1:
            g_SoundSlot[i].unk10 = 1;
            g_BankLoadStep++;
            break;
        default:
            cnt = (u16 *)&g_BankLoadStep;
            *cnt += 1;
            break;
        }
    }
    return 0;
}

typedef struct {
     u8 prior;
     u8 mode;
     u8 vol;
     u8 pan;
     u8 center;
     u8 shift;
     u8 min;
     u8 max;
     u8 pad8[8];
     u16 adsr1;
     u16 adsr2;
     s16 prog;
     s16 vag;
     s16 reserved[4];
} VagAtr;
extern s16 SsUtGetVagAtr(s16 vabId, s16 prog, s16 tone, VagAtr *atr);

extern u8 D_80064D44[];
extern s32 D_800760F0;
extern s32 D_800760F4;
extern s32 SsUtGetVagAddr(s16 vabId, s16 vag);

s32 func_80030730(void) {
    VagAtr atr;
    s32 o;
    u8 *r;
    u8 *p;
    u8 *q;
    s32 n;
    s32 cnt;
    s32 k;
    s32 addr;
    u16 *c;

    if (SsVabTransCompleted(0) == 0) {
        return 0;
    }
    g_SpuXferFlags &= 0xFC;
    ReleaseSpuTransfer();
    D_800760F0 = 0;
    o = *((s16 *)(u8 *)&g_BankLoadStep + 1) * 24;
    r = D_80064D44 + *((s16 *)(u8 *)&g_BankLoadStep + 2) * 12;
    D_800760F4 = r[4];
    if (D_800760F4 == 0) {
        *((u8 *)g_SoundSlot + o + 0x10) = 0;
        g_BankLoadStep = 0;
        return 1;
    }
    n = D_80065504[*((s16 *)(u8 *)&g_BankLoadStep + 1)];
    p = *(u8 **)r;
    if (n < D_800760F4) {
        D_800760F4 = n;
    }
    q = D_8006A970[*((s16 *)(u8 *)&g_BankLoadStep + 1)];
    cnt = 10;
    if (D_800760F4 < 11) {
        if (r[6] != 0) {
            *(s16 *)((u8 *)g_SoundSlot + o + 6) = r[7];
            g_SoundSlot[*((s16 *)(u8 *)&g_BankLoadStep + 1)].unk4 = r[6];
            g_SoundSlot[*((s16 *)(u8 *)&g_BankLoadStep + 1)].unk8 = r[8];
            *(s16 *)(D_800C532A + r[8] * 4) = *((s16 *)(u8 *)&g_BankLoadStep + 1);
        }
        cnt = D_800760F4;
        D_800760F4 = 0;
        g_BankSlotMap[*((s16 *)(u8 *)&g_BankLoadStep + 2)].lo = *((s16 *)(u8 *)&g_BankLoadStep + 1);
    } else {
        D_800760F4 -= 10;
    }
    for (k = 0; k < cnt; k++, p += 2, q += 12) {
        if (SsUtGetVagAtr(*((s16 *)(u8 *)&g_BankLoadStep + 3), p[0], p[1], &atr) == 0) {
            addr = SsUtGetVagAddr(*((s16 *)(u8 *)&g_BankLoadStep + 3), atr.vag);
            if (addr >= 0) {
                q[10] = 1;
                *(s16 *)(q + 4) = atr.center << 8;
                *(s32 *)q = addr;
                *(u16 *)(q + 6) = atr.adsr1;
                *(u16 *)(q + 8) = atr.adsr2;
            }
        }
    }
    if (D_800760F4 == 0) {
        g_SoundSlot[D_800A46CE].unk10 = 0;
        g_BankLoadStep = 0;
        return 1;
    }
    c = (u16 *)&g_BankLoadStep;
    D_800760F0 += 10;
    c[0]++;
    return 0;
}

extern u8 D_80064D44[];
extern s32 D_800760F0;
extern s32 D_800760F4;
typedef struct { s16 v; } S16R;
extern s32 SsUtGetVagAddr(s16 vabId, s16 vag);

s32 func_80030A14(void) {
    S16R *slot;
    u8 *e;
    u8 *p;
    u8 *q;
    s32 n;
    s32 i;
    s32 k;
    s32 o;
    s32 addr;
    VagAtr atr;

    if (SsVabTransCompleted(0) == 0) {
        return 0;
    }
    slot = (S16R *)&D_800A46CE;
    k = slot->v;
    e = D_80064D44 + D_800A46D0 * 12;
    p = *(u8 **)e + D_800760F0 * 2;
    q = D_8006A970[k] + D_800760F0 * 12;
    o = k * 24;
    if (D_800760F4 < 11) {
        if (e[6] != 0) {
            *(s16 *)((u8 *)g_SoundSlot + o + 6) = e[7];
            g_SoundSlot[slot->v].unk4 = e[6];
            *(s16 *)(g_SoundSlot[slot->v].pad6 + 2) = e[8];
            *(s16 *)(D_800C532A + e[8] * 4) = slot->v;
        }
        n = D_800760F4;
        D_800760F4 = 0;
        g_BankSlotMap[D_800A46D0].lo = slot->v;
    } else {
        n = 10;
        D_800760F4 -= 10;
    }
    for (i = 0; i < n; i++, p += 2, q += 12) {
        if (SsUtGetVagAtr((&D_800A46D0)[1], p[0], p[1], &atr) == 0) {
            addr = SsUtGetVagAddr((&D_800A46D0)[1], atr.vag);
            if (addr >= 0) {
                q[10] = 1;
                *(s16 *)(q + 4) = atr.center << 8;
                *(s32 *)q = addr;
                *(u16 *)(q + 6) = atr.adsr1;
                *(u16 *)(q + 8) = atr.adsr2;
            }
        }
    }
    if (D_800760F4 == 0) {
        g_SoundSlot[D_800A46CE].unk10 = 0;
        g_BankLoadStep = 0;
        return 1;
    }
    D_800760F0 += 10;
    return 0;
}

s32 AllocSfxVoice(u16 prio) {
    struct { s32 idx; u8 *ch; u16 prio; u8 found; } b;
    u8 *ch = (u8 *)g_SoundChan + 0x2A0;
    s32 i;
    b.found = 0;
    for (i = 0; i < 8; i++, ch += 0x54) {
        u8 *q = ch + 8;
        if (q[0x46] == 0) {
            return i + 1;
        }
        if (b.found == 0) {
            b.prio = *(u16 *)q;
            b.found = 1;
            b.idx = i;
            b.ch = ch;
        } else if (*(u16 *)q < b.prio) {
            b.prio = *(u16 *)q;
            b.idx = i;
            b.ch = ch;
        }
    }
    if (prio < b.prio) {
        return 0;
    }
    KeyOffSfxVoice(b.ch, 1);
    ch[0x4E] = 0;
    return ++b.idx;
}

extern s32 g_VoiceBit[];
extern void func_80031988();

void KeyOffSfxVoice(void *c, s16 n) {
    u8 saved;
    u8 r;
    u8 *q = &g_SoundLock;
    saved = *q;
    *q = 1;
    if (*(s32 *)c != 0) {
        *(s32 *)c = 0;
        r = 1;
    } else if (((u8 *)c)[0x4E] >= 2 && (g_KeyOnBits & g_VoiceBit[*(u16 *)((u8 *)c + 0xA)])) {
        g_SfxVoiceAttr[((u8 *)c)[0x51]].unk45 = 1;
        g_SfxVoiceAttr[((u8 *)c)[0x51]].unk4 &= 0xFFF9FFFF;
        r = 1;
        QueueKey(0, g_VoiceBit[*(u16 *)((u8 *)c + 0xA)]);
    } else {
        r = 0;
        if (n != 0) {
            ((u8 *)c)[0x50] = 1;
            g_SfxVoiceAttr[((u8 *)c)[0x51]].unk45 = 1;
            g_SfxVoiceAttr[((u8 *)c)[0x51]].unk4 &= 0xFFF9FFFF;
            QueueKey(0, g_VoiceBit[*(u16 *)((u8 *)c + 0xA)]);
        } else {
            s32 bits = g_VoiceBit[*(u16 *)((u8 *)c + 0xA)];
            ((u8 *)c)[0x50] = 0;
            QueueKey(0, bits);
            func_80031988(c);
        }
    }
    if (*(void (**)(u8, s32))((u8 *)c + 0x40) != 0) {
        PS1_FN(*(void (**)(u8, s32))((u8 *)c + 0x40))(((u8 *)c)[0x51], *(s32 *)((u8 *)c + 0x44));
    }
    *(s32 *)((u8 *)c + 0x40) = 0;
    if (r) {
        ((u8 *)c)[0x4E] = 0;
    }
    g_SoundLock = saved;
}

typedef struct { u16 v; } U16E;
extern U16E D_8006AA30[];
extern const u16 D_8007319E[];
extern u16 D_8007321E;
extern void UpdateSfxVoicePitch();
extern void func_800316F8();

void UpdateSfxVoices(void) {
    s32 i;
    u8 *keys = (u8 *)g_SoundChan + 0x816;
    u8 *c = (u8 *)g_SoundChan + 0x2A0;
    for (i = 0; i < 8; i++, c += 0x54) {
        u8 f = 0;
        if ((c[0x4E] &= 0x7F) != 0) {
            (*(s32 *)(c + 4))++;
            if (*(s32 *)c != 0) {
                if (--*(s32 *)c == 0) {
                    QueueKey(1, g_VoiceBit[*(u16 *)(c + 0xA)]);
                    func_800316F8(c);
                }
            } else {
                if (c[0x4E] >= 2) {
                    c[0x4E]--;
                } else {
                    switch (keys[*(u16 *)(c + 0xA)]) {
                    case 3:
                        c[0x50] = 0;
                        QueueKey(0, ((const s32 *)g_VoiceBit)[*(u16 *)(c + 0xA)]);
                    case 0:
                        c[0x4E] = 0;
                        if (*(void (**)(u8, s32))(c + 0x40) != 0) {
                            PS1_FN(*(void (**)(u8, s32))(c + 0x40))(c[0x51], *(s32 *)(c + 0x44));
                        }
                        *(s32 *)(c + 0x40) = 0;
                        break;
                    case 2:
                        if (c[0x50] != 0) {
                            SpuSetVoiceRR(*(u16 *)(c + 0xA), 1);
                            c[0x50] = 0;
                        }
                        break;
                    }
                }
                if (c[0x4C] != 0) {
                    f = 1;
                    if ((s16)(*(u16 *)(c + 0x4A) -= 0x220) <= 0) {
                        *(u16 *)(c + 0x4A) = 0;
                        c[0x4C] = 0;
                        c[0x50] = 1;
                        g_SfxVoiceAttr[i].unk45 = 1;
                        QueueKey(0, g_VoiceBit[*(u16 *)(c + 0xA)]);
                    }
                }
                if (c[0x4F] != 0) {
                    f = 1;
                    c[0x4F] = 0;
                }
                if (c[0x37] & 2) {
                    if (*(s32 *)(c + 0x1C) >= 0) {
                        *(s32 *)(c + 0x18) += *(u16 *)(c + 0x32);
                        if (*(s32 *)(c + 0x18) >= *(s32 *)(c + 0x1C)) {
                            *(s32 *)(c + 0x18) = *(s32 *)(c + 0x1C);
                            c[0x37] &= 0xFD;
                        }
                    } else {
                        *(s32 *)(c + 0x18) -= *(u16 *)(c + 0x32);
                        if (*(s32 *)(c + 0x18) <= *(s32 *)(c + 0x1C)) {
                            *(s32 *)(c + 0x18) = *(s32 *)(c + 0x1C);
                            c[0x37] &= 0xFD;
                        }
                    }
                    f = 1;
                }
                if ((g_SoundStereo != 0 && c[0x53] != 0) || f) {
                    s16 p = c[0x35];
                    if (p != 0) {
                        p += *(s32 *)(c + 0x18) >> 8;
                        if (c[0x53] != 0) {
                            p += c[0x53];
                            if (p < 0x42) {
                                p = 1;
                            } else {
                                p -= 0x40;
                                if (p >= 0x80) {
                                    p = 0x7F;
                                }
                            }
                        }
                    }
                    if (f || p != c[0x52]) {
                        u32 vol;
                        u32 r;
                        u8 *v;
                        vol = D_8006AA30[c[0x34]].v;
                        vol = (vol * *(s16 *)((u8 *)g_SoundChan + 0x812)) >> 7;
                        vol = (vol * *(s16 *)(c + 0x48)) >> 7;
                        if (f) {
                            vol = (vol * ((s16)*(u16 *)(c + 0x4A) >> 7)) >> 8;
                        }
                        v = (u8 *)&g_SoundChan[16] + i * 0x48;
                        *(s32 *)v = g_VoiceBit[*(u16 *)(c + 0xA)];
                        if (p != 0) {
                            if (((u8 *)g_SoundChan)[0x831] != 0) {
                                *(u16 *)(v + 8) = (vol * (D_8007319E + 1)[0x7F - p]) >> 14;
                                { const u16 *pl = D_8007319E; *(u16 *)(v + 0xA) = (vol * pl[p]) >> 14; }
                            } else {
                                r = (vol * D_8007321E) >> 14;
                                *(u16 *)(v + 0xA) = r;
                                *(u16 *)(v + 8) = r;
                            }
                        } else {
                            r = vol;
                            *(u16 *)(v + 0xA) = r;
                            *(u16 *)(v + 8) = r;
                        }
                        *(s32 *)(v + 0x40) = *(u16 *)(c + 0xA);
                        if (v[0x44] != 0) {
                            *(s32 *)(v + 4) |= 3;
                        } else {
                            v[0x44] = 1;
                            *(s32 *)(v + 4) = 3;
                        }
                        c[0x52] = p;
                    }
                }
                UpdateSfxVoicePitch(c);
                if (*(u16 *)(c + 0x12) != 0) {
                    if (--*(u16 *)(c + 0x12) == 0) {
                        func_80031988(c);
                        { s32 bits = g_VoiceBit[*(u16 *)(c + 0xA)]; c[0x50] = 0; QueueKey(0, bits); }
                        if (*(void (**)(u8, s32))(c + 0x40) != 0) {
                            PS1_FN(*(void (**)(u8, s32))(c + 0x40))(c[0x51], *(s32 *)(c + 0x44));
                        }
                        *(s32 *)(c + 0x40) = 0;
                    }
                }
            }
        } else {
            u8 s = keys[*(u16 *)(c + 0xA)];
            if (s == 0 || s == 3) {
                g_ReverbOnBits &= ~g_VoiceBit[*(u16 *)(c + 0xA)];
            }
        }
    }
}

extern u16 D_8006AB30[];
extern u16 D_8006AB32[];

void UpdateSfxVoicePitch(u8 *c) {
    u8 *p;
    u32 w;
    u32 d;
    s32 n, a, l;
    u8 unused[8];
    s16 h;
    s32 k;
    u32 t;

    if (!(c[0x37] & 1)) {
        return;
    }
    if (*(u16 *)(c + 0x30) != 0) {
        (*(u16 *)(c + 0x30))--;
        return;
    }
    n = *(s32 *)(c + 0x2C);
    if (n < 0) {
        a = *(s32 *)(c + 0x24) + n;
        *(s32 *)(c + 0x24) = a;
        l = *(s32 *)(c + 0x28);
        if (l < a) {
            goto next;
        }
    } else {
        a = *(s32 *)(c + 0x24) + n;
        *(s32 *)(c + 0x24) = a;
        l = *(s32 *)(c + 0x28);
        if (a < l) {
            goto next;
        }
    }
    *(s32 *)(c + 0x24) = l;
    c[0x37] &= 0xFE;
next:
    if (!(c[0x37] & 1) && c[0x38] != 0) {
        h = *(s16 *)(c + 0x3C);
        if (*(s32 *)(c + 0x24) != h) {
            *(s32 *)(c + 0x28) = h;
            if (*(s16 *)(c + 0x3C) < *(s32 *)(c + 0x24)) {
                *(s32 *)(c + 0x2C) = -*(s16 *)(c + 0x3A);
            } else {
                *(s32 *)(c + 0x2C) = *(s16 *)(c + 0x3A);
            }
        }
        c[0x38] = 0;
        c[0x37] |= 1;
    }
    p = (u8 *)g_SfxVoiceAttr + c[0x51] * 0x48;
    *(s32 *)p = g_VoiceBit[*(u16 *)(c + 0xA)];
    l = *(u16 *)(D_8006A970[*(u16 *)(c + 0x10)] + *(u16 *)(c + 0xC) * 12 + 4);
    w = (u16)l;
    n = w & 0xFF00;
    k = n + ((s32)(w << 24) >> 23);
    *(u16 *)(p + 0x18) = l;
    k -= 0x3C00;
    d = *(s32 *)(c + 0x24);
    d -= k;
    if (d >= 0x5300) {
        *(u16 *)(p + 0x14) = 0x3FFF;
    } else {
        l = d >> 8;
        t = D_8006AB30[l] * (0x100 - (d & 0xFF));
        t += D_8006AB32[l] * (d & 0xFF);
        t >>= 8;
        *(u16 *)(p + 0x14) = t;
    }
    *(s32 *)(p + 0x40) = *(u16 *)(c + 0xA);
    if (p[0x44] != 0) {
        *(s32 *)(p + 4) |= 0x10;
    } else {
        p[0x44] = 1;
        *(s32 *)(p + 4) = 0x10;
    }
}

void func_800316F8(u8 *a) {
    u16 *p;
    u16 len = 0;
    u16 n = 0;

    p = *(u16 **)(a + 0x14);
    a[0x37] = 0;
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x20) = *(s32 *)(a + 0x24);
    if (p == 0) {
        return;
    }
    switch (p[0]) {
    case 1:
        n = p[1];
        len = p[2];
        *(u16 *)(a + 0x30) = 0;
        a[0x38] = 1;
        *(u16 *)(a + 0x3A) = p[3];
        *(u16 *)(a + 0x3C) = p[4];
        *(u16 *)(a + 0x12) = p[7];
        break;
    case 9:
        n = p[1];
        len = p[2] + *(s32 *)(a + 0x20);
        *(u16 *)(a + 0x30) = 0;
        a[0x38] = 1;
        *(u16 *)(a + 0x3A) = p[3];
        *(u16 *)(a + 0x3C) = p[4] + *(s32 *)(a + 0x20);
        *(u16 *)(a + 0x12) = p[7];
        break;
    case 6:
        n = p[2];
        len = p[3];
        *(u16 *)(a + 0x30) = 0;
        a[0x38] = 1;
        *(u16 *)(a + 0x3A) = p[4];
        *(u16 *)(a + 0x3C) = p[5];
        *(u16 *)(a + 0x12) = p[8];
        *(u16 *)(a + 0x30) = p[1];
        break;
    case 10:
        n = p[2];
        len = p[3] + *(s32 *)(a + 0x20);
        *(u16 *)(a + 0x30) = 0;
        a[0x38] = 1;
        *(u16 *)(a + 0x3A) = p[4];
        *(u16 *)(a + 0x3C) = p[5] + *(s32 *)(a + 0x20);
        *(u16 *)(a + 0x12) = p[8];
        *(u16 *)(a + 0x30) = p[1];
        break;
    case 0:
        a[0x38] = 0;
        n = p[1];
        len = p[2];
        *(u16 *)(a + 0x12) = p[5];
        *(u16 *)(a + 0x30) = 0;
        break;
    case 7:
        a[0x38] = 0;
        n = p[1];
        len = p[2] + *(s32 *)(a + 0x20);
        *(u16 *)(a + 0x12) = p[5];
        *(u16 *)(a + 0x30) = 0;
        break;
    case 5:
        a[0x38] = 0;
        n = p[2];
        len = p[3];
        *(u16 *)(a + 0x12) = p[6];
        *(u16 *)(a + 0x30) = p[1];
        break;
    case 8:
        a[0x38] = 0;
        n = p[2];
        len = p[3] + *(s32 *)(a + 0x20);
        *(u16 *)(a + 0x12) = p[6];
        *(u16 *)(a + 0x30) = p[1];
        break;
    case 2:
        a[0x38] = 0;
        *(u16 *)(a + 0x12) = p[1];
        *(u16 *)(a + 0x30) = 0;
        return;
    case 3:
        a[0x37] |= 2;
        *(s32 *)(a + 0x1C) = (s16)p[2] << 8;
        *(u16 *)(a + 0x32) = p[3];
        a[0x38] = 0;
        *(u16 *)(a + 0x12) = p[1];
        *(u16 *)(a + 0x30) = 0;
        return;
    case 4:
        a[0x37] |= 2;
        *(s32 *)(a + 0x1C) = (s16)p[1] << 8;
        *(u16 *)(a + 0x32) = p[2];
        a[0x38] = 0;
        *(u16 *)(a + 0x30) = 0;
        return;
    }
    if (n != 0 && *(s32 *)(a + 0x24) != len) {
        a[0x37] |= 1;
        *(s32 *)(a + 0x28) = len;
        if (len < *(s32 *)(a + 0x24)) {
            *(s32 *)(a + 0x2C) = -n;
        } else {
            *(s32 *)(a + 0x2C) = n;
        }
    }
}

void func_80031988(u8 *a) {
    u8 *p = *(u8 **)(a + 0x14);
    u16 v;
    u16 s;

    if (p == NULL) {
        return;
    }
    switch (*(u16 *)p) {
    case 0:
        v = *(u16 *)(p + 6);
        s = *(u16 *)(p + 8);
        break;
    case 7:
        v = *(u16 *)(p + 6) + *(s32 *)(a + 0x20);
        s = *(u16 *)(p + 8);
        break;
    case 5:
        v = *(u16 *)(p + 8);
        s = *(u16 *)(p + 0xA);
        break;
    case 8:
        v = *(u16 *)(p + 8) + *(s32 *)(a + 0x20);
        s = *(u16 *)(p + 0xA);
        break;
    case 1:
        v = *(u16 *)(p + 0xA);
        s = *(u16 *)(p + 0xC);
        break;
    case 9:
        v = *(u16 *)(p + 0xA) + *(s32 *)(a + 0x20);
        s = *(u16 *)(p + 0xC);
        break;
    case 6:
        v = *(u16 *)(p + 0xC);
        s = *(u16 *)(p + 0xE);
        break;
    case 10:
        v = *(u16 *)(p + 0xC) + *(s32 *)(a + 0x20);
        s = *(u16 *)(p + 0xE);
        break;
    default:
        return;
    }
    if (*(s32 *)(a + 0x24) != v) {
        a[0x38] = 0;
        *(s32 *)(a + 0x28) = v;
        a[0x37] |= 1;
        if (v < *(s32 *)(a + 0x24)) {
            *(s32 *)(a + 0x2C) = -s;
        } else {
            *(s32 *)(a + 0x2C) = s;
        }
    }
}

void StopOrphanSfxVoices(void) {
    s32 i;
    u8 *ch = (u8 *)g_SoundChan + 0x2A0;
    for (i = 0; i < 8; i++, ch += 0x54) {
        u8 *q = ch + 0xE;
        s32 v;
        if (q[0x40] != 0) {
            if (q[0x28] != 0) {
                v = g_BankSlotMap[*(u16 *)q].hi;
            } else if (*(u16 *)q & 0x80) {
                if (g_SoundSlot[4].unk10 == 0) {
                    continue;
                }
                KeyOffSfxVoice(ch, 1);
                continue;
            } else {
                v = g_BankSlotMap[*(u16 *)q].lo;
            }
            if (v < 0) {
                KeyOffSfxVoice(ch, 1);
            }
        }
    }
}

void FadeOutFlaggedSfxVoices(void) {
    s32 i;
    for (i = 0; i < 8; i++) {
        u8 *p = (u8 *)g_SoundChan + 0x2EA + i * 0x54;
        if (p[4] != 0 && p[2] == 0 && p[3] != 0) {
            p[2] = 1;
            *(s16 *)p = 0x7FFF;
        }
    }
}

extern u16 D_800A2BB0[];
extern u16 D_800BA108[];
extern void func_8003388C();

void UpdateSfxTracks(void) {
    u8 *f = &g_SoundLock;
    u8 *c = f - 0x82F;
    s32 i;
    if (*f == 0) {
        for (i = 0; i < 8; i++, c += 0x54) {
            D_800A2BB0[i] = *(u16 *)(c + 4);
            D_800BA108[i] = *(u16 *)(c + 6);
            switch (*(u16 *)c & 0x3F) {
            case 0:
                break;
            case 1:
                if (*(u16 *)(c + 8) != 0) {
                    *(u16 *)(c + 8) -= 1;
                }
                break;
            case 5:
                func_8003388C(c, i);
                break;
            }
        }
    }
}

void StopAllSfx(void) {
    u8 *ch = (u8 *)g_SoundChan;
    s32 i;
    for (i = 0; i < 8; i++, ch += 0x54) {
        switch (*(u16 *)ch & 0x3F) {
        case 1:
            if (ch[0xA] != 0) {
                StopSfxTrackVoices(i, 1);
            }
            break;
        case 5:
            StopScriptSfx(ch, 0);
            break;
        }
    }
}

void ReleaseAllSfx(void) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i = 0;
    do {
        if ((*(u16 *)c & 0x3F) == 1 && c[0xA] != 0) {
            StopSfxTrackVoices(i, 0);
        }
        i++;
        c += 0x54;
    } while (i < 8);
}

void DimSfx(void) {
    u8 *ch = (u8 *)g_SoundChan;
    s32 i;
    for (i = 0; i < 8; i++, ch += 0x54) {
        u16 t = *(u16 *)ch;
        switch (t & 0x3F) {
        case 1:
            if (!(t & 0x40)) {
                StopSfxTrackVoices(i, 1);
            }
            break;
        case 5:
            DimScriptSfx(ch);
            break;
        }
    }
}

void UndimSfx(void) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i = 0;
    s32 t;
    do {
        t = *(u16 *)c & 0x3F;
        if (t != 1 && t == 5) {
            UndimScriptSfx(c);
        }
        i++;
        c += 0x54;
    } while (i < 8);
}

void SilenceSfx(void) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i = 0;
    u16 wv;
    u16 t;
    do {
        wv = *(u16 *)c;
        t = wv & 0x3F;
        switch (t) {
        case 1:
            if (c[0xA] != 0 && !(wv & 0x40)) { StopSfxTrackVoices(i, 1); }
            break;
        case 5:
            SilenceScriptSfx(c);
            break;
        }
        i++;
        c += 0x54;
    } while (i < 8);
}

void UnsilenceSfx(void) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i = 0;
    s32 t;
    do {
        t = *(u16 *)c & 0x3F;
        if (t != 1 && t == 5) {
            UnsilenceScriptSfx(c);
        }
        i++;
        c += 0x54;
    } while (i < 8);
}

extern u8 *D_80068304[];
extern void func_80032A74(u8 *c, s32 i, u8 *s, u16 f);
extern s32 FindSfxTrack(s32 id);
extern void SetSfxTrackVolPan(s32 ch, u16 cmd);

s32 AllocSfxTrack(s32 prio);

s32 PlaySfxSingle(s32 a, u8 *p, u32 f) {
    u8 *s;
    u8 *tbl;
    u8 *c;
    s32 id;
    u16 hi;
    u16 prio;
    s32 n;
    s32 r;
    u8 saved;
    u8 *q;
    s32 b1, b2, b3;

    b2 = p[2];
    b1 = p[1];
    b3 = p[3];
    hi = (u32)a >> 16;
    if (b1 == 0) {
        s = D_80068304[b2] + b3 * 0x14;
    } else {
        if (g_StageSfxTableId != b1) {
            return 0;
        }
        tbl = (u8 *)g_StageSfxTable;
        if (tbl == 0) {
            return 0;
        }
        s = (*(u8 ***)(tbl + 0x14))[b2];
        s += b3 * 0x14;
    }
    q = &g_SoundLock;
    saved = *q;
    *q = 1;
    prio = *(u16 *)s;
    r = 0;
    if ((u16)f == 0xFFFF) {
        f = 0;
        id = hi;
        hi = 0;
    } else {
        id = a;
    }
    n = FindSfxTrack(id);
    if (n == 0) {
        if (f & 0x4000) {
            if (!(f & 0x3000)) {
                goto end;
            }
        } else if ((f & 0x1000) && (f & 0x7F) < 0x30) {
            prio >>= 1;
        }
        n = AllocSfxTrack(prio);
        if (n == 0) {
            goto end;
        }
        r = n;
        n--;
        c = (u8 *)&g_SoundChan[n];
    } else {
        if (f & 0x4000) {
            SetSfxTrackVolPan(n - 1, f);
            goto end;
        }
        n--;
        c = (u8 *)&g_SoundChan[n];
        if (*(u16 *)(c + 8) != 0) {
            goto end;
        }
        r = n + 1;
        StopSfxTrack(n);
    }
    *(u16 *)c = (p[0] & 0xC0) | 1;
    *(u16 *)(c + 4) = id;
    *(u16 *)(c + 6) = hi;
    *(u16 *)(c + 2) = prio;
    *(u16 *)(c + 8) = *(u16 *)(s + 0xC);
    c[0xA] = 5;
    func_80032A74(c, n, s, f);
end:
    g_SoundLock = saved;
    return r;
}

s32 PlaySfxRestart(s32 a, u8 *p, s32 flags0) {
    u16 hi = (u32)a >> 16;
    s32 flags = flags0;
    s16 lo = a;
    u8 *e;
    u8 *c;
    s32 n;
    s32 ret;
    u8 save;
    u8 *q;
    u16 id;
    u8 b2 = p[2];
    u8 b1 = p[1];
    s32 b3 = p[3];
    if (b1 == 0) {
        e = D_80068304[b2] + b3 * 0x14;
    } else {
        if (g_StageSfxTableId != b1) {
            return 0;
        }
        if (g_StageSfxTable == 0) {
            return 0;
        }
        e = (*(u8 ***)(g_StageSfxTable + 0x14))[b2];
        e += b3 * 0x14;
    }
    ret = 0;
    q = &g_SoundLock;
    save = *q;
    *q = 1;
    id = *(u16 *)e;
    n = FindSfxTrack((u16)a);
    if (n == 0) {
        if (flags & 0x4000) {
            if (!(flags & 0x3000)) {
                goto end;
            }
        }
        n = AllocSfxTrack(id);
        if (n == 0) {
            goto end;
        }
        ret = n;
        n--;
        c = (u8 *)((SoundChan *)(&g_SoundLock - 0x82F) + n);
    } else {
        n--;
        c = (u8 *)((SoundChan *)(&g_SoundLock - 0x82F) + n);
        if (*(u16 *)(c + 8) != 0) {
            goto end;
        }
        ret = n + 1;
        StopSfxTrack(n);
    }
    q = c;
    *(s16 *)q = (p[0] & 0xC0) | 1;
    *(s16 *)(q + 4) = lo;
    *(u16 *)(q + 6) = hi;
    *(u16 *)(q + 2) = id;
    *(u16 *)(q + 8) = *(u16 *)(e + 0xC);
    q[0xA] = 5;
    func_80032A74(q, n, e, flags);
end:
    g_SoundLock = save;
    return ret;
}

s32 PlaySfxPoly(s32 a, u8 *p, s32 flags0, s32 lim) {
    s32 flags = flags0;
    u16 hi;
    s16 lo16 = a;
    u8 *e;
    u8 *c;
    u8 *w;
    u8 *r;
    u8 *q;
    s32 n;
    s32 i;
    s32 v;
    s32 cnt;
    s32 lo;
    s32 top = 0;
    s32 ret;
    u8 save;
    u16 id;
    u8 b2 = p[2];
    u8 b1 = p[1];
    s32 b3 = p[3];
    hi = (u32)a >> 16;
    if (b1 == 0) {
        e = D_80068304[b2] + b3 * 0x14;
    } else {
        if (g_StageSfxTableId != b1) {
            return 0;
        }
        if (g_StageSfxTable == 0) {
            return 0;
        }
        e = (*(u8 ***)(g_StageSfxTable + 0x14))[b2];
        e += b3 * 0x14;
    }
    ret = 0;
    n = 0;
    cnt = 0;
    q = &g_SoundLock;
    save = *q;
    *q = 1;
    id = *(u16 *)e;
    w = q - 0x82F;
    lo = 0x80;
    for (i = 0; i < 8; i++, w += 0x54) {
        if ((*(u16 *)w & 0x3F) == 1 && *(u16 *)(w + 4) == (u16)lo16) {
            v = w[0xB] & 0x7F;
            if (v < lo) {
                n = i + 1;
                lo = v;
            }
            if (v >= top) {
                top = v;
            }
            cnt++;
        }
    }
    if (cnt <= lim) {
        n = 0;
    } else if ((flags & 0x7F) < lo) {
        goto end;
    }
    if (n == 0) {
        if (flags & 0x4000) {
            if (!(flags & 0x3000)) {
                goto end;
            }
        }
        n = AllocSfxTrack(id);
        if (n == 0) {
            goto end;
        }
        ret = n;
        n--;
        c = (u8 *)&g_SoundChan[n];
    } else {
        n--;
        c = (u8 *)&g_SoundChan[n];
        if (*(u16 *)(c + 8) != 0) {
            goto end;
        }
        ret = n + 1;
        StopSfxTrack(n);
    }
    if (flags & 0x1000) {
        c[0xB] = flags & 0x7F;
        if ((flags & 0x7F) < top) {
            flags |= 0x8000;
        }
    }
    r = c;
    *(u16 *)r = (p[0] & 0xC0) | 1;
    *(s16 *)(r + 4) = lo16;
    *(u16 *)(r + 6) = hi;
    *(u16 *)(r + 2) = id;
    *(u16 *)(r + 8) = *(u16 *)(e + 0xC);
    r[0xA] = 5;
    func_80032A74(r, n, e, flags);
end:
    g_SoundLock = save;
    return ret;
}

s32 PlaySfxPerOwner(s32 a, u8 *p, s32 flags) {
    s32 max = 0;
    u16 hi = (u32)a >> 16;
    s16 lo = a;
    u8 *e;
    u8 *c;
    u8 *ch;
    u8 *q;
    s32 n;
    s32 ret;
    s32 cnt;
    s32 min;
    s32 i;
    s32 v;
    s32 f4;
    s32 h;
    u8 save;
    u16 id;
    u8 b2 = p[2];
    u8 b1 = p[1];
    s32 b3 = p[3];
    if (b1 == 0) {
        e = D_80068304[b2] + b3 * 0x14;
    } else {
        if (g_StageSfxTableId != b1) {
            return 0;
        }
        if (g_StageSfxTable == 0) {
            return 0;
        }
        e = (*(u8 ***)(g_StageSfxTable + 0x14))[b2];
        e += b3 * 0x14;
    }
    n = ret = 0;
    cnt = 0;
    q = &g_SoundLock;
    ch = q - 0x82F;
    min = 0x80;
    save = *q;
    *q = 1;
    id = *(u16 *)e;
    i = 0;
    h = hi;
    f4 = flags & 0x4000;
    for (; i < 8; i++, ch += 0x54) {
        if ((*(u16 *)ch & 0x3F) == 1 && *(u16 *)(ch + 4) == (u16)lo) {
            if (h == 0 || *(u16 *)(ch + 6) == h) {
                if (f4) {
                    SetSfxTrackVolPan(i, flags);
                }
                goto end;
            }
            v = ch[0xB] & 0x7F;
            if (v < min) {
                n = i + 1;
                min = v;
            }
            if (v >= max) {
                max = v;
            }
            cnt++;
        }
    }
    if (cnt < 2) {
        n = 0;
    } else if ((flags & 0x7F) < min) {
        goto end;
    }
    if (n == 0) {
        if (flags & 0x4000) {
            if (!(flags & 0x3000)) {
                goto end;
            }
        }
        n = AllocSfxTrack(id);
        if (n == 0) {
            goto end;
        }
        ret = n;
        n--;
        c = (u8 *)&g_SoundChan[n];
    } else {
        ret = n;
        n--;
        c = (u8 *)&g_SoundChan[n];
        if (*(u16 *)(c + 8) != 0) {
            goto end;
        }
        StopSfxTrack(n);
    }
    if (flags & 0x1000) {
        c[0xB] = flags & 0x7F;
        if ((flags & 0x7F) < max) {
            flags |= 0x8000;
        }
    }
    *(s16 *)c = (p[0] & 0xC0) | 1;
    *(s16 *)(c + 4) = lo;
    *(u16 *)(c + 6) = hi;
    *(u16 *)(c + 2) = id;
    *(u16 *)(c + 8) = *(u16 *)(e + 0xC);
    c[0xA] = 5;
    func_80032A74(c, n, e, flags);
end:
    g_SoundLock = save;
    return ret;
}

extern u8 D_8006AED8[];
void func_80033324(s32 k, s32 i);

void func_80032A74(u8 *c, s32 i, u8 *s, u16 f) {
    VagAtr atr;
    u16 prio;
    s32 k;
    u32 r2;

    s32 j;
    s32 t;
    s32 ok;
    s32 slot;
    u8 tone;
    u8 *e;
    s32 n;
    u8 *v;
    u8 *ch;
    u8 *r;
    s32 addr;
    u32 vol;
    u8 pan;
    u8 q;
    u32 d;
    u32 w;
    u32 x;
    u16 ta, tb;
    u32 o;
    s32 vb;
    s32 z;

    vb = (s32)g_SfxVoiceAttr;
    prio = *(u16 *)(c + 2);
    for (z = 0; z < 8; z++) {
        c[0xE + z] = 0;
    }
    *(u16 *)(c + 0xC) = 0;
    while (1) {
        t = s[8];
        ok = 0;
        if (!(t & 0x80)) {
            e = D_80064D44 + t * 12;
            tone = s[9];
            if (e[6] != 0) {
                ok = tone < e[7];
            }
            slot = g_BankSlotMap[t].lo;
            if (slot < 0) {
                if (!ok) {
                    break;
                }
                slot = g_BankSlotMap[t].hi;
                if (slot < 0) {
                    break;
                }
                if (!(tone < *(s16 *)g_SoundSlot[slot].pad6)) {
                    break;
                }
            }
        } else {
            slot = 4;
        }
        if ((f & 0x1000) && (f & 0x7F) < 0x30) {
            prio >>= 1;
            f = (f & 0xFF80) | (0x2F - ((0x2F - (f & 0x7F)) >> 1));
        }
        n = AllocSfxVoice(prio);
        if (n == 0) {
            goto next;
        }
        n--;
        v = (u8 *)(n * 0x48 + vb);
        if (!(t & 0x80)) {
            r = D_8006A970[slot] + s[9] * 12;
            *(s32 *)(v + 0x1C) = *(s32 *)r;
            *(u16 *)(v + 0x18) = *(u16 *)(r + 4);
            *(u16 *)(v + 0x3A) = *(u16 *)(r + 6);
            *(u16 *)(v + 0x3C) = *(u16 *)(r + 8);
        } else {
            if (SsUtGetVagAtr(g_SoundSlot[4].unk2, t & 0x7F, s[9], &atr) != 0) {
                goto next;
            }
            addr = SsUtGetVagAddr(g_SoundSlot[4].unk2, atr.vag);
            if (addr < 0) {
                goto next;
            }
            *(u16 *)(v + 0x18) = atr.center << 8;
            *(s32 *)(v + 0x1C) = addr;
            *(u16 *)(v + 0x3A) = atr.adsr1;
            *(u16 *)(v + 0x3C) = atr.adsr2;
        }
        k = n + 0x10;
        *(s32 *)v = g_VoiceBit[k];
        ch = (u8 *)&g_SoundChan[8 + n];
        ch[0x4C] = 0;
        *(s16 *)(ch + 0x4A) = 0x7FFF;
        if (*(u16 *)c & 0x80) {
            ch[0x4D] = 0;
        } else {
            ch[0x4D] = 1;
        }
        *(s32 *)ch = *(u16 *)(s + 2);
        *(s32 *)(ch + 4) = 0;
        *(u16 *)(ch + 8) = prio;
        *(u16 *)(ch + 0xA) = k;
        *(u16 *)(ch + 0xC) = s[9];
        *(u16 *)(ch + 0xE) = t;
        ch[0x36] = ok;
        *(s16 *)(ch + 0x10) = slot;
        *(s16 *)(ch + 0x12) = 0;
        *(s32 *)(ch + 0x14) = *(s32 *)(s + 0x10);
        ch[0x4F] = 0;
        ch[0x4E] = 0x85;
        vol = s[6];
        if (D_800A4F1E != 0) {
            vol = vol * 0x70;
            vol >>= 7;
        }
        if (f & 0x1000) {
            *(s16 *)(ch + 0x48) = f & 0x7F;
        } else {
            *(s16 *)(ch + 0x48) = 0x7F;
        }
        ch[0x34] = vol & 0x7F;
        pan = s[7];
        ch[0x35] = pan;
        if (f & 0x8000) {
            *(s32 *)(ch + 0x24) = *(u16 *)(s + 4) - 0x80;
        } else {
            *(s32 *)(ch + 0x24) = *(u16 *)(s + 4);
        }
        *(s32 *)(ch + 0x40) = (s32)PS1_FN_ADDR(func_80033324);
        *(s32 *)(ch + 0x44) = i;
        if ((f & 0x2000) && pan != 0) {
            if ((f & 0x3000) == 0x3000) {
                ch[0x53] = D_8006AED8[(f & 0xF00) >> 8];
            } else {
                ch[0x53] = f & 0x7F;
            }
        } else {
            ch[0x53] = 0;
        }
        if (*(u16 *)(s + 2) == 0) {
            func_800316F8(ch);
        }
        x = *(u16 *)(v + 0x18);
        d = *(s32 *)(ch + 0x24);
        w = x & 0xFF00;
        o = w + ((s8)x << 1) - 0x3C00;
        d -= o;
        if (d >= 0x5300) {
            *(u16 *)(v + 0x14) = 0x3FFF;
        } else {
            k = d >> 8;
            ta = D_8006AB30[k];
            tb = D_8006AB30[k + 1];
            w = ta * (0x100 - (d & 0xFF));
            w += tb * (d & 0xFF);
            w >>= 8;
            *(u16 *)(v + 0x14) = w;
        }
        vol = D_8006AA30[ch[0x34]].v;
        vol = (vol * g_SfxVolume) >> 7;
        vol = (vol * *(s16 *)(ch + 0x48)) >> 7;
        if (pan != 0) {
            if (ch[0x53] != 0) {
                q = pan + ch[0x53];
                if (q >= 0x42) {
                    pan = q - 0x40;
                    if (pan >= 0x80) {
                        pan = 0x7F;
                    }
                } else {
                    pan = 1;
                }
            }
            if (g_SoundStereo != 0) {
                *(u16 *)(v + 0xA) = (vol * D_8007319E[pan]) >> 14;
                *(u16 *)(v + 8) = (vol * (D_8007319E + 1)[0x7F - pan]) >> 14;
            } else {
                r2 = (vol * D_8007321E) >> 14;
                *(u16 *)(v + 0xA) = r2;
                *(u16 *)(v + 8) = r2;
            }
        } else {
            r2 = vol;
            *(u16 *)(v + 8) = r2;
            *(u16 *)(v + 0xA) = r2;
        }
        ch[0x52] = pan;
        *(s16 *)(v + 0xC) = 0;
        *(s16 *)(v + 0xE) = 0;
        *(s32 *)(v + 4) = 0x6009F;
        if (D_800A4EF6 > s[10]) {
            QueueReverb(1, *(s32 *)v);
        } else {
            QueueReverb(0, *(s32 *)v);
        }
        *(s32 *)(v + 0x40) = *(u16 *)(ch + 0xA);
        v[0x45] = 0;
        v[0x44] = 1;
        if (*(u16 *)(s + 2) == 0) {
            QueueKey(1, *(s32 *)v);
        }
        (*(u16 *)(c + 0xC))++;
        (c + n)[0xE] = 1;
    next:
        if (s[0xB] == 0) {
            break;
        }
        s += 0x14;
        prio = *(u16 *)s;
    }
    if (*(u16 *)(c + 0xC) == 0) {
        *(u16 *)c = 0;
    } else {
        c[0xA] = 4;
    }
}

s32 AllocSfxTrack(s32 prio) {
    struct { u8 found; s32 best; u16 min; } s;
    u8 *c; s32 i; c = (u8 *)g_SoundChan; i = 0;
    s.found = 0;
    do {
        if (*(u16 *)c == 0) {
            return i + 1;
        }
        if (s.found == 0) {
            s.found = 1;
            s.min = *(u16 *)(c + 2);
            s.best = i;
        } else if (*(u16 *)(c + 2) < s.min) {
            s.min = *(u16 *)(c + 2);
            s.best = i;
        }
        i++;
        c += 0x54;
    } while (i < 8);
    if ((u32)(prio & 0xFFFF) < s.min) {
        return 0;
    }
    StopSfxTrack(s.best);
    return s.best + 1;
}

s32 FindSfxTrack(s32 arg) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i = 0;
    do {
        if ((*(u16 *)c & 0x3F) == 1 && *(u16 *)(c + 4) == (arg & 0xFFFF)) {
            if ((u32)arg >> 16 == 0 || (u32)arg >> 16 == *(u16 *)(c + 6)) {
                return ++i;
            }
        }
        i++;
        c += 0x54;
    } while (i < 8);
    return 0;
}

void StopSfxTrack(u16 a) {
    SoundChan *c = &g_SoundChan[a];
    s32 i;
    switch (c->unk0 & 0x3F) {
    case 1:
        i = 0;
        do {
            SoundChan *v = &g_SoundChan[8] + i;
            if (((u8 *)c + i)[0xE] != 0) {
                ((u8 *)c + i)[0xE] = 0;
                v->unk40 = 0;
                if (v->unk4E != 0) {
                    KeyOffSfxVoice(v, 0);
                }
            }
            i++;
        } while (i < 8);
        c->unk0 = 0;
        break;
    case 5:
        StopScriptSfx((u8 *)c, 0);
        break;
    }
}

void func_80033324(s32 k, s32 i) {
    u8 *c = (u8 *)&g_SoundChan[i];
    if ((*(u16 *)c & 0x3F) == 1) {
        (c + k)[0xE] = 0;
        if (--*(u16 *)(c + 0xC) == 0 && c[0xA] != 5) {
            c[0xA] = 0;
            *(u16 *)c = 0;
        }
    }
}

void StopSfxById(u32 arg) {
    u16 lo = arg;
    u8 *c = (u8 *)g_SoundChan;
    s32 i = 0;
    u32 hi = arg >> 16;
    u8 *t;
    s32 k;
    SoundChan *v;
    do {
        if ((*(u16 *)c & 0x3F) == 1 && *(u16 *)(c + 4) == lo
            && (hi == 0 || *(u16 *)(c + 6) == hi)) {
            t = (u8 *)&g_SoundChan[(u16)i];
            switch (*(u16 *)t & 0x3F) {
            case 1:
                k = 0;
                do {
                    v = &g_SoundChan[8] + k;
                    if ((t + k)[0xE] != 0) {
                        (t + k)[0xE] = 0;
                        v->unk40 = 0;
                        if (v->unk4E != 0) {
                            KeyOffSfxVoice(v, 0);
                        }
                    }
                    k++;
                } while (k < 8);
                *(u16 *)t = 0;
                break;
            case 5:
                StopScriptSfx(t, 0);
                break;
            }
        }
        i++;
        c += 0x54;
    } while (i < 8);
}

void StopSfxTrackVoices(s32 k, s16 n) {
    SoundChan *c = &g_SoundChan[k];
    s32 i = 0;
    do {
        SoundChan *v = &g_SoundChan[8] + i;
        if (((u8 *)c + i)[0xE] != 0) { ((u8 *)c + i)[0xE] = 0;
            v->unk40 = 0;
            if (v->unk4E != 0) {
                KeyOffSfxVoice(v, n);
            }
        }
        i++;
    } while (i < 8);
    c->unk0 = 0;
}

void SetSfxTrackVolPan(s32 ch, u16 cmd) {
    u8 *c = (u8 *)g_SoundChan + ch * 0x54;
    u16 c0 = cmd;
    u8 *q;
    s32 n;
    s32 i;
    if ((*(u16 *)c & 0x3F) == 1) {
        if (cmd & 0x1000) {
            n = *(u16 *)(c + 0xC);
            for (i = 0; i < 8; i++) {
                if (n == 0) {
                    break;
                }
                if ((c + i)[0xE] != 0) {
                    q = (u8 *)&g_SoundChan[8 + i];
                    n--;
                    *(s16 *)(q + 0x48) = cmd & 0x7F;
                    q[0x4F] = 1;
                }
            }
        } else if (cmd & 0x2000) {
            n = *(u16 *)(c + 0xC);
            for (i = 0; i < 8; i++) {
                if (n == 0) {
                    break;
                }
                if ((c + i)[0xE] != 0) {
                    q = (u8 *)&g_SoundChan[8 + i];
                    if (q[0x35] != 0) {
                        q[0x53] = c0 & 0x7F;
                    }
                    n--;
                }
            }
        }
    }
}

typedef struct { s32 v; } S32R;
extern U16E D_8006AA30[];
extern const u16 D_8007319E[];
extern u16 D_8007321E;

void func_800336A8(u8 *s) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if ((s + i)[0x3A] != 0) {
            u8 *c = (u8 *)&g_SoundChan[8 + i];
            u8 *v = (u8 *)&g_SoundChan[16] + i * 0x48;
            u32 vol;
            u32 p;
            u32 r;
            u16 *e;
            s32 k;
            *(s32 *)v = ((S32R *)g_VoiceBit)[*(u16 *)(c + 0xA)].v;
            vol = c[0x34];
            vol = D_8006AA30[vol].v;
            vol *= *(s16 *)((u8 *)g_SoundChan + 0x812);
            vol >>= 7;
            if (s[0x16] != 0) {
                vol *= *(u16 *)(s + 0x18);
                vol >>= 15;
            }
            e = (u16 *)(s + 0x1C);
            for (k = 2; k >= 0; k--, e += 4) {
                vol *= *e;
                vol >>= 14;
            }
            p = c[0x35];
            if (p != 0) {
                if (s[0x38] != 0) {
                    p += s[0x38];
                    if (p >= 0x42) {
                        p -= 0x40;
                        if (p >= 0x80) {
                            p = 0x7F;
                        }
                    } else {
                        p = 1;
                    }
                }
                c[0x52] = p;
                if (g_SoundStereo != 0) {
                    *(u16 *)(v + 0xA) = (vol * D_8007319E[p]) >> 14;
                    *(u16 *)(v + 8) = (vol * (D_8007319E + 1)[0x7F - p]) >> 14;
                } else {
                    r = (vol * D_8007321E) >> 14;
                    *(u16 *)(v + 0xA) = r;
                    *(u16 *)(v + 8) = r;
                }
            } else {
                r = vol;
                *(u16 *)(v + 0xA) = r;
                *(u16 *)(v + 8) = r;
            }
            *(s32 *)(v + 0x40) = *(u16 *)(c + 0xA);
            if (v[0x44] != 0) {
                *(s32 *)(v + 4) |= 3;
            } else {
                *(s32 *)(v + 4) = 3;
                v[0x44] = 1;
            }
        }
    }
}

void func_800342E8(s32 a, s32 b);

void func_8003388C(u8 *a, s32 idx) {
    struct {
        u16 h0;
        u16 h2;
        u16 h4;
        u16 h6;
        u8 b8;
        u8 b9;
        u8 bA;
        u8 bB;
        u8 bC;
        u8 bD;
        s32 w10;
    } rec;
    VagAtr atr;
    u8 *s = a;
    u8 *e;
    u8 *p;
    u8 *c;
    u8 *v;
    u8 *t;
    s32 w;
    s32 *q;
    u32 i;
    s32 n;
    s32 bank;
    s32 prog;
    s32 k;
    u8 b;
    u8 flag;
    s32 done;
    u32 vol;
    u32 d;
    u32 r;
    u32 m;
    s32 addr;
    SoundSlot *sl;
    u16 cur;
    u32 x;

    if (*(u16 *)(s + 0x34) != 0 && *(u16 *)(s + 0x34) != g_StageSfxTableId) {
        StopScriptSfx(s, 0);
        return;
    }
    if (*(u16 *)(s + 8) != 0) {
        *(u16 *)(s + 8) -= 1;
    }
    e = s + 0x1C;
    flag = 0;
    for (i = 0; i < 3; i++, e += 8) {
        if (e[6] != 0) {
            cur = *(u16 *)e;
            flag = 1;
            if (cur == *(u16 *)(e + 4)) {
                e[6] = 0;
            } else if (cur < *(u16 *)(e + 4)) {
                *(u16 *)e = cur + *(u16 *)(e + 2);
                if (*(u16 *)e >= 0x4000) {
                    *(u16 *)e = 0x3FFF;
                }
                if (*(u16 *)(e + 4) < *(u16 *)e) {
                    *(u16 *)e = *(u16 *)(e + 4);
                }
            } else {
                if (cur >= *(u16 *)(e + 2)) {
                    *(u16 *)e = cur - *(u16 *)(e + 2);
                } else {
                    *(u16 *)e = 0;
                }
                if (*(u16 *)e < *(u16 *)(e + 4)) {
                    *(u16 *)e = *(u16 *)(e + 4);
                }
            }
        }
    }
    done = 0;
    if (s[0x16] != 0) {
        if (*(u16 *)(s + 0x18) > *(u16 *)(s + 0x1A)) {
            *(u16 *)(s + 0x18) -= *(u16 *)(s + 0x1A);
            func_800336A8(s);
            done = 1;
        } else {
            StopScriptSfx(s, 1);
            return;
        }
    } else if (flag) {
        func_800336A8(s);
        done = 1;
    }
    if (s[0x39] != s[0x38]) {
        if (!done) {
            func_800336A8(s);
        }
        s[0x39] = s[0x38];
    }
    if (s[0x36] != 0) {
        for (i = 0; i < 8; i++) {
            if ((s + i)[0x3A] != 0) {
                return;
            }
        }
        *(s16 *)s = 0;
        return;
    }
    if (--*(u16 *)(s + 0x14) != 0) {
        return;
    }
    if (s[0x48] != 0) {
        q = *(s32 **)(s + 0xC);
        w = *q;
        for (;;) {
            switch ((u32)w >> 24) {
            case 0x80:
                q++;
                rec.h6 = w;
                rec.b8 = w >> 16;
                w = *q;
                q++;
                rec.h2 = w;
                rec.h0 = w >> 16;
                w = *q;
                q++;
                s[0x4F] = rec.bC = w;
                w >>= 8;
                s[0x4E] = rec.bB = w;
                w >>= 8;
                s[0x4D] = rec.bA = w;
                s[0x4C] = rec.b9 = (u32)w >> 8;
                *(u16 *)(s + 0x4A) = rec.h4 = *(u16 *)q;
                q++;
                w = *q;
                q++;
                rec.bD = 0;
                rec.w10 = w;
                goto play;
            case 0x81:
                q++;
                rec.h6 = w;
                rec.b8 = w >> 16;
                w = *q;
                rec.h2 = w;
                rec.h0 = w >> 16;
                rec.bC = s[0x4F];
                rec.bB = s[0x4E];
                rec.bA = s[0x4D];
                rec.b9 = s[0x4C];
                rec.h4 = *(u16 *)(s + 0x4A);
                q++;
                rec.w10 = 0;
                rec.bD = 0;
                goto play;
            case 0x82:
                q++;
                s[0x17] = w;
                *(s32 **)(s + 0x44) = q;
                w = *q;
                continue;
            case 0x83:
                if (s[0x17] != 0) {
                    if (--s[0x17] == 0) {
                        q++;
                        w = *q;
                        continue;
                    }
                }
                if (w & 0xFFFFFF) {
                    *(u16 *)(s + 0x14) = w;
                    *(s32 **)(s + 0xC) = *(s32 **)(s + 0x44);
                    return;
                }
                q = *(s32 **)(s + 0x44);
                w = *q;
                continue;
            case 0x85:
                if (s[0x17] != 0) {
                    if (--s[0x17] == 0) {
                        q++;
                        *(u16 *)(s + 0x50) = 0;
                        *(u16 *)(s + 0x52) = 0;
                        w = *q;
                        continue;
                    }
                }
                *(s16 *)(s + 0x52) += (s8)w * 16;
                *(s16 *)(s + 0x50) += (s8)(w >> 8);
                if (w & 0xFF0000) {
                    *(u16 *)(s + 0x14) = (w & 0xFF0000) >> 16;
                    *(s32 **)(s + 0xC) = *(s32 **)(s + 0x44);
                    return;
                }
                q = *(s32 **)(s + 0x44);
                w = *q;
                continue;
            case 0x84:
                q++;
                s[0x22] = 1;
                *(s16 *)(s + 0x1E) = w >> 8;
                *(s16 *)(s + 0x20) = ((w & 0x7F) * 0x3FFF) >> 7;
                w = *q;
                continue;
            case 0x86:
                r = ((u32)(w & 0x7F) * 0x3FFF) >> 7;
                s[0x22] = 0;
                *(u16 *)(s + 0x1C) = *(u16 *)(s + 0x20) = r;
                q++;
                w = *q;
                continue;
            case 0x87:
                for (i = 0; i < 8; i++) {
                    if ((s + i)[0x3A] != 0) {
                        s[0x36] = 1;
                        return;
                    }
                }
                *(s16 *)s = 0;
                return;
            }
        }
    play:
        *(s32 **)(s + 0xC) = q;
        p = (u8 *)&rec;
    } else {
        p = *(u8 **)(s + 0xC);
    }
    if (*(u16 *)(p + 6) != 0) {
        n = AllocSfxVoice(*(u16 *)(p + 4));
        if (n != 0) {
            prog = p[0xA];
            n--;
            if (!(prog & 0x80)) {
                bank = g_BankSlotMap[prog].lo;
            } else {
                bank = 4;
            }
            if (bank >= 0) {
                c = (u8 *)&g_SoundChan[8] + n * 0x54;
                v = (u8 *)&g_SoundChan[16] + n * 0x48;
                if (!(prog & 0x80)) {
                    t = D_8006A970[bank] + p[0xB] * 12;
                    *(s32 *)(v + 0x1C) = *(s32 *)t;
                    *(u16 *)(v + 0x18) = *(u16 *)(t + 4);
                    *(u16 *)(v + 0x3A) = *(u16 *)(t + 6);
                    *(u16 *)(v + 0x3C) = *(u16 *)(t + 8);
                } else {
                    sl = &g_SoundSlot[4];
                    if (SsUtGetVagAtr(sl->unk2, prog & 0x7F, p[0xB], &atr) != 0) {
                        goto next;
                    }
                    addr = SsUtGetVagAddr(sl->unk2, atr.vag);
                    if (addr < 0) {
                        goto next;
                    }
                    *(u16 *)(v + 0x18) = atr.center << 8;
                    *(s32 *)(v + 0x1C) = addr;
                    *(u16 *)(v + 0x3A) = atr.adsr1;
                    *(u16 *)(v + 0x3C) = atr.adsr2;
                }
                v[0x44] = 1;
                *(s32 *)(v + 0x40) = *(u16 *)(c + 0xA);
                v[0x45] = 0;
                c[0x4C] = 0;
                *(s16 *)(c + 0x4A) = 0x7FFF;
                c[0x4D] = 0;
                *(s32 *)(c + 0) = 0;
                *(s32 *)(c + 4) = 0;
                *(u16 *)(c + 8) = *(u16 *)(p + 4);
                *(u16 *)(c + 0xC) = p[0xB];
                *(u16 *)(c + 0xE) = prog;
                c[0x36] = 0;
                *(s16 *)(c + 0x10) = bank;
                *(s32 *)(c + 0x14) = *(s32 *)(p + 0x10);
                b = c[0x35] = p[9];
                c[0x52] = b;
                if (s[0x38] != 0 && b != 0) {
                    b += s[0x38];
                    if (b >= 0x42) {
                        b -= 0x40;
                        if (b >= 0x80) {
                            b = 0x7F;
                        }
                    } else {
                        b = 1;
                    }
                }
                *(s32 *)(c + 0x24) = *(u16 *)(p + 6) + *(s16 *)(s + 0x52);
                *(s32 *)(c + 0x40) = (s32)PS1_FN_ADDR(func_800342E8);
                *(s32 *)(c + 0x44) = idx;
                c[0x4E] = 0x85;
                c[0x53] = 0;
                k = *(u16 *)(p + 2); /* through k, reused for the pitch offset below (k has two lives, so local-alloc leaves it alone) */
                *(u16 *)(c + 0x12) = k;
                c[0x4F] = 0;
                *(s16 *)(c + 0x48) = 0;
                (a + n)[0x3A] = 1;
                func_800316F8(c);
                *(s32 *)v = g_VoiceBit[*(u16 *)(c + 0xA)];
                x = *(u16 *)(v + 0x18);
                k = (x & 0xFF00) + ((s32)(x << 24) >> 23);
                k -= 0x3C00;
                d = *(s32 *)(c + 0x24);
                d -= k;
                if (d >= 0x5300) {
                    *(u16 *)(v + 0x14) = 0x3FFF;
                } else {
                    i = d >> 8;
                    m = D_8006AB30[i] * (0x100 - (d & 0xFF));
                    m += D_8006AB30[i + 1] * (d & 0xFF);
                    m >>= 8;
                    *(u16 *)(v + 0x14) = m;
                }
                vol = p[8];
                if (*(u16 *)(s + 0x50) < vol) {
                    vol -= *(u16 *)(s + 0x50);
                } else {
                    vol = 0;
                }
                if (D_800A4F1E != 0) {
                    vol *= 0x70;
                    vol >>= 7;
                }
                c[0x34] = vol;
                vol = D_8006AA30[vol].v;
                vol *= g_SfxVolume;
                vol >>= 7;
                if (s[0x16] != 0) {
                    vol *= *(u16 *)(s + 0x18);
                    vol >>= 15;
                }
                e = s + 0x1C;
                for (i = 0; i < 3; i++, e += 8) {
                    vol *= *(u16 *)e;
                    vol >>= 14;
                }
                if (b != 0) {
                    if (g_SoundStereo != 0) {
                        *(u16 *)(v + 0xA) = (vol * D_8007319E[b]) >> 14;
                        *(u16 *)(v + 8) = (vol * (D_8007319E + 1)[0x7F - b]) >> 14;
                    } else {
                        r = (vol * D_8007321E) >> 14;
                        *(u16 *)(v + 0xA) = r;
                        *(u16 *)(v + 8) = r;
                    }
                } else {
                    r = vol;
                    *(u16 *)(v + 8) = r;
                    *(u16 *)(v + 0xA) = r;
                }
                *(s16 *)(v + 0xC) = 0;
                *(s16 *)(v + 0xE) = 0;
                *(s32 *)(v + 4) = 0x6009F;
                if (D_800A4EF6 > p[0xC]) {
                    QueueReverb(1, *(s32 *)v);
                } else {
                    QueueReverb(0, *(s32 *)v);
                }
                QueueKey(1, *(s32 *)v);
            }
        }
    }
next:
    if (*(u16 *)p == 0) {
        for (i = 0; i < 8; i++) {
            if ((s + i)[0x3A] != 0) {
                s[0x36] = 1;
                return;
            }
        }
        *(s16 *)s = 0;
        return;
    }
    *(u16 *)(s + 0x14) = *(u16 *)p;
    if (s[0x48] != 0) {
        return;
    }
    if (p[0xD] != 0 && (s[0x17] == 0 || --s[0x17] != 0)) {
        *(u8 **)(s + 0xC) = *(u8 **)(a + 0x10) + (p[0xD] * 20 - 20);
        return;
    }
    p += 0x14;
    *(u8 **)(s + 0xC) = p;
}

void func_800342E8(s32 a, s32 b) {
    u8 *p = &((u8 *)g_SoundChan)[b * 0x54];
    p += a;
    p[0x3A] = 0;
}

extern u8 D_80068A54[];
extern u8 D_8006AED8[];
s32 FindScriptSfx(u32 key);

s32 PlayScriptSfx(s32 a, u8 *p, s32 f0) {
    u8 *e;
    u8 *c;
    s32 n;
    s32 r;
    s32 i;
    s32 j;
    u8 v;
    s16 *pv;
    u8 *q;
    u8 *s;
    u16 hi = (u32)a >> 16;
    u32 f = f0;
    s16 lo = a;
    s32 b1 = p[1];

    if (b1 == 0) {
        e = D_80068A54 + p[3] * 12;
    } else {
        if (g_StageSfxTable == 0) {
            return 0;
        }
        if (g_StageSfxTableId != b1) {
            return 0;
        }
        e = *(u8 **)(g_StageSfxTable + 0x18) + p[3] * 12;
    }
    n = FindScriptSfx(a);
    if (n != 0) {
        r = n;
        n--;
        c = (u8 *)&g_SoundChan[n];
        if (f & 0x1000) {
            c[0x22] = 1;
            *(s16 *)(c + 0x1E) = 0x100;
            *(s16 *)(c + 0x20) = (s32)((f & 0x7F) * 0x3FFF) >> 7;
            if (f & 0x2000) {
                c[0x38] = D_8006AED8[(f >> 8) & 0xF];
            } else {
                c[0x38] = 0;
                c[0x39] = 0;
            }
            return r;
        }
        if (*(u16 *)(c + 8) != 0) {
            return 0;
        }
        StopScriptSfx(c, 0);
    } else {
        n = AllocSfxTrack(*(u16 *)(e + 4));
        if (n == 0) {
            return 0;
        }
        r = n;
        n--;
        c = (u8 *)&g_SoundChan[n];
    }
    c[0x37] = e[8];
    *(s16 *)(c + 0x34) = b1;
    *(s32 *)(c + 0xC) = *(s32 *)e;
    *(u16 *)(c + 2) = *(u16 *)(e + 4);
    *(s16 *)(c + 4) = lo;
    *(s16 *)(c + 6) = hi;
    *(s16 *)(c + 0x14) = 1;
    *(s32 *)(c + 0x10) = *(s32 *)(c + 0xC);
    c[0x17] = p[2];
    c[0x16] = 0;
    *(s16 *)(c + 0x18) = 0x7FFF;
    *(u16 *)(c + 8) = *(u16 *)(e + 6);
    *(s16 *)(c + 0x50) = 0;
    *(s16 *)(c + 0x52) = 0;
    if (e[8] & 0x10) {
        c[0x48] = 1;
    } else {
        c[0x48] = 0;
    }
    v = e[8];
    if (v & 4) {
        *(s16 *)(c + 0x1A) = 0x400;
    } else if (v & 8) {
        *(s16 *)(c + 0x1A) = 0x200;
    } else {
        *(s16 *)(c + 0x1A) = 0x5F;
    }
    c[0x36] = 0;
    pv = (s16 *)(c + 0x1C);
    s = c;
    for (i = 0; i < 3; i++, s += 8, pv += 4) {
        *(s16 *)(s + 0x1E) = 0x100;
        s[0x22] = 0;
        if (i != 0) {
            *pv = 0x3FFF;
            *(s16 *)(s + 0x20) = 0x3FFF;
        } else if (f & 0x1000) {
            *pv = ((f & 0x7F) * 0x3FFF) >> 7;
            *(s16 *)(s + 0x20) = ((f & 0x7F) * 0x3FFF) >> 7;
            if (f & 0x2000) {
                c[0x39] = c[0x38] = D_8006AED8[(f >> 8) & 0xF];
            }
        } else {
            *pv = 0x3FFF;
            *(s16 *)(s + 0x20) = 0x3FFF;
            c[0x38] = 0;
            c[0x39] = 0;
        }
    }
    q = c + 0x3A;
    for (j = 0; j < 8; j++) {
        *q++ = 0;
    }
    *(s16 *)c = 5;
    return r;
}

void StopScriptSfx(u8 *a, s32 n) {
    s32 i = 0;
    u8 v = n;
    Chan54 *arr = (Chan54 *)((u8 *)g_SoundChan + 0x2A0);
    do {
        if ((a + i)[0x3A] != 0) {
            KeyOffSfxVoice((Chan54 *)((u8 *)g_SoundChan + 0x2A0) + i, v);
        }
        i++;
    } while (i < 8);
    *(s16 *)a = 0;
}

void StopScriptSfxById(s32 a) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i;
    s32 j;
    for (i = 0; i < 8; i++, c += 0x54) {
        if (*(u16 *)c != 5) {
            continue;
        }
        if (*(u16 *)(c + 4) != (s16)a) {
            continue;
        }
        if ((a >> 16) != 0 && (a >> 16) != *(u16 *)(c + 6)) {
            continue;
        }
        for (j = 0; j < 8; j++) {
            if ((c + j)[0x3A] != 0) {
                KeyOffSfxVoice(&g_SoundChan[8 + j], 0);
            }
        }
        *(u16 *)c = 0;
    }
}

void func_800347C8(s32 key) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i = 0;
    do {
        if (*(u16 *)c == 5 && *(u16 *)(c + 4) == (s16)key && (!(key >> 16) || (key >> 16) == *(u16 *)(c + 6))) {
            c[0x16] = 1;
        }
        i++;
        c += 0x54;
    } while (i < 8);
}

void ReleaseAllScriptSfx(void) {
    u8 *s = (u8 *)g_SoundChan;
    s32 i;
    for (i = 0; i < 8; i++, s += 0x54) {
        if (*(u16 *)s == 5 && !(s[0x37] & 2)) {
            s[0x16] = 1;
            *(u16 *)(s + 0x1A) = 0x220;
        }
    }
}

s32 FindScriptSfx(u32 key) {
    u8 *c = (u8 *)g_SoundChan;
    s32 i = 0;
    do {
        if (*(u16 *)c == 5 && *(u16 *)(c + 4) == (key & 0xFFFF) && (!(key >> 16) || *(u16 *)(c + 6) == (key >> 16))) {
            return ++i;
        }
        i++;
        c += 0x54;
    } while (i < 8);
    return 0;
}

void ReleaseSfx(s32 a) {
    s16 n = a;
    s16 lo = a;
    u32 hi = (u32)a >> 16;
    u8 *p = g_SfxTable + lo * 4;
    u8 *c;
    u8 old;
    s32 i;
    if ((p[0] & 0x7F) == 6) {
        n = ResolveSfxAlias(p);
        if ((s16)n == 0) {
            return;
        }
        p = g_SfxTable + (s16)n * 4;
    }
    if ((s16)n < 0x100) {
        return;
    }
    old = ((u8 *)g_SoundChan)[0x82F];
    ((u8 *)g_SoundChan)[0x82F] = 1;
    switch (p[0] & 0x7F) {
    case 1:
        break;
    case 5:
        c = (u8 *)g_SoundChan;
        i = 0;
        do {
            if (*(u16 *)c == 5 && *(u16 *)(c + 4) == lo && (!(s16)hi || (s16)hi == *(u16 *)(c + 6))) {
                c[0x16] = 1;
            }
            i++;
            c += 0x54;
        } while (i < 8);
        break;
    }
    g_SoundLock = old;
}

void DimScriptSfx(u8 *p) {
    u8 old;
    if (p[0x37] & 1) {
        u8 *q = &g_SoundLock;
        old = *q;
        *q = 1;
        p[0x32] = 1;
        *(s16 *)(p + 0x2E) = 0x3FF;
        *(s16 *)(p + 0x30) = 0xFFF;
        *q = old;
    }
}

void UndimScriptSfx(u8 *p) {
    u8 old;
    if (*(u16 *)(p + 0x30) != 0x3FFF) {
        u8 *q = &g_SoundLock;
        old = *q;
        *q = 1;
        p[0x32] = 1;
        *(s16 *)(p + 0x2E) = 0x3FF;
        *(u16 *)(p + 0x30) = 0x3FFF;
        *q = old;
    }
}

void SilenceScriptSfx(u8 *p) {
    register u8 *q = &g_SoundLock;
    u8 old = *q;
    *q = 1;
    p[0x2A] = 1;
    *(s16 *)(p + 0x26) = 0x3FF;
    *(s16 *)(p + 0x28) = 0;
    *q = old;
}

void UnsilenceScriptSfx(u8 *p) {
    register u8 *q = &g_SoundLock;
    u8 old = *q;
    *q = 1;
    p[0x2A] = 1;
    *(s16 *)(p + 0x26) = 0x3FF;
    *(s16 *)(p + 0x28) = 0x3FFF;
    *q = old;
}

s32 func_80034B3C(void) {
    s32 r = 0;
    if (g_CdAudioHead != g_CdAudioTail) {
        if (g_CdAudioStatus & 0x80) {
            return 2;
        }
        r = 1;
        if (g_CdAudioStatus & 0x20) {
            return 4;
        }
        return r;
    }
    g_CdAudioStatus = 0;
    return r;
}

s32 GetCdAudioState(void) {
    s32 r = 0;
    if (g_CdAudioHead != g_CdAudioTail) {
        if (g_CdAudioError == 0) {
            if (g_CdAudioStatus & 0x80) {
                return 2;
            }
            r = 1;
            if (g_CdAudioStatus & 0x20) {
                return 4;
            }
            return r;
        }
    } else {
        r = g_CdAudioError;
        g_CdAudioStatus = 0;
        if (r == 0) {
            return r;
        }
    }
    g_CdAudioError = 0;
    return 8;
}

void InitCdAudio(void) {
    s32 k = 4;
    s32 *p = &D_80078F20;
    g_CdAudioHead = 0;
    g_CdAudioTail = 0;
    g_SpuXferFlags = 0;
    D_800A63E4 = 0;
    D_8006AEF0 = 0;
    D_80076110 = 0;
    g_BgmLoadStep = 0;
    D_800A6544 = 0;
    g_CdAudioReqCount = 0;
    D_800A63E8 = 0;
    D_8007610C = 0;
    D_8006AEF5 = 0;
    g_CdAudioStatus = 0;
    D_80076114 = 0;
    g_CdAudioError = 0;
    do {
        *p = 0;
        k--;
        p--;
    } while (k >= 0);
    D_800A5BC8 = CdGetToc(D_800C7D30);
    g_PausedCdTrack = 0;
}

s32 PushCdAudioRequest(Req *src) {
    s32 next;
    s8 old;
    s32 tail;
    s32 idx;
    Req *q;
    next = g_CdAudioTail;
    next++;
    old = D_8006AEF5;
    tail = g_CdAudioHead;
    D_8006AEF5 = 1;
    if (next >= 4) {
        next = 0;
    }
    if (next == tail) {
        D_8006AEF5 = old;
        return 0;
    }
    {
        q = &g_CdAudioRing[g_CdAudioTail];
        q->w[0] = src->w[0];
        q->w[1] = src->w[1];
        q->w[2] = src->w[2];
        q->w[3] = src->w[3];
        q->w[4] = src->w[4];
        q->w[5] = src->w[5];
        q->w[6] = src->w[6];
        q->w[7] = src->w[7];
        q->w[8] = src->w[8];
        q->b0 = 1;
        q->b1 = 0;
        q->b2 = 0;
        q->b3 = 0;
        q->b7 = 1;
        idx = g_CdAudioTail;
        g_CdAudioTail = next;
        D_8006AEF5 = old;
        q->w[9] = idx;
        return idx + 1;
    }
}

void CancelCdAudioRequest(s16 n) {
    Req *q;
    Req *p;
    s32 cur;
    s32 i;
    u8 old;

    if (n != 0) {
        cur = (s16)(n - 1);
        q = &g_CdAudioRing[cur];
        old = D_8006AEF5;
        D_8006AEF5 = 1;
        if (q->b0 != 0) {
            q->b0 = 0;
            q->b1 = 1;
            if (cur != g_CdAudioHead && q->b7 != 0) {
                i = cur + 1;
                if (i >= 4) {
                    i = 0;
                }
                while (i != g_CdAudioTail) {
                    p = &g_CdAudioRing[i];
                        q->b0 = p->b0;
                        q->b1 = p->b1;
                        q->b2 = p->b2;
                        q->b3 = p->b3;
                        q->b4 = p->b4;
                        q->b5 = p->b5;
                        q->b6 = p->b6;
                        q->b7 = p->b7;
                        q->w[0] = p->w[0];
                        q->w[1] = p->w[1];
                        q->w[2] = p->w[2];
                        q->w[3] = p->w[3];
                        q->w[4] = p->w[4];
                        q->w[5] = p->w[5];
                        q->w[6] = p->w[6];
                        q->w[7] = p->w[7];
                        q->w[8] = p->w[8];
                        q->w[9] = p->w[9];
                        PS1_FN((void (*)(s32, s32))p->w[8])(i + 1, cur + 1);
                    cur = i;
                    q = p;
                    i++;
                    if (i >= 4) {
                        i = 0;
                    }
                }
                g_CdAudioTail = cur;
                g_CdAudioRing[cur].b0 = 0;
            }
        }
        D_8006AEF5 = old;
    }
}

void RunCdAudioRequests(void) {
    Req *q;
    void (*f)();
    void (*g)(Req *);
    u8 b;
    if (*(u8 *)&D_8006AEF5 != 0) {
        return;
    }
    if (g_CdAudioTail != g_CdAudioHead) {
        q = &g_CdAudioRing[g_CdAudioHead];
        if (q->b0 != 0) {
            D_80076114 = q->b4;
            if (PS1_FN((s32 (*)(Req *))q->w[0])(q) == 0) {
                return;
            }
            b = q->b4;
            f = (void (*)())q->w[5];
            D_80076114 = b;
            if (f != NULL) {
                PS1_FN(f)(g_CdAudioRing[g_CdAudioHead].w[6], b);
            }
            q->b0 = 0;
            q->b1 = 0;
            if ((u32)++g_CdAudioHead >= 4) {
                g_CdAudioHead = 0;
            }
            if (g_CdAudioHead != g_CdAudioTail) {
                return;
            }
            D_80076114 = 0;
            return;
        }
        if (q->b1 != 0 && q->b7 == 0) {
            g = (void (*)(Req *))q->w[7];
            if (g != NULL) {
                PS1_FN(g)(q);
            }
            if (q->b2 != 0) {
                return;
            }
        }
        q->b1 = 0;
        if ((u32)++g_CdAudioHead >= 4) {
            g_CdAudioHead = 0;
        }
        if (g_CdAudioHead == g_CdAudioTail) {
            D_80076114 = 0;
            return;
        }
        D_80076114 = 1;
        return;
    }
    g_CdAudioStatus = 0;
}

s32 SetSpuXferAddr(s32 a) {
    D_80076218 = a;
    return a & -((u32)(a - 0x1010) <= 0x7EFF0);
}

u32 TransferSpu(s32 dst, s32 n) {
    s32 r;
    SpuSetTransferStartAddr(D_80076218);
    r = SpuRead(dst, n);
    D_80076218 += n;
    return r;
}

typedef struct { u8 *tbl; u8 flag; s32 ofs[16]; } SndBank;
extern SndBank D_8006A69C[];

extern s16 D_800760F8;
extern s32 D_80076100;
extern u8 D_800760FC;
extern u8 D_800760FD;
extern s16 D_80076208;
extern u8 D_80076210;
extern int CdMode(void);
extern int CdStatus(void);

static inline u8 *func_80035270_ent(s32 bank, s32 row, s32 col) {
    u8 *t = D_8006A69C[bank].tbl;
    t += row * 64;
    t += col * 4;
    return t;
}

s32 func_80035270(Req *q) {
    u8 res[8];
    u8 param[8];
    CdlLOC loc;
    u8 *t;
    s32 i;
    s32 j;
    u8 v;
    s32 k;
    s32 n;
    u8 *p;
    s32 r;
    u32 now;
    s16 col;
    s16 c;
    s16 row;
    s16 bank;
    u8 e;

    row = (q->w[2] >> 4) & 0x1F;
    c = q->w[2] & 0xF;
    col = c;
    bank = (q->w[2] >> 9) & 0x1F;
    if (row & 1) {
        col = c + 4;
        if (D_8006A69C[bank].flag == 0) {
            col = c + 8;
        }
    }
    row = row >> 1;
    if (q->b7 != 0) {
        q->b7 = 0;
        q->b3 = 17;
        if (q->w[1] == 0) {
            return 1;
        }
        if (q->w[9] + 1 != g_CdAudioReqIds[0]) {
            for (i = 1; i < 5; i++) {
                if (g_CdAudioReqIds[i] == q->w[9] + 1) {
                    break;
                }
            }
            if (i == 5) {
                return 1;
            }
            j = 0;
            n = g_CdAudioReqCount;
            if (i < n) {
                do {
                    g_CdAudioReqIds[j] = g_CdAudioReqIds[i];
                    i++;
                    j++;
                } while (i < n);
                g_CdAudioReqCount = j;
            }
        }
        q->w[3] = 15;
        D_800760F8 = 0;
        D_80076100 = CdMode();
    }
    switch (q->b3) {
    case 17:
        p = &D_800760FC;
        *p = 1;
        D_800760FD = col;
        if (CdControlB(0xD, p, res) == 0) {
            D_800760F8++;
            goto timeout;
        }
        q->b3 = 18;
        SsSetSerialVol(0, 0, 0);
        D_800760F8 = 0;
    case 18:
        param[0] = 0xC8;
        if (CdControlB(CdlSetmode, param, res) == 0) {
            D_800760F8++;
            goto timeout;
        }
        if ((q->w[2] == 0x4486 || q->w[2] == 0x4364) && g_SoundSlot[3].unk10 == 0 &&
            *(s16 *)g_SoundSlot[3].pad0 == 0x2B) {
            goto attr;
        }
        r = (s32)D_8006A69C[bank].tbl;
        t = (u8 *)(row * 64 + r) + col * 4;
        e = t[1];
        if (e & 0x20) {
            if (e & 0x40) {
            attr:
                if (D_800A4EF6 >= 2) {
                    SsSetSerialAttr(0, 1, 1);
                } else {
                    SsSetSerialAttr(0, 1, 0);
                }
            } else {
                SsSetSerialAttr(0, 1, 1);
            }
        } else {
            SsSetSerialAttr(0, 1, 0);
        }
        D_800760F8 = 0;
        if (D_80076100 & CdlModeSpeed) {
            q->b3 = 1;
            goto seek;
        }
        q->b3 = 0;
    case 0:
        if (q->w[3] != 0) {
            q->w[3]--;
        }
        if (++D_800760F8 < 10) {
            return 0;
        }
        q->b3 = 1;
        D_800760F8 = 0;
    case 1:
    seek:
        if (q->w[3] != 0) {
            q->w[3]--;
        }
        CdIntToPos(q->w[1], &loc);
        D_800760F8++;
        if (CdControlB(2, (u8 *)&loc, NULL) == 0) {
            goto timeout;
        }
        if (CdControl(CdlSeekL, (u8 *)&loc, NULL) == 0) {
            goto timeout;
        }
        D_800760F8 = 0;
        q->b3 = 2;
    case 2:
        if (q->w[3] != 0) {
            q->w[3]--;
        }
        i = CdSync(1, res);
        if (i == 0) {
            D_800760F8++;
            goto timeout;
        }
        if (i == CdlDiskError) {
            if (CdControl(CdlNop, param, res) == 0 && (res[0] & CdlStatShellOpen)) {
                g_CdAudioError = 1;
                return 1;
            }
            q->b3 = 1;
            return 0;
        }
        D_80076208 = q->w[3];
        q->b3 = 3;
    case 3:
        if (q->w[3] != 0) {
            q->w[3]--;
            break;
        }
        D_800760F8 = 0;
        q->b3 = 4;
    case 4:
        CdIntToPos(q->w[1], &loc);
        if (CdControl(0x1B, (u8 *)&loc, NULL) == 0) {
            D_800760F8++;
            goto timeout;
        }
        t = func_80035270_ent(bank, row, col);
        D_80076210 = 0;
        D_800760F8 = 0;
        v = (t[0] * g_SfxVolume >> 7) & 0x7F;
        SsSetSerialVol(0, v, v);
        D_8006AEEC = v;
        q->b3 = 5;
    case 5:
        r = CdSync(1, res);
        if (r != CdlComplete) {
            if (r == CdlDiskError) {
                if (res[0] & CdlStatShellOpen) {
                    goto flush;
                }
                CdFlush();
                q->b3 = 4;
                return 0;
            }
            D_800760F8++;
            goto timeout;
        }
        q->b3 = 6;
    case 6:
        CdControl(CdlNop, NULL, NULL);
        if (!((g_CdAudioStatus = CdStatus()) & 0x20)) {
            return 0;
        }
        t = func_80035270_ent(bank, row, col);
        now = g_SoundVSyncCount;
        q->w[4] = now;
        q->w[3] = *(s16 *)(t + 2) + now;
        if ((u32)q->w[3] < now) {
            q->b6 = 1;
        } else {
            q->b6 = 0;
        }
        q->b3 = 7;
    case 7:
        if ((D_80076210++ & 3) == 0) {
            CdControl(CdlNop, NULL, NULL);
            if ((g_CdAudioStatus = CdStatus()) & 0x10) {
                goto flush;
            }
        }
        now = g_SoundVSyncCount;
        if (now < (u32)q->w[3]) {
            return 0;
        }
        if (q->b6 != 0 && now >= (u32)q->w[4]) {
            return 0;
        }
        q->b3 = 8;
    case 8:
        SsSetSerialVol(0, 0, 0);
        if (CdControl(CdlPause, NULL, NULL) == 0) {
            return 0;
        }
        g_CdAudioStatus = 0;
        q->b3 = 9;
    case 9:
        i = CdSync(1, res);
        if (i == 0) {
            return 0;
        }
        if (i == CdlDiskError && (res[0] & CdlStatShellOpen)) {
            g_CdAudioError = 1;
        }
        return 1;
    }
    return 0;
timeout:
    if (D_800760F8 < 301) {
        return 0;
    }
flush:
    CdFlush();
    g_CdAudioError = 1;
    return 1;
}

extern s16 D_80076104;

void StopXaStep(u8 *s) {
    u8 res[8];
    s32 r;
    s32 t;

    switch (s[3]) {
    case 0:
        break;
    case 1:
    case 2:
        CdFlush();
        break;
    case 4:
        CdFlush();
        s[2] = 1;
        s[3] = 16;
        return;
    case 6:
    case 7:
        t = (D_8006AEEC * g_SfxVolume) >> 7;
        SsSetSerialVol(0, (u32)((t & 0xFF) * 3) >> 2, (u32)((t & 0xFF) * 3) >> 2);
        s[2] = 1;
        g_CdAudioStatus = 0;
        s[3] = 11;
        return;
    case 5:
        CdFlush();
        s[3] = 8;
    case 8:
        SsSetSerialVol(0, 0, 0);
        if (CdControl(CdlPause, NULL, NULL) == 0) {
            s[2] = 1;
            s[3] = 16;
            D_80076104 = 0;
            return;
        }
        g_CdAudioStatus = 0;
        D_80076104 = 0;
        s[3] = 9;
    case 9:
        r = CdSync(1, res);
        if (r == 0) {
            if (++D_80076104 > 300) {
                CdFlush();
                g_CdAudioError = 1;
                s[2] = 0;
                return;
            }
            s[2] = 1;
            return;
        }
        if (r == CdlDiskError && (res[0] & CdlStatShellOpen)) {
            g_CdAudioError = 1;
        }
        break;
    case 11:
        SsSetSerialVol(0, D_8006AEEC >> 1, D_8006AEEC >> 1);
        s[3] = 12;
        return;
    case 12:
        SsSetSerialVol(0, D_8006AEEC >> 2, D_8006AEEC >> 2);
        s[3] = 13;
        return;
    case 13:
        SsSetSerialVol(0, 0, 0);
        if (CdControl(CdlPause, NULL, NULL) == 0) {
            s[3] = 16;
            D_80076104 = 0;
            return;
        }
        s[3] = 9;
        return;
    case 16:
        if (CdControl(CdlPause, NULL, NULL) == 0) {
            if (++D_80076104 > 300) {
                CdFlush();
                g_CdAudioError = 1;
                s[2] = 0;
                return;
            }
            return;
        }
        s[3] = 9;
        return;
    case 18:
        break;
    }
    s[2] = 0;
}

extern s32 D_80076108;
extern int CdMode(void);
extern int CdStatus(void);
extern int CdControlF(u8 com, u8 *param);
void RestoreCdReadyCb(void);
void SetCdReadyCb();
void OnCdTrackReady(u8 a, u8 *b);

s32 CdTrackStep(u8 *s) {
    u8 res[8];
    u8 prm[8];
    s32 n;
    s32 r;
    u8 v;

    if (s[7] != 0) {
        n = *(s32 *)(s + 0xC);
        g_CdAudioStatus = 0;
        s[7] = 0;
        s[3] = 0;
        if (D_800A5BC8 < n) {
            return 1;
        }
        if (n != 0) {
            if (!(CdMode() & 0x80)) {
                s[3] = 1;
            }
            D_80076108 = 0;
            prm[0] = 5;
            CdControl(CdlSetmode, prm, 0);
            D_800A63E8 = *(s32 *)(s + 0xC);
        } else {
            if (g_PausedCdTrack == 0) {
                return 1;
            }
            D_800A63E8 = g_PausedCdTrack;
            CdControlF(3, 0);
            g_PausedCdTrack = 0;
            s[3] = 2;
        }
    }
    switch (s[3]) {
    case 0:
        if (++D_80076108 < 3) {
            return 0;
        }
        s[3]++;
    case 1:
        D_80076108 = 0;
        v = (u32)(g_MusicVolume * 0x61) >> 7;
        D_8006AEEC = v;
        SsSetSerialVol(0, v, v);
        SsSetSerialAttr(0, 1, 0);
        CdControlF(3, D_800C7D30 + *(s32 *)(s + 0xC) * 4);
        SetCdReadyCb(PS1_FN_ADDR(OnCdTrackReady));
        s[3]++;
    case 2:
        if (CdStatus() & 0x40) {
            if (D_80076108++ >= 0x12D) {
                g_CdAudioError = 1;
                return 1;
            }
            return 0;
        }
        r = CdSync(1, res);
        if (r == CdlComplete) {
            s[3]++;
            break;
        }
        if (r != CdlDiskError) {
            return 0;
        }
        if (res[0] & CdlStatShellOpen) {
            g_CdAudioError = 1;
            return 1;
        }
        return 1;
    case 3:
        r = CdStatus();
        if (!(r & 0x80)) {
            if (r & 0x10) {
                g_CdAudioError = 1;
                return 1;
            }
            return 0;
        }
        D_800A63E4 = 0xC;
        D_8007610C = 0;
        g_CdAudioStatus |= 0x80;
        s[3]++;
        break;
    case 4:
        if (D_800A63E4 == 0xD) {
            RestoreCdReadyCb();
            SsSetSerialVol(0, 0, 0);
            CdControlF(CdlPause, 0);
            g_CdAudioStatus = 0;
            g_CdAudioReqIds[0] = 0;
            s[3]++;
            return 0;
        }
        if (D_8007610C == 0) {
            return 0;
        }
        r = CdStatus();
        if (r & 0x80) {
            return 0;
        }
        if (r & 0x10) {
            g_CdAudioError = 1;
        }
        RestoreCdReadyCb();
        SsSetSerialVol(0, 0, 0);
        g_CdAudioStatus = 0;
        g_CdAudioReqIds[0] = 0;
        if (g_CdAudioError != 0) {
            return 1;
        }
        CdControlF(CdlPause, 0);
        s[3]++;
        return 0;
    case 5:
        r = CdSync(1, res);
        if (r == 0) {
            break;
        }
        if (r != CdlDiskError) {
            return 1;
        }
        if (res[0] & CdlStatShellOpen) {
            g_CdAudioError = 1;
        }
        return 1;
    }
    return 0;
}

extern int CdControlF(u8 com, u8 *param);
void RestoreCdReadyCb(void);

void StopCdTrackStep(u8 *s) {
    u8 res[8];
    s32 r;

    switch (s[3]) {
    case 0:
    case 1:
        break;
    case 2:
        s[2] = 1;
        CdFlush();
        s[3] += 2;
        return;
    case 3:
        s[2] = 1;
        CdFlush();
        s[3]++;
    case 4:
        CdControlF(CdlPause, 0);
        RestoreCdReadyCb();
        s[2] = 1;
        s[3]++;
        return;
    case 5:
        r = CdSync(1, res);
        if (r == 0) {
            s[2] = 1;
            return;
        }
        if (r == CdlDiskError && (res[0] & CdlStatShellOpen)) {
            g_CdAudioError = 1;
        }
        break;
    }
    s[2] = 0;
}

void OnCdTrackReady(u8 a, u8 *b) {
    if (D_800A63E4 == 0xC && a == 1) {
        if (D_8007610C < 10) {
            D_8007610C++;
        } else if (!(b[4] & 0x80)) {
            s32 v = (b[1] >> 4) * 10 + (b[1] & 0xF);
            if (v != D_800A63E8) {
                D_800A63E4 = 0xD;
            }
        }
    }
}

void SetCdReadyCb(void) {
    if (D_80076110 == 0) {
        D_8006AEF0 = CdReadyCallback();
    } else {
        CdReadyCallback();
    }
    D_80076110 = 1;
}

void RestoreCdReadyCb(void) {
    if (D_80076110 != 0) {
        CdReadyCallback(D_8006AEF0);
        D_8006AEF0 = 0;
        D_80076110 = 0;
    }
}

void ClearBgmLoadQueue2(void);

s32 CancelBgmLoad(void) {
    u8 res[8];
    s32 r;
    u16 *f = &g_BgmFlags;

    ClearBgmLoadQueue2();
    g_SpuXferFlags &= 0xFD;
    *f &= 0xFFDF;
    if (g_BgmLoadStep != 0) {
        switch (g_BgmLoadStep) {
        case 0:
        case 1:
        case 2:
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 15:
        case 16:
        case 17:
            CdFlush();
            break;
        case 12:
            if (D_80076110 != 0) {
                CdReadyCallback(D_8006AEF0);
                D_8006AEF0 = 0;
                D_80076110 = 0;
            }
        case 13:
        case 14:
            CdControl(CdlPause, NULL, NULL);
            g_BgmLoadStep = 0;
            D_800A6544 = 60;
            break;
        }
    }
    if (D_800A6544 != 0) {
        if (--D_800A6544 != 0) {
            r = CdSync(1, res);
            if (r != CdlDiskError && r != CdlComplete) {
                return 0;
            }
        }
    }
    g_BgmLoadStep = 0;
    D_800A6544 = 0;
    if (g_SoundSlot[4].unk2 >= 0) {
        SsVabClose(g_SoundSlot[4].unk2);
        g_SoundSlot[4].unk2 = -1;
        g_SoundSlot[4].unk10 = 1;
    }
    return 1;
}

extern s32 D_800A4F28[];
extern s32 D_800A4F2C[];
extern s32 D_800A4F30[];
extern s32 D_800A4F34[];
extern u8 D_800A4F38[];
extern void QueueMusicStream(s32 a);
extern void OnStreamSector();
void SetStreamSector(s32 a);
u8 *GetStreamResults(s32 *count);
s32 GetStreamPos(s32 *out);
s32 func_8003750C(void);
s32 FinishStream(void);

s32 LoadBgmStep(s32 a, CdlLOC *loc, s32 c) {
    u8 param[8];
    u8 res[8];
    s32 w;
    s32 r;
    s32 k = a - 0x100;
    s32 id = D_80068B60[k * 8];
    u8 *p;
    u16 *f;

    D_800A4F28[0]++;
    switch (g_BgmLoadStep) {
    case 0:
        D_800A4F30[0] = c;
        D_800A4F38[0] = 0;
        D_800A6544 = 0;
        StopBgm();
        f = &g_BgmFlags;
        *f &= 0xFFDF;
        g_BgmLoadStep++;
        break;
    case 1:
        ClearBgmLoadQueue2();
        SetStreamSector(CdPosToInt(loc));
        QueueMusicStream(id);
        g_BgmLoadStep++;
    case 2:
        r = CdSync(1, res);
        if (r != CdlDiskError && r != CdlComplete) {
            break;
        }
        if (CdMode() & CdlModeSpeed) {
            D_800A4F2C[0] = 0;
        } else {
            D_800A4F2C[0] = 3;
        }
        g_BgmLoadStep++;
    case 3:
        param[0] = 0xA0;
        if (CdControl(CdlSetmode, param, res) == 0) {
            if (!(res[0] & CdlStatShellOpen)) {
                break;
            }
            ClearBgmLoadQueue2();
            g_BgmLoadStep = 0;
            return 2;
        }
        D_800A4F28[0] = 0;
        g_BgmLoadStep++;
    case 4:
        r = CdSync(1, res);
        if (r == CdlDiskError) {
            g_BgmLoadStep = 3;
            break;
        }
        if (r != CdlComplete) {
            if (D_800A4F28[0] > 60) {
                g_BgmLoadStep = 3;
            }
            break;
        }
        g_BgmLoadStep++;
    case 5:
        if (D_800A4F2C[0] != 0) {
            D_800A4F2C[0]--;
            break;
        }
        g_BgmLoadStep++;
    case 6:
        if (ClaimSpuTransfer(PS1_FN_ADDR(CancelBgmLoad)) == 0) {
            break;
        }
        g_BgmLoadStep = 7;
    case 7:
        if (func_8003750C() == 0) {
            break;
        }
        g_BgmLoadStep++;
    case 8:
        r = CdSync(1, res);
        if (r != CdlDiskError && r != CdlComplete) {
            break;
        }
        g_BgmLoadStep++;
    case 9:
        D_800A4F28[0] = 0;
        if (CdControl(CdlSeekL, (u8 *)loc, res) == 0) {
            break;
        }
        g_BgmLoadStep++;
    case 10:
        r = CdSync(1, res);
        if (r == CdlDiskError) {
            if (CdControl(CdlNop, NULL, res) == 0 || !(res[0] & CdlStatShellOpen)) {
                g_BgmLoadStep = 9;
                break;
            }
            ClearBgmLoadQueue2();
            g_BgmLoadStep = 0;
            g_SpuXferFlags &= 0xFD;
            return 2;
        }
        if (r != CdlComplete) {
            if (D_800A4F28[0] > 300) {
                CdFlush();
                g_BgmLoadStep = 9;
                return 2;
            }
            break;
        }
        g_BgmLoadStep++;
    case 11:
        D_800A4F28[0] = 0;
        if (CdControl(CdlReadN, (u8 *)loc, res) == 0) {
            if (!(res[0] & CdlStatShellOpen)) {
                break;
            }
            g_SpuXferFlags &= 0xFD;
            ClearBgmLoadQueue2();
            g_BgmLoadStep = 0;
            return 2;
        }
        if (D_80076110 == 0) {
            D_8006AEF0 = CdReadyCallback(PS1_FN_ADDR(OnStreamSector));
        } else {
            CdReadyCallback(PS1_FN_ADDR(OnStreamSector));
        }
        D_80076110 = 1;
        g_BgmLoadStep++;
        return 0;
    case 12:
        if (GetStreamPos(&w) == 0) {
            if (w != D_800A4F34[0]) {
                D_800A4F34[0] = w;
                D_800A4F28[0] = 0;
            }
            if (D_800A4F28[0] > 300) {
                if (D_80076110 != 0) {
                    CdReadyCallback(D_8006AEF0);
                    D_8006AEF0 = 0;
                    D_80076110 = 0;
                }
                g_BgmLoadStep++;
            }
            break;
        }
        if (D_80076110 != 0) {
            CdReadyCallback(D_8006AEF0);
            D_8006AEF0 = 0;
            D_80076110 = 0;
        }
        g_BgmLoadStep++;
    case 13:
        if (FinishStream() == 0) {
            break;
        }
        ReleaseSpuTransfer();
        g_BgmLoadStep++;
        break;
    case 14:
        p = GetStreamResults(&r);
        if (r != 1) {
            g_BgmLoadStep = 0x11;
            break;
        }
        if (*p == 1) {
            g_BgmLoadStep++;
        } else if (*p == 2) {
            D_800A4F38[0] = 1;
            g_BgmLoadStep = 0x11;
            break;
        } else {
            if (D_800A4F30[0] == 0) {
                g_BgmLoadStep = 1;
            } else if (--D_800A4F30[0] == 0) {
                g_BgmLoadStep = 0x11;
            } else {
                g_BgmLoadStep = 1;
            }
            break;
        }
    case 15:
        if (CdControl(CdlPause, NULL, res) == 0) {
            if (!(res[0] & CdlStatShellOpen)) {
                break;
            }
            g_BgmLoadStep = 0;
            return 1;
        }
        g_BgmLoadStep++;
        break;
    case 16:
        r = CdSync(1, res);
        if (r != CdlDiskError && r != CdlComplete) {
            break;
        }
        g_BgmLoadStep = 0;
        if (D_800A4F38[0] != 0) {
            D_800A4F38[0] = 0;
            return 2;
        }
        return 1;
    case 17:
        if (CdControl(CdlPause, NULL, res) != 0) {
            g_BgmLoadStep = 0x10;
        }
        break;
    }
    return 0;
}

extern s32 func_80035270();
extern void StopXaStep();
void OnXaDone(void);
void MoveCdAudioId(s32 from, s32 to);

void PlayXa(void *file, s16 b) {
    Req req;
    s32 pad[2];
    s16 col;
    s16 c;
    s16 row;
    s16 bank;
    u8 e;
    u8 *t;
    s32 i;
    s32 r;

    if (b & 0x4000) {
        c = b & 0xF;
        col = c;
        row = (b >> 4) & 0x1F;
        bank = (b >> 9) & 0x1F;
        if (row & 1) {
            col = c + 4;
            if (D_8006A69C[bank].flag == 0) {
                col = c + 8;
            }
        }
        row = row >> 1;
        t = D_8006A69C[bank].tbl + row * 64 + col * 4;
        e = t[1];
        if (!(e & 0xF0)) {
            return;
        }
        if (g_CdAudioReqCount != 0) {
            e &= 0xF;
            if (e == 0) {
                return;
            }
            if (e == 1) {
                i = 0;
                if (g_CdAudioReqCount > 0) {
                    do {
                        CancelCdAudioRequest(g_CdAudioReqIds[i]); g_CdAudioReqIds[i] = 0; i++;
                    } while (i < g_CdAudioReqCount);
                }
                g_CdAudioReqCount = 0;
            }
        }
        req.w[0] = (s32)PS1_FN_ADDR(func_80035270);
        g_CdFadeOut = 0;
        if (row != 0) {
            req.w[1] = CdPosToInt(file) + D_8006A69C[bank].ofs[row];
        } else {
            req.w[1] = CdPosToInt(file);
        }
        req.w[2] = b;
        req.w[5] = (s32)PS1_FN_ADDR(OnXaDone);
        req.w[6] = 0;
        req.w[7] = (s32)PS1_FN_ADDR(StopXaStep);
        req.w[8] = (s32)PS1_FN_ADDR(MoveCdAudioId);
        r = PushCdAudioRequest(&req);
        if (r != 0) {
            g_CdAudioReqIds[g_CdAudioReqCount] = r;
            g_CdAudioReqCount++;
        }
        g_XaPlaying = 1;
    }
}

void OnXaDone(void) {
    g_CdAudioReqIds[0] = 0;
    if (g_CdAudioReqCount < 2) {
        g_CdAudioReqCount = 0;
        g_XaPlaying = 0;
    }
}

extern s32 CdTrackStep();
void OnCdTrackDone(void);

void PlayCdTrack(s32 n) {
    Req r;
    s32 pad[2];
    s32 i;
    s32 id;
    u8 v;
    s16 x = n;

    if (x != 0 || g_PausedCdTrack != 0) {
        g_CdFadeOut = 0;
        if (g_CdAudioReqCount != 0) {
            i = 0;
            if (g_CdAudioReqCount > 0) {
                do {
                    CancelCdAudioRequest(g_CdAudioReqIds[i]); g_CdAudioReqIds[i] = 0; i++;
                } while (i < g_CdAudioReqCount);
            }
            g_CdAudioReqCount = 0;
        }
        r.w[0] = (s32)PS1_FN_ADDR(CdTrackStep);
        r.w[1] = x;
        r.w[5] = (s32)PS1_FN_ADDR(OnCdTrackDone);
        r.w[6] = 0;
        r.w[7] = (s32)PS1_FN_ADDR(StopCdTrackStep);
        r.w[8] = (s32)PS1_FN_ADDR(MoveCdAudioId);
        id = PushCdAudioRequest(&r);
        g_CdAudioReqIds[g_CdAudioReqCount] = id;
        if (id != 0) {
            g_CdAudioReqCount++;
        }
        g_XaPlaying = 0;
        if (x != 0) {
            g_PausedCdTrack = 0;
        }
        v = (g_MusicVolume * 97) >> 7;
        SsSetSerialVol(0, v, v);
    }
}

void StopCdTrack(void) {
    if (g_XaPlaying == 0) {
        PauseCdAudio();
        g_PausedCdTrack = 0;
    }
}

s32 StopCdAudio(void) {
    PauseCdAudio();
    g_PausedCdTrack = 0;
    g_XaPlaying = 0;
}

void PauseCdAudio(void) {
    s32 i;
    s32 pad[2];
    if (g_CdAudioReqCount != 0) {
        g_PausedCdTrack = D_800A63E8;
        i = 0;
        if (g_CdAudioReqCount > 0) {
            do {
                CancelCdAudioRequest(g_CdAudioReqIds[i]); g_CdAudioReqIds[i] = 0; i++;
            } while (i < g_CdAudioReqCount);
        }
        g_CdAudioReqCount = 0;
    }
}

void OnCdTrackDone(void) {
    g_CdAudioReqIds[0] = 0;
    g_CdAudioReqCount = 0;
}

void MoveCdAudioId(s32 from, s32 to) {
    s32 pad[1];
    s32 i;
    for (i = 0; i < g_CdAudioReqCount; i++) {
        if (g_CdAudioReqIds[i] == from) {
            g_CdAudioReqIds[i] = to;
        }
    }
}

void ClearBgmLoadQueue(void) {
    s32 i = 0x40;
    do {
        D_80076251[i] = 0;
        i -= 0x10;
    } while (i >= 0);
}

typedef struct { s32 f0; s32 f4; s32 pad[4]; } BankEnt;
typedef struct { s32 hdr[6]; BankEnt e[16]; } BankTab;
extern BankTab D_800A4620;
typedef struct { s32 a; s32 id; s32 c; u8 z; u8 used; u8 k; u8 pad; } SndSlot;
typedef struct {
    s32 x22C; s32 p230; s32 p234; s32 x238; s32 x23C;
    s16 x240; u8 x242; u8 x243; SndSlot slot[5];
} SndCtl;
extern SndCtl g_StreamQueue;
extern s32 D_80076228;
extern s32 D_80076238;
extern s16 D_80076240;
extern s32 D_80076294;
extern s32 D_8007629C;

void QueueBankStream(s32 id, s32 a) {
    s32 i;
    s32 k;
    for (i = 0; i < 5; i++) {
        if (g_StreamQueue.slot[i].used == 0) {
            break;
        }
    }
    if (i < 5) {
        g_StreamQueue.slot[i].used = 1;
        g_StreamQueue.slot[i].a = a;
        g_StreamQueue.slot[i].z = 0;
        g_StreamQueue.slot[i].id = id;
        k = D_80064D49[id * 12];
        g_StreamQueue.slot[i].k = k;
        g_StreamQueue.slot[i].c = D_800A4620.e[k].f4;
        if (i == 0) {
            g_StreamQueue.x22C = a;
            D_80076228 = a;
            D_80076240 = 0;
            g_StreamPhase = 2;
            *(u8 *)&D_80076242 = 0;
            D_80076294 = 0;
            D_80076238 = D_800A4620.e[k].f4;
        }
    }
    D_8007629C = 0;
}

extern u8 D_800BA320[];

void QueueMusicStream(s32 a) {
    s32 i;
    s32 s;
    u8 one; /* MATCH-TRICK: the constant 1 held in a local, set inside the do-while(0) below (LuciDin 1 Nov) */
    for (i = 0; i < 5; i++) {
        if (g_StreamQueue.slot[i].used == 0) break;
    }
    if (i < 5) {
        do { /* MATCH-TRICK: loop notes keep the li of one between the la and the bank store (sched1 would sink it to the used store) */
            g_StreamQueue.slot[i].a = (s32)D_800BA320;
            one = 1;
        } while (0);
        g_StreamQueue.slot[i].id = a | 0x2000;
        g_StreamQueue.slot[i].z = 0;
        g_StreamQueue.slot[i].used = one;
        g_StreamQueue.slot[i].k = 4;
        g_StreamQueue.slot[i].c = g_SoundSlot[3].spuAddr = D_800652F0[D_80065438[a].v];
        s = 4;
        if (g_SoundSlot[4].unk10 == 0) {
            if (*(s16 *)g_SoundSlot[4].pad0 == (D_80065438[a].v | 0x4000)) {
                g_StreamQueue.slot[i].id |= 0x1000;
            } else {
                g_SoundSlot[4].unk10 = 1;
                if (g_SoundSlot[4].unk2 >= 0) {
                    SsVabClose(g_SoundSlot[4].unk2);
                    g_SoundSlot[4].unk2 = -1;
                }
            }
        } else {
            if (g_SoundSlot[4].unk2 >= 0) {
                SsVabClose(g_SoundSlot[4].unk2);
                g_SoundSlot[4].unk2 = -1;
            }
        }
        if (i == 0) {
            g_StreamQueue.x22C = (s32)D_800BA320;
            D_80076238 = *(s32 *)((u8 *)&D_800A463C + s * 0x18);
            D_80076228 = (s32)D_800BA320;
            D_80076240 = 0;
            g_StreamPhase = 1;
            D_80076242.flag = 0;
            D_80076294 = 0;
        }
    }
    D_8007629C = 0;
}

void ClearBgmLoadQueue2(void) {
    s32 i;
    for (i = 0x40; i >= 0; i -= 0x10) {
        D_80076251[i] = 0;
    }
}

void SetStreamSector(s32 a) {
    D_8007623C = a;
}

extern u8 D_80076220[];
extern u8 D_80076250[];

u8 *GetStreamResults(s32 *count) {
    s32 n = 0;
    u8 *p = D_80076220;
    s32 i = 0;
    do {
        *p++ = 0;
        if (D_80076251[i] != 0) {
            D_80076220[n] = D_80076250[i];
            n++;
        }
        i += 0x10;
    } while (i < 0x50);
    *count = n;
    return D_80076220;
}

extern U16R D_80065438[];
extern s32 D_80076298[];
extern u8 D_80076250[];
extern s32 D_80076248[];
extern u16 D_800A4E88;
extern u8 D_800BA320[];
extern s32 OpenMusicVab(s32 a, u8 *b);

void OpenStreamedMusic(void) {
    register u8 *st = (u8 *)&D_800A4E88;
    register u8 *bank = D_800BA320;
    s32 *p = D_80076248;
    s32 off = 0;
    do {
        if (D_80076251[off] != 0 && D_80076250[off] != 0) {
            s32 a = *p;
            if (a & 0x3000) {
                *(u16 *)(st + 6) |= 0x20;
                *(u16 *)st = a & 0xFFF;
                func_8002D7FC((s32)bank);
                if (!(*p & 0x1000)) {
                    OpenMusicVab(D_80065438[*(s16 *)st].v, bank + 0x7000);
                }
            }
        }
        p += 4;
        off += 0x10;
    } while ((s32)p < (s32)D_80076298);
}

s32 GetStreamPos(s32 *out) {
    if (g_StreamPhase != 4 && g_StreamPhase != 0 && g_StreamPhase != 5) {
        *out = D_8007623C;
        return 0;
    }
    return 1;
}

extern u8 D_80076252[];
extern Row12 D_80064D4A[];

s32 func_8003750C(void) {
    s32 i;
    s32 off;
    s32 a;
    s32 k;

    switch (D_8007629C) {
    case 0:
        if (g_SpuXferFlags & 2) {
            return 0;
        }
        g_SpuXferFlags |= 2;
        D_8007629C = 1;
    case 1:
        if (g_SpuXferFlags & 1) {
            if (SpuIsTransferCompleted(0) == 0) {
                return 0;
            }
        }
        D_8007629C++;
    case 2:
        for (i = 0; i < 5; i++) {
            off = i * 16;
            if (D_80076251[off] != 0) {
                a = *(s32 *)((u8 *)D_80076248 + off);
                k = D_80076252[off];
                if (!(a & 0x6000)) {
                    if (g_SoundSlot[k].unk4 != 0 && g_SoundSlot[k].unk4 != D_80064D4A[a].c) {
                        *(s16 *)(D_800C532A + g_SoundSlot[k].unk8 * 4) = -1;
                        g_SoundSlot[k].unk4 = 0;
                        g_SoundSlot[k].unk8 = 0;
                    }
                    if (g_SoundSlot[k].unk10 == 0) {
                        g_SoundSlot[k].unk10 = 1;
                        g_BankSlotMap[*(s16 *)g_SoundSlot[k].pad0].lo = -1;
                        if (g_SoundSlot[i].unk2 >= 0) {
                            SsVabClose(g_SoundSlot[i].unk2);
                            g_SoundSlot[i].unk2 = -1;
                        }
                        StopOrphanSfxVoices();
                    }
                }
            }
        }
        D_8007629C = 0;
        *(u8 *)D_80076298 = 0;
        return 1;
    }
    return 0;
}

s32 FinishStream(void) {
    register Flag8 *f = &D_80076242;
    if (f->flag != 0) {
        if (SpuIsTransferCompleted(0) == 0) {
            return 0;
        }
        f->flag = 0;
        g_SpuXferFlags &= 0xFC;
        OpenStreamedMusic();
        return 1;
    }
    g_SpuXferFlags &= 0xFC;
    OpenStreamedMusic();
    return 1;
}

extern u8 D_800762A0[];

void OnStreamSector(s32 a0) {
    u8 m = a0;
    s32 pos;
    s32 *c;
    u8 *st;

    if (m == 1 && CdGetSector(D_800762A0, 3) != 0) {
        pos = CdPosToInt((CdlLOC *)D_800762A0);
        c = &D_8007623C;
        if (pos == *c) {
            *c = pos + 1;
            switch (g_StreamPhase) {
            case 1:
                if (CdGetSector((void *)D_80076228, 0x200) == 0) {
                    goto fail;
                }
                if (D_80076240 == 0 && *(s32 *)D_80076228 != 0x7671732E) {
                    *(u8 *)D_80076298 = 1;
                    g_StreamQueue.slot[D_80076294].z = 2;
                    goto fail;
                }
                D_80076228 += 0x800;
                g_StreamQueue.x240++;
                if (g_StreamQueue.x240 == 14) {
                    if (g_StreamQueue.slot[D_80076294].id & 0x1000) {
                        g_StreamQueue.slot[D_80076294].z = 1;
                        D_80076294++;
                        if (D_80076294 < 5 && g_StreamQueue.slot[D_80076294].used != 0) {
                            if (g_StreamQueue.slot[D_80076294].id & 0x2000) {
                                g_StreamPhase = 1;
                                *(u8 *)D_80076298 = 0;
                                D_80076240 = 0;
                            } else {
                                g_StreamPhase = 2;
                                *(u8 *)D_80076298 = 0;
                                D_80076240 = 0;
                            }
                            D_80076228 = g_StreamQueue.slot[D_80076294].a;
                            D_80076238 = g_StreamQueue.slot[D_80076294].c;
                        } else {
                            g_StreamPhase = 4;
                            g_SpuXferFlags &= 0xFD;
                        }
                    } else {
                        g_StreamPhase = 2;
                        g_StreamQueue.x240 = 0;
                    }
                }
                return;
            case 2:
                if (CdGetSector((void *)D_80076228, 0x200) == 0) {
                    goto fail;
                }
                D_80076228 += 0x800;
                D_80076240++;
                if (D_80076240 == 7) {
                    g_StreamPhase = 3;
                    D_80076240 = 0;
                    if (D_80076242.flag != 0 && SpuIsTransferCompleted(0) != 0) {
                        g_StreamQueue.x242 = 0;
                    }
                }
                return;
            case 3:
                if (CdGetSector((void *)D_80076228, 0x200) == 0) {
                    goto fail;
                }
                D_80076240++;
                if (D_80076242.flag != 0 && SpuIsTransferCompleted(0) == 0) {
                    goto fail;
                }
                if (SpuSetTransferStartAddr(D_80076238) == 0) {
                    goto fail;
                }
                if (D_80076240 == ((s16 *)D_80076228)[-2]) {
                    SpuRead(D_80076228, ((s16 *)D_80076228)[-1]);
                    g_StreamQueue.x242 = 1;
                    g_SpuXferFlags |= 1;
                    g_StreamQueue.slot[D_80076294].z = 1;
                    D_80076294++;
                    if (D_80076294 < 5 && g_StreamQueue.slot[D_80076294].used != 0) {
                        if (g_StreamQueue.slot[D_80076294].id & 0x2000) {
                            g_StreamPhase = 1;
                            *(u8 *)D_80076298 = 0;
                            D_80076240 = 0;
                        } else {
                            g_StreamPhase = 2;
                            *(u8 *)D_80076298 = 0;
                            D_80076240 = 0;
                        }
                        D_80076228 = g_StreamQueue.slot[D_80076294].a;
                        D_80076238 = g_StreamQueue.slot[D_80076294].c;
                    } else {
                        g_StreamPhase = 4;
                        g_SpuXferFlags &= 0xFD;
                    }
                } else {
                    SpuRead(D_80076228, 0x800);
                    g_StreamQueue.x242 = 1;
                    g_SpuXferFlags |= 1;
                    D_80076238 += 0x800;
                }
                return;
            default:
                return;
            }
        }
    }
fail:
    st = &g_StreamPhase;
    if (*st != 0) {
        if (*st != 4) {
            if (*st != 5) {
                *st = 5;
                g_SpuXferFlags &= 0xFD;
            }
        }
    }
}

void ResetSpuOwner(void) {
    g_SpuXferOwner = 0;
}

s32 ClaimSpuTransfer(s32 fn) {
    if (g_SpuXferFlags & 2) {
        register s32 *cb = &g_SpuXferOwner;
        if (*cb != 0) {
            if (PS1_FN((s32 (*)(void))*cb)() != 0) {
                *cb = fn;
                g_SpuXferFlags &= 0xFD;
                return 1;
            }
            return 0;
        }
    }
    g_SpuXferOwner = fn;
    g_SpuXferFlags &= 0xFD;
    return 1;
}

void ReleaseSpuTransfer(void) {
    g_SpuXferOwner = 0;
    g_SpuXferFlags &= 0xFD;
}

extern u8 g_VoiceKeyStatus;
extern s32 g_VoiceBit[];
extern u8 D_800C6E2B[];
extern u8 D_800C6E2C[];
extern u8 D_800C6E2D[];
extern u8 D_800C6DEC[];
extern u8 D_800C6DEE[];
extern u8 D_800C6DE4[];
extern u8 D_800C6DE0[];
extern u8 D_800B9EC8[];
extern u8 D_80079A68[];
extern void func_8003D424(void *p);

void func_80037D98(void) {
    s32 i;
    s32 off;
    s32 *src;
    D_800762B0 = &g_VoiceKeyStatus;
    for (i = 0, src = g_VoiceBit, off = 0; i < 16; i++, off += 0x60) {
        s32 v = *src++;
        D_800C6E2A[off] = 0;
        D_800C6E2B[off] = 0;
        D_800C6E2C[off] = 0;
        D_800C6E2D[off] = 0;
        *(s16 *)(D_800C6DEC + off) = 0;
        *(s16 *)(D_800C6DEE + off) = 0;
        *(s32 *)(D_800C6DE4 + off) = 0;
        D_800C6E2E[off] = 0;
        *(s32 *)(D_800C6DE0 + off) = v;
    }
    for (i = 0, off = 0; i < 2; off += 0x1FC, i++) {
        D_800B9ED3[off] = 0;
        D_800B9ED2[off] = 0;
        *(s16 *)(D_800B9EC8 + off) = i;
    }
    func_8003D424(D_80079A68);
}

void func_80037EA0(void) {
    s32 i;
    for (i = 0; i < 16; i++) {
        u8 *q = D_800C6E2E + i * 0x60;
        if (q[-4] != 0 && q[-1] == 0 && q[0] != 0) {
            SpuSetVoiceRR(i, 8);
            *(u32 *)(q - 0x4A) &= 0xFFF9FFFF;
            q[0] = 0;
        }
    }
}

void func_80037F3C(void) {
    u8 *c = (u8 *)g_SeqVoice;
    s32 i = 0;
    do {
        if (c[0x5A] != 0 && c[0x5D] != 0) {
            SpuNSetVoiceAttr(i, c + 0x10);
            *(s32 *)(c + 0x14) = 0;
            c[0x5D] = 0;
            c[0x5E] = 0;
        }
        i++;
        c += 0x60;
    } while (i < 0x10);
}

extern void RunSequencers();

void UpdateBgm(void) {
    s32 i;
    u8 *c;

    if (D_800A4F1D == 0) {
        RunSequencers();
    }
    for (i = 0; i < 16; i++) {
        u8 *q = D_800C6E2E + i * 0x60;
        if (q[-4] != 0 && q[-1] == 0 && q[0] != 0) {
            SpuSetVoiceRR(i, 8);
            q[0] = 0;
            *(u32 *)(q - 0x4A) &= 0xFFF9FFFF;
        }
    }
    if (*(u16 *)&g_KeyOffBits != 0) {
        SpuSetKey(0, *(u16 *)&g_KeyOffBits);
        g_KeyOffBits &= 0xFF0000;
    }
    if (*(u16 *)&g_ReverbOffBits != 0) {
        SpuSetReverbVoice(0, *(u16 *)&g_ReverbOffBits);
        g_ReverbOffBits &= 0xFF0000;
    }
    c = (u8 *)g_SeqVoice;
    i = 0;
    do {
        if (c[0x5A] != 0 && c[0x5D] != 0) {
            SpuNSetVoiceAttr(i, c + 0x10);
            *(s32 *)(c + 0x14) = 0;
            c[0x5D] = 0;
            c[0x5E] = 0;
        }
        i++;
        c += 0x60;
    } while (i < 0x10);
    if (*(u16 *)&g_KeyOnBits != 0) {
        SpuSetKey(1, *(u16 *)&g_KeyOnBits);
        g_KeyOnBits &= 0xFF0000;
    }
    if (*(u16 *)&g_ReverbOnBits != 0) {
        SpuSetReverbVoice(1, *(u16 *)&g_ReverbOnBits);
        g_ReverbOnBits &= 0xFF0000;
    }
}

void SetSeqFade(s32 i, s16 a, s16 b, s16 c) {
    u8 *p;
    u8 *q;
    if (a <= 0) {
        p = g_SeqPlayer + i * 0x1FC;
        q = p + a * 8;
        *(s16 *)(q + 0x16) = b;
        *(s16 *)(q + 0x14) = c;
        q[0x18] = 1;
        p[0x1F4] = 1;
    }
}

s32 func_800381E4(s32 a, s32 b) {
    return D_800B9CF0[(((s32)(b << 16) >> 13) + (((a << 7) - a) << 2))];
}

extern u8 *D_800A6428;
extern u8 D_800C1320[];

extern s32 SeqReadHeader();

s32 OpenSeq(s32 a, s16 b, s32 c) {
    s32 i;
    s32 j;
    u8 *s;
    u8 *f;
    u8 *q;
    for (s = g_SeqPlayer, i = 0; i < 2; i++, s += 0x1FC) {
        f = s + 0x1FA;
        if (f[1] == 0) {
            D_800A6428 = s + 0x1BA;
            *(s32 *)s = a;
            *(s16 *)(f - 0xE) = b;
            *(s32 *)(f - 0x12) = c;
            *(u8 **)(f - 0x22) = D_800C1320;
            *(u8 **)(f - 0x1E) = D_800C1320 + 0x20;
            *(u8 **)(f - 0x1A) = D_800C1320 + 0x820;
            if (SeqReadHeader(s) != 0) {
                return -1;
            }
            if (SeqReadTrackHeader((u8 **)s) != 0) {
                return -1;
            }
            ResetSeq(s);
            *(s32 *)(f - 0x1F6) = *(s32 *)s;
            f[1] = 1;
            f[0] = 0;
            for (j = 0xF, q = s + 0xF; j >= 0; j--, q--) {
                q[0x1BA] = 0;
            }
            return i;
        }
    }
    return -1;
}

void PlaySeq(s32 i) {
    s32 o = i * 0x1FC;
    D_800B9ED2[o] = 1;
    UpdateSeqVolume(g_SeqPlayer + o);
}

void SetSeqVolume(s32 i, s16 v) {
    *(s16 *)((u8 *)&D_800B9ECA + i * 0x1FC) = v;
}

u8 IsSeqPlaying(s32 i) {
    s32 o = i * 0x1FC;
    return D_800B9ED3[o] != 0 ? D_800B9ED2[o] : 0;
}

void FreeSeqVoice(s16 n);

void PauseSeq(s32 n) {
    u8 *p = g_SeqPlayer + n * 0x1FC;
    u8 *r = p + 0x1A;
    s32 i, j;
    u8 *s;
    u8 *q;

    D_800A4F1D = 1;
    p[0x1FA] = 0;
    for (i = 0; i < 16; i++, r += 0x1A) {
        for (s = r + 9, j = 0, q = D_800C6E2D; j < 16; j++, q += 0x60) {
            if (*s++ != 0) {
                q[1] = 1;
                q[0] = 0;
                FreeSeqVoice(j);
                QueueKey(0, g_VoiceBit[j]);
            }
        }
    }
    D_800A4F1D = 0;
}

void FreeSeqVoice(s16 n);

void StopSeq(s32 i) {
    u8 *s = g_SeqPlayer + i * 0x1FC;
    u8 *r;
    u8 *p;
    u8 *q;
    s32 j, k;
    D_800A4F1D = 1;
    s[0x1FA] = 0;
    r = s + 0x1A;
    for (k = 0; k < 16; k++) {
        p = r + 9;
        for (j = 0, q = D_800C6E2D; j < 16; j++, q += 0x60) {
            if (*p++ != 0) {
                q[1] = 1;
                q[0] = 0;
                FreeSeqVoice(j);
                QueueKey(0, g_VoiceBit[j]);
            }
        }
        r += 0x1A;
    }
    D_800A4F1D = 0;
    *(s32 *)s = *(s32 *)(s + 4);
}

void CloseSeq(s32 id) {
    s32 i;
    for (i = 0; i < 0x10; i++) {
        u8 *e = D_800C6E2A + i * 0x60;
        if (e[2] != 0) {
            u8 *o = *(u8 **)(e - 0xA);
            if (*(s16 *)(o + 0x1F0) == id) {
                e[2] = 0;
                e[0] = 0;
            }
        }
    }
    D_800B9ED2[id * 0x1FC] = 0;
    D_800B9ED3[id * 0x1FC] = 0;
}

void MuteSeqChannel(s32 a, s32 b) {
    u8 *p = &D_800B9E92[a * 0x1FC];
    p += b;
    *p |= 1;
}

void UnmuteSeqChannel(s32 i, s32 j) {
    u8 *p = D_800B9E92 + i * 0x1FC;
    p[j] &= 0xFE;
}

/* SeqReadHeader: MThd chunk, length 6, format 0, one track, division (not SMPTE) -> +0x1E6 */
s32 SeqReadHeader(u8 **pp) {
    u8 *p;
    s32 x;
    s32 b;
    s32 h;
    s32 n;
    s32 m;
    s32 v;
    b = *(*pp)++;
    x = b | (*(*pp)++ << 8);
    x |= *(*pp)++ << 16;
    x |= *(*pp)++ << 24;
    if (x != 0x6468544D) {
        return -1;
    }
    b = *(*pp)++;
    x = b << 8;
    x |= *(*pp)++;
    x <<= 8;
    x |= *(*pp)++;
    x <<= 8;
    x |= *(*pp)++;
    p = *pp;
    h = p[0];
    if (((h << 8) | p[1]) != 0) {
        return -1;
    }
    h = p[2];
    n = (h << 8) | p[3];
    if ((s16)n != 1) {
        return -1;
    }
    h = p[4];
    m = (h << 8) | p[5];
    v = (s16)m;
    if (v & 0x8000) {
        return -1;
    }
    *(s16 *)((u8 *)pp + 0x1E6) = v & 0x7FFF;
    *pp += x;
    return 0;
}

s32 SeqReadTrackHeader(u8 **pp) {
    u8 *p = *pp;
    u32 v;
    v = *(*pp)++;
    v |= *(*pp)++ << 8;
    v |= *(*pp)++ << 16;
    v |= *(*pp)++ << 24;
    if (v != 0x6B72544D) {
        return -1;
    }
    *pp = p + 8;
    return 0;
}

typedef struct { u8 n; u8 f1; s16 f2; u8 f4; u8 pad5[2]; u8 f7; u8 pad8; u8 z[16]; } Ent1A;

void ResetSeq(u8 *a) {
    s32 n;
    s32 j;
    Ent1A *p = (Ent1A *)(a + 0x1A);
    for (n = 0; n < 0x10; n++, p++) {
        u8 *q = p->z;
        p->n = n;
        p->f2 = 0x40;
        p->f4 = 0x40;
        p->f7 = 0;
        p->f1 = 0x7F;
        for (j = 0xF; j >= 0; j--) {
            *q++ = 0;
        }
    }
    for (n = 0; n < 1; n++) {
        a[n * 8 + 0x18] = 0;
        *(s16 *)(a + n * 8 + 0x12) = 0x4000;
    }
    *(s32 *)(a + 8) = 1;
    *(s32 *)(a + 0x1D0) = 0xE10;
    *(s32 *)(a + 0x1D4) = 0xE10;
    *(s32 *)(a + 0x1CC) = 0xE10;
    a[0x1F4] = 0;
    *(s16 *)(a + 0x1E4) = 0x78;
    a[0x1F7] = 0;
    a[0x1F8] = 0;
    a[0x1F9] = 0;
    a[0x1FA] = 0;
    a[0x1F6] = 0;
}

s32 ScaleBySeqVolume(u8 *a, s16 b) {
    return (b * *(s16 *)(a + 0x10) << 2) >> 16;
}

void UpdateSeqVolume(u8 *p) {
    s32 v;
    u16 *q;
    s32 n;
    v = g_MusicVolume << 7; v *= g_MusicDuck; v >>= 14;
    q = (u16 *)(p + 0x12);
    n = 0;
    do {
        v *= *q; v >>= 14;
        n--;
        q += 4;
    } while (n >= 0);
    *(s16 *)(p + 0x10) = v;
}

void FreeEndedSeqVoices(void) {
    u8 *st = D_800762B0;
    u8 *fl = &g_SeqVoiceKeyed;
    s32 i = 0;
    Ch60 *p = g_SeqVoice;
    do {
        u8 s = *st;
        if ((s == 0 || s == 3) && *fl == 0) {
            p->pad5B[0] = 0;
            if (p->on != 0) {
                u8 *q = (u8 *)&p->list[p->idx];
                q += i;
                q[0x23] = 0;
                p->on = 0;
            }
        }
        i++;
        p++;
        st++;
        fl++;
    } while (i < 0x10);
}

s32 FindReleasedSeqVoice(void) {
    u8 *a = D_800762B0;
    u8 *b = &g_SeqVoiceKeyed;
    s32 i = 0;
    do {
        if (*a == 2 && *b == 0) {
            return i;
        }
        i++;
        a++;
        b++;
    } while (i < 0x10);
    return -1;
}

s32 SeqReadVarLen(u8 **pp);
s32 SeqDoEvent(u8 *p);

void RunSequencers(void) {
    u8 *p = g_SeqPlayer;
    s32 i;
    {
        u8 *z = &g_SeqVoiceKeyed;
        for (i = 0xF; i >= 0; i--) {
            *z++ = 0;
        }
    }
    {
        u8 *st = D_800762B0;
        u8 *fl = &g_SeqVoiceKeyed;
        s32 k = 0;
        Ch60 *c = g_SeqVoice;
        do {
            u8 s = *st;
            if ((s == 0 || s == 3) && *fl == 0) {
                c->pad5B[0] = 0;
                if (c->on != 0) {
                    u8 *q = (u8 *)&c->list[c->idx];
                    q += k;
                    q[0x23] = 0;
                    c->on = 0;
                }
            }
            k++;
            c++;
            st++;
            fl++;
        } while (k < 0x10);
    }
    for (i = 0; i < 2; i++, p += 0x1FC) {
        u8 t2;
        if (p[0x1FB] == 0 || p[0x1FA] == 0) {
            continue;
        }
        {
            s32 t = *(s32 *)(p + 0x1CC) + *(s32 *)(p + 0x1D0);
            s32 d = *(s32 *)(p + 0x1D4);
            *(s32 *)(p + 0x1CC) = t;
            if (t >= d) {
                s32 n = t / d;
                s32 w;
                s32 x;
                *(s32 *)(p + 0x1CC) = t % d;
                x = *(s32 *)(p + 8);
                w = x;
                if (x != 0) {
                    if (n >= x) {
                        do {
                            if (w == n) {
                                n = 0;
                            } else {
                                n -= w;
                            }
                            *(s32 *)(p + 8) = 0;
                            do {
                                if (p[0x1F8] != 0) {
                                    SeqDoEvent(p);
                                    if (p[0x1F9] != 0) {
                                        p[0x1FA] = 0;
                                        p[0x1F8] = 0;
                                        goto next;
                                    }
                                }
                                x = SeqReadVarLen((u8 **)p);
                                p[0x1F8] = 1;
                            } while (x == 0);
                            *(s32 *)(p + 8) = x;
                            w = x;
                        } while (n >= x);
                        *(s32 *)(p + 8) = x - n;
                    } else {
                        *(s32 *)(p + 8) = x - n;
                    }
                } else {
                    p[0x1FA] = 0;
                    p[0x1F8] = 0;
                }
            }
        }
        t2 = 0;
        if (p[0x1F4] != 0) {
            s32 j;
            u16 *q = (u16 *)(p + 0x12);
            for (j = 0; j < 1; j++, q += 4) {
                if (*(u8 *)(q + 3) != 0) {
                    t2 = 1;
                    if (*q < q[2]) {
                        *q += q[1];
                        if (*q >= q[2]) {
                            *q = q[2];
                            *(u8 *)(q + 3) = 0;
                        }
                    } else if (q[1] < *q) {
                        *q -= q[1];
                        if (q[2] >= *q) {
                            *q = q[2];
                            *(u8 *)(q + 3) = 0;
                        }
                    } else {
                        *q = q[2];
                        *(u8 *)(q + 3) = 0;
                    }
                }
            }
            {
                s32 v;
                u16 *q;
                s32 n;
                v = g_MusicVolume << 7; v *= g_MusicDuck; v >>= 14;
                for (n = 0, q = (u16 *)(p + 0x12); n < 1; n++, q += 4) {
                    v *= *q; v >>= 14;
                }
                *(s16 *)(p + 0x10) = v;
            }
            if (t2 != 0 || D_800A4F16 != 0) {
                Ch60 *c = g_SeqVoice;
                for (j = 0; j < 16; j++, c++) {
                    if (c->on == 1) {
                        if (*(s16 *)((u8 *)c->list + 0x1F0) == i) {
                            *(s16 *)((u8 *)c + 0x18) = (u32)(*(s16 *)c * *(s16 *)(p + 0x10)) >> 14;
                            *(s16 *)((u8 *)c + 0x1A) = (u32)(*(s16 *)((u8 *)c + 2) * *(s16 *)(p + 0x10)) >> 14;
                            c->pad5B[2] = 1;
                            *(s32 *)((u8 *)c + 0x14) |= 3;
                        }
                    } else if (c->on != 0) {
                        c->on = 1;
                    }
                }
            } else {
                Ch60 *c = g_SeqVoice;
                p[0x1F4] = 0;
                for (j = 0; j < 16; j++, c++) {
                    if (c->on == 2 && *(s16 *)((u8 *)c->list + 0x1F0) == i) {
                        c->on = 1;
                    }
                }
            }
        } else if (D_800A4F16 != 0) {
            s32 k;
            Ch60 *c;
            {
                s32 v;
                u16 *q;
                s32 n;
                v = g_MusicVolume << 7; v *= g_MusicDuck; v >>= 14;
                for (n = 0, q = (u16 *)(p + 0x12); n < 1; n++, q += 4) {
                    v *= *q; v >>= 14;
                }
                *(s16 *)(p + 0x10) = v;
            }
            c = g_SeqVoice;
            for (k = 0; k < 16; k++, c++) {
                if (c->on == 1) {
                    if (*(s16 *)((u8 *)c->list + 0x1F0) == i) {
                        *(s16 *)((u8 *)c + 0x18) = (u32)(*(s16 *)c * *(s16 *)(p + 0x10)) >> 14;
                        *(s16 *)((u8 *)c + 0x1A) = (u32)(*(s16 *)((u8 *)c + 2) * *(s16 *)(p + 0x10)) >> 14;
                        c->pad5B[2] = 1;
                        *(s32 *)((u8 *)c + 0x14) |= 3;
                    }
                } else if (c->on != 0) {
                    c->on = 1;
                }
            }
        }
    next:;
    }
    D_800A4F16 = 0;
}

s32 SeqReadVarLen(u8 **pp) {
    s32 acc = 0;
    u8 *q;
    u8 b;
    while (1) {
        q = *pp;
        b = *q;
        *pp = q + 1;
        acc += b & 0x7F;
        if (b & 0x80) {
            acc <<= 7;
            continue;
        }
        return acc;
    }
}

void SeqNoteOff();
void SeqNoteOn();
void SeqPolyPressure();
void SeqControlChange(u8 **p, s16 n);
void SeqProgramChange(u8 **p, s16 n);
void SeqChannelPressure();
void SeqPitchBend();
void SeqMetaEvent();

s32 SeqDoEvent(u8 *p) {
    u8 *q = *(u8 **)p;
    u8 c = *q;
    u8 b;
    u8 *r;
    u8 *t;
    s32 acc;

    if (c & 0x80) {
        *(u8 **)p = q + 1;
        p[0x1F7] = c;
    } else {
        c = p[0x1F7];
    }
    switch (c >> 4) {
    case 8:
        SeqNoteOff(p, c & 0xF);
        break;
    case 9:
        SeqNoteOn(p, c & 0xF);
        break;
    case 10:
        SeqPolyPressure(p, c & 0xF);
        break;
    case 11:
        SeqControlChange((u8 **)p, c & 0xF);
        break;
    case 12:
        SeqProgramChange((u8 **)p, c & 0xF);
        break;
    case 13:
        SeqChannelPressure(p, c & 0xF);
        break;
    case 14:
        SeqPitchBend(p, c & 0xF);
        break;
    case 15:
        switch (c & 0xF) {
        case 0:
        case 7:
            acc = 0;
            while (1) {
                t = *(u8 **)p;
                b = *t;
                r = t + 1;
                *(u8 **)p = r;
                acc += b & 0x7F;
                if (b & 0x80) {
                    acc <<= 7;
                    continue;
                }
                break;
            }
            *(u8 **)p = r + (s16)acc;
            break;
        case 15:
            SeqMetaEvent(p);
            break;
        }
        break;
    }
    return 0;
}

void FreeSeqVoice(s16 n) {
    Ch60 *p = &g_SeqVoice[n];
    if (p->on != 0) {
        u8 *q = (u8 *)&p->list[p->idx]; q += n; q[0x23] = 0;
        p->on = 0;
    }
}

extern u8 D_800C6DD4[];

void func_800391D4(E1A *list, s32 id0, s32 idx0) {
    s16 idx = idx0;
    s16 id = id0;
    s32 i;
    s32 bits;
    for (i = 0; i < 16; i++) {
        s32 off = i * 0x60;
        u8 *q = (u8 *)&list[idx] + i;
        if (q[0x23] != 0 && *(s16 *)(D_800C6DD4 + off) == id) {
            s16 n = i;
            Ch60 *p = &g_SeqVoice[n];
            if (p->on != 0) {
                u8 *r = (u8 *)&p->list[p->idx]; r += n; r[0x23] = 0;
                p->on = 0;
            }
            bits = g_VoiceBit[i];
            g_KeyOnBits &= ~bits;
            g_KeyOffBits |= bits;
            D_800762B0[i] = 2;
            (&g_SeqVoiceKeyed)[i] = 0;
        }
    }
}

void SeqNop(void) {
}

extern u16 D_8006ABD8[];
extern u16 D_8006ACD8[];
extern s16 D_8006AF08[];
extern u8 D_800C6DDD[];

static inline void stop_i(s16 n) {
    Ch60 *h = &g_SeqVoice[n];
    if (h->on != 0) {
        u8 *q = (u8 *)&h->list[h->idx]; q += n; q[0x23] = 0;
        h->on = 0;
    }
}

static inline void off_i(u8 *p, s32 id0, s32 idx0) {
    s16 k = idx0;
    s32 i = 0;
    u8 *row = p + k * 0x1A;
    s16 id = id0;
    s32 off = 0;
loop:
    if ((row + i)[0x23] != 0 && *(s16 *)(D_800C6DD4 + off) == id) {
        stop_i(i);
        g_KeyOnBits &= ~g_VoiceBit[i];
        g_KeyOffBits |= g_VoiceBit[i];
        D_800762B0[i] = 2;
        (&g_SeqVoiceKeyed)[i] = 0;
    }
    i++;
    off += 0x60;
    if (i < 0x10) goto loop;
}

void SeqNoteOn(u8 *a, s32 n0) {
    s16 n = n0;
    s16 note;
    s32 vel;
    u8 *e;
    s16 prog;
    u8 *r;
    u8 *z;
    s32 i;
    s32 cnt;
    u8 *c;
    u8 *d;
    s32 j;
    u8 found;
    s16 slot;
    u8 cand;
    u16 min;
    u8 *q;
    u8 v;
    s32 k;
    s32 vol;
    s16 pan;
    s32 l;
    s32 rr;
    s32 tr;
    u16 pt;
    u32 pv;
    u32 m;

    note = *(*(u8 **)a)++;
    vel = *(*(u8 **)a)++;
    if (vel != 0) {
        if ((a + n)[0x1BA] & 1) {
            return;
        }
        e = a + (n * 0x1A + 0x1A);
        prog = e[0];
        tr = prog << 4;
        r = *(u8 **)(a + 0x1E0) + prog * 0x200;
        cnt = *(*(u8 **)(a + 0x1DC) + tr);
        for (i = 0; i < cnt; i++, r += 0x20) {
            z = r + 1;
            if (note < z[5] || z[6] < note) {
                continue;
            }
            min = 0x100;
            cand = 0;
            found = 0;
            slot = -1;
            for (j = 0, q = D_800C6DDD; j < 16; j++, q += 0x60) {
                if (q[0x4E] != 0) {
                    v = q[0];
                    if (v < (u8)min) {
                        cand = j + 1;
                        min = v;
                    } else if (v == (u8)min && (&g_SeqVoiceKeyed)[j] == 0 && D_800762B0[j] == 2) {
                        cand = j + 1;
                    }
                } else {
                    found = 1;
                    slot = j;
                    break;
                }
            }
            if (!found) {
                if (r[0] >= min) {
                    slot = cand - 1;
                } else {
                    u8 *s1 = D_800762B0;
                    u8 *s2 = &g_SeqVoiceKeyed;
                    s32 res;
                    for (k = 0; k < 16; k++, s1++, s2++) {
                        if (*s1 == 2 && *s2 == 0) {
                            res = k;
                            goto found_k;
                        }
                    }
                    res = -1;
                found_k:
                    slot = res;
                }
            }
            if (slot < 0) {
                continue;
            }
            c = (u8 *)&g_SeqVoice[slot];
            d = c + 0x10;
            c[0xD] = r[0];
            if (c[0x5C] != 0 && *(s16 *)(c + 8) == prog && c[0xC] == i
                && *(s16 *)(*(u8 **)(c + 0x50) + 0x1EC) == *(s16 *)(a + 0x1EC)) {
                *(s32 *)(c + 0x14) = 0x13;
            } else {
                {
                    s32 t = *(s16 *)(z + 0x15) - 1;
                    u8 *w = *(u8 **)(a + 0x1DC) + (t >> 1) * 16;
                    s32 ad;
                    if (t & 1) {
                        ad = *(s16 *)(w + 0xE) * 8;
                    } else {
                        ad = *(s16 *)(w + 0xC) * 8;
                    }
                    *(s32 *)(d + 0x1C) = ad;
                }
                *(u16 *)(d + 0x3A) = *(u16 *)(z + 0xF);
                *(u16 *)(d + 0x3C) = *(u16 *)(z + 0x11);
                *(s32 *)(d + 4) = 0x6009F;
            }
            vol = vel * e[1];
            vol >>= 7;
            vol *= z[1];
            vol >>= 7;
            vol = D_8006ACD8[vol];
            vol *= *(s16 *)(a + 0x1F2);
            vol >>= 7;
            if (g_SoundStereo != 0) {
                s32 t;
                n0 = e[4];
                t = n0 + z[2] - 0x40;
                pan = t;
                if (t < 0) {
                    pan = 0;
                } else if (t >= 0x80) {
                    pan = 0x7F;
                }
                if (pan > 0) {
                    l = (s16)((vol * D_8006AF08[0x80 - pan]) >> 14);
                } else {
                    l = (s16)vol;
                }
                rr = (s16)((vol * D_8006AF08[pan]) >> 14);
            } else {
                rr = (vol * 0x2D41) >> 14;
                l = rr;
            }
            *(s16 *)(d + 8) = (u32)((s16)l * *(s16 *)(a + 0x10)) >> 14;
            *(s16 *)(d + 0xA) = (u32)((s16)rr * *(s16 *)(a + 0x10)) >> 14;
            tr = *(s16 *)(e + 2);
            pt = note << 8;
            if (tr > 0x40) {
                pt += (tr - 0x40) * z[0xC] * 4;
            } else if (tr < 0x40) {
                pt -= (0x40 - tr) * z[0xB] * 4;
            }
            *(s32 *)(c + 0x54) = (z[3] << 8) - z[4];
            {
                s32 t = *(s32 *)(c + 0x54) - 0x3C00;
                pt -= t;
            }
            c[0x58] = z[0xB];
            c[0x59] = z[0xC];
            pv = pt;
            if (pv > 0x5300) {
                *(s16 *)(d + 0x14) = 0x3FFF;
            } else {
                m = D_8006AB30[pv >> 8];
                m *= D_8006ABD8[(pv & 0xFF) >> 1];
                *(s16 *)(d + 0x14) = m >> 15;
            }
            c[0x5D] = 1;
            g_KeyOffBits &= ~((S32R *)d)->v;
            g_KeyOnBits |= ((S32R *)d)->v;
            (&g_SeqVoiceKeyed)[slot] = 1;
            if (z[0] & 4) {
                g_ReverbOffBits &= ~((S32R *)d)->v;
                g_ReverbOnBits |= ((S32R *)d)->v;
            } else {
                g_ReverbOnBits &= ~((S32R *)d)->v;
                g_ReverbOffBits |= ((S32R *)d)->v;
            }
            stop_i(slot);
            (e + slot)[9] = 1;
            c = (u8 *)&g_SeqVoice[slot];
            *(s16 *)(c + 4) = note;
            *(s16 *)(c + 8) = prog;
            c[0xC] = i;
            c[0x5C] = 1;
            *(s16 *)(c + 0) = l;
            *(s16 *)(c + 2) = rr;
            *(s16 *)(c + 6) = n;
            *(u8 **)(c + 0x50) = a;
            c[0x5B] = 1;
            if (a[0x1F4] != 0) {
                c[0x5A] = 2;
            } else {
                c[0x5A] = 1;
            }
        }
    } else {
        off_i(a, note, n);
    }
}

void SeqNoteOff(u8 *p, s32 k0) {
    s16 k = k0;
    s32 i = 0;
    u8 *row = p + k * 0x1A;
    u8 *s = *(u8 **)p;
    s32 off = 0;
    u8 c;
    *(u8 **)p = s + 1;
    c = *s;
loop:
    if ((row + i)[0x23] != 0 && *(s16 *)(D_800C6DD4 + off) == c) {
        s16 n = i;
        Ch60 *q = &g_SeqVoice[n];
        if (q->on != 0) {
            u8 *r = (u8 *)&q->list[q->idx]; r += n; r[0x23] = 0;
            q->on = 0;
        }
        g_KeyOnBits &= ~g_VoiceBit[i];
        g_KeyOffBits |= g_VoiceBit[i];
        D_800762B0[i] = 2;
        (&g_SeqVoiceKeyed)[i] = 0;
    }
    i++;
    off += 0x60;
    if (i < 0x10) goto loop;
}

void SeqPolyPressure(u8 *a) {
    *(s32 *)a = (*(s32 *)a + 0x2);
}

extern s32 D_8006B008[];
extern u8 D_800795B8[];

void SeqDataEntry(u8 *a, s16 n, s16 c) {
    u8 *p = a + (n * 0x1A + 0x1A);
    s32 *r;
    s32 m;
    u16 v;
    if ((*(u16 *)(p + 6) & 0x300) != 0x300) {
        a[0x1F9] = 1;
        return;
    }
    switch (p[8]) {
    case 0x10:
        if (*(s32 *)D_80079A68 != D_8006B008[c]) {
            m = D_8006B008[c];
            r = &D_800A4ECC;
            *(s32 *)(D_800795B8 + 0x4B0) = m;
            *r = 1;
            D_800A4ED0 = m;
            SpuSetReverbModeParam(r);
        }
        break;
    case 0x11:
        r = &D_800A4ECC;
        *r = 6;
        v = *(u16 *)(D_8006ADD8 + c * 2);
        D_800A4ED4 = v;
        D_800A4ED6 = v;
        SpuSetReverbModeParam(r);
        break;
    case 0x12: case 0x13: case 0x14: case 0x15: case 0x16: case 0x17:
        break;
    case 0x18:
        a[0x1F5] = c;
        a[0x1F6] = 1;
        *(s32 *)(a + 0xC) = *(s32 *)a;
        break;
    case 0x19:
        break;
    case 0x1A:
        if (*(u16 *)&g_NextBgm != 0) {
            a[0x1F9] = 1;
            g_StartBgm = *(u16 *)&g_NextBgm;
            *(u16 *)&g_NextBgm = 0;
        }
        break;
    }
    p[7] &= 0xFC;
}

void SeqNrpnMsb(u8 *p, s32 ch0, s32 cmd0) {
    s16 cmd = cmd0;
    s16 ch = ch0;
    u8 v;
    switch (cmd) {
    case 0x14: {
        u8 *q = p + ch * 26;
        q[0x1F] = cmd;
        q[0x22] = 0x18;
        q[0x21] |= 3;
        break;
    }
    case 0x1E:
        if (p[0x1F6] == 0) {
            p[0x1F9] = 1;
            break;
        }
        v = p[0x1F5];
        if (v != 0x7F) {
            p[0x1F5] = v + 0xFF;
            if (v == 0) {
                break;
            }
        }
        p[0x1F7] = ch | 0xB0;
        *(s32 *)p = *(s32 *)(p + 0xC);
        break;
    case 0x28: {
        u8 *q = p + ch * 26;
        q[0x1F] = cmd;
        q[0x22] = 0x1A;
        q[0x21] |= 3;
        break;
    }
    default: {
        u8 *q = p + ch * 26;
        q[0x1F] = cmd;
        q[0x21] |= 1;
        break;
    }
    }
}

void func_80039F14(s32 a, s32 b, s32 c) {
    *(s8 *)((u8 *)(a + ((((((s16)(b) << 1) + (s16)(b)) << 2) + (s16)(b)) << 1)) + 0x20) = c;
    *(s8 *)((u8 *)(a + ((((((s16)(b) << 1) + (s16)(b)) << 2) + (s16)(b)) << 1)) + 0x22) = (c + 0x1);
    *(s8 *)((u8 *)(a + ((((((s16)(b) << 1) + (s16)(b)) << 2) + (s16)(b)) << 1)) + 0x21) = (*(u8 *)((u8 *)(a + ((((((s16)(b) << 1) + (s16)(b)) << 2) + (s16)(b)) << 1)) + 0x21) | 0x2);
}

void SeqControlChange(u8 **p, s16 n) {
    u8 *q;
    s16 op;
    u8 v;
    q = *p;
    *p = q + 1;
    op = q[0];
    *p = q + 2;
    v = q[1];
    switch (op) {
    case 6:
        SeqDataEntry((u8 *)p, n, v);
        break;
    case 7:
        { u8 *e = (u8 *)p + n * 0x1A; e[0x1B] = v; }
        break;
    case 8:
        break;
    case 10:
        { u8 *e = (u8 *)p + n * 0x1A; e[0x1E] = v; }
        break;
    case 0x62:
        { u8 *e = (u8 *)p + n * 0x1A; e[0x20] = v; e[0x22] = v + 1; e[0x21] |= 2; }
        break;
    case 0x63:
        SeqNrpnMsb((u8 *)p, n, v);
        break;
    }
}

void SeqProgramChange(u8 **p, s16 n) {
    u8 *q = *p;
    *p = q + 1;
    p = (u8 **)((u8 *)p + n * 0x1A);
    ((u8 *)p)[0x1A] = *q;
}

void SeqChannelPressure(u8 *a) {
    *(s32 *)a = (*(s32 *)a + 0x1);
}

extern u16 D_8006AB30[];
extern u16 D_8006ABD8[];

void SeqPitchBend(u8 **p, s32 n0) {
    s16 n = n0;
    u8 *e = (u8 *)p + (n * 0x1A + 0x1A);
    u8 *f = e + 9;
    u8 *q;
    u8 *c;
    u8 *d;
    s32 i;
    u32 v;
    s16 pan;
    s32 t;
    u32 m;

    q = *p;
    *p = q + 1;
    *(s16 *)(e + 2) = *q & 0x7F;
    for (i = 0; i < 16; i++) {
        if (*f++ != 0) {
            c = (u8 *)&g_SeqVoice[i];
            pan = *(s16 *)(e + 2);
            v = *(s16 *)(c + 4) << 8;
            if (pan > 0x40) {
                v += (pan - 0x40) * c[0x59] * 4;
            } else if (pan < 0x40) {
                v -= (0x40 - pan) * c[0x58] * 4;
            }
            t = *(s32 *)(c + 0x54) - 0x3C00;
            v -= t;
            d = c + 0x10;
            if (v > 0x5300) {
                *(s16 *)(c + 0x24) = 0x3FFF;
            } else {
                m = D_8006AB30[v >> 8];
                m *= D_8006ABD8[(v & 0xFF) >> 1];
                *(s16 *)(c + 0x24) = m >> 15;
            }
            *(s32 *)(d + 4) |= 0x10;
            c[0x5D] = 1;
        }
    }
}

void SeqMetaEvent(u8 *a) {
    s32 len;
    s32 t;

    switch (*(*(u8 **)a)++) {
    case 0x20:
        *(u8 **)a += 2;
        return;
    case 0x2F:
        (*(u8 **)a)++;
        break;
    case 0x51:
        len = *(*(u8 **)a)++;
        if (len == 3) {
            len = *(*(u8 **)a)++ << 16;
            len += *(*(u8 **)a)++ << 8;
            len += *(*(u8 **)a)++;
            t = 60000000 / len;
            *(s16 *)(a + 0x1E4) = t;
            *(s32 *)(a + 0x1D0) = t * *(s16 *)(a + 0x1E6);
            return;
        }
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0x54:
    case 0x58:
    case 0x59:
    case 0x7F:
        len = *(*(u8 **)a)++;
        *(u8 **)a += len;
        return;
    case 0:
        len = *(*(u8 **)a)++;
        if (len == 2) {
            *(u8 **)a += 2;
            return;
        }
        break;
    }
    a[0x1F9] = 1;
}

u32 SwapBytes32(u32 x) {
    return ((x << 24) + (((x >> 8) & 0xFF) << 16) + ((x & 0xFF0000) >> 8)) | (x >> 24);
}

s16 SwapBytes16(u32 x) {
    u8 hi = x >> 8;
    u8 lo = x;
    return (lo << 8) + hi;
}

void SpuInit(void) {
    _SpuInit(0);
}
