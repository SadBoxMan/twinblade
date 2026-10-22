#include "common.h"
#include "abil.h"
#include "gte.h"

extern void func_80162CCC();
extern void func_800183E0();
extern u8 D_ovl28_800CCA7C[];
extern AbilStep D_ovl28_800CCA18[];
void func_ovl28_800CC1E8(u8 *a);

extern void func_ovl28_800CC6A4();
extern void func_801466F0();
extern void func_80147324();
extern void func_801655E4();
extern s32 D_80078EC8;
extern void func_ovl28_800CC968();
extern s32 func_ovl28_800CC9AC();
extern u8 D_80078EC1;
extern AbilStep D_ovl28_800CCA24[];

extern void func_801599A4();
extern void func_80159B3C();

extern void func_80146CA0();
extern ACol D_ovl28_800CCB10;
extern ACol D_ovl28_800CCB14;
extern s32 func_ovl28_800CC6C4();
extern void func_80146E90();
extern s32 D_ovl28_800CCA9C;
extern s32 func_ovl28_800CC7FC();

extern void func_80146E98();

extern s8 D_ovl28_800CCAD0;
extern ACol D_ovl28_800CCAD4;
extern s32 func_80146578();
extern void func_8001CD9C();
extern void func_800233CC();

extern u8 D_ovl28_800CCA3C;
extern u8 D_ovl28_800CCA44;
extern u8 D_ovl28_800CCA4C;
extern u8 D_ovl28_800CCA54;
extern void func_80015978();
extern void func_8012EFB8();
extern void func_80013F3C();
extern void func_800123F0();
extern void func_80020F34();
extern void func_8012F14C();
extern s32 func_80017714();

extern u16 D_800B99DA;
extern s16 D_ovl28_800CC9E8;
extern s16 D_ovl28_800CC9EA;
extern s16 D_ovl28_800CC9F0;
extern s16 D_ovl28_800CC9F2;
extern s32 D_800A2B78;
extern s32 D_ovl28_800CC9EC;
extern s32 D_ovl28_800CC9F4;
extern s32 D_ovl28_800CCB18;
extern void func_ovl28_800CB00C();

void func_ovl28_800CAE80(s32 *arg0, s32 arg1, s32 arg2) {
    s32 t;      /* (r149) the package's code starts at 0x800CAE80 (abil/ovl28.yaml, stream T): the first two
                   instructions read D_800B99DA; r137 had them at the end of jtbl_ovl28_800CAE0C and an uninitialised v0 */

    if (!(D_800B99DA & 1)) {
        if (D_ovl28_800CC9EC == 0) {
            D_ovl28_800CC9E8++;
            if (++D_ovl28_800CC9EA >= 0x200) {
                D_ovl28_800CC9EC = 1;
            }
        } else {
            D_ovl28_800CC9E8--;
            D_ovl28_800CC9EA--;
            if (D_ovl28_800CC9E8 <= 0) {
                D_ovl28_800CC9EC ^= 1;
            }
        }
        if (!(D_800B99DA & 1)) {
            if (D_ovl28_800CC9F4 == 0) {
                D_ovl28_800CC9F0++;
                if (++D_ovl28_800CC9F2 >= 0x200) {
                    D_ovl28_800CC9F4 = 1;
                }
            } else {
                D_ovl28_800CC9F0--;
                D_ovl28_800CC9F2--;
                if (D_ovl28_800CC9F0 <= 0) {
                    D_ovl28_800CC9F4 ^= 1;
                }
            }
        }
    }
    t = *arg0;
    D_ovl28_800CCB18 = t;
    D_800A2B78 = (t >> 28) & 7;
    func_ovl28_800CB00C(arg0, arg1, arg2);
}

extern s16 D_800C7C74;
extern s32 D_ovl28_800CC9F8;
extern s32 func_ovl28_800CC0A0();
extern void func_ovl28_800CC110();

