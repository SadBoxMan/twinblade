#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc05_008_8017BE9C(void) {
}

void func_sc05_008_8017BEA4(void) {
}

void func_sc05_008_8017BEAC(void) {
}

void func_sc05_008_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc05_008_801863F0[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc05_008_8017D014(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc05_008_801863F8[])();
extern void func_800D1EBC();
extern u8 D_sc05_008_80186434;
extern void func_8016EE40();
extern u8 D_sc05_008_80186438;
extern void func_sc05_008_8017D8C4();
extern void (*D_sc05_008_801864DC[])();
extern void (*D_sc05_008_80186524[])();
extern void func_8012AD50();
extern void (*D_sc05_008_8018653C[])();
extern void (*D_sc05_008_8018654C[])();
extern void (*D_sc05_008_801865A4[])();
extern void (*D_sc05_008_80186614[])();
extern void (*D_sc05_008_801866B8[])();
extern void (*D_sc05_008_80186838[])();

extern s32 D_sc05_008_801A12E4;

extern u8 D_sc05_008_80186428;
extern void (*D_sc05_008_8018644C[])();
extern s32 func_80019198();
extern void func_80019064();
extern void func_80171990();
extern void func_800291A0();
extern void func_8016F288();
extern u8 D_sc05_008_801863C4;
extern void func_800D1724();
extern void (*D_sc05_008_80186474[])();
extern void (*D_sc05_008_80186494[])();
extern u16 D_800B99DA;
extern s32 func_80015978();
extern s32 func_8012BEE8();
extern void func_sc05_008_8017EFE4();
extern s32 func_8012E544();
extern void func_8012C098();
extern u8 D_sc05_008_80186578;
extern u8 D_sc05_008_801865AC;
extern void func_8001CC3C();
extern s32 func_sc05_008_8017F20C();
extern s32 func_80015954();
extern u8 D_sc05_008_80199608;
extern s32 func_8012C1B8();
extern void func_sc05_008_8018227C();
extern u8 D_sc05_008_8019C678;
extern s32 func_sc05_008_80182240();
extern void func_sc05_008_8017FF80();
extern u8 D_sc05_008_801963AC;
extern void func_8012C588();
extern s32 func_sc05_008_80182334();
extern u8 D_sc05_008_80196E84;
extern u8 D_sc05_008_8019795C;
extern u8 D_sc05_008_80197DEC;
extern u8 D_sc05_008_8019827C;
extern u8 D_sc05_008_80199CD0;
extern s32 func_800291B4();
extern u8 D_sc05_008_80199E18;
extern u8 D_sc05_008_8019A030;
extern u8 D_sc05_008_8019A248;
extern u8 D_sc05_008_8019A390;
extern u8 D_sc05_008_8019A4D8;
extern u8 D_sc05_008_8019B3D0;
extern u8 D_sc05_008_8019BA68;
extern u8 D_sc05_008_8019C798;
extern u8 D_sc05_008_8019C8B8;
extern void func_80128ED8();
extern void func_801292C8();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();
extern void func_sc05_008_801823B8();
extern u16 D_80126980;

extern s32 func_sc05_008_80182478();

extern u8 D_80126B58;
extern s32 D_8012697C;
extern void func_8012AD80();
extern s32 func_801291C0();
extern s32 func_8001D074();
extern void func_8001CF00();
extern s32 func_8001CFDC();
extern void func_8001C2C4();

extern u8 D_80126C01;
extern s32 func_80148800();
extern s32 func_80148818();
extern s32 func_8014880C();
extern s32 func_80012DBC();

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017BEBC);

