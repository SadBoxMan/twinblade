#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "work.h"

/* Controller state, one per port (0x4C bytes) */
typedef struct {
    /* 0x00 */ u8 pad0[4];
    /* 0x04 */ s32 unk4;
    /* 0x08 */ u8 data[0x44]; /* receive buffer handed to PadInitDirect */
} Pad;

extern u8 D_800BA118[];
extern s32 D_800AE610;
extern Pad D_80078D98[2];
extern s32 D_80078E30;

/* A file the game looks up on the disc by ISO9660 name */
typedef struct {
    /* 0x00 */ char name[0x14];
    /* 0x14 */ CdlFILE file;
    /* 0x2C */ s32 unk2C;
} FileEntry; /* size 0x30 */

/* One file inside a .CD archive, resolved to an absolute disc position */
typedef struct {
    /* 0x0 */ CdlLOC pos;
    /* 0x4 */ s32 size;
} CdFileLoc;

/* LIST.CD as loaded: per archive, a count followed by (sector, size) pairs */
typedef struct {
    /* 0x0 */ s32 sector;
    /* 0x4 */ s32 size;
} ListEntry;

extern FileEntry g_FileTable[22];
extern FileEntry g_FileTableExtra; /* looked up separately, may be absent */
extern CdFileLoc g_ArchiveFileLoc[];
/* LIST.CD is read to a fixed address */
#define LIST_BUF ((ListEntry *)0x80180000)
extern s32 D_800747D0;
extern s32 D_800747D4;
extern s32 D_80063074;
extern s32 D_800747D8;

extern void func_80019990(void);
extern s32 func_80019A24(CdlFILE *file, void *dest, s32 arg2, s32 arg3);
extern void func_80016714(void *p, s32 size); /* zero-fills size bytes */
extern void func_800142C8(void);
extern void func_80014928(void);
extern void func_800143AC(void);
extern void func_80014444(void);
extern void func_8001C044(void);
extern void func_80014588(void);
extern void func_80015310(void);
extern void func_80028A48(void);
extern void func_80028C50(void);
extern void func_80018FC8(void);

extern s16 D_800AF7CE;
extern s32 D_800747C8;
extern s32 D_800A654C;
extern s32 D_800747EC;
extern s32 D_80075838;
extern s32 D_80078E80;
extern s32 D_80078E84;
extern s32 D_80078E88;
extern s32 D_80078F08;
extern s32 D_80078EE4;
extern s32 D_80078EF0;
extern s32 D_80078F00;
extern s32 D_80078EF8;
extern s32 D_800760C8;
extern s32 D_80075A40;
extern s32 D_800A2B70;
extern s32 D_800BA0FC;
extern s32 D_800C7D24;
extern s32 D_800747AC;
extern s32 D_800760AC;
extern s32 D_8007609C;
extern s32 D_800760A0;
extern s32 D_800760A4;
extern s32 D_800760A8;
extern s32 D_800747C0;
extern s32 D_800AE7EC;
extern s32 D_800747FC;
extern s32 D_80078EFC;
extern u8 D_800BA1B8[];
extern s32 D_800A5E58[];
extern s32 ApplyMatrixSV();
extern s32 func_80016A7C();
extern s32 func_80017294();
extern s32 func_800173DC();
extern s32 func_8001751C();
extern s32 func_80017778();
extern s32 func_80017930();
extern s32 func_80034B98();
extern s32 func_8005C358();
extern s32 func_80016F18();
extern s32 func_8001CFDC();
extern s32 func_8001D074();
extern s32 func_80029124();
extern s32 func_800291A0();
extern s32 func_8002A544();
extern void func_8001B34C();
extern s32 D_80078E90;
extern void func_80029344();
extern s32 D_80078EE8;
extern s32 D_80078EEC;
extern s32 D_80078EF4;
extern void ApplyMatrixLV();
extern s32 func_8002A7B4(s32 d);
extern s32 D_800747F8;
extern s32 D_800AE6A8;
typedef struct {
    /* 0x0 */ s32 vx;
    /* 0x4 */ s32 vy;
    /* 0x8 */ s32 vz;
    /* 0xC */ u8 r;
    /* 0xD */ u8 g;
    /* 0xE */ u8 b;
} LightDir; /* GsF_LIGHT */
extern void GsSetFlatLight(s32 id, LightDir *light);

extern s32 func_80029178(s32 n);
extern u16 D_800638FA[];
extern u16 D_800638FC[];

extern s16 func_80012AB0(s16 a, s16 b);
extern s32 func_80012B04(s16 a, s16 b, s16 c);

extern void func_800128B4(void *p);
extern void func_80013ED0(u16 *m, u16 *x, u16 *y, u16 *z);
extern void func_80013F98(u8 *a, u8 *b);
extern void func_80013FBC(u8 *a, u8 *b);
extern void func_80013FE0(u8 *n, void *a);
extern s16 func_80012D0C(s16 a, s16 b, s16 c, s16 *d);
extern s32 func_80012E0C(s16 a, s16 b, s16 c, s16 d);

extern s32 Lzc(s32 v);
extern void VectorNormalS(VECTOR *v, SVECTOR *out);

extern s16 func_80013028(s16 a, s16 b, s16 c, s16 d, s16 *e);
extern s32 func_8001311C(s16 a, s16 b, s16 c);
extern void Square0(VECTOR *in, VECTOR *out);
extern void func_80029044(void);
extern void func_8002906C(void);
extern void func_80029094(void);
extern s32 func_80028FDC(s32 a);
extern s32 func_80029020(s32 a);
extern s32 func_80028DBC(s32 a);
extern s32 func_80028E00(s32 a);
extern void func_80029274(void);

extern s32 D_80126950;
extern void InitGeom(void);
extern void SetGeomScreen(s32 h);
extern void GsInit3D(void);
extern void GsInitCoordinate2(void *super, void *c);
extern void GsSetLightMode(s32 m);
extern void func_800144D4(void);
extern void func_8001455C(void);
extern void func_8002850C(s16 r, s16 g, s16 b);
extern void func_8002823C(void);
extern void ClearImage(RECT *r, s32 a, s32 b, s32 c);
extern void EnterCriticalSection(void);
extern void ExitCriticalSection(void);
extern void InitHeap(u32 *p, s32 n);

typedef struct {
    s16 flag;
    u8 pad2[14];
} Ent10;
extern Ent10 D_800B93D8[];
extern Ent10 D_800B97D8[];
extern u16 D_80078DCA;
extern u16 D_80078DD2;
extern u16 D_80078E16;
extern u16 D_80078E1E;
extern u8 D_80078DD2b[];

extern u16 func_80015018(s32 n);
extern u16 func_80014ED4(s32 n);

extern u8 D_80075A50[];
extern u8 D_80063906[];

extern u8 D_800638FE[];
extern u8 D_80063900[];
extern u8 D_800638F8[];
extern u8 D_8006AEF4;
extern s16 D_800A46CC;
extern s32 D_800BA0F8;
extern u8 D_80076251[];

extern u16 D_8006A990;
extern u16 D_800A4E8E;
extern u8 D_800A4F17;
extern s32 D_800A4F24;
extern u8 D_800B9E92[];
extern void func_8002EC10(void);
extern void func_80036EB4();
extern void SsSetSerialVol(s32 a, s32 b, s32 c);

extern s32 D_800760E0;
extern void _SpuInit(s32 n);
extern u8 D_80063904[];
extern u8 D_800BA2B8[];
extern void func_80031B7C();
extern void func_80034844();
extern s32 func_80036EE8();
extern s16 D_800760E8;
extern s16 D_800760EC;
extern void func_8002FA3C();

extern u8 D_80063902[];
extern s32 func_8002A738();
extern s32 func_8002A748();
extern s32 func_8002A4C8();
extern s32 func_8002A4D8();
extern s32 func_8002A9A8();
extern s32 func_8002A9B8();
extern s32 func_8002A27C();
extern s32 func_8002A28C();
extern void func_80036F18();
extern u8 D_800A4F1A;
extern s32 D_800C6D28;
extern void func_8001CF48();

extern u8 D_800B9ED2[];
extern u8 D_800B9ED3[];
extern void func_80016224(s32 a, s32 b);
extern void func_8001D1C4();
extern void func_8001F9F8();
extern u8 D_800B9A11;
extern s32 func_8002A088(s16 a);
extern void func_8001B26C();
extern s32 D_800C6D10;
extern s32 D_800C6D34;

extern void GsGetLw(void *c, void *m);
extern void func_8001C9D0(u8 *a);
extern void SpuRead(s32 a, s32 n);
extern void SpuSetTransferStartAddr(s32 a);
extern s32 D_80076218;
extern s32 func_8002DC68(u32 a, s32 b);
extern void func_80038308(s16 n);
extern s16 D_800A4E86;

extern s32 D_8006AEE8;
extern s32 D_80078F10;
extern void CdMix(u8 *v);
extern u8 D_800A4F19;

typedef struct { s16 entry; s16 b; s16 sound; } SoundPack;   /* a sound request: its package's archive entry, ?, the sound id */
extern SoundPack D_80063138[];
extern s32 D_8007623C;
extern u8 D_80076243;
extern void func_80038908(u8 *p);
extern u8 D_800B9CD8[];

extern s32 CdReadyCallback();
extern s32 D_8006AEF0;
extern u8 D_80076110;
extern s32 func_8002A2B0();
extern void MulMatrix2(void *a, void *b);
extern void RotMatrix(void *r, void *m);

extern LightDir D_800A5E88[3];
extern void func_80028620(s32 id, LightDir *src);
extern s32 func_8002A728();
extern s32 func_8002AA00(s32 n);
extern s8 D_80062BBC;
extern s8 D_80062BBD;
extern s8 D_800747B8;
extern s8 D_800747B9;
extern s16 D_800760E4;
extern void SsSetSerialAttr(s32 a, s32 b, s32 c);
extern void GsMapModelingData(s32 p);

extern u8 D_800AE648[];
extern void GsSetFogParam(void *p);
extern s16 D_800C6D18;
extern s32 D_800C6D1C;
extern s8 D_800C6D20;
extern s8 D_800C6D22;
extern void GsSetAmbient(s16 r, s16 g, s16 b);
extern s16 D_800AE7E0;
extern s16 D_800AE7E2;
extern s16 D_800AE7E4;

extern s32 func_8002A998();
extern void func_8001BC6C(void *p, s32 n);
extern u8 D_800630E8[];

extern s32 func_80029CD4(s32 n);
extern s32 func_80029E30();
typedef struct { s32 w[0xB7]; } Blob2DC;
extern Blob2DC D_80075CC0;
extern void func_8001BBBC(s32 a, s32 b, s32 c);
extern s32 D_80074808;
extern s32 D_8007480C;
extern s32 D_800A5E60;
extern void func_80024448();
extern void func_80026D64();
extern s32 D_80078D88;
extern s32 D_800A2B78;

extern s32 func_8002A76C();
extern u8 D_80078F28[];

extern u8 func_80014C28(u8 n);
extern u8 func_80014CF8(u8 a, s32 b);
extern void func_80015118(u16 *p);
extern u8 func_80014C28(u8 n);
extern u8 func_80014CF8(u8 a, s32 b);
extern void func_80015118(u16 *p);
extern void func_80015118(u16 *p);

typedef struct { u8 b[8]; } B8;

extern s32 func_8002A26C();
extern s32 func_8002A4B8();

extern s32 func_80029504();
extern void AddPrim(void *ot, void *p);
extern u8 D_800A651C[];
extern u16 D_800B9A02;

extern void (*D_8006351C[])(u8 *);
extern s32 func_8002A4FC();
extern s32 func_8002A4FC();

extern s32 func_80029DB4();
extern s32 func_8002A9DC();
extern void func_8002CCD8();

extern s32 D_800747F0;
extern s32 D_800747F4;
extern s32 D_800BA1B4;

extern s32 D_80063108;
extern s32 D_80063120;
extern u32 D_800A6610[2][0x1000];

extern s32 func_8002A354();
extern void func_8002D4C8(s32 a, s32 b);
extern void func_8016E918(s32 a, s16 b);
extern s32 func_8002A354();
extern void func_8002AAAC();
extern void func_8002D4C8(s32 a, s32 b);
extern void func_8016E918(s32 a, s16 b);

extern s32 func_8002A108();
extern s32 D_80078E8C;
extern s16 D_80078EB2;
extern s16 D_80078EB4;
extern s16 D_80078EB6;
extern s16 D_80078EB8;
extern s8 D_80078EC0;

extern void func_800145EC(s32 n);
extern s8 D_800AF7C2;
extern s8 D_800AF7C3;
extern s8 D_800AF7C4;
extern void func_80019AF8(s32 n);
extern s32 catan(s32 a, s32 b);
typedef struct { s32 len; u32 *ot; s32 c; s32 d; s32 e; } OtEnt;
extern OtEnt D_800A6518[];

extern s32 D_800638A0[];
extern s32 D_800638EC;

extern u8 D_80078E7C;
extern u8 D_80078E7D;
extern u8 D_80078E7E;
extern u8 D_80078E7F;

extern void GsDefDispBuff(s32 a, s32 b, s32 c, s32 d);
extern void GsInitGraph(s32 w, s32 h, s32 f, s32 a, s32 b);
extern void func_800147B8(void);
extern u16 D_80062A3C;
extern u16 D_80062A3E;
extern u16 D_80062A40;
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern u16 D_800AF7C0;

extern void SetLineG2(void *p);
extern u8 *func_80010A08(s32 n);
extern void func_80017E8C(s32 n);
extern void func_80018094(void *p, s32 z, s32 a);
extern s32 RotTransPers3(void *a, void *b, void *c, void *d, void *e, void *f, s32 *flag, s32 *p);

extern s16 D_800B9ECA;
extern void func_80027C10(void);
extern void GsGetLw(void *coord, void *m);

extern s32 D_800747E4;
extern s32 D_800747E8;

extern s32 func_8002A834(s32 d);

extern s32 D_80076040;
extern s32 func_800291B4(s32 a);
extern void func_8002AC00(s32 n);

extern void func_80016638(void *o, s32 a, s32 b);
extern s32 RotTransPers4(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h, s32 *flag, s32 *p);
extern void SetPolyF4(void *p);
typedef struct {
    u32 tag;
    u8 r0, g0, b0, code;
    s16 x0, y0;
    s16 x1, y1;
    s16 x2, y2;
    s16 x3, y3;
} PolyF4;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } Mtx;
extern s32 rsin(s32 a);
extern s32 rcos(s32 a);
extern void func_8001282C(u8 *n);

inline void func_800123F0(Mtx *m, s32 a) {
    Mtx r;
    s32 s = rsin(a);
    s32 c = rcos(a);
    r.m[0][0] = c;
    r.m[0][1] = -s;
    r.m[0][2] = 0;
    r.m[1][0] = s;
    r.m[1][1] = c;
    r.m[1][2] = 0;
    r.m[2][0] = 0;
    r.m[2][1] = 0;
    r.m[2][2] = 0x1000;
    gte_SetRotMatrix(m);
    gte_ldclmv(&r.m[0][0]);
    gte_rtir();
    gte_stclmv(&m->m[0][0]);
    gte_ldclmv(&r.m[0][1]);
    gte_rtir();
    gte_stclmv(&m->m[0][1]);
    gte_ldclmv(&r.m[0][2]);
    gte_rtir();
    gte_stclmv(&m->m[0][2]);
    func_8001282C((u8 *)m);
}

inline void func_80012558(Mtx *m, s32 a) {
    Mtx r;
    s16 s = rsin(a);
    s32 c = rcos(a);
    r.m[0][0] = c;
    r.m[0][1] = 0;
    r.m[0][2] = s;
    r.m[1][0] = 0;
    r.m[1][1] = 0x1000;
    r.m[1][2] = 0;
    r.m[2][0] = -s;
    r.m[2][1] = 0;
    r.m[2][2] = c;
    gte_SetRotMatrix(m);
    gte_ldclmv(&r.m[0][0]);
    gte_rtir();
    gte_stclmv(&m->m[0][0]);
    gte_ldclmv(&r.m[0][1]);
    gte_rtir();
    gte_stclmv(&m->m[0][1]);
    gte_ldclmv(&r.m[0][2]);
    gte_rtir();
    gte_stclmv(&m->m[0][2]);
    func_8001282C((u8 *)m);
}

inline void func_800126C4(Mtx *m, s32 a) {
    Mtx r;
    s32 s = rsin(a);
    s32 c = rcos(a);
    r.m[0][0] = 0x1000;
    r.m[0][1] = 0;
    r.m[0][2] = 0;
    r.m[1][0] = 0;
    r.m[1][1] = c;
    r.m[1][2] = -s;
    r.m[2][0] = 0;
    r.m[2][1] = s;
    r.m[2][2] = c;
    gte_SetRotMatrix(m);
    gte_ldclmv(&r.m[0][0]);
    gte_rtir();
    gte_stclmv(&m->m[0][0]);
    gte_ldclmv(&r.m[0][1]);
    gte_rtir();
    gte_stclmv(&m->m[0][1]);
    gte_ldclmv(&r.m[0][2]);
    gte_rtir();
    gte_stclmv(&m->m[0][2]);
    func_8001282C((u8 *)m);
}

void func_8001282C(u8 *n) {
    s16 c[4];
    s16 b[4];
    s16 a[4];
    func_80013FE0(n, a);
    func_800128B4(a);
    func_80013FBC(n, b);
    func_800128B4(b);
    func_80013F98(n, c);
    func_800128B4(c);
    func_80013ED0((u16 *)n, (u16 *)c, (u16 *)b, (u16 *)a);
}

extern void func_80013F3C(Mtx *m);

extern Mtx D_800AE688;

extern void SetLineG4(void *p);

extern void func_80018194(u8 *prim, u32 z, s32 flags);
extern void SetPolyGT3(void *p);
extern u16 GetTPage(s32 tp, s32 abr, s32 x, s32 y);
extern u16 GetClut(s32 x, s32 y);

extern void func_8001820C(u8 *prim, u32 z, s32 flags);
extern void SetPolyGT4(void *p);

extern void SetPolyFT4(void *p);

typedef struct { s16 vx, vy, vz, pad; } SVec;
typedef struct { s32 vx, vy, vz, pad; } LVec;

extern u8 D_800A46BA;
extern u8 D_800A6588[];
extern s32 func_80013228();
extern s32 func_800132BC();
extern s32 func_800133E4();
extern s32 SquareRoot0(s32 a);
extern void func_80016714(void *p, s32 size); /* zero-fills size bytes */
extern s32 func_80016F18(u8 *a, s32 m, s32 k);
extern s32 func_80017294(u8 *a, s32 m);
extern s32 func_80034B98(void);

extern s32 func_80013350();
extern s32 func_80013478();
extern void func_80014070();
extern void func_800128EC();
extern s32 func_80013154(s32 a, s32 b, s32 c);
extern s32 func_8001ABBC(s32 kind, s32 id, s32 *file, s32 c, s32 d);
extern void func_8001B3C4(void);
extern void func_80014998(void);
extern u16 D_80078DDA;

void func_800128B4(void *p) {
    s32 v[3];
    func_80014070(p, v);
    func_800128EC(v, p);
}

