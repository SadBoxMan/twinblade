#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_011_8017BE9C(void) {
}

void func_sc06_011_8017BEA4(void) {
}

void func_sc06_011_8017BEAC(void) {
}

void func_sc06_011_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_011_801840BC[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_011_8017D24C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_011_801840C4[])();
void func_sc06_011_8017F278(void);
extern void (*D_sc06_011_801840CC[])();
void func_sc06_011_8017D274(void);
extern void func_800D1EBC();
extern void (*D_sc06_011_801840D8[])();
extern u8 D_sc06_011_801840E4;
extern void func_8016EE40();
extern u8 D_sc06_011_801840E8;
extern void func_sc06_011_8017D594();
extern void (*D_sc06_011_801840F0[])();
extern void (*D_sc06_011_80184170[])();
extern void (*D_sc06_011_801841C0[])();
extern void (*D_sc06_011_8018420C[])();
extern void (*D_sc06_011_80184258[])();
extern void (*D_sc06_011_80184288[])();
extern void (*D_sc06_011_8019E1EC[])();
extern void (*D_sc06_011_8019E268[])();
extern void (*D_sc06_011_8019E2A4[])();
extern u8 D_sc06_011_801A077C;
extern void (*D_sc06_011_801A0794[])();
extern u8 D_sc06_011_801A079C;
extern void (*D_sc06_011_801A07A8[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc06_011_80184118[];
extern s32 func_8013B7F4();
extern u8 D_sc06_011_801A89A0;
extern u8 D_sc06_011_801A8B90;
extern u8 D_sc06_011_801A8C18;
extern s32 func_8012CBF4();
extern void func_sc06_011_8017F8F8();
extern s32 func_8012BEE8();
extern void func_8012AD80();
extern void func_80143B6C();

extern void func_8002AC00();
extern void func_8012C098();
extern void func_8002A04C();
extern s32 func_8012BCCC();
extern s32 D_sc06_011_801A0858;
extern void func_8012E88C();
extern s32 func_sc06_011_8017FE34();

extern s32 func_8012C354();
extern u8 D_sc06_011_8018077C;
extern u8 D_sc06_011_8019E1B8;
extern u8 D_sc06_011_8019E270;
extern void func_sc06_011_8017E5D0();

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
extern u8 D_sc06_011_8018413C;
extern void func_8001D0E8();
extern u8 D_sc06_011_8018418C;
extern u8 D_sc06_011_801841D8;
extern s32 func_8012C588();
extern u8 D_sc06_011_80184224;
extern s32 func_8014CB2C();
extern s32 func_sc06_011_8017F6CC();
extern void func_80171928();
extern void func_80171990();
extern u8 D_sc06_011_801A085C;
extern void func_8012B2CC();
extern void func_8012B200();
extern void func_8012B178();
extern void func_80131E00();


extern u8 D_sc06_011_801A8CE8;

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017BEBC);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017CD9C);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017CDE4);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017CE2C);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017CE74);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017CEC4);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017CF18);

