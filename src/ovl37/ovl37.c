#include "common.h"
#include "work.h"

typedef struct { void (*fn)(void); } MenuFn;
extern void NextStep(void);
extern void SetGameState(u16 n);
extern void ClearDebugText(void);
extern s32 FadeStep(s32 arg0);
extern void ClearObjectPools(void);
extern void SetDebugText(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern s16 GetPadPressedDir(s32 a);
extern u16 GetPadHeldDir(s32 a);
extern void func_80136EC4(void);
extern void DebugPresetBase(void);
extern void DebugPreset1(void);
extern void DebugPreset2(void);
extern void DebugPreset3(void);
extern void DebugPreset4(void);
extern void DebugPreset5(void);
extern MenuFn g_DebugStepTable[];
extern MenuFn g_DebugRowTable[];
extern s16 g_DebugCursor;
extern s32 g_DebugWeekdayNames[];
extern s32 g_DebugPresetNames[];
extern s32 g_DebugWeekday;
extern s32 g_DebugPresetLevel;
extern u16 g_DebugPadHeld;
extern u16 g_DebugPadPressed;
extern u16 g_DebugPadLastHeld;
extern u16 g_DebugPadRepeat;

void DebugMenuMain(void) {
    register Work *w = &D_800AF630;
    if (w->step < 5) {
        g_DebugStepTable[w->step].fn();
    }
}

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s16 unk34;
    u8 unk36;
    u8 unk37;
    s16 unk38;
    s16 unk3A;
    s16 unk3C;
    s16 unk3E;
    s16 unk40;
    u8 unk42;
    u8 unk43;
    u8 unk44;
    u8 unk45;
    u8 unk46;
    u8 unk47;
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 pad4D[3];
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    s32 unk64;
    u8 unk68;
    u8 pad69[3];
    s32 unk6C;
    s32 unk70;
    s32 unk74;
    s32 unk78;
    s32 unk7C;
    s32 unk80;
    s32 unk84;
    s32 unk88;
    s32 unk8C;
    s32 unk90;
    s32 unk94;
} DbgStats;
extern DbgStats g_Status;

