#include "common.h"
#include "psyq.h"
#include "work.h"

typedef struct {
    /* 0x00 */ u32 *ot;
    /* 0x04 */ u8 pad4[8];
    /* 0x0C */ u32 *otLast;
    /* 0x10 */ u8 pad10[4];
} OtInfo; /* size 0x14 */

extern u8 D_800BA118[];
extern s32 g_OtDepthLimit;
extern s32 D_800A2B7C;
extern s32 g_FrameCount;
extern s16 D_800C7C74;
extern u8 g_PrimBuf[2][0x13880];
extern u8 *g_PrimNext;
extern u8 D_800A4F48[2][0x640];
extern OtInfo D_800A651C[2];
extern u32 g_WorldOtTable[2][0x1000];
extern OtInfo D_800AE7BC[2];
extern u32 D_800BA0D8[2][4];

extern void InitGraph(void);
extern void InitPad(void);
extern void InitSound(void);
extern void InitCdFiles(void);
extern void ResetSystems(void);
extern void ResetFrameLoop(void);
extern void ForgetStageImage(void);
extern void UpdatePads(void);
extern void CheckPauseStart(void);
extern void ModeDispatch(void);
extern void DrawDebugText(void);
extern void func_8001C00C(void);
extern void func_800D25FC(void);
extern void FlushImageQueue(void);
extern void func_8003500C(void);
extern void func_8002D034(void);
extern void LoadQueueStep(void);
extern void FrameEndNop(void);

extern s32 g_DemoPos;
extern u16 g_DemoHeld;
extern u16 g_DemoPressed;
extern s32 g_DemoPadMode;
extern s32 D_800AE810[];

extern int DrawSyncCallback(void (*func)(void));
extern void VSyncHandler(void);
void DrawSyncHandler(void);
void SetFrameCallbacks(void);


/*
 * Boot: hardware/CD/memory card init, then the frame loop. Each frame flips
 * the double buffers, clears the ordering tables, runs the update on the
 * scratchpad stack (func_800D25FC lives in a MAIN.CD overlay), then waits
 * for vsync and draws. w->exitLoop drops out to the outer loop, which
 * re-runs the per-mode setup.
 */
int main(void)
{
    register u8 *unused_s0 = D_800BA118;
    register Work *w = &D_800AF630;
    s32 unused[6];

    SetVideoMode(0);
    g_OtDepthLimit = 0x3E0;
    InitGraph();
    MemCardInit(0);
    MemCardStart();
    InitPad();
    D_800A2B7C = CdInit();
    InitSound();
    InitCdFiles();

    while (1) {
        ResetSystems();
        ResetFrameLoop();
        ForgetStageImage();
        SetFrameCallbacks();

        while (!w->exitLoop) {
            g_FrameCount++;
            g_FrameCount = g_FrameCount ? g_FrameCount : 1;
            D_800C7C74 = !D_800C7C74;
            w->frame = D_800C7C74;

            g_PrimNext = g_PrimBuf[w->frame];
            w->pool[w->frame].buf = D_800A4F48[w->frame];
            w->pool[w->frame].size = 0x640;
            w->pool[w->frame].used = 0;

            UpdatePads();
            CheckPauseStart();

            if (!w->pauseMenu) {
                w->tick++;
                w->tickSum += w->tick;
                D_800A651C[w->frame].ot = g_WorldOtTable[w->frame];
                D_800A651C[w->frame].otLast = &g_WorldOtTable[w->frame][0xFFF];
                ClearOTagR(D_800A651C[w->frame].ot, 0x1000);
                D_800AE7BC[w->frame].ot = D_800BA0D8[w->frame];
                D_800AE7BC[w->frame].otLast = &D_800BA0D8[w->frame][3];
                ClearOTagR(D_800AE7BC[w->frame].ot, 4);
                ModeDispatch();
                SetSpadStack();
                DrawDebugText();
                ResetSpadStack();
                SetSpadStack();
                func_8001C00C();
                ResetSpadStack();
            } else {
                D_800AE7BC[w->frame].ot = D_800BA0D8[w->frame];
                D_800AE7BC[w->frame].otLast = &D_800BA0D8[w->frame][3];
                ClearOTagR(D_800AE7BC[w->frame].ot, 4);
                SetSpadStack();
                func_800D25FC();
                ResetSpadStack();
            }

            FlushImageQueue();
            DrawSync(0);
            VSync(w->vsyncMode);

            w->dispIdx = w->drawIdx;
            w->drawIdx++;
            if (w->drawIdx >= 2) {
                w->drawIdx = 0;
            }
            PutDispEnv(&w->disp[w->dispIdx]);
            PutDrawEnv(&w->draw[w->drawIdx]);
            CatPrim(D_800A651C[w->frame].ot + 0xFFC, &D_800A651C[w->frame].ot[g_OtDepthLimit]);
            DrawOTag(D_800A651C[w->frame].ot + 0xFFF);
            DrawOTag(D_800AE7BC[w->frame].ot + 3);

            func_8003500C();
            func_8002D034();
            LoadQueueStep();
            FrameEndNop();
        }
        VSyncCallback(0);
    }
}

