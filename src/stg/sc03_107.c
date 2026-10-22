#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_107_8017BE9C(void) {
}

void func_sc03_107_8017BEA4(void) {
}

void func_sc03_107_8017BEAC(void) {
}

void func_sc03_107_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_107_80185FA0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_107_8017CD88(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_107_80185FA8[])();
void func_sc03_107_8017CDB0(void);
extern void func_800D1EBC();
extern void (*D_sc03_107_80185FB4[])();
extern void (*D_sc03_107_80185FC0[])();
extern u8 D_sc03_107_80185FCC;
extern void func_8016EE40();
extern u8 D_sc03_107_80185FD8;
extern void func_sc03_107_8017CF0C();
extern void (*D_sc03_107_80185FEC[])();
extern void (*D_sc03_107_801860C0[])();
extern void func_8001C214();
extern s32 func_8012C1B8();
extern void func_8012CAE4();
extern u8 D_sc03_107_801860B0;
extern u8 D_sc03_107_801860A0;
extern u8 D_sc03_107_80186090;
extern u8 D_sc03_107_80186080;
extern s32 func_80029504();
extern s32 func_sc03_107_8017D57C();
extern void (*D_sc03_107_8018614C[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc03_107_801827D4;
extern u8 D_sc03_107_801860E8;
extern u8 func_sc03_107_8017D878;
extern s32 func_80178970();
extern void func_80178D18();
extern void (*D_sc03_107_8019754C[])();
extern void (*D_sc03_107_80198FEC[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern u8 D_sc03_107_80196C28;
extern void func_8012C218();
extern void func_80016714();

extern s32 func_80029178();
extern u8 D_sc03_107_801860C8;
extern void func_8001C2C4();
extern s32 func_8012C044();
extern void (*D_sc03_107_8019208C[])();
extern void func_sc03_107_8017EEA8();
extern s32 func_8012BEE8();
extern s32 func_8012BCCC();
extern u8 D_sc03_107_80193CE4;
extern u8 D_sc03_107_80196E10;
extern void func_8001C924();
extern s32 func_8012B8E4();
extern u8 D_sc03_107_80196FC0;
extern void func_sc03_107_8017EB04();
extern s16 D_80126CE0;
extern u8 D_sc03_107_80195694;
extern u8 D_sc03_107_801972F8;
extern void (*D_sc03_107_801974FC[])();
extern void func_8012B260();
extern void func_sc03_107_801805F8();
extern void func_8001CD50();
extern u8 D_sc03_107_8019BA88;
extern s32 func_8012913C();
extern void func_8012E688();
extern void func_8002AC00();
extern u8 D_80126B5C;
extern void func_8012B77C();
extern void func_sc03_107_801804D8();
extern s32 func_8012C658();
extern u8 D_sc03_107_801974BC;
extern u8 D_sc03_107_801974C4;
extern s32 func_8012CBF4();
extern s32 func_8012D5E4();
extern s32 func_8012BE54();
extern void func_sc03_107_801801E4();
extern u8 D_sc03_107_8019BAC8;
extern void func_800233CC();
extern void func_801292C8();
extern void func_8012B14C();
extern u8 D_sc03_107_80198BA4;
extern void func_sc03_107_8018134C();
extern u16 D_sc03_107_80198BB0;
extern u16 D_sc03_107_80198BB2;
extern u16 D_sc03_107_80198BB4;
extern void func_800291C8();
extern void func_80131E00();

extern u8 D_sc03_107_80191F80;
extern u8 D_sc03_107_80191FB4;
extern void func_80143970();
extern void func_sc03_107_8017E888();
extern void func_sc03_107_8017E9CC();
extern u16 D_800B99DA;
extern void func_80130D48();

extern void func_8002A04C();
extern u8 D_sc03_107_80198C08;
extern void func_8012E8E0();

extern u16 D_801202A0;
extern s32 func_8012CBA4();
extern void func_8012ADE4();
extern s32 func_8012BC60();
extern void func_8012B0B4();
extern s32 func_8012B6D4();
extern s32 func_8012CEB0();

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017BEBC);

void func_sc03_107_8017CA50(u8 *arg0) {
    D_sc03_107_80185FA0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_107_8017CA8C(u8 *arg0) {
    func_sc03_107_8017CD88();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_107_8017CAD0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_107_8017CAF4(u8 *arg0) {
    D_sc03_107_80185FA8[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_107_8017CB30(u8 *arg0) {
    func_sc03_107_8017CDB0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_107_8017CB70(u8 *arg0) {
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

void func_sc03_107_8017CBEC(void) {
    func_800D1EBC();
}

void func_sc03_107_8017CC0C(u8 *arg0) {
    D_sc03_107_80185FB4[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_107_8017CC48(u8 *arg0) {
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

void func_sc03_107_8017CCBC(u8 *arg0) {
    D_sc03_107_80185FC0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_107_8017CCF8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0, arg2);
        func_8001BFD0();
        func_8002D4C8(0x1D, 0);
        if (!(func_80029178(0xB8) & 0xFF)) {
            func_800D0C48(1);
        }
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_107_8017CD88(void) {
    func_8016EE40((s32) &D_sc03_107_80185FCC, 0x01000000);
}

void func_sc03_107_8017CDB0(void) {
    func_8016EE40((s32) &D_sc03_107_80185FD8, 0x01000000);
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017CDD8);

void func_sc03_107_8017CF0C(s32 arg0) {
    D_sc03_107_80185FEC[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017CF48);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017D280);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017D418);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017D474);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017D4C8);

s32 func_sc03_107_8017D51C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    AF(arg0, u16, 0xA0) = (u16) AF(arg2, u16, 8);
    AF(arg0, u16, 0xA2) = (u16) AF(arg2, u16, 0xA);
    temp_v0 = AF(arg2, s32, 0xC);
    AF(arg0, s32, 0x14) = temp_v0;
    return temp_v0;
}

void func_sc03_107_8017D540(u8 *arg0) {
    D_sc03_107_801860C0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017D57C);

void func_sc03_107_8017D5C4(u8 *arg0) {
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
    AF(arg0, s32 *, 0x58) = (s32 *) &D_sc03_107_801860B0;
    AF(arg0, s16, 0x5C) = 0x80;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    if (temp_s1 >= 0x384) {
        AF(arg0, s32, 0xDC) = func_sc03_107_8017D57C(arg0, &D_sc03_107_801860A0);
    } else if (temp_s1 >= 0x258) {
        AF(arg0, s32, 0xDC) = func_sc03_107_8017D57C(arg0, &D_sc03_107_80186090);
    } else if (temp_s1 >= 0xC8) {
        AF(arg0, s32, 0xDC) = func_sc03_107_8017D57C(arg0, &D_sc03_107_80186080);
    }
}

void func_sc03_107_8017D690(void) {
}

void func_sc03_107_8017D698(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, u16, 2) == 0) {
        temp_v0 = func_8012C1B8();
        AF(arg0, s32, 0x20) = temp_v0;
        if (temp_v0 == 0) {
            func_8012CAE4((s32) arg0);
            return;
        }
        func_8001C2C4(temp_v0);
        AF(arg0, s16, 0x5C) = 0x40;
        AF(arg0, u8, 0x75) = 4;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(arg0, void *, 0x58) = (void *) ((AF(arg0, s16, 0x70) * 0x10) + &D_sc03_107_801860C8);
    }
}

s32 func_sc03_107_8017D728(void) {
    return 0x49;
}

void func_sc03_107_8017D730(u8 *arg0) {
    D_sc03_107_8018614C[AF(arg0, u16, 2)]();
}

void func_sc03_107_8017D76C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_107_801860E8) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc03_107_801827D4);
        func_801788B8(arg0, (s32) &func_sc03_107_8017D878);
    }
}

void func_sc03_107_8017D7D0(void) {
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017D7D8);

void func_sc03_107_8017D838(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017D878);

void func_sc03_107_8017D92C(u8 *arg0) {
    void *temp_v0;

    D_sc03_107_8019208C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (func_8012C044((s32) arg0) == 1) {
            AF(arg0, s16, 0x102) = 1;
            func_sc03_107_8017EEA8((s32) arg0);
        }
    }
}

void func_sc03_107_8017D9B8(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_107_80191F80) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_107_80191FB4;
        AF(arg0, s32, 0xB4) = 0xFFFBDFD9;
        AF(arg0, s32, 0xDC) = 0;
        AF(arg0, s16, 0x100) = 0x1000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        func_80143970(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 func_sc03_107_8017DA34(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc03_107_80196C28);
}

void func_sc03_107_8017DA64(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    if (AF(arg0, u16, 0x34) == 0) {
        if (func_8012BCCC((s32) arg0) <= 0x10000) {
            func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc03_107_80193CE4);
            SetScript((s32) arg0, (s32) &D_sc03_107_80196E10);
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

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017DB34);

void func_sc03_107_8017DBA8(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 5;
    }
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017DBDC);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017DCA0);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017DD78);

