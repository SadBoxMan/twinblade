#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "work.h"

/* Controller state, one per port (0x4C bytes; g_Pads[2], r249 docs/names_r249.md). Layout inside data[] (record offsets):
 * 0x08 receive status (0 = good), 0x09 receive id, 0x0A.. the raw reply (buttons active-low, then rx ry lx ly);
 * 0x2A u16 buttons latched this read (PsyQ order: Start 0x800, Select 0x100, Up 0x1000 ... Left 0x8000), 0x2C analog;
 * 0x32 u16 held, 0x34.. analog after the dead zone (index 4 = left X, 5 = left Y; GetPadByte), 0x3A u16 pressed this
 * frame, 0x42 u16 held last frame + analog (GetPadPrevByte), 0x4A / 0x4B the small / large motor values */
typedef struct {
    /* 0x00 */ u8 pad0[4];      /* [0] the pad type id: 0x41 digital, 0x53 analog stick, 0x73 DualShock analog */
    /* 0x04 */ s32 unk4;        /* 8 at InitPad, no reader found */
    /* 0x08 */ u8 data[0x44]; /* receive buffer handed to PadInitDirect */
} Pad;

extern u8 D_800BA118[];
extern s32 D_800AE610;
extern Pad g_Pads[2];
extern s32 g_StageImageEntry;

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

extern void ResetLoader(void);
extern s32 LoadFileStep(CdlFILE *file, void *dest, s32 arg2, s32 arg3);
extern void func_80016714(void *p, s32 size); /* zero-fills size bytes */
extern void ResetGameState(void);
extern void ResetMallocHeap(void);
extern void InitDisplay(void);
extern void Init3DScene(void);
extern void func_8001C044(void);
extern void ClearImageQueue(void);
extern void func_80015310(void);
extern void func_80028A48(void);
extern void func_80028C50(void);
extern void StopPadRumble(void);

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
extern s32 g_LzssState;
extern s32 g_LzssDst;
extern s32 D_800760AC;
extern s32 D_8007609C;
extern s32 D_800760A0;
extern s32 D_800760A4;
extern s32 D_800760A8;
extern s32 g_RumbleScript;
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
extern s32 libc_memset();
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
extern void InitDefaultView(void);
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
extern u16 g_Pad0Held;
extern u16 g_Pad0Pressed;
extern u16 g_Pad1Held;
extern u16 g_Pad1Pressed;
extern u8 D_80078DD2b[];

extern u16 GetPadHeldDirWide(s32 n);
extern u16 GetPadPressedDirWide(s32 n);

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
extern s8 g_RumbleActSmall;
extern s8 g_RumbleActLarge;
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
extern s32 g_PrimNext;
extern void func_80024448();
extern void func_80026D64();
extern s32 D_80078D88;
extern s32 D_800A2B78;

extern s32 func_8002A76C();
extern u8 D_80078F28[];

extern u8 GetPadType(u8 n);
extern u8 GetPadByte(u8 a, s32 b);
extern void WideStickDeadzone(u16 *p);
extern u8 GetPadType(u8 n);
extern u8 GetPadByte(u8 a, s32 b);
extern void WideStickDeadzone(u16 *p);
extern void WideStickDeadzone(u16 *p);

typedef struct { u8 b[8]; } B8;

extern s32 func_8002A26C();
extern s32 func_8002A4B8();

extern s32 func_80029504();
extern void AddPrim(void *ot, void *p);
typedef struct { u8 *ot; u8 pad[0x10]; } OtRec;
extern OtRec D_800A651C[];
extern u16 D_800B9A02;

extern void (*D_8006351C[])(u8 *, s32 *);
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
extern u32 g_WorldOtTable[2][0x1000];

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

extern void SetScreenMode(s32 n);
extern s8 D_800AF7C2;
extern s8 D_800AF7C3;
extern s8 D_800AF7C4;
extern void StreamStep(s32 n);
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
extern void InitDrawDispEnvs(void);
extern u16 D_80062A3C;
extern u16 D_80062A3E;
extern u16 D_80062A40;
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern u16 D_800AF7C0;

extern void SetLineG2(void *p);
extern u8 *AllocPrim(s32 n);
extern void func_80017E8C(s32 n);
extern void func_80018094(void *p, s32 z, u32 a);
extern void SetDrawMode(void *p, s32 a, s32 b, s32 c, s32 d);
extern s32 RotTransPers3(void *a, void *b, void *c, void *d, void *e, void *f, s32 *flag, s32 *p);

extern s16 D_800B9ECA;
extern void func_80027C10();
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
    func_80013FBC(n, (u8 *)b);
    func_800128B4(b);
    func_80013F98(n, (u8 *)c);
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
extern void ApplyBgColor(void);
extern u16 g_Pad0PrevHeld;

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
extern void ClearRumbleScript(void);
extern void func_8001B324(void);
extern s16 func_80012E6C(s32 a, s32 b, s16 n, s16 m, s16 *f);
extern s16 func_80012FC8(s16 a, s16 b, s16 c, s16 d);
extern s32 StageAlwaysReloads(s32 n);
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
extern s32 g_PadConnected;
extern s32 D_800A5E5C;
extern s32 SpuIsTransferCompleted(s32 n);
extern s32 func_8002A5C4();
extern void CheckSelectHold(u8 *pad);
extern void ClearPadInput(u8 *p);
extern s32 PollPad(s32 i);
extern void LatchPadInput(u8 *p);
extern void UpdatePadState(u8 *p);
extern void func_80029774(s32 a);
extern void func_80020DA4(u8 *a, u8 *b);
extern void func_80020F34(u8 *a, u8 *b);
extern void func_800373D0(void);
extern void GsSetProjection(s32 a);
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
extern void ClearVram(void);

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
extern s32 DiscCheckStep(void);
extern s32 g_CdSyncResult;      /* the last CdSync result */
extern s32 func_8002FD14(s32 a, s32 b);
extern void StartDiscCheck(void);
extern void StreamReadyCallback(u8 intr, u8 *result);
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
extern void StartLzssDecode(s32 a);
extern s32 LzssDecodeSector(u8 *p);
#define MAX(a,b) ((a) > (b) ? (a) : (b))
extern s32 D_8006387C;

extern s32 D_80063880;

extern s32 D_80063884;

extern u8 D_80063888;

typedef struct {
    u32 tag;
    u8 r0, g0, b0, code;
    s16 x0, y0;
    u8 u0, v0;
    u16 clut;
    u8 r1, g1, b1, p1;
    s16 x1, y1;
    u8 u1, v1;
    u16 tpage;
    u8 r2, g2, b2, p2;
    s16 x2, y2;
    u8 u2, v2;
    u16 pad2;
} GT3;
extern u8 D_8006388C[];
extern u8 D_8006389C[];

typedef struct {
    u32 tag;
    u8 r0, g0, b0, code;
    s16 x0, y0;
    u8 u0, v0;
    u16 clut;
    u8 r1, g1, b1, p1;
    s16 x1, y1;
    u8 u1, v1;
    u16 tpage;
    u8 r2, g2, b2, p2;
    s16 x2, y2;
    u8 u2, v2;
    u16 pad2;
    u8 r3, g3, b3, p3;
    s16 x3, y3;
    u8 u3, v3;
    u16 pad3;
} GT4;

extern s16 D_800C7C74;

typedef struct {
     u8 pad0[2];
     s16 unk2;
     s16 unk4;
     u8 pad6[0xA];
     u8 unk10;
     u8 pad11[3];
     s32 spuAddr;
} SoundSlot;
extern SoundSlot g_SoundSlot[5];
extern s16 func_8003836C(s32 a);

typedef struct { s16 active; s16 pad2; s32 val; u8 pad8[5]; u8 unkD; u8 padE[2]; } Slot183E0;
typedef struct { u8 pad[0xA1A8]; Slot183E0 slot[32]; } Work183E0;

s32 func_80013154(s32 a0, s32 a1, s32 a2) {
    s16 a = a0;
    s16 b = a1;
    s16 c = a2;
    s32 back;
    s16 next;
    if (a == b) {
        return 0;
    }
    back = b < a;
    if (back) {
        c = -c;
    }
    next = a + c;
    if (next >= b && !back) {
        return (s16)(b - a);
    }
    if (next > b) {
        return c;
    }
    if (a < b) {
        return c;
    }
    return (s16)(b - a);
}

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

/* Unused wrapper: ApplyMatrixSV with the caller's own argument registers */
s32 ApplyMatrixSVPass(void) {
    return ApplyMatrixSV();
}

/* Unused wrapper: ApplyMatrixLV with the caller's own argument registers */
void ApplyMatrixLVPass(void) {
    ApplyMatrixLV();
}

/* Rotate a short vector by matrix m, writing the result back over the input */
void ApplyMatrixSVInPlace(void *m, B8 *v) {
    B8 in;
    in = *(B8 *)v;
    ApplyMatrixSV(m, &in, v);
}

/* Rotate a long VECTOR by matrix m, writing the result back over the input */
void ApplyMatrixLVInPlace(void *m, VECTOR *v) {
    VECTOR in = *v;
    ApplyMatrixLV(m, &in, v);
}

/* One-time graphics setup at boot */
void InitGraph(void)
{
    ResetGraph(0);
    SetGraphDebug(0);
    SetDispMask(0);
    func_80016714(D_800BA118, 0x98);
    ResetGameState();
}

/* Per-mode setup run each time main() re-enters its frame loop */
void ResetSystems(void)
{
    ResetMallocHeap();
    ResetGraph(1);
    SetDispMask(0);
    VSync(0);
    func_80016714(&D_800AF630, sizeof(Work));
    InitDisplay();
    Init3DScene();
    func_8001C044();
    ClearImageQueue();
    func_80015310();
    func_80028A48();
    func_80028C50();
    ResetGameState();
    SetDispMask(1);
}

/* Clear the game's flag bits, byte vars and load state; set vars 0x2C/0x2D to 7, clear flags 0xC/0xD */
void ResetGameState(void) {
    func_80029044();
    func_8002906C();
    func_80029094();
    func_80029218();
    ClearRumbleScript();
    StopPadRumble();
    func_8001B324();
    func_80028FDC(7);
    func_80029020(7);
    func_80028DBC(0);
    func_80028E00(0);
}

/* Clear flags and vars to their new-game values and copy the default stats block into D_80078E78 */
void ResetGameProgress(void) {
    func_80029044();
    func_8002906C();
    func_80029094();
    func_80028FDC(7);
    func_80029020(7);
    func_80028DBC(0);
    func_80028E00(0);
    func_80029274();
}

/* Arm the frame loop: clear Work.exitLoop and run at one frame per 2 vblanks */
void ResetFrameLoop(void)
{
    D_800AF630.exitLoop = 0;
    D_800AF630.vsyncMode = 2;
}

/* Set screen mode 1, wait a vblank, and set up the two 4096-entry GsOT headers */
void InitDisplay(void) {
    u32 *unused_ot;
    s32 i;
    SetScreenMode(1);
    VSync(0);
    unused_ot = g_WorldOtTable[0]; i = 0; D_800AF7C4 = 0; D_800AF7C3 = 0; D_800AF7C2 = 0;
    do { D_800A6518[i].ot = g_WorldOtTable[i]; D_800A6518[i].len = 0xC; D_800A6518[i].c = 0; D_800A6518[i].d = 0; i++; } while (i < 2);
}

/* GTE and libgs 3D setup: screen distance, default view, ambient, lights, two coordinate systems */
void Init3DScene(void) {
    register u8 *w = (u8 *)&D_800AF630;
    InitGeom();
    D_80126950 = 0x3E8;
    SetGeomScreen(0x3E8);
    GsInit3D();
    InitDefaultView();
    func_8001455C();
    func_8002850C(0x800, 0x800, 0x800);
    func_8002823C();
    GsInitCoordinate2(0, w + 0x1A0);
    GsInitCoordinate2((void *)1, w + 0x1F0);
    GsSetLightMode(0);
}

/* Projection 300 and a GsRVIEW2 at (0,0,-300) looking at the origin */
void InitDefaultView(void) {
    D_80126950 = 0x12C;
    GsSetProjection(0x12C);
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
    return libc_memset(a, 0, 0x10);
}

/* Clear the 32 records of the end-of-frame image upload queue (D_800B97D8) */
void ClearImageQueue(void) {
    Ent10 *rec = D_800B97D8;
    s16 i;
    for (i = 0; i < 0x20; i++, rec++) {
        rec->flag = 0;
        libc_memset(rec, 0, 0x10);
    }
}

/* Set the display from screen-mode table entry mode (w, h, flags) via GsInitGraph, then the envs */
void SetScreenMode(s32 mode) {
    s32 ofs = (mode & 0xFFFF) * 6;
    u16 width; u16 height; u16 flags;
    width = *(u16 *)((u32)&D_80062A3C + ofs);
    D_800AF7BC = width;
    height = *(u16 *)((u32)&D_80062A3E + ofs);
    D_800AF7BE = height;
    flags = *(u16 *)((u32)&D_80062A40 + ofs);
    D_800AF7C0 = flags;
    GsInitGraph(width, height, flags | 4, 0, 0);
    if (D_800AF7BE == 0x1E0) { GsDefDispBuff(0, 0, 0, 0); } else { GsDefDispBuff(0, D_800AF7BE, 0, 0); }
    ResetGraph(1);
    GsInit3D();
    ClearVram();
    InitDrawDispEnvs();
}

/* SetScreenMode with GsInitGraph2 / GsDefDispBuff2 (used by overlays and stages) */
void SetScreenMode2(s32 mode) {
    s32 ofs = (mode & 0xFFFF) * 6;
    u16 width; u16 height; u16 flags;
    width = *(u16 *)((u32)&D_80062A3C + ofs);
    D_800AF7BC = width;
    height = *(u16 *)((u32)&D_80062A3E + ofs);
    D_800AF7BE = height;
    flags = *(u16 *)((u32)&D_80062A40 + ofs);
    D_800AF7C0 = flags;
    GsInitGraph2(width, height, flags | 4, 0, 0);
    if (D_800AF7BE == 0x1E0) { GsDefDispBuff2(0, 0, 0, 0); } else { GsDefDispBuff2(0, D_800AF7BE, 0, 0); }
    ResetGraph(1);
    GsInit3D();
    ClearVram();
    InitDrawDispEnvs();
}

/* Clear VRAM rectangle (0,0)-(640,480) to black */
void ClearVram(void) {
    RECT r;
    r.w = 0x280;
    r.x = 0;
    r.y = 0;
    r.h = 0x1E0;
    ClearImage(&r, 0, 0, 0);
}

/* Set Work.draw[2]/disp[2] for double buffering from the screen size, then the bg colour */
extern void SetDefDrawEnv();
extern void SetDefDispEnv();

void InitDrawDispEnvs(void) {
    register Work *w = &D_800AF630;
    s32 height = D_800AF7BE;
    s32 buf1Y;
    s16 ofsY1;
    u32 screenH;
    s32 halfW;
    if (height == 0x1E0) {
        buf1Y = 0;
    } else {
        buf1Y = height;
    }
    SetDefDrawEnv(&w->draw[0], 0, 0xA, D_800AF7BC, height - 0x14);
    SetDefDispEnv(&w->disp[0], 0, 0, D_800AF7BC, D_800AF7BE);
    SetDefDrawEnv(&w->draw[1], 0, buf1Y + 0xA, D_800AF7BC, D_800AF7BE - 0x14);
    SetDefDispEnv(&w->disp[1], 0, buf1Y, D_800AF7BC, D_800AF7BE);
    halfW = D_800AF7BC >> 1;
    screenH = D_800AF7BE;
    w->draw[0].ofs[0] = halfW;
    w->draw[0].ofs[1] = screenH >> 1;
    w->draw[1].ofs[0] = halfW;
    if (screenH == 0xF0) {
        ofsY1 = 0x168;
    } else {
        ofsY1 = 0xF0;
    }
    w->draw[1].tw.h = 0x100;
    w->draw[1].tw.w = 0x100;
    w->draw[0].tw.h = 0x100;
    w->draw[0].tw.w = 0x100;
    w->draw[1].ofs[1] = ofsY1;
    w->draw[1].dtd = 0;
    w->draw[0].dtd = 0;
    w->draw[1].isbg = 1;
    w->draw[0].isbg = 1;
    ClearBgColor();
}

/* Re-initialise the 2 KB malloc heap at 0x801FF800 with interrupts off */
void ResetMallocHeap(void) {
    EnterCriticalSection();
    InitHeap((u32 *)0x801FF800, 0x800);
    ExitCriticalSection();
}

/* Zero the Work background colour bytes (0x192-0x194) and copy them into both DRAWENVs */
void ClearBgColor(void) {
    D_800AF7C4 = 0;
    D_800AF7C3 = 0;
    D_800AF7C2 = 0;
    ApplyBgColor();
}