void func_800128EC(VECTOR *a, SVECTOR *out) {
    VECTOR v = *a;
    s32 m;
    s32 t;
    m = Lzc(v.vx);
    t = Lzc(v.vy);
    if (t < m) {
        m = t;
    }
    t = Lzc(v.vz);
    if (t < m) {
        m = t;
    }
    if (m < 0x12) {
        m = 0x12 - m;
        v.vx >>= m;
        v.vy >>= m;
        v.vz >>= m;
    }
    VectorNormalS(&v, out);
}

extern s32 D_800A4ECC;
extern s32 D_800A4ED0;
extern u16 D_800A4ED4;
extern u16 D_800A4ED6;
extern void SpuSetReverbModeParam();
extern void func_80016450(u8 a, s32 b);
extern void RotMatrixZYX(void *r, void *m);
extern u8 D_800C5328[];
extern u8 D_800C532A[];
extern s32 func_8002AA3C(void);
extern u8 D_800B9A64;
extern u8 D_800747C4;
extern u8 D_800747C5;
extern void func_80028620();
extern s16 func_80012CB8(s16 a, s16 b, s16 c);
extern s16 D_800A4EFC;
extern void func_80030F80(void);
extern void func_8002D320(void);
extern void func_80031BE0(void);
extern s16 func_80012B58(s16 a, s16 b, s16 c, s16 *p);

extern s32 D_800A2BA0;
extern s32 D_800C7D2C;
extern u8 *D_8006A970[];
extern s32 D_80065504[];
typedef struct { s32 w[9]; } Blk24;
extern Blk24 D_80079204;
extern void func_80029218(void);
extern void func_8001903C(void);
extern void func_8001B324(void);
extern s16 func_80012E6C(s32 a, s32 b, s16 n, s16 m, s16 *f);
extern s16 func_80012FC8(s16 a, s16 b, s16 c, s16 d);
extern s32 func_8001923C(s32 n);
extern s32 rand(void);
extern void func_8002992C(s32 a);

extern s32 D_80126984;
extern s32 D_80126988;
extern s32 D_8012698C;
extern s32 D_80126990;
extern s32 D_80126994;
extern s32 D_80126998;
extern s32 D_8012699C;
extern s32 D_801269A0;
extern u8 D_800C6E2A[];
extern s32 D_800A5E78;
extern s32 D_800A5E5C;
extern s32 SpuIsTransferCompleted(s32 n);
extern s32 func_8002A5C4();
extern void func_80018E9C(u8 *pad);
extern void func_80018F88(u8 *p);
extern s32 func_80018A20(s32 i);
extern void func_80018C64(u8 *p);
extern void func_80018CE8(u8 *p);
extern void func_80029774(s32 a);
extern void func_80020DA4(u8 *a, u8 *b);
extern void func_80020F34(u8 *a, u8 *b);
extern void func_800373D0(void);
extern void func_80053308(s32 a);
extern void GsSetRefView2();

typedef struct { u8 flag; } Flag8;
extern Flag8 D_80076242;
extern void (*D_80063500[])(u8 *o);

extern u16 D_800A4E8A;
extern s16 D_800A4EF4;
extern s16 D_800A46B8;
extern s32 D_8007610C;
extern s32 D_800A63E8;
extern u8 D_800A63E4;
extern u8 D_80075AC0[];
extern s16 D_8006A9BC[];
extern u16 D_8006A9B0[];
extern Mtx D_800AF648;
extern s32 ratan2(s32 y, s32 x);
extern void SsVabClose(s32 id);
extern void SetBackColor(s32 r, s32 g, s32 b);
extern void CompMatrix();
extern void SetRotMatrix();
extern void SetTransMatrix();
extern void func_80016714(void *p, s32 size); /* zero-fills size bytes */
extern void func_8002EE90(void);
extern void func_8003819C(s32 i, s16 a, s16 b, s16 c);

void func_800129CC(s16 *v, s16 *out) {
    if (v[2] != 0) {
        out[0] = (ratan2(-v[1], v[2]) - 0x400) & 0xFFF;
    } else {
        out[0] = 0;
    }
    out[1] = 0;
    if (v[0] != 0) {
        out[2] = (ratan2(v[1], v[0]) + 0x400) & 0xFFF;
    } else {
        out[2] = 0;
    }
}

s16 func_80012A60(s16 a, s16 b) {
    s16 r = func_80012AB0(a, b);
    if (r >= 0x800) {
        r = 0xFFF - r;
    }
    return r;
}

s16 func_80012AB0(s16 a, s16 b) {
    return (a - b) & 0xFFF;
}

s32 func_80012ABC(s32 a, s32 b, s32 c) {
    return (a + func_80012B04(a, b, c)) & 0xFFF;
}

s32 func_80012B04(s16 a, s16 b, s16 c) {
    s16 t = 4;
    if (a == b) {
        return 0;
    }
    return func_80012B58(a, b, c, &t);
}

s16 func_80012B58(s16 a, s16 b, s16 c, s16 *p) {
    s16 d;
    s16 t;
    s16 r;
    d = b - a;
    t = *p;
    if (t == 0 || c == 0) {
        if ((s16)d > 0x800) { d -= 0x1000; } if ((s16)d < -0x800) { d += 0x1000; }
        return d;
    }
    if ((s16)d > 0x800) { d -= 0x1000; } if ((s16)d < -0x800) { d += 0x1000; }
    r = (s16)d / c;
    if ((s16)r == 0) {
        *p = t - 1;
        return func_80012B58(a, b, c / 2, p);
    }
    return r;
}

s16 func_80012C6C(s16 a, s16 b, s16 c) {
    return a + func_80012CB8(a, b, c);
}

s16 func_80012CB8(s16 a, s16 b, s16 c) {
    s16 v = 4;
    if (a == b) {
        return 0;
    }
    return func_80012D0C(a, b, c, &v);
}

typedef struct { s32 w[0x26]; } Blk98;
extern Blk98 D_80072C84;
extern Blk98 D_80078E78;

s16 func_80012D0C(s16 a, s16 b, s16 c, s16 *p) {
    s16 d;
    s16 t;
    s16 r;
    d = b - a;
    t = *p;
    if (t == 0 || c == 0) {
        return d;
    }
    r = (s16)d / c;
    if ((s16)r == 0) {
        *p = t - 1;
        return func_80012D0C(a, b, c / 2, p);
    }
    return r;
}

s32 func_80012DBC(s32 a, s32 b, s32 c, s32 d) {
    return (a + func_80012E0C(a, b, c, d)) & 0xFFF;
}

s32 func_80012E0C(s16 a, s16 b, s16 c, s16 d) {
    s16 t = 4;
    if (a == b) {
        return 0;
    }
    return func_80012E6C(a, b, c, d, &t);
}

s16 func_80012E6C(s32 a, s32 b, s16 n, s16 m, s16 *f) {
    s16 d;
    s16 w;
    s32 r;
    d = w = b - a;
    if (*f == 0 || n == 0) {
        if ((s16)d > 0x800) { d -= 0x1000; } if ((s16)d < -0x800) { d += 0x1000; }
        return d;
    }
    if ((s16)w > 0x800) { w -= 0x1000; } if ((s16)w < -0x800) { w += 0x1000; }
    r = (s16)(w * m / n);
    if (r == 0) {
        r = -1;
        if ((s16)d > 0) {
            r = 1;
        }
    }
    return r;
}

s16 func_80012F74(s16 a, s16 b, s16 c, s16 d) {
    return a + func_80012FC8(a, b, c, d);
}

s16 func_80012FC8(s16 a, s16 b, s16 c, s16 d) {
    s16 v = 4;
    if (a == b) {
        return 0;
    }
    return func_80013028(a, b, c, d, &v);
}

s16 func_80013028(s16 a, s16 b, s16 n, s16 m, s16 *f) {
    s16 d = b - a;
    s32 r;
    if (*f == 0 || n == 0) {
        return d;
    }
    r = (s16)(d * m / n);
    if (r == 0) {
        if (d > 0) {
            return 1;
        }
        return -1;
    }
    return r;
}

s16 func_800130D0(s32 a, s32 b, s32 c) {
    return a + func_8001311C(a, b, c);
}

s32 func_8001311C(s16 a, s16 b, s16 c) {
    return (s16)func_80013154(a, b, c);
}

extern u32 D_80063548[];

extern void SetLineG3();

extern void GsDefDispBuff2(s32 a, s32 b, s32 c, s32 d);
extern void GsInitGraph2(s32 w, s32 h, s32 f, s32 a, s32 b);
extern void func_80014774(void);

extern void SetPolyF3();

extern s32 D_800C6D2C;      /* load request (kind 0): byte count, 0 = a PAC archive */
extern void *D_800AE6E4;    /* load request: the file */
extern s32 D_800BA318;      /* load request (kind 0): destination */
extern s32 D_800A6550;      /* load request (kind 0): sound table */
extern s32 D_800AE640;      /* load request (kind 1): the sound id */
extern s32 D_800A6430;      /* load request (kind 3): the id */
extern s32 func_8001ACF0(s32 kind, s32 id, s32 *file, s32 dest, s32 table);
extern s32 func_8001B394(s32 a);
extern s32 func_8001B7C4(s32 *p);
extern s32 func_8001B0D4(void *file, s16 b);
extern s32 D_800747E0;
extern void func_80036AF8(void *file, s16 b);
extern s32 func_8001A114(void);
extern s32 D_800AE6E8;      /* the last CdSync result */
extern s32 func_8002FD14(s32 a, s32 b);
extern void func_8001A0FC(void);
extern void func_8001A338(u8 intr, u8 *result);
extern u8 D_80078E40[12];       /* the sector's header: position and subheader */
extern u8 D_80079A70[0x2000];   /* a PAC header sector, then the four texture sector buffers */
extern u8 D_80079A74;           /* PAC header: type */
extern u8 D_80079A75;           /* PAC header: 1 = more blocks follow */
extern s32 D_80079A78;          /* PAC header: item count */
extern s32 D_80079A7C;          /* PAC header: block size (header sector included) */
extern u8 D_8007A280[0x800];    /* a CLUT list sector: RECTs, then the colours from +0x90 */
extern s32 D_80072C80;          /* where a type-7 block's payload goes */
extern void func_8002FDC8(void);
extern s32 func_8002FB08(s32 a);
extern s32 func_8002FC64(s32 bytes, u8 *buf);
extern void func_80018714(s32 a);
extern s32 func_80018730(u8 *p);
INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80013154);

s32 func_80013200(void *a, void *b) {
    return SquareRoot0(func_80013228(a, b));
}

s32 func_80013228(VECTOR *a, VECTOR *b) {
    VECTOR d;
    VECTOR sq;
    d.vx = a->vx - b->vx;
    d.vy = a->vy - b->vy;
    d.vz = a->vz - b->vz;
    Square0(&d, &sq);
    return sq.vx + sq.vy + sq.vz;
}

s32 func_80013294(s16 *a, s16 *b) {
    return SquareRoot0(func_800132BC(a, b));
}

s32 func_800132BC(s16 *a, s16 *b) {
    VECTOR d;
    VECTOR sq;
    d.vx = a[0] - b[0];
    d.vy = a[1] - b[1];
    d.vz = a[2] - b[2];
    Square0(&d, &sq);
    return sq.vx + sq.vy + sq.vz;
}

s32 func_80013328(s16 *a, s16 *b) {
    return SquareRoot0(func_80013350(a, b));
}

s32 func_80013350(s16 *a, s16 *b) {
    VECTOR d;
    VECTOR sq;
    d.vx = a[1] - b[1];
    d.vy = a[3] - b[3];
    d.vz = a[5] - b[5];
    Square0(&d, &sq);
    return sq.vx + sq.vy + sq.vz;
}

s32 func_800133BC(s16 *a, s16 *b) {
    return SquareRoot0(func_800133E4(a, b));
}

s32 func_800133E4(s16 *a, s16 *b) {
    VECTOR d;
    VECTOR sq;
    d.vx = a[0] - b[1];
    d.vy = a[1] - b[3];
    d.vz = a[2] - b[5];
    Square0(&d, &sq);
    return sq.vx + sq.vy + sq.vz;
}

s32 func_80013450(s16 *a, s16 *b) {
    return SquareRoot0(func_80013478(a, b));
}

s32 func_80013478(s16 *a, s16 *b) {
    s32 v[3];
    s32 r[3];
    v[0] = a[1] - b[0];
    v[1] = a[3] - b[1];
    v[2] = a[5] - b[2];
    gte_ldlvl(v);
    gte_sqr0();
    gte_stlvnl(r);
    return r[0] + r[1] + r[2];
}

void func_800134FC(s16 a, void *in, void *out) {
    Mtx m;
    func_80013F3C(&m);
    func_800126C4(&m, a);
    ApplyMatrixLV(&m, in, out);
}

void func_80013694(s16 a, void *in, void *out) {
    Mtx m;
    func_80013F3C(&m);
    func_800126C4(&m, a);
    ApplyMatrixSV(&m, in, out);
}

void func_8001382C(s16 a, void *in, void *out) {
    Mtx m;
    func_80013F3C(&m);
    func_80012558(&m, a);
    ApplyMatrixLV(&m, in, out);
}

void func_800139C8(s16 a, void *in, void *out) {
    Mtx m;
    func_80013F3C(&m);
    func_80012558(&m, a);
    ApplyMatrixSV(&m, in, out);
}

void func_80013B64(s16 a, void *in, void *out) {
    Mtx m;
    func_80013F3C(&m);
    func_800123F0(&m, a);
    ApplyMatrixLV(&m, in, out);
}

void func_80013CFC(s16 a, void *in, void *out) {
    Mtx m;
    func_80013F3C(&m);
    func_800123F0(&m, a);
    ApplyMatrixSV(&m, in, out);
}

void func_80013E94(u16 *a, u32 *b) {
    *b = (((u32)(a[0] << 19) >> 22) << 20) | (((u32)(a[1] << 19) >> 22) << 10) | ((u32)(a[2] << 19) >> 22);
}

void func_80013ED0(u16 *m, u16 *x, u16 *y, u16 *z) {
    m[0] = x[0];
    m[1] = y[0];
    m[2] = z[0];
    m[3] = x[1];
    m[4] = y[1];
    m[5] = z[1];
    m[6] = x[2];
    m[7] = y[2];
    m[8] = z[2];
}

void func_80013F3C(Mtx *m) {
    s16 *v = (s16 *)m;
    v[0] = 0x1000;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    v[4] = 0x1000;
    v[5] = 0;
    v[6] = 0;
    v[7] = 0;
    v[8] = 0x1000;
}

void func_80013F68(u8 *a) {
    *(s16 *)(a + 0x4) = 0xfffff000;
    *(s16 *)a = 0;
    *(s16 *)(a + 0x2) = 0;
    *(s16 *)(a + 0x6) = 0;
    *(s16 *)(a + 0x8) = 0x1000;
    *(s16 *)(a + 0xa) = 0;
    *(s16 *)(a + 0xc) = 0x1000;
    *(s16 *)(a + 0xe) = 0;
    *(s16 *)(a + 0x10) = 0;
}

void func_80013F98(u8 *a, u8 *b) {
    *(s16 *)b = *(u16 *)a;
    *(s16 *)(b + 0x2) = *(u16 *)(a + 0x6);
    *(s16 *)(b + 0x4) = *(u16 *)(a + 0xc);
}

void func_80013FBC(u8 *a, u8 *b) {
    *(s16 *)b = *(u16 *)(a + 0x2);
    *(s16 *)(b + 0x2) = *(u16 *)(a + 0x8);
    *(s16 *)(b + 0x4) = *(u16 *)(a + 0xe);
}

void func_80013FE0(u8 *n, void *a) {
    u16 *s = (u16 *)n;
    u16 *d = a;
    d[0] = s[2];
    d[1] = s[5];
    d[2] = s[8];
}

void func_80014004(u8 *a, u8 *b) {
    *(s16 *)a = *(u16 *)b;
    *(s16 *)(a + 0x6) = *(u16 *)(b + 0x2);
    *(s16 *)(a + 0xc) = *(u16 *)(b + 0x4);
}

void func_80014028(u16 *a, u16 *b) {
    a[1] = b[0];
    a[4] = b[1];
    a[7] = b[2];
}

void func_8001404C(u8 *a, u8 *b) {
    *(s16 *)(a + 0x4) = *(u16 *)b;
    *(s16 *)(a + 0xa) = *(u16 *)(b + 0x2);
    *(s16 *)(a + 0x10) = *(u16 *)(b + 0x4);
}

void func_80014070(s16 *a, s32 *b) {
    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];
}

void func_80014094(u8 *a, u8 *b) {
    *(s16 *)b = *(s32 *)a;
    *(s16 *)(b + 0x2) = *(s32 *)(a + 0x4);
    *(s16 *)(b + 0x4) = *(s32 *)(a + 0x8);
}

void func_800140B8(Mtx *m, s16 *v, s32 *out) {
    gte_SetRotMatrix(m);
    gte_ldv0(v);
    gte_rtv0();
    gte_stlvnl(out);
    out[0] <<= 16;
    out[1] <<= 16;
    out[2] <<= 16;
}

s32 func_80014128(void) {
    return ApplyMatrixSV();
}

void func_80014148(void) {
    ApplyMatrixLV();
}

void func_80014168(void *m, B8 *v) {
    B8 t;
    t = *(B8 *)v;
    ApplyMatrixSV(m, &t, v);
}

void func_800141AC(void *m, VECTOR *v) {
    VECTOR t = *v;
    ApplyMatrixLV(m, &t, v);
}

/* One-time graphics setup at boot */
void InitGraph(void)
{
    ResetGraph(0);
    SetGraphDebug(0);
    SetDispMask(0);
    func_80016714(D_800BA118, 0x98);
    func_800142C8();
}

/* Per-mode setup run each time main() re-enters its frame loop */
void func_80014238(void)
{
    func_80014928();
    ResetGraph(1);
    SetDispMask(0);
    VSync(0);
    func_80016714(&D_800AF630, sizeof(Work));
    func_800143AC();
    func_80014444();
    func_8001C044();
    func_80014588();
    func_80015310();
    func_80028A48();
    func_80028C50();
    func_800142C8();
    SetDispMask(1);
}

void func_800142C8(void) {
    func_80029044();
    func_8002906C();
    func_80029094();
    func_80029218();
    func_8001903C();
    func_80018FC8();
    func_8001B324();
    func_80028FDC(7);
    func_80029020(7);
    func_80028DBC(0);
    func_80028E00(0);
}

void func_80014338(void) {
    func_80029044();
    func_8002906C();
    func_80029094();
    func_80028FDC(7);
    func_80029020(7);
    func_80028DBC(0);
    func_80028E00(0);
    func_80029274();
}

void func_80014390(void)
{
    D_800AF630.exitLoop = 0;
    D_800AF630.vsyncMode = 2;
}

void func_800143AC(void) {
    u32 *ot;
    s32 i;
    func_800145EC(1);
    VSync(0);
    ot = D_800A6610[0]; i = 0; D_800AF7C4 = 0; D_800AF7C3 = 0; D_800AF7C2 = 0;
    do { D_800A6518[i].ot = D_800A6610[i]; D_800A6518[i].len = 0xC; D_800A6518[i].c = 0; D_800A6518[i].d = 0; i++; } while (i < 2);
}

