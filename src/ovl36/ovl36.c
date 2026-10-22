#include "common.h"
#include "work.h"

extern void func_80010AE0(s32 a);
extern void func_80011A3C(void);
extern void func_80011B7C(u16 n);
extern void func_80011C10(void);
extern void func_80011CFC(void);
extern void func_80011D54(s32 a);
extern void func_80011DCC(void);
extern void func_80014928(void);
extern void func_80015310(void);
extern void func_8001A9F8(s32 a);
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
    func_80011DCC();
    func_80010AE0(0x3E0);
    func_80011C10();
}

void func_800CEF04(void) {
    if (func_800D0488(1) != 0) {
        func_80011A3C();
    }
}

void func_800CEF34(void) {
    func_8001B324();
    func_80011A3C();
}

void func_800CEF5C(void) {
    s32 pad[2];

    func_8001B324();
    D_800B9A12 = 1;
    D_800B9A10 = 0;
    D_800B9A17 = 0;
    func_8001C0C8();
    D_800B9A0E = 0;
    func_80011A3C();
}

void func_800CEFB0(void) {
    func_80011A3C();
}

extern void func_800191A8(void);
extern void func_800191BC(s32 a);
extern s32 func_800191D4(s32 a);
extern s32 func_80019A24(void *a, s32 b, s32 c, s32 d);
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
extern u8 D_800AE890[];
extern s32 g_ArchiveFileLoc[][2];
extern s16 D_800B9A08;
extern s32 D_800D34AC[];
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

typedef struct {
    u8 pad0[0xC];
    s32 (*fn)(void);
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
extern void func_800D1EBC(void);
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
extern void func_8001AF34(void);
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
        func_80011B7C(7);
        return;
    }
    DrawSync(0);
    VSync(w->vsyncMode);
    DrawOTag(D_800A651C[w->frame].ot + 1);
    func_8001AF34();
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
        func_80011B7C(7);
        return;
    }
    DrawSync(0);
    VSync(w->vsyncMode);
    DrawOTag(D_800A651C[w->frame].ot + 1);
    func_8001AF34();
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
    if ((u16)w->unkA3C2 == 0) {
        VSync(w->vsyncMode);
        func_8001AF34();
        goto wait;
    }
    func_80011B7C(8);
    return;
draw:
    DrawSync(0);
    VSync(w->vsyncMode);
    DrawOTag(D_800A651C[w->frame].ot + 1);
    func_8001AF34();
    goto loop;
}

void func_800CF370(void) {
    func_8001A9F8(0);
    func_80011B7C(0xF);
}

void func_800CF398(void) {
    func_80011A3C();
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
            func_8001AF34();
            goto loop;
        }
    }
    func_80015310();
    func_80011B7C(7);
}

void func_800CF47C(void) {
    if (D_80114E78 != 0) {
        if (func_8001ABBC(0, 0, D_800AF218, 0, 0) == 0) {
            return;
        }
        D_80114E78 = 0;
    }
    func_80011C10();
}

void func_800CF4D4(void) {
    D_800D3490[D_800B99FC]();
}

void func_800CF510(void) {
    func_80014928();
    D_800B9A11 = 1;
    func_8001C0C8();
    func_80015310();
    func_8001B384();
    D_801152BA = 0;
    if (D_80127084 != 0) {
        func_80011CFC();
    } else {
        func_80011D54(3);
    }
}

void func_800CF584(void) {
    if (D_80127084 != 0 && (D_80078EC1 == 0 || func_800D02D0(D_80078EC1) != 0)) {
        func_80011CFC();
    }
}

void func_800CF5D4(void) {
    s32 t;

    if (D_80127084 != 0 && ((t = D_80078EC0 & 0x7F) == 0 || func_800D0488(t) != 0)) {
        func_80011CFC();
    }
}

void func_800CF628(void) {
    s16 *m = &D_800B9A08;

    if (func_800CFC5C(*m) != 0) {
        if (D_80127084 != 0) {
            D_80114E94 = *m;
            *m = func_800CFBF8();
        cfc:
            func_80011CFC();
            return;
        }
        D_80114E94 = *m;
        if (func_800CFD68(*m = func_800CFBF8()) != 0) {
            goto cfc;
        }
        *m = D_80114E94;
        func_80011D54(5);
        return;
    }
    D_80127084 = 0;
    if (func_800CFD68(*m) == 0) {
        D_80114E98 = 1;
        return;
    }
    func_80011D54(6);
}

void func_800CF714(void) {
    func_800191A8();
    if (func_800CFE60() != 0) {
        func_800CFDA4();
        D_800B9A08 = D_80114E94;
        func_80011CFC();
    }
}

void func_800CF764(void) {
    if (func_800D0214(func_80128218()) != 0) {
        D_80127084 = 0;
        D_80114E98 = 1;
    }
}