/* Copy the Work background colour (0x192-0x194) into both DRAWENVs' r0, g0, b0 */
void ApplyBgColor(void) {
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

extern u8 GetPadPrevByte(u8 port, u8 idx);

/* Buttons pressed this frame; with none, the left stick leaving centre as d-pad bits (analog pads only) */
u16 GetPadPressedDir(u8 port) {
    s32 pressed;
    s32 id;
    u16 prevY;
    u16 prevX;
    u16 curY;
    u16 curX;
    u16 dir;
    s32 p;
    pressed = (&g_Pad0Pressed)[port * 0x26];
    if (pressed != 0) {
        return pressed;
    }
    id = GetPadType(port) & 0xFF;
    if (id != 0x53 && (id < 0x54 || id != 0x73)) {
        return 0;
    }
    p = port;
    prevY = GetPadPrevByte(p, 5);
    prevX = GetPadPrevByte(p, 4);
    curY = GetPadByte(p, 5);
    curX = GetPadByte(p, 4);
    dir = 0;
    if (prevY == 0x80 && curY != prevY) {
        if (curY >= 0x80) {
            dir = 0x4000;
        } else {
            dir = 0x1000;
        }
    }
    if (prevX == 0x80) {
        if (curX != prevX) {
            if (curX < 0x80) dir = dir | 0x8000; else dir = dir | 0x2000;
        }
    }
    return dir;
}

/* Buttons held; with none, the left stick tilted (past the 0x51-0xAF dead zone) as d-pad bits (analog only) */
u16 GetPadHeldDir(s32 port) {
    u16 held;
    u8 type;
    u16 stickY;
    u16 stickX;
    s32 dir;
    held = *(u16 *)((u8 *)&g_Pad0Held + (u8)port * 0x4C);
    if (held != 0) {
        return held;
    }
    type = GetPadType(port);
    switch (type) { case 0x53: case 0x73: break; default: return 0; case 0x41: return 0; }
    stickY = GetPadByte(port, 5);
    stickX = GetPadByte(port, 4);
    dir = 0;
    if (stickY != 0x80) {
        dir = 0x1000; if (stickY >= 0x80) { dir = 0x4000; }
    }
    if (stickX != 0x80) {
        if (stickX < 0x80) {
            dir |= 0x8000;
        } else {
            dir |= 0x2000;
        }
    }
    return dir;
}

/* Buttons held last frame */
u16 GetPadPrevHeld(u8 port) {
    return (&g_Pad0PrevHeld)[port * 0x26];
}

/* The pad type id (0x41 digital, 0x53 / 0x73 analog; 0 none) */
u8 GetPadType(u8 port) {
    return g_Pads[port].pad0[0];
}

/* 1 when every bit of mask is held (which == 1) or pressed this frame (otherwise) on this port */
s32 TestPadAll(s32 port, s32 which, s32 mask) {
    u8 *pad = (u8 *)&g_Pads[port & 0xFF];
    s32 bits;
    if ((which & 0xFF) == 1) {
        bits = *(u16 *)(pad + 0x32) & mask;
    } else {
        bits = *(u16 *)(pad + 0x3A) & mask;
    }
    return bits == mask;
}

/* 1 when any bit of mask is held (which == 1) or pressed this frame (otherwise) on either port */
s32 TestPadsAny(u8 which, s32 mask) {
    s32 bits;
    if (which == 1) {
        bits = g_Pad0Held | g_Pad1Held;
    } else {
        bits = g_Pad0Pressed | g_Pad1Pressed;
    }
    return (bits & mask) != 0;
}

/* Byte idx of the current state (0-1 buttons, 2-7 analog after the dead zone: 4 left X, 5 left Y) */
u8 GetPadByte(u8 port, s32 idx) {
    u8 *p = (u8 *)&g_Pads[port];
    return (p + (u8)idx)[0x32];
}

/* Byte idx of last frame's state (as GetPadByte) */
u8 GetPadPrevByte(u8 port, u8 idx) {
    u8 *q = (u8 *)&g_Pads[port];
    q += idx;
    return q[0x42];
}

/* Buttons held */
u16 GetPadHeld(u8 port) {
    return (&g_Pad0Held)[port * 0x26];
}

/* Buttons pressed this frame */
u16 GetPadPressed(u8 port) {
    return *(u16 *)((u8 *)&g_Pad0Pressed + port * 0x4C);
}

/* The pad type id: a second copy of GetPadType (used by the stage engine) */
u8 GetPadTypeAlt(u8 port) {
    return g_Pads[port].pad0[0];
}

/* Byte idx of the current state: a second copy of GetPadByte (no caller found) */
u8 GetPadByteAlt(u8 port, u8 idx) {
    u8 *q = (u8 *)&g_Pads[port];
    q += idx;
    return q[0x32];
}

/* 1 when every bit of mask is in GetPadHeldDirWide (kind == 1) or GetPadPressedDirWide (otherwise); no caller found */
s32 TestPadDirWideAll(u8 port, u8 kind, s32 mask) {
    s32 p = port;
    s32 bits;
    if (kind == 1) {
        bits = GetPadHeldDirWide(p) & 0xFFFF;
    } else {
        bits = GetPadPressedDirWide(p) & 0xFFFF;
    }
    return (bits & mask) == mask;
}

/* 1 when any bit of mask is in pad 0's GetPadHeldDirWide (which == 1) or GetPadPressedDirWide (otherwise) */
s32 TestPadDirWideAny(u8 which, s32 mask) {
    s32 bits;
    if (which == 1) {
        bits = GetPadHeldDirWide(0);
    } else {
        bits = GetPadPressedDirWide(0);
    }
    return (bits & mask) != 0;
}

/* Buttons pressed this frame; with none, the left stick leaving centre (wide dead zone) as d-pad bits: menus */
u16 GetPadPressedDirWide(s32 port) {
    Pad *p;
    u16 pressed;
    u8 type;
    u16 prevY;
    u16 prevX;
    u16 curY;
    u16 curX;
    s32 dir;
    p = (void *)&g_Pads[(u8)port];
    pressed = *(u16 *)((u8 *)p + 0x3A);
    if (pressed != 0) {
        return pressed;
    }
    type = *(u8 *)p;
    switch (type) { case 0x53: case 0x73: break; default: return 0; case 0x41: return 0; }
    { Pad *q = &g_Pads[(u8)port]; prevY = q->data[0x3F]; prevX = q->data[0x3E]; curY = q->data[0x2F]; curX = q->data[0x2E]; }
    WideStickDeadzone(&prevY);
    WideStickDeadzone(&prevX);
    WideStickDeadzone(&curY);
    WideStickDeadzone(&curX);
    dir = 0;
    if (prevY == 0x80 && curY != 0x80) {
        dir = 0x1000;
        if (curY >= 0x80) {
            dir = 0x4000;
        }
    }
    if (prevX == 0x80 && curX != prevX) {
        if (curX < 0x80) {
            dir |= 0x8000;
        } else {
            dir |= 0x2000;
        }
    }
    return dir;
}

/* Buttons held; with none, the left stick near full tilt (wide dead zone) as d-pad bits: menus */
u16 GetPadHeldDirWide(s32 port) {
    Pad *p;
    u16 held;
    u8 type;
    u16 stickY;
    u16 stickX;
    s32 dir;
    p = (void *)&g_Pads[(u8)port];
    held = *(u16 *)((u8 *)p + 0x32);
    if (held != 0) {
        return held;
    }
    type = *(u8 *)p;
    switch (type) { case 0x53: case 0x73: break; default: return 0; case 0x41: return 0; }
    { Pad *q = &g_Pads[(u8)port]; stickY = q->data[0x2F]; stickX = q->data[0x2E]; }
    WideStickDeadzone(&stickY);
    WideStickDeadzone(&stickX);
    dir = 0;
    if (stickY != 0x80) {
        dir = 0x1000;
        if (stickY >= 0x80) {
            dir = 0x4000;
        }
    }
    if (stickX != 0x80) {
        if (stickX < 0x80) {
            dir |= 0x8000;
        } else {
            dir |= 0x2000;
        }
    }
    return dir;
}

/* Centre (0x80) a stick value inside 0x15-0xEB: only a near-full tilt counts */
void WideStickDeadzone(u16 *v) {
    if ((u32)(v[0] - 0x15) < 0xD7) {
        v[0] = 0x80;
    }
}

/* Empty end-of-frame hook (last call of main()'s frame loop) */
void FrameEndNop(void) {
}

extern s16 D_800B9A04;
extern void func_8003500C();
extern void func_8002D034();
extern void func_8002F67C();
extern s32 GetLoadRequestId(void);

s32 func_80015144(void) {
    Work *w = &D_800AF630;
    if (func_80034B98() != 0) {
        func_8002D4C8(2, 0);
        do {
            func_8003500C();
            func_8002D034();
            VSync(w->vsyncMode);
        } while (func_80034B98() != 0);
        w->exitLoop = 1;
    } else {
        if (GetLoadRequestId() != 0) {
            return 0;
        }
        D_800B9A04 = 1;
        func_8002D4C8(2, 0);
    }
    func_8002F67C();
    ResetLoader();
    return 1;
}

extern u8 D_800B9A10;
extern u8 D_800B9A13;
extern u8 D_800B9A15;
extern u8 D_800B9A16;
extern u8 D_800B9A17;
void func_801281D8(void);

/* Open the pause / status menu on Start (or when pad 1 is lost) while the field allows it */
void CheckPauseStart(void) {
    register Work *w = &D_800AF630;
    if (D_800B9A64 == 0 && D_800B9A10 == 1 && D_800B9A17 == 1 && D_800B9A15 != 1) {
        if (D_800B9A16 != 0) {
            D_800B9A15 = 1;
        } else {
            s32 m = 0x800;
            if (D_800B9A13 == 0) {
                s32 x = g_Pad0Pressed & m;
                if (x == m) x = 1; else x = 0;
                if (x || g_PadConnected == 0) {
                    w->unkA3E5 = 1;
                    func_801281D8();
                }
            }
        }
    }
}

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

extern void func_80015608(u8 *p, u8 *ot);
extern void func_80015760(u8 *p, u8 *ot);

/* Draw the 64 debug-text records (Work+0x9DA8) into the OT, then the font's texture page */
void DrawDebugText(void) {
    u8 *w = (u8 *)&D_800AF630;
    u8 *ot = D_800A651C[D_800B9A02].ot;
    u8 *p;
    u8 *prim;

    if (D_800B9A11 != 1) {
        for (p = w + 0x9DA8; p < w + 0xA1A8; p += 16) {
            switch (*(s16 *)p) {
            case 1:
                func_80015608(p, ot);
                break;
            case 2:
                func_80015760(p, ot);
                break;
            case 0:
                break;
            }
        }
        prim = (u8 *)g_PrimNext;
        prim[3] = 1;
        *(u32 *)(prim + 4) = (GetTPage(0, 0, 0x140, 0x100) & 0x9FF) | 0xE1000000;
        addPrim(ot, prim);
        g_PrimNext += 8;
    }
}

extern u16 * func_80015908();

void func_80015608(u8 *p, u8 *ot) {
    u8 *s;
    u16 f;
    s16 x;
    s16 y;
    u8 w;
    u32 code;
    u32 *pk;
    u32 len;
    u32 clut;
    u32 t;
    u32 u;
    clut = 0x40560000;
    s = *(u8 **)(p + 8);
    x = *(u16 *)(p + 2) - (D_800AF7BC >> 1);
    f = p[0xC];
    y = *(u16 *)(p + 4) - (D_800AF7BE >> 1);
    w = 8;
    if (f & 0x80) w = 16;
    if (w == 8) {
        code = 0x74000000;
        len = 0x03000000;
    } else {
        code = 0x7C000000;
        len = 0x03000000;
    }

    pk = (u32 *)g_PrimNext;
    while (*s) {
        pk[1] = code | 0x808080;
        pk[2] = (x & 0xFFFF) | (y << 16);
        x += w;
        pk[3] = *func_80015908(*s++, f) | clut;
        t = *(u32 *)ot & 0xFFFFFF;
        u = (u32)pk & 0xFFFFFF;
        pk[0] = t | len;
        *(u32 *)ot = u;
        pk += 4;
    }
    g_PrimNext = (s32)pk;
}

extern u8 D_80062B78[];
u32 func_80015A74(u32 n);

void func_80015760(u8 *p, u8 *ot) {
    u16 fl;
    s32 x;
    u16 y;
    u32 val;
    u32 raw;
    u8 n;
    u8 step;
    u32 code;
    u32 *prim;
    u32 tag;
    s32 t;
    u32 clut;

    x = *(u16 *)(p + 2) - (D_800AF7BC >> 1);
    y = *(u16 *)(p + 4) - (D_800AF7BE >> 1);
    fl = p[0xC];
    raw = *(u32 *)(p + 8);
    t = fl & 0xF;
    if (t == 0) {
        n = 8;
    } else {
        n = t;
    }
    if (fl & 0x40) {
        val = func_80015A74(raw);
    } else {
        val = raw;
    }
    step = 8;
    if (fl & 0x80) {
        step = 0x10;
    }
    if (step == 8) {
        code = 0x74000000;
        tag = 0x03000000;
    } else {
        code = 0x7C000000;
        tag = 0x03000000;
    }
    clut = 0x40560000;
    prim = (u32 *)g_PrimNext;
    while (n != 0) {
        s32 c;
        u8 i;
        u32 a;
        u32 b;
        i = (val >> ((n - 1) * 4)) & 0xF;
        c = D_80062B78[i];
        prim[1] = code | 0x808080;
        prim[2] = (x & 0xFFFF) | (y << 16);
        x += step;
        n--;
        prim[3] = *func_80015908((s16)c, fl) | clut;
        a = *(u32 *)ot & 0xFFFFFF;
        b = (u32)prim & 0xFFFFFF;
        prim[0] = a | tag;
        *(u32 *)ot = b;
        prim += 4;
    }
    g_PrimNext = (s32)prim;
}

extern u16 D_80062A78[];
extern u16 D_80062AF8[];

u16 *func_80015908(s32 c, s32 flags) {
    s32 i;
    s32 j;
    switch (flags & 0x80) {
    case 0:
        i = (c & 0xFF) - 0x20;
        i *= 2;
        return (u16 *)((u8 *)D_80062A78 + i);
    case 0x80:
        j = (c & 0xFF) - 0x20;
        j *= 2;
        return (u16 *)((u8 *)D_80062AF8 + j);
    }
}

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

void func_80015B6C(s16 x, s16 y, s16 w, s16 h, u8 r0, u8 g0, u8 b0, u8 r1, u8 g1, u8 b1) {
    u8 *ot = D_800A651C[D_800B9A02].ot;
    u8 *p = AllocPrim(0x34);
    u8 *q;
    setlen(p, 1);
    *(u32 *)(p + 4) = 0xE1000000;
    addPrim(ot + 0x3FFC, p);
    p += 8;
    setlen(p, 8);
    p[7] = 0x38;
    p[4] = r0;
    p[5] = g0;
    p[6] = b0;
    p[0xC] = r0;
    p[0xD] = g0;
    p[0xE] = b0;
    p[0x14] = r1;
    p[0x15] = g1;
    p[0x16] = b1;
    p[0x1C] = r1;
    p[0x1D] = g1;
    p[0x1E] = b1;
    *(s16 *)(p + 8) = x;
    *(s16 *)(p + 0xA) = y;
    *(s16 *)(p + 0x10) = x + w;
    *(s16 *)(p + 0x12) = y;
    *(s16 *)(p + 0x18) = x;
    *(s16 *)(p + 0x1A) = y + h;
    *(s16 *)(p + 0x20) = x + w;
    *(s16 *)(p + 0x22) = y + h;
    q = p + 0x24;
    addPrim(ot + 0x3FFC, p);
    p = q;
    setlen(p, 1);
    *(u32 *)(p + 4) = 0xE1000200;
    addPrim(ot + 0x3FFC, p);
}

void func_80015D4C(s32 x0, s32 y0, s32 w0, s32 h0, s32 r0, s32 g0, s32 b0, s32 z0, s32 m0) {
    s16 x = x0;
    s16 y = y0;
    s16 w = w0;
    s16 h = h0;
    u8 r = r0;
    u8 g = g0;
    u8 b = b0;
    u16 z = z0;
    u16 m = m0;
    u8 *prim = AllocPrim(0x18);
    u32 t;
    u32 v;
    prim[3] = 5;
    prim[7] = 0x28;
    if (m < 4) {
        prim[7] = 0x2A;
    }
    prim[4] = r;
    prim[5] = g;
    prim[6] = b;
    *(s16 *)(prim + 8) = x;
    *(s16 *)(prim + 0xA) = y;
    *(s16 *)(prim + 0xC) = x + w;
    *(s16 *)(prim + 0xE) = y;
    *(s16 *)(prim + 0x10) = x;
    *(s16 *)(prim + 0x12) = y + h;
    *(s16 *)(prim + 0x14) = x + w;
    *(s16 *)(prim + 0x16) = y + h;
    v = (*(u32 *)(D_800A651C[D_800B9A02].ot + z * 4)) & 0xFFFFFF;
    t = *(u32 *)prim;
    t &= 0xFF000000;
    t |= v;
    *(u32 *)prim = t;
    (*(u32 *)(D_800A651C[D_800B9A02].ot + z * 4)) = ((*(u32 *)(D_800A651C[D_800B9A02].ot + z * 4)) & 0xFF000000) | ((u32)prim & 0xFFFFFF);
    if (m < 4) {
        func_80016638(&D_800A6518[D_800B9A02], z, m);
    }
}

void func_80015F04(s32 x0, s32 y0, s32 w0, s32 h0, s32 r0, s32 g0, s32 b0, s32 z0, s32 abr0) {
    s16 x = x0;
    s16 y = y0;
    s16 w = w0;
    s16 h = h0;
    u8 r = r0;
    u8 g = g0;
    u8 b = b0;
    u16 z = z0;
    u16 abr = abr0;
    Work *wk = &D_800AF630;
    s16 pts[4][2];
    LINE_F2 *p;
    s32 i;
    s32 j;
    pts[0][0] = x;
    pts[0][1] = y;
    pts[1][0] = x + w;
    pts[1][1] = y;
    pts[2][0] = x + w;
    pts[2][1] = y + h;
    pts[3][0] = x;
    pts[3][1] = y + h;
    p = (LINE_F2 *)AllocPrim(0x40);
    for (i = 0; i < 4; i = j) {
        setlen(p, 3);
        p->code = 0x40;
        if (abr < 4) {
            p->code = 0x42;
        }
        p->r0 = r;
        p->g0 = g;
        p->b0 = b;
        p->x0 = pts[i][0];
        p->y0 = pts[i][1];
        j = i + 1;
        p->x1 = pts[j][0];
        p->y1 = pts[j][1];
        addPrim(D_800A651C[wk->frame].ot + z * 4, p);
        p++;
    }
    p[-1].x1 = pts[0][0];
    p[-1].y1 = pts[0][1];
    if (abr < 4) {
        func_80016638(&D_800A6518[wk->frame], z, abr);
    }
}

void func_80016110(void) {
    u8 *p = AllocPrim(0x18);
    u32 t;
    p[3] = 5;
    p[7] = 0x2A;
    *(s16 *)(p + 0x10) = -0xA0;
    *(s16 *)(p + 0x8) = -0xA0;
    *(s16 *)(p + 0x14) = 0xA0;
    *(s16 *)(p + 0xC) = 0xA0;
    *(s16 *)(p + 0xE) = -0x78;
    *(s16 *)(p + 0xA) = -0x78;
    p[6] = 0;
    p[5] = 0;
    p[4] = 0;
    *(s16 *)(p + 0x16) = 0x78;
    *(s16 *)(p + 0x12) = 0x78;
    t = *(u32 *)p;
    t &= 0xFF000000;
    t |= *(u32 *)D_800A651C[D_800B9A02].ot & 0xFFFFFF;
    *(u32 *)p = t;
    *(u32 *)D_800A651C[D_800B9A02].ot = (*(u32 *)D_800A651C[D_800B9A02].ot & 0xFF000000) | ((u32)p & 0xFFFFFF);
    func_80016638(&D_800A6518[D_800B9A02], 0, 0);
}

extern OtRec D_800AE7BC[];
extern OtEnt D_800AE7B8[];
typedef struct { u16 v; } U16S;

void func_80016224(s32 a, s32 b) {
    u8 *p;
    u16 z;
    p = AllocPrim(0x18);
    z = b;
    p[3] = 5;
    p[7] = 0x2A;
    p[4] = p[5] = p[6] = a;
    *(s16 *)(p + 8) = *(s16 *)(p + 0x10) = -((U16S *)&D_800AF7BC)->v / 2;
    *(s16 *)(p + 0xC) = *(s16 *)(p + 0x14) = D_800AF7BC / 2;
    *(s16 *)(p + 0xA) = *(s16 *)(p + 0xE) = -((U16S *)&D_800AF7BE)->v / 2;
    *(s16 *)(p + 0x12) = *(s16 *)(p + 0x16) = D_800AF7BE / 2;
    if (z != 0) {
        u32 t;
        u32 v;
        v = *(u32 *)(D_800A651C[D_800B9A02].ot + z * 4) & 0xFFFFFF;
        t = *(u32 *)p;
        t &= 0xFF000000;
        t |= v;
        *(u32 *)p = t;
        *(u32 *)(D_800A651C[D_800B9A02].ot + z * 4) = (*(u32 *)(D_800A651C[D_800B9A02].ot + z * 4) & 0xFF000000) | ((u32)p & 0xFFFFFF);
        func_80016638(&D_800A6518[D_800B9A02], z, 2);
    } else {
        u32 t;
        u32 v;
        v = *(u32 *)D_800AE7BC[D_800B9A02].ot & 0xFFFFFF;
        t = *(u32 *)p;
        t &= 0xFF000000;
        t |= v;
        *(u32 *)p = t;
        *(u32 *)D_800AE7BC[D_800B9A02].ot = (*(u32 *)D_800AE7BC[D_800B9A02].ot & 0xFF000000) | ((u32)p & 0xFFFFFF);
        func_80016638(&D_800AE7B8[D_800B9A02], 0, 2);
    }
}

void func_80016450(c, z)
    u8 c;
    u16 z;
{
    PolyF4 *p = (PolyF4 *)AllocPrim(0x18);
    setlen(p, 5);
    p->code = 0x2A;
    p->x0 = p->x2 = -160;
    p->x1 = p->x3 = 160;
    p->y0 = p->y1 = -120;
    p->r0 = p->g0 = p->b0 = c;
    p->y2 = p->y3 = 120;
    if (z != 0) {
        u32 t;
        u32 v;
        v = *(u32 *)(D_800A651C[D_800B9A02].ot + z * 4) & 0xFFFFFF;
        t = *(u32 *)p;
        t &= 0xFF000000;
        t |= v;
        *(u32 *)p = t;
        *(u32 *)(D_800A651C[D_800B9A02].ot + z * 4) = (*(u32 *)(D_800A651C[D_800B9A02].ot + z * 4) & 0xFF000000) | ((u32)p & 0xFFFFFF);
        func_80016638(&D_800A6518[D_800B9A02], z, 1);
    } else {
        u32 t;
        u32 v;
        v = *(u32 *)D_800AE7BC[D_800B9A02].ot & 0xFFFFFF;
        t = *(u32 *)p;
        t &= 0xFF000000;
        t |= v;
        *(u32 *)p = t;
        *(u32 *)D_800AE7BC[D_800B9A02].ot = (*(u32 *)D_800AE7BC[D_800B9A02].ot & 0xFF000000) | ((u32)p & 0xFFFFFF);
        func_80016638(&D_800AE7B8[D_800B9A02], 0, 1);
    }
}

void func_80016638(void *o, s32 z, s32 tpage) {
    u8 *p = AllocPrim(8);
    setlen(p, 1);
    *(u32 *)(p + 4) = ((tpage << 5) & 0x9FF) | 0xE1000000;
    addPrim(((OtEnt *)o)->ot + z, p);
}

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

extern s32 D_800B9A18;
extern u8 D_80062BA0[];

s32 func_800167F0(u16 b) {
    u8 *w = (u8 *)&D_800AF630;
    u16 i = b & 3;
    u16 cur;
    u16 t;
    u16 v;
    if (i == 0) {
        D_800AF7CE += D_80062BA0[D_800B9A18];
    } else {
        D_800AF7CE += D_80062BA0[i];
    }
    t = *(u16 *)(w + 0x19E);
    if (t >= 0xFF) {
        cur = 0xFF;
    } else {
        cur = t;
    }
    if (b < 4) {
        v = 0xFF - cur;
    } else {
        v = cur;
    }
    func_80016224(v & 0xFF, 0);
    return *(u16 *)(w + 0x19E) >= 0xFF;
}

void func_800168B4(void) {
    D_800AF7CE = 0;
}

extern s32 D_800B9A18;
extern u8 D_80062BA0[];

s32 func_800168C4(s32 a) {
    register u8 *w = (u8 *)&D_800AF630;
    a &= 3;
    if (a == 0) {
        D_800AF7CE += D_80062BA0[D_800B9A18];
    } else {
        D_800AF7CE += D_80062BA0[a];
    }
    if (*(u16 *)(w + 0x19E) >= 0xFF && *(u16 *)(w + 0x188) != 0) {
        return 1;
    }
    return 0;
}

void func_80016940(u16 a) {
    D_800AF7CE = 0;
    func_80016450(-(a < 4), 0);
}

s32 func_80016978(s32 a0) {
    s16 a = a0;
    u8 *w = (u8 *)&D_800AF630;
    u16 i = a & 3;
    s32 t;
    u16 x;
    if (i == 0) {
        D_800AF7CE += D_80062BA0[D_800B9A18];
    } else {
        D_800AF7CE += D_80062BA0[i];
    }
    t = *(volatile u16 *)(w + 0x19E); /* MATCH-TRICK: the qualified read keeps the load and its copy apart */
    i = t;
    if (i >= 0xFF) {
        i = 0xFF;
    }
    if ((u16)a < 4) {
        x = 0xFF - i;
    } else {
        x = i;
    }
    func_80016450(x, 0);
    return *(u16 *)(w + 0x19E) >= 0xFF;
}

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
    u8 *prim = AllocPrim(0x14);
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
    u8 *p = AllocPrim(0x20);
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
    u8 *prim = AllocPrim(0x28);
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

extern void SetPolyFT3(void *p);

void func_80016D78(u8 *a, s32 m) {
    s32 p;
    s32 flag;
    s32 otz;
    u32 w;
    u8 *prim = AllocPrim(0x20);
    *(s32 *)(prim + 4) = *(s32 *)(a + 0x24);
    SetPolyFT3(prim);
    func_80017E8C(m);
    otz = RotTransPers3(a, a + 8, a + 0x10, prim + 8, prim + 0x10, prim + 0x18, &p, &flag);
    w = *(u32 *)(a + 0x18); prim[0xC] = w; prim[0xD] = w >> 16;
    w = *(u32 *)(a + 0x1C); prim[0x14] = w; prim[0x15] = w >> 16;
    w = *(u32 *)(a + 0x20); prim[0x1C] = w; prim[0x1D] = w >> 16;
    *(u16 *)(prim + 0x16) = GetTPage(0, (*(u32 *)(a + 0x28) >> 28) & 3, (*(u16 *)(a + 0x18) >> 2) & 0x3FC0,
                                     *(u16 *)(a + 0x1A) & 0xFF00);
    *(u16 *)(prim + 0xE) = GetClut(a[0x2C] < 0xE0 ? 0x160 : 0x100, a[0x2C] | 0x100);
    if (!(flag & ~0x1000)) {
        func_80018194(prim, otz, *(s32 *)(a + 0x28));
    }
}

void func_80016EB0(s32 a) {
    func_80016F18((u8 *)a, 0, 1);
}

s32 func_80016ED4(s32 a) {
    return func_80016F18((u8 *)a, 0, 0);
}

s32 func_80016EF8(u8 *a, s32 m) {
    return func_80016F18(a, m, 0);
}

s32 func_80016F18(u8 *a, s32 m, s32 k) {
    struct { s32 flag; s32 flag2; s32 otz; } t;
    u32 w;
    u8 *prim = AllocPrim(0x28);
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
    u8 *p = AllocPrim(0x14);
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
    return func_80017294((u8 *)a, 0);
}

s32 func_80017274(u8 *a, s32 m) {
    return func_80017294(a, m);
}

s32 func_80017294(u8 *a, s32 m) {
    s32 flag;
    s32 p;
    s32 z;
    u8 *prim = AllocPrim(0x18);
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

extern void SetPolyG3();

s32 func_800173DC(u8 *a, s32 m) {
    s32 flag;
    s32 p;
    s32 z;
    u8 *prim = AllocPrim(0x1C);
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
    u8 *prim = AllocPrim(0x28);
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

extern void func_80017F14(void *p, s32 z, u32 a);

extern void SetPolyG4();

s32 func_80017778(u8 *a, s32 m, s32 g) {
    s32 flag;
    s32 p;
    s32 z;
    u8 *prim = AllocPrim(0x24);
    *(s32 *)(prim + 4) = *(s32 *)(a + 0x20);
    *(s32 *)(prim + 0xC) = *(s32 *)(a + 0x24);
    *(s32 *)(prim + 0x14) = *(s32 *)(a + 0x28);
    *(s32 *)(prim + 0x1C) = *(s32 *)(a + 0x2C);
    SetPolyG4(prim);
    if (m != 0) {
        func_80017E8C(m);
        z = RotTransPers4(a, a + 8, a + 0x10, a + 0x18, prim + 8, prim + 0x10, prim + 0x18, prim + 0x20, &flag, &p);
    } else {
        *(s32 *)(prim + 8) = *(s32 *)(a + 0);
        *(s32 *)(prim + 0x10) = *(s32 *)(a + 8);
        *(s32 *)(prim + 0x18) = *(s32 *)(a + 0x10);
        *(s32 *)(prim + 0x20) = *(s32 *)(a + 0x18);
        z = *(s16 *)(a + 4);
        p = 0;
    }
    if (!(p & ~0x1000)) {
        if (g != 0) {
            func_80017F14(prim, z, *(s32 *)(a + 0x30));
        } else {
            func_80018094(prim, z, *(s32 *)(a + 0x30));
        }
    }
}

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
    u8 *prim = AllocPrim(0x34);
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

void func_80017B98(u8 *a) {
    u8 *w = (u8 *)&D_800AF630;
    u8 *prim = AllocPrim(0x2C);
    u8 *s;
    s32 z;
    u32 t;
    *(u32 *)prim = 0x05000000;
    t = ((*(u32 *)(a + 0x14) >> 23) & 0x60) | ((*(u16 *)(a + 0xE) >> 4) & 0x10)
        | ((*(u16 *)(a + 0xC) >> 8) & 0xF) | ((*(u16 *)(a + 0xE) & 0x200) << 2) | 0xE1000000;
    prim[0xB] = 0x64;
    *(u32 *)(prim + 4) = t;
    *(u32 *)(prim + 8) = 0x64000000 | (a[0x12] << 16) | (a[0x11] << 8) | a[0x12];
    *(u16 *)(prim + 0xC) = *(u16 *)(a + 0) - (*(u16 *)(a + 8) >> 1);
    *(u16 *)(prim + 0xE) = *(u16 *)(a + 2) - (*(u16 *)(a + 0xA) >> 1);
    prim[0x10] = *(u16 *)(a + 0xC);
    prim[0x11] = *(u16 *)(a + 0xE);
    s = prim + 4;
    *(u16 *)(s + 0xE) = ((a[0x18] + 0x100) << 6) | (a[0x18] < 0xE0 ? 0x16 : 0x10);
    *(u16 *)(s + 0x10) = *(u16 *)(a + 8);
    *(u16 *)(s + 0x12) = *(u16 *)(a + 0xA);
    if (*(u32 *)(a + 0x14) & 0x40000000) {
        *(u32 *)(s + 4) |= 0x02000000;
    }
    z = *(s32 *)(a + 4);
    if (z >= 0x1000) {
        z = 0xFFF;
    }
    addPrim(D_800A651C[*(u16 *)(w + 0xA3D2)].ot + z * 4, prim);
}

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

void func_80017F14(void *p, s32 z, u32 a) {
    u8 *q;
    if ((u32)z >= 0x1000) {
        z = 0xFFF;
    }
    q = AllocPrim(0xC);
    SetDrawMode(q, 0, 0, GetTPage(2, (a >> 28) & 3, 0x280, 0), 0);
    AddPrim(D_800A651C[D_800B9A02].ot + z * 4, q);
    AddPrim(D_800A651C[D_800B9A02].ot + z * 4, p);
    if (a & 0x40000000) {
        ((u8 *)p)[7] |= 2;
    }
    q = AllocPrim(0xC);
    SetDrawMode(q, 0, 1, GetTPage(2, (a >> 28) & 3, 0x280, 0), 0);
    AddPrim(D_800A651C[D_800B9A02].ot + z * 4, q);
}

void func_80018094(void *p, s32 z, u32 a) {
    u8 *q;
    if ((u32)z >= 0x1000) {
        z = 0xFFF;
    }
    AddPrim(D_800A651C[D_800B9A02].ot + z * 4, p);
    if (a & 0x40000000) {
        ((u8 *)p)[7] |= 2;
        q = AllocPrim(0xC);
        SetDrawMode(q, 0, 0, GetTPage(2, (a >> 28) & 3, 0x280, 0), 0);
        AddPrim(D_800A651C[D_800B9A02].ot + z * 4, q);
    }
}

void func_80018194(u8 *prim, u32 z, s32 flags) {
    s32 f = flags & 0x40000000;
    if (f != 0) {
        *(s32 *)(prim + 4) |= 0x02000000;
    }
    if (z >= 0x1000) {
        z = 0xFFF;
    }
    AddPrim(*(u8 **)((u8 *)D_800A651C + D_800B9A02 * 0x14) + z * 4, prim);
}

void func_8001820C(u8 *prim, u32 z, s32 flags) {
    u8 *q;
    u32 t;
    if (flags & 0x40000000) {
        *(s32 *)(prim + 4) |= 0x02000000;
    }
    if (z >= 0x1000) {
        z = 0xFFF;
    }
    q = AllocPrim(0xC);
    t = ((u32)flags >> 28) & 3;
    SetDrawMode(q, 0, 0, GetTPage(2, t, 0x280, 0), 0);
    AddPrim(D_800A651C[D_800B9A02].ot + z * 4, q);
    AddPrim(D_800A651C[D_800B9A02].ot + z * 4, prim);
    q = AllocPrim(0xC);
    SetDrawMode(q, 0, 1, GetTPage(2, t, 0x280, 0), 0);
    AddPrim(D_800A651C[D_800B9A02].ot + z * 4, q);
}

void func_80018384(u32 *ot, u32 *prim) {
    if ((u32)&D_800AE610 < (u32)ot) {
        while (1) {}
    }
    *prim = (*prim & 0xFF000000) | (*ot & 0xFFFFFF);
    *ot = (*ot & 0xFF000000) | ((u32)prim & 0xFFFFFF);
}

s32 func_800183E0(s32 a) {
    register Work183E0 *w = (Work183E0 *)&D_800AF630;
    s32 r = 0;
    s32 i;
    for (i = 0; i < 32; i++) {
        if (w->slot[i].active == 0) {
            w->slot[i].active = 1;
            w->slot[i].val = a;
            w->slot[i].unkD = 0;
            r = 1;
            break;
        }
    }
    return r;
}

typedef struct { s16 active; s16 pad2; s32 val; u16 unk8; u16 unkA; u8 unkC; u8 unkD; u8 padE[2]; } Slot18450;
typedef struct { u8 pad[0xA1A8]; Slot18450 slot[32]; } Work18450;

s32 func_80018450(u8 *a, s32 v) {
    Work18450 *w = (Work18450 *)&D_800AF630;
    s32 r = 0;
    s32 i;
    for (i = 0; i < 32; i++) {
        if (w->slot[i].active == 0) {
            w->slot[i].active = 1;
            w->slot[i].val = v;
            w->slot[i].unkD = 0;
            w->slot[i].unk8 = *(u16 *)(a + 0x28);
            w->slot[i].unkA = *(u16 *)(a + 0x2A);
            w->slot[i].unkC = a[0x27];
            r = 1;
            break;
        }
    }
    return r;
}

typedef struct { u32 pmode; s16 px, py; u16 pw, ph; u32 *pixel; s16 cx, cy; u16 cw, ch; u32 *clut; } GsIMAGE;
extern void GsGetTimInfo(u32 *tim, GsIMAGE *img);
extern u16 LoadTPage(u32 *pix, s32 tp, s32 abr, s32 x, s32 y, s32 w, s32 h);

/* Run the end-of-frame VRAM upload queue: LoadImage / TIM / LoadTPage entries of 32 records */
void FlushImageQueue(void) {
    GsIMAGE img;
    Ent10 *rec;
    u8 *entry;
    s32 done;
    s32 i;
    RECT *rect;

    rect = (RECT *)0x1F800000;
    for (i = 0, rec = D_800B97D8; i < 0x20; i++, rec++) {
        if (rec->flag != 0) {
            entry = *(u8 **)((u8 *)rec + 4);
            done = 0;
            do {
                switch (*(u16 *)entry) {
                case 9:
                    if (*((u8 *)rec + 0xD) == 0) {
                        rect->x = *(u16 *)(entry + 4);
                        rect->y = *(u16 *)(entry + 6);
                    } else {
                        rect->x = (*((u8 *)rec + 0xC) > 0x20) << 8;
                        rect->y = *((u8 *)rec + 0xC) | 0x1E0;
                    }
                    rect->w = *(u16 *)(entry + 8);
                    rect->h = *(u16 *)(entry + 0xA);
                    LoadImage(rect, *(u32 **)(entry + 0xC));
                    break;
                case 0:
                    if (*((u8 *)rec + 0xD) == 0) {
                        rect->x = *(u16 *)(entry + 4);
                        rect->y = *(u16 *)(entry + 6);
                    } else {
                        rect->x = *(u16 *)((u8 *)rec + 8);
                        rect->y = *(u16 *)((u8 *)rec + 0xA);
                    }
                    rect->w = *(u16 *)(entry + 8);
                    rect->h = *(u16 *)(entry + 0xA);
                    LoadImage(rect, *(u32 **)(entry + 0xC));
                    break;
                case 5:
                    GsGetTimInfo(*(u32 **)(entry + 0xC), &img);
                    rect->x = img.px;
                    rect->y = img.py;
                    rect->w = img.pw;
                    rect->h = img.ph;
                    LoadImage(rect, img.pixel);
                    break;
                case 0xB:
                    LoadTPage(*(u32 **)(entry + 0xC), 1, 0, *(s16 *)(entry + 4), *(s16 *)(entry + 6),
                              *(s16 *)(entry + 8) * 2, *(s16 *)(entry + 0xA));
                    break;
                case 0xA:
                    break;
                case 0xFFFF:
                    done = 1;
                    break;
                default:
                    done = 1;
                    break;
                }
                entry += 0x10;
            } while (done == 0);
            rec->flag = 0;
        }
    }
}

/* Arm the streaming LZSS decoder: output to dst, state 1 (first flag byte next) */
void StartLzssDecode(s32 dst) {
    g_LzssState = 1;
    g_LzssDst = dst;
}

extern s32 g_LzssRingPos;
extern u8 g_LzssMask;
extern u8 g_LzssFlags;
extern u16 g_LzssMatch;

/* Decode one 0x800-byte sector of an LZSS stream (1 KB ring at 0x1F800000); 0 when the stream ends */
s32 LzssDecodeSector(u8 *src) {
    s32 left = 0x800;
    s32 ringPos = g_LzssRingPos;
    u8 mask = g_LzssMask;
    u8 flags = g_LzssFlags;
    u8 *dst = (u8 *)g_LzssDst;
    u16 match = g_LzssMatch;
    s32 off;
    s32 len;
    u8 c;
    u8 *ring = (u8 *)0x1F800000;

    switch (g_LzssState) {
    case 0:
        return 0;
    case 1:
        ringPos = 1;
        mask = 1;
        flags = *src++;
        left--;
    case 2:
    loop:
        if (flags & mask) {
            c = *src++;
            ring[ringPos] = c;
            ringPos = (ringPos + 1) & 0x3FF;
            left--;
            *dst++ = c;
        } else {
            match = (match & 0xFF00) | *src++;
            left--;
            if (left == 0) {
                g_LzssState = 3;
                g_LzssRingPos = ringPos;
                g_LzssMask = mask;
                g_LzssFlags = flags;
                g_LzssDst = (s32)dst;
                g_LzssMatch = match;
                return 1;
            }
    case 3:
            match = (match & 0xFF) | (*src++ << 8);
            left--;
            off = match & 0x3FF;
            if (off == 0) {
                g_LzssState = 0;
                return 0;
            }
            for (len = (match >> 10) + 2; len != 0; len--) {
                *dst++ = ring[ringPos] = ring[off];
                off = (off + 1) & 0x3FF;
                ringPos = (ringPos + 1) & 0x3FF;
            }
        }
        if (left == 0) {
            g_LzssState = 4;
            g_LzssRingPos = ringPos;
            g_LzssMask = mask;
            g_LzssFlags = flags;
            g_LzssDst = (s32)dst;
            g_LzssMatch = match;
            return 1;
        }
    case 4:
        if (mask != 0x80) {
            mask <<= 1;
            goto loop;
        }
        mask = 1;
        flags = *src++;
        left--;
        if (left != 0) {
            goto loop;
        }
        g_LzssState = 2;
        g_LzssRingPos = ringPos;
        g_LzssMask = mask;
        g_LzssFlags = flags;
        g_LzssDst = (s32)dst;
        g_LzssMatch = match;
        return 1;
    }
}

/* Controller init: clear both pad buffers, then start PsyQ's pad driver */
void InitPad(void)
{
    u32 i;
    Pad *p;

    D_800AE610 = 0;
    for (i = 0; i < 2; i++) {
        p = &g_Pads[i];
        func_80016714(p, sizeof(Pad));
        p->unk4 = 8;
    }
    StopPadRumble();
    ResetCallback();
    PadInitDirect(g_Pads[0].data, g_Pads[1].data);
    PadStartCom();
}

/* Read both controller ports into g_Pads: poll, latch, held / pressed / previous, the Select hold */
void UpdatePads(void) {
    u32 i;
    Pad *p;
    g_PadConnected = 1;
    i = 0;
    p = g_Pads;
    for (; i < 2; i++, p++) {
        if (PollPad(i) != 0) {
            LatchPadInput((u8 *)p);
        }
        UpdatePadState((u8 *)p);
        CheckSelectHold((u8 *)p);
    }
}

extern s32 PadGetState(s32 port);
extern s32 PadInfoMode(s32 port, s32 term, s32 offs);
extern s32 PadSetAct(s32 port, u8 *data, s32 len);
extern s32 PadSetActAlign(s32 port, u8 *data);
extern s32 func_80028D58(void);
extern u8 D_80062BAC[];
extern u8 D_80062BB4[];

/* One port's PsyQ pad state; sends the rumble motors on port 1; returns 1 when there is a reply to latch */
s32 PollPad(s32 index) {
    s32 port;
    u8 *p;

    p = (u8 *)&g_Pads[index];
    switch (index) {
    case 0:
        port = 0;
        break;
    case 1:
        port = 0x10;
        break;
    }
    switch (PadGetState(port)) {
    case 0:
        if (index == 0) {
            if ((u32)D_800AE610++ >= 10) {
                D_800AE610 = 0;
                g_PadConnected = 0;
            }
        }
    case 1:
        ClearPadInput(p);
        return 0;
    case 2:
        if (index == 0) {
            D_800AE610 = 0;
            if (PadInfoMode(port, 2, 0) == 0) {
                if (func_80028D58() == 0) {
                    if (p[0x4A] | p[0x4B]) {
                        D_80062BBD = 1;
                    } else {
                        D_80062BBD = 0;
                    }
                    p[0x4B] = 0;
                    p[0x4A] = 0;
                } else {
                    StopPadRumble();
                }
                PadSetAct(port, (u8 *)&D_80062BBC, 2);
                PadSetActAlign(port, D_80062BAC);
            }
        }
        return 1;
    case 6:
        if (index == 0) {
            D_800AE610 = 0;
            if (PadInfoMode(port, 2, 0) != 0) {
                if (func_80028D58() == 0) {
                    g_RumbleActSmall = p[0x4A];
                    g_RumbleActLarge = p[0x4B];
                    p[0x4B] = 0;
                    p[0x4A] = 0;
                } else {
                    StopPadRumble();
                }
                PadSetAct(port, (u8 *)&g_RumbleActSmall, 2);
                PadSetActAlign(port, D_80062BB4);
            }
        }
        return 1;
    }
}

/* Copy the pad's reply into its latch: type id, buttons (inverted to 1 = down), analog bytes */
void LatchPadInput(u8 *pad) {
    s32 i;
    if (pad[8] != 0) {
        ClearPadInput(pad);
    } else {
        pad[0] = pad[9];
        for (i = 0; i < 2; i++) {
            pad[0x2B - i] = ~(pad + i)[0xA];
        }
        for (i = 2; i < 6; i++) {
            (pad + i)[0x2A] = (pad + i)[0xA];
        }
    }
}

extern u8 g_Pad1[];
/* Analog bytes: 0x51-0xAF -> 0x80 (centre), under 8 -> 0, 0xF8 and up -> 0xFF */
void ApplyStickDeadzone(u8 *pad);

/* From the latch: previous = held, pressed = new bits, held = latch; analog with the dead zone. Pad 2 is cleared */
void UpdatePadState(u8 *pad) {
    s32 i;
    if (pad == g_Pad1) {
        func_80016714(g_Pad1, 0x4C);
        return;
    }
    switch (pad[0]) {
    case 0x41:
        for (i = 0; i < 2; i++) {
            (pad + i)[0x42] = (pad + i)[0x32];
            (pad + i)[0x3A] = (pad + i)[0x2A] & ((pad + i)[0x2A] ^ (pad + i)[0x32]);
            (pad + i)[0x32] = (pad + i)[0x2A];
        }
        break;
    case 0x53:
        for (i = 0; i < 2; i++) {
            (pad + i)[0x42] = (pad + i)[0x32];
            (pad + i)[0x3A] = (pad + i)[0x2A] & ((pad + i)[0x2A] ^ (pad + i)[0x32]);
            (pad + i)[0x32] = (pad + i)[0x2A];
        }
        for (; i < 8; i++) {
            (pad + i)[0x42] = (pad + i)[0x32];
            (pad + i)[0x32] = (pad + i)[0x2A];
        }
        ApplyStickDeadzone(pad);
        break;
    case 0x73:
        for (i = 0; i < 2; i++) {
            (pad + i)[0x42] = (pad + i)[0x32];
            (pad + i)[0x3A] = (pad + i)[0x2A] & ((pad + i)[0x2A] ^ (pad + i)[0x32]);
            (pad + i)[0x32] = (pad + i)[0x2A];
        }
        for (; i < 8; i++) {
            (pad + i)[0x42] = (pad + i)[0x32];
            (pad + i)[0x32] = (pad + i)[0x2A];
        }
        ApplyStickDeadzone(pad);
        break;
    default:
        func_80016714(pad, 0x4C);
        break;
    }
}

/* Restart the Select hold count (var 0xE2) */
void ResetSelectHold(void) {
    func_800291A0(0xE2, 0);
}

/* Pad 1 only: Select held for 90 reads in a row turns vibration off (flag 0xB) */
void CheckSelectHold(u8 *pad) {
    s32 count;
    if (pad == (u8 *)g_Pads) {
        if (g_Pad0Held & 0x100) {
            count = func_800291B4(0xE2) + 1;
            if ((u32)(count & 0xFF) >= 0x5A) {
                count = 0;
                func_80028D78(1);
            }
            func_800291A0(0xE2, count & 0xFF);
        } else {
            func_800291A0(0xE2, 0);
        }
    }
}

void ApplyStickDeadzone(u8 *p) {
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

/* Clear the latch: no buttons down, analog bytes centred (0x80) */
void ClearPadInput(u8 *pad) {
    s32 i = 1;
    u8 *q = pad + 1;
    s32 j;
    do {
        q[0x2A] = 0;
        i--;
        q--;
    } while (i >= 0);
    for (j = 2; j < 6; j++) {
        (pad + j)[0x2A] = 0x80;
    }
}

/* Zero both actuator buffers' motor values and both pads' requested motor values (+0x4A/+0x4B) */
void StopPadRumble(void) {
    s32 i;
    Pad *p;
    
    g_RumbleActLarge = 0;
    g_RumbleActSmall = 0;
    D_80062BBC = 0x40;
    D_80062BBD = 0;
    i = 0; p = g_Pads;
loop:
    p->data[0x43] = 0;
    p->data[0x42] = 0;
    p++; i++;
    if (i < 2) {
        goto loop;
    }
}

/* Allow StartRumbleScript to start patterns again (clear the block flag) */
void EnableRumbleScripts(void) {
    D_800747C8 = 0;
}

/* Block new rumble patterns (StartRumbleScript ignores requests) */
void DisableRumbleScripts(void) {
    D_800747C8 = 1;
}

/* Stop the running rumble pattern (zero script pointer, step and frame count) */
void ClearRumbleScript(void) {
    func_80016714(&g_RumbleScript, 8);
}

/* Start a rumble pattern (3-byte steps: large motor, small motor, frames) unless blocked or a demo plays */
void StartRumbleScript(s32 script) {
    if (D_800747C8 == 0 && D_800B9A64 == 0) {
        g_RumbleScript = script;
        D_800747C4 = 0xFF;
        D_800747C5 = 0;
    }
}

extern u8 g_Pad0RumbleSmall;
extern u8 g_Pad0RumbleLarge;

/* Per frame: copy the pattern's current step into pad 1's motor bytes; next step when its frames run out */
void StepRumbleScript(void) {
    s32 *script = &g_RumbleScript;
    if (*script != 0) {
        if (D_800747C5 == 0) {
            u8 *step;
            D_800747C4++;
            step = (u8 *)(D_800747C4 * 3 + g_RumbleScript);
            g_Pad0RumbleSmall = step[1];
            g_Pad0RumbleLarge = step[0];
            D_800747C5 = step[2];
            if (D_800747C5 == 0) {
                g_Pad0RumbleSmall = 0;
                g_Pad0RumbleLarge = 0;
                D_800747C4 = 0xFF;
                *script = 0;
            }
        } else {
            u8 *step;
            step = (u8 *)(D_800747C4 * 3 + g_RumbleScript);
            g_Pad0RumbleSmall = step[1];
            g_Pad0RumbleLarge = step[0];
            D_800747C5--;
        }
    }
}

/* Return the running rumble pattern (0 = none) */
s32 GetRumbleScript(void) {
    return g_RumbleScript;
}

/* Mark no stage image as resident, so the next map load reads its stage from the disc */
void ForgetStageImage(void)
{
    g_StageImageEntry = -1;
}

/* Record which LIST.CD entry's stage image is now in memory */
void SetStageImage(s32 entry) {
    g_StageImageEntry = ((s32)(entry << 16) >> 16);
}

/* 1 when the stage image of this LIST.CD entry must be read (none resident, not reusable, or another one) */
s32 StageImageNeedsLoad(s32 entry) {
    register s32 *resident = &g_StageImageEntry;
    s32 need;
    if (*resident < 0) {
        need = 1;
    } else if (StageAlwaysReloads(entry) != 0) {
        need = 1;
    } else {
        need = *resident != entry;
    }
    return need;
}

/* 0 for the 26 stage entries that may stay resident across a re-entry, 1 for every other stage */
s32 StageAlwaysReloads(s32 entry) {
    if (entry == 0xB3) {
        return 0;
    }
    if (entry == 0xB4) {
        return 0;
    }
    if (entry == 0x12E) {
        return 0;
    }
    if (entry == 0x12F) {
        return 0;
    }
    if (entry == 0x150) {
        return 0;
    }
    if (entry == 0x152) {
        return 0;
    }
    if (entry == 0x16E) {
        return 0;
    }
    if (entry == 0x16F) {
        return 0;
    }
    if (entry == 0xB9) {
        return 0;
    }
    if (entry == 0xA1) {
        return 0;
    }
    if (entry == 0xA2) {
        return 0;
    }
    if (entry == 0xA3) {
        return 0;
    }
    if (entry == 0x10B) {
        return 0;
    }
    if (entry == 0x10C) {
        return 0;
    }
    if (entry == 0x10D) {
        return 0;
    }
    if (entry == 0x10F) {
        return 0;
    }
    if (entry == 0x110) {
        return 0;
    }
    if (entry == 0x111) {
        return 0;
    }
    if (entry == 0x112) {
        return 0;
    }
    if (entry == 0x113) {
        return 0;
    }
    if (entry == 0x114) {
        return 0;
    }
    if (entry == 0xAA) {
        return 0;
    }
    if (entry == 0x115) {
        return 0;
    }
    if (entry == 0x116) {
        return 0;
    }
    if (entry == 0x117) {
        return 0;
    }
    if (entry == 0x118) {
        return 0;
    }
    return 1;
}

/* Drop a queued .STR stream request (load queue state 5) and stop it if it already started */
void CancelStreamLoad(void) {
    if (D_800BA1B4 == 5) {
        if (D_800747E4 != 0) {
            func_8002D4C8(0x16, 0);
        }
        D_800BA1B4 = 0;
        D_800747E8 = 0;
        D_800747E4 = 0;
    }
}

/* Return 1 when DEBUG.BIN was found on the disc at boot */
s32 IsDebugBinPresent(void) {
    return D_800747D0;
}

/* Set the DEBUG.BIN-present flag */
void SetDebugBinPresent(s32 present) {
    D_800747D0 = present;
}

s32 func_80019398(void) {
    return D_800747D4;
}

void func_800193A8(s32 a) {
    D_800747D4 = a;
}

typedef struct {
    u8 d[0x88];
} DiscHdr;

/* Disc file init without ISO9660 lookups: read a header and file table from raw sectors after lba */
void InitCdFilesAtLba(s32 lba) {
    CdFileLoc loc;
    DiscHdr header;
    s32 i;
    s32 n;
    s32 k;
    s32 j;
    s32 count;
    s32 base;

    ResetLoader();
    lba++;
    D_800747D0 = 0;
    D_80063074 = 0;
    D_800747D8 = 0;
    CdIntToPos(lba, &loc.pos);
    while (!LoadFileStep((CdlFILE *)&loc, LIST_BUF, 0x800, 0)) {
        VSync(0);
    }
    header = *(DiscHdr *)LIST_BUF;
    lba += 1 + (s32)((*(u32 *)&header.d[0x1C] + 0x7FF) >> 11);
    CdIntToPos(lba, &loc.pos);
    while (!LoadFileStep((CdlFILE *)&loc, LIST_BUF, 0x800, 0)) {
        VSync(0);
    }
    lba++;
    CdIntToPos(lba + LIST_BUF[0].sector, &g_FileTable[0].file.pos);
    CdIntToPos(lba + LIST_BUF[1].sector, &g_FileTable[1].file.pos);
    for (i = 2; i < 9; i++) {
        CdIntToPos(lba + LIST_BUF[2].sector, &g_FileTable[i].file.pos);
    }
    CdIntToPos(lba + LIST_BUF[3].sector, &g_FileTable[9].file.pos);
    CdIntToPos(lba + LIST_BUF[4].sector, &g_FileTable[20].file.pos);
    while (!LoadFileStep(&g_FileTable[0].file, LIST_BUF, 0xE40, 0)) {
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

    ResetLoader();

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

    while (!LoadFileStep(&g_FileTable[0].file, LIST_BUF, 0xE40, 0)) {
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

/* The CD streamer's state (0x800AE6F0): StreamStep steps it, DiscCheckStep checks the disc, StreamReadyCallback
   (the data-ready callback) parses PAC archives into it. One object in the original: its code keeps &g_CdStream (or
   a member's address) in a register and reaches the other members from it. */
typedef struct {
    /* 0x00 */ s32 state;          /* StreamStep's step (0-10) */
    /* 0x04 */ s32 check;          /* DiscCheckStep's step (0-5) */
    /* 0x08 */ s32 sub;            /* StreamReadyCallback: what the next sector holds */
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

/* Reset the CD streamer's step state after a request completes (keeps the request id) */
inline void ResetStreamStep(void) {
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

/* Reset the file loader: no request in flight, empty load queue, streamer at state 0 */
void ResetLoader(void) {
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

/* Same as ForgetStageImage: mark no stage image as resident (a second copy, no caller) */
void ForgetStageImageAlt(void) {
    g_StageImageEntry = -1;
}

/* Ask for (or keep stepping) a read of a disc file to dest; returns 1 on the frame it completes */
inline s32 LoadFileStep(CdlFILE *file, void *dest, s32 size, s32 soundTable) {
    s32 id;
    if (func_80034B98() != 0) {
        return 0;
    }
    if (g_CdStream.request != 0 && *(s32 *)file != g_CdStream.request) {
        return 0;
    }
    id = *(s32 *)file;
    g_CdStream.dest = (s32)dest;
    g_CdStream.size = size;
    g_CdStream.file = (s32 *)file;
    g_CdStream.soundTable = soundTable;
    g_CdStream.noSound = 0;
    g_CdStream.request = id;
    if (soundTable == 0) {
        g_CdStream.noSound = 1;
    }
    StreamStep(0);
    return g_CdStream.complete;
}

/* The CD streamer's step, run every frame while a request is in flight (state g_CdStream.state): set the mode,
   seek to the file, read it through the data-ready callback (StreamReadyCallback), load its sound banks, then wait for
   the drive. A lid opened sends it to the disc check (states 9 and 10). With `pause` set it only seeks. Sets
   g_CdStream.complete to 1 on the frame the request completes, 0 otherwise. */
void StreamStep(s32 seekOnly) {
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
        g_CdSyncResult = r;
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
        g_CdSyncResult = r;
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
        if (seekOnly != 0) {
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
        g_CdStream.prevCallback = (void *)CdReadyCallback(PS1_FN_ADDR(StreamReadyCallback));
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
        g_CdSyncResult = r;
        if (r == CdlComplete) {
            ResetStreamStep();
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
        StartDiscCheck();
        g_CdStream.state++;
    case 10:
        if ((g_CdSyncResult = DiscCheckStep()) != 0) {
            g_CdStream.state = 0;
        }
        break;
    }
    g_CdStream.complete = 0;
}

/* Start the disc check from its first step */
void StartDiscCheck(void) {
    g_CdStream.check = 0;
    g_CdStream.unk1C = 0;
}

/* The disc check after the lid opened or a read failed, one step per call (state g_CdStream.check): wait for a disc,
   set the mode, wait three calls, check the disc type, then look for this game's MUSA.ID (g_FileTable[21]).
   Returns 1 once the disc is this game's. */
s32 DiscCheckStep(void) {
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

/* The CD data-ready callback (CdReadyCallback, set by StreamStep): checks each sector arrives in order, then
   by g_CdStream.sub reads a PAC header and starts its block (texture tiles, CLUT list, code or data payload,
   sound bank, LZ data, skip), or takes the block's next sector. Sets g_CdStream.done to 1 when a request's last
   block is in, 2 on an error. */
void StreamReadyCallback(u8 intr, u8 *result) {
    CdStream *cd = &g_CdStream;
    s32 pos;
    s32 dst;
    s32 i;
    s32 n;
    u8 *pixels;
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
                pixels = D_8007A280 + 0x90;
                n = D_80079A78;
                cd->clut = D_8007A280;
                for (i = 0; i < n; i++) {
                    LoadImage((RECT *)cd->clut, (u32 *)pixels);
                    pixels += (((RECT *)cd->clut)->w / 2) * 4;
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
                StartLzssDecode(cd->cursor);
                break;
            }
            break;
        case 1:
            pixels = D_80079A70 + cd->texBuf * 0x800;
            CdGetSector(pixels, 0x200);
            LoadImage(&cd->slot, (u32 *)pixels);
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
            if (LzssDecodeSector(D_80079A70) == 0) {
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

/* Return the stream driver's request state (0 idle; 1, 2, 4 busy; 8 finished) */
s32 GetStreamState(void) {
    return func_80034B98();
}

/* Link the two NOW LOADING sprites (texpage + SPRT pairs at 0x80063108/0x80063120) into OT entry 1 */
void DrawNowLoading(void) {
    u32 *ot = g_WorldOtTable[D_800B9A02];
    u32 *first = (u32 *)&D_80063108; u32 *second = (u32 *)&D_80063120;
    *first = (ot[1] & 0xFFFFFF) | 0x05000000;
    ot[1] = (ot[1] & 0xFF000000) | ((u32)first & 0xFFFFFF);
    
    *second = (ot[1] & 0xFFFFFF) | 0x05000000;
    ot[1] = (ot[1] & 0xFF000000) | ((u32)second & 0xFFFFFF);
}

/* Return the id (first word of the file) of the CD request in flight, 0 = none */
s32 GetLoadRequestId(void) {
    return g_CdStream.request;
}

/* Set the id of the CD request in flight */
void SetLoadRequestId(s32 id) {
    g_CdStream.request = id;
}

/* Development-only picture loader (C:\TIMPACK\*.PAT from the dev PC); empty in the retail EXE */
void LoadPatPicture(void) {
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
   is done, 0 while it waits (another request in flight, or this one just queued for the pump, LoadQueueStep). */
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

/* Queue a load request for the pump (LoadQueueStep): D_800BA1B4 = 1 file read, 2 sound package, 4 header read,
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
   LoadFileStep; 2 a sound package; 4 a header read; 5 a sound bank) and sets 3 when it is done. 0 and 3 idle. */
void LoadQueueStep(void) {
    func_80034B98();
    switch (D_800BA1B4) {
    case 0:
    case 3:
        break;
    case 1:
        if (LoadFileStep(D_800AE6E4, (void *)D_800BA318, D_800C6D2C, D_800A6550)) {
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
        if (DiscCheckStep() != 0) {
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

extern s32 D_800C7C60;
extern u8 *D_800C7C64;
extern u8 D_800A2E20[];
extern s32 D_800AEC78[];

void func_8001B26C(void) {
    s32 r;
    s32 *p;

    if (D_800C6D34 == 0) {
        p = &D_800C7C60;
        *p = 8;
        D_800C7C64 = D_800A2E20;
        r = D_800BA1B4;
        if (r != 0) {
            if (r != 3) {
                r = 0;
                goto end;
            }
            if (func_8001AE90(0, 0, D_800AEC78)) {
                goto done;
            }
        }
        if (func_8001ACF0(0, 0, D_800AEC78, 0, (s32)p) != 0) {
done:
            D_800BA1B4 = 0;
            r = 1;
        } else {
            r = 0;
        }
    }
end:
    /* PORT NOTE: read before set, as the original */
    D_800C6D10 = r;
}

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

extern s32 func_800363CC(s32 a, CdFileLoc *loc, s32 c);
extern void func_80036D58(s32 n);
void func_8001B710(void);
s32 func_8001B788(s16 n);
extern s32 D_800AE708;

void func_8001B3C4(void) {
    s32 r = 0;
    s32 v;
    u8 unused[8];

    switch ((u32)D_800AE7EC) {
    case 0:
        if (D_800C6D34 == D_800A654C) {
            D_800C6D10 = 1;
            return;
        }
        if (D_80063138[D_800C6D34].entry == D_800747F8 && D_80063138[D_800C6D34].sound != 0) {
            func_8002D4C8((u16)D_80063138[D_800C6D34].sound, 0);
            D_800C6D10 = 1;
            D_800A654C = D_800C6D34;
            return;
        }
        if (func_80034B98() != 0) {
            break;
        }
        if (D_80063138[D_800C6D34].entry < 0) {
            func_80036D58(D_80063138[D_800C6D34].b);
            goto done;
        }
        if (func_8001B788(D_800C6D34) == 0) {
done:
            D_800C6D10 = 1;
            return;
        }
        if (D_800AE708 != 0 && *(s32 *)&g_ArchiveFileLoc[D_80063138[D_800C6D34].entry].pos != D_800AE708) {
            break;
        }
        v = *(s32 *)&g_ArchiveFileLoc[D_80063138[D_800C6D34].entry].pos;
        D_800AE7EC++;
        D_800AE708 = v;
    case 1:
        r = func_800363CC(D_80063138[D_800C6D34].b, &g_ArchiveFileLoc[D_80063138[D_800C6D34].entry], 0x10);
        if (r == 2) {
            D_800AE7EC++;
            r = 0;
        }
        break;
    case 2:
        g_CdStream.check = 0;
        g_CdStream.unk1C = 0;
        D_800AE7EC = 3;
    case 3:
        if (DiscCheckStep() != 0) {
            D_800AE7EC = 0;
        }
        break;
    }
    if (r != 0) {
        D_800747F8 = D_80063138[D_800C6D34].entry;
        if (D_80063138[D_800C6D34].sound > 0) {
            func_8002D4C8((u16)D_80063138[D_800C6D34].sound, 0);
            D_800A654C = D_800C6D34;
            if (D_800C6D34 == 0x3D) {
                func_8001B710();
            }
        }
        D_800AE7EC = 0;
        D_800AE708 = 0;
    }
    D_800C6D10 = r;
}

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
    StreamStep(1);
    if (g_CdStream.complete == 1) {
        g_CdStream.unk1C = *p;
    }
    return g_CdStream.complete;
}

void func_8001B85C(void) {
    D_800747FC = 0;
}

extern s32 D_80074800;
extern s32 D_80074804;
extern u8 g_PrimBuf[2][0x13880];

s32 func_8001B86C(s32 a) {
    Work *w = &D_800AF630;

    switch ((u32)D_800747FC) {
    case 0:
        g_PrimNext = (s32)g_PrimBuf[WORK->frame];
        D_800A6518[WORK->frame].ot = g_WorldOtTable[WORK->frame];
        D_800A6518[WORK->frame].e = (s32)(g_WorldOtTable[WORK->frame] + 1);
        ClearOTagR(D_800A6518[WORK->frame].ot, 2);
        func_8001BA84();
        D_80074800 = 0x80;
        D_800747FC++;
        break;
    case 1:
        D_80074804 = 1;
        D_800747FC = 2;
        break;
    case 2:
        PutDispEnv(&w->disp[1]);
        ClearOTagR(D_800A6518[WORK->frame].ot, 2);
        func_8001BB60();
        D_800747FC++;
    case 3:
        if (D_80074804++ >= 2) {
            D_80074804 = 1;
            if (func_8001BADC(D_8007480C, 1)) {
                return 1;
            }
            D_8007480C++;
        } else {
            func_8001BADC(D_8007480C, 0);
        }
        break;
    }
    return 0;
}

void func_8001BA84(void) {
    func_8001BC6C(D_800630E8, 0x80);
    func_8001BC6C(D_800630E8 + 8, 0x80);
    func_8001BC6C(D_800630E8 + 0x10, 0x80);
    func_8001BC6C(D_800630E8 + 0x18, 0x80);
}

s32 func_8001BADC(s32 n, s32 flag) {
    s32 i;
    u32 c;
    u32 w;
    u32 code;
    u8 *base;
    u8 *p;
    for (i = 0; i < 15; i++) {
        c = (i < n) ? -(flag != 0) & 8 : 0;
        code = 0x62000000;
        w = (c << 16) | ((c << 8) | code) | c;
        base = (u8 *)D_80074808;
        p = base + i * 0x14;
        *(u32 *)(p + 8) = w;
        p = base + (0x1D - i) * 0x14;
        *(u32 *)(p + 8) = w;
    }
    return n >= 0x2C;
}

void func_8001BB60(void) {
    s32 i = 0;
    D_80074808 = g_PrimNext;
    do {
        func_8001BBBC(0, i * 8, 0);
        i++;
    } while (i < 0x1E);
    D_8007480C = 0;
}

void func_8001BBBC(s32 x, s32 y, s32 c) {
    u32 *ot;
    u8 *p = (u8 *)g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02];
    setlen(p, 4);
    *(u32 *)(p + 4) = 0xE1000040;
    p[0xB] = 0x62;
    *(s16 *)(p + 0x10) = 0x140;
    *(s16 *)(p + 0x12) = 8;
    *(s16 *)(p + 0xC) = x - 0xA0;
    p[8] = p[9] = p[0xA] = c;
    *(s16 *)(p + 0xE) = y - 0x78;
    addPrim(ot + 1, p);
    g_PrimNext = (s32)(p + 0x14);
}

void func_8001BC6C(void *a, s32 c) {
    u16 *s = a;
    s32 tp;
    u16 x, y, w, h, u;
    u32 *p;
    u16 x0, y0;
    u32 *ot;
    u32 col;
    u32 hi;
    u32 code;
    u32 cg;
    tp = 0x100;
    hi = c << 16;
    x = s[0];
    y = s[1];
    w = s[2];
    h = s[3];
    p = (u32 *)g_PrimNext;
    x0 = x - 0xA0;
    y0 = y - 0x78;
    u = x;
    cg = c << 8;
    code = 0x64000000;
    col = hi | (cg | code) | c;
    ot = g_WorldOtTable[D_800B9A02];
    if ((s16)u >= 0x80) {
        u -= 0x80;
        tp = 0x102;
    }
    setlen(p, 5);
    p[1] = tp | 0xE1000000;
    ((u8 *)p)[0xB] = 0x64;
    p[2] = col;
    p[3] = (y0 << 16) | (x0 & 0xFFFF);
    p[4] = ((s32)(y << 16) >> 8) | (s16)u;
    p[5] = (h << 16) | (s16)w;
    addPrim(ot + 1, p);
    g_PrimNext = (s32)(p + 6);
}

s32 func_8001BD80(void) {
    return func_80034B98() != 0;
}

extern void DrawSyncCallback();
extern void PadStopCom();
extern void StopRCnt();
extern void StopCallback();

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

extern s32 D_800AE708;

s32 func_8001BE30(void) {
    s32 r;
    switch (D_800747EC) {
    case 0:
        r = func_80034B98();
        if (D_800BA1B4 == 5) {
            if (D_800747E4 != 0) {
                func_8002D4C8(0x16, 0);
            }
            D_800BA1B4 = 0;
            D_800747E8 = 0;
            D_800747E4 = 0;
            D_800747EC = 3;
            break;
        }
        if (r == 1 || r == 4 || r == 2) {
            func_8002D4C8(0x16, 0);
            D_800747EC++;
            break;
        }
        if (D_800AE708 == 0) {
            return 1;
        }
        D_800747EC = 2;
        break;
    case 1:
        if (func_80034B98() == 0) {
            return 1;
        }
        break;
    case 2:
        if (D_800AE708 == 0) {
            return 1;
        }
        break;
    case 3:
        if (D_800747E8 == 0) {
            return 1;
        }
        break;
    }
    return 0;
}

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

extern u8 D_800A5BD0[];
extern void GsLinkObject5(u32 data, void *obj, s32 n);
extern u32 *GsPresetObject(void *obj, u32 *base);

void func_8001C320(u8 *o, s32 *p) {
    Mtx m;
    u8 *w = (u8 *)&D_800AF630;
    u32 *base;
    u32 d;
    u8 *obj;
    func_8001C9D0(o);
    *(s16 *)o = 1;
    *(s16 *)(o + 2) = 1;
    GsInitCoordinate2(0, o + 0x30);
    GsGetLw(o + 0x30, &m);
    *(s32 **)(o + 0x24) = p;
    if (p != 0) {
        *(u32 **)(o + 0x20) = D_80063548;
        base = *(u32 **)(w + 0x198);
        *(u16 *)(o + 0x2E) = *(u16 *)(w + 0x19C);
        while (*p != 0) {
            d = *p++ & 0x80FFFFFF;
            d += 4;
            GsMapModelingData(d);
            obj = D_800A5BD0 + (*(u16 *)(w + 0x19C))++ * 0x14;
            GsLinkObject5(d + 8, obj, 0);
            base = GsPresetObject(obj, base);
        }
        *(u32 **)(w + 0x198) = base;
    }
}

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

extern s32 D_800AF7C8;
extern u16 D_800AF7CC;

void func_8001C5B8(u8 *o, s32 *p) {
    u8 lw[0x20];
    u8 *w = (u8 *)&D_800AF630;
    s32 r;
    s32 m;
    u8 *h;
    u16 n;
    func_8001C9D0(o);
    *(s16 *)o = 1;
    *(s16 *)(o + 2) = 8;
    GsInitCoordinate2(0, o + 0x30);
    GsGetLw(o + 0x30, lw);
    *(s32 **)(o + 0x24) = p;
    if (p != 0) {
        *(u32 **)(o + 0x20) = D_80063548;
        r = D_800AF7C8;
        *(u16 *)(o + 0x2E) = D_800AF7CC;
        while (*p != 0) {
            m = *p & 0x80FFFFFF;
            p++;
            m += 4;
            GsMapModelingData(m);
            n = *(u16 *)(w + 0x19C);
            h = D_800A5BD0 + n * 0x14;
            *(u16 *)(w + 0x19C) = n + 1;
            GsLinkObject5(m + 8, h, 0);
            r = (s32)GsPresetObject(h, (u32 *)r);
        }
        *(s32 *)(w + 0x198) = r;
    }
}

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

void func_8001D388(u8 *a, s32 *x);
extern u8 D_800B5CB8[];
extern u8 D_800B5D28[];
extern u8 D_800B60A8[];
extern u8 D_800B6968[];
extern u8 D_800B7768[];

void func_8001D1C4(void) {
    s32 x;
    u8 f;
    u8 *p;
    u8 *q;
    q = &D_800B9A11;
    x = 0;
    f = *q;
    for (p = q - 0x3E39; p < q - 0x3D59; p += 0x38) {
        func_8001D388(p, &x);
    }
    if (!(f & 4)) {
        for (p = D_800B5CB8; p < D_800B5CB8 + 0x70; p += 0x38) {
            func_8001D388(p, &x);
        }
    }
    if (!(f & 0x10)) {
        for (p = D_800B5D28; p < D_800B5D28 + 0x380; p += 0x38) {
            func_8001D388(p, &x);
        }
    }
    if (!(f & 0x20)) {
        for (p = D_800B60A8; p < D_800B60A8 + 0x8C0; p += 0x38) {
            func_8001D388(p, &x);
        }
    }
    if (!(f & 0x40)) {
        for (p = D_800B6968; p < D_800B6968 + 0xE00; p += 0x38) {
            func_8001D388(p, &x);
        }
    }
    if (!(f & 0x80)) {
        for (p = D_800B7768; p < D_800B7768 + 0x1C70; p += 0x38) {
            func_8001D388(p, &x);
        }
    }
}

void func_8001D388(u8 *a, s32 *x) {
    u16 k;
    if (*(s32 *)(a + 4) >= 0 && *(s32 *)(a + 0x20) != 0 && *(u16 *)a == 2) {
        k = *(u16 *)(a + 2);
        if (k < 0xB) {
            PS1_FN(D_8006351C[k])(a, x);
        }
    }
}

void func_8001D70C(u8 *o);
void func_8001D8C4(u8 *o, u8 *s, u8 *prim);

void func_8001D3FC(u8 *o) {
    u8 *s;
    u8 *p;
    u32 *ot;
    u32 fl;
    u32 z;
    s32 tp, sh, tb;
    u16 f;
    u16 x, y;
    u32 yy;
    u16 u, u1;
    s32 t;
    s32 tpage, c;
    u8 k;

    z = *(u16 *)(o + 0x2C) & 0x3FFF;
    if (z < 0x1000) {
        fl = *(u32 *)(o + 4);
        s = *(u8 **)(o + 0x20);
        tp = (fl >> 24) & 3;
        sh = 2 - tp;
        ot = g_WorldOtTable[D_800B9A02] + z;
        func_8001D70C(o);
        tb = tp << 7;
        do {
            p = (u8 *)g_PrimNext;
            f = *(u16 *)s;
            x = *(u16 *)(o + 0x28) + (*(s16 *)(s + 4) >> sh);
            yy = *(u16 *)(o + 0x2A) + *(u16 *)(s + 6);
            y = yy;
            g_PrimNext = (s32)(p + 0x28);
            p[3] = 9;
            p[7] = 0x2C;
            if (fl & 0x40000000) {
                p[7] = 0x2E;
                tpage = tb | (((fl >> 28) & 3) << 5) | ((yy & 0x100) >> 4) | ((x & 0x3C0) >> 6) | ((yy & 0x200) << 2);
            } else {
                tpage = tb | (1 << 5) | ((yy & 0x100) >> 4) | ((x & 0x3C0) >> 6) | ((yy & 0x200) << 2);
            }
            *(u16 *)(p + 0x16) = tpage;
            k = p[7];
            p[7] = k | ((fl & 0x40) >> 6);
            u = (x - ((tpage & 0xF) << 6)) << sh;
            u1 = u + s[2] - 1;
            if (u1 > 0xFF) u1 = 0xFF;
            if (f & 0x100) {
                p[0x14] = p[0x24] = u;
                p[0xC] = p[0x1C] = u1;
            } else {
                p[0xC] = p[0x1C] = u;
                p[0x14] = p[0x24] = u1;
            }
            t = y;
            if (tpage & 0x10) {
                u = t - 0x100;
            } else {
                u = t;
            }
            u1 = u + s[3] - 1;
            if (u1 > 0xFF) u1 = 0xFF;
            if (f & 0x200) {
                p[0x1D] = p[0x25] = u;
                p[0xD] = p[0x15] = u1;
            } else {
                p[0xD] = p[0x15] = u;
                p[0x1D] = p[0x25] = u1;
            }
            c = (o[0x27] + 0x100) << 6;
            if (o[0x27] < 0xE0) {
                c |= 0x16;
            } else {
                c |= 0x10;
            }
            *(u16 *)(p + 0xE) = c;
            p[4] = o[0x24];
            p[5] = o[0x25];
            p[6] = o[0x26];
            func_8001D8C4(o, s, p);
            addPrim(ot, p);
            s += 0xC;
        } while ((f & 0xFF) != 0xFF);
    }
}

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

extern MATRIX D_800A63F0;
extern void SetLightMatrix(MATRIX *m);
extern void func_8001E094(u8 *o);
extern void func_8001E378(u8 *o);
s32 func_8001E668(u8 *o, u8 *s, u8 *prim, s32 *flag);

void func_8001DA34(u8 *o) {
    u8 pad0[0x20];
    MATRIX m;
    u8 pad1[0x20];
    u8 c[4];
    u8 r[4];
    SVECTOR n;
    s32 flag;
    u8 *s;
    u8 *prim;
    u32 attr;
    u32 *ot;
    u32 *t;
    s32 tp, sh, z;
    u16 x, y, tpage, f, u0, u1;
    s32 w, k, v;

    s = *(u8 **)(o + 0x20);
    attr = *(u32 *)(o + 4);
    n.vx = n.vy = 0;
    n.vz = -0x1000;
    tp = (attr >> 24) & 3;
    sh = 2 - tp;
    ot = g_WorldOtTable[D_800B9A02];
    if (!(attr & 0x1040)) {
        if (*(MATRIX **)(o + 0x34) != 0) {
            m = **(MATRIX **)(o + 0x34);
            gte_SetRotMatrix(&D_800A63F0);
            gte_ldclmv(&m.m[0][0]);
            gte_rtir();
            gte_stclmv(&m.m[0][0]);
            gte_ldclmv(&m.m[0][1]);
            gte_rtir();
            gte_stclmv(&m.m[0][1]);
            gte_ldclmv(&m.m[0][2]);
            gte_rtir();
            gte_stclmv(&m.m[0][2]);
            SetLightMatrix(&m);
        } else {
            RotMatrix(o + 0x10, &m);
            gte_SetRotMatrix(&D_800A63F0);
            gte_ldclmv(&m.m[0][0]);
            gte_rtir();
            gte_stclmv(&m.m[0][0]);
            gte_ldclmv(&m.m[0][1]);
            gte_rtir();
            gte_stclmv(&m.m[0][1]);
            gte_ldclmv(&m.m[0][2]);
            gte_rtir();
            gte_stclmv(&m.m[0][2]);
            SetLightMatrix(&m);
        }
    }
    if (*(u8 **)(o + 0x34) != 0) {
        func_8001E094(o);
    } else {
        func_8001E378(o);
    }
    do {
        prim = (u8 *)g_PrimNext;
        f = *(u16 *)s;
        x = *(u16 *)(o + 0x28) + (*(s16 *)(s + 4) >> sh);
        y = *(u16 *)(o + 0x2A) + *(u16 *)(s + 6);
        g_PrimNext += 0x28;
        prim[3] = 9;
        prim[7] = 0x2C;
        if (attr & 0x40000000) {
            prim[7] = 0x2E;
            tpage = (tp << 7) | (((attr >> 28) & 3) << 5) | ((y & 0x100) >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
        } else {
            tpage = (tp << 7) | (((y & 0x100) >> 4) | 0x20) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
        }
        prim[7] |= (attr & 0x40) >> 6;
        *(u16 *)(prim + 0x16) = tpage;
        u0 = (x - (tpage & 0xF) * 64) << sh;
        u1 = u0 + s[2] - 1;
        if (u1 > 0xFF) u1 = 0xFF;
        if (f & 0x100) {
            prim[0x14] = prim[0x24] = u0;
            prim[0xC] = prim[0x1C] = u1;
        } else {
            prim[0xC] = prim[0x1C] = u0;
            prim[0x14] = prim[0x24] = u1;
        }
        v = y;
        if (tpage & 0x10) {
            u0 = v - 0x100;
        } else {
            u0 = v;
        }
        u1 = u0 + s[3] - 1;
        if (u1 > 0xFF) u1 = 0xFF;
        if (f & 0x200) {
            prim[0x1D] = prim[0x25] = u0;
            prim[0xD] = prim[0x15] = u1;
        } else {
            prim[0xD] = prim[0x15] = u0;
            prim[0x1D] = prim[0x25] = u1;
        }
        *(u16 *)(prim + 0xE) = ((o[0x27] + 0x100) << 6) | ((((o[0x27] < 0xE0) ? 0x160 : 0x100) >> 4) & 0x3F);
        if (attr & 0x1040) {
            prim[4] = o[0x24];
            prim[5] = o[0x25];
            prim[6] = o[0x26];
        } else {
            c[0] = o[0x24];
            c[1] = o[0x25];
            c[2] = o[0x26];
            gte_ldv0(&n);
            gte_ldrgb(c);
            gte_nccs();
            gte_strgb(r);
            prim[4] = r[0];
            prim[5] = r[1];
            prim[6] = r[2];
        }
        z = func_8001E668(o, s, prim, &flag);
        if (!(flag & ~0x1000)) {
            z++;
            w = *(u16 *)(o + 0x2C);
            k = w & 0xC000;
            if (k) {
                if (k == 0xC000) {
                    z -= w & 0xFFF;
                    if (z < 0) z = 0;
                } else {
                    z += w & 0xFFF;
                }
            }
            if ((u32)z >= 0x1000) return;
            t = (u32 *)(z * 4 + (s32)ot);
            *(u32 *)prim = (*(u32 *)prim & 0xFF000000) | (*t & 0xFFFFFF);
            *t = (*t & 0xFF000000) | ((u32)prim & 0xFFFFFF);
        }
        s += 0xC;
    } while ((f & 0xFF) != 0xFF);
}

void func_8001E094(u8 *o) {
    Mtx s;
    Mtx m;
    Mtx *g = &D_800AF648;
    s.m[0][0] = *(u16 *)(o + 0x18);
    s.m[0][1] = 0;
    s.m[0][2] = 0;
    s.m[1][0] = 0;
    s.m[1][1] = *(u16 *)(o + 0x1A);
    s.m[1][2] = 0;
    s.m[2][0] = 0;
    s.m[2][1] = 0;
    s.m[2][2] = *(u16 *)(o + 0x1C);
    gte_SetRotMatrix(*(Mtx **)(o + 0x34));
    gte_ldclmv(&s.m[0][0]);
    gte_rtir();
    gte_stclmv(&m.m[0][0]);
    gte_ldclmv(&s.m[0][1]);
    gte_rtir();
    gte_stclmv(&m.m[0][1]);
    gte_ldclmv(&s.m[0][2]);
    gte_rtir();
    gte_stclmv(&m.m[0][2]);
    m.t[0] = (*(Mtx **)(o + 0x34))->t[0];
    m.t[1] = (*(Mtx **)(o + 0x34))->t[1];
    m.t[2] = (*(Mtx **)(o + 0x34))->t[2];
    gte_SetRotMatrix(g);
    gte_ldclmv(&m.m[0][0]);
    gte_rtir();
    gte_stclmv(&m.m[0][0]);
    gte_ldclmv(&m.m[0][1]);
    gte_rtir();
    gte_stclmv(&m.m[0][1]);
    gte_ldclmv(&m.m[0][2]);
    gte_rtir();
    gte_stclmv(&m.m[0][2]);
    gte_SetTransMatrix(g);
    gte_ldlv0(m.t);
    gte_rtv0tr();
    gte_stlvnl(m.t);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
}

void func_8001E378(u8 *o) {
    Mtx s;
    Mtx m;
    Mtx *d;
    RotMatrix(o + 0x10, &m);
    d = &D_800AF648;
    s.m[0][0] = *(u16 *)(o + 0x18);
    s.m[0][1] = 0;
    s.m[0][2] = 0;
    s.m[1][0] = 0;
    s.m[1][1] = *(u16 *)(o + 0x1A);
    s.m[1][2] = 0;
    s.m[2][0] = 0;
    s.m[2][1] = 0;
    s.m[2][2] = *(u16 *)(o + 0x1C);
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
    gte_SetRotMatrix(d);
    gte_ldclmv(&m.m[0][0]);
    gte_rtir();
    gte_stclmv(&m.m[0][0]);
    gte_ldclmv(&m.m[0][1]);
    gte_rtir();
    gte_stclmv(&m.m[0][1]);
    gte_ldclmv(&m.m[0][2]);
    gte_rtir();
    gte_stclmv(&m.m[0][2]);
    gte_SetTransMatrix(d);
    gte_ldlv0(&m.t);
    gte_rtv0tr();
    gte_stlvnl(&m.t);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
}

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

typedef struct {
     u32 attribute;
     s16 x, y;
     u16 w, h;
     u16 tpage;
     u8 u, v;
     s16 cx, cy;
     u8 r, g, b;
     s16 mx, my;
     s16 scalex, scaley;
     s32 rotate;
} GsSPRITE;
extern void GsSortFastSprite(GsSPRITE *s, OtEnt *ot, u16 pri);

void func_8001E7E0(u8 *o) {
    GsSPRITE s;
    u32 pri;
    u8 *p;
    u32 attr;
    s32 tp, sh;
    u16 x, y, tpage, f, bx, by;
    OtEnt *ot;
    s32 v, w;

    pri = *(u16 *)(o + 0x2C) & 0x3FFF;
    if (pri < 0x1000) {
        p = *(u8 **)(o + 0x20);
        bx = *(u16 *)(o + 8);
        attr = *(u32 *)(o + 4);
        by = *(u16 *)(o + 0xA);
        tp = (attr >> 24) & 3;
        sh = 2 - tp;
        ot = &D_800A6518[D_800B9A02];
        do {
            f = *(u16 *)p;
            x = *(u16 *)(o + 0x28) + (*(s16 *)(p + 4) >> sh);
            y = *(u16 *)(o + 0x2A) + *(u16 *)(p + 6);
            if (attr & 0x40000000) {
                tpage = (tp << 7) | (((attr >> 28) & 3) << 5) | ((y & 0x100) >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
            } else {
                tpage = (tp << 7) | (((y & 0x100) >> 4) | 0x20) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
            }
            s.attribute = attr;
            s.x = *(u16 *)(p + 8) + (bx + *(u16 *)(o + 0x2E));
            s.y = *(u16 *)(p + 0xA) + (by + *(u16 *)(o + 0x30));
            s.w = p[2];
            s.h = p[3];
            s.tpage = tpage;
            s.u = (x - (tpage & 0xF) * 64) << sh;
            v = y;
            if (tpage & 0x10) {
                w = v - 0x100;
                s.v = w;
            } else {
                s.v = v;
            }
            s.cx = (o[0x27] < 0xE0) ? 0x160 : 0x100;
            s.cy = o[0x27] + 0x100;
            s.r = s.g = s.b = 0x80;
            p += 0xC;
            GsSortFastSprite(&s, ot, pri);
        } while ((f & 0xFF) != 0xFF);
    }
}

void func_8001F730(u8 *a, u8 *c, u8 *p);

void func_8001EA14(u8 *o) {
    Mtx m;
    Mtx *mp;
    u16 sxy[2];
    SVec v0, v1;
    LVec r;
    s32 flag, sz, otz;
    s32 sxy0, sxy1;
    u8 *e;
    u8 cc;
    u8 *prim;
    u32 attr;
    u32 *ot;
    s32 pri;
    u16 c;
    s32 tp, sh;
    u8 abr;
    u16 x, y;
    s32 v;
    u16 w;

    e = *(u8 **)(o + 0x20);
    attr = *(u32 *)(o + 4);
    mp = &D_800AF648;
    gte_SetRotMatrix(mp);
    gte_SetTransMatrix(mp);
    gte_ldv0(o + 8);
    gte_rtps();
    gte_stsxy(sxy);
    gte_stflg(&flag);
    gte_stsz(&sz);
    gte_stszotz(&otz);
    if (flag & ~0x1000) {
        return;
    }
    pri = otz + 1;
    ot = g_WorldOtTable[D_800B9A02];
    c = *(u16 *)(o + 0x2C);
    if (c & 0xC000) {
        if ((c & 0xC000) == 0xC000) {
            pri -= c & 0xFFF;
            if (pri < 0) {
                pri = 0;
            }
        } else {
            pri += c & 0xFFF;
        }
    }
    if ((u32)pri < 0x1000) {
        m.m[0][0] = *(u16 *)(o + 0x18);
        m.m[0][1] = 0;
        m.m[0][2] = 0;
        m.m[1][0] = 0;
        m.m[1][1] = *(u16 *)(o + 0x1A);
        m.m[1][2] = 0;
        m.m[2][0] = 0;
        m.m[2][1] = 0;
        m.m[2][2] = 0x1000;
        m.t[0] = m.t[1] = m.t[2] = 0;
        abr = (attr >> 28) & 3;
        tp = (attr >> 24) & 3;
        sh = 2 - tp;
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        do {
            if (*(u16 *)e != 8) {
                prim = (u8 *)g_PrimNext;
                x = *(u16 *)(o + 0x28) + (*(s16 *)(e + 4) >> sh);
                y = *(u16 *)(o + 0x2A) + *(u16 *)(e + 6);
                g_PrimNext += 0x28;
                prim[3] = 9;
                prim[7] = 0x2C;
                if (attr & 0x40000000) {
                    prim[7] = 0x2E;
                    *(u16 *)(prim + 0x16) = (tp << 7) | (abr << 5) | ((y & 0x100) >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
                } else {
                    *(u16 *)(prim + 0x16) = (tp << 7) | 0x20 | ((y & 0x100) >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
                }
                prim[7] |= (attr & 0x40) >> 6;
                prim[0xC] = (x - (*(u16 *)(prim + 0x16) & 0xF) * 64) << sh;
                v = y;
                if (*(u16 *)(prim + 0x16) & 0x10) {
                    w = v - 0x100;
                } else {
                    w = v;
                }
                prim[0xD] = w;
                prim[0x14] = prim[0xC] + e[2] - 1;
                prim[0x15] = prim[0xD];
                prim[0x1C] = prim[0xC];
                prim[0x1D] = prim[0xD] + e[3] - 1;
                prim[0x24] = prim[0x14];
                prim[0x25] = prim[0x1D];
                *(u16 *)(prim + 0xE) = ((o[0x27] + 0x100) << 6) | ((o[0x27] < 0xE0) ? 0x16 : 0x10);
                prim[4] = o[0x24];
                prim[5] = o[0x25];
                prim[6] = o[0x26];
                v0.vx = *(u16 *)(e + 8);
                v0.vy = *(u16 *)(e + 0xA);
                v0.vz = sz;
                v1.vx = e[2];
                v1.vy = e[3];
                v1.vz = sz;
                if (*(u16 *)(o + 2) == 3) {
                    gte_ldv3(&v0, &v1, &v1);
                    gte_rtpt();
                    gte_stsxy0(&sxy0);
                    gte_stsxy1(&sxy1);
                    *(u16 *)(prim + 8) = sxy[0] + *(u16 *)&sxy0;
                    *(u16 *)(prim + 0xA) = sxy[1] + ((u16 *)&sxy0)[1];
                    *(u16 *)(prim + 0x10) = *(u16 *)(prim + 8) + *(u16 *)&sxy1;
                    *(u16 *)(prim + 0x1A) = *(u16 *)(prim + 0xA) + ((u16 *)&sxy1)[1];
                } else {
                    gte_ldv0(&v0);
                    gte_rtv0();
                    gte_stlvnl(&r);
                    *(u16 *)(prim + 8) = sxy[0] + r.vx;
                    *(u16 *)(prim + 0xA) = sxy[1] + r.vy;
                    gte_ldv0(&v1);
                    gte_rtv0();
                    gte_stlvnl(&r);
                    *(u16 *)(prim + 0x10) = *(u16 *)(prim + 8) + r.vx;
                    *(u16 *)(prim + 0x1A) = *(u16 *)(prim + 0xA) + r.vy;
                }
                *(u16 *)(prim + 0x12) = *(u16 *)(prim + 0xA);
                *(u16 *)(prim + 0x18) = *(u16 *)(prim + 8);
                *(u16 *)(prim + 0x20) = *(u16 *)(prim + 0x10);
                *(u16 *)(prim + 0x22) = *(u16 *)(prim + 0x1A);
                if (*(u32 *)(o + 4) & 0x08000000) {
                    func_8001F730(o + 0x10, (u8 *)sxy, prim);
                }
                *(u32 *)prim = (*(u32 *)prim & 0xFF000000) | (ot[pri] & 0xFFFFFF);
                ot[pri] = (ot[pri] & 0xFF000000) | ((u32)prim & 0xFFFFFF);
            }
            cc = *e;
            e += 0xC;
        } while (cc != 0xFF);
    }
}

extern void ScaleMatrix();
extern void GsGetLs();
s32 func_80021174();
extern u8 *D_80072784;

void func_8001EFE0(u8 *o) {
    MATRIX m;
    SVECTOR c;
    VECTOR s;
    SVECTOR v[2];
    struct { u32 flg; MATRIX coord; MATRIX workm; void *param; void *super; void *sub; } co;
    MATRIX ls;
    SVECTOR col;
    struct { s32 flag; s32 sz; s32 otz; s16 x0, y0; s16 x1, y1; } t;
    Work *w = &D_800AF630;
    u32 attr;
    u8 *p;
    u8 *prim;
    s32 tp;
    s32 sh;   /* on the stack (spilled): one declaration per line for pc/frames.txt */
    s32 abr;
    u32 *ot;
    s32 z;
    u32 f;
    u16 x, y, k;
    s32 vv; u16 ww;
    s32 wd;
    u16 tq, xx;
    s16 hh;
    u16 tpg;

    attr = *(u32 *)(o + 4);
    co.super = *(void **)(o + 0x78);
    co.flg = 0;
    if (*(u16 *)(o + 0x2C) & 1) {
        *(u16 *)(o + 0x2C) &= ~1;
        co.coord = *(MATRIX *)(o + 0x34);
    } else {
        RotMatrixZYX(o + 0x10, &co.coord);
        co.coord.t[0] = *(s16 *)(o + 8);
        co.coord.t[1] = *(s16 *)(o + 0xA);
        co.coord.t[2] = *(s16 *)(o + 0xC);
    }
    s.vx = *(s16 *)(o + 0x18);
    s.vy = *(s16 *)(o + 0x1A);
    s.vz = *(s16 *)(o + 0x1C);
    ScaleMatrix(&co.coord, &s);
    GsGetLs(&co, &ls);
    *(MATRIX *)(o + 0x34) = co.coord;
    *(MATRIX *)(o + 0x54) = co.workm;
    p = *(u8 **)(o + 0x20);
    if (p == NULL) {
        return;
    }
    if (func_80021174(*(s32 *)(o + 0x28), co.workm.t) == 0) {
        return;
    }
    gte_SetRotMatrix(&ls);
    gte_SetTransMatrix(&ls);
    c.vx = c.vy = c.vz = 0;
    gte_ldv0(&c);
    gte_rtps();
    gte_stsxy(&c);
    gte_stflg(&t.flag);
    gte_stsz(&t.sz);
    gte_stszotz(&t.otz);
    if (t.flag & ~0x1000) {
        return;
    }
    z = t.otz + 1;
    ot = g_WorldOtTable[w->frame];
    k = *(u16 *)(o + 0x2E);
    if (k & 0xC000) {
        if ((k & 0xC000) == 0xC000) {
            z -= k & 0xFFF;
            if (z < 0) {
                z = 0;
            }
        } else {
            z += k & 0xFFF;
        }
    }
    if ((u32)z >= 0x1000) {
        return;
    }
    if (*(u16 *)(o + 0x2C) & 0x80) {
        col = **(SVECTOR **)(o + 0x80);
    } else {
        col.vx = col.vy = col.vz = 0x80;
    }
    tp = (attr >> 24) & 3;
    m.m[0][0] = *(u16 *)(o + 0x18);
    m.m[0][1] = 0;
    m.m[0][2] = 0;
    m.m[1][0] = 0;
    m.m[1][1] = *(u16 *)(o + 0x1A);
    m.m[1][2] = 0;
    m.m[2][0] = 0;
    m.m[2][1] = 0;
    m.m[2][2] = 0x1000;
    m.t[0] = m.t[1] = m.t[2] = 0;
    sh = 2 - tp;
    abr = (attr >> 28) & 3;
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    do {
        f = *(u32 *)p;
        if ((f & 0xFF) != 8) {
            prim = (u8 *)g_PrimNext;
            x = *(u16 *)(p + 4);
            y = *(u16 *)(p + 6);
            g_PrimNext += 0x28;
            prim[3] = 9;
            prim[7] = 0x2C;
            if (attr & 0x40000000) {
                prim[7] = 0x2E;
                if ((u32)(D_80072784[4] - 1) < 2) {
                    tq = ((u8)tp << 9) | ((u8)abr << 7) | ((y & 0x300) >> 3);
                    xx = (x & 0x3C0) >> 6;
                    tpg = xx | tq;
                } else {
                    tpg = ((u8)tp << 7) | ((u8)abr << 5) | ((y & 0x100) >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
                }
                *(u16 *)(prim + 0x16) = tpg;
            } else {
                if ((u32)(D_80072784[4] - 1) < 2) {
                    tq = ((u8)tp << 9) | (1 << 7) | ((y & 0x300) >> 3);
                    xx = (x & 0x3C0) >> 6;
                    tpg = xx | tq;
                } else {
                    tpg = ((u8)tp << 7) | (1 << 5) | ((y & 0x100) >> 4) | ((x & 0x3C0) >> 6) | ((y & 0x200) << 2);
                }
                *(u16 *)(prim + 0x16) = tpg;
            }
            prim[7] |= (attr & 0x40) >> 6;
            prim[0xC] = (x - (*(u16 *)(prim + 0x16) & 0xF) * 64) << sh;
            vv = y;
            if ((*(u16 *)(prim + 0x16) & 0x10)) {
                ww = vv - 0x100;
            } else {
                ww = vv;
            }
            prim[0xD] = ww;
            wd = (f >> 16) & 0xFF;
            prim[0x14] = prim[0xC] + wd;
            prim[0x1D] = prim[0xD] + (f >> 24);
            prim[0x15] = prim[0xD];
            prim[0x1C] = prim[0xC];
            prim[0x24] = prim[0x14];
            prim[0x25] = prim[0x1D];
            k = (f >> 8) & 0xFF;
            *(u16 *)(prim + 0xE) = ((k + 0x100) << 6) | (((k < 0xE0) ? 0x160 : 0x100) >> 4);
            prim[4] = col.vx;
            prim[5] = col.vy;
            prim[6] = col.vz;
            v[0].vx = *(u16 *)(p + 8);
            v[0].vy = *(u16 *)(p + 0xA);
            v[0].vz = t.sz;
            v[1].vx = (f >> 16) & 0xFF;
            hh = f >> 24;
            v[1].vy = hh;
            v[1].vz = t.sz;
            gte_ldv3(&v[0], &v[1], &v[1]);
            gte_rtpt();
            gte_stsxy0(&t.x0);
            gte_stsxy1(&t.x1);
            *(u16 *)(prim + 8) = t.x0 + c.vx;
            *(u16 *)(prim + 0xA) = t.y0 + c.vy;
            *(u16 *)(prim + 0x10) = *(u16 *)(prim + 8) + t.x1;
            *(u16 *)(prim + 0x18) = *(u16 *)(prim + 8);
            *(u16 *)(prim + 0x12) = *(u16 *)(prim + 0xA);
            *(u16 *)(prim + 0x1A) = *(u16 *)(prim + 0xA) + t.y1;
            *(u16 *)(prim + 0x20) = *(u16 *)(prim + 0x10);
            *(u16 *)(prim + 0x22) = *(u16 *)(prim + 0x1A);
            if (*(u32 *)(o + 4) & 0x8000000) {
                func_8001F730(o + 0x10, (u8 *)&c, prim);
            }
            addPrim(ot + z, prim);
        }
        p += 0xC;
    } while ((f & 0xFF) != 0xFF);
}

void func_8001F730(u8 *a, u8 *c, u8 *p) {
    MATRIX m;
    SVec v[4];
    LVec r[4];
    func_80020DA4(a, (u8 *)&m);
    gte_SetRotMatrix(&m);
    v[0].vx = *(u16 *)(p + 8) - *(u16 *)c;
    v[0].vy = *(u16 *)(p + 0xA) - *(u16 *)(c + 2);
    v[0].vz = 0;
    v[1].vx = *(u16 *)(p + 0x10) - *(u16 *)c;
    v[1].vy = *(u16 *)(p + 0x12) - *(u16 *)(c + 2);
    v[1].vz = 0;
    v[2].vx = *(u16 *)(p + 0x18) - *(u16 *)c;
    v[2].vy = *(u16 *)(p + 0x1A) - *(u16 *)(c + 2);
    v[2].vz = 0;
    v[3].vx = *(u16 *)(p + 0x20) - *(u16 *)c;
    v[3].vy = *(u16 *)(p + 0x22) - *(u16 *)(c + 2);
    v[3].vz = 0;
    gte_ldv0(&v[0]);
    gte_rtv0();
    gte_stlvnl(&r[0]);
    gte_ldv0(&v[1]);
    gte_rtv0();
    gte_stlvnl(&r[1]);
    gte_ldv0(&v[2]);
    gte_rtv0();
    gte_stlvnl(&r[2]);
    gte_ldv0(&v[3]);
    gte_rtv0();
    gte_stlvnl(&r[3]);
    *(u16 *)(p + 8) = *(u16 *)c + r[0].vx;
    *(u16 *)(p + 0xA) = *(u16 *)(c + 2) + r[0].vy;
    *(u16 *)(p + 0x10) = *(u16 *)c + r[1].vx;
    *(u16 *)(p + 0x12) = *(u16 *)(c + 2) + r[1].vy;
    *(u16 *)(p + 0x18) = *(u16 *)c + r[2].vx;
    *(u16 *)(p + 0x1A) = *(u16 *)(c + 2) + r[2].vy;
    *(u16 *)(p + 0x20) = *(u16 *)c + r[3].vx;
    *(u16 *)(p + 0x22) = *(u16 *)(c + 2) + r[3].vy;
}

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

extern u8 D_800AF8D8[];
extern u8 D_800AFB6C[];
extern u8 D_800AFBF0[];
extern u8 D_800B0430[];
extern u8 D_800B0C70[];
extern u8 D_800B3DF0[];
void func_8001FB8C(u8 *o, s32 *cnt);

void func_8001F9F8(void) {
    u8 f = D_800B9A11;
    s32 cnt;
    s32 i;
    u8 *p;

    cnt = 0;
    for (i = 0, p = D_800AF8D8; i < 4; i++, p += 0x84) {
        func_8001FB8C(p, &cnt);
    }
    if (!(f & 2)) {
        for (i = 0, p = D_800AF8D8 + 0x210; i < 1; i++, p += 0x84) {
            func_8001FB8C(p, &cnt);
        }
    }
    if (!(f & 8)) {
        for (i = 0, p = D_800AFB6C; i < 1; i++, p += 0x84) {
            func_8001FB8C(p, &cnt);
        }
    }
    if (!(f & 0x10)) {
        for (i = 0, p = D_800AFBF0; i < 16; i++, p += 0x84) {
            func_8001FB8C(p, &cnt);
        }
    }
    if (!(f & 0x20)) {
        for (i = 0, p = D_800B0430; i < 16; i++, p += 0x84) {
            func_8001FB8C(p, &cnt);
        }
    }
    if (!(f & 0x40)) {
        for (i = 0, p = D_800B0C70; i < 96; i++, p += 0x84) {
            func_8001FB8C(p, &cnt);
        }
    }
    if (!(f & 0x80)) {
        for (i = 0, p = D_800B3DF0; i < 58; i++, p += 0x84) {
            func_8001FB8C(p, &cnt);
        }
    }
}

void func_8001FB8C(u8 *o, s32 *cnt) {
    if (*(s32 *)(o + 4) >= 0 && *(u16 *)o == 1 && *(u16 *)(o + 2) < 9) {
        PS1_FN(D_80063500[*(u16 *)(o + 2)])(o);
        (*cnt)++;
    }
}

extern s32 D_80062BA8;
extern MATRIX D_80074818[];
extern MATRIX D_80075018[];
extern void GsGetLws(void *coord, MATRIX *lw, MATRIX *ls);
extern void GsLinkObject4(u32 tmd, void *obj, s32 n);
extern void GsSetLightMatrix2(MATRIX *m);
extern void GsSetLsMatrix(MATRIX *m);
extern void GsSortObject4(void *obj, OtEnt *ot, s32 shift, s32 scratch);
extern void GsSortObject5(void *obj, OtEnt *ot, s32 shift, s32 scratch);
extern s32 func_80020248();
extern void func_80020598(u32 *parts, u32 pose, MATRIX *lw, MATRIX *ls);
extern s32 func_80020A28();
extern void func_800CAE80();
void func_80021008(u8 *a);
void func_80021050();
void func_8002109C(s32 a, s16 **pp);
void func_80021120();
s32 func_80021174();
void func_800243EC();
void func_80027BF0();

void func_8001FC08(u8 *o) {
    struct { u32 attr; void *coord2; u32 tmd; u32 packet; u32 id; } obj;
    MATRIX lw;
    MATRIX ls;
    struct { u32 flg; MATRIX coord; MATRIX workm; void *param; void *super; void *sub; } c;
    struct { s16 *p; s32 n; } bg;
    u32 attr;
    s32 kind;
    u16 flags;
    OtEnt *ot;
    s32 scratch;
    u8 *d;
    u32 cnt;
    u32 *parts;
    u32 pose;
    u8 *h;
    MATRIX *lp;
    MATRIX *sp;
    u32 w;
    u32 t;
    u32 m;

    ot = &D_800A6518[D_800B9A02];
    attr = *(u32 *)(o + 4);
    kind = *(u16 *)(o + 2);
    flags = *(u16 *)(o + 0x2C);
    c.super = *(void **)(o + 0x78);
    scratch = D_80062BA8;
    c.flg = 0;
    if (flags & 1) {
        *(u16 *)(o + 0x2C) &= 0xFFFE;
        c.coord = *(MATRIX *)(o + 0x34);
    } else {
        func_80020DA4(o + 0x10, (u8 *)&c.coord);
        c.coord.t[0] = *(s16 *)(o + 8);
        c.coord.t[1] = *(s16 *)(o + 0xA);
        c.coord.t[2] = *(s16 *)(o + 0xC);
    }
    d = 0;
    if (flags & 0x20) {
        d = *(u8 **)(o + 0x80);
    }
    if (flags & 0x80) {
        if (d != 0) {
            bg.p = (s16 *)(*(u8 **)(o + 0x80) + 0x30);
        } else {
            bg.p = *(s16 **)(o + 0x80);
        }
    } else {
        bg.p = 0;
    }
    bg.n = 0;
    cnt = 0;
    if (flags & 0x10) {
        func_80020F34((u8 *)&c.coord, o + 0x18);
    }
    GsGetLws(&c, &lw, &ls);
    *(MATRIX *)(o + 0x34) = c.coord;
    *(MATRIX *)(o + 0x54) = c.workm;
    parts = *(u32 **)(o + 0x24);
    if (parts == 0) {
        return;
    }
    pose = *(u32 *)(o + 0x20);
    if (pose == 0) {
        return;
    }
    if (func_80021174(*(s32 *)(o + 0x28), c.workm.t) == 0) {
        return;
    }
    if (kind == 1 || kind == 6) {
        h = D_800A5BD0 + *(u16 *)(o + 0x2E) * 0x14;
        obj.attr = attr;
        obj.id = 0;
    } else {
        obj.attr = attr;
    }
    if (d != 0) {
        func_80021008(d);
    }
    if (!(pose & 0x1000000) && !(flags & 0x40)) {
        if (func_80020248(parts, pose, &lw, &ls, attr & 0x40) == 0) {
            lp = D_80074818;
            sp = D_80075018;
        } else {
            lp = (MATRIX *)0x1F800000;
            sp = (MATRIX *)0x1F8000E0;
        }
        for (; (w = *parts) != 0; parts++, lp++, sp++) {
            t = w & 0x7F000000;
            w &= 0x80FFFFFF;
            if (t != 0x01000000) {
                GsLinkObject4(w + 0xC, &obj, 0);
                if (!(attr & 0x40)) {
                    GsSetLightMatrix2(lp);
                }
                GsSetLsMatrix(sp);
                if (bg.p != 0) {
                    func_8002109C(bg.n, &bg.p);
                }
                if (kind == 0) {
                    GsSortObject4(&obj, ot, 0, scratch);
                } else if (kind == 5) {
                    func_800243EC(&obj, ot, 0);
                }
            }
            if (bg.p != 0) {
                func_80021120(&bg.n, bg.p);
            }
        }
    } else {
        m = pose & ~0x1000000;
        if (flags & 0x40) {
            func_80020598(parts, m, &lw, &ls);
            lp = D_80074818;
            sp = D_80075018;
        } else if (func_80020A28(parts, m, &lw, &ls, attr & 0x40) == 0) {
            lp = D_80074818;
            sp = D_80075018;
        } else {
            lp = (MATRIX *)0x1F800000;
            sp = (MATRIX *)0x1F8000E0;
        }
        for (; (w = *parts) != 0; parts++, lp++, sp++) {
            t = w & 0x7F000000;
            w &= 0x80FFFFFF;
            if (t == 0x01000000) {
                if (kind == 1 || kind == 6) {
                    h += 0x14;
                }
            } else {
                if (kind == 0 || kind == 5) {
                    GsLinkObject4(w + 0xC, &obj, 0);
                } else if (kind == 1 || kind == 6) {
                    obj.tmd = *(u32 *)(h + 8);
                    obj.packet = *(u32 *)(h + 0xC);
                    h += 0x14;
                } else {
                    obj.tmd = w;
                }
                if (!(attr & 0x40)) {
                    GsSetLightMatrix2(lp);
                }
                GsSetLsMatrix(sp);
                if (!(flags & 0x40) && bg.p != 0) {
                    func_8002109C(bg.n, &bg.p);
                }
                if (kind == 0) {
                    GsSortObject4(&obj, ot, 0, scratch);
                } else if (kind == 1) {
                    if (cnt < 2) {
                        func_80027BF0(&obj, ot, 0);
                        cnt++;
                    } else {
                        GsSortObject5(&obj, ot, 0, scratch);
                    }
                } else if (kind == 6) {
                    func_800CAE80(&obj, ot, 0);
                } else if (kind == 5) {
                    func_800243EC(&obj, ot, 0);
                }
            }
            if (!(flags & 0x40) && bg.p != 0) {
                func_80021120(&bg.n, bg.p);
            }
        }
    }
    if (d != 0) {
        func_80021050(d);
    }
}

s32 func_80020248(s32 *list, u8 *p, MATRIX *base, MATRIX *parent, s32 noLocal) {
    MATRIX m;
    s32 n;
    s32 ret;
    MATRIX *lm;
    MATRIX *wm;
    u32 w;

    n = 0;
    ret = 0;
    while (*list++ != 0) {
        n++;
    }
    if (n >= 8) {
        lm = D_80074818;
        wm = D_80075018;
    } else {
        lm = (MATRIX *)0x1F800000;
        wm = (MATRIX *)0x1F8000E0;
        ret = 1;
    }
    while (--n != -1) {
        func_80020DA4(p + 6, (u8 *)&m);
        w = *(u32 *)p;
        m.t[0] = w & 0xFFFF;
        m.t[1] = w >> 16;
        m.t[2] = *(s16 *)(p + 4);
        if (noLocal == 0) {
            gte_SetRotMatrix(base);
            gte_ldclmv(&m.m[0][0]);
            gte_rtir();
            gte_stclmv(&lm->m[0][0]);
            gte_ldclmv(&m.m[0][1]);
            gte_rtir();
            gte_stclmv(&lm->m[0][1]);
            gte_ldclmv(&m.m[0][2]);
            gte_rtir();
            gte_stclmv(&lm->m[0][2]);
            lm++;
        }
        gte_SetRotMatrix(parent);
        gte_ldclmv(&m.m[0][0]);
        gte_rtir();
        gte_stclmv(&wm->m[0][0]);
        gte_ldclmv(&m.m[0][1]);
        gte_rtir();
        gte_stclmv(&wm->m[0][1]);
        gte_ldclmv(&m.m[0][2]);
        gte_rtir();
        gte_stclmv(&wm->m[0][2]);
        gte_SetTransMatrix(parent);
        gte_ldlv0(m.t);
        gte_rtv0tr();
        gte_stlvnl(wm->t);
        wm++;
        p += 0xC;
    }
    return ret;
}

extern u16 D_80126C4E;
extern u16 D_80126D10;
extern u16 D_80126D12;

void func_80020598(u32 *list, u32 pose, MATRIX *a, MATRIX *b) {
    MATRIX m;
    SVec v;
    MATRIX *o;
    s32 i;
    u32 w;
    u16 s;

    i = 0;
    o = D_80074818;
    while (*list != 0) {
        switch (i) {
        case 0:
            v.vx = *(u16 *)((u8 *)pose + 0x1E);
            w = *(u32 *)((u8 *)pose + 0x18);
            v.vy = ((w >> 8) & 0xFF) | (w & 0xF) << 8;
            v.vz = ((w >> 16) & 0xFF) | (w & 0xF0) << 4;
            func_80020DA4((u8 *)&v, (u8 *)&m);
            ((void (*)())func_80012558)(&m, 0x800); /* MATCH-TRICK: the original calls it out of line (its caller sat in another source file); the cast stops GCC inlining it */
            m.t[0] = (s8)((u8 *)pose)[0];
            m.t[1] = (s8)((u8 *)pose)[1];
            m.t[2] = (s8)((u8 *)pose)[2];
            break;
        case 1:
            v.vx = *(u16 *)((u8 *)pose + 0x1E);
            w = *(u32 *)((u8 *)pose + 0x18);
            v.vy = ((w >> 8) & 0xFF) | (w & 0xF) << 8;
            v.vz = ((w >> 16) & 0xFF) | (w & 0xF0) << 4;
            func_80020DA4((u8 *)&v, (u8 *)&m);
            m.t[0] = (s8)((u8 *)pose)[3];
            m.t[1] = (s8)((u8 *)pose)[4];
            m.t[2] = (s8)((u8 *)pose)[5];
            pose += 8;
            break;
        default:
            v.vx = *(u16 *)((u8 *)pose + 6);
            w = *(u32 *)pose;
            v.vy = ((w >> 8) & 0xFF) | (w & 0xF) << 8;
            v.vz = ((w >> 16) & 0xFF) | (w & 0xF0) << 4;
            func_80020DA4((u8 *)&v, (u8 *)&m);
            m.t[0] = (s8)((u8 *)pose)[3];
            m.t[1] = (s8)((u8 *)pose)[4];
            m.t[2] = (s8)((u8 *)pose)[5];
            pose += 8;
            if (i == 0x19) {
                s = D_80126C4E;
                v.vx = v.vy = v.vz = s;
                func_80020F34((u8 *)&m, (u8 *)&v);
            } else if (i == 0x16) {
                s = D_80126D10;
                v.vx = v.vy = v.vz = s;
                func_80020F34((u8 *)&m, (u8 *)&v);
            } else if (i == 8) {
                s = D_80126D12;
                v.vx = v.vy = v.vz = s;
                func_80020F34((u8 *)&m, (u8 *)&v);
            }
            break;
        }
        gte_SetRotMatrix(a);
        gte_ldclmv(&m.m[0][0]);
        gte_rtir();
        gte_stclmv(&o->m[0][0]);
        gte_ldclmv(&m.m[0][1]);
        gte_rtir();
        gte_stclmv(&o->m[0][1]);
        gte_ldclmv(&m.m[0][2]);
        gte_rtir();
        gte_stclmv(&o->m[0][2]);
        gte_SetRotMatrix(b);
        gte_ldclmv(&m.m[0][0]);
        gte_rtir();
        gte_stclmv(&o[64].m[0][0]);
        gte_ldclmv(&m.m[0][1]);
        gte_rtir();
        gte_stclmv(&o[64].m[0][1]);
        gte_ldclmv(&m.m[0][2]);
        gte_rtir();
        gte_stclmv(&o[64].m[0][2]);
        gte_SetTransMatrix(b);
        gte_ldlv0(m.t);
        gte_rtv0tr();
        gte_stlvnl(o[64].t);
        o++;
        list++;
        i++;
    }
}

s32 func_80020A28(s32 *list, u8 *d, MATRIX *m1, MATRIX *m2, s32 f) {
    MATRIX m;
    u16 r[4];
    s32 n = 0;
    s32 ret = 0;
    MATRIX *a;
    MATRIX *b;
    u32 w;

    while (*list++ != 0) {
        n++;
    }
    if (n >= 8) {
        a = D_80074818;
        b = D_80075018;
    } else {
        a = (MATRIX *)0x1F800000;
        b = (MATRIX *)0x1F8000E0;
        ret = 1;
    }
    while (--n != -1) {
        r[0] = *(u16 *)(d + 6);
        w = *(u32 *)d;
        r[1] = (u8)(w >> 8) | ((w & 0xF) << 8);
        r[2] = ((w >> 16) & 0xFF) | ((w & 0xF0) << 4);
        func_80020DA4((u8 *)r, (u8 *)&m);
        if (f == 0) {
            gte_SetRotMatrix(m1);
            gte_ldclmv(&m);
            gte_rtir();
            gte_stclmv(a);
            gte_ldclmv((u8 *)&m + 2);
            gte_rtir();
            gte_stclmv((u8 *)a + 2);
            gte_ldclmv((u8 *)&m + 4);
            gte_rtir();
            gte_stclmv((u8 *)a + 4);
            a++;
        }
        gte_SetRotMatrix(m2);
        gte_ldclmv(&m);
        gte_rtir();
        gte_stclmv(b);
        gte_ldclmv((u8 *)&m + 2);
        gte_rtir();
        gte_stclmv((u8 *)b + 2);
        gte_ldclmv((u8 *)&m + 4);
        gte_rtir();
        gte_stclmv((u8 *)b + 4);
        gte_SetTransMatrix(m2);
        gte_ldv0_b(d + 3);
        gte_rtv0tr();
        gte_stlvnl(b->t);
        b++;
        d += 8;
    }
    return ret;
}

/* Angles are 12-bit (0x1000 = a full turn). The table holds one word per angle: the low half is sin and the high half is
   cos, 4.12 fixed point. Every entry is read as a whole word and split into s16 halves; the compiler then folds some of
   the splits into half loads, which is why the code reads x as a word, z as two halves and y as both (r290). */
extern s32 *D_800636D4;

/* Builds a 3x3 rotation matrix (9 s16, 4.12) from three 12-bit angles {x, y, z} */
void func_80020DA4(u8 *p0, u8 *p1) {
    u16 *angles = (u16 *)p0;
    s16 *m = (s16 *)p1;
    s32 *tab = D_800636D4;
    s32 xv, yv, zv;
    s16 xs, ys, zs;
    s16 xc, yc, zc;
    s32 a, b, c;

    xv = tab[angles[0] & 0xFFF];
    yv = tab[angles[1] & 0xFFF];
    zv = tab[angles[2] & 0xFFF];
    xs = xv;
    xc = xv >> 16;
    ys = yv;
    yc = yv >> 16;
    zs = zv;
    zc = zv >> 16;
    c = xc * zs;
    b = xc * zc;
    a = (xs * ys) >> 12;
    m[0] = (zc * yc) >> 12;
    m[1] = ((a * zc) >> 12) - (c >> 12);
    m[2] = (((b >> 12) * ys) >> 12) + ((xs * zs) >> 12);
    m[3] = (zs * yc) >> 12;
    m[4] = ((a * zs) >> 12) + (b >> 12);
    m[5] = (((c >> 12) * ys) >> 12) - ((xs * zc) >> 12);
    m[6] = -ys;
    m[7] = (yc * xs) >> 12;
    m[8] = (yc * xc) >> 12;
}

/* Hand-written assembly in the original, an instruction order no compiler produces: there is no C source to recover, so it
   stays asm and counts as done (r283, docs/phase1_rulings.md #1). */
INCLUDE_ASM("asm/nonmatchings/code_800123F0", func_80020F34);

void func_80021008(u8 *a) {
    func_80028620(0, (LightDir *)a);
    func_80028620(1, (LightDir *)(a + 0x10));
    func_80028620(2, (LightDir *)(a + 0x20));
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

typedef struct {
    u32 tag;
    u8 r0, g0, b0, code;
    s16 x0, y0;
    u8 r1, g1, b1, p1;
    s16 x1, y1;
    u8 r2, g2, b2, p2;
    s16 x2, y2;
    u8 r3, g3, b3, p3;
    s16 x3, y3;
} G4_21284;
typedef struct {
    u8 pad00[4];
    u32 f;
    u8 pad08[0x18];
    u8 *c;
    u8 pad24[8];
    u16 z;
    s16 x, y, zz;
} Obj21284;

void func_80021284(Obj21284 *o) {
    SVECTOR a;
    SVECTOR b;
    VECTOR v[13];
    s32 flag;
    G4_21284 *p = (G4_21284 *)g_PrimNext;
    u8 *c = o->c;
    u32 f = o->f;
    u32 *ot = &g_WorldOtTable[D_800B9A02][o->z & 0xFFF];
    s32 i;
    u8 code;
    g_PrimNext = (s32)(p + 6);
    func_8001D70C((u8 *)o);
    a.vx = o->x;
    a.vy = o->y;
    a.vz = o->zz;
    gte_ldv0(&a);
    gte_rtv0tr();
    gte_stlvnl(&v[0]);
    gte_stflg(&flag);
    for (i = 0; i < 12; i++) {
        b.vx = a.vx + *(s16 *)(c + i * 4 + 0x10);
        b.vy = a.vy + *(s16 *)(c + i * 4 + 0x12);
        b.vz = a.vz;
        gte_ldv0(&b);
        gte_rtv0tr();
        gte_stlvnl(&v[i + 1]);
        gte_stflg(&flag);
    }
    code = 0x38;
    if (f & 0x40000000) {
        code = 0x3A;
    }
    for (i = 1; i < 13; i += 2) {
        setlen(p, 8);
        p->code = code;
        p->r0 = c[4];
        p->g0 = c[5];
        p->b0 = c[6];
        p->r1 = c[4];
        p->g1 = c[5];
        p->b1 = c[6];
        p->r2 = c[0];
        p->g2 = c[1];
        p->b2 = c[2];
        p->r3 = c[4];
        p->g3 = c[5];
        p->b3 = c[6];
        p->x0 = v[i].vx;
        p->y0 = v[i].vy;
        p->x1 = v[i + 1].vx;
        p->y1 = v[i + 1].vy;
        p->x2 = v[0].vx;
        p->y2 = v[0].vy;
        p->x3 = v[i + 2].vx;
        p->y3 = v[i + 2].vy;
        addPrim(ot, p);
        p++;
    }
    /* the last quad's x3/y3 read v[13] (one past the array, the flag word) in the loop, as the original; closed here */
    p[-1].x3 = v[1].vx;
    p[-1].y3 = v[1].vy;
    if (f & 0x40000000) {
        ((u32 *)p)[1] = 0xE1000000 | ((f >> 23) & 0x60);
        g_PrimNext += 8;
        setlen(p, 1);
        addPrim(ot, p);
    }
}

extern void func_800226C0();
#ifdef PC
/* PORT NOTE: func_800226C0 reads its local n before setting it; on the console n is the low half of the
   caller's s2, which its three callers hold as below (set before each call) */
static u32 s2_800226C0;
#endif
extern void func_80023138();
typedef struct { u8 pad[0x10]; struct { s16 x, y; } pt[12]; } PtSet;

void func_800215F4(u8 *o) {
    SVec p;
    SVec v[3];
    s32 out[36];
    s32 flag;
    s32 z;
    s32 flag2;
    u32 *ot;
    PtSet *d;
    s32 i;
    s32 w;
    s32 zz;
    u16 m;
    u16 n;

    ot = g_WorldOtTable[D_800B9A02];
    d = *(PtSet **)(o + 0x20);
    if (*(s32 *)(o + 0x34) != 0) {
        func_8001E094(o);
    } else {
        func_8001E378(o);
    }
    if (*(s32 *)(o + 4) & 0x100) {
        v[1].vx = 16;
        v[2].vx = -16;
        v[0].vy = -19;
        v[1].vy = v[2].vy = 8;
        v[0].vx = 0;
        v[0].vz = v[1].vz = v[2].vz = 0;
        gte_ldv3(&v[0], &v[1], &v[2]);
        gte_rtpt();
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            return;
        }
        gte_nclip();
        gte_stopz(&z);
        if (z <= 0) {
            return;
        }
    }
    p.vx = *(u16 *)(o + 0x2E);
    p.vy = *(u16 *)(o + 0x30);
    p.vz = *(u16 *)(o + 0x32);
    gte_ldv0(&p);
    gte_rtps();
    gte_stsxy(&out[0]);
    gte_stflg(&flag);
    gte_stszotz(&z);
    if (flag & ~0x1000) {
        return;
    }
    w = z + 1;
    m = *(u16 *)(o + 0x2C);
    if (m & 0xC000) {
        if ((m & 0xC000) == 0xC000) {
            w -= m & 0xFFF;
            if (w < 0) {
                w = 0;
            }
        } else {
            w += m & 0xFFF;
        }
    }
    if (w < 0 || w > 0xFFF) {
        return;
    }
    i = 0;
    if ((*(s16 *)(o + 0x1E) & 0x8000) || *(s16 *)(o + 0xE) != 0) {
        for (i = 0; i < 12; i += 6) {
            v[0].vx = p.vx + d->pt[i].x;
            v[0].vy = p.vy + d->pt[i].y;
            v[0].vz = p.vz;
            v[1].vx = p.vx + d->pt[i + 2].x;
            v[1].vy = p.vy + d->pt[i + 2].y;
            v[1].vz = p.vz;
            v[2].vx = p.vx + d->pt[i + 4].x;
            v[2].vy = p.vy + d->pt[i + 4].y;
            v[2].vz = p.vz;
            gte_ldv3(&v[0], &v[1], &v[2]);
            gte_rtpt();
            gte_stsxy3(&out[i + 1], &out[i + 3], &out[i + 5]);
        }
        for (i = 1; i < 12; i += 2) {
            v[0].vx = p.vx + d->pt[i].x;
            v[0].vy = p.vy + d->pt[i].y;
            v[0].vz = p.vz;
            gte_ldv0(&v[0]);
            gte_rtps();
            gte_stsxy(&out[i + 1]);
            gte_stflg(&flag2);
            gte_stszotz(&z);
            zz = z + 1;
            n = *(u16 *)(o + 0x2C);
            if (n & 0xC000) {
                if ((n & 0xC000) == 0xC000) {
                    zz -= n & 0xFFF;
                    if (zz <= 0) {
                        zz = 0;
                    }
                } else {
                    zz += n & 0xFFF;
                }
            }
            if (zz > 0xFFF) {
                zz = 0xFFF;
            }
            out[13 + (i >> 1)] = zz;
        }
        if (*(s16 *)(o + 0xE) != 0) {
            p.vz += *(s16 *)(o + 0xE);
            for (i = 0; i < 12; i += 6) {
                v[0].vx = p.vx + d->pt[i].x;
                v[0].vy = p.vy + d->pt[i].y;
                v[0].vz = p.vz;
                v[1].vx = p.vx + d->pt[i + 2].x;
                v[1].vy = p.vy + d->pt[i + 2].y;
                v[1].vz = p.vz;
                v[2].vx = p.vx + d->pt[i + 4].x;
                v[2].vy = p.vy + d->pt[i + 4].y;
                v[2].vz = p.vz;
                gte_ldv3(&v[0], &v[1], &v[2]);
                gte_rtpt();
                gte_stsxy3(&out[i + 19], &out[i + 21], &out[i + 23]);
            }
            for (i = 1; i < 12; i += 2) {
                v[0].vx = p.vx + d->pt[i].x;
                v[0].vy = p.vy + d->pt[i].y;
                v[0].vz = p.vz;
                gte_ldv0(&v[0]);
                gte_rtps();
                gte_stsxy(&out[i + 19]);
                gte_stflg(&flag2);
                gte_stszotz(&z);
                zz = z + 1;
                n = *(u16 *)(o + 0x2C);
                if (n & 0xC000) {
                    if ((n & 0xC000) == 0xC000) {
                        zz -= n & 0xFFF;
                        if (zz <= 0) {
                            zz = 0;
                        }
                    } else {
                        zz += n & 0xFFF;
                    }
                }
                if (zz > 0xFFF) {
                    zz = 0xFFF;
                }
                if (zz < out[13 + (i >> 1)]) {
                    out[13 + (i >> 1)] = zz;
                }
            }
            func_80023138(o, (u8 *)d, out, ot);
        } else {
#ifdef PC
            s2_800226C0 = (u32)ot;
#endif
            func_800226C0(o, (u8 *)d, out, ot);
        }
    } else {
        for (i = 0; i < 12; i += 3) {
            v[0].vx = p.vx + d->pt[i].x;
            v[0].vy = p.vy + d->pt[i].y;
            v[0].vz = p.vz;
            v[1].vx = p.vx + d->pt[i + 1].x;
            v[1].vy = p.vy + d->pt[i + 1].y;
            v[1].vz = p.vz;
            v[2].vx = p.vx + d->pt[i + 2].x;
            v[2].vy = p.vy + d->pt[i + 2].y;
            v[2].vz = p.vz;
            gte_ldv3(&v[0], &v[1], &v[2]);
            gte_rtpt();
            gte_stsxy3(&out[i + 1], &out[i + 2], &out[i + 3]);
        }
#ifdef PC
        s2_800226C0 = (u32)ot;
#endif
        func_800226C0(o, (u8 *)d, out, ot + w);
    }
}

typedef struct { s16 vx, vy; } DVec;
typedef struct { u8 pad[0x10]; DVec pt[12]; } Pts21D38;

void func_80021D38(u8 *o) {
    SVECTOR v[3];
    DVec sxy[13];
    MATRIX mt;
    VECTOR r;
    s32 flag;
    s32 z;
    s32 sz;
    Work *w = &D_800AF630;
    u32 *ot = g_WorldOtTable[D_800B9A02];
    s32 fl = *(s32 *)(o + 4);
    Pts21D38 *m = *(Pts21D38 **)(o + 0x20);
    s32 n;
    u16 d;
    s32 k;
    s32 i;

    if (fl & 0x40000) {
        sxy[0] = *(DVec *)(o + 8);
        z = ((SVECTOR *)(o + 8))->vz;
        sz = ((SVECTOR *)(o + 8))->vz << 2;
    } else {
        gte_SetRotMatrix(&w->wsm);
        gte_SetTransMatrix(&w->wsm);
        gte_ldv0(o + 8);
        gte_rtps();
        gte_stsxy(&sxy[0]);
        gte_stflg(&flag);
        gte_stszotz(&z);
        if (flag & ~0x1000) {
            return;
        }
        gte_stsz(&sz);
    }
    n = z + 1;
    d = *(u16 *)(o + 0x2C);
    if (d != 0) {
        k = d & 0xC000;
        if (k != 0) {
            if (k == 0xC000) {
                n -= d & 0xFFF;
                if (n < 0) {
                    n = 0;
                }
            } else {
                n += d & 0xFFF;
            }
        } else {
            n = d & 0xFFF;
        }
    }
    if (n < 0 || n >= 0x1000) {
        return;
    }
    mt.m[0][0] = *(u16 *)(o + 0x18);
    mt.m[0][1] = 0;
    mt.m[0][2] = 0;
    mt.m[1][0] = 0;
    mt.m[1][1] = *(u16 *)(o + 0x1A);
    mt.m[1][2] = 0;
    mt.m[2][0] = 0;
    mt.m[2][1] = 0;
    mt.m[2][2] = 0x1000;
    mt.t[0] = mt.t[1] = mt.t[2] = 0;
    gte_SetRotMatrix(&mt);
    gte_SetTransMatrix(&mt);
    for (i = 0; i < 12; i += 3) {
        v[0].vx = m->pt[i].vx;
        v[0].vy = m->pt[i].vy;
        v[0].vz = sz;
        v[1].vx = m->pt[i + 1].vx;
        v[1].vy = m->pt[i + 1].vy;
        v[1].vz = sz;
        v[2].vx = m->pt[i + 2].vx;
        v[2].vy = m->pt[i + 2].vy;
        v[2].vz = sz;
        if (fl & 0x40000) {
            gte_ldv0(&v[0]);
            gte_rtv0tr();
            gte_stlvnl(&r);
            gte_stflg(&flag);
            sxy[i + 1].vx = r.vx;
            sxy[i + 1].vy = r.vy;
            gte_ldv0(&v[1]);
            gte_rtv0tr();
            gte_stlvnl(&r);
            gte_stflg(&flag);
            sxy[i + 2].vx = r.vx;
            sxy[i + 2].vy = r.vy;
            gte_ldv0(&v[2]);
            gte_rtv0tr();
            gte_stlvnl(&r);
            gte_stflg(&flag);
            sxy[i + 3].vx = r.vx;
            sxy[i + 3].vy = r.vy;
        } else {
            gte_ldv3(&v[0], &v[1], &v[2]);
            gte_rtpt();
            gte_stsxy3(&sxy[i + 1], &sxy[i + 2], &sxy[i + 3]);
        }
        sxy[i + 1].vx += sxy[0].vx;
        sxy[i + 1].vy += sxy[0].vy;
        sxy[i + 2].vx += sxy[0].vx;
        sxy[i + 2].vy += sxy[0].vy;
        sxy[i + 3].vx += sxy[0].vx;
        sxy[i + 3].vy += sxy[0].vy;
    }
#ifdef PC
    s2_800226C0 = (u32)ot;
#endif
    func_800226C0(o, m, sxy, &ot[n]);
}

extern void ScaleMatrix();
extern void GsGetLs();
typedef struct { s16 vx, vy; } DVec221A8;
typedef struct { u8 pad[0x10]; DVec221A8 pt[12]; } Pose221A8;
typedef struct { u32 flg; MATRIX coord; MATRIX workm; void *param; void *super; void *sub; } Coord221A8;

void func_800221A8(u8 *o) {
    SVECTOR v0;
    SVECTOR v1;
    SVECTOR v2;
    DVec221A8 sxy[14];
    SVECTOR d;
    MATRIX m;
    Coord221A8 c;
    MATRIX ls;
    VECTOR sc;
    s32 flag;
    s32 otz;
    s32 sz;
    Work *w = &D_800AF630;
    Pose221A8 *p;
    u32 *ot;
    s32 z;
    s32 k;
    s32 i;

    c.super = *(void **)(o + 0x78);
    c.flg = 0;
    if (*(u16 *)(o + 0x2C) & 1) {
        *(u16 *)(o + 0x2C) &= ~1;
        c.coord = *(MATRIX *)(o + 0x34);
    } else {
        RotMatrixZYX(o + 0x10, &c.coord);
        c.coord.t[0] = *(s16 *)(o + 8);
        c.coord.t[1] = *(s16 *)(o + 0xA);
        c.coord.t[2] = *(s16 *)(o + 0xC);
    }
    sc.vx = *(s16 *)(o + 0x18);
    sc.vy = *(s16 *)(o + 0x1A);
    sc.vz = 0x1000;
    ScaleMatrix(&c.coord, &sc);
    GsGetLs(&c, &ls);
    *(MATRIX *)(o + 0x34) = c.coord;
    *(MATRIX *)(o + 0x54) = c.workm;
    p = *(Pose221A8 **)(o + 0x20);
    if (p == 0) {
        return;
    }
    if (((s32 (*)())func_80021174)(*(s32 *)(o + 0x28), c.workm.t) == 0) { /* MATCH-TRICK: the call passes no third argument */
        return;
    }
    ot = g_WorldOtTable[w->frame];
    gte_SetRotMatrix(&ls);
    gte_SetTransMatrix(&ls);
    v0.vx = v0.vy = v0.vz = 0;
    gte_ldv0(&v0);
    gte_rtps();
    gte_stsxy(&sxy[0]);
    gte_stflg(&flag);
    gte_stszotz(&otz);
    if (flag & ~0x1000) {
        return;
    }
    gte_stsz(&sz);
    z = otz + 1;
    k = *(u16 *)(o + 0x2E) & 0xC000;
    if (k != 0) {
        if (k == 0xC000) {
            z -= *(u16 *)(o + 0x2E) & 0xFFF;
            if (z < 0) {
                z = 0;
            }
        } else {
            z += *(u16 *)(o + 0x2E) & 0xFFF;
        }
    }
    if ((u32)z >= 0x1000) {
        return;
    }
    m.m[0][0] = *(u16 *)(o + 0x18);
    m.m[0][1] = 0;
    m.m[0][2] = 0;
    m.m[1][0] = 0;
    m.m[1][1] = *(u16 *)(o + 0x1A);
    m.m[1][2] = 0;
    m.m[2][0] = 0;
    m.m[2][1] = 0;
    m.m[2][2] = 0x1000;
    m.t[0] = m.t[1] = m.t[2] = 0;
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    if (*(s32 *)(o + 0x74) != 0) {
        v0.vx = *(u16 *)(o + 0x74);
        v0.vy = *(u16 *)(o + 0x76);
        v0.vz = sz;
        gte_ldv0(&v0);
        gte_rtps();
        gte_stsxy(&d);
        sxy[0].vx += d.vx;
        sxy[0].vy += d.vy;
    }
    for (i = 0; i < 12; i += 3) {
        v0.vx = p->pt[i].vx;
        v0.vy = p->pt[i].vy;
        v0.vz = sz;
        v1.vx = p->pt[i + 1].vx;
        v1.vy = p->pt[i + 1].vy;
        v1.vz = sz;
        v2.vx = p->pt[i + 2].vx;
        v2.vy = p->pt[i + 2].vy;
        v2.vz = sz;
        gte_ldv3(&v0, &v1, &v2);
        gte_rtpt();
        gte_stsxy3(&sxy[i + 1], &sxy[i + 2], &sxy[i + 3]);
        sxy[i + 1].vx += sxy[0].vx;
        sxy[i + 1].vy += sxy[0].vy;
        sxy[i + 2].vx += sxy[0].vx;
        sxy[i + 2].vy += sxy[0].vy;
        sxy[i + 3].vx += sxy[0].vx;
        sxy[i + 3].vy += sxy[0].vy;
    }
#ifdef PC
    s2_800226C0 = (u32)p;
#endif
    func_800226C0(o, p, sxy, ot + z);
}

typedef struct { s16 x, y; } XY226C0;

void func_800226C0(u8 *a, u8 *c, XY226C0 *v, u32 *ot) {
    XY226C0 b[12];
    u32 f;
    s32 sel;
    s32 dith;
    s16 n;
    u8 *p;
    s32 i;
    u8 code;
    u32 m;

    f = *(u32 *)(a + 4);
    sel = *(u16 *)(a + 0x1E) & 0x8000;
    dith = 0;
#ifdef PC
    n = s2_800226C0; /* PORT NOTE: the console's value of n here (see s2_800226C0) */
#endif
    if (f & 0x800000) {
        p = (u8 *)g_PrimNext;
        dith = 1;
        if (sel) {
            if (n) { /* PORT NOTE: read before set, as the original */
                g_PrimNext = (s32)(p + 0x60);
                for (i = 0; i < 12; i++, p += 8) {
                    p[3] = 1;
                    *(u32 *)(p + 4) = 0xE1000000;
                    addPrim(&ot[((s32 *)&v[13])[i >> 1]], p);
                }
            } else {
                g_PrimNext = (s32)(p + 0x30);
                for (i = 0; i < 6; i++, p += 8) {
                    p[3] = 1;
                    *(u32 *)(p + 4) = 0xE1000000;
                    addPrim(&ot[((s32 *)&v[13])[i]], p);
                }
            }
        } else {
            g_PrimNext = (s32)(p + 8);
            p[3] = 1;
            *(u32 *)(p + 4) = 0xE1000000;
            addPrim(ot, p);
        }
    }
    n = *(u16 *)(a + 0x1E) & 0x1FFF;
    p = (u8 *)g_PrimNext;
    if (n) {
        g_PrimNext = (s32)(p + 0x1B0);
    } else {
        g_PrimNext = (s32)(p + 0xD8);
    }
    code = 0x38;
    if (f & 0x40000000) {
        code = 0x3A;
    }
    if (n) {
        for (i = 0; i < 12; i++) {
            b[i].x = v[0].x + (((v[i + 1].x - v[0].x) * n) >> 12);
            b[i].y = v[0].y + (((v[i + 1].y - v[0].y) * n) >> 12);
        }
        for (i = 0; i < 12; i++, p += 0x24) {
            p[3] = 8;
            p[7] = code;
            p[4] = c[4];
            p[5] = c[5];
            p[6] = c[6];
            p[0xC] = c[4];
            p[0xD] = c[5];
            p[0xE] = c[6];
            p[0x14] = c[0];
            p[0x15] = c[1];
            p[0x16] = c[2];
            p[0x1C] = c[0];
            p[0x1D] = c[1];
            p[0x1E] = c[2];
            *(s16 *)(p + 0x8) = v[i + 1].x;
            *(s16 *)(p + 0xA) = v[i + 1].y;
            *(s16 *)(p + 0x10) = v[i + 2].x;
            *(s16 *)(p + 0x12) = v[i + 2].y;
            *(s16 *)(p + 0x18) = b[i].x;
            *(s16 *)(p + 0x1A) = b[i].y;
            *(s16 *)(p + 0x20) = b[i + 1].x;
            *(s16 *)(p + 0x22) = b[i + 1].y;
            if (sel) {
                addPrim(&ot[((s32 *)&v[13])[i >> 1]], p);
            } else {
                addPrim(ot, p);
            }
        }
        *(s16 *)(p - 0x14) = v[1].x;
        *(s16 *)(p - 0x12) = v[1].y;
        *(s16 *)(p - 0x4) = b[0].x;
        *(s16 *)(p - 0x2) = b[0].y;
        if (*(u16 *)(a + 0x1E) & 0x4000) {
            p = (u8 *)g_PrimNext;
            g_PrimNext = (s32)(p + 0xD8);
            for (i = 0; i < 12; i += 2, p += 0x24) {
                p[3] = 8;
                p[7] = code;
                p[4] = c[0xC];
                p[5] = c[0xD];
                p[6] = c[0xE];
                p[0xC] = c[0xC];
                p[0xD] = c[0xD];
                p[0xE] = c[0xE];
                p[0x14] = c[8];
                p[0x15] = c[9];
                p[0x16] = c[0xA];
                p[0x1C] = c[0xC];
                p[0x1D] = c[0xD];
                p[0x1E] = c[0xE];
                *(s16 *)(p + 0x8) = b[i].x;
                *(s16 *)(p + 0xA) = b[i].y;
                *(s16 *)(p + 0x10) = b[i + 1].x;
                *(s16 *)(p + 0x12) = b[i + 1].y;
                *(s16 *)(p + 0x18) = v[0].x;
                *(s16 *)(p + 0x1A) = v[0].y;
                *(s16 *)(p + 0x20) = b[i + 2].x;
                *(s16 *)(p + 0x22) = b[i + 2].y;
                if (sel) {
                    addPrim(&ot[((s32 *)&b[13])[i >> 1]], p);
                } else {
                    addPrim(ot, p);
                }
            }
            *(s16 *)(p - 0x4) = b[0].x;
            *(s16 *)(p - 0x2) = b[0].y;
        }
    } else {
        for (i = 1; i < 13; i += 2, p += 0x24) {
            p[3] = 8;
            p[7] = code;
            p[4] = c[4];
            p[5] = c[5];
            p[6] = c[6];
            p[0xC] = c[4];
            p[0xD] = c[5];
            p[0xE] = c[6];
            p[0x14] = c[0];
            p[0x15] = c[1];
            p[0x16] = c[2];
            p[0x1C] = c[4];
            p[0x1D] = c[5];
            p[0x1E] = c[6];
            *(s16 *)(p + 0x8) = v[i].x;
            *(s16 *)(p + 0xA) = v[i].y;
            *(s16 *)(p + 0x10) = v[i + 1].x;
            *(s16 *)(p + 0x12) = v[i + 1].y;
            *(s16 *)(p + 0x18) = v[0].x;
            *(s16 *)(p + 0x1A) = v[0].y;
            *(s16 *)(p + 0x20) = v[i + 2].x;
            *(s16 *)(p + 0x22) = v[i + 2].y;
            if (sel) {
                addPrim(&ot[((s32 *)&v[13])[i >> 1]], p);
            } else {
                addPrim(ot, p);
            }
        }
        *(s16 *)(p - 0x4) = v[1].x;
        *(s16 *)(p - 0x2) = v[1].y;
    }
    if (f & 0x40000000) {
        m = (f >> 23) & 0x60;
        if (sel) {
            if (n) {
                g_PrimNext += 0x60;
                for (i = 0; i < 12; i++, p += 8) {
                    p[3] = 1;
                    if (dith) {
                        *(u32 *)(p + 4) = m | 0xE1000200;
                    } else {
                        *(u32 *)(p + 4) = m | 0xE1000000;
                    }
                    addPrim(&ot[((s32 *)&v[13])[i >> 1]], p);
                }
            } else {
                g_PrimNext += 0x30;
                for (i = 0; i < 6; i++, p += 8) {
                    p[3] = 1;
                    if (dith) {
                        *(u32 *)(p + 4) = m | 0xE1000200;
                    } else {
                        *(u32 *)(p + 4) = m | 0xE1000000;
                    }
                    addPrim(&ot[((s32 *)&v[13])[i]], p);
                }
            }
        } else {
            g_PrimNext += 8;
            p[3] = 1;
            *(u32 *)(p + 4) = m | (dith ? 0xE1000200 : 0xE1000000);
            addPrim(ot, p);
        }
    }
}

typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } G4_23138;
typedef struct { u32 tag; u32 code; } Mode23138;

void func_80023138(u8 *a, u8 *c, u8 *v, u32 *ot) {
    u8 unused[0x30];
    G4_23138 *p = (G4_23138 *)g_PrimNext;
    u32 f = *(u32 *)(a + 4);
    Mode23138 *m;
    u8 code;
    s32 i;
    g_PrimNext += 0x1B0;
    code = 0x38;
    if (f & 0x40000000) {
        code = 0x3A;
    }
    for (i = 0; i < 12; i++, p++) {
        setlen(p, 8);
        p->code = code;
        p->r0 = c[4]; p->g0 = c[5]; p->b0 = c[6];
        p->r1 = c[4]; p->g1 = c[5]; p->b1 = c[6];
        p->r2 = c[0]; p->g2 = c[1]; p->b2 = c[2];
        p->r3 = c[0]; p->g3 = c[1]; p->b3 = c[2];
        p->x0 = *(s16 *)(v + i * 4 + 0x4C);
        p->y0 = *(s16 *)(v + i * 4 + 0x4E);
        p->x1 = *(s16 *)(v + i * 4 + 0x50);
        p->y1 = *(s16 *)(v + i * 4 + 0x52);
        p->x2 = *(s16 *)(v + i * 4 + 4);
        p->y2 = *(s16 *)(v + i * 4 + 6);
        p->x3 = *(s16 *)(v + i * 4 + 8);
        p->y3 = *(s16 *)(v + i * 4 + 0xA);
        addPrim(ot + *(s32 *)(v + (i >> 1) * 4 + 0x34), p);
    }
    p[-1].x1 = *(s16 *)(v + 0x4C);
    p[-1].y1 = *(s16 *)(v + 0x4E);
    p[-1].x3 = *(s16 *)(v + 4);
    p[-1].y3 = *(s16 *)(v + 6);
    if (f & 0x40000000) {
        m = (Mode23138 *)p;
        g_PrimNext += 0x60;
        for (i = 0; i < 12; i++, m++) {
            setlen(m, 1);
            m->code = 0xE1000000 | ((f >> 23) & 0x60);
            addPrim(ot + *(s32 *)(v + (i >> 1) * 4 + 0x34), m);
        }
    }
}

void func_800233CC(u8 *o, s32 r0) {
    u16 r = r0;
    s32 i;
    for (i = 0; i < 4; i++) {
        *(s16 *)(o + i * 4 + 0x10) = (rsin(i * 0x155) * r) >> 12;
        *(s16 *)(o + i * 4 + 0x12) = (rcos(i * 0x155) * r) >> 12;
    }
    for (i = 4; i < 7; i++) {
        u8 *q = o + (6 - i) * 4;
        *(s16 *)(o + i * 4 + 0x10) = *(s16 *)(q + 0x10);
        *(s16 *)(o + i * 4 + 0x12) = -*(s16 *)(q + 0x12);
    }
    for (i = 7; i < 12; i++) {
        u8 *q = o + (12 - i) * 4;
        *(s16 *)(o + i * 4 + 0x10) = -*(s16 *)(q + 0x10);
        *(s16 *)(o + i * 4 + 0x12) = *(s16 *)(q + 0x12);
    }
}

void func_800234E4(u8 *o, u16 r, u16 a) {
    s32 i;
    for (i = 0; i < 12; i++) {
        *(s16 *)(o + i * 4 + 0x10) = (rsin(a + i * 0x155) * r) >> 12;
        *(s16 *)(o + i * 4 + 0x12) = (rcos(a + i * 0x155) * r) >> 12;
    }
}

typedef struct { unsigned addr : 24; unsigned len : 8; } Tag23570;
typedef struct { u32 tag; u8 r, g, b, code; s16 x, y, w, h; } Tile23570;
typedef struct { u8 r, g, b, end; u16 x, y, w, h; } Rect23570;

void func_80023570(u8 *a) {
    Rect23570 *s = *(Rect23570 **)(a + 0x20);
    Tile23570 *p = (Tile23570 *)g_PrimNext;
    u32 f = *(u32 *)(a + 4);
    u16 x = *(u16 *)(a + 8);
    u16 y = *(u16 *)(a + 0xA);
    u16 z = *(u16 *)(a + 0x2C);
    u32 *ot = g_WorldOtTable[D_800B9A02];
    u8 code;
    u8 *q;
    code = 0x60;
    if (f & 0x40000000) {
        code = 0x62;
    }
    do {
        p->code = code;
        p->tag = 0x03000000;
        p->r = s->r;
        p->g = s->g;
        p->b = s->b;
        p->x = x + s->x;
        p->y = y + s->y;
        p->w = s->w;
        p->h = s->h;
        q = (u8 *)g_PrimNext + 0x10;
        g_PrimNext = (s32)q;
        ((Tag23570 *)p)->addr = ((Tag23570 *)&ot[z])->addr;
        ((Tag23570 *)&ot[z])->addr = (u32)p;
        p++;
    } while (!(s++)->end);
    if (f & 0x40000000) {
        g_PrimNext = (s32)(q + 0xC);
        SetDrawMode(q, 0, 0, GetTPage(2, (f >> 28) & 3, 0x280, 0), 0);
        ((Tag23570 *)q)->addr = ((Tag23570 *)&ot[z])->addr;
        ((Tag23570 *)&ot[z])->addr = (u32)q;
    }
}

typedef union { s32 w; struct { s16 x, y; } s; } Xy2374C;

void func_8002374C(u8 *a) {
    u8 *e;
    s32 dx, dy;
    u32 *ot;
    u32 (*t)[0x1000];
    u16 z;
    u32 f, code;
    u8 *p;
    Xy2374C v;

    if (*(s32 *)(a + 4) < 0) return;
    e = *(u8 **)(a + 0x20);
    dx = *(u16 *)(a + 8) - *(u16 *)(a + 0x2E);
    dy = *(u16 *)(a + 0xA) - *(u16 *)(a + 0x30);
    t = g_WorldOtTable;
    ot = t[D_800B9A02];
    z = *(u16 *)(a + 0x2C);
    while ((code = f = *(u32 *)e) != 0) {
        code <<= 24;
        if (f & 0x40000000) code |= 0x02000000;
        p = (u8 *)g_PrimNext;
        if (f & 0x800000) {
            SetDrawMode(p, 0, 1, GetTPage(2, (f >> 28) & 3, 0x280, 0), 0);
        } else {
            SetDrawMode(p, 0, 0, GetTPage(2, (f >> 28) & 3, 0x280, 0), 0);
        }
        switch (f & 0xFF) {
        case 0x60:
            g_PrimNext += 0x20;
            SetDrawMode((u8 *)g_PrimNext - 0xC, 0, 0, GetTPage(2, (f >> 28) & 3, 0x280, 0), 0);
            *(u32 *)p = 0x07000000;
            p += 8;
            *(u32 *)(p + 4) = code | (*(u32 *)(e + 0xC) & 0xFFFFFF);
            v.w = *(s32 *)(e + 4);
            v.s.x = dx + v.s.x;
            v.s.y = dy + v.s.y;
            *(s32 *)(p + 8) = v.w;
            *(u32 *)(p + 0xC) = *(u32 *)(e + 8);
            break;
        case 0x38:
            g_PrimNext += 0x34;
            SetDrawMode((u8 *)g_PrimNext - 0xC, 0, 0, GetTPage(2, (f >> 28) & 3, 0x280, 0), 0);
            *(u32 *)p = 0x0C000000;
            p += 8;
            *(u32 *)(p + 4) = code | (*(u32 *)(e + 0xC) & 0xFFFFFF);
            *(u32 *)(p + 0xC) = *(u32 *)(e + 0x10);
            *(u32 *)(p + 0x14) = *(u32 *)(e + 0x14);
            *(u32 *)(p + 0x1C) = *(u32 *)(e + 0x18);
            v.w = *(s32 *)(e + 4);
            v.s.x = dx + v.s.x;
            v.s.y = dy + v.s.y;
            *(s32 *)(p + 8) = v.w;
            v.s.x += *(u16 *)(e + 8);
            *(s32 *)(p + 0x10) = v.w;
            v.s.y += *(u16 *)(e + 0xA);
            *(s32 *)(p + 0x20) = v.w;
            v.s.x -= *(u16 *)(e + 8);
            *(s32 *)(p + 0x18) = v.w;
            break;
        case 0x30:
            g_PrimNext += 0x2C;
            SetDrawMode((u8 *)g_PrimNext - 0xC, 0, 0, GetTPage(2, (f >> 28) & 3, 0x280, 0), 0);
            *(u32 *)p = 0x0A000000;
            p += 8;
            *(u32 *)(p + 4) = code | (*(u32 *)(e + 0x10) & 0xFFFFFF);
            *(u32 *)(p + 0xC) = *(u32 *)(e + 0x14);
            *(u32 *)(p + 0x14) = *(u32 *)(e + 0x18);
            v.w = *(s32 *)(e + 4);
            v.s.x = dx + v.s.x;
            v.s.y = dy + v.s.y;
            *(s32 *)(p + 8) = v.w;
            v.w = *(s32 *)(e + 8);
            v.s.x = dx + v.s.x;
            v.s.y = dy + v.s.y;
            *(s32 *)(p + 0x10) = v.w;
            v.w = *(s32 *)(e + 0xC);
            v.s.x = dx + v.s.x;
            v.s.y = dy + v.s.y;
            *(s32 *)(p + 0x18) = v.w;
            break;
        }
        ((Tag23570 *)(p - 8))->addr = ((Tag23570 *)&ot[z])->addr;
        ((Tag23570 *)&ot[z])->addr = (u32)(p - 8);
        e += 0x1C;
    }
}

typedef struct { u32 tag; u32 col; s16 x, y; u16 uv, clut; } Spr8_23BF0;
typedef struct { u32 tag; u32 col; s16 x, y; u16 uv, clut; s32 wh; } Spr_23BF0;

void func_80023BF0(u8 *a) {
    Work *w = &D_800AF630;
    struct { SVECTOR v; s32 sxy; s32 p; s32 flag; s32 z; } t;
    u16 *s = *(u16 **)(a + 0x20);
    u32 f = *(u32 *)(a + 4);
    u32 *ot = g_WorldOtTable[D_800B9A02];
    u16 x, y, z;
    u16 clut;
    u32 col;
    u8 *p;
    if (f & 0x04000000) {
        gte_SetRotMatrix(&w->wsm);
        gte_SetTransMatrix(&w->wsm);
        t.v.vx = *(u16 *)(a + 8) + *(u16 *)(a + 0x2E);
        t.v.vy = *(u16 *)(a + 0xA) + *(u16 *)(a + 0x30);
        t.v.vz = *(u16 *)(a + 0xC) + *(u16 *)(a + 0x32);
        gte_ldv0(&t.v);
        gte_rtps();
        gte_stsxy(&t.sxy);
        gte_stdp(&t.p);
        gte_stflg(&t.flag);
        gte_stszotz(&t.z);
        if (t.z <= 0) {
            return;
        }
        z = t.z + 1;
        x = *(u16 *)(a + 0xE) + t.sxy;
        y = t.sxy >> 16;
    } else {
        x = *(u16 *)(a + 0xE) + (*(u16 *)(a + 8) + *(u16 *)(a + 0x2E));
        y = *(u16 *)(a + 0xA) + *(u16 *)(a + 0x30);
        z = *(u16 *)(a + 0x2C);
    }
    clut = ((a[0x27] + 0x100) << 6) | ((a[0x27] < 0xE0 ? 0x160 : 0x100) >> 4);
    p = (u8 *)g_PrimNext;
    if (!(f & 0x400000)) {
        u16 ch;
        if (f & 0x40000000) {
            u32 hi = a[0x26] << 16;
            u32 cg = a[0x25] << 8;
            u32 code = 0x76000000;
            col = hi | (cg | code) | a[0x24];
        } else {
            u32 hi = a[0x26] << 16;
            u32 cg = a[0x25] << 8;
            u32 code = 0x74000000;
            col = hi | (cg | code) | a[0x24];
        }
        while ((ch = *s) != 0xFFFF) {
            switch (ch) {
            case 0x1850:
            case 0x1858:
                ((Spr8_23BF0 *)p)->x = x + 4;
                ((Spr8_23BF0 *)p)->y = y - 7;
                break;
            case 0x3870:
                x += 7;
                s++;
                continue;
            case 0x3871:
                x += 4;
                s++;
                continue;
            case 0x3872:
                x += 2;
                s++;
                continue;
            default:
                ((Spr8_23BF0 *)p)->x = x;
                x += 7;
                ((Spr8_23BF0 *)p)->y = y;
                break;
            }
            ((Spr8_23BF0 *)p)->tag = 0x03000000;
            ((Spr8_23BF0 *)p)->col = col;
            ((Spr8_23BF0 *)p)->uv = *s++;
            ((Spr8_23BF0 *)p)->clut = clut;
            ((Tag23570 *)p)->addr = ((Tag23570 *)&ot[z])->addr;
            ((Tag23570 *)&ot[z])->addr = (u32)p;
            p += sizeof(Spr8_23BF0);
        }
    } else {
        u16 ch;
        if (f & 0x40000000) {
            u32 hi = a[0x26] << 16;
            u32 cg = a[0x25] << 8;
            u32 code = 0x66000000;
            col = hi | (cg | code) | a[0x24];
        } else {
            u32 hi = a[0x26] << 16;
            u32 cg = a[0x25] << 8;
            u32 code = 0x64000000;
            col = hi | (cg | code) | a[0x24];
        }
        while ((ch = *s) != 0xFFFF) {
            if (ch == 0x3870) {
                x += 0x10;
                s++;
                continue;
            }
            ((Spr_23BF0 *)p)->x = x;
            x += 0x10;
            ((Spr_23BF0 *)p)->y = y;
            ((Spr_23BF0 *)p)->tag = 0x04000000;
            ((Spr_23BF0 *)p)->col = col;
            ((Spr_23BF0 *)p)->uv = *s++;
            ((Spr_23BF0 *)p)->clut = clut;
            ((Spr_23BF0 *)p)->wh = 0x00180010;
            ((Tag23570 *)p)->addr = ((Tag23570 *)&ot[z])->addr;
            ((Tag23570 *)&ot[z])->addr = (u32)p;
            p += sizeof(Spr_23BF0);
        }
    }
    setlen(p, 1);
    ((u32 *)p)[1] = ((f >> 23) & 0x60) | 0xE1000015;
    ((Tag23570 *)p)->addr = ((Tag23570 *)&ot[z])->addr;
    g_PrimNext = (s32)(p + 0x40);
    ((Tag23570 *)&ot[z])->addr = (u32)p;
}

extern u16 D_800636D8[];
extern u16 D_80063770[];
extern u16 D_80063818[];

s16 func_80024054(u8 *p, s16 *q) {
    s32 n;
    u8 c;
    u8 b;
    u16 v;
    s32 i;
    s16 j;

    n = 0;
    while ((c = *p++) != 0) {
        switch (c) {
        case 0x81:
            i = *p - 0x40;
            v = D_80063818[i];
            break;
        case 0x82:
            if (*p < 0x9F) {
                i = *p - 0x4F;
                v = D_800636D8[i];
            } else {
                i = *p - 0x9F;
                v = D_80063770[i];
            }
            break;
        case 0x83:
            b = *p;
            if (b < 0x80) {
                j = b - 0x40;
            } else {
                j = b - 0x41;
            }
            v = D_80063770[j] + 0x2000;
            break;
        default:
            goto end;
        }
        switch (v & 0xC000) {
        case 0x8000:
            *q++ = 0x1858;
            *q++ = v & 0x3FFF;
            n += 4;
            break;
        case 0xC000:
            *q++ = 0x1850;
            *q++ = v & 0x3FFF;
            n += 4;
            break;
        default:
            *q++ = v;
            break;
        }
        n -= 4;
        p++;
    }
end:
    *q = -1;
    return n;
}

extern s16 D_80063870[];

void func_800241C0(s32 v0, s16 *d, s32 n0) {
    s16 v = v0;
    s16 n = n0;
    s16 i;
    s16 q;
    s16 p;
    s32 f;
    s32 t;
    f = 0;
    for (i = n - 1; i >= 0; i--, d++) {
        if (i != 0) {
            *d = D_80063818[0];
        } else {
            *d = D_800636D8[0];
        }
        t = v;
        p = D_80063870[i];
        q = t / p;
        if (q != 0) {
            f++;
            *d = D_800636D8[q];
            v -= q * p;
        } else if (f != 0) {
            *d = D_800636D8[0];
        }
    }
    *d = -1;
}

extern u16 D_80063858[];
extern u16 D_8006386C;

void func_800242D0(s32 x, s16 *p, s32 flags) {
    s16 i;
    s16 q;
    s16 d;
    s32 f;
    s16 v;

    v = x;
    i = flags & 0xFFAF;
    f = flags & 0x80;
    if (f) {
        i = 4;
    }
    for (i--; i >= 0; i--) {
        q = v / (d = D_80063870[i]);
        if (q != 0) {
            *p = D_80063858[q];
            v -= q * d;
        } else {
            *p = D_80063858[0];
        }
        p++;
        if (f && i == 2) {
            *p++ = D_8006386C;
        }
    }
    *p = -1;
}

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

u8 *func_800249F0(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_80024BC0(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_80024DE8(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_80025000(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_8002528C(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_80025504(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_80025818(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_80025A30(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_80025CBC(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_80025EB8(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_80026128(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_800262D8(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_80026514(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot, s32 idx);
u8 *func_800268D0(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot, s32 idx);

void func_80024448(u8 *obj, u8 *cam, s32 shift) {
    s32 *h;
    u8 *p;
    s32 cnt;
    u8 *verts;
    u8 *norms;
    u32 w;
    s32 flag;
    u16 n;

    h = *(s32 **)(obj + 8);
    p = (u8 *)h[4];
    cnt = h[5];
    verts = (u8 *)h[0];
    norms = (u8 *)h[2];
    while (cnt != 0) {
        w = *(u32 *)p;
        flag = (w >> 16) & 4;
        switch ((w >> 24) & 0xFC) {
        case 0x20:
            if (flag) {
                g_PrimNext = (s32)func_80024DE8(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4));
                n = *(u16 *)p;
                cnt -= n;
                p += n * 24;
            } else {
                g_PrimNext = (s32)func_800249F0(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4));
                n = *(u16 *)p;
                cnt -= n;
                p += n * 16;
            }
            break;
        case 0x28:
            if (flag) {
                g_PrimNext = (s32)func_80025000(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4));
                n = *(u16 *)p;
                cnt -= n;
                p += n * 32;
            } else {
                g_PrimNext = (s32)func_80024BC0(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4));
                n = *(u16 *)p;
                cnt -= n;
                p += n * 20;
            }
            break;
        case 0x24:
            g_PrimNext = (s32)func_80025CBC(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4));
            n = *(u16 *)p;
            cnt -= n;
            p += n * 24;
            break;
        case 0x2C:
            g_PrimNext = (s32)func_80025EB8(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4));
            n = *(u16 *)p;
            cnt -= n;
            p += n * 32;
            break;
        case 0x30:
            if (flag) {
                g_PrimNext = (s32)func_80025818(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4));
                n = *(u16 *)p;
                cnt -= n;
                p += n * 28;
            } else if (D_80078D88 & 0x10000) {
                g_PrimNext = (s32)func_80026514(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4), 0);
                n = *(u16 *)p;
                cnt -= n;
                p += n * 20;
            } else if (D_80078D88 & 0x20000) {
                g_PrimNext = (s32)func_80026514(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4), 1);
                n = *(u16 *)p;
                cnt -= n;
                p += n * 20;
            } else {
                g_PrimNext = (s32)func_8002528C(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4));
                n = *(u16 *)p;
                cnt -= n;
                p += n * 20;
            }
            break;
        case 0x38:
            if (flag) {
                g_PrimNext = (s32)func_80025A30(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4));
                n = *(u16 *)p;
                cnt -= n;
                p += n * 36;
            } else if (D_80078D88 & 0x10000) {
                g_PrimNext = (s32)func_800268D0(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4), 0);
                n = *(u16 *)p;
                cnt -= n;
                p += n * 24;
            } else if (D_80078D88 & 0x20000) {
                g_PrimNext = (s32)func_800268D0(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4), 1);
                n = *(u16 *)p;
                cnt -= n;
                p += n * 24;
            } else {
                g_PrimNext = (s32)func_80025504(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4));
                n = *(u16 *)p;
                cnt -= n;
                p += n * 24;
            }
            break;
        case 0x34:
            g_PrimNext = (s32)func_80026128(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4));
            n = *(u16 *)p;
            cnt -= n;
            p += n * 28;
            break;
        case 0x3C:
            g_PrimNext = (s32)func_800262D8(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(cam + 4));
            n = *(u16 *)p;
            cnt -= n;
            p += n * 36;
            break;
        }
    }
}

u8 *func_800249F0(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0xA) * 8, verts + *(u16 *)(prim + 0xC) * 8, verts + *(u16 *)(prim + 0xE) * 8);
        gte_rtpt();
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_f3(pk);
                gte_avsz3();
                gte_stotz(&t.z);
                gte_ldrgb(prim + 4);
                gte_ldv0(norms + *(u16 *)(prim + 8) * 8);
                gte_nccs();
                gte_strgb(pk + 4);
                e = ot + (t.z >> shift);
                *(u32 *)pk = (*e & 0xFFFFFF) | 0x04000000;
                *e = (u32)pk & 0xFFFFFF;
                pk += 0x14;
                if (D_800A2B78 != 0 && (pk[-0xD] & 2)) {
                    e = ot + (t.z >> shift);
                    pk[3] = 1;
                    *(u32 *)(pk + 4) = ((D_800A2B78 & 3) << 5) | 0xE100000A;
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x01000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 8;
                }
            }
        }
        --n;
        prim += 0x10;
    } while (n != 0);
    }
    return pk;
}

u8 *func_80024BC0(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0xA) * 8, verts + *(u16 *)(prim + 0xC) * 8, verts + *(u16 *)(prim + 0xE) * 8);
        gte_rtpt();
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_f4(pk);
                gte_ldv0(verts + *(u16 *)(prim + 0x10) * 8);
                gte_rtps();
                gte_stflg(&t.flag);
                if (!(t.flag & ~0x1000)) {
                    gte_stsxy(pk + 0x14);
                    gte_avsz4();
                    gte_stotz(&t.z);
                    gte_ldrgb(prim + 4);
                    gte_ldv0(norms + *(u16 *)(prim + 8) * 8);
                    gte_nccs();
                    gte_strgb(pk + 4);
                    e = ot + (t.z >> shift);
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x05000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 0x18;
                    if (D_800A2B78 != 0 && (pk[-0x11] & 2)) {
                        e = ot + (t.z >> shift);
                        pk[3] = 1;
                        *(u32 *)(pk + 4) = ((D_800A2B78 & 3) << 5) | 0xE100000A;
                        *(u32 *)pk = (*e & 0xFFFFFF) | 0x01000000;
                        *e = (u32)pk & 0xFFFFFF;
                        pk += 8;
                    }
                }
            }
        }
        --n;
        prim += 0x14;
    } while (n != 0);
    }
    return pk;
}

u8 *func_80024DE8(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0x12) * 8, verts + *(u16 *)(prim + 0x14) * 8, verts + *(u16 *)(prim + 0x16) * 8);
        gte_rtpt();
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_g3(pk);
                gte_avsz3();
                gte_stotz(&t.z);
                gte_ldv0(norms + *(u16 *)(prim + 0x10) * 8);
                gte_ldrgb(prim + 4);
                gte_nccs();
                gte_strgb(pk + 4);
                gte_ldrgb(prim + 8);
                gte_nccs();
                gte_strgb(pk + 0xC);
                gte_ldrgb(prim + 0xC);
                gte_nccs();
                gte_strgb(pk + 0x14);
                pk[7] = (pk[7] & 2) | 0x30;
                e = ot + (t.z >> shift);
                *(u32 *)pk = (*e & 0xFFFFFF) | 0x06000000;
                *e = (u32)pk & 0xFFFFFF;
                pk += 0x1C;
                if (D_800A2B78 != 0 && (pk[-0x15] & 2)) {
                    e = ot + (t.z >> shift);
                    pk[3] = 1;
                    *(u32 *)(pk + 4) = ((D_800A2B78 & 3) << 5) | 0xE100000A;
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x01000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 8;
                }
            }
        }
        --n;
        prim += 0x18;
    } while (n != 0);
    }
    return pk;
}

