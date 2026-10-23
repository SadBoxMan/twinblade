#include "common.h"
#include "abil.h"

extern AbilStep D_ovl2b_800CB610[];
extern s32 func_80161104();
void func_ovl2b_800CAF4C(u8 *a);
extern void func_80154274();
extern void func_801655E4();
extern u8 D_800D57F4[];
extern void func_80162CCC();

extern void func_ovl2b_800CB358();
extern void func_800183E0();
extern s32 D_ovl2b_800CB6BC;
extern s32 D_ovl2b_800CB6FC;
extern s32 D_ovl2b_800CB73C;
extern s32 D_ovl2b_800CB95C;
extern void func_80146C3C();
extern u8 D_80078EC1;
extern AbilStep D_ovl2b_800CB654[];
extern void func_80146CA0();
extern s32 func_80146E98();
extern void func_ovl2b_800CB378();
extern AbilStep D_ovl2b_800CB634[];
extern void func_801466F0();
extern void func_801599A4();
extern void func_80159B3C();
extern void func_80161208();
extern void func_8001CA1C();
extern s32 func_8014659C();
extern void func_80146DE8();
extern void func_80146E90();
extern void func_80147324();
extern void func_80149374();
extern s32 D_ovl2b_800CB61C;

extern s32 D_ovl2b_800CB5D4[];

void func_ovl2b_800CAE0C(void) {
    s32 pad;
    s32 v;

    v = D_ovl2b_800CB5D4[D_ovl2b_800CB95C];
    D_ovl2b_800CB95C++;
    if (v == 0) {
        v = D_ovl2b_800CB5D4[0];
        D_ovl2b_800CB95C = 1;
    }
    func_800183E0(v);
}

void func_ovl2b_800CAE70(void) {
    func_800183E0(&D_ovl2b_800CB6FC);
    func_800183E0(&D_ovl2b_800CB73C);
    D_ovl2b_800CB95C = 0;
    func_800183E0(&D_ovl2b_800CB6BC);
}

void func_ovl2b_800CAEC0(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl2b_800CB610[AF(a, u8, 0x197)](a);
}

void func_ovl2b_800CAF04(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl2b_800CAF4C(a);
        AF(a, u8, 0x197)++;
    }
}

void func_ovl2b_800CAF4C(u8 *a) {
    func_80154274(a, D_800D57F4);
    func_801655E4(a);
    AF(a, u8, 0x197)++;
}

void func_ovl2b_800CAF94(u8 *arg0) {
    u16 temp_a0;

    temp_a0 = AF(arg0, u16, 0xB8);
    if ((temp_a0 & 0xFFFF) == 0x8000) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return;
    }
    if (temp_a0 & 0x4000) {
        func_801466F0(0x1E, arg0, 0, -0x40, 0, 0, 0, 0);
    }
    func_80161208(arg0);
}

void func_ovl2b_800CB014(u8 *a) {
    AF(a, s32, 0x44) &= ~2;
}

void func_ovl2b_800CB028(u8 *arg0) {
    if ((D_80078EC1 != 0x19) || (D_ovl2b_800CB634[AF(arg0, u16, 2)](), ((AF(arg0, s16, 0xA) < 0x401) == 0))) {
        func_ovl2b_800CB358(arg0);
    }
}

void func_ovl2b_800CB09C(u8 *arg0) {
    void *temp_s2;
    void *temp_v0;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != NULL) {
        func_8001CA1C(temp_v0, &D_ovl2b_800CB61C);
        AF(temp_v0, u16, 0x12) = (u16) AF(AF(temp_s2, void *, 0x20), u16, 0x12);
        func_80149374(temp_s2, arg0 + 4);
        func_80146DE8(arg0, 0, 0xFFF40000, 0xFFE80000);
        func_80146E90(arg0, 0x3C);
        func_80147324(0x912);
        func_80146CA0(arg0);
        return;
    }
    func_ovl2b_800CB358(arg0);
}

extern u8 D_801202A0[];
extern s32 func_8014C308();
extern s32 func_8014C278();
extern void func_80015978();
extern void func_8014C3A4();

extern u8 D_ovl2b_800CB628;
extern void func_80162FF4();
extern void func_80162FC0();
extern s32 func_80163950();
extern s32 func_8016380C();
extern void func_80016714();
extern u8 *func_80146578();
extern void func_8001CB6C();
extern void func_80146A6C();
extern void func_80163408();
extern void func_80163328();

