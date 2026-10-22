#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_108_8017BE9C(void) {
}

void func_sc03_108_8017BEA4(void) {
}

void func_sc03_108_8017BEAC(void) {
}

void func_sc03_108_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_108_801846DC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_108_8017CFCC(void);
extern void func_800167B8();
extern s32 func_800167F0();
void func_sc03_108_8017CFF4(void);
extern void func_800D1EBC();
extern void (*D_sc03_108_801846F0[])();
extern u8 D_sc03_108_801846FC;
extern void func_8016EE40();
extern u8 D_sc03_108_80184708;
extern void func_sc03_108_8017D0D4();
extern void (*D_sc03_108_8018471C[])();
extern void (*D_sc03_108_801847C0[])();
extern void (*D_sc03_108_801847D8[])();
extern void (*D_sc03_108_80184868[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void (*D_sc03_108_801847A8[])();
extern void func_8012B2CC();
extern s32 func_8012C044();
extern void (*D_sc03_108_8019E7AC[])();
extern void func_sc03_108_801809A0();
extern s32 func_sc03_108_80180968();
extern void func_8012B23C();
extern void func_8012B178();
extern s32 func_8012BEE8();
extern s16 D_80126B96;
extern u16 D_80126B9A;
extern void func_8012AD80();
extern s32 func_8012D624();
extern s32 func_8012BE54();
extern void func_8012B21C();
extern void func_8012E88C();
extern s32 func_80143994();
extern u8 D_sc03_108_8019E6AC;
extern void func_sc03_108_80180764();
extern u8 D_sc03_108_80180FCC;
extern void func_8012B030();
extern void func_8012E8C4();
extern void func_sc03_108_80180A84();
extern void func_8002A04C();
extern void func_sc03_108_801808B4();
extern void func_80016714();
extern s32 func_8012C098();

extern u8 D_80126948;
extern s32 D_80126950;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern u16 D_801269E8;
extern u16 D_sc03_108_801A1930;
extern void func_8012A018();
extern void func_8012A094();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C2C4();
extern void func_8012AD50();

extern u16 D_80126B98;
extern s32 D_sc03_108_8018484C[];
extern s32 func_sc03_108_8017EA44();

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017BEBC);

void func_sc03_108_8017CD9C(u8 *arg0) {
    D_sc03_108_801846DC[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_108_8017CDD8(u8 *arg0) {
    func_sc03_108_8017CFCC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_108_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc03_108_8017CE40(u8 *arg0) {
    func_sc03_108_8017CFF4();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_108_8017CE80(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_108_8017CEFC(void) {
    func_800D1EBC();
}

void func_sc03_108_8017CF1C(u8 *arg0) {
    D_sc03_108_801846F0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_108_8017CF58(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_108_8017CFCC(void) {
    func_8016EE40((s32) &D_sc03_108_801846FC, 0x01000000);
}

void func_sc03_108_8017CFF4(void) {
    func_8016EE40((s32) &D_sc03_108_80184708, 0x01000000);
}

void func_sc03_108_8017D01C(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xE3;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x50;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_108_8017D0D4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_108_8017D0D4((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    D_sc03_108_801A1930 = D_801269E8;
}

void func_sc03_108_8017D0D4(s32 arg0) {
    D_sc03_108_8018471C[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017D110);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017D2B8);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017D484);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017D5F4);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017D6AC);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017D764);

void func_sc03_108_8017D898(u8 *arg0) {
    D_sc03_108_801847A8[AF(arg0, u16, 2)]();
    func_8012B2CC((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017D8E8);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017D96C);

void func_sc03_108_8017DAD0(u8 *arg0) {
    D_sc03_108_801847C0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017DB0C);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017DD44);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017DDDC);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017DF10);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017DFE8);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017E128);

void func_sc03_108_8017E240(u8 *arg0) {
    D_sc03_108_801847D8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017E27C);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017E3F8);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017E508);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017E71C);

void func_sc03_108_8017E984(u8 *arg0) {
    D_sc03_108_80184868[AF(arg0, u16, 2)]();
}

