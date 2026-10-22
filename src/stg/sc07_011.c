#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc07_011_8017BE9C(void) {
}

void func_sc07_011_8017BEA4(void) {
}

void func_sc07_011_8017BEAC(void) {
}

void func_sc07_011_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc07_011_80182178[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc07_011_8017D558(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc07_011_80182180[])();
extern void (*D_sc07_011_8018218C[])();
void func_sc07_011_8017D650(void);
extern void (*D_sc07_011_80182194[])();
void func_sc07_011_8017D720(void);
extern void (*D_sc07_011_8018219C[])();
void func_sc07_011_8017D7F0(void);
extern void (*D_sc07_011_801821A4[])();
extern void (*D_sc07_011_801821B0[])();
extern void (*D_sc07_011_801821BC[])();
extern u8 D_sc07_011_801821C8;
extern void func_8016EE40();
extern u8 D_sc07_011_80182204;
extern u8 D_sc07_011_80182218;
extern u8 D_sc07_011_80182268;
extern u8 D_sc07_011_801822B8;
extern void func_sc07_011_8017D930();
extern void (*D_sc07_011_80182308[])();
extern void (*D_sc07_011_8018230C[])();
extern void (*D_sc07_011_80182320[])();
extern void (*D_sc07_011_8018237C[])();
extern void (*D_sc07_011_8018BC48[])();
extern s32 func_sc07_011_8017E56C();



extern void func_80171928();
extern void func_sc07_011_8017E5F0();
extern void func_8012AD50();
extern void func_80146C3C();
extern s32 func_sc07_011_8017E5C4();
extern s32 func_80146994();
extern u8 D_80126B58;
extern s32 func_8014C050();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern void func_80171A80();
extern void func_80171990();
extern s32 func_80171A88();
extern u8 D_sc07_011_80182090;
extern void func_800D1724();
extern u8 D_sc07_011_801820B4;
extern u8 D_sc07_011_801820D8;
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
extern s16 D_800B9B0E;
extern s32 D_80126950;
extern u8 D_sc07_011_80189F0C;
extern void func_80175014();
extern void func_80129FF4();
extern void func_80174E9C();
extern s32 func_8012B2CC();
extern void func_80016714();
extern s32 func_8012C098();

extern void func_800CFBCC();
extern u8 D_sc07_011_8018BB50;
extern u8 D_sc07_011_8018BB78;
extern void func_80017254();
extern void func_800176F0();

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017BEBC);

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017CD9C);

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017CDD8);

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017CE14);

