#include "common.h"
#include "abil.h"
#include "gte.h"

extern void func_ovl21_800CC024();
extern void func_800183E0();
extern u8 D_ovl21_800CC22C[];
extern u8 D_ovl21_800CC1EC[];
extern AbilStep D_ovl21_800CC134[];
extern AbilStep D_ovl21_800CC140[];
void func_ovl21_800CAEC0(u8 *a);
extern void func_80162CCC();

void func_ovl21_800CAE0C(void) {
    func_800183E0(D_ovl21_800CC22C);
    func_800183E0(D_ovl21_800CC1EC);
}

void func_ovl21_800CAE44(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl21_800CC134[AF(a, u8, 0x197)](a);
}

void func_ovl21_800CAE88(u8 *a) {
    func_ovl21_800CAEC0(a);
    AF(a, u8, 0x197)++;
}

extern void func_ovl21_800CAFEC();
extern void func_801662F4();
extern void func_80154A74();
extern void func_801553C0();
extern void func_801599A4();
extern void func_801655E4();
extern s32 func_80165910();
extern s32 func_ovl21_800CAF5C();
extern void func_ovl21_800CB7FC();
extern u8 D_80078EC1;
extern AbilStep D_ovl21_800CC180[];
extern void func_ovl21_800CC004();
extern AbilStep D_ovl21_800CC1C4[];
extern void func_80146CA0();
extern void func_80154150();
extern void func_801553A8();
extern void func_80155440();
extern s32 func_80161208();
extern void func_80165A20();
extern void func_8012A62C();
extern s32 func_80148800();
extern void func_80159B3C();
extern s32 D_80078EC8;
extern void func_801466F0();
extern void func_80147324();
extern void func_800178EC();

void func_ovl21_800CAEC0(u8 *arg0) {
    func_801599A4();
    func_ovl21_800CAF5C(arg0);
    if (func_80165910(arg0) == 0) {
        func_801655E4(arg0);
    }
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl21_800CAF18(void) {
}

void func_ovl21_800CAF20(void) {
}

extern s32 rcos();
extern s32 rsin();

extern void func_80147078();
extern void func_ovl21_800CAF90();
extern s32 func_ovl21_800CB82C();
extern s32 func_80146E98();
extern void func_80146D90();

void func_ovl21_800CAF28(s32 arg0) {
    func_80147078(arg0, 0x20);
    func_ovl21_800CAFEC(arg0);
}

s32 func_ovl21_800CAF5C(s32 arg0) {
    func_80147078(arg0, 0x20);
    func_ovl21_800CAF90(arg0);
    return;
}

void func_ovl21_800CAF90(u8 *a) {
    D_ovl21_800CC140[AF(a, u16, 2)](a);
}

void func_ovl21_800CAFCC(void) {
    func_ovl21_800CAFEC();
}

void func_ovl21_800CAFEC(u8 *arg0) {
    if (func_80161208() != 0) {
        func_80165A20(arg0);
        return;
    }
    func_801553A8(arg0);
    func_80155440(arg0);
    func_80154150(arg0, 0x26);
    func_80154A74(arg0, 0x1E);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xFE9;
    AF(arg0, s32, 0x238) = 0;
    func_80146CA0(arg0);
}

void func_ovl21_800CB06C(u8 *arg0) {
    void *temp_a0;
    void *temp_v1;

    if (func_80161208() != 0) {
        func_80165A20(arg0);
        return;
    }
    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x238) = (s32) (AF(arg0, s32, 0x238) + 0x1C000);
    AF(temp_a0, u16, 0x10) = (u16) ((AF(temp_a0, u16, 0x10) - AF(arg0, u16, 0x23A)) & 0xFFF);
    temp_v1 = AF(arg0, void *, 0x20);
    if ((s16) AF(temp_v1, u16, 0x10) < 0xC00) {
        AF(temp_v1, u16, 0x10) = 0xC00U;
        AF(arg0, s16, 0xB8) = 1;
        func_80146CA0(arg0);
    }
}

