#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc03_112_8017BE9C(void) {
}

void func_sc03_112_8017BEA4(void) {
}

void func_sc03_112_8017BEAC(void) {
}

void func_sc03_112_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_112_8018912C[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_112_80189114;
extern void (*D_sc03_112_80189134[])();
extern u8 D_sc03_112_80189120;
extern void (*D_sc03_112_8018958C[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc03_112_8017E01C(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc03_112_80189594[])();
void func_sc03_112_8017E044(void);
extern void func_800D1EBC();
extern void (*D_sc03_112_801895A0[])();
extern u8 D_sc03_112_801895AC;
extern void func_8016EE40();
extern u8 D_sc03_112_801895B8;
extern void func_sc03_112_8017E124();
extern void (*D_sc03_112_801895CC[])();
extern void (*D_sc03_112_801896A4[])();
extern void (*D_sc03_112_80189708[])();
extern s32 func_8012C354();
extern s32 func_801788B8();
extern u8 D_sc03_112_80185A54;
extern u8 D_sc03_112_801896BC;
extern u8 func_sc03_112_8017F4D8;
extern void func_80178CBC();
extern u8 D_sc03_112_801896F0;
extern s32 func_80178970();
extern void func_80178D18();
extern void (*D_sc03_112_801A8BF4[])();
extern void (*D_sc03_112_801AA244[])();

void func_sc03_112_8017BEBC(u8 *arg0) {
    D_sc03_112_8018912C[AF(arg0, u16, 2)]();
}

void func_sc03_112_8017BEF8(u8 *a) {
    SV8 p;
    SV8 r;
    u8 unused[0x20];
    SV8 *rp;
    u8 *t;
    s16 i;
    s32 o;
    s32 m;

    t = AF(a, u8 *, 0x34);
    func_80146A6C(0x11, a, AF(a, s16, 6), (s16)(AF(a, u16, 0xA) - 0x10), AF(a, s16, 0xE), 0, 0);
    p.x = AF(a, s16, 6);
    p.y = AF(a, s16, 0xA);
    p.z = AF(a, s16, 0xE);
    rp = &r;
    func_800D20C0(&p, rp, 0xA);
    AF(a, s16, 6) = p.x;
    AF(a, s16, 0xE) = p.z;
    r.y = 0;
    func_800D23D0(rp);
    for (i = 0; i < 3; i++) {
        m = func_80146A6C(0x12, a, AF(t, s16, 6), AF(t, s16, 0xA), AF(t, s16, 0xE), i, 0);
        if (m != 0) {
            AF(m, s16, 0x12) = r.x;
            AF(m, s16, 0x16) = r.y;
            AF(m, s16, 0x1A) = 0;
        }
    }
    o = func_800D222C(a, &D_sc03_112_80189114, 0xFD);
    if (o != 0) {
        AF(a, s32, 0x20) = o;
        AF(o, s32, 4) |= 0x5D000100;
        func_8001CF30(o);
        AF(o, s16, 0x18) = 0x4000;
        AF(o, s16, 0x1A) = 0x200;
        AF(a, s16, 0x16) = 0x200;
        AF(a, s16, 0x14) = 0x1000;
        AF(o, s16, 0x28) = 0x240;
        AF(o, s16, 0x2A) = 0x180;
        AF(o, s16, 0x10) = r.x;
        AF(o, s16, 0x12) = r.y;
        AF(a, u16, 2)++;
    } else {
        func_80146C3C(a);
    }
}

void func_sc03_112_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0_2;
    u16 var_v0;
    u8 temp_v0;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x16) = (u16) (AF(arg0, u16, 0x16) + AF(arg0, u16, 0x14));
    if (AF(arg0, s32, 0x1C) < 8) {
        var_v0 = AF(arg0, u16, 0x14) - 0x200;
    } else {
        var_v0 = AF(arg0, u16, 0x14) - 0x51;
    }
    AF(arg0, u16, 0x14) = var_v0;
    temp_v0 = AF(temp_a0, u8, 0x26) - 2;
    AF(temp_a0, u16, 0x1A) = (u16) AF(arg0, u16, 0x16);
    AF(temp_a0, u8, 0x26) = temp_v0;
    AF(temp_a0, u8, 0x25) = temp_v0;
    AF(temp_a0, u8, 0x24) = temp_v0;
    temp_v0_2 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0_2 + 1);
    if (temp_v0_2 >= 0x1E) {
        func_80146C3C((s32) arg0, (s32) arg0, arg2, arg3);
    }
}

