#include "common.h"
#include "abil.h"

void func_ovl33_800CCB20(void) {
}

extern void func_80162CCC();
extern void func_80147364();
extern void func_80146A6C();
extern s32 func_80161A00();
extern void func_ovl33_800CD1A8();
extern AbilStep D_ovl33_800CD6B0[];
extern void func_ovl33_800CD5BC();
extern AbilStep D_ovl33_800CD6C4[];
extern void func_ovl33_800CCE80();
extern void func_800123F0();
extern void func_80012558();
extern void func_800126C4();
extern void func_80013F3C();
extern s32 MulMatrix();
extern s32 RotMatrixY();
extern void func_80020F34();
extern void func_8001C810();
extern s32 func_8014659C();
extern void func_80146CA0();
extern void func_ovl33_800CCE60();
extern s32 D_ovl33_800CE048;
extern s16 D_ovl33_800CE050;
extern void func_801466F0();
extern void func_80147324();
extern void func_801599A4();
extern void func_80159B3C();
extern void func_ovl33_800CD5DC();

extern void func_ovl33_800CCF84();
extern s32 rcos();
extern s32 rsin();

extern s32 func_8014C088();

extern u8 D_ovl33_800CD66C;
extern s32 func_80146578();
extern void func_8001CC3C();
extern void func_ovl33_800CD204();

extern AbilStep D_ovl33_800CD684[];
extern s32 func_80012ABC();
extern void func_8014ACC0();

extern u16 D_ovl33_800CD690[];
extern u16 D_ovl33_800CD692[];
extern void func_80163408();
extern void func_80163328();
extern s32 func_801632F0();

extern void func_80149374();
extern void func_80146DE8();
extern void func_80146E90();

extern AbilStep D_ovl33_800CD668[];
extern void func_80149020();

void func_ovl33_800CCB28(u8 *arg0) {
    s32 i;

    func_80149020(arg0);
    i = AF(arg0, u16, 2) - 2;
    D_ovl33_800CD668[i](arg0);
}

void func_ovl33_800CCB78(u8 *arg0) {
    func_80147324(0x8DF);
    func_801466F0(0x10, arg0, 0, 0, 0, 0, 0, 0);
    func_801466F0(0x11, arg0, 0, 0, 0, 0, 0, 0);
    func_801466F0(0x11, arg0, 0, 0, 0, 1, 0, 0);
    func_801466F0(0x11, arg0, 0, 0, 0, 2, 0, 0);
    AF(arg0, s16, 0x1C8) = 0xFF;
    func_801599A4(arg0);
    func_80159B3C(arg0);
}

void func_ovl33_800CCC54(u8 *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x4C);
    D_ovl33_800CD684[AF(arg0, u16, 2)]();
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, s32, 4) = (s32) (AF(temp_a0_2, s32, 4) | (AF(AF(temp_s0, void *, 0x20), s32, 4) & 0x80000000));
    AF(arg0, s16, 0x60) = 0;
    D_ovl33_800CE050 = func_80012ABC((s32) D_ovl33_800CE050, (s32) AF(AF(temp_s0, void *, 0x20), s16, 0x12), 0xA);
    func_8014ACC0((s32) temp_s0, 1);
    if (func_80161A00((s32) temp_s0) == 0) {
        func_80147364(4, 0x8E0);
        func_ovl33_800CCE60((s32) arg0);
    }
}

void func_ovl33_800CCD2C(u8 *arg0) {
    void *temp_s2;
    void *temp_v0;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_v0 = func_8014659C();
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != NULL) {
        func_8001C810(temp_v0, &D_ovl33_800CE048);
        AF(temp_v0, s16, 0x1C) = 0;
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50020000);
        func_ovl33_800CCE80(arg0);
        D_ovl33_800CE050 = AF(AF(temp_s2, void *, 0x20), u16, 0x12);
        func_80146CA0(arg0);
        return;
    }
    func_ovl33_800CCE60(arg0);
}

void func_ovl33_800CCDD8(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    if (AF(arg0, s16, 0x60) != 0) {
        temp_v0 = AF(temp_v1, u16, 0x18) + 0x100;
        AF(temp_v1, u16, 0x18) = temp_v0;
        if ((s16) temp_v0 >= 0x1001) {
            AF(temp_v1, u16, 0x18) = 0x1000U;
        }
    } else {
        temp_v0_2 = AF(temp_v1, u16, 0x18) - 0x100;
        AF(temp_v1, u16, 0x18) = temp_v0_2;
        if ((s16) temp_v0_2 < 0) {
            AF(temp_v1, u16, 0x18) = 0U;
        }
    }
    temp_v0_3 = AF(temp_v1, u16, 0x18);
    AF(temp_v1, u16, 0x1C) = temp_v0_3;
    AF(temp_v1, u16, 0x1A) = temp_v0_3;
    func_ovl33_800CCE80((s32) arg0);
}