void func_ovl21_800CB108(u8 *arg0) {
    if (func_80161208() != 0) {
        func_80165A20(arg0);
        return;
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_80154150(arg0, 0x27);
        func_80154A74(arg0, 0x1F);
        func_801466F0(0xD, arg0, 0, -0x40, 0, 0, 0, 0);
        func_80147324(0x6E2);
        func_80146CA0(arg0);
    }
}

void func_ovl21_800CB1A0(u8 *arg0) {
    if (func_80161208() != 0) {
        func_80165A20(arg0);
        return;
    }
    if ((func_80148800(arg0) & 0x20) || (D_80078EC8 == 0)) {
        func_8012A62C(0x10);
        func_80165A20(arg0);
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return;
    }
    AF(arg0, s16, 0x15A) = 1;
}

void func_ovl21_800CB234(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    func_801553C0();
    func_80154A74(arg0, 0x11);
}

void func_ovl21_800CB270(u8 *arg0) {
    if (D_80078EC1 != 0x18) {
        func_ovl21_800CB7FC();
        return;
    }
    D_ovl21_800CC180[AF(arg0, u16, 2)]();
}

extern u8 D_ovl21_800CC150;
extern AVec D_ovl21_800CC298;
extern s32 func_8014659C();
extern void func_8001C2C4();
extern void func_80146E90();
extern void func_80149374();
extern void func_801466B4();

void func_ovl21_800CB2CC(u8 *arg0) {
    AModel *m;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x4C);
    m = func_8014659C();
    AF(arg0, AModel *, 0x20) = m;
    if (m != 0) {
        func_8001C2C4(m);
        m->rot.vy = AF(AF(temp_s2, void *, 0x20), u16, 0x12);
        m->scale.vy = 0;
        m->scale.vx = 0;
        m->scale.vz = 0x1000;
        func_80146E90(arg0, 0x20);
        func_80149374(temp_s2, arg0 + 4);
        AF(arg0, s32 *, 0x58) = &D_ovl21_800CC150;
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, s16, 0x62) = 0;
        AF(arg0, s16, 0x64) = 0;
        func_801466B4(0x28, arg0, 0, 0, 1);
        func_801466B4(0x28, arg0, 1, 0, 1);
        D_ovl21_800CC298 = AF(temp_s2, AVec, 0x154);
        func_80146CA0(arg0);
        return;
    }
    func_ovl21_800CB7FC(arg0);
}

void func_ovl21_800CB3E0(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_ovl21_800CB82C((s32) arg0, AF(arg0, s32, 0x58));
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) - 1);
    temp_v0 = AF(temp_s0, u16, 0x18) + 0x100;
    AF(temp_s0, u16, 0x18) = temp_v0;
    if ((s16) temp_v0 >= 0x1CCD) {
        AF(temp_s0, u16, 0x18) = 0x1CCCU;
    }
    temp_v0_2 = AF(temp_s0, u16, 0x1A) + 0x100;
    AF(temp_s0, u16, 0x1A) = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x1CCD) {
        AF(temp_s0, u16, 0x1A) = 0x1CCCU;
    }
    if (func_80146E98((s32) arg0) != 0) {
        AF(temp_s0, u16, 0x18) = 0x1CCCU;
        AF(temp_s0, u16, 0x1A) = 0x1CCCU;
        func_80146D90((s32) arg0);
        func_80146CA0((s32) arg0);
    }
}

extern s16 D_800B9A08;
extern void func_80015978();
extern void func_80015954();

INCLUDE_ASM("asm/abil/ovl21/nonmatchings/ovl21", func_ovl21_800CB4A4);

void func_ovl21_800CB7FC(s32 arg0) {
    func_801662F4();
    func_80162CCC(arg0);
}

INCLUDE_ASM("asm/abil/ovl21/nonmatchings/ovl21", func_ovl21_800CB82C);

