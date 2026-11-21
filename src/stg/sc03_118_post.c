/* sc03_118: 0x801838A4-: the -O2 code after the -O0 run (r209, tools/stage_units.py).
 * The declarations and prototypes down to the first function are those of the units before this one. */
#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))
typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc03_118_8018D354[])();
void func_sc03_118_8017BEE4(u8 *arg0);
extern void (*D_sc03_118_8018D360[])();
void func_sc03_118_8017BFC8(u8 *arg0);
extern void (*D_sc03_118_8018D420[])();
extern void func_sc03_118_8017C154();
extern void (*D_sc03_118_8018D460[])();
extern void (*D_sc03_118_8018D480[])();
extern void (*D_sc03_118_8018D490[])();
extern void (*D_sc03_118_8018D49C[])();
extern void (*D_sc03_118_8018D620[])();
void func_sc03_118_8017DB00(u8 *arg0);
extern void (*D_sc03_118_8018D920[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern s32 IsEventDone();
extern void SpawnEffect();
extern u8 D_sc03_118_8018D6D4;
extern s32 MoveCollide();
extern void UpdateModelZYX();
extern void SetLocalVelocity();
extern void EndEvent();
extern void FreeActor();
extern u8 D_sc03_118_8018D910[];
extern void SetFlag();
extern s32 SpawnActorArg();
extern void StartEvent();
extern u8 g_Status;
extern u8 D_sc03_118_8018D8F0;
extern s32 IsOnScreen();
extern void FreeShadow();
extern void (*D_sc03_118_8018D95C[])();
extern void FreeEffect();
extern void (*D_sc03_118_8018D964[])();
extern u8 D_sc03_118_8018D950;
extern s32 func_800D222C();
extern void func_8001CF30();
extern void (*D_sc03_118_8018DA1C[])();
extern u8 D_sc03_118_8018D96C;
extern void SetPlayerMotion();
extern void BumpSub2Copy();
extern void PlaySe();
extern void SpawnObj68();
extern s32 FindObj68ByKind();
extern void SetObjByte1C7();
extern s32 GetTechnique();
extern u8 D_sc03_118_8018DA14;
extern void StartPlayerActionScript();
extern s32 g_PlayerActionScript;
extern s16 D_80126B0C;
extern void (*D_sc03_118_8018DA64[])();
extern void UpdateObj68Matrix();
extern s16 D_sc03_118_8018DA5C;
extern s16 D_sc03_118_8018DA5E;
extern s16 D_sc03_118_8018DA60;
extern u8 D_sc03_118_801D02DC;
extern s32 AllocModel6To16();
extern void InitModel();
extern void ObjLocalToWorld16();
extern void SetObjPush();
extern void NextObjState();
extern u8 D_sc03_118_8018DA2C;
extern u8 D_sc03_118_8018DA74;
extern u8 D_sc03_118_801D0934;
extern void AddObj68PushSetVel();
extern void MoveObj68();
extern void StartCameraShake();
extern void func_8001C810();
extern void SpawnObj68On();
extern void FreeObj68();
extern void (*D_sc03_118_8018DAA8[])();
extern void func_sc03_118_8017FB40();
extern u8 D_800DF2E0;
extern u8 D_sc03_118_8018DA88;
extern void SetObjTimer();
extern s32 TickObjTimer();
extern void (*D_sc03_118_8018DD98[])();
void func_sc03_118_801819C4(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc03_118_8018DDA0[])();
void func_sc03_118_801819EC(void);
extern void (*D_sc03_118_8018DDA8[])();
void func_sc03_118_80181A14(void);
extern void func_800D1EBC();
extern void (*D_sc03_118_8018DDB4[])();
void func_sc03_118_80181A3C(void);
extern u8 D_sc03_118_8018DDC0;
extern u8 D_sc03_118_8018DDCC;
extern u8 D_sc03_118_8018DDD0;
extern u8 D_sc03_118_8018DDE4;
extern void func_sc03_118_80181B08();
extern void (*D_sc03_118_8018DDF0[])();
extern void (*D_sc03_118_8018DE08[])();
extern s32 func_sc03_118_801831D0();
extern void (*D_sc03_118_8018E0E4[])();
extern s32 func_sc03_118_8017BEBC();
extern s32 func_sc03_118_8017BFA0();
extern void func_sc03_118_80182904();
extern void func_sc03_118_8018291C();
extern void (*D_sc03_118_8018E208[])();
extern void (*D_sc03_118_8018E858[])();
extern void (*D_sc03_118_8018E8A0[])();
extern s32 AllocActorModel();
extern void RejectSpawn();
extern u8 D_sc03_118_8018E890;
extern u8 D_sc03_118_8018E880;
extern u8 D_sc03_118_8018E870;
extern u8 D_sc03_118_8018E860;
extern s32 GetProgress();
extern s32 func_sc03_118_80183B3C();
extern void (*D_sc03_118_8018EC08[])();
extern void InitSpriteKind2();
extern s32 AllocActorSprite();
extern s32 func_sc03_118_80184214();
extern void func_sc03_118_80184430();
extern void (*D_sc03_118_8018EC14[])();
extern void (*D_sc03_118_8018EF38[])();
extern void (*D_sc03_118_8018EF74[])();
extern void (*D_sc03_118_801C5928[])();
extern void (*D_sc03_118_801C705C[])();
extern void (*D_sc03_118_801D1070[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc03_118_80189C94;
extern s32 GetFlag();
extern u8 D_sc03_118_801D0D60;
extern s32 * func_sc03_118_80189824();
extern s32 D_sc03_118_801D0DC8[];
extern void RunScript();
extern s32 D_sc03_118_801D0F94;
extern s32 D_sc03_118_801D0F98;
extern s32 D_sc03_118_801D0FAC;
extern s32 D_sc03_118_801D0FC0;
extern s32 D_sc03_118_801D102C;
extern s32 D_sc03_118_801D0F10[];
extern s32 D_sc03_118_801D0E8C[];
extern void GiveItem();
extern s32 UpdateScript();
extern void SetProgress();
extern void UploadFlagImages();
extern s32 func_sc03_118_801895CC();
extern void AddMoney();
extern s32 func_80174764();
extern void (*D_sc03_118_801D1098[])();
extern u8 D_sc03_118_801D0D94;
extern u8 D_sc03_118_801D1538;
extern u8 D_sc03_118_801D1758;
extern void PlaySoundId();
extern u8 D_sc03_118_801D1548;
extern u8 D_sc03_118_801D1650;
extern void ClearTimeChime();
extern void func_800D0C48();
extern void func_800D1E28();
extern s32 func_sc03_118_8017BF58();
extern s32 func_sc03_118_80183228();
extern s32 func_sc03_118_8017C03C();
extern void func_sc03_118_8017DB74();
extern s16 D_80126B3C;
extern s32 GetMessageAnswer();
extern void CloseMessage();
extern void func_sc03_118_8017D9C8();
extern s8 D_800B9A11;
extern u8 D_sc03_118_8018D55C;
extern void StopSeqPlayer();
extern void EnableBgLayers();
extern s32 SetState();
extern u8 D_sc03_118_8018DE60;
extern s32 func_sc03_118_80182704();
extern s32 func_sc03_118_8018244C();
extern void ResumeClockTint();
extern void (*D_sc03_118_8018E134[])();
extern void func_sc03_118_801829E4();
extern u8 D_sc03_118_801D42F8;
extern void StepSpriteAnim();
extern s32 TickTimer();
extern void MoveObject();
extern s32 func_sc03_118_80182380();
extern void func_sc03_118_80182714();
extern void func_sc03_118_80185FD4();
extern s32 func_sc03_118_801827A0();
extern void func_sc03_118_801824A0();
extern s16 D_801270C0;
extern void (*D_sc03_118_8018EF90[])();
extern u8 D_sc03_118_801D4474;
extern u16 D_sc03_118_801D446C;
extern u16 D_sc03_118_801D446E;
extern s16 D_sc03_118_801D4470;
extern s16 D_sc03_118_801D4472;
extern s32 func_sc03_118_801857E0();
extern void func_sc03_118_8018570C();
extern void PosToSVec();
extern s32 func_sc03_118_80185C54();
extern s32 func_sc03_118_80185F98();
extern void func_sc03_118_80185E7C();
extern s16 D_sc03_118_801D436C;
extern s32 D_80126CF0;
extern s32 D_8012750C;
extern s32 OpenMessage();
extern u8 g_Camera;
extern s32 g_CameraProj;
extern s32 g_CameraProjTarget;
extern s32 g_CameraDistTarget;
extern s16 g_CameraAngleTarget;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 g_CameraOfsTarget;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void SetCameraUpdate();
extern void SnapCamera();
extern u16 D_800B99D8;
extern s32 SpawnPropFrom();
extern u8 D_sc03_118_8018DDF8;
extern u8 D_sc03_118_801C5E24;
extern s32 SpawnActor();
extern void NextState();
extern s32 func_sc03_118_801823F8();
extern s32 func_sc03_118_80182550();
extern s16 D_sc03_118_801D47D8;
extern s8 D_sc03_118_801D4304;
extern s8 D_sc03_118_801D4305;
extern s8 D_sc03_118_801D4306;
extern u8 D_sc03_118_8018E160;
extern u8 D_sc03_118_8018E1C0;
extern void func_8001CA1C();
extern u8 D_sc03_118_8018E210;
extern u8 D_sc03_118_8018E850;
extern void func_80143994();
extern u16 D_800B99DA;
extern u8 D_sc03_118_801C6DF8;
extern u8 D_sc03_118_8018EBA8[];
extern s32 QueueImage();
extern void func_sc03_118_80181A64();
extern void BlendCameraThen();
extern s32 RequestBgmPack();
extern u8 D_sc03_118_801BE4D0;
extern u8 D_sc03_118_801C584C;
extern u8 D_sc03_118_801BE558;
extern u8 D_sc03_118_801C55CC;
extern u8 D_sc03_118_801C573C;
extern u8 D_sc03_118_801C57C4;
extern u8 D_sc03_118_801BE5E0;
extern u8 D_sc03_118_801BE668;
extern u8 D_sc03_118_801BE6B0;
extern s32 D_sc03_118_8018EF44[];
extern s32 D_sc03_118_8018EF4C[];
extern void (*D_sc03_118_801C700C[])();
extern void SyncModelPos();
extern void PlaySoundAtActor();
extern s32 DistSqToTarget();
extern u8 g_PlayerPosX;
extern void HeadingPitchTo();
extern void func_sc03_118_80187968();
extern u8 D_sc03_118_801C6FCC;
extern u8 D_sc03_118_801C6FD4;
extern s32 MoveCollidePassable();
extern s32 ActorSegmentDamagesPlayer();
extern void func_sc03_118_80187A88();
extern s32 GroundDistSqToPlayer();
extern void func_sc03_118_80187674();
extern u8 D_sc03_118_801D45D8;
extern void func_8001CD50();
extern void SetShapeCircle();
extern void FreeProp();
extern u8 D_sc03_118_801D0990;
extern s32 func_sc03_118_801887DC();
extern u16 D_sc03_118_801D099C;
extern u16 D_sc03_118_801D099E;
extern u16 D_sc03_118_801D09A0;
extern void SetVar16();
extern void SetReactionStep();
extern u16 g_PlayerX;
extern u16 D_80126B66;
extern void StopMotion();
extern u8 D_sc03_118_801D4598;
extern s32 SpawnProp();
extern void func_sc03_118_80185D48();
extern s32 D_sc03_118_8018D40C[];
extern void SnapToGround();
extern u8 D_sc03_118_8018D4B8;
extern void StartSeqPlayer();
extern void DisableBgLayers();
extern u8 D_sc03_118_801D4268[];
extern u8 D_sc03_118_801D4269;
extern u8 D_sc03_118_801D426A;
extern s8 D_sc03_118_801D426C;
extern s8 D_sc03_118_801D426D;
extern s8 D_sc03_118_801D426E;
extern s32 AllocSprite16To3E();
extern void func_8001CD04();
extern u8 D_sc03_118_8018DF4C;
extern s32 func_sc03_118_8018295C();
extern s32 func_sc03_118_80182988();
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
extern u8 *g_PrimNext;
extern u16 D_800B9A02[];
extern u32 g_WorldOtTable[2][0x1000];
typedef struct { s16 vx, vy, vz, pad; } SV;
typedef struct { u16 v[6]; } U12;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern PtSys D_sc03_118_801D4360;
extern s16 D_sc03_118_801D4366;
extern void func_sc03_118_801860E8();
extern s32 D_sc03_118_801D42E0;
extern s32 D_sc03_118_801D42EC;
extern s32 D_sc03_118_801D42F4;
extern void func_sc03_118_8017E948();
extern void func_sc03_118_8017E8D4();
extern s32 TurnStepToward();
extern s32 TurnStepToTarget();
extern u8 D_sc03_118_8018D64C;
extern s32 MoveOnGround();
typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern WMtx GsIDMATRIX;
extern OtRef g_WorldOtOrg[];
extern Ot14 g_WorldOt[];
extern s32 AddDrawModeAbr();
extern u8 D_sc03_118_801D4368;
extern u8 D_sc03_118_801D4369;
extern u8 D_sc03_118_801D436A;
extern s32 CollidePath();
extern u8 D_sc03_118_801C6FA8;
extern void StopWithGravity();
extern void SetLocalVelocityXZ();
extern u8 D_sc03_118_801C6FC4;
extern s32 TargetInFront();
extern s32 MoveCollideAt();
extern u8 D_sc03_118_8018D454;
extern u8 D_sc03_118_8018D478;
extern s32 D_sc03_118_8018D3BC[];
extern s32 GetCameraPitch();
extern s32 GetCameraHeading();
extern void ProjectPointOtz();
extern void SVecToPos();
extern void InitSpriteKind1();
extern s32 D_sc03_118_8018D3F8[];
extern void func_sc03_118_8017D318();
extern SV D_sc03_118_8018D434[];
extern void func_sc03_118_8017C290();
extern CV4 D_sc03_118_801D4228;
extern u8 D_sc03_118_801D422C;
extern u8 D_sc03_118_801D422D;
extern u8 D_sc03_118_801D422E;
extern CV4 D_sc03_118_8018D380[];
extern SV4 D_sc03_118_801D42A8[4];
extern s16 D_sc03_118_801D42AC;
extern CV4 D_sc03_118_801D42C8;
extern CV4 D_sc03_118_801D42CC;
extern CV4 D_sc03_118_801D42D0;
extern CV4 D_sc03_118_801D42D4;
extern s32 D_sc03_118_801D42D8;
extern CV4 D_sc03_118_8018D394[];
extern CV4 D_sc03_118_8018D3A8[];
extern void SetIdentityRot();
extern void DrawPrimG4Screen();
extern UV4 D_sc03_118_801C5894[];
extern s32 D_sc03_118_801C591C[];
extern u8 D_sc03_118_8018EBC8;
extern u8 D_sc03_118_8018EBD8;
extern u8 D_sc03_118_8018EBE8;
extern u8 D_sc03_118_8018EBF8;
extern s16 D_sc03_118_801D4348;
extern s16 D_sc03_118_801D434A;
extern s16 D_sc03_118_801D434C;
extern s16 D_sc03_118_801D4350;
extern s16 D_sc03_118_801D4352;
extern s16 D_sc03_118_801D4354;
extern s32 DistSqToPlayer();
extern void TakePlayerControlNoStop();
extern void ArmCrest();
extern s32 GetPlayerAction();
extern void func_80175454();
extern s32 GetPlayerByte1C7();
extern void func_sc03_118_801842DC();
extern s32 func_sc03_118_801841C0();
extern s32 func_sc03_118_80183830();
extern void EndPlayerAction();
extern void func_8002959C();
extern void *g_ActiveCamera;
extern void *D_sc03_118_801D4358;
extern void *D_sc03_118_801D435C;
typedef struct { U12 e[9]; } U12x9;
typedef struct { s32 vx, vy, vz, pad; } V4F20;
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern CV4 D_sc03_118_8018D36C[];
extern u16 g_Effects;
extern u16 D_sc03_118_8018D3D0[][2];
extern s32 HeadingToTarget();
extern s32 D_sc03_118_8018D8B4;
extern void RestorePrevPos();
extern void func_sc03_118_8017EA24();
extern s32 DistSq();
extern void StartEventKeepPlayer();
extern s32 MoveCollidePassableAt();
extern s32 TraceMap();
typedef struct { u8 r, g, b, cd; } CV;
typedef struct { u32 addr : 24; u32 len : 8; } PTAG;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT3;
typedef struct { PTAG tag; u8 r0, g0, b0, code; s16 x0, y0, x1, y1, x2, y2, x3, y3; } PF4;
typedef union { s32 w; XY s; } UXY;
typedef void (*VoidFn)();
typedef struct { u8 pad[0x18]; WMtx wsm; } WorkHead;
typedef struct { s32 v[4]; } V16;
typedef struct { V16 a, b, c; } Blk30;
typedef struct { u8 b[0x34]; } R34;
extern s32 D_800AF648[];
extern s32 SpawnShadow();
extern u8 D_sc03_118_8018D7E4;
extern u8 D_sc03_118_8018D818;
extern s32 D_sc03_118_801D42E4;
extern s32 D_sc03_118_801D42E8;
typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();
extern u8 D_sc03_118_8018DE80;
extern void func_sc03_118_801851C8();
extern void func_sc03_118_80182910();
extern u8 D_sc03_118_8018E10C[];
extern s32 D_sc03_118_801D4300;
extern u8 D_sc03_118_8018E014;
extern u8 g_CameraFocus;
extern s16 D_80126942;
extern s16 D_80126944;
extern s16 D_sc03_118_8018DDF4[];
extern s32 GetObjPadPressed();
extern s32 HeadingToPoint();
extern void SetForwardVelocity();
extern s32 GroundDistSqTo();
extern s32 D_sc03_118_8018EF88[];
extern u8 D_800AF630;
extern u8 D_sc03_118_801D095C;
extern u8 D_sc03_118_801D09A4;
extern s32 GetVar16();
extern void ForceTintRow5();
extern s32 func_sc03_118_80183178();
extern u8 D_sc03_118_801C6410;
extern u8 D_sc03_118_8018DE14;
extern u8 D_sc03_118_8018DE20;
extern void StartSpriteAnim();
extern u8 D_sc03_118_8018DE70;
extern u8 D_sc03_118_8018DE50;
extern s32 SetScript();
extern s32 D_sc03_118_801D46D8;
extern s32 D_sc03_118_801D46DC;
extern void SpawnKind1C();
extern void EndReaction();
extern s32 D_sc03_118_8018D3E4[];
extern s32 EaseValueFrac();
extern void PlaySePositional();
extern u8 D_80126B30;
extern s32 D_8011F9C8;
extern s16 D_80126B3A;
extern void AngleToVec2();
extern s32 HeadingTo();
extern u8 D_sc03_118_8018D84C[];
extern XY D_sc03_118_8018D86C[];
extern u8 D_sc03_118_8018D73C;
s32 func_sc03_118_8018283C(s32 arg0, s32 arg1, s32 arg2);
extern s32 PathHitsModel();
extern void *g_PlayerModel;
extern s32 g_PlayerHitData;
extern void CopyPropPos();
extern void PushAlongView16();
extern CV4 D_sc03_118_801D2E50;
extern CV4 D_sc03_118_801D4308;
extern void func_8001CD9C();
typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 f; } FeS14s;
typedef struct { u8 pad[0x10]; XY pt[12]; } Pts80182FD4;
typedef struct {
    u32 tag;
    u8 r0, g0, b0, code;
    s16 x0, y0;
    u8 u0, v0;
    u16 clut;
    s16 x1, y1;
    u8 u1, v1;
    u16 tpage;
    s16 x2, y2;
    u8 u2, v2;
    u16 pad1;
    s16 x3, y3;
    u8 u3, v3;
    u16 pad2;
} PFT4;
typedef struct { u32 tag; u32 code; } PMODE;
typedef struct { u8 pad[0x10]; XY t[13]; } FANUV;
extern CV4 D_sc03_118_801D2E54;
extern void *D_sc03_118_801C7064[];
extern s32 TargetInSight();
extern s32 TurnStep();
extern void DespawnIfFar();
extern u8 D_sc03_118_801C6FB4;
extern u8 D_sc03_118_801C6FBC;
extern u16 g_Actors;
extern u16 D_80126B62;
extern u8 D_sc03_118_801D093C;
extern u8 D_sc03_118_801D094C;
extern void *D_sc03_118_801D0A3C[];
typedef struct { SV8 v[4]; XY uv[4]; s32 col[4]; s32 code; u8 clut; } QuadSpr;
extern SV8 D_sc03_118_8018EFA0;
extern SV8 D_sc03_118_8018EFA8;
extern SV8 D_sc03_118_8018EF98;
extern u16 D_sc03_118_8018EFB0[][4];
extern void SetIdentityRotAlt();
extern void SetGteLocalMatrix();
extern s32 DrawPrimGT4Screen();
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern s16 g_WallNormal;
extern s16 D_801152B4;
typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
extern u8 D_sc03_118_801C6CF8;
extern void ResetScriptVM();
extern void CallActionHandler();
extern SV8 D_sc03_118_801D1088[];
extern u8 g_ClockHour;
extern u8 D_sc03_118_8018EF54;
extern u8 D_sc03_118_8018EC18;
extern u8 D_sc03_118_8018EC98;
extern s32 SpawnActorFromDef();
extern u8 D_sc03_118_801D09F4;
extern s32 HeadingToPlayer();
extern u8 D_sc03_118_8018E8A8;
extern void ZeroFill();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc03_118_8018D944;
typedef struct { s16 v[8]; s32 w; } Arg14ABC;
typedef union { s32 w; struct { u16 lo; s16 hi; } h; } FixABC;
typedef struct {
    u8 pad0[4];
    FixABC pos[3];
    u8 pad10[0xC];
    s32 count;
    u8 pad20[0x14];
    u16 sub;
    u8 pad36[0x1A];
    s16 c50;
    s16 s52;
    u8 pad54[0x40];
    s32 i94;
    u8 pad98[0x48];
    s32 fE0;
    s32 nE4;
    u8 padE8[0xC];
    s32 vF4;
} ActABC;
typedef struct { XY p[5]; } XY5;
typedef struct { SV v[4]; u16 uv[4][2]; u8 r, g, b, pad; s32 code; u8 tp; } SPrim105;
typedef struct { SV4 p[4]; s32 c[4]; s32 code; } QuadW;
typedef struct { SV8 p[4]; s16 uv[8]; s32 col; s32 code; u8 flag; u8 pad[7]; } Q40;
typedef struct { CV a; CV b; u8 pad[0x38]; } E40;
typedef struct { u8 b[4]; } B4;
typedef struct { s32 a, b; } P8;
extern u16 D_sc03_118_8018DAB4[];
typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MT20;
typedef struct { s16 x, y; s32 pad; } SXY8;
typedef struct { u16 x, y, z, pad; } uV4;
typedef struct { s16 m[3][3]; s32 t[3]; } wMtx;
typedef struct { u8 pad[0x18]; wMtx wsm; } workHead;
typedef struct { u16 v[6]; } u12;
typedef struct { u16 a, b, c, pad; } Rec801AC2F0;
typedef struct { s16 x, y, z, a, b, c, d, e; s32 w; } Arg8C51C;
typedef struct { s16 v; } S16R;
typedef struct { s16 x, y; u16 c; s16 pad; } Rec8;
extern u8 D_sc03_118_801C6F08;
extern u8 D_sc03_118_801C8338;
extern u8 D_sc03_118_801C6FDC;
extern u8 D_sc03_118_801D4558[];
extern u8 D_sc03_118_801C6F3C;
extern u8 D_sc03_118_801C6F48;
extern u8 D_sc03_118_801C6F50;
extern u8 D_sc03_118_801C6F60;
extern u16 D_sc03_118_801C6F64;
extern u8 D_sc03_118_801C6F68;
extern u8 D_sc03_118_801C6F74;
extern u8 D_sc03_118_801C6F7C;
extern u8 D_sc03_118_801C6FA0;
extern u16 D_sc03_118_801C6FA4;
extern u8 D_sc03_118_801C6F8C;
extern u8 D_sc03_118_801C6F98;
extern u8 D_sc03_118_801D4599[];
extern u8 D_sc03_118_801D459A;
extern u8 D_sc03_118_801D459C;
void func_sc03_118_8017BE9C(void);
void func_sc03_118_8017BEA4(void);
void func_sc03_118_8017BEAC(void);
void func_sc03_118_8017BEB4(void);
s32 func_sc03_118_8017BEBC();
void func_sc03_118_8017BEE4(u8 *arg0);
void func_sc03_118_8017BF20(s32 arg0);
s32 func_sc03_118_8017BF58(s32 arg0);
void func_sc03_118_8017BF98(void);
s32 func_sc03_118_8017BFA0();
void func_sc03_118_8017BFC8(u8 *arg0);
void func_sc03_118_8017C004(s32 arg0);
s32 func_sc03_118_8017C03C(s32 arg0);
void func_sc03_118_8017C07C(void);
void func_sc03_118_8017C084(u8 *arg0, s32 arg1, s32 arg2);
void func_sc03_118_8017C0C8(u8 *arg0);
void func_sc03_118_8017C104(u8 *arg0);
void func_sc03_118_8017C12C(s32 arg0);
void func_sc03_118_8017C14C(void);
void func_sc03_118_8017C154(u8 *arg0);
void func_sc03_118_8017C290(u8 *arg0, SV8 *arg1, SV8 *arg2, SV8 *arg3, SV8 *arg4, SV8 *arg5,
                            s16 *arg6);
void func_sc03_118_8017C624(u8 *arg0, s16 arg1, s32 arg2);
void func_sc03_118_8017C664(u8 *arg0);
void func_sc03_118_8017C6A0(u8 *arg0);
void func_sc03_118_8017C814(u8 *arg0);
void func_sc03_118_8017C8FC(u8 *arg0);
void func_sc03_118_8017CC44(u8 *arg0);
void func_sc03_118_8017CCC4(u8 *arg0);
void func_sc03_118_8017CD10(u8 *arg0);
void func_sc03_118_8017CE10(s32 arg0, s32 arg1, s32 arg2);
void func_sc03_118_8017CE54(u8 *arg0);
void func_sc03_118_8017CE90(u8 *arg0);
void func_sc03_118_8017CFBC(u8 *arg0);
void func_sc03_118_8017D098(s32 arg0, s32 arg1, s32 arg2);
void func_sc03_118_8017D0DC(u8 *arg0);
void func_sc03_118_8017D118(s32 arg0);
void func_sc03_118_8017D194(s32 arg0);
void func_sc03_118_8017D1E0(u8 *arg0);
void func_sc03_118_8017D318(u8 *arg0, SV *a, SV *b, s32 ang);
void func_sc03_118_8017D5F8(s32 arg0, s32 arg1, s32 arg2);
void func_sc03_118_8017D63C(u8 *arg0);
void func_sc03_118_8017D678(u8 *arg0);
void func_sc03_118_8017D75C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_118_8017D804(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_118_8017D890(u8 *arg0);
void func_sc03_118_8017D900(s32 arg0);
void func_sc03_118_8017D9C8(s32 arg0);
void func_sc03_118_8017DA98(s16 arg0, B8 *arg1, s32 arg2);
void func_sc03_118_8017DB00(u8 *arg0);
void func_sc03_118_8017DB3C(s32 arg0);
void func_sc03_118_8017DB74(s32 arg0);
void func_sc03_118_8017DBC4(s32 arg0);
void func_sc03_118_8017DC28(u8 *arg0, s32 arg1);
void func_sc03_118_8017DC4C(u8 *arg0);
void func_sc03_118_8017DCC0(u8 *arg0);
void func_sc03_118_8017DD74(void);
s32 func_sc03_118_8017DD7C(void);
void func_sc03_118_8017DDBC(u8 *arg0);
void func_sc03_118_8017DE24(u8 *arg0);
void func_sc03_118_8017DE8C(u8 *arg0);
void func_sc03_118_8017DF7C(void);
void func_sc03_118_8017DF84(u8 *arg0);
void func_sc03_118_8017E120(u8 *arg0);
void func_sc03_118_8017E324(s32 a);
void func_sc03_118_8017E718(u8 *arg0);
void func_sc03_118_8017E898(u8 *arg0);
void func_sc03_118_8017E8D4(u8 *arg0, s32 arg1, s32 arg2);
void func_sc03_118_8017E948(u8 *arg0);
void func_sc03_118_8017EA24(u8 *o);
void func_sc03_118_8017EC38(s32 arg0);
void func_sc03_118_8017ED0C(s32 arg0, s32 arg1);
void func_sc03_118_8017EDDC(s32 arg0, s32 arg1);
void func_sc03_118_8017EE34(u8 *arg0);
void func_sc03_118_8017EF2C(s32 arg0, s32 arg1);
void func_sc03_118_8017EF6C(u8 *arg0);
void func_sc03_118_8017EFA8(u8 *a);
void func_sc03_118_8017F16C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_118_8017F200(u8 *arg0);
void func_sc03_118_8017F23C(s32 arg0);
void func_sc03_118_8017F2E0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_sc03_118_8017F344(u8 *arg0);
void func_sc03_118_8017F380(s32 arg0);
void func_sc03_118_8017F3C0(u8 *arg0);
void func_sc03_118_8017F43C(s32 arg0);
void func_sc03_118_8017F49C(void);
void func_sc03_118_8017F4A4(void);
s32 func_sc03_118_8017F4CC(void);
s16 func_sc03_118_8017F4E8(void);
void func_sc03_118_8017F4F8(u8 *arg0);
void func_sc03_118_8017F558(u8 *arg0);
void func_sc03_118_8017F624(u8 *arg0);
void func_sc03_118_8017F7F0(s32 arg0);
void func_sc03_118_8017F84C(s32 arg0);
void func_sc03_118_8017F8A8(u8 *arg0);
void func_sc03_118_8017F90C(u8 *arg0);
void func_sc03_118_8017F9BC(u8 *arg0);
void func_sc03_118_8017FA80(u8 *arg0);
void func_sc03_118_8017FB40(u8 *arg0);
void func_sc03_118_8017FB84(u8 *obj);
void func_sc03_118_80180A64(u8 *obj, u8 *hdr, s32 phase, s32 dy);
void func_sc03_118_8018165C(u8 *arg0);
s32 func_sc03_118_80181698(u8 *arg0);
s32 func_sc03_118_801816DC(void);
void func_sc03_118_80181700(u8 *arg0);
s32 func_sc03_118_8018173C(u8 *arg0);
void func_sc03_118_80181780(u8 *arg0);
s32 func_sc03_118_801817BC(u8 *arg0);
s32 func_sc03_118_801817FC(u8 *arg0, s32 arg1, s32 arg2);
void func_sc03_118_8018188C(void);
void func_sc03_118_801818AC(u8 *arg0);
s32 func_sc03_118_801818E8(u8 *arg0);
s32 func_sc03_118_80181928(u8 *arg0);
void func_sc03_118_801819A4(void);
void func_sc03_118_801819C4(void);
void func_sc03_118_801819EC(void);
void func_sc03_118_80181A14(void);
void func_sc03_118_80181A3C(void);
void func_sc03_118_80181A64(void);
void func_sc03_118_80181B08(s32 arg0);
void func_sc03_118_80181B44(u8 *o);
void func_sc03_118_80181C78(u8 *arg0, u8 *arg1, u8 *arg2);
void func_sc03_118_80181E1C(u8 *arg0);
void func_sc03_118_80181E58(u8 *o);
void func_sc03_118_8018201C(u8 *o);
s32 func_sc03_118_8018219C(s32 arg0);
void func_sc03_118_8018226C(u8 *o);
s32 func_sc03_118_80182380(s32 arg0);
s32 func_sc03_118_801823F8(s32 arg0);
s32 func_sc03_118_8018244C(s32 arg0);
s32 func_sc03_118_8018248C(u8 *arg0);
void func_sc03_118_801824A0(s32 arg0);
s32 func_sc03_118_80182550(s32 arg0);
void func_sc03_118_80182570(s32 arg0);
void func_sc03_118_80182590(void);
void func_sc03_118_801825B0(u8 *arg0);
void func_sc03_118_801825EC(u8 *o);
s32 func_sc03_118_80182704(s32 arg0);
void func_sc03_118_80182714(s32 arg0);
void func_sc03_118_8018276C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_sc03_118_801827A0(s32 arg0, u8 *arg1);
s32 func_sc03_118_8018283C(s32 arg0, s32 arg1, s32 arg2);
void func_sc03_118_801828A4(s32 arg0);
void func_sc03_118_801828C4(s32 arg0);
void func_sc03_118_801828E4(s32 arg0, s32 arg1);
void func_sc03_118_80182904(s32 arg0);
void func_sc03_118_80182910(s32 arg0);
void func_sc03_118_8018291C();
s32 func_sc03_118_8018295C(u8 *arg0);
s32 func_sc03_118_80182988(s32 arg0);
void func_sc03_118_80182998(u8 *arg0);
void func_sc03_118_801829E4(s32 arg0);
void func_sc03_118_80182A34(s32 arg0, s32 arg1, s32 arg2);
void func_sc03_118_80182ADC(void);
void func_sc03_118_80182AE4(void);
void func_sc03_118_80182AEC(u8 *arg0);
void func_sc03_118_80182B18(u8 *arg0, s32 arg1);
void func_sc03_118_80182BC4(s32 arg0);
void func_sc03_118_80182C34(u8 *arg0, s32 arg1);
void func_sc03_118_80182CC4(s32 arg0, s32 arg1);
void func_sc03_118_80182D14(u8 *arg0);
void func_sc03_118_80182DC4(u8 *arg0);
void func_sc03_118_80182E38(u8 *arg0);
void func_sc03_118_80182E88(u8 *arg0);
void func_sc03_118_80182F44(void);
void func_sc03_118_80182FAC(s32 arg0);
void func_sc03_118_80182FCC(u8 *arg0);
void func_sc03_118_8018302C(u8 *arg0);
void func_sc03_118_801830C4(u8 *arg0);

void func_sc03_118_801838A4(StageActor *arg0) {
    D_sc03_118_8018E208[arg0->state]();
}

void func_sc03_118_801838E0(StageActor *arg0) {
    D_sc03_118_8018E858[arg0->state]();
}

void func_sc03_118_8018391C(StageActor *arg0, s32 arg1, s32 arg2) {
    ModelObj *temp_a0;
    ModelObj *temp_v0;
    ModelObj *temp_v1;

    temp_v0 = AllocActorModel(arg0, arg1, arg2);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    func_8001CA1C(temp_v0, (s32) &D_sc03_118_8018E160);
    SetScript(arg0, (s32) &D_sc03_118_8018E1C0);
    arg0->index = (s32) (rand() & 7);
    arg0->state = 1;
    arg0->model->scale.vx = (s16) ((rand() >> 3) + 0x2000);
    arg0->model->scale.vy = 0x2000;
    temp_v1 = arg0->model;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
    temp_a0 = arg0->model;
    temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x08000000);
    arg0->model->rot.vz = (s16) (rand(temp_a0) & 0xFFF);
}

void func_sc03_118_801839F4(StageActor *arg0, s32 arg1) {
    ModelObj *temp_a0;
    ModelObj *temp_v0;

    if (GetFlag(0xB8, arg1) & 0xFF) {
        temp_a0 = arg0->model;
        temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 & 0x7FFFFFFF);
        return;
    }
    temp_v0 = arg0->model;
    temp_v0->unk04 = (s32) ((s32)temp_v0->unk04 | 0x80000000);
}

void func_sc03_118_80183A60(StageActor *arg0) {
    s32 temp_v0;

    if ((GetProgress() >= 0x276U) || (temp_v0 = AllocActorModel(), arg0->model = temp_v0, (temp_v0 == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc03_118_8018E850);
    arg0->state = 1;
    arg0->hitState = 0x40;
    AF(arg0, void *, 0x58) = (void *) ((arg0->param * 0x10) + &D_sc03_118_8018E210);
    func_80143994((s32) arg0, 0x1000);
}

void func_sc03_118_80183AF8(void) {
}

void func_sc03_118_80183B00(StageActor *arg0) {
    D_sc03_118_8018E8A0[arg0->state]();
}

s32 func_sc03_118_80183B3C(u8 *arg0, s32 *t) {
    s32 k = AF(arg0, s32, 0xDC);
    s32 v;

    if (t[0] != k) {
        t += 2;
        do {
            v = t[0];
            if (v == 0) {
                return k;
            }
            t += 2;
        } while (v != k);
        t -= 2;
    }
    return t[1];
}

void func_sc03_118_80183B84(StageActor *arg0) {
    s32 temp_s1;
    ModelObj *temp_v0;

    temp_s1 = GetProgress();
    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, 0);
    AF(arg0, s32 *, 0x58) = (s32 *) &D_sc03_118_8018E890;
    arg0->hitState = 0x80;
    arg0->state = (u16) (arg0->state + 1);
    if (temp_s1 >= 0x384) {
        arg0->message = func_sc03_118_80183B3C(arg0, &D_sc03_118_8018E880);
    } else if (temp_s1 >= 0x258) {
        arg0->message = func_sc03_118_80183B3C(arg0, &D_sc03_118_8018E870);
    } else if (temp_s1 >= 0xC8) {
        arg0->message = func_sc03_118_80183B3C(arg0, &D_sc03_118_8018E860);
    }
}

void func_sc03_118_80183C50(void) {
}

void func_sc03_118_80183C58(StageActor *arg0) {
    D_sc03_118_8018EC08[arg0->state]();
}

void func_sc03_118_80183C94(StageActor *o) {
    s32 p;

    p = func_sc03_118_80184214((s32) o, (s32) &D_sc03_118_8018E8A8, 0x300, 0x140, 0x88);
    o->ext0 = p;
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    p = func_sc03_118_80184214((s32) o, (s32) &D_sc03_118_8018E8A8, 0x310, 0x140, 0x89);
    o->ext1 = p;
    if (p == 0) {
        ZeroFill(o->ext0, 0x38);
        RejectSpawn(o);
        return;
    }
    AF(o->ext0, s16, 0x12) = o->def->unkC;
    AF(o->ext1, s16, 0x12) = o->def->unkC;
    if (GetFlag(0xB8) & 0xFF) {
        o->state = 2;
    } else {
        o->state = 1;
    }
}

void func_sc03_118_80183D68(s32 arg0) {
    s32 temp_v0;
    u16 temp_v1;
    u16 temp_a0;
    u16 state;
    void *p;

    if ((DistSqToPlayer(arg0) < 0x401) || ((u16) (AF(arg0, u16, 0x34) - 1) < 2U)) {
        state = AF(arg0, u16, 0x34);
        switch (state) {
        case 0:
            if (!(GetFlag(0x8B) & 0xFF)) {
                TakePlayerControlNoStop();
                StartEvent(arg0, &D_sc03_118_8018EBE8);
                AF(arg0, u16, 0x34) = 2;
            } else {
                TakePlayerControlNoStop();
                StartEvent(arg0, &D_sc03_118_8018EBF8);
                AF(arg0, u16, 0x34)++;
            }
            break;
        case 1:
            if (UpdateScript(arg0) == 1) {
                EndEvent(arg0);
                AF(arg0, u16, 0x34) = 3;
            }
            break;
        case 2:
            if (UpdateScript(arg0) == 1) {
                EndEvent(arg0);
                AF(arg0, u16, 0x34) = 4;
            }
            break;
        case 3:
            if (!(GetFlag(0xB8) & 0xFF) && (GetTechnique() == 3)) {
                ArmCrest(3, &D_sc03_118_8018DA14);
                if (GetPlayerAction() != 0) {
                    temp_v1 = AF(arg0, u16, 0x100);
                    if (temp_v1 & 4) {
                        goto inc;
                    }
                    AF(arg0, u16, 0x100) = temp_v1 | 4;
                    AF(arg0, s32, 0x1C) = 0;
                    func_80175454();
                }
                if (AF(arg0, u16, 0x100) & 4) {
inc:
                    AF(arg0, s32, 0x1C)++;
                }
                temp_a0 = AF(arg0, u16, 0x100);
                if (!(temp_a0 & 2) && (AF(arg0, s32, 0x1C) == 0x5A)) {
                    AF(arg0, u16, 0x100) = temp_a0 | 2;
                    func_800D0C48(0);
                }
                if (!(AF(arg0, u16, 0x100) & 1) && ((GetPlayerByte1C7() & 0x8000007F) == 0x80000003)) {
                    p = g_ActiveCamera;
                    AF(arg0, u16, 0x100) |= 1;
                    AF(arg0, u16, 0x34)++;
                    D_sc03_118_801D4348 = AF(p, s32, 0x48);
                    D_sc03_118_801D434A = AF(p, s32, 0x4C);
                    D_sc03_118_801D434C = AF(p, s32, 0x50);
                    D_sc03_118_801D4350 = AF(p, s32, 0x3C);
                    D_sc03_118_801D4352 = AF(p, s32, 0x40);
                    D_sc03_118_801D4358 = &D_sc03_118_8018EBD8;
                    D_sc03_118_801D4354 = AF(p, s32, 0x44);
                    D_sc03_118_801D435C = &D_sc03_118_8018EBD8 + 8;
                    SetCameraUpdate(func_sc03_118_80184430, 0);
                    func_sc03_118_801842DC(p);
                    AF(arg0, s32, 0x1C) = 0;
                }
            }
            break;
        }
        if (!(GetFlag(0x8B) & 0xFF)) {
            return;
        }
        if (GetTechnique() == 3) {
            func_sc03_118_8018416C(arg0);
            func_sc03_118_801841C0(arg0);
        } else {
            AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0x88;
            func_sc03_118_801841C0(arg0);
        }
    } else {
        if (!(GetFlag(0x8B) & 0xFF)) {
            return;
        }
        AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0x88;
        func_sc03_118_801841C0(arg0);
    }
    if (AF(arg0, u16, 0x100) & 1) {
        temp_v0 = AF(arg0, s32, 0x1C) + 1;
        AF(arg0, s32, 0x1C) = temp_v0;
        if (temp_v0 == 0x78) {
            D_sc03_118_801D4358 = &D_sc03_118_8018EBC8;
            D_sc03_118_801D435C = &D_sc03_118_8018EBC8 + 8;
            SetCameraUpdate(func_sc03_118_80184430, 0);
            func_sc03_118_801842DC(&g_Camera);
        }
        if (func_sc03_118_80183830() != 0) {
            SetFlag(0xB8, 1);
            AF(arg0, u16, 0x100) &= 0xFFFE;
            EndPlayerAction();
            SpawnActor(0x249, arg0);
            AF(arg0, s16, 2) = 2;
            AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0x88;
            AF(AF(arg0, void *, 0xD0), u8, 0x27) = 0x89;
            func_8002959C();
        }
    }
}

void func_sc03_118_80184164(void) {
}

s32 func_sc03_118_8018416C(s32 arg0) {
    AF(AF(arg0, void *, 0xCC), u8, 0x27) = 0x8A;
    return QueueImage((s32) ((D_sc03_118_8018EBA8[(D_800B99DA & 0x1F)] * 0x10) + &D_sc03_118_801C6DF8));
}

s32 func_sc03_118_801841C0(s32 arg0) {
    AF(AF(arg0, void *, 0xD0), u8, 0x27) = 0x8B;
    return QueueImage((s32) ((D_sc03_118_8018EBA8[(D_800B99DA & 0x1F)] * 0x10) + &D_sc03_118_801C6CF8));
}

s32 func_sc03_118_80184214(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = AllocActorSprite();
    if (temp_v0 == 0) {
        return 0;
    }
    InitSpriteKind2(temp_v0, arg1, (s32) (s16) arg2, (s32) (s16) arg3);
    AF(temp_v0, s16, 0x10) = 0xC00;
    AF(temp_v0, u8, 0x27) = (s8) arg4;
    AF(temp_v0, s16, 0x1A) = 0x2D00;
    AF(temp_v0, s16, 0x18) = 0x2D00;
    AF(temp_v0, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
    AF(temp_v0, u16, 0xC) = (u16) AF(arg0, u16, 0xE);
    return temp_v0;
}

void func_sc03_118_801842DC(u8 *o) {
    s16 *p;
    s32 z;
    p = D_sc03_118_801D4358;
    AF(o, s32, 0x48) = p[0];
    AF(o, s32, 0x4C) = p[1];
    z = p[2];
    p = D_sc03_118_801D435C;
    AF(o, s32, 0x50) = z;
    AF(o, s32, 0x3C) = p[0];
    AF(o, s32, 0x40) = p[1];
    AF(o, s32, 0x44) = p[2];
}

void func_sc03_118_80184334(u8 *o) {
    ((s32 *)o)[0x12] = (s16)EaseValue(AF(o, s16, 0x48), AF(D_sc03_118_801D4358, s16, 0), 0x20);
    ((s32 *)o)[0x13] = (s16)EaseValue(AF(o, s16, 0x4C), AF(D_sc03_118_801D4358, s16, 2), 0x20);
    ((s32 *)o)[0x14] = (s16)EaseValue(AF(o, s16, 0x50), AF(D_sc03_118_801D4358, s16, 4), 0x20);
    ((s32 *)o)[0xF] = (s16)EaseValue(AF(o, s16, 0x3C), AF(D_sc03_118_801D435C, s16, 0), 0x20);
    ((s32 *)o)[0x10] = (s16)EaseValue(AF(o, s16, 0x40), AF(D_sc03_118_801D435C, s16, 2), 0x20);
    ((s32 *)o)[0x11] = (s16)EaseValue(AF(o, s16, 0x44), AF(D_sc03_118_801D435C, s16, 4), 0x20);
}

void func_sc03_118_80184430(s32 arg0) {
    D_sc03_118_8018EC14[AF(arg0, u8, 4)]();
}

void func_sc03_118_8018446C(StageActor *arg0) {
    D_sc03_118_8018EF38[arg0->state]();
}

void func_sc03_118_801844A8(StageActor *o) {
    SpawnDef *d;

    d = &D_sc03_118_8018EC18;
    if ((o->ext0 = SpawnActorFromDef(d, o)) == 0) {
        RejectSpawn(o);
        return;
    }
    if ((o->ext1 = SpawnActorFromDef((u8 *)d + 0x14, o)) == 0) {
        FreeActor(o->ext0);
        RejectSpawn(o);
        return;
    }
    StartEvent(o, &D_sc03_118_8018EC98);
    o->state++;
}

void func_sc03_118_80184540(StageActor *arg0) {
    if (UpdateScript(arg0) == 1) {
        EndEvent(arg0);
        BlendCameraThen((s32) &func_sc03_118_80181A64);
        FreeActor(arg0->ext0);
        FreeActor(arg0->ext1);
        func_800D0C48(1);
        arg0->timer = 0x1F;
        arg0->state = (u16) (arg0->state + 1);
        GiveItem(0x1B);
    }
}

void func_sc03_118_801845C8(s32 arg0) {
    if ((TickTimer(arg0) != 0) && (RequestBgmPack(0x49) != 0)) {
        SetProgress(0x276);
        FreeActor(arg0);
    }
}

s32 func_sc03_118_80184618(u8 *o) {
    s32 v = AF(o, s32, 0xE0);
    if ((v & 3) == 3) {
        AF(o, s32, 0xE0) = v & ~3;
        return 1;
    }
    return 0;
}

s32 func_sc03_118_80184644(void) {
    return RequestBgmPack(0x5A) != 0;
}

void func_sc03_118_80184664(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, s32, 0xE0) = (s32) (AF(temp_v1, s32, 0xE0) | 0x80000000);
    temp_v1_2 = AF(arg0, void *, 0xD0);
    AF(temp_v1_2, s32, 0xE0) = (s32) (AF(temp_v1_2, s32, 0xE0) | 0x80000000);
}

void func_sc03_118_80184698(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, s32, 0xE0) = (s32) (AF(temp_v1, s32, 0xE0) | 0x80000001);
    temp_v1_2 = AF(arg0, void *, 0xD0);
    AF(temp_v1_2, s32, 0xE0) = (s32) (AF(temp_v1_2, s32, 0xE0) | 0x80000001);
}

void func_sc03_118_801846CC(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, s32, 0xE0) = (s32) (AF(temp_v1, s32, 0xE0) | 0x40000000);
    temp_v1_2 = AF(arg0, void *, 0xD0);
    AF(temp_v1_2, s32, 0xE0) = (s32) (AF(temp_v1_2, s32, 0xE0) | 0x40000000);
    AF(AF(arg0, void *, 0xCC), s16, 0xFE) = 0x80;
    AF(AF(arg0, void *, 0xD0), s16, 0xFE) = -0x40;
}

void func_sc03_118_80184718(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, s32, 0xE0) = (s32) (AF(temp_v1, s32, 0xE0) & 0xBFFFFFFF);
    temp_v1_2 = AF(arg0, void *, 0xD0);
    AF(temp_v1_2, s32, 0xE0) = (s32) (AF(temp_v1_2, s32, 0xE0) & 0xBFFFFFFF);
}