extern void NextMode(void);
extern void SetMode(u16 n);
extern void SetGameState(u16 n);
extern void func_800CEDFC(void);

extern u8 g_FileLocDebug[];
extern s32 g_LoadAddr;
extern s32 g_DemoEndRequest;
extern void func_8001C044(void);
extern void func_80015310(void);
extern void SetOtDepthLimit(s32 n);
extern void DrawNowLoading(s32 n);
extern s32 LoadFileStep(u8 *p, s32 a, s32 b, s32 c);

extern void func_8002D4C8(s32 a, s32 b);

extern void (*g_ModeTable[])(void);
extern u8 g_FileLocLicence[];
extern s32 g_DemoIndex;

extern s32 g_DemoStream;

extern u8 g_FileLocTrialEnd[];

extern s16 D_801150D4;
extern void func_80029690(void);
extern void StopPadRumble(void);
extern void ClearRumbleScript(void);
extern void func_80029274(void);
extern void func_8002941C(void);
extern void func_8002CDD8(void);
extern void func_800CEE74(void);
extern u16 GetPadHeldDir(s32 port);
extern u16 GetPadPressedDir(u8 port);
extern void func_800CEEC8();
extern void func_80029514(s32 a);
extern s32 D_800629C8;
extern u8 D_80078E78[];
extern void ResetGameProgress(void);
extern u8 g_FileLocField[];
extern u8 g_FileLocTitle[];
extern s32 D_800C7C60;
extern u8 *D_800C7C64;
extern u8 D_800A2E20[];
extern s16 D_800B99DA;

/* VSync callback: run the sound driver's per-vblank tick */
void VSyncHandler(void) {
    func_8002CDD8();
}

/* DrawSync callback: records the VSync counter for the current frame */
void DrawSyncHandler(void)
{
    register Work *w = &D_800AF630;

    D_800AE810[w->frame] = VSync(1);
}

/* Take size bytes (rounded up to 4) from this frame's primitive packet buffer */
u8 *AllocPrim(s32 size) {
    register Work *w = &D_800AF630;
    u8 *prim;
    s32 words;
    words = (size + 3) / 4;
    prim = g_PrimNext;
    g_PrimNext += words << 2;
    return prim;
}

/* Install the frame-timing callbacks */
void SetFrameCallbacks(void)
{
    DrawSyncCallback(DrawSyncHandler);
    VSyncCallback(VSyncHandler);
}

/* Set the farthest ordering-table entry drawn (main links OT entry 0xFFC straight to it) */
void SetOtDepthLimit(s32 depth) {
    g_OtDepthLimit = depth;
}

/* Return the ordering-table depth limit set by SetOtDepthLimit */
s32 GetOtDepthLimit(void) {
    return g_OtDepthLimit;
}

/* Call the handler for the current game mode from the mode table */
void ModeDispatch(void) {
    register Work *w = &D_800AF630;
    register void (*handler)(void);
    handler = PS1_FN(g_ModeTable[w->mode]);
    handler();
}

/* Mode 0: reset the game state at boot (records, CD files, demo index, OT depth), then mode 1 */
void ModeReset(void) {
    register Work *w = &D_800AF630;
    w->mapLive = 0;
    w->unkA3E1 = 1;
    w->demoActive = 0;
    func_8001C044();
    func_80015310();
    func_80029690();
    D_801150D4 = 0;
    g_DemoIndex = 0;
    StopPadRumble();
    ClearRumbleScript();
    func_80029274();
    func_8002941C();
    SetOtDepthLimit(0x3E0);
    SetGameState(0);
    NextMode();
}