u8 *func_80025000(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0x16) * 8, verts + *(u16 *)(prim + 0x18) * 8, verts + *(u16 *)(prim + 0x1A) * 8);
        gte_rtpt();
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_g4(pk);
                gte_ldv0(verts + *(u16 *)(prim + 0x1C) * 8);
                gte_rtps();
                gte_stflg(&t.flag);
                if (!(t.flag & ~0x1000)) {
                    gte_stsxy(pk + 0x20);
                    gte_avsz4();
                    gte_stotz(&t.z);
                    gte_ldv0(norms + *(u16 *)(prim + 0x14) * 8);
                    gte_ldrgb(prim + 4);
                    gte_nccs();
                    gte_strgb(pk + 4);
                    gte_ldrgb(prim + 8);
                    gte_nccs();
                    gte_strgb(pk + 0xC);
                    gte_ldrgb(prim + 0xC);
                    gte_nccs();
                    gte_strgb(pk + 0x14);
                    gte_ldrgb(prim + 0x10);
                    gte_nccs();
                    gte_strgb(pk + 0x1C);
                    pk[7] = (pk[7] & 2) | 0x38;
                    e = ot + (t.z >> shift);
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x08000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 0x24;
                    if (D_800A2B78 != 0 && (pk[-0x1D] & 2)) {
                        e = ot + (t.z >> shift);
                        pk[3] = 1;
                        *(u32 *)(pk + 4) = ((D_800A2B78 & 3) << 5) | 0xE100000A;
                        *(u32 *)pk = (*e & 0xFFFFFF) | 0x01000000;
                        *e = (u32)pk & 0xFFFFFF;
                        pk += 8;
                    }
                }
            }
        }
        --n;
        prim += 0x20;
    } while (n != 0);
    }
    return pk;
}

