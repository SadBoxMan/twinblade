#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc01_001_8017BE9C(void) {
}

void func_sc01_001_8017BEA4(void) {
}

void func_sc01_001_8017BEAC(void) {
}

void func_sc01_001_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc01_001_80187294[])();
extern s32 func_800167F0();
extern void (*D_sc01_001_8018729C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc01_001_8017CFA0(void);
extern u8 D_sc01_001_801872A8;
extern void func_8016EE40();
extern u8 D_sc01_001_801872B4;
extern void func_sc01_001_8017D060();
extern void (*D_sc01_001_801872B8[])();
extern void (*D_sc01_001_80188DE0[])();
extern void (*D_sc01_001_80188DF0[])();
extern void (*D_sc01_001_80188E00[])();
extern void (*D_sc01_001_80188E10[])();
extern void (*D_sc01_001_80188E58[])();

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

extern u8 D_sc01_001_80187338;
extern u8 D_sc01_001_80187758;

extern void func_800167B8();
extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();

extern void func_80019028();
void func_sc01_001_8017CF78(void);
extern s32 D_sc01_001_801EDA20;
extern s32 func_8013767C();
extern s32 D_sc01_001_801ED9D4;
extern s32 D_sc01_001_801ED9DC;
extern s32 func_80174E9C();
extern s32 func_80174ED4();
extern void (*D_sc01_001_80188DD0[])();
extern void func_sc01_001_8017D2DC();
extern void func_sc01_001_80182C58();
extern s32 D_sc01_001_801EDA10;
extern s32 func_sc01_001_80182B00();
extern s32 D_sc01_001_801EDA14;
extern u8 D_sc01_001_80188050;
extern s32 D_sc01_001_801EDA0C;
extern u8 D_sc01_001_801884A8;
extern s32 D_sc01_001_801EDA1C;
extern s32 D_sc01_001_801EDA18;
extern u8 D_sc01_001_801888F8;
extern s32 D_sc01_001_801ED9F0;
extern void (*D_sc01_001_80188E20[])();
extern void func_sc01_001_801832BC();
extern s32 D_sc01_001_801EDA08;
extern s32 D_sc01_001_801ED9E4;
extern s32 D_sc01_001_801EDA00;
extern void func_80143B6C();
extern u8 D_sc01_001_80188C0C;
extern u8 D_sc01_001_80188BF4;
extern s32 D_sc01_001_801F3040;
extern s32 func_sc01_001_80183128();

extern void func_800CFBCC();
extern u8 D_sc01_001_80183B84;
extern u8 D_sc01_001_80199934;
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern void func_8001C214();
extern void func_8001D0E8();
extern void func_8012B200();


extern s32 D_sc01_001_801F3038;
extern s32 D_sc01_001_801F303C;

extern s32 D_800DE2F8[];

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017BEBC);