void func_sc03_118_8018474C(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xCC), (s32) &D_sc03_118_801BE4D0);
}

void func_sc03_118_80184778(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc03_118_801C584C);
}

void func_sc03_118_801847A4(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xCC), (s32) &D_sc03_118_801BE558);
}

void func_sc03_118_801847D0(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc03_118_801C55CC);
}

void func_sc03_118_801847FC(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc03_118_801C573C);
}

void func_sc03_118_80184828(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xD0), (s32) &D_sc03_118_801C57C4);
}

void func_sc03_118_80184854(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xCC), (s32) &D_sc03_118_801BE5E0);
}

void func_sc03_118_80184880(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xCC), (s32) &D_sc03_118_801BE668);
}

void func_sc03_118_801848AC(u8 *arg0) {
    SetScript(AF(arg0, s32, 0xCC), (s32) &D_sc03_118_801BE6B0);
}

void func_sc03_118_801848D8(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, s32, 0xE0) = (s32) (AF(temp_v1, s32, 0xE0) | 0x20000000);
    temp_v1_2 = AF(arg0, void *, 0xD0);
    AF(temp_v1_2, s32, 0xE0) = (s32) (AF(temp_v1_2, s32, 0xE0) | 0x20000000);
}

void func_sc03_118_8018490C(u8 *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, s32, 0xE0) = (s32) (AF(temp_v1, s32, 0xE0) & 0xDFFFFFFF);
    temp_v1_2 = AF(arg0, void *, 0xD0);
    AF(temp_v1_2, s32, 0xE0) = (s32) (AF(temp_v1_2, s32, 0xE0) & 0xDFFFFFFF);
}