void func_800CF7A4(void) {
    func_800191A8();
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
    if (func_80019A24(D_800AE890, D_80072C74, 0, 0) != 0) {
        func_80011A3C();
    }
}

extern void func_800CFAD0(void);
extern s32 D_800C7C60;
extern void *D_800C7C64[];
extern s32 D_800A2E20;
extern s16 D_800D3408[];
extern s16 D_800D34AE[];

void func_800CF990(void) {
    switch (D_800B99F6) {
    case 0:
        func_8001C0C8();
        func_80015310();
        if (func_8001ABBC(0, 0, g_ArchiveFileLoc[D_800D3408[D_80114E74]], 0, 0) != 0) {
            func_800167B8(0);
            func_80011C10();
        }
        break;
    case 1:
        func_800CFAD0();
        if (func_800167F0(0) & 0xFFFF) {
            func_80011C10();
        }
        break;
    case 2:
        func_800CFAD0();
        if (++D_800B9A00 >= 0x5B && D_800AF630.dispIdx != 0) {
            func_80011B7C(6);
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
typedef struct { u8 pad0[0x34]; s16 unk34; } FieldStats;
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
extern s32 func_80011DF4();
extern void func_80011818(s32 a);
extern s32 func_8002AF08();
extern s32 func_80029264();
extern void func_8001BE20();
extern s32 func_8001BE30();
typedef struct { s32 next, unk4, cur; u8 padC[8]; u8 step; u8 pad15[2]; u8 unk17; } FieldMapS;
typedef struct { u8 pad0[0x1C]; void (*fn)(void); } FieldDestFn;
typedef struct { s32 (*fn[3])(FieldMapS *m); } FieldFn3S;
extern FieldFn3S D_801141C8;
extern u8 D_80126BA6;

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800CFAD0);

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
    return func_800191D4(D_800D34AC[a & ~0xF000] & 0xFFF);
}

void func_800CFDA4(void) {
    func_800191BC(D_800D34AC[D_800B9A08 & ~0xF000] & 0xFFF);
}

void func_800CFDE8(s32 a) {
    s32 i = D_800D34AC[a & ~0xF000] & 0xFFF;

    if (i >= 0 && g_ArchiveFileLoc[i][0] != 0) {
        func_8001ABBC(2, 0, g_ArchiveFileLoc[i], 0, 0);
    }
}

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800CFE60);

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

    i = D_800D34AC[k];
    t = D_800D34AE[k * 2];
    D_800C7C64[0] = &D_800A2E20;
    i &= 0xFFF;
    *p = t;
    if (i >= 0) {
        if (g_ArchiveFileLoc[i][0] != 0) {
            return func_80019A24(g_ArchiveFileLoc[i], a, 0, (s32)p);
        }
        return 1;
    }
    return 1;
}

void func_800D02C0(s32 (*f)(s32)) {
    D_800D375C = f;
}

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D02D0);

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

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D06E8);

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

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D0D7C);

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D0E30);

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

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D128C);

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D1658);

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

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D1754);

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
        func_80011A3C();
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D185C);

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

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D1984);

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

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D1B10);

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D1B80);

s32 func_800D1BD8(FieldTask *p) {
    func_800D1BF8();
    return 1;
}

void func_800D1BF8(void) {
    FieldMapS *m = (FieldMapS *)&D_800AE6A8;

    D_800B9A0E = 0;
    ((FieldDestFn *)(D_800AE6B0 & 0x80FFFFFF))->fn();
    func_800D1D24();
    if (func_80011DF4() != 0) {
        func_80011DCC();
        func_80011818(0x11);
    } else if (func_8002AF08() != 0) {
        func_80011B7C(0xD);
    } else if (((s32 (*)(void))func_800CFBE8)() != 0) {
        func_800CFBBC();
        func_80011B7C(0x13);
    } else if (func_80029264() != 0) {
        func_80029254();
        func_80011B7C(0x12);
    } else {
        switch (func_800D1DB0()) {
        case 0:
            func_80011B7C(6);
            break;
        case 1:
            func_80011B7C(5);
            break;
        case 2:
        default:
            func_80011B7C(0x10);
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

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D1E28);

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D1EBC);

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

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D23D0);

void func_800D2460(void) {
}

void func_800D2468(void) {
    func_80016714(D_80115110, 0xC4);
    D_8012751C = 0;
    D_8011DB20 = 0;
}

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D24A0);

void func_800D25FC(void) {
    D_8011DB24();
}

void func_800D2624(void) {
    D_800B9A13 = 0;
    func_8002D4C8(0x15, 0);
}

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D2650);

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D27DC);

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D29F8);

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D2CA8);

INCLUDE_ASM("asm/ovl36/nonmatchings/ovl36", func_800D2D10);

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