void func_sc05_008_8017CD9C(u8 *arg0) {
    D_sc05_008_801863F0[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_008_8017CDD8(u8 *arg0) {
    func_sc05_008_8017D014();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_008_8017CE1C(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc05_008_8017CE40(u8 *arg0) {
    D_sc05_008_801863F8[AF(arg0, u8, 0x15)]();
}

s32 func_sc05_008_8017CE7C(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc05_008_8017CE98(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1C, 0, arg2);
        func_8001BFD0();
        func_8002D4C8(4, 0x70B);
        func_8002D4C8(0x1D, 0);
        func_800D0C48(1);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc05_008_8017CF20(void) {
    func_800D1EBC();
}

void func_sc05_008_8017CF40(void) {
    func_8016EE40((s32) &D_sc05_008_80186434, 0x01000000);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017CF68);

void func_sc05_008_8017D014(void) {
    func_8016EE40((s32) &D_sc05_008_80186438, 0x01000000);
}

void func_sc05_008_8017D03C(u8 *arg0) {
    D_sc05_008_8018644C[AF(arg0, u8, 0x216)]();
    if (func_80019198() == 0) {
        func_80019064((s32) &D_sc05_008_80186428);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D098);

void func_sc05_008_8017D1E0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        func_80171990((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D214);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D2AC);

void func_sc05_008_8017D378(s32 arg0) {
    func_800291A0(0xE1, 0);
    func_8016F288();
    D_sc05_008_801A12E4 = 0;
    func_80171990(arg0);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D3C0);

void func_sc05_008_8017D434(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        func_800D1724((s32) &D_sc05_008_801863C4);
        func_80171990((s32) arg0);
    }
}

void func_sc05_008_8017D484(void) {
}

void func_sc05_008_8017D48C(u8 *arg0) {
    D_sc05_008_80186474[AF(arg0, u8, 0x216)]();
    if (func_80019198() == 0) {
        func_80019064((s32) &D_sc05_008_80186428);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D4E8);

void func_sc05_008_8017D60C(u8 *arg0) {
    D_sc05_008_80186494[AF(arg0, u8, 0x216)]();
    if (func_80019198() == 0) {
        func_80019064((s32) &D_sc05_008_80186428);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D668);

void func_sc05_008_8017D78C(void) {
    func_80171990((s32) &D_80126B58);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D7B4);

void func_sc05_008_8017D8C4(s32 arg0) {
    D_sc05_008_801864DC[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017D900);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017DAB8);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017DC50);

void func_sc05_008_8017DE68(u8 *arg0) {
    D_sc05_008_80186524[AF(arg0, u16, 2)]();
}

void func_sc05_008_8017DEA4(s32 arg0, s32 arg1) {
    func_8012AD50(arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017DEC4);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017DF68);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017E230);

void func_sc05_008_8017E318(u8 *arg0) {
    D_sc05_008_8018653C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017E354);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017E464);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017E6A4);

void func_sc05_008_8017E840(void) {
    D_sc05_008_801A12E4 = 0;
}

void func_sc05_008_8017E850(s32 arg0, s32 arg1) {
    s32 o;
    s16 *p;
    s16 *q;
    u8 *g;
    s16 a;
    s16 b;
    s16 n1;
    s16 n2;

    g = &D_80126B58;
    o = AF(arg0, s32, 0x20);
    p = (s16 *)(D_8012697C + (D_80126980 + 8) * 6);
    q = p + 3;
    switch (D_80126C01) {
    case 0x41:
        arg1 = func_80148800(g);
        break;
    case 0x53:
    case 0x73:
        a = AF(arg0, u16, 0xE0);
        b = AF(arg0, u16, 0xE2);
        n1 = func_80148818(g) & 0xFF;
        AF(arg0, u16, 0xE0) = n1;
        n2 = func_8014880C(g);
        AF(arg0, u16, 0xE2) = n2 & 0xFF;
        n2 &= 0xFF;
        arg1 = 0;
        if (a == 0x80 && n1 != a) {
            arg1 = 0x1000;
            if (n1 >= 0x80) {
                arg1 = 0x4000;
            }
        }
        if (b == 0x80 && n2 != b) {
            if (n2 < 0x80) {
                arg1 |= 0x8000;
            } else {
                arg1 |= 0x2000;
            }
        }
        break;
    }
    if (arg1 & 0x8000) {
        D_sc05_008_801A12E4++;
    }
    if (arg1 & 0x2000) {
        D_sc05_008_801A12E4--;
    }
    if (D_sc05_008_801A12E4 < -2) {
        D_sc05_008_801A12E4 = -2;
    }
    if (D_sc05_008_801A12E4 > 2) {
        D_sc05_008_801A12E4 = 2;
    }
    AF(o, s16, 0x14) = func_80012DBC(AF(o, s16, 0x14), (s16)(D_sc05_008_801A12E4 * 455), 4, 1);
    AF(o, s16, 0x10) = ratan2(p[1] - q[1], q[2] - p[2]);
    AF(o, s16, 0x12) = ratan2(q[0] - p[0], q[2] - p[2]);
}

s32 func_sc05_008_8017EAB0(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 var_v0;

    var_v0 = D_800B99DA & 7;
    if (var_v0 == 0) {
        var_v0 = func_80015978(arg0 + 4, (s32) &sp10);
    }
    return var_v0;
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017EAE4);

void func_sc05_008_8017EB7C(u8 *arg0) {
    D_sc05_008_8018654C[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017EBB8);

void func_sc05_008_8017EEAC(u8 *arg0) {
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if (func_8012BEE8() != 0) {
        func_8012AD50((s32) arg0);
    } else {
        AF(temp_s1, u16, 0x10) = (u16) (AF(temp_s1, u16, 0x10) + AF(arg0, u16, 0xFC));
        AF(temp_s1, u16, 0x14) = (u16) (AF(temp_s1, u16, 0x14) + AF(arg0, u16, 0xFE));
        if (AF(arg0, s32, 0xDC) != 0) {
            AF(temp_s1, u16, 0x12) = (u16) (AF(temp_s1, u16, 0x12) + AF(arg0, u16, 0xFC));
        }
    }
    func_sc05_008_8017EFE4((s32) arg0);
}

void func_sc05_008_8017EF50(u8 *arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFC));
    AF(temp_a0, u16, 0x14) = (u16) (AF(temp_a0, u16, 0x14) + AF(arg0, u16, 0xFE));
    AF(arg0, s32, 0x4C) = (s32) (AF(arg0, s32, 0x4C) - 0x800);
    func_sc05_008_8017EFE4((s32) arg0);
    temp_v0 = func_8012E544(0x204);
    if ((temp_v0 != 0) && (AF(arg0, s16, 0xE) < (AF(temp_v0, s16, 0xE) - 0x80))) {
        func_8012C098((s32) arg0);
    }
}

void func_sc05_008_8017EFE4(s32 arg0) {
    s32 temp_s2;
    s32 temp_s3;
    void *temp_s1;

    temp_s3 = arg0 + 0x88;
    temp_s2 = arg0 + 4;
    temp_s1 = D_8012697C + ((D_80126980 + 8) * 6);
    func_80015954(temp_s3, temp_s2);
    func_8012AD80(arg0);
    func_80015978(temp_s2, temp_s3);
    AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + AF(temp_s1, u16, 0));
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + AF(temp_s1, u16, 2));
    AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) + AF(temp_s1, u16, 4));
}

