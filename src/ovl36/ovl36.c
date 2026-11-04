#include "common.h"
#include "work.h"

extern void SetOtDepthLimit(s32 a);
extern void NextGameState(void);
extern void SetGameState(u16 n);
extern void NextGameStateStep(void);
extern void NextGameStateSubStep(void);
extern void SetGameStateSubStep(s32 a);
extern void DemoClearEndRequest(void);
extern void ResetMallocHeap(void);
extern void func_80015310(void);
extern void DrawNowLoading(s32 a);
extern s32 func_8001ABBC(s32 a, s32 b, void *c, s32 d, s32 e);
extern void func_8001B324(void);
extern void func_8001B384(void);
extern void func_8001C0C8(void);
extern void func_80029254(void);
extern void func_80029344(void);
extern void func_8002AEF8(void);
extern void func_800CFBBC(void);
extern s32 func_800D02D0(s32 a);
extern s32 func_800D0488(s32 a);
extern u8 D_80078EC0;
extern u8 D_80078EC1;
extern u8 D_800AF218[];
extern u16 D_800B99F0;
extern u16 D_800B99F6;
extern u16 D_800B99FC;
extern s16 D_800B9A00;
extern s16 D_800B9A0E;
extern u8 D_800B9A10;
extern u8 D_800B9A11;
extern u8 D_800B9A12;
extern u8 D_800B9A17;
extern void (*D_800D3430[])(void);
extern void (*D_800D3480[])(void);
extern void (*D_800D3490[])(void);
extern s32 D_80114E78;
extern s16 D_801152BA;
extern s32 D_80127084;

void func_800CEDFC(void) {
    if (D_800B99F0 < 20) {
        D_800D3430[D_800B99F0]();
    }
}

void func_800CEE40(void) {
    if (D_800B99F6 < 2) {
        D_800D3480[D_800B99F6]();
    }
}

void func_800CEE84(void) {
    func_80029344();
    D_80127084 = 0;
    D_80114E78 = 0;
    if (D_800B9A00 != 0) {
        D_80127084 = 1;
    }
    func_8001B324();
    func_8002AEF8();
    func_80029254();
    func_800CFBBC();
    DemoClearEndRequest();
    SetOtDepthLimit(0x3E0);
    NextGameStateStep();
}

void func_800CEF04(void) {
    if (func_800D0488(1) != 0) {
        NextGameState();
    }
}

void func_800CEF34(void) {
    func_8001B324();
    NextGameState();
}

void func_800CEF5C(void) {
    s32 pad[2];

    func_8001B324();
    D_800B9A12 = 1;
    D_800B9A10 = 0;
    D_800B9A17 = 0;
    func_8001C0C8();
    D_800B9A0E = 0;
    NextGameState();
}

void func_800CEFB0(void) {
    NextGameState();
}

extern void ForgetStageImage(void);
extern void SetStageImage(s32 a);
extern s32 StageImageNeedsLoad(s32 a);
extern s32 LoadFileStep(void *a, s32 b, s32 c, s32 d);
extern s32 func_8001AF04(void);
extern s32 func_80128218(void);
extern s32 func_800CF8B4(void);
extern s32 func_800CFC5C(s32 a);
extern s32 func_800CFD68(s32 a);
extern void func_800CFDA4(void);
extern void func_800CFDE8(s32 a);
extern s32 func_800CFE60(void);
extern s32 func_800D0214(s32 a);
extern s32 func_800D1714(void);
extern s32 D_80072C74;
extern u8 D_800AE6BF;
extern u8 g_FileLocStageEngine[];
extern s32 g_ArchiveFileLoc[][2];
extern s16 D_800B9A08;
/* the field map table: archive file (12 bits), load mode (4) and slot (16) per map */
typedef struct { unsigned file : 12; unsigned mode : 4; signed slot : 16; } FieldMapEnt;
extern FieldMapEnt D_800D34AC[];
extern s16 D_80114E70;
extern s16 D_80114E74;
extern s32 D_80114E94;
extern s32 D_80114E98;
extern u16 D_80126B58;

typedef struct { s32 unk0; s16 unk4; s16 unk6; s32 unk8; } FieldItem;
extern void func_8001B34C(void);
extern s32 func_800291A0(s32 i, s32 v);
extern s32 func_800291B4();
extern void func_800291C8(s32 a, s16 b);
extern s32 func_800291DC(s32 a);
extern u32 func_80029504(void);
extern void func_8002D4C8(s32 a, s32 b);
extern s32 func_800D05E8();
extern void func_800D065C(void);
extern u32 func_800D0F8C(u8 a);
extern void func_800D0FE0(s32 i);
extern s16 func_800D1078(u8 a);
extern s16 func_800D10C8(u8 a);
extern s16 D_80078EAC;
extern s32 D_800A654C;
extern s32 (*D_800D375C)(s32);
extern FieldItem D_8010EDE8[];
extern s32 D_801151F8;
extern s32 D_8011529C;
extern s32 D_801201F0;
extern s32 D_80126AE8;
extern s32 D_8012704C;
extern s32 D_80127050;
extern s32 D_80127500;

typedef struct FieldTask {
    u8 pad0[0xC];
    s32 (*fn)(struct FieldTask *p);
    s32 unk10;
    u8 step;
    u8 unk15;
} FieldTask;
typedef struct { s32 unk0; s32 x, y, z; s32 vx, vy, vz; } FieldMover;
extern void func_80016714(void *p, s32 n);
extern s32 func_80029124(u32 bit, s32 on);
extern void func_80129258(void);
extern void func_801285D4(void);
extern void func_801378F0(void);
extern s32 func_800D17B8(s32 a);
extern s32 func_800D1984(FieldTask *p);
extern s32 func_800D19DC(FieldTask *p);
extern s32 func_800D1BD8(FieldTask *p);
extern void func_800D1BF8(void);
extern void func_800D1F58(void);
extern u16 D_80078E50;
extern s32 D_80078E8C;
extern u16 D_80078EB4;
extern u16 D_80078EB8;
typedef struct { s32 next; s32 unk4; s32 cur; } FieldMap;
extern FieldMap D_800AE6A8;
extern s32 D_800AE6AC;
extern s32 D_800AE6B0;
extern u16 D_800B9A0A;
extern u16 D_800B9A0C;
extern u8 D_800B9A13;
extern u8 D_80115110[];
extern s32 D_8011DB14;
extern s32 D_8011DB1C;
extern s32 D_8011DB20;
extern void (*D_8011DB24)(void);
extern s32 D_8012751C;
extern s32 D_80128150;

typedef struct {
    u8 pad0[0x15];
    u8 step;
    u8 pad16[3];
    u8 cnt;
    u8 pad1A[0xE];
    s32 timer;
} FieldStep;
typedef struct { s16 vx, vy, vz; } FieldAngle;
typedef struct { u8 pad0[0x27]; s8 unk27; } FieldObj;
extern s32 SquareRoot0(s32 a);
extern s32 ratan2(s32 y, s32 x);
extern void func_800167B8(s32 a);
extern s32 func_800167F0(s32 arg0);
extern void func_8001BFD0(void);
extern void func_8001CB6C(void *p, s32 a, s32 b, s32 c);
extern void func_8001CC3C(void *p, s32 a, s32 b, s32 c);
extern void func_8001CD9C(void *p, s32 a);
extern FieldObj *func_801465C0(s32 a);
extern void func_8016EDEC(void *fn, s32 flags);
extern void func_800D0C48(u16 a);
extern void func_800D1E28(void);
extern s32 func_800D1EBC(void);
extern void func_800D3238();
extern void func_800D3348();
extern void func_800D33B8(void);
extern void func_800D33E0(void);
extern s32 (*D_800D3920[])(FieldStep *p);
extern s32 (*D_800D3928[])(FieldStep *p);
extern s32 (*D_800D39C4[])(FieldStep *p);
extern s32 (*D_800D39F0[])(FieldStep *p);
extern s32 (*D_800D3A8C[])(FieldStep *p);

typedef struct {
    u8 pad0[0x198];
    s32 unk198;
    u8 pad19C[0x78];
    u8 step;
} FieldSeq;
extern s32 func_8013767C(s32 a);
extern s32 func_801399F0(s32 a);
extern void func_80139914(s32 a);
extern void func_8016F0E4(void);
extern void func_8016EE40(void *a, s32 b);
extern void (*D_800D3A98[])(FieldSeq *p);
extern void (*D_800D3AA4[])(FieldSeq *p);
extern s32 D_800D3AAC;
extern s32 D_800D3AB0;