void func_sc03_107_8017DE58(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 9;
    SetScript((s32) arg0, (s32) &D_sc03_107_80196FC0, arg2);
    AF(arg0, s32, 0x1C) = 0x1E;
    func_sc03_107_8017EB04((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017DEA0);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017DFC8);

void func_sc03_107_8017E080(u8 *arg0) {
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

void func_sc03_107_8017E110(u8 *arg0) {
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
    func_sc03_107_8017E888((s32) arg0);
    AF(arg0, s32, 0x1C) = 0xA;
}

void func_sc03_107_8017E154(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) == 0) {
        func_sc03_107_8017E9CC(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017E18C);

void func_sc03_107_8017E1B4(u8 *arg0) {
    if (AF(arg0, s16, 0x76) <= 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 2);
    }
    AF(arg0, s32, 0xE4) = 0;
    AF(arg0, s16, 0x52) = -0x30;
}

void func_sc03_107_8017E1E4(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == ((AF(arg0, s32, 0x1C) / 5) * 5)) {
        func_sc03_107_8017E888((s32) arg0);
        AF(arg0, s32, 0xE4) = 0xA;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_107_8017E9CC((s32) arg0);
        AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) - 1);
    }
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017E270);

void func_sc03_107_8017E328(u8 *arg0) {
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
        func_sc03_107_8017E888((s32) arg0);
        var_v0 = 0xA;
        goto block_7;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_107_8017E9CC((s32) arg0);
        var_v0 = AF(arg0, s32, 0xE4) - 1;
block_7:
        AF(arg0, s32, 0xE4) = var_v0;
    }
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017E418);