void func_80014444(void) {
    register u8 *w = (u8 *)&D_800AF630;
    InitGeom();
    D_80126950 = 0x3E8;
    SetGeomScreen(0x3E8);
    GsInit3D();
    func_800144D4();
    func_8001455C();
    func_8002850C(0x800, 0x800, 0x800);
    func_8002823C();
    GsInitCoordinate2(0, w + 0x1A0);
    GsInitCoordinate2((void *)1, w + 0x1F0);
    GsSetLightMode(0);
}

void func_800144D4(void) {
    D_80126950 = 0x12C;
    func_80053308(0x12C);
    D_80126984 = 0;
    D_80126988 = 0;
    D_8012698C = -0x12C;
    D_80126990 = 0;
    D_80126994 = 0;
    D_80126998 = 0;
    D_8012699C = 0;
    D_801269A0 = 0;
    GsSetRefView2(&D_80126984);
}

void func_80014554(void) {
}

void func_8001455C(void) {
}

s32 func_80014564(s32 a) {
    return func_8005C358(a, 0, 0x10);
}

void func_80014588(void) {
    Ent10 *p = D_800B97D8;
    s16 i;
    for (i = 0; i < 0x20; i++, p++) {
        p->flag = 0;
        func_8005C358(p, 0, 0x10);
    }
}

void func_800145EC(s32 mode) {
    s32 k = (mode & 0xFFFF) * 6;
    u16 w; u16 h; u16 f;
    w = *(u16 *)((u32)&D_80062A3C + k);
    D_800AF7BC = w;
    h = *(u16 *)((u32)&D_80062A3E + k);
    D_800AF7BE = h;
    f = *(u16 *)((u32)&D_80062A40 + k);
    D_800AF7C0 = f;
    GsInitGraph(w, h, f | 4, 0, 0);
    if (D_800AF7BE == 0x1E0) { GsDefDispBuff(0, 0, 0, 0); } else { GsDefDispBuff(0, D_800AF7BE, 0, 0); }
    ResetGraph(1);
    GsInit3D();
    func_80014774();
    func_800147B8();
}

void func_800146B0(s32 mode) {
    s32 k = (mode & 0xFFFF) * 6;
    u16 w; u16 h; u16 f;
    w = *(u16 *)((u32)&D_80062A3C + k);
    D_800AF7BC = w;
    h = *(u16 *)((u32)&D_80062A3E + k);
    D_800AF7BE = h;
    f = *(u16 *)((u32)&D_80062A40 + k);
    D_800AF7C0 = f;
    GsInitGraph2(w, h, f | 4, 0, 0);
    if (D_800AF7BE == 0x1E0) { GsDefDispBuff2(0, 0, 0, 0); } else { GsDefDispBuff2(0, D_800AF7BE, 0, 0); }
    ResetGraph(1);
    GsInit3D();
    func_80014774();
    func_800147B8();
}

void func_80014774(void) {
    RECT r;
    r.w = 0x280;
    r.x = 0;
    r.y = 0;
    r.h = 0x1E0;
    ClearImage(&r, 0, 0, 0);
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800147B8);

void func_80014928(void) {
    EnterCriticalSection();
    InitHeap((u32 *)0x801FF800, 0x800);
    ExitCriticalSection();
}

void func_80014960(void) {
    D_800AF7C4 = 0;
    D_800AF7C3 = 0;
    D_800AF7C2 = 0;
    func_80014998();
}

void func_80014998(void) {
    u8 *p; u8 *w; s32 i;
    w = (u8 *)&D_800AF630; i = 0; p = w;
loop:
    p[0x51] = w[0x192];
    p[0x52] = w[0x193];
    p[0x53] = w[0x194];
    i++;
    p += 0x5C;
    if (i < 2) {
        goto loop;
    }
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800149E0);

u16 func_80014B10(s32 port) {
    u16 b;
    u8 t;
    u16 x;
    u16 y;
    s32 v;
    b = *(u16 *)((u8 *)&D_80078DCA + (u8)port * 0x4C);
    if (b != 0) {
        return b;
    }
    t = func_80014C28(port);
    switch (t) { case 0x53: case 0x73: break; default: return 0; case 0x41: return 0; }
    x = func_80014CF8(port, 5);
    y = func_80014CF8(port, 4);
    v = 0;
    if (x != 0x80) {
        v = 0x1000; if (x >= 0x80) { v = 0x4000; }
    }
    if (y != 0x80) {
        if (y < 0x80) {
            v |= 0x8000;
        } else {
            v |= 0x2000;
        }
    }
    return v;
}

u16 func_80014BFC(u8 i) {
    return (&D_80078DDA)[i * 0x26];
}

u8 func_80014C28(u8 n) {
    return D_80078D98[n].pad0[0];
}

s32 func_80014C54(s32 port, s32 which, s32 mask) {
    u8 *t = (u8 *)&D_80078D98[port & 0xFF];
    s32 v;
    if ((which & 0xFF) == 1) {
        v = *(u16 *)(t + 0x32) & mask;
    } else {
        v = *(u16 *)(t + 0x3A) & mask;
    }
    return v == mask;
}

s32 func_80014CAC(u8 which, s32 mask) {
    s32 v;
    if (which == 1) {
        v = D_80078DCA | D_80078E16;
    } else {
        v = D_80078DD2 | D_80078E1E;
    }
    return (v & mask) != 0;
}

u8 func_80014CF8(u8 i, s32 j) {
    u8 *p = (u8 *)&D_80078D98[i];
    return (p + (u8)j)[0x32];
}

u8 func_80014D30(u8 port, u8 idx) {
    u8 *q = (u8 *)&D_80078D98[port];
    q += idx;
    return q[0x42];
}

u16 func_80014D68(u8 i) {
    return (&D_80078DCA)[i * 0x26];
}

u16 func_80014D94(u8 port) {
    return *(u16 *)((u8 *)&D_80078DD2 + port * 0x4C);
}

u8 func_80014DC0(u8 port) {
    return D_80078D98[port].pad0[0];
}

u8 func_80014DEC(u8 port, u8 idx) {
    u8 *q = (u8 *)&D_80078D98[port];
    q += idx;
    return q[0x32];
}

s32 func_80014E24(u8 port, u8 kind, s32 mask) {
    s32 p = port;
    s32 r;
    if (kind == 1) {
        r = func_80015018(p) & 0xFFFF;
    } else {
        r = func_80014ED4(p) & 0xFFFF;
    }
    return (r & mask) == mask;
}

s32 func_80014E80(u8 which, s32 mask) {
    s32 v;
    if (which == 1) {
        v = func_80015018(0);
    } else {
        v = func_80014ED4(0);
    }
    return (v & mask) != 0;
}

u16 func_80014ED4(s32 port) {
    Pad *p;
    u16 b;
    u8 t;
    u16 rx;
    u16 ry;
    u16 lx;
    u16 ly;
    s32 v;
    p = (void *)&D_80078D98[(u8)port];
    b = *(u16 *)((u8 *)p + 0x3A);
    if (b != 0) {
        return b;
    }
    t = *(u8 *)p;
    switch (t) { case 0x53: case 0x73: break; default: return 0; case 0x41: return 0; }
    { Pad *q = &D_80078D98[(u8)port]; rx = q->data[0x3F]; ry = q->data[0x3E]; lx = q->data[0x2F]; ly = q->data[0x2E]; }
    func_80015118(&rx);
    func_80015118(&ry);
    func_80015118(&lx);
    func_80015118(&ly);
    v = 0;
    if (rx == 0x80 && lx != 0x80) {
        v = 0x1000;
        if (lx >= 0x80) {
            v = 0x4000;
        }
    }
    if (ry == 0x80 && ly != ry) {
        if (ly < 0x80) {
            v |= 0x8000;
        } else {
            v |= 0x2000;
        }
    }
    return v;
}

u16 func_80015018(s32 port) {
    Pad *p;
    u16 b;
    u8 t;
    u16 x;
    u16 y;
    s32 v;
    p = (void *)&D_80078D98[(u8)port];
    b = *(u16 *)((u8 *)p + 0x32);
    if (b != 0) {
        return b;
    }
    t = *(u8 *)p;
    switch (t) { case 0x53: case 0x73: break; default: return 0; case 0x41: return 0; }
    { Pad *q = &D_80078D98[(u8)port]; x = q->data[0x2F]; y = q->data[0x2E]; }
    func_80015118(&x);
    func_80015118(&y);
    v = 0;
    if (x != 0x80) {
        v = 0x1000;
        if (x >= 0x80) {
            v = 0x4000;
        }
    }
    if (y != 0x80) {
        if (y < 0x80) {
            v |= 0x8000;
        } else {
            v |= 0x2000;
        }
    }
    return v;
}

void func_80015118(u16 *a) {
    if ((u32)(a[0] - 0x15) < 0xD7) {
        a[0] = 0x80;
    }
}

void func_8001513C(void) {
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80015144);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80015208);

void func_800152F4(s16 n) {
    D_800B93D8[n].flag = 0;
}

void func_80015310(void) {
    s32 pad[2];
    Ent10 *p;
    for (p = D_800B93D8; p < D_800B97D8; p++) {
        p->flag = 0;
    }
}

void func_8001534C(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d) {
    register Work *w = &D_800AF630;
    func_800153A4((u8 *)w + 0x9DA8 + n * 16, x, a, b, c, d);
}

void func_800153A4(u8 *p, s32 x, s16 a, s16 b, u8 c, u8 d) {
    *(s16 *)(p + 0) = 1;
    *(s16 *)(p + 2) = a;
    *(s16 *)(p + 4) = b;
    *(s32 *)(p + 8) = x;
    p[0xC] = c;
    p[0xD] = d;
}

void func_800153CC(s16 n, s32 x, s16 a, s16 b, u8 c, u8 d) {
    register Work *w = &D_800AF630;
    func_80015424((u8 *)w + 0x9DA8 + n * 16, x, a, b, c, d);
}

void func_80015424(u8 *p, s32 x, s16 a, s16 b, u8 c, u8 d) {
    *(s16 *)(p + 0) = 2;
    *(s16 *)(p + 2) = a;
    *(s16 *)(p + 4) = b;
    *(s32 *)(p + 8) = x;
    p[0xC] = c;
    p[0xD] = d;
}

Ent10 *func_8001544C(void) {
    Ent10 *p;
    s32 pad[2];
    for (p = D_800B93D8; p < D_800B97D8; p++) {
        if (p->flag == 0) {
            return p;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80015498);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80015608);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80015760);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80015908);

void func_80015954(u16 *a, u16 *b) {
    b[1] = a[0];
    b[3] = a[1];
    b[5] = a[2];
}

void func_80015978(u8 *a, u8 *b) {
    *(s16 *)b = *(u16 *)(a + 0x2);
    *(s16 *)(b + 0x2) = *(u16 *)(a + 0x6);
    *(s16 *)(b + 0x4) = *(u16 *)(a + 0xa);
}

void func_8001599C(s32 *a, s32 *b) {
    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];
}

void func_800159C0(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)a;
    *(s32 *)(b + 0x4) = *(s32 *)(a + 0x4);
    *(s32 *)(b + 0x8) = *(s32 *)(a + 0x8);
}

void func_800159E4(u16 *a, u16 *b) {
    b[1] = a[1];
    b[3] = a[3];
    b[5] = a[5];
}

void func_80015A08(u8 *a, u8 *b) {
    *(s16 *)b = *(u16 *)a;
    *(s16 *)(b + 0x4) = *(u16 *)(a + 0x4);
    *(s16 *)(b + 0x8) = *(u16 *)(a + 0x8);
}

void func_80015A2C(s16 *a, s32 *b) {
    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];
}

void func_80015A50(u8 *a, u8 *b) {
    *(s16 *)b = *(s32 *)a;
    *(s16 *)(b + 0x2) = *(s32 *)(a + 0x4);
    *(s16 *)(b + 0x4) = *(s32 *)(a + 0x8);
}

u32 func_80015A74(u32 n) {
    u32 d = 1000000000;
    u32 r = 0;
    s32 i;
    for (i = 0; i < 10; i++) {
        r = (r << 4) | (n / d);
        n = n % d;
        d /= 10;
    }
    return r;
}

s32 func_80015AD0(s16 x, s16 y) {
    s16 d = y;
    s32 t = y << 16;
    s32 r;
    if (t == 0) {
        d = 1;
    }
    r = catan((x << 12) / d, t);
    if (d < 0) {
        if (x >= 0) {
            r += 0x800;
        } else {
            r -= 0x800;
        }
    }
    return r;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80015B6C);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80015D4C);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80015F04);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80016110);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80016224);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80016450);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80016638);

void func_800166E8(s8 *p, s32 n) {
    s32 i = n - 1;
    s32 pad[2];
    if (n != 0) {
        do {
            *p = 0;
            i--;
            p++;
        } while (i != -1);
    }
}

void func_80016714(void *p0, s32 n) {
    u8 *p = p0;
    if (n < 4) {
        while (--n != -1) {
            *p++ = 0;
        }
    } else {
        u32 a = (u32)p;
        s32 k;
        while (a & 3) {
            *p++ = 0;
            a++;
            n--;
        }
        k = n >> 2;
        while (--k != -1) {
            *(u32 *)p = 0;
            p += 4;
        }
        n &= 3;
        while (--n != -1) {
            *p++ = 0;
        }
    }
}

void func_800167B8(s32 a) {
    D_800AF7CE = 0;
    func_80016224((u16)a < 4 ? 0xFF : 0, 0);
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800167F0);

void func_800168B4(void) {
    D_800AF7CE = 0;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800168C4);

void func_80016940(u16 a) {
    D_800AF7CE = 0;
    func_80016450(-(a < 4), 0);
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80016978);

s32 func_80016A3C(u8 *a) {
    return func_80016A7C(a, 0);
}

s32 func_80016A5C(void) {
    return func_80016A7C();
}

s32 func_80016A7C(u8 *a, s32 m) {
    s32 flag;
    s32 p;
    s32 z;
    u8 *prim = func_80010A08(0x14);
    *(s32 *)(prim + 4) = *(s32 *)(a + 0x10);
    *(s32 *)(prim + 0xC) = *(s32 *)(a + 0x14);
    SetLineG2(prim);
    if (m != 0) {
        func_80017E8C(m);
        z = RotTransPers3(a, a + 8, a + 8, prim + 8, prim + 0x10, prim + 0x10, &flag, &p);
    } else {
        *(s32 *)(prim + 8) = *(s32 *)(a + 0);
        *(s32 *)(prim + 0x10) = *(s32 *)(a + 8);
        z = *(s16 *)(a + 4);
        p = 0;
    }
    if (!(p & ~0x1000)) {
        func_80018094(prim, z, *(s32 *)(a + 0x18));
    }
}

void func_80016B60(u8 *o, void *m) {
    u8 *p = func_80010A08(0x20);
    s32 flag;
    s32 otz;
    s32 r;
    *(u32 *)(p + 4) = *(u32 *)(o + 0x18);
    *(u32 *)(p + 0xC) = *(u32 *)(o + 0x1C);
    *(u32 *)(p + 0x14) = *(u32 *)(o + 0x20);
    SetLineG3(p);
    func_80017E8C((s32)m);
    r = RotTransPers3(o, o + 8, o + 0x10, p + 8, p + 0x10, p + 0x18, &otz, &flag);
    if (!(flag & ~0x1000)) {
        func_80018094(p, r, *(s32 *)(o + 0x24));
    }
}

void func_80016C28(u8 *a, s32 m) {
    struct { s32 flag; s32 flag2; s32 otz; } t;
    u8 *prim = func_80010A08(0x28);
    SetLineG4(prim);
    *(s32 *)(prim + 4) = *(s32 *)(a + 0x20);
    *(s32 *)(prim + 0xC) = *(s32 *)(a + 0x24);
    *(s32 *)(prim + 0x14) = *(s32 *)(a + 0x28);
    *(s32 *)(prim + 0x1C) = *(s32 *)(a + 0x2C);
    func_80017E8C(m);
    gte_ldv3(a, a + 8, a + 0x10);
    gte_rtpt();
    gte_stflg(&t.flag);
    gte_stsxy3(prim + 8, prim + 0x10, prim + 0x18);
    gte_ldv0(a + 0x18);
    gte_rtps();
    gte_stflg(&t.flag2);
    t.flag |= t.flag2;
    gte_stsxy(prim + 0x20);
    gte_avsz4();
    gte_stotz(&t.otz);
    if (!(t.flag & ~0x1000)) {
        func_80018094(prim, t.otz, *(s32 *)(a + 0x30));
    }
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80016D78);

void func_80016EB0(s32 a) {
    func_80016F18(a, 0, 1);
}

s32 func_80016ED4(s32 a) {
    return func_80016F18(a, 0, 0);
}

s32 func_80016EF8(u8 *a, s32 m) {
    return func_80016F18(a, m, 0);
}

s32 func_80016F18(u8 *a, s32 m, s32 k) {
    struct { s32 flag; s32 flag2; s32 otz; } t;
    u32 w;
    u8 *prim = func_80010A08(0x28);
    *(s32 *)(prim + 4) = *(s32 *)(a + 0x30);
    SetPolyFT4(prim);
    if (m != 0) {
        func_80017E8C(m);
        gte_ldv3(a, a + 8, a + 0x10);
        gte_rtpt();
        gte_stflg(&t.flag);
        gte_stsxy3(prim + 8, prim + 0x10, prim + 0x18);
        gte_ldv0(a + 0x18);
        gte_rtps();
        gte_stflg(&t.flag2);
        t.flag |= t.flag2;
        gte_stsxy(prim + 0x20);
        gte_avsz4();
        gte_stotz(&t.otz);
    } else {
        *(s32 *)(prim + 8) = *(s32 *)(a + 0);
        *(s32 *)(prim + 0x10) = *(s32 *)(a + 8);
        *(s32 *)(prim + 0x18) = *(s32 *)(a + 0x10);
        *(s32 *)(prim + 0x20) = *(s32 *)(a + 0x18);
        t.otz = *(s16 *)(a + 4); t.flag = 0;
    }
    w = *(u32 *)(a + 0x20); prim[0xC] = w; prim[0xD] = w >> 16;
    w = *(u32 *)(a + 0x24); prim[0x14] = w; prim[0x15] = w >> 16;
    w = *(u32 *)(a + 0x28); prim[0x1C] = w; prim[0x1D] = w >> 16;
    w = *(u32 *)(a + 0x2C); prim[0x24] = w; prim[0x25] = w >> 16;
    if (k != 0) {
        *(u16 *)(prim + 0x16) = GetTPage(2, (*(u32 *)(a + 0x34) >> 28) & 3, (*(u16 *)(a + 0x20) >> 2) & 0x3FC0, 0);
    } else {
        *(u16 *)(prim + 0x16) = GetTPage(0, (*(u32 *)(a + 0x34) >> 28) & 3, (*(u16 *)(a + 0x20) >> 2) & 0x3FC0,
                                         *(u16 *)(a + 0x22) & 0xFF00);
    }
    *(u16 *)(prim + 0xE) = GetClut(a[0x38] < 0xE0 ? 0x160 : 0x100, a[0x38] | 0x100);
    if (!(t.flag & ~0x1000)) {
        func_80018194(prim, t.otz, *(s32 *)(a + 0x34));
    }
}