u8 *func_8002528C(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; s32 sz[3]; } t;
    u32 *e;
    u8 *pk;
    s32 m;
    pk = pkt;
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0xA) * 8, verts + *(u16 *)(prim + 0xE) * 8, verts + *(u16 *)(prim + 0x12) * 8);
        gte_rtpt();
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_g3(pk);
                if (D_80078D88 & 0x8000) {
                    gte_stsz3(&t.sz[0], &t.sz[1], &t.sz[2]);
                    if (t.sz[0] > t.sz[1]) {
                        m = t.sz[0];
                        if (m < t.sz[2]) {
                            m = t.sz[2];
                        }
                    } else {
                        m = t.sz[1];
                        if (m < t.sz[2]) {
                            m = t.sz[2];
                        }
                    }
                    t.z = m >> 2;
                } else {
                    gte_avsz3();
                    gte_stotz(&t.z);
                }
                gte_ldrgb(prim + 4);
                gte_ldv3(norms + *(u16 *)(prim + 8) * 8, norms + *(u16 *)(prim + 0xC) * 8, norms + *(u16 *)(prim + 0x10) * 8);
                gte_ncct();
                gte_strgb3_g3(pk);
                e = ot + (t.z >> shift);
                *(u32 *)pk = (*e & 0xFFFFFF) | 0x06000000;
                *e = (u32)pk & 0xFFFFFF;
                pk += 0x1C;
                if (D_800A2B78 != 0 && (pk[-0x15] & 2)) {
                    e = ot + (t.z >> shift);
                    pk[3] = 1;
                    *(u32 *)(pk + 4) = ((D_800A2B78 & 3) << 5) | 0xE100000A;
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x01000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 8;
                }
            }
        }
        --n;
        prim += 0x14;
    } while (n != 0);
    }
    return pk;
}