/* Mode 1: load the licence screen overlay (MAIN.CD entry 1, ovl38), then mode 2 */
void ModeLicenceLoad(void) {
    s32 done;
    done = LoadFileStep(g_FileLocLicence, g_LoadAddr, 0, 0);
    if (done != 0) {
        SetOtDepthLimit(0x3E0);
        NextMode();
    }
}

/* Mode 2: run the licence screen each frame; when it sets done, free records and go to mode 3 */
void ModeLicenceRun(void) {
    register Work *w = &D_800AF630;
    func_800CEDFC();
    if (w->done != 0) {
        func_8001C044();
        func_80015310();
        SetMode(3);
    }
}

/* Mode 3: after the licence screen, reset the 2D OT depth and go to the title load (mode 5) */
void ModeLicenceExit(void) {
    SetOtDepthLimit(0x3E0);
    SetMode(5);
}

/* Mode 4: unused slot that only advances to mode 5 */
void ModeSkip(void) {
    register Work *w = &D_800AF630;
    NextMode();
}

/* Return to the title: SetMode(5), which reloads the title overlay */
void ModeGoTitle(void) {
    SetMode(5);
}

/* Go to the trial version's end screen: SetMode(13), which loads MAIN.CD entry 8 (ovl3b) */
void ModeGoTrialEnd(void) {
    SetMode(0xD);
}

/* Switch to the empty mode 12 (nothing runs); no callers found */
void ModeGoIdle(void) {
    SetMode(0xC);
}

/* Send sound command 2 and set Work.exitLoop so main() leaves its frame loop; no callers found */
void QuitMainLoop(void) {
    register Work *w = &D_800AF630;
    func_8002D4C8(2, 0);
    w->exitLoop = 1;
}

/* Mode 5: load the title overlay (MAIN.CD entry 3, ovl39) with sound bank 0x57, reset progress and sound, then mode 6 */
void ModeTitleLoad(void) {
    D_800C7C60 = 0x57;
    D_800C7C64 = D_800A2E20;
    if (LoadFileStep(g_FileLocTitle, g_LoadAddr, 0, (s32)&D_800C7C60) != 0) {
        func_8002D4C8(2, 0);
        SetOtDepthLimit(0x3E0);
        ResetGameProgress();
        ApplySoundOptions();
        D_800B99DA = 0;
        NextMode();
    }
}

/* Mode 6: run the title; on its choice start a new game, Continue (field state 11) or a demo */
void ModeTitleRun(void) {
    register Work *w = &D_800AF630;
    u8 *p = D_80078E78;
    func_800CEEC8();
    if (w->done != 0) {
        SetGameState(0);
        func_8001C044();
        func_80015310();
        if (w->timer == 4) {
            w->demoActive = 1;
            SetMode(0xF);
        } else if (w->timer < 2) {
            w->mapId = 0x3005;
            w->mapGroup = 0x3000;
            func_80029514(D_800629C8);
            if (w->timer == 1) {
                SetMode(0xA);
                SetGameState(0xB);
            } else {
                SetMode(0xA);
            }
        }
    }
}

/* Modes 10 and 15: load the field overlay (MAIN.CD entry 10, ovl36), then the next mode */
void ModeFieldLoad(void) {
    s32 pad0;
    DrawNowLoading(0);
    if (LoadFileStep(g_FileLocField, g_LoadAddr, 0, 0) != 0) {
        SetOtDepthLimit(0x3E0);
        NextMode();
        func_80015310();
    }
}

/* Mode 7: load the developer debug menu overlay (MAIN.CD entry 11, ovl37), then mode 8 */
void ModeDebugLoad(void) {
    s32 pad0;
    s32 pad1;
    DrawNowLoading(0);
    if (LoadFileStep(g_FileLocDebug, g_LoadAddr, 0, 0) != 0) {
        SetOtDepthLimit(0x3E0);
        NextMode();
        func_80015310();
    }
}

