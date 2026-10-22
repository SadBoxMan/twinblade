#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_004_8017BE9C(void) {
}

void func_sc02_004_8017BEA4(void) {
}

void func_sc02_004_8017BEAC(void) {
}

void func_sc02_004_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_004_80181718[])();
extern void func_8016EDEC();
void func_sc02_004_8017D670(u8 *arg0);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc02_004_80181720[])();
extern void func_800D1EBC();
extern void (*D_sc02_004_8018172C[])();
extern void (*D_sc02_004_8018173C[])();
void func_sc02_004_8017D804(u8 *arg0);
extern void func_8016F0E4();
extern void (*D_sc02_004_801817F8[])();
extern void (*D_sc02_004_80181804[])();

typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;

extern s32 func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();


extern s32 D_80126950;
extern u8 D_sc02_004_801919B0;
extern void func_80174E9C();
extern u8 D_sc02_004_801816EC;
extern void func_800D1724();
extern s16 D_80126B66;

extern s32 func_8012913C();

INCLUDE_ASM("asm/stg/sc02_004/nonmatchings/sc02_004", func_sc02_004_8017BEBC);

INCLUDE_ASM("asm/stg/sc02_004/nonmatchings/sc02_004", func_sc02_004_8017C294);

INCLUDE_ASM("asm/stg/sc02_004/nonmatchings/sc02_004", func_sc02_004_8017C338);

s32 func_sc02_004_8017C530(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

INCLUDE_ASM("asm/stg/sc02_004/nonmatchings/sc02_004", func_sc02_004_8017C59C);

void func_sc02_004_8017D468(void) {
    func_80174E9C((s32) &D_sc02_004_801919B0);
    D_80126950 = 0x1F4;
}

void func_sc02_004_8017D49C(u8 *arg0) {
    D_sc02_004_80181718[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_004_8017D4D8(u8 *arg0) {
    func_8016EDEC((s32) func_sc02_004_8017D670, 0x01000000);
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_004_8017D528(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc02_004_8017D54C(u8 *arg0) {
    D_sc02_004_80181720[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_004_8017D588(u8 *arg0) {
    func_8016EDEC((s32) func_sc02_004_8017D804, 0x01000000);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_004_8017D5D4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(2);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_004_8017D650(void) {
    func_800D1EBC();
}

void func_sc02_004_8017D670(u8 *arg0) {
    D_sc02_004_8018172C[AF(arg0, u8, 0x214)]();
}

void func_sc02_004_8017D6AC(u8 *arg0) {
    AF(arg0, s32, 0x204) = 0x20;
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_004_8017D6C4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc02_004/nonmatchings/sc02_004", func_sc02_004_8017D6F0);

void func_sc02_004_8017D7B4(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x204) - 1;
    AF(arg0, s32, 0x204) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc02_004_801816EC);
        func_8016F0E4((s32) arg0);
    }
}

void func_sc02_004_8017D804(u8 *arg0) {
    D_sc02_004_8018173C[AF(arg0, u8, 0x214)]();
}

void func_sc02_004_8017D840(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_sc02_004_8017D854(s32 arg0) {
    func_8016F0E4(arg0);
}

void func_sc02_004_8017D874(u8 *arg0) {
    D_sc02_004_801817F8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc02_004/nonmatchings/sc02_004", func_sc02_004_8017D8B0);

INCLUDE_ASM("asm/stg/sc02_004/nonmatchings/sc02_004", func_sc02_004_8017D910);

void func_sc02_004_8017D99C(u8 *arg0) {
    if (AF(arg0, s16, 0xE) < D_80126B66) {
        AF(arg0, s16, 2) = 0;
    }
}

void func_sc02_004_8017D9C4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012913C(5);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        AF(temp_v0, s16, 0x2E) = (s16) (rand() & 3);
    }
}

INCLUDE_ASM("asm/stg/sc02_004/nonmatchings/sc02_004", func_sc02_004_8017DA30);

INCLUDE_ASM("asm/stg/sc02_004/nonmatchings/sc02_004", func_sc02_004_8017DB2C);

void func_sc02_004_8017DC54(u8 *arg0) {
    D_sc02_004_80181804[AF(arg0, u16, 2)]();
}
