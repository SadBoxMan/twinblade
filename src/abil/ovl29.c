#include "common.h"
#include "abil.h"

extern void QueueImage();
extern u8 D_ovl29_800CB2C8[];
extern AbilStep D_ovl29_800CB278[];
extern AbilStep D_ovl29_800CB284[];
void func_ovl29_800CAEB0(u8 *a);

void func_ovl29_800CAE0C(void) {
    QueueImage(D_ovl29_800CB2C8);
}

void func_ovl29_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl29_800CB278[AF(a, u8, 0x197)](a);
}

void func_ovl29_800CAE78(u8 *a) {
    func_ovl29_800CAEB0(a);
    AF(a, u8, 0x197)++;
}

void func_ovl29_800CAEB0(u8 *a) {
    *(s8 *)(a + 0x197) = (*(u8 *)(a + 0x197) + 0x1);
}

extern void func_80146CA0();
extern void func_801655E4();
extern void func_ovl29_800CAFBC();
extern void Hurl_Release();
extern s32 func_80161104();
extern void func_801599A4();
extern void func_80159B3C();
extern void func_80161208();
extern s32 Hurl_HoldUpdate();

extern s32 D_80078EC8;

void func_ovl29_800CAEC4(void) {
    D_80078EC8 = 1;
}

void func_ovl29_800CAED8(void) {
}

extern void func_8014C1A0();
extern void PosToSVec();
extern void func_8014C4AC();
extern s32 func_80156370();

extern void func_80147078();

void func_ovl29_800CAEE0(s32 arg0) {
    func_80147078(arg0, 0x23);
    func_ovl29_800CAFBC(arg0);
}

extern void Hurl_ThrowUpdate();

void Hurl_BeginThrow(s32 arg0) {
    func_80147078(arg0, 0x23);
    Hurl_ThrowUpdate(arg0);
}

void Hurl_ThrowUpdate(u8 *a) {
    D_ovl29_800CB284[AF(a, u16, 2)](a);
}

void func_ovl29_800CAF84(s32 arg0) {
    if (func_80161104() != 0) {
        func_ovl29_800CAFBC(arg0);
    }
}

void func_ovl29_800CAFBC(s32 arg0) {
    func_801655E4();
    func_80146CA0(arg0);
}

extern void func_80154A74();

extern u8 Hurl_LiftPath;
extern s32 func_80149374();

extern s32 func_80171AB0();
extern void func_80154150();
extern void func_80147324();
extern void func_801553A8();
extern u8 *D_801151D4;

void Hurl_ThrowStart(s32 arg0) {
    AVec v;

    v.vx = AF(D_801151D4, s32, 0x3C);
    v.vy = AF(D_801151D4, s32, 0x40);
    v.vz = AF(D_801151D4, s32, 0x44);
    if ((s16) func_80171AB0(arg0, &v) == 0) {
        func_80154150(arg0, 0x1C);
        func_80154A74(arg0, 0x19);
        AF(arg0, s32, 0x234) = 0;
        Hurl_HoldUpdate(arg0);
        func_80147324(0x8F1);
        func_801553A8(arg0);
        func_80146CA0(arg0);
    }
}

void Hurl_ThrowStep(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        Hurl_Release();
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return;
    }
    if (AF(arg0, s32, 0x178) != 0) {
        Hurl_HoldUpdate(arg0);
    }
    func_80161208(arg0);
}

void func_ovl29_800CB108(s32 arg0) {
    func_80154A74(arg0, 0x11);
    Hurl_Release(arg0);
}

s32 Hurl_HoldUpdate(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void *temp_a1;

    temp_v1 = AF(arg0, s32, 0x234);
    temp_a1 = AF(arg0, void *, 0x178);
    AF(arg0, s32, 0x234) = (s32) (temp_v1 + 1);
    AF(temp_a1, s16, 6) = (s16) ((s8) *(&Hurl_LiftPath + temp_v1) + AF(AF(temp_a1, void *, 0x78), u16, 0xC));
    temp_v1_2 = AF(arg0, s32, 0x234);
    AF(arg0, s32, 0x234) = (s32) (temp_v1_2 + 1);
    AF(temp_a1, s16, 0xA) = (s16) ((s8) *(&Hurl_LiftPath + temp_v1_2) + AF(AF(temp_a1, void *, 0x78), u16, 0xE));
    temp_v1_3 = AF(arg0, s32, 0x234);
    AF(arg0, s32, 0x234) = (s32) (temp_v1_3 + 1);
    AF(temp_a1, s16, 0xE) = (s16) ((s8) *(&Hurl_LiftPath + temp_v1_3) + AF(AF(temp_a1, void *, 0x78), u16, 0x10));
    return func_80149374(arg0, (s32) (temp_a1 + 4));
}

void Hurl_Release(u8 *arg0) {
    AVec sp18;
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x178);
    if (temp_s0 != 0) {
        func_8014C1A0(arg0, temp_s0);
        PosToSVec(temp_s0 + 4, &sp18);
        sp18.pad = 0;
        func_8014C4AC(temp_s0, 0x29, func_80156370(0x29) & 0xFFFF, &sp18, AF(AF(arg0, void *, 0x20), s16, 0x12));
        AF(arg0, s32, 0x178) = 0;
    }
}