void func_sc07_011_8017CE50(u8 *arg0) {
    D_sc07_011_80182178[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017CE8C(u8 *arg0) {
    func_sc07_011_8017D558();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017CED0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_011_8017CEF4(u8 *arg0) {
    D_sc07_011_80182180[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017CF30(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017CF4C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        func_800167B8(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 func_sc07_011_8017CFC0(void) {
    return (func_800167F0(4) & 0xFFFF) != 0;
}

void func_sc07_011_8017CFE4(u8 *arg0) {
    D_sc07_011_8018218C[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017D020(u8 *arg0) {
    func_sc07_011_8017D650();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017D064(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_011_8017D088(u8 *arg0) {
    D_sc07_011_80182194[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017D0C4(u8 *arg0) {
    func_sc07_011_8017D720();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017D108(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_011_8017D12C(u8 *arg0) {
    D_sc07_011_8018219C[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017D168(u8 *arg0) {
    func_sc07_011_8017D7F0();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017D1AC(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc07_011_8017D1D0(u8 *arg0) {
    D_sc07_011_801821A4[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017D20C(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017D228(u8 *arg0) {
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

s32 func_sc07_011_8017D2A4(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(2);
        return 1;
    }
    return 0;
}

void func_sc07_011_8017D2DC(u8 *arg0) {
    D_sc07_011_801821B0[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017D318(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017D334(u8 *arg0) {
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

s32 func_sc07_011_8017D3B0(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(3);
        return 1;
    }
    return 0;
}

void func_sc07_011_8017D3E8(u8 *arg0) {
    D_sc07_011_801821BC[AF(arg0, u8, 0x15)]();
}

s32 func_sc07_011_8017D424(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc07_011_8017D440(u8 *arg0) {
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

s32 func_sc07_011_8017D4BC(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(4);
        return 1;
    }
    return 0;
}

void func_sc07_011_8017D4F4(s32 arg0) {
    func_sc07_011_8017E5C4(8);
    func_80171928(arg0);
}

void func_sc07_011_8017D528(s32 arg0) {
    func_sc07_011_8017E5F0();
    func_80171928(arg0);
}

void func_sc07_011_8017D558(void) {
    func_8016EE40((s32) &D_sc07_011_801821C8, 0x01000000);
}

void func_sc07_011_8017D580(void) {
    func_8016EE40((s32) &D_sc07_011_80182204, 0x01000000);
}

void func_sc07_011_8017D5A8(s32 arg0) {
    func_80171A80(arg0, 0x1E);
    func_80171990(arg0);
}

void func_sc07_011_8017D5DC(s32 arg0) {
    if (func_80171A88() != 0) {
        func_80171990(arg0);
    }
}

void func_sc07_011_8017D614(s32 arg0) {
    func_800D1724((s32) &D_sc07_011_80182090);
    func_80171928(arg0);
}

void func_sc07_011_8017D650(void) {
    func_8016EE40((s32) &D_sc07_011_80182218, 0x01000000);
}

void func_sc07_011_8017D678(s32 arg0) {
    func_80171A80(arg0, 0x1E);
    func_80171990(arg0);
}

void func_sc07_011_8017D6AC(s32 arg0) {
    if (func_80171A88() != 0) {
        func_80171990(arg0);
    }
}

void func_sc07_011_8017D6E4(s32 arg0) {
    func_800D1724((s32) &D_sc07_011_801820B4);
    func_80171928(arg0);
}

void func_sc07_011_8017D720(void) {
    func_8016EE40((s32) &D_sc07_011_80182268, 0x01000000);
}

void func_sc07_011_8017D748(s32 arg0) {
    func_80171A80(arg0, 0x1E);
    func_80171990(arg0);
}

void func_sc07_011_8017D77C(s32 arg0) {
    if (func_80171A88() != 0) {
        func_80171990(arg0);
    }
}

void func_sc07_011_8017D7B4(s32 arg0) {
    func_800D1724((s32) &D_sc07_011_801820D8);
    func_80171928(arg0);
}

void func_sc07_011_8017D7F0(void) {
    func_8016EE40((s32) &D_sc07_011_801822B8, 0x01000000);
}

void func_sc07_011_8017D818(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0xA00;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc07_011_8017D930, 0);
    func_8012A094((s32) &D_80126948);
    func_sc07_011_8017D930((s32) &D_80126948);
}

void func_sc07_011_8017D8B0(void) {
    D_80126950 = 0x190;
    func_80175014((s32) &D_80126948, (s32) &D_sc07_011_80189F0C, 0);
    func_80129FF4();
    D_800B9B0E = 0;
}

void func_sc07_011_8017D8FC(void) {
    D_80126950 = 0x190;
    func_80174E9C((s32) &D_sc07_011_80189F0C);
}

void func_sc07_011_8017D930(s32 arg0) {
    D_sc07_011_80182308[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017D96C);

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017D9B4);

s32 func_sc07_011_8017DB4C(void) {
    return 0x8D;
}

void func_sc07_011_8017DB54(u8 *arg0) {
    D_sc07_011_8018230C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017DB90);

void func_sc07_011_8017DC50(void) {
}

void func_sc07_011_8017DC58(u8 *arg0) {
    D_sc07_011_80182320[AF(arg0, u16, 2)]();
}

void func_sc07_011_8017DC94(u8 *arg0) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017DCB4);

void func_sc07_011_8017DD78(u8 *arg0) {
    D_sc07_011_8018237C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017DDB4);

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017DE9C);

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017DF70);

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017DFE8);

s32 func_sc07_011_8017E01C(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = AF(arg0, s32, 0x20);
    func_8012B2CC(arg0);
    AF(arg0, s32, 0x20) = (s32) AF(arg0, s32, 0xCC);
    func_8012B2CC(arg0);
    AF(arg0, s32, 0x20) = (s32) AF(arg0, s32, 0xD0);
    temp_v0 = func_8012B2CC(arg0);
    AF(arg0, s32, 0x20) = temp_s1;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017E078);

s32 func_sc07_011_8017E294(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x84);
    }
    temp_a0_2 = AF(arg0, s32, 0xD0);
    if (temp_a0_2 != 0) {
        func_80016714(temp_a0_2, 0x84);
    }
    return func_8012C098(arg0);
}

void func_sc07_011_8017E2F0(u8 *arg0) {
    D_sc07_011_8018BC48[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc07_011/nonmatchings/sc07_011", func_sc07_011_8017E32C);

void func_sc07_011_8017E52C(s32 arg0) {
    func_sc07_011_8017E56C(arg0);
}

void func_sc07_011_8017E54C(s32 arg0) {
    func_80146C3C(arg0);
}

s32 func_sc07_011_8017E56C(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    func_80017254((s32) &D_sc07_011_8018BB50);
    var_s1 = 0;
    var_s0 = &D_sc07_011_8018BB78;
    do {
        func_800176F0((s32) var_s0);
        var_s1 += 1;
        temp_v0 = var_s1 < 4;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x34);
    } while (temp_v0 != 0);
    return temp_v0;
}

s32 func_sc07_011_8017E5C4(s32 arg0) {
    return func_80146994(0x28, 0, arg0, 0);
}

void func_sc07_011_8017E5F0(void) {
    s32 temp_v0;

    temp_v0 = func_8014C050((s32) &D_80126B58, 0x28);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 2) = (u16) (AF(temp_v0, u16, 2) + 1);
    }
}