void func_sc03_118_80184940(StageActor *arg0) {
    D_sc03_118_8018EF74[arg0->state]();
}

void func_sc03_118_8018497C(StageActor *arg0, s32 arg1, s32 arg2) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0, arg1, arg2);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, D_sc03_118_8018EF44[((u16)arg0->param & 0xF)]);
    SetScript(arg0, D_sc03_118_8018EF4C[((u16)arg0->param & 0xF)]);
    func_80143994(arg0, 0x2000);
    arg0->state = 1;
}

void func_sc03_118_80184A1C(StageActor *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = arg0->workE0;
    if (temp_v1 < 0) {
        arg0->state = 2;
        arg0->workE0 = (s32) (arg0->workE0 & 0x7FFFFFFF);
    } else if (temp_v1 & 0x40000000) {
        arg0->state = 4;
        arg0->work100 = (u16) (u16)arg0->model->rot.vy;
    }
    if ((s32)arg0->script == &D_sc03_118_801C584C) {
        if (arg0->index == 7) {
            PlaySoundId(0x77F, 0, arg2);
        }
    }
    if ((s32)arg0->script == &D_sc03_118_801C57C4) {
        temp_v1_2 = arg0->index;
        if ((temp_v1_2 == 9) || (temp_v1_2 == 0xF)) {
            PlaySoundId(0x7AA, 0);
        }
        temp_a0 = arg0->index;
        if ((temp_a0 == 3) || (temp_a0 == 0xA)) {
            PlaySoundId(0x7AB, 0);
        }
    }
}