void func_sc03_112_8017C150(u8 *arg0) {
    D_sc03_112_80189134[AF(arg0, u16, 2)]();
}

void func_sc03_112_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc03_112_80189120, 0x18);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x5C000140);
        func_8001CF30(temp_v0);
        AF(temp_v0, s16, 0x10) = 0x400;
        AF(temp_v0, s16, 0x18) = 0x3000;
        AF(temp_v0, s16, 0x1A) = 0x3000;
        AF(temp_v0, s16, 0x28) = 0x248;
        AF(temp_v0, s16, 0x2A) = 0x180;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_80146C3C(arg0);
}

void func_sc03_112_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_a1 = AF(arg0, s32, 0x20);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 >= 0x1F) {
        func_80146C3C((s32) arg0, temp_a1, arg2, arg3);
        return;
    }
    temp_v0_2 = AF(temp_a1, u16, 0x1A) + 0x1E0;
    temp_v1 = AF(temp_a1, u8, 0x26) - 3;
    AF(temp_a1, u16, 0x1A) = temp_v0_2;
    AF(temp_a1, u16, 0x18) = temp_v0_2;
    AF(temp_a1, u8, 0x26) = temp_v1;
    AF(temp_a1, u8, 0x25) = temp_v1;
    AF(temp_a1, u8, 0x24) = temp_v1;
}

extern u8 D_sc03_112_801A7AAC;
extern void func_8012C218();
extern void func_80016714();

extern s32 func_8012C044();
extern void (*D_sc03_112_801A2F10[])();
extern void func_sc03_112_80180FC0();
extern s32 func_8012BEE8();
extern s32 func_8012BCCC();
extern u8 D_sc03_112_801A4B68;
extern u8 D_sc03_112_801A7C94;
extern void func_8001C924();
extern s32 func_8012B8E4();
extern u8 D_sc03_112_801A7E44;
extern void func_sc03_112_80180C1C();
extern s16 D_80126CE0;
extern u8 D_sc03_112_801A6518;
extern u8 D_sc03_112_801A817C;
extern void (*D_sc03_112_801A8BA4[])();
extern void func_8012B260();
extern void func_sc03_112_801842B4();
extern void func_8001CD50();
extern u8 D_sc03_112_801ACEA0;
extern s32 func_8012913C();
extern void func_8012E688();
extern void func_8002AC00();
extern u8 D_80126B5C;
extern void func_8012B77C();
extern void func_sc03_112_80184194();
extern s32 func_8012C658();
extern void func_8002D4C8();
extern u8 D_sc03_112_801A8B64;
extern u8 D_sc03_112_801A8B6C;
extern s32 func_8012CBF4();
extern s32 func_8012D5E4();
extern s32 func_8012BE54();
extern void func_sc03_112_80183EA0();
extern u8 D_sc03_112_801ACEE0;
extern void func_800233CC();
extern void func_801292C8();

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
extern u16 D_801269E8;
extern u16 D_sc03_112_801ACE50;
extern void func_8012A018();
extern void func_8012A094();
extern void (*D_sc03_112_8018967C[])();
extern void func_8012B2CC();
extern u8 D_sc03_112_8019AA74;
extern s32 D_sc03_112_801ACE58;
extern s32 D_sc03_112_801AD0C4;
extern u8 D_sc03_112_801AD0E0;
extern void func_8013C0F8();
extern void func_sc03_112_8017D174();
extern u8 D_sc03_112_801A2E04;
extern u8 D_sc03_112_801A2E38;
extern void func_80143970();
extern void func_sc03_112_801809A0();
extern void func_sc03_112_80180AE4();
extern u16 D_800B99DA;
extern void func_80130D48();
extern void (*D_sc03_112_801A83E8[])();
extern void func_sc03_112_80182944();
extern s32 func_sc03_112_8018290C();
extern void func_8012B23C();
extern void func_8012B178();
extern s16 D_80126B96;
extern u16 D_80126B9A;
extern void func_8012AD80();
extern s32 func_8012D624();
extern void func_8012B21C();
extern void func_8012E88C();
extern s32 func_80143994();
extern u8 D_sc03_112_801A82E8;
extern void func_sc03_112_80182708();
extern void func_8012B030();
extern void func_8012E8C4();
extern void func_sc03_112_80182A28();
extern void func_8002A04C();
extern void func_sc03_112_80182858();
extern s32 func_8012C098();

