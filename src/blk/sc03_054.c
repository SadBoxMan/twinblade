#include "common.h"
#include "gte.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_4;
typedef struct { s16 field_0[6]; } struct_C_3;
typedef struct { s16 field_0, field_2; } struct_4_2;
typedef struct { struct_4_2 field_0; s16 field_4; s16 field_6; struct_4_2 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C;
typedef struct { s32 field_0, field_4, field_8; } struct_C_4;
typedef struct { s16 field_0[3][3]; s16 field_12; s32 field_14[3]; } struct_20_3;
typedef struct { u32 field_0; u32 field_4; u32 field_8; u32 field_C; u32 *field_10; } struct_14_2;
typedef struct { s32 field_0; s32 field_4; s32 field_8; s32 field_C; s32 field_10; s32 field_14; s32 field_18; } struct_1C_2;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_5;
typedef struct { u16 field_0[6]; } struct_C_5;
typedef struct { u16 field_0, field_2, field_4, field_6; } struct_8_6;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_3;
typedef struct { struct_8_6 field_0; struct_8_6 field_8; struct_4_3 field_10; struct_4_3 field_14; s32 field_18; } struct_1C_3;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_4;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_7;
typedef struct { struct_8_7 field_0[4]; struct_4_3 field_20[4]; s32 field_30; } struct_34_2;
typedef struct { u16 field_0; s16 field_2; s16 field_4; s16 field_6; s32 field_8; s32 field_C; } struct_10;
typedef struct { s16 field_0, field_2, field_4, field_6; u8 field_8, field_9; s16 field_A; struct_10 field_C[16]; } struct_10C_2;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_2;
typedef struct { s8 field_0[4]; } struct_4_4;
typedef struct { s16 field_0, field_2, field_4, field_6, field_8; u16 field_A; s16 field_C, field_E; s32 field_10; } struct_14_3;
typedef struct { u32 *field_0; u8 field_4[0x10]; } struct_14_4;
typedef struct { u8 field_0[0x14]; } struct_14_5;
typedef struct { unsigned field_0_b0 : 24; unsigned field_3_b0 : 8; } struct_4_5;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_5;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_6;
typedef struct { u8 field_0[8]; } struct_8_8;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_6;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_9;
typedef struct { struct_C_5 field_0[9]; } struct_6C;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_3;
typedef struct { s16 field_0, field_2, field_4, field_6; } struct_8_10;
typedef struct { s32 field_0, field_4, field_8, field_C; } struct_10_4;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_7;
typedef struct { u8 field_0, field_1, field_2, field_3; } struct_4_7;
typedef struct { struct_8_10 field_0[4]; struct_4_7 field_20[4]; s32 field_30; } struct_34_3;
typedef struct { s32 field_0, field_4, field_8; } struct_C_6;
typedef struct { u32 field_0_b0 : 24; u32 field_3_b0 : 8; } struct_4_8;
typedef struct { s16 field_0[3][3]; s32 field_14[3]; } struct_20_8;
typedef struct { struct_4_8 field_0; u8 field_4, field_5, field_6, field_7; s16 field_8, field_A, field_C, field_E, field_10, field_12, field_14, field_16; } struct_18;
typedef union { s32 m0; struct_4_2 m1; } union_4_2;
typedef void (*type_2)();
typedef struct { u8 field_0[0x18]; struct_20_4 field_18; } struct_38;
typedef struct { s32 field_0[4]; } struct_10_5;
typedef struct { struct_10_5 field_0, field_10, field_20; } struct_30_2;
typedef struct { u8 field_0[0x34]; } struct_34_4;
typedef struct { unsigned field_0_b0 : 31; unsigned field_3_b7 : 1; } struct_4_9;
extern u8 D_sc03_054_801F10C0;
extern u8 D_sc03_054_801F10E0;
extern u8 D_sc03_054_801F10F8;
extern u8 D_sc03_054_801F1118;
extern u8 D_sc03_054_801F1138;
extern u8 D_sc03_054_801F1158;
extern s16 D_sc03_054_801F1480;
extern s16 D_sc03_054_801F1482;
extern s32 GetProgress();
extern s32 PlaySoundId();
extern void RunScript();
extern void SetProgress();
extern void SetFlag();
extern s32 GetFlag();
extern s32 func_8018766C();
extern void TakeItem();

void func_sc03_054_801EF558(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, s16, 2) = 6;
    D_sc03_054_801F1480 = 0;
    D_sc03_054_801F1482 = 0;
    temp_v0 = GetProgress();
    if (temp_v0 < 0x28) {
        PlaySoundId(0x12, 0);
        RunScript((s32) arg0, (s32) &D_sc03_054_801F10C0);
        SetProgress(0x28);
        SetFlag(0xE3, 1);
        AF(arg0, s16, 0x34) = 0;
    } else if (temp_v0 < 0x32) {
        PlaySoundId(0x12, 0);
        RunScript((s32) arg0, (s32) &D_sc03_054_801F10E0);
        AF(arg0, s16, 0x34) = 1;
    } else if (GetFlag(0xE4) & 0xFF) {
        PlaySoundId(0x12, 0);
        RunScript((s32) arg0, (s32) &D_sc03_054_801F10F8);
        AF(arg0, s16, 0x34) = 5;
    } else if (temp_v0 < 0x3C) {
        PlaySoundId(0x12, 0);
        RunScript((s32) arg0, (s32) &D_sc03_054_801F1118);
        AF(arg0, s16, 0x34) = 2;
    } else if (temp_v0 < 0x46) {
        if (func_8018766C(0, 5) != 0) {
            PlaySoundId(0x12, 0);
            RunScript((s32) arg0, (s32) &D_sc03_054_801F1158);
            TakeItem(0x4D);
            AF(arg0, s16, 0x34) = 6;
        } else {
            PlaySoundId(0x12, 0);
            RunScript((s32) arg0, (s32) &D_sc03_054_801F1138);
            AF(arg0, s16, 0x34) = 2;
        }
    }
}