extern u8 *func_ovl28_800CB1F8();
extern u8 * func_ovl28_800CB3C0();
extern u8 * func_ovl28_800CBA18();
extern u8 * func_ovl28_800CB5D0();
extern u8 * func_ovl28_800CB7BC();
extern u8 * func_ovl28_800CBC2C();
extern u8 * func_ovl28_800CBE28();

void func_ovl28_800CB00C(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 **t;
    u32 *p;
    u8 *vert;
    u8 *norm;
    u8 *f;
    u32 h;
    u32 next;
    s32 n;

    t = AF(arg0, u8 **, 8);
    p = AF(arg0, u32 *, 0xC);
    vert = t[0];
    norm = t[2];
    f = t[4];
    do {
        h = p[0];
        n = p[1];
        p += 2;
        switch (((h >> 24) & 0xFC) - 0x20) {
        case 0x00:
            func_ovl28_800CB1F8(f, vert, norm, p, n, arg2, AF(arg1, s32, 4));
            f += n * 16;
            break;
        case 0x08:
            func_ovl28_800CB3C0(f, vert, norm, p, n, arg2, AF(arg1, s32, 4));
            f += n * 20;
            break;
        case 0x0C:
            func_ovl28_800CBA18(f, vert, norm, p, n, arg2, AF(arg1, s32, 4));
            f += n * 32;
            break;
        case 0x10:
            func_ovl28_800CB5D0(f, vert, norm, p, n, arg2, AF(arg1, s32, 4));
            f += n * 20;
            break;
        case 0x18:
            func_ovl28_800CB7BC(f, vert, norm, p, n, arg2, AF(arg1, s32, 4));
            f += n * 24;
            break;
        case 0x14:
            func_ovl28_800CBC2C(f, vert, norm, p, n, arg2, AF(arg1, s32, 4));
            f += n * 28;
            break;
        case 0x1C:
            func_ovl28_800CBE28(f, vert, norm, p, n, arg2, AF(arg1, s32, 4));
            f += n * 36;
            break;
        }
        next = h & 0xFFFFFF;
        p = (u32 *) (next | 0x80000000);
    } while (next != 0);
}

u8 *func_ovl28_800CB1F8(u8 *f, u8 *vert, u8 *norm, u8 *prim, s32 n, s32 arg5, s32 arg6) {
    s32 flag;
    s32 z;
    u8 *p;

    p = prim + D_800C7C74 * 0x14;
    for (; n != 0; n--, f += 0x10, p += 0x28) {
        gte_ldv3(vert + AF(f, u16, 0xA) * 8, vert + AF(f, u16, 0xC) * 8, vert + AF(f, u16, 0xE) * 8);
        gte_rtpt();
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            continue;
        }
        gte_nclip();
        gte_stopz(&z);
        if (z <= 0) {
            continue;
        }
        gte_stsxy3_f3(p);
        gte_avsz3();
        gte_stotz(&z);
        if (func_ovl28_800CC0A0(p) != 0) {
            AF(p, s32, 4) = D_ovl28_800CC9F8;
        } else {
            gte_ldrgb(f + 4);
            gte_ldv0(norm + AF(f, u16, 8) * 8);
            gte_nccs();
            gte_strgb(p + 4);
        }
        func_ovl28_800CC110(arg6, z, arg5, p, 0x4000000);
    }
    return p;
}

extern s32 D_ovl28_800CC9FC;

u8 *func_ovl28_800CB3C0(u8 *f, u8 *vert, u8 *norm, u8 *prim, s32 n, s32 arg5, s32 arg6) {
    s32 flag;
    s32 z;
    u8 *p;

    p = prim + D_800C7C74 * 0x18;
    for (; n != 0; n--, f += 0x14, p += 0x30) {
        gte_ldv3(vert + AF(f, u16, 0xA) * 8, vert + AF(f, u16, 0xC) * 8, vert + AF(f, u16, 0xE) * 8);
        gte_rtpt();
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            continue;
        }
        gte_nclip();
        gte_stopz(&z);
        if (z <= 0) {
            continue;
        }
        gte_stsxy3_f4(p);
        gte_ldv0(vert + AF(f, u16, 0x10) * 8);
        gte_rtps();
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            continue;
        }
        gte_stsxy(p + 0x14);
        gte_avsz4();
        gte_stotz(&z);
        if (func_ovl28_800CC0A0(p) != 0) {
            AF(p, s32, 4) = D_ovl28_800CC9FC;
        } else {
            gte_ldrgb(f + 4);
            gte_ldv0(norm + AF(f, u16, 8) * 8);
            gte_nccs();
            gte_strgb(p + 4);
        }
        func_ovl28_800CC110(arg6, z, arg5, p, 0x5000000);
    }
    return p;
}

