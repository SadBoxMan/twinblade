#include "common.h"
#include "abil.h"

extern void func_80162CCC();
extern void func_80147364();
extern void func_800183E0();
extern u8 D_ovl22_800CBF54[];
extern u8 D_ovl22_800CBF14[];
extern AbilStep D_ovl22_800CBE94[];
void func_ovl22_800CAEC0(u8 *a);

void func_ovl22_800CAE0C(void) {
    func_800183E0(D_ovl22_800CBF54);
    func_800183E0(D_ovl22_800CBF14);
}

void func_ovl22_800CAE44(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl22_800CBE94[AF(a, u8, 0x197)](a);
}

void func_ovl22_800CAE88(u8 *a) {
    func_ovl22_800CAEC0(a);
    AF(a, u8, 0x197)++;
}

extern void func_ovl22_800CB600();
extern s32 rand();
extern void func_80146C3C();
extern s32 func_ovl22_800CB8A0();
extern u8 D_80078EC1;
extern AbilStep D_ovl22_800CBEE0[];
extern void func_ovl22_800CB684();
extern void func_8001CB00();
extern void func_8001CC3C();
extern s32 func_80146578();
extern void func_80146CA0();
extern void func_80149374();
extern void func_8014964C();
extern void func_ovl22_800CB620();
extern s32 D_ovl22_800CBEA0;
extern s32 D_ovl22_800CBEAC;

extern s32 func_ovl22_800CB6D4();
extern s32 ratan2();
extern s32 rcos();
extern s32 rsin();
extern s32 MulMatrix();
extern s32 RotMatrixYXZ();
extern void func_801466F0();
extern void func_80146994();
extern void func_80147324();
extern void func_801655E4();
extern s32 func_80165910();

void func_ovl22_800CAEC0(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;

    if (func_80165910() == 0) {
        func_801655E4(arg0);
    }
    func_80146994(0x35, arg0, 0, 0);
    func_80147324(0x838);
    temp_v0 = rand();
    var_v1 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = temp_v0 + 0xF;
    }
    func_801466F0(0xE, arg0, 0, 0, 0, (((temp_v0 - ((var_v1 >> 4) * 0x10)) + 0x10) << 0xC) / 360, 0, 1);
    temp_v0_2 = rand();
    var_v1_2 = temp_v0_2;
    if (temp_v0_2 < 0) {
        var_v1_2 = temp_v0_2 + 0xF;
    }
    func_801466F0(0xE, arg0, 0, 0, 0, -((((temp_v0_2 - ((var_v1_2 >> 4) * 0x10)) + 0x10) << 0xC) / 360), 0, 1);
    temp_v0_3 = rand();
    var_v1_3 = temp_v0_3;
    if (temp_v0_3 < 0) {
        var_v1_3 = temp_v0_3 + 0xF;
    }
    func_801466F0(0xE, arg0, 0, 0, 0, (((temp_v0_3 - ((var_v1_3 >> 4) * 0x10)) + 0x10) << 0xC) / 360, 1, 1);
    temp_v0_4 = rand();
    var_v1_4 = temp_v0_4;
    if (temp_v0_4 < 0) {
        var_v1_4 = temp_v0_4 + 0xF;
    }
    func_801466F0(0xE, arg0, 0, 0, 0, -((((temp_v0_4 - ((var_v1_4 >> 4) * 0x10)) + 0x10) << 0xC) / 360), 1, 1);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

extern AbilStep D_ovl22_800CBEB8[];

extern void func_80146A6C();

extern s32 func_80012F74();

extern s32 D_80078EC8;
extern u8 D_80078E78;
extern void func_80165A20();

