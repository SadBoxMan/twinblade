#include "common.h"
#include "abil.h"

extern s32 D_ovl1b_800CB538;
extern void func_800183E0();
void func_ovl1b_800CAE0C(void) {
    func_800183E0(&D_ovl1b_800CB538);
}

extern AbilStep D_ovl1b_800CB4FC[];
extern AbilStep D_ovl1b_800CB508[];
void func_ovl1b_800CAEB0(u8 *a);

void func_ovl1b_800CAE34(u8 *a) {
    AF(a, s32, 0x44) |= 8;
    D_ovl1b_800CB4FC[AF(a, u8, 0x197)](a);
}

void func_ovl1b_800CAE78(u8 *a) {
    func_ovl1b_800CAEB0(a);
    AF(a, u8, 0x197)++;
}

extern s32 func_80146A6C();
extern void func_80146C3C();
extern u8 D_80078EC1;
extern void func_80147324();
extern void func_8014B944();
extern void func_801655E4();
extern void func_801657A0();
extern s32 func_80165910();

void func_ovl1b_800CAEB0(u8 *arg0) {
    func_801657A0();
    if (func_80165910(arg0) == 0) {
        func_80147324(0x7A3);
        func_8014B944(arg0, 0x100000, 1);
        func_801655E4(arg0);
    }
    func_80146A6C(0x21, arg0, 0, 0, 0, 0, 0);
    AF(arg0, u8, 0x197) = (u8) (AF(arg0, u8, 0x197) + 1);
}

extern void func_80165840();
extern void func_80165A20();
extern s32 D_80078EA4;
extern s32 D_80078EC8;
extern s32 MulMatrix();
extern s32 RotMatrixYXZ();
extern s32 ApplyMatrixSV();
extern s32 RotMatrixZ();

void func_ovl1b_800CAF38(s32 arg0) {
    if (D_80078EC8 == 0) {
        func_80165840();
        func_80165A20(arg0);
        return;
    }
    D_80078EA4 = 0xA00000;
}

void func_ovl1b_800CAF8C(void) {
}

extern u8 D_ovl1b_800CB558[];
extern void func_800233CC();
extern u8 *func_801465C0();
extern void func_8001CD50();

extern u16 D_800B99DA;
extern void func_80017DC4();
extern void func_8012F14C();
extern void func_800D20C0();
extern void func_800D23D0();

static inline void func_ovl1b_800CAF94_rot(u8 *arg0, u8 *mat, AVec *v) {
    AVec r;
    AMtx m;

    func_800D20C0(v, &r, 5);
    AF(arg0, u16, 6) = v->vx;
    AF(arg0, u16, 0xA) = v->vy;
    AF(arg0, u16, 0xE) = v->vz;
    func_800D23D0(&r);
    r.vz = (D_800B99DA & 0x1F) << 7;
    RotMatrixYXZ(&r, &m);
    MulMatrix(mat, &m);
}

void func_ovl1b_800CAF94(u8 *arg0) {
    AVec v;
    void *mdl;
    u8 *mat;
    void *o;
    u16 t;

    mdl = AF(arg0, void *, 0x20);
    if (D_80078EC1 == 2) {
        mat = arg0 + 0x38;
        t = AF(mdl, u16, 0x1A) + 0xC0;
        AF(mdl, u16, 0x1A) = t;
        AF(mdl, u16, 0x18) = t;
        o = AF(arg0, void *, 0x34);
        v.vx = v.vy = v.vz = 0x1000;
        func_80017DC4(&v, mat);
        v.vz = 0;
        v.vx = 0;
        v.vy = -0x2C;
        func_8012F14C(AF(o, s32, 0x20) + 0x34, &v, &v);
        func_ovl1b_800CAF94_rot(arg0, mat, &v);
        if (--AF(arg0, s32, 0x1C) == -1) {
            AF(arg0, u16, 2)++;
        }
    } else {
        func_80146C3C(arg0);
    }
}