extern s32 D_ovl28_800CCA08;

u8 *func_ovl28_800CB5D0(u8 *f, u8 *vert, u8 *norm, u8 *prim, s32 n, s32 arg5, s32 arg6) {
    s32 flag;
    s32 z;
    u8 *p;
    u8 *q;

    p = prim + D_800C7C74 * 0x1C;
    for (; n != 0; n--, f += 0x14, p += 0x38) {
        gte_ldv3(vert + AF(f, u16, 0xA) * 8, vert + AF(f, u16, 0xE) * 8, vert + AF(f, u16, 0x12) * 8);
        gte_rtpt();
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            continue;
        }
        gte_nclip();
        gte_stopz(&z);
        if (z <= 0) {
            continue;
        }
        gte_stsxy3_g3(p);
        gte_avsz3();
        gte_stotz(&z);
        if (func_ovl28_800CC0A0(p) != 0) {
            AF(p, s32, 0x14) = AF(p, s32, 0xC) = AF(p, s32, 4) = D_ovl28_800CCA08;
        } else {
            gte_ldrgb(f + 4);
            q = norm + AF(f, u16, 8) * 8;
            gte_ldv3(q, q, q);
            gte_ncct();
            gte_strgb3_g3(p);
        }
        func_ovl28_800CC110(arg6, z, arg5, p, 0x6000000);
    }
    return p;
}

extern s32 D_ovl28_800CCA0C;

u8 *func_ovl28_800CB7BC(u8 *f, u8 *vert, u8 *norm, u8 *prim, s32 n, s32 arg5, s32 arg6) {
    s32 flag;
    s32 z;
    u8 *p;
    u8 *q;

    p = prim + D_800C7C74 * 0x24;
    for (; n != 0; n--, f += 0x18, p += 0x48) {
        gte_ldv3(vert + AF(f, u16, 0xA) * 8, vert + AF(f, u16, 0xE) * 8, vert + AF(f, u16, 0x12) * 8);
        gte_rtpt();
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            continue;
        }
        gte_nclip();
        gte_stopz(&z);
        if (z <= 0) {
            continue;
        }
        gte_stsxy3_g4(p);
        gte_ldv0(vert + AF(f, u16, 0x16) * 8);
        gte_rtps();
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            continue;
        }
        gte_stsxy(p + 0x20);
        gte_avsz4();
        gte_stotz(&z);
        if (func_ovl28_800CC0A0(p) != 0) {
            AF(p, s32, 0x1C) = AF(p, s32, 0x14) = AF(p, s32, 0xC) = AF(p, s32, 4) = D_ovl28_800CCA0C;
        } else {
            gte_ldrgb(f + 4);
            q = norm + AF(f, u16, 8) * 8;
            gte_ldv3(q, q, q);
            gte_ncct();
            gte_strgb3_g3(p);
            gte_ldv0(norm + AF(f, u16, 8) * 8);
            gte_nccs();
            gte_strgb(p + 0x1C);
        }
        func_ovl28_800CC110(arg6, z, arg5, p, 0x8000000);
    }
    return p;
}

extern u8 D_80063880;
extern s32 D_ovl28_800CCA04;