/* Mode 8: run the debug menu; when it sets done, load the field (mode 10) */
void ModeDebugRun(void) {
    register Work *w = &D_800AF630;
    func_800CEE74();
    if (w->done != 0) {
        SetMode(0xA);
    }
}

/* Mode 9: advance to mode 10 (field load) with the game state reset to 0 */
void ModeNextClearState(void) {
    NextMode();
    SetGameState(0);
}

/* Mode 11: run the field overlay each frame (normal play); clears the demo flag */
void ModeFieldRun(void) {
    register Work *w = &D_800AF630;
    w->demoActive = 0;
    func_800CEDFC();
}

/* Mode 12: does nothing (where the trial version's end screen leaves the game) */
void ModeIdle(void) {
}

/* Mode 13: load the trial version's end screen (MAIN.CD entry 8, ovl3b), then mode 14 */
void ModeTrialEndLoad(void) {
    if (LoadFileStep(g_FileLocTrialEnd, g_LoadAddr, 0, 0) != 0) {
        NextMode();
    }
}

/* Mode 14: run the trial end screen each frame (it sets mode 12 itself when done) */
void ModeTrialEndRun(void) {
    func_800CEDFC();
}

/* Return the index of the next attract demo (0-4); no callers found */
s32 GetDemoIndex(void) {
    return g_DemoIndex;
}

extern u16 g_DemoMaps[];
extern u16 g_DemoLengths[];
extern s32 g_DemoLength;
extern u16 D_800B99E8;
extern u8 D_800D3A68[];
extern void func_800295D4(void);
extern void func_80029664(void);
extern s32 TestPadsAny(u8 which, s32 mask);
extern void func_800D1724(u8 *p);
extern void srand(u32 seed);
void DemoClearEndRequest(void);
void DemoReset(void);
void NextStep(void);
void DemoReadPad(void);
void DemoRequestEnd(void);
typedef struct { u8 pad[0x16]; u8 unk16; } Obj6A8;
extern Obj6A8 D_800AE6A8;

/* Mode 16: set up and run an attract demo (recorded pad stream) until it times out or is skipped */
void ModeDemoRun(void) {
    register Work *w = &D_800AF630;
    Obj6A8 *mapState = &D_800AE6A8;
    switch (w->step) {
    case 0:
        D_800B99E8 = 0;
        func_800295D4();
        if (g_DemoIndex >= 5) {
            g_DemoIndex = 0;
        }
        w->mapId = g_DemoMaps[g_DemoIndex * 2];
        w->mapGroup = g_DemoMaps[g_DemoIndex * 2] & 0xF000;
        mapState->unk16 = g_DemoMaps[g_DemoIndex * 2 + 1];
        g_DemoLength = g_DemoLengths[g_DemoIndex];
        if (g_DemoIndex == 0) {
            func_80029664();
        }
        DemoClearEndRequest();
        DemoReset();
        srand(1);
        w->demoActive = 1;
        w->mapLive = 0;
        g_DemoIndex++;
        func_8002D4C8(0x28, 0);
        SetGameState(0);
        NextStep();
        break;
    case 1:
        if (w->mapLive != 0) {
            DemoReadPad();
        }
        func_800CEDFC();
        if (g_DemoLength < (s16)++D_800B99E8 || ((s16)TestPadsAny(0, 0x840) != 0 && w->mapLive != 0)) {
            DemoRequestEnd();
            func_800D1724(D_800D3A68);
            NextStep();
        }
        break;
    case 2:
        func_800CEDFC();
        break;
    }
}

/* Mode 17: after a demo, clear the demo flag, play sound 0x29 and reload the title (mode 5) */
void ModeDemoEnd(void) {
    register Work *w = &D_800AF630;
    w->demoActive = 0;
    func_8002D4C8(0x29, 0);
    SetMode(5);
}

/* Send the saved sound options (two volume levels and a mode flag) to the sound driver */
extern s32 func_80028FBC();
extern s32 func_80029000();
extern s32 func_80028D9C();

void ApplySoundOptions(void) {
    func_8002D4C8(0x21, (u16)func_80028FBC());
    func_8002D4C8(0x22, (u16)func_80029000());
    if (func_80028D9C() == 0) {
        func_8002D4C8(0xC, 0);
    } else {
        func_8002D4C8(0xB, 0);
    }
}