typedef struct {
    u32 *ot;
    u8 pad4[8];
    u32 *otLast;
    u8 pad10[4];
} OtInfo;
extern int DrawSync(int mode);
extern int VSync(int mode);
extern void DrawOTag(u32 *p);
extern void LoadQueueStep(void);
extern void func_8001B85C(void);
extern s32 func_8001B86C(s32 a);
extern void func_80128158(void);
extern OtInfo D_800A651C[];
extern void (*D_800D3488[])(void);
extern s32 D_80114E9C;

void func_800CEFD0(void) {
    register Work *w = &D_800AF630;

    D_80114E98 = 0;
    D_80114E9C = 0;
    func_8001B85C();
loop:
    if (D_80114E98 == 0) {
        D_800D3488[D_800B99F6]();
    }
    if (D_80114E9C == 0) {
        D_80114E9C = func_8001B86C(0);
    }
    if (D_80114E98 != 0 && D_80114E9C != 0) {
        SetGameState(7);
        return;
    }
    DrawSync(0);
    VSync(w->vsyncMode);
    DrawOTag(D_800A651C[w->frame].ot + 1);
    LoadQueueStep();
    goto loop;
}

void func_800CF104(void) {
    register Work *w = &D_800AF630;

    D_80114E98 = 0;
    D_80114E9C = 0;
    func_8001B85C();
loop:
    if (D_80114E98 == 0) {
        D_800D3488[D_800B99F6]();
    }
    if (D_80114E9C == 0) {
        D_80114E9C = func_8001B86C(1);
    }
    if (D_80114E98 != 0 && D_80114E9C != 0) {
        SetGameState(7);
        return;
    }
    DrawSync(0);
    VSync(w->vsyncMode);
    DrawOTag(D_800A651C[w->frame].ot + 1);
    LoadQueueStep();
    goto loop;
}

void func_800CF238(void) {
    register Work *w = &D_800AF630;

    D_80114E98 = 0;
    func_8001B85C();
loop:
    if (D_80114E98 == 0) {
        D_800D3488[D_800B99F6]();
        if (D_80114E98 == 0) {
            goto draw;
        }
    }
wait:
    func_80128158();
    if ((u16)w->stateFlag == 0) {
        VSync(w->vsyncMode);
        LoadQueueStep();
        goto wait;
    }
    SetGameState(8);
    return;
draw:
    DrawSync(0);
    VSync(w->vsyncMode);
    DrawOTag(D_800A651C[w->frame].ot + 1);
    LoadQueueStep();
    goto loop;
}

void func_800CF370(void) {
    DrawNowLoading(0);
    SetGameState(0xF);
}

void func_800CF398(void) {
    NextGameState();
}

extern s32 func_800CFBF8(void);

void func_800CF3B8(void) {
    register Work *w = &D_800AF630;

    D_80114E98 = 0;
    D_80114E9C = 0;
    func_8001B85C();
loop:
    if (D_80114E98 == 0) {
        D_800D3488[D_800B99F6]();
        if (D_80114E98 == 0) {
            VSync(w->vsyncMode);
            LoadQueueStep();
            goto loop;
        }
    }
    func_80015310();
    SetGameState(7);
}

void func_800CF47C(void) {
    if (D_80114E78 != 0) {
        if (func_8001ABBC(0, 0, D_800AF218, 0, 0) == 0) {
            return;
        }
        D_80114E78 = 0;
    }
    NextGameStateStep();
}

void func_800CF4D4(void) {
    D_800D3490[D_800B99FC]();
}

void func_800CF510(void) {
    ResetMallocHeap();
    D_800B9A11 = 1;
    func_8001C0C8();
    func_80015310();
    func_8001B384();
    D_801152BA = 0;
    if (D_80127084 != 0) {
        NextGameStateSubStep();
    } else {
        SetGameStateSubStep(3);
    }
}

void func_800CF584(void) {
    if (D_80127084 != 0 && (D_80078EC1 == 0 || func_800D02D0(D_80078EC1) != 0)) {
        NextGameStateSubStep();
    }
}

void func_800CF5D4(void) {
    s32 t;

    if (D_80127084 != 0 && ((t = D_80078EC0 & 0x7F) == 0 || func_800D0488(t) != 0)) {
        NextGameStateSubStep();
    }
}

void func_800CF628(void) {
    s16 *m = &D_800B9A08;

    if (func_800CFC5C(*m) != 0) {
        if (D_80127084 != 0) {
            D_80114E94 = *m;
            *m = func_800CFBF8();
        cfc:
            NextGameStateSubStep();
            return;
        }
        D_80114E94 = *m;
        if (func_800CFD68(*m = func_800CFBF8()) != 0) {
            goto cfc;
        }
        *m = D_80114E94;
        SetGameStateSubStep(5);
        return;
    }
    D_80127084 = 0;
    if (func_800CFD68(*m) == 0) {
        D_80114E98 = 1;
        return;
    }
    SetGameStateSubStep(6);
}

void func_800CF714(void) {
    ForgetStageImage();
    if (func_800CFE60() != 0) {
        func_800CFDA4();
        D_800B9A08 = D_80114E94;
        NextGameStateSubStep();
    }
}

void func_800CF764(void) {
    if (func_800D0214(func_80128218()) != 0) {
        D_80127084 = 0;
        D_80114E98 = 1;
    }
}

void func_800CF7A4(void) {
    ForgetStageImage();
    if (func_8001AF04() != 2 && func_800CFE60() != 0) {
        func_800CFDA4();
        D_80127084 = 0;
        D_80114E98 = 1;
    }
}

void func_800CF804(void) {
    D_80127084 = 1;
}

void func_800CF818(void) {
    D_80114E78 = 1;
}

void func_800CF82C(void) {
    D_800B9A0E = 1;
}

void func_800CF840(void) {
    D_800B9A0E = 2;
}

s32 func_800CF854(void) {
    return D_800AE6BF != 0;
}

s32 func_800CF864(void) {
    if (D_800B9A08 != 0x3069) {
        if (D_80126B58 != 0x1A) {
            return func_800CF8B4();
        }
        return 1;
    }
    return 1;
}

s32 func_800CF8B4(void) {
    return D_800B99F0 == 9;
}

s32 func_800CF8CC(void) {
    return D_800B99F0 == 10;
}

void func_800CF8E4(void) {
    s32 m = func_800D1714();

    if (func_800CFC5C(m) == 0 && func_800CFC5C(D_800B9A08) == 0 && func_800CFD68(m) != 0) {
        func_800CFDE8(m);
    }
}

void func_800CF94C(void) {
    if (LoadFileStep(g_FileLocStageEngine, D_80072C74, 0, 0) != 0) {
        NextGameState();
    }
}

extern void func_800CFAD0(void);
extern s32 D_800C7C60;
extern void *D_800C7C64[];
extern s32 D_800A2E20;
extern s16 D_800D3408[];

void func_800CF990(void) {
    switch (D_800B99F6) {
    case 0:
        func_8001C0C8();
        func_80015310();
        if (func_8001ABBC(0, 0, g_ArchiveFileLoc[D_800D3408[D_80114E74]], 0, 0) != 0) {
            func_800167B8(0);
            NextGameStateStep();
        }
        break;
    case 1:
        func_800CFAD0();
        if (func_800167F0(0) & 0xFFFF) {
            NextGameStateStep();
        }
        break;
    case 2:
        func_800CFAD0();
        if (++D_800B9A00 >= 0x5B && D_800AF630.dispIdx != 0) {
            SetGameState(6);
        }
        break;
    }
}

extern s32 func_8001AAA0(s32 a);
extern void func_8002F5C8(void *p);
extern s32 D_80072C7C;
typedef struct { s32 file; s32 arg; } FieldLoad;
extern FieldLoad D_800D384C[];
extern u8 D_800CA23C[], D_800C8448[], D_800CA84C[], D_800CA3E4[], D_800CA344[], D_800C83AC[], D_800C9A30[];
extern u8 D_800C9158[], D_800C9310[], D_800C83A0[], D_800C8058[], D_800CADE8[], D_800C8500[], D_800C8514[];
extern u8 D_800C9140[];