u8 *func_ovl28_800CBA18(u8 *f, u8 *vert, u8 *norm, u8 *prim, s32 n, s32 arg5, s32 arg6) {
    s32 flag;
    s32 z;
    u8 *p;

    p = prim + D_800C7C74 * 0x28;
    gte_ldrgb(&D_80063880);
    for (; n != 0; n--, f += 0x20, p += 0x50) {
        gte_ldv3(vert + AF(f, u16, 0x16) * 8, vert + AF(f, u16, 0x18) * 8, vert + AF(f, u16, 0x1A) * 8);
        gte_rtpt();
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            continue;
        }
        gte_nclip();
        gte_stopz(&z);
        if (z <= 0) {
            continue;
        }
        gte_stsxy3_ft4(p);
        gte_ldv0(vert + AF(f, u16, 0x1C) * 8);
        gte_rtps();
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            continue;
        }
        gte_stsxy(p + 0x20);
        gte_avsz4();
        gte_stotz(&z);
        if (func_ovl28_800CC0A0(p) != 0) {
            AF(p, s32, 4) = D_ovl28_800CCA04;
        } else {
            gte_ldv0(norm + AF(f, u16, 0x14) * 8);
            gte_nccs();
            gte_strgb(p + 4);
        }
        func_ovl28_800CC110(arg6, z, arg5, p, 0x9000000);
    }
    return p;
}

extern u8 D_80063884;
extern s32 D_ovl28_800CCA10;

u8 *func_ovl28_800CBC2C(u8 *f, u8 *vert, u8 *norm, u8 *prim, s32 n, s32 arg5, s32 arg6) {
    s32 flag;
    s32 z;
    u8 *p;
    u8 *q;

    p = prim + D_800C7C74 * 0x28;
    gte_ldrgb(&D_80063884);
    for (; n != 0; n--, f += 0x1C, p += 0x50) {
        gte_ldv3(vert + AF(f, u16, 0x12) * 8, vert + AF(f, u16, 0x16) * 8, vert + AF(f, u16, 0x1A) * 8);
        gte_rtpt();
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            continue;
        }
        gte_nclip();
        gte_stopz(&z);
        if (z <= 0) {
            continue;
        }
        gte_stsxy3_gt3(p);
        gte_avsz3();
        gte_stotz(&z);
        if (func_ovl28_800CC0A0(p) != 0) {
            AF(p, s32, 0x1C) = AF(p, s32, 0x10) = AF(p, s32, 4) = D_ovl28_800CCA10;
        } else {
            q = norm + AF(f, u16, 0x10) * 8;
            gte_ldv3(q, q, q);
            gte_ncct();
            gte_strgb3(p + 4, p + 0x10, p + 0x1C);
        }
        func_ovl28_800CC110(arg6, z, arg5, p, 0x9000000);
    }
    return p;
}

extern u8 D_80063888;
extern s32 D_ovl28_800CCA14;

u8 *func_ovl28_800CBE28(u8 *f, u8 *vert, u8 *norm, u8 *prim, s32 n, s32 arg5, s32 arg6) {
    s32 flag;
    s32 z;
    u8 *p;
    u8 *q;

    p = prim + D_800C7C74 * 0x34;
    gte_ldrgb(&D_80063888);
    for (; n != 0; n--, f += 0x24, p += 0x68) {
        gte_ldv3(vert + AF(f, u16, 0x16) * 8, vert + AF(f, u16, 0x1A) * 8, vert + AF(f, u16, 0x1E) * 8);
        gte_rtpt();
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            continue;
        }
        gte_nclip();
        gte_stopz(&z);
        if (z <= 0) {
            continue;
        }
        gte_stsxy3_gt4(p);
        gte_ldv0(vert + AF(f, u16, 0x22) * 8);
        gte_rtps();
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            continue;
        }
        gte_stsxy(p + 0x2C);
        gte_avsz4();
        gte_stotz(&z);
        if (func_ovl28_800CC0A0(p) != 0) {
            AF(p, s32, 0x28) = AF(p, s32, 0x1C) = AF(p, s32, 0x10) = AF(p, s32, 4) = D_ovl28_800CCA14;
        } else {
            q = norm + AF(f, u16, 0x14) * 8;
            gte_ldv3(q, q, q);
            gte_ncct();
            gte_strgb3(p + 4, p + 0x10, p + 0x1C);
            gte_ldv0(norm + AF(f, u16, 0x14) * 8);
            gte_nccs();
            gte_strgb(p + 0x28);
        }
        func_ovl28_800CC110(arg6, z, arg5, p, 0xC000000);
    }
    return p;
}

