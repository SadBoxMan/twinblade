#include "common.h"
#include "psyq.h"
#include "work.h"

extern void NextStep(void);
extern void SetMode(s32 a);
extern void func_80015310(void);
extern s32 GetPadPressedDir(s32 a);
extern void func_800167B8(s32 a);
extern s32 func_800167F0(s32 a);
extern void func_8001C044(void);
extern void func_800CEF50(void);
extern u8 D_800B9A11;
extern void (*D_800CF0FC[])(void);
extern s32 D_800CF13C;

void func_800CEDFC(void) {
    register Work *w = &D_800AF630;
    func_800CEF50();
    D_800CF0FC[w->step]();
}

void func_800CEE44(void) {
    func_8001C044();
    func_80015310();
    D_800B9A11 = 0;
    D_800CF13C = 0;
    func_800167B8(0);
    NextStep();
}

void func_800CEE8C(void) {
    if (func_800167F0(0) & 0xFFFF) {
        NextStep();
    }
}

void func_800CEEC0(void) {
    s32 pad;
    pad = GetPadPressedDir(0);
    if (++D_800CF13C > 0x12C || (pad & 0x8F0)) {
        func_800167B8(4);
        NextStep();
    }
}

void func_800CEF1C(void) {
    if (func_800167F0(4) & 0xFFFF) {
        SetMode(0xC);
    }
}

INCLUDE_ASM("asm/ovl3b/nonmatchings/ovl3b", func_800CEF50);