u8 *func_80025504(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; s32 sz[4]; } t;
    u32 *e;
    u8 *pk;
    s32 m;
    s32 m2;
    pk = pkt;
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0xA) * 8, verts + *(u16 *)(prim + 0xE) * 8, verts + *(u16 *)(prim + 0x12) * 8);
        gte_rtpt();
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_g4(pk);
                gte_ldv0(verts + *(u16 *)(prim + 0x16) * 8);
                gte_rtps();
                gte_stflg(&t.flag);
                if (!(t.flag & ~0x1000)) {
                    gte_stsxy(pk + 0x20);
                    if (D_80078D88 & 0x8000) {
                        gte_stsz4(&t.sz[0], &t.sz[1], &t.sz[2], &t.sz[3]);
                        m2 = t.sz[2];
                        if (m2 < t.sz[3]) {
                            m2 = t.sz[3];
                        }
                        m = t.sz[0];
                        if (m < t.sz[1]) {
                            m = t.sz[1];
                        }
                        if (m < m2) {
                            m = m2;
                        }
                        t.z = m >> 2;
                    } else {
                        gte_avsz4();
                        gte_stotz(&t.z);
                    }
                    gte_ldrgb(prim + 4);
                    gte_ldv3(norms + *(u16 *)(prim + 8) * 8, norms + *(u16 *)(prim + 0xC) * 8, norms + *(u16 *)(prim + 0x10) * 8);
                    gte_ncct();
                    gte_strgb3_g3(pk);
                    gte_ldv0(norms + *(u16 *)(prim + 0x14) * 8);
                    gte_nccs();
                    gte_strgb(pk + 0x1C);
                    e = ot + (t.z >> shift);
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x08000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 0x24;
                    if (D_800A2B78 != 0 && (pk[-0x1D] & 2)) {
                        e = ot + (t.z >> shift);
                        pk[3] = 1;
                        *(u32 *)(pk + 4) = ((D_800A2B78 & 3) << 5) | 0xE100000A;
                        *(u32 *)pk = (*e & 0xFFFFFF) | 0x01000000;
                        *e = (u32)pk & 0xFFFFFF;
                        pk += 8;
                    }
                }
            }
        }
        --n;
        prim += 0x18;
    } while (n != 0);
    }
    return pk;
}

