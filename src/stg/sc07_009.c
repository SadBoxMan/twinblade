#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_009_8017BE9C(void) {
}

void func_sc07_009_8017BEA4(void) {
}

void func_sc07_009_8017BEAC(void) {
}

void func_sc07_009_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc07_009_80181804[])();
extern void (*D_sc07_009_8018180C[])();
extern void (*D_sc07_009_80181818[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void (*D_sc07_009_80181858[])();
extern u8 D_sc07_009_80181824;
extern void func_8016EE40();
extern u8 D_sc07_009_80181864;
extern void func_sc07_009_8017D338();
extern void (*D_sc07_009_80181878[])();
extern void func_8012AD50();
extern void (*D_sc07_009_801819E4[])();
extern void (*D_sc07_009_80181A78[])();

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

void func_sc07_009_8017D150(void);
extern s32 func_800167F0();


extern void func_80171990();
extern u8 D_80126B58;

extern void func_800167B8();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();


extern u8 D_sc07_009_801817D8;
extern void (*D_sc07_009_8018199C[])();
extern s32 func_80029178();
extern s32 func_8002AE60();
extern s32 func_80014C54();
extern s32 func_800CF8B4();
extern void func_800D1724();
extern u8 D_sc07_009_8018187C;
extern void func_sc07_009_8017D980();
extern s32 func_sc07_009_8017D994();
extern void func_8012BF4C();

extern s32 func_sc07_009_8017DA7C();
extern s32 func_8012BEE8();
extern s32 func_sc07_009_8017DA0C();
extern u8 D_sc07_009_801818C4;
extern u8 D_sc07_009_8018190C;

extern u8 D_sc07_009_80181954;
void func_sc07_009_8017D178(void);
extern s32 func_800178C8();
extern void (*D_sc07_009_801819EC[])();
extern u8 D_sc07_009_801819F4;
extern s32 func_8012C194();
extern void func_8001CB6C();
extern void func_80016940();
extern s32 func_80016978();
extern void func_8012C098();

extern s8 D_80078EC6;
extern void func_80029514();
extern void func_80029124();
extern void func_8002AEE4();

INCLUDE_ASM("asm/stg/sc07_009/nonmatchings/sc07_009", func_sc07_009_8017BEBC);

void func_sc07_009_8017CD9C(u8 *arg0) {
    D_sc07_009_80181804[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_009_8017CDD8(u8 *arg0) {
    func_sc07_009_8017D150();
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_009_8017CE14(void) {
    return 1;
}

void func_sc07_009_8017CE1C(u8 *arg0) {
    D_sc07_009_8018180C[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_009_8017CE58(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_009_8017CE74(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc07_009_8017CEC8(void) {
    return (func_800167F0(4) & 0xFFFF) != 0;
}

void func_sc07_009_8017CEEC(u8 *arg0) {
    D_sc07_009_80181818[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_009_8017CF28(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_009_8017CF44(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc07_009_8017CFC0(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_80029514(0x6A4);
        func_80029124(0x11D, 1);
        func_80029124(0x123, 1);
        D_80078EC6 = 1;
        func_8002AEE4();
        return 1;
    }
    return 0;
}

void func_sc07_009_8017D024(u8 *arg0) {
    D_sc07_009_80181858[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc07_009/nonmatchings/sc07_009", func_sc07_009_8017D060);

void func_sc07_009_8017D0CC(void) {
}

INCLUDE_ASM("asm/stg/sc07_009/nonmatchings/sc07_009", func_sc07_009_8017D0D4);

void func_sc07_009_8017D150(void) {
    func_8016EE40((s32) &D_sc07_009_80181824, 0x01000000);
}

void func_sc07_009_8017D178(void) {
    func_80171990((s32) &D_80126B58);
}

void func_sc07_009_8017D1A0(void) {
    func_8016EE40((s32) &D_sc07_009_80181864, 0x01000000);
}

void func_sc07_009_8017D1C8(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_009_8017D338, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_009_8017D338((s32) &D_80126948);
}

INCLUDE_ASM("asm/stg/sc07_009/nonmatchings/sc07_009", func_sc07_009_8017D260);

INCLUDE_ASM("asm/stg/sc07_009/nonmatchings/sc07_009", func_sc07_009_8017D304);

void func_sc07_009_8017D338(s32 arg0) {
    D_sc07_009_80181878[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc07_009/nonmatchings/sc07_009", func_sc07_009_8017D374);

s32 func_sc07_009_8017D39C(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_v0;

    AF(arg0, s32, 0x48) = (s32) AF(arg2, s16, 0);
    AF(arg0, s32, 0x4C) = (s32) AF(arg2, s16, 2);
    AF(arg0, s32, 0x50) = (s32) AF(arg2, s16, 4);
    AF(arg0, s32, 0x3C) = (s32) AF(arg1, s16, 0);
    AF(arg0, s32, 0x40) = (s32) AF(arg1, s16, 2);
    temp_v0 = AF(arg1, s16, 4);
    AF(arg0, s32, 0x44) = (s32) temp_v0;
    return (s32) temp_v0;
}

s32 func_sc07_009_8017D3E4(void) {
    return 0x91;
}

void func_sc07_009_8017D3EC(u8 *arg0) {
    if ((func_80029178(0x123) & 0xFF) && ((func_8002AE60() << 0x10) == 0) && (((func_80014C54(0, 0, 0x800) << 0x10) != 0) || ((func_80014C54(0, 0, 0x40) << 0x10) != 0)) && (func_800CF8B4() != 0)) {
        func_800D1724((s32) &D_sc07_009_801817D8);
    }
    D_sc07_009_8018199C[AF(arg0, u16, 2)](arg0);
}

void func_sc07_009_8017D4AC(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

void func_sc07_009_8017D4CC(s32 arg0) {
    func_sc07_009_8017D980((s32) &D_sc07_009_8018187C);
    func_8012AD50(arg0);
}

void func_sc07_009_8017D508(s32 arg0) {
    if (func_sc07_009_8017D994((s32) &D_sc07_009_8018187C) != 0) {
        func_8012BF4C(arg0, 0x52);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D554(s32 arg0) {
    func_sc07_009_8017DA7C((s32) &D_sc07_009_8018187C);
    if (func_8012BEE8(arg0) != 0) {
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D5A0(s32 arg0) {
    if (func_sc07_009_8017DA0C((s32) &D_sc07_009_8018187C) != 0) {
        func_8012BF4C(arg0, 8);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D5EC(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        func_sc07_009_8017D980((s32) &D_sc07_009_801818C4);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D634(s32 arg0) {
    if (func_sc07_009_8017D994((s32) &D_sc07_009_801818C4) != 0) {
        func_8012BF4C(arg0, 0x52);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D680(s32 arg0) {
    func_sc07_009_8017DA7C((s32) &D_sc07_009_801818C4);
    if (func_8012BEE8(arg0) != 0) {
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D6CC(s32 arg0) {
    if (func_sc07_009_8017DA0C((s32) &D_sc07_009_801818C4) != 0) {
        func_8012BF4C(arg0, 8);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D718(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        func_sc07_009_8017D980((s32) &D_sc07_009_8018190C);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D760(s32 arg0) {
    if (func_sc07_009_8017D994((s32) &D_sc07_009_8018190C) != 0) {
        func_8012BF4C(arg0, 0x52);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D7AC(s32 arg0) {
    func_sc07_009_8017DA7C((s32) &D_sc07_009_8018190C);
    if (func_8012BEE8(arg0) != 0) {
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D7F8(s32 arg0) {
    if (func_sc07_009_8017DA0C((s32) &D_sc07_009_8018190C) != 0) {
        func_8012BF4C(arg0, 8);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D844(s32 arg0) {
    if (func_8012BEE8(arg0) != 0) {
        func_sc07_009_8017D980((s32) &D_sc07_009_80181954);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D88C(s32 arg0) {
    if (func_sc07_009_8017D994((s32) &D_sc07_009_80181954) != 0) {
        func_8012BF4C(arg0, 0x52);
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D8D8(s32 arg0) {
    func_sc07_009_8017DA7C((s32) &D_sc07_009_80181954);
    if (func_8012BEE8(arg0) != 0) {
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D924(s32 arg0) {
    if (func_sc07_009_8017DA0C((s32) &D_sc07_009_80181954) != 0) {
        func_8012BF4C(arg0, 8);
        func_sc07_009_8017D178();
        func_8012AD50(arg0);
    }
}

void func_sc07_009_8017D978(void) {
}

void func_sc07_009_8017D980(s32 arg0) {
    AF(arg0, s32, 0x30) = 0;
    AF(arg0, s32, 0x34) = 0;
    AF(arg0, s32, 0x38) = 0;
    AF(arg0, s32, 0x3C) = 0;
}

INCLUDE_ASM("asm/stg/sc07_009/nonmatchings/sc07_009", func_sc07_009_8017D994);

INCLUDE_ASM("asm/stg/sc07_009/nonmatchings/sc07_009", func_sc07_009_8017DA0C);

s32 func_sc07_009_8017DA7C(s32 arg0) {
    AF(arg0, s16, 4) = 4;
    AF(arg0, s32, 0x40) = 0x60000000;
    func_800178C8(arg0);
    AF(arg0, s16, 4) = 3;
    AF(arg0, s32, 0x40) = 0x50000000;
    return func_800178C8(arg0);
}

void func_sc07_009_8017DACC(u8 *arg0) {
    D_sc07_009_801819E4[AF(arg0, u16, 2)]();
}

void func_sc07_009_8017DB08(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, u16, 0x72) = (u16) (AF(arg0, u16, 0x72) | 0x1000);
    func_8012AD50((s32) arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc07_009/nonmatchings/sc07_009", func_sc07_009_8017DB34);

void func_sc07_009_8017DB80(u8 *arg0) {
    if (AF(arg0, s16, 0x70) == 0) {
        D_sc07_009_801819EC[AF(arg0, u16, 2)]();
    }
}

void func_sc07_009_8017DBCC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C194();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CB6C(temp_v0, (s32) &D_sc07_009_801819F4, 0x1E8, 0x190);
        AF(temp_v0, u8, 0x27) = 0x3C;
        AF(temp_v0, s16, 0x1A) = 0x2000;
        AF(temp_v0, s16, 0x18) = 0x2000;
        AF(arg0, s16, 0xFC) = 0;
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc07_009/nonmatchings/sc07_009", func_sc07_009_8017DC40);

void func_sc07_009_8017DCA8(u8 *arg0) {
    D_sc07_009_80181A78[AF(arg0, u16, 2)]();
}

void func_sc07_009_8017DCE4(s32 arg0) {
    func_80016940(0);
    func_8012AD50(arg0);
}

void func_sc07_009_8017DD18(s32 arg0) {
    if (func_80016978(0) & 0xFFFF) {
        func_8012C098(arg0);
    }
}