void func_ovl33_800CCE60(void) {
    func_80162CCC();
}

void func_ovl33_800CCE80(u8 *arg0) {
    s32 temp_s0;
    void *temp_a0;
    void *temp_s1;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_a0 = AF(temp_s2, void *, 0x20);
    temp_s1 = AF(arg0, void *, 0x20);
    AF(arg0, s16, 6) = (s16) AF(temp_a0, s32, 0x48);
    temp_s0 = temp_s1 + 0x34;
    AF(arg0, s16, 0xA) = (s16) (AF(temp_a0, s32, 0x4C) - 0x20);
    AF(arg0, s16, 0xE) = (s16) AF(temp_a0, s32, 0x50);
    func_80013F3C(temp_s0);
    RotMatrixY(AF(temp_s1, s16, 0x12), temp_s0);
    MulMatrix(temp_s0, AF(temp_s2, void *, 0x20) + 0x34);
    func_80020F34(temp_s0, temp_s1 + 0x18);
    AF(temp_s1, u16, 0x2C) = (u16) (AF(temp_s1, u16, 0x2C) | 1);
}

void func_ovl33_800CCF28(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8014C088(arg0, 0x10);
    if (temp_v0 != 0) {
        AF(temp_v0, s16, 0x60) = 1;
    }
}

void func_ovl33_800CCF58(u8 *arg0) {
    func_ovl33_800CCF84();
    AF(arg0, s16, 0x1C8) = 0;
}

void func_ovl33_800CCF84(void) {
    func_80147364(4, 0x8e0);
}

void func_ovl33_800CCFA8(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x4C);
    D_ovl33_800CD6B0[AF(arg0, u16, 2)]();
    if (func_80161A00(temp_s0) == 0) {
        func_ovl33_800CD1A8(arg0);
    }
}

void func_ovl33_800CD010(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_80146578(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CC3C(temp_v0, (s32) &D_ovl33_800CD66C, 0x220, 0x168);
        AF(temp_v0, u8, 0x27) = 0x24;
        AF(temp_v0, u8, 0x24) = 0xFF;
        AF(temp_v0, u8, 0x25) = 0x40;
        AF(temp_v0, u8, 0x26) = 0x40;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        AF(temp_v0, s16, 0x10) = (s16) (AF(arg0, s32, 0x50) << 0xA);
        AF(arg0, s16, 0x60) = (s16) (AF(arg0, s32, 0x50) << 0xA);
        func_ovl33_800CD204(arg0);
        func_80146CA0(arg0);
        return;
    }
    func_ovl33_800CD1A8(arg0);
}

void func_ovl33_800CD0CC(u8 *arg0) {
    s16 temp_v0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    temp_s1 = AF(arg0, void *, 0x4C);
    AF(temp_v1, u16, 0x28) = D_ovl33_800CD690[((AF(arg0, s32, 0x1C) & 7)) * 2];
    AF(temp_v1, u16, 0x2A) = D_ovl33_800CD692[((AF(arg0, s32, 0x1C) & 7)) * 2];
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
    temp_v0 = (AF(temp_s1, s16, 0x1C8) * 0x10) + 0x1000;
    AF(temp_v1, s16, 0x1A) = temp_v0;
    AF(temp_v1, s16, 0x18) = temp_v0;
    func_ovl33_800CD204((s32) arg0);
    func_80163408((s32) arg0, 0x24, 0x80, 4);
    func_80163328((s32) arg0);
    if (func_801632F0((s32) arg0) & 1) {
        func_8014ACC0((s32) temp_s1, 0xA);
    }
}

void func_ovl33_800CD1A8(u8 *arg0) {
    func_80146A6C(3, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), (s32) AF(arg0, s16, 0xE), 0x08880000, 0x1800A000);
    func_80162CCC(arg0);
}

extern s32 func_80146E98();
extern void func_80163194();
extern void func_80162FC0();

extern u8 D_ovl33_800CD6BC;
extern s32 func_8012A758();
extern void func_80013694();
extern void func_800139C8();
extern s32 func_80015954();

