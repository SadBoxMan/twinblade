#include "common.h"
#include "abil.h"

extern void func_ovl30_800CCD60();

extern AbilStep D_ovl30_800CCD94[];
extern void func_80149020();

extern u8 D_800D5360;
extern void func_80154274();
extern void func_80146994();
extern void func_80156648();
extern void func_80147324();

void func_ovl30_800CCB20(u8 *arg0) {
    func_80154274(arg0, &D_800D5360);
    AF(arg0, s32, 0x234) = 0;
    AF(arg0, s32, 0x238) = 0;
    AF(arg0, u16, 0x244) = AF(AF(arg0, void *, 0x20), u16, 0x12);
    AF(arg0, s16, 0x246) = 0;
    AF(arg0, s16, 0x248) = 0x100;
    AF(arg0, s32, 0x23C) = 0;
    func_80146994(5, arg0, 8, 0);
    func_80156648(arg0);
    func_80147324(0x450);
    func_80149020(arg0);
}

void func_ovl30_800CCBA0(u8 *arg0) {
    s32 i;

    func_80149020(arg0);
    i = AF(arg0, u16, 2) - 2;
    D_ovl30_800CCD94[i](arg0);
}

extern u8 D_80078E78;
extern void func_80155FB0();
extern void func_80161208();
extern void func_801599A4();
extern void func_80159B3C();

void func_ovl30_800CCBF0(u8 *arg0) {
    s32 pad[12];
    u8 *g;
    s32 t;
    u16 s;

    g = &D_80078E78;
    t = AF(arg0, s32, 0x23C);
    if (t == 0) {
        if (AF(arg0, u16, 0xB8) & 0x4000) {
            AF(arg0, s32, 0x23C) = 1;
            func_ovl30_800CCD60(arg0);
        }
    } else if (t >= 0) {
        if (t < 7) {
            AF(arg0, s32, 0x23C) = t + 1;
            func_ovl30_800CCD60(arg0);
        }
    }
    switch (AF(arg0, s32, 0x234)) {
    case 0:
        if (AF(arg0, u16, 0xB8) & 0x8000) {
            if (AF(arg0, s16, 0x246) < 0x1000) {
                s = AF(arg0, u16, 0x248) + 0x1E;
                AF(arg0, u16, 0x248) = s;
                AF(arg0, u16, 0x246) += s;
                AF(arg0, u16, 0x24A) = AF(AF(arg0, u8 *, 0x20), u16, 0x12);
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(arg0, u16, 0x244) + AF(arg0, u16, 0x246);
                func_80155FB0(arg0, (AF(g, u8, 0x48) & 0x7F) - 1);
            } else {
                AF(arg0, u16, 0xB8) = 1;
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(arg0, u16, 0x244);
                AF(arg0, s32, 0x234)++;
            }
        }
        break;
    case 1:
        if (AF(arg0, u16, 0xB8) & 0x8000) {
            func_801599A4(arg0);
            func_80159B3C(arg0);
            return;
        }
        break;
    }
    func_80161208(arg0);
}

void func_ovl30_800CCD60(u8 *arg0) {
    AF(arg0, s16, 0xF6) = (s16) (((AF(arg0, s32, 0x23C) << 0xA) / 7) + 0x1000);
}