typedef struct { char name[4]; s16 flag; } DbgEnt;
extern void SetDebugNumber(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern s32 GetFlag(s32 n);
extern u32 GetProgress(void);
extern char D_800CEE3C[];
extern char D_800CEE40[];
extern char D_800CEE44[];
extern char D_800CEE50[];
extern char D_800CEE54[];
extern char D_800CEE60[];
extern s32 g_DebugProgress;
extern s16 g_DebugEventIndex;
extern s16 g_DebugClock;
extern DbgEnt g_DebugEventFlags[];

typedef struct { char name[0x20]; s32 id; } DbgItem;
typedef struct { char name[12]; DbgItem *items; s32 count; } DbgCat;
extern void SetProgress(s32 a);
extern char D_800D31F8[];
extern char D_800D31FC[];
extern char D_800D3208[];
extern char D_800D3214[];
extern char D_800D3220[];
extern char D_800D3228[];
extern char D_800D3230[];
extern char D_800D3238[];
extern char D_800D3248[];
extern char D_800D3250[];
extern char D_800D3258[];
extern char D_800D3264[];
extern char D_800D3278[];
extern char D_800D3284[];
extern DbgCat g_DebugAreaTable[];
extern s16 g_DebugSelectRow;
extern s32 g_DebugArea;
extern s32 g_DebugScene;

void DebugMenuInit(void) {
    register Work *w = &D_800AF630;

    w->unkA3E1 = 1;
    ClearObjectPools();
    ClearDebugText();
    SetGameState(0);
    SetDebugText(0, (s32)D_800D31FC, 0x40, 0x1E, 0, 0);
    SetDebugText(1, (s32)D_800D31F8, 0x34, 0x46, 0, 0);
    SetDebugText(9, (s32)D_800D3248, 0x40, 0x46, 0, 0);
    SetDebugText(2, (s32)D_800D3208, 0x40, 0x5E, 0, 0);
    SetDebugText(3, (s32)D_800D3214, 0x40, 0x6A, 0, 0);
    SetDebugText(4, (s32)D_800D3220, 0x40, 0x76, 0, 0);
    SetDebugText(5, (s32)D_800D3228, 0x40, 0x82, 0, 0);
    SetDebugText(6, (s32)D_800D3230, 0x40, 0x8E, 0, 0);
    SetDebugText(7, (s32)D_800D3238, 0x40, 0x9A, 0, 0);
    SetDebugText(0xA, (s32)D_800D3250, 0x74, 0x46, 0, 0);
    SetDebugText(0xB, (s32)D_800D3258, 0x74, 0x52, 0, 0);
    SetDebugText(0xE, (s32)D_800D3264, 0x40, 0xA6, 0, 0);
    SetDebugText(0xF, (s32)D_800D3278, 0x40, 0xB2, 0, 0);
    SetDebugText(0x10, (s32)D_800D3284, 0x40, 0xBE, 0, 0);
    g_DebugArea = 0;
    g_DebugScene = 0;
    g_DebugWeekday = 0;
    g_DebugPresetLevel = 0;
    w->unkA3DE = 0;
    SetDebugText(0xC, (s32)g_DebugAreaTable[g_DebugArea].name, 0xA4, 0x46, 0x44, 0);
    SetDebugText(0xD, (s32)g_DebugAreaTable[g_DebugArea].items[g_DebugScene].name, 0xA4, 0x52, 0x44, 0);
    g_DebugCursor = 0;
    g_DebugSelectRow = 0;
    g_DebugPadRepeat = 0;
    g_DebugPadLastHeld = 0;
    g_DebugPadPressed = 0;
    g_DebugPadHeld = 0;
    SetProgress(g_DebugProgress);
    NextStep();
}

extern s32 SetFlag(u32 bit, s32 on);
extern void SetVar(s32 i, s32 v);
extern u16 g_ItemValues;
extern u16 D_800A658A;
extern u16 D_800A658C;
extern u16 D_800A658E;
extern u16 D_800A6590;
extern u16 D_800A6592;
extern u16 D_8010F474;
extern u8 D_8010F476;
extern u16 D_8010F47C;
extern u8 D_8010F47E;
extern u16 D_8010F484;
extern u8 D_8010F486;
extern u16 D_8010F48C;
extern u8 D_8010F48E;
extern u16 D_8010F494;
extern u8 D_8010F496;
extern u16 D_8010F49C;
extern u8 D_8010F49E;
extern u16 D_800A6594;
extern u16 D_800A6596;
extern u16 D_800A6598;
extern u16 D_800A659A;
extern u16 D_800A659C;
extern u16 D_800A659E;
extern u16 D_800A65D2;
extern u16 D_8010F4A4;
extern u8 D_8010F4A6;
extern u16 D_8010F4AC;
extern u8 D_8010F4AE;
extern u16 D_8010F4B4;
extern u8 D_8010F4B6;
extern u16 D_8010F4BC;
extern u8 D_8010F4BE;
extern u16 D_8010F4C4;
extern u8 D_8010F4C6;
extern u16 D_8010F4CC;
extern u8 D_8010F4CE;
extern u16 D_8010F59C;
extern u8 D_8010F59E;
extern u16 D_800A65A0;
extern u16 D_800A65A2;
extern u16 D_800A65A4;
extern u16 D_800A65A6;
extern u16 D_800A65A8;
extern u16 D_800A65AA;
extern u16 D_800A65D6;
extern u16 D_8010F4D4;
extern u8 D_8010F4D6;
extern u16 D_8010F4DC;
extern u8 D_8010F4DE;
extern u16 D_8010F4E4;
extern u8 D_8010F4E6;
extern u16 D_8010F4EC;
extern u8 D_8010F4EE;
extern u16 D_8010F4F4;
extern u8 D_8010F4F6;
extern u16 D_8010F4FC;
extern u8 D_8010F4FE;
extern u16 D_8010F5AC;
extern u8 D_8010F5AE;
extern u16 D_800A65AC;
extern u16 D_800A65AE;
extern u16 D_800A65B0;
extern u16 D_800A65B2;
extern u16 D_800A65B4;
extern u16 D_800A65B6;
extern u16 D_8010F504;
extern u8 D_8010F506;
extern u16 D_8010F50C;
extern u8 D_8010F50E;
extern u16 D_8010F514;
extern u8 D_8010F516;
extern u16 D_8010F51C;
extern u8 D_8010F51E;
extern u16 D_8010F524;
extern u8 D_8010F526;
extern u16 D_8010F52C;
extern u8 D_8010F52E;
extern u16 D_800A65B8;
extern u16 D_8010F534;
extern u8 D_8010F536;

typedef struct { s32 unk0[6]; s16 unk18; s16 unk1A; } DbgClock;
extern void SetStep(u16 step);
extern void ClearDebugTextLine(s32 a);
extern void StartFade(s32 a);
extern void DebugApplyPresets(void);
extern s32 DebugSceneSelectable(s32 a);
extern void DebugReadPad(void);
extern char D_800CEE30[];

extern void DebugDrawWeekday(void);
extern void DebugDrawPresetName(void);
extern void DebugDrawStatus(void);
extern u8 g_DebugRowY[];

void DebugMenuOptions(void) {
    register Work *w = &D_800AF630;
    DbgClock *c;
    s32 id;

    c = (DbgClock *)&g_Status;
    w->unkA3E1 = 0;
    DebugReadPad();
    if (g_DebugPadPressed & 0x4000) {
        g_DebugCursor++;
        if (g_DebugCursor >= 13) {
            g_DebugCursor = 0;
        }
    } else if (g_DebugPadPressed & 0x1000) {
        g_DebugCursor--;
        if (g_DebugCursor < 0) {
            g_DebugCursor = 12;
        }
    }
    SetDebugText(1, (s32)D_800D31F8, 0x34, g_DebugRowY[g_DebugCursor], 0, 0);
    switch (g_DebugCursor) {
    case 0:
        if (g_DebugPadPressed & 0x820) {
            SetStep(4);
        }
        break;
    case 1:
    case 2:
    case 3:
    case 5:
        if (g_DebugPadPressed & 0x820) {
            SetStep(2);
            StartFade(4);
        }
        break;
    case 4:
        if (g_DebugPadPressed & 0x8000) {
            g_DebugWeekday--;
            if (g_DebugWeekday < 0) {
                g_DebugWeekday = 6;
            }
        }
        if (g_DebugPadPressed & 0x2000) {
            g_DebugWeekday++;
            if (g_DebugWeekday++ >= 7) {
                g_DebugWeekday = 0;
            }
        }
        break;
    case 6:
        if (g_DebugPadPressed & 0x8000) {
            g_DebugPresetLevel--;
            if (g_DebugPresetLevel < 0) {
                g_DebugPresetLevel = 7;
            }
        }
        if (g_DebugPadPressed & 0x2000) {
            g_DebugPresetLevel++;
            if (g_DebugPresetLevel >= 8) {
                g_DebugPresetLevel = 0;
            }
        }
        break;
    case 7:
        if (g_DebugPadPressed & 0x8000) {
            if ((g_DebugProgress -= 10) < 0) {
                g_DebugProgress = 0;
            }
        }
        if (g_DebugPadPressed & 0x2000) {
            if ((g_DebugProgress += 10) >= 0x6A5) {
                g_DebugProgress = 0x6A4;
            }
        }
        if (g_DebugPadPressed & 0x20) {
            if ((g_DebugProgress += 1) >= 0x6A5) {
                g_DebugProgress = 0x6A4;
            }
        }
        if (g_DebugPadPressed & 0x40) {
            if ((g_DebugProgress -= 1) < 0) {
                g_DebugProgress = 0;
            }
        }
        if (g_DebugPadPressed & 0x10) {
            if ((g_DebugProgress += 100) >= 0x6A5) {
                g_DebugProgress = 0x6A4;
            }
        }
        if (g_DebugPadPressed & 0x80) {
            if ((g_DebugProgress -= 100) < 0) {
                g_DebugProgress = 0;
            }
        }
        SetProgress(g_DebugProgress);
        break;
    case 8:
        if (g_DebugPadPressed & 0x8000) {
            if (--g_DebugEventIndex < 0) {
                g_DebugEventIndex = 0x2B;
            }
        }
        if (g_DebugPadPressed & 0x2000) {
            if (++g_DebugEventIndex >= 0x2C) {
                g_DebugEventIndex = 0;
            }
        }
        if (g_DebugPadPressed & 0x20) {
            id = g_DebugEventFlags[g_DebugEventIndex].flag;
            SetFlag(id, (GetFlag(id) & 0xFF) == 0);
        }
        break;
    case 9:
        if (g_DebugPadPressed & 0x2000) {
            g_DebugClock += 60;
        }
        if (g_DebugPadPressed & 0x8000) {
            g_DebugClock -= 60;
        }
        if (g_DebugPadPressed & 0xA0) {
            g_DebugClock += 15;
        }
        if (g_DebugPadPressed & 0x40) {
            g_DebugClock -= 15;
        }
        if (g_DebugClock < 0) {
            g_DebugClock = 0x59F;
        }
        if (g_DebugClock >= 0x5A0) {
            g_DebugClock = 0;
        }
        c->unk1A = g_DebugClock;
        break;
    case 10:
        if (g_DebugPadPressed & 0x2000) {
            SetFlag(0, (GetFlag(0) & 0xFF) == 0);
        }
        break;
    case 11:
        if (g_DebugPadPressed & 0x2000) {
            SetFlag(1, (GetFlag(1) & 0xFF) == 0);
        }
        break;
    case 12:
        if (g_DebugPadPressed & 0x2000) {
            SetFlag(2, (GetFlag(2) & 0xFF) == 0);
        }
        break;
    }
    if (g_DebugCursor >= 6 && (g_DebugPadPressed & 0x800)) {
        g_DebugCursor = 0;
        SetStep(4);
    }
    c->unk1A = g_DebugClock;
    DebugDrawStatus();
    DebugDrawPresetName();
    DebugDrawWeekday();
}

void DebugDrawWeekday(void) {
    SetDebugText(0x1C, g_DebugWeekdayNames[g_DebugWeekday], 0x78, 0x82, 0, 0);
}

void DebugDrawPresetName(void) {
    SetDebugText(0x1A, g_DebugPresetNames[g_DebugPresetLevel], 0x90, 0x9A, 0, 0);
}

void DebugMenuWaitFadeOut(void) {
    if (FadeStep(4) & 0xFFFF) {
        NextStep();
        SetGameState(0);
        ClearObjectPools();
        ClearDebugText();
    }
}

void DebugApplyPresets(void) {
    if (g_DebugPresetLevel != 0) {
        if (g_DebugPresetLevel > 0) {
            DebugPresetBase();
        }
        if (g_DebugPresetLevel >= 2) {
            DebugPreset1();
        }
        if (g_DebugPresetLevel >= 3) {
            DebugPreset2();
        }
        if (g_DebugPresetLevel >= 4) {
            DebugPreset3();
        }
        if (g_DebugPresetLevel >= 5) {
            DebugPreset4();
        }
        if (g_DebugPresetLevel >= 6) {
            DebugPreset5();
        }
    }
}

void DebugSceneSelect(void) {
    register Work *w = &D_800AF630;
    DbgClock *c;
    u8 ok;

    c = (DbgClock *)&g_Status;
    ok = DebugSceneSelectable(g_DebugAreaTable[g_DebugArea].items[g_DebugScene].id);
    DebugReadPad();
    ClearDebugTextLine(0x11);
    if (g_DebugPadPressed & 0x820) {
        StartFade(4);
        w->mapId = g_DebugAreaTable[g_DebugArea].items[g_DebugScene].id;
        w->mapGroup = w->mapId & 0xF000;
        if (ok) {
            DebugApplyPresets();
            if (GetPadHeldDir(0) & 0x10) {
                SetProgress(g_DebugProgress);
                c->unk1A = g_DebugClock;
            }
            SetStep(2);
        }
    }
    if (g_DebugPadPressed & 0x40) {
        SetStep(1);
    }
    if (g_DebugPadPressed & 0x5000) {
        g_DebugSelectRow = (g_DebugSelectRow + 1) & 1;
    }
    if (g_DebugSelectRow == 0) {
        if (g_DebugPadPressed & 0x2000) {
            g_DebugArea++;
            if ((u32)g_DebugArea >= 12) {
                g_DebugArea = 0;
            }
            g_DebugScene = 0;
        }
        if (g_DebugPadPressed & 0x8000) {
            g_DebugArea--;
            if (g_DebugArea < 0) {
                g_DebugArea = 11;
            }
            g_DebugScene = 0;
        }
        SetDebugText(0xC, (s32)g_DebugAreaTable[g_DebugArea].name, 0xA4, 0x46, 0x44, 0);
        SetDebugText(0xD, (s32)g_DebugAreaTable[g_DebugArea].items[g_DebugScene].name, 0xA4, 0x52, 0x44, 0);
        if (!ok) {
            SetDebugText(0x11, (s32)D_800CEE30, 0xA4, 0x5E, 0x44, 0);
        }
    }
    if (g_DebugSelectRow == 1) {
        if (g_DebugPadPressed & 0x2000) {
            g_DebugScene++;
            if (g_DebugScene >= g_DebugAreaTable[g_DebugArea].count) {
                g_DebugScene = 0;
            }
        }
        if (g_DebugPadPressed & 0x8000) {
            g_DebugScene--;
            if (g_DebugScene < 0) {
                g_DebugScene = g_DebugAreaTable[g_DebugArea].count - 1;
            }
        }
        SetDebugText(0xC, (s32)g_DebugAreaTable[g_DebugArea].name, 0xA4, 0x46, 0x44, 0);
        SetDebugText(0xD, (s32)g_DebugAreaTable[g_DebugArea].items[g_DebugScene].name, 0xA4, 0x52, 0x44, 0);
        if (!ok) {
            SetDebugText(0x11, (s32)D_800CEE30, 0xA4, 0x5E, 0x44, 0);
        }
    }
    SetDebugText(1, (s32)D_800D31F8, 0x68, g_DebugSelectRow * 12 + 0x46, 0, 0);
}

void DebugRowFinish(void) {
    register Work *w = &D_800AF630;
    w->done = 1;
}

void func_800D0430(void) {
}

void DebugRowDispatch(void) {
    if (g_DebugCursor < 5) {
        g_DebugRowTable[g_DebugCursor].fn();
    }
}

void func_800D04C4(void) {
    func_80136EC4();
}

void DebugDrawStatus(void) {
    DbgEnt *e;

    g_DebugProgress = GetProgress();
    SetDebugNumber(0x11, g_DebugProgress, 0xC8, 0xA6, 0x44, 0);
    e = &g_DebugEventFlags[g_DebugEventIndex];
    SetDebugText(0x12, (s32)e, 0x98, 0xB2, 0x43, 0);
    SetDebugText(0x13, (GetFlag(e->flag) & 0xFF) ? (s32)D_800CEE3C : (s32)D_800CEE40, 0xC8, 0xB2, 0, 0);
    SetDebugNumber(0x14, (s16)(g_DebugClock / 60), 0x68, 0xBE, 0x42, 0);
    SetDebugNumber(0x15, (s16)(g_DebugClock % 60), 0x80, 0xBE, 0x42, 0);
    SetDebugText(0x16, (s32)D_800CEE44, 0x40, 0xCA, 0x43, 0);
    SetDebugText(0x17, (GetFlag(0) & 0xFF) ? (s32)D_800CEE40 : (s32)D_800CEE50, 0xA8, 0xCA, 0, 0);
    SetDebugText(0x18, (s32)D_800CEE54, 0x40, 0xD2, 0x43, 0);
    SetDebugText(0x19, (GetFlag(1) & 0xFF) ? (s32)D_800CEE50 : (s32)D_800CEE40, 0xA8, 0xD2, 0, 0);
    SetDebugText(0x1B, (s32)D_800CEE60, 0x40, 0xDA, 0x43, 0);
    SetDebugText(0x1D, (GetFlag(2) & 0xFF) ? (s32)D_800CEE50 : (s32)D_800CEE40, 0xE0, 0xDA, 0, 0);
}

s32 DebugSceneSelectable(s32 a) {
    return 1;
}

void DebugReadPad(void) {
    g_DebugPadPressed = GetPadPressedDir(0);
    g_DebugPadHeld = GetPadHeldDir(0);
    if (g_DebugPadHeld != 0) {
        if (g_DebugPadHeld == g_DebugPadLastHeld) {
            if (--g_DebugPadRepeat == 0) {
                g_DebugPadPressed = g_DebugPadHeld & 0xF000;
                g_DebugPadRepeat = 3;
            }
        } else {
            g_DebugPadLastHeld = g_DebugPadHeld;
            g_DebugPadRepeat = 6;
        }
        return;
    }
    g_DebugPadLastHeld = 0;
    g_DebugPadRepeat = 0xC;
}

void DebugPresetBase(void) {
    DbgStats *s = &g_Status;
    s->unk4 = 0x0;
    s->unk8 = 0x0;
    s->unkC = 0x0;
    s->unk10 = 0x0;
    s->unk14 = 0x64;
    s->unk18 = 0x1FE0000;
    s->unk1C = 0x0;
    s->unk20 = 0x0;
    s->unk24 = 0x640000;
    s->unk28 = 0x0;
    s->unk2C = 0x640000;
    s->unk30 = 0x0;
    s->unk34 = 0x1;
    s->unk36 = 0x1;
    s->unk37 = 0x1;
    s->unk38 = 0x81E;
    s->unk3A = 0x96;
    s->unk3C = 0x96;
    s->unk3E = 0x96;
    s->unk40 = 0x96;
    s->unk42 = 0x0;
    s->unk43 = 0x0;
    s->unk44 = 0x3;
    s->unk45 = 0x0;
    s->unk46 = 0x0;
    s->unk47 = 0x0;
    s->unk48 = 0x0;
    s->unk49 = 0x0;
    s->unk4A = 0x0;
    s->unk4B = 0x0;
    s->unk4C = 0x0;
    s->unk50 = 0x0;
    s->unk54 = 0x0;
    s->unk58 = 0x0;
    s->unk5C = 0x0;
    s->unk60 = 0x0;
    s->unk64 = 0x0;
    s->unk68 = 0x0;
    s->unk6C = 0x0;
    s->unk70 = 0x0;
    s->unk74 = 0x0;
    s->unk78 = 0x0;
    s->unk7C = 0x0;
    s->unk80 = 0x0;
    s->unk84 = 0x0;
    s->unk88 = 0x0;
    s->unk8C = 0x0;
    s->unk90 = 0x0;
    s->unk94 = 0x0;
}

void DebugPreset1(void) {
    DbgStats *s;

    s = &g_Status;
    s->unk4 = 0;
    s->unk8 = 0xA;
    s->unkC = 0;
    s->unk10 = 0;
    s->unk14 = 0x64;
    s->unk18 = 0x01FE0000;
    s->unk1C = 0;
    s->unk20 = 0;
    s->unk24 = 0x640000;
    s->unk28 = 0;
    s->unk2C = 0x640000;
    s->unk30 = 0;
    s->unk34 = 1;
    s->unk36 = 1;
    s->unk37 = 1;
    s->unk38 = 0x81E;
    s->unk3A = 0x96;
    s->unk3C = 0x96;
    s->unk3E = 0x96;
    s->unk40 = 0x96;
    s->unk42 = 0;
    s->unk43 = 0;
    s->unk44 = 3;
    s->unk45 = 0;
    s->unk46 = 0;
    s->unk47 = 0;
    s->unk48 = 1;
    s->unk49 = 0;
    s->unk4A = 0;
    s->unk4B = 0;
    s->unk4C = 0;
    s->unk50 = 0;
    s->unk54 = 0;
    s->unk58 = 0;
    s->unk5C = 0;
    s->unk60 = 0;
    s->unk64 = 0;
    s->unk68 = 0;
    s->unk6C = 3;
    s->unk70 = 0;
    s->unk74 = 3;
    s->unk78 = 0;
    s->unk7C = 3;
    s->unk80 = 0;
    s->unk84 = 3;
    s->unk88 = 0;
    s->unk8C = 0;
    s->unk90 = 0x6D6;
    s->unk94 = 0x6D6;
    SetFlag(0x7F, 1);
    SetFlag(0x80, 1);
    SetFlag(0x84, 1);
    SetVar(0x3B, 3);
    SetVar(0x3C, 3);
    SetVar(0x3D, 3);
    SetVar(0x3E, 3);
    SetVar(0x3F, 3);
    SetVar(0x40, 0);
    SetVar(0x41, 0);
    SetVar(0x42, 0);
    SetVar(0x43, 0);
    SetVar(0x44, 0);
    SetVar(0x45, 0);
    SetVar(0x46, 0);
    SetVar(0x47, 0);
    SetVar(0x48, 0);
    SetVar(0x49, 0);
    SetVar(0x4A, 0);
    SetVar(0x4B, 0);
    SetVar(0x4C, 0);
    SetVar(0x4D, 0);
    SetVar(0x4E, 0);
    SetVar(0x4F, 0);
    SetVar(0x50, 0);
    SetVar(0x51, 0);
    SetVar(0x52, 0);
    SetVar(0x53, 0);
    SetVar(0x54, 0);
    SetVar(0x55, 0);
    SetVar(0x56, 0);
    SetVar(0x57, 0);
    SetVar(0x58, 0);
    SetVar(0x59, 0);
    SetVar(0x5A, 0);
    SetVar(0x5B, 0);
    SetVar(0x5C, 0);
    SetVar(0x5D, 0);
    SetVar(0x5E, 0);
    SetVar(0x5F, 0);
    SetVar(0x60, 0);
    SetVar(0x61, 0);
    SetVar(0x62, 0);
    SetVar(0x2E, 1);
    SetVar(0x63, (u8)(D_8010F476 | 0x80));
    SetVar(0x65, (u8)(D_8010F47E | 0x80));
    SetVar(0x66, (u8)(D_8010F486 | 0x80));
    SetVar(0x67, (u8)(D_8010F48E | 0x80));
    SetVar(0x68, (u8)(D_8010F496 | 0x80));
    SetVar(0x69, (u8)(D_8010F49E | 0x80));
    g_ItemValues = D_8010F474;
    D_800A658A = D_8010F47C;
    D_800A658C = D_8010F484;
    D_800A658E = D_8010F48C;
    D_800A6590 = D_8010F494;
    D_800A6592 = D_8010F49C;
}

void DebugPreset2(void) {
    DbgStats *s;

    s = &g_Status;
    s->unk4 = 0;
    s->unk8 = 0xC8;
    s->unkC = 0xD;
    s->unk10 = 1;
    s->unk14 = 0x64;
    s->unk18 = 0x01FE0000;
    s->unk1C = 0;
    s->unk20 = 0;
    s->unk24 = 0x640000;
    s->unk28 = 0;
    s->unk2C = 0x640000;
    s->unk30 = 0;
    s->unk34 = 1;
    s->unk36 = 1;
    s->unk37 = 1;
    s->unk38 = 0x81E;
    s->unk3A = 0xFA;
    s->unk3C = 0xFA;
    s->unk3E = 0x177;
    s->unk40 = 0x177;
    s->unk42 = 0;
    s->unk43 = 0;
    s->unk44 = 3;
    s->unk45 = 0;
    s->unk46 = 0;
    s->unk47 = 0;
    s->unk48 = 1;
    s->unk49 = 0;
    s->unk4A = 0;
    s->unk4B = 0;
    s->unk4C = 0;
    s->unk50 = 0;
    s->unk54 = 0;
    s->unk58 = 0;
    s->unk5C = 0;
    s->unk60 = 0;
    s->unk64 = 0;
    s->unk68 = 0;
    s->unk6C = 0xC;
    s->unk70 = 0;
    s->unk74 = 0xC;
    s->unk78 = 0;
    s->unk7C = 0xC;
    s->unk80 = 0;
    s->unk84 = 0xC;
    s->unk88 = 0;
    s->unk8C = 0;
    s->unk90 = 0x31C4;
    s->unk94 = 0x31C4;
    SetFlag(0x96, 1);
    SetFlag(0xE5, 1);
    SetFlag(0xE7, 1);
    SetFlag(0xDE, 1);
    SetFlag(0xEC, 1);
    SetFlag(0xEF, 1);
    SetFlag(0xE3, 1);
    SetFlag(0xDF, 1);
    SetFlag(0xF2, 1);
    SetFlag(0xED, 1);
    SetFlag(0x10B, 1);
    SetFlag(0x16, 1);
    SetFlag(0x1F, 1);
    SetFlag(0x82, 1);
    SetFlag(0x8A, 1);
    SetFlag(0x8F, 1);
    SetFlag(0x90, 1);
    SetFlag(0x91, 1);
    SetFlag(0x92, 1);
    SetFlag(0x93, 1);
    SetFlag(0x94, 1);
    SetFlag(0x97, 1);
    SetFlag(0x98, 1);
    SetFlag(0xB5, 1);
    SetVar(0xCD, 1);
    SetFlag(0xF0, 1);
    SetFlag(0x40, 1);
    SetFlag(0x41, 1);
    SetFlag(0x42, 1);
    SetFlag(0x43, 1);
    SetFlag(0x44, 1);
    SetFlag(0x45, 1);
    SetFlag(0x46, 1);
    SetFlag(0x47, 1);
    SetVar(0x3B, 5);
    SetVar(0x3C, 3);
    SetVar(0x3D, 3);
    SetVar(0x3E, 3);
    SetVar(0x3F, 3);
    SetVar(0x40, 2);
    SetVar(0x41, 2);
    SetVar(0x42, 2);
    SetVar(0x43, 3);
    SetVar(0x44, 2);
    SetVar(0x45, 2);
    SetVar(0x46, 3);
    SetVar(0x47, 3);
    SetVar(0x48, 2);
    SetVar(0x49, 2);
    SetVar(0x4A, 0);
    SetVar(0x4B, 0);
    SetVar(0x4C, 0);
    SetVar(0x4D, 0);
    SetVar(0x4E, 0);
    SetVar(0x4F, 0);
    SetVar(0x50, 0);
    SetVar(0x51, 2);
    SetVar(0x52, 0);
    SetVar(0x53, 0);
    SetVar(0x54, 0);
    SetVar(0x55, 0);
    SetVar(0x56, 0);
    SetVar(0x57, 2);
    SetVar(0x58, 0);
    SetVar(0x59, 0);
    SetVar(0x5A, 0);
    SetVar(0x5B, 0);
    SetVar(0x5C, 0);
    SetVar(0x5D, 0);
    SetVar(0x5E, 0);
    SetVar(0x5F, 2);
    SetVar(0x60, 0);
    SetVar(0x61, 0);
    SetVar(0x62, 0);
    SetVar(0x2E, 2);
    SetVar(0x6A, (u8)(D_8010F4A6 | 0x80));
    SetVar(0x6B, (u8)(D_8010F4AE | 0x80));
    SetVar(0x6C, (u8)(D_8010F4B6 | 0x80));
    SetVar(0x6D, (u8)(D_8010F4BE | 0x80));
    SetVar(0x6E, (u8)(D_8010F4C6 | 0x80));
    SetVar(0x6F, (u8)(D_8010F59E | 0x80));
    SetVar(0x70, (u8)(D_8010F4CE | 0x80));
    D_800A6594 = D_8010F4A4;
    D_800A6596 = D_8010F4AC;
    D_800A6598 = D_8010F4B4;
    D_800A659A = D_8010F4BC;
    D_800A659C = D_8010F4C4;
    D_800A65D2 = D_8010F59C;
    D_800A659E = D_8010F4CC;
    SetFlag(0x9E, 1);
}

void DebugPreset3(void) {
    DbgStats *s;

    s = &g_Status;
    s->unk4 = 0;
    s->unk8 = 0x258;
    s->unkC = 0x1A;
    s->unk10 = 2;
    s->unk14 = 0x64;
    s->unk18 = 0x01FE0000;
    s->unk1C = 0;
    s->unk20 = 0;
    s->unk24 = 0x640000;
    s->unk28 = 0;
    s->unk2C = 0x640000;
    s->unk30 = 0;
    s->unk34 = 1;
    s->unk36 = 1;
    s->unk37 = 1;
    s->unk38 = 0x81E;
    s->unk3A = 0x15E;
    s->unk3C = 0x15E;
    s->unk3E = 0x1C2;
    s->unk40 = 0x1C2;
    s->unk42 = 0;
    s->unk43 = 0;
    s->unk44 = 3;
    s->unk45 = 0;
    s->unk46 = 0;
    s->unk47 = 0;
    s->unk48 = 1;
    s->unk49 = 0;
    s->unk4A = 0;
    s->unk4B = 0;
    s->unk4C = 0;
    s->unk50 = 0;
    s->unk54 = 0;
    s->unk58 = 0;
    s->unk5C = 0;
    s->unk60 = 0;
    s->unk64 = 0;
    s->unk68 = 0;
    s->unk6C = 0x13;
    s->unk70 = 0;
    s->unk74 = 0x13;
    s->unk78 = 0;
    s->unk7C = 0x13;
    s->unk80 = 0;
    s->unk84 = 0x13;
    s->unk88 = 0;
    s->unk8C = 0;
    s->unk90 = 0x5C44;
    s->unk94 = 0x5C44;
    SetFlag(0xF5, 1);
    SetFlag(0x106, 1);
    SetFlag(0xF8, 1);
    SetFlag(0xFF, 1);
    SetFlag(0xF9, 1);
    SetFlag(0x105, 1);
    SetFlag(0x100, 1);
    SetFlag(0xFD, 1);
    SetFlag(0xFE, 1);
    SetFlag(0xFB, 1);
    SetFlag(0xF4, 1);
    SetFlag(0xF6, 1);
    SetFlag(0x17, 1);
    SetFlag(0x20, 1);
    SetFlag(0x1E, 1);
    SetFlag(0x83, 1);
    SetFlag(0x85, 1);
    SetFlag(0x86, 1);
    SetFlag(0x87, 1);
    SetFlag(0x8B, 1);
    SetFlag(0xB6, 1);
    SetFlag(0x1B, 1);
    SetFlag(0x48, 1);
    SetFlag(0x49, 1);
    SetFlag(0x4B, 1);
    SetVar(0x3B, 5);
    SetVar(0x3C, 3);
    SetVar(0x3D, 4);
    SetVar(0x3E, 3);
    SetVar(0x3F, 3);
    SetVar(0x40, 2);
    SetVar(0x41, 2);
    SetVar(0x42, 2);
    SetVar(0x43, 3);
    SetVar(0x44, 2);
    SetVar(0x45, 2);
    SetVar(0x46, 3);
    SetVar(0x47, 3);
    SetVar(0x48, 3);
    SetVar(0x49, 2);
    SetVar(0x4A, 3);
    SetVar(0x4B, 2);
    SetVar(0x4C, 3);
    SetVar(0x4D, 5);
    SetVar(0x4E, 2);
    SetVar(0x4F, 3);
    SetVar(0x50, 3);
    SetVar(0x51, 2);
    SetVar(0x52, 2);
    SetVar(0x53, 0);
    SetVar(0x54, 0);
    SetVar(0x55, 2);
    SetVar(0x56, 0);
    SetVar(0x57, 2);
    SetVar(0x58, 0);
    SetVar(0x59, 2);
    SetVar(0x5A, 3);
    SetVar(0x5B, 0);
    SetVar(0x5C, 0);
    SetVar(0x5D, 0);
    SetVar(0x5E, 3);
    SetVar(0x5F, 2);
    SetVar(0x60, 0);
    SetVar(0x61, 0);
    SetVar(0x62, 3);
    SetVar(0x2E, 3);
    SetVar(0x71, (u8)(D_8010F4D6 | 0x80));
    SetVar(0x72, (u8)(D_8010F4DE | 0x80));
    SetVar(0x73, (u8)(D_8010F4EE | 0x80));
    SetVar(0x74, (u8)(D_8010F4E6 | 0x80));
    SetVar(0x75, (u8)(D_8010F5AE | 0x80));
    SetVar(0x76, (u8)(D_8010F4F6 | 0x80));
    SetVar(0x6D, (u8)(D_8010F4FE | 0x80));
    D_800A65A0 = D_8010F4D4;
    D_800A65A2 = D_8010F4DC;
    D_800A65A6 = D_8010F4EC;
    D_800A65A4 = D_8010F4E4;
    D_800A65D6 = D_8010F5AC;
    D_800A65A8 = D_8010F4F4;
    D_800A65AA = D_8010F4FC;
    SetFlag(0x101, 1);
    SetFlag(0x102, 1);
    SetFlag(0x103, 1);
    SetFlag(0x104, 1);
    SetFlag(0xB3, 1);
}

void DebugPreset4(void) {
    DbgStats *s;

    s = &g_Status;
    s->unk4 = 0;
    s->unk8 = 0x384;
    s->unkC = 0x20;
    s->unk10 = 3;
    s->unk14 = 0x64;
    s->unk18 = 0x01FE0000;
    s->unk1C = 0;
    s->unk20 = 0;
    s->unk24 = 0x640000;
    s->unk28 = 0;
    s->unk2C = 0x640000;
    s->unk30 = 0;
    s->unk34 = 1;
    s->unk36 = 1;
    s->unk37 = 1;
    s->unk38 = 0x81E;
    s->unk3A = 0x19F;
    s->unk3C = 0x19F;
    s->unk3E = 0x1F4;
    s->unk40 = 0x1F4;
    s->unk42 = 0;
    s->unk43 = 0;
    s->unk44 = 3;
    s->unk45 = 0;
    s->unk46 = 0;
    s->unk47 = 0;
    s->unk48 = 1;
    s->unk49 = 0;
    s->unk4A = 0;
    s->unk4B = 0;
    s->unk4C = 0;
    s->unk6C = 0x18;
    s->unk70 = 0;
    s->unk74 = 0x18;
    s->unk78 = 0;
    s->unk7C = 0x18;
    s->unk80 = 0;
    s->unk84 = 0x18;
    s->unk88 = 0;
    s->unk8C = 0;
    s->unk90 = 0x7E90;
    s->unk94 = 0x7E90;
    s->unk50 = 0;
    s->unk54 = 0;
    s->unk58 = 0;
    s->unk5C = 0;
    s->unk60 = 0;
    s->unk64 = 0;
    s->unk68 = 0;
    SetFlag(0x10D, 1);
    SetFlag(0x107, 1);
    SetFlag(0x18, 1);
    SetFlag(0x1D, 1);
    SetFlag(0x21, 1);
    SetFlag(0x81, 1);
    SetFlag(0x8C, 1);
    SetFlag(0xC7, 1);
    SetFlag(0xC8, 1);
    SetFlag(0xC9, 1);
    SetFlag(0xCA, 1);
    SetFlag(0xCB, 1);
    SetFlag(0xCC, 1);
    SetFlag(0xCD, 1);
    SetFlag(0xCE, 1);
    SetFlag(0xCF, 1);
    SetFlag(0xD0, 1);
    SetFlag(0xD1, 1);
    SetFlag(0xD2, 1);
    SetFlag(0xD3, 1);
    SetFlag(0xD4, 1);
    SetFlag(0xD5, 1);
    SetFlag(0xD6, 1);
    SetFlag(0xD7, 1);
    SetFlag(0xD8, 1);
    SetFlag(0xD9, 1);
    SetFlag(0x9B, 1);
    SetFlag(0x81, 1);
    SetVar(0x3B, 9);
    SetVar(0x3C, 3);
    SetVar(0x3D, 4);
    SetVar(0x3E, 3);
    SetVar(0x3F, 3);
    SetVar(0x40, 2);
    SetVar(0x41, 2);
    SetVar(0x42, 2);
    SetVar(0x43, 3);
    SetVar(0x44, 2);
    SetVar(0x45, 2);
    SetVar(0x46, 3);
    SetVar(0x47, 3);
    SetVar(0x48, 3);
    SetVar(0x49, 2);
    SetVar(0x4A, 4);
    SetVar(0x4B, 2);
    SetVar(0x4C, 3);
    SetVar(0x4D, 5);
    SetVar(0x4E, 2);
    SetVar(0x4F, 3);
    SetVar(0x50, 4);
    SetVar(0x51, 2);
    SetVar(0x52, 3);
    SetVar(0x53, 2);
    SetVar(0x54, 3);
    SetVar(0x55, 3);
    SetVar(0x56, 2);
    SetVar(0x57, 2);
    SetVar(0x58, 2);
    SetVar(0x59, 3);
    SetVar(0x5A, 3);
    SetVar(0x5B, 0);
    SetVar(0x5C, 0);
    SetVar(0x5D, 2);
    SetVar(0x5E, 3);
    SetVar(0x5F, 2);
    SetVar(0x60, 2);
    SetVar(0x61, 0);
    SetVar(0x62, 3);
    SetVar(0x2E, 4);
    SetVar(0x78, (u8)(D_8010F506 | 0x80));
    SetVar(0x79, (u8)(D_8010F50E | 0x80));
    SetVar(0x7A, (u8)(D_8010F516 | 0x80));
    SetVar(0x7C, (u8)(D_8010F51E | 0x80));
    SetVar(0x7D, (u8)(D_8010F526 | 0x80));
    SetVar(0x7E, (u8)(D_8010F52E | 0x80));
    D_800A65AC = D_8010F504;
    D_800A65AE = D_8010F50C;
    D_800A65B0 = D_8010F514;
    D_800A65B2 = D_8010F51C;
    D_800A65B4 = D_8010F524;
    D_800A65B6 = D_8010F52C;
    SetFlag(0xC4, 1);
    SetFlag(0xC5, 1);
    SetFlag(0xC6, 1);
    SetFlag(0x56, 1);
    SetFlag(0x57, 1);
    SetFlag(0x58, 1);
}

void DebugPreset5(void) {
    DbgStats *s;

    s = &g_Status;
    s->unk4 = 0;
    s->unk8 = 0x4B0;
    s->unkC = 0x23;
    s->unk10 = 7;
    s->unk14 = 0x64;
    s->unk18 = 0x01FE0000;
    s->unk1C = 0;
    s->unk20 = 0;
    s->unk24 = 0x640000;
    s->unk28 = 0;
    s->unk2C = 0x640000;
    s->unk30 = 0;
    s->unk34 = 1;
    s->unk36 = 1;
    s->unk37 = 1;
    s->unk38 = 0x81E;
    s->unk3A = 0x1D1;
    s->unk3C = 0x1D1;
    s->unk3E = 0x1F4;
    s->unk40 = 0x1F4;
    s->unk42 = 0;
    s->unk43 = 0;
    s->unk44 = 3;
    s->unk45 = 0;
    s->unk46 = 0;
    s->unk47 = 0;
    s->unk48 = 1;
    s->unk49 = 0;
    s->unk4A = 0;
    s->unk4B = 0;
    s->unk4C = 0;
    s->unk50 = 0;
    s->unk54 = 0;
    s->unk58 = 0;
    s->unk5C = 0;
    s->unk60 = 0;
    s->unk64 = 0;
    s->unk68 = 0;
    s->unk6C = 0x1C;
    s->unk70 = 0;
    s->unk74 = 0x1C;
    s->unk78 = 0;
    s->unk7C = 0x1C;
    s->unk80 = 0;
    s->unk84 = 0x1C;
    s->unk88 = 0;
    s->unk8C = 0;
    s->unk90 = 0x9C72;
    s->unk94 = 0x9C72;
    SetFlag(0x19, 1);
    SetFlag(0x1D, 1);
    SetFlag(0x21, 1);
    SetFlag(0x8D, 1);
    SetFlag(0x89, 1);
    SetFlag(0xBD, 1);
    SetFlag(0xBE, 1);
    SetFlag(0xBF, 1);
    SetFlag(0xC0, 1);
    SetFlag(0xC1, 1);
    SetFlag(0xC2, 1);
    SetFlag(0xC3, 1);
    SetFlag(0x4A, 1);
    SetFlag(0x4C, 1);
    SetVar(0x3B, 0xD);
    SetVar(0x3C, 3);
    SetVar(0x3D, 4);
    SetVar(0x3E, 3);
    SetVar(0x3F, 3);
    SetVar(0x40, 2);
    SetVar(0x41, 2);
    SetVar(0x42, 2);
    SetVar(0x43, 3);
    SetVar(0x44, 2);
    SetVar(0x45, 2);
    SetVar(0x46, 3);
    SetVar(0x47, 3);
    SetVar(0x48, 3);
    SetVar(0x49, 2);
    SetVar(0x4A, 4);
    SetVar(0x4B, 2);
    SetVar(0x4C, 3);
    SetVar(0x4D, 5);
    SetVar(0x4E, 2);
    SetVar(0x4F, 3);
    SetVar(0x50, 4);
    SetVar(0x51, 2);
    SetVar(0x52, 3);
    SetVar(0x53, 2);
    SetVar(0x54, 3);
    SetVar(0x55, 3);
    SetVar(0x56, 2);
    SetVar(0x57, 2);
    SetVar(0x58, 2);
    SetVar(0x59, 3);
    SetVar(0x5A, 3);
    SetVar(0x5B, 3);
    SetVar(0x5C, 2);
    SetVar(0x5D, 2);
    SetVar(0x5E, 3);
    SetVar(0x5F, 2);
    SetVar(0x60, 3);
    SetVar(0x61, 2);
    SetVar(0x62, 3);
    SetVar(0x2E, 5);
    SetVar(0x7F, (u8)(D_8010F536 | 0x80));
    D_800A65B8 = D_8010F534;
    SetFlag(0xBB, 1);
}
