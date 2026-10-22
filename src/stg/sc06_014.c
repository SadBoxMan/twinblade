#include "common.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc06_014_8017BE9C(void) {
}

void func_sc06_014_8017BEA4(void) {
}

void func_sc06_014_8017BEAC(void) {
}

void func_sc06_014_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc06_014_80183934[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void func_80146C3C();
extern s32 func_80146A6C();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc06_014_8018391C;
extern void (*D_sc06_014_8018393C[])();
extern u8 D_sc06_014_80183928;
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
void func_sc06_014_8017D478(void);
extern void func_800167B8();
extern s32 func_800167F0();
extern void (*D_sc06_014_80183A8C[])();
void func_sc06_014_8017F9FC(void);
void func_sc06_014_8017D4A0(void);
extern void func_800D1EBC();
extern void (*D_sc06_014_80183AA0[])();
extern u8 D_sc06_014_80183AAC;
extern void func_8016EE40();
extern u8 D_sc06_014_80183AB0;
extern void func_sc06_014_8017D5F8();
extern void (*D_sc06_014_80183AB8[])();
extern void func_sc06_014_8017D95C();
extern void (*D_sc06_014_80183BAC[])();
extern void (*D_sc06_014_80199EB4[])();
extern void (*D_sc06_014_80199F30[])();
extern void (*D_sc06_014_80199F6C[])();
extern u8 D_sc06_014_8019C444;
extern void (*D_sc06_014_8019C45C[])();
extern u8 D_sc06_014_8019C464;
extern void (*D_sc06_014_8019C470[])();

extern void func_8002D4C8();
extern void func_8001BFD0();
extern void func_800D0C48();
extern void func_800D1E28();

extern s32 D_sc06_014_80183B08[];
extern s32 func_8013B7F4();

extern void (*D_sc06_014_80183DB4[])();
extern void func_sc06_014_8017E9C0();
extern u8 D_sc06_014_8019E93C;
extern s32 func_sc06_014_8017E9A8();
extern u8 D_80078EC1;
extern s32 func_8012BD14();

extern s32 func_8012C354();
extern u8 D_sc06_014_8018025C;
extern u8 D_sc06_014_80199E80;
extern u8 D_sc06_014_80199F38;
extern void func_sc06_014_8017ED54();

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
extern u8 D_sc06_014_80183D48;
extern u8 D_sc06_014_80183D8C;
extern void func_80143994();
extern u8 D_sc06_014_80183DCC;
extern s32 func_8012D5E4();
extern void func_8012DFD4();
extern s32 func_sc06_014_8017FE50();
extern void func_80171928();
extern void func_80171990();

extern u16 D_801202A0;
extern u8 D_sc06_014_80183B20;
extern void func_8001D0E8();
extern void func_8012B23C();

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017BEBC);

void func_sc06_014_8017CD9C(u8 *arg0) {
    D_sc06_014_80183934[AF(arg0, u16, 2)]();
}

void func_sc06_014_8017CDD8(u8 *a) {
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
    o = func_800D222C(a, &D_sc06_014_8018391C, 0xFD);
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

void func_sc06_014_8017CF9C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

void func_sc06_014_8017D030(u8 *arg0) {
    D_sc06_014_8018393C[AF(arg0, u16, 2)]();
}

void func_sc06_014_8017D06C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc06_014_80183928, 0x18);
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

void func_sc06_014_8017D110(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017D174);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017D1BC);