extern s16 func_800D128C(s32 k, s16 v);
typedef struct { u8 pad0[0x34]; s16 unk34; u8 unk36; u8 unk37; } FieldStats;
extern FieldStats D_80078E78;
typedef struct { u8 unk0; u8 unk1; u8 pad2[10]; } FieldItemDef;
extern FieldItemDef D_8010EDF0[];

extern void func_800168B4(s32 a);
extern s32 func_800168C4(s32 a);
extern void func_800D185C(void *p);
extern s32 D_800AE6B4;
extern u8 D_800AE6BC;
extern s32 D_80114EA8;
extern s32 D_80159698;
extern u16 *D_800D38D8[];
typedef struct { s32 unk0; s32 unk4; } FieldDest;

typedef struct { void (*fn[3])(FieldMap *m); } FieldFn3;
extern FieldFn3 D_801141BC;
typedef struct { u8 pad0[0x12]; s16 unk12; s16 pad14; s16 unk16; s16 pad18; s16 unk1A; u8 pad1C[0x10]; s32 unk2C; } FieldDir;

extern void VectorNormalSS(SVECTOR *v0, SVECTOR *v1);
typedef struct { u8 pad0[0x5C]; s32 x, y, z; } FieldCam;
extern FieldCam *D_801151D4;
typedef struct { s16 pad0[3]; s16 x; s16 pad8; s16 y; s16 padC; s16 z; } FieldPos;

extern s16 func_800CFBE8(void);
extern void func_800CF8E4(void);
extern void func_800D1D24(void);
extern s32 func_800D1DB0(void);
extern s32 DemoEndRequested();
extern void SetMode(s32 a);
extern s32 func_8002AF08();
extern s32 func_80029264();
extern void func_8001BE20();
extern s32 func_8001BE30();
typedef struct { s32 next, unk4, cur; u8 padC[8]; u8 step; u8 pad15[2]; u8 unk17; } FieldMapS;
typedef struct { u8 pad0[0x1C]; void (*fn)(void); } FieldDestFn;
typedef struct { s32 (*fn[3])(FieldMapS *m); } FieldFn3S;
extern FieldFn3S D_801141C8;
extern u8 D_80126BA6;

typedef struct { s32 w[9]; } FieldBlk24;
typedef struct { s32 next, unk4, cur; u8 padC[0xA]; u8 unk16; u8 pad17[2]; u8 unk19; } FieldMapX;

extern void StopPadRumble(void);
extern u16 D_800B9A02;
extern u16 D_80115114;
extern s16 D_80115124;
extern s16 D_8011512A;
extern u8 *D_801151C8;
extern u8 *D_801151CC;
extern GsOT D_800A6518[];
extern u8 g_PrimBuf[];
extern u8 D_800856B0[];
typedef struct { s32 v; } S32R;
extern S32R D_80115168[];

extern s32 D_80072C78;
/* the field's package table: the archive file and a word per package */
typedef struct { s32 file; s32 unk4; } FieldPkg;
extern FieldPkg D_800D3764[];

extern OtInfo D_800AE7BC[];
typedef struct { unsigned addr : 24; unsigned len : 8; } OtTag;
typedef struct {
    u32 tag;
    u32 code;
    s16 x, y;
    u8 u, v;
    u16 clut;
    s16 w, h;
} FieldSprt;

typedef struct {
    u32 tag;
    u32 code;
    s16 x0, y0;
    u8 u0, v0;
    u16 clut;
    s16 x1, y1;
    u8 u1, v1;
    u16 tpage;
    s16 x2, y2;
    u8 u2, v2;
    u16 pad1E;
    s16 x3, y3;
    u8 u3, v3;
    u16 pad26;
} FieldFt4;

typedef struct {
    u32 tag;
    u32 c0;
    s16 x0, y0;
    u32 c1;
    s16 x1, y1;
    u32 c2;
    s16 x2, y2;
    u32 c3;
    s16 x3, y3;
} FieldG4;
typedef struct { u32 tag; u32 code; } FieldTPage;
#define ADDPRIM2(p) \
    ((OtTag *)(p))->addr = ((OtTag *)(D_800AE7BC[D_800AF630.frame].ot + 2))->addr; \
    ((OtTag *)(D_800AE7BC[D_800AF630.frame].ot + 2))->addr = (u32)(p)

extern s32 D_800A2B70;
extern u32 D_800BA0FC;
extern s32 D_80114EA0;

typedef struct {
    u32 tag;
    u32 tpage;
    u8 r0, g0, b0, code;
    s16 x0, y0;
    u8 u0, v0;
    u16 clut;
    s16 w, h;
} FieldSprtTp;
extern u32 D_800AA60C[][0x1000];
extern FieldSprtTp D_80114E7C;

/* Build the field's 256x144 sprite (texture page 0xE1000085, neutral colour) and link it into this frame's ordering
 * table */
void func_800CFAD0(void) {
    setlen(&D_80114E7C, 5);
    D_80114E7C.tpage = 0xE1000085;
    D_80114E7C.code = 0x64;
    D_80114E7C.r0 = D_80114E7C.g0 = D_80114E7C.b0 = 0x80;
    D_80114E7C.x0 = -0x80;
    D_80114E7C.y0 = -0x48;
    D_80114E7C.clut = 0x7800;
    D_80114E7C.w = 0x100;
    D_80114E7C.h = 0x90;
    D_80114E7C.u0 = 0;
    D_80114E7C.v0 = 0;
    addPrim(D_800AA60C[D_800B9A02], &D_80114E7C);
}

void func_800CFBBC(void) {
    D_80114E70 = 0;
}

void func_800CFBCC(s16 a) {
    D_80114E70 = 1;
    D_80114E74 = a;
}

s16 func_800CFBE8(void) {
    return D_80114E70;
}

s32 func_800CFBF8(void) {
    s32 r = func_800CFC5C(D_800B9A08);

    if (r == 1) {
        return 0x1010;
    }
    if (r == 2) {
        return 0x1052;
    }
    if (r == 3) {
        return 0x1077;
    }
    if (r == 4) {
        return 0x1094;
    }
    return 0x1010;
}

s32 func_800CFC5C(s32 a) {
    if (a == 0x2013) return 1;
    if (a == 0x2015) return 1;
    if (a == 0x2016) return 1;
    if (a == 0x2017) return 1;
    if (a == 0x2018) return 1;
    if (a == 0x2019) return 1;
    if (a == 0x201A) return 1;
    if (a == 0x2055) return 2;
    if (a == 0x2056) return 2;
    if (a == 0x2057) return 2;
    if (a == 0x2058) return 2;
    if (a == 0x2059) return 2;
    if (a == 0x205A) return 2;
    if (a == 0x205B) return 2;
    if (a == 0x207A) return 3;
    if (a == 0x207B) return 3;
    if (a == 0x207C) return 3;
    if (a == 0x207D) return 3;
    if (a == 0x207E) return 3;
    if (a == 0x207F) return 3;
    if (a == 0x2080) return 3;
    if (a == 0x2097) return 4;
    if (a == 0x2098) return 4;
    if (a == 0x2099) return 4;
    if (a == 0x209A) return 4;
    if (a == 0x209B) return 4;
    if (a == 0x209C) return 4;
    if (a == 0x209D) return 4;
    return 0;
}

s32 func_800CFD68(s32 a) {
    return StageImageNeedsLoad(D_800D34AC[a & ~0xF000].file);
}

void func_800CFDA4(void) {
    SetStageImage(D_800D34AC[D_800B9A08 & ~0xF000].file);
}

void func_800CFDE8(s32 a) {
    s32 i = D_800D34AC[a & ~0xF000].file;

    if (i >= 0 && g_ArchiveFileLoc[i][0] != 0) {
        func_8001ABBC(2, 0, g_ArchiveFileLoc[i], 0, 0);
    }
}

extern s32 func_80029178(s32 n);
extern void func_8002F620(void);
extern s32 func_8002F648(void);
extern s32 func_8002F658(void);
void func_800D00E4(s32 a);