void func_sc03_118_80184B18(StageActor *o) {
    o->state = 3;
    o->ext0 = &D_sc03_118_8018EF54 + (o->workE0 & 0xF) * 16 + ((u16)o->param & 0xF) * 8;
    o->workE0 &= ~0xF;
    SetScript(o, D_sc03_118_8018EF4C[(u16)o->param & 0xF]);
}

void func_sc03_118_80184B94(u8 *o) {
    s16 *p;
    s32 i;
    u8 *q;
    s32 m;

    p = AF(o, s16 *, 0xCC);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToPoint(o + 4, p);
    SetForwardVelocity(o, 0xFFFA0000);
    MoveObject(o);
    if (GroundDistSqTo(o, p) < 0x41) {
        i = AF(o, u16, 0x70) & 0xF;
        AF(o, s16, 6) = p[0];
        AF(o, s16, 0xA) = p[1];
        AF(o, s16, 0xE) = p[2];
        AF(o, s16, 2) = 1;
        AF(AF(o, u8 *, 0x64), s32, 0xE0) |= D_sc03_118_8018EF88[i];
    }
    if (!(AF(o, s32, 0xE0) & 0x20000000)) {
        if (!(AF(o, u16, 0x70) & 1)) {
            if (AF(o, s32, 0x94) == 9) {
                PlaySoundId(0x77E, 0);
            }
            if (AF(o, s32, 0x94) == 0xF) {
                PlaySoundId(0x77D, 0);
            }
        } else {
            if (AF(o, s32, 0x94) == 0xF) {
                PlaySoundId(0x781, 0);
            }
            if (AF(o, s32, 0x94) == 0x1B) {
                PlaySoundId(0x780, 0);
            }
        }
    }
}

void func_sc03_118_80184CE0(StageActor *o) {
    SV8 v;

    if (!(o->workE0 & 0x40000000)) {
        o->state = 1;
        v.x = g_PlayerX - 0x80;
        v.y = 0;
        v.z = D_80126B66;
        o->model->rot.vy = HeadingToPoint((u8 *)o + 4, &v);
        return;
    }
    o->model->rot.vy += (u16)o->workFE;
    if (o->workFE > 0) {
        if (o->work100 + 0x200 < o->model->rot.vy) {
            o->model->rot.vy = o->work100 + 0x200;
            o->workFE *= -1;
        }
    } else {
        if (o->model->rot.vy < o->work100 - 0x200) {
            o->model->rot.vy = o->work100 - 0x200;
            o->workFE *= -1;
        }
    }
}

void func_sc03_118_80184DD8(StageActor *arg0) {
    if (D_801270C0 != 3) {
        D_sc03_118_8018EF90[arg0->state]();
    }
}

void func_sc03_118_80184E24(StageActor *o) {
    AF(o, u16, 0x72) |= 0x1000;
    if (g_ClockHour >= 7 && g_ClockHour < 0x13) {
        o->workFE = 0x40;
    } else {
        o->workFE = 0x10;
    }
    o->unkFC = 0;
    NextState(o);
}

extern s32 ApproachValue();
extern void func_sc03_118_80184F18(u8 *o, s32 c1, s32 a2);

void func_sc03_118_80184E78(StageActor *o) {
    s16 v;
    s32 c;

    v = 0x10;
    if (g_ClockHour >= 7 && g_ClockHour < 0x13) {
        v = 0x40;
    }
    v = ApproachValue(o->workFE, v, 1);
    o->workFE = v;
    c = v;
    c |= (c << 16) | (c << 8);
    if (++o->unkFC >= 0x7F) {
        o->unkFC = 0;
    }
    func_sc03_118_80184F18(o, c, o->unkFC);
}

void func_sc03_118_80184F18(u8 *o, s32 c1, s32 a2) {
    SV8 s[3];
    u8 unused[24];
    WMtx m;
    QuadSpr q;
    QuadSpr *p;
    u16 *t;
    s32 i;
    s16 b;
    s16 u;

    q.v[0].z = 3;
    q.col[0] = 0x10101;
    q.col[1] = c1;
    q.col[2] = 0;
    q.col[3] = 0x101010;
    q.clut = 0x31;
    q.code = 0x50000000;
    SetIdentityRotAlt(&m);
    m.t[0] = AF(o, s16, 6);
    m.t[1] = AF(o, s16, 0xA);
    m.t[2] = AF(o, s16, 0xE);
    SetGteLocalMatrix(&m);
    b = a2;
    p = &q;
    gte_ldv3(&D_sc03_118_8018EFA0, &D_sc03_118_8018EFA8, &D_sc03_118_8018EF98);
    gte_rtpt();
    gte_stsxy3(&s[0], &s[1], &s[2]);
    q.v[0].z = 3;
    s[0].x = s[1].x = s[2].x;
    i = 0;
    u = a2 + 0xD40;
    for (; i < 3; i++) {
        t = D_sc03_118_8018EFB0[i];
        p->v[0].x = s[1].x;
        p->v[0].y = s[1].y + t[2];
        p->v[1].x = s[0].x;
        p->v[1].y = s[0].y;
        p->v[2].x = s[1].x + t[1];
        p->v[2].y = s[1].y + t[3];
        p->v[3].x = s[0].x + t[0];
        p->v[3].y = s[0].y;
        p->uv[0].x = u;
        p->uv[0].y = 0x1FF;
        p->uv[1].x = b + 0xD20;
        p->uv[1].y = 0x100;
        p->uv[2].x = t[1] + u;
        p->uv[2].y = 0x1FF;
        p->uv[3].x = t[0] + u;
        p->uv[3].y = 0x100;
        DrawPrimGT4Screen(p);
        p->v[2].x = s[1].x - t[1];
        p->v[3].x = s[0].x - t[0];
        p->uv[2].x = u - t[1];
        p->uv[3].x = u - t[0];
        DrawPrimGT4Screen(p);
    }
}

s32 func_sc03_118_8018517C(void) {
    if (GetFlag(0xB8) & 0xFF) {
        return 0x49;
    }
    if (GetFlag(0x17) & 0xFF) {
        return 0x4E;
    }
    return 0x4C;
}

void func_sc03_118_801851C8(StageActor *arg0) {
    s32 i;

    for (i = 0; (s16)D_sc03_118_801C5894[i].x != 0; i++) {
        SpawnActorArg(0x10D, i, arg0);
    }
}

void func_sc03_118_8018523C(u8 *arg0) {
    WMtx m;
    UV4 v;
    s32 o;
    s32 t;
    s16 k;

    m = GsIDMATRIX;
    v = D_sc03_118_801C5894[AF(arg0, s16, 0x70)];
    t = AllocActorModel();
    o = t;
    AF(arg0, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(arg0);
        return;
    }
    k = v.pad;
    InitModel(o, D_sc03_118_801C591C[k]);
    RotMatrixY(AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12), &m);
    ApplyMatrixSV(&m, &v, &v);
    AF(arg0, u16, 6) += v.x;
    AF(arg0, u16, 0xA) += v.y;
    AF(arg0, u16, 0xE) += v.z;
    StopWithGravity(arg0);
    AF(arg0, s16, 0x12) = (s16) v.x >> 3;
    AF(arg0, s16, 0x16) = (s16) v.y >> 3;
    AF(arg0, s16, 0x1A) = (s16) v.z >> 3;
    AF(arg0, s16, 0xFC) = (s16) ((rand() & 0x7FF) - 0x400) >> k;
    AF(arg0, s16, 0xFE) = (s16) ((rand() & 0x7FF) - 0x400) >> k;
    AF(arg0, s16, 0x100) = (s16) ((rand() & 0x7FF) - 0x400) >> k;
    NextState(arg0);
}

void func_sc03_118_8018545C(StageActor *arg0) {
    D_sc03_118_801C5928[arg0->state]();
}