s32 func_sc06_014_8017D204(u8 *arg0) {
    func_sc06_014_8017D478();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_014_8017D248(void) {
    return (func_800167F0(0) & 0xFFFF) != 0;
}

void func_sc06_014_8017D26C(u8 *arg0) {
    D_sc06_014_80183A8C[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_014_8017D2A8(u8 *arg0) {
    func_sc06_014_8017F9FC();
    func_800167B8(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_014_8017D2EC(u8 *arg0) {
    func_sc06_014_8017D4A0();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc06_014_8017D32C(u8 *arg0) {
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

void func_sc06_014_8017D3A8(void) {
    func_800D1EBC();
}

void func_sc06_014_8017D3C8(u8 *arg0) {
    D_sc06_014_80183AA0[AF(arg0, u8, 0x15)]();
}

s32 func_sc06_014_8017D404(u8 *arg0) {
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

void func_sc06_014_8017D478(void) {
    func_8016EE40((s32) &D_sc06_014_80183AAC, 0x01000000);
}

void func_sc06_014_8017D4A0(void) {
    func_8016EE40((s32) &D_sc06_014_80183AB0, 0x01000000);
}

void func_sc06_014_8017D4C8(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x800;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_014_8017D5F8, 0);
    func_8012A094((s32) &D_80126948);
    func_sc06_014_8017D5F8((s32) &D_80126948);
}

void func_sc06_014_8017D560(void) {
    D_80126954 = 0x190;
    D_8012695C = 0x384;
    D_8012696A = 0x800;
    D_80126968 = 0;
    D_8012696C = 0;
    D_80126976 = 0;
    D_80126978 = -0x90;
    D_8012697A = 0;
    func_8012A018((s32) func_sc06_014_8017D5F8, 1);
    func_8012A094((s32) &D_80126948);
    func_sc06_014_8017D5F8((s32) &D_80126948);
}

void func_sc06_014_8017D5F8(s32 arg0) {
    D_sc06_014_80183AB8[AF(arg0, u8, 4)]();
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017D634);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017D6D4);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017D774);

s32 func_sc06_014_8017D90C(s32 arg0) {
    return func_8013B7F4(D_sc06_014_80183B08[arg0], 0);
}

void func_sc06_014_8017D93C(s32 arg0) {
    func_sc06_014_8017D95C(arg0);
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017D95C);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017D9E8);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017DB68);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017DC40);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017DDE0);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017DF08);

void func_sc06_014_8017DFF8(u8 *arg0) {
    D_sc06_014_80183BAC[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E034);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E164);

void func_sc06_014_8017E220(u8 *arg0) {
    s32 temp_v0;

    D_sc06_014_80183DB4[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v0 = AF(arg0, s32, 0xE8) + 1;
        AF(arg0, s32, 0xE8) = temp_v0;
        if (!(temp_v0 & 0xF)) {
            func_sc06_014_8017E9C0((s32) arg0);
        }
    }
}

void func_sc06_014_8017E29C(s32 arg0) {
    if (func_8012C354(arg0, (s32) &D_sc06_014_80183D48) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32 *, 0xBC) = &D_sc06_014_80183D8C;
        AF(arg0, s16, 0xFE) = 8;
        AF(arg0, s32, 0xE4) = 0xFFEC0000;
        AF(arg0, s32, 0xC4) = (s32) (AF(arg0, s32, 0xC4) | 1);
        SetScript(arg0, (s32) &D_sc06_014_8019E93C);
        func_80143994(arg0, 0x1000);
        AF(arg0, s16, 2) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E32C);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E3B8);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E4B4);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E5C0);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E778);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E80C);

void func_sc06_014_8017E874(u8 *arg0) {
    AF(arg0, s16, 2) = 1;
    AF(arg0, u16, 0x5C) = (u16) AF(AF(arg0, void *, 0x78), u16, 2);
    SetScript((s32) arg0, (s32) &D_sc06_014_8019E93C);
}

s32 func_sc06_014_8017E8AC(s32 arg0) {
    return func_8012D5E4(arg0, (s32) &D_sc06_014_80183DCC, (s32) (&D_sc06_014_80183DCC + 8), 0xA) != 0;
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017E8D8);

s32 func_sc06_014_8017E9A8(s32 arg0) {
    return D_80078EC1 == 0x15;
}

void func_sc06_014_8017E9C0(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x7F;
    temp_v0 = func_8012BD14(arg0);
    if (temp_v0 >= 0x1001) {
        var_s0 = 0x7F - ((temp_v0 - 0x1000) / 9984);
    }
    func_8002D4C8(0x6FE, (var_s0 | 0x1000) & 0xFFFF);
}