extern AMtx D_800AE620;

static inline void func_ovl1b_800CB0C8_inl(u8 *arg0) {
    AVec v;
    AVec ang;
    AMtx m;
    AVec *pv;
    u8 *p;

    p = AF(arg0, u8 *, 0x34);
    pv = &v;
    pv->vx = pv->vy = pv->vz = 0x1000;
    func_80017DC4(pv, arg0 + 0x38);
    pv->vx = pv->vz = 0;
    pv->vy = -0x2C;
    func_8012F14C(AF(p, u8 *, 0x20) + 0x34, pv, pv);
    func_800D20C0(pv, &ang, 5);
    AF(arg0, u16, 6) = pv->vx;
    AF(arg0, u16, 0xA) = pv->vy;
    AF(arg0, u16, 0xE) = pv->vz;
    func_800D23D0(&ang);
    ang.vz = (D_800B99DA & 0x1F) << 7;
    RotMatrixYXZ(&ang, &m);
    MulMatrix(arg0 + 0x38, &m);
}

void func_ovl1b_800CB0C8(u8 *arg0) {
    AVec w;
    AMtx n;
    u8 *mo;
    u8 *o;
    s16 i;
    u16 t;

    mo = AF(arg0, u8 *, 0x20);
    if (D_80078EC1 == 2) {
        t = AF(mo, u16, 0x1E) + 0x100;
        AF(mo, u16, 0x1E) = t;
        if ((s16) t < 0x1000) {
            func_ovl1b_800CB0C8_inl(arg0);
            return;
        }
        for (i = 0; i < 0x1000; i += 0x100) {
            o = (u8 *) func_80146A6C(0xE, arg0, 0, 0, 0, 1, 0);
            if (o == NULL) {
                continue;
            }
            w.vx = 0x48;
            w.vy = w.vz = 0;
            n = D_800AE620;
            RotMatrixZ(i, &n);
            ApplyMatrixSV(&n, &w, &w);
            func_8012F14C(arg0 + 0x38, &w, &w);
            AF(o, u16, 6) = w.vx;
            AF(o, u16, 0xA) = w.vy;
            AF(o, u16, 0xE) = w.vz;
            AF(o, AMtx, 0x38) = AF(arg0, AMtx, 0x38);
        }
    }
    func_80146C3C(arg0);
}

void func_ovl1b_800CB33C(u8 *a) {
    D_ovl1b_800CB508[AF(a, u16, 2)](a);
}

void func_ovl1b_800CB378(u8 *arg0) {
    u8 *o;

    if (D_80078EC1 != 2) {
        func_80146C3C(arg0);
        return;
    }
    if (!(AF(arg0, s32, 0x2C) & 0x8000)) {
        D_ovl1b_800CB558[1] = D_ovl1b_800CB558[2] = 0xA0;
        D_ovl1b_800CB558[0] = D_ovl1b_800CB558[4] = D_ovl1b_800CB558[5] = D_ovl1b_800CB558[6] = 0;
        func_800233CC(D_ovl1b_800CB558, 0x60);
        AF(arg0, u16, 2) = 3;
        return;
    }
    o = func_801465C0();
    if (o != NULL) {
        func_8001CD50(o, D_ovl1b_800CB558);
        AF(o, u8 *, 0x34) = arg0 + 0x38;
        AF(o, s16, 0x1A) = 0;
        AF(o, s16, 0x18) = 0;
        AF(o, s32, 4) |= 0x50000000;
        AF(arg0, u8 *, 0x20) = o;
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2)++;
    }
}

void func_ovl1b_800CB478(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    temp_a1 = AF(arg0, s32, 0x34);
    if (D_80078EC1 == 2) {
        temp_v0 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 == -1) {
            func_80146A6C(0x21, temp_a1, 0, 0, 0, 0x8000, 0);
            AF(arg0, s32, 0x1C) = 0x20;
        }
    } else {
        func_80146C3C(arg0, temp_a1);
    }
}