void func_80017168(u8 *o, void *m) {
    u8 *p = func_80010A08(0x14);
    s32 otz;
    s32 flag;
    s32 r;
    *(u32 *)(p + 4) = *(u32 *)(o + 0x18);
    SetPolyF3(p);
    if (m != 0) {
        func_80017E8C((s32)m);
        r = RotTransPers3(o, o + 8, o + 0x10, p + 8, p + 0xC, p + 0x10, &otz, &flag);
    } else {
        *(u32 *)(p + 8) = *(u32 *)o;
        *(u32 *)(p + 0xC) = *(u32 *)(o + 8);
        *(u32 *)(p + 0x10) = *(u32 *)(o + 0x10);
        r = *(s16 *)(o + 4);
        flag = 0;
    }
    if (!(flag & ~0x1000)) {
        func_80018094(p, r, *(s32 *)(o + 0x1C));
    }
}

s32 func_80017254(s32 a) {
    return func_80017294(a, 0);
}

s32 func_80017274(u8 *a, s32 m) {
    return func_80017294(a, m);
}

s32 func_80017294(u8 *a, s32 m) {
    s32 flag;
    s32 p;
    s32 z;
    u8 *prim = func_80010A08(0x18);
    *(s32 *)(prim + 4) = *(s32 *)(a + 0x20);
    SetPolyF4(prim);
    if (m != 0) {
        func_80017E8C(m);
        z = RotTransPers4(a, a + 8, a + 0x10, a + 0x18, prim + 8, prim + 0xC, prim + 0x10, prim + 0x14, &flag, &p);
    } else {
        *(s32 *)(prim + 8) = *(s32 *)(a + 0);
        *(s32 *)(prim + 0xC) = *(s32 *)(a + 8);
        *(s32 *)(prim + 0x10) = *(s32 *)(a + 0x10);
        *(s32 *)(prim + 0x14) = *(s32 *)(a + 0x18);
        z = *(s16 *)(a + 4);
        p = 0;
    }
    if (!(p & ~0x1000)) {
        func_80018094(prim, z, *(s32 *)(a + 0x24));
    }
}

s32 func_8001739C(u8 *a) {
    return func_800173DC(a, 0);
}

s32 func_800173BC(void) {
    return func_800173DC();
}

s32 func_800173DC(u8 *a, s32 m) {
    s32 flag;
    s32 p;
    s32 z;
    u8 *prim = func_80010A08(0x1C);
    *(s32 *)(prim + 4) = *(s32 *)(a + 0x18);
    *(s32 *)(prim + 0xC) = *(s32 *)(a + 0x1C);
    *(s32 *)(prim + 0x14) = *(s32 *)(a + 0x20);
    SetPolyG3(prim);
    if (m != 0) {
        func_80017E8C(m);
        z = RotTransPers3(a, a + 8, a + 0x10, prim + 8, prim + 0x10, prim + 0x18, &flag, &p);
    } else {
        *(s32 *)(prim + 8) = *(s32 *)(a + 0);
        *(s32 *)(prim + 0x10) = *(s32 *)(a + 8);
        *(s32 *)(prim + 0x18) = *(s32 *)(a + 0x10);
        z = *(s16 *)(a + 4);
        p = 0;
    }
    if (!(p & ~0x1000)) {
        func_80018094(prim, z, *(s32 *)(a + 0x24));
    }
}

s32 func_800174DC(s32 a) {
    return func_8001751C(a, 0);
}

s32 func_800174FC(u8 *a, s32 m) {
    return func_8001751C(a, m);
}

s32 func_8001751C(u8 *a, s32 m) {
    struct { s32 p; s32 flag; s32 otz; } t;
    u32 w;
    u8 *prim = func_80010A08(0x28);
    *(s32 *)(prim + 4) = *(s32 *)(a + 0x24);
    *(s32 *)(prim + 0x10) = *(s32 *)(a + 0x28);
    *(s32 *)(prim + 0x1C) = *(s32 *)(a + 0x2C);
    SetPolyGT3(prim);
    if (m != 0) {
        func_80017E8C(m);
        gte_RotTransPers3(a, a + 8, a + 0x10, prim + 8, prim + 0x14, prim + 0x20, &t.p, &t.flag, &t.otz);
    } else {
        *(s32 *)(prim + 8) = *(s32 *)(a + 0);
        *(s32 *)(prim + 0x14) = *(s32 *)(a + 8);
        *(s32 *)(prim + 0x20) = *(s32 *)(a + 0x10);
        t.otz = *(s16 *)(a + 4); t.p = 0;
    }
    w = *(u32 *)(a + 0x18); prim[0xC] = w; prim[0xD] = w >> 16; w = *(u32 *)(a + 0x1C); prim[0x18] = w; prim[0x19] = w >> 16; w = *(u32 *)(a + 0x20); prim[0x24] = w; prim[0x25] = w >> 16;
    *(u16 *)(prim + 0x1A) = GetTPage((*(u32 *)(a + 0x30) >> 24) & 3, (*(u32 *)(a + 0x30) >> 28) & 3,
                                     (*(u16 *)(a + 0x18) >> 2) & 0x3FC0, *(u16 *)(a + 0x1A) & 0xFF00);
    *(u16 *)(prim + 0xE) = GetClut(a[0x34] < 0xE0 ? 0x160 : 0x100, a[0x34] | 0x100);
    if (!(t.p & ~0x1000)) {
        func_80018194(prim, t.otz, *(s32 *)(a + 0x30));
    }
}

s32 func_800176F0(u8 *a) {
    return func_80017778(a, 0, 1);
}

s32 func_80017714(s32 a) {
    return func_80017778(a, 0, 0);
}

s32 func_80017738(u8 *a, s32 m) {
    return func_80017778(a, m, 1);
}

s32 func_80017758(s32 a, s32 b) {
    return func_80017778(a, b, 0);
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80017778);

s32 func_800178C8(s32 a) {
    return func_80017930(a, 0, 1);
}

s32 func_800178EC(u8 *a) {
    return func_80017930(a, 0, 0);
}

s32 func_80017910(s32 a, s32 b) {
    return func_80017930(a, b, 0);
}

s32 func_80017930(u8 *a, s32 m, s32 k) {
    struct { s32 flag; s32 flag2; s32 otz; } t;
    u32 w;
    u8 *prim = func_80010A08(0x34);
    *(s32 *)(prim + 4) = *(s32 *)(a + 0x30);
    *(s32 *)(prim + 0x10) = *(s32 *)(a + 0x34);
    *(s32 *)(prim + 0x1C) = *(s32 *)(a + 0x38);
    *(s32 *)(prim + 0x28) = *(s32 *)(a + 0x3C);
    SetPolyGT4(prim);
    if (m != 0) {
        func_80017E8C(m);
        gte_ldv3(a, a + 8, a + 0x10);
        gte_rtpt();
        gte_stflg(&t.flag);
        gte_stsxy3(prim + 8, prim + 0x14, prim + 0x20);
        gte_ldv0(a + 0x18);
        gte_rtps();
        gte_stflg(&t.flag2);
        t.flag |= t.flag2;
        gte_stsxy(prim + 0x2C);
        gte_avsz4();
        gte_stotz(&t.otz);
    } else {
        *(s32 *)(prim + 8) = *(s32 *)(a + 0);
        *(s32 *)(prim + 0x14) = *(s32 *)(a + 8);
        *(s32 *)(prim + 0x20) = *(s32 *)(a + 0x10);
        *(s32 *)(prim + 0x2C) = *(s32 *)(a + 0x18);
        t.otz = *(s16 *)(a + 4); t.flag = 0;
    }
    w = *(u32 *)(a + 0x20); prim[0xC] = w; prim[0xD] = w >> 16;
    w = *(u32 *)(a + 0x24); prim[0x18] = w; prim[0x19] = w >> 16;
    w = *(u32 *)(a + 0x28); prim[0x24] = w; prim[0x25] = w >> 16;
    w = *(u32 *)(a + 0x2C); prim[0x30] = w; prim[0x31] = w >> 16;
    *(u16 *)(prim + 0x1A) = GetTPage((*(u32 *)(a + 0x40) >> 24) & 3, (*(u32 *)(a + 0x40) >> 28) & 3,
                                     (*(u16 *)(a + 0x20) >> 2) & 0x3FC0, *(u16 *)(a + 0x22) & 0xFF00);
    *(u16 *)(prim + 0xE) = GetClut(a[0x44] < 0xE0 ? 0x160 : 0x100, a[0x44] | 0x100);
    if (!(t.flag & ~0x1000)) {
        if (k != 0) {
            func_8001820C(prim, t.otz, *(s32 *)(a + 0x40));
        } else {
            func_80018194(prim, t.otz, *(s32 *)(a + 0x40));
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80017B98);

void func_80017D98(u8 *a) {
    *(s16 *)a = 0x1000;
    *(s16 *)(a + 0x2) = 0;
    *(s16 *)(a + 0x4) = 0;
    *(s16 *)(a + 0x6) = 0;
    *(s16 *)(a + 0x8) = 0x1000;
    *(s16 *)(a + 0xa) = 0;
    *(s16 *)(a + 0xc) = 0;
    *(s16 *)(a + 0xe) = 0;
    *(s16 *)(a + 0x10) = 0x1000;
}

void func_80017DC4(u16 *a, u16 *b) {
    b[0] = a[0];
    b[1] = 0;
    b[2] = 0;
    b[3] = 0;
    b[4] = a[1];
    b[5] = 0;
    b[6] = 0;
    b[7] = 0;
    b[8] = a[2];
}

void func_80017DF8(void *r, void *m) {
    u8 tmp[0x20];
    RotMatrix(r, tmp);
    MulMatrix2(tmp, m);
}

void func_80017E30(void *r, void *m) {
    Mtx t;
    RotMatrixZYX(r, &t);
    MulMatrix2(&t, m);
}

void func_80017E68(u8 *a, u8 *b) {
    *(s32 *)(b + 0x14) = *(s16 *)a;
    *(s32 *)(b + 0x18) = *(s16 *)(a + 0x2);
    *(s32 *)(b + 0x1c) = *(s16 *)(a + 0x4);
}

void func_80017E8C(s32 n) {
    Mtx m = *(Mtx *)n;
    CompMatrix(&D_800AF648, &m, &m);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80017F14);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80018094);

void func_80018194(u8 *prim, u32 z, s32 flags) {
    s32 f = flags & 0x40000000;
    if (f != 0) {
        *(s32 *)(prim + 4) |= 0x02000000;
    }
    if (z >= 0x1000) {
        z = 0xFFF;
    }
    AddPrim(*(u8 **)(D_800A651C + D_800B9A02 * 0x14) + z * 4, prim);
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001820C);

void func_80018384(u32 *ot, u32 *prim) {
    if ((u32)&D_800AE610 < (u32)ot) {
        while (1) {}
    }
    *prim = (*prim & 0xFF000000) | (*ot & 0xFFFFFF);
    *ot = (*ot & 0xFF000000) | ((u32)prim & 0xFFFFFF);
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800183E0);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80018450);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800184F0);

void func_80018714(s32 a) {
    D_800C7D24 = 1;
    D_800747AC = a;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80018730);

/* Controller init: clear both pad buffers, then start PsyQ's pad driver */
void InitPad(void)
{
    u32 i;
    Pad *p;

    D_800AE610 = 0;
    for (i = 0; i < 2; i++) {
        p = &D_80078D98[i];
        func_80016714(p, sizeof(Pad));
        p->unk4 = 8;
    }
    func_80018FC8();
    ResetCallback();
    PadInitDirect(D_80078D98[0].data, D_80078D98[1].data);
    PadStartCom();
}

void func_800189A8(void) {
    u32 i;
    Pad *p;
    D_800A5E78 = 1;
    i = 0;
    p = D_80078D98;
    for (; i < 2; i++, p++) {
        if (func_80018A20(i) != 0) {
            func_80018C64((u8 *)p);
        }
        func_80018CE8((u8 *)p);
        func_80018E9C((u8 *)p);
    }
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80018A20);