void func_ovl2b_800CB150(u8 *arg0) {
    AVec v;
    s32 f;
    u8 *o;
    s32 i;

    func_80162FF4(arg0, 0, 0x40000, 0);
    func_80162FC0(arg0);
    if (func_80146E98(arg0) != 0) {
        goto done;
    }
    f = (func_80163950(arg0) != 0) << 13;
    f |= func_8016380C(arg0, &v);
    if (f != 0) {
        if (f == 0x8000) {
            AF(arg0, s32, 0x2C) = 0;
            AF(arg0, s32, 0x24) = 0;
        } else {
            func_80016714(AF(arg0, u8 *, 0x20), 0x84);
            AF(arg0, u8 *, 0x20) = 0;
            o = func_80146578();
            AF(arg0, u8 *, 0x20) = o;
            if (o != NULL) {
                func_8001CB6C(o, &D_ovl2b_800CB628, 0x1A0, 0x100);
                AF(o, u8, 0x27) = 0x1B;
                AF(o, s16, 0x10) = 0x400;
                func_80146E90(arg0, 0x20);
                i = 0;
            loop:
                func_80146A6C(0x45, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), i, 0);
                i++;
                if (i < 4) goto loop;
                func_80147324(0x913);
            done:
                func_80146CA0(arg0);
                return;
            }
            func_ovl2b_800CB358(arg0);
        }
    }
    func_80163408(arg0, 0x27, 0, 0x80);
    func_80163328(arg0);
}

void func_ovl2b_800CB2A8(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_v1, u16, 0x1A) + 0x80;
    AF(temp_v1, u16, 0x1A) = temp_v0;
    AF(temp_v1, u16, 0x18) = temp_v0;
    if (func_80146E98() != 0) {
        func_80146CA0(arg0);
        return;
    }
    func_ovl2b_800CB378(arg0);
}

void func_ovl2b_800CB30C(u8 *arg0) {
    u16 temp_v1;
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_v0, u16, 0x1A) - 0x300;
    AF(temp_v0, u16, 0x1A) = temp_v1;
    AF(temp_v0, u16, 0x18) = temp_v1;
    if ((s16) temp_v1 < 0) {
        func_ovl2b_800CB358((s32) arg0);
    }
}

void func_ovl2b_800CB358(void) {
    func_80162CCC();
}

void func_ovl2b_800CB378(u8 *arg0) {
    AVec v;
    u8 *p;

    for (p = D_801202A0; p < D_801202A0 + 0x6480; p += 0x10C) {
        if (func_8014C308(arg0, p, 0x27, 0x80) != 0 && func_8014C278(arg0, p, 0x60) != 0) {
            func_80015978(p + 4, &v);
            v.pad = 0;
            func_8014C3A4(arg0, p, 0x27, &v);
        }
    }
}

void func_ovl2b_800CB424(u8 *arg0) {
    if (D_80078EC1 == 0x19) {
        D_ovl2b_800CB654[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

extern u8 D_ovl2b_800CB648;
extern s32 D_ovl2b_800CB65C[];
extern s32 D_ovl2b_800CB660[];
extern s32 D_ovl2b_800CB664[];
extern s32 func_801465C0();
extern void func_8001CC3C();

void func_ovl2b_800CB480(s32 arg0) {
    s32 temp_v0;
    u16 st;

    temp_v0 = func_801465C0();
    if (temp_v0 == 0) {
        func_80146C3C(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = temp_v0;
    func_8001CC3C(temp_v0, (s32) &D_ovl2b_800CB648, 0x1B8, 0x100);
    AF(temp_v0, u8, 0x27) = 0x1A;
    AF(temp_v0, s16, 0x1A) = 0x2000;
    AF(temp_v0, s16, 0x18) = 0x2000;
    AF(arg0, s32, 0x10) = D_ovl2b_800CB65C[AF(arg0, s32, 0x2C) * 4];
    AF(arg0, s32, 0x14) = D_ovl2b_800CB660[AF(arg0, s32, 0x2C) * 4];
    AF(arg0, s32, 0x18) = D_ovl2b_800CB664[AF(arg0, s32, 0x2C) * 4];
    AF(arg0, s32, 0x1C) = 0x10;
    st = AF(arg0, u16, 2) + 1;
    AF(arg0, u16, 2) = st;
}

void func_ovl2b_800CB55C(u8 *arg0) {
    AF(arg0, s32, 4) += AF(arg0, s32, 0x10);
    AF(arg0, s32, 0xC) += AF(arg0, s32, 0x18);
    AF(arg0, s32, 8) += (AF(arg0, s32, 0x14) += 0xC000);
    if (--AF(arg0, s32, 0x1C) == -1) {
        func_80146C3C(arg0);
    }
}