void func_sc06_011_8017CF60(u8 *arg0) {
    D_sc06_011_801840BC[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_011_8017CF9C(u8 *arg0) {
    func_sc06_011_8017D24C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_011_8017CFE0(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_011_8017D004(u8 *arg0) {
    D_sc06_011_801840C4[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_011_8017D040(u8 *arg0) {
    func_sc06_011_8017F278();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

void func_sc06_011_8017D084(u8 *arg0) {
    D_sc06_011_801840CC[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_011_8017D0C0(u8 *arg0) {
    func_sc06_011_8017D274();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_011_8017D100(u8 *arg0) {
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

void func_sc06_011_8017D17C(void) {
    func_800D1EBC();
}

void func_sc06_011_8017D19C(u8 *arg0) {
    D_sc06_011_801840D8[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_011_8017D1D8(u8 *arg0) {
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

void func_sc06_011_8017D24C(void) {
    func_8016EE40((s32) &D_sc06_011_801840E4, 0x01000000);
}

void func_sc06_011_8017D274(void) {
    func_8016EE40((s32) &D_sc06_011_801840E8, 0x01000000);
}

void func_sc06_011_8017D29C(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x400;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_011_8017D594, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_011_8017D594((s32) &D_80126948);
}

void func_sc06_011_8017D334(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x400;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_011_8017D594, 1);
    func_8012A094((s32) &D_80126948);
    func_sc06_011_8017D594((s32) &D_80126948);
}

void func_sc06_011_8017D3CC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x400;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_011_8017D594, 2);
    func_8012A094((s32) &D_80126948);
    func_sc06_011_8017D594((s32) &D_80126948);
}

void func_sc06_011_8017D464(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x400;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_011_8017D594, 3);
    func_8012A094((s32) &D_80126948);
    func_sc06_011_8017D594((s32) &D_80126948);
}

void func_sc06_011_8017D4FC(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x400;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_011_8017D594, 4);
    func_8012A094((s32) &D_80126948);
    func_sc06_011_8017D594((s32) &D_80126948);
}

void func_sc06_011_8017D594(s32 arg0) {
    D_sc06_011_801840F0[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017D5D0);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017D670);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017D710);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017D7B0);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017D850);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017D8F0);

s32 func_sc06_011_8017DA88(s32 arg0) {
    return func_8013B7F4(D_sc06_011_80184118[arg0], 0);
}

void func_sc06_011_8017DAB8(u8 *arg0) {
    D_sc06_011_80184170[AF(arg0, u16, 2)]();
}

void func_sc06_011_8017DAF4(u8 *arg0) {
    D_sc06_011_801841C0[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017DB30);

void func_sc06_011_8017DD9C(u8 *arg0) {
    D_sc06_011_8018420C[AF(arg0, u16, 2)]();
}

void func_sc06_011_8017DDD8(u8 *arg0) {
    D_sc06_011_80184258[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017DE14);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017DF7C);

void func_sc06_011_8017E0FC(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc06_011_8018413C) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_011_8018077C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8001D0E8(AF(arg0, s32, 0x20), 0x400, 0x400);
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_011_8017E174(void) {
}

void func_sc06_011_8017E17C(u8 *arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xA) + 0x10;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((s16) temp_v0 >= -0x1C0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
        func_8002D4C8(4, 0xA66, arg2);
        func_8002D4C8(0xA67, 0);
    }
}

void func_sc06_011_8017E1DC(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc06_011_8018418C) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_011_8018077C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        func_8001D0E8(AF(arg0, s32, 0x20), 0x400, 0x400);
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_011_8017E254(void) {
}

void func_sc06_011_8017E25C(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc06_011_801841D8) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_011_8018077C);
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        temp_v0 = func_8012C588(0x2BE, arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        AF(temp_v0, s16, 6) = -0x480;
        AF(AF(arg0, s32, 0x6C), s16, 0xA) = -0x2E0;
        AF(AF(arg0, s32, 0x6C), s16, 0xE) = 0x440;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_011_8017E2F4(s32 arg0) {
    s32 temp_v0;

    if (func_8012C354(arg0, (s32) &D_sc06_011_80184224) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_011_8018077C);
        AF(arg0, s16, 0xAE) = -1;
        AF(arg0, s16, 0xFC) = 4;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        temp_v0 = func_8012C588(0x2BD, arg0);
        AF(arg0, s32, 0x6C) = temp_v0;
        AF(temp_v0, s16, 6) = -0x240;
        AF(AF(arg0, s32, 0x6C), s16, 0xA) = -0x440;
        AF(AF(arg0, s32, 0x6C), s16, 0xE) = 0xA80;
        AF(arg0, u8, 0x75) = 8;
    }
}

void func_sc06_011_8017E394(u8 *arg0) {
    if (((func_8014CB2C() & 0x7FFFFFFF) == 2) && (AF(arg0, u8, 0x74) != 0)) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0xFE) = 0;
        AF(arg0, s16, 0x8A) = (s16) (AF(arg0, u16, 0xA) + 0x40);
    }
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017E3F8);

void func_sc06_011_8017E4A8(void) {
}

void func_sc06_011_8017E4B0(u8 *arg0) {
    D_sc06_011_80184288[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017E4EC);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017E534);

void func_sc06_011_8017E5C0(void) {
}

s32 func_sc06_011_8017E5C8(void) {
    return 0x6E;
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017E5D0);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017E9F4);

void func_sc06_011_8017ED68(u8 *arg0) {
    D_sc06_011_8019E1EC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017EDA4);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017EEEC);

void func_sc06_011_8017F09C(u8 *arg0) {
    D_sc06_011_8019E268[AF(arg0, u16, 2)]();
}

void func_sc06_011_8017F0D8(u8 *arg0) {
    D_sc06_011_8019E2A4[AF(arg0, u16, 2)]();
}

void func_sc06_011_8017F114(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_011_8019E1B8) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
        SetScript(arg0, (s32) &D_sc06_011_8018077C);
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

void func_sc06_011_8017F1BC(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_011_8019E270) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_011_8018077C);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xAAA;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xAAA;
    }
}

void func_sc06_011_8017F240(u8 *arg0) {
    func_sc06_011_8017E5D0();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

void func_sc06_011_8017F278(void) {
    func_8016EE40((s32) &D_sc06_011_801A077C, 0x01000000);
}

void func_sc06_011_8017F2A0(u8 *arg0) {
    D_sc06_011_801A0794[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017F2DC);

void func_sc06_011_8017F324(s32 arg0) {
    if (func_sc06_011_8017F6CC() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171928(arg0);
    }
}

void func_sc06_011_8017F364(void) {
    func_8016EE40((s32) &D_sc06_011_801A079C, 0x01000000);
}

void func_sc06_011_8017F38C(u8 *arg0) {
    D_sc06_011_801A07A8[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017F3C8);

void func_sc06_011_8017F4D0(s32 arg0) {
    if (func_sc06_011_8017F6CC() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171990(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017F510);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017F5F0);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017F6CC);

void func_sc06_011_8017F760(s32 arg0) {
    u8 temp_v1;

    if (AF(arg0, s16, 0x100) == 0) {
        func_8002A04C(arg0);
    }
    temp_v1 = AF(arg0, u8, 0xC1);
    if ((temp_v1 == 5) || (temp_v1 == 0xD) || (temp_v1 == 0xB) || (temp_v1 == 0xE)) {
        func_8002AC00(7);
    }
    func_8012C098(arg0);
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017F7D4);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017F8AC);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017F8F8);

s32 func_sc06_011_8017FA00(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc06_011_801A89A0);
}

