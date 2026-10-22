#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_000_8017BE9C(void) {
}

void func_sc05_000_8017BEA4(void) {
}

void func_sc05_000_8017BEAC(void) {
}

void func_sc05_000_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_000_80181C84[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_800D22E4();
extern void func_80146C3C();
extern void (*D_sc05_000_80181D70[])();
void func_sc05_000_8017D348(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_000_80181D78[])();
void func_sc05_000_8017D370(void);
extern void func_800D1EBC();
extern void (*D_sc05_000_80181D84[])();
extern void (*D_sc05_000_80181D90[])();
void func_sc05_000_8017D398(void);
extern u8 D_sc05_000_80181D9C;
extern void func_8016EE40();
extern u8 D_sc05_000_80181DA8;
extern u8 D_sc05_000_80181DBC;
extern void func_sc05_000_8017D464();
extern void (*D_sc05_000_80181DCC[])();
extern void (*D_sc05_000_80181E10[])();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern u8 D_sc05_000_80181E00;
extern u8 D_sc05_000_80181DF0;
extern u8 D_sc05_000_80181DE0;
extern u8 D_sc05_000_80181DD0;
extern s32 func_80029504();
extern s32 func_sc05_000_8017D70C();
extern void (*D_sc05_000_80181E5C[])();
extern void (*D_sc05_000_80181ED8[])();
extern void (*D_sc05_000_80181F54[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc05_000_8017E5B8;
extern u8 D_sc05_000_80181E74;
extern u8 func_sc05_000_8017DE70;
extern void func_80178CBC();
extern u8 D_sc05_000_80181EA8;
extern s32 func_80178970();
extern void func_80178D18();
extern void (*D_sc05_000_80181FD0[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern void func_sc05_000_8017DF38();
extern void func_80146CA0();
extern void func_8014BC44();
extern s32 func_80151664();

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
extern void func_8012A018();
extern void func_8012A094();
extern u8 D_sc05_000_80181E28;
extern s32 D_sc05_000_80198064;
extern void func_8001D0E8();
extern u8 D_sc05_000_80181EE8;
extern u8 D_sc05_000_80181F24;
extern void func_8012B200();
extern void func_8001CA1C();
extern s32 func_80146A6C();

extern u16 D_800B99DA;
extern u8 D_sc05_000_80181FB4;
extern void func_80149020();
extern void func_80147A84();
extern void func_801473EC();
extern void func_80148038();
extern void func_80147460();
s32 func_sc05_000_8017E1E8(s32 arg0);
extern s32 func_801535F4();
extern void func_8013C9C4();
extern s32 func_80146E98();
extern void func_801477E8();

INCLUDE_ASM("asm/stg/sc05_000/nonmatchings/sc05_000", func_sc05_000_8017BEBC);

INCLUDE_ASM("asm/stg/sc05_000/nonmatchings/sc05_000", func_sc05_000_8017CD9C);

INCLUDE_ASM("asm/stg/sc05_000/nonmatchings/sc05_000", func_sc05_000_8017CE68);

void func_sc05_000_8017CFC4(u8 *arg0) {
    D_sc05_000_80181C84[AF(arg0, u16, 2)]();
}

void func_sc05_000_8017D000(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        func_800D22E4();
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x1A000);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_sc05_000_8017D060(u8 *arg0) {
    D_sc05_000_80181D70[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_000_8017D09C(u8 *arg0) {
    func_sc05_000_8017D348();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_000_8017D0E0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_000_8017D104(u8 *arg0) {
    D_sc05_000_80181D78[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_000_8017D140(u8 *arg0) {
    func_sc05_000_8017D370();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_000_8017D180(u8 *arg0) {
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

void func_sc05_000_8017D1FC(void) {
    func_800D1EBC();
}

void func_sc05_000_8017D21C(u8 *arg0) {
    D_sc05_000_80181D84[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_000_8017D258(u8 *arg0) {
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

void func_sc05_000_8017D2CC(u8 *arg0) {
    D_sc05_000_80181D90[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_000_8017D308(u8 *arg0) {
    func_sc05_000_8017D398();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc05_000_8017D348(void) {
    func_8016EE40((s32) &D_sc05_000_80181D9C, 0x01000000);
}

void func_sc05_000_8017D370(void) {
    func_8016EE40((s32) &D_sc05_000_80181DA8, 0x01000000);
}

void func_sc05_000_8017D398(void) {
    func_8016EE40((s32) &D_sc05_000_80181DBC, 0x01000000);
}

void func_sc05_000_8017D3C0(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x320;
    D_80126968 = 0xE3;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_000_8017D464, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_000_8017D464((s32) &D_80126948);
}

void func_sc05_000_8017D464(s32 arg0) {
    D_sc05_000_80181DCC[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc05_000/nonmatchings/sc05_000", func_sc05_000_8017D4A0);

INCLUDE_ASM("asm/stg/sc05_000/nonmatchings/sc05_000", func_sc05_000_8017D538);

void func_sc05_000_8017D6D0(u8 *arg0) {
    D_sc05_000_80181E10[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_000/nonmatchings/sc05_000", func_sc05_000_8017D70C);

void func_sc05_000_8017D754(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_80029504();
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s32 *, 0x58) = (s32 *) &D_sc05_000_80181E00;
    AF(arg0, s16, 0x5C) = 0x80;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    if (temp_s1 >= 0x384) {
        AF(arg0, s32, 0xDC) = func_sc05_000_8017D70C(arg0, &D_sc05_000_80181DF0);
    } else if (temp_s1 >= 0x258) {
        AF(arg0, s32, 0xDC) = func_sc05_000_8017D70C(arg0, &D_sc05_000_80181DE0);
    } else if (temp_s1 >= 0xC8) {
        AF(arg0, s32, 0xDC) = func_sc05_000_8017D70C(arg0, &D_sc05_000_80181DD0);
    }
}

void func_sc05_000_8017D820(void) {
}

void func_sc05_000_8017D828(u8 *arg0) {
    D_sc05_000_80181E5C[AF(arg0, u16, 2)]();
}

void func_sc05_000_8017D864(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_000_80181E28) != 0) {
        func_8001D0E8(AF(arg0, s32, 0x20), 0x7FFF, 0x7FFF);
        AF(AF(arg0, s32, 0x20), s32, 0x20) = (s32) D_sc05_000_80198064;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc05_000_8017D8CC(void) {
}

s32 func_sc05_000_8017D8D4(void) {
    return 0x5F;
}

void func_sc05_000_8017D8DC(u8 *arg0) {
    D_sc05_000_80181ED8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_000/nonmatchings/sc05_000", func_sc05_000_8017D918);

INCLUDE_ASM("asm/stg/sc05_000/nonmatchings/sc05_000", func_sc05_000_8017DB10);

void func_sc05_000_8017DC9C(u8 *arg0) {
    D_sc05_000_80181F54[AF(arg0, u16, 2)]();
}

void func_sc05_000_8017DCD8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_000_80181E74) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc05_000_8017E5B8);
        func_801788B8(arg0, (s32) &func_sc05_000_8017DE70);
    }
}

void func_sc05_000_8017DD3C(void) {
}

void func_sc05_000_8017DD44(s32 arg0) {
    func_80178CBC(arg0, (s32) &D_sc05_000_80181EA8);
    AF(arg0, s16, 2) = 3;
}

void func_sc05_000_8017DD7C(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc05_000_8017DDBC(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8012B200((s32) arg0);
    func_8001CA1C(AF(arg0, s32, 0x20), (s32) &D_sc05_000_80181EE8);
    SetScript((s32) arg0, (s32) &D_sc05_000_80181F24);
    temp_a0 = AF(arg0, s32, 0x20);
    AF(arg0, s16, 2) = 1;
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x50000000);
    temp_v1 = AF(arg0, s32, 0x20);
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
    temp_v1_2 = AF(arg0, s32, 0x20);
    AF(temp_v1_2, s16, 0x1A) = 0x4000;
    AF(temp_v1_2, s16, 0x18) = 0x4000;
    AF(arg0, s16, 0x100) = 0;
}

INCLUDE_ASM("asm/stg/sc05_000/nonmatchings/sc05_000", func_sc05_000_8017DE70);

void func_sc05_000_8017DECC(u8 *arg0) {
    D_sc05_000_80181FD0[AF(arg0, u16, 2)]();
}

void func_sc05_000_8017DF08(s32 arg0) {
    func_sc05_000_8017DF38();
    func_80146CA0(arg0);
}

INCLUDE_ASM("asm/stg/sc05_000/nonmatchings/sc05_000", func_sc05_000_8017DF38);

void func_sc05_000_8017DFDC(s32 arg0, s32 arg1) {
    s32 pad[8];
    func_80149020(arg0, arg1);
    func_80147A84(arg0);
    func_801473EC(arg0);
    func_80148038(arg0, 0x18000);
    func_80147460(arg0);
    if (!(D_800B99DA & 1)) {
        func_sc05_000_8017E1E8(arg0);
    }
    if (func_801535F4(arg0) == 4) {
        func_8013C9C4((s32) &D_sc05_000_80181FB4);
        goto block_5;
    }
    if (func_80146E98(arg0) != 0) {
block_5:
        func_801477E8(arg0, 0x40000);
        func_80146CA0(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_000/nonmatchings/sc05_000", func_sc05_000_8017E098);

s32 func_sc05_000_8017E1A0(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

s32 func_sc05_000_8017E1E8(s32 arg0) {
    return func_80146A6C(3, arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0x080FFFF8, /* extra? */ 0xE000B000);
}