u8 *func_80025818(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0x12) * 8, verts + *(u16 *)(prim + 0x16) * 8, verts + *(u16 *)(prim + 0x1A) * 8);
        gte_rtpt();
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_g3(pk);
                gte_avsz3();
                gte_stotz(&t.z);
                gte_ldv0(norms + *(u16 *)(prim + 0x10) * 8);
                gte_ldrgb(prim + 4);
                gte_nccs();
                gte_strgb(pk + 4);
                gte_ldrgb(prim + 8);
                gte_nccs();
                gte_strgb(pk + 0xC);
                gte_ldrgb(prim + 0xC);
                gte_nccs();
                gte_strgb(pk + 0x14);
                pk[7] = (pk[7] & 2) | 0x30;
                e = ot + (t.z >> shift);
                *(u32 *)pk = (*e & 0xFFFFFF) | 0x06000000;
                *e = (u32)pk & 0xFFFFFF;
                pk += 0x1C;
                if (D_800A2B78 != 0 && (pk[-0x15] & 2)) {
                    e = ot + (t.z >> shift);
                    pk[3] = 1;
                    *(u32 *)(pk + 4) = ((D_800A2B78 & 3) << 5) | 0xE100000A;
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x01000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 8;
                }
            }
        }
        --n;
        prim += 0x1C;
    } while (n != 0);
    }
    return pk;
}

