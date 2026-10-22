#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_007_8017BE9C(void) {
}

void func_sc05_007_8017BEA4(void) {
}

void func_sc05_007_8017BEAC(void) {
}

void func_sc05_007_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_007_80184498[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc05_007_8017D008(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_007_801844A0[])();
void func_sc05_007_8017D030(void);
extern void func_800D1EBC();
extern void (*D_sc05_007_801844AC[])();
extern u8 D_sc05_007_801844B8;
extern void func_8016EE40();
extern u8 D_sc05_007_801844C4;
extern void func_sc05_007_8017D0F4();
extern void (*D_sc05_007_801844D8[])();
extern void (*D_sc05_007_801844F8[])();
extern void (*D_sc05_007_80184634[])();
extern void (*D_sc05_007_8019092C[])();
extern void (*D_sc05_007_80190994[])();
extern void (*D_sc05_007_801909E8[])();
void func_sc05_007_8017DDE0(u8 *arg0);
extern void (*D_sc05_007_8019A360[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc05_007_8019CDA4;
extern s32 func_sc05_007_8017DDB8();
extern u8 D_sc05_007_80197498;
extern void func_8012C218();
extern void func_80016714();

extern void func_8014E934();
extern void func_8014CC28();
extern void func_8014F3E8();
extern void func_80146CA0();
extern void func_sc05_007_8017D990();
extern s32 func_8012C044();
extern void (*D_sc05_007_801928FC[])();
extern void func_sc05_007_8017F568();
extern s32 func_8012BEE8();
extern s32 func_8012BCCC();
extern u8 D_sc05_007_80194554;
extern u8 D_sc05_007_80197680;
extern void func_8001C924();
extern s32 func_8012B8E4();
extern u8 D_sc05_007_80197830;
extern void func_sc05_007_8017F1C4();
extern s16 D_80126CE0;
extern u8 D_sc05_007_80195F04;
extern u8 D_sc05_007_80197B68;
extern void (*D_sc05_007_80197CD4[])();
extern void func_sc05_007_801802D0();
extern void func_8002A04C();
extern void func_8012E8A8();
extern u8 D_sc05_007_8019A1C4;
extern u8 D_sc05_007_80197CF4;
extern s32 func_8012D5E4();
extern s32 func_sc05_007_801802B8();
extern u8 D_80078EC1;
extern s32 func_8012BD14();

extern u8 D_800D46E4;
extern u8 D_800D5880;
extern void func_80149020();
extern s32 func_sc05_007_8017DB58();
extern void func_80159B3C();
extern void func_801542DC();
extern void func_80165718();
extern void func_8014BC44();
extern s32 func_80151664();
extern void func_80146C3C();
extern u8 D_sc05_007_80190938;
extern u8 D_sc05_007_80190944;
extern s32 func_801465C0();
extern void func_8001CC3C();
extern void func_80128EA8();
extern s32 func_sc05_007_8017DD70();
extern s32 func_80128ED8();
extern void func_80149374();
extern s32 func_800D1FC8();
extern s32 func_8012C354();
extern u8 D_sc05_007_801927F0;
extern u8 D_sc05_007_80192824;
extern void func_80143970();
extern void func_sc05_007_8017EF48();
extern void func_sc05_007_8017F08C();
extern u16 D_800B99DA;
extern void func_80130D48();
extern void func_8002AC00();

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
extern s16 D_80126B62;
extern s32 func_80178970();
extern void func_80178D18();
extern s32 func_80029178();
extern void func_80147324();
extern u8 D_sc05_007_801909C0;
extern void func_80154274();
extern void func_801477E8();
extern void func_80146DE8();
extern void func_80147814();
extern void func_80147460();
extern void func_80147B18();
extern void func_801473EC();
extern void func_80147AD4();
extern void func_8014C010();
extern void func_8001AAA0();
extern void func_80154150();

extern u8 D_80126B58;

extern void func_80131E00();
extern u16 D_801202A0;
extern s32 func_8012CBA4();
extern void func_8012ADE4();
extern s32 func_8012BC60();
extern void func_8012B0B4();
extern s32 func_8012B6D4();
extern s32 func_8012CEB0();

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017BEBC);

void func_sc05_007_8017CD9C(u8 *arg0) {
    D_sc05_007_80184498[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_007_8017CDD8(u8 *arg0) {
    func_sc05_007_8017D008();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_007_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_007_8017CE40(u8 *arg0) {
    D_sc05_007_801844A0[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_007_8017CE7C(u8 *arg0) {
    func_sc05_007_8017D030();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_007_8017CEBC(u8 *arg0) {
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

void func_sc05_007_8017CF38(void) {
    func_800D1EBC();
}

void func_sc05_007_8017CF58(u8 *arg0) {
    D_sc05_007_801844AC[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_007_8017CF94(u8 *arg0) {
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

void func_sc05_007_8017D008(void) {
    func_8016EE40((s32) &D_sc05_007_801844B8, 0x01000000);
}

void func_sc05_007_8017D030(void) {
    func_8016EE40((s32) &D_sc05_007_801844C4, 0x01000000);
}

void func_sc05_007_8017D058(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x155;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc05_007_8017D0F4, 0);
    func_8012A094((s32) &D_80126948);
    func_sc05_007_8017D0F4((s32) &D_80126948);
}

void func_sc05_007_8017D0F4(s32 arg0) {
    D_sc05_007_801844D8[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017D130);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017D1E8);

void func_sc05_007_8017D380(u8 *arg0) {
    D_sc05_007_801844F8[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017D3BC);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017D490);

void func_sc05_007_8017D52C(s32 arg0) {
    if ((func_80178970() != 0) || (D_80126B62 >= -0x1BF)) {
        func_80178D18(arg0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc05_007_8017D58C(void) {
}

void func_sc05_007_8017D594(void) {
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017D59C);

s32 func_sc05_007_8017D5FC(void) {
    return D_sc05_007_8019CDA4 == 1;
}

s32 func_sc05_007_8017D614(void) {
    return (func_80029178(0xBA) & 0xFF) != 0;
}

void func_sc05_007_8017D638(u8 *arg0) {
    AF(arg0, s32, 0xDC) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, u16, 0xFC) = (u16) AF(arg0, u16, 6);
}

void func_sc05_007_8017D64C(void) {
    func_80147324(0x7F1);
}

void func_sc05_007_8017D66C(void) {
    func_80147324(0x7F0);
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017D68C);

void func_sc05_007_8017D764(u8 *arg0) {
    D_sc05_007_80184634[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017D7A0);

void func_sc05_007_8017D8FC(void) {
}

s32 func_sc05_007_8017D904(void) {
    return 0x5F;
}

void func_sc05_007_8017D90C(u8 *arg0) {
    D_sc05_007_8019092C[AF(arg0, u16, 2)]();
}

void func_sc05_007_8017D948(s32 arg0) {
    func_8014E934();
    func_8014CC28(arg0);
    func_8014F3E8(arg0);
    func_sc05_007_8017D990(arg0);
    func_80146CA0(arg0);
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017D990);

void func_sc05_007_8017DAE4(s32 arg0, s32 arg1) {
    func_80149020(arg0, arg1);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        func_sc05_007_8017DB58(arg0);
        func_80159B3C(arg0);
        if (AF(arg0, s32, 0xB4) == &D_800D5880) {
            func_801542DC(arg0, (s32) &D_800D46E4, 0xE);
        }
        func_80165718(arg0);
    }
}

s32 func_sc05_007_8017DB58(s32 arg0) {
    func_8014BC44(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    return func_80151664(arg0);
}

void func_sc05_007_8017DB98(u8 *arg0) {
    D_sc05_007_80190994[AF(arg0, u16, 2)]();
}

void func_sc05_007_8017DBD4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_801465C0();
    if (temp_v0 == 0) {
        func_80146C3C(arg0);
    }
    AF(arg0, s32, 0x20) = temp_v0;
    func_8001CC3C(temp_v0, (s32) &D_sc05_007_80190938, 0x270, 0x100);
    AF(temp_v0, u8, 0x27) = 0x9B;
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
    if (AF(arg0, s32, 0x2C) == 0) {
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x18) = 0x3000;
    }
    AF(temp_v0, u8, 0x25) = 0xC0;
    AF(temp_v0, u8, 0x26) = 0x40;
    AF(temp_v0, u8, 0x24) = 0x40;
    func_80128EA8(temp_v0, arg0 + 0x24, (s32) &D_sc05_007_80190944);
    AF(arg0, s32, 0x14) = 0xFFFC0000;
    func_sc05_007_8017DD70(arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc05_007_8017DCAC(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;
    u16 var_v0;
    u8 temp_v0_2;

    temp_s1 = AF(arg0, s32, 0x20);
    if (func_80128ED8(temp_s1, (s32) (arg0 + 0x24)) != 0) {
        func_80146C3C((s32) arg0);
        return;
    }
    temp_v0 = AF(arg0, s32, 0x14) - 0x8000;
    AF(arg0, s32, 0x14) = temp_v0;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + temp_v0);
    AF(temp_s1, u16, 0x18) = (u16) (AF(temp_s1, u16, 0x18) + 0x500);
    if (AF(arg0, s32, 0x2C) == 0) {
        var_v0 = AF(temp_s1, u16, 0x1A) + 0x300;
    } else {
        var_v0 = AF(temp_s1, u16, 0x1A) + 0x600;
    }
    AF(temp_s1, u16, 0x1A) = var_v0;
    temp_v0_2 = AF(temp_s1, u8, 0x26) - 4;
    AF(temp_s1, u8, 0x26) = temp_v0_2;
    AF(temp_s1, u8, 0x24) = temp_v0_2;
    AF(temp_s1, u8, 0x25) = (u8) (AF(temp_s1, u8, 0x25) - 8);
}

s32 func_sc05_007_8017DD70(s32 arg0) {
    s32 var_v0;

    func_80149374(AF(arg0, s32, 0x34), arg0 + 4);
    var_v0 = AF(arg0, s32, 0x2C);
    if (var_v0 == 0) {
        var_v0 = func_800D1FC8(arg0, 5);
    }
    return var_v0;
}

s32 func_sc05_007_8017DDB8()
{
    return SetActionHandler((s32) func_sc05_007_8017DDE0);
}

void func_sc05_007_8017DDE0(u8 *arg0) {
    D_sc05_007_801909E8[AF(arg0, u8, 0x214)]();
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017DE1C);

void func_sc05_007_8017DE70(void) {
}

void func_sc05_007_8017DE78(s32 arg0) {
    func_80154274(arg0, (s32) &D_sc05_007_801909C0);
    func_801477E8(arg0, -0x20000);
    func_80146DE8(arg0, 0, 0, -0x400000);
    NextPhase(arg0);
}

void func_sc05_007_8017DED0(s32 arg0) {
    func_80147814(arg0, 0x10000);
    func_80147460(arg0);
    func_80147B18(arg0, 0, 0, 0x10000);
    func_801473EC(arg0);
    if (AF(arg0, s16, 0xA) >= -0x2C1) {
        AF(arg0, s16, 0xA) = -0x2C2;
        NextPhase(arg0);
    }
}

void func_sc05_007_8017DF40(s32 arg0) {
    func_80147AD4(arg0, 0, 0, 0x20000);
    func_801473EC(arg0);
    func_8014C010(arg0, 2);
    if (AF(arg0, s32, 0x2C) > 0) {
        func_8001AAA0(0x6B);
        func_80154150(arg0, 1);
        NextPhase(arg0);
        ClearActionHandler(arg0);
    }
}

void func_sc05_007_8017DFBC(void) {
}

void func_sc05_007_8017DFC4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    NextPhase((s32) &D_80126B58, arg1, arg2, arg3);
}

void func_sc05_007_8017DFEC(u8 *arg0) {
    void *temp_v0;

    D_sc05_007_801928FC[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (func_8012C044((s32) arg0) == 1) {
            AF(arg0, s16, 0x102) = 1;
            func_sc05_007_8017F568((s32) arg0);
        }
    }
}

void func_sc05_007_8017E078(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc05_007_801927F0) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc05_007_80192824;
        AF(arg0, s32, 0xB4) = 0xFFFBDFD9;
        AF(arg0, s32, 0xDC) = 0;
        AF(arg0, s16, 0x100) = 0x1000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        func_80143970(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 func_sc05_007_8017E0F4(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc05_007_80197498);
}

void func_sc05_007_8017E124(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    if (AF(arg0, u16, 0x34) == 0) {
        if (func_8012BCCC((s32) arg0) <= 0x10000) {
            func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc05_007_80194554);
            SetScript((s32) arg0, (s32) &D_sc05_007_80197680);
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else {
        temp_v0 = func_8012B8E4((s32) arg0, 0xA);
        temp_a1 = AF(arg0, s32, 0x20);
        AF(temp_a1, u16, 0x12) = (u16) (AF(temp_a1, u16, 0x12) + temp_v0);
        if ((func_8012BEE8((s32) arg0, temp_a1) != 0) || (temp_v0 == 0)) {
            AF(arg0, s16, 2) = 5;
        }
    }
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017E1F4);

void func_sc05_007_8017E268(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 5;
    }
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017E29C);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017E360);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017E438);

void func_sc05_007_8017E518(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 9;
    SetScript((s32) arg0, (s32) &D_sc05_007_80197830, arg2);
    AF(arg0, s32, 0x1C) = 0x1E;
    func_sc05_007_8017F1C4((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017E560);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017E688);

void func_sc05_007_8017E740(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (AF(arg0, s32, 0xDC) & 8) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0x44);
        goto block_3;
    }
    temp_v0 = func_8012B8E4((s32) arg0, 8);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x12) = (u16) (AF(temp_v1_2, u16, 0x12) + temp_v0);
    if (temp_v0 != 0) {
block_3:
        if (func_8012BEE8((s32) arg0) != 0) {
            goto block_4;
        }
    } else {
block_4:
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc05_007_8017E7D0(u8 *arg0) {
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
    func_sc05_007_8017EF48((s32) arg0);
    AF(arg0, s32, 0x1C) = 0xA;
}

void func_sc05_007_8017E814(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) == 0) {
        func_sc05_007_8017F08C(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017E84C);

void func_sc05_007_8017E874(u8 *arg0) {
    if (AF(arg0, s16, 0x76) <= 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 2);
    }
    AF(arg0, s32, 0xE4) = 0;
    AF(arg0, s16, 0x52) = -0x30;
}

void func_sc05_007_8017E8A4(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == ((AF(arg0, s32, 0x1C) / 5) * 5)) {
        func_sc05_007_8017EF48((s32) arg0);
        AF(arg0, s32, 0xE4) = 0xA;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc05_007_8017F08C((s32) arg0);
        AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) - 1);
    }
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017E930);

void func_sc05_007_8017E9E8(u8 *arg0) {
    s32 var_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) - 1);
    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_v1_4 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_v1_4, u16, 0x18) >= 0x1800) {
            AF(temp_v1_4, u16, 0x1C) = 0x1800U;
            AF(temp_v1_4, u16, 0x1A) = 0x1800U;
            AF(temp_v1_4, u16, 0x18) = 0x1800U;
        }
    }
    if (AF(arg0, s32, 0x1C) == 0xE) {
        func_sc05_007_8017EF48((s32) arg0);
        var_v0 = 0xA;
        goto block_7;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc05_007_8017F08C((s32) arg0);
        var_v0 = AF(arg0, s32, 0xE4) - 1;
block_7:
        AF(arg0, s32, 0xE4) = var_v0;
    }
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017EAD8);

void func_sc05_007_8017EB30(u8 *arg0) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (D_80126CE0 * 8));
    if (AF(arg0, s16, 0xAA) == 0) {
        var_lo = temp_a0 * AF(arg0, s16, 0x100);
    } else {
        var_lo = temp_a0 * AF(arg0, s16, 0x104);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    var_v0 = var_lo;
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    temp_v0 = (u32) var_v0 >> 0xC;
    AF(temp_v1, s16, 0x1C) = (s16) temp_v0;
    AF(temp_v1, s16, 0x18) = (s16) temp_v0;
    temp_a0_2 = AF(arg0, void *, 0x20);
    if (AF(temp_a0_2, s16, 0x18) <= 0) {
        AF(temp_a0_2, s16, 0x1C) = 1;
        AF(temp_a0_2, s16, 0x18) = 1;
    }
}