s32 func_800CFE60(void) {
    register Work *w = &D_800AF630;
    u32 mask = 0xFFFF0FFF;
    s32 file;
    s32 slot;
    s32 mode;
    s32 r;
    s32 *p;
    s32 t;
    s32 v;
    s32 k;
    s32 m;
    k = D_800B9A08 & mask;
    slot = D_800D34AC[k].slot;
    file = D_800D34AC[k].file;
    v = func_8002F648();
    m = D_800D34AC[D_800B9A08 & mask].mode;
    if (v == m) {
        mode = -1;
    } else if (v == 0) {
        mode = 0;
    } else {
        mode = 0;
        func_8002F620();
    }
    t = func_80029504();
    if (w->mapId == 0x300B && w->unkA3DE != 0) {
        slot = 8;
        file = 0x8A;
    }
    if (w->mapId == 0x3001 && t < 5) {
        file = 0x37;
    }
    if (w->mapId == 0x304E) {
        if (func_80029178(0x17) & 0xFF) {
            file = 0x129;
            slot = 0x2F;
        }
    }
    if (w->mapId == 0x1077 && t >= 0x2A8) {
        file = 0x151;
        slot = 0x34;
    }
    if (w->mapId == 0x3021 && (func_80029178(0xB9) & 0xFF)) {
        file = 0xC1;
        slot = 0x41;
    }
    v = func_8002F658();
    if (v != slot || mode >= 0) {
        s32 *q = &D_800C7C60;
        *q = slot;
        p = q;
        D_800C7C64[0] = &D_800A2E20;
    } else {
        p = NULL;
    }
    if (file >= 0) {
        r = 1;
        if (g_ArchiveFileLoc[file][0] != 0) {
            r = LoadFileStep(g_ArchiveFileLoc[file], D_80072C74, mode, (s32)p);
        }
    } else {
        r = 1;
    }
    if (mode == 0) {
        if (r & 1) {
            func_800D00E4(D_800D34AC[w->mapId & 0xFFFF0FFF].mode);
        }
    }
    return r;
}

void func_800D00E4(s32 a) {
    void *p;

    switch (a) {
    case 1: p = D_800CA23C; break;
    case 2: p = D_800C8448; break;
    case 3: p = D_800CA84C; break;
    case 4: p = D_800CA3E4; break;
    case 5: p = D_800CA344; break;
    case 6: p = D_800C83AC; break;
    case 7: p = D_800C9A30; break;
    case 8: p = D_800C9158; break;
    case 9: p = D_800C9310; break;
    case 10: p = D_800C83A0; break;
    case 11: p = D_800C8058; break;
    case 12: p = D_800CADE8; break;
    case 13: p = D_800C8500; break;
    case 14: p = D_800C8514; break;
    case 15: p = D_800C9140; break;
    default: return;
    }
    func_8002F5C8(p);
}

s32 func_800D0214(s32 a) {
    s32 *p = &D_800C7C60;
    s32 k = D_800B9A08 & ~0xF000;
    s32 i;
    s32 t;

    i = D_800D34AC[k].file;
    t = D_800D34AC[k].slot;
    D_800C7C64[0] = &D_800A2E20;
    *p = t;
    if (i >= 0) {
        if (g_ArchiveFileLoc[i][0] != 0) {
            return LoadFileStep(g_ArchiveFileLoc[i], a, 0, (s32)p);
        }
        return 1;
    }
    return 1;
}

void func_800D02C0(s32 (*f)(s32)) {
    D_800D375C = f;
}

/* a package number (1 to 30) to its slot and its archive file loaded; 1 when nothing is to load */
s32 func_800D02D0(s32 n) {
    s32 r;
    s32 *p;
    s32 t;
    switch (n) {
    case 5: n = 1; break;
    case 1: n = 3; break;
    case 8: n = 2; break;
    case 7: n = 0; break;
    case 13: n = 4; break;
    case 17: n = 5; break;
    case 12: n = 6; break;
    case 3: n = 7; break;
    case 2: n = 9; break;
    case 4: n = 0xA; break;
    case 6: n = 0xB; break;
    case 18: n = 0xC; break;
    case 15: n = 8; break;
    case 22: n = 0xD; break;
    case 24: n = 0xE; break;
    case 21: n = 0xF; break;
    case 20: n = 0x10; break;
    case 19: n = 0x11; break;
    case 26: n = 0x12; break;
    case 9: n = 0x13; break;
    case 11: n = 0x14; break;
    case 16: n = 0x15; break;
    case 10: n = 0x16; break;
    case 23: n = 0x17; break;
    case 25: n = 0x18; break;
    case 27: n = 0x19; break;
    case 28: n = 0x1A; break;
    case 29: n = 0x1B; break;
    case 30: n = 0x1C; break;
    default: n = -1; break;
    }
    t = D_800D3764[n].unk4;
    p = &D_800C7C60;
    D_800C7C64[0] = &D_800A2E20;
    *p = t;
    if (n >= 0) {
        r = func_8001ABBC(0, 0, g_ArchiveFileLoc[D_800D3764[n].file], D_80072C78, (s32)p);
    } else {
        r = 1;
    }
    if (r != 0) {
        func_8001B384();
    }
    return r;
}

s32 func_800D0488(s32 a) {
    s32 *p;
    s32 i;
    s32 t;
    s32 r;

    switch (a) {
    case 1: i = 0; break;
    case 2: i = 1; break;
    case 3: i = 2; break;
    case 4: i = 3; break;
    case 5: i = 4; break;
    case 6: i = 5; break;
    default: i = -1; break;
    }
    t = D_800D384C[i].arg;
    D_800C7C64[0] = &D_800A2E20;
    p = &D_800C7C60;
    *p = t;
    if (i >= 0) {
        r = func_8001ABBC(0, 0, g_ArchiveFileLoc[D_800D384C[i].file], D_80072C7C, (s32)p);
    } else {
        r = 1;
    }
    if (r != 0) {
        func_8001B384();
    }
    return r;
}

void func_800D0588(void) {
    s32 r = func_800D05E8(D_800B9A08);
    s32 v;

    if (r != 0) {
        v = func_8001ABBC(1, r, 0, 0, 0);
    } else {
        v = 1;
    }
    if (v != 0) {
        D_8012704C = 0;
    }
}

s32 func_800D05E8(void) {
    s32 r = 0;
    s32 t = func_80029504();

    if (D_800D375C != NULL) {
        r = D_800D375C(t);
    }
    return r;
}

void func_800D0630(void) {
    func_800D065C();
    D_8011529C = -1;
}

void func_800D065C(void) {
    D_801151F8 = 0;
    D_80126AE8 = 0;
    D_80127500 = 0;
    D_8012704C = 0;
    D_801201F0 = 0;
    D_80127050 = 0;
}

void func_800D0694(void) {
    D_801151F8 = 0;
    D_80126AE8 = 0;
    D_80127500 = 0;
    D_8012704C = 0;
    D_801201F0 = 0;
    D_80127050 = 0;
}

void func_800D06CC(void) {
    D_801151F8 = 3;
    D_80127500 = 3;
}

/* a per-frame sound state pair. D_80127500: in maps 0x1010-0x1011, 0x1077-0x1078 and 0x1094-0x1095, unless
   func_80029504() is in 0x460-0x491 or 0x64-0x81, sound 0x518 or 0x517 is started by D_80078E78.unk37 (1, or 3-4)
   and stopped (0xD) after 0x97 frames; in maps 0x3014 / 0x301C, 0x683 starts or stops with unk37 4 / 0.
   D_801151F8: picks the map's track id (D_80114EA0 when it differs from D_800A654C), waits 0x3C frames after
   func_8002D4C8(1, 2), then starts it */