void func_ovl22_800CB0D8(u8 *arg0) {
    u8 *g;

    g = &D_80078E78;
    if (!(D_80078EC8 & 0x1F)) {
        func_801466F0(0xE, arg0, 0, 0, 0, (((rand() % 16) + 16) << 12) / 360, 0, 1);
        func_801466F0(0xE, arg0, 0, 0, 0, -((((rand() % 16) + 16) << 12) / 360), 0, 1);
    }
    if (!(AF(g, s32, 0x50) & 0x3F)) {
        if (rand() & 1) {
            func_801466F0(0xE, arg0, 0, 0, 0, (((rand() % 16) + 16) << 12) / 360, 1, 1);
        } else {
            func_801466F0(0xE, arg0, 0, 0, 0, -((((rand() % 16) + 16) << 12) / 360), 1, 1);
        }
    }
    if (AF(g, s32, 0x50) == 0) {
        func_80165A20(arg0);
    }
}

void func_ovl22_800CB32C(void) {
    func_80147364(4, 0x838);
}

void func_ovl22_800CB350(s32 arg0) {
    s32 pad[2];
    if (D_80078EC1 != 0x15) {
        func_ovl22_800CB600(arg0);
        return;
    }
    D_ovl22_800CBEB8[AF(arg0, u16, 2)]();
}

void func_ovl22_800CB3AC(u8 *arg0) {
    s32 temp_s2;
    void *temp_v0;

    temp_s2 = AF(arg0, s32, 0x4C);
    temp_v0 = func_80146578();
    AF(arg0, void *, 0x20) = temp_v0;
    if (temp_v0 != NULL) {
        if (AF(arg0, s32, 0x54) == 0) {
            func_8001CC3C(temp_v0, &D_ovl22_800CBEA0, 0x1A8, 0x100);
            func_80149374(temp_s2, arg0 + 4);
        } else {
            func_8001CB00(temp_v0, &D_ovl22_800CBEAC, 0x1A0, 0x100);
            AF(temp_v0, s16, 0x2C) = 1;
            func_8014964C(temp_s2, arg0 + 4);
        }
        AF(temp_v0, s8, 0x27) = 0x19;
        AF(arg0, s16, 0x18) = 0;
        func_ovl22_800CB620(arg0);
        func_80146CA0(arg0);
        return;
    }
    func_ovl22_800CB600(arg0);
}

extern u16 D_800B99DA;
extern s32 func_80146E98();

extern void func_80146E90();

void func_ovl22_800CB484(u8 *arg0) {
    u8 *m;
    s32 v;
    u16 n;

    m = AF(arg0, u8 *, 0x20);
    if (AF(arg0, s32, 0x54) != 0) {
        v = D_800B99DA & 1;
        if (v) {
            v = 0x100;
        } else {
            v = 0x120;
        }
        AF(m, s16, 0x2A) = v;
    }
    if (func_ovl22_800CB6D4(arg0) != 0) {
        n = AF(arg0, u16, 0x18);
        AF(arg0, u16, 0x18) = n + 1;
        if ((s16) n >= 4) {
            func_ovl22_800CB684(arg0, 0x200);
            func_80146CA0(arg0);
            return;
        }
        if (AF(arg0, s32, 0x54) != 0 && !(rand() & 3)) {
            func_80146E90(arg0, 0x20);
            AF(arg0, s16, 2) = 3;
            return;
        }
        func_ovl22_800CB684(arg0, 0x80);
    }
}

void func_ovl22_800CB564(s32 arg0) {
    if (func_ovl22_800CB6D4() != 0) {
        func_ovl22_800CB600(arg0);
    }
}

void func_ovl22_800CB59C(u8 *arg0) {
    s32 v;
    u8 *m = AF(arg0, u8 *, 0x20);

    v = D_800B99DA & 1;
    if (v) {
        v = 0x140;
    } else {
        v = 0x160;
    }
    AF(m, s16, 0x2A) = v;
    if (func_80146E98(arg0) != 0) {
        func_ovl22_800CB684(arg0, 0x100);
        AF(arg0, s16, 2) = 1;
    }
}

void func_ovl22_800CB600(void) {
    func_80162CCC();
}

void func_ovl22_800CB620(u8 *arg0) {
    s16 v;

    AF(arg0, u16, 0x10) = AF(arg0, u16, 6);
    AF(arg0, u16, 0x12) = AF(arg0, u16, 0xA);
    AF(arg0, u16, 0x14) = AF(arg0, u16, 0xE);
    v = (rand() & 0x1F) << 7;
    AF(arg0, s16, 0x64) = v;
    AF(arg0, s16, 0x66) = v;
    func_ovl22_800CB684(arg0, 0x200);
    func_ovl22_800CB6D4(arg0);
}