extern void func_800D0C48();
extern void func_800D1E28();


extern void func_80131E00();
extern u16 D_801202A0;
extern s32 func_8012CBA4();
extern void func_8012ADE4();
extern s32 func_8012BC60();
extern void func_8012B0B4();
extern s32 func_8012B6D4();
extern s32 func_8012CEB0();

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017C294);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017D174);

void func_sc03_112_8017DDD8(u8 *arg0) {
    D_sc03_112_8018958C[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_112_8017DE14(u8 *arg0) {
    func_sc03_112_8017E01C();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_112_8017DE58(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc03_112_8017DE7C(u8 *arg0) {
    D_sc03_112_80189594[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_112_8017DEB8(u8 *arg0) {
    func_sc03_112_8017E044();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc03_112_8017DEF8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1D, 0, arg2);
        func_800D0C48(1);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_112_8017DF60(void) {
    func_800D1EBC();
}

void func_sc03_112_8017DF80(u8 *arg0) {
    D_sc03_112_801895A0[AF(arg0, u8, 0x15)]();
}

s32 func_sc03_112_8017DFBC(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_8002D4C8(0x1D, 0, arg2);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc03_112_8017E01C(void) {
    func_8016EE40((s32) &D_sc03_112_801895AC, 0x01000000);
}

void func_sc03_112_8017E044(void) {
    func_8016EE40((s32) &D_sc03_112_801895B8, 0x01000000);
}

void func_sc03_112_8017E06C(void) {
    D_80126954 = 0x190;
    D_80126950 = 0x190;
    D_8012695C = 0x3E8;
    D_80126968 = 0xE3;
    D_8012696A = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x20;
    D_8012697A = 0;
    func_8012A018((s32) func_sc03_112_8017E124, 0);
    func_8012A094((s32) &D_80126948);
    func_sc03_112_8017E124((s32) &D_80126948);
    func_8012A094((s32) &D_80126948);
    D_sc03_112_801ACE50 = D_801269E8;
}

void func_sc03_112_8017E124(s32 arg0) {
    D_sc03_112_801895CC[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017E160);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017E2E8);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017E4B4);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017E654);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017E70C);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017E7C4);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017E81C);

void func_sc03_112_8017E950(u8 *arg0) {
    D_sc03_112_8018967C[AF(arg0, u16, 2)]();
    func_8012B2CC((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017E9A0);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017EA24);

void func_sc03_112_8017EBA8(u8 *arg0) {
    D_sc03_112_801896A4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017EBE4);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017EE48);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017EFAC);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017F0F4);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017F1CC);

s32 func_sc03_112_8017F30C(void) {
    return 0x49;
}

void func_sc03_112_8017F314(void) {
    switch (D_sc03_112_801AD0C4) {                  /* irregular */
    case 0:
        func_8013C0F8((s32) &D_sc03_112_8019AA74);
        D_sc03_112_801ACE58 = 0;
        D_sc03_112_801AD0C4 += 1;
        return;
    case 1:
        func_sc03_112_8017D174((s32) &D_sc03_112_801AD0E0, (s32) &D_sc03_112_8019AA74, D_sc03_112_801ACE58, 0);
        D_sc03_112_801ACE58 += 0x14;
        return;
    }
}

void func_sc03_112_8017F3B8(u8 *arg0) {
    D_sc03_112_80189708[AF(arg0, u16, 2)]();
}

void func_sc03_112_8017F3F4(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_112_801896BC) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 2) = 1;
        SetScript(arg0, (s32) &D_sc03_112_80185A54);
        func_801788B8(arg0, (s32) &func_sc03_112_8017F4D8);
    }
}