void func_800D06E8(void) {
    FieldStats *st = &D_80078E78;
    s32 k;
    u32 t;
    s32 m;
    u8 c;

    switch (D_80127500) {
    case 0:
        switch (D_800B9A08) {
        case 0x1010:
        case 0x1011:
        case 0x1077:
        case 0x1078:
        case 0x1094:
        case 0x1095:
            t = func_80029504();
            if (t - 0x460 < 0x32) {
                m = 0;
            } else {
                m = 1;
                if (t - 0x64 < 0x1E) {
                    m = 0;
                }
            }
            if (!m) {
                D_800A2B70 = 0;
            }
            k = 0;
            c = st->unk37;
            if (c == 1) {
                k = 1;
            } else if (c == 3 || c == 4) {
                k = 2;
            }
            if (D_800A2B70 != 0) {
                D_80127500++;
            } else if (m && k != D_8011529C) {
                D_8011529C = k;
                if (D_80127050 != 0) {
                    D_80127050 = 0;
                } else {
                    switch (k) {
                    case 1:
                        func_8002D4C8(0x518, 0);
                        D_800A2B70 = k;
                        D_800BA0FC = 0;
                        D_80127500++;
                        break;
                    case 2:
                        func_8002D4C8(0x517, 0);
                        D_800A2B70 = k;
                        D_800BA0FC = 0;
                        D_80127500++;
                        break;
                    }
                }
            }
            break;
        case 0x3014:
        case 0x301C:
            if (st->unk37 != D_8011529C) {
                D_8011529C = st->unk37;
                if (st->unk37 == 4) {
                    func_8002D4C8(0x683, 0);
                } else if (st->unk37 == 0) {
                    func_8002D4C8(0xD, 0x683);
                }
            }
            break;
        }
        break;
    case 1:
        if (++D_800BA0FC >= 0x97) {
            switch (D_800A2B70) {
            case 1:
                func_8002D4C8(0xD, 0x518);
                break;
            case 2:
                func_8002D4C8(0xD, 0x517);
                break;
            }
            D_800A2B70 = 0;
            D_80127500 = 0;
        }
        break;
    case 2:
        if (--D_801201F0 == 0) {
            func_8002D4C8(0xD, 0x683);
            D_80127500 = 0;
        }
        break;
    }
    switch (D_801151F8) {
    case 0:
        switch (D_800B9A08) {
        case 0x1052:
        case 0x1053:
            m = 0x27;
            break;
        case 0x1010:
        case 0x1011:
        case 0x1077:
        case 0x1078:
        case 0x1094:
        case 0x1095:
            t = func_80029504();
            if (t - 0x460 < 0x32) {
                m = 0x89;
            } else if (t - 0x384 < 0x6E) {
                m = 0x65;
            } else if (t - 0x64 < 0x1E) {
                m = 0x28;
            } else if (st->unk36 == 1) {
                m = 0xF;
            } else {
                m = 0x10;
            }
            break;
        case 0x3014:
        case 0x301C:
        case 0x301E:
        case 0x3023:
            m = 0xA;
            if (st->unk37 == 4) {
                m = 0x3C;
            }
            break;
        }
        if (m != D_800A654C) {
            D_80114EA0 = m;
            D_80126AE8 = 0x3C;
            D_800A654C = 0;
            D_801151F8++;
            func_8002D4C8(1, 2);
        }
        break;
    case 1:
        if (--D_80126AE8 == 0) {
            D_801151F8++;
        }
        break;
    case 2:
        switch (D_80114EA0) {
        case 0xF:
            func_8001AAA0(0xF);
            break;
        case 0x10:
            func_8001AAA0(0x10);
            break;
        case 0xA:
            func_8002D4C8(0x10C, 0);
            break;
        case 0x3C:
            func_8002D4C8(0x13B, 0);
            break;
        }
        D_801151F8 = 0;
        D_800A654C = D_80114EA0;
        break;
    case 3:
    case 4:
        break;
    }
}

void func_800D0C48(u16 a) {
    func_8002D4C8(1, a);
    D_800A654C = 0;
}

void func_800D0C74(u16 a) {
    func_8002D4C8(1, a);
    func_8001B34C();
}

void func_800D0CA0(u16 a) {
    func_8002D4C8(1, a);
    D_800A654C = 0;
    D_801151F8 = 3;
    D_80127500 = 3;
}

s32 func_800D0CE0(void) {
    s32 r = 0;
    s32 t = func_80029504();

    if (D_800D375C != NULL) {
        r = D_800D375C(t);
    }
    if (func_8001AAA0(r) != 0) {
        D_8012704C = 0;
        D_801151F8 = 0;
        D_80126AE8 = 0;
        D_80127500 = 0;
        D_8012704C = 0;
        D_801201F0 = 0;
        D_80127050 = 0;
        D_800A654C = r;
        return 1;
    }
    return 0;
}

extern u8 D_80078EB0;
extern u8 D_80078EB1;
typedef union { s16 w; struct { u8 lo, hi; } b; } ClockDiff;

s16 func_800D0D7C(u8 h, u8 m) {
    ClockDiff r;
    r.b.lo = D_80078EB0;
    r.b.hi = D_80078EB1;
    if (r.b.lo >= m) {
        r.b.lo -= m;
    } else {
        r.b.lo = 0x3C - (m - r.b.lo);
        h++;
    }
    if (r.b.hi >= h) {
        r.b.hi -= h;
    } else {
        r.b.hi = 0x18 - (h - r.b.hi);
    }
    return r.w;
}

typedef struct { u8 lo, hi; } FieldClock;

s16 func_800D0E30(FieldClock *c) {
    ClockDiff r;

    r.b.hi = c->hi - D_80078EB1;
    r.b.lo = c->lo - D_80078EB0;
    if (r.b.lo >= 60) {
        r.b.lo += 60;
        r.b.hi--;
    }
    if (r.b.hi >= 24) {
        r.b.hi += 24;
    }
    return r.w;
}

u32 func_800D0EC4(void) {
    u32 i;

    for (i = 0x2F; i < 0x3B; i++) {
        if (!(func_800291B4(i) & 0xFF)) {
            return i;
        }
    }
    return 0;
}

void func_800D0F0C(s32 i, u8 v) {
    func_800291A0(i, v);
    func_800291C8(i * 2 - 0x4A, D_80078EAC);
}

u32 func_800D0F4C(u8 a) {
    u32 r = func_800D0F8C(a);

    if (r != 0) {
        func_800D0FE0(r);
        return r;
    }
    return 0;
}

u32 func_800D0F8C(u8 a) {
    u32 i;

    for (i = 0x2F; i < 0x3B; i++) {
        if ((u8)func_800291B4(i) == a) {
            return i;
        }
    }
    return 0;
}

void func_800D0FE0(s32 i) {
    func_800291A0(i, 0);
}

s16 func_800D1000(s32 i) {
    return func_800291DC(i * 2 - 0x4A);
}

s16 func_800D1028(void) {
    return func_800D1078(func_800291B4());
}

s32 func_800D1054(u8 a) {
    return D_8010EDE8[a].unk0;
}

s16 func_800D1078(u8 a) {
    return D_8010EDE8[a].unk4;
}

s16 func_800D109C(void) {
    return func_800D10C8(func_800291B4());
}

s16 func_800D10C8(u8 a) {
    return D_8010EDE8[a].unk6;
}

void func_800D10EC(void) {
    FieldStats *st = &D_80078E78;
    s16 i;

    for (i = 0; i < 12; i++) {
        u8 k = func_800291B4(i + 0x2F);
        if (k != 0) {
            u8 n = D_8010EDF0[k].unk0;
            if (n != 0) {
                s32 t = (s16)func_800291DC(i * 2 + 0x14);
                s32 c = st->unk34;
                if (c - t >= n) {
                    func_800291A0(i + 0x2F, D_8010EDF0[k].unk1);
                    func_800291C8(i * 2 + 0x14, D_80078EAC);
                }
            }
        }
    }
}

s16 func_800D11F0(u8 a) {
    u8 k = func_800291B4(a + 0x2F);
    s32 t;
    s16 r;

    if (k == 0) {
        return 0;
    }
    t = (s16)func_800291DC(a * 2 + 0x14);
    r = func_800D128C(k, D_80078EAC - t);
    if (r > 0) {
        func_800291A0(a + 0x2F, 0);
    }
    return r;
}

extern void func_8014BD24(u16 *p, s32 n);
extern void func_8014BB24(u16 *p, s32 n, s32 k);
extern void func_8014BCC0(u16 *p, s32 n);
extern void func_8014B944(u16 *p, s32 n, s32 k);
extern void func_8014BC0C(u16 *p, s32 n);
extern void func_8014B2A8(void);