/* Advance Work.mode by one and clear the mode's step, timer and scratch halfwords */
void NextMode(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3AE))++;
    *(u16 *)(w + 0xA3B4) = 0;
    *(u16 *)(w + 0xA3BA) = 0;
    *(u16 *)(w + 0xA3B8) = 0;
    *(u16 *)(w + 0xA3BE) = 0;
    *(u16 *)(w + 0xA3B0) = 0;
    *(u16 *)(w + 0xA3B6) = 0;
    *(u16 *)(w + 0xA3BC) = 0;
}

/* Set Work.mode and clear the mode's step, timer and scratch halfwords */
void SetMode(u16 mode) {
    register Work *w = &D_800AF630;
    w->mode = mode;
    w->step = 0;
    w->subStep = 0;
    w->timer = 0;
    w->stepTimer = 0;
    w->modeVar = 0;
    w->done = 0;
    w->subStepVar = 0;
}

/* Advance Work.step and clear the step's done flag, sub-step and step timers */
void NextStep(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3B4))++;
    *(u16 *)(w + 0xA3BA) = 0;
    *(u16 *)(w + 0xA3BE) = 0;
    *(u16 *)(w + 0xA3B6) = 0;
    *(u16 *)(w + 0xA3BC) = 0;
}

/* Set Work.step and clear the step's done flag, sub-step and step timers */
void SetStep(u16 step) {
    register Work *w = &D_800AF630;
    w->step = step;
    w->subStep = 0;
    w->stepTimer = 0;
    w->done = 0;
    w->subStepVar = 0;
}

/* Advance the mode's sub-step (Work+0xA3BA) and clear its scratch halfword */
void NextSubStep(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3BA))++;
    *(u16 *)(w + 0xA3BC) = 0;
}

/* Set the mode's sub-step (Work+0xA3BA) and clear its scratch halfword */
void SetSubStep(u16 subStep) {
    register Work *w = &D_800AF630;
    w->subStep = subStep;
    w->subStepVar = 0;
}

/* Advance the game state (Work+0xA3C0) and clear its step, sub-step and scratch halfwords */
void NextGameState(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3C0))++;
    *(u16 *)(w + 0xA3C6) = 0;
    *(u16 *)(w + 0xA3CC) = 0;
    *(u16 *)(w + 0xA3CA) = 0;
    *(u16 *)(w + 0xA3D0) = 0;
    *(u16 *)(w + 0xA3C2) = 0;
    *(u16 *)(w + 0xA3C8) = 0;
    *(u16 *)(w + 0xA3CE) = 0;
}

/* Step the game state (Work+0xA3C0) back by one and clear its step and scratch halfwords */
void PrevGameState(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3C0))--;
    *(u16 *)(w + 0xA3C6) = 0;
    *(u16 *)(w + 0xA3CC) = 0;
    *(u16 *)(w + 0xA3CA) = 0;
    *(u16 *)(w + 0xA3D0) = 0;
    *(u16 *)(w + 0xA3C2) = 0;
    *(u16 *)(w + 0xA3C8) = 0;
    *(u16 *)(w + 0xA3CE) = 0;
}

/* Set the game state (Work+0xA3C0) read by the field overlay and clear its step and scratch */
void SetGameState(u16 state) {
    register Work *w = &D_800AF630;
    w->state = state;
    w->stateStep = 0;
    w->stateSubStep = 0;
    w->unkA3CA = 0;
    w->stateStepTimer = 0;
    w->stateFlag = 0;
    w->stateStepVar = 0;
    w->stateSubStepVar = 0;
}

/* Advance the game state's step (Work+0xA3C6) and clear its sub-step and step scratch */
void NextGameStateStep(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3C6))++;
    *(u16 *)(w + 0xA3CC) = 0;
    *(u16 *)(w + 0xA3D0) = 0;
    *(u16 *)(w + 0xA3C8) = 0;
    *(u16 *)(w + 0xA3CE) = 0;
}

/* Set the game state's step (Work+0xA3C6) and clear its sub-step and step scratch */
void SetGameStateStep(u16 step) {
    register Work *w = &D_800AF630;
    w->stateStep = step;
    w->stateSubStep = 0;
    w->stateStepTimer = 0;
    w->stateStepVar = 0;
    w->stateSubStepVar = 0;
}