void func_sc03_108_8017E9C0(s32 arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = D_sc03_108_8018484C[AF(arg0, s16, 0x102)];
    if (temp_s1 != 0) {
        func_8012B2CC(arg0, arg1);
        if (func_sc03_108_8017EA44(arg0, temp_s1) != 0) {
            D_80126B96 = AF(temp_s1, u16, 4);
            D_80126B98 = AF(temp_s1, u16, 6);
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017EA44);

void func_sc03_108_8017EB38(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C2C4(temp_v0);
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(arg0, s32, 0x1C) = (s32) AF(arg0, s16, 0xFC);
    func_8012AD50(arg0);
}

s32 func_sc03_108_8017EB98(void) {
    return 0x49;
}

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017EBA0);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017EC04);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017ED64);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017EF48);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017F004);

void func_sc03_108_8017F0B0(u8 *arg0) {
    D_sc03_108_8019E7AC[AF(arg0, u16, 2)]();
    func_sc03_108_801809A0((s32) arg0);
    if (!(AF(arg0, u16, 0x70) & 1) && (AF(arg0, u16, 0) != 0) && (func_8012C044((s32) arg0) == 1)) {
        func_sc03_108_80180968((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017F140);

void func_sc03_108_8017F29C(s32 arg0, s32 arg1, s32 arg2) {
    func_8012B23C(arg0, arg1, arg2);
    func_8012B178(arg0, -0x28000);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE4) = 0x20;
}

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017F2E8);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017F640);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017F788);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017F83C);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017FBD8);

void func_sc03_108_8017FC3C(u8 *arg0) {
    s16 temp_v1;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = rsin((AF(arg0, s32, 0xE4) << 6) & 0x7C0);
    temp_v1 = (temp_v0 >> 3) + 0xE00;
    AF(temp_s0, s16, 0x1C) = temp_v1;
    AF(temp_s0, s16, 0x18) = temp_v1;
    AF(temp_s0, s16, 0x1A) = (s16) ((temp_v0 >> 1) + 0x800);
    func_8012AD80((s32) arg0);
    if (func_8012D624((s32) arg0, 0x20, 5) == 1) {
        D_80126B96 = 0x11;
        D_80126B9A = AF(AF(arg0, void *, 0x20), u16, 0x12);
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc03_108_80180968((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) + 1);
}

void func_sc03_108_8017FD08(u8 *arg0) {
    if (func_8012BE54() <= 0x40000) {
        AF(arg0, s16, 2) = 9;
        func_8012B21C((s32) arg0);
        func_8012E88C((s32) arg0);
        AF(arg0, s32, 0xCC) = func_80143994((s32) arg0, 0x1000);
    }
}

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017FD64);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017FEE4);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8017FFD0);

void func_sc03_108_801802E0(s32 arg0) {
    func_sc03_108_80180764();
    func_sc03_108_801809A0(arg0);
    SetScript(arg0, (s32) &D_sc03_108_8019E6AC);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_108_8018032C(s32 arg0) {
    func_sc03_108_80180764();
    func_sc03_108_801809A0(arg0);
}

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_8018035C);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_801803E0);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_80180764);

void func_sc03_108_801807C8(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_108_80180FCC);
    func_8012B030((s32) arg0);
}

void func_sc03_108_80180814(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x5C) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
}

void func_sc03_108_8018082C(s32 arg0) {
    func_8012E8C4();
    if (func_8012BEE8(arg0) != 0) {
        func_sc03_108_80180A84(arg0);
        func_8002A04C(arg0);
        func_sc03_108_801808B4(arg0);
    }
}

void func_sc03_108_8018087C(s32 arg0) {
    func_sc03_108_80180A84(arg0);
    func_8002A04C(arg0);
    func_sc03_108_801808B4(arg0);
}

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_801808B4);

s32 func_sc03_108_80180968(s32 arg0) {
    func_80016714(AF(arg0, s32, 0xD0), 0x38);
    return func_8012C098(arg0);
}

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_801809A0);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_80180A84);

INCLUDE_ASM("asm/stg/sc03_108/nonmatchings/sc03_108", func_sc03_108_80180B7C);
