#include "common.h"
#include "work.h"

typedef struct { void (*fn)(void); } MenuFn;
extern void NextStep(void);
extern void SetGameState(u16 n);
extern void func_80015310(void);
extern s32 func_800167F0(s32 arg0);
extern void func_8001C044(void);
extern void func_8001534C(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern s16 GetPadPressedDir(s32 a);
extern u16 GetPadHeldDir(s32 a);
extern void func_80136EC4(void);
extern void func_800D0964(void);
extern void func_800D0BDC(void);
extern void func_800D1254(void);
extern void func_800D1B00(void);
extern void func_800D235C(void);
extern void func_800D2BC4(void);
extern MenuFn D_800D4C54[];
extern MenuFn D_800D4C68[];
extern s16 D_800D4C80;
extern s32 D_800D32F8[];
extern s32 D_800D3314[];
extern s32 D_800D4C90;
extern s32 D_800D4C94;
extern u16 D_800D4C98;
extern u16 D_800D4C9C;
extern u16 D_800D4CA0;
extern u16 D_800D4CA4;

void func_800CEE74(void) {
    register Work *w = &D_800AF630;
    if (w->step < 5) {
        D_800D4C54[w->step].fn();
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
extern DbgStats D_80078E78;

typedef struct { char name[4]; s16 flag; } DbgEnt;
extern void func_800153CC(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d);
extern s32 func_80029178(s32 n);
extern u32 func_80029504(void);
extern char D_800CEE3C[];
extern char D_800CEE40[];
extern char D_800CEE44[];
extern char D_800CEE50[];
extern char D_800CEE54[];
extern char D_800CEE60[];
extern s32 D_800D3344;
extern s16 D_800D3348;
extern s16 D_800D334A;
extern DbgEnt D_800D4A5C[];

typedef struct { char name[0x20]; s32 id; } DbgItem;
typedef struct { char name[12]; DbgItem *items; s32 count; } DbgCat;
extern void func_80029514(s32 a);
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
extern DbgCat D_800D4B64[];
extern s16 D_800D4C84;
extern s32 D_800D4C88;
extern s32 D_800D4C8C;

void func_800CEF00(void) {
    register Work *w = &D_800AF630;

    w->unkA3E1 = 1;
    func_8001C044();
    func_80015310();
    SetGameState(0);
    func_8001534C(0, (s32)D_800D31FC, 0x40, 0x1E, 0, 0);
    func_8001534C(1, (s32)D_800D31F8, 0x34, 0x46, 0, 0);
    func_8001534C(9, (s32)D_800D3248, 0x40, 0x46, 0, 0);
    func_8001534C(2, (s32)D_800D3208, 0x40, 0x5E, 0, 0);
    func_8001534C(3, (s32)D_800D3214, 0x40, 0x6A, 0, 0);
    func_8001534C(4, (s32)D_800D3220, 0x40, 0x76, 0, 0);
    func_8001534C(5, (s32)D_800D3228, 0x40, 0x82, 0, 0);
    func_8001534C(6, (s32)D_800D3230, 0x40, 0x8E, 0, 0);
    func_8001534C(7, (s32)D_800D3238, 0x40, 0x9A, 0, 0);
    func_8001534C(0xA, (s32)D_800D3250, 0x74, 0x46, 0, 0);
    func_8001534C(0xB, (s32)D_800D3258, 0x74, 0x52, 0, 0);
    func_8001534C(0xE, (s32)D_800D3264, 0x40, 0xA6, 0, 0);
    func_8001534C(0xF, (s32)D_800D3278, 0x40, 0xB2, 0, 0);
    func_8001534C(0x10, (s32)D_800D3284, 0x40, 0xBE, 0, 0);
    D_800D4C88 = 0;
    D_800D4C8C = 0;
    D_800D4C90 = 0;
    D_800D4C94 = 0;
    w->unkA3DE = 0;
    func_8001534C(0xC, (s32)D_800D4B64[D_800D4C88].name, 0xA4, 0x46, 0x44, 0);
    func_8001534C(0xD, (s32)D_800D4B64[D_800D4C88].items[D_800D4C8C].name, 0xA4, 0x52, 0x44, 0);
    D_800D4C80 = 0;
    D_800D4C84 = 0;
    D_800D4CA4 = 0;
    D_800D4CA0 = 0;
    D_800D4C9C = 0;
    D_800D4C98 = 0;
    func_80029514(D_800D3344);
    NextStep();
}

extern s32 func_80029124(u32 bit, s32 on);
extern s32 func_800291A0(s32 i, s32 v);
extern u16 D_800A6588;
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
extern void func_800152F4(s32 a);
extern void func_800167B8(s32 a);
extern void func_800CFCBC(void);
extern s32 func_800D0828(s32 a);
extern void func_800D0858(void);
extern char D_800CEE30[];

extern void func_800CFB88(void);
extern void func_800CFBF0(void);
extern void func_800D04F4(void);
extern u8 D_800D3334[];

void func_800CF28C(void) {
    register Work *w = &D_800AF630;
    DbgClock *c;
    s32 id;

    c = (DbgClock *)&D_80078E78;
    w->unkA3E1 = 0;
    func_800D0858();
    if (D_800D4C9C & 0x4000) {
        D_800D4C80++;
        if (D_800D4C80 >= 13) {
            D_800D4C80 = 0;
        }
    } else if (D_800D4C9C & 0x1000) {
        D_800D4C80--;
        if (D_800D4C80 < 0) {
            D_800D4C80 = 12;
        }
    }
    func_8001534C(1, (s32)D_800D31F8, 0x34, D_800D3334[D_800D4C80], 0, 0);
    switch (D_800D4C80) {
    case 0:
        if (D_800D4C9C & 0x820) {
            SetStep(4);
        }
        break;
    case 1:
    case 2:
    case 3:
    case 5:
        if (D_800D4C9C & 0x820) {
            SetStep(2);
            func_800167B8(4);
        }
        break;
    case 4:
        if (D_800D4C9C & 0x8000) {
            D_800D4C90--;
            if (D_800D4C90 < 0) {
                D_800D4C90 = 6;
            }
        }
        if (D_800D4C9C & 0x2000) {
            D_800D4C90++;
            if (D_800D4C90++ >= 7) {
                D_800D4C90 = 0;
            }
        }
        break;
    case 6:
        if (D_800D4C9C & 0x8000) {
            D_800D4C94--;
            if (D_800D4C94 < 0) {
                D_800D4C94 = 7;
            }
        }
        if (D_800D4C9C & 0x2000) {
            D_800D4C94++;
            if (D_800D4C94 >= 8) {
                D_800D4C94 = 0;
            }
        }
        break;
    case 7:
        if (D_800D4C9C & 0x8000) {
            if ((D_800D3344 -= 10) < 0) {
                D_800D3344 = 0;
            }
        }
        if (D_800D4C9C & 0x2000) {
            if ((D_800D3344 += 10) >= 0x6A5) {
                D_800D3344 = 0x6A4;
            }
        }
        if (D_800D4C9C & 0x20) {
            if ((D_800D3344 += 1) >= 0x6A5) {
                D_800D3344 = 0x6A4;
            }
        }
        if (D_800D4C9C & 0x40) {
            if ((D_800D3344 -= 1) < 0) {
                D_800D3344 = 0;
            }
        }
        if (D_800D4C9C & 0x10) {
            if ((D_800D3344 += 100) >= 0x6A5) {
                D_800D3344 = 0x6A4;
            }
        }
        if (D_800D4C9C & 0x80) {
            if ((D_800D3344 -= 100) < 0) {
                D_800D3344 = 0;
            }
        }
        func_80029514(D_800D3344);
        break;
    case 8:
        if (D_800D4C9C & 0x8000) {
            if (--D_800D3348 < 0) {
                D_800D3348 = 0x2B;
            }
        }
        if (D_800D4C9C & 0x2000) {
            if (++D_800D3348 >= 0x2C) {
                D_800D3348 = 0;
            }
        }
        if (D_800D4C9C & 0x20) {
            id = D_800D4A5C[D_800D3348].flag;
            func_80029124(id, (func_80029178(id) & 0xFF) == 0);
        }
        break;
    case 9:
        if (D_800D4C9C & 0x2000) {
            D_800D334A += 60;
        }
        if (D_800D4C9C & 0x8000) {
            D_800D334A -= 60;
        }
        if (D_800D4C9C & 0xA0) {
            D_800D334A += 15;
        }
        if (D_800D4C9C & 0x40) {
            D_800D334A -= 15;
        }
        if (D_800D334A < 0) {
            D_800D334A = 0x59F;
        }
        if (D_800D334A >= 0x5A0) {
            D_800D334A = 0;
        }
        c->unk1A = D_800D334A;
        break;
    case 10:
        if (D_800D4C9C & 0x2000) {
            func_80029124(0, (func_80029178(0) & 0xFF) == 0);
        }
        break;
    case 11:
        if (D_800D4C9C & 0x2000) {
            func_80029124(1, (func_80029178(1) & 0xFF) == 0);
        }
        break;
    case 12:
        if (D_800D4C9C & 0x2000) {
            func_80029124(2, (func_80029178(2) & 0xFF) == 0);
        }
        break;
    }
    if (D_800D4C80 >= 6 && (D_800D4C9C & 0x800)) {
        D_800D4C80 = 0;
        SetStep(4);
    }
    c->unk1A = D_800D334A;
    func_800D04F4();
    func_800CFBF0();
    func_800CFB88();
}

void func_800CFB88(void) {
    func_8001534C(0x1C, D_800D32F8[D_800D4C90], 0x78, 0x82, 0, 0);
}

void func_800CFBF0(void) {
    func_8001534C(0x1A, D_800D3314[D_800D4C94], 0x90, 0x9A, 0, 0);
}

void func_800CFC58(void) {
    if (func_800167F0(4) & 0xFFFF) {
        NextStep();
        SetGameState(0);
        func_8001C044();
        func_80015310();
    }
}

void func_800CFCBC(void) {
    if (D_800D4C94 != 0) {
        if (D_800D4C94 > 0) {
            func_800D0964();
        }
        if (D_800D4C94 >= 2) {
            func_800D0BDC();
        }
        if (D_800D4C94 >= 3) {
            func_800D1254();
        }
        if (D_800D4C94 >= 4) {
            func_800D1B00();
        }
        if (D_800D4C94 >= 5) {
            func_800D235C();
        }
        if (D_800D4C94 >= 6) {
            func_800D2BC4();
        }
    }
}

void func_800CFDB4(void) {
    register Work *w = &D_800AF630;
    DbgClock *c;
    u8 ok;

    c = (DbgClock *)&D_80078E78;
    ok = func_800D0828(D_800D4B64[D_800D4C88].items[D_800D4C8C].id);
    func_800D0858();
    func_800152F4(0x11);
    if (D_800D4C9C & 0x820) {
        func_800167B8(4);
        w->mapId = D_800D4B64[D_800D4C88].items[D_800D4C8C].id;
        w->mapGroup = w->mapId & 0xF000;
        if (ok) {
            func_800CFCBC();
            if (GetPadHeldDir(0) & 0x10) {
                func_80029514(D_800D3344);
                c->unk1A = D_800D334A;
            }
            SetStep(2);
        }
    }
    if (D_800D4C9C & 0x40) {
        SetStep(1);
    }
    if (D_800D4C9C & 0x5000) {
        D_800D4C84 = (D_800D4C84 + 1) & 1;
    }
    if (D_800D4C84 == 0) {
        if (D_800D4C9C & 0x2000) {
            D_800D4C88++;
            if ((u32)D_800D4C88 >= 12) {
                D_800D4C88 = 0;
            }
            D_800D4C8C = 0;
        }
        if (D_800D4C9C & 0x8000) {
            D_800D4C88--;
            if (D_800D4C88 < 0) {
                D_800D4C88 = 11;
            }
            D_800D4C8C = 0;
        }
        func_8001534C(0xC, (s32)D_800D4B64[D_800D4C88].name, 0xA4, 0x46, 0x44, 0);
        func_8001534C(0xD, (s32)D_800D4B64[D_800D4C88].items[D_800D4C8C].name, 0xA4, 0x52, 0x44, 0);
        if (!ok) {
            func_8001534C(0x11, (s32)D_800CEE30, 0xA4, 0x5E, 0x44, 0);
        }
    }
    if (D_800D4C84 == 1) {
        if (D_800D4C9C & 0x2000) {
            D_800D4C8C++;
            if (D_800D4C8C >= D_800D4B64[D_800D4C88].count) {
                D_800D4C8C = 0;
            }
        }
        if (D_800D4C9C & 0x8000) {
            D_800D4C8C--;
            if (D_800D4C8C < 0) {
                D_800D4C8C = D_800D4B64[D_800D4C88].count - 1;
            }
        }
        func_8001534C(0xC, (s32)D_800D4B64[D_800D4C88].name, 0xA4, 0x46, 0x44, 0);
        func_8001534C(0xD, (s32)D_800D4B64[D_800D4C88].items[D_800D4C8C].name, 0xA4, 0x52, 0x44, 0);
        if (!ok) {
            func_8001534C(0x11, (s32)D_800CEE30, 0xA4, 0x5E, 0x44, 0);
        }
    }
    func_8001534C(1, (s32)D_800D31F8, 0x68, D_800D4C84 * 12 + 0x46, 0, 0);
}

void func_800D03F8(void) {
    register Work *w = &D_800AF630;
    w->done = 1;
}

void func_800D0430(void) {
}

void func_800D0450(void) {
    if (D_800D4C80 < 5) {
        D_800D4C68[D_800D4C80].fn();
    }
}

void func_800D04C4(void) {
    func_80136EC4();
}

void func_800D04F4(void) {
    DbgEnt *e;

    D_800D3344 = func_80029504();
    func_800153CC(0x11, D_800D3344, 0xC8, 0xA6, 0x44, 0);
    e = &D_800D4A5C[D_800D3348];
    func_8001534C(0x12, (s32)e, 0x98, 0xB2, 0x43, 0);
    func_8001534C(0x13, (func_80029178(e->flag) & 0xFF) ? (s32)D_800CEE3C : (s32)D_800CEE40, 0xC8, 0xB2, 0, 0);
    func_800153CC(0x14, (s16)(D_800D334A / 60), 0x68, 0xBE, 0x42, 0);
    func_800153CC(0x15, (s16)(D_800D334A % 60), 0x80, 0xBE, 0x42, 0);
    func_8001534C(0x16, (s32)D_800CEE44, 0x40, 0xCA, 0x43, 0);
    func_8001534C(0x17, (func_80029178(0) & 0xFF) ? (s32)D_800CEE40 : (s32)D_800CEE50, 0xA8, 0xCA, 0, 0);
    func_8001534C(0x18, (s32)D_800CEE54, 0x40, 0xD2, 0x43, 0);
    func_8001534C(0x19, (func_80029178(1) & 0xFF) ? (s32)D_800CEE50 : (s32)D_800CEE40, 0xA8, 0xD2, 0, 0);
    func_8001534C(0x1B, (s32)D_800CEE60, 0x40, 0xDA, 0x43, 0);
    func_8001534C(0x1D, (func_80029178(2) & 0xFF) ? (s32)D_800CEE50 : (s32)D_800CEE40, 0xE0, 0xDA, 0, 0);
}

s32 func_800D0828(s32 a) {
    return 1;
}

void func_800D0858(void) {
    D_800D4C9C = GetPadPressedDir(0);
    D_800D4C98 = GetPadHeldDir(0);
    if (D_800D4C98 != 0) {
        if (D_800D4C98 == D_800D4CA0) {
            if (--D_800D4CA4 == 0) {
                D_800D4C9C = D_800D4C98 & 0xF000;
                D_800D4CA4 = 3;
            }
        } else {
            D_800D4CA0 = D_800D4C98;
            D_800D4CA4 = 6;
        }
        return;
    }
    D_800D4CA0 = 0;
    D_800D4CA4 = 0xC;
}

void func_800D0964(void) {
    DbgStats *s = &D_80078E78;
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

void func_800D0BDC(void) {
    DbgStats *s;

    s = &D_80078E78;
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
    func_80029124(0x7F, 1);
    func_80029124(0x80, 1);
    func_80029124(0x84, 1);
    func_800291A0(0x3B, 3);
    func_800291A0(0x3C, 3);
    func_800291A0(0x3D, 3);
    func_800291A0(0x3E, 3);
    func_800291A0(0x3F, 3);
    func_800291A0(0x40, 0);
    func_800291A0(0x41, 0);
    func_800291A0(0x42, 0);
    func_800291A0(0x43, 0);
    func_800291A0(0x44, 0);
    func_800291A0(0x45, 0);
    func_800291A0(0x46, 0);
    func_800291A0(0x47, 0);
    func_800291A0(0x48, 0);
    func_800291A0(0x49, 0);
    func_800291A0(0x4A, 0);
    func_800291A0(0x4B, 0);
    func_800291A0(0x4C, 0);
    func_800291A0(0x4D, 0);
    func_800291A0(0x4E, 0);
    func_800291A0(0x4F, 0);
    func_800291A0(0x50, 0);
    func_800291A0(0x51, 0);
    func_800291A0(0x52, 0);
    func_800291A0(0x53, 0);
    func_800291A0(0x54, 0);
    func_800291A0(0x55, 0);
    func_800291A0(0x56, 0);
    func_800291A0(0x57, 0);
    func_800291A0(0x58, 0);
    func_800291A0(0x59, 0);
    func_800291A0(0x5A, 0);
    func_800291A0(0x5B, 0);
    func_800291A0(0x5C, 0);
    func_800291A0(0x5D, 0);
    func_800291A0(0x5E, 0);
    func_800291A0(0x5F, 0);
    func_800291A0(0x60, 0);
    func_800291A0(0x61, 0);
    func_800291A0(0x62, 0);
    func_800291A0(0x2E, 1);
    func_800291A0(0x63, (u8)(D_8010F476 | 0x80));
    func_800291A0(0x65, (u8)(D_8010F47E | 0x80));
    func_800291A0(0x66, (u8)(D_8010F486 | 0x80));
    func_800291A0(0x67, (u8)(D_8010F48E | 0x80));
    func_800291A0(0x68, (u8)(D_8010F496 | 0x80));
    func_800291A0(0x69, (u8)(D_8010F49E | 0x80));
    D_800A6588 = D_8010F474;
    D_800A658A = D_8010F47C;
    D_800A658C = D_8010F484;
    D_800A658E = D_8010F48C;
    D_800A6590 = D_8010F494;
    D_800A6592 = D_8010F49C;
}

void func_800D1254(void) {
    DbgStats *s;

    s = &D_80078E78;
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
    func_80029124(0x96, 1);
    func_80029124(0xE5, 1);
    func_80029124(0xE7, 1);
    func_80029124(0xDE, 1);
    func_80029124(0xEC, 1);
    func_80029124(0xEF, 1);
    func_80029124(0xE3, 1);
    func_80029124(0xDF, 1);
    func_80029124(0xF2, 1);
    func_80029124(0xED, 1);
    func_80029124(0x10B, 1);
    func_80029124(0x16, 1);
    func_80029124(0x1F, 1);
    func_80029124(0x82, 1);
    func_80029124(0x8A, 1);
    func_80029124(0x8F, 1);
    func_80029124(0x90, 1);
    func_80029124(0x91, 1);
    func_80029124(0x92, 1);
    func_80029124(0x93, 1);
    func_80029124(0x94, 1);
    func_80029124(0x97, 1);
    func_80029124(0x98, 1);
    func_80029124(0xB5, 1);
    func_800291A0(0xCD, 1);
    func_80029124(0xF0, 1);
    func_80029124(0x40, 1);
    func_80029124(0x41, 1);
    func_80029124(0x42, 1);
    func_80029124(0x43, 1);
    func_80029124(0x44, 1);
    func_80029124(0x45, 1);
    func_80029124(0x46, 1);
    func_80029124(0x47, 1);
    func_800291A0(0x3B, 5);
    func_800291A0(0x3C, 3);
    func_800291A0(0x3D, 3);
    func_800291A0(0x3E, 3);
    func_800291A0(0x3F, 3);
    func_800291A0(0x40, 2);
    func_800291A0(0x41, 2);
    func_800291A0(0x42, 2);
    func_800291A0(0x43, 3);
    func_800291A0(0x44, 2);
    func_800291A0(0x45, 2);
    func_800291A0(0x46, 3);
    func_800291A0(0x47, 3);
    func_800291A0(0x48, 2);
    func_800291A0(0x49, 2);
    func_800291A0(0x4A, 0);
    func_800291A0(0x4B, 0);
    func_800291A0(0x4C, 0);
    func_800291A0(0x4D, 0);
    func_800291A0(0x4E, 0);
    func_800291A0(0x4F, 0);
    func_800291A0(0x50, 0);
    func_800291A0(0x51, 2);
    func_800291A0(0x52, 0);
    func_800291A0(0x53, 0);
    func_800291A0(0x54, 0);
    func_800291A0(0x55, 0);
    func_800291A0(0x56, 0);
    func_800291A0(0x57, 2);
    func_800291A0(0x58, 0);
    func_800291A0(0x59, 0);
    func_800291A0(0x5A, 0);
    func_800291A0(0x5B, 0);
    func_800291A0(0x5C, 0);
    func_800291A0(0x5D, 0);
    func_800291A0(0x5E, 0);
    func_800291A0(0x5F, 2);
    func_800291A0(0x60, 0);
    func_800291A0(0x61, 0);
    func_800291A0(0x62, 0);
    func_800291A0(0x2E, 2);
    func_800291A0(0x6A, (u8)(D_8010F4A6 | 0x80));
    func_800291A0(0x6B, (u8)(D_8010F4AE | 0x80));
    func_800291A0(0x6C, (u8)(D_8010F4B6 | 0x80));
    func_800291A0(0x6D, (u8)(D_8010F4BE | 0x80));
    func_800291A0(0x6E, (u8)(D_8010F4C6 | 0x80));
    func_800291A0(0x6F, (u8)(D_8010F59E | 0x80));
    func_800291A0(0x70, (u8)(D_8010F4CE | 0x80));
    D_800A6594 = D_8010F4A4;
    D_800A6596 = D_8010F4AC;
    D_800A6598 = D_8010F4B4;
    D_800A659A = D_8010F4BC;
    D_800A659C = D_8010F4C4;
    D_800A65D2 = D_8010F59C;
    D_800A659E = D_8010F4CC;
    func_80029124(0x9E, 1);
}

void func_800D1B00(void) {
    DbgStats *s;

    s = &D_80078E78;
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
    func_80029124(0xF5, 1);
    func_80029124(0x106, 1);
    func_80029124(0xF8, 1);
    func_80029124(0xFF, 1);
    func_80029124(0xF9, 1);
    func_80029124(0x105, 1);
    func_80029124(0x100, 1);
    func_80029124(0xFD, 1);
    func_80029124(0xFE, 1);
    func_80029124(0xFB, 1);
    func_80029124(0xF4, 1);
    func_80029124(0xF6, 1);
    func_80029124(0x17, 1);
    func_80029124(0x20, 1);
    func_80029124(0x1E, 1);
    func_80029124(0x83, 1);
    func_80029124(0x85, 1);
    func_80029124(0x86, 1);
    func_80029124(0x87, 1);
    func_80029124(0x8B, 1);
    func_80029124(0xB6, 1);
    func_80029124(0x1B, 1);
    func_80029124(0x48, 1);
    func_80029124(0x49, 1);
    func_80029124(0x4B, 1);
    func_800291A0(0x3B, 5);
    func_800291A0(0x3C, 3);
    func_800291A0(0x3D, 4);
    func_800291A0(0x3E, 3);
    func_800291A0(0x3F, 3);
    func_800291A0(0x40, 2);
    func_800291A0(0x41, 2);
    func_800291A0(0x42, 2);
    func_800291A0(0x43, 3);
    func_800291A0(0x44, 2);
    func_800291A0(0x45, 2);
    func_800291A0(0x46, 3);
    func_800291A0(0x47, 3);
    func_800291A0(0x48, 3);
    func_800291A0(0x49, 2);
    func_800291A0(0x4A, 3);
    func_800291A0(0x4B, 2);
    func_800291A0(0x4C, 3);
    func_800291A0(0x4D, 5);
    func_800291A0(0x4E, 2);
    func_800291A0(0x4F, 3);
    func_800291A0(0x50, 3);
    func_800291A0(0x51, 2);
    func_800291A0(0x52, 2);
    func_800291A0(0x53, 0);
    func_800291A0(0x54, 0);
    func_800291A0(0x55, 2);
    func_800291A0(0x56, 0);
    func_800291A0(0x57, 2);
    func_800291A0(0x58, 0);
    func_800291A0(0x59, 2);
    func_800291A0(0x5A, 3);
    func_800291A0(0x5B, 0);
    func_800291A0(0x5C, 0);
    func_800291A0(0x5D, 0);
    func_800291A0(0x5E, 3);
    func_800291A0(0x5F, 2);
    func_800291A0(0x60, 0);
    func_800291A0(0x61, 0);
    func_800291A0(0x62, 3);
    func_800291A0(0x2E, 3);
    func_800291A0(0x71, (u8)(D_8010F4D6 | 0x80));
    func_800291A0(0x72, (u8)(D_8010F4DE | 0x80));
    func_800291A0(0x73, (u8)(D_8010F4EE | 0x80));
    func_800291A0(0x74, (u8)(D_8010F4E6 | 0x80));
    func_800291A0(0x75, (u8)(D_8010F5AE | 0x80));
    func_800291A0(0x76, (u8)(D_8010F4F6 | 0x80));
    func_800291A0(0x6D, (u8)(D_8010F4FE | 0x80));
    D_800A65A0 = D_8010F4D4;
    D_800A65A2 = D_8010F4DC;
    D_800A65A6 = D_8010F4EC;
    D_800A65A4 = D_8010F4E4;
    D_800A65D6 = D_8010F5AC;
    D_800A65A8 = D_8010F4F4;
    D_800A65AA = D_8010F4FC;
    func_80029124(0x101, 1);
    func_80029124(0x102, 1);
    func_80029124(0x103, 1);
    func_80029124(0x104, 1);
    func_80029124(0xB3, 1);
}

void func_800D235C(void) {
    DbgStats *s;

    s = &D_80078E78;
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
    func_80029124(0x10D, 1);
    func_80029124(0x107, 1);
    func_80029124(0x18, 1);
    func_80029124(0x1D, 1);
    func_80029124(0x21, 1);
    func_80029124(0x81, 1);
    func_80029124(0x8C, 1);
    func_80029124(0xC7, 1);
    func_80029124(0xC8, 1);
    func_80029124(0xC9, 1);
    func_80029124(0xCA, 1);
    func_80029124(0xCB, 1);
    func_80029124(0xCC, 1);
    func_80029124(0xCD, 1);
    func_80029124(0xCE, 1);
    func_80029124(0xCF, 1);
    func_80029124(0xD0, 1);
    func_80029124(0xD1, 1);
    func_80029124(0xD2, 1);
    func_80029124(0xD3, 1);
    func_80029124(0xD4, 1);
    func_80029124(0xD5, 1);
    func_80029124(0xD6, 1);
    func_80029124(0xD7, 1);
    func_80029124(0xD8, 1);
    func_80029124(0xD9, 1);
    func_80029124(0x9B, 1);
    func_80029124(0x81, 1);
    func_800291A0(0x3B, 9);
    func_800291A0(0x3C, 3);
    func_800291A0(0x3D, 4);
    func_800291A0(0x3E, 3);
    func_800291A0(0x3F, 3);
    func_800291A0(0x40, 2);
    func_800291A0(0x41, 2);
    func_800291A0(0x42, 2);
    func_800291A0(0x43, 3);
    func_800291A0(0x44, 2);
    func_800291A0(0x45, 2);
    func_800291A0(0x46, 3);
    func_800291A0(0x47, 3);
    func_800291A0(0x48, 3);
    func_800291A0(0x49, 2);
    func_800291A0(0x4A, 4);
    func_800291A0(0x4B, 2);
    func_800291A0(0x4C, 3);
    func_800291A0(0x4D, 5);
    func_800291A0(0x4E, 2);
    func_800291A0(0x4F, 3);
    func_800291A0(0x50, 4);
    func_800291A0(0x51, 2);
    func_800291A0(0x52, 3);
    func_800291A0(0x53, 2);
    func_800291A0(0x54, 3);
    func_800291A0(0x55, 3);
    func_800291A0(0x56, 2);
    func_800291A0(0x57, 2);
    func_800291A0(0x58, 2);
    func_800291A0(0x59, 3);
    func_800291A0(0x5A, 3);
    func_800291A0(0x5B, 0);
    func_800291A0(0x5C, 0);
    func_800291A0(0x5D, 2);
    func_800291A0(0x5E, 3);
    func_800291A0(0x5F, 2);
    func_800291A0(0x60, 2);
    func_800291A0(0x61, 0);
    func_800291A0(0x62, 3);
    func_800291A0(0x2E, 4);
    func_800291A0(0x78, (u8)(D_8010F506 | 0x80));
    func_800291A0(0x79, (u8)(D_8010F50E | 0x80));
    func_800291A0(0x7A, (u8)(D_8010F516 | 0x80));
    func_800291A0(0x7C, (u8)(D_8010F51E | 0x80));
    func_800291A0(0x7D, (u8)(D_8010F526 | 0x80));
    func_800291A0(0x7E, (u8)(D_8010F52E | 0x80));
    D_800A65AC = D_8010F504;
    D_800A65AE = D_8010F50C;
    D_800A65B0 = D_8010F514;
    D_800A65B2 = D_8010F51C;
    D_800A65B4 = D_8010F524;
    D_800A65B6 = D_8010F52C;
    func_80029124(0xC4, 1);
    func_80029124(0xC5, 1);
    func_80029124(0xC6, 1);
    func_80029124(0x56, 1);
    func_80029124(0x57, 1);
    func_80029124(0x58, 1);
}

void func_800D2BC4(void) {
    DbgStats *s;

    s = &D_80078E78;
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
    func_80029124(0x19, 1);
    func_80029124(0x1D, 1);
    func_80029124(0x21, 1);
    func_80029124(0x8D, 1);
    func_80029124(0x89, 1);
    func_80029124(0xBD, 1);
    func_80029124(0xBE, 1);
    func_80029124(0xBF, 1);
    func_80029124(0xC0, 1);
    func_80029124(0xC1, 1);
    func_80029124(0xC2, 1);
    func_80029124(0xC3, 1);
    func_80029124(0x4A, 1);
    func_80029124(0x4C, 1);
    func_800291A0(0x3B, 0xD);
    func_800291A0(0x3C, 3);
    func_800291A0(0x3D, 4);
    func_800291A0(0x3E, 3);
    func_800291A0(0x3F, 3);
    func_800291A0(0x40, 2);
    func_800291A0(0x41, 2);
    func_800291A0(0x42, 2);
    func_800291A0(0x43, 3);
    func_800291A0(0x44, 2);
    func_800291A0(0x45, 2);
    func_800291A0(0x46, 3);
    func_800291A0(0x47, 3);
    func_800291A0(0x48, 3);
    func_800291A0(0x49, 2);
    func_800291A0(0x4A, 4);
    func_800291A0(0x4B, 2);
    func_800291A0(0x4C, 3);
    func_800291A0(0x4D, 5);
    func_800291A0(0x4E, 2);
    func_800291A0(0x4F, 3);
    func_800291A0(0x50, 4);
    func_800291A0(0x51, 2);
    func_800291A0(0x52, 3);
    func_800291A0(0x53, 2);
    func_800291A0(0x54, 3);
    func_800291A0(0x55, 3);
    func_800291A0(0x56, 2);
    func_800291A0(0x57, 2);
    func_800291A0(0x58, 2);
    func_800291A0(0x59, 3);
    func_800291A0(0x5A, 3);
    func_800291A0(0x5B, 3);
    func_800291A0(0x5C, 2);
    func_800291A0(0x5D, 2);
    func_800291A0(0x5E, 3);
    func_800291A0(0x5F, 2);
    func_800291A0(0x60, 3);
    func_800291A0(0x61, 2);
    func_800291A0(0x62, 3);
    func_800291A0(0x2E, 5);
    func_800291A0(0x7F, (u8)(D_8010F536 | 0x80));
    D_800A65B8 = D_8010F534;
    func_80029124(0xBB, 1);
}