void func_sc03_112_8017F458(void) {
}

void func_sc03_112_8017F460(s32 arg0) {
    func_80178CBC(arg0, (s32) &D_sc03_112_801896F0);
    AF(arg0, s16, 2) = 3;
}

void func_sc03_112_8017F498(s32 arg0) {
    if (func_80178970(arg0) != 0) {
        func_80178D18(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017F4D8);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017F534);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017F598);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017F6F8);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017F8DC);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017F998);

void func_sc03_112_8017FA44(u8 *arg0) {
    void *temp_v0;

    D_sc03_112_801A2F10[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) | 0x10);
        if (func_8012C044((s32) arg0) == 1) {
            AF(arg0, s16, 0x102) = 1;
            func_sc03_112_80180FC0((s32) arg0);
        }
    }
}

void func_sc03_112_8017FAD0(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc03_112_801A2E04) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32 *, 0xBC) = &D_sc03_112_801A2E38;
        AF(arg0, s32, 0xB4) = 0xFFFBDFD9;
        AF(arg0, s32, 0xDC) = 0;
        AF(arg0, s16, 0x100) = 0x1000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        func_80143970(arg0);
        AF(arg0, s16, 2) = 1;
    }
}

s32 func_sc03_112_8017FB4C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    return SetScript(arg0, (s32) &D_sc03_112_801A7AAC);
}

void func_sc03_112_8017FB7C(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    if (AF(arg0, u16, 0x34) == 0) {
        if (func_8012BCCC((s32) arg0) <= 0x10000) {
            func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc03_112_801A4B68);
            SetScript((s32) arg0, (s32) &D_sc03_112_801A7C94);
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

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017FC4C);

void func_sc03_112_8017FCC0(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) != 0) {
        AF(arg0, s16, 2) = 5;
    }
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017FCF4);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017FDB8);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017FE90);

void func_sc03_112_8017FF70(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 2) = 9;
    SetScript((s32) arg0, (s32) &D_sc03_112_801A7E44, arg2);
    AF(arg0, s32, 0x1C) = 0x1E;
    func_sc03_112_80180C1C((s32) arg0);
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8017FFB8);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_801800E0);

void func_sc03_112_80180198(u8 *arg0) {
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

void func_sc03_112_80180228(u8 *arg0) {
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~0x10);
    func_sc03_112_801809A0((s32) arg0);
    AF(arg0, s32, 0x1C) = 0xA;
}

void func_sc03_112_8018026C(s32 arg0, s32 arg1) {
    if (func_8012BEE8(arg0, arg1) == 0) {
        func_sc03_112_80180AE4(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_801802A4);

void func_sc03_112_801802CC(u8 *arg0) {
    if (AF(arg0, s16, 0x76) <= 0) {
        AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 2);
    }
    AF(arg0, s32, 0xE4) = 0;
    AF(arg0, s16, 0x52) = -0x30;
}

void func_sc03_112_801802FC(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) == ((AF(arg0, s32, 0x1C) / 5) * 5)) {
        func_sc03_112_801809A0((s32) arg0);
        AF(arg0, s32, 0xE4) = 0xA;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_112_80180AE4((s32) arg0);
        AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) - 1);
    }
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80180388);

void func_sc03_112_80180440(u8 *arg0) {
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
        func_sc03_112_801809A0((s32) arg0);
        var_v0 = 0xA;
        goto block_7;
    }
    if (AF(arg0, s32, 0xE4) != 0) {
        func_sc03_112_80180AE4((s32) arg0);
        var_v0 = AF(arg0, s32, 0xE4) - 1;
block_7:
        AF(arg0, s32, 0xE4) = var_v0;
    }
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80180530);

void func_sc03_112_80180588(u8 *arg0) {
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

void func_sc03_112_8018062C(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8018063C);

void func_sc03_112_80180724(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x37;
    func_8001C924(AF(arg0, s32, 0x20), (s32) &D_sc03_112_801A6518);
    SetScript((s32) arg0, (s32) &D_sc03_112_801A817C);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x62);
}

