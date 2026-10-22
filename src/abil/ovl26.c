#include "common.h"
#include "abil.h"

extern void func_80162CCC();
extern void func_800183E0();
extern u8 D_ovl26_800CB2D4[];
extern AbilStep D_ovl26_800CB29C[];
extern s32 func_80161104();
void func_ovl26_800CAEC0(s32 arg0);

void func_ovl26_800CAE0C(void) {
    func_800183E0(D_ovl26_800CB2D4);
}

void func_ovl26_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl26_800CB29C[AF(a, u8, 0x197)](a);
}

void func_ovl26_800CAE78(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl26_800CAEC0(a);
        AF(a, u8, 0x197)++;
    }
}

extern void func_801473EC();
extern void func_80147460();
extern void func_80147A84();
extern void func_80148038();
extern void func_80155FD4();
extern s32 func_80161418();

extern void func_ovl26_800CB24C();
extern u8 D_80078EC1;
extern AbilStep D_ovl26_800CB2A8[];

extern u8 D_ovl26_800CB26C;
extern void func_80154274();
extern void func_80146DE8();
extern void func_801477E8();
extern void func_801655E4();
extern void func_80156648();
extern void func_801466F0();

void func_ovl26_800CAEC0(s32 arg0) {
    func_80154274(arg0, (s32) &D_ovl26_800CB26C);
    func_80146DE8(arg0, 0, 0, -0x120000);
    func_801477E8(arg0, -0xC0000);
    func_801655E4(arg0);
    func_80156648(arg0);
    AF(arg0, u8, 0x1AA) = 1;
    func_801466F0(0x18, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl26_800CAF60(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    func_80147A84();
    func_801473EC(arg0);
    func_80148038(arg0, 0x20000);
    func_80147460(arg0);
    if (func_80161418(arg0) == 0) {
        func_80155FD4(arg0, AF(arg0, u8, 0x1AA));
    }
}

extern void func_80149374();
extern u8 D_ovl26_800CC3C4;
extern s32 func_8014659C();
extern void func_8001C810();
extern void func_80146CA0();
extern AObj68 D_8011F9D0[];

void func_ovl26_800CAFD0(u8 *arg0) {
    s32 i;
    AObj68 *p;

    p = D_8011F9D0;
    for (i = 0; i < 0x14; i++) {
        if (p[i].type == 0x18) {
            func_80162CCC(&p[i]);
        }
    }
    AF(arg0, s32, 0x44) &= ~2;
}

void func_ovl26_800CB054(u8 *arg0) {
    if (D_80078EC1 == 9) {
        D_ovl26_800CB2A8[AF(arg0, u16, 2)]();
        return;
    }
    func_ovl26_800CB24C();
}

void func_ovl26_800CB0B0(u8 *arg0) {
    void *temp_s2;
    void *temp_v0;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C810(temp_v0, &D_ovl26_800CC3C4);
        AF(temp_v0, s32, 4) |= 0x50000000;
        func_80149374(temp_s2, arg0 + 4);
        AF(temp_v0, AMtx, 0x34) = AF(AF(temp_s2, void *, 0x20), AMtx, 0x34);
        func_80146CA0(arg0);
        return;
    }
    func_ovl26_800CB24C(arg0);
}

extern u16 D_800B99DA;

void func_ovl26_800CB188(u8 *arg0) {
    u8 *s;
    u8 *m;

    s = AF(arg0, u8 *, 0x4C);
    m = AF(arg0, u8 *, 0x20);
    AF(arg0, s32, 0xC) = 0;
    AF(arg0, s32, 8) = 0;
    AF(arg0, s32, 4) = 0;
    func_80149374(s, arg0 + 4);
    AF(m, AMtx, 0x34) = AF(AF(s, u8 *, 0x20), AMtx, 0x34);
    AF(m, s32, 4) &= 0x7FFFFFFF;
    if (D_800B99DA & 1) {
        AF(m, s32, 4) |= 0x80000000;
    }
}

void func_ovl26_800CB24C(void) {
    func_80162CCC();
}
