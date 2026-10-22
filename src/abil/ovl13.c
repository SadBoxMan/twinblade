#include "common.h"
#include "abil.h"

extern void func_80154A74();
extern void func_800183E0();
extern u8 D_ovl13_800CC57C[];
extern u8 D_ovl13_800CC5BC[];
extern u8 D_ovl13_800CB93C[];
extern AbilStep D_ovl13_800CB880[];
extern s32 func_80161104();
void func_ovl13_800CAEE0(s32 arg0);

void func_ovl13_800CAE0C(void) {
    func_800183E0(D_ovl13_800CC57C);
    func_800183E0(D_ovl13_800CC5BC);
    func_800183E0(D_ovl13_800CB93C);
}

void func_ovl13_800CAE54(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl13_800CB880[AF(a, u8, 0x197)](a);
}

void func_ovl13_800CAE98(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl13_800CAEE0(a);
        AF(a, u8, 0x197)++;
    }
}

extern s32 func_80128ED8();
extern void func_80146C3C();
extern s32 func_80146994();
extern u8 D_80078EC1;
extern AbilStep D_ovl13_800CB908[];
extern AbilStep D_ovl13_800CB914[];
extern void func_80155FD4();
extern void func_801599A4();
extern void func_80159B3C();
extern s32 func_80161208();
extern void func_ovl13_800CB05C();

extern void func_ovl13_800CB054();
extern void func_80146A6C();
extern s32 ApplyMatrixSV();
extern s32 RotMatrixYXZ();
extern s32 MulMatrix0();
extern s32 RotMatrixZ();
extern s32 rand();

extern u8 D_80062BD0;
extern u8 D_ovl13_800CB830;
extern void func_80154274();
extern void func_80147324();
extern void func_801655E4();
extern void func_80156648();
extern void func_80019064();

