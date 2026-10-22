#include "common.h"
#include "abil.h"

extern void func_800183E0();
extern u8 D_ovl2f_800CB85C[];
extern AbilStep D_ovl2f_800CB7D4[];
extern s32 func_80161104();
void func_ovl2f_800CAEC0(u8 *a);
extern void func_80154274();
extern void func_801655E4();
extern u8 D_800D57F4[];
extern void func_80162CCC();

void func_ovl2f_800CAE0C(void) {
    func_800183E0(D_ovl2f_800CB85C);
}

void func_ovl2f_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl2f_800CB7D4[AF(a, u8, 0x197)](a);
}

void func_ovl2f_800CAE78(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl2f_800CAEC0(a);
        AF(a, u8, 0x197)++;
    }
}

void func_ovl2f_800CAEC0(u8 *a) {
    func_80154274(a, D_800D57F4);
    func_801655E4(a);
    AF(a, u8, 0x197)++;
}

extern void func_801466F0();
extern void func_801599A4();
extern void func_80159B3C();
extern void func_80161208();
extern void func_80146CA0();
extern void func_80162D28();
extern void func_ovl2f_800CB338();
extern u8 D_80078EC1;
extern AbilStep D_ovl2f_800CB7EC[];
extern void func_8001C214();
extern s32 func_8014659C();
extern s32 func_80146A6C();
extern void func_80146DE8();
extern void func_80146E90();
extern void func_80147324();
extern void func_80149374();
extern s32 D_ovl2f_800CBE04;

void func_ovl2f_800CAF08(u8 *arg0) {
    u16 temp_a0;

    temp_a0 = AF(arg0, u16, 0xB8);
    if ((temp_a0 & 0xFFFF) == 0x8000) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return;
    }
    if (temp_a0 & 0x4000) {
        func_801466F0(0x26, arg0, 0, -0x40, 0, 0, 0, 0);
    }
    func_80161208(arg0);
}

void func_ovl2f_800CAF88(u8 *a) {
    *(s32 *)(a + 0x44) = (*(s32 *)(a + 0x44) & -3);
}

void func_ovl2f_800CAF9C(u8 *arg0) {
    if (D_80078EC1 == 0x1E) {
        D_ovl2f_800CB7EC[AF(arg0, u16, 2)]();
        if (AF(arg0, s32, 0x20) != 0) {
            func_80162D28(arg0);
        }
        if (AF(arg0, s16, 0xA) >= 0x401) {
            goto block_4;
        }
    } else {
block_4:
        func_ovl2f_800CB338(arg0);
    }
}

void func_ovl2f_800CB028(u8 *arg0) {
    void *temp_s2;
    void *temp_v0;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != NULL) {
        func_8001C214(temp_v0, &D_ovl2f_800CBE04);
        AF(temp_v0, s16, 0x1C) = 0x2000;
        AF(temp_v0, s16, 0x1A) = 0x2000;
        AF(temp_v0, s16, 0x18) = 0x2000;
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        AF(temp_v0, u16, 0x12) = (u16) AF(AF(temp_s2, void *, 0x20), u16, 0x12);
        func_80149374(temp_s2, arg0 + 4);
        func_80146DE8(arg0, 0, 0, 0xFFE80000);
        func_80146E90(arg0, 0x3C);
        func_80146A6C(0x4F, arg0, 0, 0, 0, 0, 0);
        func_80147324(0x8E5);
        func_80146CA0(arg0);
        return;
    }
    func_ovl2f_800CB338(arg0);
}

extern void func_80146C3C();
extern AbilStep D_ovl2f_800CB834[];
extern s32 rand();
extern s32 RotMatrixYXZ();

extern s32 func_80146E98();

extern u8 D_80114EB0;
extern u8 D_80114EC8;
extern AVec D_80126B18;
extern void func_80162FF4();
extern void func_80162FC0();
extern s32 func_801638A0();
extern void func_80163408();
extern void func_80163328();
extern s32 func_801632F0();
extern void func_80013E94();

void func_ovl2f_800CB118(u8 *arg0) {
    AVec v;
    s32 c;
    u32 t;

    func_80162FF4(arg0, 0, 0x4000, 0);
    func_80162FC0(arg0);
    if (func_80146E98(arg0) != 0) {
        func_80146CA0(arg0);
        return;
    }
    t = func_801638A0(arg0, &v);
    if (t != 0) {
        if (!(t & 0x8000)) {
            func_80146E90(arg0, 0x20);
            func_80146CA0(arg0);
            return;
        }
        AF(arg0, s32, 0x2C) = 0;
        AF(arg0, s32, 0x24) = 0;
    }
    func_80163408(arg0, 0x2C, 0x80, 0x200);
    func_80163328(arg0);
    t = func_801632F0(arg0);
    switch (t) {
    case 1:
        func_80013E94(&D_80114EB0, &c);
        c |= 0x80000000;
        func_80146A6C(0x1F, arg0, D_80126B18.vx, D_80126B18.vy, D_80126B18.vz, c, 0);
        func_80147324(0x8E6);
        break;
    case 2:
    case 4:
        func_80013E94(&D_80114EC8, &c);
        c |= 0x80000000;
        func_80146A6C(7, arg0, D_80126B18.vx, D_80126B18.vy, D_80126B18.vz, c, 0);
        break;
    }
}

void func_ovl2f_800CB2B4(u8 *arg0, s32 arg1) {
    s32 var_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98((s32) arg0, arg1) != 0) {
        func_80146CA0((s32) arg0);
        return;
    }
    if (AF(arg0, s32, 0x1C) & 1) {
        AF(temp_s1, u32, 4) |= 0x80000000;
    } else {
        AF(temp_s1, u32, 4) &= 0x7FFFFFFF;
    }
}

void func_ovl2f_800CB338(void) {
    func_80162CCC();
}

void func_ovl2f_800CB358(u8 *arg0) {
    if (*AF(arg0, u16 *, 0x34) == 0x26) {
        D_ovl2f_800CB834[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

extern s32 func_ovl2f_800CB3BC();

INCLUDE_ASM("asm/abil/ovl2f/nonmatchings/ovl2f", func_ovl2f_800CB3BC);

void func_ovl2f_800CB634(u8 *a) {
    *(s32 *)(a + 0x1c) = 0x20;
    *(s16 *)(a + 0x12) = 0;
    *(s16 *)(a + 0x10) = 0x80;
    *(s16 *)(a + 0x2) = (*(u16 *)(a + 0x2) + 0x1);
}

void func_ovl2f_800CB658(u8 *arg0) {
    u8 *p;
    u8 *o;
    s32 v;

    p = AF(arg0, u8 *, 0x34);
    if (AF(arg0, s16, 0x12) > AF(arg0, s16, 0x10)) {
        if (AF(arg0, s32, 0x1C) > 0) {
            AF(arg0, s16, 0x10) = rand() & 0x30;
            v = -0x30;
            goto set;
        }
    } else if (AF(arg0, s32, 0x1C) < 0) {
        AF(arg0, s16, 0x10) = (rand() & 0x30) + 0x40;
        v = 0x30;
    set:
        AF(arg0, s32, 0x1C) = v;
    }
    AF(arg0, u16, 0x12) += AF(arg0, s32, 0x1C);
    AF(arg0, AMtx, 0x38) = AF(AF(p, u8 *, 0x20), AMtx, 0x34);
    func_ovl2f_800CB3BC(arg0, 0, 0, -0x50);
    o = (u8 *) func_80146A6C(0xE, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
    if (o != NULL) {
        AF(o, AMtx, 0x38) = AF(AF(p, u8 *, 0x20), AMtx, 0x34);
    }
}