void func_80018C64(u8 *p) {
    s32 i;
    if (p[8] != 0) {
        func_80018F88(p);
    } else {
        p[0] = p[9];
        for (i = 0; i < 2; i++) {
            p[0x2B - i] = ~(p + i)[0xA];
        }
        for (i = 2; i < 6; i++) {
            (p + i)[0x2A] = (p + i)[0xA];
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80018CE8);

void func_80018E78(void) {
    func_800291A0(0xE2, 0);
}

void func_80018E9C(u8 *pad) {
    s32 n;
    if (pad == (u8 *)D_80078D98) {
        if (D_80078DCA & 0x100) {
            n = func_800291B4(0xE2) + 1;
            if ((u32)(n & 0xFF) >= 0x5A) {
                n = 0;
                func_80028D78(1);
            }
            func_800291A0(0xE2, n & 0xFF);
        } else {
            func_800291A0(0xE2, 0);
        }
    }
}

void func_80018F20(u8 *p) {
    u32 i;
    for (i = 2; i < 8; i++) {
        u8 *q = p + i;
        s32 c = q[0x32];
        if ((u32)(c - 0x51) < 0x5F) {
            q[0x32] = 0x80;
        } else if ((u8)c < 8) {
            q[0x32] = 0;
        } else if ((u8)c >= 0xF8) {
            q[0x32] = 0xFF;
        }
    }
}

void func_80018F88(u8 *p) {
    s32 i = 1;
    u8 *q = p + 1;
    s32 j;
    do {
        q[0x2A] = 0;
        i--;
        q--;
    } while (i >= 0);
    for (j = 2; j < 6; j++) {
        (p + j)[0x2A] = 0x80;
    }
}

void func_80018FC8(void) {
    s32 i;
    Pad *p;
    
    D_800747B9 = 0;
    D_800747B8 = 0;
    D_80062BBC = 0x40;
    D_80062BBD = 0;
    i = 0; p = D_80078D98;
loop:
    p->data[0x43] = 0;
    p->data[0x42] = 0;
    p++; i++;
    if (i < 2) {
        goto loop;
    }
}

void func_80019018(void) {
    D_800747C8 = 0;
}

void func_80019028(void) {
    D_800747C8 = 1;
}

void func_8001903C(void) {
    func_80016714(&D_800747C0, 8);
}

void func_80019064(s32 a) {
    if (D_800747C8 == 0 && D_800B9A64 == 0) {
        D_800747C0 = a;
        D_800747C4 = 0xFF;
        D_800747C5 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800190AC);

s32 func_80019198(void) {
    return D_800747C0;
}

void func_800191A8(void)
{
    D_80078E30 = -1;
}

void func_800191BC(s32 a) {
    D_80078E30 = ((s32)(a << 16) >> 16);
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800191D4);

s32 func_8001923C(s32 n) {
    if (n == 0xB3) {
        return 0;
    }
    if (n == 0xB4) {
        return 0;
    }
    if (n == 0x12E) {
        return 0;
    }
    if (n == 0x12F) {
        return 0;
    }
    if (n == 0x150) {
        return 0;
    }
    if (n == 0x152) {
        return 0;
    }
    if (n == 0x16E) {
        return 0;
    }
    if (n == 0x16F) {
        return 0;
    }
    if (n == 0xB9) {
        return 0;
    }
    if (n == 0xA1) {
        return 0;
    }
    if (n == 0xA2) {
        return 0;
    }
    if (n == 0xA3) {
        return 0;
    }
    if (n == 0x10B) {
        return 0;
    }
    if (n == 0x10C) {
        return 0;
    }
    if (n == 0x10D) {
        return 0;
    }
    if (n == 0x10F) {
        return 0;
    }
    if (n == 0x110) {
        return 0;
    }
    if (n == 0x111) {
        return 0;
    }
    if (n == 0x112) {
        return 0;
    }
    if (n == 0x113) {
        return 0;
    }
    if (n == 0x114) {
        return 0;
    }
    if (n == 0xAA) {
        return 0;
    }
    if (n == 0x115) {
        return 0;
    }
    if (n == 0x116) {
        return 0;
    }
    if (n == 0x117) {
        return 0;
    }
    if (n == 0x118) {
        return 0;
    }
    return 1;
}

void func_8001931C(void) {
    if (D_800BA1B4 == 5) {
        if (D_800747E4 != 0) {
            func_8002D4C8(0x16, 0);
        }
        D_800BA1B4 = 0;
        D_800747E8 = 0;
        D_800747E4 = 0;
    }
}

s32 func_80019378(void) {
    return D_800747D0;
}

void func_80019388(s32 a) {
    D_800747D0 = a;
}

s32 func_80019398(void) {
    return D_800747D4;
}

void func_800193A8(s32 a) {
    D_800747D4 = a;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800193B8);

/*
 * Disc file system init: look up every game file on the CD, read LIST.CD to
 * LIST_BUF, then convert each archive's (sector, size) list into absolute disc
 * positions in g_ArchiveFileLoc. Archives are g_FileTable[1..8] (MAIN.CD and
 * SC01-SC07); g_FileTableExtra is optional and only recorded as present or not.
 */
void InitCdFiles(void)
{
    s32 i;
    CdlFILE *found;
    s32 n;
    s32 k;
    s32 j;
    s32 count;
    s32 base;
    s32 unused[2]; /* only reserves stack; the original frame is 0x58 */

    func_80019990();

    i = 0;
    do {
        found = CdSearchFile(&g_FileTableExtra.file, g_FileTableExtra.name);
        i++;
    } while (found == (CdlFILE *)-1 && i < 16);

    D_800747D0 = found != NULL;
    D_800747D4 = 1;
    D_80063074 = 0;
    D_800747D8 = 0;

    for (i = 0; i < sizeof(g_FileTable) / sizeof(g_FileTable[0]) - 1; i++) {
        while ((u32)CdSearchFile(&g_FileTable[i].file, g_FileTable[i].name) + 1 < 2) {
        }
    }

    while (!func_80019A24(&g_FileTable[0].file, LIST_BUF, 0xE40, 0)) {
        VSync(0);
    }

    k = 0;
    n = 0;
    for (i = 0; i < 8; i++) {
        base = CdPosToInt(&g_FileTable[i + 1].file.pos);
        count = LIST_BUF[n++].sector;
        for (j = 0; j < count; n++, k++, j++) {
            if (LIST_BUF[n].sector != 0) {
                CdIntToPos(LIST_BUF[n].sector + base, &g_ArchiveFileLoc[k].pos);
                g_ArchiveFileLoc[k].size = LIST_BUF[n].size;
            }
        }
    }
}

/* The CD streamer's state (0x800AE6F0): func_80019AF8 steps it, func_8001A114 checks the disc, func_8001A338
   (the data-ready callback) parses PAC archives into it. One object in the original: its code keeps &g_CdStream (or
   a member's address) in a register and reaches the other members from it. */
typedef struct {
    /* 0x00 */ s32 state;          /* func_80019AF8's step (0-10) */
    /* 0x04 */ s32 check;          /* func_8001A114's step (0-5) */
    /* 0x08 */ s32 sub;            /* func_8001A338: what the next sector holds */
    /* 0x0C */ s32 unkC;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 texBuf;         /* texture sector buffer in use (0-3) */
    /* 0x18 */ s32 request;        /* id (first word of the file) of the request in flight, 0 = none */
    /* 0x1C */ s32 unk1C;
    /* 0x20 */ RECT slot;          /* the 32x32 VRAM slot the next texture sector goes to */
    /* 0x28 */ u8 *clut;           /* CLUT record cursor */
    /* 0x2C */ s32 soundCount;     /* sound banks loaded */
    /* 0x30 */ s32 noSound;        /* 1 = the request has no sound table */
    /* 0x34 */ s32 soundTable;     /* (sound id, destination) pairs */
    /* 0x38 */ s32 cursor;         /* copy destination cursor */
    /* 0x3C */ s32 dest;           /* the request's destination */
    /* 0x40 */ s32 unk40;
    /* 0x44 */ void *prevCallback; /* CdReadyCallback before ours */
    /* 0x48 */ u8 result[8];       /* CdControl's result */
    /* 0x50 */ u8 param[8];        /* CdControl's parameter */
    /* 0x58 */ s32 words;          /* words (or bytes) still to read */
    /* 0x5C */ s32 done;           /* 1 = the read is done, 2 = an error */
    /* 0x60 */ s32 counter;        /* wait / retry counter */
    /* 0x64 */ s32 wait;           /* CdSync wait counter */
    /* 0x68 */ u8 slots[64];       /* texture block: bitmap of the VRAM slots it fills */
    /* 0xA8 */ u8 more;            /* PAC flag: more blocks follow */
    /* 0xA9 */ u8 unkA9;
    /* 0xAA */ u8 bit;             /* slot bitmap: bit mask */
    /* 0xAB */ u8 byte;            /* slot bitmap: byte index */
    /* 0xAC */ s32 unkAC;
    /* 0xB0 */ s32 unkB0;
    /* 0xB4 */ s32 *file;          /* the request's file (CdlFILE) */
    /* 0xB8 */ s32 size;           /* the request's byte count, 0 = a PAC archive */
    /* 0xBC */ s32 sector;         /* the sector expected next */
    /* 0xC0 */ s32 complete;       /* 1 when a request completed */
} CdStream;
extern CdStream g_CdStream;

inline void func_80019930(void) {
    g_CdStream.cursor = 0x80010000;
    g_CdStream.state = 0;
    g_CdStream.sub = 0;
    g_CdStream.unkC = 0;
    g_CdStream.unk10 = 0;
    g_CdStream.words = 1;
    g_CdStream.done = 0;
    g_CdStream.more = 0;
    g_CdStream.unkA9 = 0;
    g_CdStream.unk1C = 0;
}

void func_80019990(void) {
    g_CdStream.cursor = 0x80010000;
    g_CdStream.request = 0;
    D_800BA1B4 = 0;
    D_800747F0 = 0;
    D_800747F4 = 0;
    g_CdStream.state = 0;
    g_CdStream.sub = 0;
    g_CdStream.unkC = 0;
    g_CdStream.unk10 = 0;
    g_CdStream.words = 1;
    g_CdStream.done = 0;
    g_CdStream.more = 0;
    g_CdStream.unkA9 = 0;
    g_CdStream.unk1C = 0;
}

void func_80019A10(void) {
    D_80078E30 = -1;
}

inline s32 func_80019A24(CdlFILE *file, void *dest, s32 c, s32 d) {
    s32 v;
    if (func_80034B98() != 0) {
        return 0;
    }
    if (g_CdStream.request != 0 && *(s32 *)file != g_CdStream.request) {
        return 0;
    }
    v = *(s32 *)file;
    g_CdStream.dest = (s32)dest;
    g_CdStream.size = c;
    g_CdStream.file = (s32 *)file;
    g_CdStream.soundTable = d;
    g_CdStream.noSound = 0;
    g_CdStream.request = v;
    if (d == 0) {
        g_CdStream.noSound = 1;
    }
    func_80019AF8(0);
    return g_CdStream.complete;
}

/* The CD streamer's step, run every frame while a request is in flight (state g_CdStream.state): set the mode,
   seek to the file, read it through the data-ready callback (func_8001A338), load its sound banks, then wait for
   the drive. A lid opened sends it to the disc check (states 9 and 10). With `pause` set it only seeks. Sets
   g_CdStream.complete to 1 on the frame the request completes, 0 otherwise. */
void func_80019AF8(s32 pause) {
    s32 r;
    s32 i;
    switch (g_CdStream.state) {
    case 0:
        g_CdStream.counter = 0;
        g_CdStream.soundCount = 0;
        g_CdStream.unk1C = 0;
        g_CdStream.param[0] = 0xA0;
        CdControl(CdlSetmode, g_CdStream.param, g_CdStream.result);
        if (g_CdStream.result[0] & CdlStatShellOpen) {
        lid_open:
            g_CdStream.state = 9;
            break;
        }
        g_CdStream.state++;
    case 1:
        r = CdSync(1, g_CdStream.result);
        D_800AE6E8 = r;
        if (r == 0) {
            break;
        }
        if (r == CdlDiskError) {
            g_CdStream.state = 0;
            break;
        }
        if (r != CdlComplete) {
            break;
        }
        g_CdStream.counter = 0;
        g_CdStream.state++;
    case 2:
        if (++g_CdStream.counter < 3) {
            break;
        }
        g_CdStream.counter = 0;
        g_CdStream.state++;
        break;
    case 3:
        CdControl(CdlSeekL, (u8 *)g_CdStream.file, g_CdStream.result);
        if (g_CdStream.result[0] & CdlStatShellOpen) {
            goto lid_open;
        }
        g_CdStream.wait = 0;
        g_CdStream.sector = CdPosToInt((CdlLOC *)g_CdStream.file);
        g_CdStream.state++;
    case 4:
        r = CdSync(1, g_CdStream.result);
        D_800AE6E8 = r;
        if (r == CdlDiskError) {
            g_CdStream.counter++;
        retry:
            CdFlush();
            g_CdStream.state = 3;
            break;
        }
        if (r == 0) {
            break;
        }
        if (r != CdlComplete) {
            g_CdStream.complete = 0;
            if (++g_CdStream.wait >= 0xB5) {
                goto retry;
            }
            return;
        }
        if (pause != 0) {
            CdControl(CdlPause, NULL, g_CdStream.result);
            if (g_CdStream.result[0] & CdlStatShellOpen) {
                goto lid_open;
            }
            g_CdStream.state = 8;
            g_CdStream.unk1C = *g_CdStream.file;
            break;
        }
        g_CdStream.state++;
    case 5:
        g_CdStream.done = 0;
        if (g_CdStream.size <= 0) {
            g_CdStream.sub = 0;
        } else {
            g_CdStream.sub = 3;
            g_CdStream.words = (g_CdStream.size + 3) / 4;
            g_CdStream.more = 1;
            g_CdStream.cursor = g_CdStream.dest;
        }
        g_CdStream.prevCallback = (void *)CdReadyCallback(func_8001A338);
        CdControl(CdlReadN, NULL, g_CdStream.result);
        if (g_CdStream.result[0] & CdlStatShellOpen) {
            goto lid_open;
        }
        g_CdStream.counter = 0;
        g_CdStream.state++;
    case 6:
        if (g_CdStream.done == 1) {
            CdReadyCallback(g_CdStream.prevCallback);
            CdControl(CdlPause, NULL, g_CdStream.result);
            if (g_CdStream.result[0] & CdlStatShellOpen) {
                goto lid_open;
            }
            r = g_CdStream.soundCount;
            g_CdStream.state++;
            if (r == 0) {
                g_CdStream.state++;
            }
        } else if (g_CdStream.done == 2) {
            CdReadyCallback(g_CdStream.prevCallback);
            g_CdStream.state = 0;
        } else if (++g_CdStream.counter >= 300) {
            CdReadyCallback(g_CdStream.prevCallback);
            g_CdStream.state = 0;
            CdFlush();
        }
        break;
    case 7:
        for (i = 0; i < g_CdStream.soundCount; i++) {
            while (func_8002FD14(((s32 *)g_CdStream.soundTable)[i * 2], ((s32 *)g_CdStream.soundTable)[i * 2 + 1]) == 0) {
            }
        }
        g_CdStream.state++;
        break;
    case 8:
        r = CdSync(1, g_CdStream.result);
        D_800AE6E8 = r;
        if (r == CdlComplete) {
            func_80019930();
            g_CdStream.complete = 1;
            g_CdStream.request = 0;
            return;
        }
        if (r == CdlDiskError) {
            CdFlush();
            CdControl(CdlPause, NULL, g_CdStream.result);
            if (!(g_CdStream.result[0] & CdlStatShellOpen)) {
                break;
            }
            goto lid_open;
        }
        break;
    case 9:
        func_8001A0FC();
        g_CdStream.state++;
    case 10:
        if ((D_800AE6E8 = func_8001A114()) != 0) {
            g_CdStream.state = 0;
        }
        break;
    }
    g_CdStream.complete = 0;
}

void func_8001A0FC(void) {
    g_CdStream.check = 0;
    g_CdStream.unk1C = 0;
}

/* The disc check after the lid opened or a read failed, one step per call (state g_CdStream.check): wait for a disc,
   set the mode, wait three calls, check the disc type, then look for this game's MUSA.ID (g_FileTable[21]).
   Returns 1 once the disc is this game's. */
s32 func_8001A114(void) {
    s32 ret = 0;
    s32 r;
    s32 i;
    CdlFILE *found;
    switch (g_CdStream.check) {
    case 0:
        CdFlush();
        CdControlB(CdlNop, NULL, g_CdStream.result);
        if (g_CdStream.result[0] & CdlStatShellOpen) {
            break;
        }
        g_CdStream.check++;
    case 1:
        r = CdDiskReady(0);
        if (r == CdlComplete) {
            g_CdStream.check++;
        } else if (r == CdlStatShellOpen) {
            g_CdStream.check = 0;
        }
        break;
    case 2:
        g_CdStream.param[0] = CdlModeSpeed;
        if (CdControlB(CdlSetmode, g_CdStream.param, g_CdStream.result) == 0) {
            break;
        }
        if (g_CdStream.result[0] & CdlStatShellOpen) {
            g_CdStream.check = 0;
            break;
        }
        g_CdStream.counter = 0;
        g_CdStream.check++;
        break;
    case 3:
        if (++g_CdStream.counter < 3) {
            break;
        }
        g_CdStream.counter = 0;
        g_CdStream.check++;
        break;
    case 4:
        r = CdGetDiskType();
        if (r == 1 || r == 0x10 || r == 0) {
            g_CdStream.check = 0;
        }
        if (r == 2) {
            g_CdStream.check++;
        }
        break;
    case 5:
        i = 0;
        do {
            found = CdSearchFile(&g_FileTable[21].file, g_FileTable[21].name);
            if (found != (CdlFILE *)-1) {
                break;
            }
            i++;
        } while (i < 16);
        if ((u32)found + 1 < 2) {
            g_CdStream.check = 0;
            break;
        }
        ret = 1;
        break;
    }
    return ret;
}

/* The CD data-ready callback (CdReadyCallback, set by func_80019AF8): checks each sector arrives in order, then
   by g_CdStream.sub reads a PAC header and starts its block (texture tiles, CLUT list, code or data payload,
   sound bank, LZ data, skip), or takes the block's next sector. Sets g_CdStream.done to 1 when a request's last
   block is in, 2 on an error. */
void func_8001A338(u8 intr, u8 *result) {
    CdStream *cd = &g_CdStream;
    s32 pos;
    s32 dst;
    s32 i;
    s32 n;
    u8 *pix;
    if (intr == CdlDataReady) {
        CdGetSector(D_80078E40, 3);
        pos = CdPosToInt((CdlLOC *)D_80078E40);
        if (pos != cd->sector) {
            if (cd->sub == 4) {
                func_8002FDC8();
            }
            cd->done = 2;
            return;
        }
        cd->sector = pos + 1;
        switch (cd->sub) {
        case 0:
            CdGetSector(D_80079A70, 4);
            if (*(u32 *)D_80079A70 != 0x434150) {
                cd->done = 2;
                return;
            }
            cd->more = D_80079A75;
            switch (D_80079A74) {
            case 6:
                CdGetSector(D_8007A280, 0x1FC);
                pix = D_8007A280 + 0x90;
                n = D_80079A78;
                cd->clut = D_8007A280;
                for (i = 0; i < n; i++) {
                    LoadImage((RECT *)cd->clut, (u32 *)pix);
                    pix += (((RECT *)cd->clut)->w / 2) * 4;
                    cd->clut += 8;
                }
                if (cd->more) {
                    cd->sub = 2;
                } else {
                    cd->sub = 0;
                }
                break;
            case 0:
            case 5:
                cd->texBuf = 0;
                CdGetSector(cd->slots, 0x10);
                cd->slot.h = 0x20;
                cd->slot.w = 0x20;
                cd->slot.y = 0;
                cd->slot.x = 0;
                cd->bit = 1;
                cd->byte = 0;
                while (1) {
                    if (cd->byte >= 0x40) {
                        if (cd->more) {
                            cd->sub = 2;
                        } else {
                            cd->sub = 0;
                        }
                        break;
                    }
                    if (cd->slots[cd->byte] & cd->bit) {
                        break;
                    }
                    if (cd->bit == 0x80) {
                        cd->bit = 1;
                        cd->byte++;
                    } else {
                        cd->bit <<= 1;
                    }
                    cd->slot.x += 0x20;
                    if (cd->slot.x >= 0x400) {
                        cd->slot.x = 0;
                        cd->slot.y += 0x20;
                    }
                }
                cd->sub++;
                break;
            case 7:
                if (cd->size < 0) {
                    cd->sub = 2;
                    break;
                }
                cd->sub = 3;
                cd->words = (u32)(D_80079A7C - 0x7FD) >> 2;
                cd->cursor = D_80072C80;
                break;
            case 1:
                cd->sub = 3;
                cd->words = (u32)(D_80079A7C - 0x7FD) >> 2;
                cd->cursor = cd->dest;
                break;
            case 8:
                cd->sub = 6;
                cd->words = (u32)(D_80079A7C - 0x7FD) >> 2;
                break;
            case 2:
                if (cd->noSound) {
                    cd->sub = 2;
                    break;
                }
                cd->sub = 3;
                dst = ((s32 *)cd->soundTable)[cd->soundCount * 2 + 1];
                cd->words = (u32)(D_80079A7C - 0x7FD) >> 2;
                cd->cursor = dst;
                break;
            case 3:
                if (cd->noSound) {
                    cd->sub = 2;
                    break;
                }
                while (func_8002FB08(((s32 *)cd->soundTable)[cd->soundCount * 2]) == 0) {
                }
                cd->sub = 4;
                cd->words = D_80079A7C - 0x800;
                break;
            case 4:
                cd->sub = 5;
                cd->words = (u32)(D_80079A7C - 0x7FD) >> 2;
                cd->cursor = cd->dest;
                func_80018714(cd->cursor);
                break;
            }
            break;
        case 1:
            pix = D_80079A70 + cd->texBuf * 0x800;
            CdGetSector(pix, 0x200);
            LoadImage(&cd->slot, (u32 *)pix);
            cd->texBuf = (cd->texBuf + 1) & 3;
            do {
                if (cd->bit == 0x80) {
                    cd->bit = 1;
                    cd->byte++;
                } else {
                    cd->bit <<= 1;
                }
                if (cd->byte >= 0x40) {
                    if (cd->more) {
                        cd->sub = 2;
                    } else {
                        cd->sub = 0;
                    }
                    goto tail;
                }
                cd->slot.x += 0x20;
                if (cd->slot.x >= 0x400) {
                    cd->slot.x = 0;
                    cd->slot.y += 0x20;
                }
            } while (!(cd->slots[cd->byte] & cd->bit));
            break;
        case 3:
            if (cd->words <= 0x200) {
                CdGetSector((void *)cd->cursor, cd->words);
                if (cd->more) {
                    cd->sub = 2;
                } else {
                    cd->sub = 0;
                }
                break;
            }
            CdGetSector((void *)cd->cursor, 0x200);
            cd->cursor += 0x800;
            cd->words -= 0x200;
            break;
        case 4:
            if (cd->words <= 0x800) {
                pos = (cd->words + 3) / 4;
                CdGetSector(D_80079A70, pos);
                if (func_8002FC64(cd->words, D_80079A70) == 0) {
                    func_8002FDC8();
                    cd->sub = 7;
                    break;
                }
                cd->soundCount++;
                if (cd->more) {
                    cd->sub = 2;
                } else {
                    cd->sub = 0;
                }
                break;
            }
            CdGetSector(D_80079A70, 0x200);
            n = func_8002FC64(0x800, D_80079A70);
            cd->cursor += 0x800;
            cd->words -= 0x800;
            if (n == 0) {
                func_8002FDC8();
                cd->sub = 7;
            }
            break;
        case 5:
            CdGetSector(D_80079A70, 0x200);
            if (func_80018730(D_80079A70) == 0) {
                if (cd->more) {
                    cd->sub = 2;
                } else {
                    cd->sub = 0;
                }
            }
            break;
        case 6:
            cd->words -= 0x200;
            if (cd->words > 0) {
                break;
            }
            if (cd->more) {
                cd->sub = 2;
            } else {
                cd->sub = 0;
            }
            break;
        }
    tail:
        if (cd->sub == 2) {
            cd->done = 1;
        } else if (cd->sub == 7) {
            cd->done = 2;
        }
    }
    if (intr == CdlDiskError) {
        if (cd->sub == 4) {
            func_8002FDC8();
        }
        cd->done = 2;
    }
}

s32 func_8001A9D8(void) {
    return func_80034B98();
}

void func_8001A9F8(void) {
    u32 *ot = D_800A6610[D_800B9A02];
    u32 *p1 = (u32 *)&D_80063108; u32 *p2 = (u32 *)&D_80063120;
    *p1 = (ot[1] & 0xFFFFFF) | 0x05000000;
    ot[1] = (ot[1] & 0xFF000000) | ((u32)p1 & 0xFFFFFF);
    
    *p2 = (ot[1] & 0xFFFFFF) | 0x05000000;
    ot[1] = (ot[1] & 0xFF000000) | ((u32)p2 & 0xFFFFFF);
}

s32 func_8001AA78(void) {
    return g_CdStream.request;
}

void func_8001AA88(s32 a) {
    g_CdStream.request = a;
}

void func_8001AA98(void) {
}

void func_8001AAA0(s32 id) {
    func_8001ABBC(1, id, 0, 0, 0);
}

/* Load request kind 3 (a sound bank file) for one of the files g_FileTable[9..20] (n = 0..11; anything else:
   g_FileTable[0]); clears a finished bank request first. Returns func_8001ABBC's answer. */
s32 func_8001AAD0(s32 n, s32 id) {
    s32 i;
    switch (n) {
    case 0: i = 9; break;
    case 1: i = 10; break;
    case 2: i = 11; break;
    case 3: i = 12; break;
    case 4: i = 13; break;
    case 5: i = 14; break;
    case 6: i = 15; break;
    case 7: i = 16; break;
    case 8: i = 17; break;
    case 9: i = 18; break;
    case 10: i = 19; break;
    case 11: i = 20; break;
    default: i = 0; break;
    }
    if (D_800BA1B4 == 5) {
        D_800BA1B4 = 0;
    }
    return func_8001ABBC(3, id, (s32 *)&g_FileTable[i].file, 0, 0);
}

void func_8001ABB4(void) {
}

/* Ask for a load. kind 0: a file read (id = byte count, 0 for a PAC archive); 1: a sound by id (D_80063138): done
   at once when its package is the one loaded; 2: a header read; 3: a sound bank file. Returns 1 when the request
   is done, 0 while it waits (another request in flight, or this one just queued for the pump, func_8001AF34). */
s32 func_8001ABBC(s32 kind, s32 id, s32 *file, s32 c, s32 d) {
    if (kind == 1) {
        if (id == D_800A654C) {
            return 1;
        }
        if (D_80063138[id].entry == D_800747F8) {
            if (D_80063138[id].sound != 0) {
                func_8002D4C8((u16)D_80063138[id].sound, 0);
                D_800A654C = id;
            }
            return 1;
        }
    }
    if (D_800BA1B4 != 0) {
        if (D_800BA1B4 != 3) {
            return 0;
        }
        if (func_8001AE90(kind, id, file)) {
            goto done;
        }
    }
    if (func_8001ACF0(kind, id, file, c, d) != 0) {
done:
        D_800BA1B4 = 0;
        return 1;
    }
    return 0;
}

/* Queue a load request for the pump (func_8001AF34): D_800BA1B4 = 1 file read, 2 sound package, 4 header read,
   5 sound bank. A sound whose package is already loaded starts at once (returns 1). */
s32 func_8001ACF0(s32 kind, s32 id, s32 *file, s32 dest, s32 table) {
    D_800747F0 = kind;
    switch (kind) {
    case 0:
        D_800C6D2C = id;
        D_800AE6E4 = file;
        D_800BA318 = dest;
        D_800A6550 = table;
        D_800747F4 = *file;
        D_800BA1B4 = 1;
        break;
    case 1:
        D_800BA1B4 = 2;
        if (id == D_800A654C) {
            return 1;
        }
        if (D_80063138[id].entry == D_800747F8) {
            if (D_80063138[id].sound != 0) {
                func_8002D4C8((u16)D_80063138[id].sound, 0);
                D_800A654C = id;
            }
            return 1;
        }
        D_800AE640 = id;
        D_800747F4 = id;
        break;
    case 2:
        D_800AE6E4 = file;
        D_800747F4 = *file;
        D_800BA1B4 = 4;
        break;
    case 3:
        D_800A6430 = id;
        D_800AE6E4 = file;
        D_800747F4 = id;
        D_800BA1B4 = 5;
        D_800747E4 = 0;
        D_800747E8 = 1;
        break;
    }
    return 0;
}

s32 func_8001AE90(s32 kind, s32 a, s32 *b) {
    s32 r;
    switch (kind) {
    case 0:
    case 2:
        r = *b == D_800747F4;
        break;
    case 1:
        r = a == D_800747F4;
        break;
    default:
        r = 0;
        break;
    }
    return r;
}

s32 func_8001AF04(void) {
    if (D_800BA1B4 == 0) {
        return 0;
    } else if (D_800BA1B4 == 3) {
        return 1;
    } else {
        return 2;
    }
}

/* The load pump, run every frame: works on the queued request (D_800BA1B4: 1 a file read, through the inlined
   func_80019A24; 2 a sound package; 4 a header read; 5 a sound bank) and sets 3 when it is done. 0 and 3 idle. */
void func_8001AF34(void) {
    func_80034B98();
    switch (D_800BA1B4) {
    case 0:
    case 3:
        break;
    case 1:
        if (func_80019A24(D_800AE6E4, (void *)D_800BA318, D_800C6D2C, D_800A6550)) {
            D_800BA1B4 = 3;
        }
        break;
    case 2:
        if (func_8001B394(D_800AE640)) {
            D_800BA1B4 = 3;
        }
        break;
    case 4:
        if (func_8001B7C4((s32 *)D_800AE6E4)) {
            D_800BA1B4 = 3;
        }
        break;
    case 5:
        if (func_8001B0D4(D_800AE6E4, D_800A6430)) {
            D_800747E4 = 0;
            D_800BA1B4 = 3;
        }
        break;
    }
}

/* Load a sound bank file (load request kind 3, run by the pump): start it (func_80036AF8), then follow the sound
   driver's load state (func_80034B98) to the end. D_800747E8 is the state reported to the caller. 1 = done. */
s32 func_8001B0D4(void *file, s16 b) {
    s32 r;
    switch (D_800747E4) {
    case 0:
        func_80036AF8(file, b);
        D_800747E8 = 1;
        D_800747E4++;
        break;
    case 1:
        r = func_80034B98();
        switch (r) {
        case 0:
            D_800747E0 = 1;
            return 0;
        case 1:
            D_800747E8 = r;
            return 0;
        case 8:
            D_800747E8 = 4;
            D_800747E4 = 4;
            break;
        case 2:
        case 4:
            D_800747E8 = r;
            D_800747E4++;
            break;
        }
        break;
    case 2:
        r = func_80034B98();
        switch (r) {
        case 0:
        case 8:
            D_800747E8 = 0;
            return 1;
        case 1:
        case 2:
        case 4:
            D_800747E8 = r;
            break;
        }
        break;
    case 3:
        if (func_8001A114() != 0) {
            D_800747E4 = 0;
        }
        break;
    case 4:
        D_800747E8 = 0;
        return 1;
    }
    return 0;
}

s32 func_8001B22C(void) {
    return D_800747E8;
}

s32 func_8001B23C(s32 v) {
    D_800C6D34 = v;
    func_8001B26C();
    return D_800C6D10;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001B26C);

void func_8001B324(void) {
    D_800AE7EC = 0;
    func_8001B34C();
}

void func_8001B34C(void) {
    D_800A654C = 0;
    D_800747F8 = 0;
    D_800A2B70 = 0;
    D_800BA0FC = 0;
}

s32 func_8001B374(void) {
    return D_800A654C;
}

void func_8001B384(void) {
    D_800AE7EC = 0;
}

s32 func_8001B394(s32 a) {
    D_800C6D34 = a;
    func_8001B3C4();
    return D_800C6D10;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001B3C4);

void func_8001B710(void) {
    if ((func_800291B4(0x44) & 0xFF) >= 2) {
        func_8002D4C8(0x24, 0);
    }
    if ((func_800291B4(0x56) & 0xFF) >= 2) {
        func_8002D4C8(0x25, 0);
    }
    if ((func_800291B4(0x5C) & 0xFF) >= 2) {
        func_8002D4C8(0x26, 0);
    }
}

s32 func_8001B788(s16 n) {
    return *(s32 *)&g_ArchiveFileLoc[D_80063138[n].entry].pos;
}

s32 func_8001B7C4(s32 *p) {
    if (func_80034B98() != 0) {
        return 0;
    }
    if (g_CdStream.request != 0) {
        if (g_CdStream.request != -1) {
            return 0;
        }
    }
    g_CdStream.request = -1;
    g_CdStream.file = p;
    g_CdStream.unk1C = 0;
    func_80019AF8(1);
    if (g_CdStream.complete == 1) {
        g_CdStream.unk1C = *p;
    }
    return g_CdStream.complete;
}

void func_8001B85C(void) {
    D_800747FC = 0;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001B86C);

void func_8001BA84(void) {
    func_8001BC6C(D_800630E8, 0x80);
    func_8001BC6C(D_800630E8 + 8, 0x80);
    func_8001BC6C(D_800630E8 + 0x10, 0x80);
    func_8001BC6C(D_800630E8 + 0x18, 0x80);
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001BADC);

void func_8001BB60(void) {
    s32 i = 0;
    D_80074808 = D_800A5E60;
    do {
        func_8001BBBC(0, i * 8, 0);
        i++;
    } while (i < 0x1E);
    D_8007480C = 0;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001BBBC);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001BC6C);

s32 func_8001BD80(void) {
    return func_80034B98() != 0;
}

void func_8001BDA0(void) {
    func_8002CCD8();
    DrawSync(0);
    DrawSyncCallback(0);
    ResetGraph(0);
    SetDispMask(0);
    VSync(0);
    DrawSync(0);
    ResetGraph(3);
    PadStopCom();
    StopRCnt();
    CdInit();
    ResetCallback();
    StopCallback();
}

void func_8001BE20(void) {
    D_800747EC = 0;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001BE30);

s32 func_8001BFA0(void) {
    return (D_80063074 & 0x1);
}

void func_8001BFB0(void) {
    D_80063074 = (D_80063074 + 0x1);
}

void func_8001BFD0(void) {
    D_800A2B70 = 0;
    D_800BA0FC = 0;
}

s32 func_8001BFE8(void) {
    return D_800747D8;
}

void func_8001BFF8(void) {
    D_800747D8 = 1;
}

void func_8001C00C(void) {
    if (D_800B9A11 != 1) {
        func_8001F9F8();
        func_8001D1C4();
    }
}

void func_8001C044(void) {
    u8 *w = (u8 *)&D_800AF630;
    u8 *p;
    s32 i;
    p = w + 0x65A8;
    for (i = 0; i < 0x100; i++, p += 0x38) {
        func_80016714(p, 0x38);
    }
    p = w + 0x2A8;
    for (i = 0; i < 0xC0; i++, p += 0x84) {
        func_80016714(p, 0x84);
    }
    *(s16 *)(w + 0x19C) = 0;
}

void func_8001C0C8(void) {
    register u8 *w = (u8 *)&D_800AF630;
    u8 *p;
    s32 i;
    p = w + 0x65A8;
    i = 0;
    do {
        func_80016714(p, 0x38);
        i++;
        p += 0x38;
    } while (i < 0x100);
    p = w + 0x2A8;
    i = 0;
    do {
        func_80016714(p, 0x84);
        i++;
        p += 0x84;
    } while (i < 0xC0);
    *(s16 *)(w + 0x19C) = 0;
}

void func_8001C14C(void) {
    u8 *w = (u8 *)&D_800AF630;
    u8 *p;
    for (p = w + 0x65A8; p < w + 0x6688; p += 0x38) {
        func_80016714(p, 0x38);
    }
    for (p = w + 0x2A8; p < w + 0x4B8; p += 0x84) {
        func_80016714(p, 0x84);
    }
}

void func_8001C1E4(u8 *o, u8 *c) {
    s32 m[8];
    *(u8 **)(o + 0x78) = c + 0x30;
    *(s32 *)(o + 0x30) = 0;
    GsGetLw(o + 0x30, m);
}

void func_8001C214(u8 *o, s32 *p) {
    Mtx m;
    func_8001C9D0(o);
    *(s16 *)o = 1;
    *(s16 *)(o + 2) = 0;
    GsInitCoordinate2(0, o + 0x30);
    GsGetLw(o + 0x30, &m);
    *(s32 **)(o + 0x24) = p;
    if (p != 0) {
        *(u32 **)(o + 0x20) = D_80063548;
        while (*p != 0) {
            GsMapModelingData((*p & 0x80FFFFFF) + 4);
            p++;
        }
    }
}

void func_8001C2C4(u8 *a) {
    u8 lw[0x20];
    func_8001C9D0(a);
    *(s16 *)(a + 0) = 1;
    *(s16 *)(a + 2) = 0;
    GsInitCoordinate2(0, a + 0x30);
    GsGetLw(a + 0x30, lw);
    *(s32 *)(a + 0x24) = 0;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001C320);

void func_8001C448(u8 *a) {
    u8 lw[0x20];
    func_8001C9D0(a);
    *(s16 *)(a + 0) = 1;
    *(s16 *)(a + 2) = 1;
    GsInitCoordinate2(0, a + 0x30);
    GsGetLw(a + 0x30, lw);
    *(s32 *)(a + 0x24) = 0;
}

void func_8001C4A4(u8 *o, s32 *p) {
    Mtx m;
    func_8001C9D0(o);
    *(s16 *)o = 1;
    *(s16 *)(o + 2) = 7;
    GsInitCoordinate2(0, o + 0x30);
    GsGetLw(o + 0x30, &m);
    *(s32 **)(o + 0x24) = p;
    if (p != 0) {
        *(u32 **)(o + 0x20) = D_80063548;
        while (*p != 0) {
            GsMapModelingData((*p & 0x80FFFFFF) + 4);
            p++;
        }
    }
}

void func_8001C558(u8 *a) {
    u8 lw[0x20];
    func_8001C9D0(a);
    *(s16 *)(a + 0) = 1;
    *(s16 *)(a + 2) = 7;
    GsInitCoordinate2(0, a + 0x30);
    GsGetLw(a + 0x30, lw);
    *(s32 *)(a + 0x24) = 0;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001C5B8);

void func_8001C6E4(u8 *a) {
    u8 lw[0x20];
    func_8001C9D0(a);
    *(s16 *)(a + 0) = 1;
    *(s16 *)(a + 2) = 8;
    GsInitCoordinate2(0, a + 0x30);
    GsGetLw(a + 0x30, lw);
    *(s32 *)(a + 0x24) = 0;
}

void func_8001C744(u8 *o, void *p) {
    Mtx m;
    func_8001C9D0(o);
    *(s16 *)o = 1;
    *(s16 *)(o + 2) = 2;
    GsInitCoordinate2(0, o + 0x30);
    GsGetLw(o + 0x30, &m);
    *(void **)(o + 0x24) = p;
}

void func_8001C7B0(u8 *a) {
    u8 lw[0x20];
    func_8001C9D0(a);
    *(s16 *)(a + 0) = 1;
    *(s16 *)(a + 2) = 2;
    GsInitCoordinate2(0, a + 0x30);
    GsGetLw(a + 0x30, lw);
    *(s32 *)(a + 0x24) = 0;
}

void func_8001C810(u8 *o, s32 *p) {
    Mtx m;
    func_8001C9D0(o);
    *(s16 *)o = 1;
    *(s16 *)(o + 2) = 5;
    GsInitCoordinate2(0, o + 0x30);
    GsGetLw(o + 0x30, &m);
    *(s32 **)(o + 0x24) = p;
    if (p != 0) {
        *(u32 **)(o + 0x20) = D_80063548;
        while (*p != 0) {
            GsMapModelingData((*p & 0x80FFFFFF) + 4);
            p++;
        }
    }
}

void func_8001C8C4(u8 *a) {
    u8 lw[0x20];
    func_8001C9D0(a);
    *(s16 *)(a + 0) = 1;
    *(s16 *)(a + 2) = 5;
    GsInitCoordinate2(0, a + 0x30);
    GsGetLw(a + 0x30, lw);
    *(s32 *)(a + 0x24) = 0;
}

void func_8001C924(u8 *o, s32 *p) {
    *(s32 **)(o + 0x24) = p;
    while (*p != 0) {
        GsMapModelingData(*p + 4);
        p++;
    }
}

void func_8001C97C(s32 *p) {
    s32 *q = p;
    if (*q != 0) {
        do {
            s32 a = *q;
            q += 1;
            GsMapModelingData(a + 4);
        } while (*q != 0);
    }
}

void func_8001C9D0(u8 *a) {
    *(s16 *)(a + 0x1C) = 0x1000;
    *(s16 *)(a + 0x1A) = 0x1000;
    *(s16 *)(a + 0x18) = 0x1000;
    *(s16 *)(a + 0x14) = 0;
    *(s16 *)(a + 0x12) = 0;
    *(s16 *)(a + 0x10) = 0;
    *(s16 *)(a + 0xC) = 0;
    *(s16 *)(a + 0xA) = 0;
    *(s16 *)(a + 8) = 0;
    *(s32 *)(a + 4) = 0;
    *(s32 *)(a + 0x20) = 0;
    *(s16 *)(a + 0x28) = 0xC8;
    *(s16 *)(a + 0x2A) = 0xC8;
    *(s16 *)(a + 0x2C) = 0;
    *(s16 *)(a + 0x2E) = 0;
    *(s32 *)(a + 0x80) = 0;
}

void func_8001CA1C(u8 *a, s32 v) {
    u8 lw[0x20];
    func_8001C9D0(a);
    *(s16 *)(a + 0) = 1;
    *(s16 *)(a + 2) = 3;
    GsInitCoordinate2(0, a + 0x30);
    GsGetLw(a + 0x30, lw);
    *(s32 *)(a + 0x20) = v;
}

void func_8001CA88(u8 *o, void *p) {
    Mtx m;
    func_8001C9D0(o);
    *(s16 *)o = 1;
    *(s16 *)(o + 2) = 4;
    GsInitCoordinate2(0, o + 0x30);
    GsGetLw(o + 0x30, &m);
    *(void **)(o + 0x20) = p;
    *(s32 *)(o + 0x74) = 0;
    *(s16 *)(o + 0xE) = 0;
    *(s16 *)(o + 0x1E) = 0;
}

void func_8001CB00(u8 *a, s32 v, s16 x, s16 y) {
    func_8001CF48();
    *(s16 *)(a + 2) = 1;
    *(s16 *)(a + 0x28) = x;
    *(s16 *)(a + 0x2A) = y;
    *(s32 *)(a + 0x20) = v;
    *(s32 *)(a + 4) = 0x08000000;
    *(s16 *)(a + 0x2C) = 0;
}

void func_8001CB6C(u8 *o, void *p, s16 x, s16 y) {
    func_8001CF48(o);
    *(s16 *)(o + 2) = 2;
    *(s16 *)(o + 0x28) = x;
    *(s16 *)(o + 0x2A) = y;
    *(void **)(o + 0x20) = p;
    *(u32 *)(o + 4) = 0x0C000040;
    *(s16 *)(o + 0x2C) = 0;
}

void func_8001CBDC(u8 *a, s32 v, s16 x, s16 y) {
    func_8001CF48();
    *(s16 *)(a + 2) = 0;
    *(s16 *)(a + 0x28) = x;
    *(s16 *)(a + 0x2A) = y;
    *(s32 *)(a + 0x20) = v;
    *(s16 *)(a + 0x2C) = 0;
}

void func_8001CC3C(u8 *o, void *p, s16 x, s16 y) {
    func_8001CF48(o);
    *(s16 *)(o + 2) = 3;
    *(s16 *)(o + 0x28) = x;
    *(s16 *)(o + 0x2A) = y;
    *(void **)(o + 0x20) = p;
    *(s16 *)(o + 0x2C) = 0;
}

void func_8001CCA0(u8 *a, s32 v, s16 x, s16 y) {
    func_8001CF48();
    *(s16 *)(a + 2) = 9;
    *(s16 *)(a + 0x28) = x;
    *(s16 *)(a + 0x2A) = y;
    *(s32 *)(a + 0x20) = v;
    *(s16 *)(a + 0x2C) = 0;
}

void func_8001CD04(u8 *o, void *p) {
    func_8001CF48(o);
    *(s16 *)(o + 2) = 4;
    *(void **)(o + 0x20) = p;
    *(s16 *)(o + 0xE) = 0;
    *(s16 *)(o + 0x1E) = 0;
    *(s16 *)(o + 0x2C) = 0;
}

void func_8001CD50(u8 *a, s32 v) {
    func_8001CF48();
    *(s16 *)(a + 2) = 5;
    *(s32 *)(a + 0x20) = v;
    *(s16 *)(a + 0xE) = 0;
    *(s16 *)(a + 0x1E) = 0;
    *(s16 *)(a + 0x2C) = 0;
}

void func_8001CD9C(u8 *o, void *p) {
    func_8001CF48(o);
    *(s16 *)(o + 2) = 6;
    *(void **)(o + 0x20) = p;
    *(s16 *)(o + 0xE) = 0;
    *(s16 *)(o + 0x1E) = 0;
    *(s16 *)(o + 0x2C) = 0;
}

void func_8001CDE8(u8 *a, s32 v) {
    func_8001CF48();
    *(s16 *)(a + 2) = 7;
    *(s32 *)(a + 0x20) = v;
}

void func_8001CE28(u8 *o, void *p) {
    func_8001CF48(o);
    *(s16 *)(o + 2) = 8;
    *(void **)(o + 0x20) = p;
}

void func_8001CE68(u8 *a, s32 v) {
    func_8001CF48();
    *(s16 *)(a + 2) = 8;
    a[0x27] = 0xBA;
    *(s32 *)(a + 0x20) = v;
    *(s32 *)(a + 4) = *(s32 *)(a + 4) | 0x400000;
}

void func_8001CEC0(u8 *o, void *p) {
    func_8001CF48(o);
    *(s16 *)(o + 2) = 0xA;
    *(void **)(o + 0x20) = p;
}

void func_8001CF00(u8 *p) {
    func_8001CF48();
    *(s16 *)(p + 2) = 0xB;
}

void func_8001CF30(u8 *a) {
    *(s32 *)(a + 0x4) = ((*(s32 *)(a + 0x4) & 0xffffffbf) | 0x1000);
}

void func_8001CF48(u8 *a) {
    *(s16 *)(a + 0) = 2;
    *(s16 *)(a + 0x1C) = 0x1000;
    *(s16 *)(a + 0x1A) = 0x1000;
    *(s16 *)(a + 0x18) = 0x1000;
    *(s16 *)(a + 0x32) = 0;
    *(s16 *)(a + 0x30) = 0;
    *(s16 *)(a + 0x2E) = 0;
    *(s16 *)(a + 0x2C) = 0;
    a[0x27] = 0;
    *(s16 *)(a + 0x1E) = 0;
    *(s16 *)(a + 0x14) = 0;
    *(s16 *)(a + 0x12) = 0;
    *(s16 *)(a + 0x10) = 0;
    *(s16 *)(a + 0xE) = 0;
    *(s16 *)(a + 0xC) = 0;
    *(s16 *)(a + 0xA) = 0;
    *(s16 *)(a + 8) = 0;
    *(s32 *)(a + 4) = 0;
    *(s32 *)(a + 0x20) = 0;
    a[0x26] = 0x80;
    a[0x25] = 0x80;
    a[0x24] = 0x80;
    *(s32 *)(a + 0x34) = 0;
    *(s16 *)(a + 0x2C) = 0;
}

s32 func_8001CFB8(void) {
    return func_8001CFDC(0, 4);
}

s32 func_8001CFDC(s32 a, s32 b) {
    u8 *w = (u8 *)&D_800AF630;
    s32 off;
    if ((u32)a < 0xC0) {
        if ((u32)b > 0xC0) {
            return 0;
        }
        for (; a < b; a++) {
            off = a * 0x84;
            if (*(u16 *)(w + off + 0x2A8) == 0) {
                return (s32)(w + (off + 0x2A8));
            }
        }
    }
    return 0;
}

s32 func_8001D050(void) {
    return func_8001D074(0, 4);
}

s32 func_8001D074(s32 a, s32 b) {
    u8 *w = (u8 *)&D_800AF630;
    s32 off;
    if ((u32)a < 0x100) {
        if ((u32)b > 0x100) {
            return 0;
        }
        for (; a < b; a++) {
            off = a * 0x38;
            if (*(u16 *)(w + off + 0x65A8) == 0) {
                return (s32)(w + (off + 0x65A8));
            }
        }
    }
    return 0;
}

void func_8001D0E8(u8 *a, s32 b, s32 c) {
    *(s16 *)(a + 0x28) = b;
    *(s16 *)(a + 0x2a) = c;
}

void func_8001D0F4(u32 *p) {
    while (*p != 0) {
        *p &= 0x80FFFFFF;
        p++;
    }
}

void func_8001D130(s32 a, s32 b) {
    *(s32 *)((b << 2) + a) = (*(s32 *)((b << 2) + a) & 0x80ffffff);
}

void func_8001D150(u32 *p, s32 i) {
    p[i] |= 0x1000000;
}

void func_8001D16C(u8 *a, u32 *x) {
    u32 *p = (u32 *)(a + 0x80);
    if (*p & 0x80FFFFFF) {
        do {
            p = (u32 *)((u32)p & 0x80FFFFFF);
        } while (*p & 0x80FFFFFF);
    }
    *p = ((u32)x & 0x80FFFFFF) | 0x01000000;
    *x = 0;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001D1C4);

void func_8001D388(u8 *a) {
    u16 k;
    if (*(s32 *)(a + 4) >= 0 && *(s32 *)(a + 0x20) != 0 && *(u16 *)a == 2) {
        k = *(u16 *)(a + 2);
        if (k < 0xB) {
            D_8006351C[k](a);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001D3FC);

void func_8001D70C(u8 *o) {
    Mtx m;
    Mtx s;
    s32 pad[2];
    RotMatrix(o + 0x10, &m);
    s.m[0][0] = *(u16 *)(o + 0x18);
    s.m[0][1] = 0;
    s.m[0][2] = 0;
    s.m[1][0] = 0;
    s.m[1][1] = *(u16 *)(o + 0x1A);
    s.m[1][2] = 0;
    s.m[2][0] = 0;
    s.m[2][1] = 0;
    s.m[2][2] = 0x1000;
    gte_SetRotMatrix(&m);
    gte_ldclmv(&s.m[0][0]);
    gte_rtir();
    gte_stclmv(&m.m[0][0]);
    gte_ldclmv(&s.m[0][1]);
    gte_rtir();
    gte_stclmv(&m.m[0][1]);
    gte_ldclmv(&s.m[0][2]);
    gte_rtir();
    gte_stclmv(&m.m[0][2]);
    m.t[0] = *(s16 *)(o + 8);
    m.t[1] = *(s16 *)(o + 0xA);
    m.t[2] = *(s16 *)(o + 0xC);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
}

void func_8001D8C4(u8 *o, u8 *s, u8 *prim) {
    SVec v[4];
    LVec r;
    s16 x0, y0, x1, y1;
    x0 = *(u16 *)(o + 0x2E) + *(u16 *)(s + 8);
    y0 = *(u16 *)(o + 0x30) + *(u16 *)(s + 0xA);
    v[0].vx = v[2].vx = x0;
    v[0].vy = v[1].vy = y0;
    v[1].vx = v[3].vx = x1 = s[2] + x0;
    v[2].vy = v[3].vy = y1 = s[3] + y0;
    v[0].vz = v[1].vz = v[2].vz = v[3].vz = *(u16 *)(o + 0x32);
    gte_ldv0(&v[0]);
    gte_rtv0tr();
    gte_stlvnl(&r);
    *(s16 *)(prim + 8) = r.vx;
    *(s16 *)(prim + 0xA) = r.vy;
    gte_ldv0(&v[1]);
    gte_rtv0tr();
    gte_stlvnl(&r);
    *(s16 *)(prim + 0x10) = r.vx;
    *(s16 *)(prim + 0x12) = r.vy;
    gte_ldv0(&v[2]);
    gte_rtv0tr();
    gte_stlvnl(&r);
    *(s16 *)(prim + 0x18) = r.vx;
    *(s16 *)(prim + 0x1A) = r.vy;
    gte_ldv0(&v[3]);
    gte_rtv0tr();
    gte_stlvnl(&r);
    *(s16 *)(prim + 0x20) = r.vx;
    *(s16 *)(prim + 0x22) = r.vy;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001DA34);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001E094);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001E378);

s32 func_8001E668(u8 *o, u8 *s, u8 *prim, s32 *flag) {
    SVec v[4];
    struct { s32 flag2; s32 otz; } t;
    v[0].vx = *(u16 *)(o + 0x2E) + *(u16 *)(s + 8);
    v[0].vy = *(u16 *)(o + 0x30) + *(u16 *)(s + 0xA);
    v[1].vx = s[2] + (*(u16 *)(o + 0x2E) + *(u16 *)(s + 8));
    v[1].vy = *(u16 *)(o + 0x30) + *(u16 *)(s + 0xA);
    v[2].vx = *(u16 *)(o + 0x2E) + *(u16 *)(s + 8);
    v[2].vy = s[3] + (*(u16 *)(o + 0x30) + *(u16 *)(s + 0xA));
    v[3].vx = s[2] + (*(u16 *)(o + 0x2E) + *(u16 *)(s + 8));
    v[3].vy = s[3] + (*(u16 *)(o + 0x30) + *(u16 *)(s + 0xA));
    v[0].vz = v[1].vz = v[2].vz = v[3].vz = *(u16 *)(o + 0x32);
    gte_ldv3(&v[0], &v[1], &v[2]);
    gte_rtpt();
    gte_stflg(flag);
    gte_stsxy3(prim + 8, prim + 0x10, prim + 0x18);
    gte_ldv0(&v[3]);
    gte_rtps();
    gte_stflg(&t.flag2);
    *flag |= t.flag2;
    gte_stsxy(prim + 0x20);
    gte_avsz4();
    gte_stotz(&t.otz);
    return t.otz;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001E7E0);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001EA14);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001EFE0);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001F730);