void func_sc01_001_8017CD9C(u8 *arg0) {
    D_sc01_001_80187294[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_001_8017CDD8(u8 *arg0) {
    func_80019028();
    func_sc01_001_8017CF78();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_001_8017CE24(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc01_001_8017CE48(u8 *arg0) {
    D_sc01_001_8018729C[AF(arg0, u8, 0x15)]();
}

s32 func_sc01_001_8017CE84(u8 *arg0) {
    func_sc01_001_8017CFA0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc01_001_8017CEC4(u8 *arg0) {
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

s32 func_sc01_001_8017CF40(void) {
    if (func_800167F0(4) & 0xFFFF) {
        func_800CFBCC(0);
        return 1;
    }
    return 0;
}

void func_sc01_001_8017CF78(void) {
    func_8016EE40((s32) &D_sc01_001_801872A8, 0x01000000);
}

void func_sc01_001_8017CFA0(void) {
    func_8016EE40((s32) &D_sc01_001_801872B4, 0x01000000);
}

void func_sc01_001_8017CFC8(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x4B0;
    D_80126968 = 0x2AA;
    D_8012696A = 0x800;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A018((s32) func_sc01_001_8017D060, 0);
    func_8012A094((s32) &D_80126948);
    func_sc01_001_8017D060((s32) &D_80126948);
}

void func_sc01_001_8017D060(s32 arg0) {
    D_sc01_001_801872B8[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017D09C);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017D13C);

s32 func_sc01_001_8017D2D4(void) {
    return 0x8F;
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017D2DC);

s32 func_sc01_001_8017EBA4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8013767C();
    D_sc01_001_801EDA20 = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017EBCC);

s32 func_sc01_001_8017EC18(void) {
    return D_sc01_001_801EDA20 != 0;
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017EC28);

s32 func_sc01_001_8017F1C8(s32 arg0) {
    D_sc01_001_801ED9DC = 0;
    D_sc01_001_801ED9D4 = arg0;
    return func_80174E9C(arg0);
}

s32 func_sc01_001_8017F1F8(void) {
    s32 var_v0;

    var_v0 = D_sc01_001_801ED9D4;
    if (var_v0 != 0) {
        var_v0 = func_80174ED4() << 0x10;
        if (var_v0 != 0) {
            D_sc01_001_801ED9D4 = 0;
        }
    }
    return var_v0;
}

void func_sc01_001_8017F238(u8 *arg0) {
    func_sc01_001_8017D2DC();
    D_sc01_001_80188DD0[AF(arg0, u16, 2)](arg0);
    func_sc01_001_80182C58();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017F28C);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017F328);

void func_sc01_001_8017F7F4(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA10 != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_8017F830(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA10 != 0)) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_8017F878(u8 *arg0) {
    D_sc01_001_80188DE0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017F8B4);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017F950);

void func_sc01_001_8017FD70(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA14 != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_8017FDAC(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA14 != 0)) {
        SetScript(arg0, (s32) &D_sc01_001_80188050);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_8017FE08(u8 *arg0) {
    D_sc01_001_80188DF0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017FE44);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8017FEE0);

void func_sc01_001_801803A4(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA0C != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_801803E0(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA0C != 0)) {
        SetScript(arg0, (s32) &D_sc01_001_801884A8);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_8018043C(u8 *arg0) {
    D_sc01_001_80188E00[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80180478);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80180514);

void func_sc01_001_80180854(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA1C != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_80180890(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA1C != 0)) {
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_801808D8(u8 *arg0) {
    D_sc01_001_80188E10[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80180914);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801809B0);

void func_sc01_001_80180E54(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA18 != 0)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
    }
}

void func_sc01_001_80180E90(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA18 != 0)) {
        SetScript(arg0, (s32) &D_sc01_001_801888F8);
        AF(arg0, s16, 2) = 1;
    }
}

void func_sc01_001_80180EEC(u8 *arg0) {
    D_sc01_001_80188E20[AF(arg0, u16, 2)]();
    if (((u16) AF(arg0, u16, 2) >= 2U) && (D_sc01_001_801ED9F0 == 1)) {
        func_sc01_001_801832BC((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80180F64);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80181000);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801810A4);

void func_sc01_001_8018150C(u8 *arg0) {
    if ((AF(arg0, s16, 0x98) == 0) || (D_sc01_001_801EDA08 != 0)) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_8018153C(s32 arg0) {
    if ((func_sc01_001_80182B00(arg0) != 0) || (D_sc01_001_801EDA08 != 0)) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_80181584(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        SetScript((s32) arg0, (s32) &D_sc01_001_80187338);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_001_801815D8(u8 *arg0) {
    if (D_sc01_001_801EDA08 != 0) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_801815F8(u8 *arg0) {
    if (AF(arg0, s16, 0x98) == 0) {
        SetScript((s32) arg0, (s32) &D_sc01_001_80187758);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc01_001_8018164C(s32 arg0) {
    func_sc01_001_80182B00(arg0);
    if (AF(arg0, s16, 0x98) == 0) {
        SetScript(arg0, (s32) &D_sc01_001_80187758);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801816A4);

void func_sc01_001_80181784(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = D_sc01_001_801EDA00 - 1;
    D_sc01_001_801EDA00 = temp_v0;
    if (temp_v0 == 0) {
        D_sc01_001_801ED9E4 = 1;
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_801817BC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xDE) - 1;
    AF(arg0, u16, 0xDE) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        func_80143B6C((s32) arg0, 1);
        AF(arg0, u16, 0xDE) = 0xAU;
    }
    if ((func_sc01_001_80182B00((s32) arg0) != 0) || (D_sc01_001_801EDA08 != 0)) {
        AF(arg0, s16, 2) = 2;
    }
}

void func_sc01_001_80181834(void) {
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8018183C);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80181A28);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80181A4C);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80181E04);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182238);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182284);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801824EC);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_8018275C);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182974);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182A14);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182A48);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182B00);