void func_sc03_112_80180780(u8 *arg0, s32 arg1) {
    void *temp_v0;

    if (AF(arg0, s32, 0x1C) < 0x11) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    }
    if (func_8012BEE8((s32) arg0, arg1) != 0) {
        if (!(D_800B99DA & 0x1F)) {
            func_80130D48((s32) arg0);
        }
        func_sc03_112_80180FC0((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80180808);

void func_sc03_112_801808D8(u8 *arg0, s32 arg1) {
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
        func_sc03_112_80180FC0((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_801809A0);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80180A78);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80180AE4);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80180BE0);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80180C1C);

s32 func_sc03_112_80180C88(s32 arg0) {
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
        func_sc03_112_80180FC0(arg0);
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

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80180E84);

void func_sc03_112_80180FC0(s32 arg0) {
    void *temp_v1;

    if (AF(arg0, s16, 0x102) == 0) {
        func_8002A04C(arg0);
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

void func_sc03_112_80181054(u8 *arg0) {
    D_sc03_112_801A83E8[AF(arg0, u16, 2)]();
    func_sc03_112_80182944((s32) arg0);
    if (!(AF(arg0, u16, 0x70) & 1) && (AF(arg0, u16, 0) != 0) && (func_8012C044((s32) arg0) == 1)) {
        func_sc03_112_8018290C((s32) arg0);
    }
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_801810E4);

void func_sc03_112_80181240(s32 arg0, s32 arg1, s32 arg2) {
    func_8012B23C(arg0, arg1, arg2);
    func_8012B178(arg0, -0x28000);
    AF(arg0, s16, 2) = 2;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, s32, 0xE4) = 0x20;
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8018128C);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_801815E4);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8018172C);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_801817E0);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80181B7C);

void func_sc03_112_80181BE0(u8 *arg0) {
    s16 temp_v1;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = rsin((AF(arg0, s32, 0xE4) << 6) & 0x7C0);
    temp_v1 = (temp_v0 >> 3) + 0xE00;
    AF(temp_s0, s16, 0x1C) = temp_v1;
    AF(temp_s0, s16, 0x18) = temp_v1;
    AF(temp_s0, s16, 0x1A) = (s16) ((temp_v0 >> 1) + 0x800);
    func_8012AD80((s32) arg0);
    if (func_8012D624((s32) arg0, 0x20, 5) == 1) {
        D_80126B96 = 0x11;
        D_80126B9A = AF(AF(arg0, void *, 0x20), u16, 0x12);
    }
    if (func_8012BEE8((s32) arg0) != 0) {
        func_sc03_112_8018290C((s32) arg0);
        return;
    }
    AF(arg0, s32, 0xE4) = (s32) (AF(arg0, s32, 0xE4) + 1);
}

void func_sc03_112_80181CAC(u8 *arg0) {
    if (func_8012BE54() <= 0x40000) {
        AF(arg0, s16, 2) = 9;
        func_8012B21C((s32) arg0);
        func_8012E88C((s32) arg0);
        AF(arg0, s32, 0xCC) = func_80143994((s32) arg0, 0x1000);
    }
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80181D08);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80181E88);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80181F74);

void func_sc03_112_80182284(s32 arg0) {
    func_sc03_112_80182708();
    func_sc03_112_80182944(arg0);
    SetScript(arg0, (s32) &D_sc03_112_801A82E8);
    func_8002D4C8(0xA74, 0);
}

void func_sc03_112_801822D0(s32 arg0) {
    func_sc03_112_80182708();
    func_sc03_112_80182944(arg0);
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80182300);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80182384);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80182708);

void func_sc03_112_8018276C(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc03_112_80185A54);
    func_8012B030((s32) arg0);
}

void func_sc03_112_801827B8(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x1E;
    AF(arg0, s16, 0x5C) = 0;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
}

void func_sc03_112_801827D0(s32 arg0) {
    func_8012E8C4();
    if (func_8012BEE8(arg0) != 0) {
        func_sc03_112_80182A28(arg0);
        func_8002A04C(arg0);
        func_sc03_112_80182858(arg0);
    }
}

void func_sc03_112_80182820(s32 arg0) {
    func_sc03_112_80182A28(arg0);
    func_8002A04C(arg0);
    func_sc03_112_80182858(arg0);
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80182858);