void func_8001F974(void) {
}

void func_8001F97C(u8 *o) {
    func_80020DA4(o + 0x10, o + 0x34);
    if (*(u16 *)(o + 0x2C) & 0x10) {
        func_80020F34(o + 0x34, o + 0x18);
    }
    *(s32 *)(o + 0x48) = *(s16 *)(o + 8);
    *(s32 *)(o + 0x4C) = *(s16 *)(o + 0xA);
    *(s32 *)(o + 0x50) = *(s16 *)(o + 0xC);
    *(u16 *)(o + 0x2C) |= 1;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001F9F8);

void func_8001FB8C(u8 *o, s32 *cnt) {
    if (*(s32 *)(o + 4) >= 0 && *(u16 *)o == 1 && *(u16 *)(o + 2) < 9) {
        D_80063500[*(u16 *)(o + 2)](o);
        (*cnt)++;
    }
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8001FC08);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80020248);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80020598);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80020A28);

#ifdef NON_MATCHING
/* NOT YET MATCHING: functionally the same as the asm, but the original keeps a 0x18 byte frame (saves s0/s1, 16 bytes of
   locals) and allocates registers differently. tools/try.ps1 rebuilds and diffs it (a3 versus a2 for the table pointer, then the
   order of the products). */
/* Angles are 12-bit (0x1000 = a full turn). The table holds one entry per angle: a word whose low half is sin and high half
   is cos, 4.12 fixed point; the code reads some entries as words and some as halves. */