void func_sc03_107_8017E470(u8 *arg0) {
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

void func_sc03_107_8017E514(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017E524);

void func_sc03_107_8017E60C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x37;
    func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc03_107_80195694);
    SetScript((s32) arg0, (s32) &D_sc03_107_801972F8);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
}

void func_sc03_107_8017E668(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (!(D_800B99DA & 0x1F)) {
            func_80130D48((s32) arg0);
        }
        func_sc03_107_8017EEA8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017E6F0);

void func_sc03_107_8017E7C0(u8 *arg0, s32 arg1) {
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
        func_sc03_107_8017EEA8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017E888);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017E960);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017E9CC);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017EAC8);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017EB04);

s32 func_sc03_107_8017EB70(s32 arg0) {
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
        func_sc03_107_8017EEA8(arg0);
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

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017ED6C);

void func_sc03_107_8017EEA8(s32 arg0) {
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

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017EF3C);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017F6E8);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017FCF0);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8017FE24);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_801801E4);

void func_sc03_107_80180428(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a1_2;

    D_sc03_107_801974FC[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v1 = AF(arg0, s16, 0x70);
        if ((temp_v1 == 0) || (temp_v1 == 7)) {
            temp_a1 = AF(arg0, s32, 0x20);
            RotMatrixZYX(temp_a1 + 0x10, temp_a1 + 0x34);
        }
        if (AF(arg0, s16, 0x70) == 0xF) {
            temp_a1_2 = AF(arg0, s32, 0x20);
            RotMatrixZYX(temp_a1_2 + 0x10, temp_a1_2 + 0x34);
        }
        func_8012B260((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_801804D8);

void func_sc03_107_801805BC(u8 *arg0) {
    D_sc03_107_8019754C[AF(arg0, u16, 2)]();
}

void func_sc03_107_801805F8(s32 arg0) {
    s32 pad[4];
    s32 temp_v0;

    temp_v0 = func_8012913C(0x7C);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        func_8001CD50(AF(temp_v0, s32, 0x20), (s32) &D_sc03_107_8019BA88);
    }
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8018065C);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_801806F0);

void func_sc03_107_80180818(u8 *arg0) {
    if (AF(arg0, s16, 0x76) > 0) {
        func_8012E688((s32) arg0, 0x8C6, 0);
    }
}

void func_sc03_107_80180848(s32 arg0) {
    func_8012E688(arg0, 0x8C7, 0);
    func_8002AC00(0x10);
}

void func_sc03_107_80180874(void) {
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8018087C);

void func_sc03_107_80180968(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x400) {
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 4;
        func_8012E688((s32) arg0, 0x98F, 0);
    }
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_801809E8);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_80180A9C);