void func_sc06_011_8017FA30(s32 arg0) {
    AF(arg0, s16, 2) = 3;
    if (AF(arg0, u16, 0x86) & 2) {
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s32, 0x1C) = 0x28;
        SetScript(arg0, (s32) &D_sc06_011_801A8B90);
        AF(arg0, s16, 0xFE) = 0;
        return;
    }
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc06_011_801A8C18);
    AF(arg0, s32, 0x1C) = 0x19;
    AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017FAB4);

void func_sc06_011_8017FC7C(s32 arg0) {
    AF(arg0, s16, 2) = 4;
    AF(arg0, s16, 0x34) = 0;
    SetScript(arg0, (s32) &D_sc06_011_801A8CE8);
    AF(arg0, s32, 0x1C) = 0x14;
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017FCC0);

s32 func_sc06_011_8017FE34(s32 arg0) {
    s32 *var_s1;
    s32 temp_v0;

    var_s1 = &D_sc06_011_801A085C;
    if (!(AF(arg0, u16, 0x70) & 0x2000)) {
        var_s1 = &D_sc06_011_801A085C + 0xC;
    }
    AF(arg0, s16, 2) = 7;
    SetScript(arg0, AF(var_s1, s32, 0));
    func_8012B2CC(arg0);
    func_8012B200(arg0);
    func_8012B178(arg0, AF(var_s1, s32, 4));
    temp_v0 = AF(var_s1, s32, 8);
    AF(arg0, s32, 0x1C) = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017FEB4);

void func_sc06_011_8017FF58(s32 arg0, s32 arg1, s32 arg2) {
    func_8002D4C8(0x6AA, 0, arg2);
}

void func_sc06_011_8017FF7C(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, u8, 0x5E) == 0xC) {
        func_8002D4C8(0x9DA, 0, arg2);
    }
}

void func_sc06_011_8017FFAC(s32 arg0) {
    func_8012CBF4(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_sc06_011_8017F8F8(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_8017FFF0);

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_80180098);

void func_sc06_011_8018015C(s32 arg0, s32 arg1) {
    if (func_8012BCCC(arg0, arg1) < D_sc06_011_801A0858) {
        func_8012E88C(arg0);
        func_sc06_011_8017FE34(arg0);
    }
}

void func_sc06_011_801801AC(s32 arg0) {
    u16 temp_v0;

    func_8012AD80(arg0);
    if (AF(arg0, u16, 0x70) & 0x2000) {
        temp_v0 = AF(arg0, u16, 0xFE) - 1;
        AF(arg0, u16, 0xFE) = temp_v0;
        if ((temp_v0 << 0x10) <= 0) {
            func_80143B6C(arg0, 0);
            AF(arg0, u16, 0xFE) = 8U;
        }
    }
    if (func_8012BEE8(arg0) != 0) {
        AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
        AF(arg0, s16, 2) = 3;
        if (AF(arg0, u16, 0x86) & 2) {
            AF(arg0, s16, 0x34) = 1;
            AF(arg0, s32, 0x1C) = 0x28;
            SetScript(arg0, (s32) &D_sc06_011_801A8B90);
            AF(arg0, u16, 0xFE) = 0U;
            return;
        }
        AF(arg0, s16, 0x34) = 0;
        SetScript(arg0, (s32) &D_sc06_011_801A8C18);
        AF(arg0, s32, 0x1C) = 0x19;
        AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
    }
}

void func_sc06_011_80180298(u8 *arg0) {
    s32 temp_v0;
    u8 temp_v1;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        if (AF(arg0, s16, 0x100) == 0) {
            func_8002A04C();
        }
        temp_v1 = AF(arg0, u8, 0xC1);
        if ((temp_v1 == 5) || (temp_v1 == 0xD) || (temp_v1 == 0xB) || (temp_v1 == 0xE)) {
            func_8002AC00(7);
        }
        func_8012C098((s32) arg0);
        return;
    }
    temp_v0 = func_8012CBF4((s32) arg0);
    if (temp_v0 & 0x2000) {
        if (temp_v0 & 0x1000) {
            func_80131E00((s32) arg0, 0x12);
            return;
        }
        func_sc06_011_8017F8F8((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc06_011/nonmatchings/sc06_011", func_sc06_011_80180360);