s32 func_ovl28_800CC0A0(u8 *arg0) {
    s32 b = AF(arg0, u8, 0xA);

    if ((D_ovl28_800CC9E8 < b && b < D_ovl28_800CC9EA) || (D_ovl28_800CC9F0 < b && b < D_ovl28_800CC9F2)) {
        return 1;
    }
    return 0;
}

void func_ovl28_800CC110(s32 arg0, s32 arg1, s32 arg2, s32 *arg3, s32 arg4) {
    s32 *temp_a0;

    temp_a0 = arg0 + ((arg1 >> arg2) * 4);
    *arg3 = (*temp_a0 & 0xFFFFFF) | arg4;
    *temp_a0 = (s32) arg3 & 0xFFFFFF;
}

void func_ovl28_800CC144(void) {
    func_800183E0(D_ovl28_800CCA7C);
}

void func_ovl28_800CC16C(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl28_800CCA18[AF(a, u8, 0x197)](a);
}

void func_ovl28_800CC1B0(u8 *a) {
    func_ovl28_800CC1E8(a);
    AF(a, u8, 0x197)++;
}

void func_ovl28_800CC1E8(u8 *arg0) {
    func_801655E4();
    D_80078EC8 = 0x1C2;
    func_801466F0(0x1A, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), (s32) AF(arg0, s16, 0xE), 0, 0, 1);
    func_80147324(0xA63);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

void func_ovl28_800CC260(s32 arg0) {
    func_801599A4();
    func_80159B3C(arg0);
}

void func_ovl28_800CC290(void) {
}

void func_ovl28_800CC298(u8 *arg0) {
    if (D_80078EC1 != 0x10) {
        func_ovl28_800CC6A4();
        return;
    }
    func_ovl28_800CC968(arg0);
    func_ovl28_800CC9AC(arg0);
    D_ovl28_800CCA24[AF(arg0, u16, 2)](arg0);
}

void func_ovl28_800CC310(u8 *arg0) {
    u8 *o;

    o = (u8 *) func_80146578();
    AF(arg0, u8 *, 0x20) = o;
    if (o != 0) {
        func_8001CD9C(o, &D_ovl28_800CCAD0);
        func_800233CC(&D_ovl28_800CCAD0, 0xC0);
        AF(o, s16, 0x2C) = 1;
        AF(o, s16, 0x1A) = 0;
        AF(o, s16, 0x18) = 0;
        AF(o, s16, 0x10) = 0;
        AF(o, s16, 0x12) = 0;
        AF(o, s16, 0x14) = 0;
        AF(o, s32, 4) |= 0x50000000;
        AF(arg0, s16, 0x5A) = 0;
        AF(arg0, s16, 0x58) = 0;
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, s16, 0x62) = 0;
        D_ovl28_800CCB14.r = 0x20;
        D_ovl28_800CCB14.g = 0;
        D_ovl28_800CCB14.b = 0x20;
        D_ovl28_800CCAD4 = D_ovl28_800CCB14;
        D_ovl28_800CCB10.r = 0xFF;
        D_ovl28_800CCB10.g = 0xFF;
        D_ovl28_800CCB10.b = 0xFF;
        func_80146CA0(arg0);
        return;
    }
    func_ovl28_800CC6A4(arg0);
}