void func_sc03_118_80185498(s32 arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    MoveObject(arg0);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, u16, 0x10) = (u16) (AF(temp_a0, u16, 0x10) + AF(arg0, u16, 0xFC));
    temp_a0_2 = AF(arg0, void *, 0x20);
    AF(temp_a0_2, u16, 0x12) = (u16) (AF(temp_a0_2, u16, 0x12) + AF(arg0, u16, 0xFE));
    temp_a0_3 = AF(arg0, void *, 0x20);
    AF(temp_a0_3, u16, 0x14) = (u16) (AF(temp_a0_3, u16, 0x14) + AF(arg0, u16, 0x100));
    if (AF(AF(arg0, void *, 0x64), s16, 0xA) < AF(arg0, s16, 0xA)) {
        FreeActor(arg0);
    }
}

void func_sc03_118_8018552C(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_118_801D4474;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

void func_sc03_118_80185550(s32 arg0, s32 arg1, s32 arg2, u16 *arg3) {
    SV4 v;
    s32 i;
    s16 ang;

    func_sc03_118_801855F0(arg0, 0x1000, 0);
    v.x = arg3[0];
    v.z = arg3[1];
    v.pad = 1;
    for (i = 0, ang = 0; i < 0x10; i++, ang += 0x100) {
        v.y = ang;
        func_sc03_118_8018570C(i, (s32) &v, arg1, arg2);
    }
}

s32 func_sc03_118_801855F0(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc03_118_801D446C = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc03_118_801D4470 = (s16) arg1;
    D_sc03_118_801D4472 = (s16) arg2;
    D_sc03_118_801D446E = temp_v0;
    return (s32) temp_v0;
}

void func_sc03_118_80185620(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc03_118_801D446C = sp10[0];
    D_sc03_118_801D446E = sp10[1];
}

void func_sc03_118_80185698(s32 arg0) {
    s16 *p = &D_sc03_118_801D4472;
    *p += arg0;
}

void func_sc03_118_801856B4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc03_118_801857E0();
    if (temp_v0 >= 0) {
        func_sc03_118_8018570C(temp_v0, arg0, arg1, arg2);
    }
}

void func_sc03_118_8018570C(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
    struct C8E8 { u8 r, g, b, cd; };
    struct E8E8 { u16 a; s16 y; s16 z; struct C8E8 c0; struct C8E8 c1; } *e;

    e = (struct E8E8 *)(&D_sc03_118_801D4474 + arg0 * 14);
    e->a = arg1[0];
    e->c0 = *(struct C8E8 *)arg2;
    e->c0.cd = 0;
    e->c1 = *(struct C8E8 *)arg3;
    e->c1.cd = 0;
    e->y = arg1[1] + (rand() & 0x3F) - 0x20;
    e->z = (arg1[2] * ((rand() & 0x7F0) + 0xC00)) >> 12;
    if (arg1[3] != 0) {
        e->c0.cd = 1;
        e->c1.cd = e->z;
        e->z = 0;
    }
}

