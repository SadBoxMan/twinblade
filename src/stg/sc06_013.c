#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_013_8017BE9C(void) {
}

void func_sc06_013_8017BEA4(void) {
}

void func_sc06_013_8017BEAC(void) {
}

void func_sc06_013_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_013_8017D0A0(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_013_801826B0[])();
void func_sc06_013_8017E698(void);
void func_sc06_013_8017D0C8(void);
extern void func_800D1EBC();
extern void (*D_sc06_013_801826C4[])();
extern u8 D_sc06_013_801826D0;
extern void func_8016EE40();
extern u8 D_sc06_013_801826D4;
extern void func_sc06_013_8017D220();
extern void (*D_sc06_013_801826DC[])();
extern void (*D_sc06_013_80182738[])();
extern void (*D_sc06_013_80182784[])();
extern void (*D_sc06_013_801827AC[])();
extern u8 D_sc06_013_8018279C;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern void (*D_sc06_013_80195AD4[])();
extern void (*D_sc06_013_80195B50[])();
extern void (*D_sc06_013_80195B8C[])();
extern u8 D_sc06_013_80198064;
extern void (*D_sc06_013_8019807C[])();
extern u8 D_sc06_013_80198084;
extern void (*D_sc06_013_80198090[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc06_013_801826EC[];
extern s32 func_8013B7F4();

extern s32 func_8012C354();
extern u8 D_sc06_013_8017EEF8;
extern u8 D_sc06_013_80195AA0;
extern u8 D_sc06_013_80195B58;
extern void func_sc06_013_8017D9F0();

extern u8 D_80126948;
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
extern u8 D_sc06_013_8018278C;
extern void func_8001C2C4();
extern u8 D_sc06_013_80182704;
extern void func_8001D0E8();
extern s32 func_8012C588();
extern u8 D_sc06_013_80182750;
extern s32 func_sc06_013_8017EAEC();
extern void func_80171928();
extern void func_80171990();

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017BEBC);

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017CD9C);

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017CDE4);

s32 func_sc06_013_8017CE2C(u8 *arg0) {
    func_sc06_013_8017D0A0();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_013_8017CE70(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_013_8017CE94(u8 *arg0) {
    D_sc06_013_801826B0[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_013_8017CED0(u8 *arg0) {
    func_sc06_013_8017E698();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_013_8017CF14(u8 *arg0) {
    func_sc06_013_8017D0C8();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_013_8017CF54(u8 *arg0) {
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

void func_sc06_013_8017CFD0(void) {
    func_800D1EBC();
}

void func_sc06_013_8017CFF0(u8 *arg0) {
    D_sc06_013_801826C4[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_013_8017D02C(u8 *arg0) {
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

void func_sc06_013_8017D0A0(void) {
    func_8016EE40((s32) &D_sc06_013_801826D0, 0x01000000);
}

void func_sc06_013_8017D0C8(void) {
    func_8016EE40((s32) &D_sc06_013_801826D4, 0x01000000);
}

void func_sc06_013_8017D0F0(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x800;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_013_8017D220, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_013_8017D220((s32) &D_80126948);
}

void func_sc06_013_8017D188(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x800;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_013_8017D220, 1);
    func_8012A094((s32) &D_80126948);
    func_sc06_013_8017D220((s32) &D_80126948);
}

void func_sc06_013_8017D220(s32 arg0) {
    D_sc06_013_801826DC[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017D25C);

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017D2FC);

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017D39C);

s32 func_sc06_013_8017D534(s32 arg0) {
    return func_8013B7F4(D_sc06_013_801826EC[arg0], 0);
}

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017D564);

void func_sc06_013_8017D688(u8 *arg0) {
    D_sc06_013_80182738[AF(arg0, u16, 2)]();
}

void func_sc06_013_8017D6C4(u8 *arg0) {
    D_sc06_013_80182784[AF(arg0, u16, 2)]();
}

void func_sc06_013_8017D700(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u16, 2) == 0) {
        temp_v0 = func_8012C1B8();
        AF(arg0, s32, 0x20) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4((s32) arg0);
            return;
        }
        func_8001C2C4(temp_v0);
        AF(arg0, s16, 0x5C) = 0x20;
        AF(arg0, s32 *, 0x58) = &D_sc06_013_8018278C;
        AF(arg0, u8, 0x75) = 4;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc06_013_8017D784(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc06_013_80182704) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_013_8017EEF8);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8001D0E8(AF(arg0, s32, 0x20), 0x400, 0x400);
        AF(arg0, s32, 0x6C) = func_8012C588(0x29C, arg0);
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_013_8017D804(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc06_013_80182750) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_013_8017EEF8);
        AF(arg0, s16, 6) = 0x740;
        AF(arg0, s16, 0xA) = -0x3C0;
        AF(arg0, s16, 0xE) = 0x40;
        AF(arg0, u8, 0x75) = 8;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017D87C);

void func_sc06_013_8017D928(u8 *arg0) {
    D_sc06_013_801827AC[AF(arg0, u16, 2)]();
}

void func_sc06_013_8017D964(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8(arg0, arg1);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        func_8012CAE4(arg0);
        return;
    }
    func_8001C214(temp_v0, 0);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s16, 0x5C) = 0x20;
    AF(arg0, s32, 0x58) = (s32) ((s32) &D_sc06_013_8018279C | 0x40000000);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0xFC);
}

void func_sc06_013_8017D9E0(void) {
}

s32 func_sc06_013_8017D9E8(void) {
    return 0x6E;
}

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017D9F0);

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017DE14);

void func_sc06_013_8017E188(u8 *arg0) {
    D_sc06_013_80195AD4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017E1C4);

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017E30C);

void func_sc06_013_8017E4BC(u8 *arg0) {
    D_sc06_013_80195B50[AF(arg0, u16, 2)]();
}

void func_sc06_013_8017E4F8(u8 *arg0) {
    D_sc06_013_80195B8C[AF(arg0, u16, 2)]();
}

void func_sc06_013_8017E534(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_013_80195AA0) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
        SetScript(arg0, (s32) &D_sc06_013_8017EEF8);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xE00;
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = 0xE00;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xE00;
        AF(arg0, s16, 0xFC) = 0x300;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_013_8017E5DC(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_013_80195B58) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_013_8017EEF8);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xAAA;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xAAA;
    }
}

void func_sc06_013_8017E660(u8 *arg0) {
    func_sc06_013_8017D9F0();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

void func_sc06_013_8017E698(void) {
    func_8016EE40((s32) &D_sc06_013_80198064, 0x01000000);
}

void func_sc06_013_8017E6C0(u8 *arg0) {
    D_sc06_013_8019807C[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017E6FC);

void func_sc06_013_8017E744(s32 arg0) {
    if (func_sc06_013_8017EAEC() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171928(arg0);
    }
}

void func_sc06_013_8017E784(void) {
    func_8016EE40((s32) &D_sc06_013_80198084, 0x01000000);
}

void func_sc06_013_8017E7AC(u8 *arg0) {
    D_sc06_013_80198090[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017E7E8);

void func_sc06_013_8017E8F0(s32 arg0) {
    if (func_sc06_013_8017EAEC() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171990(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017E930);

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017EA10);

INCLUDE_ASM("asm/stg/sc06_013/nonmatchings/sc06_013", func_sc06_013_8017EAEC);