u8 *func_80025A30(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0x16) * 8, verts + *(u16 *)(prim + 0x1A) * 8, verts + *(u16 *)(prim + 0x1E) * 8);
        gte_rtpt();
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_g4(pk);
                gte_ldv0(verts + *(u16 *)(prim + 0x22) * 8);
                gte_rtps();
                gte_stflg(&t.flag);
                if (!(t.flag & ~0x1000)) {
                    gte_stsxy(pk + 0x20);
                    gte_avsz4();
                    gte_stotz(&t.z);
                    gte_ldv0(norms + *(u16 *)(prim + 0x14) * 8);
                    gte_ldrgb(prim + 4);
                    gte_nccs();
                    gte_strgb(pk + 4);
                    gte_ldrgb(prim + 8);
                    gte_nccs();
                    gte_strgb(pk + 0xC);
                    gte_ldrgb(prim + 0xC);
                    gte_nccs();
                    gte_strgb(pk + 0x14);
                    gte_ldrgb(prim + 0x10);
                    gte_nccs();
                    gte_strgb(pk + 0x1C);
                    pk[7] = (pk[7] & 2) | 0x38;
                    e = ot + (t.z >> shift);
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x08000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 0x24;
                    if (D_800A2B78 != 0 && (pk[-0x1D] & 2)) {
                        e = ot + (t.z >> shift);
                        pk[3] = 1;
                        *(u32 *)(pk + 4) = ((D_800A2B78 & 3) << 5) | 0xE100000A;
                        *(u32 *)pk = (*e & 0xFFFFFF) | 0x01000000;
                        *e = (u32)pk & 0xFFFFFF;
                        pk += 8;
                    }
                }
            }
        }
        --n;
        prim += 0x24;
    } while (n != 0);
    }
    return pk;
}

u8 *func_80025CBC(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    gte_ldrgb(&D_8006387C);
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0x12) * 8, verts + *(u16 *)(prim + 0x14) * 8, verts + *(u16 *)(prim + 0x16) * 8);
        gte_rtpt();
        *(u32 *)(pk + 0xC) = *(u32 *)(prim + 4);
        *(u32 *)(pk + 0x14) = *(u32 *)(prim + 8);
        *(u32 *)(pk + 0x1C) = *(u32 *)(prim + 0xC);
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_ft3(pk);
                if (D_80078D88 & 0x8000) {
                    gte_stsz3(&t.sz0, &t.sz1, &t.sz2);
                    t.z = ((t.sz0 > t.sz1) ? ((t.sz0 > t.sz2) ? t.sz0 : t.sz2) : ((t.sz1 > t.sz2) ? t.sz1 : t.sz2)) >> 2;
                } else {
                    gte_avsz3();
                    gte_stotz(&t.z);
                }
                gte_ldv0(norms + *(u16 *)(prim + 0x10) * 8);
                gte_nccs();
                gte_strgb(pk + 4);
                e = ot + (t.z >> shift);
                *(u32 *)pk = (*e & 0xFFFFFF) | 0x07000000;
                *e = (u32)pk & 0xFFFFFF;
                pk += 0x20;
            }
        }
        --n;
        prim += 0x18;
    } while (n != 0);
    }
    return pk;
}

u8 *func_80025EB8(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    gte_ldrgb(&D_80063880);
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0x16) * 8, verts + *(u16 *)(prim + 0x18) * 8, verts + *(u16 *)(prim + 0x1A) * 8);
        gte_rtpt();
        *(u32 *)(pk + 0xC) = *(u32 *)(prim + 4);
        *(u32 *)(pk + 0x14) = *(u32 *)(prim + 8);
        *(u32 *)(pk + 0x1C) = *(u32 *)(prim + 0xC);
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_ft4(pk);
                gte_ldv0(verts + *(u16 *)(prim + 0x1C) * 8);
                gte_rtps();
                gte_stflg(&t.flag);
                if (!(t.flag & ~0x1000)) {
                    gte_stsxy(pk + 0x20);
                    *(u32 *)(pk + 0x24) = *(u32 *)(prim + 0x10);
                    if (D_80078D88 & 0x8000) {
                        gte_stsz4(&t.sz0, &t.sz1, &t.sz2, &t.sz3);
                        t.z = MAX(MAX(t.sz0, t.sz1), MAX(t.sz2, t.sz3)) >> 2;
                    } else {
                        gte_avsz4();
                        gte_stotz(&t.z);
                    }
                    gte_ldv0(norms + *(u16 *)(prim + 0x14) * 8);
                    gte_nccs();
                    gte_strgb(pk + 4);
                    e = ot + (t.z >> shift);
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x09000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 0x28;
                }
            }
        }
        --n;
        prim += 0x20;
    } while (n != 0);
    }
    return pk;
}

u8 *func_80026128(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    gte_ldrgb(&D_80063884);
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0x12) * 8, verts + *(u16 *)(prim + 0x16) * 8, verts + *(u16 *)(prim + 0x1A) * 8);
        gte_rtpt();
        *(u32 *)(pk + 0xC) = *(u32 *)(prim + 4);
        *(u32 *)(pk + 0x18) = *(u32 *)(prim + 8);
        *(u32 *)(pk + 0x24) = *(u32 *)(prim + 0xC);
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_gt3(pk);
                gte_avsz3();
                gte_stotz(&t.z);
                gte_ldv3(norms + *(u16 *)(prim + 0x10) * 8, norms + *(u16 *)(prim + 0x14) * 8, norms + *(u16 *)(prim + 0x18) * 8);
                gte_ncct();
                e = ot + (t.z >> shift);
                *(u32 *)pk = (*e & 0xFFFFFF) | 0x09000000;
                gte_strgb3(pk + 4, pk + 0x10, pk + 0x1C);
                *e = (u32)pk & 0xFFFFFF;
                pk += 0x28;
            }
        }
        --n;
        prim += 0x1C;
    } while (n != 0);
    }
    return pk;
}

u8 *func_800262D8(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    gte_ldrgb(&D_80063888);
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0x16) * 8, verts + *(u16 *)(prim + 0x1A) * 8, verts + *(u16 *)(prim + 0x1E) * 8);
        gte_rtpt();
        *(u32 *)(pk + 0xC) = *(u32 *)(prim + 4);
        *(u32 *)(pk + 0x18) = *(u32 *)(prim + 8);
        *(u32 *)(pk + 0x24) = *(u32 *)(prim + 0xC);
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_gt4(pk);
                gte_ldv0(verts + *(u16 *)(prim + 0x22) * 8);
                gte_rtps();
                *(u32 *)(pk + 0x30) = *(u32 *)(prim + 0x10);
                gte_stflg(&t.flag);
                if (!(t.flag & ~0x1000)) {
                    gte_stsxy(pk + 0x2C);
                    gte_avsz4();
                    gte_stotz(&t.z);
                    gte_ldv3(norms + *(u16 *)(prim + 0x14) * 8, norms + *(u16 *)(prim + 0x18) * 8, norms + *(u16 *)(prim + 0x1C) * 8);
                    gte_ncct();
                    e = ot + (t.z >> shift);
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x0C000000;
                    gte_strgb3(pk + 4, pk + 0x10, pk + 0x1C);
                    gte_ldv0(norms + *(u16 *)(prim + 0x20) * 8);
                    gte_nccs();
                    gte_strgb(pk + 0x28);
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 0x34;
                }
            }
        }
        --n;
        prim += 0x24;
    } while (n != 0);
    }
    return pk;
}

u8 *func_80026514(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot, s32 idx) {
    u8 c[4];
    s32 flag;
    s32 z;
    u32 *e;
    u8 *pk;
    u8 *w;
    u8 *tp;
    u8 b;
    u16 clut;
    u16 tpage;
    u8 du;
    u8 dv;
    u16 u0, v0, u1, v1, u2, v2;
    pk = pkt;
    w = (u8 *)&D_800AF630;
    tp = D_8006388C + idx * 8;
    b = D_8006389C[idx];
    clut = ((b + 0x100) << 6) | (b < 0xE0 ? 0x16 : 0x10);
    tpage = ((D_800A2B78 & 3) << 5) | ((*(u16 *)(tp + 2) >> 4) & 0x10) | ((*(u16 *)tp & 0x3FF) >> 6) |
            ((*(u16 *)(tp + 2) & 0x200) << 2);
    du = dv = w[0xA3AA];
    if (idx == 0) {
        *(u32 *)c = *(u32 *)(prim + 4);
        c[3] = 0x34;
        gte_ldrgb(c);
    } else {
        gte_ldrgb(&D_80063884);
    }
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0xA) * 8, verts + *(u16 *)(prim + 0xE) * 8, verts + *(u16 *)(prim + 0x12) * 8);
        gte_rtpt();
        gte_stflg(&flag);
        if (!(flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&z);
            if (z > 0) {
                gte_stsxy3_gt3(pk);
                gte_avsz3();
                gte_stotz(&z);
                gte_ldv3(norms + *(u16 *)(prim + 8) * 8, norms + *(u16 *)(prim + 0xC) * 8, norms + *(u16 *)(prim + 0x10) * 8);
                gte_ncct();
                gte_strgb3(pk + 4, pk + 0x10, pk + 0x1C);
                u0 = ((du + *(s16 *)(pk + 8) / 2) & 0x1F) + ((*tp << 2) & 0xFF);
                v0 = *(u16 *)(tp + 2) + ((dv + *(s16 *)(pk + 0xA) / 2) & 0x1F);
                u1 = ((du + *(s16 *)(pk + 0x14) / 2) & 0x1F) + ((*tp << 2) & 0xFF);
                v1 = *(u16 *)(tp + 2) + ((dv + *(s16 *)(pk + 0x16) / 2) & 0x1F);
                u2 = ((du + *(s16 *)(pk + 0x20) / 2) & 0x1F) + ((*tp << 2) & 0xFF);
                v2 = *(u16 *)(tp + 2) + ((dv + *(s16 *)(pk + 0x22) / 2) & 0x1F);
                if (D_800A2B78 != 0) {
                    pk[7] |= 2;
                }
                pk[0xC] = u0;
                pk[0xD] = v0;
                ((GT3 *)pk)->clut = clut;
                pk[0x18] = u1;
                pk[0x19] = v1;
                ((GT3 *)pk)->tpage = tpage;
                pk[0x24] = u2;
                pk[0x25] = v2;
                e = ot + (z >> shift);
                *(u32 *)pk = (*e & 0xFFFFFF) | 0x09000000;
                *e = (u32)pk & 0xFFFFFF;
                pk += 0x28;
            }
        }
        --n;
        prim += 0x14;
    } while (n != 0);
    }
    return pk;
}

u8 *func_800268D0(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot, s32 idx) {
    u8 c[4];
    s32 flag;
    s32 z;
    u32 *e;
    u8 *pk;
    u8 *w;
    u8 *tp;
    u8 b;
    u16 clut;
    u16 tpage;
    u8 du;
    u8 dv;
    u16 u0, v0, u1, v1, u2, v2, u3, v3;
    pk = pkt;
    w = (u8 *)&D_800AF630;
    tp = D_8006388C + idx * 8;
    b = D_8006389C[idx];
    clut = ((b + 0x100) << 6) | (b < 0xE0 ? 0x16 : 0x10);
    tpage = ((D_800A2B78 & 3) << 5) | ((*(u16 *)(tp + 2) >> 4) & 0x10) | ((*(u16 *)tp & 0x3FF) >> 6) |
            ((*(u16 *)(tp + 2) & 0x200) << 2);
    du = dv = w[0xA3AA];
    if (idx == 0) {
        *(u32 *)c = *(u32 *)(prim + 4);
        c[3] = 0x3C;
        gte_ldrgb(c);
    } else {
        gte_ldrgb(&D_80063888);
    }
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0xA) * 8, verts + *(u16 *)(prim + 0xE) * 8, verts + *(u16 *)(prim + 0x12) * 8);
        gte_rtpt();
        gte_stflg(&flag);
        if (!(flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&z);
            if (z > 0) {
                gte_stsxy3_gt4(pk);
                gte_ldv0(verts + *(u16 *)(prim + 0x16) * 8);
                gte_rtps();
                gte_stflg(&flag);
                if (!(flag & ~0x1000)) {
                    gte_stsxy(pk + 0x2C);
                    gte_avsz4();
                    gte_stotz(&z);
                    gte_ldv3(norms + *(u16 *)(prim + 8) * 8, norms + *(u16 *)(prim + 0xC) * 8, norms + *(u16 *)(prim + 0x10) * 8);
                    gte_ncct();
                    gte_strgb3(pk + 4, pk + 0x10, pk + 0x1C);
                    gte_ldv0(norms + *(u16 *)(prim + 0x14) * 8);
                    gte_nccs();
                    gte_strgb(pk + 0x28);
                    u0 = ((du + *(s16 *)(pk + 8) / 2) & 0x1F) + ((*tp << 2) & 0xFF);
                    v0 = *(u16 *)(tp + 2) + ((dv + *(s16 *)(pk + 0xA) / 2) & 0x1F);
                    u1 = ((du + *(s16 *)(pk + 0x14) / 2) & 0x1F) + ((*tp << 2) & 0xFF);
                    v1 = *(u16 *)(tp + 2) + ((dv + *(s16 *)(pk + 0x16) / 2) & 0x1F);
                    u2 = ((du + *(s16 *)(pk + 0x20) / 2) & 0x1F) + ((*tp << 2) & 0xFF);
                    v2 = *(u16 *)(tp + 2) + ((dv + *(s16 *)(pk + 0x22) / 2) & 0x1F);
                    u3 = ((du + *(s16 *)(pk + 0x2C) / 2) & 0x1F) + ((*tp << 2) & 0xFF);
                    v3 = *(u16 *)(tp + 2) + ((dv + *(s16 *)(pk + 0x2E) / 2) & 0x1F);
                    if (D_800A2B78 != 0) {
                        pk[7] |= 2;
                    }
                    pk[0xC] = u0;
                    pk[0xD] = v0;
                    ((GT4 *)pk)->clut = clut;
                    pk[0x18] = u1;
                    pk[0x19] = v1;
                    ((GT4 *)pk)->tpage = tpage;
                    pk[0x24] = u2;
                    pk[0x25] = v2;
                    pk[0x30] = u3;
                    pk[0x31] = v3;
                    e = ot + (z >> shift);
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x0C000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 0x34;
                }
            }
        }
        --n;
        prim += 0x18;
    } while (n != 0);
    }
    return pk;
}

u8 *func_80027058(u8 *p, u8 *verts, u32 *e, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_80027200(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_800273F4(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_800275BC(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_800277DC(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_800279AC(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);

void func_80026D64(u8 *o, u8 *a1, s32 shift) {
    u8 **h = *(u8 ***)(o + 8);
    u8 *p = h[4];
    s32 n = (s32)h[5];
    u8 *verts = h[0];
    u8 *norms = h[2];
    while (n != 0) {
        u32 w = *(u32 *)p;
        s32 f = (w >> 16) & 4;
        switch ((w >> 24) & 0xFD) {
        case 0x20:
            if (f) {
                g_PrimNext = (s32)func_800273F4(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(a1 + 4));
                n -= *(u16 *)p;
                p += *(u16 *)p * 24;
            } else {
                g_PrimNext = (s32)func_80027058(p, verts, (u32 *)norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(a1 + 4));
                n -= *(u16 *)p;
                p += *(u16 *)p * 16;
            }
            break;
        case 0x28:
            if (f) {
                g_PrimNext = (s32)func_800275BC(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(a1 + 4));
                n -= *(u16 *)p;
                p += *(u16 *)p * 32;
            } else {
                g_PrimNext = (s32)func_80027200(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(a1 + 4));
                n -= *(u16 *)p;
                p += *(u16 *)p * 20;
            }
            break;
        case 0x24:
            n -= *(u16 *)p;
            p += *(u16 *)p * 24;
            break;
        case 0x30:
            n -= *(u16 *)p;
            p += *(u16 *)p * 20;
            break;
        case 0x38:
            n -= *(u16 *)p;
            p += *(u16 *)p * 24;
            break;
        case 0x34:
            n -= *(u16 *)p;
            p += *(u16 *)p * 28;
            break;
        case 0x3C:
            n -= *(u16 *)p;
            p += *(u16 *)p * 36;
            break;
        case 0x25:
            g_PrimNext = (s32)func_800277DC(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(a1 + 4));
            n -= *(u16 *)p;
            p += *(u16 *)p * 28;
            break;
        case 0x2D:
            g_PrimNext = (s32)func_800279AC(p, verts, norms, (u8 *)g_PrimNext, *(u16 *)p, shift, *(u32 **)(a1 + 4));
            n -= *(u16 *)p;
            p += *(u16 *)p * 32;
            break;
        case 0x2C:
            n -= *(u16 *)p;
            p += *(u16 *)p * 32;
            break;
        }
    }
}

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

u8 *func_80027200(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0xA) * 8, verts + *(u16 *)(prim + 0xC) * 8, verts + *(u16 *)(prim + 0xE) * 8);
        gte_rtpt();
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_f4(pk);
                gte_ldv0(verts + *(u16 *)(prim + 0x10) * 8);
                gte_rtps();
                gte_stflg(&t.flag);
                if (!(t.flag & ~0x1000)) {
                    gte_stsxy(pk + 0x14);
                    gte_avsz4();
                    gte_stotz(&t.z);
                    *(u32 *)(pk + 4) = *(u32 *)(prim + 4);
                    e = ot + (t.z >> shift);
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x05000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 0x18;
                    if (D_800A2B78 != 0 && (pk[-0x11] & 2)) {
                        e = ot + (t.z >> shift);
                        pk[3] = 1;
                        *(u32 *)(pk + 4) = ((D_800A2B78 & 3) << 5) | 0xE100000A;
                        *(u32 *)pk = (*e & 0xFFFFFF) | 0x01000000;
                        *e = (u32)pk & 0xFFFFFF;
                        pk += 8;
                    }
                }
            }
        }
        --n;
        prim += 0x14;
    } while (n != 0);
    }
    return pk;
}

u8 *func_800273F4(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0x12) * 8, verts + *(u16 *)(prim + 0x14) * 8, verts + *(u16 *)(prim + 0x16) * 8);
        gte_rtpt();
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_g3(pk);
                gte_avsz3();
                gte_stotz(&t.z);
                *(u32 *)(pk + 4) = *(u32 *)(prim + 4);
                *(u32 *)(pk + 0xC) = *(u32 *)(prim + 8);
                *(u32 *)(pk + 0x14) = *(u32 *)(prim + 0xC);
                pk[7] = (pk[7] & 2) | 0x30;
                e = ot + (t.z >> shift);
                *(u32 *)pk = (*e & 0xFFFFFF) | 0x06000000;
                *e = (u32)pk & 0xFFFFFF;
                pk += 0x1C;
                if (D_800A2B78 != 0 && (pk[-0x15] & 2)) {
                    e = ot + (t.z >> shift);
                    pk[3] = 1;
                    *(u32 *)(pk + 4) = ((D_800A2B78 & 3) << 5) | 0xE100000A;
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x01000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 8;
                }
            }
        }
        --n;
        prim += 0x18;
    } while (n != 0);
    }
    return pk;
}

u8 *func_800275BC(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0x16) * 8, verts + *(u16 *)(prim + 0x18) * 8, verts + *(u16 *)(prim + 0x1A) * 8);
        gte_rtpt();
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_g4(pk);
                gte_ldv0(verts + *(u16 *)(prim + 0x1C) * 8);
                gte_rtps();
                gte_stflg(&t.flag);
                if (!(t.flag & ~0x1000)) {
                    gte_stsxy(pk + 0x20);
                    gte_avsz4();
                    gte_stotz(&t.z);
                    *(u32 *)(pk + 4) = *(u32 *)(prim + 4);
                    *(u32 *)(pk + 0xC) = *(u32 *)(prim + 8);
                    *(u32 *)(pk + 0x14) = *(u32 *)(prim + 0xC);
                    *(u32 *)(pk + 0x1C) = *(u32 *)(prim + 0x10);
                    pk[7] = (pk[7] & 2) | 0x38;
                    e = ot + (t.z >> shift);
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x08000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 0x24;
                    if (D_800A2B78 != 0 && (pk[-0x1D] & 2)) {
                        e = ot + (t.z >> shift);
                        pk[3] = 1;
                        *(u32 *)(pk + 4) = ((D_800A2B78 & 3) << 5) | 0xE100000A;
                        *(u32 *)pk = (*e & 0xFFFFFF) | 0x01000000;
                        *e = (u32)pk & 0xFFFFFF;
                        pk += 8;
                    }
                }
            }
        }
        --n;
        prim += 0x20;
    } while (n != 0);
    }
    return pk;
}

u8 *func_800277DC(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0x14) * 8, verts + *(u16 *)(prim + 0x16) * 8, verts + *(u16 *)(prim + 0x18) * 8);
        gte_rtpt();
        *(u32 *)(pk + 0xC) = *(u32 *)(prim + 4);
        *(u32 *)(pk + 0x14) = *(u32 *)(prim + 8);
        *(u32 *)(pk + 0x1C) = *(u32 *)(prim + 0xC);
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_ft3(pk);
                if (D_80078D88 & 0x8000) {
                    gte_stsz3(&t.sz0, &t.sz1, &t.sz2);
                    t.z = ((t.sz0 > t.sz1) ? ((t.sz0 > t.sz2) ? t.sz0 : t.sz2) : ((t.sz1 > t.sz2) ? t.sz1 : t.sz2)) >> 2;
                } else {
                    gte_avsz3();
                    gte_stotz(&t.z);
                }
                *(u32 *)(pk + 4) = (*(u32 *)(prim + 0x10) & 0xFFFFFF) | (prim[3] << 24);
                e = ot + (t.z >> shift);
                *(u32 *)pk = (*e & 0xFFFFFF) | 0x07000000;
                *e = (u32)pk & 0xFFFFFF;
                pk += 0x20;
            }
        }
        --n;
        prim += 0x1C;
    } while (n != 0);
    }
    return pk;
}

u8 *func_800279AC(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    struct { s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } t;
    u32 *e;
    u8 *pk;
    pk = pkt;
    if (n != 0) {
    do {
        gte_ldv3(verts + *(u16 *)(prim + 0x18) * 8, verts + *(u16 *)(prim + 0x1A) * 8, verts + *(u16 *)(prim + 0x1C) * 8);
        gte_rtpt();
        *(u32 *)(pk + 0xC) = *(u32 *)(prim + 4);
        *(u32 *)(pk + 0x14) = *(u32 *)(prim + 8);
        *(u32 *)(pk + 0x1C) = *(u32 *)(prim + 0xC);
        gte_stflg(&t.flag);
        if (!(t.flag & ~0x1000)) {
            gte_nclip();
            gte_stopz(&t.z);
            if (t.z > 0) {
                gte_stsxy3_ft4(pk);
                gte_ldv0(verts + *(u16 *)(prim + 0x1E) * 8);
                gte_rtps();
                gte_stflg(&t.flag);
                if (!(t.flag & ~0x1000)) {
                    gte_stsxy(pk + 0x20);
                    *(u32 *)(pk + 0x24) = *(u32 *)(prim + 0x10);
                    if (D_80078D88 & 0x8000) {
                        gte_stsz4(&t.sz0, &t.sz1, &t.sz2, &t.sz3);
                        t.z = MAX(MAX(t.sz0, t.sz1), MAX(t.sz2, t.sz3)) >> 2;
                    } else {
                        gte_avsz4();
                        gte_stotz(&t.z);
                    }
                    *(u32 *)(pk + 4) = (*(u32 *)(prim + 0x14) & 0xFFFFFF) | (prim[3] << 24);
                    e = ot + (t.z >> shift);
                    *(u32 *)pk = (*e & 0xFFFFFF) | 0x09000000;
                    *e = (u32)pk & 0xFFFFFF;
                    pk += 0x28;
                }
            }
        }
        --n;
        prim += 0x20;
    } while (n != 0);
    }
    return pk;
}

void func_80027BF0(void) {
    func_80027C10();
}

u8 *func_80027D20(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);
u8 *func_80027F4C(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot);

void func_80027C10(u8 *o, u8 *b, s32 shift) {
    u8 *m = *(u8 **)(o + 8);
    u32 *p = *(u32 **)(o + 0xC);
    u8 *verts = *(u8 **)(m + 0);
    u8 *norms = *(u8 **)(m + 8);
    u8 *prim = *(u8 **)(m + 0x10);
    u32 tag;
    s32 n;

    do {
        tag = p[0];
        n = p[1];
        p += 2;
        switch ((tag >> 24) & 0xFC) {
        case 0x30:
            func_80027D20(prim, verts, norms, (u8 *)p, n, shift, *(u32 **)(b + 4));
            prim += n * 20;
            break;
        case 0x38:
            func_80027F4C(prim, verts, norms, (u8 *)p, n, shift, *(u32 **)(b + 4));
            prim += n * 24;
            break;
        }
        p = (u32 *)((tag & 0xFFFFFF) | 0x80000000);
    } while (tag & 0xFFFFFF);
}

u8 *func_80027D20(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    s32 flag;
    s32 z;
    s32 sz0;
    s32 sz1;
    s32 sz2;
    s32 m;
    u8 *pk;

    pk = pkt + D_800C7C74 * 0x1C;
    for (; n != 0; n--, prim += 0x14, pk += 0x38) {
        gte_ldv3(verts + *(u16 *)(prim + 0xA) * 8, verts + *(u16 *)(prim + 0xE) * 8, verts + *(u16 *)(prim + 0x12) * 8);
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
        gte_stsxy3_g3(pk);
        gte_stsz3(&sz0, &sz1, &sz2);
        if (sz0 < sz1) {
            m = sz0;
            if (sz2 < m) {
                m = sz2;
            }
        } else {
            m = sz1;
            if (sz2 < m) {
                m = sz2;
            }
        }
        z = (m >> 2) - 1;
        if (z < 0) {
            z = 0;
        }
        gte_ldrgb(prim + 4);
        gte_ldv3(norms + *(u16 *)(prim + 8) * 8, norms + *(u16 *)(prim + 0xC) * 8, norms + *(u16 *)(prim + 0x10) * 8);
        gte_ncct();
        gte_strgb3_g3(pk);
        func_80028200((u8 *)ot, z, shift, (s32 *)pk, 0x06000000);
    }
    return pk;
}

u8 *func_80027F4C(u8 *prim, u8 *verts, u8 *norms, u8 *pkt, s32 n, s32 shift, u32 *ot) {
    s32 flag;
    s32 z;
    s32 sz0;
    s32 sz1;
    s32 sz2;
    s32 sz3;
    s32 m;
    s32 m2;
    u8 *pk;

    pk = pkt + D_800C7C74 * 0x24;
    for (; n != 0; n--, prim += 0x18, pk += 0x48) {
        gte_ldv3(verts + *(u16 *)(prim + 0xA) * 8, verts + *(u16 *)(prim + 0xE) * 8, verts + *(u16 *)(prim + 0x12) * 8);
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
        gte_stsxy3_g4(pk);
        gte_ldv0(verts + *(u16 *)(prim + 0x16) * 8);
        gte_rtps();
        gte_stflg(&flag);
        if (flag & ~0x1000) {
            continue;
        }
        gte_stsxy(pk + 0x20);
        gte_stsz4(&sz0, &sz1, &sz2, &sz3);
        m2 = sz2;
        if (sz3 < m2) {
            m2 = sz3;
        }
        m = sz0;
        if (sz1 < m) {
            m = sz1;
        }
        if (m2 < m) {
            m = m2;
        }
        z = (m >> 2) - 1;
        if (z < 0) {
            z = 0;
        }
        gte_ldrgb(prim + 4);
        gte_ldv3(norms + *(u16 *)(prim + 8) * 8, norms + *(u16 *)(prim + 0xC) * 8, norms + *(u16 *)(prim + 0x10) * 8);
        gte_ncct();
        gte_strgb3_g3(pk);
        gte_ldv0(norms + *(u16 *)(prim + 0x14) * 8);
        gte_nccs();
        gte_strgb(pk + 0x1C);
        func_80028200((u8 *)ot, z, shift, (s32 *)pk, 0x08000000);
    }
    return pk;
}

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