void func_sc03_107_80180B7C(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x800) {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_107_80180BE4(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (func_8012BCCC((s32) arg0) <= 0xFFFFF) {
        AF(arg0, s16, 2) = 9;
    }
}

void func_sc03_107_80180C44(u8 *arg0) {
    s32 sp10;
    u16 temp_v0;

    func_8012B77C((s32) &sp10, arg0 + 4, (s32) &D_80126B5C);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) (sp10 >> 0x10);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = (s16) sp10;
    temp_v0 = AF(arg0, u16, 0xA) - 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) >= 0x81) {
        AF(arg0, s16, 2) = 0xA;
        AF(arg0, s16, 0xFC) = 0xC;
    }
    func_sc03_107_801804D8((s32) arg0);
}

void func_sc03_107_80180CD4(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xFC) - 1;
    AF(arg0, u16, 0xFC) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        AF(arg0, s16, 2) = 0xB;
    }
    if ((s16) AF(arg0, u16, 0xFC) == 6) {
        func_8012C658(0x1EA, 0xE, (s32) arg0);
        func_8002D4C8(0xC5D, 0);
    }
    func_sc03_107_801804D8((s32) arg0);
}

void func_sc03_107_80180D48(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xA) + 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) <= 0) {
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0xFC) = 0x1E;
    }
    func_sc03_107_801804D8((s32) arg0);
}

void func_sc03_107_80180D98(s32 arg0) {
    s32 temp_v0;

    if ((func_8012CBF4(arg0) != 0) || (func_8012D5E4(arg0, (s32) &D_sc03_107_801974BC, (s32) &D_sc03_107_801974C4, 0xF) == 1) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218(arg0);
        return;
    }
    func_sc03_107_801805F8(arg0);
}

void func_sc03_107_80180E18(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    if (func_8012BE54() <= 0x23FFFF) {
        temp_v0 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 == 0) {
            temp_s1 = func_8012C658(0x1EA, 0xF, (s32) arg0);
            AF(arg0, s32, 0x1C) = (s32) ((rand() & 0x1F) + 0x2D);
            if ((AF(arg0, s16, 0x70) == 0x18) && (temp_s1 != 0)) {
                AF(AF(temp_s1, void *, 0x20), s16, 0x12) = 0x400;
            }
        }
    }
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_80180EB8);

void func_sc03_107_80180F88(u8 *arg0) {
    s32 temp_v0_2;
    u16 temp_v0;

    AF(arg0, s16, 2) = 0x11;
    temp_v0 = AF(arg0, u16, 0x70) + 1;
    AF(arg0, u16, 0x70) = temp_v0;
    if ((s16) temp_v0 < 0x17) {
        temp_v0_2 = func_8012C658(0x1EA, (s32) (s16) temp_v0, (s32) arg0);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, u16, 0xFE) = (u16) AF(arg0, u16, 0x36);
            AF(arg0, s32, 0x6C) = temp_v0_2;
            AF(temp_v0_2, s16, 0x108) = (s16) ((AF(arg0, u16, 0x70) - 0x11) << 9);
        }
    }
    AF(arg0, u16, 0x70) = (u16) (AF(arg0, u16, 0x70) - 1);
    func_sc03_107_801801E4((s32) arg0);
}

void func_sc03_107_8018101C(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 8) + 0x40000;
    AF(arg0, s32, 8) = temp_v0;
    if (temp_v0 > 0x400000) {
        func_8012C218((s32) arg0, arg1);
    }
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_80181058);

