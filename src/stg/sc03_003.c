#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_003_8017BE9C(void) {
}

void func_sc03_003_8017BEA4(void) {
}

void func_sc03_003_8017BEAC(void) {
}

void func_sc03_003_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_003_80182CBC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_003_8017EDB4(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void func_800D1EBC();
extern void (*D_sc03_003_80182CC4[])();
extern void (*D_sc03_003_80182CCC[])();
extern void (*D_sc03_003_80182CD8[])();
extern void (*D_sc03_003_80182F84[])();
extern void (*D_sc03_003_80182F98[])();
extern void (*D_sc03_003_80182FB4[])();
extern u8 D_sc03_003_80182F50;
extern void func_8016EE40();
extern u8 D_sc03_003_80182FBC;
extern void func_sc03_003_8017EF5C();
extern void (*D_sc03_003_80182FC0[])();
extern void func_sc03_003_8017EFEC();
extern void (*D_sc03_003_80182FC8[])();

void func_sc03_003_8017BEBC(u8 *arg0) {
    D_sc03_003_80182CBC[AF(arg0, u16, 2)]();
}

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();


extern void func_8012A110();
void func_sc03_003_8017EDDC(void);
extern void func_80154150();
extern void func_80171990();
extern void func_80171928();
extern s32 func_sc03_003_8017EEB4();
extern void func_sc03_003_8017EC64();
extern u8 D_sc03_003_801830D8;
extern s32 D_sc03_003_8018FB78;
extern s32 func_801399F0();
extern void func_80139914();
extern s32 func_8013767C();
extern u8 D_sc03_003_8018310C;
extern u8 D_800D4BE0;
extern void func_80154274();
extern void func_801477E8();
extern void func_80148038();
extern void func_80147460();
extern s32 func_80161450();
extern u8 D_80126948;
extern s32 D_80126954;
extern s32 D_8012695C;
extern s16 D_80126968;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 D_80126976;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void func_8012A094();
extern void func_8012A018();
extern u8 D_80126E60;
extern s32 D_80126E6C;
extern s32 D_80126E74;
extern s16 D_80126E80;
extern s16 D_80126E82;
extern s16 D_80126E84;
extern s16 D_80126E8E;
extern s16 D_80126E90;
extern s16 D_80126E92;
extern void func_8012A048();
extern s32 func_8012A100();
extern s16 D_80126942;
extern s16 D_80126944;
extern void func_8012AD50();

INCLUDE_ASM("asm/stg/sc03_003/nonmatchings/sc03_003", func_sc03_003_8017BEF8);

INCLUDE_ASM("asm/stg/sc03_003/nonmatchings/sc03_003", func_sc03_003_8017BFA4);

INCLUDE_ASM("asm/stg/sc03_003/nonmatchings/sc03_003", func_sc03_003_8017C014);

INCLUDE_ASM("asm/stg/sc03_003/nonmatchings/sc03_003", func_sc03_003_8017C3EC);

INCLUDE_ASM("asm/stg/sc03_003/nonmatchings/sc03_003", func_sc03_003_8017C490);

s32 func_sc03_003_8017C688(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    ReadGeomOffset((s32) &sp10, (s32) &sp14);
    SetGeomOffset(0, 0);
    RotTransPers(arg0, arg1, (s32) &sp18, (s32) &sp1C);
    return SetGeomOffset(sp10, sp14);
}

INCLUDE_ASM("asm/stg/sc03_003/nonmatchings/sc03_003", func_sc03_003_8017C6F4);

INCLUDE_ASM("asm/stg/sc03_003/nonmatchings/sc03_003", func_sc03_003_8017D5C0);

s32 func_sc03_003_8017E4A0(u8 *arg0) {
    func_sc03_003_8017EDB4();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_003_8017E4E4(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

s32 func_sc03_003_8017E508(u8 *arg0) {
    func_8012A110();
    func_sc03_003_8017EDDC();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_003_8017E550(u8 *arg0) {
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

void func_sc03_003_8017E5CC(void) {
    func_800D1EBC();
}

s32 func_sc03_003_8017E5EC(u8 *arg0) {
    func_8012A110();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_003_8017E62C(u8 *arg0) {
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

void func_sc03_003_8017E6A8(void) {
    func_800D1EBC();
}

void func_sc03_003_8017E6C8(u8 *arg0) {
    D_sc03_003_80182CC4[AF(arg0, u8, 0x15)]();
}

void func_sc03_003_8017E704(u8 *arg0) {
    D_sc03_003_80182CCC[AF(arg0, u8, 0x15)]();
}

void func_sc03_003_8017E740(u8 *arg0) {
    D_sc03_003_80182CD8[AF(arg0, u8, 0x15)]();
}

void func_sc03_003_8017E77C(u8 *arg0) {
    D_sc03_003_80182F84[AF(arg0, u8, 0x216)]();
}

void func_sc03_003_8017E7B8(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xC00;
    EndScene();
    func_80154150((s32) arg0, 0x27);
    AF(arg0, s32, 0x200) = 0x80;
    func_80171990((s32) arg0);
}

void func_sc03_003_8017E808(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, s16, 0xB8) = 0;
        AF(arg0, s32, 0x200) = 0x10;
        func_80171990((s32) arg0, arg1);
    }
}

INCLUDE_ASM("asm/stg/sc03_003/nonmatchings/sc03_003", func_sc03_003_8017E844);

void func_sc03_003_8017E8E8(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0x74) = 0x1000;
    AF(arg0, s16, 0x72) = 0x1000;
    AF(arg0, s16, 0x70) = 0x1000;
    AF(arg0, s32, 0x200) = 0x10;
    func_80171990((s32) arg0, arg1);
}

void func_sc03_003_8017E91C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        func_80171928((s32) arg0);
    }
}

void func_sc03_003_8017E950(u8 *arg0) {
    D_sc03_003_80182F98[AF(arg0, u8, 0x216)]();
}

void func_sc03_003_8017E98C(u8 *arg0) {
    func_sc03_003_8017EEB4();
    AF(arg0, s32, 0x200) = 8;
    AF(arg0, s32, 0x204) = 0x100000;
    func_80171990((s32) arg0);
}

void func_sc03_003_8017E9CC(u8 *arg0) {
    s32 temp_v0;

    func_sc03_003_8017EC64();
    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        func_80171990((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_003/nonmatchings/sc03_003", func_sc03_003_8017EA10);

INCLUDE_ASM("asm/stg/sc03_003/nonmatchings/sc03_003", func_sc03_003_8017EA88);

void func_sc03_003_8017EADC(u8 *arg0) {
    if (D_sc03_003_8018FB78 == 0) {
        func_sc03_003_8017EC64();
        if ((AF(arg0, u16, 0xB8) & 0x8000) && (func_801399F0(AF(arg0, s32, 0x198)) != 0)) {
            func_80139914(AF(arg0, s32, 0x198));
            AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc03_003_801830D8);
            AF(arg0, u16, 0xB8) = (u16) AF(arg0, u16, 0xBA);
            func_80171990((s32) arg0);
        }
    }
}

void func_sc03_003_8017EB6C(u8 *arg0) {
    if ((D_sc03_003_8018FB78 == 0) && (AF(arg0, u16, 0xB8) & 0x8000) && (func_801399F0(AF(arg0, s32, 0x198)) != 0)) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = func_8013767C((s32) &D_sc03_003_8018310C);
        AF(arg0, u16, 0xB8) = (u16) AF(arg0, u16, 0xBA);
        func_80171990((s32) arg0);
    }
}

void func_sc03_003_8017EBF4(u8 *arg0) {
    if ((D_sc03_003_8018FB78 == 0) && (AF(arg0, u16, 0xB8) & 0x8000) && (func_801399F0(AF(arg0, s32, 0x198)) != 0)) {
        func_80139914(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        func_80171928((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_003/nonmatchings/sc03_003", func_sc03_003_8017EC64);

void func_sc03_003_8017ECBC(u8 *arg0) {
    D_sc03_003_80182FB4[AF(arg0, u8, 0x216)]();
}

void func_sc03_003_8017ECF8(u8 *arg0) {
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    func_80154274((s32) arg0, (s32) &D_800D4BE0);
    func_801477E8((s32) arg0, -0x120000);
    func_80171990((s32) arg0);
}

void func_sc03_003_8017ED44(s32 arg0) {
    func_80148038(arg0, 0x1A000);
    func_80147460(arg0);
    if (func_80161450(arg0) & 5) {
        BeginScene(arg0);
        if (D_sc03_003_8018FB78 == 0) {
            func_80171928(arg0);
        }
    }
}

void func_sc03_003_8017EDB4(void) {
    func_8016EE40((s32) &D_sc03_003_80182F50, 0x01000000);
}

void func_sc03_003_8017EDDC(void) {
    func_8016EE40((s32) &D_sc03_003_80182FBC, 0x01000000);
}

void func_sc03_003_8017EE04(void) {
    D_80126954 = 0x1F4;
    D_8012695C = 0x384;
    D_80126968 = 0x238;
    D_8012696A = 0x600;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    func_8012A094((s32) &D_80126948);
    func_8012A018((s32) func_sc03_003_8017EF5C, 0);
    func_sc03_003_8017EF5C((s32) &D_80126948);
    func_8012A018((s32) func_sc03_003_8017EF5C, 1);
}

s32 func_sc03_003_8017EEB4(void) {
    D_80126E6C = 0x1F4;
    D_80126E74 = 0x320;
    D_80126E80 = 0xAA;
    D_80126E82 = 0x400;
    D_80126E84 = 0;
    D_80126E8E = 0;
    D_80126E90 = -0x32;
    D_80126E92 = 0;
    func_8012A094((s32) &D_80126E60);
    func_8012A048((s32) &D_80126E60, (s32) func_sc03_003_8017EF5C, 1);
    func_sc03_003_8017EF5C((s32) &D_80126E60);
    return func_8012A100(1);
}

void func_sc03_003_8017EF5C(s32 arg0) {
    D_sc03_003_80182FC0[AF(arg0, u8, 4)]();
}

void func_sc03_003_8017EF98(s32 arg0) {
    func_sc03_003_8017EFEC(arg0);
}

void func_sc03_003_8017EFB8(void) {
    D_80126942 = -0xC1;
    D_80126944 = 0;
    func_sc03_003_8017EFEC();
}

INCLUDE_ASM("asm/stg/sc03_003/nonmatchings/sc03_003", func_sc03_003_8017EFEC);

s32 func_sc03_003_8017F198(void) {
    return 0x87;
}

void func_sc03_003_8017F1A0(u8 *arg0) {
    D_sc03_003_80182FC8[AF(arg0, u16, 2)]();
}

void func_sc03_003_8017F1DC(s32 arg0) {
    D_sc03_003_8018FB78 = 0;
    func_8012AD50(arg0);
}

INCLUDE_ASM("asm/stg/sc03_003/nonmatchings/sc03_003", func_sc03_003_8017F204);

void func_sc03_003_8017F270(void) {
}