void func_ovl33_800CD204(u8 *arg0) {
    AVec v;
    s32 a;
    void *o;
    void *m;
    void *p;

    o = AF(arg0, void *, 0x4C);
    m = AF(arg0, void *, 0x20);
    a = func_8012A758();
    func_80013694(AF(m, s16, 0x10), &D_ovl33_800CD6BC, &v);
    func_800139C8((s16) (a + 0x400), &v, &v);
    p = AF(o, void *, 0x20);
    v.vx += AF(p, s32, 0x48);
    v.vy += AF(p, s32, 0x4C) - 0x20;
    v.vz += AF(p, s32, 0x50);
    v.vx += rcos(AF(arg0, s16, 0x60)) / 512;
    v.vy += rsin(AF(arg0, s16, 0x60)) / 256;
    AF(arg0, s16, 0x60) = (AF(arg0, s16, 0x60) + 0x38) & 0xFFF;
    func_80015954(&v, arg0 + 4);
}

void func_ovl33_800CD328(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x4C);
    D_ovl33_800CD6C4[AF(arg0, u16, 2)]();
    if (func_80161A00(temp_s0) == 0) {
        func_ovl33_800CD5BC(arg0);
    }
}

void func_ovl33_800CD390(u8 *arg0, s32 arg1) {
    s32 temp_s2;
    AModel *temp_v0;

    temp_s2 = AF(arg0, s32, 0x4C);
    temp_v0 = (AModel *) func_80146578((s32) arg0, arg1);
    AF(arg0, AModel *, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CC3C(temp_v0, (s32) &D_ovl33_800CD66C, 0x220, 0x168);
        AF(temp_v0, u8, 0x27) = 0x24;
        AF(temp_v0, u8, 0x24) = 0xFF;
        AF(temp_v0, u8, 0x25) = 0x40;
        AF(temp_v0, u8, 0x26) = 0x40;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        func_80149374(temp_s2, (s32) (arg0 + 4));
        temp_v0->rot.vx = AF(AF(temp_s2, void *, 0x20), u16, 0x10);
        temp_v0->rot.vy = D_ovl33_800CE050;
        temp_v0->rot.vz = AF(AF(temp_s2, void *, 0x20), u16, 0x14);
        AF(arg0, u16, 0x60) = (u16) AF(temp_s2, u16, 0x100);
        AF(arg0, u16, 0x62) = (u16) AF(temp_s2, u16, 0x102);
        AF(arg0, u16, 0x64) = (u16) AF(temp_s2, u16, 0x104);
        temp_v0->scale.vy = 0x1000;
        temp_v0->scale.vx = 0x1000;
        func_80146DE8((s32) arg0, 0, 0, -0x180000);
        func_80146E90((s32) arg0, 8);
        func_80146CA0((s32) arg0);
        func_8014ACC0(temp_s2, 1);
        return;
    }
    func_ovl33_800CD5BC((s32) arg0);
}

void func_ovl33_800CD4BC(u8 *arg0) {
    s32 sp18[7];
    u16 temp_v0;
    void *temp_s1;
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x4C);
    temp_s1 = AF(arg0, void *, 0x20);
    if (func_80146E98(arg0) != 0) {
        func_80146CA0(arg0);
        return;
    }
    AF(temp_s1, u16, 0x28) = D_ovl33_800CD690[(AF(temp_s2, u16, 0x1C8) & 7) * 2];
    AF(temp_s1, u16, 0x2A) = D_ovl33_800CD692[(AF(temp_s2, u16, 0x1C8) & 7) * 2];
    func_ovl33_800CD5DC(arg0, sp18);
    func_80163194(arg0, 0, -0x10000, 0, sp18);
    func_80162FC0(arg0);
    temp_v0 = AF(temp_s1, u16, 0x1A) + 0x200;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    func_80163408(arg0, 0x24, 0x80, 4);
    func_80163328(arg0);
    func_801632F0(arg0);
}

void func_ovl33_800CD5BC(void) {
    func_80162CCC();
}

void func_ovl33_800CD5DC(u8 *arg0, s32 arg1) {
    void *temp_s2;

    temp_s2 = AF(arg0, void *, 0x20);
    func_80013F3C(arg1);
    func_800126C4(arg1, AF(arg0, s16, 0x60));
    func_800123F0(arg1, AF(arg0, s16, 0x64));
    func_80012558(arg1, AF(arg0, s16, 0x62));
    func_80012558(arg1, AF(temp_s2, s16, 0x12));
    func_800126C4(arg1, AF(temp_s2, s16, 0x10));
    func_800123F0(arg1, AF(temp_s2, s16, 0x14));
}