/* Advance the game state's sub-step (Work+0xA3CC) and clear its scratch halfword */
void NextGameStateSubStep(void) {
    register u8 *w = (u8 *)&D_800AF630;
    (*(u16 *)(w + 0xA3CC))++;
    *(u16 *)(w + 0xA3CE) = 0;
}

/* Set the game state's sub-step (Work+0xA3CC) and clear its scratch halfword */
void SetGameStateSubStep(u16 subStep) {
    register u8 *w = (u8 *)&D_800AF630;
    *(u16 *)(w + 0xA3CC) = subStep;
    *(u16 *)(w + 0xA3CE) = 0;
}

/* Ask the field to end the running attract demo */
void DemoRequestEnd(void) {
    g_DemoEndRequest = 1;
}

/* Clear the demo end request */
void DemoClearEndRequest(void) {
    g_DemoEndRequest = 0;
}

/* Return nonzero when the attract demo has been asked to end */
s32 DemoEndRequested(void) {
    return g_DemoEndRequest;
}

/* Reset the demo stream position and pad words; in record mode clear the demo flag */
void DemoReset(void)
{
    register Work *w = &D_800AF630;
    s32 unused; /* pads the frame to 0x10 like the original */

    g_DemoPos = 0;
    if (g_DemoPadMode == 0) {
        w->demoActive = 0;
    }
    g_DemoHeld = 0;
    g_DemoPressed = 0;
}

/* Set the pointer to the stage's recorded demo pad stream */
void SetDemoStream(s32 stream) {
    g_DemoStream = stream;
}

/* Per demo frame: record the live pad, or read this frame's held/pressed words from the stream */
void DemoReadPad(void) {
    u16 word;
    switch (g_DemoPadMode) {
    case 0:
        word = GetPadHeldDir(0);
        ((u16 *)0x80700000)[g_DemoPos] = word;
        g_DemoPos++;
        word = GetPadPressedDir(0);
        ((u16 *)0x80700000)[g_DemoPos] = word;
        g_DemoPos++;
        break;
    case 1:
        if (g_DemoStream != 0) {
            g_DemoHeld = ((u16 *)g_DemoStream)[g_DemoPos++];
            g_DemoPressed = ((u16 *)g_DemoStream)[g_DemoPos++];
        } else {
            g_DemoHeld = 0;
            g_DemoPressed = 0;
        }
        break;
    case 2:
        g_DemoHeld = ((u16 *)0x80700000)[g_DemoPos++];
        g_DemoPressed = ((u16 *)0x80700000)[g_DemoPos++];
        break;
    }
}

/* Return this demo frame's held and pressed pad words */
void GetDemoPad(u16 *held, u16 *pressed) {
    *held = g_DemoHeld;
    *pressed = g_DemoPressed;
}

typedef struct { u32 tag; u32 tpage; u8 r0, g0, b0, code; s16 x0, y0; u8 u0, v0; u16 clut; s16 w, h; } Spr18;

/* Draw the two 96x24 sprites of the demo corner logo into the OT */
void DrawDemoLogo(void) {
    register Work *w = &D_800AF630;
    Spr18 *s = (Spr18 *)g_PrimNext;
    u32 *ot = g_WorldOtTable[w->frame];
    setlen(s, 5);
    *(u32 *)((u8 *)s + 4) = 0xE1000018;
    s->code = 0x66;
    s->clut = 0x77D6;
    s->r0 = 0x80;
    s->g0 = 0x80;
    s->b0 = 0x80;
    s->x0 = 0x30;
    s->y0 = 0x2E;
    s->u0 = 0x40;
    s->v0 = 0xE0;
    s->w = 0x60;
    s->h = 0x18;
    addPrim(ot + 1, s);
    s++;
    setlen(s, 5);
    *(u32 *)((u8 *)s + 4) = 0xE1000018;
    s->code = 0x66;
    s->clut = 0x77D6;
    s->r0 = 0x80;
    s->g0 = 0x80;
    s->b0 = 0x80;
    s->x0 = 0x30;
    s->y0 = 0x46;
    s->u0 = 0xA0;
    s->v0 = 0xE0;
    s->w = 0x60;
    s->h = 0x18;
    addPrim(ot + 1, s);
    s++;
    g_PrimNext = (u8 *)s;
}