void func_ovl22_800CB684(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0x60) = (s16) (arg1 + (rand() & 0x7F));
    AF(arg0, s16, 0x62) = (s16) (arg1 + (rand() & 0x7F));
}

s32 func_ovl22_800CB6D4(u8 *arg0) {
    AVec v;
    u8 *m;
    s16 t;
    s16 d;

    m = AF(arg0, u8 *, 0x20);
    v.vx = AF(arg0, s16, 0x60) * rcos(AF(arg0, s16, 0x64)) / 4096;
    if (AF(arg0, s32, 0x54) == 0) {
        v.vy = 0;
        v.vz = AF(arg0, s16, 0x62) * rsin(AF(arg0, s16, 0x64)) / 4096;
    } else {
        v.vy = AF(arg0, s16, 0x62) * rsin(AF(arg0, s16, 0x64)) / 4096;
        v.vz = 0;
    }
    AF(arg0, s16, 6) = func_80012F74(AF(arg0, s16, 6), (s16) (AF(arg0, u16, 0x10) + v.vx), 0xA, 1);
    AF(arg0, s16, 0xA) = func_80012F74(AF(arg0, s16, 0xA), (s16) (AF(arg0, u16, 0x12) + v.vy), 0xA, 1);
    AF(arg0, s16, 0xE) = func_80012F74(AF(arg0, s16, 0xE), (s16) (AF(arg0, u16, 0x14) + v.vz), 0xA, 1);
    AF(m, s16, 0x14) = (ratan2(AF(arg0, s16, 6) - AF(arg0, s16, 0x44), AF(arg0, s16, 0x46) - AF(arg0, s16, 0xA)) - 0x200) & 0xFFF;
    t = AF(arg0, u16, 0x64) + AF(arg0, s32, 0x50);
    AF(arg0, s16, 0x64) = t;
    if (AF(arg0, s32, 0x50) >= 0) {
        d = t - AF(arg0, u16, 0x66);
    } else {
        d = AF(arg0, u16, 0x66) - t;
    }
    if (d > 0x1000) {
        AF(arg0, u16, 0x64) = AF(arg0, u16, 0x66);
        return 1;
    }
    return 0;
}

extern s8 D_ovl22_800CBECC[];
extern void func_80017DC4();
extern void func_8012F14C();
extern void func_800D20C0();
extern void func_800D23D0();
extern void func_80017E68();
extern void func_80017758();

s32 func_ovl22_800CB8A0(arg0) u8 *arg0; {
    s8 *p;
    s16 i;
    AVec v;
    AVec r;
    APrim s;
    AMtx a;
    AMtx b;

    v.vx = v.vy = v.vz = AF(arg0, u16, 0x28);
    func_80017DC4(&v, &a);
    v.vx = v.vz = 0;
    v.vy = -0x2C;
    func_8012F14C(arg0 + 0x38, &v, &v);
    func_800D20C0(&v, &r, 5);
    func_800D23D0(&r);
    s.v[1].vx = s.v[1].vy = s.v[1].vz = 0;
    s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
    s.c[1].r = s.c[1].g = (AF(arg0, s16, 0x28) >> 6) + 0x60;
    s.c[1].b = 0;
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.c[3].r = s.c[3].g = s.c[3].b = 0;
    s.code = 0x50000000;
    func_80017E68(&v, &a);
    RotMatrixYXZ(&r, &b);
    MulMatrix(&a, &b);
    p = D_ovl22_800CBECC;
    i = 0;
    do {
        s.v[0].vx = *p++;
        s.v[0].vy = *p++;
        s.v[2].vx = *p++;
        s.v[2].vy = *p++;
        s.v[3].vx = *p++;
        s.v[3].vy = *p--;
        func_80017758(&s, &a);
        i++;
    } while (i < 4);
}

