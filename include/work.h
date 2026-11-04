/*
 * The game's main work/state block at 0x800AF630 (D_800AF630).
 * Almost every function keeps a `register Work *w` pointing at it.
 * Only fields seen so far are named; the rest is padding.
 */
#ifndef WORK_H
#define WORK_H

#include "psyq.h"

/* Per-frame primitive scratch buffer (0x640 bytes each) */
typedef struct {
    /* 0x0 */ s32 size;
    /* 0x4 */ s32 used;
    /* 0x8 */ u8 *buf;
} PrimPool; /* size 0xC */

typedef struct {
    /* 0x0000 */ PrimPool pool[2];
    /* 0x0018 */ MATRIX wsm;         /* the world-to-screen matrix, copied each frame once the view is set (stage func_80129CF8) */
    /* 0x0038 */ DRAWENV draw[2];
    /* 0x00F0 */ u8 padF0[0x5C];
    /* 0x014C */ DISPENV disp[2];
    /* 0x0174 */ u8 pad174[0x14];
    /* 0x0188 */ u16 dispIdx;      /* DISPENV shown this frame */
    /* 0x018A */ u16 drawIdx;      /* DRAWENV drawn into next (0/1) */
    /* 0x018C */ u8 pad18C[0xA3A8 - 0x18C];
    /* 0xA3A8 */ u16 tick;          /* incremented every rendered frame (stage code blinks on its low bits) */
    /* 0xA3AA */ u8 padA3AA[2];
    /* 0xA3AC */ u16 tickSum;       /* += tick every rendered frame */
    /* 0xA3AE */ u16 mode;         /* index into the mode handler table (g_ModeTable) */
    /* 0xA3B0 */ u16 modeVar;       /* kept for the whole mode; cleared by SetMode / NextMode */
    /* 0xA3B2 */ u8 padA3B2[2];
    /* 0xA3B4 */ u16 step;         /* step within the current mode */
    /* 0xA3B6 */ u16 done;          /* set by the running overlay when its mode is finished */
    /* 0xA3B8 */ s16 timer;        /* per-step frame counter */
    /* 0xA3BA */ u16 subStep;       /* SetSubStep / NextSubStep */
    /* 0xA3BC */ u16 subStepVar;
    /* 0xA3BE */ s16 stepTimer;
    /* 0xA3C0 */ u16 state;         /* the game state inside the field overlay: SetGameState, which clears the eight below */
    /* 0xA3C2 */ s16 stateFlag;
    /* 0xA3C4 */ s16 unkA3C4;
    /* 0xA3C6 */ s16 stateStep;
    /* 0xA3C8 */ s16 stateStepVar;
    /* 0xA3CA */ s16 unkA3CA;
    /* 0xA3CC */ s16 stateSubStep;
    /* 0xA3CE */ s16 stateSubStepVar;
    /* 0xA3D0 */ s16 stateStepTimer;
    /* 0xA3D2 */ u16 frame;        /* double-buffer index (0/1) */
    /* 0xA3D4 */ u16 exitLoop;     /* nonzero leaves the main frame loop */
    /* 0xA3D6 */ u8 padA3D6[2];
    /* 0xA3D8 */ s16 mapId;        /* the stage map being loaded (func_801457A4 finds its room record) */
    /* 0xA3DA */ s16 mapGroup;      /* the map id's group (id & 0xF000); with unkA3DC, how it was entered: 0x1000/0x1000 places Musashi from D_800AE6A8 */
    /* 0xA3DC */ s16 unkA3DC;
    /* 0xA3DE */ s16 unkA3DE;      /* cleared by the debug menu's entry (ovl37 func_800CEF00) */
    /* 0xA3E0 */ u8 mapLive;        /* cleared by the reset mode handler ModeReset */
    /* 0xA3E1 */ u8 unkA3E1;
    /* 0xA3E2 */ u8 padA3E2;
    /* 0xA3E3 */ u8 pauseMenu;      /* 0 closed, else the field's pause menu kind + 1: main() runs its update instead of ModeDispatch */
    /* 0xA3E4 */ u8 padA3E4;
    /* 0xA3E5 */ u8 unkA3E5;       /* set by CheckPauseStart before func_801281D8 */
    /* 0xA3E6 */ u8 padA3E6[2];
    /* 0xA3E8 */ s32 vsyncMode;    /* passed to VSync() each frame */
    /* 0xA3EC */ u8 padA3EC[0xA434 - 0xA3EC];
    /* 0xA434 */ s8 demoActive;     /* an attract demo is running (set by ModeTitleRun, cleared by ModeFieldRun / ModeDemoEnd) */
    /* 0xA435 */ u8 padA435[0xA444 - 0xA435];
} Work; /* size 0xA444, cleared by ResetSystems */

extern Work D_800AF630;

/*
 * -O2 code reaches Work through this fixed-address pointer rather than the
 * symbol: a constant address is never cached in a register, and being a
 * struct member it is reloaded after stores through other pointers.
 */
#define WORK ((Work *)0x800AF630)

#endif /* WORK_H */