void func_sc03_107_80181140(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_107_8019BAC8;
    func_8001CD50(temp_s1, (s32) temp_s0);
    AF(temp_s1, s16, 0x1E) = 0xCCC;
    AF(temp_s1, s16, 0x10) = 0x400;
    AF(temp_s1, s16, 0x1A) = 0;
    AF(temp_s1, s16, 0x18) = 0;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x50000000);
    func_800233CC((s32) temp_s0, 0x80);
    AF(temp_s0, u8, 2) = 0xFF;
    AF(temp_s0, u8, 1) = 0xFF;
    AF(temp_s0, u8, 0) = 0xFF;
    AF(temp_s0, u8, 5) = 0x40;
    AF(temp_s0, u8, 4) = 0x40;
    AF(temp_s0, u8, 6) = 0x80;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_107_80181204(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_107_8019BAC8;
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, s32, 0x1C) = temp_a1;
    if (temp_a1 != -1) {
        temp_v0 = (0x10 - temp_a1) << 8;
        AF(temp_v1, s16, 0x1A) = temp_v0;
        AF(temp_v1, s16, 0x18) = temp_v0;
        var_v0 = AF(arg0, s32, 0x1C) * 0xFF;
        if (var_v0 < 0) {
            var_v0 += 0xF;
        }
        temp_v0_2 = (u32) var_v0 >> 4;
        AF(temp_a2, u8, 2) = (s8) temp_v0_2;
        AF(temp_a2, u8, 1) = (s8) temp_v0_2;
        AF(temp_a2, u8, 0) = (s8) temp_v0_2;
        temp_v0_3 = AF(arg0, s32, 0x1C) * 4;
        AF(temp_a2, u8, 5) = temp_v0_3;
        AF(temp_a2, u8, 4) = temp_v0_3;
        AF(temp_a2, u8, 6) = (s8) (AF(arg0, s32, 0x1C) * 8);
        return;
    }
    func_801292C8((s32) arg0);
}

void func_sc03_107_801812B8(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, s16, 0x1E) = 0;
    AF(temp_a1, s16, 0x18) = 0;
    AF(temp_a1, s16, 0x1A) = 0;
    AF(temp_a1, s16, 0x1C) = 0;
    AF(temp_a1, s32, 4) = (s32) (AF(temp_a1, s32, 4) | 0x58000000);
    AF(arg0, s32, 0x2C) = 0x400;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_107_801812F8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x2C) - 0x80;
    AF(arg0, s32, 0x2C) = temp_v0;
    if (temp_v0 <= 0) {
        func_801292C8((s32) arg0);
        return;
    }
    temp_v0_2 = rsin(temp_v0, arg1, arg2, arg3);
    AF(temp_s0, s16, 0x1A) = temp_v0_2;
    AF(temp_s0, s16, 0x18) = temp_v0_2;
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8018134C);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_80181500);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_80181850);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_801819C8);

void func_sc03_107_80181A70(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    AF(arg0, s16, 0x34) = 0;
    func_8012E8E0(arg0, (s32) &D_sc03_107_80198C08);
    AF(AF(arg0, void *, 0x68), s16, 0xC) = 0x7FFF;
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_80181AB8);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_80181B94);

void func_sc03_107_80181BB8(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 4;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    func_8012B14C((s32) arg0, (s32) &D_sc03_107_80198BA4);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x108) = 0x28;
    func_sc03_107_8018134C((s32) arg0, -0x28, 1);
}

void func_sc03_107_80181C1C(u8 *arg0) {
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    AF(arg0, s16, 0xFC) = 0;
    func_800291C8(0xA, (s32) (s16) (AF(arg0, u16, 0xFE) | 0x100));
    D_sc03_107_80198BB0 = AF(arg0, u16, 6);
    D_sc03_107_80198BB2 = AF(arg0, u16, 0xA);
    D_sc03_107_80198BB4 = AF(arg0, u16, 0xE);
}

void func_sc03_107_80181C98(s32 arg0) {
    func_80131E00(arg0, 3);
}

void func_sc03_107_80181CB8(void) {
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_80181CC0);

void func_sc03_107_80181D88(u8 *arg0) {
    D_sc03_107_80198FEC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_80181DC4);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_80181EC0);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_80182150);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_801822E4);

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_8018233C);

void func_sc03_107_801823B8(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

INCLUDE_ASM("asm/stg/sc03_107/nonmatchings/sc03_107", func_sc03_107_801823FC);