void func_ovl22_800CBA74(u8 *arg0) {
    if (D_80078EC1 != 0x15) {
        func_80146C3C();
        return;
    }
    D_ovl22_800CBEE0[AF(arg0, u16, 2)]();
}

void func_ovl22_800CBAD0(u8 *arg0) {
    u8 *s;
    s32 n;

    s = AF(arg0, u8 *, 0x34);
    if (!(AF(arg0, s32, 0x2C) & 0x8000)) {
        n = AF(arg0, s32, 0x1C);
        AF(arg0, s32, 0x1C) = n + 1;
        if (n < 8) {
            AF(arg0, u16, 0x28) += 0x120;
        } else {
            AF(arg0, s32, 0x1C) = 0;
            AF(arg0, u16, 2) = 4;
        }
        AF(arg0, AMtx, 0x38) = AF(AF(s, u8 *, 0x20), AMtx, 0x34);
        func_ovl22_800CB8A0(arg0);
        return;
    }
    AF(arg0, u16, 2)++;
}

void func_ovl22_800CBBA0(u8 *arg0) {
    u8 *s;
    s32 n;

    s = AF(arg0, u8 *, 0x34);
    {
        n = AF(arg0, s32, 0x1C);
        AF(arg0, s32, 0x1C) = n + 1;
        if (n < 0xA) {
            AF(arg0, u16, 0x28) += 0x120;
        } else {
            AF(arg0, s16, 0x12) = AF(s, s16, 0x12) >> 1;
            AF(arg0, s16, 0x1A) = AF(s, s16, 0x1A) >> 1;
            AF(arg0, s32, 0x30) = 0x20;
            AF(arg0, s32, 0x1C) = -0xC0;
            AF(arg0, s16, 0x2A) = 0x500;
            AF(arg0, u16, 2)++;
        }
        AF(arg0, AMtx, 0x38) = AF(AF(s, u8 *, 0x20), AMtx, 0x34);        func_ovl22_800CB8A0(arg0);
    }
}

void func_ovl22_800CBC7C(u8 *arg0) {
    s32 r;
    s32 t;

    if (AF(arg0, s16, 0x28) > AF(arg0, s16, 0x2A)) {
        if (AF(arg0, s32, 0x1C) > 0) {
            AF(arg0, s16, 0x2A) = (rand() & 0x180) + 0x500;
            AF(arg0, s32, 0x1C) = -0xA0;
        }
    } else if (AF(arg0, s32, 0x1C) < 0) {
        AF(arg0, s16, 0x2A) = (rand() & 0x180) + 0x800;
        AF(arg0, s32, 0x1C) = 0xA0;
    }
    AF(arg0, s16, 0x28) += AF(arg0, s32, 0x1C);
    r = AF(arg0, s16, 0x12);
    AF(arg0, s32, 0x4C) += r;
    AF(arg0, s32, 0x50) -= 3;
    AF(arg0, s32, 0x54) += AF(arg0, s16, 0x1A);
    func_ovl22_800CB8A0(arg0, r);
    t = AF(arg0, s32, 0x30);
    AF(arg0, s32, 0x30) = t - 1;
    if (t == 0) {
        AF(arg0, u16, 2)++;
    }
}

void func_ovl22_800CBD78(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x28) - 0x100;
    AF(arg0, u16, 0x28) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        AF(arg0, s32, 0x50) = (s32) (AF(arg0, s32, 0x50) - 3);
        func_ovl22_800CB8A0();
        return;
    }
    func_80146C3C();
}

void func_ovl22_800CBDD0(u8 *arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0_2;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = AF(arg0, void *, 0x34);
    AF(arg0, AMtx, 0x38) = AF(AF(temp_s1, void *, 0x20), AMtx, 0x34);
    func_ovl22_800CB8A0(arg0);
    temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0_2;
    if (temp_v0_2 == -1) {
        func_80146A6C(0x35, (s32) temp_s1, 0, 0, /* extra? */ 0, /* extra? */ 0x8000, /* extra? */ 0);
        AF(arg0, s32, 0x1C) = 0x18;
    }
}