extern s32 *D_800636D4;

/* Builds a 3x3 rotation matrix (9 s16, 4.12) from three 12-bit angles {x, y, z} */
void func_80020DA4(u16 *angles, s16 *m) {
    s32 *tab = D_800636D4;
    s32 xv = tab[angles[0] & 0xFFF];
    s16 *z = (s16 *)&tab[angles[2] & 0xFFF];
    s32 xc = xv >> 16;
    s16 zs = z[0];
    s32 c = xc * zs;
    s16 zc = z[1];
    s32 b = xc * zc;
    s16 *y = (s16 *)&tab[angles[1] & 0xFFF];
    s16 ys = y[0];
    s32 yv = *(s32 *)y;
    s32 yc = yv >> 16;
    s32 a = ((s16)xv * ys) >> 12;

    m[6] = -yv;
    m[0] = (zc * yc) >> 12;
    m[3] = (zs * yc) >> 12;
    m[7] = (yc * (s16)xv) >> 12;
    m[8] = (yc * xc) >> 12;
    m[1] = ((a * zc) >> 12) - (c >> 12);
    m[2] = (((b >> 12) * ys) >> 12) + (((s16)xv * zs) >> 12);
    m[4] = ((a * zs) >> 12) + (b >> 12);
    m[5] = (((c >> 12) * ys) >> 12) - (((s16)xv * zc) >> 12);
}
#else
INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80020DA4);
#endif

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80020F34);

void func_80021008(u8 *a) {
    func_80028620(0, a);
    func_80028620(1, a + 0x10);
    func_80028620(2, a + 0x20);
}

void func_80021050(void) {
    func_80028620(0, &D_800A5E88[0]);
    func_80028620(1, &D_800A5E88[1]);
    func_80028620(2, &D_800A5E88[2]);
}

void func_8002109C(s32 a, s16 **pp) {
    s16 *p = *pp;
    if (p[3] == -2) {
        SetBackColor(p[0], p[1], p[2]);
    } else if (a == p[3]) {
        SetBackColor(p[0], p[1], p[2]);
        *pp += 4;
    }
}

void func_80021120(s32 *p) {
    GsSetAmbient(D_800AE7E0, D_800AE7E2, D_800AE7E4);
    *p += 1;
}

s32 func_80021174(s32 wh, s32 *v, s32 unused) {
    struct { s16 sx, sy; s32 flag; s32 z; } t;
    s32 w, h;
    if (wh == 0x7FFF7FFF) {
        return 1;
    }
    gte_SetRotMatrix(&D_800AE688);
    gte_SetTransMatrix(&D_800AE688);
    gte_ldlv0(v);
    gte_rtps();
    gte_stsxy(&t.sx);
    gte_stflg(&t.flag);
    gte_stszotz(&t.z);
    if (t.flag < 0) { return 0; }
    w = (s16)wh; if (-w < t.sx) { if (t.sx <= w) { h = wh >> 16; if (-h < t.sy) { if (t.sy <= h) { return 1; } } } } return 0;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80021284);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800215F4);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80021D38);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800221A8);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800226C0);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80023138);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800233CC);

void func_800234E4(u8 *o, u16 r, u16 a) {
    s32 i;
    for (i = 0; i < 12; i++) {
        *(s16 *)(o + i * 4 + 0x10) = (rsin(a + i * 0x155) * r) >> 12;
        *(s16 *)(o + i * 4 + 0x12) = (rcos(a + i * 0x155) * r) >> 12;
    }
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80023570);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8002374C);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80023BF0);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80024054);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800241C0);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800242D0);

void func_800243EC(s32 *p) {
    s32 v = *p;
    D_80078D88 = v;
    D_800A2B78 = (v >> 0x1C) & 7;
    if (v & 0x40) {
        func_80026D64();
        return;
    }
    func_80024448();
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80024448);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800249F0);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80024BC0);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80024DE8);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80025000);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8002528C);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80025504);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80025818);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80025A30);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80025CBC);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80025EB8);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80026128);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800262D8);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80026514);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800268D0);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80026D64);

u8 *func_80027058(u8 *p, u8 *verts, u32 *e, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; } t;
    if (n == 0) { return pkt; }
    do {
        gte_ldv3(verts + *(u16 *)(p + 0xA) * 8, verts + *(u16 *)(p + 0xC) * 8, verts + *(u16 *)(p + 0xE) * 8);
        gte_rtpt();
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_f3(pkt);
                gte_avsz3();
                gte_stotz(&t.z);
                *(u32 *)(pkt + 4) = *(u32 *)(p + 4);
                e = ot + (t.z >> shift);
                *(u32 *)pkt = (*e & 0xFFFFFF) | 0x04000000;
                *e = (u32)pkt & 0xFFFFFF;
                pkt += 0x14;
                if (D_800A2B78 != 0 && (pkt[-0xD] & 2)) {
                    e = ot + (t.z >> shift);
                    pkt[3] = 1;
                    *(u32 *)(pkt + 4) = ((D_800A2B78 & 3) << 5) | 0xE100000A;
                    *(u32 *)pkt = (*e & 0xFFFFFF) | 0x01000000;
                    *e = (u32)pkt & 0xFFFFFF;
                    pkt += 8;
                }
            }
        }
        p += 0x10;
    } while (--n != 0);
    return pkt;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80027200);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800273F4);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800275BC);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800277DC);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_800279AC);

void func_80027BF0(void) {
    func_80027C10();
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80027C10);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80027D20);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80027F4C);

void func_80028200(u8 *tab, s32 z, s32 shift, s32 *prim, s32 tag) {
    s32 *e = (s32 *)(tab + (z >> shift) * 4);
    *prim = (*e & 0xFFFFFF) | tag;
    *e = (s32)prim & 0xFFFFFF;
}

void func_80028234(void) {
}

void func_8002823C(void) {
    s32 i;
    for (i = 0; i < 3; i++) {
        D_800A5E88[i].vx = 0x800;
        D_800A5E88[i].vy = 0x800;
        D_800A5E88[i].vz = 0;
        D_800A5E88[i].r = 0x20;
        D_800A5E88[i].g = 0x20;
        D_800A5E88[i].b = 0x20;
        func_80028620(i, &D_800A5E88[i]);
    }
}

void func_800282FC(void) {
}

void func_80028304(s32 id, s32 x, s32 y, s32 z, u8 r, u8 g, u8 b) {
    u32 a = id & 0xFFFF;
    if (a < 3) {
        D_800A5E88[a].vx = x;
        D_800A5E88[a].vy = y;
        D_800A5E88[a].vz = z;
        D_800A5E88[a].r = r;
        D_800A5E88[a].g = g;
        D_800A5E88[a].b = b;
        func_80028620(a, &D_800A5E88[a]);
    }
}

void func_80028394(u16 id, s32 dx, s32 dy, s32 dz) {
    if (id < 3) {
        D_800A5E88[id].vx += dx;
        D_800A5E88[id].vy += dy;
        D_800A5E88[id].vz += dz;
        func_80028620(id, &D_800A5E88[id]);
    }
}

void func_80028428(s32 id, s8 r, s8 g, s8 b) {
    u32 a = id & 0xFFFF;
    if (a < 3) {
        D_800A5E88[a].r = r;
        D_800A5E88[a].g = g;
        D_800A5E88[a].b = b;
        func_80028620(a, &D_800A5E88[a]);
    }
}

void func_80028488(u16 id) {
    if (id < 3) {
        D_800A5E88[id].vz = 0x64;
        D_800A5E88[id].vx = 0;
        D_800A5E88[id].vy = 0;
        D_800A5E88[id].r = 0;
        D_800A5E88[id].g = 0;
        D_800A5E88[id].b = 0;
        func_80028620(id, &D_800A5E88[id]);
    }
}

void func_8002850C(s16 r, s16 g, s16 b) {
    D_800AE7E0 = r;
    D_800AE7E2 = g;
    D_800AE7E4 = b;
    GsSetAmbient(r, g, b);
}

void func_80028558(s32 id, s8 r, s8 g, s8 b) {
    s32 a = id & 0xFFFF;
    D_800A5E88[a].r = r;
    D_800A5E88[a].g = g;
    D_800A5E88[a].b = b;
    func_80028620(a, &D_800A5E88[a]);
}

void func_800285AC(void) {
    GsSetLightMode(0);
}

void func_800285CC(void) {
    register s16 *fp = &D_800C6D18;
    *fp = -0x106;
    D_800C6D1C = 0x01F40000;
    D_800C6D20 = 0;
    D_800C6D22 = 0;
    GsSetFogParam(fp);
    GsSetLightMode(1);
}

void func_80028620(s32 id, LightDir *src) {
    LightDir light;

    light = *src;
    if ((light.vx | light.vy | light.vz) == 0) {
        light.vx = 0x1000;
        light.b = 0;
        light.g = 0;
        light.r = 0;
    }
    GsSetFlatLight(id, &light);
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80028694);