void func_ovl28_800CC424(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_a2;

    temp_a2 = AF(arg0, void *, 0x20);
    AF(arg0, u16, 0x60) = (u16) (AF(arg0, u16, 0x60) + 0x60);
    temp_v0 = AF(temp_a2, u16, 0x1A) + 0x200;
    AF(temp_a2, u16, 0x1A) = temp_v0;
    AF(temp_a2, u16, 0x18) = temp_v0;
    temp_v0_2 = AF(arg0, u16, 0x5A) + AF(arg0, u16, 0x60);
    AF(arg0, u16, 0x5A) = temp_v0_2;
    AF(arg0, u16, 0x58) = temp_v0_2;
    AF(temp_a2, u16, 0x10) = (u16) ((AF(temp_a2, u16, 0x10) + 0x9F) & 0xFFF);
    AF(temp_a2, u16, 0x12) = (u16) ((AF(temp_a2, u16, 0x12) + 0x71) & 0xFFF);
    func_ovl28_800CC6C4((s32) arg0, (s32) &D_ovl28_800CCB10, (s32) &D_ovl28_800CCB14, (s32) (arg0 + 0x58));
    if ((s16) AF(arg0, u16, 0x5A) >= 0x1001) {
        AF(arg0, u16, 0x58) = 0x1000U;
        AF(arg0, u16, 0x5A) = 0x1000U;
        func_80146E90((s32) arg0, 0x20);
        func_80146CA0((s32) arg0);
    }
}

void func_ovl28_800CC4E8(u8 *arg0, s32 arg1) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    func_80146E98((s32) arg0, arg1);
    if (AF(arg0, s32, 0x1C) < 8) {
        temp_v0 = AF(arg0, u16, 0x58) - 0x100;
        AF(arg0, u16, 0x58) = temp_v0;
        if ((s16) temp_v0 < 0) {
            AF(arg0, u16, 0x58) = 0U;
        }
        temp_v0_2 = AF(arg0, u16, 0x5A) - 0x100;
        AF(arg0, u16, 0x5A) = temp_v0_2;
        if ((s16) temp_v0_2 < 0) {
            AF(arg0, u16, 0x5A) = 0U;
        }
        temp_v0_3 = AF(temp_s1, u16, 0x1A) - 0x100;
        AF(temp_s1, u16, 0x1A) = temp_v0_3;
        AF(temp_s1, u16, 0x18) = temp_v0_3;
        if ((s16) AF(temp_s1, u16, 0x1A) < 0) {
            AF(arg0, s16, 0x60) = 0;
            AF(temp_s1, u16, 0x1A) = 0U;
            AF(temp_s1, u16, 0x18) = 0U;
            func_80146CA0((s32) arg0);
        }
    }
    AF(temp_s1, u16, 0x10) = (u16) ((AF(temp_s1, u16, 0x10) + 0x2D) & 0xFFF);
    AF(temp_s1, u16, 0x12) = (u16) ((AF(temp_s1, u16, 0x12) + 0x16) & 0xFFF);
    func_ovl28_800CC6C4((s32) arg0, (s32) &D_ovl28_800CCB10, (s32) &D_ovl28_800CCB14, (s32) (arg0 + 0x58));
}

void func_ovl28_800CC5E4(u8 *arg0) {
    u8 *m;
    u16 t;
    u16 u;

    m = AF(arg0, u8 *, 0x20);
    AF(m, u16, 0x1E) += 0x200;
    t = AF(arg0, u16, 0x60) + 0xC0;
    AF(arg0, u16, 0x60) = t;
    u = AF(m, u16, 0x1A) + t;
    AF(m, u16, 0x1A) = u;
    AF(m, u16, 0x18) = u;
    if (AF(m, s16, 0x1A) > 0xC00) {
        AF(m, u16, 0x1A) = 0xC00;
        AF(m, u16, 0x18) = 0xC00;
        func_80146CA0(arg0);
    }
}

void func_ovl28_800CC658(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_v1, u16, 0x1E) + 0x80;
    AF(temp_v1, u16, 0x1E) = temp_v0;
    if ((s16) temp_v0 >= 0x1000) {
        func_ovl28_800CC6A4();
    }
}

void func_ovl28_800CC6A4(void) {
    func_80162CCC();
}