/* PORT NOTE (r254): the stage code calls this from its scratchpad stack and then builds func_80017758's colour records
   over the dead frame without setting their pad bytes, so this frame's saved ra becomes a POLY_G4 pad byte in game
   RAM. The PC runs it in its console frame with the console's ra (pc/frames.txt `ra`). */
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

extern u8 D_800AF67F;
extern u8 D_800AF6DB;
extern u8 D_800AF737;
extern RECT D_800AF77C;
extern RECT D_800AF790;
extern RECT D_800AF7A4;
extern s32 D_80075818;
extern s32 D_8007581C;
extern RECT D_80075820;
extern RECT D_80075828;
extern RECT D_80075830;

void func_80028694(void) {
    Work *w = &D_800AF630;

    if (D_800B9A15 == 0) {
        if ((s16)TestPadAll(1, 0, 2)) {
            D_800AF67F = D_800AF6DB = D_800AF737 = 1;
            D_80075818 = D_8007581C = 0;
            D_80075820.x = D_800AF77C.x;
            D_80075820.y = D_800AF77C.y;
            D_80075820.w = D_800AF77C.w;
            D_80075820.h = D_800AF77C.h;
            D_80075828.x = D_800AF790.x;
            D_80075828.y = D_800AF790.y;
            D_80075828.w = D_800AF790.w;
            D_80075828.h = D_800AF790.h;
            D_80075830.x = D_800AF7A4.x;
            D_80075830.y = D_800AF7A4.y;
            D_80075830.w = D_800AF7A4.w;
            D_80075830.h = D_800AF7A4.h;
        } else if ((GetPadPrevHeld(1) & 2) && !(GetPadHeldDir(1) & 2)) {
            D_800AF67F = D_800AF6DB = D_800AF737 = 0;
            D_800AF77C.x = D_80075820.x;
            D_800AF77C.y = D_80075820.y;
            D_800AF77C.w = D_80075820.w;
            D_800AF77C.h = D_80075820.h;
            D_800AF790.x = D_80075828.x;
            D_800AF790.y = D_80075828.y;
            D_800AF790.w = D_80075828.w;
            D_800AF790.h = D_80075828.h;
            D_800AF7A4.x = D_80075830.x;
            D_800AF7A4.y = D_80075830.y;
            D_800AF7A4.w = D_80075830.w;
            D_800AF7A4.h = D_80075830.h;
        }
        if ((s16)TestPadAll(1, 1, 2)) {
            switch (GetPadHeldDir(1) & 0x5000) {
            case 0x1000:
                D_8007581C -= w->vsyncMode * 2;
                break;
            case 0x4000:
                D_8007581C += w->vsyncMode * 2;
                break;
            }
            switch (GetPadHeldDir(1) & 0xA000) {
            case 0x8000:
                D_80075818 -= w->vsyncMode * 2;
                break;
            case 0x2000:
                D_80075818 += w->vsyncMode * 2;
                break;
            }
            if ((s16)TestPadAll(1, 1, 8)) {
                SetDefDispEnv(&w->disp[w->dispIdx], D_80075818, D_8007581C, 0x140, 0xF0);
            } else {
                SetDefDispEnv(&w->disp[w->dispIdx], D_80075818, D_8007581C, 0x280, 0x1E0);
            }
        }
    }
}

void func_80028A30(void) {
}

void func_80028A38(void) {
}

void func_80028A40(void) {
}

extern void GsTMDfastF3L();
extern void (*D_800A2BC0)();
extern void GsTMDfastF3NL();
extern void (*D_800A2BC8)();
extern void GsTMDfastNF3();
extern void (*D_800A2BD8)();
extern void GsTMDfastG3L();
extern void (*D_800A2BE0)();
extern void GsTMDfastG3NL();
extern void (*D_800A2BE8)();
extern void GsTMDfastNG3();
extern void (*D_800A2BF8)();
extern void GsTMDfastTF3L();
extern void (*D_800A2C00)();
extern void GsTMDfastTF3NL();
extern void (*D_800A2C08)();
extern void GsTMDfastTNF3();
extern void (*D_800A2C18)();
extern void GsTMDfastTG3L();
extern void (*D_800A2C20)();
extern void GsTMDfastTG3NL();
extern void (*D_800A2C28)();
extern void GsTMDfastTNG3();
extern void (*D_800A2C38)();
extern void GsTMDfastF4L();
extern void (*D_800A2C40)();
extern void GsTMDfastF4NL();
extern void (*D_800A2C48)();
extern void GsTMDfastNF4();
extern void (*D_800A2C58)();
extern void GsTMDfastG4L();
extern void (*D_800A2C60)();
extern void GsTMDfastG4NL();
extern void (*D_800A2C68)();
extern void GsTMDfastNG4();
extern void (*D_800A2C78)();
extern void GsTMDfastTF4L();
extern void (*D_800A2C80)();
extern void GsTMDfastTF4NL();
extern void (*D_800A2C88)();
extern void GsTMDfastTNF4();
extern void (*D_800A2C98)();
extern void GsTMDfastTG4L();
extern void (*D_800A2CA0)();
extern void GsTMDfastTG4NL();
extern void (*D_800A2CA8)();
extern void GsTMDfastTNG4();
extern void (*D_800A2CB8)();
extern void GsTMDfastF3GL();
extern void (*D_800A2CC0)();
extern void GsTMDfastF3GNL();
extern void (*D_800A2CC8)();
extern void GsTMDfastG3GL();
extern void (*D_800A2CCC)();
extern void GsTMDfastG3GNL();
extern void (*D_800A2CD4)();
extern void GsTMDfastF4GL();
extern void (*D_800A2CD8)();
extern void GsTMDfastF4GNL();
extern void (*D_800A2CE0)();
extern void GsTMDfastG4GL();
extern void (*D_800A2CE4)();
extern void GsTMDfastG4GNL();
extern void (*D_800A2CEC)();

void func_80028A48(void) {
    D_800A2BC0 = PS1_FN_ADDR(GsTMDfastF3L);
    D_800A2BC8 = PS1_FN_ADDR(GsTMDfastF3NL);
    D_800A2BD8 = PS1_FN_ADDR(GsTMDfastNF3);
    D_800A2BE0 = PS1_FN_ADDR(GsTMDfastG3L);
    D_800A2BE8 = PS1_FN_ADDR(GsTMDfastG3NL);
    D_800A2BF8 = PS1_FN_ADDR(GsTMDfastNG3);
    D_800A2C00 = PS1_FN_ADDR(GsTMDfastTF3L);
    D_800A2C08 = PS1_FN_ADDR(GsTMDfastTF3NL);
    D_800A2C18 = PS1_FN_ADDR(GsTMDfastTNF3);
    D_800A2C20 = PS1_FN_ADDR(GsTMDfastTG3L);
    D_800A2C28 = PS1_FN_ADDR(GsTMDfastTG3NL);
    D_800A2C38 = PS1_FN_ADDR(GsTMDfastTNG3);
    D_800A2C40 = PS1_FN_ADDR(GsTMDfastF4L);
    D_800A2C48 = PS1_FN_ADDR(GsTMDfastF4NL);
    D_800A2C58 = PS1_FN_ADDR(GsTMDfastNF4);
    D_800A2C60 = PS1_FN_ADDR(GsTMDfastG4L);
    D_800A2C68 = PS1_FN_ADDR(GsTMDfastG4NL);
    D_800A2C78 = PS1_FN_ADDR(GsTMDfastNG4);
    D_800A2C80 = PS1_FN_ADDR(GsTMDfastTF4L);
    D_800A2C88 = PS1_FN_ADDR(GsTMDfastTF4NL);
    D_800A2C98 = PS1_FN_ADDR(GsTMDfastTNF4);
    D_800A2CA0 = PS1_FN_ADDR(GsTMDfastTG4L);
    D_800A2CA8 = PS1_FN_ADDR(GsTMDfastTG4NL);
    D_800A2CB8 = PS1_FN_ADDR(GsTMDfastTNG4);
    D_800A2CC0 = PS1_FN_ADDR(GsTMDfastF3GL);
    D_800A2CC8 = PS1_FN_ADDR(GsTMDfastF3GNL);
    D_800A2CCC = PS1_FN_ADDR(GsTMDfastG3GL);
    D_800A2CD4 = PS1_FN_ADDR(GsTMDfastG3GNL);
    D_800A2CD8 = PS1_FN_ADDR(GsTMDfastF4GL);
    D_800A2CE0 = PS1_FN_ADDR(GsTMDfastF4GNL);
    D_800A2CE4 = PS1_FN_ADDR(GsTMDfastG4GL);
    D_800A2CEC = PS1_FN_ADDR(GsTMDfastG4GNL);
}

extern void GsPrstF3L();
extern void (*D_800A2CF0)();
extern void GsPrstF3NL();
extern void (*D_800A2CF8)();
extern void GsPrstG3L();
extern void (*D_800A2D10)();
extern void GsPrstG3NL();
extern void (*D_800A2D18)();
extern void GsPrstTF3L();
extern void (*D_800A2D30)();
extern void GsPrstTF3NL();
extern void (*D_800A2D38)();
extern void GsPrstTG3L();
extern void (*D_800A2D50)();
extern void GsPrstTG3NL();
extern void (*D_800A2D58)();
extern void GsPrstF4L();
extern void (*D_800A2D70)();
extern void GsPrstF4NL();
extern void (*D_800A2D78)();
extern void GsPrstG4L();
extern void (*D_800A2D90)();
extern void GsPrstG4NL();
extern void (*D_800A2D98)();
extern void GsPrstTF4L();
extern void (*D_800A2DB0)();
extern void GsPrstTF4NL();
extern void (*D_800A2DB8)();
extern void GsPrstTG4L();
extern void (*D_800A2DD0)();
extern void GsPrstTG4NL();
extern void (*D_800A2DD8)();

void func_80028C50(void) {
    D_800A2CF0 = PS1_FN_ADDR(GsPrstF3L);
    D_800A2CF8 = PS1_FN_ADDR(GsPrstF3NL);
    D_800A2D10 = PS1_FN_ADDR(GsPrstG3L);
    D_800A2D18 = PS1_FN_ADDR(GsPrstG3NL);
    D_800A2D30 = PS1_FN_ADDR(GsPrstTF3L);
    D_800A2D38 = PS1_FN_ADDR(GsPrstTF3NL);
    D_800A2D50 = PS1_FN_ADDR(GsPrstTG3L);
    D_800A2D58 = PS1_FN_ADDR(GsPrstTG3NL);
    D_800A2D70 = PS1_FN_ADDR(GsPrstF4L);
    D_800A2D78 = PS1_FN_ADDR(GsPrstF4NL);
    D_800A2D90 = PS1_FN_ADDR(GsPrstG4L);
    D_800A2D98 = PS1_FN_ADDR(GsPrstG4NL);
    D_800A2DB0 = PS1_FN_ADDR(GsPrstTF4L);
    D_800A2DB8 = PS1_FN_ADDR(GsPrstTF4NL);
    D_800A2DD0 = PS1_FN_ADDR(GsPrstTG4L);
    D_800A2DD8 = PS1_FN_ADDR(GsPrstTG4NL);
}

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

extern u16 D_80078E92;
extern s8 D_80078EAE;

void func_80029344(void) {
    u8 *s = (u8 *)&D_80078E78;
    u16 v = D_80078E92;
    s16 t;
    if ((u16)(v - 0x1A4) >= 0x2D0) {
        D_80078EAE = 0;
    } else {
        D_80078EAE = 1;
    }
    t = v;
    if (t >= 0x528) {
        s[0x37] = 4;
    } else if (t >= 0x474) {
        s[0x37] = 3;
    } else if (t >= 0x3C0) {
        s[0x37] = 2;
    } else if (t >= 0x1A4) {
        s[0x37] = 1;
    } else if (t >= 0x12C) {
        s[0x37] = 0;
    } else {
        s[0x37] = 4;
    }
    s[0x39] = (s16)v / 60;
    s[0x38] = (s16)v % 60;
}

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

typedef struct { u8 b[4]; } B4;

void func_80029774(s32 a) {
    u8 *p = D_80078F28 + a * 0x2DC;
    s32 i;

    *(Blk98 *)(p + 0x24) = D_80078E78;
    for (i = 0; i < 0x40; i++) {
        ((u16 *)(p + 0xBC))[i] = ((u16 *)D_800A6588)[i];
    }
    for (i = 0; i < 0x40; i++) {
        (p + i)[0x13C] = D_800AE648[i];
    }
    for (i = 0; i < 0x100; i++) {
        (p + i)[0x17C] = D_800BA1B8[i];
    }
    for (i = 0; i < 0x18; i++) {
        ((B4 *)(p + 0x27C))[i] = ((B4 *)D_800BA2B8)[i];
    }
    D_800A5E58[a] = 1;
}

void func_800298BC(Blk24 *dst) {
    func_8002992C(1);
    *dst = D_80079204;
}

void func_8002992C(s32 a) {
    u8 *p = D_80078F28 + a * 0x2DC;
    s32 i;
    D_80078E78 = *(Blk98 *)(p + 0x24);
    for (i = 0; i < 0x40; i++) {
        ((u16 *)D_800A6588)[i] = *(u16 *)(p + 0xBC + i * 2);
    }
    for (i = 0; i < 0x40; i++) {
        D_800AE648[i] = (p + i)[0x13C];
    }
    for (i = 0; i < 0x100; i++) {
        D_800BA1B8[i] = (p + i)[0x17C];
    }
    for (i = 0; i < 0x18; i++) {
        ((B4 *)D_800BA2B8)[i] = ((B4 *)(p + 0x27C))[i];
    }
}

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

extern u32 D_80078F04;
extern u32 D_80078F0C;
extern s32 func_8002A2D4();

void func_80029ED4(s32 n) {
    u32 t;
    s32 d;
    if (func_80029504() >= 10) {
        t = D_80078F04 + n;
        D_80078F04 = t;
        if (t >= 102) {
            D_80078F08++;
            D_80078F04 = t % 102;
            if ((u32)D_80078F08 > 9999999) {
                D_80078F08 = 9999999;
            }
            d = D_80078F08 - D_80078F0C;
            if (d >= 10) {
                D_80078F0C = D_80078F08;
                func_8002A2D4(d / 10);
            }
        }
    }
}

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

extern s32 func_8002A200();
extern void func_8002A234(void);

s32 func_8002A108(s32 a) {
    s32 s = func_8002AA00(func_8002A26C() + 1);
    if (func_8002A28C() != 0 && s >= 0) {
        D_80078EE8 += a;
        if (func_8002A200() != 0) {
            if (s != 0) {
                D_80078EE8 = func_8002A28C();
                return 0;
            }
            func_8002A234();
            return 1;
        }
    }
    return 0;
}

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

extern s32 func_8002A44C();
extern void func_8002A480(void);

s32 func_8002A354(s32 a) {
    s32 s = func_8002AA00(func_8002A4B8() + 1);
    if (func_8002A4D8() != 0 && s >= 0) {
        D_80078EF0 += a;
        if (func_8002A44C() != 0) {
            if (s != 0) {
                D_80078EF0 = func_8002A4D8();
                return 0;
            }
            func_8002A480();
            return 1;
        }
    }
    return 0;
}

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

extern u8 D_8010F46C[];

void func_8002AC00(s32 n) {
    u8 id = n + 0x62;
    u8 k = n;
    u16 *tbl = (u16 *)D_800A6588;
    s32 o;
    if (!(func_800291B4(id) & 0x80)) {
        o = k * 8;
        /* MATCH-TRICK: void call of the s32-defined func_800291A0 (no return value): v0 then has one set, so sched1 keeps the table address before the first call */
        ((void (*)())func_800291A0)(id, D_8010F46C[o + 2] | 0x80);
        tbl[k - 1] = *(u16 *)(D_8010F46C + o);
    }
}

extern u8 D_80078EBA;

void func_8002AC98(void) {
    s16 i;
    s32 t;
    s16 r;
    s32 j;
    s16 v; /* PORT NOTE: read before set, as the original (t == 2 with r == 0, or t > 3, keeps the previous value) */
    s16 lim;
    u16 *p = (u16 *)D_800A6588;
    if (D_80078EBA == 0) {
        for (i = 0; i < 0x40; i++) {
            t = func_800291B4(i + 0x63) & 0xF;
            if (t != 0) {
                r = rand() & 0x1F;
                switch (t) {
                case 1:
                    if (r != 0 && r != 11) {
                        v = (s16)(p[i] - 11) + r;
                    } else {
                        v = (s16)p[i] >> 1;
                    }
                    break;
                case 2:
                    if (r != 0) {
                        v = (s16)(p[i] - 11) + r;
                    }
                    break;
                case 3:
                    if (r != 0 && r != 11) {
                        v = (s16)(p[i] - 11) + r;
                    } else {
                        v = p[i] * 2;
                    }
                    break;
                }
                j = i + 1;
                lim = *(s16 *)(D_8010F46C + j * 8);
                if (v < lim) {
                    p[i] = lim;
                } else if (v > lim * 4) {
                    p[i] = lim << 2;
                } else {
                    p[i] = v;
                }
            }
        }
    }
}

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

typedef struct { u8 b[0x20]; } B20;
typedef struct { u8 b[0x29]; } B29;
typedef struct { u8 b[0x80]; } B80;
extern s32 MemCardExist(s32 chan);
extern s32 MemCardAccept(s32 chan);
extern s32 MemCardSync(s32 mode, s32 *cmds, s32 *rslt);
extern s32 MemCardOpen(s32 chan, char *file, s32 flag);
extern void MemCardClose(void);
extern s32 MemCardReadData(u32 *adrs, s32 ofs, s32 bytes);
extern s32 MemCardWriteData(u32 *adrs, s32 ofs, s32 bytes);
extern s32 MemCardWriteFile(s32 chan, char *file, u32 *adrs, s32 ofs, s32 bytes);
extern s32 MemCardCreateFile(s32 chan, char *file, s32 blocks);
extern s32 MemCardFormat(s32 chan);
extern s32 MemCardGetDirentry(s32 chan, char *name, u8 *dir, s32 *files, s32 ofs, s32 max);
extern u8 D_80063AEC[];
extern char D_80072DFC[];
extern u8 D_80072E10[];
extern char D_80072E3C[];
extern u8 D_80075840[];
extern u8 D_80075FC0[];
extern u8 D_80076044[];
extern s32 D_80076094[];
extern s32 D_800760B0;
extern s32 D_800760B4;
extern s32 D_800760B8;
extern u16 D_800760BC;
extern u16 D_800760C0;
extern u32 D_800760C4;
typedef struct { s32 status; s32 info; } CardSlot;
s32 func_8002C320(void);
s32 func_8002C3B0(s32 n, u8 *p);

u8 func_8002B0B4(s32 mode, s32 slot, u8 *out) {
    s32 cmd;
    u32 rslt;
    s32 n;
    u8 ret;

    ret = 0;
    switch (MemCardSync(1, &cmd, (s32 *)&rslt)) {
    case 0:
        break;
    case -1:
        switch (D_800760AC) {
        case 0:
            D_800760B8 = 0;
            if ((mode & 7) == 0) {
                D_800760AC++;
            } else if ((mode & 7) == 1) {
                D_800760AC = 7;
                D_800760B8 = mode & 0x18;
            } else if ((mode & 7) == 2) {
                D_800760AC = 0x1E;
                D_800760B8 = mode & 0x18;
            } else if ((mode & 7) == 3) {
                D_800760AC = 0x23;
                D_800760B8 = mode & 0x18;
            }
            break;
        case 1:
            D_800760B0 = 0;
            MemCardExist(0);
            D_800760AC++;
            break;
        case 2:
            D_800760AC++;
            break;
        case 3:
            if (D_8007609C == 7) {
                D_800760B0 = 0;
                D_800760AC++;
            } else {
                D_800760AC = 0;
            }
            break;
        case 4:
            rslt = MemCardOpen(D_800760B0, D_80072DFC, 1);
            if (rslt != 0) {
                D_800760AC = 0;
                break;
            }
            D_800760AC++;
        case 5:
            MemCardReadData((u32 *)&D_80075A40, 0x200, 0x280);
            D_800760AC++;
            break;
        case 6:
            switch (D_800760C4) {
            case 0:
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 8;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->info = func_8002C320();
                MemCardClose();
                D_800760AC = 0;
                break;
            case 1:
                MemCardClose();
                D_800760AC = 0;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 2;
                break;
            case 3:
                MemCardClose();
                D_800760AC = 1;
                break;
            case 2:
            default:
                MemCardClose();
                D_800760AC = 0;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 0;
                break;
            }
            break;
        case 7:
            if (D_8007609C != 0) {
                D_800760B0 = 0;
                D_800760B4 = 0;
                rslt = MemCardOpen(0, D_80072DFC, 2);
                switch (rslt) {
                case 0:
                    D_800760AC = 0xB;
                    break;
                case 1:
                    ret = 2;
                    D_800760AC = 0;
                    ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 2;
                    break;
                case 2:
                    ret = 2;
                    D_800760AC = 0;
                    ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 4;
                    break;
                case 4:
                    ret = 2;
                    D_800760AC = 0;
                    ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 3;
                    break;
                case 5:
                    MemCardClose();
                    D_800760AC++;
                    break;
                }
            } else {
                D_800760AC = 1;
            }
            break;
        case 8:
            rslt = MemCardCreateFile(D_800760B0, D_80072DFC, 1);
            switch (rslt) {
            case 0: {
                u8 *q;
                s32 k;
                D_80075840[0] = 'S';
                D_80075840[1] = 'C';
                D_80075840[2] = 0x13;
                D_80075840[3] = 1;
                *(B29 *)(D_80075840 + 4) = *(B29 *)D_80072E10;
                k = 0x1B;
                q = D_80075840 + 0x5F;
                do {
                    *q-- = 0;
                } while (--k >= 0);
                *(B20 *)(D_80075840 + 0x60) = *(B20 *)D_80063AEC;
                *(B80 *)(D_80075840 + 0x80) = *(B80 *)(D_80063AEC + 0x2C);
                *(B80 *)(D_80075840 + 0x100) = *(B80 *)(D_80063AEC + 0xEC);
                *(B80 *)(D_80075840 + 0x180) = *(B80 *)(D_80063AEC + 0x1AC);
                MemCardWriteFile(D_800760B0, D_80072DFC, (u32 *)D_80075840, 0, 0x200);
                func_80016714(&D_80075A40, 0x280);
                D_800760AC++;
                break;
            }
            case 1:
                MemCardClose();
                ret = 2;
                D_800760AC = 0;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 2;
                break;
            case 2:
                MemCardClose();
                ret = 2;
                D_800760AC = 0;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 4;
                break;
            case 4:
                MemCardClose();
                ret = 2;
                D_800760AC = 0;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 3;
                break;
            case 6:
                MemCardClose();
                D_800760AC = 7;
                break;
            case 7:
                MemCardClose();
                ret = 2;
                D_800760AC = 0;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 5;
                break;
            }
            break;
        case 9:
            MemCardWriteFile(D_800760B0, D_80072DFC, (u32 *)&D_80075A40, 0x200, 0x280);
            D_800760AC++;
            break;
        case 10:
            switch (D_800760C4) {
            case 0:
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 8;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->info = 0;
                MemCardClose();
                D_800760AC = 7;
                break;
            case 1:
                MemCardClose();
                ret = 2;
                D_800760AC = 0;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 2;
                break;
            case 2:
                MemCardClose();
                ret = 2;
                D_800760AC = 0;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 4;
                break;
            case 3:
                MemCardClose();
                ret = 2;
                D_800760AC = 0;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 0;
                break;
            }
            break;
        case 11: {
            u8 *p;
            func_80016714(D_80075840 + 0x200, 0x80);
            p = (u8 *)&D_80075A40 + ((slot + 1) << 7);
            D_80075A40 = D_80076040;
            func_80016714(p, 0x80);
            MemCardWriteData((u32 *)p, (slot + 5) << 7, 0x80);
            D_800760AC++;
            break;
        }
        case 13: {
            u8 *p;
            func_80016714(D_80075840 + 0x780, 0x80);
            D_80075FC0[0] = 0xFF;
            p = D_80075FC0 + 0x10;
            *(Blk98 *)p = *(Blk98 *)&D_80075CC0.w[9];
            D_800760BC = func_8002B064(p);
            D_800760C0 = func_8002B08C(D_80075840 + 0x480);
            *(u16 *)(D_80075FC0 + 4) = D_800760C0;
            *(u16 *)(D_80075FC0 + 2) = D_800760BC;
            MemCardWriteData((u32 *)&D_80075CC0, slot * 0x300 + 0x480, 0x300);
            D_800760AC++;
            break;
        }
        case 15:
            MemCardClose();
            D_800760C4 = MemCardOpen(D_800760B0, D_80072DFC, 1);
            D_800760AC++;
            break;
        case 19: {
            s32 sum;
            s32 end;
            u8 *p;
            MemCardClose();
            sum = 0;
            p = (u8 *)&D_80075CC0;
            end = (s32)p + 0x300;
            do {
                sum += *p++;
            } while ((s32)p < end);
            if ((sum & 0xFFFF) != D_800760C0) {
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 8;
                ret = 2;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->info = func_8002C320();
                D_800760AC = 0;
            } else {
                D_800760C4 = MemCardOpen(D_800760B0, D_80072DFC, 2);
                D_800760AC++;
            }
            break;
        }
        case 21:
            MemCardWriteData((u32 *)&D_80075A40, 0x200, 0x80);
            D_800760AC++;
            break;
        case 23:
            MemCardWriteData((u32 *)D_80075FC0, (slot + 5) << 7, 0x80);
            D_800760AC++;
            break;
        case 25:
            MemCardClose();
            D_800760C4 = MemCardOpen(D_800760B0, D_80072DFC, 1);
            D_800760AC++;
            break;
        case 27:
            MemCardReadData((u32 *)D_80075FC0, (slot + 5) << 7, 0x80);
            D_800760AC++;
            break;
        case 29: {
            s32 sum;
            s32 end;
            u8 *p;
            u8 *q;
            s32 i;
            MemCardClose();
            sum = 0;
            p = D_80075FC0 + 0x10;
            end = (s32)p + 0x70;
            do {
                sum += *p++;
            } while ((s32)p < end);
            ret = 2;
            if ((sum & 0xFFFF) == D_800760BC) {
                i = 0;
                q = D_80075AC0;
                q += slot << 7;
                for (; i < 0x80; i++) {
                    *q++ = D_80075FC0[i];
                }
                ret = 1;
            }
            ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 8;
            ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->info = func_8002C320();
            D_800760AC = 0;
            break;
        }
        case 16:
        case 20:
        case 26:
        case 31:
            switch (D_800760C4) {
            case 0:
                D_800760AC++;
                break;
            case 1:
                ret = 2;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 2;
                MemCardClose();
                D_800760AC = 0;
                break;
            case 2:
                ret = 2;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 4;
                MemCardClose();
                D_800760AC = 0;
                break;
            case 4:
                ret = 2;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 3;
                MemCardClose();
                D_800760AC = 0;
                break;
            case 5:
                ret = 2;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 6;
                MemCardClose();
                D_800760AC = 0;
                break;
            }
            break;
        case 12:
        case 14:
        case 22:
        case 24:
            switch (D_800760C4) {
            case 0:
                D_800760AC++;
                break;
            case 1:
                MemCardClose();
                ret = 2;
                D_800760AC = 0;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 2;
                break;
            case 2:
                MemCardClose();
                ret = 2;
                D_800760AC = 0;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 4;
                break;
            case 3:
                MemCardClose();
                ret = 2;
                D_800760AC = 0;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 0;
                break;
            }
            break;
        case 18:
        case 28:
        case 33:
            switch (D_800760C4) {
            case 0:
                D_800760AC++;
                break;
            case 1:
                ret = 2;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 2;
                MemCardClose();
                D_800760AC = 0;
                break;
            case 3:
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 0;
                ret = 2;
                MemCardClose();
                D_800760AC = 0;
                break;
            case 2:
                ret = 2;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 4;
                MemCardClose();
                D_800760AC = 0;
                break;
            }
            break;
        case 30:
            if (D_8007609C != 0) {
                D_800760B0 = 0;
                D_800760B4 = 0;
                D_800760C4 = MemCardOpen(0, D_80072DFC, 1);
                D_800760AC++;
            } else {
                D_800760AC = 1;
            }
            break;
        case 17:
        case 32:
            MemCardReadData((u32 *)&D_80075CC0, slot * 0x300 + 0x480, 0x300);
            D_800760AC++;
            break;
        case 34: {
            s32 sum;
            s32 end;
            u8 *p;
            MemCardClose();
            D_800760C0 = *(u16 *)(D_80075AC0 + (slot << 7) + 4);
            sum = 0;
            p = (u8 *)&D_80075CC0;
            end = (s32)p + 0x300;
            do {
                sum += *p++;
            } while ((s32)p < end);
            if ((sum & 0xFFFF) == D_800760C0) {
                ret = 1;
            } else {
                ret = 2;
            }
            D_800760AC = 0;
            break;
        }
        case 35:
            if (D_8007609C == 0) {
                D_800760AC = 1;
            } else {
                D_800760B0 = 0;
                D_800760B4 = 0;
                rslt = MemCardFormat(0);
                switch (rslt) {
                case 0:
                    ret = 1;
                    D_800760AC = 0;
                    ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 6;
                    break;
                case 1:
                    ret = 2;
                    D_800760AC = 0;
                    ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 2;
                    break;
                case 3:
                default:
                    ret = 2;
                    D_800760AC = 0;
                    ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 0;
                    break;
                }
            }
            break;
        }
        break;
    case 1:
        switch (cmd) {
        case 1:
            switch (rslt) {
            case 0:
                if ((u32)((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status < 3) {
                    MemCardAccept(D_800760B0);
                    ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 1;
                    ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->info = 0;
                }
                break;
            case 3:
                MemCardAccept(D_800760B0);
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 1;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->info = 0;
                break;
            default:
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 2;
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->info = 0;
                break;
            }
            break;
        case 2:
            switch (rslt) {
            case 0:
            case 3:
                rslt = MemCardGetDirentry(D_800760B0, D_80072DFC, D_80076044 + (D_800760B0 >> 4) * 0x28,
                                          &D_80076094[D_800760B0 >> 4], 0, 1);
                switch (rslt) {
                case 0:
                    if (D_80076094[D_800760B0 >> 4] != 0) {
                        ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 7;
                    } else {
                        ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 6;
                        switch (MemCardGetDirentry(D_800760B0, D_80072E3C, D_80079A70, &n, 0, 15)) {
                        case 0:
                            if (func_8002C3B0(n, D_80079A70) >= 15) {
                                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 5;
                            }
                            break;
                        case 1:
                            ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 2;
                            break;
                        default:
                            ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 4;
                            break;
                        }
                    }
                    break;
                case 1:
                    ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 2;
                    break;
                default:
                    ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 4;
                    break;
                }
                break;
            case 4:
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 3;
                break;
            case 1:
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 1;
                break;
            default:
                ((CardSlot *)((u8 *)&D_8007609C + ((D_800760B0 >> 4) << 3)))->status = 4;
                break;
            }
            break;
        case 3:
            break;
        case 4:
        case 5:
        case 6:
            D_800760C4 = rslt;
            break;
        }
        break;
    }
    out[0] = 0;
    out[1] = D_8007609C;
    out[4] = D_800760A0;
    out[5] = (u32)D_800760A0 >> 8;
    out[6] = (u32)D_800760A0 >> 16;
    out[7] = (u32)D_800760A0 >> 24;
    return ret;
}

s32 func_8002C320(void) {
    s32 result = 0;
    s32 k;
    s32 j;
    for (k = 0; k < 4; k++) {
        if (D_80075AC0[k * 0x80] != 0) {
            s32 stored = *(u16 *)(D_80075AC0 + k * 0x80 + 2);
            u8 *data = D_80075AC0 + k * 0x80 + 0x10;
            s32 sum = 0;
            for (j = 0; j < 0x70; j++) {
                sum += data[j];
            }
            if (stored == (u16)sum) {
                result |= 1 << (k * 8);
            } else {
                result |= 2 << (k * 8);
            }
        }
    }
    return result;
}

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