void func_sc05_008_8017F0A8(u8 *arg0) {
    D_sc05_008_801865A4[AF(arg0, u16, 2)]();
}

void func_sc05_008_8017F0E4(u8 *arg0) {
    s32 temp_s1;
    void *temp_v0;

    temp_s1 = AF(arg0, s32, 0x20);
    func_8001CC3C(temp_s1, (s32) &D_sc05_008_80186578, 0x280, 0x1C0);
    AF(temp_s1, u8, 0x27) = 0x59;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x58000000);
    temp_v0 = (AF(arg0, s32, 0x2C) * 8) + &D_sc05_008_801865AC;
    AF(arg0, s32, 0x2C) = (s32) temp_v0;
    AF(temp_s1, u16, 0x12) = (u16) AF(temp_v0, u16, 6);
    func_sc05_008_8017F20C((s32) arg0);
    AF(arg0, s32, 0x30) = 0;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F17C);

s32 func_sc05_008_8017F20C(s32 arg0) {
    s32 sp10;

    FaceHelper(AF(arg0, s32, 0x1C), AF(arg0, s32, 0x2C), (s32) &sp10);
    return func_80015954((s32) &sp10, arg0 + 4);
}

void func_sc05_008_8017F24C(u8 *arg0) {
    D_sc05_008_80186614[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F288);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F438);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F554);