s32 func_sc03_118_801857E0(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0xE) {
        if (*(u16 *)&((u8 *)&D_sc03_118_801D4474)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc03_118_8018581C(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc03_118_801D4474, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

void func_sc03_118_80185868(void) {
    u8 *p;
    s32 i;
    s16 v;
    s16 w;

    for (p = &D_sc03_118_801D4474, i = 0; i < 0x10; i++, p += 14) {
        if (AF(p, u16, 0) != 0) {
            func_sc03_118_80185944(i);
            switch (AF(p, u8, 9)) {
            case 1:
                v = AF(p, s16, 4);
                if (v < AF(p, u8, 13)) {
                    AF(p, s16, 4) = v + 8;
                } else {
                    AF(p, u8, 9) = 0;
                }
                break;
            case 2:
                w = AF(p, s16, 4);
                if (w == 0 || (w -= 0x10, AF(p, s16, 4) = w, w <= 0)) {
                    AF(p, u16, 0) = 0;
                }
                break;
            }
        }
    }
}

void func_sc03_118_80185944(s32 i) {
    WMtx m;
    SV4 v;
    SV4 o;
    V4 s;
    u8 *p;
    u8 *r;
    u16 cx;
    u16 cy;

    m = GsIDMATRIX;
    p = g_PrimNext;
    g_PrimNext = p + 0x1C;
    AF(p, u8, 3) = 6;
    AF(p, u8, 7) = 0x32;
    r = &D_sc03_118_801D4474 + i * 14;
    AF(p, u8, 4) = AF(r, u8, 6);
    AF(p, u8, 5) = AF(r, u8, 7);
    AF(p, u8, 6) = AF(r, u8, 8);
    AF(p, u8, 0xC) = AF(r, u8, 0xA);
    AF(p, u8, 0xD) = AF(r, u8, 0xB);
    AF(p, u8, 0xE) = AF(r, u8, 0xC);
    AF(p, u8, 0x14) = AF(r, u8, 0xA);
    AF(p, u8, 0x15) = AF(r, u8, 0xB);
    AF(p, u8, 0x16) = AF(r, u8, 0xC);
    cx = D_sc03_118_801D446C;
    cy = D_sc03_118_801D446E;
    RotMatrixZ(D_sc03_118_801D4472, &m);
    s.x = s.y = s.z = D_sc03_118_801D4470;
    ScaleMatrix(&m, &s);
    v.x = AF(r, u16, 0);
    v.y = v.z = 0;
    AF(p, u16, 8) = cx;
    AF(p, u16, 0xA) = cy;
    RotMatrixZ(AF(r, s16, 2) - (AF(r, s16, 4) >> 1), &m);
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x10) = cx + o.x;
    AF(p, u16, 0x12) = cy + o.y;
    RotMatrixZ(AF(r, s16, 4), &m);
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x18) = cx + o.x;
    AF(p, u16, 0x1A) = cy + o.y;
    ((PTag *)p)->addr = ((PTag *)&g_WorldOtOrg[D_800B9A02[0]].ot[16])->addr;
    ((PTag *)&g_WorldOtOrg[D_800B9A02[0]].ot[16])->addr = (u32)p;
    AddDrawModeAbr(&g_WorldOt[D_800B9A02[0]], 0x10, 1);
}

s32 func_sc03_118_80185C08(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc03_118_801D436C;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc03_118_80185C2C(s32 arg0) {
    s32 sp10;

    PosToSVec(arg0, (s32) &sp10);
    return func_sc03_118_80185C54((s32) &sp10);
}

s32 func_sc03_118_80185C54(s32 arg0) {
    s16 sxy[2];
    CV4 col;
    s32 p;
    s32 flag;

    col = D_sc03_118_801D2E54;
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers(arg0, (s32) sxy, (s32) &p, (s32) &flag);
    return func_sc03_118_80185CDC((s32) sxy, (s32) &col, 0x10, 0x18);
}

s32 func_sc03_118_80185CDC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc03_118_80185D48(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc03_118_80185E7C(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc03_118_80185D48(u16 *p, u8 *c, s32 g) {
    if (p != 0) {
        D_sc03_118_801D4360.a = p[0];
        D_sc03_118_801D4360.b = p[1];
    } else {
        D_sc03_118_801D4360.a = 0;
        D_sc03_118_801D4360.b = 0;
    }
    D_sc03_118_801D4368 = c[0];
    D_sc03_118_801D4369 = c[1];
    D_sc03_118_801D436A = c[2];
    AF(&D_sc03_118_801D4360, s32, 4) = g << 16;
}

void func_sc03_118_80185DB8(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc03_118_801D4360.a = sp10[0];
    D_sc03_118_801D4360.b = sp10[1];
}

void func_sc03_118_80185E30(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc03_118_80185F98();
    if (temp_v0 >= 0) {
        func_sc03_118_80185E7C(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

void func_sc03_118_80185E7C(s32 i, s32 ang, s32 spd) {
    u8 unused[0x10];
    Pt16 *p;
    s16 vx;
    s16 vz;
    u16 s;
    s32 m;
    s32 gg;

    p = &D_sc03_118_801D4360.pts[i];
    s = spd;
    s += rand() % (s >> 2) - (s >> 3);
    m = s;
    p->ang = ang + (rand() & 0x3F) - 0x20;
    vx = (rcos(p->ang) * m) >> 12;
    vz = (rsin(p->ang) * m) >> 12;
    p->x = vx << 16;
    p->z = vz << 16;
    p->active = (rand() & 0xF) + 0x10;
    p->y = m << 6;
    gg = D_sc03_118_801D4360.g;
    p->dy = gg << 6;
}

s32 func_sc03_118_80185F98(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0x10) {
        if (*(u16 *)&((u8 *)&D_sc03_118_801D436C)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc03_118_80185FD4(void) {
    Pt16 *p;
    s32 i;
    s16 g;
    s32 dx;
    s32 dz;

    g = D_sc03_118_801D4366;
    p = (Pt16 *)&D_sc03_118_801D436C;
    for (i = 0; i < 16; i++, p++) {
        if (p->active == 0) {
            continue;
        }
        if ((g > 0 && p->y >= 0x4001) || (g < 0 && p->y <= 0)) {
            p->active = 0;
            continue;
        }
        func_sc03_118_801860E8(i);
        dx = (rcos(p->ang) * g) << 4;
        dz = (rsin(p->ang) * g) << 4;
        p->x += dx;
        p->z += dz;
        p->y += p->dy;
    }
}

void func_sc03_118_801860E8(s32 i) {
    WMtx m;
    SV4 v;
    SV4 o;
    V4 s;
    u8 *p;
    Pt16 *r;
    u16 cx;
    u16 cz;

    p = g_PrimNext;
    m = GsIDMATRIX;
    g_PrimNext = p + 0x14;
    AF(p, u8, 3) = 4;
    AF(p, u8, 7) = 0x22;
    AF(p, u8, 4) = D_sc03_118_801D4368;
    AF(p, u8, 5) = D_sc03_118_801D4369;
    AF(p, u8, 6) = D_sc03_118_801D436A;
    r = (Pt16 *)&D_sc03_118_801D436C + i;
    cx = AF(r, u16, 0xA) + D_sc03_118_801D4360.a;
    cz = AF(r, u16, 0xE) + D_sc03_118_801D4360.b;
    RotMatrixZ(r->ang, &m);
    s.x = r->y;
    s.y = r->y;
    s.z = r->y;
    ScaleMatrix(&m, &s);
    v.x = r->active;
    v.y = v.z = 0;
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 8) = cx + (o.x >> 1) * 3;
    AF(p, u16, 0xA) = cz + (o.y >> 1) * 3;
    AF(p, u16, 0xC) = cx - (o.x >> 1);
    AF(p, u16, 0xE) = cz - (o.y >> 1);
    AF(p, u16, 0x10) = cx + o.x;
    AF(p, u16, 0x12) = cz + o.y;
    if (r->active & 1) {
        RotMatrixZ(0x400, &m);
    } else {
        RotMatrixZ(-0x400, &m);
    }
    v.x = 2;
    ApplyMatrixSV(&m, &v, &o);
    AF(p, u16, 0x10) += o.x;
    AF(p, u16, 0x12) += o.y;
    ((PTag *)p)->addr = ((PTag *)&g_WorldOtOrg[D_800B9A02[0]].ot[16])->addr;
    ((PTag *)&g_WorldOtOrg[D_800B9A02[0]].ot[16])->addr = (u32)p;
    AddDrawModeAbr(&g_WorldOt[D_800B9A02[0]], 0x10, 1);
}

void func_sc03_118_801863CC(u8 *arg0) {
    s32 t;
    s32 v;
    s32 q;

    switch (AF(arg0, s16, 0x70)) {
    case 0:
        if (SetupActor(arg0, &D_sc03_118_801C6F08) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_118_801C6FDC;
        SetScript(arg0, &D_sc03_118_801C8338);
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 1;
        StopWithGravity(arg0);
        SetLocalVelocityXZ(arg0, &D_sc03_118_801C6FA8);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_118_801D4558[AF(arg0, s16, 0xFC) * 8];
        q = SpawnActorArg(0x1EA, 1, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 1:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_118_801C6F3C);
        SetScript(arg0, &D_sc03_118_801C6F48);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_118_801C6F50 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_118_801C6F60;
        AF(arg0, u16, 0xE) += D_sc03_118_801C6F64;
        v = AF(AF(arg0, s32, 0x64), s32, 0xCC);
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(arg0, s32, 0x20), s32, 0x80) = v;
        AF(arg0, s32, 0xCC) = v;
        q = SpawnActorArg(0x1EA, 2, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_118_801C6F68);
        SetScript(arg0, &D_sc03_118_801C6F74);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_118_801C6F7C | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_118_801C6FA0;
        AF(arg0, u16, 0xE) += D_sc03_118_801C6FA4;
        return;
    case 7:
        if (SetupActor(arg0, &D_sc03_118_801C6F08) == 0) {
            return;
        }
        {
            u8 *q = D_sc03_118_801D4599;
            u8 *r = q - 1;
            D_sc03_118_801D459A = 0xFF;
            q[-1] = 0xFF;
            q[0] = 0;
            D_sc03_118_801D459A = 0;
            D_sc03_118_801D459C = 0;
            SetShapeCircle(r, 0x20);
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_118_801C6FDC;
        SetScript(arg0, &D_sc03_118_801C8338);
        AF(arg0, s16, 2) = 8;
        AF(arg0, s16, 0x34) = 0xB;
        StopWithGravity(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_118_801D4558[AF(arg0, s16, 0xFC) * 8];
        AF(arg0, s16, 0xFC) = 0;
        q = SpawnActorArg(0x1EA, 8, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        return;
    case 8:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_118_801C6F3C);
        SetScript(arg0, &D_sc03_118_801C6F48);
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_118_801C6F50 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_118_801C6F60;
        AF(arg0, u16, 0xE) += D_sc03_118_801C6F64;
        v = AF(AF(arg0, s32, 0x64), s32, 0xCC);
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(arg0, s32, 0x20), s32, 0x80) = v;
        AF(arg0, s32, 0xCC) = v;
        q = SpawnActorArg(0x1EA, 9, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
        }
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_118_801C6F68);
        SetScript(arg0, &D_sc03_118_801C6F74);
        AF(arg0, s16, 2) = 0xF;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_118_801C6F7C | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_118_801C6FA0;
        AF(arg0, u16, 0xE) += D_sc03_118_801C6FA4;
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 14:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_118_801C6F8C);
        SetScript(arg0, &D_sc03_118_801C6F98);
        AF(arg0, s16, 2) = 0xC;
        AF(AF(arg0, s32, 0x20), u16, 0x10) = AF(AF(AF(arg0, s32, 0x64), s32, 0x20), u16, 0x10);
        AF(AF(arg0, s32, 0x20), u16, 0x12) = AF(AF(AF(arg0, s32, 0x64), s32, 0x20), u16, 0x12);
        AF(arg0, s32, 0x14) = rsin(AF(AF(arg0, s32, 0x20), s16, 0x10)) << 9;
        AF(arg0, s32, 0x10) = -((rsin(AF(AF(arg0, s32, 0x20), s16, 0x12)) * rcos(AF(AF(arg0, s32, 0x20), s16, 0x10))) >> 3);
        AF(arg0, s32, 0x18) = -((rcos(AF(AF(arg0, s32, 0x20), s16, 0x12)) * rcos(AF(AF(arg0, s32, 0x20), s16, 0x10))) >> 3);
        AF(arg0, s32, 0x10) = AF(arg0, s32, 0x10) * 2 / 3;
        AF(arg0, s32, 0x14) = AF(arg0, s32, 0x14) * 2 / 3;
        AF(arg0, s32, 0x18) = AF(arg0, s32, 0x18) * 2 / 3;
        AF(arg0, s32, 0x1C) = 0x12C;
        return;
    case 15:
        if (SetupActor(arg0, &D_sc03_118_801C6F08) == 0) {
            return;
        }
        AF(arg0, u8, 0xC0) = 1;
        AF(arg0, s32, 0xB4) = -1;
        AF(arg0, s32, 0xBC) = (s32)&D_sc03_118_801C6FDC;
        SetScript(arg0, &D_sc03_118_801C8338);
        AF(arg0, s16, 2) = 0xD;
        AF(arg0, s16, 0x34) = 0xD;
        StopWithGravity(arg0);
        AF(arg0, s32, 0xCC) = (s32)&D_sc03_118_801D4558[AF(arg0, s16, 0xFC) * 8];
        q = SpawnActorArg(0x1EA, 0x11, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
            AF(arg0, s32, 0x6C) = q;
        }
        AF(arg0, s16, 0xFC) = 0xA;
        return;
    case 16:
    case 24:
        AF(arg0, s16, 2) = 0xE;
        AF(arg0, s32, 0x1C) = 6;
        return;
    case 17:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
            goto fail;
        }
        func_8001CA1C(t, &D_sc03_118_801C6F3C);
        SetScript(arg0, &D_sc03_118_801C6F48);
        AF(arg0, s16, 2) = 0x11;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_118_801C6F50 | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_118_801C6F60;
        AF(arg0, u16, 0xE) += D_sc03_118_801C6F64;
        v = AF(AF(arg0, s32, 0x64), s32, 0xCC);
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x80;
        AF(AF(arg0, s32, 0x20), s32, 0x80) = v;
        AF(arg0, s32, 0xCC) = v;
        q = SpawnActorArg(0x1EA, 0x12, arg0);
        if (q != 0) {
            AF(q, u16, 0xFE) = AF(arg0, u16, 0x36);
            AF(arg0, s32, 0x6C) = q;
        }
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
        if ((AF(arg0, s32, 0x20) = t = AllocActorModel()) == 0) {
        fail:
            RejectSpawn(arg0);
            return;
        }
        func_8001CA1C(t, &D_sc03_118_801C6F68);
        SetScript(arg0, &D_sc03_118_801C6F74);
        AF(arg0, s16, 2) = 0x10;
        AF(arg0, s16, 0x5C) = 0x810;
        AF(arg0, s32, 0x58) = 0x20000000 | ((s32)&D_sc03_118_801C6F7C | 0x40000000);
        AF(arg0, s32, 0xD0) = (s32)&D_sc03_118_801C6FA0;
        AF(arg0, u16, 0xE) += D_sc03_118_801C6FA4;
        AF(arg0, s16, 0x106) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x100) = (rand() & 0x1F) + 0x20;
        AF(arg0, s16, 0x102) = rand() & 0xFFF;
        AF(arg0, s16, 0x104) = rand() & 0xFFF;
        return;
    case 25:
        AF(arg0, s16, 2) = 0x13;
        return;
    }
}

void func_sc03_118_80186B78(StageActor *arg0) {
    SV8 out;
    SV8 sv;
    SV8 b;
    s32 t;
    u8 *p;
    ModelObj *m;
    s32 d;

    if ((s16)arg0->parent->id != arg0->workFE) {
        FreeActor(arg0);
        return;
    }
    if (arg0->param == 1 || arg0->param == 8) {
        p = (u8 *)arg0->ext0;
        {
            s32 a = ((u16)arg0->unkFC + 0x40) & 0xFFF;
            arg0->unkFC = a;
            AF(p, s16, 0) = AF(p, s16, 2) = AF(p, s16, 4) = (rsin(a) >> 6) + 0xBF;
        }
    }
    if ((s32)arg0->parent->model->unk04 & 0x80000000) {
        arg0->model->unk04 |= 0x80000000;
    } else {
        arg0->model->unk04 &= 0x7FFFFFFF;
    }
    arg0->model->scale.vx = (u16)arg0->parent->model->scale.vx;
    if (arg0->parent->param < 8) {
        arg0->work108 = ((u16)arg0->work108 + 0x40) & 0xFFF;
        arg0->model->rot.vy &= 0xFFF;
        arg0->parent->model->rot.vy &= 0xFFF;
        t = arg0->parent->model->rot.vy - arg0->model->rot.vy;
        if (t > 0x800) {
            t -= 0x1000;
        }
        if (t < -0x800) {
            t += 0x1000;
        }
        if (t > 0x200) {
            arg0->model->rot.vy += t - 0x200;
        } else if (t < -0x200) {
            arg0->model->rot.vy += t + 0x200;
        } else {
            arg0->model->rot.vy += t / 16;
        }
        arg0->model->rot.vy += rsin(arg0->work108) >> 6;
        m = arg0->model;
        RotMatrixZYX((u8 *)m + 0x10, (u8 *)m + 0x34);
        gte_SetRotMatrix((u8 *)arg0->model + 0x34);
        gte_SetTransMatrix((u8 *)arg0->parent->model + 0x34);
        p = (u8 *)arg0->ext1;
        sv.x = 0;
        sv.y = 0;
        sv.z = (AF(p, s16, 4) * arg0->model->scale.vx) >> 12;
        RotTransSV(&sv, &out, &t);
        arg0->pos[0].h.i = out.x;
        arg0->pos[1].h.i = out.y;
        arg0->pos[2].h.i = out.z;
        {
            s32 pad[1];
        }
        out.y -= 0x40;
        b.x = (u16)arg0->pos[0].h.i;
        b.y = (u16)arg0->pos[1].h.i + 0x10;
        b.z = (u16)arg0->pos[2].h.i;
        t = CollidePath(&out, &b, 1);
        if (t & 0x1000) {
            return;
        }
        if (t != 0) {
            s32 y = b.y - 0x10;
            d = arg0->pos[1].h.i - y;
            if (d < 5) {
                return;
            }
            if (d > 0x40) {
                d = 0x40;
            }
            arg0->model->rot.vx += d << 4;
            m = arg0->model;
            RotMatrixZYX((u8 *)m + 0x10, (u8 *)m + 0x34);
            gte_SetRotMatrix((u8 *)arg0->model + 0x34);
            gte_SetTransMatrix((u8 *)arg0->parent->model + 0x34);
            p = (u8 *)arg0->ext1;
            sv.x = 0;
            sv.y = 0;
            sv.z = (AF(p, s16, 4) * arg0->model->scale.vx) >> 12;
            RotTransSV(&sv, &out, &t);
            arg0->pos[0].h.i = out.x;
            arg0->pos[1].h.i = out.y;
            arg0->pos[2].h.i = out.z;
        } else {
            arg0->model->rot.vx -= 0x80;
            arg0->model->rot.vx &= 0xFFF;
            if ((u16)arg0->model->rot.vx > 0x800 && (u16)arg0->model->rot.vx < 0xC00) {
                arg0->model->rot.vx = 0xC00;
            }
        }
    } else {
        {
            s32 a = ((u16)arg0->work102 + (u16)arg0->work106) & 0xFFF;
            arg0->work102 = a;
            arg0->model->rot.vx = rcos(a) >> 6;
        }
        {
            s32 a = ((u16)arg0->work104 + (u16)arg0->work100) & 0xFFF;
            arg0->work104 = a;
            arg0->model->rot.vz = rcos(a) >> 6;
        }
        arg0->model->rot.vx += 0xC00;
        m = arg0->model;
        RotMatrixZYX((u8 *)m + 0x10, (u8 *)m + 0x34);
        gte_SetRotMatrix((u8 *)arg0->model + 0x34);
        gte_SetTransMatrix((u8 *)arg0->parent->model + 0x34);
        p = (u8 *)arg0->ext1;
        sv.x = 0;
        sv.y = 0;
        sv.z = (AF(p, s16, 4) * arg0->model->scale.vx) >> 12;
        RotTransSV(&sv, &out, &t);
        arg0->pos[0].h.i = out.x;
        arg0->pos[1].h.i = out.y;
        arg0->pos[2].h.i = out.z;
    }
}

void func_sc03_118_80187180(u8 *arg0) {
    SV4 a;
    SV4 b;
    s32 s;
    s16 y;

    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 0x10);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
    SetLocalVelocityXZ(arg0, &D_sc03_118_801C6FA8);
    a.x = b.x = AF(arg0, s16, 6);
    y = AF(arg0, s16, 0xA);
    a.y = b.y = y;
    a.z = b.z = AF(arg0, s16, 0xE);
    b.y = y + 0x40;
    s = CollidePath(&a, &b, 1);
    if (s & 0x6000) {
        if (!(s & 0x1000)) {
            s = DistSqToTarget(arg0);
            if (s < 0x4001 && TargetInFront(arg0, 0x200) == 1) {
                AF(arg0, s16, 2) = 4;
                AF(arg0, s16, 0xFC) = 0;
                AF(arg0, s16, 0x100) = AF(arg0, s16, 0xA);
            }
        }
    }
    if (s > 0x40000) {
        AF(arg0, s16, 2) = 1;
    }
    if (MoveCollideAt(arg0, &D_sc03_118_801C6FC4) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    }
}

void func_sc03_118_801872B4(u8 *arg0) {
    s32 i;
    StageActor *p;
    StageActor *next;
    s32 r;
    s16 ang;
    SV8 a;
    SV8 b;

    i = 0;
    if (--AF(arg0, s16, 0xFC) == 0) {
        p = arg0;
        do {
            p = p->link;
            i++;
        } while (p != 0);
        if (i < 7) {
            if (arg0 == 0) {
                return;
            }
            p = arg0;
            for (;;) {
                next = p->link;
                FreeActor(p);
                p = next;
                if (p == 0) {
                    return;
                }
            }
        }
    }
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) += 0x40;
    AF(AF(arg0, u8 *, 0x20), u16, 0x14) &= 0xFFF;
    r = MoveCollidePassableAt(arg0, &D_sc03_118_801C6FC4);
    if (r & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
        return;
    }
    i = 0;
    if (r & 0xC000) {
        AF(arg0, s16, 0x16) = -(rand() & 3) - 8;
        a.x = AF(arg0, u16, 6) - 0x20;
        a.y = AF(arg0, u16, 0xA) + 0x10;
        a.z = AF(arg0, u16, 0xE) + 0x20;
        b.x = a.x + 0x40;
        b.y = a.y;
        b.z = a.z;
        if (TraceMap(1, &a, &b) != 0) {
            AF(arg0, s16, 0x12) = -(rand() & 3) - 4;
            i = 1;
        } else {
            b.x = a.x + 0x40;
            b.y = a.y;
            b.z = a.z;
            if (TraceMap(1, &b, &a) != 0) {
                AF(arg0, s16, 0x12) = (rand() & 3) + 4;
                i = 2;
            }
        }
        a.x = AF(arg0, u16, 6);
        a.y = AF(arg0, u16, 0xA) + 0x10;
        a.z = AF(arg0, u16, 0xE);
        b.x = a.x;
        b.y = a.y;
        b.z = a.z + 0x40;
        if (TraceMap(1, &a, &b) != 0) {
            AF(arg0, s16, 0x1A) = -(rand() & 3) - 4;
            i += 4;
        } else {
            b.x = a.x;
            b.y = a.y;
            b.z = a.z + 0x40;
            if (TraceMap(1, &b, &a) != 0) {
                AF(arg0, s16, 0x1A) = (rand() & 3) + 4;
                i += 8;
            }
        }
        switch (i) {
        case 1:
            ang = 0x800;
            break;
        case 2:
            ang = 0;
            break;
        case 4:
            ang = 0x400;
            break;
        case 5:
            ang = 0x600;
            break;
        case 6:
            ang = 0x200;
            break;
        case 8:
            ang = 0xC00;
            break;
        case 9:
            ang = 0xA00;
            break;
        case 10:
            ang = 0xE00;
            break;
        }
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = ang;
    } else if (r & 0x2000) {
        PlaySoundAtActor(arg0, 0x833, 0);
        if ((rand() & 0xF) == 0) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x14) = 0;
            AF(arg0, s16, 2) = 1;
            AF(arg0, s16, 0x34) = 1;
            AF(arg0, s16, 0x70) = 0;
            AF(arg0, s16, 0x88) = AF(arg0, s16, 6);
            AF(arg0, s16, 0x8A) = AF(arg0, s16, 0xA);
            AF(arg0, s16, 0x8C) = AF(arg0, s16, 0xE);
            StopWithGravity(arg0);
            SetLocalVelocityXZ(arg0, &D_sc03_118_801C6FA8);
            for (p = AF(arg0, u8 *, 0x6C); p != 0; p = (u8 *)p->link) {
                p->state = 2;
                p->param -= 0x10;
                p->model->rot.vz = 0;
            }
            AF(arg0, s16, 0xFC) = 0;
        } else {
            AF(arg0, s16, 0x16) = -(rand() & 3) - 8;
        }
    }
    if (AF(arg0, s16, 0xA) > 0x64) {
        FreeActor(arg0);
    }
}

void func_sc03_118_80187674(StageActor *arg0) {
    SV out;
    SV in;
    s32 pad[2];
        s32 flag[2];
    u8 *m;
    s16 v;
    s32 a;

    if ((s16)arg0->parent->id != arg0->workFE) {
        FreeActor(arg0);
        return;
    }
    if (arg0->param == 0x11) {
        m = (u8 *)arg0->ext0;
        arg0->unkFC = ((u16)arg0->unkFC + 0x40) & 0xFFF;
        a = (u16)arg0->unkFC;
        v = (rsin(a) >> 6) + 0xBF;
        AF(m, s16, 0) = AF(m, s16, 2) = AF(m, s16, 4) = v;
    }
    if (AF(arg0->parent->model, TB, 4).top) {
        AF(arg0->model, TB, 4).top = 1;
    } else {
        AF(arg0->model, TB, 4).top = 0;
    }
    arg0->model->scale.vx = (u16)arg0->parent->model->scale.vx;
    arg0->model->rot.vz = (u16)arg0->parent->model->rot.vz;
    arg0->work102 = ((u16)arg0->work102 + (u16)arg0->work106) & 0xFFF;
    a = (u16)arg0->work102;
    arg0->model->rot.vx = rcos(a) >> 3;
    arg0->work104 = ((u16)arg0->work104 + (u16)arg0->work100) & 0xFFF;
    a = (u16)arg0->work104;
    arg0->model->rot.vy = rcos(a) >> 3;
    RotMatrixZYX((u8 *)arg0->model + 0x10, (u8 *)arg0->model + 0x34);
    gte_SetRotMatrix((u8 *)arg0->model + 0x34);
    gte_SetTransMatrix((u8 *)arg0->parent->model + 0x34);
    m = (u8 *)arg0->ext1;
    in.vx = 0;
    in.vy = 0;
    in.vz = (AF(m, s16, 4) * arg0->model->scale.vx) >> 12;
    RotTransSV(&in, &out, flag);
    arg0->pos[0].h.i = out.vx;
    arg0->pos[1].h.i = out.vy;
    arg0->pos[2].h.i = out.vz;
}

void func_sc03_118_801878B8(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a1_2;

    D_sc03_118_801C700C[AF(arg0, u16, 2)]();
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
        SyncModelPos((s32) arg0);
    }
}