s32 func_sc03_112_8018290C(s32 arg0) {
    func_80016714(AF(arg0, s32, 0xD0), 0x38);
    return func_8012C098(arg0);
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80182944);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80182A28);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80182B20);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80182BF8);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_801833A4);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_801839AC);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80183AE0);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80183EA0);

void func_sc03_112_801840E4(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a1_2;

    D_sc03_112_801A8BA4[AF(arg0, u16, 2)]();
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

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80184194);

void func_sc03_112_80184278(u8 *arg0) {
    D_sc03_112_801A8BF4[AF(arg0, u16, 2)]();
}

void func_sc03_112_801842B4(s32 arg0) {
    s32 pad[4];
    s32 temp_v0;

    temp_v0 = func_8012913C(0x7C);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        func_8001CD50(AF(temp_v0, s32, 0x20), (s32) &D_sc03_112_801ACEA0);
    }
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80184318);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_801843AC);

void func_sc03_112_801844D4(u8 *arg0) {
    if (AF(arg0, s16, 0x76) > 0) {
        func_8012E688((s32) arg0, 0x8C6, 0);
    }
}

void func_sc03_112_80184504(s32 arg0) {
    func_8012E688(arg0, 0x8C7, 0);
    func_8002AC00(0x10);
}

void func_sc03_112_80184530(void) {
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80184538);

void func_sc03_112_80184624(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x400) {
        AF(arg0, s16, 2) = 5;
        AF(arg0, s16, 0xFE) = 4;
        func_8012E688((s32) arg0, 0x98F, 0);
    }
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_801846A4);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80184758);

void func_sc03_112_80184838(u8 *arg0) {
    AF(arg0, u16, 0xFC) = (u16) (AF(arg0, u16, 0xFC) + 0x20);
    AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x100);
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) - (rsin((s32) (s16) AF(arg0, u16, 0xFC)) << 0xA));
    if ((s16) AF(arg0, u16, 0xFC) >= 0x800) {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc03_112_801848A0(u8 *arg0) {
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

void func_sc03_112_80184900(u8 *arg0) {
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
    func_sc03_112_80184194((s32) arg0);
}

void func_sc03_112_80184990(u8 *arg0) {
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
    func_sc03_112_80184194((s32) arg0);
}

void func_sc03_112_80184A04(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xA) + 8;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((AF(arg0, s16, 0x8A) - (s16) temp_v0) <= 0) {
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0xFC) = 0x1E;
    }
    func_sc03_112_80184194((s32) arg0);
}

void func_sc03_112_80184A54(s32 arg0) {
    s32 temp_v0;

    if ((func_8012CBF4(arg0) != 0) || (func_8012D5E4(arg0, (s32) &D_sc03_112_801A8B64, (s32) &D_sc03_112_801A8B6C, 0xF) == 1) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        func_8012C218(arg0);
        return;
    }
    func_sc03_112_801842B4(arg0);
}

void func_sc03_112_80184AD4(u8 *arg0) {
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

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80184B74);

void func_sc03_112_80184C44(u8 *arg0) {
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
    func_sc03_112_80183EA0((s32) arg0);
}

void func_sc03_112_80184CD8(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 8) + 0x40000;
    AF(arg0, s32, 8) = temp_v0;
    if (temp_v0 > 0x400000) {
        func_8012C218((s32) arg0, arg1);
    }
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80184D14);

void func_sc03_112_80184DFC(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_112_801ACEE0;
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

void func_sc03_112_80184EC0(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_112_801ACEE0;
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

void func_sc03_112_80184F74(u8 *arg0) {
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

void func_sc03_112_80184FB4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc03_112_80185008(u8 *arg0) {
    D_sc03_112_801AA244[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80185044);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80185140);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_801853D0);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_80185564);

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_801855BC);

void func_sc03_112_80185638(s32 arg0) {
    s32 temp_a0;

    temp_a0 = AF(arg0, s32, 0xCC);
    if (temp_a0 != 0) {
        func_80016714(temp_a0, 0x38);
    }
    func_8012C218(arg0);
}

INCLUDE_ASM("asm/stg/sc03_112/nonmatchings/sc03_112", func_sc03_112_8018567C);