void func_sc06_014_8017EA2C(s32 arg0) {
    s32 var_a0;
    u16 *var_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_014_80183B20) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_014_8018025C);
        AF(arg0, s16, 2) = 4;
        func_8001D0E8(AF(arg0, s32, 0x20), 0x400, 0x400);
        AF(arg0, s16, 0xAE) = -1;
        func_8012B23C(arg0);
        var_v1 = &D_801202A0;
        var_a0 = 0;
        AF(arg0, u8, 0x75) = 8;
        do {
            if (*var_v1 == 0x2D0) {
                AF(arg0, u16 *, 0xCC) = var_v1;
            }
            var_a0 += 1;
            var_v1 = (u16 *)((u8 *)var_v1 + 0x10C);
        } while (var_a0 < 0x60);
    }
}

void func_sc06_014_8017EADC(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0xA) - 4;
    AF(arg0, u16, 0xA) = temp_v0;
    if ((s16) temp_v0 < -0x5FF) {
        AF(arg0, s16, 2) = 3;
        AF(arg0, s16, 0x34) = 2;
        AF(arg0, s32, 0x1C) = 0xF;
    }
    func_8012DFD4((s32) arg0);
}

void func_sc06_014_8017EB34(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = (s32) (temp_v0 - 1);
    } else {
        AF(arg0, u16, 2) = (u16) AF(arg0, u16, 0x34);
    }
    func_8012DFD4((s32) arg0);
}

void func_sc06_014_8017EB78(u8 *arg0) {
    if (AF(AF(arg0, void *, 0xCC), s16, 0xFC) >= 2) {
        AF(arg0, s16, 2) = 1;
    }
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017EBA0);

void func_sc06_014_8017EC68(void) {
}

void func_sc06_014_8017EC70(void) {
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017EC78);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017ECEC);

s32 func_sc06_014_8017ED4C(void) {
    return 0x6E;
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017ED54);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017F178);

void func_sc06_014_8017F4EC(u8 *arg0) {
    D_sc06_014_80199EB4[AF(arg0, u16, 2)]();
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017F528);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017F670);

void func_sc06_014_8017F820(u8 *arg0) {
    D_sc06_014_80199F30[AF(arg0, u16, 2)]();
}

void func_sc06_014_8017F85C(u8 *arg0) {
    D_sc06_014_80199F6C[AF(arg0, u16, 2)]();
}

void func_sc06_014_8017F898(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_014_80199E80) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s16, 0xAE) = -1;
        SetScript(arg0, (s32) &D_sc06_014_8018025C);
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

void func_sc06_014_8017F940(s32 arg0) {
    void *temp_v1;

    if (func_8012C354(arg0, (s32) &D_sc06_014_80199F38) != 0) {
        AF(arg0, u8, 0xC0) = 1;
        SetScript(arg0, (s32) &D_sc06_014_8018025C);
        temp_v1 = AF(arg0, void *, 0x20);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        AF(AF(arg0, void *, 0x20), s16, 0x18) = 0xAAA;
        AF(AF(arg0, void *, 0x20), s16, 0x1C) = 0xAAA;
    }
}

void func_sc06_014_8017F9C4(u8 *arg0) {
    func_sc06_014_8017ED54();
    AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
}

void func_sc06_014_8017F9FC(void) {
    func_8016EE40((s32) &D_sc06_014_8019C444, 0x01000000);
}

void func_sc06_014_8017FA24(u8 *arg0) {
    D_sc06_014_8019C45C[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017FA60);

void func_sc06_014_8017FAA8(s32 arg0) {
    if (func_sc06_014_8017FE50() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171928(arg0);
    }
}

void func_sc06_014_8017FAE8(void) {
    func_8016EE40((s32) &D_sc06_014_8019C464, 0x01000000);
}

void func_sc06_014_8017FB10(u8 *arg0) {
    D_sc06_014_8019C470[AF(arg0, u8, 0x216)]();
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017FB4C);

void func_sc06_014_8017FC54(s32 arg0) {
    if (func_sc06_014_8017FE50() != 0) {
        func_8002D4C8(0x8B1, 0);
        func_80171990(arg0);
    }
}

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017FC94);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017FD74);

INCLUDE_ASM("asm/stg/sc06_014/nonmatchings/sc06_014", func_sc06_014_8017FE50);