extern u8 D_sc03_054_801F11D0;
extern u8 D_sc03_054_801F12A8;
extern u8 D_sc03_054_801F12C0;
extern u8 D_sc03_054_801F12E0;
extern u8 D_sc03_054_801F1300;
extern u8 D_sc03_054_801F1310;
extern u8 D_sc03_054_801F1338;
extern u8 D_sc03_054_801F13C8;
extern u8 D_sc03_054_801F13F8;
extern s32 RequestBgmPack();
extern void MusicCommandPark();
extern s32 StartMapMusic();
extern s32 FindItem();
extern void FreeActor();
extern s32 IsEventDone();
extern s32 UpdateScript();
extern void EndEvent();
extern void func_80186890();

void func_sc03_054_801EF6D8(u8 *arg0) {
    s32 s;
    s32 s3;
    s32 t;
    s32 v;
    struct_4_2 *p;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        if (UpdateScript(arg0) == 0) {
            return;
        }
        if (FindItem(0xD) != 0) {
            s = 0xD;
        } else if (FindItem(0xE) != 0) {
            s = 0xE;
        } else if (FindItem(0xF) != 0) {
            s = 0xF;
        } else if (FindItem(0x10) != 0) {
            s = 0x10;
        } else {
            s = 0;
        }
        t = FindItem(0x4C);
        if (s != 0) {
            if (t != 0) {
                RunScript(arg0, &D_sc03_054_801F1300);
                AF(arg0, u16, 0x34) = 3;
            } else {
                RunScript(arg0, &D_sc03_054_801F12E0);
                AF(arg0, u16, 0x34) = 2;
            }
        } else if (t != 0) {
            RunScript(arg0, &D_sc03_054_801F12C0);
            AF(arg0, u16, 0x34) = 2;
        } else {
            RunScript(arg0, &D_sc03_054_801F12A8);
            AF(arg0, u16, 0x34) = 2;
        }
        break;
    case 1:
        if (UpdateScript(arg0) == 0) {
            return;
        }
        if (FindItem(0xD) != 0) {
            s = 0xD;
        } else if (FindItem(0xE) != 0) {
            s = 0xE;
        } else if (FindItem(0xF) != 0) {
            s = 0xF;
        } else if (FindItem(0x10) != 0) {
            s = 0x10;
        } else {
            s = 0;
        }
        t = FindItem(0x4C);
        if (s != 0) {
            if (t != 0) {
                RunScript(arg0, &D_sc03_054_801F1300);
                AF(arg0, u16, 0x34) = 3;
            } else {
                RunScript(arg0, &D_sc03_054_801F12E0);
                AF(arg0, u16, 0x34) = 2;
            }
        } else if (t != 0) {
            RunScript(arg0, &D_sc03_054_801F12C0);
            AF(arg0, u16, 0x34) = 2;
        } else {
            RunScript(arg0, &D_sc03_054_801F12A8);
            AF(arg0, u16, 0x34) = 2;
        }
        break;
    case 2:
        if (IsEventDone(arg0) != 0) {
            EndEvent(arg0);
            PlaySoundId(0x13, 0);
            func_80186890(arg0);
        }
        break;
    case 3:
        v = UpdateScript(arg0);
        if (v == 0) {
            return;
        }
        if (v == 2) {
            RunScript(arg0, &D_sc03_054_801F1310);
            AF(arg0, u16, 0x34) = 2;
            return;
        }
        RunScript(arg0, &D_sc03_054_801F1338);
        AF(arg0, u16, 0x34) = 5;
        if (FindItem(0xD) != 0) {
            s3 = 0xD;
        } else if (FindItem(0xE) != 0) {
            s3 = 0xE;
        } else if (FindItem(0xF) != 0) {
            s3 = 0xF;
        } else if (FindItem(0x10) != 0) {
            s3 = 0x10;
        } else {
            s3 = 0;
        }
        TakeItem(s3);
        TakeItem(0x4C);
        break;
    case 4:
    case 5:
        v = UpdateScript(arg0);
        if (v == 0) {
            return;
        }
        if (v == 2) {
            SetProgress(0x32);
            SetFlag(0xE4, 1);
            SetFlag(0xE5, 0);
            RunScript(arg0, &D_sc03_054_801F13C8);
        } else {
            SetProgress(0x32);
            SetFlag(0xE4, 0);
            SetFlag(0xE5, 1);
            RunScript(arg0, &D_sc03_054_801F13F8);
        }
        AF(arg0, u16, 0x34) = 2;
        break;
    case 6:
        p = (struct_4_2 *)&D_sc03_054_801F1480;
        switch (D_sc03_054_801F1480) {
        case 0:
        case 3:
        case 6:
            break;
        case 1:
            MusicCommandPark(1);
            p->field_2 = 0;
            p->field_0 = 2;
            PlaySoundId(0x13, 0);
            break;
        case 2:
            if (++p->field_2 >= 0x1E && RequestBgmPack(0x1B) != 0) {
                p->field_0 = 3;
            }
            break;
        case 4:
            MusicCommandPark(1);
            p->field_2 = 0;
            p->field_0 = 5;
            break;
        case 5:
            if (++p->field_2 >= 0x1E && StartMapMusic() == 1) {
                p->field_0 = 6;
            }
            break;
        }
        if (UpdateScript(arg0) != 0) {
            AF(arg0, u16, 0x34) = 7;
        }
        break;
    case 7:
        p = (struct_4_2 *)&D_sc03_054_801F1480;
        switch (D_sc03_054_801F1480) {
        case 0:
        case 3:
        case 6:
            break;
        case 1:
            MusicCommandPark(1);
            p->field_2 = 0;
            p->field_0 = 2;
            PlaySoundId(0x13, 0);
            break;
        case 2:
            if (++p->field_2 >= 0x1E && RequestBgmPack(0x1B) != 0) {
                p->field_0 = 3;
            }
            break;
        case 4:
            MusicCommandPark(1);
            p->field_2 = 0;
            p->field_0 = 5;
            break;
        case 5:
            if (++p->field_2 >= 0x1E && StartMapMusic() == 1) {
                p->field_0 = 6;
            }
            break;
        }
        if (D_sc03_054_801F1480 == 3) {
            RunScript(arg0, &D_sc03_054_801F11D0);
            AF(arg0, u16, 0x34) = 8;
        }
        break;
    case 8:
        p = (struct_4_2 *)&D_sc03_054_801F1480;
        switch (D_sc03_054_801F1480) {
        case 0:
        case 3:
        case 6:
            break;
        case 1:
            MusicCommandPark(1);
            p->field_2 = 0;
            p->field_0 = 2;
            PlaySoundId(0x13, 0);
            break;
        case 2:
            if (++p->field_2 >= 0x1E && RequestBgmPack(0x1B) != 0) {
                p->field_0 = 3;
            }
            break;
        case 4:
            MusicCommandPark(1);
            p->field_2 = 0;
            p->field_0 = 5;
            break;
        case 5:
            if (++p->field_2 >= 0x1E && StartMapMusic() == 1) {
                p->field_0 = 6;
            }
            break;
        }
        UpdateScript(arg0);
        break;
    case 9:
        p = (struct_4_2 *)&D_sc03_054_801F1480;
        switch (D_sc03_054_801F1480) {
        case 0:
        case 3:
        case 6:
            break;
        case 1:
            MusicCommandPark(1);
            p->field_2 = 0;
            p->field_0 = 2;
            PlaySoundId(0x13, 0);
            break;
        case 2:
            if (++p->field_2 >= 0x1E && RequestBgmPack(0x1B) != 0) {
                p->field_0 = 3;
            }
            break;
        case 4:
            MusicCommandPark(1);
            p->field_2 = 0;
            p->field_0 = 5;
            break;
        case 5:
            if (++p->field_2 >= 0x1E && StartMapMusic() == 1) {
                p->field_0 = 6;
            }
            break;
        }
        D_sc03_054_801F1480 = 4;
        AF(arg0, u16, 0x34) = 0xA;
        break;
    case 10:
        p = (struct_4_2 *)&D_sc03_054_801F1480;
        switch (D_sc03_054_801F1480) {
        case 0:
        case 3:
        case 6:
            break;
        case 1:
            MusicCommandPark(1);
            p->field_2 = 0;
            p->field_0 = 2;
            PlaySoundId(0x13, 0);
            break;
        case 2:
            if (++p->field_2 >= 0x1E && RequestBgmPack(0x1B) != 0) {
                p->field_0 = 3;
            }
            break;
        case 4:
            MusicCommandPark(1);
            p->field_2 = 0;
            p->field_0 = 5;
            break;
        case 5:
            if (++p->field_2 >= 0x1E && StartMapMusic() == 1) {
                p->field_0 = 6;
            }
            break;
        }
        if (D_sc03_054_801F1480 == 6) {
            AF(arg0, u16, 0x34) = 0xB;
        }
        break;
    case 11:
        p = (struct_4_2 *)&D_sc03_054_801F1480;
        switch (D_sc03_054_801F1480) {
        case 0:
        case 3:
        case 6:
            break;
        case 1:
            MusicCommandPark(1);
            p->field_2 = 0;
            p->field_0 = 2;
            PlaySoundId(0x13, 0);
            break;
        case 2:
            if (++p->field_2 >= 0x1E && RequestBgmPack(0x1B) != 0) {
                p->field_0 = 3;
            }
            break;
        case 4:
            MusicCommandPark(1);
            p->field_2 = 0;
            p->field_0 = 5;
            break;
        case 5:
            if (++p->field_2 >= 0x1E && StartMapMusic() == 1) {
                p->field_0 = 6;
            }
            break;
        }
        if (IsEventDone(arg0) != 0 && D_sc03_054_801F1480 == 6) {
            EndEvent(arg0);
            PlaySoundId(0x13, 0);
            SetProgress(0x46);
            SetFlag(0xE7, 1);
            FreeActor(AF(arg0, void *, 0xD4));
            FreeActor(arg0);
        }
        break;
    }
}

extern u8 D_801EB318;
extern u8 D_sc03_054_801F1468;
extern void SpawnActor();
extern void SetScript();

void func_sc03_054_801F0048(s32 arg0) {
    SpawnActor(0x8D, arg0);
    AF(AF(arg0, void *, 0x20), s32 *, 0x24) = &D_801EB318;
    SetScript(arg0, (s32) &D_sc03_054_801F1468);
}

extern s32 FindActorByKind();

void func_sc03_054_801F0098(void) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x11A);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0xFC) = 1;
    }
}

extern void SetVar();

void func_sc03_054_801F00C8(void) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x11A);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0xFC) = 2;
        SetVar(0xCC, 1);
    }
}

void func_sc03_054_801F0104(void) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x11A);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0xFC) = 3;
    }
}

extern s16 D_sc03_054_801F1480;
void func_sc03_054_801F0134(void);

void func_sc03_054_801F0134(void) {
    D_sc03_054_801F1480 = 1;
}