void func_sc01_001_80182B60(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0xCC) = arg1;
}

s32 func_sc01_001_80182B68(s32 arg0) {
    return MoveImage((s32) ((arg0 * 8) + &D_sc01_001_80188C0C), 0x280, 0x188);
}

s32 func_sc01_001_80182B9C(s32 arg0) {
    return MoveImage((s32) ((arg0 * 8) + &D_sc01_001_80188BF4), 0x200, 0x100);
}

s32 func_sc01_001_80182BD0(s32 arg0) {
    D_sc01_001_801F3040 = 1;
    return MoveImage((s32) ((arg0 * 8) + &D_sc01_001_80188C0C), 0x280, 0x188);
}

void func_sc01_001_80182C10(s32 arg0) {
    MoveImage((s32) &D_sc01_001_80188C0C, 0x280, 0x188);
    D_sc01_001_801F3040 = 0;
    D_sc01_001_801F3038 = 0x3C;
    D_sc01_001_801F303C = 0;
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182C58);

void func_sc01_001_80182D04(s32 arg0) {
    s32 *p;

    switch (arg0) {
    case 0:
        p = D_800DE2F8;
        *p |= 0x01000000;
        D_800DE2F8[1] |= 0x01000000;
        D_800DE2F8[2] |= 0x01000000;
        D_800DE2F8[3] |= 0x01000000;
        D_800DE2F8[4] |= 0x01000000;
        D_800DE2F8[5] |= 0x01000000;
        break;
    case 1:
        D_800DE2F8[0] &= ~0x01000000;
        D_800DE2F8[1] &= ~0x01000000;
        D_800DE2F8[2] &= ~0x01000000;
        D_800DE2F8[3] |= 0x01000000;
        D_800DE2F8[4] |= 0x01000000;
        D_800DE2F8[5] &= ~0x01000000;
        break;
    case 2:
        D_800DE2F8[0] &= ~0x01000000;
        D_800DE2F8[1] |= 0x01000000;
        D_800DE2F8[2] &= ~0x01000000;
        D_800DE2F8[3] |= 0x01000000;
        D_800DE2F8[4] |= 0x01000000;
        D_800DE2F8[5] &= ~0x01000000;
        break;
    }
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80182EB0);

void func_sc01_001_80182F58(u8 *arg0) {
    D_sc01_001_80188E58[AF(arg0, u16, 2)]();
}

void func_sc01_001_80182F94(u8 *arg0) {
    s32 temp_v0;

    if ((AF(arg0, s32, 0x20) = temp_v0 = func_8012C1B8()) == 0) {
        func_8012CAE4((s32) arg0);
        return;
    }
    func_8001C214(temp_v0, (s32) &D_sc01_001_80199934);
    func_8001D0E8(temp_v0, 0x7FFF, 0x7FFF);
    SetScript((s32) arg0, (s32) &D_sc01_001_80183B84);
    func_8012B200((s32) arg0);
    AF(arg0, s32, 0x4C) = 0;
    AF(arg0, s32, 0x44) = 0;
    AF(arg0, s32, 0x48) = 0x20000;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80183034);

void func_sc01_001_801830A8(s32 arg0) {
    void *temp_v1;
    void *temp_v1_2;

    if (func_sc01_001_80183128(arg0, 1, 0) != 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x100);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, u16, 0x14) = (u16) (AF(temp_v1_2, u16, 0x14) + 0x100);
}

void func_sc01_001_80183120(void) {
}

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80183128);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801831EC);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801832BC);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801833A0);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_801835C8);

INCLUDE_ASM("asm/stg/sc01_001/nonmatchings/sc01_001", func_sc01_001_80183748);
