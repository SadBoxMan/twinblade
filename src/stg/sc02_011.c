#include "common.h"
#include "gte.h"
#include "psyq.h"
#include "game.h"
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

void func_sc02_011_8017BE9C(void) {
}

void func_sc02_011_8017BEA4(void) {
}

void func_sc02_011_8017BEAC(void) {
}

void func_sc02_011_8017BEB4(void) {
}

typedef struct { s16 x, y, z, pad; } SV8;
typedef struct { s16 v[6]; } S12;
extern void (*D_sc02_011_80194734[])();
extern s32 func_800D222C();
extern void func_8001CF30();
extern void FreeEffect();
extern s32 SpawnEffect();
extern void func_800D20C0();
extern void func_800D23D0();
extern u8 D_sc02_011_8019471C;
extern void (*D_sc02_011_8019473C[])();
extern u8 D_sc02_011_80194728;
extern void (*D_sc02_011_80194750[])();
typedef struct { s16 x, y; } XY;
typedef struct { XY p; s16 n; s16 pad; XY q; s32 pad2; s32 col; s32 z; s32 code; } L181E88;
typedef struct { s32 x, y, z; } V3;
extern void func_800D22E4();
extern void (*D_sc02_011_80194868[])();
extern void AddMaxBp();
extern void AddBp();
extern s32 PlaySoundId();
extern void func_sc02_011_8017C558();
extern s16 D_80115214;
extern u16 D_801152BA;
extern s32 func_80128CFC();
extern void InitModel();
extern s32 AllocActorModel();
extern void StartEvent();
extern s32 IsEventDone();
extern void EndEvent();
extern void SetVar();
extern void func_8002955C();
extern s32 func_8002953C();
extern void GiveItem();
extern void FreeActor();
extern void (*D_sc02_011_80194B68[])();
extern u8 D_sc02_011_80194B58[];
extern void SetFlag();
extern s32 SpawnActorArg();
extern u8 g_Status;
extern u8 D_sc02_011_80194B38;
extern s32 IsOnScreen();
extern void FreeShadow();
extern void (*D_sc02_011_80194B8C[])();
void func_sc02_011_8017E380(u8 *arg0);
extern void (*D_sc02_011_80194B98[])();
void func_sc02_011_8017E464(u8 *arg0);
extern void (*D_sc02_011_80194C58[])();
extern void func_sc02_011_8017E5F0();
extern void (*D_sc02_011_80194C98[])();
extern void (*D_sc02_011_80194CB8[])();
extern void (*D_sc02_011_80194CC8[])();
extern void (*D_sc02_011_80194CD4[])();
extern void (*D_sc02_011_80194E58[])();
void func_sc02_011_8017FF9C(u8 *arg0);
extern void (*D_sc02_011_80194EB0[])();
extern void PlaySe();
extern void func_sc02_011_8018077C();
extern void (*D_sc02_011_80194EC4[])();
extern void ShowPlayerScene();
extern void ClearPlayerFlag7E2();
extern void (*D_sc02_011_80194ED8[])();
extern void func_sc02_011_80180E74();
extern void (*D_sc02_011_80194FA4[])();
void func_sc02_011_80181D74(void);
extern void StartFade();
extern s32 FadeStep();
extern void (*D_sc02_011_80194FAC[])();
void func_sc02_011_80181D9C(void);
extern void func_800D1EBC();
extern void (*D_sc02_011_80194FB8[])();
extern void (*D_sc02_011_80194FC4[])();
void func_sc02_011_80182090(void);
extern u8 D_sc02_011_80194FD4;
extern void StartPlayerActionScript();
extern u8 D_sc02_011_80194FE0;
extern void (*D_sc02_011_8019501C[])();
extern u8 D_sc02_011_80194FF4;
extern void (*D_sc02_011_80195030[])();
extern void func_sc02_011_801826D8();
extern void (*D_sc02_011_80195048[])();
extern s32 func_800D0CE0();
extern s32 func_sc02_011_80184A34();
extern void (*D_sc02_011_801957F8[])();
extern void (*D_sc02_011_801958B8[])();
extern void (*D_sc02_011_801958E8[])();
extern void (*D_sc02_011_80195948[])();
extern s32 func_sc02_011_80188168();
extern void (*D_sc02_011_80195CC4[])();
extern s32 func_sc02_011_8017E358();
extern s32 func_sc02_011_8017E43C();
extern void func_sc02_011_80186728();
extern void (*D_sc02_011_80195D40[])();
extern void func_sc02_011_80186740();
extern void (*D_sc02_011_80195D50[])();
extern void (*D_sc02_011_80195D58[])();
extern void (*D_sc02_011_80195DC4[])();
extern void (*D_sc02_011_80195F14[])();
extern void (*D_sc02_011_801960D4[])();
extern void (*D_sc02_011_801961D4[])();
extern void func_sc02_011_8018A284();
extern void (*D_sc02_011_801D6268[])();
extern void (*D_sc02_011_801D626C[])();
extern void NextState();
extern void (*D_sc02_011_801D6FDC[])();
extern void (*D_sc02_011_801D7024[])();
extern void (*D_sc02_011_801DF7B0[])();
extern void (*D_sc02_011_801DF818[])();
extern void (*D_sc02_011_801DF84C[])();
extern void (*D_sc02_011_801DF89C[])();
extern void (*D_sc02_011_801E33D8[])();
extern s32 SetupActor();
extern s32 SpawnTalkMarker();
extern u8 D_sc02_011_8019105C;
extern s32 GetFlag();
extern void RejectSpawn();
extern u8 D_sc02_011_801E30C8;
extern s32 * func_sc02_011_8018F390();
extern s32 D_sc02_011_801E3130[];
extern void RunScript();
extern s32 D_sc02_011_801E32FC;
extern s32 D_sc02_011_801E3300;
extern s32 D_sc02_011_801E3314;
extern s32 D_sc02_011_801E3328;
extern s32 D_sc02_011_801E3394;
extern s32 D_sc02_011_801E3278[];
extern s32 D_sc02_011_801E31F4[];
extern s32 UpdateScript();
extern void SetProgress();
extern void UploadFlagImages();
extern s32 func_sc02_011_8018F138();
extern void AddMoney();
extern s32 func_80174764();
extern void (*D_sc02_011_801E3400[])();
extern u8 D_sc02_011_801E30FC;
extern u8 D_sc02_011_801E38A0;
extern u8 D_sc02_011_801E3AC0;
extern u8 D_sc02_011_801E38B0;
extern u8 D_sc02_011_801E39B8;
extern void (*D_sc02_011_801E3B1C[])();
extern void (*D_sc02_011_801E4210[])();
extern void (*D_sc02_011_801E4224[])();
extern void (*D_sc02_011_801E4858[])();
extern void (*D_sc02_011_801E8654[])();
extern u8 D_sc02_011_801E8604;
extern void (*D_sc02_011_801E86CC[])();

void func_sc02_011_8017BEBC(u8 *arg0) {
    D_sc02_011_80194734[AF(arg0, u16, 2)]();
}

void func_sc02_011_8017BEF8(u8 *a) {
    SV8 p;
    SV8 r;
    u8 unused[0x20];
    SV8 *rp;
    u8 *t;
    s16 i;
    s32 o;
    s32 m;

    t = AF(a, u8 *, 0x34);
    SpawnEffect(0x11, a, AF(a, s16, 6), (s16)(AF(a, u16, 0xA) - 0x10), AF(a, s16, 0xE), 0, 0);
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
        m = SpawnEffect(0x12, a, AF(t, s16, 6), AF(t, s16, 0xA), AF(t, s16, 0xE), i, 0);
        if (m != 0) {
            AF(m, s16, 0x12) = r.x;
            AF(m, s16, 0x16) = r.y;
            AF(m, s16, 0x1A) = 0;
        }
    }
    o = func_800D222C(a, &D_sc02_011_8019471C, 0xFD);
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
        FreeEffect(a);
    }
}

void func_sc02_011_8017C0BC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
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
        FreeEffect((s32) arg0, (s32) arg0, arg2, arg3);
    }
}

void func_sc02_011_8017C150(u8 *arg0) {
    D_sc02_011_8019473C[AF(arg0, u16, 2)]();
}

void func_sc02_011_8017C18C(s32 arg0) {
    s32 pad[12];
    s32 temp_v0;

    temp_v0 = func_800D222C(arg0, (s32) &D_sc02_011_80194728, 0x18);
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
    FreeEffect(arg0);
}

void func_sc02_011_8017C230(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_a1 = AF(arg0, s32, 0x20);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 >= 0x1F) {
        FreeEffect((s32) arg0, temp_a1, arg2, arg3);
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

extern u8 D_sc02_011_8019491C;
extern s32 MoveCollide();
extern void UpdateModelZYX();
extern void SetLocalVelocity();
extern void HidePlayerScene();
extern void SetPlayerFlag7E2();

extern void ClearTimeChime();
extern void func_800D1E28();
extern void func_800D0C48();
extern s32 D_sc02_011_801EB908;
extern s32 SpawnActor();

extern s32 func_sc02_011_8017E3F4();
extern s32 func_sc02_011_801881BC();
extern s32 func_sc02_011_8017E4D8();
extern s32 TickObjTimer();
extern void SetObjTimer();
extern void func_sc02_011_80180010();
extern s32 D_80126CF0;
extern s32 D_8012750C;
extern s32 OpenMessage();
extern s16 D_80126B3C;
extern s32 GetMessageAnswer();
extern void CloseMessage();
extern void func_sc02_011_8017FE64();
extern s8 D_800B9A11;
extern u8 D_sc02_011_80194D94;
extern void SetPlayerMotion();
extern void StopSeqPlayer();
extern void EnableBgLayers();
extern u8 D_sc02_011_801D659C;
extern u8 D_sc02_011_801D663C;
extern void BumpSub2Copy();
extern u8 D_sc02_011_80195004;
extern s32 WalkToPointTurning();
extern void HoldCross();
extern void PushStickForward();
extern s32 PlayerEvent02();
extern void func_sc02_011_80182344();

extern s32 PlayerEvent04();
extern void ClearPlayerActionFlag01();
extern void SetPlayerActionFlag01();
extern void ClearObjPadInput();
extern u8 D_sc02_011_80196530;
extern s32 PlayerEvent01();
extern void func_sc02_011_801823B8();
extern u8 D_sc02_011_80195028;
extern s32 ClearPlayerActionFlag04();

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

extern void func_sc02_011_801823EC();
extern void BlendCameraThen();

extern void (*D_sc02_011_801955B0[])();
extern s32 func_sc02_011_80182DB8();
extern s32 GetVar();
extern s32 func_sc02_011_80184918();
extern u8 D_sc02_011_801950A4;
extern u8 D_sc02_011_801F3EA4;
extern s32 SpawnShadow();
extern void ResetScriptVM();
extern u8 D_sc02_011_80195198;
extern s32 StopWithGravity();
extern s32 func_sc02_011_80184A54();
extern u8 D_sc02_011_80195114;
extern u8 D_sc02_011_801F404C;
extern s32 func_sc02_011_80182380();
extern u8 D_sc02_011_80195144;
extern u8 D_sc02_011_801F40A4;
extern s32 TickTimer();
extern s32 MoveCollideAt();
extern void func_sc02_011_8018452C();
extern void MoveObject();

extern void func_sc02_011_80184738();
extern s32 func_sc02_011_80188228();
extern u8 D_sc02_011_801952D8;
extern s32 func_sc02_011_8018823C();
extern s16 D_80126B62;
extern u8 D_sc02_011_801954B8;
extern void func_sc02_011_8018490C();
extern void ResetSkipSe();
extern s32 g_PlayerPosX;
extern u16 g_PlayerX;
extern s16 D_80126B66;
extern s32 D_sc02_011_80195414;
extern void func_sc02_011_8018263C();
extern u8 D_sc02_011_801F45D4;
extern s32 D_80126B60;
extern s32 D_80126B64;
extern u8 D_sc02_011_80195648;
extern u8 D_sc02_011_80195734;
extern u8 D_sc02_011_801CA540;
extern u8 D_sc02_011_801958D8;
extern s32 SetState();
extern s32 RequestBgmPack();
extern u8 D_sc02_011_801959A8;
extern s32 func_sc02_011_80186548();
extern void ResumeClockTint();
extern void (*D_sc02_011_80195D18[])();
extern void func_sc02_011_80186818();
extern u8 D_sc02_011_801E4D54;
extern s32 func_sc02_011_80185A8C();
extern u8 D_sc02_011_801EB518;
extern s32 StepSpriteAnim();
extern s32 func_sc02_011_80186184();
extern void func_sc02_011_80186558();
extern void func_sc02_011_8018B1B0();
extern s32 func_sc02_011_801861FC();
extern s32 func_sc02_011_80186250();
extern s32 func_sc02_011_801865E4();
extern void func_sc02_011_801862A4();
extern u8 D_sc02_011_80195CAC;
extern void StartCameraShake();
extern s32 func_sc02_011_801863D4();
extern s16 D_sc02_011_801EBA08;

extern s8 D_sc02_011_801EB524;
extern s8 D_sc02_011_801EB525;
extern s8 D_sc02_011_801EB526;
extern s32 GetVarCF();
extern u8 D_sc02_011_801DF580;
extern u8 D_sc02_011_81195D48;
extern void func_sc02_011_80187654();
extern void DespawnActor();
extern u8 D_sc02_011_80195EFC;
extern s16 D_801270C0;
extern void (*D_sc02_011_80195FD8[])();
extern s32 D_8012704C;
extern s32 D_sc02_011_801EBA74;
extern void GainStat0FromActor();
extern u8 D_sc02_011_801D3B74;
extern u8 D_sc02_011_801D3EBC;
extern s32 func_sc02_011_80188DF4();
extern u8 D_sc02_011_801D458C;
extern u8 D_sc02_011_801D4494;
extern s32 TargetInSight();
extern u8 D_sc02_011_801D3ACC;
extern s32 MoveCollidePassable();
extern void SetReactionStep();
extern void func_sc02_011_80188554();
extern s32 D_sc02_011_801960B0;
extern s32 DistSqToTarget();
extern void func_sc02_011_80189050();
extern u8 D_sc02_011_801D3D64;
extern u8 D_sc02_011_801D3DEC;
extern void SpawnKind1C();
extern s32 D_sc02_011_801EB9F4;
extern s32 D_sc02_011_801EB9F8;
extern void UpdateClockTint();
extern void func_sc02_011_80189A50();
extern u8 D_sc02_011_801961AC;
extern u8 D_sc02_011_801D4E54;
extern void SetModelCullBox();
extern s32 GetPlayerByte1C7();
extern u8 D_sc02_011_801961BC;
extern void SetForwardVelocity();
extern s32 RestoreSavedCamera();
extern s32 PlayerEvent10();
extern void func_sc02_011_8018A1A4();
extern void SetMoverTimer();
extern s32 func_sc02_011_8018A264();
extern u16 D_sc02_011_801EB6DC;
extern u16 D_sc02_011_801EB6DE;
extern s16 D_sc02_011_801EB6E0;
extern s16 D_sc02_011_801EB6E2;
extern s32 func_sc02_011_8018A9BC();
extern void func_sc02_011_8018A8E8();
extern u8 D_sc02_011_801EB6E4;
extern void PosToSVec();
extern s32 func_sc02_011_8018AE30();
extern s32 func_sc02_011_8018B174();
extern void func_sc02_011_8018B058();
extern s16 g_PlayerAbsorbCounter;
extern u8 D_sc02_011_801DEB58;
extern u8 D_sc02_011_801DEF38;
extern void func_sc02_011_8018BEF0();
extern void (*D_sc02_011_801D6FBC[])();
extern s32 IsActorFar();
extern u8 D_sc02_011_801D6FE4;
extern void func_8001CA88();
extern s32 func_80143994();
extern u8 D_800D3918;
extern u8 D_sc02_011_801D7030;
extern s32 ActorSegmentDamagesPlayer();
extern void func_sc02_011_8018BF60();
extern void (*D_sc02_011_801DF74C[])();
extern void func_sc02_011_8018DBF4();
extern s32 func_sc02_011_8018DD60();
extern u8 D_sc02_011_801E2900;
extern s32 func_sc02_011_8018DAA8();
extern u8 D_sc02_011_801E29F8;
extern u8 D_sc02_011_801E2AD0;
extern u8 D_sc02_011_801E2BA8;
extern s32 HeadingToTarget();
extern u8 D_sc02_011_801E3018;
extern void TakeDamageAndRecoil();
extern u8 D_sc02_011_801DF790;
extern u8 D_sc02_011_801DF79C;
extern u8 D_sc02_011_801E3098;
extern u8 D_sc02_011_801DF69C;
extern void HideModel();
extern void func_sc02_011_8018E420();
extern s32 g_PlayerAction;
extern u8 D_sc02_011_801E41FC;
extern u8 D_sc02_011_801E4208;
extern s32 SpawnPropFrom();
extern u8 D_sc02_011_801E44CC;
extern u8 D_sc02_011_801E8554;
extern s32 * func_sc02_011_801904BC();
extern s32 D_sc02_011_801EB924;
extern void SaveContinuePoint();

extern u16 D_800B99D8;
extern s32 func_sc02_011_8018E0AC();
extern void FreeProp();
extern void MoveProp();

extern u16 g_Actors;
extern s16 D_sc02_011_801EB5DC;

extern s32 EaseValueFrac();


extern u8 D_sc02_011_801DEFE0;
extern void ZeroFill();




extern u8 D_sc02_011_801950D8;
extern u8 D_sc02_011_801F3EFC;
extern void StopMotion();

extern s32 FindActorByKind();
extern u8 D_sc02_011_801960B4;
extern u8 D_sc02_011_801DECF8;
extern void SpawnHeadMarker();


extern void func_sc02_011_8018AF24();


extern u8 D_sc02_011_801DF598;
extern u8 D_sc02_011_801DF6AC;

extern s32 D_sc02_011_80194C44[];
extern u8 D_800D6078;
extern u8 D_800D6118;
extern u8 D_sc02_011_80194FCC;
extern u8 D_sc02_011_8019500A[];
extern void StartRumbleScript();
extern void func_sc02_011_80181FA0();
extern s32 func_sc02_011_80181F6C();
extern void ClearVarCF();
extern void PressCross();
extern u8 D_sc02_011_801D40D4;

extern u8 D_sc02_011_80194CF0;
extern void StartSeqPlayer();
extern void DisableBgLayers();

extern u8 D_sc02_011_801EB488[];
extern u8 D_sc02_011_801EB489;
extern u8 D_sc02_011_801EB48A;
extern s8 D_sc02_011_801EB48C;
extern s8 D_sc02_011_801EB48D;
extern s8 D_sc02_011_801EB48E;
extern s32 AllocSprite16To3E();
extern void func_8001CD04();
extern void SetShapeCircle();
extern s32 func_sc02_011_801867BC();


extern u8 D_sc02_011_80195744;
extern u8 D_sc02_011_801F432C;
extern u8 D_sc02_011_80195A94;
extern s32 func_sc02_011_80186790();

extern u16 D_800B99DA;
extern s16 D_800B9A08;
extern u8 D_sc02_011_80194818;
extern u8 D_sc02_011_801947B4[];
extern s32 PosDist();
extern void TakePlayerControl();
extern s32 DistSqToPlayer();
typedef struct { s16 vx, vy, vz, pad; } SV;
extern u8 D_sc02_011_801EB220;
extern u8 D_sc02_011_801EB221;
extern u8 D_sc02_011_801EB222;
extern u8 D_sc02_011_801EB224;
extern u8 D_sc02_011_801EB225;
extern u8 D_sc02_011_801EB226;
extern s32 D_sc02_011_801EB424;
extern s32 D_sc02_011_801EB428;
extern s32 D_sc02_011_801EB42C;
extern s32 AllocSpriteInRange();
extern void func_8001CD50();
extern void RotMatrixYXZ();
typedef struct { u16 v[6]; } U12;
extern u16 D_sc02_011_801E5E30;

typedef struct { s16 m[3][3]; s16 pad; s32 t[3]; } MtxDCM;
typedef struct { u32 x; u32 y; u32 z; u32 n; u32 *poly; } ChunkDCM;
typedef struct { s32 zbox; s32 flag; s32 z; s32 sz0; s32 sz1; s32 sz2; s32 sz3; } GteDCM;
typedef struct { u16 x, y, z, pad; } UV4;
typedef struct { u8 r, g, b, cd; } CV4;
typedef struct { UV4 p0; UV4 p1; CV4 c0; CV4 c1; s32 code; } LineArg;
typedef struct { s16 m[3][3]; s32 t[3]; } WMtx;
typedef struct { s16 x, y, z, pad; } SV4;
typedef struct { SV4 p[4]; CV4 c[4]; s32 code; } QuadArg;
extern s8 D_sc02_011_80194E84[];
extern void SetScaleMatrix();
extern void SetMatrixTrans();
extern void DrawPrimG4Mtx();
extern WMtx GsIDMATRIX;
extern void DrawPrimLineG2Mtx();

extern s32 func_sc02_011_8018BA0C();
extern s32 func_sc02_011_8018B950();
typedef struct { u16 active; s16 y; s16 dy; s16 ang; s32 x; s32 z; } Pt16;
extern s16 D_sc02_011_801EB5D6;
extern void func_sc02_011_8018B2C4();
extern s32 rcos();
extern s32 rsin();
typedef struct { s16 a, b, c, g; u8 d, e; s16 f; Pt16 pts[16]; } PtSys;
extern PtSys D_sc02_011_801EB5D0;
extern s32 rand();

extern u8 D_sc02_011_80194744;
extern u8 *func_800D21C4();
extern void MulMatrix2();
extern void ApplyMatrixSV();
extern void func_sc02_011_80190BC4();

extern u8 D_sc02_011_80194894;
extern s32 MoveOnGround();
extern s32 SetScript();
extern u8 D_sc02_011_80194A2C;
extern u8 D_sc02_011_80194A60;
extern s32 D_sc02_011_801EB430;
extern s32 D_sc02_011_801EB434;
extern s32 D_sc02_011_801EB438;
extern u32 GetProgress();
extern s32 D_sc02_011_801EB43C;
extern s32 D_sc02_011_801EB444;
extern void func_sc02_011_8017DD34();
extern void func_sc02_011_8017DCC0();
extern s32 TurnStepToward();
extern s32 TurnStepToTarget();

typedef struct { s32 x, y, z, pad; } V4;
typedef struct { u32 *ot; u8 pad[0x10]; } OtRef;
typedef struct { u8 b[0x14]; } Ot14;
typedef struct { unsigned addr : 24; unsigned len : 8; } PTag;
extern u8 *g_PrimNext;
extern OtRef g_WorldOtOrg[];
extern Ot14 g_WorldOt[];
extern u16 D_800B9A02[];
extern void RotMatrixZ();
extern void ScaleMatrix();
extern s32 AddDrawModeAbr();
extern u8 D_sc02_011_801EB5D8;
extern u8 D_sc02_011_801EB5D9;
extern u8 D_sc02_011_801EB5DA;

extern u8 D_sc02_011_801E439C;
extern u8 D_sc02_011_801E4174;
extern s32 HeadingPitchTo();
extern u8 D_sc02_011_801E4218;

extern u8 D_sc02_011_80194C8C;
extern u8 D_sc02_011_80194CB0;
extern s32 D_sc02_011_80194BF4[];
extern void ObjLocalToWorld16();
extern s32 GetCameraPitch();
extern s32 GetCameraHeading();
extern void ProjectPointOtz();
extern void SVecToPos();
extern void InitSpriteKind1();
extern s32 D_sc02_011_80194C30[];
extern void func_sc02_011_8017F7B4();

extern CV4 D_sc02_011_801EB448;
extern u8 D_sc02_011_801EB44C;
extern u8 D_sc02_011_801EB44D;
extern u8 D_sc02_011_801EB44E;
extern CV4 D_sc02_011_80194BB8[];
extern SV D_sc02_011_80194C6C[];
extern void func_sc02_011_8017E72C();
extern UV4 D_sc02_011_801E47C4[];
extern s32 D_sc02_011_801E484C[];
extern SV4 D_sc02_011_801EB4C8[4];
extern s16 D_sc02_011_801EB4CC;
extern CV4 D_sc02_011_801EB4E8;
extern CV4 D_sc02_011_801EB4EC;
extern CV4 D_sc02_011_801EB4F0;
extern CV4 D_sc02_011_801EB4F4;
extern s32 D_sc02_011_801EB4F8;
extern CV4 D_sc02_011_80194BCC[];
extern CV4 D_sc02_011_80194BE0[];
extern void SetIdentityRot();
extern void DrawPrimG4Screen();

typedef struct { U12 e[9]; } U12x9;
extern u8 D_sc02_011_80194780;
extern u8 D_sc02_011_801947BC;
extern u8 D_sc02_011_801E5E08;
extern u8 D_sc02_011_801EB1B0;
extern u8 D_sc02_011_801EB1BC;
extern u8 D_sc02_011_801EB1BD;
extern u8 D_sc02_011_801EB1BE;
extern u8 D_sc02_011_801EB1CC;
extern u8 D_sc02_011_801EB1CD;
extern u8 D_sc02_011_801EB1CE;
extern u8 D_sc02_011_801EB1DD;
extern u8 D_sc02_011_801EB1DE;
extern u8 D_sc02_011_801EB1E0;
extern u8 D_sc02_011_801EB1E1;
extern u8 D_sc02_011_801EB1E2;
extern u8 D_sc02_011_801EB1E4;
extern u8 D_sc02_011_801EB1E5;
extern u8 D_sc02_011_801EB1E6;
extern u8 D_sc02_011_801EB1EC;
extern u8 D_sc02_011_801EB260;
extern void func_8001C810();
extern s32 D_sc02_011_80194AFC;
extern void RestorePrevPos();
extern void func_sc02_011_8017DE10();
extern s32 DistSq();
extern s32 GetPlayerAction();
extern void StartEventKeepPlayer();
extern s32 TargetInFront();
extern u16 g_Effects;
extern u16 D_sc02_011_80194C08[][2];
extern u8 D_sc02_011_80195184;
extern s16 D_sc02_011_801EBA7C;
extern void func_sc02_011_80184964();
extern s32 func_sc02_011_801845F4();
extern void func_sc02_011_8018487C();
extern s32 func_sc02_011_80183994();
extern s32 func_sc02_011_80183B30();
extern s32 MoveOnGroundOfs();
extern void SyncModelPos();
extern s32 D_sc02_011_801955F0;
extern u8 D_sc02_011_801F3FA4;
extern u8 D_sc02_011_801F41DC;
extern u8 D_sc02_011_80195120;
extern u8 D_sc02_011_80195DD0;
extern void InitSpriteKind3();
extern void StartSpriteAnim();
typedef struct { s32 vx, vy, vz, pad; } V4F20;
extern s32 D_sc02_011_8019609C;
extern u8 D_sc02_011_801D3CBC;
extern s32 func_sc02_011_80188250();
extern s32 HeadingToPoint();
extern void func_sc02_011_80188D80();
typedef struct { s16 x, y, z, pad; } SV_8E8A0;
typedef struct { s32 x, y, z, pad; } VEC_8E8A0;
typedef struct { s16 m[3][3]; s32 t[3]; } MAT_8E8A0;
typedef struct { u8 r, g, b, cd; } CV_8E8A0;
typedef struct { SV_8E8A0 pt[4]; CV_8E8A0 col[4]; s32 code; } PRIM_8E8A0;
typedef struct { s32 x, y, z; } POS_8E8A0;
extern void UpdateModelRot();
extern s32 ratan2();
extern void RotMatrixZYX();
extern void RotTransSV();
extern s32 D_sc02_011_801DF7F8[];
extern SV_8E8A0 D_sc02_011_801DF85C[][4];

typedef struct { s16 m[3][3]; s32 t[3]; } SMtx;
extern CV4 D_sc02_011_80194BA4[];

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


extern s32 EaseValue();
extern s32 EaseAngle();
extern void LocalToWorld();
extern s16 g_CameraFocus[];
extern s16 D_80126942;
extern s16 D_80126944;

extern s32 HeadingTo();
extern void AngleToVec2();
extern s32 CollidePath();

extern s32 func_sc02_011_801840C0();

typedef struct { u8 b[8]; } B8;
typedef struct { s16 m[3][3]; s32 t[3]; } FeMtx;
typedef struct { s16 x, y, z, pad; } FeSv;
extern u8 g_GroundNormal;
extern u8 D_sc02_011_801E3AE4;
extern WMtx *D_sc02_011_801E3B18;
extern WMtx D_sc02_011_801EB8E8[];
extern s32 FindGround();
extern s8 D_sc02_011_801E3AD0[];

extern s16 g_PlayerHitKind;
extern u8 D_sc02_011_801D6FA4;
extern SV8 D_sc02_011_801D6FB4;
extern s32 SpawnActorFromDef();
extern void func_80020DA4();
extern void func_80020F34();
extern SV8 D_sc02_011_801DF7B8[];
extern s32 PathHitsModel();
extern u8 g_Daytime;
extern s32 PlayerFlag400();
extern s32 func_sc02_011_8018E208();
extern void HitPlayer();

extern u8 D_sc02_011_801DF130;
extern u8 D_sc02_011_801D6FD4;
extern void DamageActorsNear();
extern s32 MoveCollidePassableAt();
extern u8 D_sc02_011_801DF7A8;
extern s32 func_sc02_011_8018DDD0();
extern s32 func_sc02_011_8018DE30();
extern u16 g_PlayerTarget;
extern u16 D_80126CB6;
extern u16 D_80126CB8;
extern void *g_PlayerModel;
extern void RotMatrixY();
extern void ApplyMatrixLV();
extern void DropItem();
extern u8 *SpawnKind1CAt();

extern u8 *D_sc02_011_80195FC0[];
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern void func_sc02_011_80187FA0();
extern void func_sc02_011_80188034();

extern s32 D_sc02_011_801EB1B4;
extern s32 D_sc02_011_801EB1B8;
extern s32 D_sc02_011_801EB1C0;
extern s32 D_sc02_011_801EB1C4;
extern s32 D_sc02_011_801EB1C8;
extern s32 D_sc02_011_801EB1D0;
extern s32 D_sc02_011_801EB1D4;
extern s32 D_sc02_011_801EB1D8;

typedef struct { unsigned lo : 31; unsigned top : 1; } TB;
extern void CallActionHandler();
extern SV8 D_sc02_011_801E8670[];

extern SV8 D_sc02_011_801E33F0[];
extern s16 D_sc02_011_801D66C8[];
extern void GetPartWorldMatrix();
extern CV4 D_sc02_011_801E9E68;
extern u8 D_sc02_011_80194A94[];
extern XY D_sc02_011_80194AB4[];
extern u8 D_sc02_011_80194984;
extern s32 g_PlayerHitData;
extern u8 D_80126B30;
extern void CopyPropPos();
extern void PushAlongView16();
extern void *g_ActiveCamera;
extern s32 D_8011F9C8;
extern s16 D_80126B3A;
s32 func_sc02_011_80186680(StageActor *arg0, s32 arg1, s32 arg2);
extern CV4 D_sc02_011_801E9E30;
extern CV4 D_sc02_011_801EB528;
extern void func_8001CD9C();
extern u8 D_sc02_011_801EB490;
extern u8 D_sc02_011_801EB494;
extern void PlaySePositional();
extern s32 D_sc02_011_80194C1C[];
extern u8 D_sc02_011_801D8AD8;
void func_sc02_011_80190C84(StageActor *o, s16 *v, s16 arg2);
extern s32 D_sc02_011_801DF5CC[][16];
extern s32 func_sc02_011_8018D820();
extern SV8 D_sc02_011_801DF68C;
extern SV8 D_sc02_011_801DF694;
extern u8 D_sc02_011_801DF838;
extern s32 SpawnPropAt();
extern u8 D_sc02_011_801D6EE8;
extern u8 D_sc02_011_801D6F1C;
extern s32 D_sc02_011_80195DB0[];
extern void func_sc02_011_8018D720();
extern u8 D_sc02_011_801E8680;
extern u8 D_sc02_011_801E868C;
extern s32 func_sc02_011_80190B6C();
extern s32 AllocActorSprite();

void func_sc02_011_8017C294(s32 arg0, SV *arg1, s32 arg2) {
    SV v;
    s16 i;
    s16 k;

    v.vx = arg1->vx;
    v.vy = arg1->vy - 20;
    v.vz = arg1->vz;
    LocalToWorld(AF(arg0, s32, 0x20) + 0x34, &v, &v);
    for (i = 0; i < 2; i++) {
        k = 1;
        if ((s16)arg2 == 0) {
            k = i;
        }
        SpawnEffect(0x25, arg0, v.vx, v.vy, v.vz, k, 0);
    }
}

void func_sc02_011_8017C360(u8 *arg0) {
    SV4 v;
    WMtx m;
    u8 *q;
    u8 *o;
    WMtx *pm;
    u16 r;
    s16 k;

    q = AF(arg0, u8 *, 0x34);
    o = func_800D21C4(arg0, &D_sc02_011_80194744, 0x2A);
    if (o == 0) {
        FreeEffect(arg0);
        return;
    }
    AF(arg0, u8 *, 0x20) = o;
    AF(o, s16, 0x2A) = 0x1F0;
    pm = (WMtx *)(AF(q, u8 *, 0x20) + 0x34);
    r = rand();
    if (AF(arg0, s32, 0x2C) == 0) {
        k = 0x1000;
        v.x = (r & 0xFF) + 0x240;
        AF(o, s16, 0x28) = 0x240;
        AF(o, s16, 0x18) = 0x1000;
    } else {
        k = 0x200;
        v.x = (r & 0xFF) * 4 + 0xD00;
        AF(o, s16, 0x28) = 0x244;
        AF(o, s16, 0x18) = 0x1800;
    }
    v.y = ((u32)(r & 0x7F00) >> 5) + 0xE00;
    v.z = 0;
    RotMatrixYXZ(&v, &m);
    MulMatrix2(pm, &m);
    v.x = 0;
    v.y = 0;
    v.z = k;
    ApplyMatrixSV(&m, &v, &v);
    AF(arg0, s32, 0x10) = v.x << 8;
    AF(arg0, s32, 0x14) = v.y << 8;
    AF(arg0, s32, 0x18) = v.z << 8;
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 2)++;
}

void func_sc02_011_8017C4BC(u8 *arg0) {
    D_sc02_011_80194750[AF(arg0, u16, 2)]();
}

void func_sc02_011_8017C4F8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        func_800D22E4();
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x1A000);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc02_011_8017C558(u8 *arg0, s32 arg1_0) {
    SV v;
    WMtx m;
    s16 arg1 = arg1_0;
    s16 s;
    s32 k;
    s32 x;
    s32 t;
    u8 *t0;
    u8 *a3;

    t0 = AF(arg0, u8 *, 0xCC);
    a3 = AF(arg0, u8 *, 0x20);
    if (arg1 != 0) {
        k = 0x40000000;
        s = 0x1000;
    } else {
        k = 0x50000000;
        s = 0x1333;
    }
    x = AF(a3, s32, 4) & 0xCFFFFFFF;
    t = k | 0x40000000;
    AF(a3, s32, 4) = x | t;
    if (AF(AF(arg0, u8 *, 0xCC), u16, 0) != 0) {
        AF(t0, s16, 0x1A) = s;
        AF(t0, s16, 0x18) = s;
    }
    v.vx = AF(arg0, u16, 0xFC) += 0x80;
    v.vy = AF(arg0, u16, 0xFE) += 0x100;
    v.vz = 0;
    RotMatrixYXZ(&v, &m);
    v.vy = 0;
    v.vx = 0;
    v.vz = 0x100;
    ApplyMatrixSV(&m, &v, &v);
    *(s32 *)&D_sc02_011_801EB1B0 = D_sc02_011_801EB1C0 = D_sc02_011_801EB1D0 = v.vx;
    D_sc02_011_801EB1B4 = D_sc02_011_801EB1C4 = D_sc02_011_801EB1D4 = v.vy;
    D_sc02_011_801EB1B8 = D_sc02_011_801EB1C8 = D_sc02_011_801EB1D8 = v.vz;
}

void func_sc02_011_8017C688(StageActor *arg0) {
    u8 *o;
    u8 *p;
    U12x9 *s;
    U12x9 *d;
    U12x9 *b;
    U12x9 *b2;
    s16 j;

    if (GetVar(*(u8 *)arg0->message + 0x3A) & 0xFF) {
        RejectSpawn(arg0);
        return;
    }
    if ((s32)arg0->model == 0) {
        if (SetupActor(arg0, &D_sc02_011_80194780) == 0) {
            return;
        }
        func_8001C810(arg0->model, &D_sc02_011_801E5E08);
        SetScript(arg0, (s16) D_801152BA * 16 + (s32) &D_sc02_011_801947BC);
        arg0->model->flags |= 0x20;
        arg0->model->unk80 = &D_sc02_011_801EB1B0;
        arg0->model->unk04 |= 0x40000000;
        AF(arg0, s16, 0xAE) = -3;
    }
    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext0 = o;
        p = &D_sc02_011_801EB1E0;
        func_8001CD50(o, p);
        D_sc02_011_801EB1E2 = 0x80;
        p[0] = 0x80;
        D_sc02_011_801EB1E1 = 0xE0;
        D_sc02_011_801EB1E5 = 0;
        D_sc02_011_801EB1E4 = 0;
        D_sc02_011_801EB1E6 = 0;
        SetShapeCircle(p, 0x38);
        s = (U12x9 *) &D_sc02_011_801E5E30;
        b = (U12x9 *) &D_sc02_011_801EB260;
        d = &b[(s16) D_801152BA];
        AF(o, s16, 0x10) = 0x400;
        AF(o, u16, 8) = (u16)arg0->pos[0].h.i;
        AF(o, u16, 0xA) = arg0->pos[1].h.i -= 4;
        AF(o, u16, 0xC) = (u16)arg0->pos[2].h.i;
        AF(o, s32, 4) |= 0x50000000;
        D_sc02_011_801EB1DE = 0xFF;
        D_sc02_011_801EB1EC = 0xFF;
        D_sc02_011_801EB1CE = 0xFF;
        D_sc02_011_801EB1CC = 0xFF;
        D_sc02_011_801EB1BE = 0xFF;
        D_sc02_011_801EB1BC = 0xFF;
        D_sc02_011_801EB1DD = 0x80;
        D_sc02_011_801EB1CD = 0x80;
        D_sc02_011_801EB1BD = 0x80;
        *d = *s;
        b2 = (U12x9 *) &D_sc02_011_801EB260;
        AF(arg0, U12x9 *, 0xD8) = &b2[(s16) D_801152BA];
        for (j = 5; j < 0x28; j++) {
            if (GetVar(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            arg0->work10A = 1;
        }
        D_80115214 = 0;
        D_801152BA += 1;
        ((XY *) arg0)->y += 1;
    }
}

void func_sc02_011_8017CA14(u8 *arg0) {
    u8 *obj;
    u8 *p;
    u8 *end;
    s16 found;
    s32 d;
    s32 w;
    u16 i;
    s16 j;

    obj = AF(arg0, u8 *, 0x20);
    if (!(D_800B99DA & 0xF)) {
        for (p = (u8 *) &g_Actors, end = p + 0x6480; p < end; p += 0x10C) {
            if (*(u16 *) p == 0x128) {
                found = p == arg0;
                break;
            }
        }
        d = PosDist(arg0 + 4, &g_PlayerPosX);
        if (d < 0x800) {
            w = 0x44 - ((d >> 5) & 0x38);
        } else {
            w = 4;
        }
        if (found != 0 || D_80115214 < w) {
            D_80115214 = w;
        }
    }
    AF(obj, u16, 0x12) += 0x20;
    func_sc02_011_8017C558(arg0, rand() & 0xF);
    if (AF(arg0, u16, 0x5E) != 0) {
        for (i = 0; i < 8; i++) {
            if (AF(arg0, u16, 0x5E) == D_sc02_011_801947B4[(s16) i]) {
                TakePlayerControl();
                AF(arg0, s32, 0x1C) = 0x20;
                AF(arg0, u16, 2) += 1;
            }
        }
        AF(arg0, u16, 0x5E) = 0;
        return;
    }
    if (AF(arg0, s16, 0x10A) == 0) {
        for (j = 5; j < 0x28; j++) {
            if (GetVar(j + 0x3B) & 0xFF) {
                break;
            }
        }
        if (j != 0x28) {
            AF(arg0, s16, 0x10A) = 1;
            return;
        }
        if (DistSqToPlayer(arg0) < 0x2A40) {
            if (D_800B9A08 == 0x3028) {
                if ((u16) (AF(arg0, u16, 0xA) - (*(u16 *)&D_80126B62) + 4) < 4) {
                    AF(arg0, u16, 0x106) += 1;
                }
                if (AF(arg0, s16, 0x106) < 2) {
                    return;
                }
            }
            StartEvent(arg0, &D_sc02_011_80194818);
            AF(arg0, s16, 0x10A) = 1;
            AF(arg0, u16, 2) = 0xA;
        } else {
            AF(arg0, u16, 0x106) = 0;
        }
    }
}

void func_sc02_011_8017CC8C(StageActor *arg0) {
    SV v;
    SV r;
    s32 *m;
    u8 *o;
    u8 *p;
    s32 *q;

    o = (u8 *) AllocSpriteInRange(0x7E, 0x100);
    if (o != 0) {
        arg0->ext1 = o;
        p = &D_sc02_011_801EB220;
        func_8001CD50(o, p);
        D_sc02_011_801EB221 = 0xFF;
        D_sc02_011_801EB222 = 0xFF;
        p[0] = 0xFF;
        D_sc02_011_801EB226 = 8;
        D_sc02_011_801EB224 = 8;
        D_sc02_011_801EB225 = 0x18;
        SetShapeCircle(p, 0x100);
        v.vx = (u16)arg0->pos[0].h.i;
        v.vy = (u16)arg0->pos[1].h.i - 0x38;
        v.vz = (u16)arg0->pos[2].h.i;
        func_800D20C0(&v, &r, 5);
        q = &D_sc02_011_801EB424;
        q[0] = v.vx;
        D_sc02_011_801EB428 = v.vy;
        D_sc02_011_801EB42C = v.vz;
        func_800D23D0(&r);
        m = q - 5;
        RotMatrixYXZ(&r, m);
        AF(o, s32 *, 0x34) = m;
        AF(o, s16, 0x1A) = 0;
        AF(o, s16, 0x18) = 0;
        AF(o, s32, 4) |= 0x50000000;
        arg0->state += 1;
    }
}

void func_sc02_011_8017CDD4(StageActor *arg0) {
    U12 *t;
    U12 *r;
    u8 *p;
    u8 *o;
    s16 *s4;
    s16 i;

    t = (U12 *) &D_sc02_011_801E5E30;
    r = AF(arg0, U12 *, 0xD8);
    p = (u8 *)arg0->message;
    o = (u8 *)arg0->ext1;
    s4 = (s16 *)arg0->model;
    if (p[1] != 0 && arg0->work108 == 0) {
        arg0->work108 = func_80128CFC(AF(p, u16, 2));
    }
    AF(o, u16, 0x18) = AF(o, u16, 0x1A) += 0x80;
    if (--arg0->timer != -1) {
        func_sc02_011_8017C558(arg0, 0);
        for (i = 0; i < 9; i++, t++, r++) {
            r->v[0] += (s16) t->v[0] >> 1;
            if (i != 0) {
                r->v[1] += ((s16) t->v[1] + 0x30) >> 1;
                r->v[2] += (s16) t->v[2] >> 1;
                r->v[3] += 0x40;
                r->v[4] += 0x80;
                r->v[5] += 0x100;
            }
        }
    } else {
        *s4 = 0;
        arg0->state += 1;
    }
}

void func_sc02_011_8017CF54(StageActor *arg0) {
    D_sc02_011_80194868[arg0->state]();
}

void func_sc02_011_8017CF90(void) {
    AddMaxBp((s32) &g_Player, 5);
    AddBp((s32) &g_Player, 0x270F);
    PlaySoundId(0xBFE, 0);
}

void func_sc02_011_8017CFDC(StageActor *arg0) {
    s32 pad[4];
    s16 *temp_s2;
    s32 temp_v0_2;
    u16 temp_v0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = arg0->message;
    temp_s2 = (s16 *)arg0->ext0;
    temp_s1 = arg0->ext1;
    if ((AF(temp_v1, u8, 1) != 0) && (arg0->work108 == 0)) {
        arg0->work108 = func_80128CFC((s32) AF(temp_v1, u16, 2));
    }
    temp_v0 = AF(temp_s1, u16, 0x1A) + 0x20;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    temp_v0_2 = arg0->timer - 1;
    arg0->timer = temp_v0_2;
    if (temp_v0_2 != -1) {
        func_sc02_011_8017C558((s32) arg0, rand() & 1);
        return;
    }
    D_80115214 = 4;
    D_801152BA -= 1;
    PlaySoundId(0x62E, 0);
    *temp_s2 = 0;
    arg0->timer = 0x28;
    arg0->state = (u16) (arg0->state + 1);
}

void func_sc02_011_8017D0D0(StageActor *arg0) {
    u8 *p;
    s16 v;
    s32 t;

    p = (u8 *)arg0->message;
    if (AF(p, u8, 1) == 0) {
        v = 1;
    } else {
        if (arg0->work108 == 0) {
            arg0->work108 = func_80128CFC(AF(p, u16, 2));
        }
        t = arg0->work108;
        v = t;
    }
    if (v != 0) {
        arg0->state++;
    }
}

void func_sc02_011_8017D150(StageActor *arg0) {
    SV8 sp10;
    SV8 sp18;
    ModelObj *temp_v0;
    u8 *temp_s0;

    temp_s0 = (u8 *)arg0->message;
    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, AF(temp_s0, s32, 4));
        SetScript((s32) arg0, AF(temp_s0, s32, 8));
        arg0->hitState = 0;
        arg0->hitData = 0;
        sp10.x = (u16)arg0->pos[0].h.i;
        sp10.y = (u16)arg0->pos[1].h.i;
        sp10.z = (u16)arg0->pos[2].h.i;
        func_800D20C0((s32) &sp10, (s32) &sp18, 0);
        func_800D23D0((s32) &sp18);
        arg0->model->rot.vy = (s16) (sp18.y + 0x800);
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc02_011_8017D204(StageActor *arg0) {
    u16 v;
    u8 *t;
    u8 *d;

    t = (u8 *)arg0->ext1;
    d = (u8 *)arg0->message;
    v = AF(t, u16, 0x1A) - 0xC0;
    AF(t, u16, 0x1A) = v;
    AF(t, u16, 0x18) = v;
    if ((s16) v < 0) {
        AF(t, s16, 0) = 0;
        StartEvent((s32) arg0, AF(d, s32, 0xC));
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc02_011_8017D270(StageActor *arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = (u8 *)arg0->message;
    if (IsEventDone((s32) arg0, arg1) != 0) {
        EndEvent((s32) arg0);
        SetVar(*temp_s1 + 0x3A, 1);
        func_8002955C();
        if (func_8002953C() >= 0x23U) {
            GiveItem(0x25);
        }
        arg0->state = (u16) (arg0->state + 1);
    }
}

void func_sc02_011_8017D2FC(StageActor *arg0, s32 arg1) {
    FreeActor(arg0, arg1);
}

void func_sc02_011_8017D31C(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_sc02_011_8017C558(arg0, rand(arg0, arg1, arg2, arg3) & 0xF);
    if (IsEventDone(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 1;
    }
}

void func_sc02_011_8017D370(StageActor *arg0) {
    u8 *g;

    g = &g_Status;
    if ((GetFlag(D_sc02_011_80194B58[arg0->param]) & 0xFF) || (arg0->param == 4 && GetProgress() < 200)) {
        RejectSpawn(arg0);
        return;
    }
    if (AF(g, u16, 0x1A) < 300 || AF(g, u16, 0x1A) >= 1320) {
        if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc02_011_80194A2C) != 0) {
            arg0->hitState |= 0x10;
            SetScript(arg0, &D_sc02_011_80194894);
            arg0->model->flags |= 0x10;
            D_sc02_011_801EB430 = arg0->origin[0] << 16;
            D_sc02_011_801EB434 = AF(arg0, s16, 0x8A) << 16;
            D_sc02_011_801EB438 = AF(arg0, s16, 0x8C) << 16;
            arg0->ext0 = SpawnShadow(arg0);
            arg0->unkFC = 0;
            arg0->timer = 0x10;
            arg0->state++;
        }
    } else if ((u8 *)arg0->model == 0 && SetupActor(arg0, &D_sc02_011_80194A60) != 0) {
        AF(arg0, s16, 0xAE) = -4;
        arg0->ext0 = SpawnShadow(arg0);
        arg0->state = 7;
    }
}

void func_sc02_011_8017D50C(u8 *arg0) {
    s32 r;
    s16 i;

    if (--AF(arg0, s32, 0x1C) == -1) {
        SetScript(arg0, &D_sc02_011_8019491C);
        if (++AF(arg0, s16, 0x10A) & 3) {
            if (AF(arg0, s16, 0x104) == 0) {
                r = rand();
                D_sc02_011_801EB43C = (AF(arg0, s16, 0x88) + (((r & 0x7F) << 3) - 0x200)) << 16;
                D_sc02_011_801EB444 = (AF(arg0, s16, 0x8C) + (((u32)(r & 0x7F00) >> 5) - 0x200)) << 16;
            } else {
                func_sc02_011_8017DD34(arg0);
                AF(AF(arg0, u8 *, 0x20), u16, 0x12) += 0xC00;
            }
        } else {
            for (i = 0; i < 2; i++) {
                (&D_sc02_011_801EB43C)[i] = (&D_sc02_011_801EB430)[i];
            }
        }
        if (AF(arg0, s16, 0x108) >= 0xD) {
            i = 2;
        } else {
            i = 8;
        }
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToward(arg0 + 4, &D_sc02_011_801EB43C, AF(AF(arg0, u8 *, 0x20), s16, 0x12), i);
        func_sc02_011_8017DCC0(arg0, (s16)(-3 - AF(arg0, s16, 0x104)), 0x50);
        if (AF(arg0, s16, 0x104) != 0) {
            SpawnEffect(2, arg0, 0, 0, 0, 2, 0);
        }
        AF(arg0, s16, 0x108) = 0;
        AF(arg0, s16, 2)++;
    } else if (AF(arg0, s16, 0x102) != 0) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, AF(arg0, s16, 0x102));
    }
}

void func_sc02_011_8017D710(s32 a) {
    s32 pad[4];
    s16 f;
    s16 go;
    s32 t;
    s32 k;
    s16 v;
    s32 *p;

    go = 0;
    f = MoveOnGround(a);
    if ((f & 0x6000) != 0x2000) {
        RestorePrevPos(a);
        func_sc02_011_8017DE10(a);
        if (AF(a, s32, 0x1C) >= 9) {
            AF(a, s32, 0x1C) -= 8;
        }
    }
    if (f & 0x8000) {
        goto body;
    }
    if ((f & 0x6000) != 0x2000) {
body:
        if (AF(a, s16, 0x106) == 0) {
            AF(a, s16, 0x106) = 0x111;
        }
        if (AF(a, s32, 0x1C) >= 5) {
            AF(a, s32, 0x1C) -= 4;
        }
        AF(a, s16, 0x108)++;
    } else {
        AF(a, s16, 0x106) = 0;
    }
    if (--AF(a, s32, 0x1C) != 0) {
        if (!(AF(a, s32, 0x1C) & 3) && DistSq(a + 4, &D_sc02_011_801EB43C) < 0x900) {
            AF(a, s32, 0x1C) = 1;
        }
        v = AF(a, s16, 0x106);
        if (v == 0) {
            AF(AF(a, s32, 0x20), s16, 0x12) += TurnStepToward(a + 4, &D_sc02_011_801EB43C, AF(AF(a, s32, 0x20), s16, 0x12), 8);
            func_sc02_011_8017DCC0(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        } else {
            AF(AF(a, s32, 0x20), s16, 0x12) += v;
            func_sc02_011_8017DCC0(a, (s16)(-3 - AF(a, s16, 0x104)), 0);
        }
        if (AF(a, s16, 0x104) != 0) {
            if (AF(a, u32, 0x94) < 11) {
                AF(a, u32, 0x94)++;
            }
            if (!(AF(a, s32, 0x1C) & 7)) {
                go = 1;
            }
        }
    } else {
        StopMotion(a);
        SetScript(a, &D_sc02_011_80194894);
        AF(a, s32, 0x1C) = 0x14 - AF(a, s16, 0x104) * 2;
        if (DistSqToPlayer(a) < 0x24000) {
            AF(a, s16, 0x102) = 10 - AF(a, s16, 0x104);
        } else {
            AF(a, s16, 0x102) = 0;
        }
        if (AF(a, s16, 0x104) != 0) {
            AF(a, s16, 0x104) -= 4;
            if (AF(a, s16, 0x104) < 0) {
                AF(a, s16, 0x104) = 0;
            }
        }
        AF(a, s16, 2) = 1;
    }
    if (AF(a, s16, 0xFC) != 0) {
        if (GetPlayerAction() != 0) {
            p = &D_sc02_011_80194AFC;
            AF(a, s16, 0x10A) = 0;
            *p = AF(a, u16, 0x88) | (AF(a, s16, 0x8C) << 16);
            StartEventKeepPlayer(a, p - 7, p);
            AF(a, s16, 0x98) = 0;
            AF(a, s32, 0x1C) = 0x14;
            StopMotion(a);
            AF(a, s16, 2) = 3;
        }
        return;
    }
    if (AF(a, u16, 0x5E) != 0) {
        AF(AF(a, s32, 0x20), s16, 0x12) = AF(a, s16, 0x62);
        func_sc02_011_8017DCC0(a, -15, 0);
        func_sc02_011_8017DD34(a);
        AF(a, u16, 0x5E) = 0;
        AF(a, s16, 0x104) = 10;
        go = 1;
    } else {
        t = DistSqToPlayer(a);
        if (t < 0x10000) {
            k = 0;
            if (t >= 0x4000) {
                k = (TargetInFront(a, 0x500) != 0) * 4;
            } else if (t >= 0x1000) {
                if (TargetInFront(a, 0x680) != 0) {
                    k = 7;
                }
            } else {
                k = 9;
            }
            if (k != 0) {
                func_sc02_011_8017DD34(a);
                if (AF(a, s16, 0x104) == 0) {
                    AF(AF(a, s32, 0x20), s16, 0x12) = HeadingToTarget(a) - 0x800;
                    go = 1;
                }
                AF(a, s16, 0x104) = k;
                func_sc02_011_8017DCC0(a, -7 - k, 0);
            }
        }
    }
    if (go) {
        SpawnEffect(2, a, 0, 0, 0, 2, 0);
    }
}

void func_sc02_011_8017DB04(u8 *arg0) {
    s32 f;

    IsEventDone(arg0);
    if (AF(arg0, s16, 0x108) < 0x10) {
        if (AF(arg0, s16, 0xFE) != 0) {
            f = MoveOnGround(arg0);
        } else {
            f = MoveCollidePassable(arg0);
        }
        if (f & 0x8000) {
            AF(arg0, s16, 0x108)++;
        }
        if (f & 0x2000) {
            AF(arg0, s16, 0xFE) = 1;
        } else {
            AF(arg0, s16, 0xFE) = 0;
        }
    } else {
        MoveObject(arg0);
    }
    if (!(AF(arg0, s32, 0x1C) & 7)) {
        SpawnEffect(2, arg0, 0, 0, 0, 2, 0);
    }
    if (!(AF(arg0, s32, 0x1C) & 0xF)) {
        PlaySoundId(0x828, 0);
    }
    if (--AF(arg0, s32, 0x1C) == -1 || IsOnScreen(arg0, 0x8000A8) == 0) {
        AF(arg0, s16, 0x10A) = 1;
        StopMotion(arg0);
        SetScript(arg0, &D_sc02_011_80194894);
        AF(arg0, s16, 0x104) = 0;
        AF(arg0, s16, 0x102) = 0xA;
        AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x80000000;
        FreeShadow(AF(arg0, u8 *, 0xCC));
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, s16, 2) = 6;
    }
}

void func_sc02_011_8017DC84(StageActor *arg0) {
    D_sc02_011_80194B68[arg0->state]();
}

void func_sc02_011_8017DCC0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 w;

    AngleToVec2(&w, AF(AF(arg0, void *, 0x20), s16, 0x12), (s16)arg1 << 4);
    AF(arg0, s32, 0x10) = (s16)w << 12;
    AF(arg0, s32, 0x18) = (w >> 16) << 12;
    if ((s16)arg2 != 0) {
        AF(arg0, s32, 0x1C) = (s16)arg2;
    }
}

void func_sc02_011_8017DD34(u8 *arg0) {
    s32 a;
    s32 i;
    s32 r;
    s32 x;
    s32 z;
    s32 pad[2];
    a = (HeadingTo(&g_PlayerPosX, &D_sc02_011_801EB430) >> 7) & 0x18;
    i = D_sc02_011_80194A94[a | ((HeadingTo(arg0 + 4, &D_sc02_011_801EB430) >> 9) & 7)];
    r = rand();
    x = AF(arg0, s16, 0x88) + D_sc02_011_80194AB4[i].x - 0x100;
    D_sc02_011_801EB43C = (x + ((r & 0x7F) << 2)) << 16;
    z = AF(arg0, s16, 0x8C) + D_sc02_011_80194AB4[i].y - 0x100;
    D_sc02_011_801EB444 = (z + ((u32)(r & 0x7F00) >> 6)) << 16;
}


typedef struct { s16 x, y, z; } SV6;
typedef struct { s32 w[4]; } W16;
typedef struct { s16 x, y; s32 col; } Star8;
typedef struct { SV8 p[3]; CV4 c[3]; s32 code; } TriArg;

typedef struct { s32 a; s32 c4; s32 c8; s16 ang; s16 e; s32 pad10[2]; s32 t18; s32 done; s32 f20; } Fx24;
typedef struct { s16 x, y, z, w; s16 a, b, c, d; s32 e; } BF70S;
typedef struct { SV8 v[4]; s32 a, b, c, d, e, f; } Q;
typedef struct { s16 v; s16 pad[5]; } E12s;
typedef struct { u8 v; u8 pad[11]; } E12b;
typedef struct { u32 tag; u32 code; s16 x, y; u8 u, v; u16 clut; s16 w, h; } Sprt;
typedef struct { s8 lo; u8 hi; } S8P;
typedef struct { u16 v; } U16R;
typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0; u8 r1, g1, b1, p1; s16 x1, y1; u8 r2, g2, b2, p2; s16 x2, y2; u8 r3, g3, b3, p3; s16 x3, y3; } PolyG4;
typedef struct { s32 v; } S32R;
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
typedef struct { s32 v; u8 pad[8]; } E12w;
typedef struct { s32 v; s32 pad; } E8w;
typedef struct { SV4 p[4]; s32 c[4]; s32 col; s32 code; u8 flag; } Q74;
extern s16 g_WallNormal;
extern s16 D_801152B4;
extern s32 TraceMap();

void func_sc02_011_8017DE10(u8 *o) {
    SV8 a;
    SV8 b;
    WMtx m;
    s32 e;
    s32 v;
    s32 d;
    s16 r;

    a.x = AF(o, s16, 6) + AF(o, s16, 0x12);
    a.y = AF(o, s16, 0xA) + 8;
    a.z = AF(o, s16, 0xE) + AF(o, s16, 0x1A);
    b.x = AF(o, s16, 6);
    b.y = AF(o, s16, 0xA) + 8;
    b.z = AF(o, s16, 0xE);
    if (TraceMap(1, &a, &b) & 0xC000) {
        e = ratan2(g_WallNormal, D_801152B4) & 0xFFF;

        v = ratan2(AF(o, s32, 0x10), AF(o, s32, 0x18)) & 0xFFF;
        d = v - e;
        d <<= 16;
        if (d < 0) {
            v += 0x480;
            r = e - v;
        } else {
            v -= 0x480;
            r = e - v;
        }

        a.x = AF(o, s16, 6);
        a.y = AF(o, s16, 0xA);
        a.z = AF(o, s16, 0xE);
        m = GsIDMATRIX;
        RotMatrixY(r, &m);

        b.x = AF(o, s16, 0x12);
        b.y = AF(o, s16, 0x16);
        b.z = AF(o, s16, 0x1A);
        ApplyMatrixSV(&m, &b, &b);

        b.x = AF(o, s16, 6) + (b.x >> 1);
        b.y = AF(o, s16, 0xA) + (b.y >> 1);
        d = b.z >> 1;
        b.z = AF(o, s16, 0xE) + d;

        if (CollidePath(&a, &b, 0) & 0x2000) {
            AF(o, s16, 6) = b.x;
            AF(o, s16, 0xA) = b.y;
            AF(o, s16, 0xE) = b.z;
        }
    }
}

void func_sc02_011_8017E024(s32 arg0) {
    s32 v[4];
    u8 *p;
    u16 temp_v0;

    IsEventDone(arg0);
    temp_v0 = AF(arg0, u16, 0x5E);
    if ((temp_v0 == 9) | (temp_v0 == 0x11)) {
        p = (u8 *) SpawnActorArg(0x30, 2, arg0);
        if (p != 0) {
            AF(p, u16, 0xA) -= 0x20;
            AF(p, u16, 0x16) -= 0x10;
            PlaySoundId(0x829, 0);
            AF(arg0, u16, 0x5E) = 0;
            SetScript(arg0, (s32) &D_sc02_011_80194984);
            v[0] = 0;
            v[1] = 0xFFF20000;
            v[2] = 0x70000;
            SetLocalVelocity(arg0, v);
            AF(arg0, s32, 0x48) = 0x10000;
            AF(arg0, s32, 0x1C) = 0x40;
            AF(arg0, s16, 0x108) = 0;
            AF(arg0, s16, 2) = 4;
        }
    }
}

void func_sc02_011_8017E0F8(s32 arg0, s32 arg1) {
    s32 v[4];
    s32 temp_v0;
    u8 *temp_v1;

    IsEventDone(arg0, arg1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (MoveCollide(arg0) & 0x2000)) {
        SpawnEffect(2, arg0, 0, 0, 0, 0, 0);
        SetScript(arg0, (s32) &D_sc02_011_8019491C);
        temp_v1 = AF(arg0, u8 *, 0x20);
        AF(temp_v1, u16, 0x12) = (u16) (AF(temp_v1, u16, 0x12) + 0xB00);
        v[0] = 0;
        v[1] = 0;
        v[2] = -0xC0000;
        UpdateModelZYX(arg0);
        SetLocalVelocity(arg0, v);
        AF(arg0, s16, 0xFE) = 1;
        AF(arg0, s32, 0x1C) = 0x40;
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc02_011_8017E1C8(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        SetFlag((s32) D_sc02_011_80194B58[arg0->param], 1);
        FreeActor(arg0);
    }
}

void func_sc02_011_8017E220(u8 *arg0) {
    s32 temp_v0;
    u8 *g = &g_Status;

    if ((AF(arg0, s16, 0x100) == 0) && (AF(arg0, u16, 0x5E) != 0)) {
        StartEvent((s32) arg0, (s32) &D_sc02_011_80194B38);
        AF(arg0, s16, 0x100) = 1;
        AF(arg0, s16, 2) = 8;
        return;
    }
    if (((u32) (AF(g, u16, 0x1A) - 0x12C) >= 0x3FCU) && (IsOnScreen((s32) arg0, 0x9000B8) == 0)) {
        if (SpawnActorArg(0x1F8, (s32) AF(arg0, s16, 0x70), (s32) arg0) != 0) {
            FreeShadow(AF(arg0, s32, 0xCC));
            FreeActor((s32) arg0);
            goto block_7;
        }
    } else {
block_7:
        if (AF(arg0, u16, 0x5E) != 0) {
            temp_v0 = AF(arg0, s32, 0x1C) + 1;
            AF(arg0, s32, 0x1C) = temp_v0;
            if (temp_v0 >= 0x10) {
                AF(arg0, u16, 0x5E) = 0U;
                AF(arg0, s32, 0x1C) = 0;
            }
        }
    }
}

void func_sc02_011_8017E318(StageActor *arg0, s32 arg1) {
    if (IsEventDone(arg0, arg1) != 0) {
        EndEvent(arg0);
        arg0->state = 7;
    }
}

s32 func_sc02_011_8017E358()
{
    return SetActionHandler((s32) func_sc02_011_8017E380);
}

void func_sc02_011_8017E380(u8 *arg0) {
    D_sc02_011_80194B8C[AF(arg0, u8, 0x214)]();
}

void func_sc02_011_8017E3BC(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_sc02_011_8017E3F4(arg0);
}

s32 func_sc02_011_8017E3F4(s32 arg0) {
    s32 var_v0;

    var_v0 = func_sc02_011_801881BC();
    if (var_v0 != 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_sc02_011_8017E434(void) {
}

s32 func_sc02_011_8017E43C()
{
    return SetActionHandler((s32) func_sc02_011_8017E464);
}

void func_sc02_011_8017E464(u8 *arg0) {
    D_sc02_011_80194B98[AF(arg0, u8, 0x214)]();
}

void func_sc02_011_8017E4A0(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_sc02_011_8017E4D8(arg0);
}

s32 func_sc02_011_8017E4D8(s32 arg0) {
    s32 var_v0;

    var_v0 = func_sc02_011_80188168();
    if (var_v0 != 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_sc02_011_8017E518(void) {
}

void func_sc02_011_8017E520(u8 *arg0, s32 arg1, s32 arg2) {
    SpawnEffect(0x2B, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ arg1, /* extra? */ arg2);
}

void func_sc02_011_8017E564(u8 *arg0) {
    D_sc02_011_80194C58[AF(arg0, u16, 2)]();
}

void func_sc02_011_8017E5A0(u8 *arg0) {
    u8 unused[0x28];

    AF(arg0, s16, 0xE) += 0x10;
    AF(arg0, s16, 2)++;
}

void func_sc02_011_8017E5C8(s32 arg0) {
    func_sc02_011_8017E5F0(arg0);
}

void func_sc02_011_8017E5E8(void) {
}

void func_sc02_011_8017E5F0(u8 *arg0) {
    SV pos;
    SV z;
    SV a;
    SV b;
    SV t;
    s32 i;
    s32 j;

    AF(arg0, s16, 0x10) = AF(arg0, s32, 0x30);
    PosToSVec(arg0 + 4, &pos);
    for (i = 0; i < 4; i++) {
        z.vx = 0;
        z.vy = 0;
        z.vz = 0;
        a = z;
        b = z;
        for (j = 0; j < 4; j++) {
            t = D_sc02_011_80194C6C[j];
            AF(arg0, s16, 0x12) = j + i;
            func_sc02_011_8017E72C(arg0, &pos, &z, &a, &b, &t, arg0 + 0x10);
        }
    }
}

void func_sc02_011_8017E72C(u8 *arg0, SV8 *arg1, SV8 *arg2, SV8 *arg3, SV8 *arg4, SV8 *arg5,
                            s16 *arg6) {
    SMtx m;
    SV8 *p2;
    SV8 *p3;
    SV8 *d;

    SetIdentityRot(&m);
    RotMatrixZ(*arg6, &m);
    m.t[0] = arg1->x;
    m.t[1] = arg1->y;
    m.t[2] = 0;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    d = D_sc02_011_801EB4C8;
    if (*(s16 *)(arg0 + 0x12) == 0) {
        D_sc02_011_801EB4F8 = 0x50000000;
        D_sc02_011_801EB4E8 = D_sc02_011_80194BA4[AF(arg0, s32, 0x2C)];
        D_sc02_011_801EB4EC = D_sc02_011_80194BA4[AF(arg0, s32, 0x2C)];
        D_sc02_011_801EB4F0.r = 0;
        D_sc02_011_801EB4F0.g = 0;
        D_sc02_011_801EB4F0.b = 0;
        D_sc02_011_801EB4F4.r = 0;
        D_sc02_011_801EB4F4.g = 0;
        D_sc02_011_801EB4F4.b = 0;
    }
    arg5->x += arg2->x;
    arg5->y += arg2->y;
    {
        s32 r = ((u16 *)arg5)[3] & rand();
        if (*(u16 *)(arg0 + 0x12) & 1) {
            arg5->x += r;
        } else {
            arg5->x -= r;
        }
    }
    arg5->y += (rand() & 0x1F) - 0x10;
    gte_ldv0(arg2);
    gte_rtv0tr();
    gte_stsv(d);
    gte_ldv0(arg5);
    gte_rtv0tr();
    gte_stsv(&d[1]);
    gte_ldv0(arg3);
    gte_rtv0tr();
    p2 = &d[2];
    gte_stsv(p2);
    *arg3 = *arg5;
    arg3->x -= ((u16 *)arg5)[3] & rand();
    gte_ldv0(arg3);
    gte_rtv0tr();
    p3 = &d[3];
    gte_stsv(p3);
    d->z = arg1->z;
    DrawPrimG4Screen(d);
    gte_ldv0(arg4);
    gte_rtv0tr();
    gte_stsv(p2);
    *arg4 = *arg5;
    arg4->x += ((u16 *)arg5)[3] & rand();
    gte_ldv0(arg4);
    gte_rtv0tr();
    gte_stsv(p3);
    d->z = arg1->z;
    DrawPrimG4Screen(d);
    *arg2 = *arg5;
}

void func_sc02_011_8017EAC0(u8 *arg0, s16 arg1, s32 arg2) {
    SpawnEffect(0x2C, arg0, 0, arg1, 0, arg2, 0);
}

void func_sc02_011_8017EB00(u8 *arg0) {
    D_sc02_011_80194C98[AF(arg0, u16, 2)]();
}

void func_sc02_011_8017EB3C(u8 *arg0) {
    WMtx m;
    SV v;
    s32 temp_s0;
    s32 temp_v0;
    void *temp_s1;

    temp_s0 = AF(arg0, s32, 0x34);
    temp_v0 = AllocSprite16To3E();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        temp_s1 = arg0 + 4;
        ObjLocalToWorld16(temp_s0, (s32) temp_s1);
        AF(temp_v0, s16, 0x10) = GetCameraPitch();
        AF(temp_v0, s16, 0x12) = GetCameraHeading();
        RotMatrix(temp_v0 + 0x10, &m);
        ApplyMatrixSV(&m, (s32) &D_sc02_011_80194CB0, &v);
        AF(arg0, u16, 6) = (u16) (AF(arg0, u16, 6) + v.vx);
        AF(arg0, u16, 0xA) = (u16) (AF(arg0, u16, 0xA) + v.vy);
        AF(arg0, u16, 0xE) = (u16) (AF(arg0, u16, 0xE) + v.vz);
        PosToSVec((s32) temp_s1, &v);
        ProjectPointOtz(&v, &v);
        SVecToPos(&v, (s32) temp_s1);
        InitSpriteKind1(temp_v0, (s32) &D_sc02_011_80194C8C, 0x280, 0x100);
        AF(temp_v0, u8, 0x27) = 0x80;
        AF(temp_v0, u16, 0x2C) = AF(arg0, u16, 0xE);
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        AF(arg0, s32, 0x10) = 0;
        func_sc02_011_8017F2AC((s32) arg0, AF(arg0, s32, 0x2C), 0x8F);
        PlaySe((u16) D_sc02_011_80194BF4[AF(arg0, s32, 0x2C)]);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc02_011_8017ECB0(u8 *arg0) {
    u8 *p = AF(arg0, u8 *, 0x20);
    s16 t;
    u8 unused[8];

    if (AF(arg0, s32, 0x1C) & 1) {
        AF(p, s32, 4) |= 0x80000000;
    } else {
        AF(p, s32, 4) &= 0x7FFFFFFF;
    }
    AF(arg0, s32, 0x1C)++;
    AF(arg0, s32, 0x10) += 0x6C000;
    t = AF(p, u16, 0x1A) + AF(arg0, u16, 0x12);
    AF(p, s16, 0x1A) = t;
    AF(p, s16, 0x18) = t;
    if (t > 0x1000) {
        AF(p, s16, 0x1A) = 0x1000;
        AF(p, s16, 0x18) = 0x1000;
        SetObjTimer(arg0, 0);
        func_sc02_011_8017FA94((s32) arg0, AF(arg0, s32, 0x2C), 0);
        SetObjTimer(arg0, 0);
        AF(arg0, u16, 2)++;
    }
}

void func_sc02_011_8017ED98(u8 *arg0) {
    s32 t;
    s32 v;
    u8 *s2;
    u8 *p;

    t = AF(arg0, s32, 0x1C);
    s2 = AF(arg0, u8 *, 0x20);
    if (t < 0x100) {
        if (!(t & 0xF)) {
            func_sc02_011_8017F2AC((s32) arg0, AF(arg0, s32, 0x2C), 0xF);
            v = AF(arg0, s32, 0x1C);
            if (!(v & 0xF)) {
                v = v << 15;
                func_sc02_011_8017F534((s32) arg0, AF(arg0, s32, 0x2C), v);
                func_sc02_011_8017F534((s32) arg0, AF(arg0, s32, 0x2C), v | 1);
                func_sc02_011_8017F534((s32) arg0, AF(arg0, s32, 0x2C), v | 2);
                func_sc02_011_8017F534((s32) arg0, AF(arg0, s32, 0x2C), v | 3);
                func_sc02_011_8017F534((s32) arg0, AF(arg0, s32, 0x2C), v | 4);
                func_sc02_011_8017F534((s32) arg0, AF(arg0, s32, 0x2C), v | 5);
                func_sc02_011_8017F534((s32) arg0, AF(arg0, s32, 0x2C), v | 6);
                func_sc02_011_8017F534((s32) arg0, AF(arg0, s32, 0x2C), v | 7);
            }
        }
        if (AF(arg0, s32, 0x1C) & 1) {
            AF(s2, s32, 4) |= 0x80000000;
        } else {
            AF(s2, s32, 4) &= 0x7FFFFFFF;
        }
        AF(arg0, s32, 0x1C)++;
        return;
    }
    for (p = (u8 *) &g_Effects; p < (u8 *) &g_Effects + 0xA50; p += 0x58) {
        if (*(u16 *) p == 0x2E) {
            FreeEffect(p);
        }
    }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0x1C7); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0x38E); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0x555); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0x71C); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0x8E3); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0xAAA); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0xC71); }
    { s32 k = AF(arg0, s32, 0x2C); SpawnEffect(0x2B, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), k, 0xE38); }
    SetObjTimer(arg0, 0x20);
    PlaySe(D_sc02_011_80194C08[AF(arg0, s32, 0x2C)][0]);
    AF(arg0, u16, 2)++;
}

void func_sc02_011_8017F0E0(u8 *arg0) {
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    if (AF(arg0, s32, 0x1C) & 1) {
        AF(temp_a0, s32, 4) |= 0x80000000;
    } else {
        AF(temp_a0, s32, 4) &= 0x7FFFFFFF;
    }
    if (TickObjTimer((s32) arg0) != 0) {
        func_sc02_011_80180218();
        AF(arg0, u16, 2)++;
    }
}

void func_sc02_011_8017F160(u8 *arg0) {
    u8 *p = AF(arg0, u8 *, 0x20);
    if (AF(arg0, s32, 0x1C) & 1) {
        AF(p, s32, 4) |= 0x80000000;
    } else {
        AF(p, s32, 4) &= 0x7FFFFFFF;
    }
    AF(arg0, s16, 0x24) = 3;
    AF(arg0, s32, 0x1C)++;
}

void func_sc02_011_8017F1AC(u8 *arg0) {
    u8 *p;
    s16 t;
    s16 s;
    s16 c;

    p = AF(arg0, u8 *, 0x20);
    if (AF(arg0, s32, 0x1C) & 1) {
        AF(p, s32, 4) |= 0x80000000;
    } else {
        AF(p, s32, 4) &= 0x7FFFFFFF;
    }
    t = (AF(p, u16, 0x12) + 0x80) & 0xFFF;
    AF(p, u16, 0x12) = t;
    if (t == 0 || t == 0x800) {
        c = AF(arg0, s16, 0x24);
        if (c != 0) {
            AF(arg0, s16, 0x24) = c - 1;
        }
    }
    s = AF(p, u16, 0x1A) - 0x40;
    AF(p, u16, 0x1A) = s;
    AF(p, u16, 0x18) = s;
    if (s < 0) {
        func_sc02_011_8017F2AC((s32) arg0, AF(arg0, s32, 0x2C), 0x8F);
        PlaySe((u16) D_sc02_011_80194C1C[AF(arg0, s32, 0x2C)]);
        FreeEffect((s32) arg0);
    }
    AF(arg0, s32, 0x1C) = AF(arg0, s32, 0x1C) + 1;
}

s32 func_sc02_011_8017F2AC(s32 arg0, s32 arg1, s32 arg2) {
    return SpawnEffect(0x2D, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ arg1, /* extra? */ arg2);
}

void func_sc02_011_8017F2F0(u8 *arg0) {
    D_sc02_011_80194CB8[AF(arg0, u16, 2)]();
}

void func_sc02_011_8017F32C(u8 *arg0) {
    u8 unused[0x28];
    s32 o;
    s32 v;

    o = AllocSprite16To3E();
    AF(arg0, s32, 0x20) = o;
    if (o != 0) {
        func_8001CD04(o, &D_sc02_011_801EB448);
        AF(o, s32, 4) |= 0x50000000;
        SetShapeCircle(&D_sc02_011_801EB448, 0x50);
        AF(arg0, s32, 0x10) = 0;
        if (AF(arg0, s32, 0x30) & 0x80) {
            *(s32 *) &D_sc02_011_801EB448 = 0xFFFFFF;
            AF(o, s16, 0x1A) = 0x80;
            AF(o, s16, 0x18) = 0x80;
            AF(arg0, s32, 0x14) = 0x80;
        } else {
            D_sc02_011_801EB448 = D_sc02_011_80194BB8[AF(arg0, s32, 0x2C)];
            AF(arg0, s32, 0x14) = 0x20;
        }
        D_sc02_011_801EB44C = 0;
        D_sc02_011_801EB44D = 0;
        D_sc02_011_801EB44E = 0;
        AF(arg0, s32, 0x30) &= 0x7F;
        AF(o, s16, 0x2C) = AF(arg0, s16, 0xE) + 0x10;
        AF(arg0, s16, 2)++;
        return;
    }
    FreeEffect(arg0);
}

void func_sc02_011_8017F458(u8 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    u16 temp_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    AF(&D_sc02_011_801EB448, u8, 0) = EaseValueFrac((s32) AF(&D_sc02_011_801EB448, u8, 0), 0, 0xA, 1);
    AF(&D_sc02_011_801EB448, u8, 1) = EaseValueFrac((s32) AF(&D_sc02_011_801EB448, u8, 1), 0, 0xA, 1);
    AF(&D_sc02_011_801EB448, u8, 2) = EaseValueFrac((s32) AF(&D_sc02_011_801EB448, u8, 2), 0, 0xA, 1);
    temp_v1 = AF(arg0, s32, 0x10) + AF(arg0, s32, 0x14);
    AF(arg0, s32, 0x10) = temp_v1;
    temp_v0 = AF(temp_s1, u16, 0x1A) + temp_v1;
    AF(temp_s1, u16, 0x1A) = temp_v0;
    AF(temp_s1, u16, 0x18) = temp_v0;
    temp_v1_2 = AF(arg0, s32, 0x30);
    AF(arg0, s32, 0x30) = (s32) (temp_v1_2 - 1);
    if (temp_v1_2 == 0) {
        FreeEffect((s32) arg0);
    }
}

s32 func_sc02_011_8017F534(s32 arg0, s32 arg1, s32 arg2) {
    return SpawnEffect(0x2E, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ arg1, /* extra? */ arg2);
}

void func_sc02_011_8017F578(u8 *arg0) {
    D_sc02_011_80194CC8[AF(arg0, u16, 2)]();
}

void func_sc02_011_8017F5B4(s32 arg0) {
    u8 unused[8];
    s32 r;

    r = rand();
    AF(arg0, s16, 0x10) = 0x200;
    AF(arg0, s16, 0x12) = 0x200;
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x14) = 0;
    AF(arg0, s16, 0x24) = (r & 0x1FF) + (AF(arg0, u8, 0x30) << 9);
    AF(arg0, u32, 0x30) >>= 8;
    SetObjTimer(arg0, rand() & 7);
    AF(arg0, u16, 2)++;
}

void func_sc02_011_8017F630(s32 arg0) {
    if (TickObjTimer(arg0) != 0) {
        SetObjTimer(arg0, 8);
        AF(arg0, s16, 0x28) = 0x20;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_011_8017F67C(u8 *arg0) {
    SV a;
    SV b;
    s32 d;
    s32 t;

    if (AF(arg0, s16, 0x28) != 0) {
        if (--AF(arg0, s16, 0x28) == 0) {
            PlaySe((u16) D_sc02_011_80194C30[AF(arg0, s32, 0x2C)]);
        }
    }
    t = AF(arg0, s32, 0x30) + 0x6000;
    d = t;
    AF(arg0, s32, 0x14) += t;
    AF(arg0, s16, 0x10) -= AF(arg0, s16, 0x16);
    if (AF(arg0, s16, 0x10) < 0) {
        AF(arg0, s16, 0x10) = 0;
    }
    if (TickObjTimer(arg0) != 0) {
        AF(arg0, s32, 0x18) += d;
        AF(arg0, s16, 0x12) -= AF(arg0, s16, 0x1A);
        if (AF(arg0, s16, 0x12) < 0) {
            AF(arg0, s16, 0x12) = 0;
        }
    }
    a.vx = 0;
    a.vy = AF(arg0, s16, 0x10);
    a.vz = 1;
    b.vx = 0;
    b.vy = AF(arg0, s16, 0x12);
    b.vz = 1;
    func_sc02_011_8017F7B4(arg0, &a, &b, AF(arg0, s16, 0x24));
    if (AF(arg0, s32, 0x10) == 0) {
        FreeEffect(arg0);
    }
}

void func_sc02_011_8017F7B4(u8 *arg0, SV *a, SV *b, s32 ang) {
    WMtx m;
    SV4 *q;

    D_sc02_011_801EB4F8 = 0x50000000;
    D_sc02_011_801EB4E8 = D_sc02_011_80194BCC[AF(arg0, s32, 0x2C)];
    D_sc02_011_801EB4EC = D_sc02_011_80194BE0[AF(arg0, s32, 0x2C)];
    D_sc02_011_801EB4F0 = D_sc02_011_80194BCC[AF(arg0, s32, 0x2C)];
    D_sc02_011_801EB4F4 = D_sc02_011_80194BE0[AF(arg0, s32, 0x2C)];
    SetIdentityRot(&m);
    RotMatrixZ((s16) ang, &m);
    m.t[0] = AF(arg0, s16, 6);
    m.t[1] = AF(arg0, s16, 0xA);
    m.t[2] = 0;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    q = D_sc02_011_801EB4C8;
    gte_ldv0(a);
    gte_rtv0tr();
    gte_stsv(q);
    gte_ldv0(b);
    gte_rtv0tr();
    gte_stsv(q + 1);
    a->vx -= 2;
    gte_ldv0(a);
    gte_rtv0tr();
    gte_stsv(q + 2);
    b->vx -= 2;
    gte_ldv0(b);
    gte_rtv0tr();
    gte_stsv(q + 3);
    D_sc02_011_801EB4CC = AF(arg0, s16, 0xE);
    DrawPrimG4Screen(q);
    a->vx += 4;
    gte_ldv0(a);
    gte_rtv0tr();
    gte_stsv(q + 2);
    b->vx += 4;
    gte_ldv0(b);
    gte_rtv0tr();
    gte_stsv(q + 3);
    D_sc02_011_801EB4CC = AF(arg0, s16, 0xE);
    DrawPrimG4Screen(q);
}

s32 func_sc02_011_8017FA94(s32 arg0, s32 arg1, s32 arg2) {
    return SpawnEffect(0x2F, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ arg1, /* extra? */ arg2);
}

void func_sc02_011_8017FAD8(u8 *arg0) {
    D_sc02_011_80194CD4[AF(arg0, u16, 2)]();
}

void func_sc02_011_8017FB14(u8 *arg0) {
    s32 pad[10];
    s32 temp_v0;

    temp_v0 = AllocSprite16To3E();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001CD04(temp_v0, D_sc02_011_801EB488);
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        SetShapeCircle(D_sc02_011_801EB488, 0x100);
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        AF(arg0, s32, 0x10) = 0x80;
        AF(temp_v0, s16, 0x2C) = 0x10;
        D_sc02_011_801EB488[0] = 0xFF;
        D_sc02_011_801EB489 = 0xFF;
        D_sc02_011_801EB48A = 0xFF;
        D_sc02_011_801EB48C = 0;
        D_sc02_011_801EB48D = 0;
        D_sc02_011_801EB48E = 0;
        SetObjTimer((s32) arg0, 0xC0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc02_011_8017FBF8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x10) + (rsin((AF(arg0, s32, 0x1C) & 0x3F) << 6, arg1, arg2, arg3) / 128);
    AF(temp_s1, s16, 0x1A) = temp_v0;
    AF(temp_s1, s16, 0x18) = temp_v0;
    if (TickObjTimer((s32) arg0) != 0) {
        SetObjTimer((s32) arg0, 0x40);
        PlaySe((*(u16 *)&D_sc02_011_80194C44[AF(arg0, s32, 0x2C)]));
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_011_8017FCA0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(arg0, s32, 0x10) + (rsin((AF(arg0, s32, 0x1C) & 0x3F) << 6, arg1, arg2, arg3) / 128);
    AF(temp_s1, s16, 0x1A) = temp_v0;
    AF(temp_s1, s16, 0x18) = temp_v0;
    AF(arg0, s32, 0x10) = (s32) (AF(arg0, s32, 0x10) + 0x20);
    if (TickObjTimer((s32) arg0) != 0) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_011_8017FD2C(u8 *arg0) {
    s16 temp_v0;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a1, u16, 0x1A) + 0x200;
    AF(temp_a1, u16, 0x1A) = (u16) temp_v0;
    AF(temp_a1, s16, 0x18) = temp_v0;
    if (temp_v0 >= 0x1001) {
        (*(u8 *)&D_sc02_011_801EB48C) = 0xFF;
        (*(u8 *)&D_sc02_011_801EB48D) = 0xFF;
        (*(u8 *)&D_sc02_011_801EB48E) = 0xFF;
        AF(temp_a1, u16, 0x1A) = 0x1000U;
        AF(temp_a1, s16, 0x18) = 0x1000;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_sc02_011_8017FD9C(s32 arg0) {
    typedef struct { u8 r, g, b, cd; } Col;
    Col *c = (Col *)D_sc02_011_801EB488;

    c->r = EaseValueFrac(c->r, 0, 0xA, 1);
    c->b = c->r;
    c->g = c->r;
    c[1] = c[0];
    c[2] = c[0];
    c[3] = c[0];
    if (c->r == 0) {
        FreeEffect(arg0);
    }
}

void func_sc02_011_8017FE64(s32 arg0) {
    u8 *p;

    for (p = (u8 *) &g_Effects; p < (u8 *) &g_Effects + 0xA50; p += 0x58) {
        if (*(u16 *) p == 0x2B) {
            FreeEffect(p);
        }
        if (*(u16 *) p == 0x2C) {
            (*(u16 *) (p + 2))++;
        }
    }
    PlaySePositional(4, D_sc02_011_80194C08[arg0][0]);
}

void func_sc02_011_8017FF34(s16 arg0, B8 *arg1, s32 arg2) {
    *(B8 *)&D_80126B30 = *arg1;
    D_80126B3A = arg0;
    D_8012750C = arg2;
    SetActionHandler((s32) func_sc02_011_8017FF9C);
    D_8011F9C8 = 0;
}

void func_sc02_011_8017FF9C(u8 *arg0) {
    D_sc02_011_80194E58[AF(arg0, u8, 0x214)]();
}

void func_sc02_011_8017FFD8(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_sc02_011_80180010(arg0);
}

void func_sc02_011_80180010(s32 arg0) {
    if (((s16 *)&D_80126B30)[3] == 0 || StepToward(arg0, &D_80126B30) != 0) {
        NextPhase(arg0);
    }
}

void func_sc02_011_80180060(s32 arg0) {
    SV_8E8A0 p;

    p.x = AF(g_ActiveCamera, s32, 0x3C);
    p.y = AF(g_ActiveCamera, s32, 0x40);
    p.z = AF(g_ActiveCamera, s32, 0x44);
    if ((s16)ActionHelper_1AB0(arg0, &p) == 0) {
        NextPhase(arg0);
    }
}

void func_sc02_011_801800C4(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x200) = 1;
    NextPhase((s32) arg0, arg1);
}

void func_sc02_011_801800E8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        EndScene();
        SetPlayerMotion((s32) arg0, (s32) &D_sc02_011_80194CF0);
        StartSeqPlayer();
        (*(u8 *)&D_800B9A11) = 0xC0;
        DisableBgLayers();
        NextPhase((s32) arg0);
    }
}

void func_sc02_011_8018015C(u8 *arg0) {
    s32 var;

    if (AF(arg0, u16, 0xB8) & 0x8000) {
        switch ((s16)(D_80126B3A - 2)) {
        case 0: var = 0; break;
        case 1: var = 1; break;
        case 2: var = 2; break;
        case 3: var = 3; break;
        case 4: var = 4; break;
        }
        D_80126B3C = var;
        func_sc02_011_8017EAC0(arg0, -0x60, var);
        NextPhase(arg0);
    }
}

void func_sc02_011_80180210(void) {
}

s32 func_sc02_011_80180218(void) {
    D_80126CF0 = OpenMessage(D_8012750C);
    return NextPhase((s32) &g_Player);
}

void func_sc02_011_80180258(u8 *arg0) {
    if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        AF(arg0, s32, 0x200) = 0x60;
        func_sc02_011_8017FE64((s32) D_80126B3C);
        NextPhase((s32) arg0);
    }
}

void func_sc02_011_801802C0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        SetPlayerMotion((s32) arg0, (s32) &D_sc02_011_80194D94);
        StopSeqPlayer();
        D_800B9A11 = 0;
        EnableBgLayers();
        NextPhase((s32) arg0);
    }
}

void func_sc02_011_80180328(u8 *arg0) {
    u16 f = AF(arg0, u16, 0xB8);

    if (f & 0x4000) {
        PlaySe(0x445);
    } else if (f & 0x8000) {
        BeginScene(arg0);
        switch ((s16)(D_80126B3A - 2)) {
        case 0:
            SetFlag(0x16, 1);
            SetProgress(0x85);
            break;
        case 1:
            SetFlag(0x17, 1);
            break;
        case 2:
            SetFlag(0x18, 1);
            break;
        case 3:
            SetFlag(0x19, 1);
            break;
        case 4:
            SetFlag(0x1A, 1);
            break;
        }
        D_8011F9C8 = 1;
        ClearActionHandler(arg0);
        NextPhase(arg0);
    }
}

void func_sc02_011_80180418(void) {
}

void func_sc02_011_80180420(s32 arg0) {
    SpawnEffect(0x19, arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
}

void func_sc02_011_8018045C(u8 *arg0) {
    D_sc02_011_80194EB0[AF(arg0, u16, 2)]();
}

void func_sc02_011_80180498(u8 *arg0) {
    if (AF(arg0, s32, 0x30) == 0) {
        PlaySe((s32) AF(arg0, u16, 0x2E));
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_011_801804E8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_011_8018077C((s32) arg0);
}

void func_sc02_011_80180544(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            PlaySe((s32) AF(arg0, u16, 0x2C));
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_011_8018077C((s32) arg0);
}

void func_sc02_011_801805C8(u8 *arg0) {
    s16 temp_v0_4;
    s16 var_s1;
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        if (AF(arg0, s32, 0x30) == 0) {
            temp_v0_2 = AF(temp_s0, u16, 0x64) - 0x80;
            AF(temp_s0, u16, 0x64) = temp_v0_2;
            AF(temp_s0, u16, 0x60) = temp_v0_2;
            AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) + 0x100);
        } else {
            temp_v1 = AF(temp_s0, void *, 0x20);
            AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
            temp_v1_2 = AF(temp_s0, void *, 0x20);
            temp_v0_3 = AF(temp_v1_2, u16, 0x1C) - 0x80;
            AF(temp_v1_2, u16, 0x1C) = temp_v0_3;
            AF(temp_v1_2, u16, 0x18) = temp_v0_3;
            temp_v1_3 = AF(temp_s0, void *, 0x20);
            AF(temp_v1_3, u16, 0x1A) = (u16) (AF(temp_v1_3, u16, 0x1A) + 0x100);
        }
        var_s1 = 0;
        do {
            SpawnEffect(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
            temp_v0_4 = var_s1 + 1;
            var_s1 = temp_v0_4;
        } while (temp_v0_4 < 3);
    } else {
        if (AF(arg0, s32, 0x30) == 0) {
            HidePlayerScene((s32) temp_s0);
            SetPlayerFlag7E2((s32) temp_s0);
        } else {
            temp_v0_5 = AF(temp_s0, void *, 0x20);
            AF(temp_v0_5, s32, 4) = (s32) (AF(temp_v0_5, s32, 4) | 0x80000000);
        }
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_011_8018077C((s32) arg0);
}

void func_sc02_011_80180730(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_011_8018077C((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc02_011_8018077C(u8 *arg0) {
    SV4 r;
    u8 gap[8];
    QuadArg q;
    WMtx m;
    u8 unused[0x20];
    u8 *o;
    s8 *t;
    s16 i;
    u8 v;
    s16 k;

    o = AF(arg0, u8 *, 0x34);
    r.x = r.y = r.z = AF(arg0, u16, 0x12);
    SetScaleMatrix(&r, &m);
    q.p[1].x = q.p[1].y = q.p[1].z = 0;
    q.p[0].y = q.p[2].y = q.p[3].y = 0;
    q.c[1].r = q.c[1].g = q.c[1].b = 0;
    v = (AF(arg0, s16, 0x12) >> 5) + 0x20;
    q.c[0].r = q.c[0].g = q.c[0].b = q.c[2].r = q.c[2].g = q.c[2].b = q.c[3].r = q.c[3].g = q.c[3].b = v;
    if (D_800B99DA & 1) {
        q.c[0].r = q.c[2].r = q.c[3].r = v >> 1;
    }
    q.code = 0x50000000;
    r.x = AF(o, u16, 6);
    r.y = AF(o, u16, 0xA) - 8;
    r.z = AF(o, u16, 0xE);
    SetMatrixTrans(&r, &m);
    t = D_sc02_011_80194E84;
    for (i = 0; i < 10; i++) {
        q.p[0].x = *t++;
        q.p[0].z = *t++;
        q.p[2].x = *t++;
        q.p[2].z = *t++;
        q.p[3].x = *t++;
        q.p[3].z = *t++;
        t -= 2;
        DrawPrimG4Mtx(&q, &m);
    }
    t = D_sc02_011_80194E84;
    q.c[0].r = q.c[0].g = q.c[0].b = 0;
    for (i = 0; i < 20; i++) {
        k = *t++;
        q.p[2].x = k;
        q.p[0].x = k << 1;
        k = *t++;
        q.p[2].z = k;
        q.p[0].z = k << 1;
        k = *t++;
        q.p[3].x = k;
        q.p[1].x = k << 1;
        k = *t++;
        q.p[3].z = k;
        q.p[1].z = k << 1;
        t -= 2;
        DrawPrimG4Mtx(&q, &m);
    }
    if (AF(arg0, s16, 0x2A) != 0) {
        t = D_sc02_011_80194E84;
        for (i = 0; i < 20; i++) {
            q.p[0].x = q.p[2].x = *t++;
            q.p[0].z = q.p[2].z = *t++;
            q.p[1].x = q.p[3].x = *t++;
            q.p[1].z = q.p[3].z = *t++;
            q.p[0].y = q.p[1].y = AF(arg0, u16, 0x2A);
            t -= 2;
            DrawPrimG4Mtx(&q, &m);
        }
    }
}

void func_sc02_011_80180A88(u8 *arg0) {
    D_sc02_011_80194EC4[AF(arg0, u16, 2)]();
}

void func_sc02_011_80180AC4(u8 *arg0) {
    PlaySe((s32) AF(arg0, u16, 0x2E));
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_011_80180B04(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    temp_v1 = AF(arg0, void *, 0x34);
    if (temp_v0 < 0xC) {
        AF(arg0, u16, 0x12) = (u16) (AF(arg0, u16, 0x12) + 0xE0);
    } else {
        AF(temp_v1, s16, 0x64) = 0;
        AF(temp_v1, s16, 0x60) = 0;
        AF(temp_v1, s16, 0x62) = 0x3000;
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_011_8018077C((s32) arg0);
}

void func_sc02_011_80180B74(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s1 = AF(arg0, s32, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        AF(arg0, u16, 0x2A) = (u16) (AF(arg0, u16, 0x2A) - 0x10);
    } else {
        PlaySe((s32) AF(arg0, u16, 0x2C));
        ShowPlayerScene(temp_s1);
        ClearPlayerFlag7E2(temp_s1);
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_011_8018077C((s32) arg0);
}

void func_sc02_011_80180C00(u8 *arg0) {
    s16 temp_v0_3;
    s16 var_s2;
    s32 temp_v0;
    u16 temp_v0_2;
    void *temp_s0;

    temp_v0 = AF(arg0, s32, 0x1C);
    temp_s0 = AF(arg0, void *, 0x34);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0x20) {
        var_s2 = 0;
        temp_v0_2 = AF(temp_s0, u16, 0x64) + 0x80;
        AF(temp_s0, u16, 0x64) = temp_v0_2;
        AF(temp_s0, u16, 0x60) = temp_v0_2;
        AF(temp_s0, u16, 0x62) = (u16) (AF(temp_s0, u16, 0x62) - 0x100);
        do {
            SpawnEffect(0x1B, (s32) temp_s0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0);
            temp_v0_3 = var_s2 + 1;
            var_s2 = temp_v0_3;
        } while (temp_v0_3 < 3);
    } else {
        AF(arg0, s32, 0x1C) = 0;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    func_sc02_011_8018077C((s32) arg0);
}

void func_sc02_011_80180CD4(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x34);
    temp_v0 = AF(arg0, u16, 0x12) - 0x100;
    AF(arg0, u16, 0x12) = temp_v0;
    if ((temp_v0 << 0x10) > 0) {
        func_sc02_011_8018077C((s32) arg0);
        return;
    }
    AF(temp_v1, s16, 0x64) = 0x1000;
    AF(temp_v1, s16, 0x62) = 0x1000;
    AF(temp_v1, s16, 0x60) = 0x1000;
    FreeEffect((s32) arg0);
}

void func_sc02_011_80180D28(u8 *arg0) {
    D_sc02_011_80194ED8[AF(arg0, u16, 2)]();
}

void func_sc02_011_80180D64(u8 *arg0) {
    s16 r;
    s32 d1, d2;
    u8 *s1;

    s1 = AF(arg0, u8 *, 0x34);
    r = rand();
    d1 = (r & 0x3F) - 0x20;
    AF(arg0, s16, 6) = AF(s1, u16, 6) + d1;
    if (AF(arg0, s32, 0x2C) != 0) {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA) - 0x140;
        AF(arg0, s16, 0x16) = 0x20;
    } else {
        AF(arg0, u16, 0xA) = AF(s1, u16, 0xA);
        AF(arg0, s16, 0x16) = -0x20;
    }
    d2 = ((r >> 6) & 0x3F) - 0x20;
    AF(arg0, s16, 0xE) = AF(s1, u16, 0xE) + d2;
    AF(arg0, s32, 0x30) = (r >> 12) & 3;
    AF(arg0, u16, 2)++;
}

void func_sc02_011_80180E18(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_800D22E4();
        func_sc02_011_80180E74((s32) arg0);
        return;
    }
    FreeEffect((s32) arg0);
}

void func_sc02_011_80180E74(u8 *arg0) {
    LineArg l;
    WMtx m;

    if (AF(arg0, s32, 0x2C) != 0) {
        l.p0.y = AF(arg0, u16, 0xA) - 0x20;
        l.p1.y = AF(arg0, u16, 0xA) + 0x20;
    } else {
        l.p0.y = AF(arg0, u16, 0xA) + 0x20;
        l.p1.y = AF(arg0, u16, 0xA) - 0x20;
    }
    l.p0.x = AF(arg0, u16, 6);
    l.p0.z = AF(arg0, u16, 0xE);
    l.p1.x = AF(arg0, u16, 6);
    l.p1.z = AF(arg0, u16, 0xE);
    l.c0.r = l.c0.g = l.c0.b = 0;
    switch (AF(arg0, u32, 0x30)) {
    case 0:
        l.c1.r = 0xFF;
        l.c1.g = l.c1.b = 0;
        break;
    case 1:
        l.c1.g = 0xFF;
        l.c1.r = l.c1.b = 0;
        break;
    case 2:
        l.c1.b = 0xFF;
        l.c1.r = l.c1.g = 0;
        break;
    case 3:
        l.c1.r = l.c1.g = l.c1.b = 0xFF;
        break;
    }
    m = GsIDMATRIX;
    l.code = 0x50000000;
    DrawPrimLineG2Mtx(&l, &m);
}

extern R34 D_sc02_011_80195834[];
extern u8 D_sc02_011_801958A8;
extern u8 D_sc02_011_801959C8;
extern void func_8001CA1C();
extern u8 D_sc02_011_80195CF0[];
extern s32 D_sc02_011_801EB520;
extern u8 D_sc02_011_80195B5C;
extern void WorldToLocal16();
extern void LocalToWorld16();

extern s16 D_sc02_011_801960CC;
extern s16 D_sc02_011_801960CE;
extern s16 D_sc02_011_801960D0;
extern s32 func_sc02_011_8018F488();
extern void Square0();
extern u8 D_sc02_011_801953D8;
extern void TakePlayerControlNoStop();
extern u8 D_sc02_011_801957CC;
extern s32 func_sc02_011_80185098();
extern void FaceHelper();
extern void SetFatalHit();
extern void RequestXaClip();

extern s16 D_sc02_011_801961CE;
extern void func_sc02_011_8018A084();
extern void func_sc02_011_80189F30();
extern s32 TurnStep();
extern s32 D_sc02_011_80196098;
extern s32 func_sc02_011_801887C8();
extern void func_sc02_011_8018898C();

extern void ForceTintRow5();
extern s32 func_sc02_011_80188114();
extern void func_sc02_011_80186070();
extern s32 func_sc02_011_80185FA0();
extern SV D_sc02_011_801955F4[];
extern s32 func_sc02_011_80183C2C();
extern void InitSpriteKind2();
extern void func_sc02_011_801865B0();
extern u8 D_sc02_011_801E5340;
extern u8 D_sc02_011_8019595C;
extern u8 D_sc02_011_80195968;
extern u8 D_sc02_011_801959B8;
extern u8 D_sc02_011_80195998;

extern u8 D_sc02_011_80195FF0;
extern u8 D_sc02_011_80196058;
extern void SnapToGround();
extern void func_sc02_011_8018B76C();
extern u8 D_sc02_011_801960A0;
extern u8 D_sc02_011_801D3F84;
extern void func_sc02_011_801890C8();

extern void CopyPropVel();
extern s16 g_PlayerHitDamage;
extern u8 D_sc02_011_80195D30;
extern s32 func_sc02_011_80186B1C();
extern void func_sc02_011_80186AA0();
extern u32 g_WorldOtTable[2][0x1000];
extern void ToggleModel();
extern void CancelStreamLoad();
extern u8 D_sc02_011_80195138;
extern u8 D_sc02_011_8019514C;
extern u8 D_sc02_011_801F4654;

extern SV8 D_sc02_011_801E9DA8;
extern s16 D_sc02_011_80195058[];
extern s32 GetObjPadPressed();
extern s32 SVecDist();
extern void func_sc02_011_8018B5A8();
extern void func_sc02_011_80182B88();


extern s32 ActorSegmentHitsPlayer();


extern u32 D_sc02_011_801EB568;
extern u16 D_sc02_011_801EB56C[];
extern u16 D_sc02_011_801EB5AC[];
extern u16 D_sc02_011_8019611C[];
extern u16 D_sc02_011_8019615C[];
extern u8 D_sc02_011_8019617C;
extern void QueueImage();


extern void SaveCamera();
extern void StartCameraBlend();
extern s32 D_801269E4;

extern s32 D_sc02_011_801DF820[];
extern s32 D_sc02_011_801DF82C[];
extern SV8 D_sc02_011_801DF844;

extern B8 D_sc02_011_801E9E34;
void func_sc02_011_80187724(s32 arg0, SV8 *arg1);

extern u8 D_sc02_011_80195910;

extern s32 WalkToPoint();
extern s32 g_SoundLoadTable;
extern u8 *D_800C7C64;
extern u8 g_SoundLoadBuf[];
extern u8 D_800AEF98;
extern s32 RequestLoad();
extern u8 D_800AEFA8;
extern u8 D_800AEFA0;
extern s32 D_sc02_011_801E8C34;
s32 func_sc02_011_80185548(u8 *o);
extern s32 func_sc02_011_8018567C();

extern u8 D_sc02_011_801E9DA0;
extern s32 StepToward();
void func_sc02_011_80187838(void);
extern void NextPlayerActionHandler();
extern void InitNullModel();

extern u8 D_sc02_011_801957EC;
s32 func_sc02_011_80188508(s32 arg0);
extern s16 D_801274E8;
extern s16 g_CameraVarA0;
extern SV8 D_sc02_011_80195FC8[];
extern s32 PosSVecDistSq();

extern s16 D_sc02_011_801958F0[];
extern void TriggerBoxStartEvent();
extern S12 D_sc02_011_801950E4[];
extern u8 D_sc02_011_801957DC;

s32 func_sc02_011_80185C20(StageActor *arg0);
extern void BlendCameraFramesThen();
extern void func_sc02_011_80182564();
extern void ShowModel();
extern s32 FindActorByKindArg();
extern s32 g_CameraDist;
extern s16 g_CameraAngle;
extern s16 D_80126962;
extern s16 D_80126972;
extern s16 D_80126974;
extern s16 D_801274EA;
extern s16 D_801274EC;


extern s32 ReadGeomScreen();
extern void GsGetLs();
extern void GsSetLsMatrix();

void func_sc02_011_80180FE4(u8 *obj) {
    s32 tmp[3];
    SV8 box[8];
    SV8 scr[8];
    MtxDCM ls;
    GteDCM g;
    s32 zlim;
    s32 i;
    s32 n;
    u8 *pk;
    u32 *ot;
    u8 *hdr;
    u8 *verts;
    ChunkDCM *c;
    u32 *poly;
    u32 nf;
    u32 j;
    u32 w;
    u32 x, y;
    s16 zl, zh;
    s32 hi, lo, hi2, lo2, h, l;
    s16 xh, xl, yh, yl;
    s32 a, b;
    s32 type;
    u8 *d;
    u8 *d3;
    u32 *t;

    zlim = ReadGeomScreen() + AF(obj, s32, 0x64);
    GsGetLs(obj + 0x10, &ls);
    GsSetLsMatrix(&ls);
    pk = g_PrimNext;
    ot = g_WorldOtTable[D_800B9A02[0]];
    c = AF(obj, ChunkDCM *, 0xC);
    hdr = AF(obj, u8 *, 8);
    n = AF(hdr, s32, 8);
    verts = AF(hdr, u8 *, 0x10);
    for (i = 0; i < n; i++, c++) {
        y = c->y;
        xl = c->x;
        xh = c->x >> 16;
        yl = y;
        yh = y >> 16;
        zl = c->z;
        zh = c->z >> 16;
        box[0].x = xl; box[0].y = yl;
        box[1].x = xh; box[1].y = yl;
        box[2].x = xl; box[2].y = yl;
        box[3].x = xh; box[3].y = yl;
        box[4].x = xl; box[4].y = yh;
        box[5].x = xh; box[5].y = yh;
        box[6].x = xl; box[6].y = yh;
        box[7].x = xh; box[7].y = yh;
        box[0].z = zl;
        box[1].z = zl;
        box[4].z = zl;
        box[5].z = zl;
        box[2].z = zh;
        box[3].z = zh;
        box[6].z = zh;
        box[7].z = zh;
        gte_ldv3c(&box[0]);
        gte_rtpt();
        gte_stsxy3(&scr[0], &scr[1], &scr[2]);
        gte_ldv0(&box[3]);
        gte_rtps();
        gte_stsxy(&scr[3]);
        gte_ldv3c(&box[4]);
        gte_rtpt();
        gte_stsxy3(&scr[4], &scr[5], &scr[6]);
        gte_ldv0(&box[7]);
        gte_rtps();
        gte_stsxy(&scr[7]);
        gte_stszotz(&g.zbox);
        if (g.zbox > zlim) continue;

        if (scr[0].x > scr[1].x) { hi = scr[0].x; lo = scr[1].x; } else { lo = scr[0].x; hi = scr[1].x; }
        if (scr[2].x > hi) hi = scr[2].x; else if (scr[2].x < lo) lo = scr[2].x;
        if (scr[3].x > hi) hi = scr[3].x; else if (scr[3].x < lo) lo = scr[3].x;
        if (scr[4].x > scr[5].x) { hi2 = scr[4].x; lo2 = scr[5].x; } else { lo2 = scr[4].x; hi2 = scr[5].x; }
        if (scr[6].x > hi2) hi2 = scr[6].x; else if (scr[6].x < lo2) lo2 = scr[6].x;
        if (scr[7].x > hi2) hi2 = scr[7].x; else if (scr[7].x < lo2) lo2 = scr[7].x;
        l = lo; if (lo2 < l) l = lo2;
        h = hi; if (h < hi2) h = hi2;
        if ((s16)h < -160 || (s16)l > 160) continue;

        if (scr[0].y > scr[1].y) { hi = scr[0].y; lo = scr[1].y; } else { lo = scr[0].y; hi = scr[1].y; }
        if (scr[2].y > hi) hi = scr[2].y; else if (scr[2].y < lo) lo = scr[2].y;
        if (scr[3].y > hi) hi = scr[3].y; else if (scr[3].y < lo) lo = scr[3].y;
        if (scr[4].y > scr[5].y) { hi2 = scr[4].y; lo2 = scr[5].y; } else { lo2 = scr[4].y; hi2 = scr[5].y; }
        if (scr[6].y > hi2) hi2 = scr[6].y; else if (scr[6].y < lo2) lo2 = scr[6].y;
        if (scr[7].y > hi2) hi2 = scr[7].y; else if (scr[7].y < lo2) lo2 = scr[7].y;
        l = lo; if (lo2 < l) l = lo2;
        h = hi; if (h < hi2) h = hi2;
        if ((s16)h < -110 || (s16)l > 110) continue;

        poly = c->poly;
        nf = c->n;
        for (j = 0; j < nf; j++, poly += 3) {
            w = poly[1];
            a = (s32)(verts + (w & 0xFFFF));
            b = (s32)(verts + (w >> 16));
            w = poly[2];
            d3 = verts + (w & 0xFFFF);
            w >>= 16;
            gte_ldv3(a, b, d3);
            gte_rtpt();
            gte_stflg(&g.flag);
            if (g.flag & 0x7F85E000) continue;
            gte_nclip();
            type = w & 7;
            d = verts + (w & 0xFFF8);
            gte_stopz(&g.z);
            if (g.z <= 0) continue;
            switch (type) {
            case 6:
            case 7:
            { u32 *otp; s16 p0, p1, p2, q0, q1, q2; s32 m;
                gte_stsxy3_ft3(pk);
                gte_stsz3(&g.sz0, &g.sz1, &g.sz2);
                p0 = AF(pk, s16, 8); p1 = AF(pk, s16, 0x10);
                if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                p2 = AF(pk, s16, 0x18);
                if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                if (xh < -160 || xl > 160) continue;
                q0 = AF(pk, s16, 0xA); q1 = AF(pk, s16, 0x12);
                if (q0 > q1) { yh = q0; yl = q1; } else { do { yl = q0; } while (0); yh = q1; } /* MATCH-TRICK: extra loop depth on one yl ref wins the a2/a3 priority tie */
                q2 = AF(pk, s16, 0x1A);
                if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                if (yh < -110 || yl > 110) continue;
                if (g.sz0 > g.sz1) { m = g.sz0; if (m < g.sz2) m = g.sz2; } else { m = g.sz1; if (m < g.sz2) m = g.sz2; }
                g.z = m;
                if (type == 7) g.z = m + 0x200;
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0];
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                AF(pk, u16, 0x1C) = t[3];
                otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x7000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x20;
                break;
            }
            case 2:
            case 3:
            { u32 *otp; u32 tw; s16 p0, p1, p2, p3, q0, q1, q2, q3; s32 za, zb;
                gte_stsxy3c(tmp);
                gte_ldv0(d);
                gte_rtps();
                p0 = AF(tmp, s16, 0); p1 = AF(tmp, s16, 4);
                if (p0 > p1) { xh = p0; xl = p1; } else { xl = p0; xh = p1; }
                p2 = AF(tmp, s16, 8);
                if (p2 > xh) xh = p2; else if (p2 < xl) xl = p2;
                q0 = AF(tmp, s16, 2); q1 = AF(tmp, s16, 6);
                if (q0 > q1) { yh = q0; yl = q1; } else { yl = q0; yh = q1; }
                q2 = AF(tmp, s16, 0xA);
                if (q2 > yh) yh = q2; else if (q2 < yl) yl = q2;
                gte_stflg(&g.flag);
                if (g.flag & 0x7F85E000) continue;
                gte_stsz4(&g.sz0, &g.sz1, &g.sz2, &g.sz3);
                gte_stsxy(pk + 0x20);
                p3 = AF(pk, s16, 0x20);
                if (p3 < xl) xl = p3; else if (p3 > xh) xh = p3;
                if (xh < -160 || xl > 160) continue;
                q3 = AF(pk, s16, 0x22);
                if (q3 < yl) yl = q3; else if (q3 > yh) yh = q3;
                if (yh < -110 || yl > 110) continue;
                za = g.sz2; if (za < g.sz3) za = g.sz3;
                zb = g.sz0; if (zb < g.sz1) zb = g.sz1;
                if (zb < za) zb = za;
                g.z = zb;
                if (type == 3) g.z = zb + 0x200;
                AF(pk, s32, 8) = tmp[0];
                AF(pk, s32, 0x10) = tmp[1];
                AF(pk, s32, 0x18) = tmp[2];
                t = (u32 *)poly[0];
                AF(pk, u32, 4) = t[0];
                AF(pk, u32, 0xC) = t[1];
                AF(pk, u32, 0x14) = t[2];
                tw = t[3];
                AF(pk, u16, 0x1C) = tw;
                tw >>= 16;
                AF(pk, u16, 0x24) = tw;
                otp = (u32 *)(((g.z >> 2) << 2) + (u32)ot);
                *(u32 *)pk = (*otp & 0xFFFFFF) | 0x9000000;
                *otp = (*otp & 0xFF000000) | ((u32)pk & 0xFFFFFF);
                pk += 0x28;
                break;
            }
            }
        }
    }
    g_PrimNext = pk;
}

void func_sc02_011_80181A64(u8 *arg0) {
    D_sc02_011_80194FA4[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_011_80181AA0(u8 *arg0) {
    func_sc02_011_80181D74();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_011_80181AE4(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc02_011_80181B08(u8 *arg0) {
    D_sc02_011_80194FAC[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_011_80181B44(u8 *arg0) {
    func_sc02_011_80181D9C();
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_011_80181B84(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_011_80181BF8(void) {
    func_800D1EBC();
}

void func_sc02_011_80181C18(u8 *arg0) {
    D_sc02_011_80194FB8[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_011_80181C54(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        PlaySoundId(0x1C, 0);
        ClearTimeChime();
        PlaySoundId(0x1D, 0);
        func_800D0C48(1);
        func_800D1E28();
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

void func_sc02_011_80181CD0(u8 *arg0) {
    D_sc02_011_80194FC4[AF(arg0, u8, 0x15)]();
}

s32 func_sc02_011_80181D0C(u8 *arg0) {
    func_sc02_011_80182090();
    StartFade(0);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_sc02_011_80181D50(void) {
    return (FadeStep(0) & 0xFFFF) != 0;
}

void func_sc02_011_80181D74(void) {
    StartPlayerActionScript((s32) &D_sc02_011_80194FD4, 0x01000000);
}

void func_sc02_011_80181D9C(void) {
    StartPlayerActionScript((s32) &D_sc02_011_80194FE0, 0x01000000);
}

void func_sc02_011_80181DC4(u8 *arg0) {
    D_sc02_011_8019501C[AF(arg0, u8, 0x216)]();
}

void func_sc02_011_80181E00(u8 *arg0) {
    AF(arg0, s32 *, 0xB0) = &D_sc02_011_801D659C;
    AF(arg0, s32 *, 0xCC) = &D_sc02_011_801D663C;
    AF(arg0, s16, 0x20C) = 0;
    AF(arg0, s16, 0x20E) = 0;
    AF(arg0, s16, 0x210) = 0;
    BumpSub2Copy((s32) arg0);
}

void func_sc02_011_80181E40(s32 arg0) {
    s16 temp_v0;

    StartRumbleScript((s32) &D_sc02_011_80194FCC);
    func_sc02_011_80181FA0(arg0);
    if (func_sc02_011_80181F6C(arg0) != 0) {
        temp_v0 = AF(arg0, s16, 0x210);
        if ((*(s16 *)&D_sc02_011_8019500A[(temp_v0 * 8)]) != 0) {
            AF(arg0, s32 *, 0xB0) = &D_800D6078;
            AF(arg0, s32 *, 0xCC) = &D_800D6118;
            AF(arg0, s16, 0x12E) = 0;
            ClearVarCF();
            PressCross(arg0);
            BumpSub2Copy(arg0);
            return;
        }
        AF(arg0, s16, 0x210) = (s16) (temp_v0 + 1);
        func_sc02_011_80181F6C(arg0);
    }
}

void func_sc02_011_80181EF4(s32 o) {
    B8 b;

    b = *(B8 *)&D_sc02_011_801E9DA0;
    if (StepToward(o, &b) != 0) {
        func_sc02_011_80187838();
        NextPlayerActionHandler(o);
    }
    HoldCross(o);
}

s32 func_sc02_011_80181F6C(s32 arg0) {
    return WalkToPointTurning(arg0, (s32) ((AF(arg0, s16, 0x210) * 8) + &D_sc02_011_80195004), 0xA);
}

void func_sc02_011_80181FA0(u8 *arg0) {
    u16 *p = &D_800B99DA;
    AF(arg0, s16, 0x20E) = EaseValueFrac(AF(arg0, s16, 0x20E), 0, 10, 1);
    AF(arg0, s16, 0x12E) = 1;
    AF(arg0, s16, 0x128) = AF(arg0, u16, 0x20E) + rsin((*p & 0x3F) << 6) / 4;
    AF(arg0, s16, 0x12C) = rcos((*p & 0x3F) << 6) / 8;
    if (AF(arg0, s16, 0x13A) != 0) {
        AF(arg0, s16, 0x13A) += (s8)AF(arg0, u8, 0x20D);
        AF(arg0, s16, 0x20C) -= 0xE0;
        if (AF(arg0, s16, 0x13A) < 0) {
            AF(arg0, s16, 0x13A) = 0;
            AF(arg0, s16, 0x20C) = 0;
        }
    }
}

void func_sc02_011_80182090(void) {
    StartPlayerActionScript((s32) &D_sc02_011_80194FF4, 0x01000000);
}

void func_sc02_011_801820B8(u8 *arg0) {
    D_sc02_011_80195030[AF(arg0, u8, 0x216)]();
}

void func_sc02_011_801820F4(u8 *o) {
    SV8 v;

    v.x = -0xE0;
    v.z = 0x400;
    v.y = AF(o, u16, 0xA);
    if (WalkToPoint(o, &v) != 0) {
        BumpSub2Copy(o);
    }
}

void func_sc02_011_80182148(u8 *o) {
    SV8 v;

    v.x = -0xE0;
    v.z = 0x3D2;
    v.y = AF(o, u16, 0xA);
    if (WalkToPoint(o, &v) != 0) {
        PressCross(o);
        BumpSub2Copy(o);
    }
    func_sc02_011_80182344(o);
}

void func_sc02_011_801821AC(s32 arg0) {
    HoldCross(arg0);
    PushStickForward(arg0);
    if (PlayerEvent02(arg0) == 0) {
        BumpSub2Copy(arg0);
    }
    func_sc02_011_80182344(arg0);
}

void func_sc02_011_801821FC(s32 arg0) {
    if (PlayerEvent04(arg0) != 0) {
        ClearPlayerActionFlag01();
        AF(arg0, u16, 0xAA) = (u16) (AF(arg0, u16, 0xAA) & 0x4090);
        AF(arg0, u16, 0xAC) = (u16) (AF(arg0, u16, 0xAC) & 0x4090);
        return;
    }
    SetPlayerActionFlag01();
    ClearObjPadInput(arg0);
    BumpSub2Copy(arg0);
}

void func_sc02_011_80182268(s32 arg0) {
    if (PlayerEvent01(arg0) != 0) {
        if (AF(arg0, s16, 0xA) >= -0x1FF) {
            AF(arg0, s32, 0x198) = OpenMessage((s32) &D_sc02_011_80196530);
            BumpSub2Copy(arg0);
        } else {
            AF(arg0, u8, 0x216) = 0;
        }
    } else if (PlayerEvent04(arg0) != 0) {
        AF(arg0, u8, 0x216) = 3;
    }
    func_sc02_011_80182344(arg0);
}

void func_sc02_011_801822F4(s32 arg0) {
    if ((PlayerEvent01(arg0) != 0) && (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0)) {
        func_sc02_011_801823B8();
        AF(arg0, u8, 0x216) = 0;
    }
}

void func_sc02_011_80182344(s32 arg0) {
    AF(arg0, s16, 6) = EaseValueFrac((s32) AF(arg0, s16, 6), -0xE0, 0xA, 1);
}

s32 func_sc02_011_80182380(arg0)
    s32 arg0;
{
    StartPlayerActionScript((s32) &D_sc02_011_80195028, 0x01000000);
    return ClearPlayerActionFlag04((s32) &g_Player);
}

void func_sc02_011_801823B8(void) {
    if (D_80126CF0 != 0) {
        CloseMessage(D_80126CF0);
        D_80126CF0 = 0;
    }
}

void func_sc02_011_801823EC(void) {
    g_CameraProjTarget = 0x190;
    g_CameraProj = 0x190;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x1C7;
    D_8012696A = 0;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc02_011_801826D8, 0);
    SnapCamera((s32) &g_Camera);
    func_sc02_011_801826D8((s32) &g_Camera);
}

void func_sc02_011_80182488(void) {
    g_CameraProjTarget = 0x190;
    g_CameraDistTarget = 0x3E8;
    g_CameraAngleTarget = -0xE3;
    D_8012696A = 0x58E;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = -0x30;
    D_8012697A = -0x80;
    SetCameraUpdate((s32) func_sc02_011_801826D8, 1);
    SnapCamera((s32) &g_Camera);
    *(SV8 *) &D_801274E8 = *(SV8 *) g_CameraFocus;
    g_CameraVarA0 = 0xA0;
    func_sc02_011_801826D8((s32) &g_Camera);
}

void func_sc02_011_80182564(void) {
    g_CameraDistTarget = g_CameraDist = 0x4B0;
    g_CameraAngleTarget = g_CameraAngle = 0x38E;
    D_80126962 = 0;
    D_8012696A = 0;
    D_80126972 = 0;
    D_80126978 = 0;
    D_80126974 = 0;
    D_8012697A = 0;
    D_801274E8 = g_CameraFocus[0];
    D_801274EA = D_80126942;
    D_801274EC = D_80126944;
    SetCameraUpdate(func_sc02_011_801826D8, 2);
}

void func_sc02_011_80182614(void) {
    BlendCameraThen((s32) &func_sc02_011_801823EC);
}

void func_sc02_011_8018263C(void) {
    g_CameraProjTarget = 0x1F4;
    g_CameraDistTarget = 0x4B0;
    g_CameraAngleTarget = 0x71;
    D_8012696A = -0x155;
    D_8012696C = 0;
    g_CameraOfsTarget = 0xE0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) func_sc02_011_801826D8, 3);
    SnapCamera((s32) &g_Camera);
    func_sc02_011_801826D8((s32) &g_Camera);
}

void func_sc02_011_801826D8(s32 arg0) {
    D_sc02_011_80195048[AF(arg0, u8, 4)]();
}

void func_sc02_011_80182714(u8 *o) {
    SV8 a;
    SV8 b;
    s16 mode;
    s16 ang;
    s32 r;
    s16 dist;
    s32 t;

    b = D_sc02_011_801E9DA8;
    t = GetObjPadPressed(&g_Player);
    mode = 0;
    if (t & 3) {
        AF(o, u8, 5) = (AF(o, u8, 5) + 1) & 1;
    }
    AF(o, s32, 0x14) = D_sc02_011_80195058[AF(o, u8, 5)];
    r = ratan2(g_CameraFocus[0] << 16, D_80126944 << 16) & 0xFFF;
    a = *(SV8 *)g_CameraFocus;
    b.y = D_80126942;
    dist = SVecDist(&a, &b);
    ang = r;
    if (dist > 0xA00) {
        a.x = 0;
        a.y = D_80126942;
        a.z = 0xA00;
        func_sc02_011_8018B5A8(ang, &a, &a);
        a.x = a.x >> 3;
        a.y = a.y >> 3;
        a.z = a.z >> 3;
    } else {
        AF(o, s16, 0x20) = 0x1C7;
        AF(o, s16, 0x22) = 0;
        AF(o, s16, 0x24) = 0;
        AF(o, s16, 0x2E) = 0;
        AF(o, s16, 0x30) = 0;
        AF(o, s16, 0x32) = 0;
    }
    if (((ang >= 0x800 && ang > 0xB00) || (ang < 0x800 && ang < 0x210)) && dist > 0x3C0 && a.y >= -0x2FF) {
        if (ang > 0xD00) {
            if (dist < 0x500) {
                AF(o, s16, 0x20) = 0x31C;
                mode = 2;
            } else {
                mode = 2;
                AF(o, s16, 0x20) = 0x38E;
                AF(o, s32, 0x14) = 0x4B0;
            }
        } else {
            mode = 1;
        }
    } else {
        AF(o, s16, 0x20) = 0x1C7;
    }
    if (dist < 0x200) {
        AF(o, s16, 0x20) = 0xE3;
        AF(o, s16, 0x22) = 0;
        AF(o, s16, 0x24) = 0;
        AF(o, s16, 0x2E) = 0;
        AF(o, s16, 0x30) = -0xC0;
        AF(o, s16, 0x32) = 0;
    }
    if (dist > 0x980) {
        AF(o, s32, 0x14) = 0x384;
    }
    switch (mode) {
    case 1:
        AF(o, s16, 0x20) = 0x2AA;
        AF(o, s32, 0x14) = 0x4B0;
        break;
    case 2:
        AF(o, s32, 0x14) = 0x4B0;
        break;
    }
    if (ang > 0xD00 && ang < 0xE00 && dist > 0x480 && dist < 0x720) {
        AF(o, s16, 0x20) = 0x1C7;
    }
    func_sc02_011_80182B88(o, ang, &a, &a);
}

void func_sc02_011_80182A08(u8 *o) {
    SV8 unused;
    s32 a;

    a = ratan2(g_CameraFocus[0], D_80126944) & 0xFFF;
    if (--AF(o, s16, 0xA0) == -1) {
        BlendCameraFramesThen(func_sc02_011_80182564, 0x40);
    } else {
        func_sc02_011_80182B88(o, a, &D_801274E8, g_CameraFocus);
    }
}

void func_sc02_011_80182A9C(u8 *o) {
    u8 unused[8];

    func_sc02_011_80182B88(o, ratan2(g_CameraFocus[0], D_80126944) & 0xFFF, g_CameraFocus, g_CameraFocus);
}

void func_sc02_011_80182AF8(u8 *o) {
    s32 a;
    s16 y;

    a = ratan2(g_CameraFocus[0] << 16, D_80126944 << 16) & 0xFFF;
    y = D_80126942;
    if (y >= -0x27F) {
        AF(o, s16, 0x18) = AF(o, s16, 0x20) = y + 0x2F1;
    } else if (y < -0x37F) {
        if (y >= -0x47F) {
            AF(o, s16, 0x18) = AF(o, s16, 0x20) = y + 0x3F1;
        }
    }
    func_sc02_011_80182B88(o, a, g_CameraFocus, g_CameraFocus);
}

void func_sc02_011_80182B88(u8 *o, s32 d, s16 *a, s16 *b) {
    WMtx m;
    SV8 v;
    SV8 out;
    SV8 r;
    u8 unused[16];

    AF(o, s32, 8) = (s16) EaseValue(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16) EaseValue(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = EaseAngle(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = EaseAngle(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = EaseAngle(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = EaseValue(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = EaseValue(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = EaseValue(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + b[0];
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + b[1];
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + b[2];
    r.x = AF(o, u16, 0x18);
    r.y = AF(o, u16, 0x1A) + d;
    r.z = AF(o, u16, 0x1C);
    func_sc02_011_8018B76C(&r, &m);
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    ApplyMatrixSV(&m, &v, &out);
    AF(o, s32, 0x3C) = (out.x >> 3) + AF(o, s16, 0x28) + a[0];
    AF(o, s32, 0x40) = (out.y >> 3) + AF(o, s16, 0x2A) + a[1];
    AF(o, s32, 0x44) = (out.z >> 3) + AF(o, s16, 0x2C) + a[2];
}

void func_sc02_011_80182D60(StageActor *arg0) {
    if (func_sc02_011_80182DB8() == 1) {
        D_sc02_011_801955B0[arg0->state](arg0);
    }
}

s32 func_sc02_011_80182DB8(u8 *o) {
    if (AF(o, s16, 0x104) != 0) {
        if (AF(o, s32, 0xE4) == 0) {
            AF(o, s16, 0x104) = 0;
            AF(o, s16, 0xFE) = 1;
        } else {
            AF(o, s32, 0xE4)--;
        }
    } else {
        if (AF(o, s16, 0xFE) == 0) return 1;
        if (RequestBgmPack(AF(o, s32, 0xE0)) != 0) {
            AF(o, s16, 0xFE) = 0;
            AF(o, s32, 0xDC) &= ~0x100;
        } else if (AF(o, s32, 0xDC) & 0x100) {
            return 0;
        }
    }
    return 1;
}

void SetPieceInit(StageActor *arg0) {
    if (!(GetVar(0xCD) & 0xFF) || (GetFlag(0x9E) & 0xFF)) {
        RejectSpawn((s32) arg0);
        return;
    }
    arg0->state = 1;
}

void func_sc02_011_80182EC8(StageActor *o) {
    u8 *p;
    s32 i;
    s16 x;
    s16 y;
    s16 z;

    x = g_PlayerX;
    y = D_80126B62;
    z = D_80126B66;
    if (x >= -0x25D && x < -0x180 && y >= -0x142 && z >= 0x3C3 && z < 0x6E0) {
        o->state = 2;
        p = (u8 *) &g_Actors;
        for (i = 0; i < 0x60; i++, p += 0x10C) {
            if (AF(p, u16, 0) == 0xB0) {
                if (AF(p, s16, 0x70) == 0x881) AF(p, s16, 0xFC) = 1;
                if (AF(p, s16, 0x70) == -0x7780) AF(p, s16, 0x70) &= ~0x800;
            }
        }
        TakePlayerControlNoStop();
    }
}

void func_sc02_011_80182FA8(StageActor *arg0) {
    if (func_80128CFC(6) == 1) {
        arg0->state = 3;
        func_sc02_011_80184918((s32) arg0, 0x26);
    }
}

void func_sc02_011_80182FF0(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc02_011_801950A4) != 0) {
        arg0->ext1 = SpawnShadow(arg0);
        SetScript(arg0, (s32) &D_sc02_011_801F3EA4);
        ResetScriptVM();
        arg0->state = 6;
    }
}

void func_sc02_011_80183054(StageActor *arg0) {
    arg0->state = 5;
    SetScript((s32) arg0, (s32) &D_sc02_011_801F3EA4);
}

void SetPieceWaitPlayer(StageActor *o) {
    u16 x = g_PlayerX;
    u16 y = D_80126B62;
    u16 z = D_80126B66;

    if ((s16)x >= -0x25D && (s16)x < -0x180 && (s16)y >= -0x142 && z >= 0x3C3 && z < 0x6E0) {
        ResetScriptVM();
        TakePlayerControlNoStop();
        o->state = 6;
        ShowModel(o);
        AF(FindActorByKindArg(0xB0, 0x881), s16, 0xFC) = 1;
        func_sc02_011_80184918((s32)o, 0x26);
    }
}

void func_sc02_011_8018312C(u8 *arg0) {
    AF(arg0, s16, 2) = 7;
    RunScript((s32) arg0, (s32) &D_sc02_011_80195198);
    StopWithGravity((s32) arg0);
    AF(arg0, s16, 0x34) = 9;
    func_sc02_011_80184A54();
}

void func_sc02_011_80183178(s32 arg0) {
    u8 *p;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), u16, 0x10) -= 0x20;
        p = AF(arg0, u8 *, 0x20);
        if (AF(p, s16, 0x10) < -0x400) {
            AF(p, s16, 0x10) = -0x400;
        }
        if (MoveCollide(arg0) & 0x2000) {
            AF(arg0, s16, 0x34) = 0xA;
            StartCameraShake((s32) &D_sc02_011_80195184);
            func_sc02_011_80184964(arg0);
            PlaySoundId(0x5CA, 0);
            D_sc02_011_801EBA7C = 3;
        }
        break;
    case 1:
        if (TickTimer(arg0) != 0) {
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 2:
        AF(AF(arg0, u8 *, 0x20), u16, 0x10) += 0x80;
        p = AF(arg0, u8 *, 0x20);
        if (AF(p, s16, 0x10) >= 0) {
            AF(p, s16, 0x10) = 0;
            StopWithGravity(arg0);
            SetLocalVelocity(arg0, (s32) &D_sc02_011_80195114);
            SetScript(arg0, (s32) &D_sc02_011_801F404C);
            AF(arg0, s32, 0x1C) = 0xA;
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 3:
        if (TickTimer(arg0) != 0) {
            if (MoveCollideAt(arg0, (s32) &D_sc02_011_80195144) & 0x8000) {
                AF(arg0, s16, 0x98) = 0;
                StopMotion(arg0);
                SetLocalVelocity(arg0, (s32) &D_sc02_011_801950D8);
                SetScript(arg0, (s32) &D_sc02_011_801F3EFC);
                D_sc02_011_801EBA7C = 3;
                AF(arg0, s32, 0x1C) = 0x1E;
                AF(arg0, u16, 0x34)++;
            }
        }
        break;
    case 4:
        if (TickTimer(arg0) == 0) {
            MoveObject(arg0);
        }
        break;
    case 5:
        StopWithGravity(arg0);
        AF(arg0, s16, 0x98) = 0;
        AF(arg0, u16, 0x34)++;
        break;
    case 6:
        AF(AF(arg0, u8 *, 0x20), u16, 0x10) -= 0x20;
        p = AF(arg0, u8 *, 0x20);
        if (AF(p, s16, 0x10) < -0x400) {
            AF(p, s16, 0x10) = -0x400;
        }
        if (MoveCollide(arg0) & 0x2000) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = -0x400;
            AF(arg0, s32, 0x1C) = 0x2D;
            StartCameraShake((s32) &D_sc02_011_80195184);
            func_sc02_011_80184964(arg0);
            PlaySoundId(0x5CA, 0);
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 7:
        if (TickTimer(arg0) != 0) {
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 8:
        p = AF(arg0, u8 *, 0x20);
        AF(p, u16, 0x10) += 0x80;
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x10) >= 0) {
            D_sc02_011_801EBA7C = 3;
            AF(((u8 **) arg0)[8], s16, 0x10) = 0;
            SetScript(arg0, (s32) &D_sc02_011_801F3EA4);
            AF(arg0, u16, 0x34)++;
        }
        break;
    case 10:
        if (func_sc02_011_80184A28(arg0) == 1) {
            p = AF(arg0, u8 *, 0x20);
            D_sc02_011_801EBA7C = 3;
            AF(p, s16, 0x10) = -0x400;
            AF(arg0, s32, 0x1C) = 0x2D;
            AF(arg0, s16, 0x34) = 1;
        }
        break;
    }
    if (UpdateScript(arg0) == 1) {
        EndEvent(arg0);
        AF(arg0, s16, 2) = 8;
        func_sc02_011_80184918(arg0, 0x1C);
    }
}

void func_sc02_011_801834EC(u8 *arg0) {
    AF(arg0, s16, 2) = 9;
    StopWithGravity((s32) arg0);
    SetLocalVelocity((s32) arg0, (s32) &D_sc02_011_80195114);
    SetScript((s32) arg0, (s32) &D_sc02_011_801F404C);
    AF(arg0, s32, 0x1C) = 0xA;
    AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) & ~1);
    func_sc02_011_80182380();
}

void func_sc02_011_80183558(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if (TickTimer(arg0, arg1) != 0) {
        temp_v0 = MoveCollideAt(arg0, (s32) &D_sc02_011_80195144);
        if (temp_v0 & 0x8000) {
            AF(arg0, s16, 0x98) = 0;
            AF(arg0, s16, 2) = 0xA;
            return;
        }
        if (temp_v0 & 0x6000) {
            AF(arg0, s16, 2) = 8;
            return;
        }
        if (!(AF(arg0, s32, 0xDC) & 1) && (AF(arg0, s32, 0x14) >= 0)) {
            SetScript(arg0, (s32) &D_sc02_011_801F40A4);
            AF(arg0, s32, 0xDC) = (s32) (AF(arg0, s32, 0xDC) | 1);
        }
    }
}

void func_sc02_011_8018360C(StageActor *arg0) {
    arg0->state = 0xB;
    func_sc02_011_8018452C((s32) arg0);
}

void func_sc02_011_80183630(s32 arg0) {
    s32 temp;
    u8 *p;

    if (func_sc02_011_801845F4(arg0) == 1) {
        return;
    }
    switch (AF(arg0, u16, 0x34)) {
    case 0:
        func_sc02_011_8018487C(arg0);
        temp = func_sc02_011_80183954(arg0);
        D_sc02_011_801955F0 = temp;
        if (func_sc02_011_80183B30(arg0, temp) == 1) {
            AF(arg0, s16, 0x34) = 8;
            break;
        }
        if (func_sc02_011_80183994(arg0, D_sc02_011_801955F0) == 1) {
            AF(arg0, s16, 0x34) = 3;
        }
        break;
    case 1:
        AF(arg0, s32, 0x1C) = 0x1E;
        AF(arg0, s16, 0x34) = 2;
    case 2:
        if (func_sc02_011_80183994(arg0, D_sc02_011_801955F0) == 1) {
            AF(arg0, s16, 0x34) = 3;
        } else if (TickTimer(arg0) != 0) {
            AF(arg0, s16, 0x34) = 0;
            SetScript(arg0, (s32) &D_sc02_011_801F3EFC);
            AF(arg0, s32, 0x1C) = 0x2D;
        }
        break;
    case 3:
        StopWithGravity(arg0);
        SetForwardVelocity(arg0, 0xA0000);
        AF(arg0, s16, 0x34) = 4;
        break;
    case 4:
        AF(AF(arg0, u8 *, 0x20), u16, 0x10) -= 0x20;
        p = AF(arg0, u8 *, 0x20);
        if (AF(p, s16, 0x10) < -0x400) {
            AF(p, s16, 0x10) = -0x400;
        }
        if (MoveCollide(arg0) & 0x2000) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = -0x400;
            AF(arg0, s32, 0x1C) = 0x1E;
            AF(arg0, s16, 0x34) = 5;
            PlaySoundId(0xB09, 0);
            StartCameraShake((s32) &D_sc02_011_80195184);
        }
        break;
    case 5:
        if (TickTimer(arg0) != 0) {
            AF(arg0, s16, 0x34) = 6;
        }
        break;
    case 6:
        p = AF(arg0, u8 *, 0x20);
        AF(p, u16, 0x10) += 0x80;
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x10) >= 0) {
            UpdateModelZYX(arg0);
            StopWithGravity(arg0);
            SetForwardVelocity(arg0, 0xFFFC8000);
            SetScript(arg0, (s32) &D_sc02_011_801F3FA4);
            AF(arg0, s16, 0x34) = 7;
        }
        break;
    case 7:
        if (MoveOnGroundOfs(arg0, (s32) &D_sc02_011_80195144) & 0x8000) {
            AF(arg0, s16, 0x34) = 0;
            func_sc02_011_8018452C(arg0);
            AF(arg0, s32, 0xDC) &= ~0x10;
        }
        break;
    case 8:
        SetScript(arg0, (s32) &D_sc02_011_801F41DC);
        AF(arg0, s32, 0x1C) = 0x14;
        AF(arg0, s16, 0x34) = 9;
        break;
    case 9:
        if (TickTimer(arg0) != 0) {
            AF(arg0, s16, 0x34) = 0xA;
            AF(arg0, s16, 0x98) = 0;
        }
        break;
    case 10:
        SetScript(arg0, (s32) &D_sc02_011_801F3EA4);
        StopMotion(arg0);
        SetLocalVelocity(arg0, (s32) &D_sc02_011_80195120);
        MoveObject(arg0);
        StopWithGravity(arg0);
        SyncModelPos(arg0);
        AF(arg0, s16, 0x34) = 0xB;
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, s32, 0xDC) = (AF(arg0, s32, 0xDC) & ~0x20) | 0x48;
        break;
    }
}

s32 func_sc02_011_80183954(Mover *arg0) {
    MoveObject(arg0);
    return ((arg0->pos[1].h.i - 0xB0) >= -0xA01) * 2;
}

s32 func_sc02_011_80183994(u8 *o, s32 a1) {
    s32 flag;
    s32 i;
    u16 *p;

    flag = 0;
    p = &g_Actors;
    for (i = 0; i < 0x60; i++) {
        if (*p == 0xB0) {
            if (flag == 0) {
                SyncModelPos(o);
                flag = 1;
            }
            if (func_sc02_011_80183C2C(o, p, a1) != 0) {
                RestorePrevPos(o);
                SyncModelPos(o);
                AF(o, s16, 0x98) = 0;
                if (func_sc02_011_80183C2C(o, p, 4) == 1) {
                    AF(o, s32, 0xDC) |= 0x10;
                    return 1;
                }
                return 0;
            }
        }
        p = (u16 *)((u8 *)p + 0x10C);
    }
    if (AF(o, s16, 0x98) == 0) {
        SetScript(o, &D_sc02_011_801F3EFC);
    }
    if (--AF(o, s32, 0xE8) <= 0) {
        AF(o, s32, 0xE8) = 0x2D;
        if (rand() % 3 == 0) {
            func_sc02_011_8017C294((s32)o, &D_sc02_011_801955F4[rand() & 1], 1);
            func_sc02_011_8017C294((s32)o, &D_sc02_011_801955F4[(rand() & 1) + 2], 1);
        }
    }
    return 0;
}

s32 func_sc02_011_80183B30(u8 *o, s32 a) {
    s16 i;

    switch (a) {
    case 0:
        AF(o, s32, 0xDC) |= 0x20;
        return 1;
    case 1:
        if (!(AF(o, s32, 0xDC) & 4)) {
            i = AF(o, s16, 0xFC) ^ 1;
            AF(o, s16, 0xFC) = i;
            SetLocalVelocity(o, &D_sc02_011_801950E4[i]);
            AF(o, s32, 0xDC) |= 4;
        }
        break;
    case 2:
        if (AF(o, s32, 0xDC) & 4) {
            SetLocalVelocity(o, &D_sc02_011_801950D8);
            AF(o, s32, 0xDC) &= ~4;
        }
        break;
    }
    return 0;
}

s32 func_sc02_011_80183C2C(StageActor *arg0, s32 arg1, s32 arg2) {
    u16 *p;
    SV8 a;
    SV8 b;
    p = (u16 *)(((s32)arg0->hitData & 0x0FFFFFFF) | 0x80000000);
    if (arg2 & 1) {
        a.x = p[2];
        a.y = p[4];
        a.z = p[6];
        b.x = p[3];
        b.y = p[4];
        b.z = p[6];
        if (func_sc02_011_801840C0(arg0, arg1, &a, &b) == 1) {
            return 1;
        }
        a.x = p[2];
        a.y = p[5];
        a.z = p[6];
        b.x = p[3];
        b.y = p[5];
        b.z = p[6];
        if (func_sc02_011_801840C0(arg0, arg1, &a, &b) == 1) {
            return 1;
        }
        a.x = p[2];
        a.y = p[4];
        a.z = p[7];
        b.x = p[3];
        b.y = p[4];
        b.z = p[7];
        if (func_sc02_011_801840C0(arg0, arg1, &a, &b) == 1) {
            return 1;
        }
        a.x = p[2];
        a.y = p[5];
        a.z = p[7];
        b.x = p[3];
        b.y = p[5];
        b.z = p[7];
        if (func_sc02_011_801840C0(arg0, arg1, &a, &b) == 1) {
            return 1;
        }
    }
    if (arg2 & 2) {
        a.x = p[2];
        a.y = p[4];
        a.z = p[6];
        b.x = p[2];
        b.y = p[5];
        b.z = p[6];
        if (func_sc02_011_801840C0(arg0, arg1, &a, &b) == 1) {
            return 1;
        }
        a.x = p[2];
        a.y = p[4];
        a.z = p[7];
        b.x = p[2];
        b.y = p[5];
        b.z = p[7];
        if (func_sc02_011_801840C0(arg0, arg1, &a, &b) == 1) {
            return 1;
        }
        a.x = p[3];
        a.y = p[4];
        a.z = p[6];
        b.x = p[3];
        b.y = p[5];
        b.z = p[6];
        if (func_sc02_011_801840C0(arg0, arg1, &a, &b) == 1) {
            return 1;
        }
        a.x = p[3];
        a.y = p[4];
        a.z = p[7];
        b.x = p[3];
        b.y = p[5];
        b.z = p[7];
        if (func_sc02_011_801840C0(arg0, arg1, &a, &b) == 1) {
            return 1;
        }
    }
    if (arg2 & 4) {
        a.x = p[2];
        a.y = p[4];
        a.z = p[6];
        b.x = p[2];
        b.y = p[4];
        b.z = p[7];
        if (func_sc02_011_801840C0(arg0, arg1, &a, &b) == 1) {
            return 1;
        }
        a.x = p[2];
        a.y = p[5];
        a.z = p[6];
        b.x = p[2];
        b.y = p[5];
        b.z = p[7];
        if (func_sc02_011_801840C0(arg0, arg1, &a, &b) == 1) {
            return 1;
        }
        a.x = p[3];
        a.y = p[4];
        a.z = p[6];
        b.x = p[3];
        b.y = p[4];
        b.z = p[7];
        if (func_sc02_011_801840C0(arg0, arg1, &a, &b) == 1) {
            return 1;
        }
        a.x = p[3];
        a.y = p[5];
        a.z = p[6];
        b.x = p[3];
        b.y = p[5];
        b.z = p[7];
        if (func_sc02_011_801840C0(arg0, arg1, &a, &b) == 1) {
            return 1;
        }
    }
    return 0;
}

s32 func_sc02_011_801840C0(StageActor *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    SV8 a;
    SV8 b;

    FaceHelper(arg0, arg2, &a);
    FaceHelper(arg0, arg3, &b);
    return PathHitsModel(AF(arg1, s32, 0x20), AF(arg1, s32, 0x58), &a, &b) != 0;
}

void func_sc02_011_80184134(StageActor *arg0) {
    func_sc02_011_801823B8();
    arg0->state = 0xD;
    arg0->stateCount = 0;
    func_sc02_011_80184738(1);
    ResetScriptVM();
    RunScript((s32) arg0, arg0->ext0);
    func_sc02_011_80188228();
}

void func_sc02_011_8018418C(u8 *o) {
    u16 t;

    switch (AF(o, u16, 0x34)) {
    case 0:
        break;
    case 1:
        StopWithGravity(o);
        AF(o, u16, 0x34)++;
        break;
    case 2:
        AF(AF(o, u8 *, 0x20), s16, 0x10) -= 0x20;
        if (AF(AF(o, u8 *, 0x20), s16, 0x10) < -0x400) {
            AF(AF(o, u8 *, 0x20), s16, 0x10) = -0x400;
        }
        if (MoveCollide(o) & 0x2000) {
            AF(AF(o, u8 *, 0x20), s16, 0x10) = -0x400;
            AF(o, s32, 0x1C) = 0x3C;
            StartCameraShake(&D_sc02_011_80195184);
            AF(o, u16, 0x34)++;
        }
        break;
    case 3:
        ToggleModel(o);
        if (TickTimer(o) != 0) {
            D_sc02_011_801EBA7C = 3;
            AF(o, u16, 0x34) = 0;
            CancelStreamLoad();
            if (AF(o, u8 *, 0xD0) != 0) {
                FreeShadow(AF(o, u8 *, 0xD0));
            }
        }
        break;
    case 4:
        if (PlayerEvent01(&g_Player) != 0) {
            D_sc02_011_801EBA7C = 3;
            AF(o, u16, 0x34) = 0;
            CancelStreamLoad();
        }
        break;
    case 5:
        t = AF(o, u16, 0x5C);
        if (t & 1) {
            AF(o, u16, 0x5C) = t & 0xFFFE;
            AF(o, s16, 0x98) = 0;
            StopWithGravity(o);
            SetLocalVelocity(o, &D_sc02_011_80195138);
            RequestXaClip(1, 0x4331);
            AF(o, u16, 0x34)++;
        }
        break;
    case 6:
        if (!(MoveOnGroundOfs(o, &D_sc02_011_8019514C) & 0x2000)) {
            AF(o, u16, 0x34)++;
            StopWithGravity(o);
            SetScript(o, &D_sc02_011_801F4654);
        }
        break;
    case 7:
        AF(AF(o, u8 *, 0x20), s16, 0x10) += 0x20;
        if (AF(AF(o, u8 *, 0x20), s16, 0x10) > 0x400) {
            AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x400;
        }
        if (MoveCollide(o) & 0x2000) {
            AF(AF(o, u8 *, 0x20), s16, 0x10) = 0x400;
            AF(o, s32, 0x1C) = 0x3C;
            AF(o, u16, 0x34) = 3;
            StartCameraShake(&D_sc02_011_80195184);
        }
        break;
    }
    if (UpdateScript(o) == 1) {
        EndEvent(o);
        AF(o, s16, 2) = 0xE;
        func_sc02_011_80184738(0);
    }
}

void func_sc02_011_80184414(StageActor *arg0) {
    if (((s32)arg0->ext0 != &D_sc02_011_801952D8) || (func_800D0CE0() != 0)) {
        func_sc02_011_8018823C();
        FreeActor((s32) arg0);
    }
}

void func_sc02_011_8018446C(s32 arg0, s32 arg1) {
    if ((TickTimer(arg0, arg1) != 0) && ((PlayerEvent04((s32) &g_Player) != 0) || (PlayerEvent01((s32) &g_Player) != 0))) {
        AF(arg0, s16, 2) = 0xC;
        if ((PlayerEvent01((s32) &g_Player) != 0) && (D_80126B62 < -0xA01)) {
            func_sc02_011_8018490C(arg0, (s32) &D_sc02_011_801954B8, 3);
            return;
        }
        func_sc02_011_8018490C(arg0, (s32) &D_sc02_011_801952D8, 1);
        ResetSkipSe();
    }
}

void func_sc02_011_8018452C(s32 arg0) {
    StopMotion(arg0);
    SetLocalVelocity(arg0, (s32) &D_sc02_011_801950D8);
    SetScript(arg0, (s32) &D_sc02_011_801F3EFC);
    AF(arg0, s16, 0xFC) = (s16) (rand() & 1);
    AF(arg0, s32, 0x1C) = 0x2D;
    AF(arg0, s16, 0x34) = 0;
}

void func_sc02_011_80184590(StageActor *arg0) {
    arg0->pos[0].w = (s32) g_PlayerPosX;
    SpawnActor(0xBA, (s32) arg0);
}

void func_sc02_011_801845C0(StageActor *arg0) {
    g_PlayerPosX = arg0->pos[0].w;
    SpawnActorArg(0xBA, 1, (s32) arg0);
}

s32 func_sc02_011_801845F4(u8 *o) {
    Player *p = &g_Player;

    if (PlayerEvent04(p) == 0 && PlayerEvent01(p) == 0) return 0;
    if (PlayerEvent01(p) != 0 && p->pos[1].h.i < -0xA01) {
        if (!(AF(o, s32, 0xDC) & 0x80)) {
            TakePlayerControlNoStop();
            AF(o, s32, 0xDC) |= 0x80;
        }
        if (AF(o, s32, 0xDC) & 0x30) return 0;
        AF(o, s32, 0xDC) &= ~0x80;
        AF(o, s16, 2) = 0xC;
        if (AF(o, s32, 0xDC) & 8) {
            func_sc02_011_8018490C(o, (s32) &D_sc02_011_801954B8, 3);
            return 1;
        }
        func_sc02_011_8018490C(o, (s32) &D_sc02_011_801953D8, 2);
        AF(o, s16, 0x98) = 0;
        return 1;
    }
    if (!(AF(o, s32, 0xDC) & 8)) return 0;
    TakePlayerControlNoStop();
    AF(o, s32, 0x1C) = 0x10;
    AF(o, s16, 2) = 0xF;
    return 1;
}

void func_sc02_011_80184738(s32 a) {
    u8 *p;
    s32 i;

    for (p = (u8 *) &g_Actors, i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) == 0xB0 && (AF(p, u16, 0x70) & 0xF) == 0) {
            AF(p, s16, 0xFC) = a;
            AF(p, u16, 0x70) |= 0x800;
        }
    }
}

void func_sc02_011_8018479C(void) {
    D_sc02_011_80195414 = g_PlayerX | ((D_80126B66 - 0x180) << 0x10);
}

void func_sc02_011_801847C8(void) {
    BlendCameraThen((s32) &func_sc02_011_8018263C);
}

void func_sc02_011_801847F0(void) {
    BlendCameraThen((s32) &func_sc02_011_801823EC);
}

void func_sc02_011_80184818(s32 arg0) {
    func_sc02_011_80184918(arg0, 0x1D);
}

void func_sc02_011_80184838(s32 arg0) {
    func_sc02_011_80184918(arg0, 0x1E);
}

void SetPieceDone(void) {
    SetFlag(0x9E, 1);
}

extern s32 D_sc02_011_80195640;

/* symbol split: splat split one original object into neighbouring symbols; read through the neighbour (offset form), as the original */
void func_sc02_011_8018487C(Mover *o) {
    s32 v;
    s32 t;
    s32 *p;

    t = o->pos[1].w + (s32)0xFF700000;
    v = ((D_80126B60 - t) / 0x100000) << 15;
    if (v > 0) {
        v = 0;
    } else if (v < -0x40000) {
        v = -0x40000;
    }
    p = &D_sc02_011_80195640;
    *p = v - 0x20000;
    SetLocalVelocity(o, p - 1);
}

void func_sc02_011_8018490C(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0xCC) = arg1;
    AF(arg0, s16, 0x102) = (s16) arg2;
}

s32 func_sc02_011_80184918(s32 arg0, s32 arg1) {
    func_800D0C48(1, arg1);
    AF(arg0, s16, 0x104) = 1;
    AF(arg0, s32, 0xE4) = 0x1E;
    AF(arg0, s32, 0xE0) = arg1;
    return 0x1E;
}

void func_sc02_011_80184964(u8 *o) {
    SV8 p;
    u8 *r;
    u8 *q;

    p.x = AF(o, u16, 6);
    p.y = AF(o, u16, 0xA);
    p.z = AF(o, u16, 0xE);
    p.y += 0x28;
    p.z += 0x52;
    SpawnKind1CAt(&p);
    r = SpawnKind1CAt(&p);
    if (r != 0) {
        q = AF(r, u8 *, 0xCC);
        AF(q, s16, 0x18) = AF(q, s16, 0x1A) = 0x6000;
    }
}

void CheckFlag125Script(StageActor *arg0) {
    if (GetFlag(0x125) & 0xFF) {
        SetScript(arg0, (s32) &D_sc02_011_801F45D4);
        SetFlag(0x125, 0);
    }
}

s32 func_sc02_011_80184A28(s32 arg0) {
    return AF(arg0, s16, 0xFE) == 0;
}

s32 func_sc02_011_80184A34(void) {
    return func_800D0CE0() != 0;
}

s32 func_sc02_011_80184A54(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;
    u16 *var_s0;
    u16 temp_v1;

    var_s1 = 0;
    var_s0 = &g_Actors;
    do {
        temp_v1 = *var_s0;
        if (((u32) (temp_v1 - 0x123) < 2U) || (temp_v1 == 0x6C)) {
            DespawnActor((s32) var_s0);
        }
        var_s1 += 1;
        temp_v0 = var_s1 < 0x60;
        var_s0 = (u16 *)((u8 *)var_s0 + 0x10C);
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc02_011_80184ACC(StageActor *arg0) {
    D_sc02_011_801957F8[arg0->state]();
}

void func_sc02_011_80184B08(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, s16, 0x76) = 0xA;
    AF(arg0, u16, 0x5C) = 0x8C00U;
    temp_v0 = AllocActorModel((s32) arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc02_011_801CA540);
    AF(arg0, s32, 0x58) = (s32) ((s32) (((AF(arg0, u16, 0x70) & 1) * 0x10) + &D_sc02_011_80195648) | 0x60000000);
    if (AF(arg0, u16, 0x70) & 1) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 0x200);
        SetScript((s32) arg0, (s32) &D_sc02_011_8019105C);
        AF(arg0, s32, 4) = (s32) g_PlayerPosX;
        AF(arg0, s32, 8) = (s32) D_80126B60;
        AF(arg0, s32, 0xC) = (s32) D_80126B64;
    } else {
        AF(arg0, s16, 2) = 1;
        SetScript((s32) arg0, (s32) &D_sc02_011_80195734);
    }
    UpdateModelZYX((s32) arg0);
}

void func_sc02_011_80184C0C(StageActor *arg0) {
    arg0->pos[0].h.i = (u16) (u16)arg0->parent->pos[0].h.i;
    arg0->pos[2].h.i = (u16) (u16)arg0->parent->pos[2].h.i;
    arg0->model->rot.vy = (u16) (u16)arg0->parent->model->rot.vy;
    if ((s32)arg0->parent->script == &D_sc02_011_801F432C) {
        arg0->state = 3;
        SetScript((s32) arg0, (s32) &D_sc02_011_80195744);
        arg0->timer = 0xE;
    }
}

void func_sc02_011_80184C98(u8 *o) {
    SV8 a;
    u16 f;

    f = AF(o, u16, 0x5C);
    if (f & 1) {
        AF(o, u16, 0x5C) = f & 0xFFFE;
        if (AF(o, u16, 0x5E) == 9) {
            StopWithGravity(o);
            a.x = AF(AF(o, u8 *, 0x64), s16, 6);
            a.y = AF(AF(o, u8 *, 0x64), s16, 0xA);
            a.z = AF(AF(o, u8 *, 0x64), s16, 0xE);
            if (func_sc02_011_80185098(o, &a) == 1) {
                SetLocalVelocity(o, &D_sc02_011_801957EC);
            }
            AF(o, s16, 2) = 5;
        }
    }
}

void func_sc02_011_80184D50(u8 *o) {
    SV8 a;

    if (--AF(o, s32, 0x1C) == 0) {
        AF(o, s16, 2) = 4;
        AF(o, s16, 0x98) = 0;
        AF(o, s16, 0xE) += 0x68;
        StopWithGravity(o);
        a.x = g_PlayerX;
        a.y = D_80126B62;
        a.z = D_80126B66;
        if (func_sc02_011_80185098(o, &a) == 1) {
            SetLocalVelocity(o, &D_sc02_011_801957EC);
        }
        MoveObject(o);
        AF(o, s32, 0x1C) = 0x1E;
    }
}

void func_sc02_011_80184E00(u8 *o) {
    SV8 a;
    SV8 b;
    SV8 c;

    a.x = g_PlayerX;
    a.y = D_80126B62;
    a.z = D_80126B66;
    func_sc02_011_80185098(o, &a);
    if (MoveCollide(o) & 0x6000) {
        AF(o, s16, 2) = 6;
        AF(o, s32, 0x1C) = 0x1E;
        return;
    }
    if (AF(o, s16, 0xFC) != 0) return;
    FaceHelper(o, &D_sc02_011_801957CC, &b);
    FaceHelper(o, &D_sc02_011_801957CC + 8, &c);
    if (PathHitsModel(g_PlayerModel, g_PlayerHitData, &b, &c) == 0) return;
    SetFatalHit();
    HitPlayer(1, 0xC001, 0, 1000, &c, &g_GroundNormal);
    AF(AF(o, u8 *, 0x64), s16, 0x34) = 4;
    AF(o, s16, 0xFC) = 1;
    RequestXaClip(1, 0x4292);
    D_80126B66 += 0x20;
}

void func_sc02_011_80184F48(u8 *o) {
    SV8 b;
    SV8 c;
    SV8 a;

    a.x = AF(AF(o, u8 *, 0x64), s16, 6);
    a.y = AF(AF(o, u8 *, 0x64), s16, 0xA);
    a.z = AF(AF(o, u8 *, 0x64), s16, 0xE);
    func_sc02_011_80185098(o, &a);
    if (MoveCollide(o) & 0x6000) {
        AF(o, s16, 2) = 6;
        AF(o, s32, 0x1C) = 0x1E;
    } else if (AF(o, s16, 0xFC) == 0) {
        FaceHelper(o, &D_sc02_011_801957DC, &b);
        FaceHelper(o, &D_sc02_011_801957DC + 8, &c);
        if (PathHitsModel(AF(AF(o, u8 *, 0x64), s32, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x58), &b, &c) != 0) {
            AF(o, s16, 0xFC) = 1;
            AF(AF(o, u8 *, 0x64), s16, 0x34) = 1;
            RequestXaClip(1, 0x4331);
        }
    }
}

void func_sc02_011_80185048(u8 *arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) ^ 0x80000000);
    if (TickTimer((s32) arg0, 0x80000000) != 0) {
        FreeActor((s32) arg0);
    }
}

s32 func_sc02_011_80185098(u8 *o, SV8 *a) {
    if (a->y < AF(o, s16, 0xA) || AF(o, s16, 0xFC) != 0) {
        return 0;
    }
    AF(AF(o, u8 *, 0x20), s16, 0x10) = -ratan2(a->z - AF(o, s16, 0xE), a->y - AF(o, s16, 0xA));
    UpdateModelZYX(o);
    SetLocalVelocity(o, &D_sc02_011_801957EC);
    return 1;
}

void func_sc02_011_80185120(StageActor *arg0) {
    D_sc02_011_801958B8[arg0->state]();
}

void func_sc02_011_8018515C(StageActor *o) {
    ActorInit *d;
    u16 f;
    ModelObj *v;

    f = (u16)o->param;
    d = (u8 *)&D_sc02_011_80195834[f & 1];
    if (f & 0x80) {
        o->init = d;
        o->hitState = d->hitState;
        v = AllocActorModel();
        o->model = v;
        if (v == 0) {
            RejectSpawn(o);
            return;
        }
        func_8001C810(v, d->model);
        o->hitData = (s32)d->hitData | 0x60000000;
        o->model->unk04 |= 0x8000;
    } else if (SetupActor(o, d) == 0) {
        return;
    }
    o->message = 1;
    SetScript(o, &D_sc02_011_801958A8);
    o->targetClass = 0;
    if (o->param & 0x8000) {
        o->state = 1;
    } else {
        o->state = 3;
    }
}

void func_sc02_011_80185268(StageActor *o) {
    o->state = 2;
    if ((u16)o->param & 0x800) {
        if ((s32)o->message != 0) o->timer = 0x96;
        else o->timer = 0x4B;
    } else {
        if ((s32)o->message != 0) o->timer = 0x4B;
        else o->timer = 0xB4;
    }
}

void func_sc02_011_801852B0(u8 *o) {
    if (TickTimer((s32) o) == 0 && AF(o, s16, 0xFC) == 0) return;
    if (AF(o, s16, 0xFC) != 0 && AF(o, s32, 0xDC) == 0) {
        AF(o, s16, 2) = 5;
        return;
    }
    AF(o, s32, 0xDC) ^= 1;
    StopMotion(o);
    AF(o, u16, 0x5C) |= 0x400;
    if (AF(o, s32, 0xDC) == 0) {
        AF(o, s16, 2) = 7;
        SetForwardVelocity(o, 0xFFF80000);
        AF(o, s32, 0x1C) = 0x20;
    } else {
        AF(o, s16, 2) = 6;
        SetForwardVelocity(o, 0x100000);
        AF(o, s32, 0x1C) = 0x10;
    }
    func_sc02_011_8018567C(o, 0x61A);
}

void func_sc02_011_80185388(StageActor *arg0) {
    arg0->state = 4;
    if (GetFlag(0x9E) & 0xFF) {
        arg0->unkFC = 1;
    }
}

void func_sc02_011_801853CC(u8 *o) {
    u16 s = AF(o, u16, 0x34);

    switch (s) {
    case 0:
        if (AF(o, s16, 0xFC)) {
            AF(o, u16, 0x34) = s + 1;
            SetForwardVelocity(o, 0xFFF80000);
            AF(o, s32, 0x1C) = 0x20;
        }
        break;
    case 1:
        if (func_sc02_011_80185548(o) == 1) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 2:
        break;
    }
}

void func_sc02_011_80185464(StageActor *arg0) {
    if (arg0->unkFC == 0) {
        arg0->state = 2;
    }
}

void func_sc02_011_80185480(StageActor *o) {
    if (func_sc02_011_80185548(o) == 1) {
        if (o->param & 0x8000) {
            o->state = 1;
        } else {
            o->state = 3;
        }
        func_sc02_011_8018567C(o, 0x61B);
    }
}

void func_sc02_011_801854DC(StageActor *o) {
    if (func_sc02_011_80185548(o) == 1) {
        if (o->param & 0x8000) {
            o->state = 1;
        } else {
            o->state = 3;
        }
        func_sc02_011_8018567C(o, 0x61B);
        o->hitState &= 0xFBFF;
    }
}

s32 func_sc02_011_80185548(u8 *o) {
    V3 save;
    V3 out;
    V3 tmp;
    SV8 pos;
    Player *pl;

    MoveObject(o);
    pl = &g_Player;
    if (AF(o, u8, 0x74) != 0) {
        save.x = g_PlayerPosX;
        save.y = D_80126B60;
        save.z = D_80126B64;
        WorldToLocal16(AF(o, u8 *, 0x20) + 0x34, &save, &tmp);
        UpdateModelZYX(o);
        LocalToWorld16(AF(o, u8 *, 0x20) + 0x34, &tmp, &out);
        g_PlayerPosX = out.x;
        D_80126B60 = out.y;
        D_80126B64 = out.z;
        pos.x = ((u16 *)&g_PlayerPosX)[1];
        pos.y = ((u16 *)&D_80126B60)[1];
        pos.z = ((u16 *)&D_80126B64)[1];
        if (TraceMap(1, (u8 *)pl + 0x88, &pos) & 0x8000) {
            g_PlayerPosX = save.x;
            D_80126B60 = save.y;
            D_80126B64 = save.z;
        }
    }
    return TickTimer(o) != 0;
}

s32 func_sc02_011_8018567C(u8 *o, s32 id) {
    s32 v;
    s32 d;
    s32 t;
    Player *c;

    v = 0;
    c = &g_Player;
    if (D_80126B62 < -0x981) return 0;
    d = PosSVecDistSq((u8 *)c + 4, o + 0x88);
    if (d <= 0x190000) {
        d -= 0x4000;
        v = 0x60;
        if (d > 0xC7FFF) {
            v -= (d - 0xC8000) / 8533;
        } else {
            t = d / 26425 - 0x1F;
            v -= t;
        }
    }
    PlaySoundId((u16) id, (v & 0x7F) | 0x1000);
    return 1;
}

void func_sc02_011_8018576C(u8 *o) {
    SV8 v[4];
    s32 flag[2];
    s32 otz;
    u8 *p;
    u8 *pk;
    u32 *ot;
    s32 w;
    s32 h;
    s32 i;
    s32 z;

    p = (u8 *)((AF(o, u32, 0x58) & 0x0FFFFFFF) | 0x80000000);
    v[0].y = AF(o, u16, 0x8A) + AF(p, u16, 8) - 0x40;
    v[1].y = AF(o, u16, 0x8A) + AF(p, u16, 8) - 0x40;
    v[2].y = AF(o, u16, 0x8A) + AF(p, u16, 0xA) + 0x40;
    v[3].y = AF(o, u16, 0x8A) + AF(p, u16, 0xA) + 0x40;
    v[0].z = v[1].z = v[2].z = v[3].z = AF(o, u16, 0x8C) - 0x50;
    ot = g_WorldOtTable[D_800B9A02[0]];
    w = AF(p, s16, 4);
    h = (w - 0x20 < 0 ? 0x20 - w : w - 0x20) / 2;
    for (i = -2; i < 2; i++) {
        pk = g_PrimNext;
        g_PrimNext = pk + 0x18;
        AF(pk, u8, 3) = 5;
        AF(pk, s32, 4) = 0;
        AF(pk, u8, 7) = 0x28;
        v[0].x = v[2].x = AF(o, u16, 0x88) + i * h;
        v[1].x = v[3].x = AF(o, u16, 0x88) + (i + 1) * h;
        gte_ldv3(&v[0], &v[1], &v[2]);
        gte_rtpt();
        gte_stflg(&flag[0]);
        gte_stsxy3(pk + 8, pk + 0xC, pk + 0x10);
        gte_ldv0(&v[3]);
        gte_rtps();
        gte_stflg(&flag[1]);
        flag[0] |= flag[1];
        gte_stsxy(pk + 0x14);
        gte_avsz4();
        gte_stotz(&otz);
        if (!(flag[0] & ~0x1000)) {
            z = otz + 0x29;
            if (z >= 0x1000) z = 0x1000;
            ((PTag *)pk)->addr = ((PTag *)&ot[z])->addr;
            ((PTag *)&ot[z])->addr = (u32)pk;
        }
    }
}

void func_sc02_011_801859E0(StageActor *arg0) {
    D_sc02_011_801958E8[arg0->state]();
}

void func_sc02_011_80185A1C(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    arg0->state = 1;
    arg0->hitState = 0x40;
    AF(arg0, s32 *, 0x58) = &D_sc02_011_801958D8;
}

void func_sc02_011_80185A84(void) {
}

s32 func_sc02_011_80185A8C(StageActor *arg0) {
    return SetState(arg0, 1);
}

void TriggerBoxWait(StageActor *o) {
    s16 *t = D_sc02_011_801958F0;

    if (o->pos[0].h.i + t[2] < *(s16 *)&g_PlayerX && *(s16 *)&g_PlayerX < o->pos[0].h.i + t[3]
        && o->pos[1].h.i + t[4] < D_80126B62 && D_80126B62 < o->pos[1].h.i + t[5]
        && o->pos[2].h.i + t[6] < D_80126B66 && D_80126B66 < o->pos[2].h.i + t[7]) {
        o->hitData = (s32) (t + 8) | 0x40000000;
        o->hitState = 0x800;
        TriggerBoxStartEvent(o);
    }
}

void TriggerBoxStartEvent(StageActor *o) {
    func_800D0C48(1);
    o->timer = 0x20;
    StartEvent(o, &D_sc02_011_80195910);
    SetState(o, 2);
}

u16 func_sc02_011_80185BF4(u8 *arg0) {
    return AF(arg0, u16, 0x34);
}

void func_sc02_011_80185C00(void) {
    RequestBgmPack(0x2F);
}

s32 func_sc02_011_80185C20(StageActor *arg0) {
    return SetState(arg0, 3);
}

void func_sc02_011_80185C40(StageActor *arg0) {
    D_sc02_011_80195948[arg0->state]();
}

void func_sc02_011_80185C7C(StageActor *o) {
    ModelObj *p;
    s32 q;
    u8 unused[0x20];

    p = AllocActorModel(o);
    o->model = p;
    if (p == 0) {
        goto fail;
    }
    if (o->param == 0) {
        InitModel(p, &D_sc02_011_801E5340);
        q = AllocActorSprite();
        o->ext0 = q;
        if (q == 0) {
fail:
            RejectSpawn(o);
            return;
        }
        InitSpriteKind2(q, &D_sc02_011_8019595C, 0x2F0, 0x138);
        func_sc02_011_801865B0(o);
        AF(q, s16, 0x18) = 0x2200;
        AF(q, s16, 0x1A) = 0x1600;
        AF(q, u8, 0x27) = 0xED;
        AF(q, s32, 4) |= 0x51000000;
        StartSpriteAnim(q, &D_sc02_011_801EB518, &D_sc02_011_80195968);
        o->reactive = 1;
        o->params = &D_sc02_011_801959B8;
        o->hitData = (s32)&D_sc02_011_80195998 | 0x40000000;
        o->hitState = 0x8000;
        AF(o, s16, 0xAE) = -3;
        o->reactMask = 0;
        o->react = 0;
        o->reactOpts |= 2;
        o->workFE = (u16)o->pos[1].h.i;
        NextState(o);
    } else {
        func_8001CA1C(p, 0);
        o->model->scale.vx = 0x2C00;
        o->model->scale.vy = 0x3800;
        o->model->unk04 |= 0x71000000;
        o->vel[1] = 0xFFFE0000;
        o->vel[2] = 0xFFFD0000;
        SetScript(o, &D_sc02_011_80195A94);
        SetState(o, 10);
    }
}

void func_sc02_011_80185E20(u8 *o) {
    s32 s;
    s32 g;

    s = AF(o, s32, 0x1C);
    if (s == 0x30) {
        ForceTintRow5();
    } else if (s == 0x10) {
        func_sc02_011_80186728(AF(o, s32, 0xD0));
    }
    if (AF(o, u16, 0x102) & 1) {
        AF(AF(o, u8 *, 0x64), u16, 6) -= 3;
        AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 8) -= 3;
        AF(o, u16, 6) -= 3;
    } else {
        AF(AF(o, u8 *, 0x64), u16, 6) += 3;
        AF(AF(AF(o, u8 *, 0x64), u8 *, 0x20), u16, 8) += 3;
        AF(o, u16, 6) += 3;
    }
    g = D_sc02_011_801EB520;
    AF(o, u16, 0x102)++;
    if (g == 0) {
        D_sc02_011_801EB520 = func_sc02_011_80188114();
    }
    if (TickTimer(o) != 0 && D_sc02_011_801EB520 != 0) {
        func_sc02_011_80186070(o);
    } else {
        s = AF(o, s32, 0x1C);
        if (s < 0x48 && !(s & 3)) {
            func_sc02_011_80185FA0(o);
        }
    }
    IsEventDone(o);
}

s32 func_sc02_011_80185FA0(s32 arg0) {
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    do {
        temp_v0_2 = SpawnPropFrom(arg0, 0x22);
        if (temp_v0_2 != 0) {
            temp_v1 = (var_s0 + ((D_800B99D8 & 4) * 3)) - 0x2A;
            AF(temp_v0_2, u16, 6) = (u16) (AF(temp_v0_2, u16, 6) + temp_v1);
            AF(temp_v0_2, u16, 0xA) = (u16) (AF(temp_v0_2, u16, 0xA) - 0x20);
            AF(temp_v0_2, u16, 0xE) = (u16) (AF(temp_v0_2, u16, 0xE) - 0x28);
            if (temp_v1 >= 0) {
                var_v0 = temp_v1 << 7;
            } else {
                var_v0 = -(temp_v1 << 7);
            }
            AF(temp_v0_2, s16, 0x34) = (s16) (var_v0 + 0x1000);
            AF(temp_v0_2, s32, 0x14) = 0xFFFE0000;
            AF(temp_v0_2, s32, 0x18) = 0xFFFD0000;
        }
        var_s0 += 0x18;
        temp_v0 = var_s0 < 0x49;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc02_011_80186070(StageActor *o) {
    ModelObj *p;
    StageActor *r;
    u8 *q;

    p = o->model;
    func_8001CA1C(p, &D_sc02_011_801959C8);
    o->pos[1].h.i -= 0xA0;
    o->pos[2].h.i -= 0x10;
    p->scale.vx = 0x2C00;
    p->scale.vy = 0x1C00;
    p->unk04 |= 0x1000000;
    AF(o->ext0, s16, 0) = 0;
    o->ext0 = SpawnShadow(o);
    o->vel[1] = 0xFFF80000;
    o->hitState = 0;
    o->timer = 8;
    SetState(o, 3);
    r = o->parent;
    r->model->unk04 |= 0x80000000;
    func_sc02_011_8018FE20(r);
    r->hitState = 0;
    SetState(r, 4);
    q = (u8 *)o->ext1;
    if (q != 0) {
        AF(q, s16, 0x2C) = 0;
        func_sc02_011_80186734(q);
    }
    func_sc02_011_8018ADE4();
    func_sc02_011_8018AE08((u8 *)o + 4);
    PlaySoundId(0x5ED, 0);
}

s32 func_sc02_011_80186184(StageActor *arg0) {
    s32 var_v0;

    arg0->model->scale.vx = 0x2C00;
    arg0->model->scale.vy = 0x3800;
    SetScript(arg0, (s32) &D_sc02_011_80195A94);
    arg0->unkFC = 0;
    arg0->timer = 0x10;
    var_v0 = SetState(arg0, 4);
    if ((s32)arg0->ext1 != 0) {
        var_v0 = func_sc02_011_80186790(arg0->ext1);
    }
    return var_v0;
}

s32 func_sc02_011_801861FC(s32 arg0) {
    s32 var_v0;
    s32 p;

    AF(arg0, s32, 0x1C) = 4;
    StopMotion(arg0);
    var_v0 = SetState(arg0, 5);
    p = AF(arg0, s32, 0xD0);
    if (p != 0) {
        var_v0 = func_sc02_011_801867BC(p);
    }
    return var_v0;
}

s32 func_sc02_011_80186250(StageActor *arg0) {
    AF(arg0, s32 *, 0x58) = &D_sc02_011_801959A8;
    func_sc02_011_80186548(arg0);
    return SetState(arg0, 6);
}

s32 func_sc02_011_80186290(u8 *arg0) {
    return AF(arg0, u16, 2) == 6;
}

void func_sc02_011_801862A4(s32 arg0) {
    s32 temp_a0;

    FreeShadow(AF(arg0, s32, 0xCC));
    StopMotion(arg0);
    AF(arg0, s32, 0x14) = 0x80000;
    AF(arg0, u16, 6) = (u16) g_PlayerX;
    AF(arg0, u16, 0xE) = (u16) D_80126B66;
    AF(arg0, s16, 0xDC) = (s16) ((s32) (AF(AF(arg0, void *, 0x20), u16, 0x18) << 0x10) >> 0x13);
    AF(arg0, s16, 0xDE) = (s16) ((s32) (AF(AF(arg0, void *, 0x20), u16, 0x1A) << 0x10) >> 0x13);
    SetState(arg0, 7);
    temp_a0 = AF(arg0, s32, 0xD0);
    if (temp_a0 != 0) {
        FreeProp(temp_a0);
    }
    PlaySoundId(0x635, 0);
}

void func_sc02_011_80186354(s32 arg0) {
    func_sc02_011_80188168(arg0);
}

void func_sc02_011_80186374(void) {
    ResumeClockTint();
}

void func_sc02_011_80186394(StageActor *arg0) {
    SetState(arg0, 8);
    arg0->timer = 0x40;
    PlaySoundId(0x5EC, 0);
}

s32 func_sc02_011_801863D4(StageActor *arg0) {
    return SetState(arg0, 9);
}

void func_sc02_011_801863F4(StageActor *arg0) {
    D_sc02_011_80195CC4[arg0->state]();
}

void func_sc02_011_80186430(StageActor *o) {
    u32 i;
    StageActor *p;
    u8 *c;
    u16 t;

    for (i = 0; i < 8; i++) {
        if (o->hitCode == D_sc02_011_80195CF0[i]) {
            p = o->parent;
            t = (u16)p->pos[0].h.i;
            D_sc02_011_801EB520 = 0;
            p->pos[0].h.i = t + 1;
            o->timer = 0x50;
            o->work102 = 0;
            o->pos[0].h.i++;
            SetState(o, 2);
            c = (u8 *)SpawnPropFrom(o, 0x32);
            o->ext1 = c;
            if (c != 0) {
                AF(c, s16, 6) = o->pos[0].h.i;
                AF(c, s16, 0xA) = o->pos[1].h.i;
                AF(c, s16, 0xE) = o->pos[2].h.i;
                AF(c, s16, 0x2C) = -0xA0;
                AF(c, u8 *, 0x34) = o;
            }
            StartEvent(o, &D_sc02_011_80195B5C);
            o->react = 0;
            o->hitState = 0;
            o->hitCode = 0;
            PlaySoundId(0x5EB, 0);
            RequestBgmPack(0x30);
            break;
        }
    }
    o->hitCode = 0;
    PlaySoundId(0x426, 0);
}

s32 func_sc02_011_80186548(s32 arg0) {
    AF(arg0, s32, 0x48) = 0x1400;
    AF(arg0, s32, 0x14) = 0;
    return 0x1400;
}

void func_sc02_011_80186558(Mover *arg0) {
    s32 v;

    MoveObject(arg0);
    v = arg0->vel[1];
    if (v > 0x14000) {
        arg0->accel[1] = -0x1400;
    } else if (v < -0x14000) {
        arg0->accel[1] = 0x1400;
    }
}

void func_sc02_011_801865B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0xCC);
    AF(temp_v1, u16, 8) = (u16) AF(arg0, u16, 6);
    AF(temp_v1, s16, 0xA) = (s16) (AF(arg0, u16, 0xA) - 0xE0);
    AF(temp_v1, s16, 0xC) = (s16) (AF(arg0, u16, 0xE) - 0x10);
}

s32 func_sc02_011_801865E4(StageActor *arg0, u8 *arg1) {
    SV8 a;
    SV8 b;

    a.x = AF(arg1, u16, 4);
    b.x = AF(arg1, u16, 6);
    a.y = b.y = AF(arg1, u16, 0xA);
    a.z = b.z = AF(arg1, u16, 0xC);
    if (func_sc02_011_80186680(arg0, (s32) &a, (s32) &b) == 0) {
        a.z = b.z = AF(arg1, u16, 0xE);
        return func_sc02_011_80186680(arg0, (s32) &a, (s32) &b) != 0;
    }
    return 1;
}

s32 func_sc02_011_80186680(StageActor *arg0, s32 arg1, s32 arg2) {
    SV8 a;
    SV8 b;

    FaceHelper(arg0, arg1, &a);
    FaceHelper(arg0, arg2, &b);
    return PathHitsModel(g_PlayerModel, g_PlayerHitData, &a, &b);
}

void func_sc02_011_801866E8(s32 arg0) {
    func_sc02_011_8017E358(arg0);
}

void func_sc02_011_80186708(s32 arg0) {
    func_sc02_011_8017E43C(arg0);
}

void func_sc02_011_80186728(s32 arg0) {
    AF(arg0, s16, 2) = 2;
}

void func_sc02_011_80186734(s32 arg0) {
    AF(arg0, s16, 2) = 3;
}

void func_sc02_011_80186740() {
    u8 *p = (u8 *)&D_sc02_011_801EB524;
    if (*p < 0xF8) {
        *p += 4;
        D_sc02_011_801EB525 += 4;
        D_sc02_011_801EB526 += 8;
    }
}

s32 func_sc02_011_80186790(u8 *o) {
    AF(o, s16, 2) = 4;
    return PlaySoundId(0x634, 0);
}

s32 func_sc02_011_801867BC(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0;
}

void func_sc02_011_801867CC(u8 *arg0) {
    func_sc02_011_80186818();
    D_sc02_011_80195D18[AF(arg0, u16, 2)](arg0);
}

void func_sc02_011_80186818(s32 arg0) {
    CopyPropPos(arg0, AF(arg0, s32, 0x34));
    AF(arg0, u16, 0xA) += AF(arg0, u16, 0x2C);
    PushAlongView16(arg0 + 4, arg0 + 4, -0x180);
}

void func_sc02_011_80186868(StageActor *o) {
    s16 dx;
    s16 dy;
    s16 dz;
    u8 *r;
    s32 d;

    o->timer++;
    if ((GetVar(0xCE) & 0xFF) != 1) return;
    if (o->timer & 0x20) {
        func_sc02_011_80186AA0(o);
        return;
    }
    dx = g_PlayerX - (u16)o->pos[0].h.i;
    if (dx < 0) dx = -dx;
    dy = D_80126B62 - (u16)o->pos[1].h.i;
    if (dy < 0) dy = -dy;
    dz = D_80126B66 - (u16)o->pos[2].h.i;
    if (dz < 0) dz = -dz;
    if (dx > 0x200 || dy > 0x200 || dz > 0x200) {
        func_sc02_011_80186AA0(o);
        return;
    }
    if (o->timer & 1) {
        r = (u8 *)SpawnPropFrom(o, 0x22);
        if (r != 0) {
            CopyPropVel(r, o);
            AF(AF(r, u8 *, 0x20), s16, 0x18) = 0x5000;
            AF(AF(r, u8 *, 0x20), s16, 0x1A) = 0x5000;
        }
    }
    if (!(o->timer & 3)) {
        d = dx * dx + dz * dz;
        if (d <= 0x30000) {
            PlaySoundId(0x646, (u16)(((0x30000 - d) * 127 / 0x30000) | 0x1000));
            o->unkFC = 1;
        } else {
            func_sc02_011_80186AA0(o);
        }
    }
    if ((o->timer & 0x1F) >= 8) {
        if (func_sc02_011_80186B1C(o, &D_sc02_011_80195D30) != 0) {
            u16 *q = (u16 *)&g_PlayerHitKind;
            g_PlayerHitDamage = 0xC;
            *q |= 0x4000;
        }
    }
}

void func_sc02_011_80186AA0(s32 arg0) {
    if (AF(arg0, s16, 0xFC) != 0) {
        PlaySoundId(4, 0x646);
        AF(arg0, s16, 0xFC) = 0;
    }
}

void func_sc02_011_80186AE0(StageActor *arg0) {
    D_sc02_011_80195D40[arg0->state]();
}

s32 func_sc02_011_80186B1C(StageActor *o, u8 *p) {
    SV8 a;
    SV8 b;
    a.z = AF(p, u16, 0xC);
    b.z = AF(p, u16, 0xE);
    b.y = 0;
    a.y = 0;
    a.x = b.x = AF(p, u16, 4);
    if (ActorSegmentHitsPlayer(o, &a, &b) != 0) {
        return 1;
    }
    a.x = b.x = AF(p, u16, 6);
    if (ActorSegmentHitsPlayer(o, &a, &b) != 0) {
        return 1;
    }
    return 0;
}

void func_sc02_011_80186BB0(u8 *o) {
    s32 v[3];
    s32 t;

    t = AllocActorModel();
    AF(o, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(o);
        return;
    }
    InitNullModel(t);
    AF(AF(o, u8 *, 0x20), s16, 0x12) = 0x600;
    UpdateModelZYX(o);
    v[1] = 0;
    v[0] = 0;
    v[2] = 0x240000;
    SetLocalVelocity(o, v);
    NextState(o);
}

void func_sc02_011_80186C30(StageActor *arg0) {
    s32 temp_v0;

    if ((GetFlag(0x16) & 0xFF) || (temp_v0 = AllocActorModel(), arg0->model = temp_v0, (temp_v0 == 0)) || (InitModel(temp_v0, (s32) &D_sc02_011_801E4D54), (SpawnActor(0x110, (s32) arg0) == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    func_sc02_011_80185A8C((s32) arg0);
}

void func_sc02_011_80186CB4(u8 *o) {
    s32 r;

    r = IsEventDone(o);
    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer(o)) {
            AF(o, u16, 0x34)++;
        }
        break;
    case 1:
        if (r) {
            EndEvent(o);
            func_sc02_011_80185C20((s32)o);
        }
        break;
    }
}

void func_sc02_011_80186D3C(void) {
}

void func_sc02_011_80186D44(void) {
}

void func_sc02_011_80186D4C(StageActor *arg0) {
    StepSpriteAnim(arg0->ext0, (s32) &D_sc02_011_801EB518);
}

void func_sc02_011_80186D78(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0x34) == 0) {
        MoveObject((s32) arg0);
        if (TickTimer((s32) arg0) != 0) {
            AF(arg0, s16, 0x100) = 0x80;
            AF(arg0, s32, 0x1C) = 0x30;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            func_sc02_011_80186548((s32) arg0);
        }
    } else if (TickTimer((s32) arg0, arg1) != 0) {
        func_sc02_011_80186184((s32) arg0);
    } else {
        func_sc02_011_80186558((s32) arg0);
    }
    IsEventDone((s32) arg0);
    func_sc02_011_8018B1B0();
}

void func_sc02_011_80186E24(s32 arg0, s32 arg1) {
    if ((TickTimer(arg0, arg1) == 0) && !(AF(arg0, s32, 0x1C) & 3)) {
        SpawnActorArg(0x110, 1, arg0);
    }
    if (AF(arg0, s16, 0x98) == 0) {
        func_sc02_011_801861FC(arg0);
    }
    IsEventDone(arg0);
}

void func_sc02_011_80186E94(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0x34) == 0) {
        if (TickTimer((s32) arg0, arg1) != 0) {
            AF(arg0, s32, 0x14) = 0x10000;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
        }
    } else if (AF(arg0, s16, 0xA) < (AF(arg0, s16, 0xFE) - 0xA0)) {
        MoveObject((s32) arg0);
    } else {
        func_sc02_011_80186250((s32) arg0);
    }
    IsEventDone((s32) arg0);
}

void func_sc02_011_80186F24(StageActor *arg0, s32 arg1) {
    IsEventDone(arg0, arg1);
    func_sc02_011_80186558(arg0);
    if (func_sc02_011_801865E4(arg0, (s32) &D_sc02_011_801959A8) != 0) {
        func_sc02_011_801862A4(arg0);
    }
}

void func_sc02_011_80186F74(u8 *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    if (AF(AF(arg0, void *, 0x20), s16, 0x18) > 0) {
        MoveObject((s32) arg0);
        temp_a0 = AF(arg0, void *, 0x20);
        AF(temp_a0, s16, 0x18) = (s16) ((u16) AF(temp_a0, s16, 0x18) - AF(arg0, u16, 0xDC));
        temp_a0_2 = AF(arg0, void *, 0x20);
        AF(temp_a0_2, u16, 0x1A) = (u16) (AF(temp_a0_2, u16, 0x1A) - AF(arg0, u16, 0xDE));
        temp_a0_3 = AF(arg0, void *, 0x20);
        if (AF(temp_a0_3, s16, 0x18) == 0) {
            AF(temp_a0_3, s32, 4) = (s32) (AF(temp_a0_3, s32, 4) | 0x80000000);
        }
    }
    IsEventDone((s32) arg0);
}

void func_sc02_011_80187018(s32 arg0, s32 arg1) {
    IsEventDone(arg0, arg1);
    if (!(AF(arg0, s32, 0x1C) & 0xF)) {
        StartCameraShake((s32) &D_sc02_011_80195CAC);
    }
    if (TickTimer(arg0) != 0) {
        func_sc02_011_801863D4(arg0);
    }
}

void func_sc02_011_8018707C(StageActor *arg0, s32 arg1) {
    if ((IsEventDone(arg0, arg1) != 0) && (D_sc02_011_801EBA08 == 0)) {
        EndEvent(arg0);
        FreeActor(arg0);
    }
}

void func_sc02_011_801870D0(s32 arg0) {
    MoveObject(arg0);
    if (AF(arg0, s16, 0x98) == 0) {
        FreeActor(arg0);
    }
}

void func_sc02_011_80187110(u8 *arg0) {
    s32 pad[8];

    func_8001CD9C(AF(arg0, s32, 0x20), &D_sc02_011_801EB524);
    SetShapeCircle(&D_sc02_011_801EB524, 0x80);
    *(CV4 *)&D_sc02_011_801EB524 = D_sc02_011_801E9E30;
    D_sc02_011_801EB528 = D_sc02_011_801E9E30;
    AF(AF(arg0, u8 *, 0x20), s16, 0x18) = 0x800;
    AF(AF(arg0, u8 *, 0x20), s16, 0x1A) = 0x1000;
    AF(AF(arg0, u8 *, 0x20), s32, 4) |= 0x50000000;
    AF(arg0, s16, 2) = 1;
}

void func_sc02_011_801871CC(void) {
    u8 *p = (u8 *) &D_sc02_011_801EB524;

    if (*p < 0xC0) {
        *p += 4;
    }
    if ((u8) D_sc02_011_801EB525 < 0xC0) {
        D_sc02_011_801EB525 += 4;
    }
    if ((u8) D_sc02_011_801EB526 < 0x20) {
        D_sc02_011_801EB526 += 4;
    }
}

void func_sc02_011_80187234(s32 arg0) {
    func_sc02_011_80186740(arg0);
}

void func_sc02_011_80187254(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_a0;

    temp_a0 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a0, s16, 0x18);
    if (temp_v0 < 0x6000) {
        AF(temp_a0, s16, 0x18) = (s16) (temp_v0 + 0x800);
    }
    temp_v0_2 = AF(temp_a0, s16, 0x1A);
    if (temp_v0_2 < 0x6000) {
        AF(temp_a0, s16, 0x1A) = (s16) (temp_v0_2 + 0x800);
    }
    func_sc02_011_80186740();
}

void func_sc02_011_801872B4(u8 *o) {
    u8 *p = AF(o, u8 *, 0x20);
    s8 *q;

    if (AF(p, s16, 0x18) > 0x800) AF(p, s16, 0x18) -= 0x200;
    if (AF(p, s16, 0x1A) > 0x800) AF(p, s16, 0x1A) -= 0x200;
    q = &D_sc02_011_801EB524;
    if ((u8)*q > 0xC0) {
        *q -= 4;
        D_sc02_011_801EB525 -= 4;
        D_sc02_011_801EB526 -= 8;
    }
}

void func_sc02_011_8018734C(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_v0;
    s8 temp_v0_4;
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v0 = AF(temp_a1, s16, 0x18);
    if (temp_v0 >= 0x801) {
        AF(temp_a1, s16, 0x18) = (s16) (temp_v0 - 0x200);
    }
    temp_v0_2 = AF(temp_a1, s16, 0x1A);
    if (temp_v0_2 >= 0x801) {
        AF(temp_a1, s16, 0x1A) = (s16) (temp_v0_2 - 0x200);
    }
    temp_v1 = AF(arg0, s32, 0x1C) + 1;
    AF(arg0, s32, 0x1C) = temp_v1;
    if (temp_v1 & 0x10) {
        var_v0 = ((s32) (temp_v1 & 0xF) >> 1) + 9;
    } else {
        var_v0 = 0x10 - ((s32) (temp_v1 & 0xF) >> 1);
    }
    temp_v0_3 = var_v0 & 0xFF;
    temp_v0_4 = temp_v0_3 * 0xC;
    D_sc02_011_801EB524 = temp_v0_4;
    D_sc02_011_801EB525 = temp_v0_4;
    D_sc02_011_801EB526 = temp_v0_3 * 2;
}

void func_sc02_011_801873FC(StageActor *arg0) {
    D_sc02_011_80195D50[arg0->state]();
}

void func_sc02_011_80187438(StageActor *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s0;

    var_s0 = GetVarCF(arg0, arg1, arg2, arg3);
    if (var_s0 & 0xFF) {
        do {
            SpawnActorArg(0x112, (var_s0 & 0xFF) - 1, arg0);
            var_s0 -= 1;
        } while (var_s0 & 0xFF);
    }
    NextState(arg0);
}

void func_sc02_011_801874A0(void) {
}

void func_sc02_011_801874A8(StageActor *arg0) {
    D_sc02_011_80195D58[arg0->state]();
}

void func_sc02_011_801874E4(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 != 0) {
        InitModel(temp_v0, (s32) &D_sc02_011_801DF580);
        temp_v0->pose = &D_sc02_011_81195D48;
        func_sc02_011_80187654(arg0);
        NextState(arg0);
    }
}

void func_sc02_011_8018754C(u8 *o) {
    B8 v = D_sc02_011_801E9E34;
    s32 n;

    n = GetVarCF() & 0xFF;
    if (AF(o, s16, 0x70) >= n) {
        StopWithGravity(o);
        PlaySoundId(0x580, 0);
        SetMoverTimer(o, 0x10);
        NextState(o);
    } else {
        func_sc02_011_80187654(o);
        if (!(D_800B99DA & 3)) {
            func_sc02_011_80187724((s32)o, (SV8 *)&v);
        }
    }
}

void func_sc02_011_80187614(s32 arg0) {
    MoveObject(arg0);
    if (TickTimer(arg0) != 0) {
        DespawnActor(arg0);
    }
}

void func_sc02_011_80187654(u8 *arg0) {
    SV8 c;
    u8 *p;
    u8 *s;

    p = AF(arg0, u8 *, 0x20);
    s = g_PlayerModel;
    AF(p, V16, 0x34) = AF(s, V16, 0x34);
    AF(p, V16, 0x44) = AF(s, V16, 0x44);
    FaceHelper(arg0, D_sc02_011_80195DB0[GetVarCF() & 0xFF] + AF(arg0, s16, 0x70) * 8, &c);
    AF(arg0, s16, 6) = c.x;
    AF(arg0, s16, 0xA) = c.y;
    AF(arg0, s16, 0xE) = c.z;
    SyncModelPos(arg0);
}

void func_sc02_011_80187724(s32 arg0, SV8 *arg1) {
    SV8 v;

    v.x = AF(arg0, s16, 6);
    v.y = AF(arg0, s16, 0xA);
    v.z = AF(arg0, s16, 0xE);
    v.x += arg1->x;
    v.y += arg1->y;
    v.z += arg1->z;
}

void func_sc02_011_80187784(StageActor *arg0) {
    D_sc02_011_80195DC4[arg0->state]();
}

void func_sc02_011_801877C0(void) {
}

void func_sc02_011_801877C8(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        NextState(arg0);
    }
}

void func_sc02_011_80187800(StageActor *arg0) {
    if (func_800D0CE0() != 0) {
        DespawnActor(arg0);
    }
}

void func_sc02_011_80187838(void) {
    s32 temp_v0;

    temp_v0 = FindActorByKind(0x11F);
    if (temp_v0 != 0) {
        func_800D0C48(1);
        SetState(temp_v0, 1);
        SetMoverTimer(temp_v0, 0x30);
    }
}

void func_sc02_011_8018788C(u8 *arg0) {
    D_sc02_011_80195F14[AF(arg0, u16, 2)]();
}

void func_sc02_011_801878C8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_s1;

    temp_s1 = (AF(arg0, s32, 0x2C) * 0xC) + &D_sc02_011_80195EFC;
    if (AF(temp_s1, u16, 6) != 0) {
        AF(arg0, s32, 0x1C) = (s32) (rand((s32) arg0, arg1, arg2, arg3) % (s32) AF(temp_s1, u16, 6));
    } else {
        AF(arg0, s32, 0x1C) = 0;
    }
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_011_8018797C(u8 *arg0) {
    u8 *obj;
    u8 *ent;
    V4F20 range;
    V4F20 off;
    s32 r;

    obj = AF(arg0, u8 *, 0x20);
    if (--AF(arg0, s32, 0x1C) == -1) {
        InitSpriteKind3(obj, &D_sc02_011_80195DD0, 0, 0);
        AF(obj, u8, 0x27) = 0x9C;
        AF(obj, s16, 0x1A) = 0x4000;
        AF(obj, s16, 0x18) = 0x4000;
        AF(obj, s32, 4) |= 0x50000040;
        ent = (AF(arg0, s32, 0x2C) * 0xC) + &D_sc02_011_80195EFC;
        StartSpriteAnim(obj, arg0 + 0x24, AF(ent, s32, 0));
        range = *(V4F20 *)(AF(ent, u8 *, 8) + 0x10);
        r = rand();
        off.vx = r % (range.vx + 1);
        if (r & 1) off.vx = -off.vx;
        off.vy = r % (range.vy + 1);
        if (r & 1) off.vy = -off.vy;
        off.vz = r % (range.vz + 1);
        if (r & 1) off.vz = -off.vz;
        AF(arg0, s32, 0x10) = AF(AF(ent, u8 *, 8), s32, 0) + off.vx;
        AF(arg0, s32, 0x14) = AF(AF(ent, u8 *, 8), s32, 4) + off.vy;
        AF(arg0, s32, 0x18) = AF(AF(ent, u8 *, 8), s32, 8) + off.vz;
        range = *(V4F20 *)(AF(ent, u8 *, 8) + 0x30);
        r = rand();
        off.vx = r % (range.vx + 1);
        if (r & 1) off.vx = -off.vx;
        off.vy = r % (range.vy + 1);
        if (r & 1) off.vy = -off.vy;
        off.vz = r % (range.vz + 1);
        if (r & 1) off.vz = -off.vz;
        AF(arg0, s32, 0x2C) = AF(AF(ent, u8 *, 8), s32, 0x20) + off.vx;
        AF(arg0, s32, 0x30) = AF(AF(ent, u8 *, 8), s32, 0x24) + off.vy;
        AF(arg0, s32, 0x34) = AF(AF(ent, u8 *, 8), s32, 0x28) + off.vz;
        AF(arg0, s32, 0x1C) = AF(ent, u16, 4);
        AF(arg0, u16, 2)++;
    }
}

void func_sc02_011_80187CE8(u8 *arg0) {
    u8 *p;

    p = AF(arg0, u8 *, 0x20);
    AF(arg0, s32, 0x10) += AF(arg0, s32, 0x2C);
    AF(arg0, s32, 0x14) += AF(arg0, s32, 0x30);
    AF(arg0, s32, 0x18) += AF(arg0, s32, 0x34);
    MoveProp(arg0);
    AF(p, s16, 0x18) = AF(p, s16, 0x1A) -= 0x100;
    if (StepSpriteAnim(p, arg0 + 0x24) != 0 || (AF(arg0, s32, 0x1C) != 0 && --AF(arg0, s32, 0x1C) == 0)) {
        FreeProp(arg0);
    }
}

void func_sc02_011_80187D90(StageActor *arg0) {
    if (D_801270C0 != 3) {
        D_sc02_011_80195FD8[arg0->state]();
    }
}

void func_sc02_011_80187DDC(StageActor *arg0, s32 arg1) {
    arg0->animFlags = (u16) (arg0->animFlags | 0x1000);
    NextState((s32) arg0, arg1);
}

void func_sc02_011_80187E08(StageActor *o) {
    SV8 sv;
    s32 flag;
    u8 *p;
    s32 h;
    s32 h2;
    s32 *m;

    p = D_sc02_011_80195FC0[o->unkFC];
    m = D_800AF648;
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    PosToSVec((u8 *)o + 4, &sv);
    gte_ldv0(&sv);
    gte_rtps();
    gte_stsxy(&sv);
    gte_stflg(&flag);
    h = (D_800AF7BC >> 1) + 0x20;
    if (-h < sv.x && sv.x < h) {
        h2 = (D_800AF7BE >> 1) + 0x20;
        if (-h2 < sv.y && sv.y < h2 && flag >= 0) {
            if (o->timer == 0) {
                while (AF(p, s16, 6) != 0xFF) {
                    func_sc02_011_80187FA0(o, p);
                    p += 8;
                }
                o->timer = (s32)o->message;
            }
            o->timer--;
        }
    }
    func_sc02_011_80188034(o);
}

void func_sc02_011_80187FA0(u8 *o, s16 *p) {
    SV8 v;
    s32 r;

    v.x = AF(o, s16, 6);
    v.y = AF(o, s16, 0xA);
    v.z = AF(o, s16, 0xE);
    v.x += p[0];
    v.y += p[1];
    v.z += p[2];
    r = SpawnPropAt(0x3E, &v);
    if (r) {
        AF(r, s32, 0x2C) = p[3];
    }
}

void func_sc02_011_80188034(u8 *o) {
    SV8 a;
    SV8 *e;
    Player *c;
    s16 d;
    s16 v;
    s32 t;

    e = &D_sc02_011_80195FC8[AF(o, s16, 0xFC)];
    c = &g_Player;
    if (e->pad != 0 && D_80126B62 >= -0x8FF) {
        PosToSVec((u8 *)c + 4, &a);
        a.y = e->y;
        d = SVecDist(&a, e);
        if (d < 0x800) {
            t = (0x800 - d) * 0x7F / 0x800;
            v = t;
            if (t < 0) v = 0;
            if (v > 0x7F) v = 0x7F;
            PlaySoundId((u16) e->pad, (u16) (v | 0x1000));
        }
    }
}

s32 func_sc02_011_80188114(void) {
    s32 *p = &g_SoundLoadTable;
    *p = 0x20;
    D_800C7C64 = g_SoundLoadBuf;
    return RequestLoad(0, 0, (s32) &D_800AEF98, 0, (s32) p);
}

s32 func_sc02_011_80188168(void) {
    s32 *p = &g_SoundLoadTable;
    *p = 0x18;
    D_800C7C64 = g_SoundLoadBuf;
    return RequestLoad(0, 0, (s32) &D_800AEFA8, 0, (s32) p);
}

s32 func_sc02_011_801881BC(void) {
    s32 *p = &g_SoundLoadTable;
    *p = 0x18;
    D_800C7C64 = g_SoundLoadBuf;
    return RequestLoad(0, 0, (s32) &D_800AEFA0, D_sc02_011_801E8C34, (s32) p);
}

void func_sc02_011_80188214(void) {
    D_8012704C = 1;
}

s32 func_sc02_011_80188228(s32 arg0) {
    D_sc02_011_801EBA74 = 0x280;
    return 0x280;
}

s32 func_sc02_011_8018823C(void) {
    D_sc02_011_801EBA74 = 0x110;
    return 0x110;
}

s32 func_sc02_011_80188250(Mover *p) {
    SV4 a;
    SV4 b;
    UXY w;
    UXY x;
    UXY *wp;
    s32 t;
    u16 c;
    u8 *q;
    u8 *o;
    s32 i;

    for (o = (u8 *) &g_Actors, i = 0; i < 0x60; i++, o += 0x10C) {
        if (p->kind == AF(o, u16, 0) && p != o) {
            if (DistSq((u8 *)p + 4, o + 4) < 0x1000) {
                wp = &w;
                AngleToVec2(wp, HeadingTo((u8 *)p + 4, o + 4), 0x41);
                b.x = AF(o, u16, 6);
                b.y = AF(o, u16, 0xA);
                b.z = AF(o, u16, 0xE);
                x = w;
                b.x += x.s.x;
                b.z += x.s.y;
                a.x = (u16)p->prev[0].h.i;
                a.y = (u16)p->prev[1].h.i;
                a.z = (u16)p->prev[2].h.i;
                if (!(CollidePath(&a, &b, 0) & 0x2000)) {
                    RestorePrevPos(p);
                } else {
                    p->pos[0].h.i = b.x;
                    p->pos[1].h.i = b.y;
                    p->pos[2].h.i = b.z;
                }
                return 1;
            }
        }
    }
    return 0;
}

void func_sc02_011_801883C8(s32 arg0, s32 arg1, s32 arg2) {
    PlaySoundId(0x6AA, 0, arg2);
}

void func_sc02_011_801883EC(StageActor *arg0) {
    if (arg0->work102 == 0) {
        GainStat0FromActor();
    }
    DespawnActor((s32) arg0);
}

void func_sc02_011_80188430(u8 *o) {
    SV8 a;
    SV8 b;
    s32 hit;

    a.x = AF(o, s16, 6);
    a.y = AF(o, s16, 0xA);
    a.z = AF(o, s16, 0xE);
    b = a;
    b.y += 8;
    if (TraceMap(1, &a, &b) & 0x6000) {
        hit = 1;
    } else {
        StopWithGravity(o);
        hit = 0;
    }
    if (hit == 0) {
        AF(o, s16, 2) = 0x11;
        AF(o, s16, 0x98) = 0;
    } else if (AF(o, s32, 0xC4) & 4) {
        func_sc02_011_80188508((s32) o);
    } else {
        func_sc02_011_80188554(o);
    }
}

s32 func_sc02_011_80188508(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s16, 0x34) = 0;
    AF(arg0, u16, 0x5C) = 0xAA10;
    SetScript(arg0, (s32) &D_sc02_011_801D40D4);
    return StopWithGravity(arg0);
}

void func_sc02_011_80188554(StageActor *o) {
    V3 v;
    s32 t;
    u8 *q;

    q = (u8 *)o + 0x88;
    o->state = 1;
    o->stateCount = 0;
    o->hitState = 0xAA10;
    o->timer = (rand() & 0x1F) + 0x28;
    v.x = o->pos[0].h.i - o->origin[0];
    v.y = 0;
    v.z = o->pos[2].h.i - o->origin[2];
    Square0(&v, &v);
    if (v.x + v.z >= 0x90000) {
        o->unkFC = HeadingToPoint((u8 *)o + 4, q);
    } else {
        t = (rand() & 0x3FF) - 0x200;
        if (t < 0) t -= 0x300; else t += 0x300;
        o->unkFC = ((u16)o->model->rot.vy + t) & 0xFFF;
    }
    SetScript(o, &D_sc02_011_801D3CBC);
}

void func_sc02_011_80188654(u8 *o) {
    V3 v;
    s32 f;
    s32 r;

    if (AF(o, s32, 0x1C) >= 8) {
        AF(AF(o, u8 *, 0x20), s16, 0x12) += TurnStep(AF(AF(o, u8 *, 0x20), s16, 0x12), AF(o, s16, 0xFC), 8);
    }
    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    if (v.x + v.z < 0x90000 && TargetInSight(o, 0x300, 0x10000)) {
        func_sc02_011_8018898C(o);
        return;
    }
    SetForwardVelocity(o, D_sc02_011_80196098);
    f = MoveOnGround(o);
    if (f & 0x1000) {
        SetReactionStep(o, 0x12);
        r = 0;
    } else {
        if (f != 0x2000) {
            RestorePrevPos(o);
        }
        r = 1;
    }
    if (r) {
        func_sc02_011_80188250(o);
        if (TickTimer(o)) {
            func_sc02_011_801887C8(o);
            return;
        }
        if (IsActorFar(o)) {
            AF(o, s16, 0x102) = 1;
            DespawnActor(o);
        }
    }
}

s32 func_sc02_011_801887C8(StageActor *arg0) {
    arg0->state = 2;
    arg0->stateCount = 0;
    return SetScript(arg0, (s32) &D_sc02_011_801D3B74);
}

void func_sc02_011_801887F8(u8 *o) {
    V3 v;
    s32 t;
    u8 *q;

    if (AF(o, u16, 0x34) != 0) return;
    if (!(AF(o, u16, 0x72) & 0x4000)) return;
    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    if (v.x + v.z < 0x90000 && DistSqToTarget(o) <= 0x10000) {
        func_sc02_011_8018898C(o);
        return;
    }
    q = o + 0x88;
    AF(o, s16, 2) = 1;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    if (v.x + v.z >= 0x90000) {
        AF(o, s16, 0xFC) = HeadingToPoint(o + 4, q);
    } else {
        t = (rand() & 0x3FF) - 0x200;
        if (t < 0) t -= 0x300; else t += 0x300;
        AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + t) & 0xFFF;
    }
    SetScript(o, &D_sc02_011_801D3CBC);
}

void func_sc02_011_8018898C(StageActor *arg0) {
    arg0->state = 3;
    if (arg0->unk86 & 2) {
        arg0->stateCount = 1;
        arg0->timer = 0x28;
        SetScript(arg0, (s32) &D_sc02_011_801D3D64);
        arg0->workFE = 0;
        return;
    }
    arg0->stateCount = 0;
    SetScript(arg0, (s32) &D_sc02_011_801D3DEC);
    arg0->timer = 0x19;
    arg0->unk86 = (u16) (arg0->unk86 | 2);
}

void func_sc02_011_80188A10(u8 *arg0) {
    s32 v[3];
    s32 r;
    s32 ok;
    s32 a;
    u8 *p;
    s32 p2;
    s32 d;
    u8 *t;

    switch (AF(arg0, u16, 0x34)) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget((s32) arg0, 4);
        if (AF(arg0, s32, 0x1C) == 0xF) {
            SpawnHeadMarker((s32) arg0, -0x78);
            PlaySoundId(0x6A9, 0);
        }
        if (TickTimer((s32) arg0) != 0) {
            AF(arg0, s16, 2) = 3;
            if (AF(arg0, u16, 0x86) & 2) {
                AF(arg0, s16, 0x34) = 1;
                AF(arg0, s32, 0x1C) = 0x28;
                SetScript((s32) arg0, (s32) &D_sc02_011_801D3D64);
                AF(arg0, s16, 0xFE) = 0;
                return;
            }
            AF(arg0, s16, 0x34) = 0;
            SetScript((s32) arg0, (s32) &D_sc02_011_801D3DEC);
            AF(arg0, s32, 0x1C) = 0x19;
            AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
        }
        break;
    case 1:
        r = TurnStepToTarget((s32) arg0, 6);
        p = AF(arg0, u8 *, 0x20);
        p2 = AF(p, u16, 0x12) + r;
        d = D_sc02_011_8019609C;
        AF(p, u16, 0x12) = p2;
        SetForwardVelocity((s32) arg0, d, p2);
        r = MoveOnGround((s32) arg0);
        if (r & 0x1000) {
            SetReactionStep((s32) arg0, 0x12);
            ok = 0;
        } else {
            if (r != 0x2000) {
                RestorePrevPos((s32) arg0);
            }
            ok = 1;
        }
        if (ok) {
            func_sc02_011_80188250((s32) arg0);
            if (--AF(arg0, s16, 0xFE) <= 0) {
                SpawnKind1C((s32) arg0, 0);
                AF(arg0, s16, 0xFE) = 8;
            }
            v[0] = AF(arg0, s16, 6) - AF(arg0, s16, 0x88);
            v[1] = 0;
            v[2] = AF(arg0, s16, 0xE) - AF(arg0, s16, 0x8C);
            Square0(v, v);
            t = arg0 + 0x88;
            if (v[0] + v[2] > 0x8FFFF || DistSqToTarget((s32) arg0) > 0x10000) {
                AF(arg0, s16, 2) = 1;
                AF(arg0, s16, 0x34) = 0;
                AF(arg0, u16, 0x5C) = 0xAA10;
                AF(arg0, s32, 0x1C) = (rand() & 0x1F) + 0x28;
                v[0] = AF(arg0, s16, 6) - AF(arg0, s16, 0x88);
                v[1] = 0;
                v[2] = AF(arg0, s16, 0xE) - AF(arg0, s16, 0x8C);
                Square0(v, v);
                if (v[0] + v[2] > 0x8FFFF) {
                    AF(arg0, s16, 0xFC) = HeadingToPoint(arg0 + 4, t);
                } else {
                    a = (rand() & 0x3FF) - 0x200;
                    if (a < 0) {
                        a -= 0x300;
                    } else {
                        a += 0x300;
                    }
                    AF(arg0, s16, 0xFC) = (AF(AF(arg0, u8 *, 0x20), u16, 0x12) + a) & 0xFFF;
                }
                SetScript((s32) arg0, (s32) &D_sc02_011_801D3CBC);
            }
            if (!(AF(arg0, u16, 0x70) & 0x100)) {
                if (TargetInSight((s32) arg0, 0x200, 0x1000) != 0) {
                    func_sc02_011_80188D54((s32) arg0);
                }
            } else if (TargetInSight((s32) arg0, 0x400, 0x40000) != 0) {
                func_sc02_011_80188D80((s32) arg0);
            }
        }
        break;
    }
}

s32 func_sc02_011_80188D54(StageActor *arg0) {
    return func_sc02_011_80188DF4(arg0, 0, 0x14, (s32) &D_sc02_011_801D3EBC);
}

extern s32 func_sc02_011_80188DC8();
void func_sc02_011_80188D80(StageActor *o) {
    if (o->work100 == 0) {
        func_sc02_011_80188DC8(o);
    } else {
        func_sc02_011_80188DF4(o, 4, 0x1E, &D_sc02_011_801D4494);
    }
}

s32 func_sc02_011_80188DC8(StageActor *arg0, s32 arg1) {
    arg0->state = 8;
    return SetScript(arg0, (s32) &D_sc02_011_801D458C);
}

s32 func_sc02_011_80188DF4(StageActor *arg0, s32 arg1, s32 arg2, AnimEntry *arg3) {
    s32 temp_v0;

    arg0->stateCount = (s16) arg1;
    arg0->state = 4;
    temp_v0 = SetScript(arg0, arg3);
    arg0->timer = arg2;
    return temp_v0;
}

void func_sc02_011_80188E3C(u8 *o) {
    u8 *p;
    s32 r;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (AF(o, s32, 0x1C) == 7) {
            ActorSegmentDamagesPlayer(o, &D_sc02_011_801960A0, &D_sc02_011_801960A0 + 8, 0xB);
        }
        break;
    case 1:
        r = TurnStepToTarget(o, 6);
        p = AF(o, u8 *, 0x20);
        AF(p, u16, 0x12) += r;
        break;
    case 2:
        if (AF(o, s32, 0x1C) == 0xA) {
            ActorSegmentDamagesPlayer(o, &D_sc02_011_801960A0, &D_sc02_011_801960A0 + 8, 0xB);
        }
        break;
    case 3:
        if (AF(o, s32, 0x1C) == 0xB) {
            ActorSegmentDamagesPlayer(o, &D_sc02_011_801960A0, &D_sc02_011_801960A0 + 8, 0x11);
        }
        break;
    case 4:
        r = TurnStepToTarget(o, 6);
        p = AF(o, u8 *, 0x20);
        AF(p, u16, 0x12) += r;
        if (AF(o, s32, 0x1C) == 0xC) {
            func_sc02_011_801890C8(o);
        }
        break;
    }
    if (TickTimer(o) != 0) {
        switch (AF(o, u16, 0x34)) {
        case 0:
            if (TargetInSight(o, 0x400, 0x4000) != 0) {
                AF(o, s16, 0x34) = 1;
                SetScript(o, &D_sc02_011_801D3ACC);
                AF(o, s32, 0x1C) = 0xA;
            } else {
                AF(o, s16, 2) = 2;
                AF(o, s16, 0x34) = 0;
                SetScript(o, &D_sc02_011_801D3B74);
            }
            break;
        case 1:
            AF(o, s16, 0x34) = 2;
            AF(o, s32, 0x1C) = 0x18;
            SetScript(o, &D_sc02_011_801D3F84);
            break;
        case 2:
            AF(o, s16, 2) = 2;
            AF(o, s16, 0x34) = 0;
            SetScript(o, &D_sc02_011_801D3B74);
            break;
        case 3:
            break;
        case 4:
            if (--AF(o, s16, 0x100) == 0) {
                AF(o, s16, 2) = 8;
                SetScript(o, &D_sc02_011_801D458C);
            } else {
                AF(o, s32, 0x1C) = 0x1E;
            }
            break;
        }
    }
}

void func_sc02_011_80189050(s32 arg0) {
    s32 *var_s1;

    var_s1 = &D_sc02_011_801960B4;
    if (!(AF(arg0, u16, 0x70) & 0x2000)) {
        var_s1 = &D_sc02_011_801960B4 + 0xC;
    }
    AF(arg0, s16, 2) = 7;
    SetScript(arg0, AF(var_s1, s32, 0));
    StopMotion(arg0);
    SetForwardVelocity(arg0, AF(var_s1, s32, 4));
    AF(arg0, s32, 0x1C) = (s32) AF(var_s1, s32, 8);
}

void func_sc02_011_801890C8(StageActor *o) {
    SpawnDef d;
    V3 in;
    V3 out;
    s16 *q;

    q = &D_sc02_011_801960CC;
    func_sc02_011_8018F488(o, q);
    in.x = *q << 8;
    in.y = D_sc02_011_801960CE << 8;
    in.z = D_sc02_011_801960D0 << 8;
    ApplyMatrixLV((u8 *)o->model + 0x34, &in, &out);
    out.x += o->pos[0].h.i << 8;
    out.y += o->pos[1].h.i << 8;
    out.z += o->pos[2].h.i << 8;
    d.x = out.x / 256;
    d.y = out.y / 256;
    d.z = out.z / 256;
    d.kind = 0x20;
    d.unk8 = 1;
    d.flags = 0;
    d.unk10 = 0;
    d.unkE = 0;
    SpawnActorFromDef(&d, o);
}

void func_sc02_011_801891E8(u8 *o) {
    SV8 a;
    V3 v;

    if (AF(o, u16, 0x34) == 0) {
        a.x = g_PlayerX;
        a.z = D_80126B66;
        v.x = AF(o, s16, 6) - a.x;
        v.y = 0;
        v.z = AF(o, s16, 0xE) - a.z;
        Square0(&v, &v);
        if (v.x + v.z < 0x19001) {
            AF(o, u16, 0x34)++;
            AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
        }
        return;
    }
    if (MoveCollide(o) & 0x2000) {
        AF(o, s16, 2) = 3;
        if (AF(o, u16, 0x86) & 2) {
            AF(o, s16, 0x34) = 1;
            AF(o, s32, 0x1C) = 0x28;
            SetScript(o, &D_sc02_011_801D3D64);
            AF(o, s16, 0xFE) = 0;
            return;
        }
        AF(o, s16, 0x34) = 0;
        SetScript(o, &D_sc02_011_801D3DEC);
        AF(o, s32, 0x1C) = 0x19;
        AF(o, u16, 0x86) |= 2;
    }
}

void func_sc02_011_80189324(u8 *o) {
    V3 v;
    u8 *t;
    s32 a;
    u16 f;

    if (SetupActor(o, ((AF(o, u16, 0x70) & 0xF00) >> 8) * 52 + &D_sc02_011_80195FF0) == 0) {
        return;
    }
    AF(o, u8, 0xC0) = 1;
    AF(o, s32, 0xB4) = -1;
    AF(o, u8, 0xC1) = 0;
    AF(o, u8 *, 0xBC) = &D_sc02_011_80196058;
    SpawnShadow(o);
    SnapToGround(o);
    f = AF(o, u16, 0x70);
    if (f & 0x6000) {
        AF(o, s16, 2) = 6;
        SetScript(o, &D_sc02_011_801D3B74);
        return;
    }
    if (f & 1) {
        AF(o, s16, 2) = 0xF;
        return;
    }
    if (f & 0x100) {
        AF(o, s16, 2) = 9;
        return;
    }
    AF(o, s16, 2) = 1;
    AF(o, s16, 0x34) = 0;
    AF(o, u16, 0x5C) = 0xAA10;
    AF(o, s32, 0x1C) = (rand() & 0x1F) + 0x28;
    t = o + 0x88;
    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    if (v.x + v.z > 0x8FFFF) {
        AF(o, s16, 0xFC) = HeadingToPoint(o + 4, t);
    } else {
        a = (rand() & 0x3FF) - 0x200;
        if (a < 0) {
            a -= 0x300;
        } else {
            a += 0x300;
        }
        AF(o, s16, 0xFC) = (AF(AF(o, u8 *, 0x20), u16, 0x12) + a) & 0xFFF;
    }
    SetScript(o, &D_sc02_011_801D3CBC);
}

void func_sc02_011_801894E0(StageActor *arg0) {
    D_sc02_011_801960D4[arg0->state]();
}

void func_sc02_011_8018951C(u8 *arg0) {
    if (AF(arg0, u16, 0x72) & 0x4000) {
        AF(arg0, s16, 0x100) = 3;
        if (TargetInSight((s32) arg0, 0x400, 0x40000) != 0) {
            func_sc02_011_80188DF4((s32) arg0, 4, 0x1E, (s32) &D_sc02_011_801D4494);
            return;
        }
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0x34) = 0;
        SetScript((s32) arg0, (s32) &D_sc02_011_801D3B74);
    }
}

void func_sc02_011_801895A0(StageActor *arg0) {
    arg0->state = 0xA;
    SetScript((s32) arg0, (s32) &D_sc02_011_801D3B74);
}

void func_sc02_011_801895CC(u8 *o) {
    if (AF(o, s16, 0x100) == 0) {
        AF(o, s16, 2) = 0xB;
    } else if (TargetInSight(o, 0x400, 0x40000) != 0) {
        AF(o, s16, 2) = 0xD;
    }
}

void func_sc02_011_80189620(StageActor *arg0) {
    arg0->state = 0xC;
    SetScript((s32) arg0, (s32) &D_sc02_011_801D458C);
}

void func_sc02_011_8018964C(StageActor *arg0) {
    if (arg0->animFlags & 0x4000) {
        arg0->state = 9;
        arg0->work100 = 3;
    }
}

void func_sc02_011_80189674(StageActor *arg0) {
    arg0->state = 0xE;
    SetScript((s32) arg0, (s32) &D_sc02_011_801D4494);
    arg0->timer = 0x1E;
}

void func_sc02_011_801896B4(u8 *o) {
    AF(AF(o, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(o, 6);
    if (AF(o, s32, 0x1C) == 0xC) {
        func_sc02_011_801890C8(o);
    }
    if (TickTimer(o) != 0) {
        if (--AF(o, s16, 0x100) == 0) {
            AF(o, s16, 2) = 0xB;
        } else {
            AF(o, s32, 0x1C) = 0x1E;
        }
    }
}

void func_sc02_011_8018974C(s32 arg0) {
    void *temp_a0;

    SetScript(arg0, (s32) &D_sc02_011_801D3ACC);
    AF(arg0, s16, 2) = 0x10;
    StopWithGravity(arg0);
    temp_a0 = AF(arg0, void *, 0x20);
    AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
}

void func_sc02_011_801897A4(u8 *arg0) {
    s32 temp_v0;

    if (AF(arg0, s16, 0xA) >= 0x10) {
        if (AF(arg0, s16, 0x102) == 0) {
            GainStat0FromActor();
        }
        DespawnActor((s32) arg0);
        return;
    }
    temp_v0 = MoveCollidePassable((s32) arg0);
    if (temp_v0 & 0x2000) {
        if (temp_v0 & 0x1000) {
            SetReactionStep((s32) arg0, 0x12);
            return;
        }
        func_sc02_011_80188554((s32) arg0);
    }
}

void func_sc02_011_8018983C(s32 arg0) {
    MoveCollidePassable(arg0);
    if (AF(arg0, u16, 0x72) & 0x4000) {
        func_sc02_011_80188554(arg0);
    }
}

void func_sc02_011_80189880(s32 arg0) {
    if (DistSqToTarget(arg0) < D_sc02_011_801960B0) {
        func_sc02_011_80189050(arg0);
    }
}

void func_sc02_011_801898C8(s32 arg0) {
    u16 temp_v0;

    MoveObject(arg0);
    if (AF(arg0, u16, 0x70) & 0x2000) {
        temp_v0 = AF(arg0, u16, 0xFE) - 1;
        AF(arg0, u16, 0xFE) = temp_v0;
        if ((temp_v0 << 0x10) <= 0) {
            SpawnKind1C(arg0, 0);
            AF(arg0, u16, 0xFE) = 8U;
        }
    }
    if (TickTimer(arg0) != 0) {
        AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
        AF(arg0, s16, 2) = 3;
        if (AF(arg0, u16, 0x86) & 2) {
            AF(arg0, s16, 0x34) = 1;
            AF(arg0, s32, 0x1C) = 0x28;
            SetScript(arg0, (s32) &D_sc02_011_801D3D64);
            AF(arg0, u16, 0xFE) = 0U;
            return;
        }
        AF(arg0, s16, 0x34) = 0;
        SetScript(arg0, (s32) &D_sc02_011_801D3DEC);
        AF(arg0, s32, 0x1C) = 0x19;
        AF(arg0, u16, 0x86) = (u16) (AF(arg0, u16, 0x86) | 2);
    }
}

void func_sc02_011_801899B4(void) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;

    UpdateClockTint();
    func_sc02_011_80189A50();
    if (D_sc02_011_801EB9F8 != 1) {
        if (D_sc02_011_801EB9F8 < 2) {
            var_a0 = 0x5E4;
            if (D_sc02_011_801EB9F8 == 0) {
                var_a1 = 0;
                goto block_6;
            }
        }
    } else {
        temp_v0 = D_sc02_011_801EB9F4 + 1;
        D_sc02_011_801EB9F4 = temp_v0;
        var_a0 = 0xD;
        if (temp_v0 >= 0x97) {
            var_a1 = 0x5E4;
block_6:
            PlaySoundId(var_a0, var_a1);
            D_sc02_011_801EB9F8 += 1;
        }
    }
}

void func_sc02_011_80189A50(void) {
    u32 i;

    for (i = 0; i < 0x20; i++) {
        D_sc02_011_801EB56C[i] = D_sc02_011_8019611C[((D_sc02_011_801EB568 >> 8) + i) & 0x1F] | 0x8000;
    }
    for (i = 0; i < 0x10; i++) {
        D_sc02_011_801EB5AC[i] = D_sc02_011_8019615C[((D_sc02_011_801EB568 >> 8) + i) & 0xF] | 0x8000;
    }
    QueueImage(&D_sc02_011_8019617C);
    D_sc02_011_801EB568 += 0x100;
}

void func_sc02_011_80189B28(StageActor *arg0) {
    D_sc02_011_801961D4[arg0->state]();
}

void func_sc02_011_80189B64(StageActor *arg0) {
    s32 temp_v0;

    if ((GetFlag(0x9F) & 0xFF) || (arg0->hitState = 0x800, temp_v0 = AllocActorModel(), arg0->model = temp_v0, (temp_v0 == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc02_011_801D4E54);
    SetModelCullBox(arg0->model, 0x140, 0xF0);
    arg0->hitData = (s32) ((s32) &D_sc02_011_801961AC | 0x10000000 | 0x40000000);
    arg0->targetClass = 1;
    arg0->state = 1;
    arg0->timer = 0x1F;
    SetScript((s32) arg0, (s32) &D_sc02_011_8019105C);
}

void func_sc02_011_80189C20(s32 arg0) {
    if ((IsOnScreen(arg0, 0x8200AA) == 1) && ((GetPlayerByte1C7() & 0x7FFFFFFF) == 2)) {
        AF(arg0, s16, 2) = 2;
        AF(arg0, s16, 0xFC) = 1;
        AF(arg0, s32, 0x1C) = 0x3C;
    }
}

void func_sc02_011_80189C90(u8 *o) {
    u8 *m;
    s16 *p;

    m = AF(o, u8 *, 0x20);
    p = (s16 *)(m + 0x10);
    if (rand() & 1) {
        AF(m, s16, 0x10) += AF(o, s16, 0xFC) * (rand() % 8 + 1);
    }
    if (*p >= 0x39) {
        AF(o, s16, 0xFC) = -1;
        *p = 0x38;
        AF(o, s16, 0x100)++;
        func_sc02_011_8018A084(o);
        func_sc02_011_80189F30(o);
        AF(o, s16, 0xFE) = 5;
        PlaySoundId(0x661, 0);
    } else if (*p < 0) {
        AF(o, s16, 0xFC) = 1;
        *p = 0;
    }
    if (AF(o, s16, 0xFE) != 0) {
        func_sc02_011_80189F30(o);
        AF(o, s16, 0xFE)--;
    }
    if (AF(o, s16, 0x100) >= 2) {
        UpdateModelZYX(o);
        StopMotion(o);
        SetForwardVelocity(o, 0xFFFE0000);
        AF(o, s16, 2) = 3;
        AF(o, s32, 0x1C) = 10;
        AF(o, s32, 0xDC) = 0x1F;
        PlaySoundId(0x61D, 0);
    }
}

void TopplingFall(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = AF(arg0, s32, 0xDC);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0xDC) = (s32) (temp_v0 - 1);
        func_800D0C48(1, arg1);
    }
    if (AF(arg0, u16, 0x34) == 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x10) = (u16) (AF(temp_v1, u16, 0x10) + 0x20);
        SetForwardVelocity((s32) arg0, -0x20000);
        MoveObject((s32) arg0);
        temp_v1_2 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_v1_2, u16, 0x10) >= 0x400) {
            AF(temp_v1_2, u16, 0x10) = 0x400U;
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            StopWithGravity((s32) arg0);
        }
    } else if (MoveCollide((s32) arg0) & 0x2000) {
        StartCameraShake((s32) &D_sc02_011_801961BC);
        SetFlag(0x9F, 1);
        PlaySoundId(0x61C, 0);
        AF(arg0, s16, 2) = 4;
    }
}

void func_sc02_011_80189EF4(StageActor *arg0) {
    if (func_800D0CE0() == 1) {
        FreeActor(arg0);
    }
}

void func_sc02_011_80189F30(u8 *o) {
    SV8 in;
    SV8 out;
    s32 f;
    s32 i;
    s32 t;

    in.y = D_sc02_011_801961CE;
    gte_SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    gte_SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    for (i = 0; i < 10; i++) {
        t = rand() % 144;
        in.x = (rand() & 1) ? t : -t;
        t = rand() % 48;
        in.z = ((rand() & 1) ? t : -t) - 0x30;
        RotTransSV(&in, &out, &f);
        SpawnKind1CAt(&out);
    }
}

void func_sc02_011_8018A084(u8 *o) {
    SV v;
    s32 i;
    s32 r;

    v.vy = D_sc02_011_801961CE;
    for (i = 0; i < 5; i++) {
        r = rand() % 144;
        v.vx = (rand() & 1) ? r : -r;
        r = rand() % 48;
        v.vz = ((rand() & 1) ? r : -r) - 0x30;
        func_sc02_011_8017C294((s32) o, &v, 1);
    }
}

typedef void (*StepFn)(void);
typedef struct { u32 wx, wy, wz, count; u32 *faces; } Rec;
typedef struct { u16 x0, y0, w; s16 pad6; u16 *idx; s32 padC[2]; u8 *lists; u8 *a; u8 *b; } MapGrid;
typedef struct { SV8 v[4]; XY uv[4]; s32 col[4]; s32 code; u8 clut; } QuadSpr;
typedef struct { s16 x, y, z, w, f, g, h, i; s32 j; } Arg15DC;

s32 func_sc02_011_8018A184(void) {
    if (D_8012704C == 0) {
        return 0x18;
    }
    return 0x2B;
}

void func_sc02_011_8018A1A4(u8 *o) {
    u8 *p = AF(o, u8 *, 0xDC);

    SaveCamera();
    StartCameraBlend();
    g_CameraProjTarget = AF(p, s32, 0);
    g_CameraDistTarget = AF(p, s32, 4);
    *(B8 *)&g_CameraAngleTarget = AF(p, B8, 8);
    g_CameraOfsTarget = AF(p, s16, 0x10);
    D_80126978 = AF(p, s16, 0x12);
    D_8012697A = AF(p, s16, 0x14);
    SetCameraUpdate(func_sc02_011_8018A284, 0);
    D_801269E4 = AF(o, s32, 0xDC);
}

s32 func_sc02_011_8018A264(void) {
    return RestoreSavedCamera();
}

void func_sc02_011_8018A284(s32 arg0) {
    D_sc02_011_801D6268[AF(arg0, u8, 4)]();
}

void func_sc02_011_8018A2C0(u8 *o) {
    u8 *p;
    s16 a, b, c, d, e, f;

    p = AF(o, u8 *, 0x9C);
    if (AF(p, u16, 0x1E) & 1) {
        a = AF(p, s16, 0x18);
        if (a < g_CameraFocus[0]) g_CameraFocus[0] = a;
    }
    if (AF(p, u16, 0x1E) & 2) {
        b = AF(p, s16, 0x1A);
        if (b < g_CameraFocus[1]) g_CameraFocus[1] = b;
    }
    if (AF(p, u16, 0x1E) & 4) {
        c = AF(p, s16, 0x1C);
        if (c < g_CameraFocus[2]) g_CameraFocus[2] = c;
    }
    if (AF(p, u16, 0x26) & 1) {
        d = AF(p, s16, 0x20);
        if (g_CameraFocus[0] < d) g_CameraFocus[0] = d;
    }
    if (AF(p, u16, 0x26) & 2) {
        e = AF(p, s16, 0x22);
        if (g_CameraFocus[1] < e) g_CameraFocus[1] = e;
    }
    if (AF(p, u16, 0x26) & 4) {
        f = AF(p, s16, 0x24);
        if (g_CameraFocus[2] < f) g_CameraFocus[2] = f;
    }
    func_sc02_011_8018A438(o);
}

void func_sc02_011_8018A438(u8 *p) {
    WMtx m;
    SV4 v;
    SV4 o;

    AF(p, s32, 8) = (s16) EaseValue(AF(p, s16, 8), AF(p, s16, 0xC), 4);
    AF(p, s32, 0x10) = (s16) EaseValue(AF(p, s16, 0x10), AF(p, s16, 0x14), 4);
    AF(p, s16, 0x18) = EaseAngle(AF(p, s16, 0x18), AF(p, s16, 0x20), 4);
    AF(p, s16, 0x1A) = EaseAngle(AF(p, s16, 0x1A), AF(p, s16, 0x22), 4);
    AF(p, s16, 0x1C) = EaseAngle(AF(p, s16, 0x1C), AF(p, s16, 0x24), 4);
    AF(p, s16, 0x28) = EaseValue(AF(p, s16, 0x28), AF(p, s16, 0x2E), 0x10);
    AF(p, s16, 0x2A) = EaseValue(AF(p, s16, 0x2A), AF(p, s16, 0x30), 0x10);
    AF(p, s16, 0x2C) = EaseValue(AF(p, s16, 0x2C), AF(p, s16, 0x32), 0x10);
    AF(p, s32, 0x48) = AF(p, s16, 0x28) + g_CameraFocus[0];
    AF(p, s32, 0x4C) = AF(p, s16, 0x2A) + D_80126942;
    AF(p, s32, 0x50) = AF(p, s16, 0x2C) + D_80126944;
    RotMatrixZYX(p + 0x18, &m);
    m.t[0] = AF(p, s16, 0x28) + g_CameraFocus[0];
    m.t[1] = AF(p, s16, 0x2A) + D_80126942;
    m.t[2] = AF(p, s16, 0x2C) + D_80126944;
    v.x = 0;
    v.y = 0;
    v.z = AF(p, s32, 0x10);
    LocalToWorld(&m, &v, &o);
    AF(p, s32, 0x3C) = o.x;
    AF(p, s32, 0x40) = o.y;
    AF(p, s32, 0x44) = o.z;
}

void func_sc02_011_8018A5E4(StageActor *arg0) {
    D_sc02_011_801D626C[arg0->state]();
}

void func_sc02_011_8018A620(StageActor *arg0, s32 arg1) {
    NextState(arg0, arg1);
}

void func_sc02_011_8018A640(s32 arg0) {
    if (PlayerEvent10((s32) &g_Player) != 0) {
        func_sc02_011_8018A1A4(arg0);
        SetMoverTimer(arg0, 0x20);
        NextState(arg0);
    }
}

void func_sc02_011_8018A698(s32 arg0) {
    if (PlayerEvent10((s32) &g_Player) == 0) {
        if (TickTimer(arg0) != 0) {
            func_sc02_011_8018A264();
            AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
        }
    } else {
        SetMoverTimer(arg0, 0x20);
    }
}

void func_sc02_011_8018A708(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc02_011_801EB6E4;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0xE);
    } while (var_v0 >= 0);
}

void func_sc02_011_8018A72C(s32 arg0, s32 arg1, s32 arg2, u16 *arg3) {
    SV4 v;
    s32 i;
    s16 ang;

    func_sc02_011_8018A7CC(arg0, 0x1000, 0);
    v.x = arg3[0];
    v.z = arg3[1];
    v.pad = 1;
    for (i = 0, ang = 0; i < 0x10; i++, ang += 0x100) {
        v.y = ang;
        func_sc02_011_8018A8E8(i, (s32) &v, arg1, arg2);
    }
}

s32 func_sc02_011_8018A7CC(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v0;

    D_sc02_011_801EB6DC = AF(arg0, u16, 0);
    temp_v0 = AF(arg0, u16, 2);
    D_sc02_011_801EB6E0 = (s16) arg1;
    D_sc02_011_801EB6E2 = (s16) arg2;
    D_sc02_011_801EB6DE = temp_v0;
    return (s32) temp_v0;
}

void func_sc02_011_8018A7FC(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc02_011_801EB6DC = sp10[0];
    D_sc02_011_801EB6DE = sp10[1];
}

void func_sc02_011_8018A874(s32 arg0) {
    s16 *p = &D_sc02_011_801EB6E2;
    *p += arg0;
}

void func_sc02_011_8018A890(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_sc02_011_8018A9BC();
    if (temp_v0 >= 0) {
        func_sc02_011_8018A8E8(temp_v0, arg0, arg1, arg2);
    }
}

void func_sc02_011_8018A8E8(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
    struct C8E8 { u8 r, g, b, cd; };
    struct E8E8 { u16 a; s16 y; s16 z; struct C8E8 c0; struct C8E8 c1; } *e;

    e = (struct E8E8 *)(&D_sc02_011_801EB6E4 + arg0 * 14);
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

s32 func_sc02_011_8018A9BC(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0xE) {
        if (*(u16 *)&((u8 *)&D_sc02_011_801EB6E4)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc02_011_8018A9F8(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((arg0 < 0x10) && (temp_v1 = (arg0 * 0xE) + &D_sc02_011_801EB6E4, (AF(temp_v1, u16, 0) != 0))) {
        if (arg1 == 0) {
            AF(temp_v1, u16, 0) = 0U;
            return;
        }
        AF(temp_v1, u8, 9) = 2;
    }
}

void func_sc02_011_8018AA44(void) {
    u8 *p;
    s32 i;
    s16 v;
    s16 w;

    for (p = &D_sc02_011_801EB6E4, i = 0; i < 0x10; i++, p += 14) {
        if (AF(p, u16, 0) != 0) {
            func_sc02_011_8018AB20(i);
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

void func_sc02_011_8018AB20(s32 i) {
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
    r = &D_sc02_011_801EB6E4 + i * 14;
    AF(p, u8, 4) = AF(r, u8, 6);
    AF(p, u8, 5) = AF(r, u8, 7);
    AF(p, u8, 6) = AF(r, u8, 8);
    AF(p, u8, 0xC) = AF(r, u8, 0xA);
    AF(p, u8, 0xD) = AF(r, u8, 0xB);
    AF(p, u8, 0xE) = AF(r, u8, 0xC);
    AF(p, u8, 0x14) = AF(r, u8, 0xA);
    AF(p, u8, 0x15) = AF(r, u8, 0xB);
    AF(p, u8, 0x16) = AF(r, u8, 0xC);
    cx = D_sc02_011_801EB6DC;
    cy = D_sc02_011_801EB6DE;
    RotMatrixZ(D_sc02_011_801EB6E2, &m);
    s.x = s.y = s.z = D_sc02_011_801EB6E0;
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

s32 func_sc02_011_8018ADE4(void) {
    s16 *var_v1;
    s32 var_v0;

    var_v1 = &D_sc02_011_801EB5DC;
    var_v0 = 0xF;
    do {
        *var_v1 = 0;
        var_v0 -= 1;
        var_v1 = (s16 *)((u8 *)var_v1 + 0x10);
    } while (var_v0 >= 0);
    return var_v0;
}

s32 func_sc02_011_8018AE08(s32 arg0) {
    s32 sp10;

    PosToSVec(arg0, (s32) &sp10);
    return func_sc02_011_8018AE30((s32) &sp10);
}

s32 func_sc02_011_8018AE30(s32 arg0) {
    s16 sxy[2];
    CV4 col;
    s32 p;
    s32 flag;

    col = D_sc02_011_801E9E68;
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers(arg0, (s32) sxy, (s32) &p, (s32) &flag);
    return func_sc02_011_8018AEB8((s32) sxy, (s32) &col, 0x10, 0x18);
}

s32 func_sc02_011_8018AEB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 pad[4];
    s16 var_s1;
    s32 temp_v0;
    s32 var_s0;

    func_sc02_011_8018AF24(arg0, arg1, (s32) (s16) arg2);
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_sc02_011_8018B058(var_s0, (s32) var_s1, arg3 & 0xFFFF);
        var_s0 += 1;
        temp_v0 = var_s0 < 0x10;
        var_s1 += 0x100;
    } while (temp_v0 != 0);
    return temp_v0;
}

void func_sc02_011_8018AF24(u16 *p, u8 *c, s32 g) {
    if (p != 0) {
        D_sc02_011_801EB5D0.a = p[0];
        D_sc02_011_801EB5D0.b = p[1];
    } else {
        D_sc02_011_801EB5D0.a = 0;
        D_sc02_011_801EB5D0.b = 0;
    }
    D_sc02_011_801EB5D8 = c[0];
    D_sc02_011_801EB5D9 = c[1];
    D_sc02_011_801EB5DA = c[2];
    AF(&D_sc02_011_801EB5D0, s32, 4) = g << 16;
}

void func_sc02_011_8018AF94(s32 arg0) {
    u16 sp10[2];
    s32 sp18[2];
    s32 sp20;
    s32 sp24;

    PosToSVec(arg0, (s32) &sp18);
    SetRotMatrix((s32) &D_800AF648);
    SetTransMatrix((s32) &D_800AF648);
    RotTransPers((s32) &sp18, (s32) sp10, (s32) &sp20, (s32) &sp24);
    D_sc02_011_801EB5D0.a = sp10[0];
    D_sc02_011_801EB5D0.b = sp10[1];
}

void func_sc02_011_8018B00C(s16 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_sc02_011_8018B174();
    if (temp_v0 >= 0) {
        func_sc02_011_8018B058(temp_v0, (s32) arg0, arg1 & 0xFFFF);
    }
}

void func_sc02_011_8018B058(s32 i, s32 ang, s32 spd) {
    u8 unused[0x10];
    Pt16 *p;
    s16 vx;
    s16 vz;
    u16 s;
    s32 m;
    s32 gg;

    p = &D_sc02_011_801EB5D0.pts[i];
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
    gg = D_sc02_011_801EB5D0.g;
    p->dy = gg << 6;
}

s32 func_sc02_011_8018B174(void) {
    s32 i;
    s32 off;

    for (i = 0, off = 0; i < 0x10; i++, off += 0x10) {
        if (*(u16 *)&((u8 *)&D_sc02_011_801EB5DC)[off] == 0) {
            return i;
        }
    }
    return -1;
}

void func_sc02_011_8018B1B0(void) {
    Pt16 *p;
    s32 i;
    s16 g;
    s32 dx;
    s32 dz;

    g = D_sc02_011_801EB5D6;
    p = (Pt16 *)&D_sc02_011_801EB5DC;
    for (i = 0; i < 16; i++, p++) {
        if (p->active == 0) {
            continue;
        }
        if ((g > 0 && p->y >= 0x4001) || (g < 0 && p->y <= 0)) {
            p->active = 0;
            continue;
        }
        func_sc02_011_8018B2C4(i);
        dx = (rcos(p->ang) * g) << 4;
        dz = (rsin(p->ang) * g) << 4;
        p->x += dx;
        p->z += dz;
        p->y += p->dy;
    }
}

void func_sc02_011_8018B2C4(s32 i) {
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
    AF(p, u8, 4) = D_sc02_011_801EB5D8;
    AF(p, u8, 5) = D_sc02_011_801EB5D9;
    AF(p, u8, 6) = D_sc02_011_801EB5DA;
    r = (Pt16 *)&D_sc02_011_801EB5DC + i;
    cx = AF(r, u16, 0xA) + D_sc02_011_801EB5D0.a;
    cz = AF(r, u16, 0xE) + D_sc02_011_801EB5D0.b;
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

void func_sc02_011_8018B5A8(s32 arg0, s32 arg1, s32 arg2) {
    WMtx m;

    SetIdentityRot(&m);
    func_sc02_011_8018B60C((s16)arg0, &m);
    ApplyMatrixSV(&m, arg1, arg2);
}

void func_sc02_011_8018B60C(s32 arg0, WMtx *m) {
    WMtx r;
    s32 a;
    s16 c;
    s16 s;

    a = arg0 & 0xFFF;
    c = func_sc02_011_8018BA0C(a);
    s = func_sc02_011_8018B950(a);
    r.m[0][0] = c;
    r.m[0][1] = 0;
    r.m[0][2] = s;
    r.m[1][0] = 0;
    r.m[1][1] = 0x7FF8;
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
}

void func_sc02_011_8018B76C(u16 *r, s16 *m) {
    s16 sx;
    s16 cx;
    s16 sy;
    s16 cy;
    s16 sz;
    s16 cz;
    s32 a;
    s32 b;
    s32 c;

    sx = func_sc02_011_8018BA0C(r[0] & 0xFFF);
    cx = func_sc02_011_8018B950(r[0] & 0xFFF);
    sy = func_sc02_011_8018BA0C(r[1] & 0xFFF);
    cy = func_sc02_011_8018B950(r[1] & 0xFFF);
    sz = func_sc02_011_8018BA0C(r[2] & 0xFFF);
    cz = func_sc02_011_8018B950(r[2] & 0xFFF);
    c = (sx * cz) >> 15;
    b = (sx * sz) >> 15;
    a = (cx * cy) >> 15;
    m[0] = (sz * sy) >> 15;
    m[1] = ((a * sz) >> 15) - c;
    m[2] = ((b * cy) >> 15) + ((cx * cz) >> 15);
    m[3] = (cz * sy) >> 15;
    m[4] = ((a * cz) >> 15) + b;
    m[5] = ((c * cy) >> 15) - ((cx * sz) >> 15);
    m[6] = -cy;
    m[7] = (sy * cx) >> 15;
    m[8] = (sy * sx) >> 15;
}

s32 func_sc02_011_8018B950(u32 a) {
    if (a < 0x400) {
        return D_sc02_011_801D66C8[a];
    }
    if (a - 0x400 < 0x400) {
        return D_sc02_011_801D66C8[0x7FF - a];
    }
    if (a - 0x800 < 0x400) {
        return (s16)-D_sc02_011_801D66C8[a - 0x800];
    }
    if (a - 0xC00 < 0x400) {
        return (s16)-D_sc02_011_801D66C8[0xFFF - a];
    }
}

s32 func_sc02_011_8018BA0C(s32 a) {
    if (a >= 0 && a < 0x400) {
        return D_sc02_011_801D66C8[0x3FF - a];
    }
    if (a >= 0x400 && a < 0x800) {
        return (s16)-D_sc02_011_801D66C8[a - 0x400];
    }
    if (a >= 0x800 && a < 0xC00) {
        return (s16)-D_sc02_011_801D66C8[0xBFF - a];
    }
    if (a >= 0xC00 && a < 0x1000) {
        return D_sc02_011_801D66C8[a - 0xC00];
    }
}

void func_sc02_011_8018BAB8(StageActor *arg0) {
    DespawnActor(arg0);
}

void func_sc02_011_8018BAD8(StageActor *arg0) {
    s16 v[3];
    u16 t;

    t = arg0->hitCode;
    if (t == 0x23) {
        arg0->workFE = 1;
        PlaySoundId(0xAA1, 0);
    } else if (t == 0x24) {
        v[0] = 2;
        v[1] = 0xF;
        v[2] = -2;
        func_sc02_011_80190C84((s32) arg0, v, 0xD);
    }
}

void func_sc02_011_8018BB44(u8 *arg0) {
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (AF(arg0, s16, 0xFE) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x40);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x40);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, u16, 0x1C) = (u16) (AF(temp_v1_3, u16, 0x1C) + 0x40);
        temp_a0 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_a0, u16, 0x18) >= 0x1800) {
            AF(temp_a0, u16, 0x1C) = 0x1800U;
            AF(temp_a0, u16, 0x1A) = 0x1800U;
            AF(temp_a0, u16, 0x18) = 0x1800U;
        }
    }
}

void func_sc02_011_8018BBCC(u8 *arg0) {
    AF(arg0, s16, 0x5C) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    if (AF(arg0, s16, 0xAA) == 0) {
        AF(arg0, u16, 0x100) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
        return;
    }
    AF(arg0, u16, 0x102) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x18);
}

void func_sc02_011_8018BC10(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_lo;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a0_2;
    void *temp_v1;

    temp_a0 = rsin(0x400 - (g_PlayerAbsorbCounter * 8), arg1, arg2, arg3);
    if (AF(arg0, s16, 0xAA) == 0) {
        var_lo = temp_a0 * AF(arg0, s16, 0x100);
    } else {
        var_lo = temp_a0 * AF(arg0, s16, 0x102);
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

void func_sc02_011_8018BCB4(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 6;
    AF(arg0, s16, 0x5C) = 0;
}

void func_sc02_011_8018BCC4(u8 *arg0) {
    u8 *p2;
    u8 *p3;
    s32 old;
    s32 d;

    if (TickTimer((s32) arg0) != 0) {
        p2 = AF(arg0, u8 *, 0x20);
        AF(p2, s16, 0x18) = AF(p2, s16, 0x1C) = AF(arg0, s16, 0x100);
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, u16, 0x5C) |= 1;
        AF(arg0, s16, 0x62) = AF(AF(arg0, u8 *, 0x20), s16, 0x12) + 0x800;
        AF(arg0, s16, 0x5E) = 1;
        SetReactionStep((s32) arg0, 1);
    } else {
        p3 = AF(arg0, u8 *, 0x20);
        old = AF(p3, s16, 0x18);
        d = (AF(arg0, s16, 0x100) - old) / 4;
        old += d;
        AF(p3, s16, 0x18) = AF(p3, s16, 0x1C) = old;
    }
}

void func_sc02_011_8018BD70(StageActor *arg0) {
    if ((arg0->reactBits & 1) && ((s32)arg0->script != &D_sc02_011_801DEB58)) {
        SetScript((s32) arg0, (s32) &D_sc02_011_801DEB58);
    }
}

void func_sc02_011_8018BDB8(u8 *arg0) {
    s32 var_a0;

    GiveItem(8);
    var_a0 = 0x43F;
    if (AF(arg0, u16, 0x5E) == 0x1D) {
        var_a0 = 0x440;
    }
    PlaySoundId(var_a0, 0);
}

void func_sc02_011_8018BE00(StageActor *arg0) {
    arg0->state = 2;
    SetScript(arg0, (s32) &D_sc02_011_801DEFE0);
    arg0->timer = 0x14;
}

s32 func_sc02_011_8018BE40(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u16 temp_v0_2;

    temp_v0 = DistSqToTarget(arg0);
    if (arg1 >= temp_v0) {
        func_sc02_011_8018BEF0(arg0);
        return 1;
    }
    temp_v0_2 = AF(arg0, u16, 0xDC) + 1;
    AF(arg0, u16, 0xDC) = temp_v0_2;
    if ((s16) temp_v0_2 >= 0x79) {
        if (arg2 < temp_v0) {
            AF(arg0, s16, 2) = 1;
            SetScript(arg0, (s32) &D_sc02_011_801DEF38);
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_sc02_011_8018BEF0(StageActor *arg0) {
    arg0->state = 4;
    SetScript(arg0, (s32) &D_sc02_011_801DECF8);
    arg0->timer = 0x1E;
    if (arg0->unkFC == 0) {
        arg0->unkFC = 1;
        SpawnHeadMarker(arg0, -0x96);
    }
}

s32 func_sc02_011_8018BF4C(s32 arg0) {
    AF(arg0, s16, 2) = 5;
    AF(arg0, s32, 0x1C) = 0x14;
    return 0x14;
}

void func_sc02_011_8018BF60(StageActor *arg0) {
    arg0->state = 3;
    SetScript(arg0, &D_sc02_011_801DEB58);
    arg0->hitState = arg0->init->hitState;
    arg0->hitCode = 0;
    AF(arg0, s16, 0xDC) = 0;
    arg0->timer = 0x3C;
    arg0->workFE = 0;
}

void func_sc02_011_8018BFBC(u8 *arg0) {
    void *temp_v1;

    D_sc02_011_801D6FBC[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) | 0x10);
        if (IsActorFar((s32) arg0) != 0) {
            DespawnActor((s32) arg0);
        }
    }
}

void func_sc02_011_8018C040(StageActor *arg0) {
    D_sc02_011_801D6FDC[arg0->state]();
}

void func_sc02_011_8018C07C(StageActor *arg0) {
    D_sc02_011_801D7024[arg0->state]();
}

void func_sc02_011_8018C0B8(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    arg0->state = 1;
    func_8001CA88(arg0->model, (s32) &D_sc02_011_801D6FE4);
    func_80143994(arg0, 0x1000);
}

void func_sc02_011_8018C11C(s32 arg0) {
    AF(arg0, s16, 2) = 2;
    AF(arg0, s32, 0x1C) = 0x50;
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) = AF(arg0, u16, 0xFC);
    UpdateModelZYX(arg0);
    StopMotion(arg0);
    SetForwardVelocity(arg0, -0xE0000);
}

void func_sc02_011_8018C174(s32 arg0) {
    s32 temp_v0;

    if ((MoveCollidePassable(arg0) != 0) || (ActorSegmentDamagesPlayer(arg0, (s32) &D_sc02_011_801D7030, (s32) &D_800D3918, 0xA) != 0) || (temp_v0 = AF(arg0, s32, 0x1C) - 1, AF(arg0, s32, 0x1C) = temp_v0, (temp_v0 == 0))) {
        FreeActor(arg0);
    }
}

void func_sc02_011_8018C1E0(u8 *o) {
    SV8 c;
    SpawnDef d;

    if (AF(o, s32, 0x1C) == 9) {
        if (ActorSegmentDamagesPlayer(o, &D_sc02_011_801D6FA4, &D_sc02_011_801D6FA4 + 8, 10) != 0) {
            g_PlayerHitKind |= 0x800;
        }
        if (AF(o, s16, 0x70) & 0x8000) {
            FaceHelper(o, &D_sc02_011_801D6FB4, &c);
            d.kind = 0x126;
            d.flags = 0;
            d.unkC = 0x7FFF;
            d.x = c.x;
            d.y = c.y;
            d.z = c.z;
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12);
            SpawnActorFromDef(&d, o);
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12) + 0x100;
            SpawnActorFromDef(&d, o);
            d.unkE = AF(AF(o, u8 *, 0x20), u16, 0x12) - 0x100;
            SpawnActorFromDef(&d, o);
        }
        PlaySoundId(0x43E, 0);
    }
    if (TickTimer(o) != 0) {
        func_sc02_011_8018BF60(o);
    }
}

void func_sc02_011_8018C31C(u8 *arg0) {
    if (AF(arg0, s16, 0x70) & 0x8000) {
        if (DistSqToTarget(arg0) <= 0x90000) {
            func_sc02_011_8018BE00((s32) arg0);
        }
    } else {
        if (DistSqToTarget(arg0) <= 0x24000) {
            func_sc02_011_8018BE00((s32) arg0);
        }
    }
}

void func_sc02_011_8018C388(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        func_sc02_011_8018BF60(arg0);
    }
}

void func_sc02_011_8018C3C0(s32 arg0) {
    if (TickTimer(arg0) == 1) {
        if (AF(arg0, s16, 0x70) & 0x8000) {
            func_sc02_011_8018BE40(arg0, 0x40000, 0xC4000);
        } else {
            func_sc02_011_8018BE40(arg0, 0x9000, 0x24000);
        }
    }
}

void func_sc02_011_8018C424(s32 arg0) {
    s32 v;
    void *p;

    v = TurnStepToTarget(arg0, 4);
    p = AF(arg0, void *, 0x20);
    AF(p, u16, 0x12) += v;
    if (TickTimer(arg0) != 0) {
        func_sc02_011_8018BF4C(arg0);
    }
}

void func_sc02_011_8018C47C(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, &D_sc02_011_801D6EE8) != 0) {
        arg0->reactive = 1;
        arg0->reactMask = 0xFFFBFFFD;
        arg0->params = (s32 *)&D_sc02_011_801D6F1C;
        arg0->reactOpts = 1;
        arg0->model->flags |= 0x10;
        arg0->work100 = (u16)arg0->model->scale.vx;
        temp_v0 = SpawnActorArg(0x125, arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        arg0->state = 1;
        SetScript(arg0, &D_sc02_011_801DEF38);
    }
}

void func_sc02_011_8018C534(StageActor *arg0) {
    ModelObj *temp_v0;
    u16 t;

    temp_v0 = AllocActorModel();
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn((s32) arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc02_011_801D8AD8);
    t = arg0->parent->id;
    arg0->state = 1;
    arg0->workFE = 0x7FFF;
    arg0->unkFC = t;
}

void func_sc02_011_8018C5A4(StageActor *o) {
    StageActor *p;
    SV8 c;

    p = o->parent;
    if (o->workFE == 0x7FFF) {
        o->workFE = (u16)o->model->rot.vy;
    }
    if (o->unkFC != (s16)o->parent->id) {
        FreeActor(o);
        return;
    }
    AF(o->model, SV8, 0x10) = AF(p->model, SV8, 0x10);
    if ((u8 *)o->parent->script != &D_sc02_011_801DF130) {
        o->model->rot.vy = o->workFE;
        o->pos[0].w = o->parent->pos[0].w;
        o->pos[1].w = o->parent->pos[1].w;
        o->pos[2].w = o->parent->pos[2].w;
    } else {
        FaceHelper(o->parent, &D_sc02_011_801D6FD4, &c);
        o->pos[0].h.i = c.x;
        o->pos[1].h.i = c.y;
        o->pos[2].h.i = c.z;
    }
    AF(o->model, SV8, 0x18) = AF(p->model, SV8, 0x18);
    o->model->flags |= p->model->flags & 0x10;
    o->model->unk04 = (s32)p->model->unk04;
}

void func_sc02_011_8018C734(u8 *arg0) {
    D_sc02_011_801DF74C[AF(arg0, u16, 2)]();
    if (AF(arg0, u16, 0) != 0) {
        AF(arg0, u16, 0xFE) = (u16) (AF(arg0, u16, 0xFE) + 0x80);
        if (IsActorFar((s32) arg0) == 1) {
            AF(arg0, s16, 0x100) = 1;
            func_sc02_011_8018DBF4((s32) arg0);
        }
    }
}

void func_sc02_011_8018C7B8(StageActor *arg0) {
    ModelObj *temp_a0;

    if (SetupActor(arg0, (s32) &D_sc02_011_801DF598) != 0) {
        arg0->reactive = 1;
        arg0->params = &D_sc02_011_801DF6AC;
        arg0->reactMask = -0x20AD;
        arg0->workE0 = 0;
        arg0->reactOpts = (s32) ((s32)arg0->reactOpts | 1);
        SetScript(arg0, (s32) &D_sc02_011_801E2900);
        if ((u16)arg0->param & 1) {
            temp_a0 = arg0->model;
            arg0->state = 1;
            arg0->hitState = 0;
            temp_a0->unk04 = (s32) ((s32)temp_a0->unk04 | 0x80000000);
            return;
        }
        arg0->state = 3;
        arg0->ext0 = func_80143994(arg0, 0x3000);
    }
}

void func_sc02_011_8018C874(u8 *o) {
    s32 s;

    if (AF(o, s16, 0x102) == 0) {
        if (IsOnScreen(o, 0x64008C) == 0) return;
        AF(o, s16, 0x102) = 1;
    } else {
        if (TickTimer(o) == 0) return;
        if (DistSqToPlayer(o) < 0x19000) return;
    }
    AF(o, s16, 2) = 2;
    AF(o, s32, 0x1C) = 8;
    AF(o, u16, 0x5C) = 0xAA10;
    AF(AF(o, u8 *, 0x20), u16, 0x2C) |= 0x10;
    AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
    s = rcos(0x380);
    AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = s;
    s = rsin(0x380);
    AF(AF(o, u8 *, 0x20), s16, 0x1A) = s * 2 + 0x1000;
    AF(o, s32, 0xCC) = func_80143994(o, 0x3000);
}

void func_sc02_011_8018C968(s32 arg0, s32 arg1) {
    s16 temp_v0_2;
    void *temp_v0;
    void *temp_v1;

    if (TickTimer(arg0, arg1) != 0) {
        temp_v0 = AF(arg0, void *, 0x20);
        AF(temp_v0, u16, 0x2C) = (u16) (AF(temp_v0, u16, 0x2C) & 0xFFEF);
        AF(arg0, s16, 2) = 3;
        return;
    }
    temp_v0_2 = rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x1C) = temp_v0_2;
    AF(temp_v1, s16, 0x18) = temp_v0_2;
    AF(AF(arg0, void *, 0x20), s16, 0x1A) = (s16) ((rsin((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3) * 2) + 0x1000);
}

void func_sc02_011_8018CA04(StageActor *arg0) {
    arg0->state = 4;
    arg0->hitState = 0xAA10;
    SetScript((s32) arg0, (s32) &D_sc02_011_801E2900);
    arg0->timer = 0x20;
    if (arg0->workE0 != 0) {
        arg0->workE0 = 0;
        arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i + 0x30);
    }
}

void func_sc02_011_8018CA64(u8 *arg0) {
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x12) = (u16) (AF(temp_v0, u16, 0x12) + 0x40);
    if ((func_sc02_011_8018DD60() != 1) && (TickTimer((s32) arg0) != 0)) {
        AF(arg0, s16, 2) = 5;
    }
}

void func_sc02_011_8018CAC4(u8 *arg0) {
    AF(arg0, s16, 2) = 6;
    StopWithGravity((s32) arg0);
    SetForwardVelocity((s32) arg0, -0x18000);
    SetScript((s32) arg0, (s32) &D_sc02_011_801E2900);
    AF(arg0, s32, 0x1C) = 0x96;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc02_011_8018CB20(StageActor *arg0) {
    if ((func_sc02_011_8018DD60() != 1) && (func_sc02_011_8018DAA8(arg0, (s32) &D_800D3918) == 0)) {
        arg0->state = 3;
    }
}

void func_sc02_011_8018CB70(u8 *arg0) {
    AF(arg0, s16, 2) = 8;
    StopWithGravity((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc02_011_801E29F8);
    AF(arg0, s32, 0x1C) = 0x24;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc02_011_8018CBBC(u8 *arg0) {
    s32 v;
    s32 r;

    v = TurnStepToTarget(arg0, 8);
    AF(AF(arg0, u8 *, 0x20), u16, 0x12) += v;
    if (AF(arg0, s32, 0x1C) < 0x19) {
        SetForwardVelocity(arg0, -0x40000);
        r = func_sc02_011_8018DAA8(arg0, &D_800D3918);
        if (r == 0) {
            AF(arg0, s16, 2) = 9;
            return;
        }
        if (r == -1) {
            return;
        }
    }
    if (TickTimer(arg0) != 0 || DistSqToTarget(arg0) < 0x2001) {
        AF(arg0, s16, 2) = 9;
    }
}

void func_sc02_011_8018CC6C(StageActor *arg0) {
    ModelObj *temp_v1;

    temp_v1 = arg0->model;
    arg0->state = 0xA;
    arg0->hitState = 0;
    arg0->stateCount = 0;
    arg0->timer = 8;
    temp_v1->flags = (u16) (temp_v1->flags | 0x10);
}

void func_sc02_011_8018CC9C(u8 *o) {
    SV8 c;
    u8 *r;
    u8 *q;
    s32 s;

    switch (AF(o, u16, 0x34)) {
    case 0:
        if (TickTimer(o) != 0) {
            AF(o, s16, 0x34) = 1;
            AF(o, s32, 0x1C) = 0x1E;
            AF(AF(o, u8 *, 0x20), s32, 4) |= 0x80000000;
            AF(o, s16, 0xE4) = 3;
            return;
        }
        s = rsin((AF(o, s32, 0x1C) << 10) >> 3);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = s;
        s = rcos((AF(o, s32, 0x1C) << 10) >> 3);
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = s * 2 + 0x1000;
        return;
    case 1:
        if (--AF(o, s16, 0xE4) == 0) {
            c.x = AF(o, u16, 6);
            c.y = AF(o, u16, 0xA) - 0x38;
            c.z = AF(o, u16, 0xE);
            r = SpawnKind1CAt(&c);
            if (r != 0) {
                q = AF(r, u8 *, 0xCC);
                if (q != 0) {
                    AF(q, s16, 0x18) = AF(q, s16, 0x1A) = 0x5000;
                }
            }
            AF(o, s16, 0x34) = 2;
        }
    case 2:
        if (TickTimer(o) != 0) {
            AF(o, s16, 0x34) = 3;
            AF(AF(o, u8 *, 0x20), s32, 4) &= 0x7FFFFFFF;
            func_sc02_011_8018D8B8(o);
            AF(o, s32, 0x1C) = 8;
            AF(o, u16, 0x5C) = 0xAA10;
        }
        return;
    case 3:
        if (TickTimer(o) != 0) {
            AF(AF(o, u8 *, 0x20), u16, 0x2C) &= 0xFFEF;
            AF(o, s16, 2) = 0xB;
            return;
        }
        s = rcos((AF(o, s32, 0x1C) << 10) >> 3);
        AF(AF(o, u8 *, 0x20), s16, 0x18) = AF(AF(o, u8 *, 0x20), s16, 0x1C) = s;
        s = rsin((AF(o, s32, 0x1C) << 10) >> 3);
        AF(AF(o, u8 *, 0x20), s16, 0x1A) = s * 2 + 0x1000;
        return;
    }
}

void func_sc02_011_8018CEB0(u8 *arg0) {
    AF(arg0, s16, 2) = 0xC;
    StopWithGravity((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc02_011_801E2AD0);
    AF(arg0, s32, 0x1C) = 0x1A;
    AF(arg0, s16, 0xE6) = 0;
    StopWithGravity((s32) arg0);
}

void func_sc02_011_8018CF04(u8 *arg0) {
    s32 r;
    u8 *p;
    s32 s;

    r = TurnStepToTarget(arg0, 8);
    p = AF(arg0, u8 *, 0x20);
    s = AF(p, u16, 0x12) + r;
    AF(p, u16, 0x12) = s;
    SetForwardVelocity(arg0, -0x40000, s);
    if (func_sc02_011_8018DAA8(arg0, &D_800D3918) != -1) {
        if (TickTimer(arg0) != 0) {
            if (DistSqToTarget(arg0) <= 0x7000) {
                AF(arg0, s16, 2) = 0xD;
            } else {
                AF(arg0, s16, 2) = 3;
            }
        } else if (DistSqToTarget(arg0) <= 0x3000) {
            AF(arg0, s16, 2) = 0xD;
        }
    }
}

void func_sc02_011_8018CFAC(StageActor *arg0) {
    arg0->state = 0xE;
    SetScript((s32) arg0, (s32) &D_sc02_011_801E2BA8);
    arg0->timer = 0x5A;
    AF(arg0, s16, 0xDC) = 0;
    arg0->workFE = 0;
}

void func_sc02_011_8018CFF4(u8 *arg0) {
    if (DistSqToTarget(arg0) > 0x14400) {
        AF(arg0, s16, 2) = 7;
        return;
    }
    if (AF(arg0, s32, 0x1C) >= 0x16) {
        AF(AF(arg0, u8 *, 0x20), u16, 0x12) += TurnStepToTarget(arg0, 8);
    }
    if (AF(arg0, s32, 0x1C) == 0x15) {
        PlaySoundId(0x522, 0);
    }
    if (AF(arg0, s32, 0x1C) == 0x15 || AF(arg0, s32, 0x1C) == 0xB || AF(arg0, s32, 0x1C) == 1) {
        func_sc02_011_8018D720(arg0);
    }
    if (TickTimer(arg0) != 0) {
        AF(arg0, s16, 2) = 3;
    }
}

void func_sc02_011_8018D0C8(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 2) = 0x10;
    UpdateModelZYX((s32) arg0, arg1);
    StopWithGravity((s32) arg0);
    SetForwardVelocity((s32) arg0, -0x30000);
    SetScript((s32) arg0, (s32) &D_sc02_011_801E29F8);
    AF(arg0, s32, 0x1C) = 0x1A;
    AF(arg0, s16, 0xE6) = 0;
}

void func_sc02_011_8018D128(u8 *arg0, s32 arg1) {
    if (AF(arg0, s16, 0xAA) <= 0) {
        AF(arg0, s16, 2) = 3;
        return;
    }
    if (TickTimer((s32) arg0, arg1) != 0) {
        SetScript((s32) arg0, (s32) &D_sc02_011_801E29F8);
        AF(arg0, s32, 0x1C) = 0x1A;
    }
    func_sc02_011_8018DAA8((s32) arg0, (s32) &D_800D3918);
}

void func_sc02_011_8018D19C(u8 *arg0) {
    u16 temp_v1;
    void *temp_a1;
    void *temp_v1_2;

    temp_a1 = AF(arg0, void *, 0x20);
    temp_v1 = AF(temp_a1, u16, 0x2C);
    if (temp_v1 & 0x10) {
        AF(temp_a1, u16, 0x2C) = (u16) (temp_v1 & 0xFFEF);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, s16, 0x1C) = 0x1000;
        AF(temp_v1_2, s16, 0x1A) = 0x1000;
        AF(temp_v1_2, s16, 0x18) = 0x1000;
    }
}

void func_sc02_011_8018D1D8(Mover *arg0) {
    arg0->state = 0xF;
    arg0->model->rot.vy = (s16) ((HeadingToTarget((s32) arg0) + 0x800) & 0xFFF);
}

void func_sc02_011_8018D218(StageActor *arg0) {
    u16 temp_v1;
    ModelObj *temp_a0;
    ModelObj *temp_v1_2;

    temp_a0 = arg0->model;
    temp_v1 = temp_a0->flags;
    if (temp_v1 & 0x10) {
        temp_a0->flags = (u16) (temp_v1 & 0xFFEF);
        temp_v1_2 = arg0->model;
        temp_v1_2->scale.vz = 0x1000;
        temp_v1_2->scale.vy = 0x1000;
        temp_v1_2->scale.vx = 0x1000;
    }
    TakeDamageAndRecoil((s32) arg0);
    SetScript((s32) arg0, (s32) &D_sc02_011_801E3018);
}

void func_sc02_011_8018D288(u8 *arg0) {
    s16 var_v0;
    u16 temp_v1_3;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((AF(arg0, u16, 0x62) + 0x800) & 0xFFF);
    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, s16, 0x14) = 0;
    AF(temp_v0, s16, 0x10) = 0;
    StopWithGravity((s32) arg0);
    temp_v1 = AF(arg0, void *, 0x20);
    AF(arg0, u8, 0xC2) = 0;
    AF(arg0, u8, 0xC3) = 0;
    AF(arg0, s16, 0x98) = 0;
    AF(arg0, s32, 0x1C) = 0;
    AF(temp_v1, u16, 0x2C) = (u16) (AF(temp_v1, u16, 0x2C) & 0xFFEF);
    temp_v1_2 = AF(arg0, void *, 0x20);
    AF(temp_v1_2, s16, 0x1C) = 0x1000;
    AF(temp_v1_2, s16, 0x1A) = 0x1000;
    AF(temp_v1_2, s16, 0x18) = 0x1000;
    temp_v1_3 = AF(arg0, u16, 0x5E);
    if ((temp_v1_3 == 9) || (temp_v1_3 == 0x1C)) {
        SetLocalVelocity((s32) arg0, (s32) &D_sc02_011_801DF790);
        var_v0 = 0xCC;
    } else {
        SetLocalVelocity((s32) arg0, (s32) &D_sc02_011_801DF79C);
        var_v0 = 0x100;
    }
    AF(arg0, s16, 0xDE) = var_v0;
    SetScript((s32) arg0, (s32) &D_sc02_011_801E3098);
}

void func_sc02_011_8018D370(u8 *o) {
    s32 r;

    if (AF(o, u8, 0xC2) == 0) {
        DamageActorsNear(o, 0x50, AF(AF(o, u8 *, 0x20), s16, 0x12) + 0x800, 0x1D);
        AF(AF(o, u8 *, 0x20), u16, 0x10) -= AF(o, u16, 0xDE);
        if (++AF(o, s32, 0x1C) >= 0x29) {
            SetReactionStep(o, 0xD);
            return;
        }
        r = MoveCollidePassableAt(o, &D_sc02_011_801DF7A8);
        if (r & 0x2000) {
            if ((r & 0xFF) == 2) {
                SetReactionStep(o, 0x12);
                return;
            }
            if (AF(o, s16, 0x76) <= 0) {
                SetReactionStep(o, 6);
                return;
            }
            AF(o, u8, 0xC1) = 0;
            AF(o, s16, 0x5E) = 0;
            AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
            AF(o, s16, 2) = 3;
            AF(o, s32, 0xE0) = 1;
        } else if (r & 0x4000) {
            AF(o, u8, 0xC2)++;
            AF(AF(o, u8 *, 0x20), s16, 0x10) = 0;
            StopWithGravity(o);
            AF(o, s32, 0x1C) = 0;
        }
    } else {
        r = MoveOnGround(o);
        if (r & 0x2000) {
            if ((r & 0xFF) == 2) {
                SetReactionStep(o, 0x12);
                return;
            }
            if (AF(o, s16, 0x76) <= 0) {
                SetReactionStep(o, 6);
            } else {
                AF(o, s16, 2) = 3;
                AF(o, u8, 0xC1) = 0;
                AF(o, s16, 0x5E) = 0;
                AF(o, s32, 0xE0) = 1;
            }
        }
        if ((AF(o, s32, 0x1C) & 3) == 3) {
            SpawnKind1C(o, 1);
        }
        if (++AF(o, s32, 0x1C) >= 0x3D) {
            SetReactionStep(o, 0xD);
        }
    }
}

void func_sc02_011_8018D52C(StageActor *arg0) {
    arg0->hitState = 0;
    arg0->model->rot.vx = 0;
    arg0->stateCount = 0;
    HideModel();
    SetScript((s32) arg0, (s32) &D_sc02_011_801DF69C);
}

void func_sc02_011_8018D574(StageActor *o) {
    SV8 v;
    s32 r;
    s32 i;
    s32 a;
    s32 base;
    s32 t;
    s32 *rp;

    i = 0;
    if (o->stateCount != 0) {
        if (TickTimer() != 0) {
            GiveItem(0xA);
            DropItem(o);
            func_sc02_011_8018DBF4(o);
        }
        return;
    }
    rp = &r;
    for (; i < 10; i++) {
        AngleToVec2(rp, rand() % 0x1000, rand() % 0x30);
        t = r;
        v.x = (u16)o->pos[0].h.i + t;
        a = rand() % 0x18;
        base = o->pos[1].h.i - 0x34;
        v.y = (rand() & 1) ? base + a : base - a;
        v.z = (u16)o->pos[2].h.i + (t >> 16);
        SpawnKind1CAt(&v);
    }
    o->timer = 0x10;
    o->stateCount++;
    for (i = 0; i < 3; i++) {
        SpawnActorArg(0x240, i, o);
    }
}

void func_sc02_011_8018D720(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;

    gte_SetRotMatrix(AF(o, u8 *, 0x20) + 0x34);
    gte_SetTransMatrix(AF(o, u8 *, 0x20) + 0x34);
    RotTransSV(&D_sc02_011_801DF68C, &a, &f);
    RotTransSV(&D_sc02_011_801DF694, &b, &f);
    func_sc02_011_8018D820(AF(AF(o, u8 *, 0x20), s16, 0x12), &a, AF(o, s16, 0xDC));
    func_sc02_011_8018D820(AF(AF(o, u8 *, 0x20), s16, 0x12), &b, AF(o, s16, 0xDC));
    if (++AF(o, s16, 0xDC) >= 3) {
        AF(o, s16, 0xDC) = 2;
    }
}

s32 func_sc02_011_8018D820(s32 arg0, s32 arg1, s32 arg2) {
    u8 *o;
    u8 *a;
    s16 h = arg0;

    o = (u8 *)SpawnPropAt(0x17, arg1);
    if (o == 0) {
        return 0;
    }
    a = AF(o, u8 *, 0x20);
    func_8001CD50(a, D_sc02_011_801DF5CC[arg2]);
    AF(a, s16, 0x1E) = 0xC00;
    AF(a, s16, 0x1A) = 0x1000;
    AF(a, s16, 0x18) = 0x1000;
    AF(a, s16, 0x12) = h;
    AF(a, s32, 4) |= 0x40000000;
    return (s32)o;
}

void func_sc02_011_8018D8B8(u8 *o) {
    V3 d;
    V3 out;
    SV8 a;
    SV8 b;
    SV8 unused;
    WMtx m;
    V3 pos;

    StopWithGravity(o);
    a.x = AF(o, u16, 0x3A);
    a.y = AF(o, u16, 0x3E);
    a.z = AF(o, u16, 0x42);
    if (func_sc02_011_8018DDD0(o) == 0) {
        AF(o, s16, 6) = AF(o, s16, 0x88);
        AF(o, s16, 0xA) = AF(o, s16, 0x8A);
        AF(o, s16, 0xE) = AF(o, s16, 0x8C);
        return;
    }
    AF(o, s16, 6) = g_PlayerTarget;
    AF(o, s16, 0xA) = D_80126CB6;
    AF(o, s16, 0xE) = D_80126CB8;
    d.z = 0xFF600000;
    d.x = d.y = 0;
    m = GsIDMATRIX;
    RotMatrixY(AF(g_PlayerModel, s16, 0x12), &m);
    pos.y = AF(o, s32, 8);
    do {
        pos.x = AF(o, s32, 4);
        pos.z = AF(o, s32, 0xC);
        ApplyMatrixLV(&m, &d, &out);
        pos.x += out.x;
        pos.z += out.z;
        b.x = AF(&pos, s16, 2);
        b.y = AF(&pos, s16, 6);
        b.z = AF(&pos, s16, 0xA);
        if (func_sc02_011_8018DE30(&a, &b) == 1) {
            AF(o, s16, 6) = b.x;
            AF(o, s16, 0xA) = b.y;
            AF(o, s16, 0xE) = b.z;
            AF(o, s32, 0x14) = 0;
            goto end;
        }
        d.z >>= 1;
    } while (-d.z > 0xFFFF);
    RestorePrevPos(o);
end:
    AF(AF(o, u8 *, 0x20), s16, 0x12) = HeadingToTarget(o);
}

s32 func_sc02_011_8018DAA8(u8 *o) {
    s32 r;
    s32 t;
    s32 i;
    u8 *p;

    t = MoveOnGroundOfs(o);
    if ((t & 0xFF) == 2) {
        SetReactionStep(o, 0x12);
        return -1;
    }
    if (t != 0x2000) {
        RestorePrevPos(o);
        return 0;
    }
    p = (u8 *) &g_Actors;
    for (i = 0; i < 0x60; i++, p += 0x10C) {
        if (AF(p, u16, 0) != 0 && AF(o, u16, 0) == AF(p, u16, 0) && o != p && DistSq(o + 4, p + 4) < 0x1000) {
            AF(o, s32, 4) = AF(o, s32, 0x38);
            AF(o, s32, 8) = AF(o, s32, 0x3C);
            AF(o, s32, 0xC) = AF(o, s32, 0x40);
            AngleToVec2(&r, HeadingTo(o + 4, p + 4), 0x41);
            {
                s32 d = r;
                AF(o, s32, 4) = AF(p, s32, 4);
                AF(o, s32, 0xC) = AF(p, s32, 0xC);
                AF(o, s16, 6) += d;
                AF(o, s16, 0xE) += d >> 16;
            }
            break;
        }
    }
    return 1;
}

void func_sc02_011_8018DBF4(s32 arg0) {
    StageActor *temp_a0_2;
    u16 temp_v1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1_2;

    if (AF(arg0, s16, 0x100) == 0) {
        GainStat0FromActor();
    }
    if (AF(arg0, u8, 0xC1) == 0xE) {
        GiveItem(0xA);
    }
    temp_v1 = AF(arg0, u16, 0x70);
    if (temp_v1 & 1) {
        if (!(temp_v1 & 0x8000)) {
            if (AF(arg0, u8, 0xC1) != 0) {
                temp_a0 = AF(arg0, void *, 0x20);
                AF(arg0, u8, 0xC1) = 0U;
                AF(arg0, s16, 2) = 1;
                AF(temp_a0, s32, 4) = (s32) (AF(temp_a0, s32, 4) | 0x80000000);
                AF(arg0, s16, 0x5E) = 0;
                AF(arg0, s16, 0x5C) = 0;
                AF(arg0, u16, 0x76) = (u16) *AF(arg0, u16 *, 0x78);
                temp_v0 = AF(arg0, void *, 0x20);
                AF(temp_v0, s16, 0x14) = 0;
                AF(temp_v0, s16, 0x12) = 0;
                AF(temp_v0, s16, 0x10) = 0;
                AF(arg0, s32, 0x1C) = 0x40;
                AF(arg0, s16, 0xAA) = 0;
                AF(arg0, u16, 6) = (u16) AF(arg0, u16, 0x88);
                AF(arg0, u16, 0xA) = (u16) AF(arg0, u16, 0x8A);
                AF(arg0, u16, 0xE) = (u16) AF(arg0, u16, 0x8C);
                SetScript(arg0, (s32) &D_sc02_011_801E2900);
                temp_a0_2 = AF(arg0, s32, 0xCC);
                if (temp_a0_2 != 0) {
                    FreeShadow(temp_a0_2);
                }
                UpdateModelZYX(arg0);
                return;
            }
            goto block_10;
        }
        goto block_14;
    }
block_10:
    if (!((s16) AF(arg0, u16, 0x70) & 0x8000)) {
        temp_v1_2 = AF(arg0, void *, 0x68);
        if ((temp_v1_2 != NULL) && (AF(arg0, s16, 0x72) & 0x8000)) {
            AF(temp_v1_2, u16, 0xA) = (u16) (AF(temp_v1_2, u16, 0xA) & 0x7FFF);
        }
    }
block_14:
    FreeActor(arg0);
}

s32 func_sc02_011_8018DD60(Mover *arg0) {
    s32 d = DistSqToTarget(arg0);

    if (d <= 0x2000 || (d <= 0x24000 && TargetInFront(arg0, 0x400) != 0)) {
        arg0->state = 7;
        return 1;
    }
    return 0;
}

s32 func_sc02_011_8018DDD0(u8 *o) {
    V3 v;

    v.x = AF(o, s16, 6) - AF(o, s16, 0x88);
    v.y = 0;
    v.z = AF(o, s16, 0xE) - AF(o, s16, 0x8C);
    Square0(&v, &v);
    return v.x + v.z < 0x190000;
}

s32 func_sc02_011_8018DE30(s32 a, s16 *b) {
    SV8 p;
    SV8 q;
    SV8 r;

    if (TraceMap(1, a, b) & 0x8000) {
        return 0;
    }
    p.x = b[0];
    p.y = b[1];
    p.z = b[2];
    if (FindGround(&p) != 0) {
        q.x = p.x;
        q.y = p.y;
        q.z = p.z;
        r.x = p.x;
        r.y = p.y + 8;
        r.z = p.z;
        if (!(TraceMap(1, &q, &r) & 0x2000) || AF(&r, u8, 6) != 2) {
            b[1] = p.y;
            return 1;
        }
        return 0;
    }
    return 0;
}

void func_sc02_011_8018DF08(u8 *arg0) {
    D_sc02_011_801DF7B0[AF(arg0, u16, 2)]();
}

void func_sc02_011_8018DF44(u8 *o) {
    WMtx m;
    V3 v;

    v.y = 0;
    v.x = 0;
    if (g_Daytime == 0) {
        v.z = -0x48000;
    } else {
        v.z = -0x18000;
    }
    AF(o, s16, 0x2C) = 0x3C;
    AF(o, s16, 2) = 1;
    m = GsIDMATRIX;
    RotMatrixY(AF(AF(o, u8 *, 0x20), s16, 0x12), &m);
    ApplyMatrixLV(&m, &v, o + 0x10);
}

void func_sc02_011_8018E014(u8 *arg0) {
    u16 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (D_801270C0 != 2) {
        func_sc02_011_8018E0AC();
        temp_v0 = AF(arg0, u16, 0x2C);
        AF(arg0, u16, 0x2C) = (u16) (temp_v0 - 1);
        if ((s16) (temp_v0) < 0) {
            FreeProp((s32) arg0);
            return;
        }
        temp_v1 = AF(arg0, void *, 0x20);
        AF(temp_v1, u16, 0x18) = (u16) (AF(temp_v1, u16, 0x18) + 0x100);
        temp_v1_2 = AF(arg0, void *, 0x20);
        AF(temp_v1_2, u16, 0x1A) = (u16) (AF(temp_v1_2, u16, 0x1A) + 0x100);
        MoveProp((s32) arg0);
    }
}

s32 func_sc02_011_8018E0AC(u8 *o) {
    SV8 dir;
    SV8 pos;
    s32 flag;
    Player *pl;
    u8 *g;

    pl = &g_Player;
    g = &g_Status;
    flag = 0;
    if (PlayerFlag400() != 0) {
        if (g_Daytime != 0) {
            return 0;
        }
        flag = 1;
    }
    if (func_sc02_011_8018E208(o) == 0) {
        return 0;
    }
    pos.x = pl->pos[0].h.i;
    pos.y = pl->pos[1].h.i;
    pos.z = pl->pos[2].h.i;
    dir.x = pos.x - AF(o, s16, 6);
    dir.y = pos.y - AF(o, s16, 0xA);
    dir.z = pos.z - AF(o, s16, 0xE);
    VectorNormalSS(&dir, &dir);
    pos.y -= 0x20;
    if (flag == 0) {
        HitPlayer(1, 0x5001, 0, (AF(g, u8, 0x36) ^ 1) * 10, &pos, &dir);
    } else {
        HitPlayer(1, 0x4001, 0, 10, &pos, &dir);
    }
    pl->hitAngle = AF(AF(o, u8 *, 0x20), u16, 0x12);
    return 1;
}

s32 func_sc02_011_8018E208(u8 *o) {
    WMtx m;
    SV8 a;
    SV8 b;
    s32 f;
    u8 *q;
    Player *pl;
    s32 i;

    pl = &g_Player;
    q = AF(o, u8 *, 0x20);
    func_80020DA4(q + 0x10, &m);
    func_80020F34(&m, q + 0x18);
    m.t[0] = AF(q, s16, 8);
    m.t[1] = AF(q, s16, 0xA);
    m.t[2] = AF(q, s16, 0xC);
    for (i = 0; i < 4; i++) {
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        RotTransSV(&D_sc02_011_801DF7B8[i], &a, &f);
        RotTransSV(&D_sc02_011_801DF7B8[i + 4], &b, &f);
        if (PathHitsModel(pl->model, pl->hitData, &a, &b) != 0) {
            return 1;
        }
    }
    return 0;
}

void func_sc02_011_8018E358(StageActor *arg0) {
    D_sc02_011_801DF818[arg0->state]();
}

void func_sc02_011_8018E394(StageActor *arg0) {
    arg0->state = 1;
    arg0->timer = 2;
    AF(arg0, u8, 0xFC) = 1;
    AF(arg0, u8, 0xFE) = 2;
    AF(arg0, u8, 0xFD) = 0;
    AF(arg0, u8, 0xFF) = 4;
    AF(arg0, s16, 0xDC) = 0;
}

void func_sc02_011_8018E3C8(s32 arg0, s32 arg1) {
    if (TickTimer(arg0, arg1) != 0) {
        func_sc02_011_8018E420(0, arg0 + 0xFD);
        func_sc02_011_8018E420(1, arg0 + 0xFE);
        func_sc02_011_8018E420(2, arg0 + 0xFF);
        AF(arg0, s32, 0x1C) = 2;
    }
}

void func_sc02_011_8018E420(s32 arg0, u8 *arg1) {
    s32 pad[1];
    s32 *p;

    if (*arg1 >= 7) {
        *arg1 = 0;
    }
    p = D_sc02_011_801DF5CC[arg0];
    *p++ = D_sc02_011_801DF7F8[*arg1];
    if (*arg1 - 1 < 0) {
        *p = D_sc02_011_801DF7F8[6];
    } else {
        *p = D_sc02_011_801DF7F8[*arg1 - 1];
    }
    (*arg1)++;
}

void func_sc02_011_8018E4BC(StageActor *arg0) {
    D_sc02_011_801DF84C[arg0->state]();
}

void func_sc02_011_8018E4F8(StageActor *o) {
    WMtx m;
    SV8 v;
    ModelObj *p;

    p = (u8 *) AllocActorModel();
    o->model = p;
    if (p == 0) {
        RejectSpawn(o);
        return;
    }
    InitModel(p, D_sc02_011_801DF820[(u16)o->param & 0xF]);
    o->timer = 8;
    o->state++;
    GetPartWorldMatrix(o->parent, D_sc02_011_801DF82C[(u16)o->param & 0xF], &m);
    LocalToWorld(&m, &D_sc02_011_801DF844, &v);
    o->pos[0].h.i = v.x;
    o->pos[1].h.i = v.y;
    o->pos[2].h.i = v.z;
    o->model->rot.vy = o->parent->model->rot.vy;
}

void func_sc02_011_8018E5E4(u8 *o) {
    s32 r;
    s32 t;

    if (TickTimer(o) != 0) {
        AF(o, u16, 2)++;
        r = rand();
        t = ((s32 *)&D_sc02_011_801DF838)[AF(o, u16, 0x70) & 0xF] + r % 1024;
        AF(o, s32, 0x1C) = 0x100;
        AF(o, s32, 0x48) = t;
        AF(o, s32, 0xE0) = rand();
    }
}

void func_sc02_011_8018E678(u8 *p) {
    V4 in;
    V4 out;
    u8 *o;

    if ((AF(p, u16, 0x70) & 0xF) == 2) {
        AF(AF(p, u8 *, 0x20), u16, 0x10) -= 0x10;
        o = AF(p, u8 *, 0x20);
        if (AF(o, s16, 0x10) < -0x400) {
            AF(o, s16, 0x10) = -0x400;
        }
    } else {
        in.x = rcos((AF(p, s32, 0xE0) << 6) & 0xFC0) << 8;
        in.y = 0;
        in.z = 0;
        ApplyMatrixLV(AF(p, u8 *, 0x20) + 0x34, &in, &out);
        AF(p, u16, 0x50) = (u32)out.x >> 16;
        AF(p, u16, 0x54) = (u32)out.z >> 16;
        AF(p, s32, 0xE0)++;
    }
    if (MoveCollidePassable(p) != 0) {
        AF(p, s32, 0x1C) = 0x20;
        AF(p, u16, 2)++;
    } else if (TickTimer(p) != 0) {
        FreeActor(p);
    }
}

void func_sc02_011_8018E780(u8 *arg0, s32 arg1) {
    s16 temp_v0_2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (AF(arg0, u16, 0x34) == 0) {
        if ((AF(arg0, u16, 0x70) & 0xF) == 2) {
            temp_v0 = AF(arg0, void *, 0x20);
            AF(temp_v0, u16, 0x10) = (u16) (AF(temp_v0, u16, 0x10) - 0x80);
            temp_v1 = AF(arg0, void *, 0x20);
            if ((s16) AF(temp_v1, u16, 0x10) < -0x400) {
                AF(temp_v1, s16, 0x10) = -0x400U;
            }
        }
        if (TickTimer((s32) arg0, arg1) != 0) {
            AF(arg0, s32, 0x1C) = 8;
            temp_v1_2 = AF(arg0, void *, 0x20);
            AF(arg0, u16, 0x34) = (u16) (AF(arg0, u16, 0x34) + 1);
            AF(temp_v1_2, u16, 0x2C) = (u16) (AF(temp_v1_2, u16, 0x2C) | 0x10);
        }
    } else {
        if (TickTimer((s32) arg0, arg1) != 0) {
            FreeActor((s32) arg0);
            return;
        }
        temp_v0_2 = rsin((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3);
        temp_v1_3 = AF(arg0, void *, 0x20);
        AF(temp_v1_3, s16, 0x1C) = temp_v0_2;
        AF(temp_v1_3, s16, 0x18) = temp_v0_2;
        AF(AF(arg0, void *, 0x20), s16, 0x1A) = (s16) ((rcos((s32) (AF(arg0, s32, 0x1C) << 0xA) >> 3) * 8) + 0x1000);
    }
}

void func_sc02_011_8018E8A0(StageActor *arg0) {
    VEC_8E8A0 v;
    PRIM_8E8A0 p;
    MAT_8E8A0 m;
    SV_8E8A0 rot;
    s32 s;
    s32 i, j;
    s32 a, b, ang, c;
    s32 col;
    SV_8E8A0 *src;
    SV_8E8A0 *dst;
    POS_8E8A0 *pos;

    arg0->model->rot.vz += 0x40;
    UpdateModelRot();
    v.z = 0xFFFC0000;
    rot.z = 0;
    col = D_sc02_011_801DF7F8[arg0->work10A++ & 7];
    p.code = 0x50000000;
    *(s32 *)&p.col[0] = col;
    *(s32 *)&p.col[1] = col;
    *(s32 *)&p.col[2] = col;
    *(s32 *)&p.col[3] = col;
    for (i = 0, pos = (POS_8E8A0 *)((u8 *)arg0 + 0xCC); i < ((s16 *)arg0)[0x108 / 2]; i++, pos++) {
        a = arg0->timer - i * 4;
        if (a > 0x40) {
            if (i == 4) {
                FreeActor(arg0);
                return;
            }
            continue;
        }
        b = a << 6;
        ang = b & 0xFFF;
        s = (rsin(ang) << 4) >> 12;
        switch (arg0->param) {
        case 0:
            c = rcos(ang);
             v.x = 0;
             v.y = (c << 4) * s;
             rot.x = -ratan2(v.y, v.z);
             rot.y = 0;
            break;
        case 1:
            c = rcos((b + 0x800) & 0xFC0);
             v.x = 0;
             v.y = (c << 4) * s;
             rot.x = -ratan2(v.y, v.z);
             rot.y = 0;
            break;
        case 2:
            c = rcos(ang);
             v.y = 0;
             rot.x = 0;
             v.x = (c << 4) * s;
             rot.y = ratan2(-v.z, v.x) - 0x400;
            break;
        case 3:
            c = rcos((b + 0x800) & 0xFC0);
             v.y = 0;
             rot.x = 0;
             v.x = (c << 4) * s;
             rot.y = ratan2(-v.z, v.x) - 0x400;
            break;
        }
        RotMatrixZYX(&rot, &m);
        pos->x += v.x;
        pos->y += v.y;
        pos->z += v.z;
        m.t[0] = pos->x >> 16;
        m.t[1] = pos->y >> 16;
        m.t[2] = pos->z >> 16;
        src = D_sc02_011_801DF85C[arg0->param / 2];
        dst = p.pt;
        gte_SetRotMatrix(&m);
        gte_SetTransMatrix(&m);
        for (j = 0; j < 4; j++, src++, dst++) {
            RotTransSV(src, dst, &s);
        }
        DrawPrimG4Mtx(&p, (u8 *)arg0->model + 0x34);
    }
    if ((++arg0->timer & 3) == 0 && arg0->work108 < 5) {
        arg0->work108++;
    }
}

void func_sc02_011_8018EBEC(u8 *arg0) {
    D_sc02_011_801DF89C[AF(arg0, u16, 2)]();
}

void func_sc02_011_8018EC28(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AllocActorModel(arg0);
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, 0);
    AF(AF(arg0, s32, 0x20), u16, 0x12) = (u16) AF(AF(AF(arg0, void *, 0x64), void *, 0x20), u16, 0x12);
    UpdateModelZYX(arg0);
    AF(arg0, s16, 0x108) = 1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_sc02_011_8018ECA8(StageActor *arg0) {
    D_sc02_011_801E33D8[arg0->state]();
}

void func_sc02_011_8018ECE4(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor(arg0, (s32) &D_sc02_011_801E30C8) != 0) {
        if (!(GetFlag(D_sc02_011_801E3130[AF(arg0->message, u16, 0xA)]) & 0xFF)) {
            arg0->ext0 = SpawnTalkMarker(arg0, (s32) &func_sc02_011_8018F390);
        } else {
            arg0->param = (u16) ((u16)arg0->param | 0x4000);
        }
        temp_v0 = SpawnActorArg(0x8F, (s32) (s16) (u16)arg0->param, arg0);
        arg0->link = temp_v0;
        if (temp_v0 == 0) {
            RejectSpawn(arg0);
            return;
        }
        SetScript(arg0, (s32) &D_sc02_011_8019105C);
        arg0->state = 1;
    }
}

void func_sc02_011_8018EDB8(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc02_011_8018EDE0(void) {
}

void func_sc02_011_8018EDE8(StageActor *arg0) {
    s32 *var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg0->message;
    if (!(AF(temp_s0, u16, 8) & 0x8000)) {
        if (GetFlag(0x1D) & 0xFF) {
            D_sc02_011_801E3314 = AF(temp_s0, s32, 4);
            if (!(AF(temp_s0, u16, 8) & 0x4000)) {
                var_v0 = D_sc02_011_801E3278[AF(temp_s0, u16, 0xC)];
                goto block_6;
            }
            D_sc02_011_801E3300 = 0;
            SetFlag(D_sc02_011_801E3278[AF(temp_s0, u16, 0xC)], 1);
            D_sc02_011_801E32FC = 2;
        } else {
            D_sc02_011_801E3314 = AF(temp_s0, s32, 0);
            var_v0 = D_sc02_011_801E31F4[AF(temp_s0, u16, 0xC)];
block_6:
            D_sc02_011_801E32FC = 0;
            D_sc02_011_801E3300 = var_v0;
        }
        RunScript((s32) arg0, (s32) &D_sc02_011_801E3328);
    } else {
        var_a1 = &D_sc02_011_801E3394;
        *var_a1 = AF(temp_s0, s32, 0);
        RunScript((s32) arg0, (s32) (var_a1 - 7));
    }
    arg0->state = 4;
    arg0->param = (u16) ((u16)arg0->param | 0x8000);
}

void func_sc02_011_8018EF34(StageActor *arg0) {
    void *temp_s2;

    temp_s2 = arg0->message;
    if (UpdateScript((s32) arg0) != 0) {
        EndEvent((s32) arg0);
        if (GetFlag(D_sc02_011_801E3130[AF(temp_s2, u16, 0xA)]) & 0xFF) {
            if (D_sc02_011_801E3130[AF(temp_s2, u16, 0xA)] == 0x54) {
                SetProgress(0x5A);
                SetFlag(0xEA, 1);
            }
            if ((AF(temp_s2, u16, 8) & 0x4000) && (GetFlag(0x1D) & 0xFF)) {
                UploadFlagImages(0);
            }
            if (func_sc02_011_8018F138() == 1) {
                GiveItem(0x26);
            }
            arg0->param = (u16) ((u16)arg0->param & 0x8000);
            FreeActor(arg0->ext0);
        }
        arg0->state = 2;
    }
}

void func_sc02_011_8018F054(StageActor *arg0) {
    arg0->state = 2;
    FreeActor(arg0->ext0);
}

void func_sc02_011_8018F080(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc02_011_8018F090(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

void func_sc02_011_8018F0A0(u8 *arg0) {
    SetFlag(D_sc02_011_801E3130[AF(AF(arg0, void *, 0xDC), u16, 0xA)], 1);
}

void func_sc02_011_8018F0E0(u8 *arg0) {
    AddMoney((s32) &g_Player, (s32) AF(AF(arg0, void *, 0xDC), u16, 0xC));
}

s32 func_sc02_011_8018F114(void) {
    return func_80174764() == 1;
}

s32 func_sc02_011_8018F138(void) {
    s32 i;

    for (i = 0; i < 0x26; i++) {
        if (!(GetFlag(D_sc02_011_801E3130[i]) & 0xFF)) {
            return 0;
        }
    }
    return 1;
}

void func_sc02_011_8018F19C(StageActor *arg0) {
    D_sc02_011_801E3400[arg0->state]();
}

void func_sc02_011_8018F1D8(StageActor *arg0) {
    if (SetupActor(arg0, (s32) &D_sc02_011_801E30FC) != 0) {
        arg0->unkFC = (u16) arg0->parent->id;
        if ((u16)arg0->param & 0x4000) {
            SetScript(arg0, (s32) &D_sc02_011_801E3AC0);
            arg0->hitState = 0;
        } else {
            SetScript(arg0, (s32) &D_sc02_011_801E38A0);
        }
        arg0->state = 1;
    }
}

void func_sc02_011_8018F260(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->unkFC != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_011_801E38B0);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 2;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_011_801E39B8);
        arg0->hitState = 0x8C00;
    }
}

void func_sc02_011_8018F320(StageActor *arg0) {
    s32 f;

    if (arg0->animTimer == 0) {
        f = arg0->workFE;
        arg0->state = 1;
        if (f == 1) {
            SetScript((s32) arg0, (s32) &D_sc02_011_801E3AC0);
        } else {
            SetScript((s32) arg0, (s32) &D_sc02_011_801E38A0);
        }
        arg0->workFE = 0;
    }
}

s32 *func_sc02_011_8018F390(u8 *o) {
    SV8 a;
    SV8 b;
    s32 f;
    Mover *p;
    s32 *r;

    p = AF(o, u8 *, 0x64);
    gte_SetRotMatrix((u8 *) g_PlayerModel + 0x34);
    gte_SetTransMatrix((u8 *) g_PlayerModel + 0x34);
    RotTransSV(&D_sc02_011_801E33F0[0], &a, &f);
    RotTransSV(&D_sc02_011_801E33F0[1], &b, &f);
    if (PathHitsModel(p->model, p->hitData, &a, &b) != 0 && TargetInFront(p, 0x300) != 0) {
        p->state = 3;
        ResetScriptVM();
        r = (s32 *) &CallActionHandler;
    } else {
        r = NULL;
    }
    return r;
}

s32 func_sc02_011_8018F488(StageActor *arg0, s32 arg1, s32 arg2) {
    D_sc02_011_801EB908 = arg1;
    return SpawnActor(0x85, arg0);
}

void func_sc02_011_8018F4B8(StageActor *o) {
    SV8 a;
    SV8 r;
    SV8 b;
    WMtx mat;
    ModelObj *p;
    u8 *m;
    WMtx *q;
    s16 y;

    if (SetupActor(o, &D_sc02_011_801E3AE4) == 0) {
        FreeActor(o);
    }
    SetScript(o, &D_sc02_011_8019105C);
    p = o->model;
    o->param = 0x80;
    p->unk04 |= 0x50000040;
    p->flags |= 1;
    m = (u8 *)o->parent->model + 0x34;
    LocalToWorld(m, D_sc02_011_801EB908, &a);
    b = a;
    r.x = r.y = r.z = 0x1800;
    SetScaleMatrix(&r, &mat);
    RotMatrixZ(rand() & 0xFFF, &mat);
    MulMatrix0(m, &mat, (u8 *)p + 0x34);
    SetMatrixTrans(&b, (u8 *)p + 0x34);
    q = D_sc02_011_801E3B18++;
    o->ext0 = q;
    if (D_sc02_011_801E3B18 > D_sc02_011_801EB8E8) {
        D_sc02_011_801E3B18 = D_sc02_011_801EB8E8 - 9;
    }
    func_800D20C0(&a, &r, 7);
    func_800D23D0(&r);
    RotMatrixYXZ(&r, q);
    SetMatrixTrans(&a, q);
    y = b.y;
    if (FindGround(&b) != 0 && y - b.y < 0x80) {
        b.y = b.y - 4;
        q = D_sc02_011_801E3B18++;
        o->ext1 = q;
        if (D_sc02_011_801E3B18 > D_sc02_011_801EB8E8) {
            D_sc02_011_801E3B18 = D_sc02_011_801EB8E8 - 9;
        }
        func_800D23D0(&g_GroundNormal);
        RotMatrixYXZ(&g_GroundNormal, q);
        SetMatrixTrans(&b, q);
    }
    o->state++;
}

void func_sc02_011_8018F6FC(StageActor *o) {
    QuadArg q;
    ModelObj *p;
    u8 *m;
    u8 *mm;
    s8 *t;
    s16 i;
    s16 j;
    u16 v;

    p = o->model;
    if (o->timer++ < 2) {
        t = D_sc02_011_801E3AD0;
        i = 0;
        m = (u8 *)o->ext0;
        v = (u16)o->param;
        q.p[1].x = q.p[1].y = q.p[1].z = 0;
        q.p[0].z = q.p[2].z = q.p[3].z = 0;
        q.c[0].r = q.c[0].g = q.c[0].b = 0;
        q.c[2].r = q.c[2].g = q.c[2].b = 0;
        q.c[3].r = q.c[3].g = q.c[3].b = 0;
        q.code = 0x50000000;
        q.c[1].g = v;
        q.c[1].b = v;
        q.c[1].r = v;
        for (; i < 4; i++) {
            q.p[0].x = *t++;
            q.p[0].y = *t++;
            q.p[2].x = *t++;
            q.p[2].y = *t++;
            q.p[3].x = *t++;
            q.p[3].y = *t++;
            t -= 2;
            DrawPrimG4Mtx(&q, m);
        }
        mm = (u8 *)o->ext1;
        if (mm != 0) {
            m = mm;
            t = D_sc02_011_801E3AD0;
            j = 0;
            v = (u16)o->param;
        q.p[1].x = q.p[1].y = q.p[1].z = 0;
        q.p[0].z = q.p[2].z = q.p[3].z = 0;
        q.c[0].r = q.c[0].g = q.c[0].b = 0;
        q.c[2].r = q.c[2].g = q.c[2].b = 0;
        q.c[3].r = q.c[3].g = q.c[3].b = 0;
        q.code = 0x50000000;
        q.c[1].g = v;
        q.c[1].b = v;
        q.c[1].r = v;
        for (; j < 4; j++) {
            q.p[0].x = *t++;
            q.p[0].y = *t++;
            q.p[2].x = *t++;
            q.p[2].y = *t++;
            q.p[3].x = *t++;
            q.p[3].y = *t++;
            t -= 2;
            DrawPrimG4Mtx(&q, m);
        }
        }
        o->param >>= 1;
        p->flags |= 1;
    } else {
        FreeActor(o);
    }
}

void func_sc02_011_8018F99C(StageActor *arg0) {
    D_sc02_011_801E3B1C[arg0->state]();
}

void func_sc02_011_8018F9D8(u8 *arg0) {
    V4 p;
    s32 v;
    s32 w;

    if ((AF(arg0, u8 *, 0x20) = AllocActorModel(arg0)) == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(AF(arg0, u8 *, 0x20), &D_sc02_011_801E439C);
    PlaySoundId(!(AF(arg0, u16, 0x70) & 0x1000) ? 0x43A : 0x6D6, 0);
    SetScript(arg0, &D_sc02_011_801E4174);
    AF(arg0, s16, 2) = 1;
    AF(arg0, s32, 0x1C) = 100;
    p.x = g_PlayerPosX;
    p.y = D_80126B60;
    p.z = D_80126B64;
    ((s16 *)&p.y)[1] -= 0x20;
    HeadingPitchTo(&v, arg0 + 4, &p);
    w = v;
    switch (AF(arg0, u16, 0x70) & 0xF) {
    case 0:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
        break;
    case 1:
        AF(AF(arg0, u8 *, 0x20), s16, 0x10) = w;
    case 3:
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = w >> 16;
        break;
    case 2:
        break;
    }
    if (AF(arg0, u16, 0x70) & 0x1000) {
        AF(arg0, s32, 0x1C) <<= 1;
    }
    UpdateModelZYX(arg0);
    SpawnActor(0xBC, arg0);
}

void func_sc02_011_8018FB50(StageActor *arg0) {
    D_sc02_011_801E4210[arg0->state]();
}

void func_sc02_011_8018FB8C(StageActor *arg0) {
    D_sc02_011_801E4224[arg0->state]();
}

void func_sc02_011_8018FBC8(s32 arg0) {
    s32 temp_v0;

    SetLocalVelocity(arg0, (s32) &D_sc02_011_801E41FC);
    if (MoveCollidePassable(arg0) != 0) {
        SpawnEffect(6, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0, /* extra? */ 0);
        temp_v0 = SpawnPropFrom(arg0, 0x22);
        if (temp_v0 != 0) {
            AF(temp_v0, s16, 0x34) = 0x2000;
        }
        goto block_7;
    }
    if ((ActorSegmentDamagesPlayer(arg0, (s32) &D_sc02_011_801E4208, (s32) &D_800D3918, 0x19) != 0) || ((AF(arg0, s16, 0x70) != 2) && (g_PlayerAction != 0)) || (TickTimer(arg0) != 0)) {
block_7:
        FreeActor(arg0);
    }
}

void func_sc02_011_8018FCA8(u8 *arg0) {
    SV4 a;
    SV4 b;

    if (AF(arg0, u16, 0x34) == 0) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = AF(AF(AF(arg0, u8 *, 0x64), u8 *, 0x20), s16, 0x12);
        UpdateModelZYX(arg0);
        StopWithGravity(arg0);
        SetLocalVelocity(arg0, &D_sc02_011_801E4218);
        a.x = 0;
        a.y = 0;
        a.z = 0x10;
        FaceHelper(arg0, &a, &b);
        AF(arg0, s16, 6) = b.x;
        AF(arg0, s16, 0xA) = b.y;
        AF(arg0, s16, 0xE) = b.z;
        AF(arg0, s32, 0x1C) = 0x5A;
        AF(arg0, s16, 0x34) = 1;
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) -= 0x80;
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) += 4;
    AF(AF(arg0, u8 *, 0x20), s16, 0x14) += 5;
    MoveObject(arg0);
    if (TickTimer(arg0) != 0) {
        FreeActor(arg0);
    }
}

void func_sc02_011_8018FDC4(StageActor *arg0) {
    ModelObj *temp_v0;

    temp_v0 = AllocActorModel(arg0);
    arg0->model = temp_v0;
    if (temp_v0 == 0) {
        RejectSpawn(arg0);
        return;
    }
    InitModel(temp_v0, (s32) &D_sc02_011_801E44CC);
    arg0->state = 1;
    arg0->stateCount = 0;
}

void func_sc02_011_8018FE20(StageActor *arg0) {
    s32 i;

    for (i = 0; (s16)D_sc02_011_801E47C4[i].x != 0; i++) {
        SpawnActorArg(0x10D, i, arg0);
    }
}

void func_sc02_011_8018FE94(u8 *arg0) {
    WMtx m;
    UV4 v;
    s32 o;
    s32 t;
    s16 k;

    m = GsIDMATRIX;
    v = D_sc02_011_801E47C4[AF(arg0, s16, 0x70)];
    t = AllocActorModel();
    o = t;
    AF(arg0, s32, 0x20) = t;
    if (t == 0) {
        RejectSpawn(arg0);
        return;
    }
    k = v.pad;
    InitModel(o, D_sc02_011_801E484C[k]);
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

void func_sc02_011_801900B4(StageActor *arg0) {
    D_sc02_011_801E4858[arg0->state]();
}

void func_sc02_011_801900F0(s32 arg0) {
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

void func_sc02_011_80190184(StageActor *arg0) {
    D_sc02_011_801E8654[arg0->state]();
}

void func_sc02_011_801901C0(StageActor *arg0) {
    StageActor *temp_v0;

    if (SetupActor((s32) arg0, (s32) ((((u16)arg0->param & 0xF) * 0x34) + &D_sc02_011_801E8554)) != 0) {
        if (!((u16)arg0->param & 1)) {
            temp_v0 = SpawnActorArg(0x1E3, 1, (s32) arg0);
            arg0->link = temp_v0;
            if (temp_v0 == 0) {
                RejectSpawn((s32) arg0);
                return;
            }
            arg0->state = 1;
            arg0->ext0 = SpawnTalkMarker((s32) arg0, (s32) &func_sc02_011_801904BC);
            return;
        }
        arg0->state = 5;
        arg0->work100 = (u16) arg0->parent->id;
        SetScript((s32) arg0, (s32) &D_sc02_011_801E38A0);
    }
}

void func_sc02_011_80190298(StageActor *arg0) {
    arg0->link->model->rot.vy = (s16) (((u16)arg0->model->rot.vy + 0x800) & 0xFFF);
    arg0->state = 2;
}

void func_sc02_011_801902C0(void) {
}

void func_sc02_011_801902C8(StageActor *arg0) {
    arg0->state = 4;
    RunScript((s32) arg0, (s32) &D_sc02_011_801E8604);
}

void func_sc02_011_801902F4(StageActor *arg0) {
    if (UpdateScript(arg0) != 0) {
        EndEvent(arg0);
        arg0->state = 2;
    }
}

void func_sc02_011_80190334(StageActor *arg0, s32 arg1) {
    s16 temp_v1;

    if (arg0->work100 != (s16)arg0->parent->id) {
        FreeActor((s32) arg0, arg1);
        return;
    }
    temp_v1 = arg0->workFE;
    if (temp_v1 == 1) {
        arg0->state = 6;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_011_801E38B0);
        arg0->hitState = 0;
        PlaySoundId(0x5BF, 0);
    } else if (temp_v1 == 2) {
        arg0->state = 6;
        arg0->timer = 0x20;
        SetScript((s32) arg0, (s32) &D_sc02_011_801E39B8);
        arg0->hitState = 0x8C00;
    }
}

void func_sc02_011_801903F4(StageActor *arg0, s32 arg1, s32 arg2) {
    if (arg0->animTimer == 0) {
        if (arg0->workFE == 2) {
            PlaySoundId(0x888, 0, arg2);
            SetScript((s32) arg0, (s32) &D_sc02_011_801E38A0);
        }
        arg0->state = 5;
        arg0->workFE = 0;
    }
}

void func_sc02_011_80190460(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 1;
}

void func_sc02_011_80190470(u8 *arg0) {
    AF(AF(arg0, void *, 0x6C), s16, 0xFE) = 2;
}

s32 func_sc02_011_80190480(void) {
    return D_sc02_011_801EB924 == 1;
}

void func_sc02_011_80190498(u8 *arg0) {
    SaveContinuePoint(AF(arg0, s32, 0xDC));
}

s32 *func_sc02_011_801904BC(u8 *o) {
    WMtx m;
    SV8 a;
    SV8 b;
    s32 flag;
    Mover *q;

    q = AF(o, u8 *, 0x64);
    m = AF(g_PlayerModel, WMtx, 0x34);
    gte_SetRotMatrix(&m);
    gte_SetTransMatrix(&m);
    RotTransSV(&D_sc02_011_801E8670[0], &a, &flag);
    RotTransSV(&D_sc02_011_801E8670[1], &b, &flag);
    if (PathHitsModel(AF(AF(o, u8 *, 0x64), s32, 0x20), AF(AF(o, u8 *, 0x64), s32, 0x58), &a, &b) != 0
        && TargetInFront(q, 0x300) != 0) {
        q->state = 3;
        ResetScriptVM();
        return (s32 *)&CallActionHandler;
    }
    return 0;
}

void func_sc02_011_80190610(StageActor *arg0) {
    D_sc02_011_801E86CC[arg0->state]();
}

void func_sc02_011_8019064C(StageActor *arg0) {
    s32 temp_v0;
    s32 temp_a2;
    u16 x;

    if ((func_sc02_011_80190B6C() == 1) || (temp_v0 = AllocActorSprite(), (temp_v0 == 0))) {
        RejectSpawn((s32) arg0);
        return;
    }
    arg0->ext0 = temp_v0;
    InitSpriteKind3(temp_v0, (s32) &D_sc02_011_801E8680, 0x214, 0x168);
    AF(temp_v0, s32, 4) = 0x50000000;
    AF(temp_v0, u8, 0x27) = 0x24;
    StartSpriteAnim(temp_v0, (s32) ((u8 *)arg0 + 0xDC), (s32) &D_sc02_011_801E868C);
    func_sc02_011_80190BC4((s32) arg0);
    AF(temp_v0, u16, 8) = (u16) (u16)arg0->pos[0].h.i;
    AF(temp_v0, u16, 0xA) = (u16) (u16)arg0->pos[1].h.i;
    AF(temp_v0, u16, 0xC) = (u16) (u16)arg0->pos[2].h.i;
    AF(temp_v0, s16, 0x1A) = 0x2000;
    AF(temp_v0, s16, 0x18) = 0x2000;
    AF(temp_v0, u16, 0x2C) = 0xC010;
    x = arg0->state;
    x++;
    temp_a2 = arg0->parent->id;
    arg0->timer = 0x180;
    arg0->state = x;
    arg0->work10A = temp_a2;
    PlaySoundId(0xAA0, 0, temp_a2);
}

void func_sc02_011_80190748(u8 *arg0) {
    u8 *q;
    u8 *o;
    u8 *p;
    s32 t;

    q = AF(arg0, u8 *, 0x64);
    if (AF(arg0, s16, 0x10A) == AF(q, s16, 0x36) && AF(q, s16, 0x76) > 0) {
        if (AF(arg0, s32, 0x1C) % 48 == 0 && AF(q, u8, 0xC1) == 0) {
            AF(q, s16, 0x60) = 0xA;
            AF(q, u16, 0x5C) |= 1;
            AF(q, s16, 0x62) = AF(AF(q, u8 *, 0x20), s16, 0x12) + 0x800;
            AF(q, s16, 0x5E) = 1;
            AF(q, s16, 0x7C) = AF(arg0, s16, 6);
            AF(q, s16, 0x7E) = AF(arg0, s16, 0xA);
            AF(q, s16, 0x80) = AF(arg0, s16, 0xE);
        }
        if (!(AF(arg0, s32, 0x1C) & 7)) {
            o = SpawnPropFrom(arg0, 0x22);
            if (o != 0) {
                AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
                AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
                AF(o, s16, 0xA) -= 0x20;
                AF(o, s32, 0x14) = 0xFFFC0000 - ((rand() % 3) << 16);
                t = rand();
                AF(o, s16, 0x34) = ((t % 6144 + 0x1000) & ~0xF) | (rand() & 1);
                AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC010;
                AF(AF(o, u8 *, 0x20), s32, 4) |= 0x40000000;
            }
        }
        p = AF(arg0, u8 *, 0xCC);
        if (p != 0) {
            StepSpriteAnim(p, arg0 + 0xDC);
            func_sc02_011_80190BC4(arg0);
            AF(p, s16, 8) = AF(arg0, s16, 6);
            AF(p, s16, 0xA) = AF(arg0, s16, 0xA);
            AF(p, s16, 0xC) = AF(arg0, s16, 0xE);
            AF(p, s16, 0x18) += 0x15;
            AF(p, s16, 0x1A) += 0x15;
        }
        if (AF(q, u16, 0x5E) == 0x23) {
            AF(arg0, s16, 2)++;
        }
        if (TickTimer(arg0) == 0) {
            return;
        }
    }
    func_sc02_011_80190C40(arg0);
}

void func_sc02_011_801909D8(StageActor *arg0) {
    u8 *p;
    u8 *o;

    p = (u8 *)arg0->ext0;
    if (p != 0) {
        StepSpriteAnim(p, (u8 *)arg0 + 0xDC);
        func_sc02_011_80190BC4(arg0);
        AF(p, s16, 8) = arg0->pos[0].h.i;
        AF(p, s16, 0xA) = arg0->pos[1].h.i;
        AF(p, s16, 0xC) = arg0->pos[2].h.i;
        AF(p, s16, 0x18) -= 0x200;
        AF(p, s16, 0x1A) -= 0x200;
        if (AF(p, s16, 0x18) >= 0) {
            if (D_800B99DA % 5 == 0) {
                o = SpawnPropFrom(arg0, 0x22);
                if (o != 0) {
                    AF(o, s16, 6) += (rand() & 0x1F) - 0x10;
                    AF(o, s16, 0xE) += (rand() & 0x1F) - 0x10;
                    AF(o, s16, 0xA) -= 0x20;
                    AF(o, s32, 0x14) = 0xFFFC0000 - ((rand() % 4) << 16);
                    AF(o, s16, 0x34) = rand() % 6144 + 0x2000;
                    AF(AF(o, u8 *, 0x20), u16, 0x2C) = 0xC010;
                }
            }
            return;
        }
    }
    func_sc02_011_80190C40(arg0);
}

s32 func_sc02_011_80190B6C(u8 *p) {
    u8 *o;
    s32 i;

    for (o = (u8 *) &g_Actors, i = 0; i < 0x60; i++, o += 0x10C) {
        if (AF(o, u16, 0) == 0x35C && AF(p, s32, 0x64) == AF(o, s32, 0x64) && p != o) {
            return 1;
        }
    }
    return 0;
}

void func_sc02_011_80190BC4(u8 *o) {
    SMtx m;
    SV8 c;
    StageActor *p;

    p = AF(o, u8 *, 0x64);
    if ((s16)p->id == AF(o, s16, 0x10A)) {
        GetPartWorldMatrix(p, AF(o, s16, 0xFC), &m);
        LocalToWorld(&m, o + 0x88, &c);
        AF(o, s16, 6) = c.x;
        AF(o, s16, 0xA) = c.y;
        AF(o, s16, 0xE) = c.z;
    }
}

void func_sc02_011_80190C40(StageActor *arg0) {
    s32 temp_a0;

    temp_a0 = (s32)arg0->ext0;
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x38);
    }
    FreeActor(arg0);
}

void func_sc02_011_80190C84(StageActor *o, s16 *v, s16 arg2) {
    SpawnDef d;

    d.x = v[0];
    d.y = v[1];
    d.z = v[2];
    d.kind = 0x35C;
    d.flags = 0;
    d.unk8 = 0;
    d.unkE = arg2;
    d.unk10 = 0;
    d.unkC = 0x7FFF;
    SpawnActorFromDef(&d, o);
}