s32 func_ovl21_800CBA44(AVec *v, u16 *a, u8 *b, u16 *c, u8 *o, s32 *z) {
    s32 flag;

    v[0].vx = a[0] + AF(b, u16, 0x10);
    v[0].vy = a[1] + AF(b, u16, 0x12);
    v[1].vx = a[2] + AF(b, u16, 0x10);
    v[1].vy = a[3] + AF(b, u16, 0x12);
    v[2].vx = c[0] + (a[4] + AF(b, u16, 0x10));
    v[2].vy = c[1] + (a[5] + AF(b, u16, 0x12));
    v[3].vx = c[0] + (a[6] + AF(b, u16, 0x10));
    v[3].vy = c[1] + (a[7] + AF(b, u16, 0x12));
    gte_ldv3(&v[0], &v[1], &v[2]);
    gte_rtpt();
    gte_stsxy3(o, o + 8, o + 0x10);
    gte_stflg(&flag);
    if (flag & ~0x1000) {
        return 1;
    }
    gte_ldv0(&v[3]);
    gte_rtps();
    gte_stsxy(o + 0x18);
    gte_stflg(&flag);
    if (flag & ~0x1000) {
        return 1;
    }
    AF(o, s32, 0x20) = AF(b, s32, 0) + *z;
    AF(o, s32, 0x24) = AF(b, s32, 4) + *z;
    AF(o, s32, 0x28) = AF(b, s32, 8) + *z;
    AF(o, s32, 0x2C) = AF(b, s32, 0xC) + *z;
    return 0;
}

void func_ovl21_800CBBF8(u8 *arg0, u8 *arg1) {
    AF(arg0, u16, 0) = (u16) (AF(arg0, u16, 0) + AF(arg1, u16, 0));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + AF(arg1, u16, 2));
    AF(arg0, u16, 8) = (u16) (AF(arg0, u16, 8) + AF(arg1, u16, 0));
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(arg1, u16, 2));
    AF(arg0, u16, 0x10) = (u16) (AF(arg0, u16, 0x10) + AF(arg1, u16, 0));
    AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + AF(arg1, u16, 2));
    AF(arg0, u16, 0x18) = (u16) (AF(arg0, u16, 0x18) + AF(arg1, u16, 0));
    AF(arg0, u16, 0x1A) = (u16) (AF(arg0, u16, 0x1A) + AF(arg1, u16, 2));
    func_800178EC();
}

void func_ovl21_800CBCB4(u8 *arg0) {
    AVec v;

    func_80015978(arg0 + 4, &v);
    switch (D_800B9A08) {
    case 0x3035:
        if (v.vx < -0x93E) v.vx = -0x93E;
        if (v.vx > -0x3C2) v.vx = -0x3C2;
        if (v.vz < 0x3C2) v.vz = 0x3C2;
        if (v.vz > 0xCBE) v.vz = 0xCBE;
        break;
    case 0x3037:
        if (v.vx < 0x4C2) v.vx = 0x4C2;
        if (v.vx > 0xA3E) v.vx = 0xA3E;
        if (v.vz < 0xAC2) v.vz = 0xAC2;
        if (v.vz > 0x13BE) v.vz = 0x13BE;
        break;
    case 0x3038:
        if (v.vx < -0xF3E) v.vx = -0xF3E;
        if (v.vx > -0x9C2) v.vx = -0x9C2;
        if (v.vy < -0xA00) v.vy = -0xA00;
        if (v.vy > -0x202) v.vy = -0x202;
        break;
    case 0x3039:
        if (v.vx < -0x153E) v.vx = -0x153E;
        if (v.vx > -0xFC2) v.vx = -0xFC2;
        if (v.vz < 0x3C2) v.vz = 0x3C2;
        if (v.vz > 0xFBE) v.vz = 0xFBE;
        break;
    }
    func_80015954(&v, arg0 + 4);
}

void func_ovl21_800CBECC(u8 *arg0) {
    if (D_80078EC1 != 0x18) {
        func_ovl21_800CC004();
        return;
    }
    D_ovl21_800CC1C4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/abil/ovl21/nonmatchings/ovl21", func_ovl21_800CBF28);

void func_ovl21_800CBFE4(void) {
    func_ovl21_800CC024();
}

void func_ovl21_800CC004(void) {
    func_80162CCC();
}

INCLUDE_ASM("asm/abil/ovl21/nonmatchings/ovl21", func_ovl21_800CC024);