void func_ovl13_800CAEE0(s32 arg0) {
    func_80154274(arg0, (s32) &D_ovl13_800CB830);
    func_80154A74(arg0, 0x15);
    func_80147324(0x477);
    func_801655E4(arg0);
    AF(arg0, u8, 0xBE) = 0;
    AF(arg0, u8, 0xBF) = 0;
    func_80156648(arg0);
    AF(arg0, u8, 0x1AA) = 0;
    func_ovl13_800CB054(arg0);
    func_80019064((s32) &D_80062BD0);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl13_800CAF68(u8 *arg0) {
    u8 temp_a1;

    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (func_80161208() == 0) {
        if (AF(arg0, u16, 0xB8) & 0x2000) {
            AF(arg0, u8, 0xBF) = (u8) (AF(arg0, u8, 0xBF) + 1);
        }
        temp_a1 = AF(arg0, u8, 0xBF);
        if (temp_a1 != 0) {
            func_ovl13_800CB05C(arg0, temp_a1);
        }
        if (AF(arg0, u16, 0xB8) == 0x8000) {
            func_801599A4(arg0);
            func_80159B3C(arg0);
            return;
        }
        func_80155FD4(arg0, AF(arg0, u8, 0x1AA));
    }
}

void func_ovl13_800CB018(u8 *a) {
    *(s16 *)(a + 0x1ba) = 0x1000;
    *(s16 *)(a + 0x1b8) = 0x1000;
    *(s32 *)(a + 0x44) = (*(s32 *)(a + 0x44) & -3);
    func_80154A74(a, 0x11);
}

void func_ovl13_800CB054(u8 *arg0) {
    AF(arg0, s32, 0xC0) = 0;
}

void func_ovl13_800CB05C(u8 *arg0, s32 k) {
    s32 t;

    switch ((u8) k) {
    case 1:
        t = AF(arg0, s32, 0xC0) + 0x800;
        AF(arg0, s32, 0xC0) = t;
        if (t > 0x2000) {
            AF(arg0, s32, 0xC0) = 0x2000;
        }
        AF(arg0, u16, 0x1B8) += 0x800;
        AF(arg0, u16, 0x1BA) += 0x800;
        break;
    case 2:
        t = AF(arg0, s32, 0xC0) - 0x800;
        AF(arg0, s32, 0xC0) = t;
        if (t < 0) {
            AF(arg0, s32, 0xC0) = 0;
        }
        AF(arg0, u16, 0x1B8) -= 0x800;
        AF(arg0, u16, 0x1BA) -= 0x800;
        break;
    }
}

void func_ovl13_800CB0E8(u8 *arg0) {
    void *temp_v0;

    temp_v0 = func_80146994(0x15, arg0, 0, 0);
    if (temp_v0 != NULL) {
        AF(temp_v0, s32, 0x30) = (s32) AF(arg0, s16, 0x36);
    }
}

extern u8 D_ovl13_800CB8BC;
extern u8 D_ovl13_800CB8FC;
extern void func_800D2318();
extern void func_800D1FC8();
extern s32 func_800D21C4();
extern void func_80128EA8();

INCLUDE_ASM("asm/abil/ovl13/nonmatchings/ovl13", func_ovl13_800CB138);

void func_ovl13_800CB370(u8 *arg0) {
    if (D_80078EC1 == 7) {
        D_ovl13_800CB908[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

void func_ovl13_800CB3CC(u8 *arg0) {
    AVec v;
    AVec w;
    AMtx m;
    u8 *o;
    u16 t;

    func_800D2318();
    v.vx = AF(arg0, u16, 0x12);
    v.vy = AF(arg0, u16, 0x16);
    v.vz = 0;
    RotMatrixYXZ(&v, &m);
    v.vy = -8;
    v.vx = 0;
    v.vz = -0x10;
    ApplyMatrixSV(&m, &v, &v);
    t = AF(arg0, u16, 6) + v.vx;
    AF(arg0, u16, 6) = t;
    AF(arg0, s32, 0x4C) = (s16) t;
    t = AF(arg0, u16, 0xA) + v.vy;
    AF(arg0, u16, 0xA) = t;
    AF(arg0, s32, 0x50) = (s16) t;
    t = AF(arg0, u16, 0xE) + v.vz;
    AF(arg0, u16, 0xE) = t;
    AF(arg0, s32, 0x54) = (s16) t;
    func_800D1FC8(arg0, 6);
    o = (u8 *) func_800D21C4(arg0, &D_ovl13_800CB8FC, 0x19);
    if (o != 0) {
        AF(arg0, u8 *, 0x20) = o;
        AF(o, s16, 0x1A) = 0x3000;
        AF(o, s16, 0x18) = 0x3000;
        AF(o, s32, 4) |= 0x50000000;
        func_80128EA8(o, arg0 + 0x24, &D_ovl13_800CB8BC);
        AF(arg0, u16, 2)++;
        return;
    }
    func_80146C3C(arg0);
}

void func_ovl13_800CB510(u8 *arg0) {
    if (D_80078EC1 == 7) {
        D_ovl13_800CB914[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

INCLUDE_ASM("asm/abil/ovl13/nonmatchings/ovl13", func_ovl13_800CB56C);

void func_ovl13_800CB6E4(u8 *arg0) {
    s16 var_v1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x34);
    if (AF(arg0, s32, 0x30) == AF(temp_a0, s16, 0x36)) {
        temp_v1 = AF(temp_a0, s32, 0x58);
        if (temp_v1 < 0) {
            temp_v0 = temp_v1 & 0x8FFFFFFF;
            var_v1 = ((s32) (AF(temp_v0, s16, 8) + AF(temp_v0, s16, 0xA)) >> 1) - 0x10;
        } else {
            var_v1 = -0x30;
        }
        AF(arg0, s32, 0x4C) = (s32) AF(temp_a0, s16, 6);
        AF(arg0, s32, 0x50) = (s32) (AF(temp_a0, s16, 0xA) + var_v1);
        AF(arg0, s32, 0x54) = (s32) AF(temp_a0, s16, 0xE);
    }
    temp_v1_2 = AF(arg0, s32, 0x1C);
    if ((temp_v1_2 < 0x18) && (AF(temp_a0, u16, 0) != 0)) {
        if (temp_v1_2 < 0xE) {
            func_80146A6C(0x15, arg0, 0, 0, 0, 0x8000, AF(arg0, s32, 0x1C));
        }
        AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
        return;
    }
    func_80146C3C(arg0);
}

void func_ovl13_800CB7F0(u8 *arg0) {
    if (func_80128ED8(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) {
        func_80146C3C(arg0);
    }
}