s16 func_800D128C(s32 k, s16 n) {
    u8 item = k;
    s16 mode = 3;
    s32 r = 1;
    u16 snd = 0;
    s32 v;
    u16 *pl = &D_80126B58;

    switch (item) {
    case 0x09:
        func_8014BD24(pl, 5);
        v = 0;
        mode = 1;
        break;
    case 0x6A:
        func_8014BB24(pl, 0x12C, 1);
        v = 0x12C;
        break;
    case 0x01:
        func_8014BB24(pl, 0x96, 1);
    case 0x10:
        v = 0x96;
        break;
    case 0x02:
        func_8014BCC0(pl, 5);
        mode = 4;
        v = 0x19;
        break;
    case 0x0D:
        v = 0x19;
        break;
    case 0x03:
        func_8014BCC0(pl, 0x19);
        mode = 5;
        v = 0x19;
        break;
    case 0x11:
        func_8014BCC0(pl, 5);
        mode = 4;
        v = 0xA;
        break;
    case 0x12:
        func_8014BCC0(pl, 0xA);
        mode = 5;
        v = 0xA;
        break;
    case 0x0C:
        func_8014BCC0(pl, 5);
        mode = 5;
        v = 2;
        break;
    case 0x0B:
        func_8014BB24(pl, 0x1E, 1);
        v = 0xA;
        break;
    case 0x08:
        func_8014B944(pl, 0x500000, 1);
        v = 5;
        mode = 2;
        break;
    case 0x6D:
        func_8014B944(pl, 0x900000, 1);
        v = 5;
        mode = 2;
        break;
    case 0x04:
        mode = 7;
        v = 0x50;
        break;
    case 0x0F:
        v = 0x50;
        break;
    case 0x05:
        mode = 7;
        v = 0x96;
        break;
    case 0x6B:
        if (n >= 0x13) {
            v = 0x14;
        } else {
            v = n + 2;
        }
        v = v * 25;
        func_8014BD24(pl, v);
        mode = 7;
        break;
    case 0x06:
        func_8014BD24(pl, 5);
        mode = 7;
        v = 0xFA;
        break;
    case 0x07:
        func_8014BD24(pl, 5);
        mode = 7;
        v = 0x3E7;
        break;
    case 0x53:
        func_8014BB24(pl, 0xA, 1);
        v = 0xA;
        break;
    case 0x54:
        func_8014BCC0(pl, 5);
        mode = 5;
        v = 5;
        break;
    case 0x55:
        func_8014BB24(pl, 0x32, 1);
        v = 0x32;
        break;
    case 0x70:
        func_8014BC0C(pl, 0x19);
        mode = 7;
        v = 0x3E7;
        break;
    case 0x4C:
    case 0x71:
        mode = 7;
        v = 5;
        break;
    case 0x72:
        func_8014BB24(pl, 0x64, 1);
        v = 0x32;
        break;
    case 0x0E:
        v = 0x32;
        break;
    case 0x73:
        func_8014BB24(pl, 0x96, 1);
        v = 0x64;
        break;
    case 0x69:
        v = 0x64;
        break;
    case 0x74:
        func_8014BB24(pl, 0x96, 1);
        v = 0xC8;
        break;
    case 0x75:
        func_8014BB24(pl, 0xC8, 1);
        v = 0x96;
        break;
    case 0x76:
        func_8014BB24(pl, 0xFA, 1);
        v = 0x12C;
        break;
    case 0x68:
        v = 0x12C;
        break;
    case 0x77:
        func_8014BB24(pl, 0x1F4, 1);
        v = 0x1F4;
        break;
    case 0x57:
        v = 0xA;
        mode = 1;
        break;
    default:
        mode = 0;
        break;
    }
    switch (mode) {
    case 0:
        snd = 0x45F;
        r = 0;
        break;
    case 1:
        snd = 0x464;
        func_8014B2A8();
        func_8014BB24(pl, v, 1);
        break;
    case 2:
        func_8014BD24(pl, v);
        snd = 0x464;
        break;
    case 3:
        func_8014BD24(pl, v);
        snd = 0x45C;
        break;
    case 4:
        func_8014BD24(pl, v);
        snd = 0x463;
        break;
    case 5:
        func_8014BD24(pl, v);
        snd = 0x465;
        break;
    case 7:
        func_8014BB24(pl, v, 1);
        snd = 0x45C;
        break;
    case 8:
        func_8014BCC0(pl, v);
        snd = 0x45C;
        break;
    default:
        r = 0;
        break;
    }
    if (snd != 0) {
        func_8002D4C8(snd, 0);
    }
    return r;
}

s16 func_800D1658(u8 a) {
    s32 j = a + 0x2F;
    u8 k = func_800291B4(j);
    s32 t;
    s16 r;

    if (k == 0) {
        return 0;
    }
    t = D_8010EDE8[k].unk4;
    r = t;
    if (t > 0 || ((u16)r == 0x8000 && k != 0x27)) {
        func_800291A0(j, 0);
        func_8002D4C8(0x462, 0);
        r = 1;
    } else {
        r = 0;
        func_8002D4C8(0x45F, 0);
    }
    return r;
}

s32 func_800D1714(void) {
    return D_80078E50;
}

void func_800D1724(s32 a) {
    D_800AE6B0 = a;
}

void func_800D1734(s32 a) {
    D_800AE6A8.next = a;
}

void func_800D1744(s32 a) {
    D_800AE6AC = a;
}

void func_800D1754(void) {
    s32 t;
    s32 *m = &D_800AE6A8.next;
    if (func_800D17B8(D_800AE6B0) == 0) {
        t = m[0];
        if (t != 0) {
            m[0] = 0;
            D_800AE6B0 = t;
            func_800D17B8(t);
        }
    }
}

s32 func_800D17B8(s32 a) {
    FieldDest *d = (FieldDest *)(a & 0x80FFFFFF);

    if (d != NULL) {
        func_800D185C(d);
        if (a & 0x1000000) {
            D_800AE6B4 = (s32)&D_80159698;
            D_800AE6BC = 0;
        } else {
            D_800AE6BC = 0;
            D_80114EA8 = 0;
            D_800AE6B4 = d->unk4;
        }
        NextGameState();
        return 1;
    }
    return 0;
}

/* the map record copied to D_80078E50 and linked into the field map (r150: byte 3 read before the link store) */
void func_800D185C(void *p) {
    FieldMapX *m = (FieldMapX *)&D_800AE6A8;
    u8 b3;
    *(FieldBlk24 *)&D_80078E50 = *(FieldBlk24 *)p;
    m->unk16 = ((u8 *)p)[2];
    b3 = ((u8 *)p)[3];
    m->cur = (s32)p | (m->cur & 0x1000000);
    m->unk19 = b3;
}

void func_800D18DC(void) {
    FieldFn3 t = D_801141BC;

    t.fn[D_800AE6BC](&D_800AE6A8);
}

s32 func_800D1938(FieldTask *p) {
    func_800D1F58();
    func_801285D4();
    p->unk15 = 0;
    p->step++;
    func_800D1984(p);
    return 0;
}

s32 func_800D1984(FieldTask *p) {
    if (p->fn(p) != 0) {
        p->step++;
        return func_800D19DC(p);
    }
    return 0;
}

s32 func_800D19DC(FieldTask *p) {
    D_800B9A10 = 1;
    return 1;
}

s32 func_800D19F0(void) {
    FieldFn3S t = D_801141C8;
    FieldMapS *m = (FieldMapS *)&D_800AE6A8;

    if (D_80126BA6 != 0) {
        return 0;
    }
    if (D_800B9A08 != 0x3069) {
        switch (D_80114EA8) {
        case 0:
            func_8001BE20();
            D_80114EA8++;
        case 1:
            if (func_8001BE30() == 0) {
                return 0;
            }
            D_80114EA8++;
            if (!(D_800AE6B0 & 0x1000000)) {
                func_800CF8E4();
            }
            break;
        case 2:
            break;
        }
    }
    return t.fn[m->step](m);
}

s32 func_800D1B10(FieldTask *p) {
    func_80029124(0x119, 0);
    func_8002D4C8(4, 0x448);
    func_8002D4C8(4, 0x449);
    func_8002D4C8(4, 0x8ED);
    D_800B9A10 = 0;
    p->step++;
    p->unk15 = 0;
    do { return 0; } while (0); /* MATCH-TRICK: keeps the return 0 in its own block */
}

s32 func_800D1B80(FieldTask *p) {
    if (p->fn(p) != 0) {
        p->step++;
        return func_800D1BD8(p);
    }
    return 0;
}

s32 func_800D1BD8(FieldTask *p) {
    func_800D1BF8();
    return 1;
}

void func_800D1BF8(void) {
    FieldMapS *m = (FieldMapS *)&D_800AE6A8;

    D_800B9A0E = 0;
    ((FieldDestFn *)(D_800AE6B0 & 0x80FFFFFF))->fn();
    func_800D1D24();
    if (DemoEndRequested() != 0) {
        DemoClearEndRequest();
        SetMode(0x11);
    } else if (func_8002AF08() != 0) {
        SetGameState(0xD);
    } else if (((s32 (*)(void))func_800CFBE8)() != 0) {
        func_800CFBBC();
        SetGameState(0x13);
    } else if (func_80029264() != 0) {
        func_80029254();
        SetGameState(0x12);
    } else {
        switch (func_800D1DB0()) {
        case 0:
            SetGameState(6);
            break;
        case 1:
            SetGameState(5);
            break;
        case 2:
        default:
            SetGameState(0x10);
            break;
        }
    }
    if (m->cur & 0x1000000) {
        m->unk17 = 1;
    } else {
        m->unk17 = 0;
    }
}

