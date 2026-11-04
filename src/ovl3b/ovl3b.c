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

typedef struct {
    u32 tag;
    u32 tpage;
    u8 r0, g0, b0, code;
    s16 x0, y0;
    u8 u0, v0;
    u16 clut;
    s16 w, h;
} TitleSprt;
extern u32 D_800AA60C[][0x1000];
extern TitleSprt D_800CF10C;
extern TitleSprt D_800CF124;

void func_800CEF50(void) {
    register Work *w = &D_800AF630;
    setlen(&D_800CF10C, 5);
    D_800CF10C.tpage = 0xE100008A;
    D_800CF10C.code = 0x64;
    D_800CF10C.x0 = -0xA0;
    D_800CF10C.y0 = -0x6E;
    D_800CF10C.r0 = D_800CF10C.g0 = D_800CF10C.b0 = 0x80;
    D_800CF10C.u0 = 0;
    D_800CF10C.v0 = 0xA;
    D_800CF10C.w = 0x100;
    D_800CF10C.h = 0xF0;
    D_800CF10C.clut = 0x7800;
    setlen(&D_800CF124, 5);
    D_800CF124.tpage = 0xE100008C;
    D_800CF124.code = 0x64;
    D_800CF124.x0 = 0x60;
    D_800CF124.y0 = -0x6E;
    D_800CF124.r0 = D_800CF124.g0 = D_800CF124.b0 = 0x80;
    D_800CF124.u0 = 0;
    D_800CF124.v0 = 0xA;
    D_800CF124.w = 0x40;
    D_800CF124.h = 0xF0;
    D_800CF124.clut = 0x7800;
    addPrim(D_800AA60C[w->frame], &D_800CF10C);
    addPrim(D_800AA60C[w->frame], &D_800CF124);
}