void func_sc03_118_80187968(u8 *arg0) {
    UV4 a;
    UV4 b;
    u8 *o;

    AF(arg0, u16, 0x10A)++;
    if ((AF(arg0, u16, 0x10A) & 7) == 0) {
        o = (u8 *)SpawnProp(0x7B);
        if (o != 0) {
            AF(o, s32, 0x2C) = (AF(arg0, u16, 0x10A) & 0x18) >> 3;
            a.x = AF(arg0, u16, 6);
            a.y = AF(arg0, u16, 0xA);
            a.z = AF(arg0, u16, 0xE);
            b.x = a.x;
            b.y = a.y + 0x80;
            b.z = a.z;
            TraceMap(1, &a, &b);
            if (AF(&b, u8, 6) != 0) {
                AF(o, u16, 6) = AF(arg0, u16, 6);
                AF(o, u16, 0xA) = b.y;
                AF(o, u16, 0xE) = AF(arg0, u16, 0xE);
            } else {
                FreeProp(o);
            }
        }
    }
}

void func_sc03_118_80187A4C(u8 *arg0) {
    D_sc03_118_801C705C[AF(arg0, u16, 2)]();
}

void func_sc03_118_80187A88(s32 arg0) {
    s32 pad[4];
    s32 temp_v0;

    temp_v0 = SpawnProp(0x7C);
    if (temp_v0 != 0) {
        AF(temp_v0, u16, 6) = (u16) AF(arg0, u16, 6);
        AF(temp_v0, u16, 0xA) = (u16) AF(arg0, u16, 0xA);
        AF(temp_v0, u16, 0xE) = (u16) AF(arg0, u16, 0xE);
        func_8001CD50(AF(temp_v0, s32, 0x20), (s32) &D_sc03_118_801D4598);
    }
}

void func_sc03_118_80187AEC(u8 *arg0) {
    s16 sp10[6];
    s32 sp20;
    s32 t;

    sp10[1] = AF(g_ActiveCamera, s32, 0x5C);
    sp10[3] = AF(g_ActiveCamera, s32, 0x60);
    sp10[5] = AF(g_ActiveCamera, s32, 0x64);
    HeadingPitchTo(&sp20, arg0 + 4, sp10);
    t = sp20;
    AF(AF(arg0, void *, 0x20), s16, 0x10) = t;
    AF(AF(arg0, void *, 0x20), s16, 0x12) = t >> 0x10;
    ((void (*)(u8 *)) D_sc03_118_801C7064[AF(arg0, u16, 2)])(arg0);
}

void func_sc03_118_80187B80(u8 *arg0) {
    SV4 a;
    SV4 b;
    u8 *p;

    AF(arg0, u16, 0x5C) = 0xA810;
    AF(arg0, s16, 2) = AF(arg0, s16, 0x34);
    a.x = b.x = AF(arg0, s16, 6);
    b.y = AF(arg0, s16, 0xA);
    a.y = b.y - 0x18;
    a.z = b.z = AF(arg0, s16, 0xE);
    CollidePath(&a, &b, 1);
    AF(arg0, s16, 0xA) = b.y - 0x10;
    if (AF(arg0, s16, 0x70) == 0xF) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x14) = 0;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s16, 0x34) = 1;
        AF(arg0, s16, 0x70) = 0;
        AF(arg0, s16, 0x88) = AF(arg0, s16, 6);
        AF(arg0, s16, 0x8A) = AF(arg0, s16, 0xA);
        AF(arg0, s16, 0x8C) = AF(arg0, s16, 0xE);
        StopWithGravity(arg0);
        SetLocalVelocityXZ(arg0, &D_sc03_118_801C6FA8);
        for (p = AF(arg0, u8 *, 0x6C); p != 0; p = AF(p, u8 *, 0x6C)) {
            AF(p, s16, 2) = 2;
            AF(p, s16, 0x70) -= 0x10;
            AF(AF(p, u8 *, 0x20), s16, 0x14) = 0;
        }
        AF(arg0, s16, 0xFC) = 0;
        return;
    }
    StopWithGravity(arg0);
    SetLocalVelocityXZ(arg0, &D_sc03_118_801C6FA8);
}

void func_sc03_118_80187CA8(StageActor *arg0) {
    if (arg0->hp > 0) {
        PlaySoundAtActor((s32) arg0, 0x8C6, 0);
    }
}

void func_sc03_118_80187CD8(StageActor *arg0) {
    PlaySoundAtActor(arg0, 0x8C7, 0);
    GiveItem(0x10);
}

void func_sc03_118_80187D04(void) {
}

void func_sc03_118_80187D0C(u8 *arg0) {
    u8 *q;

    q = arg0 + 0x88;
    if (GroundDistSqTo(arg0, q) >= 0x4000) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStep(AF(AF(arg0, u8 *, 0x20), s16, 0x12), HeadingToPoint(arg0 + 4, q), 0x10);
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) &= 0xFFF;
        SetLocalVelocityXZ(arg0, &D_sc03_118_801C6FA8);
    } else if (TargetInSight(arg0, 0x200, 0x40000) == 1) {
        AF(arg0, s16, 2) = 3;
    }
    if (MoveCollideAt(arg0, &D_sc03_118_801C6FC4) & 0x1000) {
        AF(arg0, s16, 2) = 0x12;
    } else {
        DespawnIfFar(arg0);
    }
}

void func_sc03_118_80187DF8(StageActor *arg0) {
    arg0->unkFC = (u16) ((u16)arg0->unkFC + 0x20);
    arg0->pos[1].h.i = (u16) (u16)arg0->work100;
    arg0->pos[1].w = (s32) (arg0->pos[1].w - (rsin((s32) (s16) (u16)arg0->unkFC) << 0xA));
    if ((s16) (u16)arg0->unkFC >= 0x400) {
        arg0->state = 5;
        arg0->workFE = 4;
        PlaySoundAtActor((s32) arg0, 0x98F, 0);
    }
}

void func_sc03_118_80187E78(StageActor *arg0) {
    arg0->pos[1].w += 0x100000;
    arg0->pos[0].w -= rsin(arg0->model->rot.vy) << 8;
    arg0->pos[2].w -= rcos(arg0->model->rot.vy) << 8;
    if (--arg0->workFE == 0) {
        arg0->state = 6;
        ActorSegmentDamagesPlayer((s32) arg0, (s32) &D_sc03_118_801C6FB4, (s32) &D_sc03_118_801C6FBC, 0xF);
        arg0->workFE = 8;
    }
}

void func_sc03_118_80187F2C(u8 *arg0) {
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + 0xFFF80000);
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) + (rsin((s32) AF(AF(arg0, void *, 0x20), s16, 0x12)) << 7));
    AF(arg0, s32, 0xC) += rcos((s32) AF(AF(arg0, void *, 0x20), s16, 0x12)) << 7;
    if (--AF(arg0, s16, 0xFE) == 0) {
        if (DistSqToTarget((s32) arg0) < 0x4001) {
            if (TargetInFront((s32) arg0, 0x200) == 1) {
                AF(arg0, s16, 2) = 5;
                AF(arg0, u16, 0xFE) = 4U;
                PlaySoundAtActor((s32) arg0, 0x98F, 0);
                return;
            }
            goto block_5;
        }
block_5:
        AF(arg0, s16, 2) = 7;
    }
}

void func_sc03_118_8018800C(StageActor *arg0) {
    arg0->unkFC = (u16) ((u16)arg0->unkFC + 0x20);
    arg0->pos[1].h.i = (u16) (u16)arg0->work100;
    arg0->pos[1].w = (s32) (arg0->pos[1].w - (rsin((s32) (s16) (u16)arg0->unkFC) << 0xA));
    if ((s16) (u16)arg0->unkFC >= 0x800) {
        arg0->state = 3;
    }
}

void func_sc03_118_80188074(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xFC);
    if (temp_v0 != 0) {
        AF(arg0, s16, 0xFC) = (s16) (temp_v0 - 1);
        return;
    }
    if (DistSqToTarget((s32) arg0) <= 0xFFFFF) {
        AF(arg0, s16, 2) = 9;
    }
}

void func_sc03_118_801880D4(StageActor *arg0) {
    s32 sp10;
    u16 temp_v0;

    HeadingPitchTo((s32) &sp10, (u8 *)arg0 + 4, (s32) &g_PlayerPosX);
    arg0->model->rot.vy = (s16) (sp10 >> 0x10);
    arg0->model->rot.vx = (s16) sp10;
    temp_v0 = (u16)arg0->pos[1].h.i - 8;
    arg0->pos[1].h.i = temp_v0;
    if ((arg0->origin[1] - (s16) temp_v0) >= 0x81) {
        arg0->state = 0xA;
        arg0->unkFC = 0xC;
    }
    func_sc03_118_80187968((s32) arg0);
}

void func_sc03_118_80188164(StageActor *arg0) {
    u16 temp_v0;

    temp_v0 = (u16)arg0->unkFC - 1;
    arg0->unkFC = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        arg0->state = 0xB;
    }
    if ((s16) (u16)arg0->unkFC == 6) {
        SpawnActorArg(0x1EA, 0xE, (s32) arg0);
        PlaySoundId(0xC5D, 0);
    }
    func_sc03_118_80187968((s32) arg0);
}

void func_sc03_118_801881D8(StageActor *arg0) {
    u16 temp_v0;

    temp_v0 = (u16)arg0->pos[1].h.i + 8;
    arg0->pos[1].h.i = temp_v0;
    if ((arg0->origin[1] - (s16) temp_v0) <= 0) {
        arg0->state = 8;
        arg0->unkFC = 0x1E;
    }
    func_sc03_118_80187968((s32) arg0);
}

void func_sc03_118_80188228(s32 arg0) {
    s32 temp_v0;

    if ((MoveCollidePassable(arg0) != 0) || (ActorSegmentDamagesPlayer(arg0, (s32) &D_sc03_118_801C6FCC, (s32) &D_sc03_118_801C6FD4, 0xF) == 1) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        FreeActor(arg0);
        return;
    }
    func_sc03_118_80187A88(arg0);
}

void func_sc03_118_801882A8(StageActor *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    if (GroundDistSqToPlayer() <= 0x23FFFF) {
        temp_v0 = arg0->timer - 1;
        arg0->timer = temp_v0;
        if (temp_v0 == 0) {
            temp_s1 = SpawnActorArg(0x1EA, 0xF, (s32) arg0);
            arg0->timer = (s32) ((rand() & 0x1F) + 0x2D);
            if ((arg0->param == 0x18) && (temp_s1 != 0)) {
                AF(AF(temp_s1, void *, 0x20), s16, 0x12) = 0x400;
            }
        }
    }
}

void func_sc03_118_80188348(StageActor *arg0) {
    s16 temp_a1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_v0;

    arg0->state = 2;
    temp_v0 = (u16)arg0->param + 1;
    arg0->param = temp_v0;
    if ((s16) temp_v0 < 7) {
        temp_v0_2 = SpawnActorArg(0x1EA, (s32) (s16) temp_v0, (s32) arg0);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, u16, 0xFE) = (u16) arg0->id;
            AF(temp_v0_2, s16, 0x108) = (s16) (((u16)arg0->param - 1) << 9);
        }
    }
    temp_a1 = arg0->param;
    if (temp_a1 >= 8) {
        if (temp_a1 < 0xE) {
            temp_v0_3 = SpawnActorArg(0x1EA, temp_a1, (s32) arg0);
            if (temp_v0_3 != 0) {
                AF(temp_v0_3, u16, 0xFE) = (u16) arg0->id;
            }
        }
    }
    arg0->param = (u16) ((u16)arg0->param - 1);
    func_sc03_118_80186B78(arg0);
}

void func_sc03_118_80188418(StageActor *arg0) {
    StageActor *temp_v0_2;
    u16 temp_v0;

    arg0->state = 0x11;
    temp_v0 = (u16)arg0->param + 1;
    arg0->param = temp_v0;
    if ((s16) temp_v0 < 0x17) {
        temp_v0_2 = SpawnActorArg(0x1EA, (s32) (s16) temp_v0, (s32) arg0);
        if (temp_v0_2 != 0) {
            temp_v0_2->workFE = (u16) arg0->id;
            arg0->link = temp_v0_2;
            temp_v0_2->work108 = (s16) (((u16)arg0->param - 0x11) << 9);
        }
    }
    arg0->param = (u16) ((u16)arg0->param - 1);
    func_sc03_118_80187674((s32) arg0);
}

void func_sc03_118_801884AC(StageActor *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->pos[1].w + 0x40000;
    arg0->pos[1].w = temp_v0;
    if (temp_v0 > 0x400000) {
        FreeActor((s32) arg0, arg1);
    }
}

void func_sc03_118_801884E8(StageActor *arg0) {
    u8 *p;
    s32 n;
    s32 i;
    s32 t;

    p = (u8 *)&g_Actors;
    n = 0;
    i = 0;
    do {
        if (AF(p, u16, 0) == 0x1EA) {
            t = AF(p, s16, 0x70);
            if (t == 0 || t == 7 || t == 0xF) {
                n++;
            }
        }
        i++;
        p += 0x10C;
    } while (i < 0x60);
    if (n < 2) {
        p = (u8 *)SpawnActorArg(0x1EA, 0, arg0);
        if (p != 0) {
            AF(AF(p, u8 *, 0x20), s16, 0x12) = rand() & 0xFFF;
            AF(p, s16, 6) += (rand() & 0x7F) - 0x40;
            AF(p, s16, 0xE) += (rand() & 0x7F) - 0x40;
        }
    }
}

void func_sc03_118_801885D0(u8 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = AF(arg0, s32, 0x20);
    temp_s0 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_118_801D45D8;
    func_8001CD50(temp_s1, (s32) temp_s0);
    AF(temp_s1, s16, 0x1E) = 0xCCC;
    AF(temp_s1, s16, 0x10) = 0x400;
    AF(temp_s1, s16, 0x1A) = 0;
    AF(temp_s1, s16, 0x18) = 0;
    AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x50000000);
    SetShapeCircle((s32) temp_s0, 0x80);
    AF(temp_s0, u8, 2) = 0xFF;
    AF(temp_s0, u8, 1) = 0xFF;
    AF(temp_s0, u8, 0) = 0xFF;
    AF(temp_s0, u8, 5) = 0x40;
    AF(temp_s0, u8, 4) = 0x40;
    AF(temp_s0, u8, 6) = 0x80;
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc03_118_80188694(u8 *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 var_v0;
    s8 temp_v0_3;
    u32 temp_v0_2;
    void *temp_a2;
    void *temp_v1;

    temp_a1 = AF(arg0, s32, 0x1C) - 1;
    temp_a2 = (AF(arg0, s32, 0x2C) << 6) + &D_sc03_118_801D45D8;
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
    FreeProp((s32) arg0);
}