void func_800D1D24(void) {
    D_800B9A11 = 1;
    D_800B9A08 = D_80078E50;
    D_800B9A0C = D_800B9A0A;
    D_800B9A0A = D_80078E50 & 0xF000;
    func_8001C0C8();
    func_80015310();
    func_80129258();
    func_801378F0();
}

s16 func_800D1D94(void) {
    return D_80078E50 & 0xF000;
}

s32 func_800D1DB0(void) {
    if (D_800B9A08 == 0x3005) {
        return 2;
    }
    if (func_800CFC5C(D_800B9A08) != 0) {
        return 2;
    }
    if (func_800CFD68(D_80078E50) == 0) {
        return 2;
    }
    if (func_800CFC5C(D_80078E50) == 0) {
        return 1;
    }
    return 2;
}

void func_800D1E20(void) {
}

void func_800D1E28(void) {
    s32 k;

    if (D_800B9A08 == 0x3005) {
        k = 2;
    } else if (func_800CFC5C(D_800B9A08) != 0) {
        k = 2;
    } else if (func_800CFD68(D_80078E50) == 0) {
        k = 2;
    } else if (func_800CFC5C(D_80078E50) != 0) {
        k = 2;
    } else {
        k = 1;
    }
    switch (k) {
    case 0:
    case 1:
        func_800168B4(4);
        break;
    case 2:
    default:
        func_800167B8(4);
        break;
    }
}

s32 func_800D1EBC(void) {
    s32 k;
    s32 r;

    if (D_800B9A08 == 0x3005) {
        k = 2;
    } else if (func_800CFC5C(D_800B9A08) != 0) {
        k = 2;
    } else if (func_800CFD68(D_80078E50) == 0) {
        k = 2;
    } else if (func_800CFC5C(D_80078E50) != 0) {
        k = 2;
    } else {
        k = 1;
    }
    switch (k) {
    case 0:
    case 1:
        r = func_800168C4(4) & 0xFFFF;
        break;
    case 2:
    default:
        r = func_800167F0(4) & 0xFFFF;
        break;
    }
    return r != 0;
}

void func_800D1F58(void) {
    D_8011DB14 = D_80078EB4;
    D_8011DB1C = D_80078EB8;
    D_80128150 = D_80078E8C;
}

void func_800D1F90(void) {
    D_80078EB4 = D_8011DB14;
    D_80078EB8 = D_8011DB1C;
    D_80078E8C = D_80128150;
}

void func_800D1FC8(FieldPos *p, u16 sh) {
    SVECTOR v;
    FieldCam *c = D_801151D4;

    v.vx = c->x - p->x;
    v.vy = c->y - p->y;
    v.vz = c->z - p->z;
    if (!(v.vx >= -0x3FFF && v.vx < 0x4000 && v.vy >= -0x3FFF && v.vy < 0x4000 && v.vz >= -0x3FFF && v.vz < 0x4000)) {
        v.vz = 0;
        v.vx = 0;
        v.vy = -0xFFF;
    }
    VectorNormalSS(&v, &v);
    p->x += v.vx >> sh;
    p->y += v.vy >> sh;
    p->z += v.vz >> sh;
}

void func_800D20C0(SVECTOR *p, SVECTOR *out, u16 sh) {
    SVECTOR v;
    FieldCam *c = D_801151D4;

    v.vx = c->x - p->vx;
    v.vy = c->y - p->vy;
    v.vz = c->z - p->vz;
    if (!(v.vx >= -0x3FFF && v.vx < 0x4000 && v.vy >= -0x3FFF && v.vy < 0x4000 && v.vz >= -0x3FFF && v.vz < 0x4000)) {
        v.vz = 0;
        v.vx = 0;
        v.vy = -0xFFF;
    }
    VectorNormalSS(&v, out);
    p->vx += out->vx >> sh;
    p->vy += out->vy >> sh;
    p->vz += out->vz >> sh;
}

FieldObj *func_800D21C4(s32 a, s32 b, s8 c) {
    FieldObj *o = func_801465C0(a);

    if (o != NULL) {
        func_8001CC3C(o, b, 0, 0);
        o->unk27 = c;
        return o;
    }
    return NULL;
}

FieldObj *func_800D222C(s32 a, s32 b, s8 c) {
    FieldObj *o = func_801465C0(a);

    if (o != NULL) {
        func_8001CB6C(o, b, 0, 0);
        o->unk27 = c;
        return o;
    }
    return NULL;
}

FieldObj *func_800D2294(s32 a, s32 b) {
    FieldObj *o = func_801465C0(a);

    if (o != NULL) {
        func_8001CD9C(o, b);
        return o;
    }
    return NULL;
}

void func_800D22E4(FieldMover *m) {
    m->x += m->vx;
    m->y += m->vy;
    m->z += m->vz;
}

void func_800D2318(FieldDir *p) {
    s32 w = p->unk2C;
    u32 m = w & 0x3FFFFFFF;
    s32 x = (s16)((m >> 14) & 0xFFC0) >> 3;
    s32 z = (s32)(w << 22) >> 19;
    s32 y = (s16)((m >> 4) & 0xFFC0) >> 3;

    p->unk12 = -ratan2(y, (s16)SquareRoot0(x * x + z * z));
    p->unk16 = ratan2(x, z);
    p->unk1A = 0;
}

void func_800D23D0(FieldAngle *v) {
    s16 x = v->vx;
    s32 z = v->vz;
    s32 y; y = v->vy;

    v->vx = -ratan2(y, SquareRoot0(x * x + z * z));
    v->vy = ratan2(x, z);
    v->vz = 0;
}

void func_800D2460(void) {
}

void func_800D2468(void) {
    func_80016714(D_80115110, 0xC4);
    D_8012751C = 0;
    D_8011DB20 = 0;
}

/* the stage mode block reset for a new map: the frame's OT descriptor copied from the other frame's, the mode fields
   cleared, the two sound buffers picked by frame, the two word arrays at +0x58 and +0x78 zeroed */
void func_800D24A0(s16 mode) {
    s32 *src;
    s32 *dst;
    s16 j;
    u8 *p;
    StopPadRumble();
    DrawSync(0);
    j = 0;
    src = (s32 *)&D_800A6518[D_800B9A02 ^ 1];
    dst = (s32 *)&D_800A6518[D_800B9A02];
    do {
        *dst++ = *src++;
        j++;
    } while ((u16)j < 5);
    j = 0;
    *(s16 *)&D_80115110[2] = 0;
    D_8011512A = 0;
    D_80115124 = 0;
    *(s16 *)D_80115110 = mode;
    D_800B9A13 = mode + 1;
    D_80115114 = D_800B9A02;
    D_801151C8 = g_PrimBuf + D_800B9A02 * 0x13880;
    D_801151CC = D_800856B0 + D_800B9A02 * 0x13880;
    for (; j < 8; j++) {
        p = D_80115110 + j * 4; *(s32 *)(p + 0x78) = 0;
        D_80115168[j].v = 0;
    }
    func_8002D4C8(0x14, 0);
}

void func_800D25FC(void) {
    D_8011DB24();
}

void func_800D2624(void) {
    D_800B9A13 = 0;
    func_8002D4C8(0x15, 0);
}

/* the field's text line: one 8x8 sprite per glyph (two bytes: u, v) into OT slot 2 of the overlay OT; codes 0x3870-0x3872
   are spaces (7, 4, 2 pixels), 0x1850 / 0x1858 are glyphs drawn 4 right and 7 up; a byte >= 0x80 ends the line */
FieldSprt *func_800D2650(FieldSprt *p, u8 *s, s16 x, s16 y, s16 clut, s32 rgb) {
    while (*s < 0x80) {
        switch (*(s16 *)s) {
        case 0x1850:
        case 0x1858:
            p->x = x + 4;
            p->y = y - 7;
            break;
        case 0x3870:
            x += 7;
            s += 2;
            continue;
        case 0x3871:
            x += 4;
            s += 2;
            continue;
        case 0x3872:
            x += 2;
            s += 2;
            continue;
        default:
            p->x = x;
            x += 7;
            p->y = y;
            break;
        }
        p->tag = 0x04000000;
        p->code = rgb | 0x64000000;
        p->u = *s++;
        p->v = *s++;
        p->clut = ((clut + 0x100) << 6) | 0x16;
        p->w = 8;
        p->h = 8;
        ((OtTag *)p)->addr = ((OtTag *)(D_800AE7BC[D_800AF630.frame].ot + 2))->addr;
        ((OtTag *)(D_800AE7BC[D_800AF630.frame].ot + 2))->addr = (u32)p;
        p++;
    }
    return p;
}