s32 func_ovl28_800CC6C4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_s5;

    temp_s5 = AF(arg0, void *, 0x20);
    AF(arg3, u16, 6) = (u16) AF(temp_s5, u16, 0x12);
    func_ovl28_800CC7FC(arg0, arg1, arg2, arg3, /* extra? */ &D_ovl28_800CCA9C);
    AF(arg3, u16, 6) = (u16) ((AF(arg3, u16, 6) + 0x555) & 0xFFF);
    func_ovl28_800CC7FC(arg0, arg1, arg2, arg3, /* extra? */ &D_ovl28_800CCA9C);
    AF(arg3, u16, 6) = (u16) ((AF(arg3, u16, 6) + 0x555) & 0xFFF);
    func_ovl28_800CC7FC(arg0, arg1, arg2, arg3, /* extra? */ &D_ovl28_800CCA9C);
    AF(arg3, u16, 6) = (u16) AF(temp_s5, u16, 0x10);
    func_ovl28_800CC7FC(arg0, arg1, arg2, arg3, /* extra? */ &D_ovl28_800CCA9C);
    AF(arg3, u16, 6) = (u16) ((AF(arg3, u16, 6) - 0x555) & 0xFFF);
    func_ovl28_800CC7FC(arg0, arg1, arg2, arg3, /* extra? */ &D_ovl28_800CCA9C);
    AF(arg3, u16, 6) = (u16) ((AF(arg3, u16, 6) - 0x555) & 0xFFF);
    return func_ovl28_800CC7FC(arg0, arg1, arg2, arg3, /* extra? */ &D_ovl28_800CCA9C);
}

s32 func_ovl28_800CC7FC(u8 *arg0, ACol *arg1, ACol *arg2, s16 *arg3, u8 *arg4) {
    AMtx m;
    s32 pad[8];
    AVec v;
    AVec r;

    AF(arg4, s32, 0x30) = 0x50000000;
    AF(arg4, ACol, 0x20) = *arg1;
    AF(arg4, ACol, 0x24) = *arg1;
    AF(arg4, ACol, 0x28) = *arg2;
    AF(arg4, ACol, 0x2C) = *arg2;
    func_80015978(arg0 + 4, &v);
    func_8012EFB8(&v, &v);
    func_80013F3C(&m);
    func_800123F0(&m, arg3[3]);
    r.vx = arg3[0];
    r.vy = arg3[1];
    r.vz = arg3[2];
    func_80020F34(&m, &r);
    m.t[0] = v.vx;
    m.t[1] = v.vy;
    m.t[2] = v.vz;
    func_8012F14C(&m, &D_ovl28_800CCA3C, arg4);
    func_8012F14C(&m, &D_ovl28_800CCA44, arg4 + 8);
    func_8012F14C(&m, &D_ovl28_800CCA4C, arg4 + 0x10);
    func_8012F14C(&m, &D_ovl28_800CCA54, arg4 + 0x18);
    AF(arg4, s16, 4) = 0;
    AF(arg4, s16, 0xC) = 0;
    AF(arg4, s16, 0x14) = 0;
    AF(arg4, s16, 0x1C) = 0;
    return func_80017714(arg4);
}

void func_ovl28_800CC968(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x4C);
    AF(arg0, s16, 6) = (s16) AF(AF(temp_v1, void *, 0x20), s32, 0x48);
    AF(arg0, s16, 0xA) = (s16) AF(AF(temp_v1, void *, 0x20), s32, 0x4C);
    AF(arg0, s16, 0xE) = (s16) AF(AF(temp_v1, void *, 0x20), s32, 0x50);
}

extern s8 D_ovl28_800CCAD1;
extern s8 D_ovl28_800CCAD2;

s32 func_ovl28_800CC9AC() {
    s32 v;

    v = D_800B99DA & 1;
    if (v) {
        v = 0xFF;
    } else {
        v = 0xEF;
    }
    D_ovl28_800CCAD0 = v;
    D_ovl28_800CCAD1 = v;
    D_ovl28_800CCAD2 = v;
    return v;
}