void func_sc03_118_80188748(u8 *arg0) {
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

void func_sc03_118_80188788(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x2C) - 0x80;
    AF(arg0, s32, 0x2C) = temp_v0;
    if (temp_v0 <= 0) {
        FreeProp((s32) arg0);
        return;
    }
    temp_v0_2 = rsin(temp_v0, arg1, arg2, arg3);
    AF(temp_s0, s16, 0x1A) = temp_v0_2;
    AF(temp_s0, s16, 0x18) = temp_v0_2;
}

s32 func_sc03_118_801887DC(p, d, e)
    u8 *p;
    s16 d;
    s16 e;
{
    UV4 a;
    UV4 b;
    UV4 *bp;
    s32 r;

    a.x = AF(p, u16, 6);
    a.y = AF(p, u16, 0xA);
    a.z = AF(p, u16, 0xE);
    b.x = a.x - ((rsin(AF(AF(p, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    b.y = a.y;
    bp = &b;
    b.z = a.z - ((rcos(AF(AF(p, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
    r = TraceMap(1, &a, bp);
    if ((r & 0x8000) && e != 0) {
        a.x = b.x + ((rsin(AF(AF(p, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
        a.y = b.y;
        a.z = b.z + ((rcos(AF(AF(p, u8 *, 0x20), u16, 0x12) & 0xFFF) * d) >> 12);
        r = TraceMap(1, bp, &a);
        AF(p, u16, 6) = a.x;
        AF(p, u16, 0xA) = a.y;
        AF(p, u16, 0xE) = a.z;
        if (!(AF(p, u16, 0x84) & 2)) {
            AF(p, u16, 0x84) |= 2;
        }
    } else {
        AF(p, u16, 0x84) &= ~2;
    }
    return r;
}

void func_sc03_118_80188990(u8 *o) {
    s32 f;
    u8 unused[16];

    switch (AF(o, u8, 0xC2)) {
    case 0:
        f = MoveCollide(o);
        D_sc03_118_801D46D8 = f;
        if (f & 0x6000) {
            if (f & 0x1000) {
                AF(o, s16, 2) = 2;
                AF(o, u8, 0xC1) = 0;
                AF(o, s16, 0x5E) = 0;
                AF(o, s32, 0x1C) = 0x30;
                PlaySoundId(0x7DF, 0);
                SetVar16(0xA, AF(o, s16, 0xFE));
                return;
            }
            PlaySoundId(0x754, 0);
            SpawnKind1C(o, 1);
            AF(o, u8, 0xC2) = 1;
            AF(o, s32, 0x14) = 0xFFF30000;
            AF(o, s32, 0x1C) = 0;
            AF(o, s32, 0x10) >>= 2;
            AF(o, s32, 0x18) >>= 2;
        }
        if (++AF(o, s32, 0x1C) >= 0x78) {
            EndReaction(o);
            AF(o, s16, 2) = 2;
            AF(o, s32, 0x1C) = 1;
        }
        break;
    case 1:
        D_sc03_118_801D46DC = AF(o, s32, 0x14);
        f = MoveCollide(o);
        D_sc03_118_801D46D8 = f;
        if (f & 0x6000) {
            if (f & 0x1000) {
                AF(o, s16, 2) = 2;
                AF(o, u8, 0xC1) = 0;
                AF(o, s16, 0x5E) = 0;
                AF(o, s32, 0x1C) = 0x30;
                PlaySoundId(0x7DF, 0);
                SetVar16(0xA, AF(o, s16, 0xFE));
                return;
            }
            PlaySoundId(0x754, 0);
            SpawnKind1C(o, 1);
            AF(o, s32, 0x14) = -D_sc03_118_801D46DC;
            AF(o, u8, 0xC2) = 2;
            AF(o, s32, 0x1C) = 0;
        }
        if (++AF(o, s32, 0x1C) >= 0x28) {
            EndReaction(o);
            AF(o, s16, 2) = 2;
            AF(o, s32, 0x1C) = 1;
        }
        break;
    case 2:
        AF(o, s32, 0x10) = (AF(o, s32, 0x10) * 15) >> 4;
        AF(o, s32, 0x18) = (AF(o, s32, 0x18) * 15) >> 4;
        f = MoveCollide(o);
        D_sc03_118_801D46D8 = f;
        if (f & 0x6000) {
            AF(o, s32, 0x14) = 0;
            if (f & 0x1000) {
                AF(o, s16, 2) = 2;
                AF(o, u8, 0xC1) = 0;
                AF(o, s16, 0x5E) = 0;
                AF(o, s32, 0x1C) = 0x30;
                PlaySoundId(0x7DF, 0);
                SetVar16(0xA, AF(o, s16, 0xFE));
                return;
            }
            if (!(AF(o, u16, 0x84) & 1)) {
                AF(o, u16, 0x84) |= 1;
                PlaySoundId(0x754, 0);
            }
            if ((AF(o, s32, 0x1C) & 3) == 3) {
                SpawnKind1C(o, 1);
            }
            if (++AF(o, s32, 0x1C) >= 0x11) {
                EndReaction(o);
                SnapToGround(o);
                AF(o, s16, 2) = 1;
                AF(o, u16, 0x84) &= ~1;
            }
        }
        break;
    }
    if (--AF(o, s16, 0x108) == 0) {
        SetVar16(0xA, AF(o, s16, 0xFE));
    }
}

void func_sc03_118_80188C8C(u8 *o) {
    u8 *w = &D_800AF630;
    s32 v;
    u16 t;

    if (SetupActor(o, &D_sc03_118_801D095C) != 0) {
        if ((u32)GetProgress() >= 0x1D7) {
            FreeActor(o);
            return;
        }
        AF(o, s16, 0x10A) = 1;
        v = GetVar16(10);
        if (!(v & 0x100)) {
            if ((s16)v == 0x3043 || (s16)v == 0x1052) {
                FreeActor(o);
                return;
            }
        } else {
            AF(o, s16, 6) = 0x10BD;
            AF(o, s16, 0xA) = -0x282;
            AF(o, s16, 0xE) = -0x374;
            AF(o, s16, 0x10A) = 0;
        }
        t = AF(w, u16, 0xA3D8);
        AF(o, u16, 0xFE) = t;
        SetVar16(10, (s16)t);
        AF(o, u8, 0xC0) = 1;
        AF(o, s32, 0xB4) = -0x489;
        AF(o, u8 *, 0xBC) = &D_sc03_118_801D09A4;
        AF(o, u8, 0xC1) = 0;
        AF(o, s32, 0xC4) = 1;
        StopWithGravity(o);
        SpawnShadow(o);
        SnapToGround(o);
        AF(o, s16, 2) = 1;
        AF(o, s16, 0xAE) = -1;
        AF(o, u8, 0x75) = 8;
        D_sc03_118_801D099C = AF(o, u16, 6);
        D_sc03_118_801D099E = AF(o, u16, 0xA);
        D_sc03_118_801D09A0 = AF(o, u16, 0xE);
    }
}

void func_sc03_118_80188DE4(StageActor *arg0) {
    ModelObj *t;

    if (arg0->unkFC != 0) {
        t = arg0->model;
        arg0->unkFC--;
        t->unk04 ^= 0x80000000;
    }
    if ((s16)D_80126B62 < arg0->pos[1].h.i - 0x30) {
        arg0->hitData = 0x20000000 | ((s32)&D_sc03_118_801D094C | 0x40000000);
    } else {
        arg0->hitData = 0x20000000 | ((s32)&D_sc03_118_801D093C | 0x40000000);
    }
    ((void (*)(u8 *))D_sc03_118_801D0A3C[arg0->state])(arg0);
}

void func_sc03_118_80188E8C(u8 *arg0) {
    AF(arg0, u16, 0x5C) = 0x8E10;
    if (AF(arg0, s16, 0x76) < 0x320) {
        AF(arg0, s16, 0x76) = 0x384;
    }
}

void func_sc03_118_80188EB0(u8 *arg0) {
    AF(arg0, u8, 0xC1) = 4;
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    SetLocalVelocity((s32) arg0, (s32) &D_sc03_118_801D0990);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, s16, 0x108) = 0x28;
    func_sc03_118_801887DC((s32) arg0, -0x28, 1);
}

void func_sc03_118_80188F14(u8 *arg0) {
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) & 0x7FFFFFFF);
    AF(arg0, s16, 0xFC) = 0;
    SetVar16(0xA, (s32) (s16) (AF(arg0, u16, 0xFE) | 0x100));
    D_sc03_118_801D099C = AF(arg0, u16, 6);
    D_sc03_118_801D099E = AF(arg0, u16, 0xA);
    D_sc03_118_801D09A0 = AF(arg0, u16, 0xE);
}

void func_sc03_118_80188F90(StageActor *arg0) {
    SetReactionStep(arg0, 3);
}

void func_sc03_118_80188FB0(u8 *o) {
    switch (AF(o, s16, 0x10A)) {
    case 0:
        break;
    case 1:
        if (DistSqToPlayer(o) < 0x1001) {
            StartEvent(o, &D_sc03_118_801D09F4);
            TakePlayerControlNoStop();
            AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToPlayer(o);
            AF(o, s16, 0x10A) = 2;
            SetProgress(0x1D1);
        }
        break;
    case 2:
        if (UpdateScript(o) == 1) {
            EndEvent(o);
            AF(o, s16, 0x10A) = 0;
        }
        break;
    }
}

void func_sc03_118_80189074(u8 *arg0) {
    s32 temp_v1_2;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) - 0x30);
    temp_v1_2 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + 2);
    AF(arg0, s32, 0x1C) = temp_v1_2;
    if (temp_v1_2 == 0) {
        AF(AF(arg0, void *, 0x20), u16, 0x10) = 0U;
        AF(arg0, s16, 2) = 1;
        AF(arg0, s32, 0x1C) = 2;
        AF(arg0, s16, 0xFC) = 0x3C;
        AF(arg0, u16, 6) = (u16) D_sc03_118_801D099C;
        AF(arg0, u16, 0xA) = (u16) D_sc03_118_801D099E;
        AF(arg0, u16, 0xE) = (u16) D_sc03_118_801D09A0;
        SnapToGround((s32) arg0);
        AF(arg0, u16, 0x5C) = 0x8E10;
        if (AF(arg0, s16, 0x76) < 0x320) {
            AF(arg0, s16, 0x76) = 0x384;
        }
    }
}

void func_sc03_118_8018913C(StageActor *arg0) {
    D_sc03_118_801D1070[arg0->state]();
}

void func_sc03_118_80189178(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc03_118_801D0D60) != 0) {
        if (!(GetFlag(D_sc03_118_801D0DC8[AF(arg0->message, u16, 0xA)]) & 0xFF)) {
            arg0->ext0 = SpawnTalkMarker(arg0, (s32) &func_sc03_118_80189824);
        } else {
            arg0->param = (u16) ((u16)arg0->param | 0x4000);
        }
        temp_v0 = SpawnActorArg(0x8F, (s32) (s16) (u16)arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc03_118_80189C94);
        arg0->state = 1;
    }
}

void func_sc03_118_8018924C(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc03_118_80189274(void) {
}

void func_sc03_118_8018927C(StageActor *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0->message;
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (GetFlag(0x1D) & 0xFF) {
            D_sc03_118_801D0FAC = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc03_118_801D0F10[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc03_118_801D0F98 = 0;
            SetFlag(D_sc03_118_801D0F10[AF(temp_s0, u16, 0xC)], 1);
            D_sc03_118_801D0F94 = 2;
        } else {
            D_sc03_118_801D0FAC = AF(temp_s0, s32, 0);
            var_v0 = D_sc03_118_801D0E8C[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc03_118_801D0F94 = 0;
            D_sc03_118_801D0F98 = var_v0;
        }
        RunScript((s32) arg0, (s32) &D_sc03_118_801D0FC0);
    } else {
        var_a1 = &D_sc03_118_801D102C;
        *var_a1 = AF(temp_s0, s32, 0);
        RunScript((s32) arg0, (s32) (var_a1 - 7));
    }
    arg0->state = 4;
    arg0->param = (u16) ((u16)arg0->param | 0x8000);
}

void func_sc03_118_801893C8(StageActor *arg0) {
    void *temp_s2;

    temp_s2 = arg0->message;
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        if (GetFlag(D_sc03_118_801D0DC8[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc03_118_801D0DC8[AF(temp_s2, u16, 0xA)] == 0x54) {
                SetProgress(0x5A);
                SetFlag(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (GetFlag(0x1D) & 0xFF)) {
                UploadFlagImages(0);
            }
            if (func_sc03_118_801895CC() == 1) {
                GiveItem(0x26);
            }
            arg0->param = (u16) ((u16)arg0->param & 0x8000);
            FreeActor(arg0->ext0);
        }
        arg0->state = 2;
    }
}

void func_sc03_118_801894E8(StageActor *arg0) {
    arg0->state = 2;
    FreeActor(arg0->ext0);
}

void func_sc03_118_80189514(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc03_118_80189524(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc03_118_80189534(u8 *arg0) {
    SetFlag(D_sc03_118_801D0DC8[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc03_118_80189574(u8 *arg0) {
    AddMoney((s32) &g_Player, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc03_118_801895A8(void) {
    return func_80174764() == 1;
}

s32 func_sc03_118_801895CC(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(GetFlag(D_sc03_118_801D0DC8[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc03_118_80189630(StageActor *arg0) {
    D_sc03_118_801D1098[arg0->state]();
}

void func_sc03_118_8018966C(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc03_118_801D0D94) != 0) {
        arg0->unkFC = (u16) arg0->parent->id;
        if ((u16)arg0->param & 0x4000) {
            SetScript(arg0, (s32) &D_sc03_118_801D1758);
            arg0->hitState = 0;
        } else {
            SetScript(arg0, (s32) &D_sc03_118_801D1538);
        }
        arg0->state = 1;
    }
}

void func_sc03_118_801896F4(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->unkFC != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_118_801D1548);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc03_118_801D1650);
        arg0->hitState = 0x8C00;
    }
}

void func_sc03_118_801897B4(StageActor *arg0) {
    s32 f;

    if (arg0->animTimer == 0) {
        f = arg0->workFE;
        arg0->state = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc03_118_801D1758);
        } else {
            SetScript((s32) arg0, (s32) &D_sc03_118_801D1538);
        }
        arg0->workFE = 0;
    }
}

s32 *func_sc03_118_80189824(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    Mover *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) g_PlayerModel + 0x34);
    gte_SetTransMatrix((u8 *) g_PlayerModel + 0x34);
    RotTransSV(&D_sc03_118_801D1088[0], &a, &f);
    RotTransSV(&D_sc03_118_801D1088[1], &b, &f);
    if (PathHitsModel(p->model, p->hitData, &a, &b) != 0 && TargetInFront(p, 0x300) != 0) {
        p->state = 3;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}