/* a row of n textured quads from a u16 list (x, y, w, h, u, v, and with flags & 2 clut, tpage, du, dv; otherwise the\n   default page 0x4056 / 0x15 with 8x8 cells, one pixel narrower for i & 7 in 4..5 and shorter in 6..7); flags & 1 dims
   them; each goes into OT slot 2 */
FieldFt4 *func_800D27DC(u16 flags, FieldFt4 *p, u16 *d, s16 n, u16 dx) {
    s32 code;
    s16 i;
    s16 x, y, w, h;
    u16 u, v;
    u16 du, dv;

    code = 0x2C808080;
    if (flags & 1) {
        code = 0x2C585858;
    }
    for (i = 0; i < n; i++) {
        p->tag = 0x09000000;
        p->code = code;
        p->x0 = p->x2 = x = *d++ + dx;
        p->y0 = p->y1 = y = *d++;
        w = *d++;
        h = *d++;
        p->u0 = p->u2 = u = *d++;
        p->v0 = p->v1 = v = *d++;
        if (!(flags & 2)) {
            dv = 8;
            du = 8;
            p->clut = 0x4056;
            p->tpage = 0x15;
            if ((i & 7) < 4) {
            } else if ((i & 7) < 6) {
                du = 7;
            } else if ((i & 7) < 8) {
                dv = 7;
            }
        } else {
            p->clut = *d++;
            p->tpage = *d++;
            du = *d++;
            dv = *d++;
        }
        p->x1 = p->x3 = x + w;
        p->y2 = p->y3 = y + h;
        p->u1 = p->u3 = u + du;
        p->v2 = p->v3 = v + dv;
        ((OtTag *)p)->addr = ((OtTag *)(D_800AE7BC[D_800AF630.frame].ot + 2))->addr;
        ((OtTag *)(D_800AE7BC[D_800AF630.frame].ot + 2))->addr = (u32)p;
        p++;
    }
    return p;
}

/* a list of bars: a DR_TPAGE, then for each of n records (two colours, x, y, w, h; 0x10 bytes) a gouraud quad whose
   other two corners take the colours with the blue byte 0x28 lower / higher; the selected pair (i >> 1 == sel) and rows 8
   on are opaque, the other odd rows semi-transparent, the other even rows skipped; a closing DR_TPAGE */
u8 *func_800D29F8(s16 sel, u8 *p, u8 *d, s16 n, u16 dx) {
    s16 i;
    s32 semi;
    u32 c;
    u16 x;
    u16 y;
    u16 w, h;

    ((OtTag *)p)->len = 1;
    ((FieldTPage *)p)->code = 0xE1000000;
    ADDPRIM2(p);
    p += 8;
    for (i = 0; i < n; i++) {
        if ((i >> 1) == sel || i >= 8) {
            semi = 0;
        } else {
            semi = 2;
            if (!(i & 1)) {
                d += 0x10;
                continue;
            }
        }
        ((FieldG4 *)p)->tag = 0x08000000;
        ((FieldG4 *)p)->c0 = ((semi | 0x38) << 24) | *(u32 *)d;
        d += 4;
        ((FieldG4 *)p)->c1 = ((FieldG4 *)p)->c0 - 0x280000;
        c = *(u32 *)d;
        d += 4;
        ((FieldG4 *)p)->c3 = c;
        c += 0x280000;
        ((FieldG4 *)p)->c2 = c;
        x = *(u16 *)d + dx;
        d += 2;
        ((FieldG4 *)p)->x0 = ((FieldG4 *)p)->x2 = x;
        y = *(u16 *)d;
        d += 2;
        ((FieldG4 *)p)->y0 = ((FieldG4 *)p)->y1 = y;
        w = *(u16 *)d;
        d += 2;
        h = *(u16 *)d;
        d += 2;
        ((FieldG4 *)p)->x1 = ((FieldG4 *)p)->x3 = x + w;
        ((FieldG4 *)p)->y2 = ((FieldG4 *)p)->y3 = y + h;
        ADDPRIM2(p);
        p += sizeof(FieldG4);
    }
    ((OtTag *)p)->len = 1;
    ((FieldTPage *)p)->code = 0xE1000200;
    ADDPRIM2(p);
    return p + 8;
}

s32 func_800D2CA8(s32 n, s32 shift) {
    s32 r = 0;
    s32 s = 0;
    s32 m = n;

    while (m >= 10) {
        n /= 10;
        r |= (m - ((n << 1) + (n << 3))) << s;
        m = n;
        s += 4;
    }
    r = r | (m << s);
    return r << shift;
}

void func_800D2D10(u32 n, s16 len, u16 *out, s16 pad) {
    s16 i;

    for (i = 0; i < len; i++) {
        u16 g;
        u32 d = n >> 28;

        g = d;

        if (pad != 0) {
            if (d != 0) {
                pad = 0;
            } else {
                g = 10;
                if (pad < 0) {
                    g = (i != len - 1) ? 10 : 0;
                }
            }
        }
        n <<= 4;
        *out++ = *D_800D38D8[g];
    }
}

s32 func_800D2DAC(FieldStep *p) {
    func_8016EDEC(func_800D3238, 0x01000000);
    func_800167B8(0);
    p->step++;
    return 0;
}

s32 func_800D2DFC(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_800D2E20(FieldStep *p) {
    func_8016EDEC(func_800D3348, 0x01000000);
    p->cnt = 10;
    p->step++;
    return 0;
}

s32 func_800D2E6C(FieldStep *p) {
    if (p->cnt-- == 0) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800167B8(4);
        p->step++;
    }
    return 0;
}

s32 func_800D2EE8(void) {
    return (func_800167F0(4) & 0xFFFF) != 0;
}

void func_800D2F0C(FieldStep *p) {
    D_800D39C4[p->step](p);
}

s32 func_800D2F48(FieldStep *p) {
    func_800D33B8();
    func_800167B8(0);
    p->step++;
    return 0;
}

s32 func_800D2F8C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_800D2FB0(FieldStep *p) {
    D_800D39F0[p->step](p);
}

s32 func_800D2FEC(FieldStep *p) {
    func_800D33E0();
    p->timer = 10;
    p->step++;
    return 0;
}

s32 func_800D302C(FieldStep *p) {
    if (--p->timer == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800D1E28();
        p->step++;
    }
    return 0;
}

void func_800D30A8(void) {
    func_800D1EBC();
}

void func_800D30C8(FieldStep *p) {
    D_800D3A8C[p->step](p);
}

s32 func_800D3104(FieldStep *p) {
    p->cnt = 10;
    p->step++;
    return 0;
}

s32 func_800D3120(FieldStep *p) {
    if (p->cnt-- == 0) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800167B8(4);
        p->step++;
    }
    return 0;
}

s32 func_800D319C(void) {
    return (func_800167F0(4) & 0xFFFF) != 0;
}

void func_800D31C0(FieldStep *p) {
    D_800D3920[p->step](p);
}

void func_800D31FC(FieldStep *p) {
    D_800D3928[p->step](p);
}

void func_800D3238(FieldSeq *p) {
    D_800D3A98[p->step](p);
}

void func_800D3274(FieldSeq *p) {
    if (p->unk198 != 0) {
        p->unk198 = func_8013767C(p->unk198);
        p->step++;
    } else {
        p->step += 2;
    }
}

void func_800D32D4(FieldSeq *p) {
    if (func_801399F0(p->unk198) != 0) {
        func_80139914(p->unk198);
        p->step++;
    }
}

void func_800D3328(void) {
    func_8016F0E4();
}

void func_800D3348(FieldSeq *p) {
    D_800D3AA4[p->step](p);
}

void func_800D3384(FieldSeq *p) {
    p->step++;
}

void func_800D3398(void) {
    func_8016F0E4();
}

void func_800D33B8(void) {
    func_8016EE40(&D_800D3AAC, 0x1000000);
}

void func_800D33E0(void) {
    func_8016EE40(&D_800D3AB0, 0x1000000);
}
