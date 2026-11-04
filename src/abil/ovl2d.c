#include "common.h"
#include "abil.h"
#include "gte.h"

extern void func_80162CCC();
extern void func_800183E0();
extern u8 D_ovl2d_800CBF60[];
extern u8 D_ovl2d_800CBF20[];
extern AbilStep D_ovl2d_800CBE34[];
extern s32 func_80161104();
void func_ovl2d_800CAED8(u8 *arg0);

void func_ovl2d_800CAE14(void) {
    func_800183E0(D_ovl2d_800CBF60);
    func_800183E0(D_ovl2d_800CBF20);
}

void func_ovl2d_800CAE4C(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl2d_800CBE34[AF(a, u8, 0x197)](a);
}

void func_ovl2d_800CAE90(u8 *a) {
    if (func_80161104() != 0) {
        func_ovl2d_800CAED8(a);
        AF(a, u8, 0x197)++;
    }
}

extern void func_80146C3C();
extern u8 D_80078EC1;
extern AbilStep D_ovl2d_800CBEAC[];
extern AbilStep D_ovl2d_800CBEF8[];
extern void func_ovl2d_800CB4AC();
extern AbilStep D_ovl2d_800CBE40[];
extern s32 func_80146E98();
extern s32 func_80128ED8();
extern void func_ovl2d_800CBBDC();
extern void func_ovl2d_800CBC10();
extern void func_ovl2d_800CBC40();
extern void func_801599A4();
extern void func_80159B3C();
extern void StartRumbleScript();
extern void func_801466F0();
extern s32 func_80161208();
extern s32 D_80062BE8;

extern void func_ovl2d_800CB4CC();
extern s32 ApplyMatrixLV();
extern s32 RotMatrixZYX();
extern s32 rand();

extern s32 func_8014C308();
extern void func_ovl2d_800CB61C();
extern void func_ovl2d_800CB5CC();

extern u8 D_800D387C;
extern u8 D_800D3888;
extern s32 func_801465C0();
extern void func_8001CC3C();
extern void func_80149374();
extern void func_80128EA8();

extern void func_80146CA0();
extern void func_80146E90();
extern u8 D_ovl2d_800CC444;
extern s32 func_8014659C();
extern void func_8001C214();
extern void func_80146DE8();
extern void func_80147324();

extern u8 D_800D57F4;
extern AObj68 D_8011F9D0[];
extern void func_80154274();
extern void func_801655E4();

void func_ovl2d_800CAED8(u8 *arg0) {
    s32 n;
    s32 i;
    AObj68 *p;

    n = 0;
    p = D_8011F9D0;
    for (i = 0; i < 0x14; i++) {
        if (p[i].type == 0x25) {
            n++;
        }
    }
    if (n >= 6) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return;
    }
    func_80154274(arg0, &D_800D57F4);
    func_801655E4(arg0);
    AF(arg0, u8, 0x197)++;
}

void func_ovl2d_800CAF80(u8 *arg0) {
    u16 temp_a0;

    temp_a0 = AF(arg0, u16, 0xB8);
    if ((temp_a0 & 0xFFFF) == 0x8000) {
        func_801599A4(arg0);
        func_80159B3C(arg0);
        return;
    }
    if (temp_a0 & 0x4000) {
        func_801466F0(0x25, arg0, 0, -0x40, 0, 1, 0, 0);
        StartRumbleScript(&D_80062BE8);
    }
    if (func_80161208(arg0) == 0) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    }
}

void func_ovl2d_800CB02C(u8 *a) {
    AF(a, s32, 0x44) &= ~2;
}

void func_ovl2d_800CB040(u8 *arg0) {
    if ((D_80078EC1 != 0x1C) || (D_ovl2d_800CBE40[AF(arg0, u16, 2)](), ((AF(arg0, s16, 0xA) < 0x401) == 0))) {
        func_ovl2d_800CB4AC(arg0);
    }
}