void func_sc05_007_8017EBD4(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017EBE4);

void func_sc05_007_8017ECCC(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x37;
    func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc05_007_80195F04);
    SetScript((s32) arg0, (s32) &D_sc05_007_80197B68);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
}

void func_sc05_007_8017ED28(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (!(D_800B99DA & 0x1F)) {
            func_80130D48((s32) arg0);
        }
        func_sc05_007_8017F568((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017EDB0);

void func_sc05_007_8017EE80(u8 *arg0, s32 arg1) {
    void *temp_v0;
    void *temp_v1;

    if ((AF(arg0, s32, 0xDC) & 2) && (AF(arg0, s32, 0x1C) >= 0x15)) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) - 0x1E);
    }
    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (!(D_800B99DA & 0x1F)) {
            func_80130D48((s32) arg0);
        }
        func_sc05_007_8017F568((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017EF48);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017F020);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017F08C);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017F188);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017F1C4);

s32 func_sc05_007_8017F230(s32 arg0) {
    SV8 a;
    SV8 b;
    s32 d;
    u8 *p;
    s32 i;
    s32 t;
    s32 *dp;

    t = func_8012CBA4();
    if ((t & 0xFF) == 2) {
        func_80131E00(arg0, 0x12);
        return 0;
    }
    if ((t & 0xFF) == 0x1A) {
        func_sc05_007_8017F568(arg0);
        return 0;
    }
    if (0) {
miss:
        func_8012ADE4(arg0);
        return 1;
    }
    if (!(t & 0x2000)) {
        func_8012ADE4(arg0);
    }
    AF(arg0, s32, 0xDC) &= ~0x40;
    if (AF(arg0, s32, 0x14) > 0xFFFFF) {
        AF(arg0, s32, 0x14) = 0x100000;
    }
    p = (u8 *)&D_801202A0;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) != 0 && AF(p, s32, 0x58) != 0 && (u8 *)arg0 != p
            && func_8012BC60(arg0 + 4, p + 4) < 0x2400) {
            dp = &d;
            func_8012B0B4(dp, func_8012B6D4(arg0 + 4, p + 4), 0x61);
            b.x = AF(p, u16, 6);
            b.y = AF(p, u16, 0xA);
            b.z = AF(p, u16, 0xE);
            b.x += *(s32 *)&d;
            b.z += *(s32 *)&d >> 16;
            a.x = AF(arg0, u16, 0x3A);
            a.y = AF(arg0, u16, 0x3E);
            a.z = AF(arg0, u16, 0x42);
            if (!(func_8012CEB0(&a, &b, 0) & 0x2000)) {
                goto miss;
            }
            AF(arg0, u16, 6) = b.x;
            AF(arg0, u16, 0xA) = b.y;
            AF(arg0, u16, 0xE) = b.z;
            break;
        }
    }
    return 1;
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017F42C);