void func_sc05_008_8017F63C(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8017F65C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80199608);
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F6A4);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F724);

void func_sc05_008_8017F80C(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8017F82C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80199608);
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F874);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017F8F4);

void func_sc05_008_8017F9DC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8017F9FC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80199608);
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017FA44);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017FAC4);

void func_sc05_008_8017FBAC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8017FBCC(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80199608);
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017FC14);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017FC94);

void func_sc05_008_8017FD7C(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8017FD9C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80199608);
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017FDE4);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017FE64);

void func_sc05_008_8017FF10(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8017FF30(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_80182240((s32) arg0, (s32) &D_sc05_008_8019C678);
        func_sc05_008_8017FF80((s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8017FF80);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8018000C);

void func_sc05_008_801800B8(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_801800D8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_801963AC);
        func_8012C588(0x2B2, (s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_8018012C(s32 arg0, s32 arg1, s32 arg2) {
    if (func_sc05_008_80182334(arg0, arg1, arg2) == 0) {
        func_8012C098(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180164);

void func_sc05_008_80180210(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180230);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801802EC);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801803B8);

void func_sc05_008_80180464(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80180484(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80196E84);
        func_8012C588(0x2B2, (s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_801804D8(s32 arg0, s32 arg1, s32 arg2) {
    if (func_sc05_008_80182334(arg0, arg1, arg2) == 0) {
        func_8012C098(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180510);

void func_sc05_008_801805BC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801805DC);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180698);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180764);

void func_sc05_008_80180810(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80180830(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_8019795C);
        func_8012C588(0x2B2, (s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_80180884(s32 arg0, s32 arg1, s32 arg2) {
    if (func_sc05_008_80182334(arg0, arg1, arg2) == 0) {
        func_8012C098(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801808BC);

void func_sc05_008_80180968(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80180988(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_80197DEC);
        func_8012C588(0x2B2, (s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_801809DC(s32 arg0, s32 arg1, s32 arg2) {
    if (func_sc05_008_80182334(arg0, arg1, arg2) == 0) {
        func_8012C098(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180A14);

void func_sc05_008_80180AC0(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80180AE0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_8019827C);
        func_8012C588(0x2B2, (s32) arg0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_80180B34(s32 arg0, s32 arg1, s32 arg2) {
    if (func_sc05_008_80182334(arg0, arg1, arg2) == 0) {
        func_8012C098(arg0);
    }
}

void func_sc05_008_80180B6C(u8 *arg0) {
    D_sc05_008_801866B8[AF(arg0, u16, 2)]();
}

void func_sc05_008_80180BA8(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    AF(arg0, s16, 0xFE) = 0;
    AF(arg0, s16, 0x100) = 0;
    func_8012AD50((s32) arg0, arg1);
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180BD0);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180CDC);

void func_sc05_008_80180D88(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80180DA8(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_800291B4(0xE1) & 0xFF) >= 8U) {
        func_8012C098(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C(arg0, (s32) &D_sc05_008_80199CD0);
        AF(arg0, u16, 0x88) = (u16) AF(arg0, u16, 6);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + 0x100);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_80180E30(s32 arg0, s32 arg1, s32 arg2) {
    func_sc05_008_80182334(arg0, arg1, arg2);
    if ((func_sc05_008_80182478() + 0x28) == AF(arg0, s32, 0xDC)) {
        AF(arg0, s16, 0xFE) = 0;
        func_8002D4C8(0x890, 0);
        func_8012AD50(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180E84);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80180F84);

void func_sc05_008_80181030(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80181050(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_800291B4(0xE1) & 0xFF) >= 8U) {
        func_8012C098(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C(arg0, (s32) &D_sc05_008_80199E18);
        AF(arg0, u16, 0x88) = (u16) AF(arg0, u16, 6);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - 0x100);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_801810D8(s32 arg0, s32 arg1, s32 arg2) {
    func_sc05_008_80182334(arg0, arg1, arg2);
    if ((func_sc05_008_80182478() + 0x28) == AF(arg0, s32, 0xDC)) {
        AF(arg0, s16, 0xFE) = 0;
        func_8002D4C8(0x88F, 0);
        func_8012AD50(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8018112C);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8018122C);

void func_sc05_008_801812D8(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_801812F8(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_800291B4(0xE1) & 0xFF) >= 8U) {
        func_8012C098(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C(arg0, (s32) &D_sc05_008_8019A030);
        AF(arg0, u16, 0x88) = (u16) AF(arg0, u16, 6);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + 0x100);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_80181380(s32 arg0, s32 arg1, s32 arg2) {
    func_sc05_008_80182334(arg0, arg1, arg2);
    if ((func_sc05_008_80182478() + 0x28) == AF(arg0, s32, 0xDC)) {
        AF(arg0, s16, 0xFE) = 0;
        func_8002D4C8(0x890, 0);
        func_8012AD50(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801813D4);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801814D4);

void func_sc05_008_80181580(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_801815A0(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_800291B4(0xE1) & 0xFF) >= 8U) {
        func_8012C098(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C(arg0, (s32) &D_sc05_008_8019A248);
        AF(arg0, u16, 0x88) = (u16) AF(arg0, u16, 6);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - 0x100);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_80181628(s32 arg0, s32 arg1, s32 arg2) {
    func_sc05_008_80182334(arg0, arg1, arg2);
    if ((func_sc05_008_80182478() + 0x28) == AF(arg0, s32, 0xDC)) {
        AF(arg0, s16, 0xFE) = 0;
        func_8002D4C8(0x88F, 0);
        func_8012AD50(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8018167C);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8018177C);

void func_sc05_008_80181828(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80181848(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_800291B4(0xE1) & 0xFF) >= 8U) {
        func_8012C098(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C(arg0, (s32) &D_sc05_008_8019A390);
        AF(arg0, s16, 0x88) = (s16) (AF(arg0, u16, 6) + 0x20);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + 0x100);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_801818D4(s32 arg0, s32 arg1, s32 arg2) {
    func_sc05_008_80182334(arg0, arg1, arg2);
    if ((func_sc05_008_80182478() + 0x23) == AF(arg0, s32, 0xDC)) {
        AF(arg0, s16, 0xFE) = 0;
        func_8002D4C8(0x891, 0);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_80181928(u8 *arg0, s32 arg1, s32 arg2) {
    s16 temp_v0_2;
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 6) - 0xA;
    AF(arg0, u16, 6) = temp_v0;
    if ((s16) temp_v0 < AF(arg0, s16, 0x88)) {
        temp_v0_2 = AF(arg0, s16, 0xFE);
        if (temp_v0_2 == 0) {
            AF(arg0, s16, 0xFE) = (s16) (temp_v0_2 + 1);
            func_8002D4C8(0x893, 0, arg2);
        }
        AF(arg0, u16, 6) = (u16) AF(arg0, s16, 0x88);
    }
    func_sc05_008_801823B8((s32) arg0, 1, -1);
    func_sc05_008_801823B8((s32) arg0, 1, -2);
    if (func_sc05_008_80182334((s32) arg0) == 0) {
        func_8012C098((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801819D8);

void func_sc05_008_80181A84(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80181AA4(s32 arg0) {
    s32 temp_v0;

    if ((u32) (func_800291B4(0xE1) & 0xFF) >= 8U) {
        func_8012C098(arg0);
        return;
    }
    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C(arg0, (s32) &D_sc05_008_8019A4D8);
        AF(arg0, s16, 0x88) = (s16) (AF(arg0, u16, 6) - 0x20);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) - 0x100);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_80181B30(s32 arg0, s32 arg1, s32 arg2) {
    func_sc05_008_80182334(arg0, arg1, arg2);
    if ((func_sc05_008_80182478() + 0x23) == AF(arg0, s32, 0xDC)) {
        AF(arg0, s16, 0xFE) = 0;
        func_8002D4C8(0x891, 0);
        func_8012AD50(arg0);
    }
}

void func_sc05_008_80181B84(u8 *arg0, s32 arg1, s32 arg2) {
    s16 temp_v0_2;
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 6) + 0xA;
    AF(arg0, u16, 6) = temp_v0;
    if (AF(arg0, s16, 0x88) < (s16) temp_v0) {
        temp_v0_2 = AF(arg0, s16, 0xFE);
        if (temp_v0_2 == 0) {
            AF(arg0, s16, 0xFE) = (s16) (temp_v0_2 + 1);
            func_8002D4C8(0x893, 0, arg2);
        }
        AF(arg0, u16, 6) = (u16) AF(arg0, s16, 0x88);
        AF(arg0, u16, 6) = (u16) AF(arg0, s16, 0x88);
    }
    func_sc05_008_801823B8((s32) arg0, 1, 1);
    func_sc05_008_801823B8((s32) arg0, 1, 2);
    if (func_sc05_008_80182334((s32) arg0) == 0) {
        func_8012C098((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80181C38);

void func_sc05_008_80181CE4(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80181D04(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_8019B3D0);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_80181D4C(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, s32, 0xDC) - 0xA) == D_80126980) {
        func_8002D4C8(0x88E, 0, arg2);
    }
    func_sc05_008_801823B8((s32) arg0, 2, 0);
    if (func_sc05_008_80182334((s32) arg0) == 0) {
        func_8012C098((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80181DBC);

void func_sc05_008_80181E68(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_80181E88(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_8019BA68);
        func_8012AD50((s32) arg0);
    }
}

void func_sc05_008_80181ED0(u8 *arg0, s32 arg1, s32 arg2) {
    if ((AF(arg0, s32, 0xDC) - 0xA) == D_80126980) {
        func_8002D4C8(0x88E, 0, arg2);
    }
    func_sc05_008_801823B8((s32) arg0, 3, 0);
    if (func_sc05_008_80182334((s32) arg0) == 0) {
        func_8012C098((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80181F40);

void func_sc05_008_80181FEC(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8018200C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_8019C798);
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80182054);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801820C0);

void func_sc05_008_8018216C(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0xFC) = 0;
    func_8012AD50((s32) arg0, arg1);
}

void func_sc05_008_8018218C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_8012C1B8();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_sc05_008_8018227C((s32) arg0, (s32) &D_sc05_008_8019C8B8);
        func_8012AD50((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801821D4);

s32 func_sc05_008_80182240(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_sc05_008_8018227C(arg0, arg1);
    temp_v0 = AF(temp_s0, s32, 4) | 0x40;
    AF(temp_s0, s32, 4) = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_8018227C);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80182334);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_801823B8);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80182478);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80182490);

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80182560);

void func_sc05_008_8018264C(void) {
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80182654);

void func_sc05_008_80182694(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = func_801291C0();
    if (temp_v0 != 0) {
        if (arg1 >= 0) {
            if (arg1 < 2) {
                temp_v0_2 = func_8001D074(0x7E, 0x100);
                AF(temp_v0, s32, 0x20) = temp_v0_2;
                if (temp_v0_2 != 0) {
                    func_8001CF00(temp_v0_2);
                    goto block_8;
                }
                goto block_9;
            }
            if (arg1 < 4) {
                temp_v0_3 = func_8001CFDC(0x86, 0xC0);
                AF(temp_v0, s32, 0x20) = temp_v0_3;
                if (temp_v0_3 != 0) {
                    func_8001C2C4(temp_v0_3);
block_8:
                    AF(temp_v0, s32, 0x2C) = arg1;
                    AF(temp_v0, s16, 0) = 0x5A;
                    func_80015954(arg0, temp_v0 + 4);
                    return;
                }
            }
            goto block_9;
        }
block_9:
        func_801292C8(temp_v0);
    }
}

void func_sc05_008_80182758(u8 *arg0) {
    D_sc05_008_80186838[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc05_008/nonmatchings/sc05_008", func_sc05_008_80182794);

void func_sc05_008_801828E0(u8 *arg0) {
    s32 temp_v0;

    func_80128ED8(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24));
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_801292C8((s32) arg0);
    }
}

void func_sc05_008_8018292C(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        func_801292C8((s32) arg0);
    }
}

s32 func_sc05_008_80182960(void) {
    return 0x43;
}