void func_ovl2d_800CB0B4(u8 *arg0) {
    u8 *s;
    u8 *o;

    s = AF(arg0, u8 *, 0x4C);
    o = (u8 *) func_8014659C();
    AF(arg0, u8 *, 0x20) = o;
    if (o != 0) {
        func_8001C214(o, &D_ovl2d_800CC444);
        AF(o, u16, 0x10) = AF(AF(s, u8 *, 0x20), u16, 0x10);
        AF(o, s16, 0x12) = (AF(AF(s, u8 *, 0x20), u16, 0x12) + (AF(arg0, s32, 0x50) - 1) * 0x155) & 0xFFF;
        AF(o, u16, 0x14) = AF(AF(s, u8 *, 0x20), u16, 0x14);
        AF(arg0, u16, 0x58) = AF(s, u16, 0x100);
        AF(arg0, u16, 0x5A) = AF(s, u16, 0x102);
        AF(arg0, u16, 0x5C) = AF(s, u16, 0x104);
        func_80149374(s, arg0 + 4);
        AF(AF(arg0, u8 *, 0x20), AMtx, 0x34) = AF(AF(s, u8 *, 0x20), AMtx, 0x34);
        func_80146DE8(arg0, 0, 0, -0x100000);
        func_ovl2d_800CB4CC(arg0);
        func_80146E90(arg0, 0x28);
        func_80147324(0x8E8);
        func_80146CA0(arg0);
        return;
    }
    func_ovl2d_800CB4AC(arg0);
}

extern u8 D_801202A0[];
extern void func_80015978();
extern s32 func_8012E778();
extern s32 func_80013328();
extern u8 D_80126720[];

extern void func_80146A6C();

extern AVec D_ovl2d_800CAE0C;
extern s32 func_80012DBC();
extern s32 func_8014C59C();
extern s32 func_8014C5FC();

extern s32 func_ovl2d_800CB6F4();
extern void func_80146C98();
extern void func_80013F3C();
extern void func_80012558();
extern void func_800126C4();
extern void func_800123F0();
extern void func_80163194();
extern void func_80162FC0();
extern u8 *func_ovl2d_800CB4D4(u8 *arg0);
extern void func_80163408();
extern void func_80163328();
extern u32 func_801632F0();

void func_ovl2d_800CB228(u8 *arg0) {
    AMtx m;
    s32 pad[2];
    u8 *o;
    u32 r;

    o = AF(arg0, u8 *, 0x20);
    if (func_ovl2d_800CB6F4(arg0) == 0) {
        func_80146C98(arg0, 3);
        return;
    }
    func_ovl2d_800CB5CC(arg0);
    func_80013F3C(&m);
    func_80012558(&m, AF(arg0, s16, 0x5A));
    func_800126C4(&m, AF(arg0, s16, 0x58));
    func_800123F0(&m, AF(arg0, s16, 0x5C));
    func_80012558(&m, AF(o, s16, 0x12));
    func_800126C4(&m, AF(o, s16, 0x10));
    func_800123F0(&m, AF(o, s16, 0x14));
    func_80163194(arg0, 0, 0, -0x3000, &m);
    func_80162FC0(arg0);
    AF(o, AMtx, 0x34) = m;
    if (func_80146E98(arg0) != 0) {
        func_80146E90(arg0, 8);
        goto end;
    }
    if (AF(arg0, s32, 0x1C) == 0x27) {
        AF(arg0, u8 *, 0x54) = func_ovl2d_800CB4D4(arg0);
    }
    func_ovl2d_800CB5CC(arg0);
    func_80163408(arg0, 0x2B, 0, 0x40);
    func_80163328(arg0);
    r = func_801632F0(arg0);
    if (r != 0 && (r < 3 || r == 4)) {
        func_80146E90(arg0, 4);
        AF(o, s32, 4) |= 0x80000000;
        func_80147324(0xA7D);
    end:
        func_80146CA0(arg0);
        return;
    }
    if (!(AF(arg0, s32, 0x1C) & 1)) {
        func_80146A6C(0x50, arg0, 0, 0, 0x20, 0, 0);
    }
}

void func_ovl2d_800CB424(u8 *arg0) {
    s32 i;

    if (func_80146E98(arg0) != 0) {
        func_80146CA0(arg0);
        return;
    }
    for (i = 0; i < 4; i++) {
        func_80146A6C(0x4E, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), i, 1);
    }
}

void func_ovl2d_800CB4AC(void) {
    func_80162CCC();
}

void func_ovl2d_800CB4CC(u8 *arg0) {
    AF(arg0, s32, 0x54) = 0;
}

u8 *func_ovl2d_800CB4D4(u8 *arg0) {
    AVec v;
    s32 best;
    s16 d;
    u8 *found;
    u8 *p;

    found = 0;
    best = 0x7FFFFFFF;
    p = D_801202A0;
    if (p < D_801202A0 + 0x6480) {
loop:
        if (AF(p, u16, 0) != 0x282) {
            func_80015978(p + 4, &v);
            if (func_8012E778(p, 0x8C00B4) == 1 && func_8014C308(arg0, p, 0x2B, 0x40) != 0) {
                d = func_80013328(arg0 + 4, p + 4);
                if (d < best) {
                    best = d;
                    found = p;
                }
            }
        }
        p += 0x10C;
        if (p < D_80126720) {
            goto loop;
        }
    }
    return found;
}