void func_80028A30(void) {
}

void func_80028A38(void) {
}

void func_80028A40(void) {
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80028A48);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80028C50);

s32 func_80028D58(void) {
    return func_80029178(0xB) & 0xFF;
}

s32 func_80028D78(s32 a) {
    return func_80029124(0xb, (a & 0xff));
}

s32 func_80028D9C(void) {
    return func_80029178(0xC) & 0xFF;
}

s32 func_80028DBC(s32 a) {
    return func_80029124(0xc, (a & 0xff));
}

s32 func_80028DE0(void) {
    return func_80029178(0xD) & 0xFF;
}

s32 func_80028E00(s32 a) {
    return func_80029124(0xd, (a & 0xff));
}

s32 func_80028E24(void) {
    return func_80029178(0xE) & 0xFF;
}

s32 func_80028E44(s32 a) {
    return func_80029124(0xe, (a & 0xff));
}

s32 func_80028E68(void) {
    return func_80029178(0xF) & 0xFF;
}

s32 func_80028E88(s32 a) {
    return func_80029124(0xf, (a & 0xff));
}

s32 func_80028EAC(void) {
    return func_80029178(0x10) & 0xFF;
}

s32 func_80028ECC(s32 a) {
    return func_80029124(0x10, (a & 0xff));
}

s32 func_80028EF0(void) {
    return func_80029178(0x11) & 0xFF;
}

s32 func_80028F10(s32 a) {
    return func_80029124(0x11, (a & 0xff));
}

s32 func_80028F34(void) {
    return func_80029178(0x12) & 0xFF;
}

s32 func_80028F54(s32 a) {
    return func_80029124(0x12, (a & 0xff));
}

s32 func_80028F78(void) {
    return func_80029178(0x13) & 0xFF;
}

s32 func_80028F98(s32 a) {
    return func_80029124(0x13, (a & 0xff));
}

s32 func_80028FBC(void) {
    return func_800291B4(0x2C) & 0xFF;
}

s32 func_80028FDC(s32 a) {
    return func_800291A0(0x2c, (a & 0xff));
}

s32 func_80029000(void) {
    return func_800291B4(0x2D) & 0xFF;
}

s32 func_80029020(s32 a) {
    return func_800291A0(0x2d, (a & 0xff));
}

void func_80029044(void) {
    u32 i = 0;
    do {
        D_800AE648[i] = 0;
        i++;
    } while (i < 0x40);
}

void func_8002906C(void) {
    u32 i = 0;
    do {
        D_800BA1B8[i] = 0;
        i++;
    } while (i < 0x100);
}

void func_80029094(void) {
    func_80016714(D_800BA2B8, 0x60);
}

s32 func_800290BC(void) {
    return func_80029124(0x7f, 1);
}

void func_800290E0(void) {
    func_80029124(0x7F, 0);
}

s32 func_80029104(void) {
    return func_80029178(0x7F) & 0xFF;
}

s32 func_80029124(u32 bit, s32 on) {
    u32 idx = bit >> 3;
    s32 mask = 1 << (bit & 7);
    if (on & 0xFF) {
        D_800AE648[idx] |= mask;
    } else {
        D_800AE648[idx] &= ~mask;
    }
}

s32 func_80029178(s32 n) {
    u32 idx = (u32)n >> 3;
    s32 mask = 1 << (n & 7);
    return (D_800AE648[idx] & mask) != 0;
}

s32 func_800291A0(s32 i, s32 v) {
    D_800BA1B8[i] = v;
}

s32 func_800291B4(s32 a) {
    return D_800BA1B8[a];
}

void func_800291C8(s32 i, s16 v) {
    *(s16 *)(D_800BA1B8 + i) = v;
}

s16 func_800291DC(s32 i) {
    return *(s16 *)(D_800BA1B8 + i);
}

void func_800291F0(s32 i, s32 v) {
    *(s32 *)(D_800BA1B8 + i) = v;
}

s32 func_80029204(s32 i) {
    return *(s32 *)(D_800BA1B8 + i);
}

void func_80029218(void) {
    func_80016714(&D_800AE6A8, 0x3c);
}

void func_80029240(void) {
    D_80075838 = 1;
}

void func_80029254(void) {
    D_80075838 = 0;
}

s32 func_80029264(void) {
    return D_80075838;
}

void func_80029274(void) {
    Blk98 t = D_80072C84;
    D_80078E78 = t;
}

void func_8002931C(s32 a) {
    D_80078E90 = a;
    func_80029344();
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80029344);

void func_8002941C(void) {
    func_80016714(D_800A6588, 2);
}

void func_80029444(void) {
    u8 t;
    t = ++D_80078E7C; if (t >= 0x1E) {
        D_80078E7C = 0;
        t = ++D_80078E7D; if (t >= 0x3C) {
            D_80078E7D = 0;
            D_80078E7E++; if (D_80078E7E >= 0x3C) {
                D_80078E7E = 0;
                t = ++D_80078E7F; if (t >= 0x64) {
                    *(u32 *)&D_80078E7C = 0x633B3B00;
                }
            }
        }
    }
}

s32 func_80029504(void) {
    return D_80078E80;
}

void func_80029514(s32 a) {
    D_80078E80 = a;
}

s32 func_80029524(void) {
    return (u32)(D_80078E80 - 0xC8) < 0x190U;
}

s32 func_8002953C(void) {
    return D_80078E84;
}

void func_8002954C(s32 a) {
    D_80078E84 = a;
}

void func_8002955C(void) {
    D_80078E84 = (D_80078E84 + 0x1);
}

s32 func_8002957C(void) {
    return D_80078E88;
}

void func_8002958C(s32 a) {
    D_80078E88 = a;
}

void func_8002959C(void) {
    func_8002A544(0x32);
    D_80078E88 += 1;
}

void func_800295D4(void) {
    D_80078EB4 = 0xFA;
    D_80078EB2 = 0xFA;
    D_80078EB8 = 0xFA;
    D_80078EB6 = 0xFA;
    func_80029124(0x1E, 1);
    D_80078EC0 = 1;
    func_80029124(0x80, 1);
    D_80078E8C = 0x64;
    func_80029124(0x82, 1);
    func_80029124(0x83, 1);
    func_80029124(0x85, 1);
}

void func_80029664(void) {
    D_80078E90 = 0x528;
    func_80029344();
}

void func_80029690(void) {
    s32 i = 0;
    u8 *p = D_80078F28;
    s32 *q = D_800A5E58;
    do {
        *q = 0;
        func_80016714(p, 0x5B8);
        p += 0x2DC;
        i++;
        q += 1;
    } while (i < 2);
}

void func_800296F8(Blk24 *src) {
    func_80029774(1);
    D_80079204 = *src;
    D_800A5E5C = 1;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80029774);

void func_800298BC(Blk24 *dst) {
    func_8002992C(1);
    *dst = D_80079204;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8002992C);

void func_80029A58(s32 i) {
    u32 *p = (u32 *)(D_80078F28 + i * 0x2DC);
    p[0xE] >>= 1;
}

s32 func_80029A94(s32 a) {
    return D_800A5E58[a];
}

s32 func_80029AAC(void) {
    return (func_8002A2B0() * 0x4B) / 100;
}

s32 func_80029AF4(void) {
    s32 t = func_80029E30();
    return (t * (func_80029CD4(0x28) + 0xC8)) / 100;
}

s32 func_80029B4C(s16 a, s16 b) {
    s32 t = func_80029DB4();
    return (t * (a + func_80029CD4(b))) / 100;
}

s32 func_80029BC8(s16 a, s16 b) {
    s32 x = func_80029E30();
    x = x * (a + func_80029CD4(b));
    return x / 100;
}

s32 func_80029C44(s16 a, s16 b) {
    s32 t = func_80029DB4();
    s32 u = func_80029E30();
    return ((t + u) * (a + func_80029CD4(b))) / 100;
}

s32 func_80029CD4(s32 n) {
    if (n == 0) {
        return 0;
    }
    return rand() % n;
}

s32 func_80029D3C(s32 v) {
    s32 r;
    s32 f;
    if (v <= 0) {
        return 0;
    }
    f = func_8002A4FC() * 0x3C; r = v - (v * f) / 4800;
    if (r <= 0) {
        r = 1;
    }
    return r;
}

s32 func_80029DB4(void) {
    s32 m = 0x7D;
    s32 t;
    if (func_80029178(0x81) & 0xFF) {
        m = 0x96;
    }
    t = func_8002A9DC();
    return ((t + func_8002A2B0()) * m) / 100;
}

s32 func_80029E30(void) {
    s32 t = func_8002A76C();
    return ((t + func_8002A2B0()) * 0xAF) / 100;
}

s32 func_80029E94(u8 *o, s32 k) {
    s16 t = *(s16 *)(*(u8 **)(o + 0x78) + 0x30);
    s32 r = 0;
    if (t != 0) {
        r = (t * k) >> 12;
    }
    return r;
}

s32 func_80029EC0(u8 *a) {
    return *(s16 *)((u8 *)*(s32 *)(a + 0x78) + 0x2e);
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80029ED4);

s32 func_80029FD4(void) {
    return D_80078F08;
}

s32 func_80029FE4(void) {
    s32 a = func_8002A26C();
    s32 b = func_8002A4B8();
    s32 c = func_8002A728();
    return (a + b + c + func_8002A998()) / 4;
}

s32 func_8002A04C(u8 *p) {
    u8 *q = *(u8 **)(p + 0x78);
    if (q != 0) {
        return func_8002A088(*(s16 *)(q + 0x2E));
    }
    return 0;
}

s32 func_8002A088(s16 unused) {
    s32 k;
    s32 r;
    if (func_8002A108()) {
        k = func_8002A26C();
        func_8016E918(0, *(u16 *)((u8 *)D_800638FA + (k << 4)) - *(u16 *)((u8 *)D_800638FA + ((k - 1) << 4)));
        func_8002D4C8(0xB2C, 0);
        func_8002AAAC();
        return 1;
    }
    r = 0;
    return r;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8002A108);

s32 func_8002A1B4(void) {
    if (func_8002AA00(func_8002A26C() + 1) != 0) {
        return func_8002A27C() == func_8002A28C();
    }
    return 0;
}

s32 func_8002A200(void) {
    s32 b = func_8002A28C();
    return func_8002A27C() >= b;
}

void func_8002A234(void) {
    s32 n = D_80078EE4 + 1;
    if (n >= 0x1F) {
        n = 0x1E;
    }
    D_80078EE4 = n;
    D_80078EE8 = 0;
}

s32 func_8002A26C(void) {
    return D_80078EE4;
}

s32 func_8002A27C(void) {
    return D_80078EE8;
}

s32 func_8002A28C(void) {
    return *(u16 *)(D_800638F8 + (D_80078EE4 << 4));
}

s32 func_8002A2B0(void) {
    return *(u16 *)((u8 *)D_800638FA + (D_80078EE4 << 4));
}

s32 func_8002A2D4(void) {
    s32 k;
    s32 r;
    if (func_8002A354()) { k = func_8002A4B8(); func_8016E918(1, *(u16 *)(D_800638FE + (k << 4)) - *(u16 *)(D_800638FE + ((k - 1) << 4))); func_8002D4C8(0xB2C, 0); func_8002AAAC(); return 1; } r = 0;
    return r;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8002A354);

s32 func_8002A400(void) {
    if (func_8002AA00(func_8002A4B8() + 1) != 0) {
        return func_8002A4C8() == func_8002A4D8();
    }
    return 0;
}

s32 func_8002A44C(void) {
    s32 b = func_8002A4D8();
    return func_8002A4C8() >= b;
}

void func_8002A480(void) {
    s32 v = D_80078EEC + 1;
    if (v >= 0x1F) {
        v = 0x1E;
    }
    D_80078EEC = v;
    D_80078EF0 = 0;
}

s32 func_8002A4B8(void) {
    return D_80078EEC;
}

s32 func_8002A4C8(void) {
    return D_80078EF0;
}

s32 func_8002A4D8(void) {
    return *(u16 *)((u8 *)D_800638FC + (D_80078EEC << 4));
}

s32 func_8002A4FC(void) {
    return *(u16 *)(D_800638FE + (D_80078EEC << 4));
}

s32 func_8002A520(u8 *a) {
    return func_8002A544(*(u8 *)(a + 0xc8));
}

s32 func_8002A544(void) {
    s32 n;
    if (func_8002A5C4() != 0) {
        n = func_8002A728();
        func_8016E918(3, *(u16 *)(D_80063902 + (n << 4)) - *(u16 *)(D_80063902 + ((n - 1) << 4)));
        func_8002D4C8(0xB2C, 0);
        func_8002AAAC();
        return 1;
    }
    return 0;
}

s32 func_8002A5C4(s32 d) {
    s32 t = func_8002AA00(func_8002A728() + 1);
    if (func_8002A748() != 0 && t >= 0) {
        D_80078F00 += d;
        if (func_8002A6BC() != 0) {
            if (t != 0) {
                D_80078F00 = func_8002A748();
                return 0;
            }
            func_8002A6F0();
            return 1;
        }
    }
    return 0;
}

s32 func_8002A670(void) {
    if (func_8002AA00(func_8002A728() + 1) != 0) {
        return func_8002A738() == func_8002A748();
    }
    return 0;
}

s32 func_8002A6BC(void) {
    s32 b = func_8002A748();
    return func_8002A738() >= b;
}

void func_8002A6F0(void) {
    s32 v = D_80078EFC + 1;
    if (v >= 0x1F) {
        v = 0x1E;
    }
    D_80078EFC = v;
    D_80078F00 = 0;
}

s32 func_8002A728(void) {
    return D_80078EFC;
}

s32 func_8002A738(void) {
    return D_80078F00;
}

s32 func_8002A748(void) {
    return *(u16 *)(D_80063900 + (D_80078EFC << 4));
}

s32 func_8002A76C(void) {
    return *(u16 *)(D_80063902 + (D_80078EFC << 4));
}

void func_8002A790(u8 *a) {
    func_8002A7B4(*(u8 *)(a + 0xc9));
}

s32 func_8002A7B4(s32 d) {
    s32 k;
    s32 r;
    if (func_8002A834(d)) {
        k = func_8002A998();
        func_8016E918(2, *(u16 *)(D_80063906 + (k << 4)) - *(u16 *)(D_80063906 + ((k - 1) << 4)));
        func_8002D4C8(0xB2C, 0);
        func_8002AAAC();
        return 1;
    }
    r = 0;
    return r;
}

s32 func_8002A834(s32 d) {
    s32 t = func_8002AA00(func_8002A998() + 1);
    if (func_8002A9B8() != 0 && t >= 0) {
        D_80078EF8 += d;
        if (func_8002A92C() != 0) {
            if (t != 0) {
                D_80078EF8 = func_8002A9B8();
                return 0;
            }
            func_8002A960();
            return 1;
        }
    }
    return 0;
}

s32 func_8002A8E0(void) {
    if (func_8002AA00(func_8002A998() + 1) != 0) {
        return func_8002A9A8() == func_8002A9B8();
    }
    return 0;
}

s32 func_8002A92C(void) {
    s32 b = func_8002A9B8();
    return func_8002A9A8() >= b;
}

void func_8002A960(void) {
    s32 v = D_80078EF4 + 1;
    if (v >= 0x1F) {
        v = 0x1E;
    }
    D_80078EF4 = v;
    D_80078EF8 = 0;
}

s32 func_8002A998(void) {
    return D_80078EF4;
}

s32 func_8002A9A8(void) {
    return D_80078EF8;
}

s32 func_8002A9B8(void) {
    return *(u16 *)(D_80063904 + (D_80078EF4 << 4));
}

s32 func_8002A9DC(void) {
    return *(u16 *)(D_80063906 + (D_80078EF4 << 4));
}

s32 func_8002AA00(s32 a) {
    s32 r = func_8002AA3C();
    s32 v;
    if (r == 0) {
        v = -1;
    } else {
        v = a >= r;
    }
    return v;
}

s32 func_8002AA3C(void) {
    s32 v = func_80029504();
    if (v >= 0x4B0) {
        return 0x63;
    }
    if (v >= 0x384) {
        return 0x1B;
    }
    if (v >= 0x258) {
        return 0x16;
    }
    if (v >= 0xC8) {
        return 0x10;
    }
    if (v >= 0xA) {
        return 8;
    }
    return 0;
}

void func_8002AAAC(void) {
}

s32 func_8002AAB4(void) {
    s32 a = func_8002A26C();
    s32 b = func_8002A4B8();
    s32 c = func_8002A728();
    s32 q = ((a + b + c) + func_8002A998()) / 4;
    s32 i = 0; s32 lim; while ((lim = D_800638A0[i * 2]) != 0) { if (q >= lim) { return D_800638A0[i * 2 + 1]; } i++; }
    return D_800638EC;
}

void func_8002AB64(void) {
    s16 i;
    u8 n = func_800291B4(0x2E) + 1;
    func_800291A0(0x2E, n);
    if (n == 1) {
        for (i = 1; i < 7; i++) {
            func_8002AC00(i & 0xFF);
        }
        for (i = 0x3B; i < 0x40; i++) {
            func_800291A0(i, 3);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8002AC00);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8002AC98);

s32 func_8002AE60(void) {
    s16 i = 0;
    s16 n = 0;
    for (; i < 0x2B; i++) {
        if (func_800291B4(i + 0x63) & 0x40) {
            n++;
        }
    }
    return n > 0x2A;
}

void func_8002AED0(void) {
    D_800760C8 = 1;
}

void func_8002AEE4(void) {
    D_800760C8 = 2;
}

void func_8002AEF8(void) {
    D_800760C8 = 0;
}

s32 func_8002AF08(void) {
    return D_800760C8;
}

void func_8002AF18(void) {
    D_800760AC = 0;
    D_8007609C = 0;
    D_800760A0 = 0;
    D_800760A4 = 0;
    D_800760A8 = 0;
}

u8 *func_8002AF48(s32 i) {
    return D_80075A50 + ((i + 1) << 7);
}

s32 func_8002AF60(void) {
    return D_80075A40;
}

void func_8002AF70(Blob2DC *src, s32 v) {
    func_80016714(&D_80075CC0, 0x300);
    D_80075CC0 = *src;
    D_80076040 = v;
}

void func_8002B00C(Blob2DC *dst) {
    *dst = D_80075CC0;
}

s32 func_8002B064(u8 *p) {
    s32 sum = 0;
    s32 end = (s32)p + 0x70;
    do {
        sum += *p++;
    } while ((s32)p < end);
    return sum & 0xFFFF;
}

s32 func_8002B08C(u8 *p) {
    s32 sum = 0;
    s32 end = (s32)p + 0x300;
    do {
        sum += *p++;
    } while ((s32)p < end);
    return sum & 0xFFFF;
}

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8002B0B4);

INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_8002C320);

s32 func_8002C3B0(s32 n, u8 *p) {
    s32 i = 0; s32 sum = 0; s32 v; s32 q;
    s32 pad[2];
    if (n > 0) {
        do {
            v = *(s32 *)(p + 0x18);
            q = v / 0x2000;
            if (v & 0x1FFF) { sum += 1 + q; } else { sum += q; }
            i++; p += 0x28;
        } while (i < n);
    }
    return sum;
}