void func_sc05_007_8017F568(s32 arg0) {
    void *temp_v1;

    if (AF(arg0, s16, 0x102) == 0) {
        func_8002A04C();
        func_8002AC00(0x1A);
    }
    if (!(AF(arg0, s16, 0x70) & 0x8000)) {
        temp_v1 = AF(arg0, void *, 0x68);
        if ((temp_v1 != NULL) && (AF(arg0, s16, 0x72) & 0x8000)) {
            AF(temp_v1, u16, 0xA) = (u16) (AF(temp_v1, u16, 0xA) & 0x7FFF);
        }
    }
    func_8012C218(arg0);
}

void func_sc05_007_8017F5FC(u8 *arg0) {
    s32 temp_v0;

    D_sc05_007_80197CD4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc05_007_801802D0((s32) arg0);
        }
    }
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017F678);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017F738);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017F860);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017F9D0);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017FB64);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017FDB8);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8017FEC4);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_80180060);

void func_sc05_007_8018011C(s32 arg0) {
    void *temp_v1;

    func_8002A04C(arg0);
    if (AF(arg0, s16, 0x70) & 0x8000) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, s16, 2) = 7;
        AF(arg0, u8, 0xC1) = 0;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 0x5E) = 0;
        AF(arg0, s16, 0x5C) = 0;
        AF(temp_v1, s16, 0x12) = 0;
        AF(temp_v1, s16, 0x10) = 0;
        func_8012E8A8(arg0);
        AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
        return;
    }
    func_8012C218(arg0);
}

void func_sc05_007_801801A8(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc05_007_8019A1C4);
}

s32 func_sc05_007_801801E0(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc05_007_80197CF4, (s32) (&D_sc05_007_80197CF4 + 8), 5) != 0;
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_8018020C);

s32 func_sc05_007_801802B8(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc05_007_801802D0(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

void func_sc05_007_8018033C(u8 *arg0) {
    D_sc05_007_8019A360[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_80180378);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_80180474);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_80180704);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_80180898);

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_801808F0);

void func_sc05_007_8018096C(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

INCLUDE_ASM("asm/stg/sc05_007/nonmatchings/sc05_007", func_sc05_007_801809B0);