void func_ovl2d_800CB5CC(s32 arg0) {
    s32 temp_a1;

    temp_a1 = AF(arg0, s32, 0x54);
    if ((temp_a1 != 0) && (func_8014C308(arg0, temp_a1, 0x2B, 0x40) != 0)) {
        func_ovl2d_800CB61C(arg0, AF(arg0, s32, 0x54));
    }
}

void func_ovl2d_800CB61C(u8 *arg0, u16 *arg1) {
    AVec v;
    u8 *m;

    m = AF(arg0, u8 *, 0x20);
    v = D_ovl2d_800CAE0C;
    if (*arg1 == 0x2CE) {
        v.vy = -0x1AB;
    }
    AF(m, s16, 0x12) = func_80012DBC(AF(m, s16, 0x12), (s16) func_8014C59C(arg0, arg1), 0x10, 1);
    AF(m, s16, 0x10) = func_80012DBC(AF(m, s16, 0x10), (s16) func_8014C5FC(arg0, arg1, &v), 0x10, 1);
}

typedef struct { s32 vx, vy, vz, pad; } ALVec;
extern u8 D_ovl2d_800CBE50;
extern u8 D_ovl2d_800CBE5C;
extern AVec D_ovl2d_800CBEB8[];
extern ALVec D_ovl2d_800CBEE8;

extern u8 D_800AF648[];

s32 func_ovl2d_800CB6F4(u8 *arg0) {
    s32 v[3];
    s16 s[2];
    u8 *mt;

    v[0] = AF(arg0, s16, 6);
    v[1] = AF(arg0, s16, 0xA);
    v[2] = AF(arg0, s16, 0xE);
    mt = D_800AF648;
    gte_SetRotMatrix(mt);
    gte_SetTransMatrix(mt);
    gte_ldlv0(v);
    gte_rtps();
    gte_stsxy(s);
    if ((s[0] >= 0 ? s[0] <= 0xAA : -s[0] <= 0xAA) && (s[1] >= 0 ? s[1] <= 0x80 : -s[1] <= 0x80)) {
        return 1;
    }
    return 0;
}

void func_ovl2d_800CB804(u8 *arg0) {
    if (D_80078EC1 == 0x1C) {
        D_ovl2d_800CBEAC[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

void func_ovl2d_800CB860(u8 *arg0) {
    AVec r;
    AMtx m;
    ALVec w;
    u8 *o;
    u8 *o2;

    o = (u8 *) func_801465C0();
    o2 = o;
    AF(arg0, u8 *, 0x20) = o;
    if (o == NULL) {
        goto fail;
    }

    func_8001CC3C(o, &D_ovl2d_800CBE50, 0, 0);
    AF(o, u8, 0x27) = 0x90;
    AF(o, s16, 0x18) = AF(o, s16, 0x1A) = 0x2000;
    AF(o, s32, 4) |= 0x50000000;
    func_80128EA8(o, arg0 + 0x24, &D_ovl2d_800CBE5C);
    w = D_ovl2d_800CBEE8;
    r = D_ovl2d_800CBEB8[AF(arg0, s32, 0x2C)];
    if (AF(arg0, s32, 0x30) != 0) {
        r.vx += ((rand() & 0x3F) << 4) - 0x200;
        r.vy += ((rand() & 0x3F) << 4) - 0x200;
        r.vz += ((rand() & 0x3F) << 4) - 0x200;
        w.vx = ((rand() & 0x1F) - 0x10) * 0x18000;
        w.vy = ((rand() & 0x1F) - 0x10) * 0x18000;
        w.vz = ((rand() & 0x1F) - 0x10) * 0x18000;
    }
    RotMatrixZYX(&r, &m);
    ApplyMatrixLV(&m, &w, &w);
    AF(arg0, s32, 0x10) = w.vx;
    AF(arg0, s32, 0x14) = w.vy;
    AF(arg0, s32, 0x18) = w.vz;
    AF(o2, u8, 0x24) = 0xC0;
    AF(o2, u8, 0x25) = 0xC0;
    AF(o2, u8, 0x26) = 0x40;
    func_80146E90(arg0, 4);
    AF(arg0, u16, 2)++;
    return;
fail:
    func_80146C3C(arg0);
}

void func_ovl2d_800CBAAC(u8 *arg0) {
    u8 *o;

    o = AF(arg0, u8 *, 0x20);
    func_80128ED8(o, arg0 + 0x24);
    AF(o, u8, 0x27) = AF(arg0, u8, 0x28) - 0x70;
    func_ovl2d_800CBBDC(arg0);
    func_ovl2d_800CBC40(arg0, 0x30);
    if (func_80146E98(arg0) != 0) {
        AF(arg0, s32, 0x10) >>= 2;
        AF(arg0, s32, 0x14) >>= 2;
        AF(arg0, s32, 0x18) >>= 2;
        func_80146E90(arg0, 8);
        AF(arg0, u16, 2)++;
    }
}

void func_ovl2d_800CBB54(u8 *arg0) {
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    func_ovl2d_800CBC10();
    func_80128ED8(temp_s0, arg0 + 0x24);
    AF(temp_s0, s8, 0x27) = (s8) (AF(arg0, u8, 0x28) - 0x70);
    func_ovl2d_800CBC40(arg0, 0x40);
    AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) - 0x4000);
    func_ovl2d_800CBBDC(arg0);
    if (func_80146E98(arg0) != 0) {
        func_80146C3C(arg0);
    }
}

void func_ovl2d_800CBBDC(u8 *a) {
    *(s32 *)(a + 0x4) = (*(s32 *)(a + 0x4) + *(s32 *)(a + 0x10));
    *(s32 *)(a + 0x8) = (*(s32 *)(a + 0x8) + *(s32 *)(a + 0x14));
    *(s32 *)(a + 0xc) = (*(s32 *)(a + 0xc) + *(s32 *)(a + 0x18));
}

void func_ovl2d_800CBC10(u8 *arg0) {
    void *m = AF(arg0, void *, 0x20);

    AF(m, u8, 0x24) -= 4;
    AF(m, u8, 0x25) -= 4;
    AF(m, u8, 0x26) -= 4;
}

void func_ovl2d_800CBC40(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_v1, u16, 0x1A) - arg1;
    AF(temp_v1, u16, 0x1A) = temp_v0;
    AF(temp_v1, u16, 0x18) = temp_v0;
}

void func_ovl2d_800CBC60(u8 *arg0) {
    if (D_80078EC1 == 0x1C) {
        D_ovl2d_800CBEF8[AF(arg0, u16, 2)]();
        return;
    }
    func_80146C3C();
}

void func_ovl2d_800CBCBC(u8 *arg0) {
    s32 pad[14];
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = AF(arg0, s32, 0x34);
    temp_v0 = func_801465C0();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CC3C(temp_v0, (s32) &D_800D387C, 0, 0);
        AF(temp_v0, u8, 0x27) = 0x9C;
        AF(temp_v0, s16, 0x1A) = 0x2000;
        AF(temp_v0, s16, 0x18) = 0x2000;
        AF(temp_v0, u8, 0x24) = 0xFF;
        AF(temp_v0, u8, 0x25) = 0;
        AF(temp_v0, u8, 0x26) = 0;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        func_80149374(temp_s2, (s32) (arg0 + 4));
        func_80128EA8(temp_v0, (s32) (arg0 + 0x24), (s32) &D_800D3888);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    func_80146C3C((s32) arg0);
}

void func_ovl2d_800CBD90(u8 *arg0) {
    u16 temp_v0_3;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a0, u8, 0x24) - 0x20;
    AF(temp_a0, u8, 0x24) = temp_v0;
    if ((u32) (temp_v0 & 0xFF) < 0x80U) {
        AF(temp_a0, u8, 0x24) = 0x80U;
    }
    temp_v0_2 = AF(temp_a0, u8, 0x25) + 0x20;
    AF(temp_a0, u8, 0x25) = temp_v0_2;
    if ((u32) (temp_v0_2 & 0xFF) >= 0x81U) {
        AF(temp_a0, u8, 0x25) = 0x80U;
    }
    temp_v0_3 = AF(temp_a0, u16, 0x1A) + 0x400;
    AF(temp_a0, u8, 0x26) = (u8) AF(temp_a0, u8, 0x25);
    AF(temp_a0, u16, 0x1A) = temp_v0_3;
    AF(temp_a0, u16, 0x18) = temp_v0_3;
    if (func_80128ED8(temp_a0, arg0 + 0x24) != 0) {
        func_80146C3C(arg0);
    }
}
