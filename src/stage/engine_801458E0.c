/*
 * Stage engine, 0x801458E0-0x8017BEA4 (-O2): from the -O0 file engine_80144B9C.c to the end of the engine, until
 * more of its file boundaries are found (docs/stage_engine.md, "Source files").
 */
#include "common.h"
#include "psyq.h"
#include "work.h"
#include "game.h"
#include "gte.h"
extern s32 IsClimbWallAhead();
extern s32 MoveHitsSolidActor();
#define AF(p, T, off) (*(T *)((u8 *)(p) + (off)))

#define PARTS(a) (*(s32 *)(*(u8 **)((a) + 0x20) + 0x24))
extern s32 GetFlag(s32 n);
extern void QueueImage(s32 w);
void func_80146074(void);
extern u32 D_800DE2A4[];
extern void PartShow(s32 a, s32 b);
extern void PartHide(s32 a, s32 b);
extern s32 TestFlag80(u8 *a);
extern s32 (*D_8018F378[])(u8 *a);
extern u8 D_8018F338[];
extern void MoveImage(void *rect, s32 x, s32 y);
/* the ability Musashi holds (docs/abilities.md): EC1 ability, EC2 the HUD's, EC3 out-of-body saved, EC4 used once,
   EC8 frames left; EB8 BP. The per-ability tables are stage data (SC03_001's addresses). */
extern u8 D_80078EC1;
extern u8 D_80078EC2;
extern u8 D_80078EC3;
extern u8 D_80078EC4;
extern s32 D_80078EC8;
extern u16 D_80078EB8;
extern u8 D_801901EC[];
extern s32 D_8019020C[];
extern u8 D_80190288[];
extern u8 D_801902A8[];
extern u8 D_801902C8[];
extern void (*D_801902E8[])(u8 *obj);
extern s32 D_8012672C;
extern s32 D_8012811C;
extern s32 D_80126B08;
extern s32 g_StatusPoison;
extern s32 D_80078E9C;
extern s32 D_80078EA0;
extern s32 D_80078EA4;
extern s32 D_80078EA8;
extern u8 D_80078EBB;
extern s32 D_80078ECC;
extern s32 D_80078ED0;
extern s32 D_80078ED4;
extern s32 D_80078ED8;
extern s32 D_80078EDC;
extern u8 D_80078EE0;
extern void func_800CAF6C(u8 *obj);
extern void RunAbilityEndHandler(u8 *obj);
u32 GetAbilityInfo(u8 *obj, u32 ability);
void SaveStatus(void);
void RestoreStatus(void);
void EndHeldAbility(u8 *obj);
void ClearHeldAbility(u8 *obj);
void StopAbility(u8 *obj);
s32 SpawnEffect(s32 kind, StageActor *owner, s16 x, s16 y, s16 z, s32 d, s32 e);
void func_80166244(StageActor *a);
void ShowDamage(StageActor *a, s32 n);
void ShowDefeat(StageActor *a);
void func_801754A8(void);
void CancelTechnique(void);

void func_801458E0(void) {
}

extern s32 D_801150F8;
extern s32 g_EngineReadyFlag;
extern s8 D_80126D6C;
extern s32 g_ActionHandler;
extern s32 RestartFaceScript();
extern void RestartFaceScriptAt();
extern s32 g_PushVel;
extern s32 D_80127094;
extern s32 D_80127098;
extern s32 AllocSpriteInRange();
extern s32 AllocModelInRange();
extern void SpawnObj68();

extern u16 D_80126BB8;
extern u16 D_80126BBA;
extern u16 D_80126BBC;

extern s32 g_SkipSeId;
extern s32 PlaySePositional();

extern void AddPushYLimit();

extern void AddPushZLimit();

extern s32 AddPushFacing();

extern void AddPushFacingFree();

extern void AddPushSetVel();

extern s32 LocalToWorld();
extern void WorldToLocal();
extern s32 EnterPlayerJump();
extern s32 StartPlayerJump();
extern s32 SwitchToAssimThrow();
extern s32 SwitchToUseAbility();
extern s32 SwitchToAsleep();
extern s32 EnterAirSlash();
extern s32 StartSwordSkill();
extern s32 SwitchToCarry();
extern s32 SwitchToBackHop();

extern s32 SwitchToGrab();

extern u8 D_80078EC0;
extern s32 FreeObj68ByKind();

extern void FreeEffectsByKind();
extern void AddMoney();
extern s32 IsObjAsleep();

extern s32 SetPoisonWord();

extern s32 D_80078E98;

extern s8 D_80126D1C;
extern s32 D_80126D74;

extern u16 D_80078EB2;
extern u16 D_80078EB4;
extern void LoseHp();
extern u16 D_80078EB6;

extern void SetFlag();

extern void SetVar();

extern s32 GetVar();

extern u8 D_8018F14C;
extern s32 ClipObjBehindWall();

extern s32 PosDist();

extern s32 StrikeActorWithDamage();

extern u8 D_8018F154;
extern s32 GetPitchToObjOffset();

extern s8 D_80126D17;

extern s8 D_80126D1E;
extern s32 D_80126B50;

extern s32 g_PlayerFlags;
extern s32 D_80126CDC;

extern s16 D_80126CC4;

extern s32 FindGround();

extern void QueueHit();
extern void StartExit();

extern u16 D_800B99DA;
extern s32 SpawnEffectOn();
extern s16 D_800B9A08;
extern void HitPlayerFatal();

extern void ShowDamageNumber();
extern void ShowNumberAbove();

extern void RunKnockbackSub();
extern s32 CollidePlayerMove();
extern s32 ProbePlatformByMove();
extern s32 ProbeGroundByMove();
extern void StartSleepHit();
extern s32 ClearPlayerHittable();
extern void EndFlinchHit();
extern s32 EnterPlayerStanding();
void func_80165718(u8 *obj);
extern s32 g_PlayerHitBy;
extern s32 g_PlayerHitByHeld;
extern s16 D_8011F748;
extern s32 D_80115210;

extern s32 ResetPlayerAfterHit();
extern s32 RestartPlayerMotion();

extern s32 StepPlayerMotion();

extern s32 RestartPlayerMotionBlend();

extern s32 RunPlayerMotionScript();

extern void RefreshFaceOverride();

extern void SetPlayerState();
extern void FusionSwingStart();

extern s32 StayedGrounded();
extern s32 EndSwordSwing();

extern void RunAttackHit();
extern u8 D_8018F570;

extern s32 ResetClankSe();
extern s32 LuminaSlashStart();
extern void EndLuminaSlash();
extern s32 D_801ED510;
extern void AirSlashStart();
extern void RunAirSlashState();
extern s32 PushOutOfSolidActors();
extern s32 ProbePlatformFall();
extern s32 func_8014FA04();
extern void PlayLandSe();
extern s32 SpawnEffect2();
extern void SkillAStart();
extern void SkillBStart();
extern void SkillCStart();
extern void ResetPlayerForDeath();
extern void NextObjState();

extern void StartFade();
extern s32 FadeStep();
extern void UpdatePlayerState();
extern void StandStart();

extern void RunPlayerStateHandler();

extern void RunningStart();

extern void RunPlayerRunningState();

extern void JumpStart();

extern void func_8015BE94();

extern void RunPlayerFallState();

extern void PlayerAirborneStep();

extern void PlayerLandStep();

extern s32 StartSlopeSlide();
extern void RunPlayerSlideState();

extern void StartPushBlock();
extern void RunPushBlockState();

extern void StartPole();
extern void RunPoleState();

extern void StartBarSwing();
extern void RunBarSwingState();
extern void StartCarry();

extern s32 func_8015E0D4();

extern void StartThrowCarried();

extern void RunThrowCarriedState();

extern void ReleaseCarried();

extern void func_8015DECC();
extern void RunThrowCarriedAltState();

extern void StartGrab();
extern u8 D_8018FE80;
extern s32 StartCameraShake();
extern void StartGuardWithFx();
extern void RunGuardState();
extern void StartGuard();

extern u8 g_ChargeGauge;
extern s32 ClearGuarding();
extern void StartBackHop();
extern void StartMightyStrike();
extern void RunMightyStrikeState();
extern void StartWallClimb();
extern void RunWallClimbState();

extern void StartAssimThrow();

extern void StartAssimilate();

extern void RunAssimilateState();

extern void func_801601AC();

extern void RunKind18State();

extern void StartGuardRecoil();
extern void RunGuardRecoilState();

extern void func_801608C0();
extern void StartAsleep();
extern void StartRecover();
extern void RunRecoverState();
extern s32 CheckPlayerGround();
extern void UpdateDeadline8();
extern s32 UpdateDeadline12();

extern SVECTOR D_8011F750;
extern s32 ZeroFill();
extern u8 D_8011F9D0;
extern void AddObj68PushSetVel();

extern s32 D_80115100;

extern s32 FreeObj68();

extern s32 TickObjTimer();
extern void DrawTrailSprite();

extern void SpendBp();

extern u8 g_Effects;

extern void FreeEffect();

extern s32 StepSpriteAnim();

extern void SpawnDefeatEffect();
extern s32 ShowDefeat56();

extern void SpawnDefeatEffect56();

extern s32 func_8016CBC0();

extern u8 D_80115218;
extern s32 D_80126D70;
extern void StartPlayerAction();
extern void StartPlayerActionScript();
extern void SetPlayerActionScript();
extern s32 ResetActionHandler();

extern s32 g_PlayerAction;

extern s8 D_80126D1A;

extern s8 D_800B9A17;
extern void func_80175414();
extern void func_8016F4C4();
extern void HidePlayerScene();
extern s32 SetPlayerFlag7E2();
extern s32 NextPlayerActionHandler();
extern void ShowPlayerScene();
extern s32 ClearPlayerFlag7E2();

extern s32 SetPlayerActionFlag01();
extern void ClearObjPadInput();
extern s32 ClearPlayerActionFlag01();
extern s32 ClearPlayerActionFlag10();
extern s32 SetPlayerActionFlag10();
extern void BumpSub2Copy();
extern void func_8016F804();
extern void TakeActionArgs();
extern s32 func_8016F8AC();
extern void func_8016F95C();
extern void func_8016FD08();
extern s32 PlayerEvent01();
extern void func_8016FE2C();
extern void func_8016FFA8();
extern s32 func_801701C8();
extern s32 func_801702B8();
extern void func_80170374();
extern void func_8017044C();
extern s32 func_8017051C();
extern void func_801705C0();
extern s32 func_80170670();
extern s32 func_80170718();
extern void func_80170B48();
extern s32 func_80170C44();
extern void BumpSub1Copy();
extern void func_80170CF0();
extern s32 func_80170DE0();
extern s32 func_80170EAC();
extern s32 func_80170F74();
extern s32 func_80171028();
extern s32 func_801710DC();
extern s32 func_8017118C();

extern s32 func_80171238();
extern s32 g_ActionArgs;
extern s32 SwitchPlayerActionScript();
extern void func_8013E588();
extern void func_80175454();
extern s32 GetHeadingToPoint();
extern s32 PlayerEvent02();

extern void IdleActionHandler();

extern s32 WalkPlayerToArrive();

extern s32 func_80172958();
extern s16 D_80126B30;
extern s16 D_80126B32;
extern s16 D_80126B34;
extern void func_801729F0();

extern void func_80172B44();
extern s32 func_80172D14();
extern void func_80172E20();
extern u8 D_800D5A34;
extern s32 StartPlayerMotionAction();
extern u8 D_800D59EC;
extern u8 D_800D599C;
extern u8 D_800D5934;
extern s32 D_80127508;
extern void func_80173078();

extern void func_8017319C();
extern void func_801732C4();

extern s32 ClearPlayerActionFlag02();

extern void func_80173374();

extern s32 ClearPlayerActionFlag08();

extern s32 func_801735B8();
extern s32 func_80173770();
extern s32 StartPlayerCarry();
extern void func_801737E8();
extern void func_8017385C();
extern void func_8017390C();
extern s32 func_80173980();

extern void func_80173BC0();
extern s32 func_80174188();
extern s32 func_801741A8();
extern void AddMaxBp();
extern void func_801742A4();
extern s32 func_80174318();
extern void func_80142454();
extern void func_80174384();
extern s32 func_801743F0();

extern void func_80174474();

extern s32 func_801744E0();

extern void func_80174554();

extern void func_801745AC();

extern void func_80174604();

extern s32 func_800CF8CC();
extern void EndPlayerAction();
extern s16 D_8011F9C8;
extern s16 D_80126938;
extern void RunActionTable();
extern void RunActionTable2();
extern void func_801749C8();
extern void func_80174CB0();
extern s32 D_8012697C;
extern s16 D_80126980;
extern void CameraPanUpdate();
extern void SetCameraUpdate();
extern void ScrollPower_Run();
extern s16 D_800B9A02;
extern s32 func_801757E0();
extern void func_80175DA8();
extern void func_80175AB8();
extern s32 func_80176144();
extern void func_80176734();
extern void func_80176218();
extern s32 func_80176D00();
extern void ResetScriptVM();
extern s32 RunScript();
extern s16 D_801EF464;
extern s32 func_80174714();
extern s32 func_80179B74();
extern s32 D_801EE5F4;
extern s32 D_801EE61C;
extern s32 LoadItemIcon();
extern s32 func_80174764();

extern void SmoothTiltUpVector();
extern void BuildTiltedMatrix();
extern void SetIdentityRot();
extern void RotateMatrixX();
extern void RotateMatrixY();
extern void RotateMatrixZ();
extern void AddPushXLimit();
extern void ReadPosePoints();
extern s32 PeekPlayerMotionPose();
extern s32 FaceStickDir();
extern void ProjectPointOtz();
extern s32 ProjectPoint();
extern s32 func_8014CA70();
extern s32 func_8014CAE4();
extern s32 FindFloorBelowMoved();
extern s32 FindFloorBelowStill();
extern void AddBp();
extern s32 IsTechnique3Active();
s32 GetVarCF(void);
extern s32 D_800AE6B0;
extern u16 D_800AE6DC;
extern s32 ProbeExitActor();
extern void SetTargetPointToLastPos();
extern void RunHitHandler();
extern void (*D_8018F22C[])();
s32 SetPlayerEvent100(s32 arg0);
extern void EndFlattenHit();
extern void (*D_8018F250[])();
extern s32 func_801536DC();
extern void (*D_8018F264[])();
extern void (*D_8018F280[])();
extern void (*D_8018F298[])();
extern void (*D_8018F2AC[])();
extern void (*D_8018F2C8[])();
extern void (*D_8018F2DC[])();
extern void (*D_8018F2F0[])();
extern s16 D_8011DB0C;
extern u8 D_8018F304;
extern void (*D_8018F32C[])();
extern void StartRumbleScript();
s32 GetDamageRecord(s32 arg0);
extern void LeavePlayerKind();
extern s32 CheckSkillAFollowUp();
extern s32 GetAttackHitPoint();
s32 GetObjPadPressed(s32 arg0);
s32 TriggerSwordSkill(s32 arg0, s32 arg1);
extern void (*D_8018F86C[])();
extern s32 D_801ED518;
extern s32 D_801ED524;
extern s32 D_801ED528;
void func_80147098(s32 arg0);
void func_801470AC(s32 arg0);
void SetObjState(s32 arg0, s32 arg1);
extern void RunPlayerDeath();
extern u8 D_80110C3C;
extern s32 GetMessageAnswer();
extern void CloseMessage();
extern s32 OpenMessage();
extern u8 D_800AE6BD;
extern s32 D_801ED520;
extern void func_80145BF8();
extern void (*D_8018FAF8[])();
extern u8 D_800D48DC;
extern u8 D_8018FB3C;
extern void SetPlayerMotionIndex();
extern void SetObjPushV();
extern void func_80161CD0();
extern void StartSlopeSlideVec();
extern void (*D_8018FBA8[])();
extern s32 ToggleSleepMode();
extern void MoveObjByVel();
extern s32 PushBlock();
extern s32 CheckPlayerGroundNoCollide();
extern void PlayFootstep();
extern s32 GrabBar();
s32 SetPlayerEvent20(s32 arg0);
extern s8 D_8018FDEC[];
extern s32 CheckAssimilatePending();
extern s32 CheckAsleepFlag();
extern void ObjLocalToWorld16();
extern void MoveCarriedAlongThrow();
extern void func_8015E018();
extern void HoldGrabbedAtHands();
extern void ReleaseGrabbed();
extern u8 D_80062BE8;
s32 ClearObj68Kind(s32 arg0);
extern void PlaySe();
extern s32 RunPlayerGroundSteps();
extern void CancelAssimilate();
s32 SetState4EIfIdle(s32 arg0, s32 arg1);
extern s32 D_8018FF04[];
extern s32 GetOptionD();
u32 func_80165700(u8 *obj, u32 ability);
s32 GetObjPadHeld(s32 arg0);
extern void func_80160A74();
extern u8 D_80110EC0;
extern void func_800D0F4C();
extern void AddHp();
extern s16 D_801270C0;
extern void SetPropsActive();
s32 SwitchToAssimilate(s32 arg0);
extern s32 GetVar16();
extern s32 SetVar16();
extern s32 func_800D0D7C();
extern void (*D_8019006C[])();
extern void func_800D0C48();
extern void (*D_801900B4[])();
extern s32 TraceAttackPath();
extern void (*D_801900BC[])();
extern void (*D_80190110[])();
extern void UpdateObj68Matrix();
extern void RingHitActors();
extern void (*D_8019011C[])();
extern s32 FadeFlashColour();
extern void (*D_8019012C[])();
s32 SetTrailSpriteColour(s32 arg0);
extern void CheckAbilityFails();
extern void RunAbilityUse();
extern void StartAbilityFailMotion();
s32 EndAbilityFailFace(s32 arg0);
extern u8 D_801EC898;
extern void SetDebugText();
extern void SetDebugNumber();
extern void (*D_801903EC[])();
extern void (*D_801903F4[])();
extern void (*D_801904BC[])();
extern void (*D_801904CC[])();
extern void (*D_801904DC[])();
extern void (*D_801904E8[])();
extern void (*D_80190500[])();
extern void func_80168BDC();
extern void RingFxStep();
extern void (*D_80190508[])();
extern void (*D_80190510[])();
extern void (*D_80190518[])();
extern void (*D_80190520[])();
extern void (*D_80190528[])();
extern void (*D_80190530[])();
extern void (*D_801905E4[])();
extern void (*D_80190624[])();
extern void (*D_80190630[])();
extern void (*D_80190678[])();
extern void (*D_801906F4[])();
extern s32 DefeatFxPlacePiece();
extern void (*D_80190744[])();
extern void (*D_80190774[])();
extern void (*D_8019077C[])();
extern void (*D_80190798[])();
extern void (*D_80190844[])();
extern void (*D_80190898[])();
extern void DrawScreenFx();
extern s16 D_801908CC[];
extern void DrawHudSlot();
extern u8 D_801908BC[];
extern void func_800D1724();
extern void (*D_80190960[])();
extern void func_8016F764();
extern void (*D_80190968[])();
extern void (*D_80190970[])();
extern void (*D_80190978[])();
extern void (*D_80190980[])();
extern void (*D_80190988[])();
extern void func_8016FB10();
extern void (*D_80190994[])();
extern void (*D_801909A0[])();
extern void (*D_801909AC[])();
extern u16 D_8011F73E;
extern void SetFallSpeed();
extern void (*D_801909BC[])();
extern void (*D_801909CC[])();
extern s32 func_80170068();
extern void (*D_801909D4[])();
extern void (*D_801909DC[])();
extern void (*D_801909E4[])();
extern void (*D_801909EC[])();
extern void (*D_801909F4[])();
extern void (*D_801909FC[])();
extern void (*D_80190A04[])();
extern void (*D_80190A0C[])();
extern void (*D_80190A14[])();
extern void (*D_80190A1C[])();
extern void (*D_80190A24[])();
extern void (*D_80190A2C[])();
extern void (*D_80190A34[])();
extern void (*D_80190A3C[])();
extern void (*D_80190A44[])();
extern void (*D_80190A4C[])();
extern void (*D_80190A54[])();
extern void (*D_80190A5C[])();
extern void (*D_80190A64[])();
extern void (*D_80190A6C[])();
extern void (*D_80190A74[])();
extern void (*D_80190A7C[])();
extern s32 WalkToPointSpeed();
extern s32 SnapToPointIfNearXZ();
extern void ClearObjPush();
extern void (*D_80190A8C[])();
extern void (*D_80190A98[])();
s32 ObjLocalToWorld(s32 arg0, s32 arg1, s32 arg2);
extern s32 func_80172A8C();
extern s32 func_80172BC8();
extern s32 EaseAngleStep();
extern void (*D_80190AC0[])();
extern u8 D_800D47F4;
extern u8 D_800D46E4;
extern u8 D_800D5C6C;
extern s32 func_801730FC();
extern u8 D_80190A84;
void func_8017331C(s32 arg0);
extern void (*D_80190AF0[])();
extern s16 D_80126B40;
extern void (*D_80190B04[])();
extern void (*D_80190B2C[])();
extern s16 D_80126B3C;
extern u8 g_Camera;
extern void func_80174BBC();
extern void func_80174BF4();
extern void SelectMainCamera();
extern s32 SetCameraViewFromList();
extern void ScrollPower_Setup();
extern void (*D_80190D04[])();
extern void func_801758FC();
extern void func_80175820();
extern void func_801759D8();
s32 func_801757A0();
extern void (*D_80190D10[])();
extern u8 D_801ECAE0;
extern s16 D_801EE610;
extern s16 D_801EE614;
extern void func_800D0CA0();
extern s32 RequestBgmPack();
extern s32 func_800D0CE0();
extern u16 g_PlayerX;
extern u16 D_80126B62;
extern u16 D_80126B66;
extern s16 D_801EE5DC;
extern u16 D_801EE65C;
extern u16 D_801EE65E;
extern u16 D_801EE660;
extern s16 D_801EF3F0;
extern void SaveCamera();
extern s32 D_80114F24;
extern s32 D_80114F28;
extern s32 D_80114F2C;
extern s32 D_80114F30;
extern s32 D_80114F34;
extern s32 D_80114F38;
extern s16 D_801EE66C;
extern s16 D_801EE66E;
extern s16 D_801EE670;
extern s16 D_801EE674;
extern s16 D_801EE676;
extern s16 D_801EE678;
extern void (*D_80190EEC[])();

extern s32 StrikeActor();
s32 RollDamage();
extern s32 FallOrSlideOnResult();
extern s32 D_801152BC;
extern s32 FallOrSlideBlockUphill();
extern void func_8017B0E4();
extern void RestoreSavedCamera();

extern void func_800D22E4();
extern void func_8016E460();
extern s32 D_8011F73C;
extern s32 D_8011F740;
extern s32 LiftActor();
extern u8 D_80126B36;
s32 StepTowardSpeed(s32 arg0, s32 arg1, s32 arg2);
extern s32 D_801EE1C8;
extern void ScriptStep();

extern u8 D_80078E50;
extern s32 D_800AE6AC;
extern s16 D_800B9A0A;
extern void func_800D185C();
extern u8 D_80126BA4;
extern void (*D_8018EFFC[])();
void SetObjPush(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern u32 g_Money;
extern s8 D_80126D1D;
extern s32 ProbePlatformSlide();
extern s32 ProbePlatformStill();
s32 DamagePlayerHp(s32 arg0, s32 arg1);
void ForgetPlayerHit(s32 arg0);
extern void RestartPlayerMotionIndex();
extern void (*D_8018F37C[])();
extern void (*D_8018F7F0[])();
extern void (*D_8018F8A8[])();
extern void (*D_8018FD00[])();
extern u8 D_800D4A9C;
extern u8 D_800D4B48;
s32 SetPlayerMotionBlend(s32 arg0, s32 arg1, s32 arg2);
extern void (*D_8018FD28[])();
extern void (*D_8018FDE0[])();
extern s8 D_8018FE28[];
extern void (*D_8018FE60[])();
extern void (*D_8018FE9C[])();
extern void (*D_8018FEA4[])();
extern void (*D_8018FEE4[])();
extern void (*D_8018FF80[])();
extern void (*D_8018FF98[])();
extern void (*D_8018FFA4[])();
extern void (*D_8018FFB4[])();
extern void AddObj68PushX();
s32 AddObj68PushY(s32 arg0, s32 arg1);
s32 AddObj68PushZ(s32 arg0, s32 arg1);
extern void SetPushVel();
extern u8 D_80126CF8;
void RunAbilityInitHandler(u8 *obj);
extern u8 D_80078EC5;
extern void (*D_80190170[])();
extern void RunAbilityFailState();
extern void (*D_801905EC[])();
extern s32 FindEffectByKind();
extern void EndDefeatFx();
extern void (*D_801907A0[])();
extern s32 func_8016CF04();
extern void (*D_80190808[])();
extern void FollowFxPlace();
extern void (*D_8019083C[])();
void SetPhaseCopy(s32 arg0, s32 arg1);
s32 ClearHit(s32 arg0);
extern void EndPlayerActionOf();
void ResumeHopAbility(u8 *obj);
extern s16 D_80126B38;
extern s16 D_80126B3A;
extern s32 func_800D0EC4();
extern void (*D_80190B94[])();
extern void ScrollPower_Step();
extern s8 D_8011F7A8;
extern s8 D_8012694C;
extern s16 D_801EE64C;
extern s16 D_801EE64E;
extern s16 D_801EE650;
extern s16 D_801EE654;
extern s16 D_801EE656;
extern s16 D_801EE658;

void func_801458E8(void) {
    D_800AE6B0 = D_800AE6AC | 0x01000000;
    func_800D185C((s32) &D_80078E50);
    D_800B9A0A = 0x3000;
}

extern s32 func_8014F6F4();
extern void StartHitKnockback();
extern void StartFlattenHit();
extern void StartPitFallHit();
extern void StartBlowback();
extern void StartLaunchHit();
extern void StartFlinchHit();
extern void StartFlingHit();
extern void VanishStart();
extern void PitFallStart();
extern void GrabbedStart();
extern s32 UpdateSwordTrail();
extern void func_80169228();
extern void func_80169584();
extern void PlaceObjAt();
extern void BlendCameraThen();
extern void ClearCameraUpdate();
s32 CameraPanDone(void);
extern void func_801716AC();


extern s32 D_8011F730;
extern void StartFall();
extern s32 TakePlayerControlNoStop();
extern void FreeEffect();
extern s32 DrawSwordTrail();
extern void DrawRingFx();
extern u8 D_8019055C;
extern u8 D_8019059C;
extern void func_800D1FC8();
extern s32 func_800D21C4();
extern void StartSpriteAnim();
extern u8 D_801EDA84;
extern u8 D_801EDA88;
extern void OrbitFxPlace();
extern void DrawOrbitFx();
extern void SwirlFxMatrix();
extern void (*D_80190AA4[])();
extern void (*D_80190AB4[])();
extern void (*D_80190AD8[])();
extern void (*D_80190AE4[])();
s32 SetPlayerActionFlag02(void);
s32 SetPlayerActionFlag08(void);
extern void (*D_80190B10[])();
extern void (*D_80190B1C[])();
extern void (*D_80190B4C[])();
extern void (*D_80190B58[])();
extern void (*D_80190B64[])();
s32 func_80174630(void);
extern void (*D_80190B70[])();
extern void (*D_80190B78[])();
extern void (*D_80190B8C[])();

extern u8 D_80126C98;
extern s16 D_80126C9E;

extern u8 D_80126DB0;
extern u16 D_80126DB6;
extern s32 SVecToPos();

extern void func_80172DAC();
extern s32 FindActorByKindAny();
extern void (*D_80190ACC[])();
extern s32 g_CameraProj;
extern s32 g_CameraProjTarget;
extern s32 g_CameraDistTarget;
extern s16 g_CameraAngleTarget;
extern s16 D_8012696A;
extern s16 D_8012696C;
extern s16 g_CameraOfsTarget;
extern s16 D_80126978;
extern s16 D_8012697A;
extern void func_8017496C();
extern void (*D_80190B80[])();


extern s32 func_80171C64();
extern s32 func_800D0F8C();
extern u16 D_8011F73A;
extern void PlaySoundId();
extern void func_800D0FE0();


extern s32 AutoWalkFrames();

extern u8 D_80062BF4;
void EndSleepHit(s32 arg0);
extern u8 D_80062C14;
extern u8 D_8018EEBC;

extern void (*D_8018FF90[])();
extern void (*D_8018FEF0[])();
extern void (*D_8018FEAC[])();
extern void (*D_8018FE94[])();
extern void (*D_8018FE40[])();
extern void (*D_8018FE20[])();
extern void (*D_8018FD7C[])();
extern void (*D_8018FD44[])();
extern void (*D_8018FD34[])();
extern void (*D_8018FD1C[])();
extern void (*D_8018FCF8[])();
extern void (*D_8018FCF0[])();
extern void (*D_8018F818[])();
extern void (*D_80190B84[])();

extern void (*D_80190364[])();

extern void CallActionHandler();
extern void SetPlayerAction();

extern u8 D_8011520C;
extern u8 D_8018F7E0[];
extern u8 D_80190004[];
extern u8 D_801ED634[];

extern u8 D_8018FFF4[];
extern s32 func_800CF8B4();

extern s32 D_801151E0;
extern u8 D_8011DAD8;
extern u8 g_Actors;
s32 IsObjWithin(s32 arg0, s32 arg1, s32 arg2);
extern void ApplyPickup();
extern void func_80178840();

extern s16 D_8011DB18;
extern void func_80153C74();
extern u8 D_800D4DD4;
extern s32 SetPlayerMotion();

extern void AddPushX();
s32 AddPushY(s32 arg0, s32 arg1);
s32 AddPushZ(s32 arg0, s32 arg1);
s32 StartPoison();
extern void PosToSVec();
void SetTargetPoint(s32 arg0, s32 arg1);
extern void SetObjTimer();
extern void AddTrailCopy();


extern u8 D_8018FFE4[];

extern s32 D_801ED530;
extern s32 D_801ED588;
extern void func_80162968();

extern s32 D_8012750C;
extern s32 func_80173A60();

extern void DrawDamageNumber();

extern void (*D_801900B0[])();

extern s32 GetArmedCrest();

extern s32 CanUseAbility();
s32 TriggerUseAbility(Player *arg0);
extern s32 TestFlag125Plus();
void ClearFlag125Plus(s32 arg0);


extern s32 D_80126BA0;
extern u16 D_80126BE0;
extern u16 D_80126BE2;
extern u16 D_80126BE4;
extern u16 D_80126C90;
extern u16 D_80126C92;
extern u16 D_80126C94;
extern void *g_PlayerModel;
extern void UpdatePlayerPoints();
void UpdateWeaponParts(u8 *a);
void ApplyPlayerHidden(Player *arg0);
extern s32 BuildPlayerMatrixOnce();
extern void ApplyPlayerScale();
extern void CountWalkDistance();
extern s32 func_801508F8();      /* s32 with no return value: v0 stays live at its exit (r164) */
void ClearCrest(Player *arg0);
extern s32 StartDeadlineEvent();

extern u8 D_800636C8;
extern u8 D_800DE5A0;
s32 AllocModel6To16(void);
extern void InitModel();

extern u8 g_Status;
extern s32 func_8016F1C4();
extern void AddWakeGauge();
extern void func_801670E4();

typedef struct { u8 r, g, b, cd; } SCol;
typedef struct { SVECTOR v[4]; SCol c[4]; s32 code; } SPrim;
extern void SetScaleMatrix();
extern void MulMatrix2();
extern void DrawPrimG4Mtx();
extern s32 EaseValue();
extern s32 EaseAngle();

extern u8 D_800B9A64;
extern s32 GetPadTypeAlt();
extern s32 GetPadHeld();
extern s32 GetPadPressed();
extern s32 GetPadByte();
extern void GetDemoPad();
#define SW1(x) ((((x) & 0x2000) * 4) | ((s32)((x) & 0x8000) >> 2) | ((x) & 0x5FFF))

extern void (**g_Obj68Handlers)();
extern void DefaultObj68Handler();

extern u8 D_80110D0C;
extern s32 GetProgress();
extern s32 IsStateSlotUsed();
void func_801458E0(void);
extern void LoadContinuePoint();
extern void func_801458E8();
extern void LoadStateSlot();
extern void func_80145A2C();
extern void func_800CF804();
extern void func_800CF818();


extern s32 func_80135A4C();
extern s32 AngleDist();
extern s32 SVecDist();

void SetFlag80(s32 arg0);
extern void LoadDefaultStatus();
extern void ClearFlags();
extern void ClearVars();
extern void ClearVarBlock60();
extern void ClearItemValue0();
extern void func_8002AB64();
extern void SetProgress();
extern void func_800D1F90();
extern s32 D_80128150;
extern u8 D_800D3A44;
extern u8 D_800D39FC;
extern u8 D_800D3A20;

extern s32 CalcPower03Rand40();

extern u16 D_801EE1D0[];
extern s16 D_801EE5D4;

typedef struct { SVECTOR v[4]; u16 uv[4][2]; u8 r, g, b, pad; s32 code; u8 tp; } SPrimT;
extern u8 D_80190670[];
extern void DrawPrimFT4Screen();

extern s16 D_80078EA6;


extern s32 UpdateScript();
extern s16 D_801EE5D8;
extern s32 D_80190E48[];
typedef void (*VmHook)(s32 obj);
extern VmHook D_801EE624[10];
extern s32 *g_ActiveCamera;

extern s16 D_801EE5D0;
extern s32 D_801EE5E0;
extern s16 D_801EE5E4;
extern s16 D_801EE5E8;
extern s16 D_801EE5EC;
extern s16 D_801EE5F0;
extern s32 D_801EE5F8;
extern s32 D_801EF2E0;
extern u8 D_801EF3A8[];
extern s16 D_801EE664;
extern s16 D_801EE666;
extern s16 D_801EE668;
void func_8017BE60(u8 *arg0);
/* the driver UpdateScript calls these before their definitions */
void func_8017BC38(s32 obj);
void func_8017A4AC(void);
void func_8017AE2C(Mover *obj);
extern s32 D_801EE1CC;       /* VM wait frames */
extern s32 D_801EE60C;       /* VM wait callback */

typedef struct { SVECTOR off; s16 a, b, c; } VmOrbit;
extern SVECTOR D_801EE5FC;
extern SVECTOR D_801EE604;

typedef struct { SVECTOR a, b; } VmCamPair;
typedef struct { s8 m; } VmCamMode;
extern VmCamPair D_80190E4C[];
extern void FaceHelper(s32 obj, SVECTOR *in, SVECTOR *out);
extern void UpdateCamera();
extern s32 D_80126984;
extern s32 D_80126988;
extern s32 D_8012698C;
extern s32 D_80126990;
extern s32 D_80126994;
extern s32 D_80126998;

typedef struct {
    s16 kind;
    s16 n;
    s16 heading;
    s16 speed;
    s16 fwd;
    s16 walkTurn;
    SVECTOR pt;
} VmMove;
extern SVECTOR D_801EF3B4;
extern s32 HeadingToPoint();
extern s32 TurnStep();
extern s32 GroundDistSqTo();

extern void PlacePlayer();
extern void WalkPlayerTo();
extern void func_80172894();
extern void func_80172C50();
extern void func_801733FC();
extern void func_80173460();
extern void func_801734BC();
extern void func_801736B0();
typedef void (*VmCmdFn)(void);
typedef void (*VmCmdFn3)(s32 a, s32 b, s32 c);

typedef s32 (*VmWait)(s32 obj);

typedef struct { s16 x, y, z, pad; } SV8;
extern SV8 D_80126AF0[];
extern SV8 D_80126AF2[];
extern SV8 D_80126AF4[];
extern SV8 D_80128120[];
extern SV8 D_80128138[];
extern u8 D_80126730[];
extern void PackAngles10();
extern s32 SpawnEffectLimited();

extern s32 func_8015094C();

extern s16 D_80126D20;
extern s32 g_PlayerActionScript;
extern s32 D_80126D5C;
extern s32 D_80126D60;
extern s16 D_80126D64;
extern s16 D_80126D66;
extern s16 D_80126D68;
extern s16 D_80126D6A;
extern s8 D_80126D6D;
extern s8 D_80126D6E;
extern s32 D_80127058;
extern s32 D_8012705C;
extern s32 D_80127060;
extern s32 D_80127064;
extern s32 D_80127068;
extern s32 D_8012706C;
extern s32 D_80127070;
extern s32 D_80127074;

extern u8 D_800D4C14;
typedef struct { s32 a; s32 b; } SPair2;
extern SPair2 D_8018FD88[];
typedef struct { s32 p[2]; s32 f; } S3;
extern S3 D_8018FDC8;
extern s32 D_8018FD8C[];
extern void UpdateBarSwingPoint();

typedef struct { u32 tag; u8 r0, g0, b0, code; s16 x0, y0, w, h; u32 pad; } STile;
extern u8 D_8011F7AB;
extern u8 D_8011F7F0;
extern u8 D_8011F837;

extern u8 D_8018F948;
extern u8 D_8018F96C;
extern u8 D_8018F990;
extern u8 D_8018F9B4;
extern u8 D_8018F9D8;
extern u8 D_8018F9FC;
extern u8 D_8018FA20;
extern u8 D_8018FA44;
extern void func_80145B24();

void func_80145934(void) {
    s32 r;

    r = GetProgress();
    if (r >= 0x6A4) {
        func_800D185C(&D_8018FA44);
    } else if (r >= 0x5DC) {
        func_800D185C(&D_8018F9B4);
    } else if (r >= 0x578) {
        func_800D185C(&D_8018F990);
    } else if (r >= 0x514) {
        func_800D185C(&D_8018F96C);
    } else if (r >= 0x384) {
        func_800D185C(&D_8018FA44);
    } else if (r >= 0x258) {
        func_800D185C(&D_8018FA20);
    } else if (r >= 0xC8) {
        func_800D185C(&D_8018F9FC);
    } else if (r >= 0xA) {
        func_800D185C(&D_8018F9D8);
    } else {
        func_800D185C(&D_8018F948);
    }
    func_80145B24();
}

extern u8 D_8018FA68;
extern u8 D_8018FA8C;
extern u8 D_8018FAB0;
extern u8 D_8018FAD4;

void func_80145A2C(void) {
    s32 r;

    r = GetProgress();
    if (r >= 0x6A4) {
        func_800D185C(&D_8018FAD4);
    } else if (r >= 0x5DC) {
        func_800D185C(&D_8018F9B4);
    } else if (r >= 0x578) {
        func_800D185C(&D_8018F990);
    } else if (r >= 0x514) {
        func_800D185C(&D_8018F96C);
    } else if (r >= 0x384) {
        func_800D185C(&D_8018FAD4);
    } else if (r >= 0x258) {
        func_800D185C(&D_8018FAB0);
    } else if (r >= 0xC8) {
        func_800D185C(&D_8018FA8C);
    } else if (r >= 0xA) {
        func_800D185C(&D_8018FA68);
    } else {
        func_800D185C(&D_8018F948);
    }
    func_80145B24();
}

extern s32 StartDeadline8();

void func_80145B24(void) {
    u8 *w = (u8 *)&D_800AF630;
    s32 r;

    r = GetProgress();
    if (GetVar16(8) & 0x8000) {
        SetVar16(8, 0);
        StartDeadline8();
    }
    if (r >= 0x6A4) {
        SetFlag(0x1A, 0);
        SetFlag(0x8E, 0);
        SetFlag(0x143, 0);
        if (D_80078EC0 & 0x7F) {
            D_80078EC0 = 1;
        }
        ClearHeldAbility((u8 *)&g_Player);
        SetProgress(0x4B0);
    }
    AF(w, s16, 0xA3DA) = 0x3000;
}

extern s32 GetMusicVolume();
extern s32 GetEffectsVolume();
extern s32 GetSoundMode();

void func_80145BF8(void) {
    PlaySoundId(0x21, GetMusicVolume() & 0xFFFF);
    PlaySoundId(0x22, GetEffectsVolume() & 0xFFFF);
    if (GetSoundMode() == 0) {
        PlaySoundId(0xC, 0);
    } else {
        PlaySoundId(0xB, 0);
    }
}

void func_80145C54(void) {
    s32 x;
    u32 t;
    s32 y;

    x = GetVar(0x4A) & 0xFF;
    t = x + 1;
    if (x >= 0x20) {
        x = (s16)t; /* MATCH-TRICK: a narrowing copy (t <= 0x100, so inert) keeps cse from moving the test and the shift onto x */
        if (!(t & 0xF)) {
            x = t >> 4;
        }
        y = x & 0xFF;
        SetVar(0x4A, y);
        SetVar(0x50, y);
    }
    x = GetVar(0x4D) & 0xFF;
    t = x + 1;
    if (x >= 0x20) {
        x = (s16)t; /* MATCH-TRICK: a narrowing copy (t <= 0x100, so inert) keeps cse from moving the test and the shift onto x */
        if (!(t & 0xF)) {
            x = t >> 4;
        }
        SetVar(0x4D, x & 0xFF);
    }
}

extern u8 D_800AFAE8;
extern u8 D_801152C8;
extern s32 D_8011DB10;
extern s32 D_8011F9C4;
extern s16 D_80126BC0;
extern s16 D_80126BC2;
extern s16 D_80126BC4;
extern s16 D_80126BC8;
extern s16 D_80126BCA;
extern s16 D_80126BCC;
extern s16 D_80126C4E;
extern s16 D_80126D10;
extern s16 D_80126D12;
extern void *D_800AF7C8;
extern void *g_PlayerHitData;
extern void InitPresetModel();
extern void ShowAllParts();
extern void SetDoubleTapWindow();
extern void ClearFlag12F();
extern void RestoreAbilityOnLoad();
extern s32 ClearShadow();
extern s32 ClearObj68s();
extern s32 ClearEffects();
extern s32 AllocShadow();
extern void UploadFlagImages();
extern void ClearFatalHit();
extern void ClearPlayerMode1C6();
extern void func_80165938();
extern void ClearCounter5210();
extern void SetFlag7F();

void func_80145CEC(void) {
    u8 unused[8]; /* MATCH-TRICK: frame pad, the original's frame has 8 unused bytes */

    ZeroFill(&g_Player, 0x254);
    g_PlayerModel = &D_800AFAE8;
    D_800AF7C8 = &D_801152C8;
    InitPresetModel(&D_800AFAE8, D_800DE2A4);
    AF(g_Player.model, s32, 0x28) = 0x7FFF7FFF;
    g_PlayerHitData = &D_8018EEBC;
    AF(g_Player.model, s16, 0x18) = 0x1000;
    D_80126BC8 = 0x1000;
    D_80126BC0 = 0x1000;
    D_80126BB8 = 0x1000;
    AF(g_Player.model, s16, 0x1A) = 0x1000;
    D_80126BCA = 0x1000;
    D_80126BC2 = 0x1000;
    D_80126BBA = 0x1000;
    AF(g_Player.model, s16, 0x1C) = 0x1000;
    D_80126BCC = 0x1000;
    D_80126BC4 = 0x1000;
    D_80126BBC = 0x1000;
    D_80126D12 = 0x1000;
    D_80126D10 = 0x1000;
    D_80126C4E = 0x1000;
    ShowAllParts(&g_Player);
    ShowPlayerScene(&g_Player);
    func_80147098((s32)&g_Player);
    func_801470AC((s32)&g_Player);
    AF(g_Player.model, u16, 0x2C) |= 0x50;
    SetDoubleTapWindow(&g_Player, 8);
    ClearFlag12F();
    RestoreAbilityOnLoad();
    ClearShadow();
    ClearObj68s();
    ClearEffects();
    AllocShadow(&g_Player, 1);
    if (D_800B9A08 != 0x30A2 && D_800B9A08 != 0x30A5) {
        UploadFlagImages(0);
    }
    ClearFatalHit();
    ClearPlayerMode1C6();
    D_8011F9C4 = 0;
    func_80165938();
    ClearCounter5210();
    g_SkipSeId = 0;
    D_8011DB10 = 0;
    if ((u32)GetProgress() >= 10) {
        SetFlag7F();
    }
}

extern u8 D_8018EECC;
extern u8 D_8018EEFC;
extern u8 D_8018EF4C;
extern u8 D_8018EF7C;
extern u8 D_8018EFAC;
extern void UploadImageList();

void UploadFlagImages(s32 arg0) {
    switch (arg0) {
    case 0:
        if (GetFlag(0x1F) & 0xFF) {
            UploadImageList(&D_8018EECC);
        }
        if (GetFlag(0x21) & 0xFF) {
            UploadImageList(&D_8018EEFC);
        }
        if (GetFlag(0x1E) & 0xFF) {
            UploadImageList(&D_8018EF4C);
        }
        if (GetFlag(0x1D) & 0xFF) {
            UploadImageList(&D_8018EF7C);
        }
        if (GetFlag(0x20) & 0xFF) {
            UploadImageList(&D_8018EFAC);
        }
        break;
    case 1:
        UploadImageList(&D_8018EECC);
        UploadImageList(&D_8018EEFC);
        UploadImageList(&D_8018EF4C);
        UploadImageList(&D_8018EF7C);
        UploadImageList(&D_8018EFAC);
        break;
    }
}

void UploadImageList(u8 *arg0) {
    while (AF(arg0, s32, 0xC) != 0) {
        MoveImage(arg0, AF(arg0, s32, 8), AF(arg0, s32, 0xC));
        arg0 += 0x10;
    }
}

void func_80146074(void) {
}

extern s32 D_801ED4D0;
extern s32 UpdatePlayer();
extern void func_80146360();
extern s32 FinishPlayerFrame();

void func_8014607C(void) {
    SetSpadStack();
    D_801ED4D0 = UpdatePlayer();
    ResetSpadStack();
    if (D_801ED4D0 != 0) {
        SetSpadStack();
        func_80146360();
        ResetSpadStack();
        SetSpadStack();
        FinishPlayerFrame();
        ResetSpadStack();
    }
}

extern SVECTOR D_801150F0;
extern u16 D_801152B8;
extern u16 D_8012693A;
extern void CommitPlayerMove();
extern s32 GetFlag7F();
extern void TickGameClock();
extern void UpdatePoison();
extern void UpdateClockPhase();
extern void TickGlideTimer();
extern void UpdateShrink();
extern void CloseFlaggedMessage();
extern void UpdatePlayerStatusFlags();
extern s32 UpdateChargeGauge();
extern void RunPlayerAction();
extern void RunPassiveAbility();
extern void RespawnIfFallenOut();
extern void func_8014A638();
extern s32 RunStateHandler4E();
extern void UpdateWakeGauge();
extern s32 UpdateDeadlines();
extern void TickActionLock();
extern void ClearObjByte1C7();
extern void ReadObjPad();
extern void UpdateDoubleTap();
extern s32 UpdatePlayerFace();
extern void TickAbilityTimer();
extern void TickTimer1BC();
extern void TickTimer1BD();
extern void TickWallClimbCooldown();
extern void ClearPlayerEvents();
extern void ClearVel();

s32 UpdatePlayer(void) {
    Player *p = (u8 *)&g_Player;
    u8 *m = g_PlayerModel;

    RespawnIfFallenOut(p);
    D_801150F0 = *(SVECTOR *)&D_80126BE0;
    CommitPlayerMove(p);
    func_80147098((s32)p);
    func_8014A638(p);
    D_8011F730 = 0;
    D_801152B8 = 0;
    D_8012693A = 0;
    if (D_80078EC1 == 0x10 && D_80078EC8 != 0) {
        AF(m, s16, 2) = 6;
        g_PlayerFlags |= 0x800;
    } else {
        AF(m, s16, 2) = 1;
        p->status &= ~0x800;
    }
    if (p->unk1B0 != 0) {
        p->unk1B0--;
    }
    if (RunStateHandler4E(p) == 0 && !((s32)p->status & 0x04000000)) {
        if (GetFlag7F() & 0xFF) {
            TickGameClock(p);
            UpdatePoison(p);
            UpdateWakeGauge(p);
            UpdateDeadlines(p);
        }
        UpdateClockPhase();
        TickGlideTimer(p);
        UpdateShrink(p);
        TickActionLock(p);
        ClearObjByte1C7(p);
        CloseFlaggedMessage(p);
        UpdatePlayerStatusFlags(p);
        ReadObjPad(p, 0);
        UpdateDoubleTap(p);
        UpdateChargeGauge(p);
        RunPlayerAction(p);
        StepPlayerMotion(p);
        UpdatePlayerFace(p);
        TickAbilityTimer(p);
        RunPassiveAbility(p);
        TickTimer1BC(p);
        TickTimer1BD(p);
        TickWallClimbCooldown(p);
        ClearPlayerEvents(p);
        ClearVel(p);
        PosToSVec((u8 *)p + 4, (u8 *)p + 0x98);
        return 1;
    }
    PosToSVec((u8 *)p + 4, (u8 *)p + 0x98);
    return 0;
}

void func_80146360(void) {
    D_8018EFFC[D_80126BA4](&g_Player);
}

s32 FinishPlayerFrame(void) {
    Player *p = &g_Player;
    void *m = g_PlayerModel;
    s16 v;

    UpdatePlayerPoints(p);
    UpdateWeaponParts((u8 *)p);
    ApplyPlayerHidden((s32)p);
    BuildPlayerMatrixOnce(p);
    ApplyPlayerScale(p);
    if (m != NULL) {
        v = g_PlayerX + D_80126C90;
        AF(m, s16, 8) = v;
        AF(m, s32, 0x48) = v;
        v = D_80126B62 + D_80126C92;
        AF(m, s16, 0xA) = v;
        AF(m, s32, 0x4C) = v;
        v = D_80126B66 + D_80126C94;
        AF(m, s16, 0xC) = v;
        AF(m, u16, 0x2C) |= 0x11;
        AF(m, s32, 0x50) = v;
    }
    CountWalkDistance(p);
    AF(&g_Player, SVECTOR, 0x90) = AF(&g_Player, SVECTOR, 0x88);
    D_80126BE0 = g_PlayerX;
    D_80126BE2 = D_80126B62;
    D_80126BE4 = D_80126B66;
    D_80126BA0 = g_PlayerFlags;
    g_PlayerFlags &= 0x3FFFFFFF;
    func_801508F8(p);
    D_80126C9E = 0;
    ClearCrest((s32)p);
    return StartDeadlineEvent(p);
}

void ClearPushVel(void) {
    D_80127098 = 0;
    D_80127094 = 0;
    g_PushVel = 0;
}

void AllocSprite4To6(void) {
    AllocSpriteInRange(4, 6);
}

s32 AllocSprite6To16(void) {
    return AllocSpriteInRange(6, 0x16);
}

s32 AllocModel6To16(void) {
    return AllocModelInRange(6, 0x16);
}

s32 AllocSprite16To3E() {
    return AllocSpriteInRange(0x16, 0x3E);
}

void AllocModel16To26(void) {
    AllocModelInRange(0x16, 0x26);
}

s32 SpawnObj68Limited(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4_0, s32 arg5, s32 arg6, u32 arg7, s32 arg8) {
    u16 arg4 = arg4_0;
    u8 *p;
    u32 n;

    n = 0;
    for (p = &D_8011F9D0; p < &D_8011F9D0 + 0x820; p += 0x68) {
        if (AF(p, u16, 0) == (arg0 & 0xFFFF)) {
            n++;
        }
    }
    if (n >= arg7) {
        return 0;
    }
    SpawnObj68(arg0 & 0xFFFF, arg1, (s16)arg2, (s16)arg3, (s16)arg4, arg5, arg6, arg8);
}

void SpawnObj68On(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    SpawnObj68(arg0 & 0xFFFF, arg1, 0, 0, /* extra? */ 0, /* extra? */ arg2, /* extra? */ arg3, /* extra? */ arg4);
}

extern s32 SpawnObj68Upper();
extern s32 SpawnObj68Lower();

void SpawnObj68(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
    s32 arg0; s32 arg1; s32 arg2; s32 arg3; u16 arg4; s32 arg5; s32 arg6; s32 arg7;
{
    struct { s16 a, c, d; u16 e; s32 b, f, g, h; } s;

    s.a = arg0;
    s.b = arg1;
    s.c = arg2;
    s.d = arg3;
    s.e = arg4;
    s.f = arg5;
    s.g = arg6;
    if (arg7 != 0) {
        SpawnObj68Upper(&s);
    } else {
        SpawnObj68Lower(&s);
    }
}

s32 SpawnObj68Upper(s32 arg0) {
    s32 i;
    s32 off;
    u8 *p;

    for (i = 8, p = &D_8011F9D0 + 0x340; i < 20; p += 0x68, i++) {
        off = i * 0x68;
        if (AF(&D_8011F9D0 + off, u16, 0) == 0) {
            AF(&D_8011F9D0 + off, s32, 0x4C) = AF(arg0, s32, 8);
            AF(&D_8011F9D0 + off, u16, 0) = AF(arg0, u16, 0);
            AF(&D_8011F9D0 + off, u16, 6) = AF(arg0, u16, 2);
            AF(&D_8011F9D0 + off, u16, 0xA) = AF(arg0, u16, 4);
            AF(&D_8011F9D0 + off, u16, 0xE) = AF(arg0, u16, 6);
            AF(&D_8011F9D0 + off, s32, 0x50) = AF(arg0, s32, 0xC);
            AF(&D_8011F9D0 + off, s32, 0x54) = AF(arg0, s32, 0x10);
            return (s32)p;
        }
    }
    return 0;
}

s32 SpawnObj68Lower(s32 arg0) {
    s32 i;
    s32 off;
    u8 *p;
    u8 *s;

    for (i = 0, p = &D_8011F9D0, s = (u8 *)arg0; i < 8; p += 0x68, i++) {
        off = i * 0x68;
        if (AF(&D_8011F9D0 + off, u16, 0) == 0) {
            AF(&D_8011F9D0 + off, s32, 0x4C) = AF(s, s32, 8);
            AF(&D_8011F9D0 + off, u16, 0) = AF(s, u16, 0);
            AF(&D_8011F9D0 + off, u16, 6) = AF(s, u16, 2);
            AF(&D_8011F9D0 + off, u16, 0xA) = AF(s, u16, 4);
            AF(&D_8011F9D0 + off, u16, 0xE) = AF(s, u16, 6);
            AF(&D_8011F9D0 + off, s32, 0x50) = AF(s, s32, 0xC);
            AF(&D_8011F9D0 + off, s32, 0x54) = AF(s, s32, 0x10);
            return (s32)p;
        }
    }
    return 0;
}

extern u8 D_8011F754;

s32 AllocShadow(Player *arg0, s32 arg1) {
    s32 i;
    s32 off;

    for (i = 0; i < 2; i++) {
        off = i * 0x2C;
        if (AF(&D_8011F750, u8, off) == 0) {
            AF(&D_8011F754, s32, off) = arg0;
            AF(&D_8011F750, u8, off) = arg1;
            return (s32)((u8 *)&D_8011F750 + off);
        }
    }
    return 0;
}

s32 SpawnEffectOnLimited(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4) {
    u16 *temp_t2;
    u16 *var_v1;
    u32 var_t0;

    var_t0 = 0;
    var_v1 = &g_Effects;
    temp_t2 = &g_Effects + 0xA50;
    if ((u32) &g_Effects < (u32) temp_t2) {
        do {
            if (*var_v1 == (arg0 & 0xFFFF)) {
                var_t0 += 1;
            }
            var_v1 = (u16 *)((u8 *)var_v1 + 0x58);
        } while ((u32) var_v1 < (u32) temp_t2);
    }
    if (var_t0 < arg4) {
        return SpawnEffectOn(arg0 & 0xFFFF, arg1, arg2, arg3);
    }
    return 0;
}

s32 SpawnEffectOn(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    SpawnEffect(arg0 & 0xFFFF, arg1, 0, 0, 0, arg2, arg3);
}

s32 SpawnEffectLimited(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, u32 arg7) {
    u16 *temp_t2;
    u16 *var_v1;
    u32 var_t0;
    u16 z = arg4;

    var_t0 = 0;
    var_v1 = &g_Effects;
    temp_t2 = &g_Effects + 0xA50;
    if ((u32) &g_Effects < (u32) temp_t2) {
        do {
            if (*var_v1 == (arg0 & 0xFFFF)) {
                var_t0 += 1;
            }
            var_v1 = (u16 *)((u8 *)var_v1 + 0x58);
        } while ((u32) var_v1 < (u32) temp_t2);
    }
    if (var_t0 < arg7) {
        return SpawnEffect(arg0 & 0xFFFF, arg1, arg2, arg3, z, arg5, arg6);
    }
    return 0;
}

extern s32 AllocEffect();

s32 SpawnEffect(s32 kind, StageActor *owner, s16 x, s16 y, s16 z, s32 d, s32 e) {
    struct {
        s16 kind;
        s16 x;
        s16 y;
        s16 z;
        StageActor *owner;
        s32 d;
        s32 e;
    } p;

    p.kind = kind;
    p.owner = owner;
    p.x = x;
    p.y = y;
    p.z = z;
    p.d = d;
    p.e = e;
    return AllocEffect(&p);
}

extern s32 AllocEffectFromEnd();

s32 SpawnEffectFromEnd(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    struct {
        s16 a;
        s16 b;
        s16 c;
        s16 d;
        s32 e;
        s32 f;
        s32 g;
    } p;
    s16 x = arg4;

    p.a = arg0;
    p.e = arg1;
    p.b = arg2;
    p.c = arg3;
    p.d = x;
    p.f = arg5;
    p.g = arg6;
    return AllocEffectFromEnd(&p);
}

s32 AllocEffect(u8 *arg0) {
    u8 *p;

    for (p = &g_Effects; p < &g_Effects + 0xA50; p += 0x58) {
        if (AF(p, u16, 0) == 0) {
            AF(p, s32, 0x34) = AF(arg0, s32, 8);
            AF(p, u16, 0) = AF(arg0, u16, 0);
            AF(p, u16, 6) = AF(arg0, u16, 2);
            AF(p, u16, 0xA) = AF(arg0, u16, 4);
            AF(p, u16, 0xE) = AF(arg0, u16, 6);
            AF(p, s32, 0x2C) = AF(arg0, s32, 0xC);
            AF(p, s32, 0x30) = AF(arg0, s32, 0x10);
            return (s32) p;
        }
    }
    return 0;
}

s32 AllocEffectFromEnd(u8 *arg0) {
    u8 *p;

    for (p = &g_Effects + 0x9F8; p >= &g_Effects; p -= 0x58) {
        if (AF(p, u16, 0) == 0) {
            AF(p, s32, 0x34) = AF(arg0, s32, 8);
            AF(p, u16, 0) = AF(arg0, u16, 0);
            AF(p, u16, 6) = AF(arg0, u16, 2);
            AF(p, u16, 0xA) = AF(arg0, u16, 4);
            AF(p, u16, 0xE) = AF(arg0, u16, 6);
            AF(p, s32, 0x2C) = AF(arg0, s32, 0xC);
            AF(p, s32, 0x30) = AF(arg0, s32, 0x10);
            return (s32) p;
        }
    }
    return 0;
}

void FreeEffect(arg0, arg1, arg2, arg3)
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 arg3;
{
    s32 var_a1;
    u16 *temp_a0;

    temp_a0 = AF(arg0, u16 *, 0x20);
    if (temp_a0 != NULL) {
        var_a1 = 0x38;
        if (*temp_a0 == 1) {
            var_a1 = 0x84;
        }
        ZeroFill((s32) temp_a0, var_a1, arg2, arg3);
    }
    ZeroFill(arg0, 0x58);
}

void SetObjState(s32 arg0, s32 arg1) {
    AF(arg0, s16, 2) = (s16) arg1;
}

void NextObjState(arg0, arg1, arg2, arg3)
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 arg3;
{
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void PrevObjState(u8 *arg0) {
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) - 1);
}

void AddPushVel(u8 *arg0) {
    s32 *p = &g_PushVel;

    AF(arg0, s32, 0x10) += *p;
    AF(arg0, s32, 0x14) += D_80127094;
    AF(arg0, s32, 0x18) += D_80127098;
    *p = 0;
    D_80127094 = 0;
    D_80127098 = 0;
}

void SetPushVel(u8 *arg0) {
    s32 *p = &g_PushVel;

    AF(arg0, s32, 0x10) = *p;
    AF(arg0, s32, 0x14) = D_80127094;
    AF(arg0, s32, 0x18) = D_80127098;
    *p = 0;
    D_80127094 = 0;
    D_80127098 = 0;
}

void ClearObjVel(s32 arg0) {
    AF(arg0, s32, 0x18) = 0;
    AF(arg0, s32, 0x14) = 0;
    AF(arg0, s32, 0x10) = 0;
}

void ClearObjPush(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    SetObjPush(arg0, 0, 0, 0);
}

void SetObjPushV(s32 arg0, s32 arg1) {
    SetObjPush(arg0, AF(arg1, s32, 0), AF(arg1, s32, 4), AF(arg1, s32, 8));
}

void SetObjPush(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AF(arg0, s32, 0x24) = arg1;
    AF(arg0, s32, 0x28) = arg2;
    AF(arg0, s32, 0x2C) = arg3;
}

void SetObjPushClamped(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    if (var_a1 < 0) {
        temp_v1 = -arg4;
        if (var_a1 < temp_v1) {
            var_a1 = temp_v1;
        }
    } else if (arg4 < var_a1) {
        var_a1 = arg4;
    }
    if (var_a2 < 0) {
        temp_v1_2 = -arg4;
        if (var_a2 < temp_v1_2) {
            var_a2 = temp_v1_2;
        }
    } else if (arg4 < var_a2) {
        var_a2 = arg4;
    }
    if (var_a3 < 0) {
        temp_v1_3 = -arg4;
        if (var_a3 < temp_v1_3) {
            var_a3 = temp_v1_3;
        }
    } else if (arg4 < var_a3) {
        var_a3 = arg4;
    }
    AF(arg0, s32, 0x24) = var_a1;
    AF(arg0, s32, 0x28) = var_a2;
    AF(arg0, s32, 0x2C) = var_a3;
}

void SetObjTimer(arg0, arg1) s32 arg0; s32 arg1; {
    AF(arg0, s32, 0x1C) = arg1;
}

s32 TickObjTimer(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x1C) = --temp_v0;
        return temp_v0 == 0;
    }
    return 1;
}

extern void RotateByCamera();

void PlaceAtObjPoint(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    SVECTOR v;

    SVecToPos(arg2, arg1);
    ObjLocalToWorld16(arg0, arg1);
    RotateByCamera(arg3, &v);
    AF(arg1, u16, 2) += v.vx;
    AF(arg1, u16, 6) += v.vy;
    AF(arg1, u16, 0xA) += v.vz;
}

extern s16 GetCameraPitch();
extern s16 GetCameraHeading();
extern MATRIX *RotMatrix(SVECTOR *r, MATRIX *m);
extern SVECTOR *ApplyMatrixSV(MATRIX *m, SVECTOR *v0, SVECTOR *v1);

void RotateByCamera(SVECTOR *arg0, SVECTOR *arg1) {
    SVECTOR r;
    MATRIX m;

    r.vx = GetCameraPitch();
    r.vy = GetCameraHeading();
    r.vz = 0;
    RotMatrix(&r, &m);
    ApplyMatrixSV(&m, arg0, arg1);
}

void RespawnIfFallenOut(Player *arg0) {
    if (arg0->pos[1].h.i >= 0x401) {
        SVecToPos((s32) &D_80126DB0, (u8 *)arg0 + 4);
        AF(arg0, SVECTOR, 0x88) = AF(&D_80126DB0, SVECTOR, 0x0);
        arg0->model->rot.vy = (u16) D_80126DB6;
    }
}

void ClearPlayerMark4C(u8 *arg0) {
    AF(arg0, u8, 0x4C) = 0;
}

void SetPlayerMark4C(u8 *arg0) {
    AF(arg0, u8, 0x4C) = 1;
}

void BeginScene(s32 arg0) {
    AF(arg0, u8, 0x4D) = 1;
}

void EndScene(arg0, arg1)
s32 arg0;
s32 arg1;
{
    AF(arg0, u8, 0x4D) = 2;
}

void SetPlayerState(s32 arg0, s32 arg1) {
    AF(arg0, s16, 0) = (s16) arg1;
    AF(arg0, s16, 2) = 0;
}

void ShowPlayerScene(s32 arg0) {
    AF(arg0, u8, 0x221) = 0;
}

void HidePlayerScene(arg0)
    u8 *arg0;
{
    AF(arg0, u8, 0x221) = 1;
}

void func_80147098(s32 arg0) {
    AF(arg0, u8, 0x220) = 0;
}

void func_801470A0(s32 arg0) {
    AF(arg0, u8, 0x220) = 1;
}

void func_801470AC(s32 arg0) {
    AF(arg0, u8, 0x222) = 0;
}

void func_801470B4(s32 arg0) {
    AF(arg0, u8, 0x222) = 1;
}

void ApplyPlayerHidden(Player *arg0) {
    ModelObj *a;

    a = arg0->model;
    if (a != NULL) {
        if ((arg0->pad220[2] | (arg0->pad220[1] | arg0->pad220[0])) != 0) {
            a->unk04 |= 0x80000000;
        } else {
            a->unk04 &= 0x7FFFFFFF;
        }
    }
}

void ApplyPlayerScale(Player *arg0) {
    s32 v[3];

    v[0] = arg0->scaleA[0] * arg0->scaleB[0] / 4096;
    v[0] = v[0] * arg0->scaleC[0] / 4096;
    v[1] = arg0->scaleA[1] * arg0->scaleB[1] / 4096;
    v[1] = v[1] * arg0->scaleC[1] / 4096;
    v[2] = arg0->scaleA[2] * arg0->scaleB[2] / 4096;
    v[2] = v[2] * arg0->scaleC[2] / 4096;
    if (v[0] > 0xFFFF) {
        v[0] = 0xFFFF;
    }
    if (v[1] > 0xFFFF) {
        v[1] = 0xFFFF;
    }
    if (v[2] > 0xFFFF) {
        v[2] = 0xFFFF;
    }
    arg0->model->scale.vx = v[0];
    arg0->model->scale.vy = v[1];
    arg0->model->scale.vz = v[2];
}

void func_80147264(u8 *arg0) {
    D_80126BB8 = AF(arg0, u16, 0);
    D_80126BBA = AF(arg0, u16, 2);
    D_80126BBC = AF(arg0, u16, 4);
}

void func_80147290(void) {
    D_80126BB8 = 0x1000;
    D_80126BBA = 0x1000;
    D_80126BBC = 0x1000;
}

s32 ClearPlayerFlag7E2(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x7E) & 0xFFFD;
    AF(arg0, u16, 0x7E) = temp_v0;
    return (s32) temp_v0;
}

s32 SetPlayerFlag7E2(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x7E) | 2;
    AF(arg0, u16, 0x7E) = temp_v0;
    return (s32) temp_v0;
}

void ResetSkipSe(void) {
    g_SkipSeId = 0x451;
}

void SetSkipSe(s32 arg0) {
    g_SkipSeId = arg0;
}

s32 PlaySeNow(arg0, arg1)
s32 arg0;
s32 arg1;
{
    return PlaySePositional(arg0 & 0xFFFF, 0);
}

void PlaySe(arg0, arg1, arg2, arg3)
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 arg3;
{
    s32 temp_a0;

    temp_a0 = arg0 & 0xFFFF;
    if (temp_a0 == g_SkipSeId) {
        g_SkipSeId = 0;
        return;
    }
    PlaySePositional(temp_a0, 0);
}

void PlaySoundAtPoint(SVECTOR *v, u16 a, u16 b);

s32 PlaySePositional(s32 arg0, s32 arg1) {
    SVECTOR v;
    Player *p = &g_Player;

    if (D_800B9A08 == 0x308D) {
        PosToSVec(p->pos, &v);
        PlaySoundAtPoint(&v, arg0, arg1);
    } else {
        PlaySoundId(arg0 & 0xFFFF, arg1 & 0xFFFF);
    }
}

void ClearVel(Player *arg0) {
    arg0->vel[2] = 0;
    arg0->vel[1] = 0;
    arg0->vel[0] = 0;
}

void MoveObjByVel(arg0, arg1, arg2, arg3)
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 arg3;
{
    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) + AF(arg0, s32, 0x10));
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + AF(arg0, s32, 0x14));
    AF(arg0, s32, 0xC) = (s32) (AF(arg0, s32, 0xC) + AF(arg0, s32, 0x18));
    if ((AF(arg0, s32, 0x10) != 0) || (AF(arg0, s32, 0x14) != 0) || (AF(arg0, s32, 0x18) != 0)) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x80000000);
    }
}

s32 ApplyFallSpeed(arg0, arg1)
s32 arg0;
s32 arg1;
{
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 8) + AF(arg0, s32, 0x34);
    AF(arg0, s32, 8) = temp_v0;
    return temp_v0;
}

s32 BuildPlayerMatrixOnce(arg0, arg1, arg2)
s32 arg0;
s32 arg1;
s32 arg2;
{
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0x44) & 0x40000000;
    if (var_v0 == 0) {
        SmoothTiltUpVector();
        BuildTiltedMatrix(arg0);
        var_v0 = AF(arg0, s32, 0x44) | 0x40000000;
        AF(arg0, s32, 0x44) = var_v0;
    }
    return var_v0;
}

void ClearAngleOverride(s32 arg0) {
    AF(arg0, s16, 0x136) = 0;
    AF(arg0, s16, 0x134) = 0;
    AF(arg0, s16, 0x132) = 0;
    AF(arg0, s16, 0x130) = 0;
}

void ResetTiltVectors(arg0, arg1)
s32 arg0;
s32 arg1;
{
    AF(arg0, s16, 0x11C) = 0;
    AF(arg0, s16, 0x11A) = 0;
    AF(arg0, s16, 0x118) = 0;
    AF(arg0, s16, 0x124) = 0;
    AF(arg0, s16, 0x122) = 0;
    AF(arg0, s16, 0x120) = 0;
    AF(arg0, s16, 0x12C) = 0;
    AF(arg0, s16, 0x12A) = 0;
    AF(arg0, s16, 0x128) = 0;
}

extern void VectorToAngles();

void SmoothTiltUpVector(s32 arg0) {
    SVECTOR v;
    SVECTOR unused; /* MATCH-TRICK: unused local, the original frame is 8 bytes bigger */

    v = AF(arg0, SVECTOR, 0x120);
    if ((v.vx | v.vy | v.vz) == 0) {
        v.vy = -0xFFF;
    }
    if (AF(arg0, s16, 0x12E) != 0) {
        v.vx += AF(arg0, s16, 0x128);
        v.vy += AF(arg0, s16, 0x12A);
        v.vz += AF(arg0, s16, 0x12C);
    }
    AF(arg0, s16, 0x118) = EaseValue(AF(arg0, s16, 0x118), v.vx, 8);
    AF(arg0, s16, 0x11A) = EaseValue(AF(arg0, s16, 0x11A), v.vy, 8);
    AF(arg0, s16, 0x11C) = EaseValue(AF(arg0, s16, 0x11C), v.vz, 8);
    v.vx = AF(arg0, s16, 0x118);
    v.vy = AF(arg0, s16, 0x11A);
    v.vz = AF(arg0, s16, 0x11C);
    VectorToAngles(&v, arg0 + 0x100);
}

void BuildTiltedMatrix(u8 *arg0) {
    u8 *p;
    u8 *m;
    s32 v;

    p = AF(arg0, u8 *, 0x20);
    m = p + 0x34;
    SetIdentityRot(m);
    RotateMatrixY(m, AF(arg0, s16, 0x102));
    RotateMatrixX(m, AF(arg0, s16, 0x100));
    RotateMatrixZ(m, AF(arg0, s16, 0x104));
    if (AF(arg0, u16, 0x136) & 2) {
        v = AF(arg0, s16, 0x132);
    } else {
        v = AF(p, s16, 0x12);
    }
    RotateMatrixY(m, v);
    if (AF(arg0, u16, 0x136) & 1) {
        v = AF(arg0, s16, 0x130);
    } else {
        v = AF(p, s16, 0x10);
    }
    RotateMatrixX(p + 0x34, v);
    if (AF(arg0, u16, 0x136) & 4) {
        v = AF(arg0, s16, 0x134);
    } else {
        v = AF(p, s16, 0x14);
    }
    RotateMatrixZ(p + 0x34, v);
}

void RebuildModelMatrix(u8 *arg0, s32 arg1) {
    s32 temp_s0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    temp_s0 = temp_s1 + 0x34;
    SetIdentityRot(temp_s0, arg1);
    RotateMatrixX(temp_s0, (s32) AF(temp_s1, s16, 0x10));
    RotateMatrixY(temp_s0, (s32) AF(temp_s1, s16, 0x12));
    RotateMatrixZ(temp_s0, (s32) AF(temp_s1, s16, 0x14));
    AF(temp_s1, u16, 0x2C) = (u16) (AF(temp_s1, u16, 0x2C) | 1);
}

void AddModelRotX(u8 *arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x10) = (u16) ((AF(temp_v1, u16, 0x10) + arg1) & 0xFFF);
}

void AddModelRotY(u8 *arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) ((AF(temp_v1, u16, 0x12) + arg1) & 0xFFF);
}

void AddModelRotZ(u8 *arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x14) = (u16) ((AF(temp_v1, u16, 0x14) + arg1) & 0xFFF);
}

void SetFallSpeed(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x34) = arg1;
    if (arg1 < -0x1F0000) {
        AF(arg0, s32, 0x34) = -0x1F0000;
        return;
    }
    if (arg1 > 0x1F0000) {
        AF(arg0, s32, 0x34) = 0x1F0000;
    }
}

void AddFallSpeedClamped(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x34) + arg1;
    AF(arg0, s32, 0x34) = temp_v0;
    if (arg1 < 0) {
        if (temp_v0 < -0x1F0000) {
            AF(arg0, s32, 0x34) = -0x1F0000;
            return;
        }
    }
    if ((arg1 > 0) && (AF(arg0, s32, 0x34) > 0x1F0000)) {
        AF(arg0, s32, 0x34) = 0x1F0000;
    }
}

void AddPush(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AddPushX();
    AddPushY(arg0, arg2);
    AddPushZ(arg0, arg3);
}

void AddPushUnlimited(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AddPushXLimit(arg0, arg1, 0x7FFFFFFF);
    AddPushYLimit(arg0, arg2, 0x7FFFFFFF);
    AddPushZLimit(arg0, arg3, 0x7FFFFFFF);
}

void AddPushX(arg0, arg1)
s32 arg0;
s32 arg1;
{
    AddPushXLimit(arg0, arg1, 0x1F0000);
}

void AddPushXLimit(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AF(arg0, s32, 0x24) + arg1;
    AF(arg0, s32, 0x24) = temp_v0;
    if (arg1 < 0) {
        temp_v1 = -arg2;
        if (temp_v1 >= temp_v0) {
            AF(arg0, s32, 0x24) = temp_v1;
            return;
        }
    }
    if ((arg1 > 0) && (AF(arg0, s32, 0x24) >= arg2)) {
        AF(arg0, s32, 0x24) = arg2;
    }
}

s32 AddPushY(s32 arg0, s32 arg1) {
    AddPushYLimit(arg0, arg1, 0x1F0000);
}

void AddPushYLimit(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AF(arg0, s32, 0x28) + arg1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (arg1 < 0) {
        temp_v1 = -arg2;
        if (temp_v1 >= temp_v0) {
            AF(arg0, s32, 0x28) = temp_v1;
            return;
        }
    }
    if ((arg1 > 0) && (AF(arg0, s32, 0x28) >= arg2)) {
        AF(arg0, s32, 0x28) = arg2;
    }
}

s32 AddPushZ(s32 arg0, s32 arg1) {
    AddPushZLimit(arg0, arg1, 0x1F0000);
}

void AddPushZLimit(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = AF(arg0, s32, 0x2C) + arg1;
    AF(arg0, s32, 0x2C) = temp_v0;
    if (arg1 < 0) {
        temp_v1 = -arg2;
        if (temp_v1 >= temp_v0) {
            AF(arg0, s32, 0x2C) = temp_v1;
            return;
        }
    }
    if ((arg1 > 0) && (AF(arg0, s32, 0x2C) >= arg2)) {
        AF(arg0, s32, 0x2C) = arg2;
    }
}

s32 SetVelFromPushKeepAxes(arg0, arg1)
s32 arg0;
s32 arg1;
{
    return AddPushFacing(arg0, 0, 0, 0);
}

void SetVelFromPushFacing(s32 arg0) {
    AddPushFacingFree(arg0, 0, 0, 0);
}

extern void AddPushToWorld();
extern s32 SetVelKeepAxes();

s32 AddPushFacing(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp18[4];

    AddPushToWorld(arg0, arg1, arg2, arg3, sp18);
    return SetVelKeepAxes(arg0, sp18);
}

extern void AddPushToWorldUnlimited();

void AddPushFacingUnlimited(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp18[4];

    AddPushToWorldUnlimited(arg0, arg1, arg2, arg3, sp18);
    SetVelKeepAxes(arg0, sp18);
}

s32 SetVelKeepAxes(u8 *arg0, s32 *arg1) {
    if (AF(arg0, s32, 0x44) & 0x400000) {
        g_PushVel = AF(arg0, s32, 0x24);
    } else {
        g_PushVel = arg1[0];
    }
    if (AF(arg0, s32, 0x44) & 0x800000) {
        D_80127094 = AF(arg0, s32, 0x28);
    } else {
        D_80127094 = arg1[1];
    }
    if (AF(arg0, s32, 0x44) & 0x1000000) {
        D_80127098 = AF(arg0, s32, 0x2C);
    } else {
        D_80127098 = arg1[2];
    }
    AF(arg0, s32, 0x10) = g_PushVel;
    AF(arg0, s32, 0x14) = D_80127094;
    AF(arg0, s32, 0x18) = D_80127098;
    g_PushVel = 0;
    D_80127094 = 0;
    D_80127098 = 0;
}

void AddPushFacingFree(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp18[4];
    s32 *p = &g_PushVel;

    AddPushToWorld(arg0, arg1, arg2, arg3, sp18);
    p[0] = sp18[0];
    p[1] = sp18[1];
    p[2] = sp18[2];
    AF(arg0, s32, 0x10) = g_PushVel;
    AF(arg0, s32, 0x14) = D_80127094;
    AF(arg0, s32, 0x18) = D_80127098;
    g_PushVel = 0;
    D_80127094 = 0;
    D_80127098 = 0;
}

extern void PushToWorld();

void AddPushToWorld(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    AddPushX(arg0, arg1);
    AddPushY(arg0, arg2);
    AddPushZ(arg0, arg3);
    PushToWorld(arg0, arg4);
}

void AddPushToWorldUnlimited(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    AddPushXLimit(arg0, arg1, 0x7FFFFFFF);
    AddPushYLimit(arg0, arg2, 0x7FFFFFFF);
    AddPushZLimit(arg0, arg3, 0x7FFFFFFF);
    PushToWorld(arg0, arg4);
}

extern void ApplyMatrixLV(MATRIX *m, VECTOR *v0, VECTOR *v1);

void PushToWorld(u8 *arg0, VECTOR *arg1) {
    u8 unused[0x10]; /* MATCH-TRICK: frame pad, the original's frame has 16 unused bytes below the matrix */
    MATRIX m;
    MATRIX *mp;
    u8 *temp_s0;

    temp_s0 = AF(arg0, u8 *, 0x20);
    mp = &m;
    SetIdentityRot(mp);
    RotateMatrixX(mp, AF(temp_s0, s16, 0x10));
    RotateMatrixY(mp, AF(temp_s0, s16, 0x12));
    RotateMatrixZ(mp, AF(temp_s0, s16, 0x14));
    ApplyMatrixLV(mp, (VECTOR *)(arg0 + 0x24), arg1);
}

extern MATRIX *RotMatrixX(s32 r, MATRIX *m);
extern MATRIX *RotMatrixY(s32 r, MATRIX *m);
extern MATRIX *RotMatrixZ(s32 r, MATRIX *m);

void AddPushFacingYXZ(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    VECTOR v;
    MATRIX m;
    u8 *temp_s2;
    s32 *p = &g_PushVel;

    temp_s2 = AF(arg0, u8 *, 0x20);
    AddPushX();
    AddPushY((s32) arg0, arg2);
    AddPushZ((s32) arg0, arg3);
    SetIdentityRot(&m);
    RotMatrixY(AF(temp_s2, s16, 0x12), &m);
    RotMatrixX(AF(temp_s2, s16, 0x10), &m);
    RotMatrixZ(AF(temp_s2, s16, 0x14), &m);
    ApplyMatrixLV(&m, (VECTOR *)(arg0 + 0x24), &v);
    p[0] = v.vx;
    p[1] = v.vy;
    p[2] = v.vz;
    AF(arg0, s32, 0x10) = g_PushVel;
    AF(arg0, s32, 0x14) = D_80127094;
    AF(arg0, s32, 0x18) = D_80127098;
    g_PushVel = 0;
    D_80127094 = 0;
    D_80127098 = 0;
}

void SetVelFromPush(s32 arg0) {
    AddPushSetVel(arg0, 0, 0, 0);
}

void AddPushSetVel(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 unused[0x40]; /* MATCH-TRICK: frame pad, the original's frame has 64 unused bytes */

    AddPushX();
    AddPushY(arg0, arg2);
    AddPushZ(arg0, arg3);
    g_PushVel = AF(arg0, s32, 0x24);
    D_80127094 = AF(arg0, s32, 0x28);
    D_80127098 = AF(arg0, s32, 0x2C);
    AF(arg0, s32, 0x10) = ((VECTOR *)&g_PushVel)->vx;
    AF(arg0, s32, 0x14) = ((VECTOR *)&g_PushVel)->vy;
    AF(arg0, s32, 0x18) = ((VECTOR *)&g_PushVel)->vz;
    g_PushVel = 0;
    D_80127094 = 0;
    D_80127098 = 0;
}

s32 AddFallSpeedLimited(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;

    var_a1 = arg1;
    temp_v1 = AF(arg0, s32, 0x34);
    if (temp_v1 < 0) {
        if ((var_a1 < 0) && (temp_v1 <= -0x1F0000)) {
            var_a1 = 0;
        }
    } else if ((var_a1 > 0) && (temp_v1 > 0x1EFFFF)) {
        var_a1 = 0;
    }
    temp_v0 = AF(arg0, s32, 0x34) + var_a1;
    AF(arg0, s32, 0x34) = temp_v0;
    return temp_v0;
}

void func_80148094(u8 *arg0, u8 *arg1, u8 *arg2) {
    VECTOR v;
    MATRIX m;
    u8 *temp_s4;
    s16 a;
    s32 b;
    s32 t;
    s32 r;
    s32 t2;

    temp_s4 = AF(arg0, u8 *, 0x20);
    if (AF(arg1, s16, 0) != 0 || AF(arg1, s16, 4) != 0) {
        a = ratan2(-AF(arg1, s16, 4), -AF(arg1, s16, 0)) + 0x400;
        SetIdentityRot(&m);
        RotateMatrixY(&m, AF(temp_s4, s16, 0x12));
        ApplyMatrixLV(&m, (VECTOR *)(arg0 + 0x24), &v);
        b = (s16)AngleDist(a, (s16)(ratan2(v.vz, v.vx) + 0x400));
        t = AF(arg0, s32, 0x24);
        v.vx = t;
        if (t < 0) {
            v.vx = -t;
        }
        t2 = AF(arg0, s32, 0x2C);
        v.vz = t2;
        if (t2 < 0) {
            v.vz = -t2;
        }
        r = csqrt(AF(arg1, s16, 0) * AF(arg1, s16, 0) + AF(arg1, s16, 4) * AF(arg1, s16, 4)) / 64;
        r = ratan2(AF(arg1, s16, 2), r);
        if (b < 0x200) {
            if (v.vx == v.vz) {
                v.vx = AF(arg0, s32, 0x24) * -r / 1024;
                v.vy = 0;
                v.vz = AF(arg0, s32, 0x2C) * -r / 1024;
            } else if (v.vz < v.vx) {
                v.vx = AF(arg0, s32, 0x24) * -r / 1024;
                v.vy = 0;
                v.vz = AF(arg0, s32, 0x2C);
            } else {
                v.vx = AF(arg0, s32, 0x24);
                v.vy = 0;
                v.vz = AF(arg0, s32, 0x2C) * -r / 1024;
            }
        } else if (b > 0x200) {
            if (v.vx == v.vz) {
                v.vx = AF(arg0, s32, 0x24) + AF(arg0, s32, 0x24) * -r / 1024;
                v.vy = 0;
                v.vz = AF(arg0, s32, 0x2C) + AF(arg0, s32, 0x2C) * -r / 1024;
            } else if (v.vz < v.vx) {
                v.vx = AF(arg0, s32, 0x24) + AF(arg0, s32, 0x24) * -r / 1024;
                v.vy = 0;
                v.vz = AF(arg0, s32, 0x2C);
            } else {
                v.vx = AF(arg0, s32, 0x24);
                v.vy = 0;
                v.vz = AF(arg0, s32, 0x2C) + AF(arg0, s32, 0x2C) * -r / 1024;
            }
        } else {
            v.vx = AF(arg0, s32, 0x24);
            v.vy = 0;
            v.vz = AF(arg0, s32, 0x2C);
        }
        AF(arg2, s32, 0) = v.vx;
        AF(arg2, s32, 4) = v.vy;
        AF(arg2, s32, 8) = v.vz;
    } else {
        AF(arg2, s32, 0) = AF(arg0, s32, 0x24);
        AF(arg2, s32, 4) = AF(arg0, s32, 0x28);
        AF(arg2, s32, 8) = AF(arg0, s32, 0x2C);
    }
}

extern s32 TraceMap();

void SaveSafeGroundPos(Player *arg0) {
    SVECTOR a;
    SVECTOR b;

    PosToSVec((u8 *)arg0 + 4, &a);
    b.vx = a.vx;
    b.vy = a.vy + 8;
    b.vz = a.vz;
    if (TraceMap(1, &a, &b) == 0x2000 && arg0->pos[0].h.i == b.vx && arg0->pos[1].h.i == b.vy &&
        arg0->pos[2].h.i == b.vz && ((u8 *)&b)[6] == 0) {
        PosToSVec((u8 *)arg0 + 4, (u8 *)arg0 + 0xA0);
    }
}

void func_801484B0(s32 arg0, s32 arg1) {
    ReadPosePoints(AF(g_PlayerModel, s32, 0x20) - 0x10, arg0, arg1);
}

s32 func_801484E8(arg0, arg1, arg2)
s32 arg0;
s32 arg1;
s32 arg2;
{
    ReadPosePoints(PeekPlayerMotionPose((s32) &g_Player) - 0x10, arg0, arg1);
}

void func_80148534(s32 arg0, s32 arg1) {
    ReadPosePoints(AF(g_PlayerModel, s32, 0x20) - 8, arg0, arg1);
}

s32 func_8014856C(arg0, arg1, arg2)
s32 arg0;
s32 arg1;
s32 arg2;
{
    ReadPosePoints(PeekPlayerMotionPose((s32) &g_Player) - 8, arg0, arg1);
}

void ReadPosePoints(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg1, s16, 0) = (s16) (s8) AF(arg0, u8, 0);
    AF(arg1, s16, 2) = (s16) (s8) AF(arg0, u8, 1);
    AF(arg1, s16, 4) = (s16) (s8) AF(arg0, u8, 2);
    AF(arg2, s16, 0) = (s16) (s8) AF(arg0, u8, 3);
    AF(arg2, s16, 2) = (s16) (s8) AF(arg0, u8, 4);
    AF(arg2, s16, 4) = (s16) (s8) AF(arg0, u8, 5);
}

void ClearObjPadInput(s32 arg0) {
    AF(arg0, s16, 0xAA) = 0;
    AF(arg0, s16, 0xAC) = 0;
    AF(arg0, u16, 0xAE) = 0x8080;
}

void ReadObjPad(Player *arg0, s32 arg1) {
    s32 k;
    s32 a;
    s32 b;
    u16 c;
    s32 t;

    if (D_800B9A64 == 0) {
        k = arg1 & 0xFF;
        arg0->unkA9 = GetPadTypeAlt(k);
        arg0->padHeld = GetPadHeld(k);
        arg0->padPressed = GetPadPressed(k);
        k = (GetPadByte(k, 4) & 0xFF) | ((GetPadByte(k, 5) & 0xFF) << 8);
        AF(arg0, u16, 0xAE) = k;
    } else {
        arg0->unkA9 = 0x41;
        GetDemoPad((u8 *)arg0 + 0xAA, (u8 *)arg0 + 0xAC);
    }
    if (arg0->unk1BC[9] != 0) {
        arg0->padHeld = 0;
        arg0->padPressed = 0;
        AF(arg0, u16, 0xAE) = 0x8080;
    }
    if (func_800CF8B4() == 0) {
        if (arg0->state != 0x1E && arg0->state != 0x1A) {
            arg0->padHeld = 0;
            arg0->padPressed = 0;
            AF(arg0, u16, 0xAE) = 0x8080;
        }
    }
    t = arg0->unkA9;
    if ((t == 0x53 || (t >= 0x54 && t == 0x73)) && (arg0->padHeld & 0xF000)) {
        arg0->unkA9 = 0x41;
    }
    if (arg0->unk1B0 != 0) {
        a = arg0->padHeld;
        c = AF(arg0, u16, 0xAE);
        b = arg0->padPressed;
        arg0->padHeld = SW1(a);
        arg0->padPressed = SW1(b);
        if ((c & 0xFF) != 0x80) {
            c = (~(c & 0xFF) & 0xFF) | (c & 0xFF00);
        }
        AF(arg0, u16, 0xAE) = c;
    }
}

s32 GetObjPadHeld(s32 arg0) {
    return (s32) AF(arg0, u16, 0xAA);
}

s32 GetObjPadPressed(s32 arg0) {
    return (s32) AF(arg0, u16, 0xAC);
}

u8 GetObjStickX(u8 *arg0) {
    return AF(arg0, u8, 0xAE);
}

u32 GetObjStickY(u8 *arg0) {
    return (u16) AF(arg0, u16, 0xAE) >> 8;
}

extern s32 SquareRoot0();

u8 GetObjStickTilt(Player *arg0) {
    s16 x;
    s16 y;
    x = (AF(arg0, u16, 0xAE) >> 8) - 0x80;
    y = (u8)AF(arg0, u16, 0xAE) - 0x80;
    if (x == 0) {
        if (y < 0) {
            return -y;
        }
        return y;
    }
    if (y == 0) {
        if (x < 0) {
            return -x;
        }
        return x;
    }
    return SquareRoot0(x * x + y * y);
}

s32 ObjDirHeld(u8 *arg0) {
    u16 temp_a0;
    s32 lo;

    switch (arg0[0xA9]) {
    case 0x41:
        return AF(arg0, u16, 0xAA) & 0xF000;
    case 0x53:
    case 0x73:
        temp_a0 = AF(arg0, u16, 0xAE);
        lo = temp_a0 & 0xFF;
        if (lo != 0x80 || (temp_a0 >> 8) != lo) {
            return 1;
        }
        return 0;
    default:
        return 0;
    }
}

s32 ObjUpHeld(s32 arg0) {
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        return AF(arg0, u16, 0xAA) & 0x1000;
    case 0x53:
    case 0x73:
        return (AF(arg0, u16, 0xAE) >> 8) < 0x40;
    }
    return 0;
}

s32 ObjDownHeld(u8 *arg0) {
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        return AF(arg0, u16, 0xAA) & 0x4000;
    case 0x53:
    case 0x73:
        return (AF(arg0, u16, 0xAE) >> 8) >= 0xC1;
    }
    return 0;
}

s32 ObjLeftHeld(u8 *arg0) {
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        return AF(arg0, u16, 0xAA) & 0x8000;
    case 0x53:
    case 0x73:
        return AF(arg0, u8, 0xAE) < 0x40;
    }
    return 0;
}

s32 ObjRightHeld(u8 *arg0) {
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        return AF(arg0, u16, 0xAA) & 0x2000;
    case 0x53:
    case 0x73:
        return AF(arg0, u8, 0xAE) >= 0xC1;
    }
    return 0;
}

s32 FaceStickDirOffset(s32 arg0) {
    u16 var_v0;
    void *temp_v1;

    var_v0 = FaceStickDir(arg0) & 0xFF;
    if (var_v0 != 0) {
        temp_v1 = AF(arg0, void *, 0x20);
        var_v0 = (AF(temp_v1, u16, 0x12) + 0xFA) & 0xFF8;
        AF(temp_v1, u16, 0x12) = var_v0;
    }
    return (s32) var_v0;
}

extern void (*D_8018F004[])();

s32 FaceStickDir(u8 *arg0) {
    u8 *s;
    s16 a;

    s = AF(arg0, u8 *, 0x20);
    a = (ratan2(AF(g_ActiveCamera, s32, 0x44) - AF(g_ActiveCamera, s32, 0x50), AF(g_ActiveCamera, s32, 0x48) - AF(g_ActiveCamera, s32, 0x3C)) - 0x400) & 0xFFF;
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        return (u8)((s32 (*)())D_8018F004[AF(arg0, u16, 0xAA) >> 12])(arg0, a);
    case 0x53:
    case 0x73:
        if ((AF(arg0, u16, 0xAE) & 0xFF) == 0x80 && (AF(arg0, u16, 0xAE) >> 8) == (AF(arg0, u16, 0xAE) & 0xFF)) {
            return 0;
        }
        AF(s, s16, 0x12) = (a + ratan2((AF(arg0, u16, 0xAE) & 0xFF) - 0x80, 0x80 - (AF(arg0, u16, 0xAE) >> 8))) & 0xFFF;
        return 1;
    }
}

s32 FaceDpadNone(void) {
    return 0;
}

s32 FaceDpadUp(u8 *arg0, s16 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = arg1;
    return 1;
}

s32 FaceDpadRight(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 + 0x400) & 0xFFF);
    return 1;
}

s32 FaceDpadUpRight(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 + 0x200) & 0xFFF);
    return 1;
}

s32 FaceDpadDown(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 + 0x800) & 0xFFF);
    return 1;
}

s32 FaceDpadUpDown(void) {
    return 0;
}

s32 FaceDpadDownRight(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 + 0x600) & 0xFFF);
    return 1;
}

s32 FaceDpadUpRightDown(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 + 0x400) & 0xFFF);
    return 1;
}

s32 FaceDpadLeft(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 - 0x400) & 0xFFF);
    return 1;
}

s32 FaceDpadUpLeft(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 - 0x200) & 0xFFF);
    return 1;
}

s32 FaceDpadLeftRight(void) {
    return 0;
}

s32 FaceDpadUpLeftRight(void) {
    return 0;
}

s32 FaceDpadDownLeft(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 - 0x600) & 0xFFF);
    return 1;
}

s32 FaceDpadUpDownLeft(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 - 0x400) & 0xFFF);
    return 1;
}

s32 FaceDpadRightDownLeft(u8 *arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (s16) ((arg1 - 0x800) & 0xFFF);
    return 1;
}

s32 FaceDpadAll(void) {
    return 0;
}

extern u8 D_80126C01;
extern u16 D_80126C02;
extern u16 D_80126C06;
extern void (*D_8018F044[])();

s16 GetPlayerStickAngle(void) {
    s16 a;

    a = (ratan2(AF(g_ActiveCamera, s32, 0x44) - AF(g_ActiveCamera, s32, 0x50), AF(g_ActiveCamera, s32, 0x48) - AF(g_ActiveCamera, s32, 0x3C)) - 0x400) & 0xFFF;
    switch (D_80126C01) {
    case 0x41:
        return ((s32 (*)())D_8018F044[D_80126C02 >> 12])(a);
    case 0x53:
    case 0x73:
        if ((D_80126C06 & 0xFF) == 0x80 && (D_80126C06 >> 8) == 0x80) {
            return -1;
        }
        return (a + ratan2((D_80126C06 & 0xFF) - 0x80, 0x80 - (D_80126C06 >> 8))) & 0xFFF;
    }
}

extern void (*D_8018F084[])();

s32 GetObjStickAngle(u8 *arg0) {
    s16 a;

    a = (ratan2(AF(g_ActiveCamera, s32, 0x44) - AF(g_ActiveCamera, s32, 0x50), AF(g_ActiveCamera, s32, 0x48) - AF(g_ActiveCamera, s32, 0x3C)) - 0x400) & 0xFFF;
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        return (s16)((s32 (*)())D_8018F084[AF(arg0, u16, 0xAA) >> 12])(a);
    case 0x53:
    case 0x73:
        if ((AF(arg0, u16, 0xAE) & 0xFF) == 0x80 && (AF(arg0, u16, 0xAE) >> 8) == (AF(arg0, u16, 0xAE) & 0xFF)) {
            return -1;
        }
        return (a + ratan2((AF(arg0, u16, 0xAE) & 0xFF) - 0x80, 0x80 - (AF(arg0, u16, 0xAE) >> 8))) & 0xFFF;
    }
}

s32 GetDpadAngleNone(void) {
    return -1;
}

s16 GetDpadAngleUp(s16 arg0) {
    return arg0;
}

s32 GetDpadAngleRight(s32 arg0) {
    return (arg0 + 0x400) & 0xFFF;
}

s32 GetDpadAngleUpRight(s32 arg0) {
    return (arg0 + 0x200) & 0xFFF;
}

s32 GetDpadAngleDown(s32 arg0) {
    return (arg0 + 0x800) & 0xFFF;
}

s32 GetDpadAngleUpDown(void) {
    return -1;
}

s32 GetDpadAngleDownRight(s32 arg0) {
    return (arg0 + 0x600) & 0xFFF;
}

s32 GetDpadAngleUpRightDown(s32 arg0) {
    return (arg0 + 0x400) & 0xFFF;
}

s32 GetDpadAngleLeft(s32 arg0) {
    return (arg0 - 0x400) & 0xFFF;
}

s32 GetDpadAngleUpLeft(s32 arg0) {
    return (arg0 - 0x200) & 0xFFF;
}

s32 GetDpadAngleLeftRight(void) {
    return -1;
}

s32 GetDpadAngleUpLeftRight(void) {
    return -1;
}

s32 GetDpadAngleDownLeft(s32 arg0) {
    return (arg0 - 0x600) & 0xFFF;
}

s32 GetDpadAngleUpDownLeft(s32 arg0) {
    return (arg0 - 0x400) & 0xFFF;
}

s32 GetDpadAngleRightDownLeft(s32 arg0) {
    return (arg0 - 0x800) & 0xFFF;
}

s32 GetDpadAngleAll(void) {
    return -1;
}

s32 SetPlayerHittable(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x3C) | 0x8000;
    AF(arg0, u16, 0x3C) = temp_v0;
    return (s32) temp_v0;
}

s32 ClearPlayerHittable(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x3C) & 0x7FFF;
    AF(arg0, u16, 0x3C) = temp_v0;
    return (s32) temp_v0;
}

s32 SetGuarding(arg0, arg1)
s32 arg0;
s32 arg1;
{
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x3C) | 0x4000;
    AF(arg0, u16, 0x3C) = temp_v0;
    return (s32) temp_v0;
}

s32 ClearGuarding(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x3C) & 0xBFFF;
    AF(arg0, u16, 0x3C) = temp_v0;
    return (s32) temp_v0;
}

void ClearTilt(u8 *arg0) {
    AF(arg0, s16, 0x104) = 0;
    AF(arg0, s16, 0x102) = 0;
    AF(arg0, s16, 0x100) = 0;
    AF(arg0, s16, 0x10C) = 0;
    AF(arg0, s16, 0x10A) = 0;
    AF(arg0, s16, 0x108) = 0;
}

extern void SetTiltTargetX();
extern void SetTiltTargetY();
extern void SetTiltTargetZ();

void SetTiltTarget(s32 arg0, s32 arg1x, s32 arg2x, s32 arg3x) {
    s16 arg1 = arg1x;
    s16 arg2 = arg2x;
    s16 arg3 = arg3x;
    SetTiltTargetX(arg0, arg1);
    SetTiltTargetY(arg0, arg2);
    SetTiltTargetZ(arg0, arg3);
}

void SetTiltTargetX(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0x108) = arg1;
}

void SetTiltTargetY(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0x10A) = arg1;
}

void SetTiltTargetZ(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0x10C) = arg1;
}

void StepTiltToTarget(u8 *arg0, s16 arg1) {
    AF(arg0, s16, 0x100) = (s16) ((u16) AF(arg0, s16, 0x100) + EaseAngleStep((s32) AF(arg0, s16, 0x100), (s32) AF(arg0, s16, 0x108), (s32) arg1));
    AF(arg0, s16, 0x102) = (s16) ((u16) AF(arg0, s16, 0x102) + EaseAngleStep((s32) AF(arg0, s16, 0x102), (s32) AF(arg0, s16, 0x10A), (s32) arg1));
    AF(arg0, s16, 0x104) = (s16) ((u16) AF(arg0, s16, 0x104) + EaseAngleStep((s32) AF(arg0, s16, 0x104), (s32) AF(arg0, s16, 0x10C), (s32) arg1));
}

extern s32 GetCameraViewYaw();

s32 GetHeadingFromCamera(s32 arg0) {
    return (AF(AF(arg0, void *, 0x20), u16, 0x12) - GetCameraViewYaw(arg0)) & 0xFFF;
}

s32 GetCameraViewYaw()
{
    return (s16)ratan2(AF(g_ActiveCamera, s32, 0x3C) - AF(g_ActiveCamera, s32, 0x48), AF(g_ActiveCamera, s32, 0x44) - AF(g_ActiveCamera, s32, 0x50));
}

void ClearDoubleTap(u8 *arg0) {
    AF(arg0, s32, 0x1E4) = 0;
    AF(arg0, s32, 0x1DC) = 0;
}

void SetDoubleTapWindow(Player *arg0, s32 arg1) {
    AF(arg0, s32, 0x1E4) = arg1 | (arg1 << 16);
    AF(arg0, s16, 0x1E4) = arg1;
    AF(arg0, s16, 0x1E6) = arg1;
}

void UpdateDoubleTap(Player *arg0, s32 arg1) {
    s32 temp_v0;
    u16 temp_a1;

    if (AF(arg0, s16, 0x1E4) == 0) {
        AF(arg0, s32, 0x1DC) = 0;
        AF(arg0, s32, 0x1E0) = 0;
        AF(arg0, s16, 0x1E4) = (s16) AF(arg0, u16, 0x1E6);
    }
    temp_a1 = arg0->padPressed;
    if (temp_a1 != 0) {
        temp_v0 = AF(arg0, s32, 0x1E0);
        AF(arg0, s32, 0x1E0) = (s32) temp_a1;
        AF(arg0, s16, 0x1E4) = (s16) AF(arg0, u16, 0x1E6);
        AF(arg0, s32, 0x1DC) = (s32) (temp_a1 & temp_v0);
    }
    AF(arg0, s16, 0x1E4) = (s16) ((u16) AF(arg0, s16, 0x1E4) - 1);
}

s32 TestDoubleTap(u8 *arg0, s32 arg1) {
    return AF(arg0, s32, 0x1DC) & arg1;
}

void ObjLocalToWorldAtPos(s32 arg0, s32 arg1, s32 arg2) {
    s32 v[3];

    v[0] = AF(AF(arg0, u8 *, 0x20), s32, 0x48);
    v[1] = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
    v[2] = AF(AF(arg0, u8 *, 0x20), s32, 0x4C);
    AF(AF(arg0, u8 *, 0x20), s32, 0x48) = AF(arg0, s16, 6);
    AF(AF(arg0, u8 *, 0x20), s32, 0x4C) = AF(arg0, s16, 0xA);
    AF(AF(arg0, u8 *, 0x20), s32, 0x50) = AF(arg0, s16, 0xE);
    ObjLocalToWorld(arg0, arg1, arg2);
    AF(AF(arg0, u8 *, 0x20), s32, 0x48) = v[0];
    AF(AF(arg0, u8 *, 0x20), s32, 0x4C) = v[1];
    AF(AF(arg0, u8 *, 0x20), s32, 0x50) = v[2];
}

s32 ObjLocalToWorld(s32 arg0, s32 arg1, s32 arg2) {
    return LocalToWorld(AF(arg0, s32, 0x20) + 0x34, arg1, arg2);
}

static inline s32 h_80149350(u8 *arg0, SVECTOR *arg1, SVECTOR *arg2) {
    return LocalToWorld(AF(arg0, s32, 0x20) + 0x34, arg1, arg2);
}

void ObjLocalToWorld16(u8 *arg0, s32 arg1) {
    SVECTOR sp10;
    SVECTOR sp18;

    PosToSVec(arg1, &sp10);
    h_80149350(arg0, &sp10, &sp18);
    SVecToPos(&sp18, arg1);
}

void ObjLocalToWorld16To(u8 *arg0, s32 arg1, s32 arg2) {
    SVECTOR sp10;
    SVECTOR sp18;

    PosToSVec(arg1, &sp10);
    h_80149350(arg0, &sp10, &sp18);
    SVecToPos(&sp18, arg2);
}

void ObjWorldToLocal(u8 *arg0, s32 arg1, s32 arg2) {
    WorldToLocal(AF(arg0, s32, 0x20) + 0x34, arg1, arg2);
}

void ObjWorldToLocal16(u8 *arg0, u8 *arg1) {
    SVECTOR sp10;
    SVECTOR sp18;

    sp18.vx = AF(arg1, s16, 2);
    sp18.vy = AF(arg1, s16, 6);
    sp18.vz = AF(arg1, s16, 0xA);
    WorldToLocal(AF(arg0, s32, 0x20) + 0x34, &sp18, &sp10);
    AF(arg1, s16, 2) = sp10.vx;
    AF(arg1, s16, 6) = sp10.vy;
    AF(arg1, s16, 0xA) = sp10.vz;
}

void ObjWorldToLocal16To(u8 *arg0, u8 *arg1, u8 *arg2) {
    u16 out[4];
    u16 in[4];

    in[0] = AF(arg1, u16, 2);
    in[1] = AF(arg1, u16, 6);
    in[2] = AF(arg1, u16, 0xA);
    WorldToLocal(AF(arg0, s32, 0x20) + 0x34, in, out);
    AF(arg2, u16, 2) = out[0];
    AF(arg2, u16, 6) = out[1];
    AF(arg2, u16, 0xA) = out[2];
}

void ObjPointToScreenOtz(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp10;

    LocalToWorld(AF(arg0, s32, 0x20) + 0x34, arg1, (s32) &sp10, arg3);
    ProjectPointOtz((s32) &sp10, arg2);
}

void ObjPointToScreen(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp10;

    LocalToWorld(AF(arg0, s32, 0x20) + 0x34, arg1, (s32) &sp10, arg3);
    ProjectPoint((s32) &sp10, arg2);
}

static inline void h_801495C4(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    LocalToWorld(AF(arg0, s32, 0x20) + 0x34, arg1, (s32) &sp10);
    ProjectPointOtz((s32) &sp10, arg2);
}

void func_801495C4(u8 *arg0, u8 *arg1) {
    u16 in[4];
    u16 out[4];

    in[0] = AF(arg1, u16, 2);
    in[1] = AF(arg1, u16, 6);
    in[2] = AF(arg1, u16, 0xA);
    h_801495C4(arg0, (s32) in, (s32) out);
    AF(arg1, u16, 2) = out[0];
    AF(arg1, u16, 6) = out[1];
    AF(arg1, u16, 0xA) = out[2];
}

static inline void h_8014964C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    LocalToWorld(AF(arg0, s32, 0x20) + 0x34, arg1, (s32) &sp10);
    ProjectPoint((s32) &sp10, arg2);
}

void ObjPoint16ToScreen(u8 *arg0, u8 *arg1) {
    u16 in[4];
    u16 out[4];

    in[0] = AF(arg1, u16, 2);
    in[1] = AF(arg1, u16, 6);
    in[2] = AF(arg1, u16, 0xA);
    h_8014964C(arg0, (s32) in, (s32) out);
    AF(arg1, u16, 2) = out[0];
    AF(arg1, u16, 6) = out[1];
    AF(arg1, u16, 0xA) = out[2];
}

s32 CanJump(s32 arg0) {
    s32 r;

    if (AF(arg0, s32, 0x178) == 0) {
        r = AF(arg0, u16, 0xAC) & 0x40;
        if (r != 0) {
            r = 1;
        }
    } else {
        r = 0;
    }
    return r;
}

s32 TriggerJump(s32 arg0) {
    return EnterPlayerJump();
}

s32 TriggerJumpRising(s32 arg0) {
    return StartPlayerJump();
}

s32 CanAssimThrow(s32 arg0) {
    if (!(AF(arg0, s32, 0x44) & 4) && g_ChargeGauge >= 0x80 && (AF(arg0, u16, 0xAC) & 0x80)) {
        return 1;
    }
    return 0;
}

s32 TriggerAssimThrow(s32 arg0) {
    return SwitchToAssimThrow();
}

extern s32 IsSteelActive();
extern s32 FindObj68ByKind();

s32 CanUseAbility(arg0)
    u8 *arg0;
{
    u8 *c = &g_Status;

    if (AF(arg0, u16, 0) == 0x1A) {
        return 0;
    }
    if (IsSteelActive()) {
        return 0;
    }
    if (D_80078EC1 == 0xF && FindObj68ByKind(arg0, 0xA)) {
        return 0;
    }
    if (AF(arg0, s32, 0x44) & 0x404) {
        goto out;
    }
    if (GetAbilityInfo(arg0, c[0x49]) & 0x80) {
        goto out;
    }
    if (AF(arg0, u16, 0xAC) & 0x20) {
        return 1;
    }
out:
    return 0;
}

s32 TriggerUseAbility(Player *arg0) {
    return SwitchToUseAbility();
}

s32 GetPlayerAction();

s32 HasNoPlayerAction(s32 arg0) {
    s32 r;
    if (D_800B9A08 == 0x308F) {
        r = 0;
    } else {
        r = GetPlayerAction(arg0) == 0;
    }
    return r;
}

s32 TriggerAsleep(s32 arg0) {
    return SwitchToAsleep();
}

extern s32 CanSwingFusion();
extern s32 CanSwingLumina();
extern s32 SwitchToThrowCarried();
extern void EnterFusionCombo();

s32 Technique3Attack(s32 arg0) {
    struct { s16 a, b, c, d; s32 e, f, g; } sp10;

    if (CanSwingFusion(arg0) != 0 || CanSwingLumina(arg0) != 0) {
        sp10.a = 8;
        sp10.e = arg0;
        sp10.b = 0;
        sp10.c = -0x1E;
        sp10.d = 0;
        sp10.f = 0;
        sp10.g = 0;
        SpawnObj68Upper(&sp10);
        return 1;
    }
    return 0;
}

extern void func_800CCF28();

s32 Technique4HoldAttack(s32 arg0) {
    SVECTOR v;
    struct { s16 a, b, c, d; s32 e, f, g; } sp18;

    if (AF(arg0, s32, 0x44) & 0x404) {
        return 0;
    }
    if (!(AF(arg0, u16, 0xAA) & 0x90)) {
        if (D_800B9A08 == 0x308D) {
            PosToSVec(g_Player.pos, &v);
            PlaySoundAtPoint(&v, 4, 0x8E0);
        } else {
            PlaySoundId(4, 0x8E0);
        }
        return 0;
    }
    if (AF(arg0, u16, 0xAC) & 0x90) {
        if (g_SkipSeId == 0x8E0) {
            g_SkipSeId = 0;
        } else {
            PlaySePositional(0x8E0, 0);
        }
    }
    func_800CCF28(arg0);
    sp18.a = 0x12;
    sp18.e = arg0;
    sp18.b = 0;
    sp18.c = -0x1E;
    sp18.d = 0;
    sp18.f = 0;
    sp18.g = 0;
    SpawnObj68Upper(&sp18);
    return 1;
}

s32 CanSwingSword(s32 arg0) {
    if (CanSwingFusion(arg0) != 0 || CanSwingLumina(arg0) != 0) {
        return 1;
    }
    return 0;
}

s32 CanSwingFusion(s32 arg0) {
    if (!(AF(arg0, s32, 0x44) & 0x404)) {
        {
            s32 bt = AF(arg0, u16, 0xAC) & 0x80;

            return bt != 0;
        }
    }
    return 0;
}

void TriggerFusionCombo(s32 arg0) {
    u8 unused[0x18]; /* MATCH-TRICK: frame pad, the original's frame holds 0x18 unused bytes */

    if (AF(arg0, s32, 0x178) != 0) {
        SwitchToThrowCarried(arg0);
        return;
    }
    AF(arg0, u8, 0x1AA) = 1;
    EnterFusionCombo();
}

void ContinueFusionCombo(s32 arg0) {
    u8 unused[0x18]; /* MATCH-TRICK: frame pad, the original's frame holds 0x18 unused bytes */

    if (AF(arg0, s32, 0x178) != 0) {
        SwitchToThrowCarried(arg0);
        return;
    }
    EnterFusionCombo();
}

s32 CanSwingLumina(u8 *arg0) {
    s32 var_v0;
    s32 bt;

    if (AF(arg0, s32, 0x44) & 0x400) {
        var_v0 = 0;
    } else if (TestFlag80(arg0) == 0) {
        var_v0 = 0;
    } else {
        bt = AF(arg0, u16, 0xAC) & 0x10;
        var_v0 = bt != 0;
    }
    return var_v0;
}

s32 func_8015DE24();
extern void EnterLuminaSlash();

void TriggerLuminaSlash(s32 arg0) {
    if (AF(arg0, s32, 0x178) != 0) {
        func_8015DE24();
        return;
    }
    AF(arg0, u8, 0x1AA) = 1;
    EnterLuminaSlash();
}

void TickActionLock(Player *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk223;
    if (temp_v0 != 0) {
        arg0->unk223 = (u8) (temp_v0 - 1);
    }
}

s32 CanAirSlash(u8 *arg0) {
    s32 var_v0;
    s32 bt;

    if (AF(arg0, u8, 0x223) != 0) {
        var_v0 = 0;
    } else if (AF(arg0, s16, 0x1C8) != 0) {
        var_v0 = 0;
    } else if (AF(arg0, s32, 0x44) & 0x404) {
        var_v0 = 0;
    } else if (TestFlag80(arg0) == 0) {
        var_v0 = 0;
    } else if (!(GetFlag(0x89) & 0xFF)) {
        var_v0 = 0;
    } else {
        bt = AF(arg0, u16, 0xAC) & 0x10;
        var_v0 = bt != 0;
    }
    return var_v0;
}

void TriggerAirSlash(s32 arg0) {
    EnterAirSlash(arg0);
}

s32 TriggerSwordSkill(s32 arg0, s32 arg1) {
    return StartSwordSkill();
}

s32 CanGuard(s32 arg0) {
    s32 bt;

    if ((AF(arg0, s32, 0x44) & 0x404) || AF(arg0, s16, 0x1C8) != 0) {
        return 0;
    }
    bt = AF(arg0, u16, 0xAA) & 8;
    return bt != 0;
}

s32 CheckTechniqueTrigger(Player *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (!((s32)arg0->status & 0x400)) {
        var_v0 = 0;
        if (g_ChargeGauge == 0x80) {
            var_v0 = 0;
            if (D_80078EC0 & 0x7F) {
                if (arg0->padPressed & 0x10) {
                    var_v0 = 1;
                    if (GetArmedCrest() & 0xFF) {
                        return 2;
                    }
                    /* Duplicate return node #7. Try simplifying control flow for better match */
                    return var_v0;
                }
                var_v0 = 0;
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return var_v0;
            }
        }
    }
    return var_v0;
}

extern s32 TryTalkOnRequest();
extern s32 TryTalkOnSquare();

s32 TryTalk(Player *arg0) {
    if (TryTalkOnRequest() == 0) {
        return TryTalkOnSquare(arg0) != 0;
    }
    return 1;
}

extern s32 TalkToActor();

s32 TryTalkOnSquare(Player *arg0) {
    u8 *a;

    if (arg0->carried != 0) {
        return 0;
    }
    if ((s32)arg0->status & 0x404) {
        return 0;
    }
    if (!(arg0->padPressed & 0x80)) {
        return 0;
    }
    arg0->unk190 = 0;
    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (TalkToActor(arg0, a) != 0) {
            return 1;
        }
    }
    return 0;
}

s32 GetPlayerAction();

s32 TryTalkOnRequest(s32 arg0) {
    u8 *a;

    if (GetPlayerAction(arg0) == 0 && AF(arg0, u8, 0x1C5) != 0) {
        AF(arg0, u8, 0x1C5) = 0;
        for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
            if (TalkToActor(arg0, a) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

extern s32 func_80144A04();

s32 TalkToActor(s32 arg0, u16 *arg1) {
    s32 temp_v0;

    if (*arg1 == 0x83 || *arg1 == 0x61) {
        temp_v0 = func_80144A04(arg1);
        if (temp_v0 != 0) {
            LeavePlayerKind(arg0);
            EnterPlayerStanding(arg0);
            StartPlayerAction(temp_v0, 0x01000000);
            return 1;
        }
    }
    return 0;
}

void AfterTalkNop()
{
}

extern s32 D_8018F0C4;

s32 ToggleSleepMode(arg0)
s32 arg0;
{
    s32 *p = &D_8018F0C4;
    u8 *c = &g_Status;
    s32 v;

    while ((v = *p++) != 0) {
        if (D_800B9A08 == v) {
            return 0;
        }
    }
    if (AF(arg0, s32, 0x44) & 0x400) {
        return 0;
    }
    if (AF(arg0, s16, 0x1C8) != 0) {
        return 0;
    }
    if (AF(arg0, u16, 0xAC) & 0x100) {
        c[0x48] ^= 0x80;
        return 1;
    }
    return 0;
}

extern s32 PathHitsModelTwoCells();

s32 TryPickUpActor(Player *arg0) {
    SVECTOR q;
    SVECTOR r;
    SVECTOR v;
    u32 i;
    s32 off;
    u8 *o;

    if ((s32)arg0->status & 0x400) {
        return 0;
    }
    if ((arg0->padPressed & 0x80) || ((arg0->padPressed & 0x10) && TestFlag80(arg0) != 0)) {
        q.vx = (u16)arg0->pos[0].h.i;
        q.vy = (u16)arg0->pos[1].h.i;
        q.vz = (u16)arg0->pos[2].h.i;
        v.vx = 0;
        v.vy = -0x10;
        v.vz = -0x20;
        LocalToWorld((s32)arg0->model + 0x34, &v, &r);
        i = 0;
        off = 0;
    loop:
        o = &g_Actors + off;
        if (AF(o, u16, 0) == 0 || AF(o, s32, 0x58) == 0 || AF(o, s16, 0xAA) != 0 || AF(arg0, u8 *, 0x184) == o
            || !(AF(o, u16, 0x5C) & 0x200) || PathHitsModelTwoCells(AF(o, s32, 0x20), AF(o, s32, 0x58), &q, &r) == 0) {
            i++;
            off += 0x10C;
            if (i < 0x60) {
                goto loop;
            }
            return 0;
        }
        AF(arg0, u8 *, 0x178) = o;
        LiftActor(arg0, o);
        return 1;
    }
    return 0;
}

s32 LiftActor(u8 *arg0, s32 arg1) {
    SVECTOR v;

    PosToSVec(arg0 + 4, &v);
    v.pad = 0;
    return StrikeActor(arg1, 0xA, RollDamage(0xA) & 0xFFFF, &v, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
}

s32 TriggerCarry(Player *arg0) {
    return SwitchToCarry();
}

extern s32 IsFacingObj();

s32 func_8014A238(s32 arg0) {
    u32 i;
    u8 *o;

    for (i = 0; i < 0x60; i++) {
        o = &g_Actors + i * 0x10C;
        if (AF(o, u16, 0) != 0 && AF(o, s16, 0xAA) != 0 && IsObjWithin(arg0, (s32) o, 0x30) != 0
            && IsFacingObj(arg0, o, 0x200) != 0) {
            return (s32) o;
        }
    }
    return 0;
}

s32 func_8014A2E4(s32 arg0) {
    u32 i;
    u8 *o;

    for (i = 0; i < 0x60; i++) {
        o = &g_Actors + i * 0x10C;
        if (AF(o, u16, 0) != 0 && (AF(o, u16, 0x5C) & 0x8000) && AF(o, s16, 0xAA) != 0
            && IsObjWithin(arg0, (s32) o, 0x30) != 0) {
            return (s32) o;
        }
    }
    return 0;
}

s32 StrikeActorKind1F(u8 *arg0, s32 arg1) {
    SVECTOR v;

    PosToSVec(arg0 + 4, &v);
    v.pad = 0;
    return StrikeActor(arg1, 0x1F, 0, &v, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
}

extern s16 g_WallNormal;
extern s16 D_801152B4;

s32 func_8014A3E0(u8 *arg0) {
    VECTOR v;

    v.vx = AF(arg0, s16, 0x12) * g_WallNormal;
    v.vz = AF(arg0, s16, 0x1A) * D_801152B4;
    if (v.vx < 0 || v.vz < 0) {
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
        return 0;
    }
    return 1;
}

s32 GuardBlocksHit(u8 *arg0) {
    if ((AF(arg0, u16, 0x3C) & 0x4000) && (s16)AngleDist(AF(arg0, s16, 0x42), (AF(AF(arg0, u8 *, 0x20), u16, 0x12) + 0x800) & 0xFFF) < 0x2AA) return 1;
    return 0;
}

s32 CanBackHop(Player *arg0) {
    if (GetFlag(0x1E) & 0xFF) {
        {
            s32 bt = arg0->padPressed & 0x40;

            return bt != 0;
        }
    }
    return 0;
}

s32 TriggerBackHop(Player *arg0) {
    return SwitchToBackHop();
}

s32 CanDoubleJump(arg0)
    s32 arg0;
{
    s32 bt;

    if (!(GetFlag(0x1E) & 0xFF) || (AF(arg0, s32, 0x44) & 0x400) || AF(arg0, u8, 0xA8) >= 0x19 || AF(arg0, u8, 0x223)) {
        return 0;
    }
    bt = AF(arg0, u16, 0xAC) & 0x40;
    return bt != 0;
}

s32 UpdateChargeGauge(Player *arg0) {
    s32 n;
    u8 t;

    if ((s32)arg0->status & 1) {
        if (arg0->padHeld & 8) {
            if (GetFlag(0x20) & 0xFF) {
                n = 6;
            } else {
                n = 3;
            }
            t = g_ChargeGauge + n;
            g_ChargeGauge = t;
            if (t > 0x80) {
                g_ChargeGauge = 0x80;
            }
        }
    } else {
        g_ChargeGauge = 0;
    }
}

void func_8014A638(Player *arg0) {
    u16 temp_v0;

    if ((s32)arg0->status & 0x10) {
        temp_v0 = (u16)arg0->absorbCount - 4;
        arg0->absorbCount = temp_v0;
        if ((s16) (temp_v0) < 0) {
            arg0->absorbCount = 0U;
        }
    }
}

s32 IsTimer1BCClear(s32 arg0) {
    return AF(arg0, u8, 0x1BC) == 0;
}

void TickTimer1BC(Player *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk1BC[0];
    if (temp_v0 != 0) {
        arg0->unk1BC[0] = (u8) (temp_v0 - 1);
    }
}

s32 IsTimer1BDClear(s32 arg0) {
    return AF(arg0, u8, 0x1BD) == 0;
}

void TickTimer1BD(Player *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk1BC[1];
    if (temp_v0 != 0) {
        arg0->unk1BC[1] = (u8) (temp_v0 - 1);
    }
}

s32 CanWallClimb(s32 arg0) {
    if (!(GetFlag(0x1F) & 0xFF) || (AF(arg0, s32, 0x44) & 4)) {
        return 0;
    }
    return AF(arg0, u8, 0x1BE) == 0;
}

void TickWallClimbCooldown(Player *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk1BC[2];
    if (temp_v0 != 0) {
        arg0->unk1BC[2] = (u8) (temp_v0 - 1);
    }
}

s32 IsGrabbableNear(Player *arg0) {
    SVECTOR d;
    u32 i;
    u8 *a;

    if (GetFlag(0x83) & 0xFF) {
        for (i = 0; i < 0x60; i++) {
            a = &g_Actors + i * 0x10C;
            if (AF(a, u8, 0xC1) == 7) {
                d.vx = (u16)arg0->pos[0].h.i - AF(a, u16, 6);
                d.vz = (u16)arg0->pos[2].h.i - AF(a, u16, 0xE);
                if ((d.vx < 0 ? -d.vx : d.vx) < 0x40 && (d.vz < 0 ? -d.vz : d.vz) < 0x40) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

s32 TriggerGrab(Player *arg0) {
    return SwitchToGrab();
}

s32 func_8014A850(u8 *a) {
    SVECTOR d;
    SVECTOR v;
    SVECTOR *vp;
    u32 i;
    s32 off;
    u8 *o;

    i = 0;
    vp = &v;
    off = 0;
    do {
        o = &g_Actors + off;
        if (AF(o, u16, 0) != 0 && AF(o, s32, 0x58) != 0 && (AF(o, u16, 0x5C) & 0x8000) && AF(o, u8, 0xC1) == 7) {
            d.vx = AF(a, u16, 6) - AF(o, u16, 6);
            d.vy = AF(a, u16, 0xA) - (AF(o, u16, 0xA) + 0x40);
            d.vz = AF(a, u16, 0xE) - AF(o, u16, 0xE);
            if (d.vx >= 0) {
                if (d.vx < 0x40) goto ok1;
                goto next;
            }
            if (-d.vx >= 0x40) goto next;
        ok1:
            if (d.vz >= 0) {
                if (d.vz < 0x40) goto ok2;
                goto next;
            }
            if (-d.vz >= 0x40) goto next;
        ok2:
            if (d.vy >= 0) {
                if (d.vy < 0x40) goto ok3;
                goto next;
            }
            if (-d.vy >= 0x40) goto next;
        ok3:
            AF(a, u8 *, 0x18C) = o;
            PosToSVec(a + 4, vp);
            v.pad = 0;
            StrikeActor(o, 0x1B, CalcPower03Rand40(), vp, AF(AF(a, u8 *, 0x20), s16, 0x12));
            return 1;
        }
    next:
        i++;
        off += 0x10C;
    } while (i < 0x60);
    return 0;
}

s32 SetLuminaSelection(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_80078EC0 & 0x80;
    D_80078EC0 = arg0 | temp_v0;
    return temp_v0;
}

void CancelTechnique(void) {
    s32 st;
    Player *p;

    p = &g_Player;
    st = D_80078EC1;
    if ((u32)(p->state - 0x19) >= 2 && (u32)(p->state - 0x1D) >= 2) {
        LeavePlayerKind(p);
        EnterPlayerStanding(p);
        if (st == 0xC || st == 0x18 || st == 0xA) {
            EndHeldAbility(p);
        }
    }
    p->unk1C8[0] = 0;
    p->unk1C8[1] = 0;
    p->unk1C8[2] = 0;
    p->unk1C8[3] = 0;
    p->unk1C8[4] = 0;
    p->unk1D4[0] = 0;
    p->unk1D4[1] = 0;
    FreeObj68ByKind(5);
    FreeObj68ByKind(6);
    FreeObj68ByKind(7);
    FreeObj68ByKind(8);
    FreeObj68ByKind(9);
    FreeEffectsByKind(0x26);
    FreeEffectsByKind(0x27);
    FreeEffectsByKind(0x39);
    FreeEffectsByKind(0x3A);
    FreeObj68ByKind(0x10);
    FreeObj68ByKind(0x11);
    FreeObj68ByKind(0x12);
    FreeObj68ByKind(0x13);
    FreeObj68ByKind(0x14);
    FreeEffectsByKind(0x3B);
    FreeEffectsByKind(0x3C);
    p->unk223 = 0x10;
}

s32 ClearObj68Kind(s32 arg0) {
    return FreeObj68ByKind(arg0);
}

s32 FreeObj68ByKind(s32 arg0) {
    u16 *p;

    for (p = (u16 *) &D_8011F9D0; p < (u16 *)((u8 *) &D_8011F9D0 + 0x820); p = (u16 *)((u8 *)p + 0x68)) {
        if (*p == arg0) {
            FreeObj68(p);
        }
    }
}

void ClearEffectKind(s32 arg0) {
    FreeEffectsByKind(arg0);
}

void FreeEffectsByKind(s32 arg0) {
    u8 *p;
    u16 *o;

    for (p = &g_Effects; p < &g_Effects + 0xA50; p += 0x58) {
        if (AF(p, u16, 0) == arg0) {
            o = AF(p, u16 *, 0x20);
            if (o != NULL) {
                ZeroFill(o, *o == 1 ? 0x84 : 0x38);
            }
            ZeroFill(p, 0x58);
        }
    }
}

void SpendTechniqueTime(u8 *arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x1C8) - arg1;
    AF(arg0, u16, 0x1C8) = temp_v0;
    if ((s16) (temp_v0) < 0) {
        AF(arg0, u16, 0x1C8) = 0U;
    }
}

extern s32 ShowNumberAt();

void ShowNumberAbove(s32 arg0, s32 arg1, s32 arg2) {
    SVECTOR v;

    v.vx = AF(arg0, u16, 6);
    v.vy = AF(arg0, u16, 0xA) - 0x20;
    v.vz = AF(arg0, u16, 0xE);
    ShowNumberAt(arg0, &v, arg1, arg2);
}

s32 ShowNumberAt(s32 arg0, SVECTOR *arg1, s32 arg2, s32 arg3) {
    struct {
        s16 kind;
        s16 x;
        s16 y;
        s16 z;
        s32 owner;
        s32 d;
        s32 e;
    } p;
    s16 x = arg1->vx;
    s16 y = arg1->vy;
    s16 z = arg1->vz;

    p.owner = arg0;
    p.kind = 0x1D;
    p.d = arg2;
    p.e = arg3;
    p.x = x;
    p.y = y;
    p.z = z;
    return AllocEffect(&p);
}

void AddPlayerMoney(s32 arg0) {
    AddMoney((s32) &g_Player, arg0);
}

void AddMoney(s32 arg0, s32 arg1) {
    u32 temp_v0;

    temp_v0 = g_Money + arg1;
    g_Money = temp_v0;
    if (temp_v0 > 0x1869FU) {
        g_Money = 0x1869F;
    }
}

extern s32 g_Clock;
extern void NextDay();

void TickGameClock(Player *arg0) {
    u8 *c = &g_Status;
    s32 old;
    s32 n;

    if (func_8016F1C4() != 0) {
        return;
    }
    if (arg0->state == 0x1A || arg0->state == 0x1E) {
        return;
    }
    if ((s32)arg0->status & 0x10) {
        return;
    }
    old = g_Clock;
    if (IsObjAsleep(arg0)) {
        g_Clock += 0xAAA8;
    } else {
        g_Clock += 0x1555;
    }
    if (AF(c, s16, 0x1A) - (old >> 16) > 0 && AF(c, u8, 0x49) == 3) {
        AddBp(arg0, 1);
    }
    if ((s16)((s16)AF(c, u16, 0x1A) / 60) - (s16)((s16)(old >> 16) / 60) > 0) {
        if (IsObjAsleep(arg0)) {
            if (GetFlag(0x1B) & 0xFF) {
                n = 10;
            } else {
                n = 4;
            }
        } else {
            n = 4;
        }
        if (AF(c, u16, 0x40) != 0) {
            AddHp(arg0, n, 0);
        } else if (AF(c, u16, 0x3C) != 0) {
            if (AF(c, u16, 0x3C) >= 5) {
                LoseHp(arg0, 4);
            } else {
                AF(c, u16, 0x3C) = 1;
            }
        }
        if (IsObjAsleep(arg0)) {
            if (GetFlag(0x1B) & 0xFF) {
                AddBp(arg0, 8);
            } else {
                SpendBp(arg0, 1);
            }
        } else {
            SpendBp(arg0, 4);
        }
    }
    if (AF(c, s16, 0x1A) >= 0x5A0) {
        AF(c, s32, 0x18) = 0;
        NextDay();
    }
}

extern void AdvanceClockMinutes();

void AdvanceClockHours(s32 arg0) {
    AdvanceClockMinutes(arg0 * 60);
}

extern s16 g_ClockMinutes;

void AdvanceClockMinutes(s32 arg0) {
    g_ClockMinutes += arg0;
    if (g_ClockMinutes >= 0x5A0) {
        g_ClockMinutes -= 0x5A0;
        NextDay();
    }
}

extern u16 g_Day;
extern u8 D_80078EBA;
extern void func_800D10EC();
extern void func_8002AC98();

void NextDay(void) {
    g_Day++;
    D_80078EBA++;
    if (g_Day >= 0x16E) {
        g_Day = 1;
    }
    D_80078EBA %= 7;
    func_800D10EC();
    func_8002AC98();
    func_80145C54();
}

s32 IsPlayerAsleep(void) {
    return IsObjAsleep((s32) &g_Player);
}

s32 IsObjAsleep(Player *arg0) {
    return (s32)arg0->status & 0x80;
}

extern void CurePoison();
extern void CureShrink();

void CureStatus(s32 arg0) {
    CurePoison(arg0);
    CureShrink(arg0);
}

extern s16 D_80078E96;

void UpdatePlayerStatusFlags(Player *arg0) {
    u8 *c = &g_Status;

    arg0->scaleB[0] = 0x1000;
    arg0->scaleB[1] = 0x1000;
    arg0->scaleB[2] = 0x1000;
    arg0->status &= ~0x200;
    arg0->status &= ~0x400;
    if (func_8016F1C4() != 0) {
        return;
    }
    if (arg0->state == 0x1E || arg0->state == 0x1A) {
        return;
    }
    if ((D_80078E96 & 0x8000) || D_80078EB8 < 0xB || D_80078EA6 < 0x10 || D_80078EC1 == 1) {
        arg0->status |= 0x200;
    }
    if (AF(c, s16, 0x22) & 0x8000) {
        arg0->scaleB[0] = 0x555;
        arg0->scaleB[1] = 0x555;
        arg0->scaleB[2] = 0x555;
        arg0->status |= 0x400;
    }
}

extern void CurePoison();

void CurePlayerPoison(void) {
    CurePoison(&g_Player);
}

void PoisonPlayer(s32 arg0, s32 arg1) {
    StartPoison((s32) &g_Player, arg1);
}

void CurePoison(arg0, arg1, arg2, arg3)
s32 arg0;
s32 arg1;
s32 arg2;
s32 arg3;
{
    g_StatusPoison = 0;
    D_80078ECC = 0;
}

s32 StartPoison(arg0, arg1)
s32 arg0;
s32 arg1;
{
    SetPoisonWord();
    D_80078ECC = 0x80000000;
    return 0x80000000;
}

s32 SetPoisonWord(void) {
    g_StatusPoison = 0x80000000;
    return 0x80000000;
}

void UpdatePoison(Player *arg0) {
    u8 *c = &g_Status;
    SVECTOR v;

    if (func_8016F1C4() != 0) {
        return;
    }
    if (arg0->state == 0x1E || arg0->state == 0x1A) {
        return;
    }
    if (((s16 *)&g_StatusPoison)[1] & 0x8000) {
        if ((s32)arg0->status & 0x80) {
            g_StatusPoison += 0xAAA8;
        } else {
            g_StatusPoison += 0x1555;
        }
        if ((AF(c, s16, 0x1E) & 0x7FFF) >= 0x3D) {
            AF(c, s32, 0x1C) = 0x80000000;
            LoseHp(arg0, 8);
            v.vx = (u16)arg0->pos[0].h.i;
            v.vy = (u16)arg0->pos[1].h.i - 0x20;
            v.vz = (u16)arg0->pos[2].h.i;
            ShowNumberAt(arg0, &v, 6, 0);
            StartRumbleScript((s32) &D_80062BF4);
        }
    }
    if (AF(c, s16, 0x56) & 0x8000) {
        if ((s32)arg0->status & 0x80) {
            AF(c, s32, 0x54) += 0xAAA8;
        } else {
            AF(c, s32, 0x54) += 0x1555;
        }
        if ((AF(c, s16, 0x56) & 0x7FFF) >= 0x3D) {
            AF(c, s32, 0x54) = 0x80000000;
        }
    }
}

void CureShrink(s32 arg0) {
    D_80078E98 = 0;
}

void StartShrink(s32 arg0) {
    AF(arg0, s16, 0x1C8) = 0;
    D_80078E98 = 0x80000000;
    func_80166244(arg0);
}

extern s16 D_80078E9A;
s32 GetPlayerAction();

void UpdateShrink(Player *arg0) {
    s32 temp_v1;
    u16 temp_a0;

    if (GetPlayerAction(arg0) == 0) {
        temp_a0 = AF(arg0, s32, 0);
        if ((temp_a0 != 0x1E) && (temp_a0 != 0x1A) && (D_80078E9A & 0x8000)) {
            temp_v1 = D_80078E98 + 0x1555;
            D_80078E98 = temp_v1;
            if ((temp_v1 & 0x7FFF0000) > 0x257F6A) {
                D_80078E98 = 0;
            }
        }
    }
}

void ArmCrest(s8 arg0, s32 arg1) {
    D_80126D1C = arg0;
    D_80126D74 = arg1;
}

void ClearCrest(Player *arg0) {
    arg0->unk1BC[8] = 0;
}

s32 GetArmedCrest(s32 arg0) {
    return AF(arg0, u8, 0x1C4);
}

void SetObjByte1C7(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, u8, 0x1C7) = (s8) (arg1 | arg2);
}

void ClearObjByte1C7(Player *arg0) {
    arg0->unk1BC[11] = 0;
}

void func_8014B5D8(u8 *a) {
    u8 *c = &g_Status;
    s32 f;
    s32 n;

    if (func_8016F1C4() != 0) {
        return;
    }
    if (AF(a, u16, 0) == 0x1E || AF(a, u16, 0) == 0x1A) {
        return;
    }
    f = AF(a, s32, 0x44);
    if (f & 0x10) {
        return;
    }
    if (f & 0x80) {
        if (GetFlag(0x1B) & 0xFF) {
            n = 0x2D8;
        } else {
            n = 0x5B0;
        }
    } else {
        n = 0x16C;
    }
    if (AF(c, u8, 0x49) == 0x12) {
        n *= 2;
    }
    AF(c, s32, 0x24) -= n;
    if (AF(c, s32, 0x24) < 0) {
        AF(c, s32, 0x24) = 0;
        if (AF(a, s32, 0x44) & 0x80) {
            AF(c, s32, 0x28) += 0xAAA8;
        } else {
            AF(c, s32, 0x28) += 0x1555;
        }
        if (AF(c, s16, 0x2A) >= 0x3C) {
            AF(c, s32, 0x28) = 0;
            LoseHp(a, 4);
        }
    } else {
        AF(c, s32, 0x28) = 0;
        AF(c, u8, 0x43) = 0;
    }
}

void AddGauge24(s32 arg0, s32 arg1) {
    D_80078E9C += arg1;
    if (((s16 *)&D_80078E9C)[1] >= 0xA1) {
        D_80078E9C = 0xA00000;
    }
    D_80078ED0 += arg1;
    if (((s16 *)&D_80078ED0)[1] >= 0xA1) {
        D_80078ED0 = 0xA00000;
    }
}

void SubGauge24(s32 arg0, s32 arg1) {
    D_80078E9C -= arg1;
    if (((s16 *)&D_80078E9C)[1] < 0) {
        D_80078E9C = 0;
    }
}

void UpdateWakeGauge(Player *a) {
    u8 *w = (u8 *)&D_800AF630;
    u8 *c = &g_Status;
    s32 f;
    s32 k;

    if (func_8016F1C4() != 0) {
        return;
    }
    if (a->state == 0x1E || a->state == 0x1A) {
        return;
    }
    f = (s32)a->status;
    if (f & 0x10) {
        return;
    }
    if (f & 0x80) {
        if (GetFlag(0x1B) & 0xFF) {
            AddWakeGauge(a, 0x2D80, 0);
        } else {
            AddWakeGauge(a, 0x16C0, 0);
        }
    } else if (D_800B9A08 != 0x3024 && D_800B9A08 != 0x3042 && D_800B9A08 != 0x3067 && D_800B9A08 != 0x3075) {
        if (GetFlag(0x21) & 0xFF) {
            D_80078EA4 -= 0xF2;
        } else {
            D_80078EA4 -= 0x16C;
        }
    }
    if (AF(c, s32, 0x2C) < 0) {
        AF(c, s32, 0x2C) = 0;
        if ((s32)a->status & 0x80) {
            AF(c, s32, 0x30) += 0xAAA8;
        } else {
            AF(c, s32, 0x30) += 0x1555;
        }
        if (AF(c, s16, 0x32) >= 0x3C) {
            AF(c, s32, 0x30) = 0;
            if (AF(w, s16, 0xA3D8) != 0x3051) {
                a->status |= 0x100;
            }
        }
    }
}

void AddWakeGauge(s32 a, s32 n, s32 force) {
    u8 *c = &g_Status;

    if (force != 0) {
        D_80078EA4 += n;
        if (((s16 *)&D_80078EA4)[1] > 0xA0) {
            D_80078EA4 = 0xA00000;
        }
    } else if (GetFlag(0x1B) & 0xFF) {
        D_80078EA4 += n;
        if (((s16 *)&D_80078EA4)[1] > 0xA0) {
            D_80078EA4 = 0xA00000;
        }
    } else if (D_80078EA6 < 0x80) {
        D_80078EA4 += n;
        if (((s16 *)&D_80078EA4)[1] > 0x80) {
            D_80078EA4 = 0x800000;
        }
    }
    if (force != 0) {
        AF(c, s32, 0x60) += n;
        if (AF(c, s16, 0x62) > 0xA0) {
            AF(c, s32, 0x60) = 0xA00000;
        }
    } else if (GetFlag(0x1B) & 0xFF) {
        AF(c, s32, 0x60) += n;
        if (AF(c, s16, 0x62) > 0xA0) {
            AF(c, s32, 0x60) = 0xA00000;
        }
    } else if (AF(c, s16, 0x62) < 0x80) {
        AF(c, s32, 0x60) += n;
        if (AF(c, s16, 0x62) > 0x80) {
            AF(c, s32, 0x60) = 0x800000;
        }
    }
}

s32 FillHp(arg0)
s32 arg0;
{
    D_80078EB4 = D_80078EB2;
    return (s32) D_80078EB2;
}

void AddHp(s32 a, s32 n, s32 force) {
    u8 *c = &g_Status;

    if (force != 0) {
        D_80078EB4 += n;
    } else if (GetFlag(0x1B) & 0xFF) {
        if (D_80078EB4 < 999) {
            D_80078EB4 += n;
            if (D_80078EB4 > 999) {
                D_80078EB4 = 999;
            }
        }
    } else if (D_80078EB4 < 500) {
        D_80078EB4 += n;
        if (D_80078EB4 > 500) {
            D_80078EB4 = 500;
        }
    }
    if (AF(c, u16, 0x3A) < AF(c, u16, 0x3C)) {
        AF(c, u16, 0x3C) = AF(c, u16, 0x3A);
    }
}

void AddMaxHp(s32 arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = D_80078EB2 + arg1;
    D_80078EB2 = temp_v0;
    if ((u32) (temp_v0 & 0xFFFF) >= 0x1F5U) {
        D_80078EB2 = 0x1F4;
    }
}

s32 DamagePlayerHp(s32 arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if (AF(arg0, s32, 0x44) & 0x02000000) {
        var_a1 = (s32) D_80078EB2;
    }
    LoseHp(arg0, var_a1);
}

void LoseHp(s32 arg0, s32 arg1) {
    if ((s32) D_80078EB4 < arg1) {
        D_80078EB4 = 0;
        D_800B9A17 = 0;
        return;
    }
    D_80078EB4 -= arg1;
}

void LoseHpNonLethal(s32 arg0, s32 arg1) {
    if (arg1 < (s32) D_80078EB4) {
        D_80078EB4 -= arg1;
    } else {
        D_80078EB4 = 1;
    }
}

void AddMaxBp(s32 arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = D_80078EB6 + arg1;
    D_80078EB6 = temp_v0;
    if ((u32) (temp_v0 & 0xFFFF) >= 0x663U) {
        D_80078EB6 = 0x662;
    }
}

void AddBp(arg0, arg1, arg2)
    s32 arg0;
    s32 arg1;
    s32 arg2;
{
    u16 temp_v0;

    temp_v0 = D_80078EB8 + arg1;
    D_80078EB8 = temp_v0;
    if ((u16) D_80078EB6 < (u32) (temp_v0 & 0xFFFF)) {
        D_80078EB8 = D_80078EB6;
    }
}

void SpendBp(s32 arg0, s32 arg1) {
    if ((s32) D_80078EB8 < arg1) {
        D_80078EB8 = 0;
        return;
    }
    D_80078EB8 -= arg1;
}

void SetBp(s32 arg0, u16 arg1) {
    D_80078EB8 = arg1;
    if ((u16) D_80078EB6 < (u32) (arg1 & 0xFFFF)) {
        D_80078EB8 = D_80078EB6;
    }
}

s32 FillBp(void) {
    D_80078EB8 = D_80078EB6;
    return (s32) D_80078EB6;
}

void NopBDE0(void) {
}

extern s32 PlayerEvent08();
extern void AddWalkDistance();

void CountWalkDistance(Player *arg0) {
    SVECTOR a;
    SVECTOR b;

    if (GetPlayerAction(arg0) == 0 && PlayerEvent08(arg0) == 0) {
        a = AF(arg0, SVECTOR, 0x98);
        PosToSVec((u8 *)arg0 + 4, &b);
        b.vy = 0;
        a.vy = 0;
        AddWalkDistance((s16)SVecDist(&a, &b));
    }
}

void SetFlag12F(void) {
    SetFlag(0x12F, 1);
}

void ClearFlag12F(void) {
    SetFlag(0x12F, 0);
}

void SetFlag80(s32 arg0) {
    D_80078EC0 |= 1;
    SetFlag(0x80, 1);
}

s32 TestFlag80(u8 *arg0) {
    return GetFlag(0x80) & 0xFF;
}

void SetVarCF(s32 arg0) {
    s32 var_a1;

    var_a1 = arg0;
    if (var_a1 < 0) {
        var_a1 = 0;
    }
    SetVar(0xCF, var_a1 & 0xFF);
}

void ClearVarCF(arg0)
s32 arg0;
{
    SetVar(0xCF, 0);
}

s32 GetVarCF(void) {
    return GetVar(0xCF) & 0xFF;
}

void SetVarD0(s32 arg0) {
    SetVar(0xD0, arg0 & 0xFF);
}

void ClearVarD0(void) {
    SetVar(0xD0, 0);
}

s32 GetVarD0(s32 arg0, s32 arg1) {
    return GetVar(0xD0, arg1) & 0xFF;
}

s32 SetState4EIfIdle(s32 arg0, s32 arg1) {
    u8 temp_v0;

    temp_v0 = AF(arg0, u8, 0x4E);
    if (temp_v0 == 0) {
        AF(arg0, u8, 0x4E) = (u8) arg1;
    }
    return (s32) temp_v0;
}

s32 SpawnEffect2(s32 arg0, s32 arg1) {
    struct {
        s16 a, b, c, d;
        s32 e, f, g;
    } m;

    m.e = arg0;
    m.a = 2;
    m.b = 0;
    m.c = 0;
    m.d = 0;
    m.f = arg1;
    m.g = 0;
    return AllocEffect(&m);
}

s32 FindEffectByKind(s32 arg0, s32 arg1) {
    u16 *p;
    u32 i;

    i = 0;
    for (p = (u16 *) &g_Effects; i < 0x1E; i++) {
        if (*p == arg1) {
            return (s32) p;
        }
        p = (u16 *)((u8 *)p + 0x58);
    }
    return 0;
}

s32 FindObj68ByKind(s32 arg0, s32 arg1) {
    u16 *p;

    for (p = (u16 *) &D_8011F9D0; p < (u16 *)((u8 *) &D_8011F9D0 + 0xC30); p = (u16 *)((u8 *)p + 0x68)) {
        if (*p == arg1) {
            return (s32) p;
        }
    }
    return 0;
}

s32 FindActorByKindAndDefE(s32 arg0, s32 arg1, s32 arg2) {
    u8 *p;
    u32 i;
    s16 v = arg2;

    for (i = 0; i < 0x60; i++) {
        p = &g_Actors + i * 0x10C;
        if (AF(p, u16, 0) == arg1 && AF(p, s16, 0xFC) == v) {
            return (s32) p;
        }
    }
    return 0;
}

s32 FindActorByKindAnd70(Player *arg0, s32 arg1, s32 arg2) {
    u8 *p;
    u32 i;
    s16 v = arg2;

    for (i = 0; i < 0x60; i++) {
        p = &g_Actors + i * 0x10C;
        if (AF(p, u16, 0) == arg1 && AF(p, s16, 0x70) == v) {
            return (s32) p;
        }
    }
    return 0;
}

s32 FindActorByKindAny(arg0, arg1, arg2)
    s32 arg0;
    s32 arg1;
    s32 arg2;
{
    u16 *p;
    u32 i;

    i = 0;
    for (p = (u16 *) &g_Actors; i < 0x60; i++) {
        if (*p == arg1) {
            return (s32) p;
        }
        p = (u16 *)((u8 *)p + 0x10C);
    }
    return 0;
}

s32 ClipObjBehindWallDef(s32 arg0, s32 arg1) {
    return ClipObjBehindWall(arg0, arg1, (s32) &D_8018F14C);
}

extern s32 TraceMap();

s32 ClipObjBehindWall(s32 arg0, s32 arg1, s32 arg2) {
    SVECTOR a;
    SVECTOR b;

    a.vx = AF(arg0, s16, 6);
    a.vy = AF(arg0, s16, 0xA);
    a.vz = AF(arg0, s16, 0xE);
    b.vx = AF(arg1, s16, 6) + AF(arg2, s16, 0);
    b.vy = AF(arg1, s16, 0xA) + AF(arg2, s16, 2);
    b.vz = AF(arg1, s16, 0xE) + AF(arg2, s16, 4);
    if (TraceMap(1, &a, &b) != 0) {
        AF(arg1, s16, 6) = b.vx;
        AF(arg1, s16, 0xA) = b.vy;
        AF(arg1, s16, 0xE) = b.vz;
    }
}

s32 IsObjWithin(s32 arg0, s32 arg1, s32 arg2) {
    return PosDist(arg0 + 4, arg1 + 4) < (arg2 & 0xFFFF);
}

extern s32 GetHeadingToObj();

s32 IsFacingObj(s32 arg0, s32 arg1, s32 arg2) {
    return (s16)AngleDist((s16)GetHeadingToObj(arg0, arg1), AF(AF(arg0, s32, 0x20), s16, 0x12)) < (arg2 & 0xFFFF);
}

s32 CanStrikeActor(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (AF(arg1, u16, 0) == 0 || AF(arg1, s32, 0x58) == 0) {
        return 0;
    }
    if (AF(arg1, u16, 0x5E) != arg2) {
        if ((AF(arg1, s32, 0x5C) & 0xC100) != 0x8000) {
            return 0;
        }
        if (!(AF(arg1, s16, 0xAE) & (u16)arg3)) {
            if (arg2 != 9 && arg2 != 0x11 && arg2 != 0x29 && arg2 != 0xA && AF(arg0, s32, 0x178) == arg1) {
                return 0;
            }
            return 1;
        }
    }
    return 0;
}

s32 StrikeActorFacing(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return StrikeActorWithDamage(arg0, arg1, arg2, arg3, /* extra? */ (s32) AF(AF(arg0, void *, 0x20), s16, 0x12));
}

s32 StrikeActorToward(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return StrikeActorWithDamage(arg0, arg1, arg2, arg3, (s16)GetHeadingToObj(arg0, arg1));
}

s32 StrikeActorWithDamage(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    return StrikeActor(arg1, arg2, RollDamage(arg2 & 0xFFFF, arg1) & 0xFFFF, arg3, /* extra? */ (s32) (s16) arg4);
}

extern u16 D_801152B8;
extern u16 D_8012693A;
extern s32 D_80126CD0;

s32 StrikeActor(arg0, arg1, arg2, arg3, arg4)
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 arg3;
    u16 arg4;
{
    if (arg0 != 0) {
        if (AF(arg0, u16, 0) != 0) {
            if ((arg1 == 9) || (arg1 == 0x11) || (arg1 == 0x29) || (arg1 == 0xA) || (D_80126CD0 != arg0)) {
                AF(arg0, s16, 0x5E) = (s16) arg1;
                AF(arg0, u16, 0x62) = arg4;
                AF(arg0, s16, 0x60) = (s16) arg2;
                AF(arg0, u16, 0x5C) = (u16) (AF(arg0, u16, 0x5C) | 1);
                AF(arg0, SVECTOR, 0x7c) = AF(arg3, SVECTOR, 0x0);
                AF(arg0, u8, 0xC9) = (s8) D_8012693A;
                AF(arg0, u8, 0xC8) = (s8) D_801152B8;
                return arg0;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 0;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 GetHeadingToPoint(s32 arg0, s32 arg1) {
    s16 temp_a2;

    temp_a2 = AF(arg0, s16, 6);
    return ratan2(temp_a2 - AF(arg1, s16, 0), AF(arg0, s16, 0xE) - AF(arg1, s16, 4), (s32) temp_a2) & 0xFFF;
}

s32 GetHeadingToObj(s32 arg0, s32 arg1) {
    s16 temp_a2;

    temp_a2 = AF(arg0, s16, 6);
    return ratan2(temp_a2 - AF(arg1, s16, 6), AF(arg0, s16, 0xE) - AF(arg1, s16, 0xE), (s32) temp_a2) & 0xFFF;
}

s16 GetPitchToObj(s32 arg0, s32 arg1) {
    return GetPitchToObjOffset(arg0, arg1, (s32) &D_8018F154);
}

extern s32 SquareRoot0();
extern s32 ratan2();

s32 GetPitchToObjOffset(s32 arg0, s32 arg1, s32 arg2) {
    s16 dz;
    s16 dx;

    dz = (AF(arg1, u16, 0xE) + AF(arg2, u16, 4)) - AF(arg0, u16, 0xE);
    dx = (AF(arg1, u16, 6) + AF(arg2, u16, 0)) - AF(arg0, u16, 6);
    return ratan2((AF(arg1, s16, 0xA) + AF(arg2, s16, 2)) - AF(arg0, s16, 0xA), (s16)SquareRoot0(dz * dz + dx * dx)) & 0xFFF;
}

void func_8014C6AC(void) {
    D_80126D17 = 1;
}

void func_8014C6C0(void) {
    D_80126D17 = 0;
}

void ClearPlayerMode1C6(void) {
    D_80126D1E = 0;
}

void SetPlayerMode1C6(void) {
    D_80126D1E = 1;
}

static inline s32 h_8014C088(s32 arg0, s32 arg1) {
    u16 *p;
    for (p = (u16 *) &D_8011F9D0; p < (u16 *)((u8 *) &D_8011F9D0 + 0xC30); p = (u16 *)((u8 *)p + 0x68)) {
        if (*p == arg1) {
            return (s32) p;
        }
    }
    return 0;
}

void UpdatePlayerPoints(Player *arg0) {
    u8 *c = &g_Status;
    s32 p;

    if ((s32)arg0->status & 2) {
        arg0->unk1BC[7] = 1;
    }
    if (((s32)arg0->status ^ arg0->unk48) & AF(arg0, s32, 0x44) & 0x200) {
        arg0->unk1BC[7] = 0;
    }
    AF(arg0, SVECTOR, 0x164) = AF(arg0->model, SVECTOR, 0x10);
    if (GetPlayerAction() != 0 || (((s32)arg0->status & 0x200) && arg0->unk1BC[7] == 0)) {
        arg0->pointUnset = 1;
    } else {
        if (c[0x49] == 0x17 && (p = h_8014C088(0, 0x22)) != 0) {
            PosToSVec(p + 4, (u8 *)arg0 + 0x15C);
        } else if (arg0->state != 0x19) {
            PosToSVec((u8 *)arg0 + 4, (u8 *)arg0 + 0x15C);
        }
        arg0->pointUnset = 0;
    }
    if (AF(arg0, s16, 0x15A) == 0) {
        arg0->focus[0] = (u16)arg0->pos[0].h.i;
        arg0->focus[1] = (u16)arg0->pos[1].h.i;
        arg0->focus[2] = (u16)arg0->pos[2].h.i;
    }
    AF(arg0, s16, 0x15A) = 0;
}

void SetPlayerFocus(u8 *arg0, u8 *arg1) {
    AF(arg0, SVECTOR, 0x154) = AF(arg1, SVECTOR, 0x0);
    AF(arg0, s16, 0x15A) = 1;
}

void SetTargetPointToSelf(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp10;

    PosToSVec(arg0 + 4, (s32) &sp10, arg2);
    SetTargetPoint(arg0, (s32) &sp10);
}

void SetTargetPoint(s32 arg0, s32 arg1) {
    AF(arg0, SVECTOR, 0x15c) = AF(arg1, SVECTOR, 0x0);
    AF(arg0, s16, 0x162) = 0;
}

void SetTargetPointToLastPos(arg0)
    u8 *arg0;
{
    AF(arg0, SVECTOR, 0x15C) = AF(arg0, SVECTOR, 0x90);
}

extern u8 D_801151F0[];

s32 SurfaceIndexOf(s32 arg0, s32 arg1) {
    u8 i;

    if (arg1 == 0x18) {
        return 8;
    }
    for (i = 0; i < 8; i++) {
        if (D_801151F0[i] == arg1) {
            return i;
        }
    }
    return 0;
}

void ClearFatalHit(void) {
    D_80126B50 = 0;
}

s32 SetFatalHit(void) {
    D_80126B50 = 1;
    return 1;
}

s32 GetFatalHit(void) {
    return D_80126B50;
}

void CloseFlaggedMessage(Player *arg0) {
    if (GetFlag(0x119) & 0xFF) {
        if (GetPlayerAction()) {
            CloseMessage(arg0->unk198);
            arg0->unk198 = 0;
            SetFlag(0x119, 0);
        }
    }
}

s32 GetAbsorbAbility(u8 *obj) {
    return *(s16 *)(*(u8 **)(obj + 0x78) + 0x2C);
}

s32 func_8014CA14(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = func_8014CA70() & 0xFFFF;
    var_v0 = 1;
    if (temp_a0 != 0) {
        if (temp_a0 == g_SkipSeId) {
            g_SkipSeId = 0;
            return 0;
        }
        PlaySePositional(temp_a0, 0);
        var_v0 = 0;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

s32 func_8014CA70(u8 *arg0, s32 arg1) {
    return ((u16 *)(AF(arg0, u8 *, 0x78) + 0x14))[arg1];
}

s32 func_8014CA88(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = func_8014CAE4() & 0xFFFF;
    var_v0 = 1;
    if (temp_a0 != 0) {
        if (temp_a0 == g_SkipSeId) {
            g_SkipSeId = 0;
            return 0;
        }
        PlaySePositional(temp_a0, 0);
        var_v0 = 0;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

s32 func_8014CAE4(u8 *arg0, s32 arg1) {
    return ((u16 *)(AF(arg0, u8 *, 0x78) + 0x1C))[arg1];
}

s32 PlayerFlag400(void) {
    return g_PlayerFlags & 0x400;
}

s32 PlayerFlag80(void) {
    return g_PlayerFlags & 0x80;
}

s32 GetPoisonWord(void) {
    return g_StatusPoison;
}

extern u8 D_80126D1F;

s32 GetPlayerByte1C7(void) {
    s32 v = D_80126D1F;
    if (v & 0x80) {
        v = (v & 0x7F) | 0x80000000;
    }
    return v;
}

s32 GetTechnique(void) {
    return D_80078EC0 & 0x7F;
}

void RequestTalkCheck(s32 arg0) {
    D_80126D1D = 1;
}

s32 IsSteelActive(void) {
    return g_PlayerFlags & 0x800;
}

s32 PlayerFlag1000(void) {
    return g_PlayerFlags & 0x1000;
}

void SetGroundPush(u8 *arg0) {
    AF(&D_80126C98, SVECTOR, 0x0) = AF(arg0, SVECTOR, 0x0);
    D_80126C9E = 1;
}

void ClearPlayerWord184(void) {
    D_80126CDC = 0;
}

void ClearPlayerSurface(void) {
    D_80126CC4 = 0;
}

void LeavePlatform(arg0, arg1)
s32 arg0;
s32 arg1;
{
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x174);
    if ((temp_v1 != NULL) && (AF(temp_v1, u16, 0) != 0)) {
        AF(arg0, void *, 0x174) = NULL;
        AF(temp_v1, u8, 0x74) = 0;
    }
}

s32 ProbePlatformByMove(arg0)
s32 arg0;
{
    if (AF(arg0, s32, 0x44) < 0) {
        if (AF(arg0, s16, 0xA) != AF(arg0, s16, 0x8A)) {
            return ProbePlatformFall(arg0);
        }
        if ((AF(arg0, s16, 6) != AF(arg0, s16, 0x88)) || (AF(arg0, s16, 0xE) != AF(arg0, s16, 0x8C))) {
            return ProbePlatformSlide();
        }
        goto block_6;
    }
block_6:
    return ProbePlatformStill();
}

extern s32 D_801ED4D8;
extern s32 ProbePlatformStillBody();

s32 ProbePlatformStill(void) {
    SetSpadStackNested();
    D_801ED4D8 = ProbePlatformStillBody();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 FindPlatformStill();
extern s32 KeepPlatformStill();

s32 ProbePlatformStillBody(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 y, z;
    s32 r;

    a.vx = b.vx = AF(arg0, s16, 6);
    y = AF(arg0, u16, 0xA);
    a.vy = y - 3;
    z = AF(arg0, u16, 0xE);
    b.vy = y + 5;
    a.vz = b.vz = z;
    if (AF(arg0, void *, 0x174) == NULL) {
        r = FindPlatformStill(arg0, &a, &b);
    } else {
        r = KeepPlatformStill(arg0, &a, &b);
    }
    return r;
}

s32 KeepPlatformStill(u8 *o, u16 *p1, u16 *p2) {
    u8 *a;
    s32 r;

    a = AF(o, u8 *, 0x174);
    if (AF(a, u16, 0) == 0 || !(AF(a, u16, 0x5C) & 0x400) || AF(a, s32, 0x58) == 0
        || AF(a, s16, 0xA) < AF(o, s16, 0xA)) {
        if (AF(a, u16, 0) != 0) {
            AF(a, u8, 0x74) = 0;
        }
        AF(o, u8 *, 0x174) = NULL;
        return 0;
    }
    p1[0] = AF(o, u16, 0x98);
    p1[1] = AF(o, u16, 0x9A) - 3;
    p1[2] = AF(o, u16, 0x9C);
    if (AF(a, u16, 0x5C) & 8) {
        p2[1] = p1[1] + 0xC;
        r = func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2);
        if (r != 0) {
            AF(o, u16, 6) = AF(o, u16, 0x78) = p2[0];
            AF(o, u16, 0xA) = AF(o, u16, 0x7A) = p2[1];
            AF(o, u16, 0xE) = AF(o, u16, 0x7C) = p2[2];
        }
    } else {
        r = PathHitsModel(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2);
    }
    if (r != 0) {
        AF(o, s16, 0x16E) = (u8)SurfaceIndexOf(o, AF(a, u8, 0x75));
        return 1;
    }
    AF(a, u8, 0x74) = 0;
    AF(o, u8 *, 0x174) = NULL;
    return 0;
}

s32 FindPlatformStill(u8 *o, u16 *p1, u16 *p2) {
    u8 *a;

    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x400) && AF(a, s32, 0x58) != 0
            && a != AF(o, u8 *, 0x178) && a != AF(o, u8 *, 0x174) && AF(a, s16, 0xA) >= AF(o, s16, 0xA)
            && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
            AF(o, u8 *, 0x174) = a;
            AF(a, u8, 0x74) = 1;
            AF(o, u16, 6) = p2[0];
            AF(o, u16, 0xA) = p2[1];
            AF(o, u16, 0xE) = p2[2];
            AF(o, s16, 0x16E) = (u8)SurfaceIndexOf(o, AF(a, u8, 0x75));
            return 1;
        }
    }
    return 0;
}

extern s32 ProbePlatformSlideBody();

s32 ProbePlatformSlide(void) {
    SetSpadStackNested();
    D_801ED4D8 = ProbePlatformSlideBody();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 FindPlatformSlide();
extern s32 KeepPlatformSlide();

s32 ProbePlatformSlideBody(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    a.vx = AF(arg0, u16, 0x88);
    a.vy = AF(arg0, u16, 0x8A);
    a.vz = AF(arg0, u16, 0x8C);
    b.vx = AF(arg0, u16, 6);
    b.vy = AF(arg0, u16, 0xA);
    b.vz = AF(arg0, u16, 0xE);
    if (AF(arg0, void *, 0x174) == NULL) {
        r = FindPlatformSlide(arg0, &a, &b);
    } else {
        r = KeepPlatformSlide(arg0, &a, &b);
    }
    return r;
}

s32 KeepPlatformSlide(u8 *o, u16 *p1, u16 *p2) {
    u8 *a;

    p1[1] -= 3;
    p2[1] += 8;
    a = AF(o, u8 *, 0x174);
    if (AF(a, u16, 0) == 0 || !(AF(a, u16, 0x5C) & 0x400) || AF(a, s32, 0x58) == 0
        || AF(a, s16, 0xA) < AF(o, s16, 0xA)) {
        if (AF(a, u16, 0) != 0) {
            AF(a, u8, 0x74) = 0;
        }
        AF(o, u8 *, 0x174) = NULL;
        return 0;
    }
    p1[0] = AF(o, u16, 0x98);
    p1[1] = AF(o, u16, 0x9A) - 3;
    p1[2] = AF(o, u16, 0x9C);
    if (AF(a, u16, 0x5C) & 8) {
        p2[1] = p1[1] + 0x18;
    }
    if (func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
        AF(o, u16, 6) = p2[0];
        AF(o, u16, 0xA) = p2[1];
        AF(o, u16, 0xE) = p2[2];
        AF(o, u16, 0x16E) = (u8)SurfaceIndexOf(o, AF(a, u8, 0x75));
        return 1;
    }
    AF(a, u8, 0x74) = 0;
    AF(o, u8 *, 0x174) = NULL;
    return 0;
}

s32 FindPlatformSlide(u8 *o, u16 *p1, u16 *p2) {
    u8 *a;

    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x400) && AF(a, s32, 0x58) != 0
            && a != AF(o, u8 *, 0x178) && a != AF(o, u8 *, 0x170)
            && AF(a, s16, 0xA) >= AF(o, s16, 0xA)
            && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
            AF(o, u16, 6) = p2[0];
            AF(o, u16, 0xA) = p2[1];
            AF(o, u16, 0xE) = p2[2];
            AF(o, u16, 0x16E) = (u8)SurfaceIndexOf(o, AF(a, u8, 0x75));
            return 1;
        }
    }
    return 0;
}

extern s32 ProbePlatformFallBody();

s32 ProbePlatformFall()
{
    SetSpadStackNested();
    D_801ED4D8 = ProbePlatformFallBody();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 FindPlatformFall();
extern s32 KeepPlatformFall();

s32 ProbePlatformFallBody(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A);
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA);
    b.vz = AF(arg0, s16, 0xE);
    if (AF(arg0, void *, 0x174) == NULL) {
        r = FindPlatformFall(arg0, &a, &b);
    } else {
        r = KeepPlatformFall(arg0, &a, &b);
    }
    return r;
}

s32 KeepPlatformFall(u8 *o, u16 *p1, u16 *p2) {
    u8 *a;

    p1[1] -= 3;
    p2[1] += 8;
    a = AF(o, u8 *, 0x174);
    if (AF(a, u16, 0) == 0 || !(AF(a, u16, 0x5C) & 0x400) || AF(a, s32, 0x58) == 0
        || AF(a, s16, 0xA) < AF(o, s16, 0xA)) {
        if (AF(a, u16, 0) != 0) {
            AF(a, u8, 0x74) = 0;
        }
        AF(o, u8 *, 0x174) = NULL;
        return 0;
    }
    p1[0] = AF(o, u16, 0x98);
    p1[1] = AF(o, u16, 0x9A) - 3;
    p1[2] = AF(o, u16, 0x9C);
    if (func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
        AF(o, u16, 6) = p2[0];
        AF(o, u16, 0xA) = p2[1];
        AF(o, u16, 0xE) = p2[2];
        AF(o, u16, 0x16E) = (u8)SurfaceIndexOf(o, AF(a, u8, 0x75));
        return 1;
    }
    AF(a, u8, 0x74) = 0;
    AF(o, u8 *, 0x174) = NULL;
    return 0;
}

s32 FindPlatformFall(u8 *arg0, SVECTOR *arg1, SVECTOR *arg2) {
    u8 *a;
    s32 f;

    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x400)) {
            f = AF(a, s32, 0x58);
            if (f != 0 && AF(a, s16, 0xA) >= AF(arg0, s16, 0xA)
                && func_80135A4C(AF(a, s32, 0x20), f, arg1, arg2) != 0) {
                AF(arg0, u8 *, 0x174) = a;
                AF(a, u8, 0x74) = 1;
                AF(arg0, s16, 6) = arg2->vx;
                AF(arg0, s16, 0xA) = arg2->vy;
                AF(arg0, s16, 0xE) = arg2->vz;
                AF(arg0, s16, 0x16E) = SurfaceIndexOf(arg0, AF(a, u8, 0x75)) & 0xFF;
                return 1;
            }
        }
    }
    return 0;
}

extern s32 PushBlockBody();

s32 PushBlock()
{
    SetSpadStackNested();
    D_801ED4D8 = PushBlockBody();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 FindPushBlock();
extern s32 func_8014D820();

s32 PushBlockBody(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A) - 0x10;
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA) - 0x10;
    b.vz = AF(arg0, s16, 0xE);
    if (AF(arg0, void *, 0x170) == NULL) {
        r = FindPushBlock(arg0, &a, &b);
    } else {
        r = func_8014D820(arg0, &a, &b);
    }
    return r;
}

extern SVECTOR g_GroundNormal;
extern u8 D_8018F15C;
extern void RotateSVectorY();
extern s32 PathHitsModel();
extern s32 BlockRaysHitActor();

s32 func_8014D820(u8 *o, u16 *p1, u16 *p2) {
    SVECTOR c[3];
    SVECTOR q;
    SVECTOR b;
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame has 16 unused bytes at sp+0x38 */
    VECTOR v;
    s16 dx;
    s16 dz;
    s16 ex;
    s16 ez;
    s32 r;
    s32 k;
    s32 ang;
    u8 *a;
    u8 *e;

    dx = p2[0] - p1[0];
    dz = p2[2] - p1[2];
    if (dx | dz) {
        b.vx = dx;
        b.vy = p2[1] - p1[1];
        b.vz = p2[2] - p1[2];
        a = AF(o, u8 *, 0x170);
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x1000) && AF(a, s32, 0x58) != 0
            && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
            ex = AF(a, u16, 6) - AF(o, u16, 6);
            ez = AF(a, u16, 0xE) - AF(o, u16, 0xE);
            r = (s16)ratan2(dz, dx);
            if ((s16)AngleDist(r, (s16)ratan2(ez, ex)) < 0x400) {
                v.vx = v.vy = v.vz = 0;
                q.vx = AF(a, s16, 6);
                q.vy = AF(a, s16, 0xA);
                q.vz = AF(a, s16, 0xE);
                b.vx = q.vx + b.vx;
                b.vy = q.vy + b.vy + 8;
                b.vz = q.vz + b.vz;
                if (D_800B9A08 != 0x3008) {
                    for (e = &g_Actors; e < &g_Actors + 0x6480; e += 0x10C) {
                        if (e != a && AF(e, u16, 0) != 0 && AF(e, u16, 0x5C) != 0 && AF(e, s32, 0x58) != 0) {
                            PathHitsModel(AF(e, s32, 0x20), AF(e, s32, 0x58), &q, &b);
                        }
                    }
                } else {
                    ang = ratan2(q.vx - b.vx, q.vz - b.vz) & 0xFFF;
                    RotateSVectorY(ang, &D_8018F15C, &c[0]);
                    RotateSVectorY((s16)(ang - 0x155), &D_8018F15C, &c[1]);
                    RotateSVectorY((s16)(ang + 0x155), &D_8018F15C, &c[2]);
                    c[0].vx += q.vx;
                    c[0].vy = q.vy;
                    c[0].vz += q.vz;
                    c[1].vx += q.vx;
                    c[1].vy = q.vy;
                    c[1].vz += q.vz;
                    c[2].vx += q.vx;
                    c[2].vy = q.vy;
                    c[2].vz += q.vz;
                    for (e = &g_Actors; e < &g_Actors + 0x6480; e += 0x10C) {
                        if (e != a && AF(e, u16, 0) != 0 && AF(e, u16, 0x5C) != 0 && AF(e, s32, 0x58) != 0
                            && BlockRaysHitActor(e, &q, c) != 0) {
                            b = q;
                        }
                    }
                }
                k = TraceMap(0, &q, &b);
                if (k == 0 || (k == 0x2000 && ((u16)g_GroundNormal.vx | (u16)g_GroundNormal.vz) == 0)) {
                    AF(a, u16, 6) = b.vx - v.vx;
                    AF(a, u16, 0xA) = b.vy;
                    AF(a, u16, 0xE) = b.vz - v.vz;
                    b.vx -= q.vx;
                    b.vy -= q.vy;
                    b.vz -= q.vz;
                    AF(o, u16, 6) = p1[0] + b.vx;
                    AF(o, u16, 0xA) = p1[1] + (u16)(b.vy + 0x10);
                    AF(o, u16, 0xE) = p1[2] + b.vz;
                } else {
                    AF(o, u16, 6) = p1[0];
                    AF(o, s16, 0xA) = p1[1] + 0x10;
                    AF(o, u16, 0xE) = p1[2];
                }
                return 1;
            }
        }
    }
    AF(o, u8 *, 0x170) = NULL;
    return 0;
}

extern s32 PathHitsModel();

s32 BlockRaysHitActor(u8 *arg0, SVECTOR *arg1, SVECTOR *arg2) {
    VECTOR v;
    s32 i;
    SVECTOR *p;
    v = *(VECTOR *)(AF(arg0, s32, 0x58) & 0x0FFFFFFF);
    for (i = 0, p = arg2; i < 3; i++, p++) {
        if (PathHitsModel(AF(arg0, s32, 0x20), &v, arg1, p) != 0) {
            return 1;
        }
    }
    return 0;
}

s32 FindPushBlock(u8 *o, u16 *p1, u16 *p2) {
    s16 dx;
    s16 dz;
    s16 ex;
    s16 ez;
    s32 r;
    u8 *a;

    dx = p2[0] - p1[0];
    dz = p2[2] - p1[2];
    if (dx | dz) {
        for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
            if (AF(a, u16, 0) != 0 && AF(a, s32, 0x58) != 0 && (AF(a, u16, 0x5C) & 0x1000)
                && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
                ex = AF(a, u16, 6) - AF(o, u16, 6);
                ez = AF(a, u16, 0xE) - AF(o, u16, 0xE);
                r = (s16)ratan2(dz, dx);
                if ((s16)AngleDist(r, (s16)ratan2(ez, ex)) < 0x400) {
                    AF(o, u8 *, 0x170) = a;
                    AF(o, u16, 6) = p2[0];
                    AF(o, s16, 0xA) = p2[1] + 0x10;
                    AF(o, u16, 0xE) = p2[2];
                    return 1;
                }
            }
        }
    }
    return 0;
}

extern s32 PullBlockBody();

s32 PullBlock(void) {
    SetSpadStackNested();
    D_801ED4D8 = PullBlockBody();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 FindPullBlock();
extern s32 func_8014E048();

s32 PullBlockBody(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;

    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A) - 0x10;
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA) - 0x10;
    b.vz = AF(arg0, s16, 0xE);
    b.vx -= a.vx;
    b.vz -= a.vz;
    b.vx = a.vx - b.vx;
    b.vz = a.vz - b.vz;
    if (AF(arg0, void *, 0x170) != NULL) {
        return func_8014E048(arg0, &a, &b);
    } else {
        return FindPullBlock(arg0, &a, &b);
    }
}

s32 func_8014E048(u8 *o, u16 *p1, u16 *p2) {
    SVECTOR from;
    SVECTOR d;
    s16 dx;
    s16 dz;
    s16 ex;
    s16 ez;
    s32 r;
    u8 *a;
    s32 h;

    dx = p2[0] - p1[0];
    dz = p2[2] - p1[2];
    if (dx | dz) {
        d.vx = dx;
        d.vy = p2[1] - p1[1];
        d.vz = p2[2] - p1[2];
        d.vx = -d.vx;
        d.vz = -d.vz;
        a = AF(o, u8 *, 0x170);
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x1000) && AF(a, s32, 0x58) != 0
            && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
            ex = AF(a, u16, 6) - AF(o, u16, 6);
            ez = AF(a, u16, 0xE) - AF(o, u16, 0xE);
            r = (s16)ratan2(dz, dx);
            if ((s16)AngleDist(r, (s16)ratan2(ez, ex)) < 0x400) {
                from.vx = AF(a, s16, 6);
                from.vy = AF(a, s16, 0xA);
                from.vz = AF(a, s16, 0xE);
                d.vx = from.vx + d.vx;
                d.vy = from.vy + d.vy;
                d.vz = from.vz + d.vz;
                h = TraceMap(0, &from, &d);
                if (h == 0 || ((h & 0x2000) && ((u16)g_GroundNormal.vx | (u16)g_GroundNormal.vz) == 0)) {
                    AF(a, s16, 6) = d.vx;
                    AF(a, s16, 0xA) = d.vy;
                    AF(a, s16, 0xE) = d.vz;
                } else {
                    AF(o, u16, 6) = p1[0];
                    AF(o, s16, 0xA) = p1[1] + 0x10;
                    AF(o, u16, 0xE) = p1[2];
                }
                return 1;
            }
        }
    }
    AF(o, void *, 0x170) = NULL;
    return 0;
}

s32 FindPullBlock(u8 *o, u16 *p1, u16 *p2) {
    s16 dx;
    s16 dz;
    s16 ex;
    s16 ez;
    s32 r;
    u8 *a;

    dx = p2[0] - p1[0];
    dz = p2[2] - p1[2];
    if (dx | dz) {
        for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
            if (AF(a, u16, 0) != 0 && AF(a, s32, 0x58) != 0 && (AF(a, u16, 0x5C) & 0x1000)
                && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
                ex = AF(a, u16, 6) - AF(o, u16, 6);
                ez = AF(a, u16, 0xE) - AF(o, u16, 0xE);
                r = (s16)ratan2(dz, dx);
                if ((s16)AngleDist(r, (s16)ratan2(ez, ex)) < 0x400) {
                    AF(o, u8 *, 0x170) = a;
                    AF(o, u16, 6) = p2[0];
                    AF(o, s16, 0xA) = p2[1] + 0x10;
                    AF(o, u16, 0xE) = p2[2];
                    return 1;
                }
            }
        }
    }
    return 0;
}

extern s32 GrabPoleBody();

s32 GrabPole()
{
    SetSpadStackNested();
    D_801ED4D8 = GrabPoleBody();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 FindPole();
extern s32 KeepPole();

s32 GrabPoleBody(u8 *o) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    a.vx = AF(o, u16, 0x88);
    a.vy = AF(o, u16, 0x8A);
    a.vz = AF(o, u16, 0x8C);
    b.vx = AF(o, u16, 6);
    b.vy = AF(o, u16, 0xA);
    b.vz = AF(o, u16, 0xE);
    if (AF(o, s32, 0x17C) == 0) {
        r = FindPole(o, &a, &b);
    } else {
        r = KeepPole(o, &a, &b);
    }
    return r;
}

s32 KeepPole(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x17C);
    if ((AF(temp_s0, u16, 0) == 0) || !(AF(temp_s0, u16, 0x5C) & 0x40) || (temp_a1 = AF(temp_s0, s32, 0x58), (temp_a1 == 0)) || (PathHitsModel(AF(temp_s0, s32, 0x20), temp_a1, arg1, arg2) == 0)) {
        AF(arg0, void *, 0x17C) = NULL;
        return 0;
    }
    AF(arg0, u16, 6) = (u16) AF(temp_s0, u16, 6);
    AF(arg0, u16, 0xE) = (u16) AF(temp_s0, u16, 0xE);
    return 1;
}

s32 FindPole(s32 arg0, s32 arg1, s32 arg2) {
    u8 *a;

    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x40) && AF(a, s32, 0x58) != 0
            && PathHitsModel(AF(a, s32, 0x20), AF(a, s32, 0x58), arg1, arg2) != 0) {
            AF(arg0, u8 *, 0x17C) = a;
            AF(arg0, u16, 6) = AF(a, u16, 6);
            AF(arg0, u16, 0xE) = AF(a, u16, 0xE);
            return 1;
        }
    }
    return 0;
}

extern s32 GrabBarBody();

s32 GrabBar()
{
    SetSpadStackNested();
    D_801ED4D8 = GrabBarBody();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 FindBar();
extern s32 KeepBar();

s32 GrabBarBody(u8 *arg0) {
    s16 p1[3];
    s16 p2[3];

    p1[0] = AF(arg0, s16, 0x88);
    p1[1] = AF(arg0, s16, 0x8A);
    p1[2] = AF(arg0, s16, 0x8C);
    p2[0] = AF(arg0, s16, 6);
    p2[1] = AF(arg0, s16, 0xA);
    p2[2] = AF(arg0, s16, 0xE);
    if (AF(arg0, s32, 0x180) != 0) {
        return KeepBar(arg0, p1, p2);
    }
    p1[1] -= 0x54;
    p2[1] -= 0x54;
    return FindBar(arg0, p1, p2);
}

s32 KeepBar(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x180);
    if ((AF(temp_s0, u16, 0) == 0) || !(AF(temp_s0, u16, 0x5C) & 0x20) || (temp_a1 = AF(temp_s0, s32, 0x58), (temp_a1 == 0)) || (PathHitsModel(AF(temp_s0, s32, 0x20), temp_a1, arg1, arg2) == 0)) {
        AF(arg0, void *, 0x180) = NULL;
        return 0;
    }
    AF(arg0, u16, 6) = (u16) AF(temp_s0, u16, 6);
    AF(arg0, u16, 0xA) = (u16) AF(temp_s0, u16, 0xA);
    AF(arg0, u16, 0xE) = (u16) AF(temp_s0, u16, 0xE);
    return 1;
}

s32 FindBar(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *a;

    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x20) && AF(a, s32, 0x58) != 0
            && PathHitsModel(AF(a, s32, 0x20), AF(a, s32, 0x58), arg1, arg2) != 0) {
            AF(arg0, u8 *, 0x180) = a;
            AF(arg0, u16, 6) = AF(a, u16, 6);
            AF(arg0, u16, 0xA) = AF(a, u16, 0xA);
            AF(arg0, u16, 0xE) = AF(a, u16, 0xE);
            return 1;
        }
    }
    return 0;
}

extern s32 CollidePlayerMoveBody();

s32 CollidePlayerMove() {
    SetSpadStackNested();
    D_801ED4D8 = CollidePlayerMoveBody();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 func_8014EA4C();

s32 CollidePlayerMoveBody(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 i;
    s32 ret;

    ret = 0;
    i = 2;
    if (!(AF(arg0, s32, 0x44) & 0x80000) && !(AF(arg0, s32, 0x1F8) & 0x4000000)) {
        do {
            a.vx = AF(arg0, s16, 0x88);
            a.vy = AF(arg0, s16, 0x8A) - 0x10;
            a.vz = AF(arg0, s16, 0x8C);
            b.vx = AF(arg0, s16, 6);
            b.vy = AF(arg0, s16, 0xA) - 0x10;
            b.vz = AF(arg0, s16, 0xE);
            i--;
            ret |= func_8014EA4C(arg0, &a, &b, i);
        } while (i != 0);
    }
    return ret;
}

extern s32 D_801150D8;
extern s16 D_801152AA;
extern s16 D_80126720;
extern s16 D_80126724;

s32 func_8014EA4C(u8 *o, SVECTOR *p1, SVECTOR *p2) {
    VECTOR w; /* MATCH-TRICK: unused local, frame pad (0x10 bytes below the dead copy v at sp+0x20) */
    SVECTOR v;
    u8 *a;
    s32 dx;
    s32 dz;
    s32 r;
    s32 t;

    r = 0;
    v = *p2; /* never read: the original keeps this dead copy too */
    dx = 8;
    dz = 8;
    switch ((D_800B99DA & 0x60) >> 5) {
    case 0:
    case 1:
        dx = 7;
        break;
    case 2:
        dz = 7;
        break;
    }
    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && AF(a, s32, 0x58) != 0 && a != AF(o, u8 *, 0x178)
            && a != AF(o, u8 *, 0x174) && (AF(a, s32, 0x5C) & 0x1800)) {
            D_801150D8 = 0;
            if (func_80135A4C(((s32 *)a)[8], ((s32 *)a)[0x16], p1, p2) != 0) {
                if (D_801150D8 & 1) {
                    if (!(AF(a, u16, 0x5C) & 0x10)) {
                        if (D_80126720 - p1->vx >= 0) {
                            AF(o, s16, 6) = p2->vx - dx;
                        } else {
                            AF(o, s16, 6) = p2->vx + dx;
                        }
                        if (D_80126724 - p1->vz >= 0) {
                            AF(o, s16, 0xE) = p2->vz - dz;
                        } else {
                            AF(o, s16, 0xE) = p2->vz + dz;
                        }
                    }
                    r |= 2;
                } else {
                    AF(o, s16, 6) = p2->vx;
                    AF(o, s16, 0xA) = p2->vy + 0x10;
                    AF(o, s16, 0xE) = p2->vz;
                    r |= 1;
                    if (AF(a, s32, 0x58) < 0) {
                        t = D_801152AA;
                        if (t < 0) {
                            t = -t;
                        }
                        if ((s16)t > 0x800) {
                            if (D_80126720 - p2->vx >= 0) {
                                AF(o, s16, 6) = p2->vx - dx;
                            } else {
                                AF(o, s16, 6) = p2->vx + dx;
                            }
                            if (D_80126724 - p2->vz >= 0) {
                                AF(o, s16, 0xE) = p2->vz - dz;
                            } else {
                                AF(o, s16, 0xE) = p2->vz + dz;
                            }
                        }
                    }
                }
            }
        }
    }
    return r;
}

extern s32 PushOutOfSolidActorsBody();

s32 PushOutOfSolidActors() {
    SetSpadStackNested();
    D_801ED4D8 = PushOutOfSolidActorsBody();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 func_8014EE14();

s32 PushOutOfSolidActorsBody(s32 arg0) {
    SVECTOR a;
    SVECTOR b;

    if (AF(arg0, s32, 0x44) & 0x80000) {
        return 0;
    }
    if (AF(arg0, s32, 0x1F8) & 0x4000000) {
        return 0;
    }
    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A) - 0x10;
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA) - 0x10;
    b.vz = AF(arg0, s16, 0xE);
    return func_8014EE14(arg0, &a, &b);
}

s32 func_8014EE14(u8 *o, SVECTOR *p1, SVECTOR *p2) {
    u8 *a;
    s32 dx;
    s32 dz;
    s32 r;
    s32 t;

    r = 0;
    dx = 8;
    dz = 8;
    switch ((D_800B99DA & 0x60) >> 5) {
    case 0:
    case 1:
        dx = 7;
        break;
    case 2:
        dz = 7;
        break;
    }
    if (AF(o, s32, 0x44) & 0x100000) {
        for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
            if (AF(a, u16, 0) != 0 && AF(a, s32, 0x58) != 0 && a != AF(o, u8 *, 0x178)
                && a != AF(o, u8 *, 0x174) && (AF(a, s32, 0x5C) & 0x1800)) {
                D_801150D8 = 0;
                if (func_80135A4C(((s32 *)a)[8], ((s32 *)a)[0x16], p1, p2) != 0) {
                    if (D_801150D8 & 1) {
                        if (D_80126720 - p2->vx >= 0) {
                            AF(o, s16, 6) = p2->vx - dx;
                        } else {
                            AF(o, s16, 6) = p2->vx + dx;
                        }
                        if (D_80126724 - p2->vz >= 0) {
                            AF(o, s16, 0xE) = p2->vz - dz;
                        } else {
                            AF(o, s16, 0xE) = p2->vz + dz;
                        }
                        r = 1;
                    } else {
                        AF(o, s16, 6) = p2->vx;
                        AF(o, s16, 0xA) = p2->vy + 0x10;
                        AF(o, s16, 0xE) = p2->vz;
                        r = 1;
                    }
                }
            }
        }
    } else {
        for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
            if (AF(a, u16, 0) != 0 && AF(a, s32, 0x58) != 0 && a != AF(o, u8 *, 0x178)
                && a != AF(o, u8 *, 0x174) && (AF(a, s32, 0x5C) & 0x1800)) {
                D_801150D8 = 0;
                if (func_80135A4C(((s32 *)a)[8], ((s32 *)a)[0x16], p1, p2) != 0) {
                    if (D_801150D8 & 1) {
                        if (D_80126720 - p2->vx >= 0) {
                            AF(o, s16, 6) = p2->vx - dx;
                        } else {
                            AF(o, s16, 6) = p2->vx + dx;
                        }
                        if (D_80126724 - p2->vz >= 0) {
                            AF(o, s16, 0xE) = p2->vz - dz;
                        } else {
                            AF(o, s16, 0xE) = p2->vz + dz;
                        }
                    } else {
                        AF(o, s16, 6) = p2->vx;
                        AF(o, s16, 0xA) = p2->vy + 0x10;
                        AF(o, s16, 0xE) = p2->vz;
                        r = 1;
                        if (AF(a, s32, 0x58) < 0) {
                            t = D_801152AA;
                            if (t < 0) {
                                t = -t;
                            }
                            if ((s16)t > 0x800) {
                                if (D_80126720 - p2->vx >= 0) {
                                    AF(o, s16, 6) = p2->vx - dx;
                                } else {
                                    AF(o, s16, 6) = p2->vx + dx;
                                }
                                if (D_80126724 - p2->vz >= 0) {
                                    AF(o, s16, 0xE) = p2->vz - dz;
                                } else {
                                    AF(o, s16, 0xE) = p2->vz + dz;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return r;
}

extern s32 MoveHitsSolidActorBody();

s32 MoveHitsSolidActor() {
    SetSpadStackNested();
    D_801ED4D8 = MoveHitsSolidActorBody();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 AnySolidActorOnPath();

s32 MoveHitsSolidActorBody(s32 arg0) {
    SVECTOR a;
    SVECTOR b;

    if (AF(arg0, s32, 0x44) & 0x80000) {
        return 0;
    }
    if (AF(arg0, s32, 0x1F8) & 0x4000000) {
        return 0;
    }
    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A) - 0x10;
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA) - 0x10;
    b.vz = AF(arg0, s16, 0xE);
    return AnySolidActorOnPath(arg0, &a, &b);
}

extern s32 D_801150D8;

s32 AnySolidActorOnPath(u8 *o, s32 p1, s32 p2) {
    s32 r;
    u8 *a;

    r = 0;
    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && AF(a, s32, 0x58) != 0 && a != AF(o, u8 *, 0x178)
            && a != AF(o, u8 *, 0x174) && (AF(a, s32, 0x5C) & 0x1800)) {
            D_801150D8 = 0;
            if (func_80135A4C(((s32 *)a)[8], ((s32 *)a)[0x16], p1, p2) != 0) {
                r = 1;
            }
        }
    }
    return r;
}

s32 ProbeGroundByMove(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (!(AF(arg0, s32, 0x44) & 0x40000)) {
        if ((AF(arg0, s16, 6) == AF(arg0, s16, 0x88)) && (AF(arg0, s16, 0xA) == AF(arg0, s16, 0x8A)) && (AF(arg0, s16, 0xE) == AF(arg0, s16, 0x8C))) {
            return ProbeGroundStill();
        }
        var_v0 = func_8014F6F4();
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

extern s32 D_801ED4DC;
extern s32 ProbeGroundStillBody();

s32 ProbeGroundStill(void) {
    SetSpadStackNested();
    D_801ED4DC = ProbeGroundStillBody();
    ResetSpadStack();
    return D_801ED4DC;
}

extern s32 func_8014F74C();
extern SVECTOR D_800D3918;

s32 ProbeGroundStillBody(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    if (AF(arg0, s16, 0x146) != 0) {
        return func_8014F74C(arg0);
    }
    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A);
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA) + 8;
    b.vz = AF(arg0, s16, 0xE);
    if (AF(arg0, s16, 0x146) != 0) {
        b.vx += AF(arg0, s16, 0x140);
        b.vy += AF(arg0, s16, 0x142);
        b.vz += AF(arg0, s16, 0x144);
    }
    r = TraceMap(0, &a, &b);
    if (r != 0) {
        if (((u8 *)&b)[6] != 0) {
            AF(arg0, s16, 0x16C) = ((u8 *)&b)[6];
        }
        AF(arg0, s16, 0x16E) = (u16)b.pad >> 13;
        if (r == 0x2000) {
            AF(arg0, SVECTOR, 0x120) = g_GroundNormal;
        } else if (r == 0x4000) {
            AF(arg0, SVECTOR, 0x120) = *(SVECTOR *)&g_WallNormal;
        }
        if (AF(arg0, u16, 0x16C) == 0x1D) {
            if (!(GetFlag(0x21) & 0xFF)) {
                r &= ~0x2000;
                r |= 0x4000;
                *(SVECTOR *)&g_WallNormal = g_GroundNormal;
                D_801152BC = 1;
            }
        }
        return r;
    }
    AF(arg0, SVECTOR, 0x120) = D_800D3918;
    if (((u8 *)&b)[6] != 0) {
        AF(arg0, s16, 0x16C) = ((u8 *)&b)[6];
    }
    return 0;
}

extern s32 D_801ED4DC;
extern s32 func_8014F74C();

s32 func_8014F6F4(void) {
    SetSpadStackNested();
    D_801ED4DC = func_8014F74C();
    ResetSpadStack();
    return D_801ED4DC;
}

s32 func_8014F74C(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    SVECTOR c;
    s32 r;

    a.vx = AF(arg0, s16, 0x88);
    a.vy = AF(arg0, s16, 0x8A);
    a.vz = AF(arg0, s16, 0x8C);
    b.vx = c.vx = AF(arg0, s16, 6);
    b.vy = c.vy = AF(arg0, s16, 0xA);
    b.vz = c.vz = AF(arg0, s16, 0xE);
    if (AF(arg0, s16, 0x146) != 0) {
        b.vx += AF(arg0, s16, 0x140);
        b.vy += AF(arg0, s16, 0x142);
        b.vz += AF(arg0, s16, 0x144);
    }
    r = TraceMap(0, &a, &b);
    if (r != 0) {
        AF(arg0, s16, 6) = b.vx;
        AF(arg0, s16, 0xA) = b.vy;
        AF(arg0, s16, 0xE) = b.vz;
        if (((u8 *)&b)[6] != 0) {
            AF(arg0, s16, 0x16C) = ((u8 *)&b)[6];
        }
        AF(arg0, s16, 0x16E) = (u16)b.pad >> 13;
        if (r == 0x2000) {
            AF(arg0, SVECTOR, 0x120) = g_GroundNormal;
        } else if (r == 0x4000) {
            AF(arg0, SVECTOR, 0x120) = *(SVECTOR *)&g_WallNormal;
        }
        if (AF(arg0, u16, 0x16C) == 0x1D) {
            if (!(GetFlag(0x21) & 0xFF)) {
                r &= ~0x2000;
                r |= 0x4000;
                *(SVECTOR *)&g_WallNormal = g_GroundNormal;
                D_801152BC = 1;
            }
        }
        return r;
    }
    AF(arg0, SVECTOR, 0x120) = D_800D3918;
    if (((u8 *)&b)[6] != 0) {
        AF(arg0, s16, 0x16C) = ((u8 *)&b)[6];
    }
    if (a.vx != c.vx || a.vy != c.vy || a.vz != c.vz) {
        if (a.vx == b.vx && a.vy == b.vy && a.vz == b.vz) {
            return 0x8000;
        }
    }
    return 0;
}

extern s32 func_8014FA70();

s32 func_8014FA04(s32 arg0) {
    if (AF(arg0, s32, 0x44) & 0x40000) {
        return 0;
    }
    SetSpadStackNested();
    D_801ED4DC = func_8014FA70();
    ResetSpadStack();
    return D_801ED4DC;
}

s32 func_8014FA70(s32 arg0) {
    SVECTOR from;
    SVECTOR to;
    s32 r;

    from.vx = AF(arg0, s16, 0x88);
    from.vy = AF(arg0, s16, 0x8A);
    from.vz = AF(arg0, s16, 0x8C);
    to.vx = AF(arg0, s16, 0x6);
    to.vy = AF(arg0, s16, 0xA);
    to.vz = AF(arg0, s16, 0xE);
    r = TraceMap(1, &from, &to);
    if (r != 0) {
        AF(arg0, s16, 0x6) = to.vx;
        AF(arg0, s16, 0xA) = to.vy;
        AF(arg0, s16, 0xE) = to.vz;
        if (((u8 *)&to)[6] != 0) {
            AF(arg0, u16, 0x16C) = ((u8 *)&to)[6];
        }
        AF(arg0, u16, 0x16E) = (u16)to.pad >> 13;
        if (AF(arg0, u16, 0x16C) == 0x1D) {
            if (!(GetFlag(0x21) & 0xFF)) {
                r &= ~0x2000;
                r |= 0x4000;
                *(SVECTOR *)&g_WallNormal = g_GroundNormal;
                D_801152BC = 1;
            }
        }
        return r;
    }
    if (((u8 *)&to)[6] != 0) {
        AF(arg0, u16, 0x16C) = ((u8 *)&to)[6];
    }
    return 0;
}

extern s32 SnapToFloorBody();

s32 SnapToFloor(void) {
    SetSpadStackNested();
    D_801ED4DC = SnapToFloorBody();
    ResetSpadStack();
    return D_801ED4DC;
}

extern s32 TraceMap();

s32 SnapToFloorBody(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    a.vx = AF(arg0, s16, 6);
    a.vy = AF(arg0, s16, 0xA);
    a.vz = AF(arg0, s16, 0xE);
    b.vx = AF(arg0, s16, 6);
    b.vy = AF(arg0, s16, 0xA) + 0x10;
    b.vz = AF(arg0, s16, 0xE);
    r = TraceMap(1, &a, &b);
    if (r) {
        AF(arg0, s16, 6) = b.vx;
        AF(arg0, s16, 0xA) = b.vy;
        AF(arg0, s16, 0xE) = b.vz;
        if (((u8 *)&b)[6]) {
            AF(arg0, s16, 0x16C) = ((u8 *)&b)[6];
        }
        AF(arg0, s16, 0x16E) = (u16)b.pad >> 13;
        return r;
    }
    if (((u8 *)&b)[6]) {
        AF(arg0, s16, 0x16C) = ((u8 *)&b)[6];
    }
    return 0;
}

extern s32 IsClimbWallAheadBody();

s32 IsClimbWallAhead() {
    SetSpadStackNested();
    D_801ED4D8 = IsClimbWallAheadBody();
    ResetSpadStack();
    return D_801ED4D8;
}

s32 IsClimbWallAheadBody(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 r;

    a.vx = 0;
    a.vy = 0;
    a.vz = 7;
    ObjLocalToWorldAtPos(arg0, &a, &a);
    b.vx = 0;
    b.vy = 0;
    b.vz = -0x18;
    ObjLocalToWorldAtPos(arg0, &b, &b);
    r = TraceMap(1, &a, &b);
    if (r != 0) {
        if ((r & 0x8000) && ((u8 *)&b)[6] == 0x15) {
            return 1;
        }
        return 0;
    }
    return 0;
}

s32 FindFloorBelowPlayer(s32 arg0) {
    if ((AF(arg0, s16, 6) != AF(arg0, s16, 0x88)) || (AF(arg0, s16, 0xA) != AF(arg0, s16, 0x8A)) || (AF(arg0, s16, 0xE) != AF(arg0, s16, 0x8C))) {
        return FindFloorBelowMoved();
    }
    return FindFloorBelowStill();
}

extern SVECTOR g_GroundNormal;
extern s32 FindPlatformFloorA();
extern s32 FindMapFloorA();

s32 FindFloorBelowStill(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    SVECTOR n;
    s32 r1;
    s32 r2;

    a.vx = b.vx = AF(arg0, s16, 6);
    a.vy = b.vy = AF(arg0, s16, 0xA) - 0x10;
    a.vz = b.vz = AF(arg0, s16, 0xE);
    r1 = FindPlatformFloorA(arg0, &a, &n);
    r2 = FindMapFloorA(arg0, &b);
    if (r2 == 0) {
        b.vy = 0x7FFF;
    }
    if (r1 | r2) {
        if (a.vy < b.vy) {
            AF(arg0, s16, 0x78) = a.vx;
            AF(arg0, s16, 0x7A) = a.vy;
            AF(arg0, s16, 0x7C) = a.vz;
            AF(arg0, SVECTOR, 0x80) = n;
        } else {
            AF(arg0, s16, 0x78) = b.vx;
            AF(arg0, s16, 0x7A) = b.vy;
            AF(arg0, s16, 0x7C) = b.vz;
            AF(arg0, SVECTOR, 0x80) = g_GroundNormal;
        }
        AF(arg0, u16, 0x7E) &= ~1;
        return 1;
    }
    AF(arg0, s16, 0x78) = a.vx;
    AF(arg0, s16, 0x7A) = 0x7FFF;
    AF(arg0, s16, 0x7C) = a.vz;
    AF(arg0, u16, 0x7E) |= 1;
    return 0;
}

extern s32 func_80135D20();

s32 FindPlatformFloorA(s32 arg0, SVECTOR *arg1, SVECTOR *arg2) {
    SVECTOR v;
    SVECTOR t;
    u8 *a;
    s32 r = 0;

    v = *arg1;
    arg1->vy = 0x7FFF;
    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x400) && AF(a, s32, 0x58) != 0) {
            t = v;
            if (func_80135D20(AF(a, s32, 0x20), AF(a, s32, 0x58), &t) != 0) {
                r = 1;
                if (t.vy < arg1->vy) {
                    *arg1 = t;
                    *arg2 = *(SVECTOR *)&g_GroundNormal;
                }
            }
        }
    }
    return r;
}

s32 FindMapFloorA(s32 arg0, s32 arg1) {
    return FindGround(arg1) != 0;
}

extern s32 FindPlatformFloorB();
extern s32 FindMapFloorB();

s32 FindFloorBelowMoved(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    SVECTOR n;
    s32 r1;
    s32 r2;

    a.vx = b.vx = AF(arg0, s16, 6);
    a.vy = b.vy = AF(arg0, s16, 0xA) - 0x10;
    a.vz = b.vz = AF(arg0, s16, 0xE);
    r1 = FindPlatformFloorB(arg0, &a, &n);
    r2 = FindMapFloorB(arg0, &b);
    if (r2 == 0) {
        b.vy = 0x7FFF;
    }
    if (r1 | r2) {
        if (a.vy < b.vy) {
            AF(arg0, s16, 0x78) = a.vx;
            AF(arg0, s16, 0x7A) = a.vy;
            AF(arg0, s16, 0x7C) = a.vz;
            AF(arg0, SVECTOR, 0x80) = n;
        } else {
            AF(arg0, s16, 0x78) = b.vx;
            AF(arg0, s16, 0x7A) = b.vy;
            AF(arg0, s16, 0x7C) = b.vz;
            AF(arg0, SVECTOR, 0x80) = g_GroundNormal;
        }
        AF(arg0, u16, 0x7E) &= ~1;
        return 1;
    }
    AF(arg0, s16, 0x78) = a.vx;
    AF(arg0, s16, 0x7A) = 0x7FFF;
    AF(arg0, s16, 0x7C) = a.vz;
    AF(arg0, u16, 0x7E) |= 1;
    return 0;
}

extern s32 func_80135D20();

s32 FindPlatformFloorB(s32 arg0, SVECTOR *pos, SVECTOR *norm) {
    SVECTOR p;
    SVECTOR t;
    u8 *a;
    s32 hit;

    hit = 0;
    p = *pos;
    pos->vy = 0x7FFF;
    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x400) && AF(a, s32, 0x58) != 0) {
            t = p;
            if (func_80135D20(AF(a, s32, 0x20), AF(a, s32, 0x58), &t) != 0) {
                hit = 1;
                if (t.vy < pos->vy) {
                    *pos = t;
                    *norm = g_GroundNormal;
                }
            }
        }
    }
    return hit;
}

s32 FindMapFloorB(s32 arg0, s32 arg1) {
    return FindGround(arg1) != 0;
}

extern s32 ProbeExitActorBody();

s32 ProbeExitActor(void) {
    SetSpadStackNested();
    D_801ED4D8 = ProbeExitActorBody();
    ResetSpadStack();
    return D_801ED4D8;
}

extern s32 FindExitActorOnPath();

s32 ProbeExitActorBody(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 y;

    a.vx = b.vx = AF(arg0, u16, 6);
    y = AF(arg0, u16, 0xA);
    a.vy = y - 3;
    a.vz = b.vz = AF(arg0, u16, 0xE);
    b.vy = y + 1;
    return FindExitActorOnPath(arg0, &a, &b);
}

s32 FindExitActorOnPath(u8 *o, u16 *p1, u16 *p2) {
    u8 *a;

    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x80) && AF(a, s32, 0x58) != 0
            && func_80135A4C(AF(a, s32, 0x20), AF(a, s32, 0x58), p1, p2) != 0) {
            AF(o, u8 *, 0x1A4) = a;
            return 1;
        }
    }
    return 0;
}

s32 CollectPickups(s32 arg0) {
    u8 *a;

    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (AF(a, u16, 0x5C) & 0x100) && IsObjWithin(arg0, (s32)a, 0x30) != 0) {
            ApplyPickup(arg0, a);
            return 1;
        }
    }
    return 0;
}

extern u16 D_8018F16C[];
extern u16 D_8018F174[];
extern u16 D_8018F17C[];
extern void CurePoisonWithFx();
extern void GainBpShown();

void ApplyPickup(s32 arg0, s32 arg1) {
    s32 kind;

    kind = AF(arg1, u16, 0);
    AF(arg1, u16, 0x5C) |= 1;
    switch (kind) {
    case 0x31:
        PlaySe(0x452);
        AddMoney(arg0, D_8018F16C[AF(arg1, s16, 0x70)]);
        ShowNumberAbove(arg0, 3, D_8018F16C[AF(arg1, s16, 0x70)]);
        break;
    case 0x32:
        if (D_80078EB4 != 0) {
            PlaySe(0x452);
            AddHp(arg0, D_8018F174[AF(arg1, s16, 0x70)], 1);
            ShowNumberAbove(arg0, 2, D_8018F174[AF(arg1, s16, 0x70)]);
        }
        break;
    case 0x33:
        PlaySe(0x452);
        GainBpShown(arg0, D_8018F17C[AF(arg1, s16, 0x70)]);
        break;
    case 0xC5:
    case 0x27B:
        PlaySe(0x452);
        CurePoisonWithFx(arg0);
        break;
    }
}

void GainBpShown(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        AddBp(arg0, arg1);
        ShowNumberAbove(arg0, 4, arg1);
    }
}

void CurePoisonWithFx(s32 arg0) {
    SpawnEffectOn(0x48, arg0, 0, 0);
    CurePoison(arg0);
    PlaySe(0xA1B);
}

s32 StrikeTouchedActor(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8014A2E4(arg0);
    if (temp_v0 != 0) {
        StrikeActorKind1F(arg0, temp_v0);
        return 1;
    }
    return 0;
}

s32 func_801508F8(Player *arg0) {
    if ((arg0->unk1BC[3] != 0) && (arg0->state != 0x1A)) {
        do {
        } while (func_8015094C(arg0) != 0);
    }
}

extern u8 D_801EC5FC;
extern s32 D_8018F184;
extern s32 IsPointOnScreen();
s32 func_8015094C(Player *arg0) {
    VECTOR v;
    MATRIX m; /* MATCH-TRICK: unused local, the original frame has 0x20 unused bytes between v and c */
    VECTOR c;
    VECTOR w; /* MATCH-TRICK: unused local, the original frame has 0x10 unused bytes above c */
    u8 *p;
    s32 d;
    s32 a;

    c = *(VECTOR *)&D_801EC5FC;
    p = &g_Camera;
    v.vx = arg0->pos[0].h.i;
    v.vy = D_80126994;
    v.vz = arg0->pos[2].h.i;
    if (IsPointOnScreen(D_8018F184, &v) == 0) {
        d = D_80126990 - arg0->pos[0].h.i;
        a = d;
        if (d < 0) a = -d;
        if (a >= 5) {
            if (d >= 0) arg0->pos[0].h.i += 4;
            else arg0->pos[0].h.i -= 4;
        }
        d = AF(p, s32, 0x50) - arg0->pos[2].h.i;
        a = d;
        if (d < 0) a = -d;
        if (a >= 5) {
            if (d >= 0) arg0->pos[2].h.i += 4;
            else arg0->pos[2].h.i -= 4;
        }
        return 1;
    }
    return 0;
}

void CommitPlayerMove(Player *arg0) {
    if (arg0->pos[0].h.i != arg0->respawn[0] || arg0->pos[1].h.i != arg0->respawn[1] || arg0->pos[2].h.i != arg0->respawn[2]) {
        if (!((s32)arg0->status & 0x40000)) {
            SetSpadStackNested();
            D_801ED4DC = func_8014FA70(arg0);
            ResetSpadStack();
        }
        PosToSVec((u8 *)arg0 + 4, (u8 *)arg0 + 0x88);
    }
}

extern void (*D_8018F188[])();

void RunSurfaceHandler(u8 *arg0) {
    u16 v;
    s32 i;

    if (!(D_800AE6B0 & 0x80FFFFFF)) {
        v = AF(arg0, u16, 0x16C);
        if (v != 0 && v < 0x26) {
            i = v - 1;
            D_8018F188[i](arg0);
        }
    }
    AF(arg0, u16, 0x16C) = 0;
}

void SurfaceNop1(void) {
}

void HurtBySurface1(s32 arg0) {
    QueueHit(arg0, 1, 0x10);
}

void func_80150BC8(s32 arg0, s32 arg1) {
    if (IsTechnique3Active(arg0, arg1) != 0) {
        if (D_800B99DA & 7) {
            SpawnEffectOn(0x34, arg0, 0, 0);
        }
    } else if (!(GetVarCF() & 0xFF)) {
        QueueHit(arg0, 0xC003, 0x10);
    }
}

void TakeActorExit(u8 *arg0) {
    if (ProbeExitActor() != 0) {
        D_800AE6B0 = AF(AF(arg0, void *, 0x1A4), s32, 0xDC);
        D_800AE6DC = AF(AF(arg0, void *, 0x1A4), u16, 0xFC);
    }
}

void HurtBySurfaceE001(s32 arg0) {
    QueueHit(arg0, 0xE001, 0x10);
}

void TakeExit0(s32 arg0) {
    StartExit(arg0, 0);
}

void TakeExit1(s32 arg0) {
    StartExit(arg0, 1);
}

void TakeExit2(s32 arg0) {
    StartExit(arg0, 2);
}

void TakeExit3(s32 arg0) {
    StartExit(arg0, 3);
}

void TakeExit4(s32 arg0) {
    StartExit(arg0, 4);
}

void TakeExit5(s32 arg0) {
    StartExit(arg0, 5);
}

void TakeExit6(s32 arg0) {
    StartExit(arg0, 6);
}

void TakeExit7(s32 arg0) {
    StartExit(arg0, 7);
}

void TakeExit8(s32 arg0) {
    StartExit(arg0, 8);
}

void TakeExit9(s32 arg0) {
    StartExit(arg0, 9);
}

void TakeExit10(s32 arg0) {
    StartExit(arg0, 0xA);
}

void TakeExit11(s32 arg0) {
    StartExit(arg0, 0xB);
}

void TakeExit12(s32 arg0) {
    StartExit(arg0, 0xC);
}

void TakeExit13(s32 arg0) {
    StartExit(arg0, 0xD);
}

void TakeExit14(s32 arg0) {
    StartExit(arg0, 0xE);
}

void TakeExit15(s32 arg0) {
    StartExit(arg0, 0xF);
}

extern u8 D_800AE6BE;
extern u8 D_800AE6C0;
extern s32 *D_800AE6C4;
extern u16 D_800AE6C8;
extern u16 D_800AE6CA;
extern u16 D_800AE6CC;
extern u16 D_800AE6CE;
extern u8 g_KeptCamera;

void StartExit(u8 *arg0, s32 arg1) {
    struct blk { s32 w[41]; };
    s32 *p;
    D_800AE6C0 = 1;
    D_800AE6C8 = AF(arg0, u16, 6);
    D_800AE6CA = AF(arg0, u16, 0xA);
    D_800AE6CC = AF(arg0, u16, 0xE);
    D_800AE6CE = AF(AF(arg0, void *, 0x20), u16, 0x12);
    p = &D_800AE6C4[arg1 + 1];
    D_800AE6B0 = *p;
    D_800AE6BE = arg1 + 1;
    *(struct blk *)&g_KeptCamera = *(struct blk *)&g_Camera;
}

void SurfaceNop2(void) {
}

void HurtBySurfaceC007(s32 arg0) {
    if (D_80078EC1 != 0xC) {
        QueueHit(arg0, 0xC007, 0x20);
    }
}

void HurtBySurface8(s32 arg0) {
    QueueHit(arg0, 8, 0);
}

void func_80150FD8(s32 arg0) {
    if (D_800B99DA & 7) {
        SpawnEffectOn(0x34, arg0, 0, 0);
    }
}

void HurtBySurfaceC00B(s32 arg0) {
    QueueHit(arg0, 0xC00B, 0x20);
}

void HurtBySurfaceC00C(s32 arg0) {
    s32 var_a2;

    var_a2 = 0x18;
    if (D_800B9A08 == 0x30A0) {
        var_a2 = 0x30;
    }
    QueueHit(arg0, 0xC00C, var_a2);
}

void HurtBySurfaceE003(s32 arg0) {
    QueueHit(arg0, 0xE003, 0x10);
}

void HurtBySurfaceC00D(s32 arg0) {
    QueueHit(arg0, 0xC00D, 0x18);
}

void SurfaceNop3(void) {
}

void SurfaceNop4(void) {
}

void HurtBySurface4018(s32 arg0) {
    QueueHit(arg0, 0x4018, 0x20);
}

void HurtBySurfaceE016(s32 arg0) {
    QueueHit(arg0, 0xE016, 0x10);
}

void KillBySurface(void) {
    HitPlayerFatal();
}

void SurfaceNop5(void) {
}

void HurtBySurfaceC01F(s32 arg0) {
    QueueHit(arg0, 0xC01F, 0x10);
}

void SetPlayerSurface(u8 *arg0, s16 arg1) {
    AF(arg0, s16, 0x16C) = arg1;
}

void QueueHitDamage10(s32 arg0, s32 arg1) {
    QueueHit(arg0, arg1, 0xA);
}

void QueueHit(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s16, 0x3E) = arg1;
    AF(arg0, s16, 0x40) = arg2;
    AF(arg0, u16, 0x42) = AF(AF(arg0, u8 *, 0x20), u16, 0x12);
    AF(arg0, u16, 0x3C) |= 1;
}

s32 ClearHit(s32 arg0) {
    u16 temp_v0;

    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    temp_v0 = AF(arg0, u16, 0x3C) & 0xFFFE;
    AF(arg0, u16, 0x3C) = temp_v0;
    return (s32) temp_v0;
}

void SaveHitInfo(u8 *arg0) {
    AF(arg0, u16, 0xF0) = (u16) AF(arg0, u16, 0x3E);
    AF(arg0, u16, 0xF2) = (u16) AF(arg0, u16, 0x40);
    AF(arg0, u16, 0xF4) = (u16) AF(arg0, u16, 0x42);
}

void ShowQueuedDamageNumber(u8 *arg0) {
    ShowDamageNumber((s32) arg0, (s32) AF(arg0, s16, 0xF2));
}

void ShowDamageNumber(s32 arg0, s32 arg1) {
    if ((arg1 != 0) && (arg1 != 0x3E8)) {
        ShowNumberAbove(arg0, 1, arg1 & 0x7FFF);
    }
}

void ShowBpLossNumber(u8 *arg0) {
    s16 temp_v0;

    temp_v0 = AF(arg0, s16, 0xF2);
    if (temp_v0 != 0) {
        ShowNumberAbove((s32) arg0, 5, temp_v0 & 0x7FFF);
    }
}

extern s32 g_PlayerAttackerPrev;
extern s32 g_PlayerAttacker;
extern s32 func_80151880();
extern void func_800CCF68();
extern s32 func_801518D8();
extern void func_800CCF58();
extern s32 ReduceByStat1();
extern s32 g_EntryPoint;
extern s32 SwitchToGuardRecoil();
extern s32 IsTechnique4Active();
extern s32 IsTechnique5Active();
extern s32 IsTechnique6Active();
extern s32 DropGuard();
extern s32 IncCounter5210();
extern void EnterHitState();
extern s32 SetPlayerEvent08();

void ProcessPlayerHit(s32 arg0) {
    u8 *c;
    s32 *d;
    s32 t;
    u16 f;
    u16 e;
    u16 g;
    s32 w;

    c = &g_Status;
    t = g_PlayerAttacker;
    g_PlayerAttacker = 0;
    g_PlayerHitBy = 0;
    g_PlayerAttackerPrev = t;
    d = &g_EntryPoint;
    if (AF(arg0, u8, 0xA8) != 0) {
        e = AF(arg0, u16, 0x3C);
        if (!(e & 1) || !(AF(arg0, u16, 0x3E) & 0x8000)) {
            AF(arg0, u16, 0x3C) = e & 0xFFFE;
            AF(arg0, s16, 0x3E) = 0;
            AF(arg0, s16, 0x40) = 0;
            AF(arg0, s16, 0x42) = 0;
        }
        if (--AF(arg0, u8, 0xA8) & 1) {
            func_801470A0(arg0);
        }
    }
    f = AF(arg0, u16, 0x3C);
    if (f & 1) {
        if (!(AF(arg0, s32, 0x3C) & 0x80008000) || (d[2] & 0x80FFFFFF)) {
            AF(arg0, u16, 0x3C) = f & 0xFFFE;
            AF(arg0, s16, 0x3E) = 0;
            AF(arg0, s16, 0x40) = 0;
            AF(arg0, s16, 0x42) = 0;
        } else {
            g = AF(arg0, u16, 0x3E);
            AF(arg0, u16, 0x3C) = f & 0xFFFE;
            AF(arg0, u16, 0x3E) = g & 0x7FFF;
            if (!(g & 0x4000) && (AF(arg0, s32, 0x44) & 1) && GuardBlocksHit((u8 *)arg0)) {
                SwitchToGuardRecoil(arg0);
                AF(arg0, s16, 0x3E) = 0;
                AF(arg0, s16, 0x40) = 0;
                AF(arg0, s16, 0x42) = 0;
                AF(arg0, u16, 0x3C) &= 0xFFFE;
                return;
            }
            if (IsTechnique3Active(arg0) && func_80151880(arg0)) {
                AF(arg0, s16, 0x40) = 0;
                AF(arg0, s16, 0xF2) = 0;
                func_800CCF68(arg0);
            }
            if (IsTechnique4Active(arg0) && func_801518D8(arg0)) {
                func_800CCF58(arg0);
            }
            if (IsTechnique5Active(arg0)) {
                AF(arg0, s16, 0x1C8) = 0;
            }
            if (IsTechnique6Active(arg0)) {
                AF(arg0, s16, 0x1C8) = 0;
            }
            if (AF(arg0, u16, 0) - 0x19 >= 2U && ((w = AF(arg0, s32, 0x1F8)) == 0 || (w & 0x2000000))) {
                AF(arg0, u16, 0xF0) = AF(arg0, u16, 0x3E);
                AF(arg0, u16, 0xF2) = AF(arg0, u16, 0x40);
                AF(arg0, u16, 0xF4) = AF(arg0, u16, 0x42);
                LeavePlayerKind(arg0);
                DropGuard(arg0);
                ShowPlayerScene(arg0);
                AF(arg0, u8, 0xA8) = 0;
                AF(arg0, u8, 0xDD) = AF(arg0, u16, 0x3E);
                if (AF(arg0, u8, 0xDD) != 0x11 && AF(arg0, s16, 0xF2) != 1000) {
                    AF(arg0, s16, 0xF2) = ReduceByStat1(AF(arg0, s16, 0xF2));
                    if (c[0x49] == 5) {
                        AF(arg0, s16, 0xF2) = AF(arg0, s16, 0xF2) / 2;
                    } else if (IsSteelActive()) {
                        AF(arg0, s16, 0xF2) = AF(arg0, s16, 0xF2) / 2;
                    }
                }
                IncCounter5210();
                EnterHitState(arg0);
                SetPlayerEvent08(arg0);
                if (AF(arg0, u16, 0x3E) & 0x2000) {
                    StartPoison(arg0);
                }
                if (AF(arg0, u16, 0x3E) & 0x1000) {
                    StartShrink(arg0);
                }
                if (AF(arg0, u16, 0x3E) & 0x800) {
                    AddWakeGauge(arg0, 0x50000, 1);
                }
                if (AF(arg0, u16, 0x3E) & 0x400) {
                    ClearObjVel(arg0);
                    SetFallSpeed(arg0, 0);
                }
                if (func_80151880(arg0) == 2) {
                    PlaySe(0x676);
                }
                if (c[0x49] == 0x14) {
                    AddBp(arg0, 0xA);
                    ShowNumberAbove(arg0, 4, 0xA);
                }
                g_PlayerHitByHeld = g_PlayerAttackerPrev;
                g_PlayerHitBy = g_PlayerHitByHeld;
                return;
            }
            AF(arg0, s16, 0x3E) = 0;
            AF(arg0, s16, 0x40) = 0;
            AF(arg0, s16, 0x42) = 0;
            AF(arg0, u16, 0x3C) &= 0xFFFE;
        }
    }
    g_PlayerHitBy = g_PlayerHitByHeld;
}

extern s32 StartFace();
extern void UpdateFlag10Part21();

s32 ResetPlayerAfterHit(arg0)
    s32 arg0;
{
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    ClearPlayerFlag7E2(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0U;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    SetFallSpeed(arg0, 0);
    ForgetPlayerHit(arg0);
}

void EnterHitStateSub1(u8 *arg0) {
    SetTargetPointToLastPos();
    AF(arg0, u8, 0xDE) = (s8) AF(arg0, u16, 0);
    SetPlayerState((s32) arg0, 0x19);
    AF(arg0, s16, 2) = 1;
    RunHitHandler((s32) arg0);
}

void EnterHitState(s32 arg0) {
    SetTargetPointToLastPos();
    AF(arg0, u8, 0xDE) = (s8) AF(arg0, u16, 0);
    SetPlayerState(arg0, 0x19);
    RunHitHandler(arg0);
}

extern s16 D_8011DB1A;
extern s32 SetPlayerEvent08();
extern s32 ReduceByStat1();
extern void HitHandlerNop();
extern void func_80153B58();

void RunHitHandler(s32 arg0) {
    void (**tbl)(s32);
    u8 idx;

    idx = AF(arg0, u8, 0xDD);
    tbl = *(void (***)(s32))(arg0 + 0x1F0);
    if (idx != 0 && idx < 0x21) {
        if (tbl[idx - 1] != 0) {
            SetPlayerEvent08(arg0);
            if (D_8011DB1A != 1000) {
                D_8011DB1A = ReduceByStat1(D_8011DB1A);
            }
            tbl[AF(arg0, u8, 0xDD) - 1](arg0);
            g_PlayerHitBy = g_PlayerHitByHeld;
        } else {
            HitHandlerNop(arg0);
        }
    } else {
        tbl[2](arg0);
    }
    if (AF(arg0, u16, 0xF0) & 0x200) {
        func_80153B58(arg0);
    }
}

void HitHandlerNop(void) {
}

s32 func_80151880(s32 arg0) {
    u16 v = AF(arg0, u16, 0x3E);
    s32 t = v & 0xFF;
    s32 r;

    if (t == 27) {
        r = 1;
    } else if (t == 28) {
        r = 1;
    } else if (t == 15) {
        r = 1;
    } else if (t == 16) {
        r = 1;
    } else if (t == 11) {
        r = 2;
    } else if (t == 31) {
        r = 1;
    } else {
        r = (v >> 8) & 2;
    }
    return r;
}

s32 func_801518D8(s32 arg0) {
    u8 t = AF(arg0, u8, 0x3E);
    s32 r;

    if (t == 0x1B) {
        r = 1;
    } else if (t == 0x1C) {
        r = 1;
    } else if (t == 0xF) {
        r = 1;
    } else if (t == 0x10) {
        r = 1;
    } else if (t == 3) {
        r = 1;
    } else if (t == 0x13) {
        r = 1;
    } else {
        r = t == 0x17;
    }
    return r;
}

void RunKnockbackHit(void) {
    RunKnockbackSub();
}

extern void (*D_8018F21C[])();

void RunKnockbackSub(u8 *arg0) {
    D_8018F21C[AF(arg0, u16, 2)](arg0);
}

void KnockbackHitBegin(s32 arg0) {
    CollidePlayerMove(arg0);
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    StartHitKnockback(arg0);
    NextObjState(arg0);
}

extern u8 D_800D5880;
extern u8 D_800D58AC;

void StartHitKnockback(s32 arg0) {
    s16 t;
    u8 c;

    StartRumbleScript(&D_80062BF4);
    c = AF(arg0, u8, 0xDD);
    if (c != 1 && c == 0x11) {
        t = AF(arg0, s16, 0xF2);
        if (t != 0) {
            ShowNumberAbove(arg0, 5, t & 0x7FFF);
        }
    } else {
        ShowDamageNumber(arg0, AF(arg0, s16, 0xF2));
    }
    if ((s16)AngleDist(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s16, 0xF4)) > 0x400) {
        SetPlayerMotion(arg0, &D_800D5880);
    } else {
        SetPlayerMotion(arg0, &D_800D58AC);
    }
    StartFace(arg0, 0x16);
    ClearPlayerHittable(arg0);
    PlaySe(0x451);
    c = AF(arg0, u8, 0xDE);
    if ((u8)(c - 2) < 2 || c == 0xB) {
        NextObjState(arg0);
    }
    NextObjState(arg0);
}

extern u8 D_800D5880;
void EndKnockback(s32 arg0);
s32 StartPlayerFall(s32 arg0);

s32 KnockbackGroundStep(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        EndKnockback(arg0);
        EnterPlayerStanding(arg0);
        if (AF(arg0, s32, 0xB4) == &D_800D5880) {
            SetPlayerMotionBlend(arg0, (s32) &D_800D46E4, 0xE);
        }
        goto block_6;
    }
    CollidePlayerMove(arg0);
    if ((ProbeGroundByMove(arg0) == 0) && (ProbePlatformByMove(arg0) == 0)) {
        EndKnockback(arg0);
        StartPlayerFall(arg0);
block_6:
        func_80165718(arg0);
    }
}

extern s32 func_801535F4();
extern s32 StartPlayerSlide();

void KnockbackAirStep(s32 arg0) {
    s32 r;

    ClearPlayerHittable();
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        EndKnockback(arg0);
        EnterPlayerStanding(arg0);
        goto block_9;
    }
    switch (func_801535F4(arg0)) {
    case 0:
        return;
    case 1:
        EndKnockback(arg0);
        EnterPlayerStanding(arg0);
        SpawnEffect2(arg0, 1);
        break;
    case 2:
        EndKnockback(arg0);
        StartPlayerSlide(arg0);
        SpawnEffect2(arg0, 1);
        break;
    default:
        return;
    }
block_9:
    func_80165718(arg0);
}

void EndKnockback(s32 arg0) {
    u8 temp_v1;

    temp_v1 = AF(arg0, u8, 0xDD);
    if ((temp_v1 != 1) && (temp_v1 == 0x11)) {
        SpendBp(arg0, (s32) AF(arg0, s16, 0xF2));
    } else {
        DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    }
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    ClearPlayerFlag7E2(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0U;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    SetFallSpeed(arg0, 0);
    ForgetPlayerHit(arg0);
}

void RunFlattenHit(u8 *arg0) {
    D_8018F22C[AF(arg0, u16, 2)]();
}

void FlattenHitBegin(s32 arg0) {
    CollidePlayerMove(arg0);
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    StartFlattenHit(arg0);
    AF(arg0, u8, 0xDE) = 0x20;
    NextObjState(arg0);
}

void StartFlattenHit(s32 arg0) {
    StartRumbleScript(&D_80062C14);
    ShowDamageNumber(arg0, AF(arg0, s16, 0xF2));
    if ((s16) AngleDist(AF(AF(arg0, void *, 0x20), s16, 0x12), AF(arg0, s16, 0xF4)) > 0x400) {
        SetPlayerMotion(arg0, &D_800D5880);
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0xC00;
    } else {
        SetPlayerMotion(arg0, &D_800D58AC);
        AF(AF(arg0, void *, 0x20), s16, 0x10) = 0x400;
    }
    AF(arg0, s16, 0x64) = 0xCC;
    ClearPlayerHittable(arg0);
    PlaySe(0x436);
    NextObjState(arg0);
    SetPlayerEvent100(arg0);
}

void FlattenHitWait(s32 arg0, s32 arg1) {
    u8 temp_v1;

    ClearPlayerHittable(arg0, arg1);
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        AF(arg0, u8, 0xDE) = 0x10U;
        NextObjState(arg0);
    }
    SetPlayerEvent100(arg0);
}

void FlattenHitStretch(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    AF(arg0, u16, 0x64) = (u16) (AF(arg0, u16, 0x64) + (AF(arg0, u8, 0xDE) << 6));
    AF(arg0, u8, 0xDE) = (u8) (AF(arg0, u8, 0xDE) + 5);
    if ((s16) AF(arg0, u16, 0x64) >= 0x1556) {
        AF(arg0, u8, 0xDE) = 0x10U;
        NextObjState(arg0);
    }
    SetPlayerEvent100(arg0);
}

void FlattenHitSettle(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    AF(arg0, u16, 0x64) = (u16) (AF(arg0, u16, 0x64) - (AF(arg0, u8, 0xDE) << 6));
    AF(arg0, u8, 0xDE) = (u8) (AF(arg0, u8, 0xDE) + 8);
    if ((s16) AF(arg0, u16, 0x64) < 0x1000) {
        EndFlattenHit(arg0);
        EnterPlayerStanding(arg0);
        func_80165718(arg0);
        return;
    }
    SetPlayerEvent100(arg0);
}

void EndFlattenHit(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    ClearPlayerFlag7E2(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    SetFallSpeed(arg0, 0);
    ForgetPlayerHit(arg0);
}

void RunPitFallHit(u8 *arg0) {
    D_8018F250[AF(arg0, u16, 2)]();
}

void PitFallHitBegin(s32 arg0) {
    CollidePlayerMove(arg0);
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    StartPitFallHit(arg0);
    NextObjState(arg0);
}

extern u8 D_80062C04;
extern u8 D_8018F240;
extern void LeavePlatform();
extern void ResetTiltVectors();

void StartPitFallHit(s32 arg0) {
    StartRumbleScript(&D_80062C04);
    ShowDamageNumber(arg0, AF(arg0, s16, 0xF2));
    ClearPlayerHittable(arg0);
    SetPlayerFlag7E2(arg0);
    AF(arg0, u8, 0xDE) = 0x10;
    SetObjPushV(arg0, &D_8018F240);
    SetFallSpeed(arg0, 0x40000);
    LeavePlatform(arg0);
    ResetTiltVectors(arg0);
    SpawnEffect(0x10, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
    PlaySe(0x441);
    NextObjState(arg0);
}

extern void StartRespawnWait();
extern s32 SetVelFromPushKeepAxes();
extern s32 ApplyFallSpeed();

void PitFallDrop(s32 arg0, s32 arg1) {
    u8 temp_v1;

    ClearPlayerHittable(arg0, arg1);
    SetVelFromPushKeepAxes(arg0);
    MoveObjByVel(arg0);
    AddFallSpeedLimited(arg0, 0x4000);
    ApplyFallSpeed(arg0);
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        func_801470B4(arg0);
        StartRespawnWait(arg0);
        NextObjState(arg0);
    }
}

void PitFallWait(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        NextObjState(arg0);
    }
}

extern s32 func_80153800();
extern void EndPitFallHit();

void PitFallRespawn(s32 arg0, s32 arg1) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame is 0x28 with nothing stored */

    ClearPlayerHittable(arg0, arg1);
    if (func_80153800(arg0) == 0) {
        AF(arg0, s16, 4) = 0;
        AF(arg0, s16, 8) = 0;
        AF(arg0, s16, 0xC) = 0;
        AF(arg0, s16, 6) = AF(arg0, s16, 0x88);
        AF(arg0, s16, 0xA) = AF(arg0, s16, 0x8A);
        AF(arg0, s16, 0xE) = AF(arg0, s16, 0x8C);
        ClearObjPush(arg0);
        EndPitFallHit(arg0);
        EnterPlayerStanding(arg0);
        func_80165718(arg0);
    }
}

void EndPitFallHit(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    ClearPlayerFlag7E2(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    SetFallSpeed(arg0, 0);
    ForgetPlayerHit(arg0);
}

void RunBlowbackHit(u8 *arg0) {
    D_8018F264[AF(arg0, u16, 2)]();
}

void BlowbackHitBegin(s32 arg0) {
    CollidePlayerMove(arg0);
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    StartBlowback(arg0);
    NextObjState(arg0);
}

extern void RotateVectorY();
extern u8 D_8018F270;
/* MATCH-TRICK: the four calls of s32-defined callees go through ((void (*)())f) casts (the original saw void
   prototypes, so v0 stays single-set and sched1 boosts AngleDist's call; accepted 30 Oct) */
void StartBlowback(s32 arg0) {
    VECTOR pad; /* MATCH-TRICK: unused local, the original's frame keeps 16 bytes below v */
    VECTOR v;
    u8 *p = &D_8018F270;

    SetObjTimer(arg0, 0);
    StartRumbleScript(&D_80062C04);
    ShowDamageNumber(arg0, AF(arg0, s16, 0xF2));
    if ((s16)AngleDist(AF(AF(arg0, u8 *, 0x20), s16, 0x12), AF(arg0, s16, 0xF4)) > 0x400) {
        ((void (*)())SetPlayerMotion)(arg0, &D_800D5880);
    } else {
        ((void (*)())SetPlayerMotion)(arg0, &D_800D58AC);
    }
    ((void (*)())StartFace)(arg0, 0x16);
    ((void (*)())ClearPlayerHittable)(arg0);
    RotateVectorY((AF(arg0, u16, 0xF4) - AF(AF(arg0, u8 *, 0x20), u16, 0x12)) & 0xFFF, p, &v);
    SetObjPushV(arg0, &v);
    SetFallSpeed(arg0, AF(p, s32, 0xC));
    PlaySe(0x451);
    NextObjState(arg0);
}

extern void EndBlowback();

void BlowbackAirStep(s32 arg0, s32 arg1) {
    s32 temp;

    ClearPlayerHittable(arg0, arg1);
    temp = AF(arg0, s32, 0x1C);
    if (temp == 0) {
        if (AF(arg0, u16, 0xB8) == 0x8000) {
            EndBlowback(arg0);
            EnterPlayerStanding(arg0);
            func_80165718(arg0);
            return;
        }
    } else {
        AF(arg0, s32, 0x1C) = temp - 1;
    }
    SetVelFromPushKeepAxes(arg0);
    MoveObjByVel(arg0);
    AddFallSpeedLimited(arg0, 0x8000);
    ApplyFallSpeed(arg0);
    switch (func_801535F4(arg0)) {
    case 0:
        break;
    case 1:
        EndBlowback(arg0);
        EnterPlayerStanding(arg0);
        SpawnEffect2(arg0, 1);
        func_80165718(arg0);
        break;
    case 2:
        EndBlowback(arg0);
        StartPlayerSlide(arg0);
        SpawnEffect2(arg0, 1);
        func_80165718(arg0);
        break;
    }
}

void EndBlowback(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    ClearPlayerFlag7E2(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    SetFallSpeed(arg0, 0);
    ForgetPlayerHit(arg0);
}

void RunSleepHit(u8 *arg0) {
    D_8018F280[AF(arg0, u16, 2)]();
}

void SleepHitBegin(s32 arg0) {
    CollidePlayerMove(arg0);
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    StartSleepHit(arg0);
}

void StartSleepHit(s32 arg0) {
    s32 pad[8];
    StartRumbleScript((s32) &D_80062BF4);
    ShowDamageNumber(arg0, (s32) AF(arg0, s16, 0xF2));
    if (D_80078EC1 != 2) {
        AF(arg0, s32, 0x1AC) = 0x3C0000;
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x100);
    }
    EndSleepHit(arg0);
    EnterPlayerStanding(arg0);
    func_80165718(arg0);
}

void EndSleepHit(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    ClearPlayerFlag7E2(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    SetFallSpeed(arg0, 0);
    ForgetPlayerHit(arg0);
}

void RunLaunchHit(u8 *arg0) {
    D_8018F298[AF(arg0, u16, 2)]();
}

void LaunchHitBegin(s32 arg0) {
    CollidePlayerMove(arg0);
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    StartLaunchHit(arg0);
    NextObjState(arg0);
}

extern void LeavePlatform();
extern void ResetTiltVectors();
extern u8 D_80062C04;
extern u8 D_8018F288;

void StartLaunchHit(s32 arg0) {
    StartRumbleScript(&D_80062C04);
    ShowDamageNumber(arg0, AF(arg0, s16, 0xF2));
    ClearPlayerHittable(arg0);
    SetPlayerMotion(arg0, &D_800D5880);
    PlaySe(0x451);
    AF(arg0, u8, 0xDE) = 0x10;
    SetObjPushV(arg0, &D_8018F288);
    SetFallSpeed(arg0, 0xFFF00000);
    LeavePlatform(arg0);
    ResetTiltVectors(arg0);
    NextObjState(arg0);
}

extern s32 SetVelFromPushKeepAxes();
extern s32 ApplyFallSpeed();
extern void StartRespawnWait();

void LaunchHitRise(s32 arg0) {
    u8 temp_v1;

    ClearPlayerHittable(arg0);
    if (D_800B99DA & 1) {
        func_801470B4(arg0);
    } else {
        func_801470AC(arg0);
    }
    SetVelFromPushKeepAxes(arg0);
    MoveObjByVel(arg0);
    AddFallSpeedLimited(arg0, 0x18000);
    ApplyFallSpeed(arg0);
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = temp_v1 + 0xFF;
    if (temp_v1 == 0) {
        AF(arg0, u8, 0xDE) = 0x10;
        SetPlayerFlag7E2(arg0);
        func_801470B4(arg0);
        StartRespawnWait(arg0);
        NextObjState(arg0);
    }
}

void LaunchHitWait(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        NextObjState(arg0);
    }
}

extern void EndLaunchHit();

void LaunchHitRespawn(s32 arg0, s32 arg1) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame is 0x28 with nothing stored */

    ClearPlayerHittable(arg0, arg1);
    if (func_80153800(arg0) == 0) {
        AF(arg0, s16, 4) = 0;
        AF(arg0, s16, 8) = 0;
        AF(arg0, s16, 0xC) = 0;
        AF(arg0, s16, 6) = AF(arg0, s16, 0x88);
        AF(arg0, s16, 0xA) = AF(arg0, s16, 0x8A);
        AF(arg0, s16, 0xE) = AF(arg0, s16, 0x8C);
        ClearObjPush(arg0);
        EndLaunchHit(arg0);
        EnterPlayerStanding(arg0);
        func_80165718(arg0);
    }
}

void EndLaunchHit(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    ClearPlayerFlag7E2(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    SetFallSpeed(arg0, 0);
    ForgetPlayerHit(arg0);
}

void RunFlinchHit(u8 *arg0) {
    D_8018F2AC[AF(arg0, u16, 2)]();
}

void FlinchHitBegin(s32 arg0) {
    CollidePlayerMove(arg0);
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    StartFlinchHit(arg0);
    NextObjState(arg0);
}

void StartFlinchHit(s32 arg0) {
    StartRumbleScript((s32) &D_80062C14);
    ShowDamageNumber(arg0, (s32) AF(arg0, s16, 0xF2));
    ClearPlayerHittable(arg0);
    NextObjState(arg0);
}

void FinishFlinchHit(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    EndFlinchHit(arg0);
    EnterPlayerStanding(arg0);
    func_80165718(arg0);
}

void EndFlinchHit(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    ClearPlayerFlag7E2(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    SetFallSpeed(arg0, 0);
    ForgetPlayerHit(arg0);
}

void RunFlingHit(u8 *arg0) {
    D_8018F2C8[AF(arg0, u16, 2)]();
}

void FlingHitBegin(s32 arg0) {
    CollidePlayerMove(arg0);
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    StartFlingHit(arg0);
    NextObjState(arg0);
}

extern u8 D_8018F2B8;
extern void LeavePlatform();
extern void ResetTiltVectors();

void StartFlingHit(s32 arg0) {
    StartRumbleScript(&D_80062C14);
    ShowDamageNumber(arg0, AF(arg0, s16, 0xF2));
    ClearPlayerHittable(arg0);
    SetPlayerMotion(arg0, &D_800D5880);
    PlaySe(0x451);
    AF(arg0, u8, 0xDE) = 0x10;
    AF(arg0, u8, 0xDF) = 8;
    SetObjPushV(arg0, &D_8018F2B8);
    SetFallSpeed(arg0, 0xFFE40000);
    LeavePlatform(arg0);
    ResetTiltVectors(arg0);
    NextObjState(arg0);
}

void FlingHitRise(s32 arg0, s32 arg1) {
    u8 temp_v0;
    u8 temp_v1;

    ClearPlayerHittable(arg0, arg1);
    func_80153B58(arg0);
    SetVelFromPushKeepAxes(arg0);
    MoveObjByVel(arg0);
    temp_v0 = AF(arg0, u8, 0xDF);
    if (temp_v0 == 0) {
        AddFallSpeedLimited(arg0, 0x18000);
    } else {
        AF(arg0, u8, 0xDF) = (u8) (temp_v0 - 1);
    }
    ApplyFallSpeed(arg0);
    temp_v1 = AF(arg0, u8, 0xDE);
    AF(arg0, u8, 0xDE) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        AF(arg0, u8, 0xDE) = 0x10;
        SetPlayerFlag7E2(arg0);
        func_801470B4(arg0);
        StartRespawnWait(arg0);
        NextObjState(arg0);
    }
}

void FlingHitWait(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        NextObjState(arg0);
    }
}

extern s32 func_80153800();
extern void EndFlingHit();

void FlingHitRespawn(s32 arg0, s32 arg1) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame is 0x28 with nothing stored */

    ClearPlayerHittable(arg0, arg1);
    if (func_80153800(arg0) == 0) {
        AF(arg0, s16, 4) = 0;
        AF(arg0, s16, 8) = 0;
        AF(arg0, s16, 0xC) = 0;
        AF(arg0, s16, 6) = AF(arg0, s16, 0x88);
        AF(arg0, s16, 0xA) = AF(arg0, s16, 0x8A);
        AF(arg0, s16, 0xE) = AF(arg0, s16, 0x8C);
        ClearObjPush(arg0);
        EndFlingHit(arg0);
        EnterPlayerStanding(arg0);
        func_80165718(arg0);
    }
}

void EndFlingHit(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    ClearPlayerFlag7E2(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    SetFallSpeed(arg0, 0);
    ForgetPlayerHit(arg0);
}

void RunVanishKindState(u8 *arg0) {
    D_8018F2DC[AF(arg0, u16, 2)]();
}

void VanishEnter(Player *arg0) {
    CollidePlayerMove(arg0);
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    VanishStart(arg0);
    NextObjState(arg0);
}

extern u8 D_80062C04;
extern void LeavePlatform();
extern void ResetTiltVectors();
extern void ClearDisplayFlag10();

void VanishStart(Player *arg0) {
    StartRumbleScript(&D_80062C04);
    ClearPlayerHittable(arg0);
    SetPlayerFlag7E2(arg0);
    arg0->prevState = 0x40;
    LeavePlatform(arg0);
    ResetTiltVectors(arg0);
    ClearDisplayFlag10(arg0);
    NextObjState(arg0);
}

extern void StartRespawnWait();

void VanishShrinkStep(s32 arg0, s32 arg1) {
    s16 temp;

    ClearPlayerHittable(arg0, arg1);
    temp = AF(arg0, u16, 0x64) - 0x100;
    AF(arg0, s16, 0x60) = AF(arg0, s16, 0x62) = AF(arg0, s16, 0x64) = temp;
    if (temp <= 0) {
        AF(arg0, u8, 0xDE) = 0x10;
        func_801470B4(arg0);
        StartRespawnWait(arg0);
        NextObjState(arg0);
    }
}

void VanishWaitStep(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        NextObjState(arg0);
    }
}

extern void RecoverFromVanish();

void VanishRespawnStep(s32 arg0, s32 arg1) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame is 0x28 with nothing stored */

    ClearPlayerHittable(arg0, arg1);
    if (func_80153800(arg0) == 0) {
        AF(arg0, s16, 4) = 0;
        AF(arg0, s16, 8) = 0;
        AF(arg0, s16, 0xC) = 0;
        AF(arg0, s16, 6) = AF(arg0, s16, 0x88);
        AF(arg0, s16, 0xA) = AF(arg0, s16, 0x8A);
        AF(arg0, s16, 0xE) = AF(arg0, s16, 0x8C);
        ClearObjPush(arg0);
        RecoverFromVanish(arg0);
        EnterPlayerStanding(arg0);
        func_80165718(arg0);
    }
}

void RecoverFromVanish(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    ClearPlayerFlag7E2(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    SetFallSpeed(arg0, 0);
    ForgetPlayerHit(arg0);
}

void RunPitFallKindState(u8 *arg0) {
    D_8018F2F0[AF(arg0, u16, 2)]();
}

void PitFallEnter(Player *arg0) {
    CollidePlayerMove(arg0);
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    PitFallStart(arg0);
    NextObjState(arg0);
}

void PitFallStart(Player *arg0) {
    StartRumbleScript(&D_80062C04);
    ClearPlayerHittable(arg0);
    SetPlayerFlag7E2(arg0);
    arg0->prevState = 0x40;
    LeavePlatform(arg0);
    ResetTiltVectors(arg0);
    ClearDisplayFlag10(arg0);
    NextObjState(arg0);
}

extern s32 ApplyFallSpeed();

void PitFallStep(s32 arg0) {
    u8 temp;

    ClearPlayerHittable(arg0);
    AddFallSpeedLimited(arg0, 0x18000);
    ApplyFallSpeed(arg0);
    if (AF(arg0, s16, 0xA) < 0x201) {
        temp = AF(arg0, u8, 0xDE)--;
        if (temp != 0) {
            return;
        }
    }
    func_801470B4(arg0);
    StartRespawnWait(arg0);
    NextObjState(arg0);
}

void PitFallWaitStep(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    if (func_801536DC(arg0) == 0) {
        AF(arg0, u8, 0xDE) = 1;
        AF(arg0, u8, 0xDF) = 0;
        NextObjState(arg0);
    }
}

extern void RecoverFromPitFall();

void PitFallRespawnStep(s32 arg0) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original's frame has 16 unused bytes */

    ClearPlayerHittable(arg0);
    if (func_80153800(arg0) == 0) {
        AF(arg0, s16, 4) = 0;
        AF(arg0, s16, 8) = 0;
        AF(arg0, s16, 0xC) = 0;
        AF(arg0, u16, 6) = AF(arg0, u16, 0x88);
        AF(arg0, u16, 0xA) = AF(arg0, u16, 0x8A);
        AF(arg0, u16, 0xE) = AF(arg0, u16, 0x8C);
        ClearObjPush(arg0);
        RecoverFromPitFall(arg0);
        EnterPlayerStanding(arg0);
        func_80165718(arg0);
    }
}

void RecoverFromPitFall(s32 arg0) {
    DamagePlayerHp(arg0, (s32) AF(arg0, s16, 0xF2));
    AF(arg0, u8, 0xA8) = 0x20;
    StartFace(arg0, 0x11);
    UpdateFlag10Part21(arg0);
    func_801470AC(arg0);
    ClearPlayerFlag7E2(arg0);
    AF(arg0, s16, 0x3E) = 0;
    AF(arg0, s16, 0x40) = 0;
    AF(arg0, s16, 0x42) = 0;
    AF(arg0, u8, 0xDD) = 0;
    AF(arg0, u16, 0x3C) = (u16) (AF(arg0, u16, 0x3C) & 0xFFFE);
    AF(AF(arg0, void *, 0x20), s16, 0x10) = 0;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    SetFallSpeed(arg0, 0);
    ForgetPlayerHit(arg0);
}

s32 func_801535F4(s32 arg0) {
    s32 temp_v0;
    s32 b;
    s32 var_s1;

    var_s1 = 0;
    if (PushOutOfSolidActors(arg0) != 0) {
        ClearObjPush(arg0);
    }
    if ((AF(arg0, s32, 0x34) > 0) && (ProbePlatformByMove(arg0) != 0)) {
        var_s1 = 1;
    }
    temp_v0 = func_8014FA04(arg0);
    b = temp_v0;
    if (temp_v0 & 0x4000) {
        return 2;
    }
    if (temp_v0 & 0x2000) {
        return 1;
    }
    if (b & 0x8000) {
        return 4;
    }
    return var_s1;
}

extern void (*D_8011DB28)();

void StartRespawnWait(s32 arg0) {
    if (D_8011DB28 != 0) {
        D_8011DB28(arg0 + 0xA0);
    }
    AF(arg0, u8, 0xDE) = 0x5A;
}

s32 func_801536DC(s32 arg0) {
    SVECTOR v;

    if (D_8011DB28 != 0) {
        D_8011DB28(arg0 + 0xA0);
    }
    AF(arg0, s16, 6) = EaseValue(AF(arg0, s16, 6), AF(arg0, s16, 0xA0), 8);
    AF(arg0, s16, 0xA) = EaseValue(AF(arg0, s16, 0xA), AF(arg0, s16, 0xA2), 8);
    ((s16 *)arg0)[7] = EaseValue(AF(arg0, s16, 0xE), AF(arg0, s16, 0xA4), 8);
    if (D_8011DB28 != 0) {
        PosToSVec(arg0 + 4, &v);
        if (SVecDist(&v, arg0 + 0xA0) < 0x40 || AF(arg0, u8, 0xDE) == 0) {
            SVecToPos(arg0 + 0xA0, arg0 + 4);
            return 0;
        }
        AF(arg0, u8, 0xDE)--;
    }
    if (AF(arg0, s16, 6) == AF(arg0, s16, 0xA0) && AF(arg0, s16, 0xA) == AF(arg0, s16, 0xA2) && AF(arg0, s16, 0xE) == AF(arg0, s16, 0xA4)) return 0;
    return 1;
}

extern void RotateSVectorY();
extern s32 TestRespawnSpot();

s32 func_80153800(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 i;
    u16 n;
    u32 t;

    if (D_8011DB28 != 0) {
        PosToSVec(arg0 + 4, arg0 + 0x88);
        AF(arg0, SVECTOR, 0x90) = AF(arg0, SVECTOR, 0x88);
        return 0;
    }
    t = AF(arg0, u8, 0xDE);
    if (t >= 0x21) {
        SVecToPos((s32) &D_80126DB0, arg0 + 4);
        AF(arg0, SVECTOR, 0x88) = AF(&D_80126DB0, SVECTOR, 0x0);
        AF(arg0, SVECTOR, 0x90) = AF(arg0, SVECTOR, 0x88);
        AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) D_80126DB6;
        return 0;
    }
    n = t * 4;
    b.vy = AF(arg0, u16, 0xA2) - n;
    for (i = 0; i < 0x80; i++) {
        a.vx = 0;
        a.vy = 0;
        a.vz = n;
        RotateSVectorY((s16) (i << 5), &a, &a);
        b.vx = AF(arg0, u16, 0xA0) + a.vx;
        b.vz = AF(arg0, u16, 0xA4) + a.vz;
        if (TestRespawnSpot(arg0, &b) == 0) {
            return 0;
        }
    }
    AF(arg0, u8, 0xDE)++;
    return 1;
}

extern s32 TraceMap();
extern s32 ValidateRespawnSpot();

s32 TestRespawnSpot(s32 arg0, s32 arg1) {
    SVECTOR v;

    v.vx = AF(arg1, u16, 0);
    v.vy = AF(arg1, u16, 2) + 0x1F;
    v.vz = AF(arg1, u16, 4);
    if (TraceMap(0, arg1, &v) == 0x2000 && ((u8 *)&v)[6] == 0 && ValidateRespawnSpot(arg0, &v) == 0) {
        return 0;
    }
    return 1;
}

s32 ValidateRespawnSpot(s32 arg0, SVECTOR *arg1) {
    SVECTOR a;
    SVECTOR b;
    SVECTOR c;
    s32 r;
    s32 r2;

    a = AF(arg0, SVECTOR, 0xA0);
    b = *arg1;
    a.vy -= 4;
    r = TraceMap(0, &a, &b);
    if (r != 0x2000) {
        return 1;
    }
    a = b;
    b.vy += 8;
    r2 = TraceMap(0, &a, &b);
    if (r2 != r) {
        return 1;
    }
    if (TraceMap(2, &b, &c) != r2) {
        return 1;
    }
    AF(arg0, s16, 0x88) = b.vx;
    AF(arg0, s16, 0x8A) = b.vy;
    AF(arg0, s16, 0x8C) = b.vz;
    AF(arg0, SVECTOR, 0x90) = AF(arg0, SVECTOR, 0x88);
    return 0;
}

extern void SpawnFx31();

void func_80153B58(s32 arg0) {
    if (!(D_800B99DA & 3)) {
        SpawnFx31(arg0);
    }
    if (!(D_800B99DA & 1)) {
        SpawnEffect(3, arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0x08880000, 0x18009000);
    }
}

s32 IsPlayerHitBy(s32 arg0) {
    return arg0 == g_PlayerHitBy;
}

s32 ClearPlayerHitBy(s32 arg0) {
    if (arg0 == g_PlayerHitBy) {
        g_PlayerHitByHeld = 0;
        return 1;
    }
    return 0;
}

void ForgetPlayerHit(s32 arg0) {
    g_PlayerHitByHeld = 0;
    g_PlayerHitBy = 0;
}

void func_80153C30(void) {
    D_8011F748 = 1;
}

void func_80153C44(s32 arg0, s32 arg1, s16 arg2) {
    func_80153C74();
    D_8011DB18 = arg2;
}

extern s16 D_8011DB1A;

void func_80153C74(s32 arg0, s32 arg1) {
    D_8011DB0C = arg0;
    D_8011DB1A = arg1;
}

void ClearCounter5210(void) {
    D_80115210 = 0;
}

s32 IncCounter5210(void) {
    s32 temp_v0;

    temp_v0 = D_80115210 + 1;
    D_80115210 = temp_v0;
    return temp_v0;
}

s32 func_80153CBC(void) {
    return D_80115210;
}

void RunGrabbedKindState(u8 *arg0) {
    StartRumbleScript((s32) &D_8018F304);
    D_8018F32C[AF(arg0, u16, 2)](arg0);
    D_8011DB0C = 0;
    D_8011F748 = 0;
}

void GrabbedEnter(s32 arg0) {
    CollidePlayerMove(arg0);
    ProbePlatformByMove(arg0);
    ProbeGroundByMove(arg0);
    GrabbedStart(arg0);
    NextObjState(arg0);
}

extern u8 D_8018F30C;

void GrabbedStart(s32 arg0) {
    PlaySe(0x451);
    SetPlayerMotion(arg0, &D_8018F30C);
    ClearPlayerHittable(arg0);
    AF(arg0, u16, 0x244) = AF(arg0, u16, 6);
    AF(arg0, u16, 0x246) = AF(arg0, u16, 0xA);
    AF(arg0, u16, 0x248) = AF(arg0, u16, 0xE);
    if (D_800B9A08 == 0x3075) {
        AF(arg0, u8, 0xDE) = 0x14;
    } else {
        AF(arg0, u8, 0xDE) = 0xA;
    }
    AF(arg0, u8, 0xDF) = 0;
    NextObjState(arg0);
}

extern s32 EndGrab();

void GrabbedStep(s32 arg0) {
    u8 *w = &g_Status;
    u16 flags; /* PORT NOTE: read before set, as the original (other 0xA9 values) */

    ClearPlayerHittable(arg0);
    switch (AF(arg0, u8, 0xA9)) {
    case 0x41:
        flags = GetObjPadPressed(arg0) & 0xF000;
        break;
    case 0x53:
    case 0x73:
        flags = (ObjUpHeld(arg0) != 0) << 12;
        if (ObjDownHeld(arg0) != 0) {
            flags |= 0x4000;
        }
        if (ObjLeftHeld(arg0) != 0) {
            flags |= 0x8000;
        }
        if (ObjRightHeld(arg0) != 0) {
            flags |= 0x2000;
        }
        break;
    }
    flags >>= 12;
    if (flags != 0 && !(flags & AF(arg0, u8, 0xDF))) {
        if (--AF(arg0, u8, 0xDE) == 0) {
            ForgetPlayerHit(arg0);
        }
    }
    AF(arg0, u8, 0xDF) = flags;
    if (g_PlayerHitByHeld == 0) {
        if (D_800B9A08 != 0x3075) {
            AF(arg0, u16, 0x88) = AF(arg0, u16, 0x244);
            AF(arg0, u16, 0x8A) = AF(arg0, u16, 0x246);
            AF(arg0, u16, 0x8C) = AF(arg0, u16, 0x248);
        }
        EndGrab(arg0);
        EnterPlayerStanding(arg0);
        func_80165718((u8 *)arg0);
        return;
    }
    switch ((u16)D_8011DB0C) {
    case 0:
        break;
    case 3:
        StartPoison(arg0);
    case 1:
        DamagePlayerHp(arg0, D_8011DB1A);
        ShowNumberAbove(arg0, 1, D_8011DB1A);
        D_8011DB0C = 0;
        D_8011F748 = 0;
        break;
    case 2:
        DamagePlayerHp(arg0, D_8011DB1A);
        ShowNumberAbove(arg0, 1, D_8011DB1A);
        StartPoison(arg0);
        SpawnEffectOn(0x42, arg0, 0, 0);
        SpawnEffect(0x42, (StageActor *)arg0, 0x20, 0, 0, 1, 0);
        SpawnEffect(0x42, (StageActor *)arg0, 0, 0, 0x20, 1, 0);
        SpawnEffect(0x42, (StageActor *)arg0, -0x20, 0, 0, 1, 0);
        SpawnEffect(0x42, (StageActor *)arg0, 0, 0, -0x20, 1, 0);
        D_8011DB0C = 0;
        D_8011F748 = 0;
        break;
    }
    if (*(u16 *)&D_8011F748 != 0) {
        EndGrab(arg0);
        EnterPlayerStanding(arg0);
        DamagePlayerHp(arg0, AF(w, u16, 0x3C));
        D_8011DB0C = 0;
        D_8011F748 = 0;
    }
}

s32 EndGrab(s32 arg0) {
    g_PlayerHitByHeld = 0;
    return ResetPlayerAfterHit();
}

void ClearPlayerMotion(s32 arg0) {
    AF(arg0, s32, 0xB4) = 0;
    AF(arg0, s16, 0xBA) = 0;
    AF(arg0, s16, 0xB8) = 0;
    AF(arg0, u8, 0xBD) = 0;
    AF(arg0, u8, 0xBC) = 0;
    AF(arg0, u8, 0xDC) = 0;
}

void SetPlayerMotionIndex(Player *arg0, s32 arg1) {
    if (arg0->anim != AF(arg0, s32 *, 0xB0)[arg1]) {
        RestartPlayerMotionIndex(arg0, arg1);
    }
}

void RestartPlayerMotionIndex(Player *arg0, s32 arg1) {
    s32 t = AF(arg0, s32 *, 0xB0)[arg1];

    arg0->animTimer = 1;
    arg0->animStatus = 1;
    arg0->animIndex = 0;
    arg0->animStart = 0;
    arg0->unkDC = 0;
    arg0->anim = t;
    StepPlayerMotion(arg0);
}

extern s32 RestartPlayerMotionIndexBlend();

void SetPlayerMotionIndexBlend(Player *arg0, s32 arg1, s32 arg2) {
    if (arg0->anim != AF(arg0, s32 *, 0xB0)[arg1]) {
        RestartPlayerMotionIndexBlend(arg0, arg1, arg2);
    }
}

extern s32 func_801549F8();

s32 RestartPlayerMotionIndexBlend(Player *arg0, s32 arg1, s32 arg2) {
    arg0->anim = AF(arg0, s32 *, 0xB0)[arg1];
    arg0->animTimer = 1;
    arg0->animStatus = 1;
    arg0->animIndex = arg2;
    arg0->animStart = arg2;
    arg0->unkDC = func_801549F8(arg0);
    return StepPlayerMotion(arg0);
}

s32 SetPlayerMotion(arg0, arg1) s32 arg0; s32 arg1; {
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0xB4);
    if (var_v0 != arg1) {
        var_v0 = RestartPlayerMotion(arg0, arg1);
    }
    return var_v0;
}

s32 RestartPlayerMotion(Player *arg0, s32 arg1) {
    arg0->anim = arg1;
    arg0->animTimer = 1;
    arg0->animStatus = 1;
    arg0->animIndex = 0;
    arg0->animStart = 0;
    arg0->unkDC = 0;
    return StepPlayerMotion(arg0);
}

s32 SetPlayerMotionBlend(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0xB4);
    if (var_v0 != arg1) {
        var_v0 = RestartPlayerMotionBlend();
    }
    return var_v0;
}

s32 RestartPlayerMotionBlend(Player *arg0, s32 arg1, s32 arg2) {
    arg0->anim = arg1;
    arg0->animTimer = 1;
    arg0->animStatus = 1;
    arg0->animIndex = arg2;
    arg0->animStart = arg2;
    arg0->unkDC = func_801549F8(arg0);
    return StepPlayerMotion(arg0);
}

s32 PeekPlayerMotionPose(Player *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0;
    u16 temp_s1;
    u16 temp_s3;
    u8 temp_s5;
    u8 temp_s6;
    u8 temp_s7;
    ModelObj *temp_v1;

    temp_s5 = arg0->animIndex;
    temp_s6 = arg0->animStart;
    temp_s7 = arg0->unkDC;
    sp10 = 0;
    sp14 = 0;
    sp18 = 1;
    temp_s2 = arg0->anim;
    temp_s3 = arg0->animStatus;
    temp_s1 = (u16)arg0->animTimer;
    temp_s4 = (s32)arg0->model->pose;
    RunPlayerMotionScript(arg0, (s32) &sp10, (s32) &sp14, (s32) &sp18);
    temp_v1 = arg0->model;
    arg0->anim = temp_s2;
    arg0->animStatus = temp_s3;
    arg0->animTimer = temp_s1;
    arg0->animIndex = temp_s5;
    arg0->animStart = temp_s6;
    arg0->unkDC = temp_s7;
    temp_v0 = (s32)temp_v1->pose;
    temp_v1->pose = temp_s4;
    return temp_v0;
}

s32 StepPlayerMotion(Player *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;

    sp10 = 0;
    sp14 = 0;
    sp18 = 0;
    return RunPlayerMotionScript(arg0, (s32) &sp10, (s32) &sp14, (s32) &sp18);
}

extern s32 StartFaceScript();
extern void SetDisplayFlag20();
extern void ClearDisplayFlag20();
extern void StoreImage();
extern u8 D_80126738;
extern u8 D_80126838;
extern u8 D_80126748;
extern u8 D_80126848;

s32 RunPlayerMotionScript(Player *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    ModelObj *p;
    u8 t;
    s32 op;
    s32 v;
    s32 w;

    p = arg0->model;
    if (p == 0) {
        return;
    }
    t = AF(arg0, u8, 0xB8);
    if (t == 0) {
        return;
    }
    if (*arg1 == 0) {
        arg0->animStatus = t;
        (*arg1)++;
    }
    if ((u8)--arg0->animStatus == 0) {
        op = AF(arg0, s32 *, 0xB4)[arg0->animIndex];
        switch (op) {
        case 0:
            arg0->animStatus = 0;
            *arg2 |= 0x8000;
            arg0->animTimer = 0;
            arg0->animIndex = 0;
            arg0->animStart = 0;
            break;
        case 1:
            arg0->animStatus = 1;
            *arg2 |= 0x8000;
            arg0->animIndex = 0;
            arg0->animStart = 0;
            arg0->unkDC = 0;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 2:
            arg0->animStatus = 0;
            arg0->animIndex++;
            *arg2 |= 0x8000;
            break;
        case 3:
            v = AF(arg0, s32 *, 0xB4)[arg0->animIndex + 1];
            arg0->animStatus = 1;
            arg0->animIndex += 2;
            arg0->animTimer = v;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 4:
        case 11:
        case 12:
            arg0->animStatus = 1;
            arg0->animIndex += 2;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 5:
            v = AF(arg0, s32 *, 0xB4)[arg0->animIndex + 1];
            w = AF(arg0, s32 *, 0xB4)[arg0->animIndex + 2];
            arg0->animStatus = 1;
            arg0->unkDC = 0;
            arg0->animIndex = w;
            arg0->anim = v;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 6:
            arg0->animIndex = AF(arg0, s32 *, 0xB4)[arg0->animIndex + 1];
            arg0->animStatus = 1;
            arg0->unkDC = func_801549F8(arg0);
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 7:
            arg0->animStatus = 1;
            *arg2 |= 0x4000;
            arg0->animIndex++;
            arg0->animStart++;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 8:
            arg0->animStatus = 1;
            *arg2 |= 0x2000;
            arg0->animIndex++;
            arg0->animStart++;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 9:
            arg0->animStatus = 1;
            *arg2 |= 0x1000;
            arg0->animIndex++;
            arg0->animStart++;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 10:
            arg0->animStatus = 1;
            *arg2 |= 0x800;
            arg0->animIndex++;
            arg0->animStart++;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 13:
            arg0->animStatus = 1;
            arg0->animIndex += 1;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 14:
            if (*arg3 == 0) {
                StartFaceScript(arg0, AF(arg0, s32 *, 0xB4)[arg0->animIndex + 1]);
            }
            arg0->animStatus = 1;
            arg0->animIndex += 2;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 15:
            if (*arg3 == 0) {
                StartFace(arg0, AF(arg0, s32 *, 0xB4)[arg0->animIndex + 1]);
            }
            arg0->animStatus = 1;
            arg0->animIndex += 2;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 16:
            if (*arg3 == 0) {
                UpdateFlag10Part21(arg0);
            }
            arg0->animStatus = 1;
            arg0->animIndex++;
            arg0->animStart++;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 17:
            if (*arg3 == 0) {
                ClearDisplayFlag10(arg0);
            }
            arg0->animStatus = 1;
            arg0->animIndex++;
            arg0->animStart++;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 18:
            if (*arg3 == 0) {
                SetDisplayFlag20(arg0);
            }
            arg0->animStatus = 1;
            arg0->animIndex++;
            arg0->animStart++;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 19:
            if (*arg3 == 0) {
                ClearDisplayFlag20(arg0);
            }
            arg0->animStatus = 1;
            arg0->animIndex++;
            arg0->animStart++;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 20:
            if (*arg3 == 0) {
                arg0->toggles[0] ^= 1;
            }
            arg0->animStatus = 1;
            arg0->animIndex++;
            arg0->animStart++;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 21:
            if (*arg3 == 0) {
                StoreImage(AF(arg0, s32 *, 0xB4)[arg0->animIndex + 1], &D_80126738);
            }
            arg0->animStatus = 1;
            arg0->animIndex += 2;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 22:
            if (*arg3 == 0) {
                StoreImage(AF(arg0, s32 *, 0xB4)[arg0->animIndex + 1], &D_80126838);
            }
            arg0->animStatus = 1;
            arg0->animIndex += 2;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 23:
            if (*arg3 == 0) {
                p->pose = &D_80126748;
            }
            arg0->animStatus = (u16)arg0->animTimer;
            arg0->animIndex++;
            arg0->animStart++;
            arg0->unkDC++;
            break;
        case 24:
            if (*arg3 == 0) {
                p->pose = &D_80126848;
            }
            arg0->animStatus = (u16)arg0->animTimer;
            arg0->animIndex++;
            arg0->animStart++;
            arg0->unkDC++;
            break;
        case 25:
            if (*arg3 == 0) {
                arg0->status &= ~0x20000;
            }
            arg0->animStatus = 1;
            arg0->animIndex++;
            arg0->animStart++;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        case 26:
            if (*arg3 == 0) {
                arg0->status |= 0x20000;
            }
            arg0->animStatus = 1;
            arg0->animIndex++;
            arg0->animStart++;
            RunPlayerMotionScript(arg0, arg1, arg2, arg3);
            break;
        default:
            p->pose = op + 0x10;
            arg0->animStatus = (u16)arg0->animTimer;
            arg0->animIndex++;
            arg0->animStart++;
            arg0->unkDC++;
            break;
        }
    }
    arg0->animStatus |= *arg2;
}

s32 func_801549F8(Player *arg0) {
    s32 count;
    s32 i;
    u8 n;

    count = 0;
    n = arg0->animIndex;
    i = 0;
    if (n != 0) {
        do {
            switch (AF(arg0, u32 *, 0xB4)[i]) {
            case 0: case 2: case 7: case 8: case 9: case 10: case 13:
                i += 1;
                break;
            case 16: case 17: case 18: case 19: case 20: case 25: case 26:
                i += 1;
                break;
            case 3: case 4: case 5: case 6: case 11: case 12: case 14: case 15: case 21: case 22:
                i += 2;
                break;
            case 1: case 23: case 24:
                i += 1;
                count += 1;
                break;
            default:
                i += 1;
                count += 1;
                break;
            }
        } while (i != n);
    }
    return count & 0xFF;
}

extern s32 RestartFace();

s32 StartFace(s32 arg0, s32 arg1) {
    if (AF(arg0, s32, 0xD0) != AF(arg0, s32 *, 0xCC)[arg1]) {
        return RestartFace(arg0, arg1);
    }
}

s32 RestartFace(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0xD0) = AF(arg0, s32 *, 0xCC)[arg1];
    AF(arg0, u16, 0xD6) = 1;
    AF(arg0, u16, 0xD4) = 1;
    AF(arg0, u8, 0xD8) = 0;
    AF(arg0, u8, 0xD9) = 0;
}

extern void RestartFaceAt();

void StartFaceAt(u8 *arg0, s32 arg1, s32 arg2) {
    if (AF(arg0, s32, 0xD0) != AF(arg0, s32 *, 0xCC)[arg1]) {
        RestartFaceAt(arg0, arg1, arg2);
    }
}

void RestartFaceAt(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0xD0) = AF(arg0, s32 *, 0xCC)[arg1];
    AF(arg0, u16, 0xD6) = 1;
    AF(arg0, u16, 0xD4) = 1;
    AF(arg0, u8, 0xD8) = arg2;
    AF(arg0, u8, 0xD9) = arg2;
}

s32 StartFaceScript(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = AF(arg0, s32, 0xD0);
    if (var_v0 != arg1) {
        var_v0 = RestartFaceScript();
    }
    return var_v0;
}

s32 RestartFaceScript(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0xD0) = arg1;
    AF(arg0, s16, 0xD6) = 1;
    AF(arg0, s16, 0xD4) = 1;
    AF(arg0, u8, 0xD8) = 0;
    AF(arg0, u8, 0xD9) = 0;
}

void StartFaceScriptAt(u8 *arg0, s32 arg1) {
    if (AF(arg0, s32, 0xD0) != arg1) {
        RestartFaceScriptAt();
    }
}

void RestartFaceScriptAt(u8 *arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0xD0) = arg1;
    AF(arg0, s16, 0xD6) = 1;
    AF(arg0, s16, 0xD4) = 1;
    AF(arg0, u8, 0xD8) = arg2;
    AF(arg0, u8, 0xD9) = arg2;
}

s32 UpdatePlayerFace(Player *arg0) {
    s32 sp10;
    s32 sp14;

    sp10 = 0;
    sp14 = 0;
    FaceScriptStep(arg0, (s32) &sp10, (s32) &sp14);
    return ((s32 (*)())RefreshFaceOverride)(arg0);
}

void FaceScriptStep(u8 *arg0, s32 *arg1, s32 *arg2) {
    u8 t;
    u16 v;
    s32 a;

    t = AF(arg0, u8, 0xD4);
    if (t != 0) {
        if (*arg1 == 0) {
            AF(arg0, u16, 0xD4) = t;
            (*arg1)++;
        }
        v = AF(arg0, u16, 0xD4) - 1;
        AF(arg0, u16, 0xD4) = v;
        if (!(v & 0xFF)) {
            switch (AF(arg0, u32 *, 0xD0)[AF(arg0, u8, 0xD8)]) {
            case 0:
                AF(arg0, u16, 0xD4) = 0;
                *arg2 |= 0x8000;
                AF(arg0, u16, 0xD6) = 0;
                AF(arg0, u8, 0xD8) = 0;
                AF(arg0, u8, 0xD9) = 0;
                break;
            case 1:
                AF(arg0, u16, 0xD4) = 1;
                *arg2 |= 0x8000;
                AF(arg0, u8, 0xD8) = 0;
                AF(arg0, u8, 0xD9) = 0;
                FaceScriptStep(arg0, arg1, arg2);
                break;
            case 2:
                AF(arg0, u16, 0xD4) = 0;
                AF(arg0, u8, 0xD8)++;
                goto set;
            case 3:
                a = AF(arg0, s32 *, 0xD0)[AF(arg0, u8, 0xD8) + 1];
                AF(arg0, u16, 0xD4) = 1;
                AF(arg0, u8, 0xD8) += 2;
                AF(arg0, u16, 0xD6) = a;
                FaceScriptStep(arg0, arg1, arg2);
                break;
            case 5:
                a = AF(arg0, s32 *, 0xD0)[AF(arg0, u8, 0xD8) + 1];
                AF(arg0, u8, 0xD8) = AF(arg0, s32 *, 0xD0)[AF(arg0, u8, 0xD8) + 2];
                AF(arg0, u16, 0xD4) = 1;
                AF(arg0, s32, 0xD0) = a;
                FaceScriptStep(arg0, arg1, arg2);
                break;
            case 6:
                AF(arg0, u8, 0xD8) = AF(arg0, s32 *, 0xD0)[AF(arg0, u8, 0xD8) + 1];
                AF(arg0, u16, 0xD4) = 1;
                FaceScriptStep(arg0, arg1, arg2);
                break;
            case 7:
                AF(arg0, u16, 0xD4) = AF(arg0, u16, 0xD6);
                *arg2 |= 0x4000;
                AF(arg0, u8, 0xD8)++;
                AF(arg0, u8, 0xD9)++;
                FaceScriptStep(arg0, arg1, arg2);
                break;
            case 8:
                AF(arg0, u16, 0xD4) = AF(arg0, u16, 0xD6);
                *arg2 |= 0x2000;
                AF(arg0, u8, 0xD8)++;
                AF(arg0, u8, 0xD9)++;
                FaceScriptStep(arg0, arg1, arg2);
                break;
            default:
                FaceSet(arg0, AF(arg0, s32 *, 0xD0)[AF(arg0, u8, 0xD8)]);
                AF(arg0, u16, 0xD4) = AF(arg0, u16, 0xD6);
                AF(arg0, u8, 0xD8)++;
                break;
            }
        } else if (v == 1 && AF(arg0, s32 *, 0xD0)[AF(arg0, u8, 0xD8)] == 0) {
        set:
            *arg2 |= 0x8000;
        }
        AF(arg0, u16, 0xD4) = *arg2 | AF(arg0, u16, 0xD4);
    }
}

extern s16 D_80078E9E;
extern u8 D_800D8D10;
extern void FaceLoad();

void FaceSet(u8 *arg0, s32 arg1) {
    s32 w;

    AF(arg0, s32, 0xC8) = arg1;
    if (D_80078E96 & 0x8000) {
        AF(arg0, s32, 0xC8) = arg1 | 0x1000000;
        w = (s32) &D_800D8D10;
    } else if ((D_80078E9E < 0x10 || D_80078EA6 < 0x10) && !(AF(arg0, s32, 0x44) & 0xC0)) {
        AF(arg0, s32, 0xC8) = arg1 | 0x1000000;
        w = 0x40000002;
    } else {
        AF(arg0, s32, 0xC8) &= 0xC0FFFFFF;
        w = arg1;
    }
    FaceLoad(w);
}

extern s16 D_80078E96;
extern s16 D_80078E9E;
extern u8 D_800D8D10;
extern void FaceLoad();

static inline s32 h_80154F9C(void) {
    return GetPlayerAction();
}

/* placement: void, as the original (reorg fills the early-return beqz delay slot with lui v0, so v0 is dead at
 * exit; an s32 definition keeps v0 live and leaves a nop). The file's `extern s32 RefreshFaceOverride();` (line 195)
 * becomes `extern void RefreshFaceOverride();` and UpdatePlayerFace returns `((s32 (*)())RefreshFaceOverride)(arg0)`
 * (cast at the caller for a void callee; its code is unchanged, checked). */
void RefreshFaceOverride(u8 *arg0) {
    u8 *c = &g_Status;
    s32 w;

    if (AF(arg0, s32, 0xC8) & 0x1000000) {
        if ((D_80078E96 & 0x8000) || D_80078E9E < 0x10 || D_80078EA6 < 0x10) {
            if (h_80154F9C() == 0) {
                return;
            }
        }
        w = AF(arg0, s32, 0xC8) & 0xC0FFFFFF;
        AF(arg0, s32, 0xC8) = w;
        FaceLoad(w);
    } else {
        if ((D_80078E96 & 0x8000) && h_80154F9C() == 0) {
            AF(arg0, s32, 0xC8) |= 0x1000000;
            FaceLoad(&D_800D8D10);
        } else if ((AF(c, s16, 0x26) < 0x10 || AF(c, s16, 0x2E) < 0x10) && !(AF(arg0, s32, 0x44) & 0xC0) && h_80154F9C() == 0) {
            AF(arg0, s32, 0xC8) |= 0x1000000;
            FaceLoad(0x40000002);
        }
    }
}

void FaceLoad(s32 w) {
    if (w & 0x40000000) {
        MoveImage(D_8018F338 + (w & 0xFF) * 8, 0x200, 0x100);
        return;
    }
    QueueImage(w);
}

void UpdateWeaponParts(u8 *a) {
    s32 f;
    PartHide(PARTS(a), 25);
    PartHide(PARTS(a), 24);
    PartHide(PARTS(a), 22);
    PartHide(PARTS(a), 21);
    f = *(s32 *)(a + 0x44);
    if (f & 0x400) {
        return;
    }
    if (!(f & 0x20000)) {
        if (f & 0x20000000) {
            PartShow(PARTS(a), 25);
            PartHide(PARTS(a), 24);
        } else if (TestFlag80(a) != 0) {
            PartHide(PARTS(a), 25);
            PartShow(PARTS(a), 24);
        } else {
            PartHide(PARTS(a), 25);
            PartHide(PARTS(a), 24);
        }
    }
    if (*(s32 *)(a + 0x44) & 0x10000000) {
        PartShow(PARTS(a), 22);
        PartHide(PARTS(a), 21);
    } else {
        PartHide(PARTS(a), 22);
        PartShow(PARTS(a), 21);
        if (*(s32 *)(a + 0x44) & 4) {
            PartHide(PARTS(a), 21);
        }
    }
}

void ShowAllParts(Player *obj) {
    u32 *p = D_800DE2A4;
    while (*p != 0) {
        *p &= 0x80FFFFFF;
        p++;
    }
    obj->status |= 0x30000000;
}

void HideAllParts(u8 *obj) {
    u32 *p = D_800DE2A4;
    while (*p != 0) {
        *p |= 0x01000000;
        p++;
    }
    *(s32 *)(obj + 0x44) &= ~0x30000000;
}

void SetDisplayFlag20(Player *a) {
    a->status |= 0x20000000;
}

void ClearDisplayFlag20(Player *a) {
    a->status &= ~0x20000000;
}

void UpdateFlag10Part21(u8 *a) {
    if ((*(s32 *)(a + 0x44) & 4) || (GetFlag(0x12F) & 0xFF)) {
        *(s32 *)(a + 0x44) &= ~0x10000000;
    } else {
        *(s32 *)(a + 0x44) |= 0x10000000;
    }
    PartHide(PARTS(a), 21);
}

void ClearDisplayFlag10(Player *a) {
    a->status &= ~0x10000000;
}

s32 RunStateHandler4E(u8 *a) {
    if (a[0x4E]) {
        if (!D_8018F378[(s16)(a[0x4E] - 1)](a)) {
            a[0x4E] = 0;
        }
    }
    return a[0x4E];
}

extern s32 func_800D02D0();

s32 func_801554B8(u8 *arg0) {
    if (AF(arg0, u8, 0x1A0) != AF(arg0, u8, 0x196)) {
        if (func_800D02D0(AF(arg0, u8, 0x1A0)) != 0) {
            AF(arg0, u8, 0x196) = AF(arg0, u8, 0x1A0);
            RunAbilityInitHandler(arg0);
            return 0;
        }
        return 1;
    }
    return 0;
}

void StartFusionCombo(Player *arg0) {
    SetPlayerState(arg0, 5);
    FusionSwingStart(arg0);
}

extern void RunFusionComboState();

void EnterFusionCombo(s32 arg0) {
    SetPlayerState(arg0, 5);
    RunFusionComboState(arg0);
}

void RunFusionComboState(s32 arg0, s32 arg1) {
    D_8018F37C[AF(arg0, u16, 2)]();
}

void FusionComboWait(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        FusionSwingStart(arg0);
    }
}

extern u8 D_800D4C94;
extern u8 D_800D4CE4;
extern u8 D_800D4D38;
extern u8 D_800D4D88;
extern u8 D_800D4E10;
extern u8 D_800D4E6C;
extern s32 ResetAttackHit();
extern s32 PlaySeNow();

void FusionSwingStart(Player *arg0) {
    s32 var; /* PORT NOTE: read before set (case 6 / default), as the original */

    StartFace(arg0, 0x15);
    if ((s32)arg0->status & 0x200) {
        arg0->toggles[2] = 5;
    } else if (arg0->push[2] == 0xFFF50000 && (GetFlag(0x82) & 0xFF)) {
        arg0->toggles[2] = 7;
    }
    switch (arg0->toggles[2]) {
    case 0:
    case 1:
        if (arg0->toggles[3] ^= 1) {
            arg0->toggles[2] = 0;
        } else {
            arg0->toggles[2] = 1;
        }
        SetPlayerMotion(arg0, &D_800D4C94);
        PlaySe(0x400);
        PlaySeNow(0x5F3);
        var = 0;
        D_8011F730 |= 3;
        NextObjState(arg0);
        break;
    case 2:
        SetPlayerMotion(arg0, &D_800D4CE4);
        PlaySe(0x446);
        PlaySeNow(0x5F3);
        var = 1;
        NextObjState(arg0);
        break;
    case 3:
        SetPlayerMotion(arg0, &D_800D4D38);
        PlaySe(0x400);
        PlaySeNow(0x5F3);
        var = 2;
        NextObjState(arg0);
        break;
    case 4:
        SetPlayerMotion(arg0, &D_800D4D88);
        PlaySeNow(0x5F6);
        var = 3;
        NextObjState(arg0);
        NextObjState(arg0);
        break;
    case 5:
        SetPlayerMotion(arg0, &D_800D4E10);
        var = 4;
        arg0->sub = 7;
        break;
    case 6:
        break;
    case 7:
        PlaySe(0x7F);
        PlaySeNow(0x5F4);
        SetPlayerMotion(arg0, &D_800D4E6C);
        var = 6;
        arg0->sub = 8;
        break;
    }
    SetObjTimer(arg0, 0);
    ResetAttackHit(arg0);
    if (var >= 0) {
        SpawnEffectOn(4, arg0, var, 0);
    }
    ClearDisplayFlag20(arg0);
}

extern s32 CheckFusionSkillInput();
extern s32 EnterPlayerRunning();
extern void RotateVectorY();

void FusionSwingStep(u8 *arg0, s32 arg1) {
    s32 sp10[6];
    u8 temp_v1;
    u8 temp_v0;
    u32 var_v1;

    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        LeavePlayerKind((s32) arg0, arg1);
        EnterPlayerStanding((s32) arg0);
        return;
    }
    CheckFusionSkillInput((s32) arg0);
    if ((GetObjPadPressed((s32) arg0) & 0x80) && ((temp_v1 = AF(arg0, u8, 0x1A9)) >= 4)) {
        if (AF(arg0, u8, 0x1C0) != 0) {
            FaceStickDir((s32) arg0);
            EndSwordSwing((s32) arg0);
            ClearPlayerMotion((s32) arg0);
            temp_v0 = AF(arg0, u8, 0x1AA);
            var_v1 = temp_v0 + 1;
            if (temp_v0 == 0) {
                var_v1 = 2;
            } else if (var_v1 >= 5) {
                var_v1 = 1;
            }
            AF(arg0, u8, 0x1AA) = var_v1;
            ContinueFusionCombo((s32) arg0);
            return;
        }
        if ((AF(arg0, u8, 0x1AA) < 2) || ((AF(arg0, u8, 0x1A8) == 0) && (temp_v1 != 0))) {
            FaceStickDir((s32) arg0);
            EndSwordSwing((s32) arg0);
            ClearPlayerMotion((s32) arg0);
            TriggerFusionCombo((s32) arg0);
            D_8011F730 |= 3;
            return;
        }
    }
    if ((AF(arg0, u8, 0x1A8) == 0) && (AF(arg0, u8, 0x1A9) != 0)) {
        if (CanJump((s32) arg0) != 0) {
            LeavePlayerKind((s32) arg0);
            TriggerJump((s32) arg0);
            return;
        }
        if (!(GetObjPadHeld((s32) arg0) & 8) && (ObjDirHeld((s32) arg0) != 0)) {
            LeavePlayerKind((s32) arg0);
            EnterPlayerRunning((s32) arg0);
            return;
        }
    }
    if (TickObjTimer((s32) arg0) == 0) {
        RotateVectorY((s16) -AF(AF(arg0, u8 *, 0x20), u16, 0x12), arg0 + 0x234, sp10);
        SetObjPushV((s32) arg0, (s32) sp10);
        SetVelFromPushKeepAxes((s32) arg0);
        MoveObjByVel((s32) arg0);
    }
    if (CheckPlayerGround((s32) arg0) == 0) {
        RunAttackHit((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
    }
}

s32 CheckFusionSkillInput(s32 arg0) {
    switch (AF(arg0, u8, 0x1AA)) {
    case 0:
    case 1:
        if ((GetFlag(0x85) & 0xFF) && (TestFlag80((u8 *) arg0) != 0) && (AF(arg0, u8, 0x1C0) != 0) && (GetObjPadPressed(arg0) & 0x10)) {
            TriggerSwordSkill(arg0, 2);
            return 1;
        }
        break;
    case 2:
        if ((GetFlag(0x86) & 0xFF) && (GetObjPadPressed(arg0) & 0x10)) {
            TriggerSwordSkill(arg0, 3);
            return 1;
        }
        break;
    }
}

extern u8 D_800D4DA8;

void FusionFinisherLaunch(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if ((CheckPlayerGround((s32) arg0) == 0) && (AF(arg0, u16, 0xB8) == 0x8000)) {
        ClearObjVel((s32) arg0);
        SetFallSpeed((s32) arg0, -0x100000);
        SetPlayerMotion((s32) arg0, (s32) &D_800D4DA8);
        NextObjState((s32) arg0);
    }
}

extern u8 D_800D4DB4;

void FusionFinisherRise(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    AddFallSpeedLimited((s32) arg0, 0x30000);
    ApplyFallSpeed((s32) arg0);
    if (AF(arg0, s32, 0x34) >= 0) {
        SetPlayerMotion((s32) arg0, (s32) &D_800D4DB4);
        NextObjState((s32) arg0);
        PlaySe(0x447);
    }
}

void func_80155C0C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 pad[16];
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        SetPlayerMotion((s32) arg0, (s32) &D_800D4DD4, arg2);
        NextObjState((s32) arg0);
    }
}

extern u8 D_800D4DF4;

void FusionFinisherFall(u8 *arg0) {
    s32 temp_v0;

    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    AddFallSpeedLimited(arg0, 0x30000);
    ApplyFallSpeed(arg0);
    if (PushOutOfSolidActors(arg0) != 0) {
        ClearObjPush(arg0);
    }
    if ((AF(arg0, s32, 0x34) > 0) && (ProbePlatformByMove(arg0) != 0)) {
        LeavePlayerKind(arg0);
        EnterPlayerStanding(arg0);
        SpawnEffect2(arg0, 1);
        return;
    }
    temp_v0 = func_8014FA04(arg0);
    if (temp_v0 & 0x4000) {
        LeavePlayerKind(arg0);
        SpawnEffect2(arg0, 1);
        StartPlayerSlide(arg0);
    } else if (temp_v0 & 0x2000) {
        SetPlayerMotion(arg0, &D_800D4DF4);
        NextObjState(arg0);
        SpawnEffect2(arg0, 1);
    } else {
        RunAttackHit(arg0, AF(arg0, u8, 0x1AA));
    }
}

extern s32 SwitchToGuard();

void FusionFinisherLand(u8 *arg0) {
    u8 unused[0x40]; /* MATCH-TRICK: frame pad, the original's frame has 0x40 unused bytes */
    s32 temp_s1;

    AF(arg0, s32, 0x44) |= 2;
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        if (GetObjPadHeld(arg0) & 0x80) {
            LeavePlayerKind(arg0);
            SwitchToGuard(arg0);
            return;
        }
        LeavePlayerKind(arg0);
        EnterPlayerStanding(arg0);
        return;
    }
    temp_s1 = ProbePlatformByMove(arg0);
    if ((ProbeGroundByMove(arg0) == 0) && (temp_s1 == 0)) {
        LeavePlayerKind(arg0);
        StartPlayerFall(arg0);
    }
}

void FusionSwingHoldStep(u8 *arg0, s32 arg1) {
    s32 pad[4];
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        LeavePlayerKind((s32) arg0, arg1);
        EnterPlayerStanding((s32) arg0);
        return;
    }
    if (CheckPlayerGround((s32) arg0) == 0) {
        RunAttackHit((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
    }
}

void FusionDashSlashStep(u8 *arg0) {
    s32 pad[4];
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    AddPushFacing((s32) arg0, 0, 0, 0x8000);
    MoveObjByVel((s32) arg0);
    if (!(D_800B99DA & 3)) {
        SpawnEffect2((s32) arg0, 2);
    }
    RunAttackHit((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
    if ((AF(arg0, s32, 0x2C) >= 0) || (AF(arg0, u8, 0x1C0) != 0)) {
        LeavePlayerKind((s32) arg0);
        EnterPlayerStanding((s32) arg0);
        return;
    }
    CheckPlayerGround((s32) arg0);
}

void FusionComboNop(void) {
}

void ExitFusionComboState(Player *arg0) {
    EndSwordSwing(arg0);
}

s32 EndSwordSwing(s32 arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~2);
    return StartFace(arg0, 0x11);
}

void RunAttackHitSet1(s32 arg0, s32 arg1) {
    RunAttackHit(arg0, arg1 | 0x10000);
}

void RunAttackHitSet2(s32 arg0, s32 arg1) {
    RunAttackHit(arg0, arg1 | 0x20000);
}

extern void AttackHitStep();

void RunAttackHit(s32 arg0, s32 arg1) {
    SetSpadStackNested();
    AttackHitStep(arg0, arg1);
    ResetSpadStack();
}

extern u8 D_8018F534;
extern u8 D_8018F548;
extern u8 D_8018F3CC;
extern s32 RollAttackDamage();
extern void TraceAttackPoints();
extern s32 TurnToAttackHit();
extern void SpawnAttackHitEffects();
extern void PlayAttackHitSe();
extern s32 AnyAttackPointHit();

void AttackHitStep(s32 arg0, s32 arg1) {
    u8 *e;
    s32 v;

    if (arg1 & 0x10000) {
        e = &D_8018F534 + (arg1 & 0xFFFF) * 20;
    } else if (arg1 & 0x20000) {
        e = &D_8018F548 + (arg1 & 0xFFFF) * 20;
    } else {
        e = &D_8018F3CC + (arg1 & 0xFFFF) * 20;
    }
    v = RollAttackDamage(arg0, AF(e, u16, 0)) & 0xFFFF;
    if (AF(arg0, u8, 0x1A8) != 0) {
        TraceAttackPoints(arg0, AF(e, s32, 0), v, AF(e, s32, 4), AF(e, u8, 0xA), AF(e, u16, 0x12));
        if (AF(e, u8, 0x10) != 0) {
            TurnToAttackHit(arg0);
        }
        SpawnAttackHitEffects(arg0, e, v);
        PlayAttackHitSe(arg0, e);
        if (AnyAttackPointHit(arg0) != 0) {
            AF(arg0, u8, 0x1C0) = 1;
        }
    }
}

extern s32 CalcPower02Rand();
extern s32 func_80029BC8();
extern s32 CalcPowerBothRand();
extern s32 ApplyCriticalDamage();

s32 RollAttackDamage(s32 arg0, s32 arg1) {
    u8 *p;
    u16 flags;
    u16 range;
    u16 a;
    u16 b;
    u16 s5;
    u16 s6;
    s32 base;
    s32 v;
    s32 n;

    p = (u8 *) GetDamageRecord(arg1 & 0xFFFF);
    flags = AF(p, u16, 0);
    range = AF(p, u16, 2);
    a = AF(p, u16, 4);
    b = AF(p, u16, 6);
    s5 = AF(p, u16, 8);
    s6 = AF(p, u16, 0xA);
    base = flags & 0xFFF;
    if (flags & 0x4000) {
        v = CalcPower02Rand(base, (s16) range) + func_80029BC8((s16) a, (s16) b);
    } else if (flags & 0x2000) {
        v = CalcPowerBothRand(base, (s16) range);
    } else {
        v = base + rand() % (range + 1);
    }
    D_8012693A = s5;
    if (GetFlag(0x81) & 0xFF) {
        D_8012693A *= 2;
    }
    n = 0;
    if (s6 != 0) {
        if (GetFlag(0x1A) & 0xFF) {
            n = 5;
        } else if (GetFlag(0x19) & 0xFF) {
            n = 4;
        } else if (GetFlag(0x18) & 0xFF) {
            n = 3;
        } else if (GetFlag(0x17) & 0xFF) {
            n = 2;
        } else if (GetFlag(0x16) & 0xFF) {
            n = 1;
        }
    }
    D_801152B8 = s6 + n;
    if (flags & 0x8000) {
        v = ApplyCriticalDamage(arg0, v & 0xFFFF);
    }
    return v & 0xFFFF;
}

s32 RollDamage(arg0, arg1)
s32 arg0;
s32 arg1;
{
    s32 temp_s1;
    u16 temp_s0;
    void *temp_v0;

    temp_v0 = GetDamageRecord(arg0 & 0xFFFF);
    temp_s0 = AF(temp_v0, u16, 2);
    temp_s1 = AF(temp_v0, u16, 0) & 0xFFF;
    return (temp_s1 + (rand() % (s32) (temp_s0 + 1))) & 0xFFFF;
}

s32 GetDamageRecord(s32 arg0) {
    return (s32) (((arg0 & 0xFFFF) * 0xC) + &D_8018F570);
}

extern s32 RollCriticalHit();

s32 ApplyCriticalDamage(s32 arg0, s32 arg1) {
    if (RollCriticalHit() & 0xFFFF) {
        if (GetFlag(0x1C) & 0xFF) {
            return (((arg1 & 0xFFFF) * 175 / 100) & 0xFFFF) | 0x8000;
        } else {
            return (((arg1 & 0xFFFF) * 150 / 100) & 0xFFFF) | 0x8000;
        }
    }
    return arg1 & 0xFFFF;
}

extern s32 IsStat0Full();
extern s32 IsStat1Full();
extern s32 IsStat3Full();
extern s32 IsStat2Full();

s32 RollCriticalHit(u8 *arg0) {
    u8 *c = &g_Status;
    u16 r;

    if (AF(arg0, s32, 0x44) & 0x200) {
        if (rand() & 1) {
            return 0x8000;
        }
    }
    if (IsStat0Full() || IsStat1Full() || IsStat3Full() || IsStat2Full()) {
        if (!(rand() & 3)) {
            return 0x8000;
        }
    }
    if (rand() & 3) {
        return 0;
    }
    r = rand() % 160;
    if (r <= 80 || r >= AF(c, s16, 0x2E)) {
        return 0;
    }
    return 0x8000;
}

s32 AnyAttackPointHit(s32 arg0, s32 arg1) {
    s32 *var_v1;
    s32 var_a1;
    u32 var_a0;

    var_a1 = 0;
    var_a0 = 0;
    var_v1 = &D_801151E0;
    do {
        if (*var_v1 & 1) {
            var_a1 |= 1;
        }
        var_a0 += 1;
        var_v1 = (s32 *)((u8 *)var_v1 + 4);
    } while (var_a0 < 3U);
    return var_a1;
}

s32 GetAttackHitPoint()
{
    u32 i;

    for (i = 0; i < 3; i++) {
        if ((&D_801151E0)[i] & 1) {
            return (s32) &D_80126AF0[i];
        }
    }
    return 0;
}

s32 ResetAttackHit(arg0, arg1)
s32 arg0;
s32 arg1;
{
    AF(arg0, u8, 0x1A8) = 0;
    AF(arg0, u8, 0x1A9) = 0;
    AF(arg0, u8, 0x1C0) = 0;
    return ResetClankSe();
}

extern u8 D_801150E0;
extern SV8 D_80126AF6[];
extern u8 D_801270A8;
extern void ComputeAttackPoints();

void TraceAttackPoints(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u16 a5 = arg5;
    u32 i;

    ComputeAttackPoints(arg0, arg3, arg0 + 0x1A9);
    for (i = 0; i < 3; i++) {
        (&D_801151E0)[i] = 0;
        if (D_80126AF6[i].x == 0) {
            (&D_801151E0)[i] = TraceAttackPath(arg0, (u16)arg1, (u16)arg2, &D_801270A8, &D_80126AF0[i], &D_80128120[i], &D_80128138[i], &D_801150E0 + i * 4, &D_8011DAD8 + i * 8, arg4, a5, &D_8011520C + i, &D_80126730[i]);
        }
    }
}

s32 TurnToAttackHit(s32 arg0) {
    s32 *var_s1;
    s32 *var_s0;
    s32 temp_v0;
    u32 var_s2;

    var_s2 = 0;
    var_s1 = &D_8011DAD8;
    var_s0 = &D_801151E0;
    do {
        if (*var_s0 & 1) {
            AF(AF(arg0, void *, 0x20), s16, 0x12) = GetHeadingToPoint(arg0, (s32) var_s1);
        }
        var_s1 = (s32 *)((u8 *)var_s1 + 8);
        var_s2 += 1;
        temp_v0 = var_s2 < 3U;
        var_s0 = (s32 *)((u8 *)var_s0 + 4);
    } while (temp_v0 != 0);
    return temp_v0;
}

void PlayClankSeOnce(s32 arg0, s32 arg1);  /* defined after SpawnAttackHitEffects, which calls it */

void SpawnAttackHitEffects(StageActor *a, u8 *b) {
    s32 d;
    u32 i;
    s32 *f;

    for (i = 0; i < 3; i++) {
        { s32 *p = &D_801151E0; f = &p[i]; }
        if (*f & 1) {
            PackAngles10(&D_80128120[i], &d);
            SpawnEffect(AF(b, u8, 8), a, D_80126AF0[i].x, D_80126AF2[i].x, D_80126AF4[i].x, d, AF(b, u8, 9));
        } else if (*f & 6) {
            PlayClankSeOnce((s32)a, i);
            PackAngles10(&D_80128138[i], &d);
            if ((*f & 6) == 4) {
                d |= 0x80000000;
            }
            SpawnEffect(6, a, D_80126AF0[i].x, D_80126AF2[i].x, D_80126AF4[i].x, d, 0);
            if (D_80126730[i] == 0x24) {
                SpawnEffectLimited(0x53, a, D_80126AF0[i].x, D_80126AF2[i].x, D_80126AF4[i].x, d, 0, 0x14);
            }
        }
    }
}

s32 ResetClankSe(s32 arg0) {
    AF(arg0, u8, 0xDA) = 0;
}

void PlayClankSeOnce(s32 arg0, s32 arg1) {
    if (AF(arg0, u8, 0xDA) == 0) {
        PlaySe((s32) (*(u16 *)((u8 *)D_8018F7E0 + ((*(&D_8011520C + arg1) * 2)) * 1)), arg1);
        AF(arg0, u8, 0xDA) = (u8) (AF(arg0, u8, 0xDA) + 1);
    }
}

void PlayAttackHitSe(s32 arg0, u8 *arg1) {
    u32 i;
    s32 f = AF(arg1, s32, 0xC);
    s32 v = f & 0xF0FFFFFF;

    if (f != 0x80000000) {
        for (i = 0; i < 3; i++) {
            if ((&D_801151E0)[i] & 1) {
                if (f & 0x01000000) {
                    PlaySe(v & 0xFFFF);
                } else if (f & 0x02000000) {
                    func_8014CA88(((s32 *)&D_801150E0)[i], v);
                } else {
                    func_8014CA14(((s32 *)&D_801150E0)[i], v);
                }
            }
        }
    }
}

extern s32 func_801484E8();
extern s32 func_8014856C();
extern void AttackPointsToWorld();

void ComputeAttackPoints(s32 arg0, s32 arg1, u8 *arg2) {
    SV8 a;
    SV8 b;
    s32 p;
    u8 *t;

    p = AF(arg0, s32, 0x20);
    ((s16 *)&D_801270A8)[0] = 0;
    ((s16 *)&D_801270A8)[1] = -0x1E;
    ((s16 *)&D_801270A8)[2] = 0;
    if (arg1 == 0) {
        if (AF(p, s32, 0x20) != 0) {
            func_801484B0((s32)&a, (s32)&b);
            D_80126AF0[0].x = a.x;
            D_80126AF0[0].y = a.y;
            D_80126AF0[0].z = a.z;
            func_801484E8((s32)&a, (s32)&b);
            D_80126AF0[1].x = a.x;
            D_80126AF0[1].y = a.y;
            D_80126AF0[1].z = a.z;
        } else {
            D_80126AF0[0].x = 0;
            D_80126AF0[0].y = 0;
            D_80126AF0[0].z = 0;
            D_80126AF0[1].x = 0;
            D_80126AF0[1].y = 0;
            D_80126AF0[1].z = 0;
        }
    } else if (arg1 == 1) {
        if (AF(p, s32, 0x20) != 0) {
            func_80148534((s32)&a, (s32)&b);
            D_80126AF0[0].x = a.x;
            D_80126AF0[0].y = a.y;
            D_80126AF0[0].z = a.z;
            func_8014856C((s32)&a, (s32)&b);
            D_80126AF0[1].x = a.y;
            D_80126AF0[1].y = a.y;
            D_80126AF0[1].z = a.z;
        } else {
            D_80126AF0[0].x = 0;
            D_80126AF0[0].y = 0;
            D_80126AF0[0].z = 0;
            D_80126AF0[1].x = 0;
            D_80126AF0[1].y = 0;
            D_80126AF0[1].z = 0;
        }
    } else if (arg1 == 2) {
        D_80126AF0[0].x = 0;
        D_80126AF0[0].y = -0x1E;
        D_80126AF0[0].z = -0x52;
        RotateSVectorY((s16)(AF(arg0, u16, 0x24A) - AF(AF(arg0, s32, 0x20), u16, 0x12)), &D_80126AF0[0], &D_80126AF0[0]);
        D_80126AF0[1].x = 0;
        D_80126AF0[1].y = -0x1E;
        D_80126AF0[1].z = -0x52;
    } else {
        t = (u8 *)(arg1 & 0x80FFFFFF);
        D_80126AF0[0].x = (s8)t[*arg2 * 3 + 0];
        D_80126AF0[0].y = (s8)t[*arg2 * 3 + 1];
        D_80126AF0[0].z = (s8)t[*arg2 * 3 + 2];
        D_80126AF0[1].x = (s8)t[*arg2 * 3 + 3];
        D_80126AF0[1].y = (s8)t[*arg2 * 3 + 4];
        D_80126AF0[1].z = (s8)t[*arg2 * 3 + 5];
    }
    if (!(arg1 & 0x0F000000)) {
        *arg2 = *arg2 + 1;
    }
    AttackPointsToWorld(arg0, &D_801270A8, &D_80126AF0[0], &D_80126AF0[1], &D_80126AF0[2]);
}

extern void SplitAttackSegment();

void AttackPointsToWorld(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 t;

    SplitAttackSegment(arg2, arg3, arg4);
    BuildPlayerMatrixOnce(arg0);
    ObjLocalToWorld(arg0, arg1, arg1);
    t = AF(arg2, s16, 6);
    if (t == 0) {
        ObjLocalToWorld(arg0, arg2, arg2);
        AF(arg2, s16, 6) = t;
    }
    t = AF(arg3, s16, 6);
    if (t == 0) {
        ObjLocalToWorld(arg0, arg3, arg3);
        AF(arg3, s16, 6) = t;
    }
    t = AF(arg4, s16, 6);
    if (t == 0) {
        ObjLocalToWorld(arg0, arg4, arg4);
        AF(arg4, s16, 6) = t;
    }
}

void SplitAttackSegment(s16 *a, s16 *b, s16 *c) {
    SVECTOR d;

    d.vx = (b[0] - a[0]) / 3;
    d.vy = (b[1] - a[1]) / 3;
    d.vz = (b[2] - a[2]) / 3;
    a[3] = 0;
    if (SVecDist(a) > 0x40) {
        if (d.vx != 0 || d.vy != 0 || d.vz != 0) {
            c[0] = b[0] - d.vx;
            c[1] = b[1] - d.vy;
            c[2] = b[2] - d.vz;
            c[3] = 0;
        } else {
            c[3] = 1;
        }
        if (d.vx != 0 || d.vy != 0 || d.vz != 0) {
            b[0] = a[0] + d.vx;
            b[1] = a[1] + d.vy;
            b[2] = a[2] + d.vz;
            b[3] = 0;
        } else {
            b[3] = 1;
        }
    } else {
        c[3] = 1;
        b[3] = 1;
    }
}

extern s32 TraceAttackPathBody();

s32 TraceAttackPath(s32 arg0, s32 a1, s32 a2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 a10, s32 arg11, s32 arg12) {
    u16 arg1 = a1;
    u16 arg2 = a2;
    u16 arg10 = a10;
    return TraceAttackPathBody(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

extern s32 func_80135004();

s32 TraceAttackPathBody(u8 *arg0, s32 a1, s32 a2, s32 arg3, SVECTOR *arg4, SVECTOR *arg5, SVECTOR *arg6, u8 **arg7, SVECTOR *arg8, s32 arg9, s32 a10, u8 *arg11, u8 *arg12) {
    u16 arg1 = a1;
    u16 arg2 = a2;
    u16 arg10 = a10;
    s32 ret;
    u32 i;
    u8 *p;
    SVECTOR v;

    ret = 0;
    if (func_80135004(1, arg3, arg4) != 0) {
        *arg11 = (u16)arg4->pad >> 13;
        *arg12 = arg4->pad;
        ret = 2;
        *arg6 = g_GroundNormal;
    }
    for (i = 0; i < 0x60; i++) {
        p = &g_Actors + i * 0x10C;
        if (AF(p, u16, 0) == 0 || AF(p, s32, 0x58) == 0 || (AF(p, s32, 0x5C) & 0x8100) != 0x8000
            || AF(p, u16, 0x5E) == 0xA) {
            continue;
        }
        if (!(arg9 & 0x80) && AF(p, u16, 0x5E) == arg1) {
            continue;
        }
        if (arg1 == 0xD && !(AF(p, u16, 0x5C) & 0x2000)) {
            continue;
        }
        if (PathHitsModelTwoCells(AF(p, s32, 0x20), AF(p, s32, 0x58), arg3, arg4) == 0) {
            continue;
        }
        if ((AF(p, u16, 0x5C) & 0x4000) || (AF(p, s16, 0xAE) & arg10)) {
            *arg11 = SurfaceIndexOf(arg0, AF(p, u8, 0x75));
            *arg12 = 0;
            *arg6 = g_GroundNormal;
            ret |= 4;
            *arg7 = p;
        } else {
            v = *arg4;
            if (arg2 & 0x8000) {
                v.pad = 1;
            } else {
                v.pad = 0;
            }
            StrikeActor(p, arg1, arg2 & 0x7FFF, &v, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
            *arg5 = g_GroundNormal;
            *arg7 = p;
            *arg8 = *(SVECTOR *)&D_80126720;
            ret |= 1;
            if (arg9 & 0x7F) {
                break;
            }
        }
    }
    return ret;
}

void StartLuminaSlash(s32 arg0) {
    SetPlayerState(arg0, 6);
    LuminaSlashStart(arg0);
}

extern void RunLuminaSlashState();

void EnterLuminaSlash(s32 arg0) {
    SetPlayerState(arg0, 6);
    RunLuminaSlashState(arg0);
}

void RunLuminaSlashState(s32 arg0, s32 arg1) {
    D_8018F7F0[AF(arg0, u16, 2)]();
}

s32 LuminaSlashEnter(s32 arg0) {
    s32 temp_s1;

    temp_s1 = ProbePlatformByMove(arg0);
    if ((ProbeGroundByMove(arg0) == 0) && (temp_s1 == 0)) {
        StartPlayerFall(arg0);
        return;
    }
    LuminaSlashStart(arg0);
}

extern u8 D_800D4F14;

s32 LuminaSlashStart(s32 arg0) {
    StartFace(arg0, 0x15);
    AF(arg0, u8, 0x1AB) ^= 1;
    if (AF(arg0, u8, 0x1AB) != 0) {
        AF(arg0, u8, 0x1AA) = 0xA;
    } else {
        AF(arg0, u8, 0x1AA) = 0xB;
    }
    SetPlayerMotion(arg0, &D_800D4F14);
    PlaySe(0x455);
    SetObjTimer(arg0, 0);
    ResetAttackHit(arg0);
    SpawnEffectOn(5, arg0, 0, 0);
    SubGauge24(arg0, 0x333);
    PlaySeNow(0x5F3);
    D_8011F730 |= 4;
    NextObjState(arg0);
}

void LuminaSlashStep(u8 *arg0, s32 arg1) {
    s32 pad[4];
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        LeavePlayerKind((s32) arg0, arg1);
        EnterPlayerStanding((s32) arg0);
        return;
    }
    if (CheckPlayerGround((s32) arg0) == 0) {
        RunAttackHit((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
    }
}

void ExitLuminaSlashState(Player *arg0) {
    arg0->toggles[2] = 0;
    EndLuminaSlash();
}

void EndLuminaSlash(Player *arg0) {
    arg0->status = (s32) ((s32)arg0->status & ~2);
    StartFace((s32) arg0, 0x11);
    UpdateFlag10Part21((s32) arg0);
    ClearDisplayFlag20((s32) arg0);
}

void StartAirSlash(s32 arg0) {
    D_801ED510 = 0x12C;
    SetPlayerState(arg0, 7);
    AirSlashStart(arg0);
}

s32 EnterAirSlash(s32 arg0) {
    D_801ED510 = 0x12C;
    SetPlayerState(arg0, 7);
    RunAirSlashState(arg0);
}

void RunAirSlashState(s32 arg0, s32 arg1) {
    s32 temp_v0;

    D_8018F818[AF(arg0, u16, 2)]();
    temp_v0 = D_801ED510 - 1;
    D_801ED510 = temp_v0;
    if (temp_v0 == -1) {
        LeavePlayerKind(arg0);
        EnterPlayerStanding(arg0);
    }
}

void AirSlashEnter(s32 arg0, s32 arg1) {
    PushOutOfSolidActors(arg0, arg1);
    ProbePlatformFall(arg0);
    func_8014FA04(arg0);
    AirSlashStart(arg0);
}

extern u8 D_800D5128;
extern u8 D_8018F7F8;
extern s32 SetPlayerEvent02();

void AirSlashStart(s32 arg0, s32 arg1) {
    ResetAttackHit(arg0, arg1);
    AF(arg0, u8, 0x1AA) = 9;
    SetPlayerMotion(arg0, &D_800D5128);
    StartFace(arg0, 0x15);
    PlaySe(0xC20);
    SetObjPushV(arg0, &D_8018F7F8);
    SpawnEffectOn(4, arg0, 7, 0);
    SpawnEffectOn(5, arg0, 9, 0);
    NextObjState(arg0);
    SetPlayerEvent02(arg0);
}

extern u8 D_800D5178;
extern u8 D_8018F808;
extern s32 CheckLandingKeepState();
extern s32 SpawnLandingFx();
extern s32 SetPlayerEvent02();

void AirSlashStep(s32 arg0) {
    s32 temp_v0;
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original reserves 16 unused bytes (frame 0x30) */

    AF(arg0, s32, 0x44) |= 2;
    AddPushZ(arg0, 0x400);
    if (AF(arg0, s32, 0x2C) >= 0) {
        AF(arg0, s32, 0x2C) = 0;
    }
    SetVelFromPushKeepAxes(arg0);
    MoveObjByVel(arg0);
    AddFallSpeedLimited(arg0, 0x1A000);
    ApplyFallSpeed(arg0);
    if (PushOutOfSolidActors(arg0) != 0) {
        ClearObjPush(arg0);
    }
    temp_v0 = CheckLandingKeepState(arg0);
    if (temp_v0 & 5) {
        SpawnLandingFx(arg0);
        SetObjTimer(arg0, 8);
        NextObjState(arg0);
    }
    if (temp_v0 == 0) {
        RunAttackHit(arg0, AF(arg0, u8, 0x1AA));
        if (AF(arg0, u8, 0x1C0) != 0) {
            StartFace(arg0, 0x17);
            SetPlayerMotion(arg0, &D_800D5178);
            SetObjPushV(arg0, &D_8018F808);
            SetFallSpeed(arg0, -0xC0000);
            AF(arg0, s16, 2) = 4;
        }
        SetPlayerEvent02(arg0);
    }
}

s32 SpawnLandingFx(s32 arg0) {
    PlayLandSe(arg0, (s32) AF(arg0, u16, 0x16E));
    return SpawnEffect2(arg0, 1);
}

extern u8 D_800D51AC;
extern void FreeEffectsOfKind();
s32 SetPlayerEvent02(s32 arg0);

void AirSlashSkidStep(u8 *arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    AddPushFacing((s32) arg0, 0, 0, 0x10000);
    MoveObjByVel((s32) arg0);
    if (CheckPlayerGround((s32) arg0) == 0) {
        if (AF(arg0, s32, 0x2C) > 0) {
            FreeEffectsOfKind(4);
            FreeEffectsOfKind(5);
            SetPlayerMotion((s32) arg0, (s32) &D_800D51AC);
            NextObjState((s32) arg0);
            return;
        }
        RunAttackHit((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
        SetPlayerEvent02((s32) arg0);
    }
}

void AirSlashEndStep(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        LeavePlayerKind((s32) arg0, arg1);
        EnterPlayerStanding((s32) arg0);
        return;
    }
    CheckPlayerGround((s32) arg0);
}

extern s32 CheckLandingKeepKindNoBump();
extern s32 EnterPlayerFall();

void AirSlashReboundStep(s32 arg0) {
    s32 temp_v0;

    AddPushFacing(arg0, 0, 0, 0x10000);
    MoveObjByVel(arg0);
    AddFallSpeedLimited(arg0, 0x1A000);
    ApplyFallSpeed(arg0);
    if (PushOutOfSolidActors(arg0) != 0) {
        ClearObjPush(arg0);
    }
    temp_v0 = CheckLandingKeepKindNoBump(arg0);
    if (temp_v0 & 5) {
        PlayLandSe(arg0, AF(arg0, u16, 0x16E));
        SpawnEffect2(arg0, 1);
        FreeEffectsOfKind(4);
        FreeEffectsOfKind(5);
        LeavePlayerKind(arg0);
        EnterPlayerStanding(arg0);
    }
    if (temp_v0 == 0) {
        if (AF(arg0, s32, 0x34) > 0) {
            LeavePlayerKind(arg0);
            ClearObjPush(arg0);
            EnterPlayerFall(arg0);
            return;
        }
        SetPlayerEvent02(arg0);
    }
}

void EndAirSlash(Player *arg0) {
    arg0->unk223 = 0x10;
    arg0->status = (s32) ((s32)arg0->status & ~2);
    StartFace((s32) arg0, 0x11);
    UpdateFlag10Part21((s32) arg0);
    ClearDisplayFlag20((s32) arg0);
}

extern u16 D_8018F848[];
extern s32 RunSwordSkillState();

s32 StartSwordSkill(s32 arg0, s32 arg1) {
    ResetAttackHit(arg0, arg1);
    SetPlayerState(arg0, D_8018F848[arg1]);
    return RunSwordSkillState(arg0);
}

extern s32 RunSkillAState();
extern s32 RunSkillBState();

s32 RunSwordSkillState(s32 arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, s32, 0);
    switch (temp_v1) {                              /* irregular */
    case 36:
        return RunSkillAState();
    case 37:
        return RunSkillBState();
    default:
        return 0x25;
    }
}

extern void (*D_8018F858[])();

s32 RunSkillAState(s32 arg0) {
    D_8018F858[AF(arg0, u16, 2)](arg0);
}

void SkillAWait(s32 arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        SkillAStart(arg0);
    }
}

extern u8 D_800D4F14;

void SkillAStart(s32 arg0) {
    AF(arg0, u8, 0x1AA) = 0xD;
    SetPlayerMotion(arg0, (s32) &D_800D4F14);
    StartFace(arg0, 0x15);
    SpawnEffectOn(5, arg0, 0, 0);
    PlaySe(0x455);
    AF(arg0, s16, 0x244) = 0;
    NextObjState(arg0);
}

void SkillAStep(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        LeavePlayerKind((s32) arg0, arg1);
        EnterPlayerStanding((s32) arg0);
        return;
    }
    if (CheckSkillAFollowUp((s32) arg0) == 0) {
        RunAttackHit((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
        temp_v0 = GetAttackHitPoint((s32) arg0);
        if ((temp_v0 != 0) && (AF(arg0, s16, 0x244) == 0)) {
            AF(arg0, s16, 0x244) = 1;
            SpawnEffect(0x54, (s32) arg0, (s32) AF(temp_v0, s16, 0), (s32) AF(temp_v0, s16, 2), /* extra? */ (s32) AF(temp_v0, s16, 4), /* extra? */ 0, /* extra? */ 0);
        }
    }
}

s32 CheckSkillAFollowUp(s32 arg0) {
    if (GetFlag(0x87) & 0xFF) {
        if (GetObjPadPressed(arg0) & 0x80) {
            TriggerSwordSkill(arg0, 5);
            return 1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

extern void (*D_8018F860[])();

s32 RunSkillBState(s32 arg0) {
    D_8018F860[AF(arg0, u16, 2)](arg0);
}

void SkillBWait(s32 arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        SkillBStart(arg0);
    }
}

extern u8 D_800D51E0;
extern u8 D_8018F82C;

void SkillBStart(s32 arg0) {
    AF(arg0, u8, 0x1AA) = 0xE;
    SetPlayerMotion(arg0, (s32) &D_800D51E0);
    StartFace(arg0, 0x15);
    SetObjPushV(arg0, (s32) &D_8018F82C);
    AF(arg0, s32, 0x234) = 0;
    SpawnEffectOn(5, arg0, 0xC, 0);
    PlaySe(0x455);
    NextObjState(arg0);
}

extern u8 D_800D524C;
extern s32 CheckLanding();

void SkillBLeapStep(u8 *arg0) {
    u8 unused[16]; /* MATCH-TRICK: frame pad */

    AF(arg0, s32, 0x44) |= 2;
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        SetFallSpeed(arg0, -0xC0000);
        AF(arg0, s32, 0x234)++;
    }
    if (AF(arg0, s32, 0x234) != 0) {
        AddFallSpeedLimited(arg0, 0x10000);
        ApplyFallSpeed(arg0);
    }
    AddPushFacing(arg0, 0, 0, 0);
    MoveObjByVel(arg0);
    if (CheckLanding(arg0) == 0) {
        if (AF(arg0, u16, 0xB8) == 0x8000) {
            ResetAttackHit(arg0);
            AF(arg0, u8, 0x1AA) = 0xF;
            SetPlayerMotion(arg0, &D_800D524C);
            PlaySe(0x455);
            NextObjState(arg0);
            return;
        }
        RunAttackHit(arg0, AF(arg0, u8, 0x1AA));
    }
}

extern s32 CheckLanding();

void SkillBFinishStep(u8 *arg0) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original reserves 0x10 unused bytes (frame 0x28) */
    AF(arg0, s32, 0x44) |= 2;
    AddFallSpeedLimited(arg0, 0x10000);
    ApplyFallSpeed(arg0);
    AddPushFacing(arg0, 0, 0, 0);
    MoveObjByVel(arg0);
    if (CheckLanding(arg0) == 0) {
        if (AF(arg0, u16, 0xB8) == 0x8000) {
            LeavePlayerKind(arg0);
            EnterPlayerStanding(arg0);
        } else {
            RunAttackHit(arg0, AF(arg0, u8, 0x1AA));
        }
    }
}

void RunSkillCState(u8 *arg0) {
    D_8018F86C[AF(arg0, u16, 2)]();
}

void SkillCWait(s32 arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        SkillCStart(arg0);
    }
}

extern u8 D_800D52A8;
extern void ClearSkillInput();

void SkillCStart(s32 arg0) {
    AF(arg0, u8, 0x1AA) = 0x10;
    AF(arg0, s32, 0x44) |= 2;
    SetPlayerMotion(arg0, &D_800D52A8);
    StartFace(arg0, 0x15);
    ClearSkillInput(arg0);
    FreeEffectsOfKind(5);
    SpawnEffectOn(4, arg0, 8, 0);
    PlaySe(0x446);
    NextObjState(arg0);
}

extern u8 D_800D52E8;
extern s32 LatchSkillInput();

void SkillCStep(u8 *arg0) {
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame is 0x28 with nothing stored */
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (CheckPlayerGround((s32) arg0) == 0) {
        if (LatchSkillInput((s32) arg0) != 0) {
            ResetAttackHit((s32) arg0);
            AF(arg0, u8, 0x1AA) = 0x11U;
            SetPlayerMotion((s32) arg0, (s32) &D_800D52E8);
            AF(arg0, s32, 0x234) = 0;
            PlaySe(0x455);
            SpawnEffectOn(4, (s32) arg0, 9, 0);
            SpawnEffectOn(5, (s32) arg0, 0xD, 0);
            SetObjTimer((s32) arg0, 0x12C);
            NextObjState((s32) arg0);
        }
        if (AF(arg0, u16, 0xB8) & 0x8000) {
            LeavePlayerKind((s32) arg0);
            EnterPlayerStanding((s32) arg0);
            return;
        }
        RunAttackHit((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
    }
}

extern u8 D_800D533C;
extern u8 D_8018F83C;
extern s32 RunPlayerAirSteps();

void SkillCLeapStep(u8 *arg0) {
    u8 unused[0x10]; /* MATCH-TRICK: frame pad, the original frame is 0x28 with only s0/ra saved */
    s32 v;
    s32 t;

    AF(arg0, s32, 0x44) |= 2;
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        AF(arg0, s32, 0x234)++;
        LeavePlatform();
        ResetTiltVectors(arg0);
        SetFallSpeed(arg0, -0x60000);
        SetObjPushV(arg0, &D_8018F83C);
    }
    if (AF(arg0, s32, 0x234) != 0) {
        AddFallSpeedLimited(arg0, 0x10000);
        ApplyFallSpeed(arg0);
        AddPushFacing(arg0, 0, 0, 0);
        MoveObjByVel(arg0);
    }
    v = RunPlayerAirSteps(arg0, 0);
    if (v != 0) {
        if (v == 1) goto block;
        t = v & 0x2000;
    } else {
        t = TickObjTimer(arg0);
    }
    if (t != 0) {
block:
        SetPlayerMotion(arg0, &D_800D533C);
        NextObjState(arg0);
        return;
    }
    RunAttackHit(arg0, AF(arg0, u8, 0x1AA));
}

void SkillCEndStep(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        LeavePlayerKind((s32) arg0, arg1);
        EnterPlayerStanding((s32) arg0);
        return;
    }
    CheckPlayerGround((s32) arg0);
}

void ClearSkillInput(s32 arg0, s32 arg1) {
    AF(arg0, s16, 0x244) = 0;
}

s32 LatchSkillInput(s32 arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x244) | GetObjPadPressed(arg0);
    AF(arg0, u16, 0x244) = temp_v1;
    {
        s32 bt = temp_v1 & 0x10;

        return bt != 0;
    }
}

void EndSwordSkill(Player *arg0) {
    arg0->status = (s32) ((s32)arg0->status & ~2);
    StartFace((s32) arg0, 0x11);
    UpdateFlag10Part21((s32) arg0);
    ClearDisplayFlag20((s32) arg0);
}

extern s32 GetGameOverRule();
extern s32 FillHp();
extern void StartPlayerDeath();

void CheckPlayerDeath(u8 *arg0) {
    s32 t;
    u16 k;

    if (D_800B9A64 == 0 && !(AF(arg0, s32, 0x44) & 0x10)) {
        k = AF(arg0, u16, 0);
        if (k != 0x1A && k != 0x1E) {
            t = AF(arg0, s32, 0x1F8);
            if ((t == 0 || (t & 0x08000000)) && D_80078EB4 == 0) {
                if (((s16)GetGameOverRule(arg0) <= 0 || (s16)GetGameOverRule(arg0) >= 6) && GetFatalHit() == 0 && func_800D0F8C(0xA) != 0) {
                    LeavePlayerKind(arg0);
                    EndPlayerActionOf(arg0);
                    EnterPlayerStanding(arg0);
                    func_80165718(arg0);
                    func_800D0F4C(0xA);
                    FillHp();
                    FillBp();
                    CurePlayerPoison();
                    AF(arg0, s32, 0x198) = OpenMessage(&D_80110EC0);
                    D_800B9A17 = 1;
                    return;
                }
                LeavePlayerKind(arg0);
                EndPlayerActionOf(arg0);
                StartPlayerDeath(arg0);
            }
        }
    }
}

void DeathNop(void) {
}

void StartPlayerDeathNoReset(u8 *arg0) {
    D_801ED518 = 0;
    D_801ED524 = 1;
    D_801ED528 = 0;
    AF(arg0, u8, 0xA8) = 0;
    ShowPlayerScene((s32) arg0);
    func_80147098((s32) arg0);
    func_801470AC((s32) arg0);
    SetPlayerState((s32) arg0, 0x1A);
    SetObjState((s32) arg0, 1);
    RunPlayerDeath((s32) arg0);
}

void StartPlayerDeath(s32 arg0) {
    D_801ED518 = 0;
    D_801ED524 = 1;
    D_801ED528 = 0;
    AF(arg0, u8, 0xA8) = 0;
    ShowPlayerScene(arg0);
    func_80147098(arg0);
    func_801470AC(arg0);
    SetPlayerState(arg0, 0x1A);
    RunPlayerDeath(arg0);
}

void RunPlayerDeath(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    D_8018F8A8[AF(arg0, u8, 0x4F)](arg0);
}

extern void (*D_8018F8AC[])();
extern s32 D_801ED51C;
extern s32 IsSoundLoading();

void RunDeathState(u8 *arg0) {
    D_8018F8AC[AF(arg0, u16, 2)](arg0);
    switch (D_801ED518) {
    case 0:
        break;
    case 1:
        func_800D0CA0(2);
        D_801ED520 = 0;
        D_801ED51C = 0x46;
        D_801ED518++;
        break;
    case 2:
        if (D_801ED51C == 0) {
            if (IsSoundLoading() == 0) {
                D_801ED518++;
            }
        } else {
            D_801ED51C--;
        }
        break;
    case 3:
        if (RequestBgmPack(0x83) != 0) {
            D_801ED518++;
        }
        break;
    case 4:
        D_801ED524 = 0;
        if ((s16)GetGameOverRule(arg0) != 0) {
            D_801ED51C = 0xD2;
        } else {
            D_801ED51C = 1;
        }
        break;
    case 5:
        D_801ED51C--;
        if (D_801ED51C == -1 || D_801ED528 != 0) {
            D_801ED51C = 0;
            D_801ED518++;
        }
        break;
    case 6:
        func_800D0CA0(1);
        D_801ED51C = 0x28;
        D_801ED518++;
        break;
    case 7:
        if (D_801ED51C == 0) {
            if (IsSoundLoading() == 0) {
                D_801ED518++;
            }
        } else {
            D_801ED51C--;
        }
        break;
    case 8:
        D_801ED520 = 1;
        break;
    }
}

void DeathResetStep(s32 arg0) {
    ResetPlayerForDeath();
    NextObjState(arg0);
}

extern void RestoreStatusOnce();
extern void ClearAbilityUsed();
extern void ClearVarCF();

void ResetPlayerForDeath(u8 *arg0) {
    D_800AE6B0 = D_800AE6AC | 0x1000000;
    ClearPlayerActionFlag01(arg0);
    RestoreStatusOnce(arg0);
    ClearAbilityUsed(arg0);
    EndHeldAbility(arg0);
    StopAbility(arg0);
    ClearVarCF();
    LeavePlatform(arg0);
    CureStatus(arg0);
    ClearPlayerHittable(arg0);
    AF(arg0, s16, 0x12E) = 0;
    AF(arg0, s16, 0x74) = 0x1000;
    AF(arg0, s16, 0x72) = 0x1000;
    AF(arg0, s16, 0x70) = 0x1000;
    AF(arg0, s16, 0x6C) = 0x1000;
    AF(arg0, s16, 0x6A) = 0x1000;
    AF(arg0, s16, 0x68) = 0x1000;
    AF(arg0, s16, 0x64) = 0x1000;
    AF(arg0, s16, 0x62) = 0x1000;
    AF(arg0, s16, 0x60) = 0x1000;
    AF(arg0, s16, 0x1BA) = 0x1000;
    AF(arg0, s16, 0x1B8) = 0x1000;
    AF(arg0, s16, 0xF6) = 0x1000;
    D_80078EC8 = 0;
    AF(arg0, s16, 0x1C8) = 0;
    NextObjState(arg0);
}

extern u8 D_800D58D8;

void DeathStart(s32 arg0) {
    if (D_801ED518 == 0) {
        D_801ED518 = 1;
    }
    PlaySe(0x456);
    SetPlayerMotion(arg0, &D_800D58D8);
    StartFace(arg0, 0x16);
    AF(arg0, s32, 0x234) = 0xE30000;
    AF(AF(arg0, s32, 0x20), s16, 0x10) = 0;
    ResetTiltVectors(arg0);
    ClearAngleOverride(arg0);
    SetPlayerFlag7E2(arg0);
    NextObjState(arg0);
}

extern s32 SpinPlayerModel();

void DeathSpinStep(s32 arg0) {
    s32 step = 0x3C000;
    s32 i;

    i = 1;
    if (GetObjPadHeld(arg0) & 0xF0) {
        i = 4;
    }
    for (; i > 0; i--) {
        SpinPlayerModel(arg0, step);
        if (AF(arg0, s32, 0x234) < 0) {
            SetObjTimer(arg0, 4);
            NextObjState(arg0);
            i = 0;
        }
    }
}

void DeathPauseStep(s32 arg0) {
    s32 i;

    i = 1;
    if (GetObjPadHeld(arg0) & 0xF0) {
        i = 4;
    }
    for (; i > 0; i--) {
        if (TickObjTimer(arg0)) {
            PlaySe(0x453);
            AF(arg0, s32, 0x238) = 0x5B0000;
            NextObjState(arg0);
            i = 0;
        }
    }
}

extern s32 TipPlayerModel();

void DeathToppleStep(s32 arg0) {
    s32 step = 0x4C000;
    s32 i;

    i = 1;
    if (GetObjPadHeld(arg0) & 0xF0) {
        i = 4;
    }
    for (; i > 0; i--) {
        TipPlayerModel(arg0, step);
        if (AF(AF(arg0, s32, 0x20), s16, 0x10) < 0xC00) {
            PlaySe(0x454);
            AF(AF(arg0, s32, 0x20), s16, 0x10) = 0xC00;
            AF(arg0, s32, 0x238) = 0xFFEA0000;
            NextObjState(arg0);
            i = 0;
        }
    }
}

extern u8 D_800D5904;
extern s32 TipPlayerModel();

void DeathFallStep(s32 arg0) {
    s32 i;
    s32 spd;

    spd = 0x4C000;
    i = 1;
    if (GetObjPadHeld(arg0) & 0xF0) {
        i = 4;
    }
    for (; i > 0; i--) {
        TipPlayerModel(arg0, spd);
        if (AF(AF(arg0, u8 *, 0x20), s16, 0x10) < 0xC00) {
            AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0xC00;
            SetPlayerMotion(arg0, &D_800D5904);
            StartFace(arg0, 0x20);
            PlaySoundId(0x2A, 0);
            PlaySoundId(0x1C, 0);
            NextObjState(arg0);
            i = 0;
        }
    }
}

extern s32 D_8018F87C[];

void DeathQuoteStep(u8 *arg0) {
    u8 *p;
    s32 t;

    p = AF(arg0, u8 *, 0x20);
    t = D_801ED524;
    AF(p, u16, 0x12) = (AF(p, u16, 0x12) + 0x16) & 0xFFF;
    if (t == 0) {
        AF(arg0, s32, 0x198) = OpenMessage(D_8018F87C[rand() % 11]);
        NextObjState(arg0);
    }
}

extern s32 GetGameOverRule();
void ApplyGameOverRule(s32 a, s32 n);

void DeathQuoteWaitStep(u8 *arg0) {
    s16 temp_v0_2;
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x12) = (u16) ((AF(temp_v0, u16, 0x12) + 0x16) & 0xFFF);
    if (GetObjPadPressed((s32) arg0) & 0xF0) {
        D_801ED528 = 1;
    }
    if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        temp_v0_2 = GetGameOverRule((s32) arg0);
        if (temp_v0_2 != 0) {
            ApplyGameOverRule((s32) arg0, (s32) temp_v0_2);
            SetObjState((s32) arg0, 0xC);
            return;
        }
        AF(arg0, s32, 0x198) = OpenMessage((s32) &D_80110C3C);
        NextObjState((s32) arg0);
    }
}

extern u8 D_80110C94;
extern u8 D_80110CD4;

void ContinueChoiceStep(u8 *arg0) {
    s16 r;
    u8 *p;
    void *temp_v0;

    temp_v0 = AF(arg0, void *, 0x20);
    AF(temp_v0, u16, 0x12) = (AF(temp_v0, u16, 0x12) + 0x16) & 0xFFF;
    r = GetMessageAnswer(AF(arg0, s32, 0x198));
    AF(arg0, s16, 0x244) = r;
    if (r != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        switch (AF(arg0, s16, 0x244)) {
        case 1:
        default:
            p = &D_80110C94;
            break;
        case 2:
            p = &D_80110CD4;
            break;
        }
        AF(arg0, s32, 0x198) = OpenMessage(p);
        NextObjState(arg0);
    }
}

void ContinueConfirmStep(u8 *a) {
    s32 r;
    s32 t;

    GetProgress();
    AF(AF(a, u8 *, 0x20), u16, 0x12) = (AF(AF(a, u8 *, 0x20), u16, 0x12) + 0x16) & 0xFFF;
    r = GetMessageAnswer(AF(a, s32, 0x198));
    if (r != 0) {
        CloseMessage(AF(a, s32, 0x198));
        AF(a, s32, 0x198) = 0;
        switch (r) {
        case 1:
        default:
            switch (AF(a, s16, 0x244)) {
            case 1:
            default:
                if (IsStateSlotUsed(1) != 0) {
                    func_80175454();
                    func_801458E0();
                    t = g_Money;
                    LoadContinuePoint(&D_80078E50);
                    func_801458E8();
                    g_Money = t / 2;
                    goto tail;
                } else {
                    AF(a, s32, 0x198) = OpenMessage(&D_80110D0C);
                    SetObjState((s32)a, 0xB);
                }
                break;
            case 2:
                if (IsStateSlotUsed(0) == 0) {
                    AF(a, s32, 0x198) = OpenMessage(&D_80110D0C);
                    SetObjState((s32)a, 0xB);
                } else {
                    func_80175454();
                    LoadStateSlot(0);
                    func_80145A2C();
                tail:
                    SetObjState((s32)a, 0xC);
                    func_800CF804();
                    func_800CF818();
                }
                break;
            }
            break;
        case 2:
            AF(a, s32, 0x198) = OpenMessage(&D_80110C3C);
            SetObjState((s32)a, 9);
            break;
        }
    }
}

void ContinueRetryStep(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) ((AF(temp_v1, u16, 0x12) + 0x16) & 0xFFF);
    if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = OpenMessage((s32) &D_80110C3C);
        SetObjState((s32) arg0, 9);
    }
}

void DeathExitStep(s32 arg0) {
    void *temp_v1;

    if (D_801ED518 == 4) {
        D_801ED518 = 5;
    }
    if (D_801ED520 != 0) {
        func_80145BF8();
        NextObjState(arg0);
        D_800AE6BD += 1;
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) ((AF(temp_v1, u16, 0x12) + 0x16) & 0xFFF);
}

void DeathIdleStep(u8 *arg0) {
    void *temp_v1;

    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, u16, 0x12) = (u16) ((AF(temp_v1, u16, 0x12) + 0x16) & 0xFFF);
}

s32 SpinPlayerModel(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_a2;

    temp_a2 = AF(arg0, void *, 0x20);
    AF(temp_a2, u16, 0x12) = (u16) ((AF(temp_a2, u16, 0x12) + AF(arg0, u16, 0x236)) & 0xFFF);
    temp_v0 = AF(arg0, s32, 0x234) - arg1;
    AF(arg0, s32, 0x234) = temp_v0;
    return temp_v0;
}

s32 TipPlayerModel(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_a2;

    temp_a2 = AF(arg0, void *, 0x20);
    AF(temp_a2, u16, 0x10) = (u16) ((AF(temp_a2, u16, 0x10) - AF(arg0, u16, 0x23A)) & 0xFFF);
    temp_v0 = AF(arg0, s32, 0x238) + arg1;
    AF(arg0, s32, 0x238) = temp_v0;
    return temp_v0;
}

extern s16 D_8018F8E4[];

s32 GetGameOverRule(void) {
    s16 *p = D_8018F8E4;

    for (; *p != 0; p += 2) {
        if (D_800B9A08 == (s16)(u16)*p) {
            return p[1];
        }
    }
    if (IsStateSlotUsed(1) == 0 && IsStateSlotUsed(0) == 0) {
        return -1;
    }
    return 0;
}

void ApplyGameOverRule(s32 a, s32 n) {
    u8 *c;
    u8 f[3];
    u8 g[2];
    s32 t;

    func_80175454();
    c = &g_Status;
    switch (n) {
    case -1:
        f[0] = GetFlag(0xB);
        f[1] = GetFlag(0xC);
        f[2] = GetFlag(0xD);
        g[0] = GetVar(0x2C);
        g[1] = GetVar(0x2D);
        t = AF(c, s32, 4);
        LoadDefaultStatus();
        ClearFlags();
        ClearVars();
        ClearVarBlock60();
        ClearItemValue0();
        SetFlag(0xB, f[0]);
        SetFlag(0xC, f[1]);
        SetFlag(0xD, f[2]);
        SetVar(0x2C, g[0]);
        SetVar(0x2D, g[1]);
        AF(c, s32, 4) = t;
        SetFlag80(a);
        func_8002AB64();
        SetProgress(2);
        func_800D185C(&D_800D3A44);
        func_800CF804();
        break;
    case 1:
        AF(c, s16, 0x40) = AF(c, s16, 0x3C) = 0x96;
        AF(c, s32, 0x14) = D_80128150;
        break;
    case 2:
    case 3:
    case 4:
        func_800D1F90();
        break;
    case 5:
        func_800D1F90();
        func_800D185C(&D_800D39FC);
        SetProgress(0x636);
        break;
    case 6:
        func_800D1F90();
        func_800D185C(&D_800D3A20);
        SetProgress(0x636);
        break;
    }
}

void RunSceneTaskStep(u8 *arg0) {
    D_8018FAF8[AF(arg0, u8, 0x15)]();
}

s32 SceneTaskStartTimer(u8 *arg0) {
    AF(arg0, s32, 0x28) = 0x10;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

extern s16 D_800B9AAC;
extern s16 D_800B9B00;
extern u8 D_8018F918;
extern void StartSeqPlayer();
extern void FreezeClockTint();
extern void InitCameraShake();
extern void SetAmbientColor();
extern void ApplyLight();
extern s32 func_80174B6C();

s32 SceneTaskHideAll(u8 *arg0) {
    u8 *w = (u8 *)&D_800AF630;
    u8 *p;
    u8 *q;

    if (--AF(arg0, s32, 0x28) == -1) {
        func_80174B6C();
        D_800B9AAC = 0x7FFF;
        D_800B9B00 = 0x7FFF;
        for (p = w + 0x65A8; p < w + 0x9DA8; p += 0x38) {
            AF(p, u32, 4) |= 0x80000000;
        }
        for (q = w + 0x2A8; q < w + 0x65A8; q += 0x84) {
            if (q < &D_800AFAE8 || q >= &D_800AFAE8 + 0x84) {
                AF(q, u32, 4) |= 0x80000000;
            }
        }
        D_801270C0 = 3;
        SetPropsActive(0);
        StartSeqPlayer();
        FreezeClockTint();
        InitCameraShake();
        SetAmbientColor(0x800, 0x800, 0x800);
        ApplyLight(0, &D_8018F918);
        ApplyLight(1, &D_8018F918 + 0x10);
        ApplyLight(2, &D_8018F918 + 0x20);
        AF(arg0, s32, 0x28) = 0xFF;
        AF(arg0, u8, 0x15)++;
    }
    return 0;
}

s32 SceneTaskIdle(void) {
    return 0;
}

s32 SceneTaskStartFade(u8 *arg0, s32 arg1) {
    StartFade(4, arg1);
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 SceneTaskFadeStep(void) {
    return (FadeStep(4) & 0xFFFF) != 0;
}

extern void RunPlayerUpdatePhase();

void UpdatePlayerNoVertical(Player *arg0) {
    switch (arg0->unkA9) {
    case 0x41:
        arg0->padHeld &= 0xAFFF;
        arg0->padPressed &= 0xAFFF;
        break;
    case 0x53:
    case 0x73:
        AF(arg0, u16, 0xAE) = arg0->unkAE[0] | 0x8000;
        break;
    }
    RunPlayerUpdatePhase(arg0);
}

extern void (*D_8018FB9C[])();

void RunPlayerUpdatePhase(Player *arg0) {
    D_8018FB9C[arg0->updatePhase]();
}

void LeavePlayerKind(arg0)
    u8 *arg0;
{
    D_8018FBA8[AF(arg0, u16, 0)]();
}

void PlayerUpdateFirstPhase(u8 *arg0) {
    UpdatePlayerState();
    AF(arg0, u8, 0x4D) = (u8) (AF(arg0, u8, 0x4D) + 1);
}

void PlayerUpdateNop(void) {
}

extern void ProcessPlayerHit();
extern void (*D_8018FC4C[])();

void UpdatePlayerState(u8 *arg0) {
    RunSurfaceHandler(arg0);
    CheckPlayerDeath(arg0);
    ProcessPlayerHit(arg0);
    SetPlayerHittable(arg0);
    D_8018FC4C[AF(arg0, u16, 0) & 0x7FFF](arg0);
    AF(arg0, s32, 0x44) |= 0x08000000;
    switch (AF(arg0, u16, 0)) {
    case 2:
    case 3:
    case 11:
    case 12:
        AF(arg0, s32, 0x44) &= ~0x08000000;
        break;
    case 25:
        switch (AF(arg0, u8, 0xDD)) {
        case 1:
            if (AF(arg0, u16, 2) == 3) {
                AF(arg0, s32, 0x44) &= ~0x08000000;
            }
            break;
        case 4:
            AF(arg0, s32, 0x44) &= ~0x08000000;
            break;
        }
        break;
    }
}

void StartPlayerStand(Player *arg0) {
    SetPlayerState(arg0, 0);
    StandStart(arg0);
}

s32 EnterPlayerStanding(s32 arg0) {
    SetPlayerState(arg0, 0);
    RunPlayerStateHandler(arg0);
}

void RunPlayerStateHandler(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    D_8018FCF0[AF(arg0, u16, 2)]();
}

void StandWait(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        StandStart(arg0);
    }
}

extern u8 D_8018FB0C;
extern s32 SetPlayerEvent01();

void StandStart(Player *arg0) {
    SetObjPushV(arg0, &D_8018FB0C);
    if ((s32)arg0->status & 0x200) {
        SetPlayerMotionIndex(arg0, 5);
        StartFace(arg0, 0x1C);
    } else {
        SetPlayerMotionIndex(arg0, 4);
        StartFace(arg0, 0x11);
    }
    arg0->abilPos[0] = 0;
    arg0->abilPos[1] = 0;
    UpdateFlag10Part21(arg0);
    ClearDisplayFlag20(arg0);
    SetPlayerEvent01(arg0);
    NextObjState(arg0);
}

extern s32 CheckUseAbility();
extern s32 GetActiveTechnique();
extern s32 func_800CCCC0();
extern u8 D_800D5F44;
extern u8 D_800D5F34;
extern u8 D_800D5F14;
extern u8 D_800D5F04;
extern u8 D_800D49F4;

void PlayerStandStep(Player *arg0) {
    u8 *s;

    if (TryTalk(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        AfterTalkNop(arg0);
        return;
    }
    ToggleSleepMode(arg0);
    if (CheckAssimilatePending(arg0) != 0) {
        return;
    }
    if (CheckAsleepFlag(arg0) != 0) {
        return;
    }
    if (CheckUseAbility(arg0) != 0) {
        return;
    }
    if (CanJump(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        TriggerJump(arg0);
        return;
    }
    switch (GetActiveTechnique(arg0)) {
    case 0:
    case 1:
    case 2:
    case 6:
        if (CanSwingFusion(arg0) != 0) {
            D_8018FBA8[arg0->state](arg0);
            TriggerFusionCombo(arg0);
            return;
        }
        if (CanSwingLumina(arg0) != 0) {
            D_8018FBA8[arg0->state](arg0);
            if (IsGrabbableNear(arg0) != 0) {
                TriggerGrab(arg0);
            } else {
                TriggerLuminaSlash(arg0);
            }
            return;
        }
        break;
    case 3:
        Technique3Attack(arg0);
        break;
    case 4:
        Technique4HoldAttack(arg0);
        break;
    case 5:
        if (CanSwingSword(arg0) != 0) {
            D_8018FBA8[arg0->state](arg0);
            func_800CCCC0(arg0);
            return;
        }
        break;
    }
    if (CanGuard(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        SwitchToGuard(arg0);
        return;
    }
    if (ObjDirHeld(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        EnterPlayerRunning(arg0);
        return;
    }
    if (!((s32)arg0->status & 0x200) && arg0->faceTimer == 0x8000) {
        if (arg0->abilPos[0] >= 3) {
            s = &D_800D5F44;
            if ((s32)arg0->faceScript == (s32)s) {
                StartFaceScript(arg0, &D_800D5F34);
            } else if ((rand() & 0xF) == 0) {
                StartFaceScript(arg0, s);
            }
        } else {
            s = &D_800D5F14;
            if ((s32)arg0->faceScript == (s32)s) {
                StartFaceScript(arg0, &D_800D5F04);
            } else if ((rand() & 0xF) == 0) {
                StartFaceScript(arg0, s);
            }
        }
    }
    if (arg0->animStatus & 0x8000) {
        if (!((s32)arg0->status & 0x200)) {
            if (GetPlayerAction() != 0) {
                arg0->abilPos[0] = 0;
                arg0->abilPos[1] = 0;
            }
            switch (arg0->abilPos[0]) {
            case 0:
                if (arg0->abilPos[1]++ >= 4) {
                    arg0->abilPos[1] = 0;
                    arg0->abilPos[0]++;
                    SetPlayerMotionIndex(arg0, 1);
                } else {
                    SetObjPushV(arg0, &D_8018FB0C);
                    RestartPlayerMotionIndex(arg0, 0);
                }
                break;
            case 1:
                arg0->abilPos[1] = 0;
                arg0->abilPos[0]++;
                SetPlayerMotionIndex(arg0, 0);
                break;
            case 2:
                if (arg0->abilPos[1]++ >= 2) {
                    if ((s32)arg0->status & 4) {
                        arg0->abilPos[0] = 0;
                        arg0->abilPos[1] = 0;
                        SetPlayerMotionIndex(arg0, 0);
                    } else {
                        arg0->abilPos[1] = 0;
                        arg0->abilPos[0]++;
                        SetPlayerMotionIndex(arg0, 2);
                    }
                } else {
                    RestartPlayerMotionIndex(arg0, 0);
                }
                break;
            case 3:
                PlaySe(0x445);
                arg0->abilPos[0]++;
                ClearDisplayFlag10(arg0);
                SetPlayerMotionIndex(arg0, 3);
                StartFace(arg0, 0x13);
                break;
            case 4:
                break;
            }
        } else {
            SetObjPushV(arg0, &D_8018FB0C);
            SetPlayerMotionIndex(arg0, 5);
            StartFace(arg0, 0x1C);
        }
    }
    if (arg0->anim == (s32)&D_800D49F4) {
        SetVelFromPushKeepAxes(arg0);
        MoveObjByVel(arg0);
        if (!(D_800B99DA & 3)) {
            SpawnEffect2(arg0, 1);
        }
    }
    if (CheckPlayerGround(arg0) == 0) {
        SaveSafeGroundPos(arg0);
        SetPlayerEvent01(arg0);
    }
}

void ExitStandState(Player *arg0, s32 arg1) {
    UpdateFlag10Part21(arg0);
    StartFace(arg0, 0x11);
}

void StartPlayerRunning(Player *arg0) {
    SetPlayerState(arg0, 1);
    RunningStart(arg0);
}

s32 EnterPlayerRunning(s32 arg0) {
    SetPlayerState(arg0, 1);
    RunPlayerRunningState(arg0);
}

void RunPlayerRunningState(arg0, arg1)
s32 arg0;
s32 arg1;
{
    D_8018FCF8[AF(arg0, u16, 2)]();
}

void RunningWait(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        RunningStart(arg0);
    }
}

extern u8 D_8018FB1C;
extern s32 SetPlayerEvent40();

void RunningStart(Player *arg0) {
    SetObjPushV(arg0, &D_8018FB1C);
    if ((s32)arg0->status & 0x200) {
        SetPlayerMotionIndex(arg0, 0xA);
        StartFace(arg0, 0x1C);
        arg0->push[2] = 0xFFFC0000;
    } else {
        switch (arg0->unkA9) {
        case 0x41:
            SetPlayerMotionIndex(arg0, 7);
            StartFace(arg0, 0x21);
            break;
        case 0x53:
        case 0x73:
            SetPlayerMotionIndex(arg0, 6);
            StartFace(arg0, 0x21);
            break;
        }
    }
    arg0->abilPos[2] = 0;
    SpawnEffect2(arg0, 2);
    ClearDisplayFlag20(arg0);
    SetPlayerEvent40(arg0);
    NextObjState(arg0);
}

extern u8 D_800D5428;
extern u8 D_8018FB2C;
extern s32 CheckUseAbility();
extern s32 GetActiveTechnique();
extern s32 func_800CCCC0();
extern s32 ShouldSkidStop();
extern s32 StartSkidStop();
extern s32 GetRunBlendFrames();
extern s32 SwitchToPushBlock();
extern s32 CheckPlayerGroundUphill();

void PlayerRunningStep(Player *arg0) {
    u8 *c = &g_Status;
    s32 lim;
    s32 acc;
    s32 cap;
    s32 save;

    if (D_800B9A08 == 0x302A) {
        lim = -0xC0000;
        acc = -0x4000;
        cap = 0;
    } else {
        lim = -0xB0000;
        acc = -0x1000;
        cap = 0;
    }
    if (TryTalk(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        AfterTalkNop(arg0);
        return;
    }
    ToggleSleepMode(arg0);
    if (CheckAsleepFlag(arg0) != 0) {
        return;
    }
    if (CheckAssimilatePending(arg0) != 0) {
        return;
    }
    if ((arg0->anim == (s32)&D_800D5428) && (TryPickUpActor(arg0) != 0)) {
        D_8018FBA8[arg0->state](arg0);
        TriggerCarry(arg0);
        return;
    }
    if (CheckUseAbility(arg0) != 0) {
        return;
    }
    switch (GetActiveTechnique(arg0)) {
    case 0:
    case 1:
    case 2:
    case 6:
        if (CanSwingFusion(arg0) != 0) {
            D_8018FBA8[arg0->state](arg0);
            TriggerFusionCombo(arg0);
            return;
        }
        if (CanSwingLumina(arg0) != 0) {
            D_8018FBA8[arg0->state](arg0);
            TriggerLuminaSlash(arg0);
            return;
        }
        break;
    case 3:
        Technique3Attack(arg0);
        break;
    case 4:
        Technique4HoldAttack(arg0);
        break;
    case 5:
        if (CanSwingSword(arg0) != 0) {
            D_8018FBA8[arg0->state](arg0);
            func_800CCCC0(arg0);
            return;
        }
        break;
    }
    if (CanGuard(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        SwitchToGuard(arg0);
        return;
    }
    if (CanJump(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        TriggerJump(arg0);
        return;
    }
    if (ObjDirHeld(arg0) == 0) {
        save = arg0->push[2];
        D_8018FBA8[arg0->state](arg0);
        SpawnEffect2(arg0, 1);
        SetPlayerState(arg0, 0);
        RunPlayerStateHandler(arg0);
        if (ShouldSkidStop(arg0, save, lim) != 0) {
            StartSkidStop(arg0);
        }
        return;
    }
    FaceStickDir(arg0);
    if ((s32)arg0->status & 0x200) {
        if (arg0->abilPos[2] == 0) {
            SetPlayerMotionIndex(arg0, 0xA);
            StartFace(arg0, 0x1C);
        }
        SetObjPushV(arg0, &D_8018FB2C);
        AddPushFacing(arg0, 0, 0, 0);
    } else {
        switch (arg0->unkA9) {
        case 0x41:
            AddPushFacing(arg0, 0, 0, acc);
            if (arg0->abilPos[2] == 0) {
                if (GetObjPadHeld(arg0) & 4) {
                    if (arg0->push[2] < -0x40000) {
                        arg0->push[2] = -0x40000;
                    }
                } else if (func_8016F1C4() == 0) {
                    if ((AF(c, s16, 0x26) < 0x20) || (AF(c, s16, 0x2E) < 0x20)) {
                        if (arg0->push[2] < -0x40000) {
                            arg0->push[2] = -0x40000;
                        }
                    } else if ((AF(c, s16, 0x26) < 0x40) || (AF(c, s16, 0x2E) < 0x30)) {
                        if (arg0->push[2] < -0x80000) {
                            arg0->push[2] = -0x80000;
                        }
                    }
                }
                if (arg0->push[2] < lim) {
                    arg0->push[2] = lim;
                }
                if (arg0->push[2] >= cap) {
                    arg0->push[2] = cap;
                }
                if (arg0->push[2] < -0x94000) {
                    SetPlayerMotionIndex(arg0, 8);
                } else if (arg0->push[2] < -0x70000) {
                    SetPlayerMotionIndexBlend(arg0, 7, (u16)GetRunBlendFrames(arg0));
                } else {
                    SetPlayerMotionIndex(arg0, 6);
                }
            }
            break;
        case 0x53:
        case 0x73:
            arg0->push[2] = (lim * GetObjStickTilt(arg0)) / 127;
            if (func_8016F1C4() == 0) {
                if ((AF(c, s16, 0x26) < 0x40) || (AF(c, s16, 0x2E) < 0x30)) {
                    if (arg0->push[2] < -0x80000) {
                        arg0->push[2] = -0x80000;
                    }
                }
                if ((AF(c, s16, 0x26) < 0x20) || (AF(c, s16, 0x2E) < 0x20)) {
                    if (arg0->push[2] < -0x40000) {
                        arg0->push[2] = -0x40000;
                    }
                }
            }
            if (arg0->push[2] < lim) {
                arg0->push[2] = lim;
            }
            if (arg0->push[2] >= cap) {
                arg0->push[2] = cap;
            }
            SetVelFromPushKeepAxes(arg0);
            if (arg0->abilPos[2] == 0) {
                if (arg0->push[2] < -0x94000) {
                    SetPlayerMotionIndex(arg0, 8);
                } else if (arg0->push[2] < -0x70000) {
                    SetPlayerMotionIndexBlend(arg0, 7, (u16)GetRunBlendFrames(arg0));
                } else {
                    SetPlayerMotionIndex(arg0, 6);
                }
            }
            break;
        }
    }
    MoveObjByVel(arg0);
    if ((arg0->push[2] <= lim) && !(D_800B99DA & 7)) {
        SpawnEffect2(arg0, 2);
    }
    if (PushBlock(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        SwitchToPushBlock(arg0);
        return;
    }
    if (CollidePlayerMove(arg0) != 0) {
        ClearDisplayFlag10(arg0);
        SetPlayerMotionIndex(arg0, 0x12);
        StartFace(arg0, 0x17);
        arg0->abilPos[2] = 1;
    } else {
        if (arg0->abilPos[2] != 0) {
            UpdateFlag10Part21(arg0);
            SetPlayerMotionIndex(arg0, 6);
            StartFace(arg0, 0x21);
        }
        arg0->abilPos[2] = 0;
    }
    if (CheckPlayerGroundUphill(arg0) == 0) {
        if (arg0->animStatus & 0x2000) {
            PlayFootstep(arg0, arg0->targetClass);
        }
        SetPlayerEvent40(arg0);
        SaveSafeGroundPos(arg0);
    }
}

s32 GetRunBlendFrames(Player *arg0) {
    u8 temp_v1;
    u8 var_v0;

    if (arg0->anim == &D_800D48DC) {
        temp_v1 = arg0->unkDC;
        var_v0 = 0x10;
        if (temp_v1 >= 6U) {
            if (temp_v1 < 0xBU) {
                return 0x12;
            }
            var_v0 = 9;
            if (temp_v1 < 0x10U) {
                return 7;
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return (s32) var_v0;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
    var_v0 = arg0->animIndex;
    return (s32) var_v0;
}

extern s32 D_8011F9C4;

s32 ShouldSkidStop(Player *arg0, s32 arg1, s32 arg2) {
    if (GetPlayerAction(arg0) == 0) {
        if (arg2 >= arg1) {
            return 1;
        }
        if (D_8011F9C4 != 0) {
            if (!(GetFlag(0x21) & 0xFF)) {
                return 1;
            }
        }
    }
    return 0;
}

s32 StartSkidStop(Player *arg0) {
    SetPlayerMotionIndex(arg0, 9);
    SetObjPushV(arg0, (s32) &D_8018FB3C);
    func_80161CD0(arg0, (s32) arg0->targetClass);
}

void ExitRunningState(Player *arg0, s32 arg1) {
    UpdateFlag10Part21(arg0);
    StartFace(arg0, 0x11);
}

s32 StartPlayerJump(Player *arg0) {
    SetPlayerState(arg0, 2);
    PushOutOfSolidActors(arg0);
    func_8014FA04(arg0);
    JumpStart(arg0);
}

extern void RunPlayerJumpState();

s32 EnterPlayerJump(s32 arg0) {
    SetPlayerState(arg0, 2);
    RunPlayerJumpState(arg0);
}

void RunPlayerJumpState(s32 arg0, s32 arg1) {
    D_8018FD00[AF(arg0, u16, 2)]();
}

void JumpWait(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        JumpStart(arg0);
    }
}

void JumpStart(Player *arg0) {
    if ((u8) arg0->blink >= 0x19U) {
        arg0->blink = 0x18U;
    }
    StartFall(arg0);
    SetFallSpeed(arg0, -0x120000);
    SpawnEffect2(arg0, 2);
    D_8011F730 |= 1;
    NextObjState(arg0);
}

extern s32 GetActiveTechnique();
extern s32 TryAirFusionSlash();
extern s32 TryAirLuminaSlash();
extern void RestoreAirMotion();
extern s32 func_800CCCC0();
extern s32 TryDoubleJump();
extern u8 D_800D4BE0;
extern u8 D_800D4E94;
extern u8 D_800D4ED4;
extern u8 D_800D4F8C;
extern s16 D_801152A0;
extern s32 SetPlayerEvent200();
extern s32 func_800CCB78();
extern s32 CheckLandingBy1C6();
extern s32 SwitchToPole();
extern s32 SwitchToBarSwing();

void PlayerAirborneStep(arg0)
    s32 arg0;
{
    s32 var_s1;
    s32 limit;
    s32 flag;
    s32 temp;

    var_s1 = 0;
    if ((IsTechnique6Active(arg0) != 0) && (GetObjPadHeld(arg0) & 0x40) && (AF(arg0, s32, 0x34) >= 0)) {
        var_s1 = 1;
        if (AF(arg0, s32, 0x5C) == 0) {
            AF(arg0, s32, 0x50) = AF(arg0, s32, 0x54) = AF(arg0, s32, 0x58) = 0;
        }
        AF(arg0, s32, 0x5C) = var_s1;
    } else {
        AF(arg0, s32, 0x5C) = 0;
    }
    ToggleSleepMode(arg0);
    if (AF(arg0, s32, 0x1B0) == 0) {
        switch (GetActiveTechnique(arg0)) {
        case 0:
        case 1:
        case 2:
        case 6:
            if ((AF(arg0, s32, 0xB4) == (s32)&D_800D4BE0) && (CanAirSlash(arg0) != 0)) {
                D_8018FBA8[AF(arg0, u16, 0)](arg0);
                EnterAirSlash(arg0);
                return;
            }
            if ((AF(arg0, s32, 0xB4) != (s32)&D_800D4E94) && (AF(arg0, s32, 0xB4) != (s32)&D_800D4ED4) && (AF(arg0, s32, 0xB4) != (s32)&D_800D4F8C)) {
                if (TryAirFusionSlash(arg0) == 0) {
                    TryAirLuminaSlash(arg0);
                }
            } else if (AF(arg0, u16, 0xB8) == 0x8000) {
                StartFace(arg0, 0x22);
                RestoreAirMotion(arg0);
                AF(arg0, s32, 0x44) &= ~2;
                if (var_s1 != 0) {
                    SpawnEffectOn(0x3B, arg0, 0, 0);
                }
            }
            break;
        case 3:
            Technique3Attack(arg0);
            break;
        case 4:
            Technique4HoldAttack(arg0);
            break;
        case 5:
            if (CanSwingSword(arg0) != 0) {
                D_8018FBA8[AF(arg0, u16, 0)](arg0);
                func_800CCCC0(arg0);
                return;
            }
            break;
        }
    }
    if (AF(arg0, s32, 0x44) & 2) {
        RunAttackHit(arg0, AF(arg0, u8, 0x1AA));
    } else {
        if ((AF(arg0, s32, 0x240) == 0) && (TryDoubleJump(arg0) != 0)) {
            AF(arg0, s32, 0x240)++;
        }
        if ((AF(arg0, s32, 0xB4) == (s32)&D_800D4BE0) && (AF(arg0, u16, 0xB8) & 0x8000)) {
            RestoreAirMotion(arg0);
        } else if ((AF(arg0, s32, 0xB4) == (s32)&D_800D4A9C) || (AF(arg0, s32, 0xB4) == (s32)&D_800D4B48)) {
            if ((AF(arg0, u16, 0xB8) & 0x8000) && (AF(arg0, s32, 0x34) >= 0)) {
                AF(arg0, u16, 0xB8)++;
            }
        }
    }
    if (AF(arg0, u8, 0x1C6) != 0) {
        if (GetObjPadHeld(arg0) & 0x40) {
            AddFallSpeedLimited(arg0, -0x1A000);
        } else {
            AddFallSpeedLimited(arg0, 0x1A000);
        }
        limit = 0x40000;
        if ((AF(arg0, s32, 0xB4) != (s32)&D_800D4E94) && (AF(arg0, s32, 0xB4) != (s32)&D_800D4ED4) && (AF(arg0, s32, 0xB4) != (s32)&D_800D4F8C)) {
            limit = 0xC0000;
        }
        if (AF(arg0, s32, 0x34) < -limit) {
            AF(arg0, s32, 0x34) = -limit;
        } else if (limit < AF(arg0, s32, 0x34)) {
            AF(arg0, s32, 0x34) = limit;
        }
        ApplyFallSpeed(arg0);
    } else if (AF(arg0, s32, 0x34) < 0) {
        if (GetObjPadHeld(arg0) & 0x40) {
            AddFallSpeedClamped(arg0, -0x10000);
        }
        AddFallSpeedClamped(arg0, 0x10000);
    }
    if (func_800CF8B4() != 0) {
        temp = GetCameraViewYaw(arg0);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = (D_801152A0 + temp) & 0xFFF;
    }
    if (var_s1 == 0) {
        if (FaceStickDir(arg0) & 0xFF) {
            D_801152A0 = GetHeadingFromCamera(arg0);
            SetObjTimer(arg0, 4);
            if (AF(arg0, s32, 0x2C) > -0x80000) {
                AF(arg0, s32, 0x2C) = -0x80000;
                AddPushZLimit(arg0, -0x10000, 0xBA000);
            } else {
                AddPushZLimit(arg0, -0x1000, 0xBA000);
            }
        } else if (TickObjTimer(arg0) != 0) {
            ClearObjPush(arg0);
        }
        SetVelFromPushKeepAxes(arg0);
        MoveObjByVel(arg0);
        if (AF(arg0, u8, 0x1C6) == 0) {
            AddFallSpeedLimited(arg0, 0x1A000);
            ApplyFallSpeed(arg0);
        }
    } else {
        SetPlayerEvent200(arg0);
        if (FaceStickDir(arg0) & 0xFF) {
            D_801152A0 = GetHeadingFromCamera(arg0);
            ClearObjPush(arg0);
            AddPushFacing(arg0, 0, 0, -0xC000);
            AF(arg0, s32, 0x50) += AF(arg0, s32, 0x10);
            AF(arg0, s32, 0x54) += AF(arg0, s32, 0x14);
            AF(arg0, s32, 0x58) += AF(arg0, s32, 0x18);
            if (AF(arg0, s32, 0x50) > 0xBA000) {
                AF(arg0, s32, 0x50) = 0xBA000;
            } else if (AF(arg0, s32, 0x50) < -0xBA000) {
                AF(arg0, s32, 0x50) = -0xBA000;
            }
            if (AF(arg0, s32, 0x54) > 0xBA000) {
                AF(arg0, s32, 0x54) = 0xBA000;
            } else if (AF(arg0, s32, 0x54) < -0xBA000) {
                AF(arg0, s32, 0x54) = -0xBA000;
            }
            if (AF(arg0, s32, 0x58) > 0xBA000) {
                AF(arg0, s32, 0x58) = 0xBA000;
            } else if (AF(arg0, s32, 0x58) < -0xBA000) {
                AF(arg0, s32, 0x58) = -0xBA000;
            }
            AF(arg0, s32, 0x10) = AF(arg0, s32, 0x50);
            AF(arg0, s32, 0x14) = AF(arg0, s32, 0x54);
            AF(arg0, s32, 0x18) = AF(arg0, s32, 0x58);
            MoveObjByVel(arg0);
        } else {
            flag = 0;
            if (AF(arg0, s32, 0x50) != 0) {
                flag = 1;
                if (AF(arg0, s32, 0x50) >= 0) {
                    AF(arg0, s32, 0x50) -= 0x8000;
                    if (AF(arg0, s32, 0x50) < 0) {
                        AF(arg0, s32, 0x50) = 0;
                    }
                } else {
                    AF(arg0, s32, 0x50) += 0x8000;
                    if (AF(arg0, s32, 0x50) >= 0) {
                        AF(arg0, s32, 0x50) = 0;
                    }
                }
            }
            if (AF(arg0, s32, 0x54) != 0) {
                flag = 1;
                if (AF(arg0, s32, 0x54) >= 0) {
                    AF(arg0, s32, 0x54) -= 0x8000;
                    if (AF(arg0, s32, 0x54) < 0) {
                        AF(arg0, s32, 0x54) = 0;
                    }
                } else {
                    AF(arg0, s32, 0x54) += 0x8000;
                    if (AF(arg0, s32, 0x54) >= 0) {
                        AF(arg0, s32, 0x54) = 0;
                    }
                }
            }
            if (AF(arg0, s32, 0x58) != 0) {
                flag = 1;
                if (AF(arg0, s32, 0x58) >= 0) {
                    AF(arg0, s32, 0x58) -= 0x8000;
                    if (AF(arg0, s32, 0x58) < 0) {
                        AF(arg0, s32, 0x58) = 0;
                    }
                } else {
                    AF(arg0, s32, 0x58) += 0x8000;
                    if (AF(arg0, s32, 0x58) >= 0) {
                        AF(arg0, s32, 0x58) = 0;
                    }
                }
            }
            if (flag != 0) {
                AF(arg0, s32, 0x10) = AF(arg0, s32, 0x50);
                AF(arg0, s32, 0x14) = AF(arg0, s32, 0x54);
                AF(arg0, s32, 0x18) = AF(arg0, s32, 0x58);
                MoveObjByVel(arg0);
            }
            if (!(AF(arg0, s32, 0x44) & 2)) {
                SetPlayerMotionIndexBlend(arg0, 0xF, 0x12);
            }
        }
        temp = FindEffectByKind(arg0, 0x3B);
        if (temp != 0) {
            func_800CCB78(temp);
        }
        if (!(AF(arg0, u16, 0x1C8) & 0x1F)) {
            SpawnEffectOn(0x3C, arg0, 0, 0);
        }
    }
    if (AF(arg0, s32, 0x1B0) != 0) {
        if (AF(arg0, s32, 0x1B0) == 1) {
            StartFace(arg0, 0x22);
            SetPlayerMotionIndex(arg0, 0xF);
        } else {
            SetPlayerMotion(arg0, AF(arg0, s32, 0x1B4));
        }
    }
    var_s1 = CheckLandingBy1C6(arg0);
    if (var_s1 & 5) {
        AF(arg0, s32, 0x44) &= ~2;
        if (AF(arg0, s32, 0xB4) == (s32)&D_800D4A9C) {
            SetPlayerMotionIndex(arg0, 0xE);
        } else {
            SetPlayerMotionIndex(arg0, 0x10);
        }
        NextObjState(arg0);
    }
    if (var_s1 == 0) {
        if ((IsTimer1BCClear(arg0) != 0) && (GrabPole(arg0) != 0)) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            SwitchToPole(arg0);
            return;
        }
        if ((IsTimer1BDClear(arg0) != 0) && (GrabBar(arg0) != 0)) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            SwitchToBarSwing(arg0);
            return;
        }
        SetPlayerEvent02(arg0);
    }
}

extern s32 ResetAttackHit();
extern s32 PlaySeNow();

s32 TryAirFusionSlash(Player *arg0) {
    if (CanSwingFusion(arg0) == 0) {
        return 0;
    }
    ResetAttackHit(arg0);
    arg0->toggles[2] = 6;
    arg0->status |= 2;
    arg0->abilPos[2] = arg0->anim;
    AF(arg0, u8, 0x244) = arg0->animIndex;
    if (arg0->anim == (s32)&D_800D4A9C) {
        SetPlayerMotionIndex(arg0, 0xB);
    } else {
        SetPlayerMotionIndex(arg0, 0xC);
    }
    StartFace(arg0, 0x22);
    arg0->unkDA = 0;
    SpawnEffectOn(4, arg0, 5, 0);
    PlaySe(0x400);
    PlaySeNow(0x5F3);
    return 1;
}

extern u8 D_800D4F8C;

s32 TryAirLuminaSlash(s32 arg0) {
    if (CanSwingLumina(arg0) != 0) {
        ResetAttackHit(arg0);
        AF(arg0, u8, 0x1AA) = 0xC;
        AF(arg0, s32, 0x44) |= 2;
        AF(arg0, s32, 0x23C) = AF(arg0, s32, 0xB4);
        AF(arg0, u8, 0x244) = AF(arg0, u8, 0xBC);
        SetPlayerMotion(arg0, &D_800D4F8C);
        StartFace(arg0, 0x22);
        AF(arg0, u8, 0xDA) = 0;
        SpawnEffectOn(5, arg0, 5, 0);
        PlaySe(0x455);
        PlaySeNow(0x5F3);
        return 1;
    }
    return 0;
}

extern u8 D_800D4BE0;
extern s32 CanDoubleJump();

s32 TryDoubleJump(s32 arg0) {
    if ((AF(arg0, u8, 0x1C6) == 0) && (AF(arg0, s32, 0x240) == 0)) {
        if (CanDoubleJump() != 0) {
            AF(arg0, s32, 0x23C) = (s32) AF(arg0, s32, 0xB4);
            AF(arg0, u8, 0x244) = (u8) AF(arg0, u8, 0xBC);
            SetFallSpeed(arg0, -0xE0000);
            SetPlayerMotion(arg0, (s32) &D_800D4BE0);
            D_8011F730 |= 2;
            return 1;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void RestoreAirMotion(Player *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->abilPos[2];
    if ((temp_a1 == &D_800D4A9C) || (temp_a1 == &D_800D4B48)) {
        SetPlayerMotionBlend(arg0, temp_a1, (s32) AF(arg0, u8, 0x244));
        return;
    }
    SetPlayerMotionIndex(arg0, 0xF);
}

void PlayerLandStep(arg0)
    s32 arg0;
{
    s32 lim = -0xB0000;
    s32 vy;
    s32 r;
    s32 c;
    SV8 a;
    SV8 b;

    if (CheckAssimilatePending(arg0) != 0) {
        return;
    }
    switch (GetActiveTechnique(arg0)) {
    case 0:
    case 1:
    case 2:
    case 6:
        if (CanSwingFusion(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            TriggerFusionCombo(arg0);
            return;
        }
        if (CanSwingLumina(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            TriggerLuminaSlash(arg0);
            return;
        }
        break;
    case 3:
        Technique3Attack(arg0);
        break;
    case 4:
        Technique4HoldAttack(arg0);
        break;
    case 5:
        if (CanSwingSword(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            func_800CCCC0(arg0);
            return;
        }
        break;
    }
    if (CanGuard(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        SwitchToGuard(arg0);
        return;
    }
    if (CanAssimThrow(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        TriggerAssimThrow(arg0);
        return;
    }
    if (CanJump(arg0) != 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        TriggerJump(arg0);
        if ((u8)FaceStickDir(arg0) == 0) {
            ClearObjPush(arg0);
        }
        if (AF(arg0, s32, 0x24) | AF(arg0, s32, 0x2C)) {
            SetPlayerMotionIndex(arg0, 0xF);
        } else {
            SetPlayerMotionIndexBlend(arg0, 0xD, 6);
        }
        AF(arg0, s32, 0x238) = 1;
        return;
    }
    if (ObjDirHeld(arg0) != 0) {
        a.x = 0;
        a.y = 0;
        a.z = 0;
        b.x = AF(arg0, s32, 0x24) >> 16;
        b.y = 0;
        b.z = AF(arg0, s32, 0x2C) >> 16;
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        SetPlayerState(arg0, 1);
        RunPlayerRunningState(arg0);
        r = -(SVecDist(&a, &b) << 16);
        if (r < AF(arg0, s32, 0x2C)) {
            AF(arg0, s32, 0x2C) = r;
        }
        return;
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        SetPlayerState(arg0, 0);
        RunPlayerStateHandler(arg0);
        return;
    }
    vy = AF(arg0, s32, 0x2C);
    if (GetPlayerAction() == 0) {
        if (vy <= lim) {
            c = 1;
        } else if (D_8011F9C4 != 0 && (u8)GetFlag(0x21) == 0) {
            c = 1;
        } else {
            c = 0;
        }
    } else {
        c = 0;
    }
    if (c) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        SetPlayerState(arg0, 0);
        RunPlayerStateHandler(arg0);
        SetPlayerMotionIndex(arg0, 9);
        SetObjPushV(arg0, &D_8018FB3C);
        func_80161CD0(arg0, AF(arg0, u16, 0x16E));
        return;
    }
    if (CheckPlayerGround(arg0) == 0) {
        SetPlayerEvent02(arg0);
    }
}

void ExitJumpState(Player *arg0, s32 arg1) {
    ClearDisplayFlag20(arg0);
    StartFace(arg0, 0x11);
    arg0->status = (s32) ((s32)arg0->status & ~2);
}

s32 StartPlayerFall(s32 arg0) {
    SetPlayerState(arg0, 3);
    func_8015BE94(arg0);
}

s32 EnterPlayerFall(s32 arg0) {
    SetPlayerState(arg0, 3);
    RunPlayerFallState(arg0);
}

void RunPlayerFallState(s32 arg0, s32 arg1) {
    D_8018FD1C[AF(arg0, u16, 2)]();
}

void FallEnter(s32 arg0, s32 arg1) {
    func_8015BE94(arg0, arg1);
}

void func_8015BE94(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    StartFall(arg0);
    NextObjState(arg0);
}

void FallAirStep(void) {
    PlayerAirborneStep();
}

void FallLandStep(void) {
    PlayerLandStep();
}

void ExitFallState(Player *arg0, s32 arg1) {
    ClearDisplayFlag20(arg0);
    StartFace(arg0, 0x11);
    arg0->status = (s32) ((s32)arg0->status & ~2);
}

s32 StartPlayerSlide(arg0, arg1)
s32 arg0;
s32 arg1;
{
    SetPlayerState(arg0, 4);
    return StartSlopeSlide(arg0);
}

void EnterPlayerSlide(s32 arg0) {
    SetPlayerState(arg0, 4);
    RunPlayerSlideState(arg0);
}

void StartPlayerSlideDir(Player *arg0, s32 arg1) {
    SetPlayerState(arg0, 4);
    StartSlopeSlideVec(arg0, arg1);
}

void RunPlayerSlideState(s32 arg0, s32 arg1) {
    D_8018FD28[AF(arg0, u16, 2)]();
}

void StartSlopeSlideVec(Player *arg0, s32 arg1) {
    arg0->abilPos[0] = AF(arg1, s16, 0) << 7;
    arg0->abilPos[1] = 0x80000;
    arg0->abilPos[2] = AF(arg1, s16, 4) << 7;
    SetPlayerMotionIndex(arg0, 0x11);
    ClearDisplayFlag20(arg0);
    NextObjState(arg0);
}

void TryStartSlopeSlide(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        StartSlopeSlide(arg0);
    }
}

s32 StartSlopeSlide(Player *arg0) {
    AF(arg0, s32, 0x234) = g_WallNormal << 6;
    AF(arg0, s32, 0x238) = 0x80000;
    arg0->abilPos[2] = D_801152B4 << 6;
    SetPlayerMotionIndex(arg0, 0x11);
    ClearDisplayFlag20(arg0);
    NextObjState(arg0);
}

extern s32 SwitchToPushBlock();

void SlopeSlideStep(Player *arg0) {
    VECTOR sp10;
    VECTOR sp20;
    s32 temp_s0;
    s32 temp_v0;

    ToggleSleepMode();
    if (FaceStickDir(arg0) & 0xFF) {
        sp10.vx = 0;
        sp10.vy = 0;
        sp10.vz = -0x4000;
        RotateVectorY(arg0->model->rot.vy, &sp10, &sp20);
        arg0->abilPos[0] += sp20.vx;
        arg0->abilPos[1] += sp20.vy;
        arg0->abilPos[2] += sp20.vz;
    }
    RotateVectorY((s16)-arg0->model->rot.vy, (u8 *)arg0 + 0x234, &sp20);
    SetObjPushV(arg0, &sp20);
    SetVelFromPushKeepAxes(arg0);
    MoveObjByVel(arg0);
    if (!(D_800B99DA & 3)) {
        SpawnEffect2(arg0, 1);
        PlaySe(0x65F);
    }
    if (PushBlock(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        SwitchToPushBlock(arg0);
        return;
    }
    temp_s0 = ProbePlatformByMove(arg0);
    temp_v0 = ProbeGroundByMove(arg0);
    if (temp_v0 != 0) {
        if ((temp_v0 & 0xFF00) != 0x4000) {
            SetObjTimer(arg0, 6);
            NextObjState(arg0);
            return;
        }
        if ((temp_v0 & 0x4000) && (TickObjTimer(arg0) != 0)) {
            SetPlayerState(arg0, 4);
            StartSlopeSlide(arg0);
        }
    } else if (temp_s0 == 0) {
        D_8018FBA8[arg0->state](arg0);
        SetPlayerState(arg0, 3);
        func_8015BE94(arg0);
    }
}

extern s32 GetActiveTechnique();
extern s32 func_800CCCC0();

void SlopeSlideEndStep(Player *arg0) {
    VECTOR sp10;
    VECTOR sp20;
    s32 temp_s0;
    s32 temp_v0;

    ToggleSleepMode();
    if (CanJump(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        TriggerJump(arg0);
        return;
    }
    switch (GetActiveTechnique(arg0)) {
    case 0:
    case 1:
    case 6:
        if (CanSwingFusion(arg0) != 0) {
            D_8018FBA8[arg0->state](arg0);
            TriggerFusionCombo(arg0);
            return;
        }
        if (CanSwingLumina(arg0) != 0) {
            D_8018FBA8[arg0->state](arg0);
            TriggerLuminaSlash(arg0);
            return;
        }
        break;
    case 3:
        Technique3Attack(arg0);
        break;
    case 4:
        Technique4HoldAttack(arg0);
        break;
    case 5:
        if (CanSwingSword(arg0) != 0) {
            D_8018FBA8[arg0->state](arg0);
            func_800CCCC0(arg0);
            return;
        }
        break;
    }
    if (FaceStickDir(arg0) & 0xFF) {
        sp10.vx = 0;
        sp10.vy = 0;
        sp10.vz = -0x4000;
        RotateVectorY(arg0->model->rot.vy, &sp10, &sp20);
        arg0->abilPos[0] += sp20.vx;
        arg0->abilPos[1] += sp20.vy;
        arg0->abilPos[2] += sp20.vz;
    }
    RotateVectorY((s16)-arg0->model->rot.vy, (u8 *)arg0 + 0x234, &sp20);
    SetObjPushV(arg0, &sp20);
    SetVelFromPushKeepAxes(arg0);
    MoveObjByVel(arg0);
    if (!(D_800B99DA & 3)) {
        SpawnEffect2(arg0, 1);
        PlaySe(0x65F);
    }
    if (PushBlock(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        SwitchToPushBlock(arg0);
        return;
    }
    temp_s0 = ProbePlatformByMove(arg0);
    temp_v0 = ProbeGroundByMove(arg0);
    if (temp_v0 != 0) {
        if (!(temp_v0 & 0x4000)) {
            if (TickObjTimer(arg0) != 0) {
                D_8018FBA8[arg0->state](arg0);
                SetPlayerState(arg0, 0);
                StandStart(arg0);
            }
        } else {
            SetPlayerState(arg0, 4);
            StartSlopeSlide(arg0);
        }
    } else if (temp_s0 == 0) {
        D_8018FBA8[arg0->state](arg0);
        SetPlayerState(arg0, 3);
        func_8015BE94(arg0);
    }
}

void NopC6A4(void) {
}

void EnterPushBlock(Player *arg0) {
    SetPlayerState(arg0, 9);
    StartPushBlock(arg0);
}

s32 SwitchToPushBlock(Player *arg0) {
    SetPlayerState(arg0, 9);
    RunPushBlockState(arg0);
}

void RunPushBlockState(arg0, arg1)
s32 arg0;
s32 arg1;
{
    D_8018FD34[AF(arg0, u16, 2)]();
}

void TryStartPushBlock(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        StartPushBlock(arg0);
    }
}

void StartPushBlock(Player *arg0) {
    SetPlayerMotionIndex(arg0, 0x12);
    StartFace(arg0, 0x17);
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    SetObjTimer(arg0, 0xA);
    NextObjState(arg0);
}

extern u8 D_8018FB4C;
extern s32 CanJump();
extern s32 ObjDirHeld();

void PushBlockReadyStep(s32 arg0) {
    if ((CheckAssimilatePending(arg0) == 0) && (CheckAsleepFlag(arg0) == 0)) {
        if (CanJump(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            TriggerJump(arg0);
            return;
        }
        if (!(GetObjPadHeld(arg0) & 0x80) && (ObjDirHeld(arg0) == 0)) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            SetPlayerState(arg0, 0);
            RunPlayerStateHandler(arg0);
            return;
        }
        if (CheckPlayerGroundNoCollide(arg0) == 0) {
            if (TickObjTimer(arg0) != 0) {
                FaceStickDirOffset(arg0);
                SetObjPushV(arg0, (s32) &D_8018FB4C);
                SetObjTimer(arg0, 0x14);
                NextObjState(arg0);
            }
            if (AF(arg0, u16, 0xB8) & 0x2000) {
                PlayFootstep(arg0, (s32) AF(arg0, u16, 0x16E));
                SpawnEffect2(arg0, 2);
            }
        }
    }
}

void PushBlockShoveStep(s32 arg0) {
    ToggleSleepMode(arg0);
    AddPushFacing(arg0, 0, 0, 0);
    MoveObjByVel(arg0);
    PushBlock(arg0);
    if (AF(arg0, s32, 0x170) == 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        SetPlayerState(arg0, 0);
        RunPlayerStateHandler(arg0);
        return;
    }
    if (CheckPlayerGroundNoCollide(arg0) == 0) {
        if (TickObjTimer(arg0) != 0) {
            NextObjState(arg0);
        }
        if (AF(arg0, u16, 0xB8) & 0x2000) {
            PlayFootstep(arg0, (s32) AF(arg0, u16, 0x16E));
        }
    }
}

void PushBlockHoldStep(s32 arg0) {
    ToggleSleepMode(arg0);
    if ((CheckAssimilatePending(arg0) == 0) && (CheckAsleepFlag(arg0) == 0)) {
        if (CanJump(arg0) != 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            TriggerJump(arg0);
            return;
        }
        if (!(GetObjPadHeld(arg0) & 0x80) && (ObjDirHeld(arg0) == 0)) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            SetPlayerState(arg0, 0);
            RunPlayerStateHandler(arg0);
        } else {
            if (FaceStickDirOffset(arg0) & 0xFF) {
                AddPushFacing(arg0, 0, 0, 0);
                MoveObjByVel(arg0);
            }
            if (PushBlock(arg0) != 0) {
                SetObjPushV(arg0, &D_8018FB4C);
                SetObjTimer(arg0, 0x14);
                SetObjState(arg0, 2);
            }
            if (AF(arg0, s32, 0x170) == 0) {
                D_8018FBA8[AF(arg0, u16, 0)](arg0);
                SetPlayerState(arg0, 0);
                RunPlayerStateHandler(arg0);
            } else {
                CheckPlayerGroundNoCollide(arg0);
            }
        }
    }
}

void ExitPushBlock(Player *arg0, s32 arg1) {
    arg0->unk170 = 0;
    UpdateFlag10Part21(arg0);
    StartFace((s32) arg0, 0x11);
}

void NopCBCC(void) {
}

void NopCBD4(void) {
}

void NopCBDC(void) {
}

void NopCBE4(void) {
}

void NopCBEC(void) {
}

void NopCBF4(void) {
}

void NopCBFC(void) {
}

void NopCC04(void) {
}

void EnterPole(Player *arg0) {
    SetPlayerState(arg0, 0xB);
    StartPole(arg0);
}

s32 SwitchToPole(s32 arg0) {
    SetPlayerState(arg0, 0xB);
    RunPoleState(arg0);
}

void RunPoleState(s32 arg0, s32 arg1) {
    D_8018FD44[AF(arg0, u16, 2)]();
}

void PoleState0(Player *arg0, s32 arg1) {
    StartPole(arg0, arg1);
}

extern s32 SetPlayerEvent10();

void StartPole(Player *arg0) {
    SetPlayerMotionIndex(arg0, 0x14);
    arg0->animStatus = 0;
    SetPlayerEvent10(arg0);
    arg0->abilPos[0] = 0xF;
    PlaySe(0x6A7);
    NextObjState(arg0);
}

extern u8 D_8018FB5C;
extern u8 D_8018FD4C;
extern u8 D_8018FD5C;
extern s32 GrabPole();

void PoleStep(Player *arg0) {
    ToggleSleepMode(arg0);
    if (CanJump(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        arg0->unk1BC[0] = 0xA;
        TriggerJumpRising(arg0);
        if (FaceStickDir(arg0) & 0xFF) {
            SetObjPushV(arg0, (s32) &D_8018FB5C);
        } else {
            ClearObjPush(arg0);
        }
        return;
    }
    if (arg0->abilPos[0] == 0) {
        if (ObjDownHeld(arg0) != 0) {
            SetObjPushV(arg0, (s32) &D_8018FD4C);
            SetVelFromPushKeepAxes(arg0);
            MoveObjByVel(arg0);
            SetPlayerMotionIndex(arg0, 0x15);
            arg0->model->rot.vy = ((u16)arg0->model->rot.vy - 0xAA) & 0xFFF;
        } else {
            if (ObjUpHeld(arg0) != 0) {
                SetObjPushV(arg0, (s32) &D_8018FD5C);
                SetVelFromPushKeepAxes(arg0);
                MoveObjByVel(arg0);
                SetPlayerMotionIndex(arg0, 0x14);
                arg0->animStatus = 1;
            }
            if (ObjLeftHeld(arg0) != 0) {
                arg0->model->rot.vy = ((u16)arg0->model->rot.vy + 0x71) & 0xFFF;
            } else if (ObjRightHeld(arg0) != 0) {
                arg0->model->rot.vy = ((u16)arg0->model->rot.vy - 0x71) & 0xFFF;
            }
        }
    } else {
        arg0->abilPos[0]--;
    }
    func_8014FA04(arg0);
    if (GrabPole(arg0) == 0) {
        D_8018FBA8[arg0->state](arg0);
        SetPlayerState(arg0, 0);
        RunPlayerStateHandler(arg0);
    } else {
        SetPlayerEvent10(arg0);
    }
}

void ExitPole(Player *arg0, s32 arg1) {
    UpdateFlag10Part21(arg0);
    StartFace(arg0, 0x11);
}

void EnterBarSwing(s32 arg0) {
    SetPlayerState(arg0, 0xC);
    StartBarSwing(arg0);
}

s32 SwitchToBarSwing(s32 arg0) {
    SetPlayerState(arg0, 0xC);
    RunBarSwingState(arg0);
}

void RunBarSwingState(s32 arg0, s32 arg1) {
    D_8018FD7C[AF(arg0, u16, 2)]();
}

void BarSwingState0(s32 arg0, s32 arg1) {
    StartBarSwing(arg0, arg1);
}

extern u8 D_800D550C;
extern u8 D_8018FD6C;

void StartBarSwing(s32 arg0) {
    s16 cur;
    u16 a;
    s16 b;

    SetPlayerMotion(arg0, &D_800D550C);
    AF(AF(arg0, u8 *, 0x20), s16, 0x10) = 0;
    cur = AF(AF(arg0, u8 *, 0x20), s16, 0x12);
    a = AF(AF(AF(arg0, u8 *, 0x180), u8 *, 0x20), u16, 0x12);
    b = (a + 0x800) & 0xFFF;
    if ((s16)AngleDist(cur, (s16)a) < (s16)AngleDist(cur, b)) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = a;
    } else {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = b;
    }
    AF(arg0, s32, 0x38) = (s32)&D_8018FD6C | 0x40000000;
    SetPlayerEvent20(arg0);
    NextObjState(arg0);
}

void BarSwingWindupStep(s32 arg0) {
    ToggleSleepMode(arg0);
    func_8014FA04(arg0);
    if (GrabBar(arg0) == 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        SetPlayerState(arg0, 0);
        RunPlayerStateHandler(arg0);
        return;
    }
    SetPlayerEvent20(arg0);
    AF(arg0, s32, 0x234) = 0xFF1D0000;
    AF(AF(arg0, void *, 0x20), u16, 0x10) = 0x600U;
    AF(arg0, u16, 0x244) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x10);
    NextObjState(arg0);
}

void BarSwingStep(u8 *a) {
    s16 r;
    s16 d;
    s16 old;
    s16 v;
    s16 k;
    u8 unused[8];

    ToggleSleepMode(a);
    r = AF(AF(a, u8 *, 0x20), u16, 0x10) + AF(a, u16, 0x236);
    AF(AF(a, u8 *, 0x20), u16, 0x10) = r & 0xFFF;
    old = AF(a, s16, 0x244);
    d = AF(AF(a, u8 *, 0x20), s16, 0x10);
    if (d - old >= 0) {
        v = d - old;
    } else {
        v = old - d;
    }
    if (v > 0x800) {
        PlaySe(0x5E9);
    }
    AF(a, s16, 0x244) = AF(AF(a, u8 *, 0x20), s16, 0x10);
    if (GetObjPadPressed((s32)a) & 0x40) {
        D_8018FBA8[AF(a, u16, 0)](a);
        TriggerJumpRising((s32)a);
        SetPlayerMotion(a, &D_800D4C14);
        SetObjTimer(a, 0x10);
        k = (r & 0xFFF) / 512;
        D_8018FDC8.f = D_8018FD88[k].a;
        SetObjPushV(a, &D_8018FDC8);
        SetFallSpeed(a, D_8018FD8C[k * 2]);
        PlaySe(0x5EA);
    } else {
        func_8014FA04(a);
        if (GrabBar(a) == 0) {
            D_8018FBA8[AF(a, u16, 0)](a);
            SetPlayerState(a, 0);
            RunPlayerStateHandler(a);
        } else {
            UpdateBarSwingPoint(a);
            SetPlayerEvent20((s32)a);
        }
    }
}

extern SVECTOR D_8018FDD8;

void UpdateBarSwingPoint(s32 arg0) {
    SVECTOR v;
    MATRIX m;

    SetIdentityRot(&m);
    RotateMatrixY(&m, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
    RotateMatrixX(&m, AF(AF(arg0, u8 *, 0x20), s16, 0x10));
    ApplyMatrixSV(&m, &D_8018FDD8, &v);
    AF(arg0, SVECTOR, 0x138) = v;
}

void ExitBarSwing(Player *arg0, s32 arg1) {
    arg0->unk1BC[1] = 8;
    arg0->hitData = &D_8018EEBC;
    arg0->posOfs[0] = 0;
    arg0->posOfs[1] = 0;
    arg0->posOfs[2] = 0;
    arg0->posOfs[3] = 0;
    arg0->pos[1].h.i = (u16) ((u16)arg0->pos[1].h.i + 0x48);
    arg0->model->rot.vx = 0;
    UpdateFlag10Part21(arg0);
    StartFace((s32) arg0, 0x11);
}

void EnterCarry(Player *arg0) {
    SetPlayerState(arg0, 0xD);
    StartCarry(arg0);
}

extern void RunCarryState();

s32 SwitchToCarry(s32 arg0) {
    SetPlayerState(arg0, 0xD);
    RunCarryState(arg0);
}

void RunCarryState(s32 arg0, s32 arg1) {
    D_8018FDE0[AF(arg0, u16, 2)]();
}

void ExitCarry(s32 arg0) {
    StartFace(arg0, 0x11);
}

void TryStartCarry(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        StartCarry(arg0);
    }
}

void StartCarry(Player *arg0, s32 arg1) {
    void *temp_a0;

    SetPlayerMotionIndex(arg0, 0x19);
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    NextObjState(arg0);
    temp_a0 = AF(arg0, void *, 0x178);
    arg0->abilPos[0] = 0;
    if ((temp_a0 != NULL) && (AF(temp_a0, u16, 0) == 0x1F8)) {
        AF(temp_a0, s16, 0xFC) = 1;
        TakePlayerControlNoStop();
    }
}

void CarryLiftStep(Player *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void *temp_a2;

    if ((CheckAssimilatePending(arg0) == 0) && (CheckAsleepFlag(arg0) == 0)) {
        if (arg0->animStatus & 0x4000) {
            StartFace(arg0, 0x17);
        }
        if (CheckPlayerGround(arg0) == 0) {
            if (arg0->animStatus == 0x8000) {
                arg0->abilPos[0] = (s32) (arg0->abilPos[0] - 3);
                SetPlayerMotionIndex(arg0, 0x1A);
                NextObjState(arg0);
                return;
            }
            temp_a2 = AF(arg0, void *, 0x178);
            if (temp_a2 != NULL) {
                temp_v1 = arg0->abilPos[0];
                arg0->abilPos[0] = (s32) (temp_v1 + 1);
                AF(temp_a2, s16, 6) = (s16) (D_8018FDEC[temp_v1] + AF(AF(temp_a2, void *, 0x78), u16, 0xC));
                temp_v1_2 = arg0->abilPos[0];
                arg0->abilPos[0] = (s32) (temp_v1_2 + 1);
                AF(temp_a2, s16, 0xA) = (s16) (D_8018FDEC[temp_v1_2] + AF(AF(temp_a2, void *, 0x78), u16, 0xE));
                temp_v1_3 = arg0->abilPos[0];
                arg0->abilPos[0] = (s32) (temp_v1_3 + 1);
                AF(temp_a2, s16, 0xE) = (s16) (D_8018FDEC[temp_v1_3] + AF(AF(temp_a2, void *, 0x78), u16, 0x10));
                ObjLocalToWorld16(arg0, temp_a2 + 4);
            }
        }
    }
}

extern u8 D_8018FB6C;
extern u8 D_8018FB7C;
extern s8 D_8018FDED[];
extern s8 D_8018FDEE[];
extern void func_800CAF14();
extern s32 LacksAbilityBp();
extern s32 DropCarried();
extern void StartNoBpMotion();
void CarryStep(Player *arg0) {
    u8 *c = &g_Status;
    u8 *temp_s1;
    s32 f;
    u8 unused[16]; /* MATCH-TRICK: frame pad, the original frame is 0x30 with 16 unused bytes */

    FaceStickDir(arg0);
    if ((CheckAssimilatePending(arg0) == 0) && (CheckAsleepFlag(arg0) == 0)) {
        temp_s1 = AF(arg0, u8 *, 0x178);
        if ((temp_s1 != NULL) && (AF(temp_s1, u16, 0) == 0x360)) {
            goto block_8;
        }
        f = 0; /* MATCH-TRICK: dead store keeps thread_jumps off the second NULL test */
        if ((temp_s1 == NULL) || (AF(temp_s1, u16, 0) == 0)) {
            D_8018FBA8[arg0->state](arg0);
            SetPlayerState(arg0, 0);
            RunPlayerStateHandler(arg0);
            return;
        }
        f = GetObjPadPressed(arg0);
        if (f & 0x80) {
block_8:
            StartFace(arg0, 0x11);
            SwitchToThrowCarried(arg0);
            return;
        }
        if ((GetObjPadPressed(arg0) & 0x10) && (TestFlag80((u8 *)arg0) != 0)) {
            StartFace(arg0, 0x11);
            func_8015DE24(arg0);
            return;
        }
        if ((GetObjPadPressed(arg0) & 0x20) && (c[0x49] == 0xA)) {
            if (LacksAbilityBp(arg0) != 0) {
                DropCarried(arg0);
                StartNoBpMotion(arg0);
                return;
            }
            StartFace(arg0, 0x11);
            func_800CAF14(arg0);
            return;
        }
        if ((ObjDirHeld(arg0) != 0) && (AF(AF(arg0, u8 *, 0x178), u16, 0) != 0x82)) {
            SetPlayerMotionIndex(arg0, 0x1B);
            SetObjPushV(arg0, &D_8018FB6C);
        } else {
            SetPlayerMotionIndex(arg0, 0x1A);
            SetObjPushV(arg0, &D_8018FB7C);
        }
        SetVelFromPushKeepAxes(arg0);
        MoveObjByVel(arg0);
        temp_s1 = AF(arg0, u8 *, 0x178);
        AF(temp_s1, s16, 6) = D_8018FDEC[arg0->abilPos[0]] + AF(AF(temp_s1, u8 *, 0x78), u16, 0xC);
        AF(temp_s1, s16, 0xA) = D_8018FDED[arg0->abilPos[0]] + AF(AF(temp_s1, u8 *, 0x78), u16, 0xE);
        AF(temp_s1, s16, 0xE) = D_8018FDEE[arg0->abilPos[0]] + AF(AF(temp_s1, u8 *, 0x78), u16, 0x10);
        ObjLocalToWorld16(arg0, temp_s1 + 4);
        AF(AF(temp_s1, u8 *, 0x20), s16, 0x12) = ((u16)arg0->model->rot.vy + 0x800) & 0xFFF;
        if (PushBlock(arg0) != 0) {
            D_8018FBA8[arg0->state](arg0);
            SetPlayerState(arg0, 9);
            RunPushBlockState(arg0);
            return;
        }
        if (CheckPlayerGround(arg0) == 0) {
            SaveSafeGroundPos(arg0);
        }
    }
}

s32 DropCarried(Player *arg0) {
    StartFace(arg0, 0x11);
    return func_8015E0D4(arg0);
}

void EnterThrowCarried(Player *arg0) {
    SetPlayerState(arg0, 0xE);
    StartThrowCarried(arg0);
}

s32 SwitchToThrowCarried(s32 arg0, s32 arg1) {
    SetPlayerState(arg0, 0xE);
    RunThrowCarriedState(arg0);
}

void RunThrowCarriedState(s32 arg0, s32 arg1) {
    D_8018FE20[AF(arg0, u16, 2)]();
}

void TryStartThrowCarried(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        StartThrowCarried(arg0);
    }
}

void StartThrowCarried(Player *arg0) {
    SetPlayerMotionIndex(arg0, 0x1C);
    StartFace(arg0, 0x19);
    arg0->abilPos[0] = 0;
    MoveCarriedAlongThrow(arg0);
    PlaySeNow(0x5F5);
    ClearDisplayFlag20(arg0);
    SpendBp(arg0, 4);
    NextObjState(arg0);
}

void ThrowCarriedStep(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        ReleaseCarried((s32) arg0, arg1);
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        SetPlayerState((s32) arg0, 0);
        RunPlayerStateHandler((s32) arg0);
        return;
    }
    if (AF(arg0, s32, 0x178) != 0) {
        MoveCarriedAlongThrow((s32) arg0);
    }
    CheckPlayerGround((s32) arg0);
}

void ExitThrowCarried(Player *arg0) {
    StartFace(arg0, 0x11);
    ReleaseCarried(arg0);
}

void MoveCarriedAlongThrow(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void *temp_a1;

    temp_v1 = AF(arg0, s32, 0x234);
    temp_a1 = AF(arg0, void *, 0x178);
    AF(arg0, s32, 0x234) = (s32) (temp_v1 + 1);
    AF(temp_a1, s16, 6) = (s16) (D_8018FE28[temp_v1] + AF(AF(temp_a1, void *, 0x78), u16, 0xC));
    temp_v1_2 = AF(arg0, s32, 0x234);
    AF(arg0, s32, 0x234) = (s32) (temp_v1_2 + 1);
    AF(temp_a1, s16, 0xA) = (s16) (D_8018FE28[temp_v1_2] + AF(AF(temp_a1, void *, 0x78), u16, 0xE));
    temp_v1_3 = AF(arg0, s32, 0x234);
    AF(arg0, s32, 0x234) = (s32) (temp_v1_3 + 1);
    AF(temp_a1, s16, 0xE) = (s16) (D_8018FE28[temp_v1_3] + AF(AF(temp_a1, void *, 0x78), u16, 0x10));
    ObjLocalToWorld16(arg0, (s32) (temp_a1 + 4));
}

extern s32 CalcStat0Power();

void ReleaseCarried(s32 arg0) {
    SVECTOR v;
    s32 o;

    o = AF(arg0, s32, 0x178);
    if (o != 0) {
        ClipObjBehindWallDef(arg0, o);
        PosToSVec(o + 4, &v);
        v.pad = 0;
        StrikeActor(o, 9, CalcStat0Power(), &v, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
        AF(arg0, s32, 0x178) = 0;
    }
}

void func_8015DDF0(Player *arg0) {
    SetPlayerState(arg0, 0xF);
    func_8015DECC(arg0);
}

s32 func_8015DE24(s32 arg0, s32 arg1) {
    SetPlayerState(arg0, 0xF);
    RunThrowCarriedAltState(arg0);
}

void RunThrowCarriedAltState(s32 arg0, s32 arg1) {
    D_8018FE40[AF(arg0, u16, 2)]();
}

void func_8015DE94(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        func_8015DECC(arg0);
    }
}

extern s32 PlaySeNow();

void func_8015DECC(Player *arg0) {
    SetPlayerMotionIndex(arg0, 0x1C);
    StartFace(arg0, 0x19);
    arg0->abilPos[0] = 0;
    func_8015E018(arg0);
    PlaySeNow(0x5F5);
    ClearDisplayFlag20(arg0);
    SpendBp(arg0, 4);
    NextObjState(arg0);
}

void func_8015DF34(u8 *arg0, s32 arg1) {
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        func_8015E0D4((s32) arg0, arg1);
    }
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        SetPlayerState((s32) arg0, 0);
        RunPlayerStateHandler((s32) arg0);
        return;
    }
    if (AF(arg0, s32, 0x178) != 0) {
        func_8015E018((s32) arg0);
    }
    CheckPlayerGround((s32) arg0);
}

void func_8015DFE4(Player *arg0) {
    StartFace(arg0, 0x11);
    func_8015E0D4(arg0);
}

void func_8015E018(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void *temp_a1;

    temp_v1 = AF(arg0, s32, 0x234);
    temp_a1 = AF(arg0, void *, 0x178);
    AF(arg0, s32, 0x234) = (s32) (temp_v1 + 1);
    AF(temp_a1, s16, 6) = (s16) (D_8018FE28[temp_v1] + AF(AF(temp_a1, void *, 0x78), u16, 0xC));
    temp_v1_2 = AF(arg0, s32, 0x234);
    AF(arg0, s32, 0x234) = (s32) (temp_v1_2 + 1);
    AF(temp_a1, s16, 0xA) = (s16) (D_8018FE28[temp_v1_2] + AF(AF(temp_a1, void *, 0x78), u16, 0xE));
    temp_v1_3 = AF(arg0, s32, 0x234);
    AF(arg0, s32, 0x234) = (s32) (temp_v1_3 + 1);
    AF(temp_a1, s16, 0xE) = (s16) (D_8018FE28[temp_v1_3] + AF(AF(temp_a1, void *, 0x78), u16, 0x10));
    ObjLocalToWorld16(arg0, (s32) (temp_a1 + 4));
}

extern s32 CalcStat0Power();

s32 func_8015E0D4(s32 arg0) {
    SVECTOR v;
    s32 o;

    o = AF(arg0, s32, 0x178);
    if (o != 0) {
        ClipObjBehindWallDef(arg0, o);
        PosToSVec(o + 4, &v);
        v.pad = 0;
        StrikeActor(o, 0x11, CalcStat0Power(), &v, AF(AF(arg0, u8 *, 0x20), s16, 0x12));
        AF(arg0, s32, 0x178) = 0;
    }
}

void EnterGrab(s32 arg0) {
    SetPlayerState(arg0, 0x10);
    StartGrab(arg0);
}

extern void RunGrabState();

s32 SwitchToGrab(s32 arg0) {
    SetPlayerState(arg0, 0x10);
    RunGrabState(arg0);
}

void RunGrabState(s32 arg0, s32 arg1) {
    D_8018FE60[AF(arg0, u16, 2)]();
}

void TryStartGrab(s32 arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        StartGrab(arg0);
    }
}

extern u8 D_800D4FF4;

void StartGrab(s32 arg0) {
    SetPlayerMotion(arg0, &D_800D4FF4);
    AF(arg0, s32, 0x234) = 0;
    SpawnEffectOn(5, arg0, 0xA, 0);
    AF(arg0, s32, 0x44) |= 2;
    NextObjState(arg0);
}

extern u8 D_800D5060;
extern u8 D_800D5098;
s32 ShakeCameraForGrab(s32 arg0);
extern void SpawnGrabEffect();

void GrabReachStep(s32 arg0) {
    if (CheckPlayerGround(arg0) == 0) {
        if (func_8014A850(arg0) != 0) {
            SetPlayerMotion(arg0, (s32) &D_800D5098);
            HoldGrabbedAtHands(arg0);
            ShakeCameraForGrab(arg0);
            SpawnGrabEffect(arg0);
            SpawnEffectOn(5, arg0, 0xB, 0);
            NextObjState(arg0);
            return;
        }
        if (AF(arg0, u16, 0xB8) & 0x8000) {
            SetPlayerMotion(arg0, (s32) &D_800D5060);
            SetObjState(arg0, 3);
        }
    }
}

void GrabHoldStep(Player *arg0) {
    HoldGrabbedAtHands(arg0);
    if ((CheckAssimilatePending(arg0) == 0) && (CheckAsleepFlag(arg0) == 0) && (CheckPlayerGround(arg0) == 0)) {
        if (arg0->animStatus & 0x4000) {
            ReleaseGrabbed(arg0);
            arg0->abilPos[0] = 1;
        }
        if (arg0->animStatus & 0x8000) {
            D_8018FBA8[arg0->state](arg0);
            SetPlayerState(arg0, 0);
            StandStart(arg0);
        }
    }
}

void HoldGrabbedAtHands(s32 arg0) {
    SVECTOR a;
    SVECTOR b;
    u8 *t;

    t = AF(arg0, u8 *, 0x18C);
    if (t != NULL && AF(t, u16, 0) != 0) {
        func_80148534((s32) &a, (s32) &b);
        AF(t, s16, 6) = b.vx + AF(AF(t, u8 *, 0x78), u16, 0xC);
        AF(t, s16, 0xA) = b.vy + AF(AF(t, u8 *, 0x78), u16, 0xE);
        AF(t, s16, 0xE) = b.vz + AF(AF(t, u8 *, 0x78), u16, 0x10);
        ObjLocalToWorld16(arg0, (s32) (t + 4));
    }
}

extern SVECTOR D_8018FE70;
extern u8 D_8018FE78;

void SpawnGrabEffect(s32 arg0) {
    SVECTOR v;
    s32 d;
    u8 *p;

    p = AF(arg0, u8 *, 0x18C);
    if (p != NULL && AF(p, u16, 0) != 0) {
        v.vx = D_8018FE70.vx + AF(AF(p, u8 *, 0x78), u16, 0xC);
        v.vy = D_8018FE70.vy + AF(AF(p, u8 *, 0x78), s16, 0xE) * 2;
        v.vz = D_8018FE70.vz + AF(AF(p, u8 *, 0x78), u16, 0x10);
        ObjLocalToWorld(arg0, (s32)&v, (s32)&v);
        PackAngles10(&D_8018FE78, &d);
        SpawnEffect(0x1F, (StageActor *)arg0, v.vx, v.vy, v.vz, d, 0);
    }
}

s32 ShakeCameraForGrab(s32 arg0) {
    return StartCameraShake((s32) &D_8018FE80);
}

void ReleaseGrabbed(Player *arg0) {
    SVECTOR a;
    SVECTOR b;
    u8 *p;

    p = arg0->unk18C;
    if (p != NULL) {
        a.vx = (u16)arg0->pos[0].h.i;
        a.vy = (u16)arg0->pos[1].h.i - 0x14;
        a.vz = (u16)arg0->pos[2].h.i;
        b.vx = AF(p, u16, 6);
        b.vy = AF(p, u16, 0xA);
        b.vz = AF(p, u16, 0xE);
        if (TraceMap(0, &a, &b) != 0) {
            AF(p, u16, 6) = b.vx;
            AF(p, u16, 0xA) = b.vy;
            AF(p, u16, 0xE) = b.vz;
        }
        PosToSVec(p + 4, &a);
        a.pad = 0;
        StrikeActor(p, 0x1C, 0, &a, arg0->model->rot.vy);
        arg0->unk18C = NULL;
    }
}

void GrabMissStep(Player *arg0) {
    if ((CheckPlayerGround(arg0) == 0) && (arg0->animStatus & 0x8000)) {
        D_8018FBA8[arg0->state](arg0);
        SetPlayerState(arg0, 0);
        StandStart(arg0);
    }
}

void ExitGrab(Player *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 p;

    if (arg0->abilPos[0] == 0) {
        p = (s32)arg0->unk18C;
        if (p != 0) {
            a.vx = arg0->pos[0].h.i;
            a.vy = arg0->pos[1].h.i - 0x14;
            a.vz = arg0->pos[2].h.i;
            b.vx = AF(p, s16, 6);
            b.vy = AF(p, s16, 0xA);
            b.vz = AF(p, s16, 0xE);
            if (TraceMap(0, &a, &b) != 0) {
                AF(p, s16, 6) = b.vx;
                AF(p, s16, 0xA) = b.vy;
                AF(p, s16, 0xE) = b.vz;
            }
            PosToSVec(p + 4, &a);
            a.pad = 0;
            StrikeActor(p, 0x1C, 0, &a, arg0->model->rot.vy);
            arg0->unk18C = 0;
        }
    }
    UpdateFlag10Part21(arg0);
    ClearDisplayFlag10(arg0);
    arg0->status &= ~2;
    StartFace(arg0, 0x11);
    arg0->status &= ~2;
}

void EnterGuard(Player *arg0) {
    SetPlayerState(arg0, 0x11);
    StartGuardWithFx(arg0);
}

s32 SwitchToGuard(s32 arg0) {
    SetPlayerState(arg0, 0x11);
    RunGuardState(arg0);
}

void EnterGuardNoFx(Player *arg0) {
    SetPlayerState(arg0, 0x11);
    StartGuard(arg0);
}

void RunGuardState(s32 arg0, s32 arg1) {
    D_8018FE94[AF(arg0, u16, 2)]();
}

void TryStartGuard(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        StartGuardWithFx(arg0);
    }
}

void StartGuardWithFx(Player *arg0, s32 arg1) {
    if (!(D_80078EC0 & 0x80)) {
        SpawnEffect(0x14, arg0, 0, 0, 0, 0, 0);
    }
    StartGuard(arg0);
}

extern s16 D_801152A0;
extern void func_80160818();
extern s32 SetGuarding();

void StartGuard(Player *arg0) {
    if (D_80078EC0 & 0x80) {
        func_80160818(arg0);
        return;
    }
    SetPlayerMotionIndex(arg0, 0x1D);
    arg0->status |= 1;
    SetGuarding(arg0);
    ClearDisplayFlag20(arg0);
    D_801152A0 = GetHeadingFromCamera(arg0);
    NextObjState(arg0);
}

extern void func_80175150();

void GuardStep(Player *arg0) {
    s32 sp10[4];
    s32 sp20[4];
    s32 temp;
    s32 d;

    if (!(GetObjPadHeld(arg0) & 8)) {
        D_8018FBA8[arg0->state](arg0);
        SetPlayerState(arg0, 0);
        RunPlayerStateHandler(arg0);
        return;
    }
    switch (CheckTechniqueTrigger(arg0)) {
    case 0:
        break;
    case 1:
        D_8018FBA8[arg0->state](arg0);
        func_80175150(arg0);
        return;
    case 2:
        StartPlayerActionScript(arg0->crestEvent, 0x01000000);
        return;
    }
    if (CanAssimThrow(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        TriggerAssimThrow(arg0);
        return;
    }
    if (CheckAsleepFlag(arg0) != 0) {
        return;
    }
    if (CanBackHop(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        TriggerBackHop(arg0);
        return;
    }
    if (CanSwingFusion(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        TriggerFusionCombo(arg0);
        return;
    }
    if (CanSwingLumina(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        TriggerLuminaSlash(arg0);
        return;
    }
    if (func_800CF8B4() != 0) {
        /* PORT NOTE: the original passes arg0 to GetCameraViewYaw, which the file defines (void) */
        arg0->model->rot.vy = ((u16)D_801152A0 + GetCameraViewYaw(arg0)) & 0xFFF;
    }
    temp = GetObjStickAngle(arg0);
    if ((s16)temp >= 0) {
        d = (s16)(temp - (u16)arg0->model->rot.vy);
        sp10[0] = 0;
        sp10[1] = 0;
        sp10[2] = 0xFFFC0000;
        RotateVectorY(d, sp10, sp20);
        SetObjPushV(arg0, sp20);
        SetVelFromPushKeepAxes(arg0);
        MoveObjByVel(arg0);
        SetPlayerMotionIndex(arg0, 0x1E);
    } else {
        SetPlayerMotionIndex(arg0, 0x1D);
    }
    if (PushBlock(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        SetPlayerState(arg0, 9);
        RunPushBlockState(arg0);
        return;
    }
    if (CheckPlayerGround(arg0) == 0) {
        SaveSafeGroundPos(arg0);
    }
}

void ExitGuard(Player *arg0, s32 arg1) {
    g_ChargeGauge = 0;
    arg0->status = (s32) (AF(arg0, s32, 0x44) & ~1);
    ClearGuarding((s32) arg0, arg1);
}

void EnterBackHop(s32 arg0) {
    SetPlayerState(arg0, 0x12);
    StartBackHop(arg0);
}

extern void RunBackHopState();

s32 SwitchToBackHop(s32 arg0) {
    SetPlayerState(arg0, 0x12);
    RunBackHopState(arg0);
}

void RunBackHopState(s32 arg0, s32 arg1) {
    D_8018FE9C[AF(arg0, u16, 2)]();
}

void TryStartBackHop(s32 arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        StartBackHop(arg0);
    }
}

extern u8 D_800D4C48;
extern u8 D_8018FB8C;

void StartBackHop(s32 arg0, s32 arg1) {
    LeavePlatform(arg0, arg1);
    ResetTiltVectors(arg0);
    SetPlayerMotion(arg0, &D_800D4C48);
    SetObjPushV(arg0, &D_8018FB8C);
    SetFallSpeed(arg0, -0xC0000);
    NextObjState(arg0);
}

void BackHopStep(s32 arg0) {
    AddFallSpeedLimited(arg0, 0x10000);
    ApplyFallSpeed(arg0);
    AddPushFacing(arg0, 0, 0, 0x1000);
    MoveObjByVel(arg0);
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        SetPlayerState(arg0, 0);
        RunPlayerStateHandler(arg0);
        return;
    }
    if (CheckLanding(arg0) == 0) {
        SetPlayerEvent02(arg0);
    }
}

void NopEF9C(void) {
}

void EnterMightyStrike(Player *arg0) {
    SetPlayerState(arg0, 0x13);
    StartMightyStrike(arg0);
}

void SwitchToMightyStrike(s32 arg0) {
    SetPlayerState(arg0, 0x13);
    RunMightyStrikeState(arg0);
}

void RunMightyStrikeState(arg0, arg1)
s32 arg0;
s32 arg1;
{
    D_8018FEA4[AF(arg0, u16, 2)]();
}

void TryStartMightyStrike(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        StartMightyStrike(arg0);
    }
}

void StartMightyStrike(Player *arg0) {
    SetPlayerMotionIndex(arg0, 0x17);
    StartFace(arg0, 0x15);
    SpawnEffectOn(5, arg0, 7, 0);
    arg0->abilPos[1] = -1;
    arg0->abilPos[0] = 0;
    arg0->status = (s32) ((s32)arg0->status & ~1);
    ClearGuarding(arg0);
    ResetAttackHit(arg0);
    arg0->toggles[2] = 8;
    ClearPlayerHittable(arg0);
    arg0->unkF6 = 0x19EB;
    NextObjState(arg0);
}

void MightyStrikeStep(u8 *arg0) {
    u16 temp_a0;

    temp_a0 = AF(arg0, u16, 0xB8);
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 2);
    if ((temp_a0 & 0xFFFF) == 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        SetPlayerState((s32) arg0, 0);
        RunPlayerStateHandler((s32) arg0);
        return;
    }
    if (temp_a0 & 0x4000) {
        ClearObj68Kind(0x19);
        ClearObj68Kind(0x1D);
        SpawnObj68(0x19, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
        SpawnObj68(0x19, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 1, /* extra? */ 0, /* extra? */ 1);
        SpawnObj68(0x1D, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 1);
        StartRumbleScript((s32) &D_80062BE8);
        PlaySe(0x9DA);
    }
    if (CheckPlayerGround((s32) arg0) == 0) {
        RunAttackHit((s32) arg0, (s32) AF(arg0, u8, 0x1AA));
    }
}

void ExitMightyStrike(Player *arg0) {
    ClearDisplayFlag20(arg0);
    StartFace(arg0, 0x11);
    arg0->status &= ~2;
    arg0->status &= ~1;
    ClearGuarding(arg0);
    arg0->unkF6 = 0x1000;
}

void EnterWallClimb(Player *arg0) {
    SetPlayerState(arg0, 0x14);
    StartWallClimb(arg0);
}

s32 SwitchToWallClimb(s32 arg0) {
    SetPlayerState(arg0, 0x14);
    RunWallClimbState(arg0);
}

void RunWallClimbState(s32 arg0, s32 arg1) {
    D_8018FEAC[AF(arg0, u16, 2)]();
}

void WallClimbState0(Player *arg0, s32 arg1) {
    StartWallClimb(arg0, arg1);
}

extern s32 SetPlayerEvent04();

void StartWallClimb(Player *arg0) {
    SVECTOR a;
    SVECTOR b;

    SetPlayerMotionIndex(arg0, 0x18);
    AF(arg0, u8, 0x244) = 0;
    AF(arg0, u8, 0x245) = 0;
    SetObjTimer(arg0, 0);
    func_80148534((s32) &a, (s32) &b);
    SpawnEffect(0x25, (StageActor *) arg0, arg0->pos[0].h.i, arg0->pos[1].h.i - 0x14, arg0->pos[2].h.i, 0, 0);
    SpawnEffect(0x25, (StageActor *) arg0, arg0->pos[0].h.i, arg0->pos[1].h.i - 0x14, arg0->pos[2].h.i, 1, 0);
    PlaySe(0x56D);
    SetPlayerEvent04(arg0);
    NextObjState(arg0);
}

extern u8 D_80062BD0;
extern u8 D_8018FEB4;
extern u8 D_8018FEC4;
extern u8 D_8018FED4;

void WallClimbStep(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 var_a0;
    u16 temp_v1;
    u16 temp_a1;

    if (((AF(arg0, s32, 0x44) & 0x100) && (HasNoPlayerAction((s32) arg0) != 0)) || (CanJump((s32) arg0) != 0)) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        AF(arg0, u8, 0x1BE) = 0xA;
        TriggerJumpRising((s32) arg0);
        SetFallSpeed(arg0, 0);
        return;
    }
    if (AF(arg0, u8, 0x245) == 0) {
        if (AF(arg0, u8, 0x244) == 0) {
            if (GetObjPadPressed((s32) arg0) & 0x10) {
                AF(arg0, u8, 0x244) = 1;
                AF(arg0, u8, 0x245) = 1;
            }
        } else if (GetObjPadPressed((s32) arg0) & 0x80) {
            AF(arg0, u8, 0x244) = 0;
            AF(arg0, u8, 0x245) = 1;
        }
    }
    temp_v1 = AF(arg0, u16, 0xB8);
    if (temp_v1 & 0x3000) {
        if (temp_v1 & 0x2000) {
            func_801484B0((s32) &a, (s32) &b);
            var_a0 = 0x56D;
        } else {
            func_80148534((s32) &a, (s32) &b);
            var_a0 = 0x56E;
        }
        PlaySe(var_a0);
        StartRumbleScript(&D_80062BD0);
        SpawnEffect(0x25, (StageActor *) arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA) - 0x14, AF(arg0, s16, 0xE), 0, 0);
        SpawnEffect(0x25, (StageActor *) arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA) - 0x14, AF(arg0, s16, 0xE), 1, 0);
    }
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        if (AF(arg0, u8, 0x245) != 0) {
            AF(arg0, u8, 0x245) = 0;
            AF(arg0, u16, 0xB8) = AF(arg0, u16, 0xBA);
            if (ObjDownHeld(arg0) != 0) {
                SetObjPushV(arg0, &D_8018FEB4);
            } else {
                SetObjPushV(arg0, &D_8018FEC4);
            }
        }
    } else {
        AF(arg0, s16, 0x246) = AF(arg0, s16, 6);
        AF(arg0, s16, 0x248) = AF(arg0, s16, 0xA);
        AF(arg0, s16, 0x24A) = AF(arg0, s16, 0xE);
        SetVelFromPushKeepAxes(arg0);
        MoveObjByVel(arg0);
        if (MoveHitsSolidActor(arg0) != 0) {
            AF(arg0, s16, 6) = AF(arg0, s16, 0x246);
            AF(arg0, s16, 0xA) = AF(arg0, s16, 0x248);
            AF(arg0, s16, 0xE) = AF(arg0, s16, 0x24A);
        }
    }
    if (IsClimbWallAhead(arg0) == 0) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        AF(arg0, u8, 0x1BE) = 0xA;
        TriggerJumpRising((s32) arg0);
        SetFallSpeed(arg0, -0x180000);
        SetObjPushV(arg0, &D_8018FED4);
        SetObjTimer(arg0, 0x10);
        return;
    }
    PushOutOfSolidActors(arg0);
    func_8014FA04(arg0);
    SetPlayerEvent04(arg0);
}

void ExitWallClimb(Player *arg0, s32 arg1) {
    ClearDisplayFlag20(arg0);
    StartFace(arg0, 0x11);
}

void EnterAssimThrow(Player *arg0) {
    SetPlayerState(arg0, 0x15);
    StartAssimThrow(arg0);
}

extern void RunAssimThrowState();

s32 SwitchToAssimThrow(s32 arg0) {
    SetPlayerState(arg0, 0x15);
    RunAssimThrowState(arg0);
}

void RunAssimThrowState(s32 arg0, s32 arg1) {
    D_8018FEE4[AF(arg0, u16, 2)]();
}

void TryStartAssimThrow(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        StartAssimThrow(arg0);
    }
}

void StartAssimThrow(Player *arg0, s32 arg1) {
    ClearDisplayFlag20(arg0);
    SetPlayerMotionIndex(arg0, 0x1F);
    D_8011F730 |= 5;
    NextObjState(arg0);
}

void AssimThrowStep(u8 *arg0) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0xB8);
    if (!(temp_v1 & 0x4000)) {
        if (temp_v1 & 0x8000) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            SetPlayerState((s32) arg0, 0);
            RunPlayerStateHandler((s32) arg0);
            return;
        }
        goto block_4;
    }
    SpawnObj68(1, (s32) arg0, 0, -0x1E, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
block_4:
    CheckPlayerGround((s32) arg0);
}

void StartNoBpMotion(Player *arg0) {
    SetPlayerState(arg0, 0x15);
    if (StayedGrounded(arg0) != 0) {
        SetPlayerMotionIndex(arg0, 0x22);
        StartFace(arg0, 0x1A);
        SetObjState(arg0, 2);
    }
}

void NoBpMotionStep(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)]();
        SetPlayerState((s32) arg0, 0);
        RunPlayerStateHandler((s32) arg0);
        return;
    }
    CheckPlayerGround((s32) arg0);
}

void ExitAssimThrow(Player *arg0) {
    StartFace(arg0, 0x11);
}

void EnterAssimilate(Player *arg0) {
    SetPlayerState(arg0, 0x16);
    StartAssimilate(arg0);
}

s32 SwitchToAssimilate(s32 arg0) {
    SetPlayerState(arg0, 0x16);
    RunAssimilateState(arg0);
}

void RunAssimilateState(s32 arg0, s32 arg1) {
    D_8018FEF0[AF(arg0, u16, 2)]();
}

void AssimilateState0(Player *arg0) {
    s32 temp_v0;

    temp_v0 = RunPlayerGroundSteps(arg0, 0);
    if ((temp_v0 == 0) || (temp_v0 == 0x8000)) {
        CancelAssimilate(arg0);
        arg0->unk184 = (s32) (arg0->unk184 | 0x80000000);
        D_8018FBA8[arg0->state](arg0);
        SetPlayerState(arg0, 3);
        func_8015BE94(arg0);
        return;
    }
    if (temp_v0 & 0x4000) {
        CancelAssimilate(arg0);
        arg0->unk184 = (s32) (arg0->unk184 | 0x80000000);
        D_8018FBA8[arg0->state](arg0);
        SetPlayerState(arg0, 4);
        StartSlopeSlide(arg0);
        return;
    }
    StartAssimilate(arg0);
}

void StartAssimilate(Player *arg0) {
    if (arg0->unk184 < 0) {
        D_8018FBA8[arg0->state](arg0);
        SetPlayerState(arg0, 0);
        RunPlayerStateHandler(arg0);
        return;
    }
    D_80078EC1 = 0;
    SetPlayerMotionIndex(arg0, 0x20);
    StartFace(arg0, 0x18);
    SpawnEffect(0x16, arg0, 0, 0, 0, 0, 0);
    PlaySe(0x44F);
    ClearDisplayFlag20(arg0);
    UpdateFlag10Part21(arg0);
    D_801270C0 = 2;
    D_800B9A17 = 0;
    NextObjState(arg0);
}

void AssimilateTakeStep(s32 arg0) {
    if (D_800AE6B0 & 0x80FFFFFF) {
        CancelAssimilate(arg0);
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        SetPlayerState(arg0, 0);
        RunPlayerStateHandler(arg0);
        return;
    }
    AF(arg0, u8, 0x197) = 0;
    AF(arg0, u8, 0xBE) = 0;
    AF(arg0, u8, 0xBF) = 0;
    AF(arg0, u8, 0x1A0) = (s8) AF(arg0, s32, 0x184);
    SetState4EIfIdle(arg0, 1);
    NextObjState(arg0);
}

void OpenAbilityNameMessage(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    PlaySe(0x18, arg1, arg2, arg3);
    AF(arg0, s32, 0x198) = OpenMessage(D_8018FF04[AF(arg0, u8, 0x1A0)]);
    NextObjState((s32) arg0);
}

void WaitAbilityNameMessage(u8 *arg0) {
    if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
        PlaySe(0x19);
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        if ((GetOptionD() == 0) && (func_80165700((s32) arg0, (s32) AF(arg0, u8, 0x1A0)) & 0xFF)) {
            SpawnObj68(0x24, (s32) arg0, 0, 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0, /* extra? */ 0);
            PlaySe(0x989);
        }
        NextObjState((s32) arg0);
    }
}

void AssimilateEndStep(u8 *arg0) {
    u16 temp_v0;

    if (AF(arg0, u16, 0xB8) & 0x8000) {
        temp_v0 = AF(arg0, u16, 0xBA);
        if (temp_v0 == 0) {
            D_8018FBA8[AF(arg0, u16, 0)]();
            SetPlayerState((s32) arg0, 0);
            RunPlayerStateHandler((s32) arg0);
            return;
        }
        AF(arg0, u16, 0xB8) = temp_v0;
        goto block_4;
    }
block_4:
    if (AF(arg0, u16, 0xB8) & 0x4000) {
        StartFace((s32) arg0, 0x11);
    }
    CheckPlayerGround((s32) arg0);
}

extern u32 GetAbilityBpBonus();
extern void SetAbilityTimer();
extern void RestoreStatusOnce();
extern void ClearAbilityUsed();
extern void ClearAssimilateState();

void ExitAssimilate(Player *arg0) {
    s32 temp_a2;
    u8 temp_v0;

    if (D_800AE6B0 & 0x80FFFFFF) {
        CancelAssimilate(arg0);
        D_8018FBA8[arg0->state](arg0);
        SetPlayerState(arg0, 0);
        RunPlayerStateHandler(arg0);
        return;
    }
    temp_a2 = arg0->unk184;
    if (temp_a2 < 0) {
        GainBpShown(arg0, GetAbilityBpBonus(arg0, temp_a2 & 0xFF) & 0xFF);
    } else {
        if (arg0->unk1A0 != arg0->unk196) {
            arg0->unk1A0 = temp_a2;
            arg0->abilStep = 0;
            arg0->unkBE = 0;
            arg0->unkBF = 0;
            SetState4EIfIdle(arg0, 1);
        }
        temp_v0 = arg0->unk1A0;
        D_80078EC1 = temp_v0;
        D_80078EC2 = temp_v0;
        SetAbilityTimer(arg0, temp_v0);
        RestoreStatusOnce(arg0);
        ClearAbilityUsed(arg0);
        StartFace(arg0, 0x11);
        D_801270C0 = 1;
    }
    ClearAssimilateState(arg0);
}

void ClearAssimilateState(Player *arg0) {
    arg0->unk184 = 0;
    arg0->unk18A = 0;
    arg0->absorbCount = 0;
    AF(arg0, s32, 0x44) = (s32) ((s32)arg0->status & ~0x10);
    D_800B9A17 = 1;
}

void CancelAssimilate(s32 arg0) {
    AF(arg0, s32, 0x184) = 0;
    AF(arg0, s16, 0x18A) = 0;
    AF(arg0, s16, 0x188) = 0;
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~0x10);
    D_800B9A17 = 1;
    StartFace(arg0, 0x11);
    D_801270C0 = 1;
}

void func_801600D0(Player *arg0) {
    SetPlayerState(arg0, 0x18);
    func_801601AC(arg0);
}

void func_80160104(s32 arg0) {
    SetPlayerState(arg0, 0x18);
    RunKind18State(arg0);
}

void RunKind18State(s32 arg0, s32 arg1) {
    D_8018FF80[AF(arg0, u16, 2)]();
}

void func_80160174(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        func_801601AC(arg0);
    }
}

void func_801601AC(Player *arg0, s32 arg1) {
    SetPlayerMotionIndex(arg0, 0x21);
    SetObjState(arg0, 1);
}

void func_801601E4(Player *arg0) {
    if (arg0->animStatus == 0x8000) {
        SetPlayerMotionIndex((s32) arg0, 0x22);
        StartFace((s32) arg0, 0x1A);
        NextObjState((s32) arg0);
        return;
    }
    CheckPlayerGround((s32) arg0);
}

void func_80160244(Player *arg0) {
    if (arg0->animStatus == 0x8000) {
        SetPlayerMotionIndex((s32) arg0, 0x23);
        StartFace((s32) arg0, 0x1B);
        NextObjState((s32) arg0);
        return;
    }
    CheckPlayerGround((s32) arg0);
}

void func_801602A4(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) == 0x8000) {
        D_8018FBA8[AF(arg0, u16, 0)]();
        StartFace((s32) arg0, 0x11);
        SetPlayerState((s32) arg0, 0);
        RunPlayerStateHandler((s32) arg0);
        return;
    }
    CheckPlayerGround((s32) arg0);
}

void Nop0032C(void) {
}

void EnterGuardRecoil(Player *arg0) {
    SetPlayerState(arg0, 0x1B);
    StartGuardRecoil(arg0);
}

s32 SwitchToGuardRecoil(s32 arg0) {
    SetPlayerState(arg0, 0x1B);
    RunGuardRecoilState(arg0);
}

void RunGuardRecoilState(s32 arg0, s32 arg1) {
    D_8018FF90[AF(arg0, u16, 2)]();
}

void TryStartGuardRecoil(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        StartGuardRecoil(arg0);
    }
}

extern u8 D_80062BD0;
extern s16 D_801152A0;

void StartGuardRecoil(Player *arg0) {
    VECTOR v;
    s32 out[12];
    s32 d;
    s16 angle;
    s32 x, y, z, t;

    StartRumbleScript(&D_80062BD0);
    ClearPlayerHittable(arg0);
    angle = (u16)arg0->hitAngle - (u16)arg0->model->rot.vy;
    PackAngles10((u8 *)arg0 + 0xE8, &d);
    x = arg0->hitP0.vx;
    t = d;
    y = arg0->hitP0.vy;
    z = arg0->hitP0.vz;
    d = t | 0x80000000;
    SpawnEffect(6, (StageActor *)arg0, x, y, z, d, 0);
    PlaySe(0x43D);
    v.vx = 0;
    v.vy = 0;
    v.vz = 0xFFFA0000;
    RotateVectorY(angle, &v, out);
    SetObjPushV(arg0, out);
    v.vx = 0;
    v.vy = 0;
    v.vz = 0x8000;
    RotateVectorY(angle, &v, (u8 *)arg0 + 0x234);
    SetObjTimer(arg0, 8);
    ClearDisplayFlag20((Player *)arg0);
    D_801152A0 = GetHeadingFromCamera(arg0);
    NextObjState(arg0);
}

void GuardRecoilStep(Player *arg0) {
    ClearPlayerHittable(arg0);
    SetGuarding(arg0);
    if ((D_80078EC0 & 0x7F) && (GetObjPadPressed(arg0) & 0x90)) {
        if (g_ChargeGauge == 0x80) {
            D_8018FBA8[arg0->state](arg0);
            SetPlayerState(arg0, 0x13);
            RunMightyStrikeState(arg0);
            return;
        }
        if (CanSwingLumina(arg0) != 0) {
            D_8018FBA8[arg0->state](arg0);
            TriggerLuminaSlash(arg0);
            return;
        }
    }
    if (CanSwingFusion(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        TriggerFusionCombo(arg0);
        return;
    }
    if (TickObjTimer(arg0) != 0) {
        if (GetObjPadHeld(arg0) & 8) {
            D_8018FBA8[arg0->state](arg0);
            SetPlayerState(arg0, 0x11);
            StartGuard(arg0);
            return;
        }
        D_8018FBA8[arg0->state](arg0);
        SetPlayerState(arg0, 0);
        RunPlayerStateHandler(arg0);
        return;
    }
    if (func_800CF8B4() != 0) {
        arg0->model->rot.vy = (D_801152A0 + GetCameraViewYaw(arg0)) & 0xFFF;
    }
    AddPushFacing(arg0, arg0->abilPos[0], arg0->abilPos[1], arg0->abilPos[2]);
    MoveObjByVel(arg0);
    if (PushBlock(arg0) != 0) {
        D_8018FBA8[arg0->state](arg0);
        SetPlayerState(arg0, 9);
        RunPushBlockState(arg0);
        return;
    }
    CheckPlayerGround(arg0);
}

s32 DropGuard(s32 arg0) {
    AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) & ~1);
    return ClearGuarding(arg0);
}

void func_801607E4(Player *arg0) {
    SetPlayerState(arg0, 0x1C);
    func_801608C0(arg0);
}

extern void RunSleepChargeState();

void func_80160818(Player *arg0) {
    SetPlayerState(arg0, 0x1C);
    RunSleepChargeState(arg0);
}

void RunSleepChargeState(Player *arg0, s32 arg1) {
    D_8018FF98[arg0->sub]();
}

void func_80160888(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        func_801608C0(arg0);
    }
}

void func_801608C0(Player *arg0, s32 arg1) {
    arg0->status = (s32) ((s32)arg0->status | 0x41);
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    SetPlayerMotionIndex(arg0, 0x24);
    StartFace(arg0, 0x1D);
    NextObjState(arg0);
}

void func_80160920(Player *arg0) {
    if (!(GetObjPadHeld(arg0) & 8)) {
        D_8018FBA8[arg0->state](arg0);
        func_80160A74(arg0);
        return;
    }
    if ((CheckPlayerGround(arg0) == 0) && (arg0->animStatus == 0x8000)) {
        SetPlayerMotionIndex(arg0, 0x25);
        NextObjState(arg0);
    }
}

void func_801609B8(s32 arg0) {
    if (!(GetObjPadHeld(arg0) & 8)) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        func_80160A74(arg0);
        return;
    }
    CheckPlayerGround(arg0);
}

void func_80160A28(Player *arg0) {
    UpdateFlag10Part21(arg0);
    arg0->status &= ~0x40;
    arg0->status &= ~1;
    StartFace(arg0, 0x11);
}

void func_80160A74(s32 arg0) {
    if (g_ChargeGauge == 0x80) {
        SwitchToAsleep();
        return;
    }
    SetPlayerState(arg0, 0);
    RunPlayerStateHandler(arg0);
}

void EnterAsleep(Player *arg0) {
    SetPlayerState(arg0, 0x1D);
    StartAsleep(arg0);
}

extern void RunAsleepState();

s32 SwitchToAsleep(s32 arg0) {
    SetPlayerState(arg0, 0x1D);
    RunAsleepState(arg0);
}

void RunAsleepState(s32 arg0, s32 arg1) {
    D_8018FFA4[AF(arg0, u16, 2)]();
}

void TryStartAsleep(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        StartAsleep(arg0);
        return;
    }
    arg0->unk1AC = 0;
}

void StartAsleep(Player *arg0, s32 arg1) {
    arg0->status = (s32) ((s32)arg0->status | 0x80);
    ClearDisplayFlag20(arg0);
    ClearDisplayFlag10(arg0);
    SetPlayerMotionIndex(arg0, 0x26);
    StartFace(arg0, 0x1E);
    arg0->abilPos[0] = 0;
    arg0->model->rot.vx = 0xFE9;
    arg0->abilPos[1] = 0;
    NextObjState(arg0);
}

void AsleepTiltStep(s32 arg0) {
    void *temp_a0;
    void *temp_v1;

    if (CheckPlayerGround(arg0) == 0) {
        temp_a0 = AF(arg0, void *, 0x20);
        AF(arg0, s32, 0x238) = (s32) (AF(arg0, s32, 0x238) + 0x1C000);
        AF(temp_a0, u16, 0x10) = (u16) ((AF(temp_a0, u16, 0x10) - AF(arg0, u16, 0x23A)) & 0xFFF);
        temp_v1 = AF(arg0, void *, 0x20);
        if ((s16) AF(temp_v1, u16, 0x10) < 0xC00) {
            AF(temp_v1, u16, 0x10) = 0xC00U;
            AF(arg0, s16, 0xB8) = 1;
            NextObjState(arg0);
        }
    }
}

void AsleepSettleStep(Player *arg0) {
    if ((CheckPlayerGround(arg0) == 0) && (arg0->animStatus == 0x8000)) {
        SetPlayerMotionIndex(arg0, 0x27);
        StartFace(arg0, 0x1F);
        NextObjState(arg0);
    }
}

void AsleepStep(s32 arg0) {
    s32 temp;

    if (AF(arg0, s32, 0x44) & 0x10) {
        D_8018FBA8[AF(arg0, u16, 0)](arg0);
        SetPlayerState(arg0, 0);
        RunPlayerStateHandler(arg0);
        return;
    }
    if (AF(arg0, s32, 0x1AC) == 0) {
        if (GetObjPadPressed(arg0) & 0xF0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            SetPlayerState(arg0, 0);
            RunPlayerStateHandler(arg0);
            return;
        }
    } else {
        AF(arg0, s32, 0x1AC) -= 0xAAA8;
        if (AF(arg0, s32, 0x1AC) < 0) {
            D_8018FBA8[AF(arg0, u16, 0)](arg0);
            SetPlayerState(arg0, 0);
            RunPlayerStateHandler(arg0);
            return;
        }
    }
    CheckPlayerGround(arg0);
}

void ExitAsleep(Player *arg0) {
    arg0->unk1AC = 0;
    arg0->model->rot.vx = 0;
    UpdateFlag10Part21(arg0);
    arg0->status &= ~0x180;
    StartFace(arg0, 0x11);
}

void EnterRecover(Player *arg0) {
    SetPlayerState(arg0, 0x1E);
    StartRecover(arg0);
}

void SwitchToRecover(s32 arg0) {
    SetPlayerState(arg0, 0x1E);
    RunRecoverState(arg0);
}

void RunRecoverState(s32 arg0, s32 arg1) {
    D_8018FFB4[AF(arg0, u16, 2)]();
}

void RecoverState0(Player *arg0, s32 arg1) {
    StartRecover(arg0, arg1);
}

void StartRecover(Player *arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    SetPlayerMotionIndex(arg0, 4);
    StartFace(arg0, 0x11);
    D_801270C0 = 2;
    SetPropsActive(0);
    D_800B9A17 = 0;
    SetObjTimer(arg0, 0x10);
    NextObjState(arg0);
}

void RecoverHealStep(s32 arg0) {
    if (TickObjTimer(arg0) != 0) {
        func_800D0F4C(0xA);
        AddHp(arg0, 0x96, 0);
        AddBp(arg0, 0x96);
        AF(arg0, s32, 0x198) = OpenMessage((s32) &D_80110EC0);
        NextObjState(arg0);
    }
}

void RecoverMessageStep(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        NextObjState(arg0);
    }
}

void RecoverEndStep(s32 arg0, s32 arg1) {
    ClearPlayerHittable(arg0, arg1);
    D_8018FBA8[AF(arg0, u16, 0)](arg0);
    SetPlayerState(arg0, 0);
    RunPlayerStateHandler(arg0);
}

void ExitRecover(Player *arg0) {
    if (GetMessageAnswer(arg0->unk198) != 0) {
        CloseMessage(arg0->unk198);
        arg0->unk198 = 0;
    }
    D_801270C0 = 1;
    SetPropsActive(1);
    D_800B9A17 = 1;
}

void Nop10FC(void) {
}

s32 StayedGrounded(s32 arg0, s32 arg1) {
    return CheckPlayerGround(arg0) == 0;
}

extern void SaveSafeGroundPos();
extern s16 D_801152A0;
extern s32 IsTechnique6Active();

void StartFall(Player *arg0) {
    arg0->unk24A = 0;
    SaveSafeGroundPos(arg0);
    LeavePlatform(arg0);
    ResetTiltVectors(arg0);
    if (arg0->push[2] < -0xBA000) {
        arg0->push[2] = -0xBA000;
    }
    if (arg0->push[0] | arg0->push[2]) {
        SetPlayerMotionIndex(arg0, 0xF);
    } else {
        SetPlayerMotionIndex(arg0, 0xD);
    }
    StartFace(arg0, 0x22);
    arg0->unk5C = 0;
    arg0->unk240 = 0;
    SetObjTimer(arg0, 4);
    D_801152A0 = GetHeadingFromCamera(arg0);
    ClearDisplayFlag20(arg0);
    SetPlayerEvent02(arg0);
    if (IsTechnique6Active(arg0) != 0) {
        PlaySe(0x8E1);
    }
}

s32 CheckPlayerGround(s32 arg0) {
    return FallOrSlideOnResult(arg0, RunPlayerGroundSteps(arg0, 0));
}

s32 CheckPlayerGroundNoCollide(s32 arg0) {
    return FallOrSlideOnResult(arg0, RunPlayerGroundSteps(arg0, 1));
}

s32 CheckPlayerGroundUphill(Player *arg0) {
    D_801152BC = 0;
    return FallOrSlideBlockUphill(arg0, RunPlayerGroundSteps(arg0, 1));
}

s32 RunPlayerGroundSteps(s32 arg0, s32 arg1) {
    s32 ret;

    if (!(arg1 & 1)) {
        CollidePlayerMove(arg0);
    }
    ret = ProbePlatformByMove(arg0);
    ret |= ProbeGroundByMove(arg0);
    return ret;
}

extern s32 StartPlayerSlide();

s32 FallOrSlideOnResult(s32 arg0, s32 arg1) {
    if ((arg1 == 0) || (arg1 == 0x8000)) {
        LeavePlayerKind(arg0, arg1);
        StartPlayerFall(arg0);
        return 1;
    }
    if (arg1 & 0x4000) {
        LeavePlayerKind(arg0, arg1);
        StartPlayerSlide(arg0);
        return 1;
    }
    return 0;
}

s32 FallOrSlideBlockUphill(Player *arg0, s32 arg1) {
    if ((arg1 == 0) || (arg1 == 0x8000)) {
        LeavePlayerKind(arg0);
        StartPlayerFall(arg0);
        return 1;
    }
    if (arg1 & 0x4000) {
        if ((D_801152BC != 0) || (arg0->pos[1].h.i >= arg0->respawn[1])) {
            LeavePlayerKind(arg0);
            StartPlayerSlide(arg0);
            return 1;
        }
        SVecToPos((u8 *)arg0 + 0x88, (u8 *)arg0 + 4);
    }
    return 0;
}

extern s32 func_8016163C();
extern s32 RunPlayerAirSteps();

s32 CheckLanding(s32 arg0) {
    return func_8016163C(arg0, RunPlayerAirSteps(arg0, 0));
}

extern s32 func_80161774();

s32 CheckLandingKeepState(s32 arg0) {
    return func_80161774(arg0, RunPlayerAirSteps(arg0, 0));
}

extern s32 LandingResultCode();

s32 CheckLandingBy1C6(s32 arg0) {
    s32 temp_v0;
    s32 ret;

    temp_v0 = RunPlayerAirSteps(arg0, 0);
    if (AF(arg0, u8, 0x1C6) == 0) {
        ret = func_80161774(arg0, temp_v0);
    } else {
        ret = LandingResultCode(arg0, temp_v0) & ~7;
    }
    return ret;
}

extern s32 HandleLandingFx();

s32 CheckLandingFx(s32 arg0) {
    HandleLandingFx(arg0, RunPlayerAirSteps(arg0, 0));
}

extern s32 HandleLandingDust();

s32 CheckLandingDust(s32 arg0) {
    HandleLandingDust(arg0, RunPlayerAirSteps(arg0, 0));
}

s32 CheckLandingNoBump(s32 arg0) {
    func_8016163C(arg0, RunPlayerAirSteps(arg0, 1));
}

s32 CheckLandingKeepKindNoBump(s32 arg0) {
    return func_80161774(arg0, RunPlayerAirSteps(arg0, 1));
}

s32 RunPlayerAirSteps(s32 arg0, s32 arg1) {
    s32 var_s1;

    var_s1 = 0;
    if (!(arg1 & 1) && (PushOutOfSolidActors(arg0) != 0)) {
        ClearObjPush(arg0);
    }
    if (AF(arg0, s32, 0x34) > 0) {
        var_s1 |= ProbePlatformByMove(arg0);
    }
    return var_s1 | func_8014FA04(arg0);
}

s32 func_8016163C(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        LeavePlayerKind(arg0);
        EnterPlayerStanding(arg0);
        SpawnEffect2(arg0, 1);
        PlayLandSe(arg0, AF(arg0, u16, 0x16E));
        return 1;
    }
    if (arg1 & 0x4000) {
        LeavePlayerKind(arg0);
        StartPlayerSlide(arg0);
        SpawnEffect2(arg0, 1);
        PlayLandSe(arg0, AF(arg0, u16, 0x16E));
        return 2;
    }
    if (arg1 & 0x2000) {
        LeavePlayerKind(arg0);
        EnterPlayerStanding(arg0);
        SpawnEffect2(arg0, 1);
        PlayLandSe(arg0, AF(arg0, u16, 0x16E));
        return 4;
    }
    if (arg1 & 0x8000) {
        if (AF(arg0, u16, 0x16C) != 0x15) {
            return 0;
        }
        if (CanWallClimb(arg0) != 0) {
            LeavePlayerKind(arg0);
            SwitchToWallClimb(arg0);
            AF(AF(arg0, void *, 0x20), s16, 0x12) = ratan2(g_WallNormal, D_801152B4);
            return 8;
        }
    }
    return 0;
}

s32 func_80161774(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        SpawnEffect2(arg0, 1);
        PlayLandSe(arg0, AF(arg0, u16, 0x16E));
        return 1;
    }
    if (arg1 & 0x4000) {
        LeavePlayerKind(arg0);
        StartPlayerSlide(arg0);
        SpawnEffect2(arg0, 1);
        PlayLandSe(arg0, AF(arg0, u16, 0x16E));
        return 2;
    }
    if (arg1 & 0x2000) {
        SpawnEffect2(arg0, 1);
        PlayLandSe(arg0, AF(arg0, u16, 0x16E));
        return 4;
    }
    if ((arg1 & 0x8000) && AF(arg0, u16, 0x16C) == 0x15 && CanWallClimb(arg0) != 0) {
        LeavePlayerKind(arg0);
        SwitchToWallClimb(arg0);
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = ratan2(g_WallNormal, D_801152B4);
        return 8;
    }
    return 0;
}

s32 HandleLandingFx(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        SpawnEffect2(arg0, 1);
        PlayLandSe(arg0, AF(arg0, u16, 0x16E));
        return 1;
    }
    if (arg1 & 0x4000) {
        SpawnEffect2(arg0, 1);
        PlayLandSe(arg0, AF(arg0, u16, 0x16E));
        return 2;
    }
    if (arg1 & 0x2000) {
        SpawnEffect2(arg0, 1);
        PlayLandSe(arg0, AF(arg0, u16, 0x16E));
        return 4;
    }
    return 0;
}

s32 HandleLandingDust(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        SpawnEffect2(arg0, 1);
        return 1;
    } else if (arg1 & 0x4000) {
        SpawnEffect2(arg0, 1);
        return 2;
    } else if (arg1 & 0x2000) {
        SpawnEffect2(arg0, 1);
        return 4;
    }
    return 0;
}

s32 LandingResultCode(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        return 1;
    } else if (arg1 & 0x4000) {
        return 2;
    } else if (arg1 & 0x2000) {
        return 4;
    }
    return 0;
}

s32 GetActiveTechnique(s32 arg0) {
    if (AF(arg0, s16, 0x1C8) == 0) {
        return 0;
    }
    return D_80078EC0 & 0x7F;
}

s32 IsTechnique3Active(arg0, arg1)
s32 arg0;
s32 arg1;
{
    if (AF(arg0, s16, 0x1C8) != 0) {
        return (D_80078EC0 & 0x7F) == 3;
    }
    return 0;
}

s32 IsTechnique4Active(s32 arg0) {
    if (AF(arg0, s16, 0x1C8) != 0) {
        return (D_80078EC0 & 0x7F) == 4;
    }
    return 0;
}

s32 IsTechnique5Active(s32 arg0) {
    if (AF(arg0, s16, 0x1C8) != 0) {
        return (D_80078EC0 & 0x7F) == 5;
    }
    return 0;
}

s32 IsTechnique6Active(s32 arg0) {
    if (AF(arg0, s16, 0x1C8) != 0) {
        return (D_80078EC0 & 0x7F) == 6;
    }
    return 0;
}

static inline s32 h_80161A90(Player *arg0) {
    if (arg0->unk1C8[0] == 0) {
        return 0;
    }
    return (D_80078EC0 & 0x7F) == 6;
}

void TickGlideTimer(Player *arg0) {
    u8 *w = &g_Status;

    if (h_80161A90(arg0)) {
        arg0->unk1C8[0]--;
    }
    if ((w[0x48] & 0x7F) == 6 && arg0->unk1C8[0] == 0) {
        FreeEffectsByKind(0x3B);
    }
}

s32 CheckAssimilatePending(s32 arg0) {
    if ((D_800AE6B0 & 0x80FFFFFF) || !(AF(arg0, s32, 0x44) & 0x10)) {
        return 0;
    }
    LeavePlayerKind(arg0);
    SwitchToAssimilate(arg0);
    return 1;
}

s32 CheckAsleepFlag(s32 arg0) {
    if ((AF(arg0, s32, 0x44) & 0x100) && HasNoPlayerAction(arg0)) {
        LeavePlayerKind(arg0);
        TriggerAsleep(arg0);
        return 1;
    }
    return 0;
}

s32 CheckUseAbility(Player *arg0) {
    if (CanUseAbility() != 0) {
        LeavePlayerKind(arg0);
        TriggerUseAbility(arg0);
        return 1;
    }
    return 0;
}

extern u16 D_8018FFC4[];
extern u16 D_8018FFC6[];

void PlayFootstep(s32 arg0, s32 arg1) {
    if ((u32) arg1 < 8) {
        if (AF(arg0, u8, 0xDA) != 0) {
            PlaySe(D_8018FFC4[arg1 * 2]);
            AF(arg0, u8, 0xDA) = 0;
        } else {
            PlaySe(D_8018FFC6[arg1 * 2]);
            AF(arg0, u8, 0xDA) = 1;
        }
    }
}

void func_80161C98(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    if (arg1 < 8U) {
        PlaySe((s32) (*(u16 *)((u8 *)D_8018FFE4 + ((arg1 * 2)) * 1)), (s32) arg1, arg2, arg3);
    }
}

void func_80161CD0(s32 arg0, s32 arg1) {
    if (((u32) arg1 < 8U) && (func_800CF8B4() != 0)) {
        PlaySe((s32) (*(u16 *)((u8 *)D_8018FFF4 + ((arg1 * 2)) * 1)));
    }
}

void PlayLandSe(s32 arg0, s32 arg1) {
    if ((u32) arg1 < 8U) {
        PlaySe((s32) (*(u16 *)((u8 *)D_80190004 + ((arg1 * 2)) * 1)), arg1);
    }
}

s32 UpdateDeadlines(Player *arg0) {
    UpdateDeadline8();
    return UpdateDeadline12(arg0);
}

extern s32 g_EntryPoint;
extern u8 D_80190048;
extern s32 func_800D1734();

s32 StartDeadlineEvent(void) {
    s32 var_v0;

    var_v0 = D_800AE6B0 & 0x80FFFFFF;
    if (var_v0 == 0) {
        var_v0 = g_EntryPoint & 0x80FFFFFF;
        if (var_v0 == 0) {
            var_v0 = GetFlag(0x141) & 0xFF;
            if (var_v0 != 0) {
                SetFlag(0x141, 0);
                SetFlag(0x95, 1);
                var_v0 = func_800D1734((s32) &D_80190048);
            }
        }
    }
    return var_v0;
}

extern s16 g_ClockMinute;
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern u16 D_800B5BD8;
extern s16 D_800B5BE0;
extern s16 D_800B5BE2;
extern u8 D_800B5BFF;
extern s16 D_800B5C04;
extern u16 D_800B5C10;
extern s16 D_800B5C18;
extern s16 D_800B5C1A;
extern u8 D_800B5C37;
extern s16 D_800B5C3C;
extern u16 D_800B5C48;
extern s16 D_800B5C50;
extern s16 D_800B5C52;
extern s16 D_800B5C74;
extern s32 D_801ED534;
extern s32 D_801ED538;
extern u8 D_80190014;
extern u8 D_80190034;
extern u8 D_801ED53C;
extern u8 D_801ED564;
extern u8 D_801ED57C;
extern s16 SjisToGlyphs();
extern void InitTextSprite();
extern void FormatDigitGlyphs();
extern void InitNumberSprite();
extern s32 GetDeadline8Left();
extern s32 ExpireDeadline8();

void UpdateDeadline8(u16 *arg0) {
    u8 *w = (u8 *)&D_800AF630;
    s32 r;
    u8 *q;

    if (*arg0 == 0x1A) {
        return;
    }
    if (D_800B9A08 == 0x3012 || D_800B9A08 == 0x3054 || D_800B9A08 == 0x3079 || D_800B9A08 == 0x3096) {
        return;
    }
    r = GetVar16(8);
    if (r & 0x8000) {
        if (D_800B5BD8 == 0) {
            u8 *p = w + 0x65A8;

            D_801ED530 = (s32)p;
            q = p;
            SjisToGlyphs(&D_80190014, &D_801ED53C);
            InitTextSprite(q, &D_801ED53C);
            D_800B5C04 = 1;
            D_800B5BFF = 1;
            D_800B5BE0 = -D_800AF7BC / 2 + 0xD0;
            D_800B5BE2 = -D_800AF7BE / 2 + 0x28;
        }
        if (D_800B5C10 == 0) {
            u8 *p = w + 0x65E0;

            D_801ED534 = (s32)p;
            q = p;
            SjisToGlyphs(&D_80190034, &D_801ED564);
            InitTextSprite(q, &D_801ED564);
            D_800B5C3C = 1;
            D_800B5C37 = 1;
            D_800B5C18 = -D_800AF7BC / 2 + 0xD0;
            D_800B5C1A = -D_800AF7BE / 2 + 0x30;
        }
        if (D_800B5C48 == 0) {
            u8 *p = w + 0x6618;

            D_801ED538 = (s32)p;
            q = p;
            FormatDigitGlyphs((s16)GetDeadline8Left(), &D_801ED57C, 0x84);
            InitNumberSprite(q, &D_801ED57C);
            D_800B5C74 = 1;
            D_800B5C50 = -D_800AF7BC / 2 + 0xD0;
            D_800B5C52 = -D_800AF7BE / 2 + 0x10;
        }
        FormatDigitGlyphs((s16)GetDeadline8Left(), &D_801ED57C, 0x84);
        if ((r & 0x7FFF) == g_ClockMinute) {
            ExpireDeadline8();
        }
    }
}

extern s32 func_800D0E30();

s32 GetDeadline8Left(void) {
    s16 sp10;
    s32 r;

    sp10 = GetVar16(8) & 0x7FFF;
    sp10 = func_800D0E30(&sp10);
    r = ((u8 *) &sp10)[1] * 100 + ((u8 *) &sp10)[0];
    return (s16) r;
}

s32 StartDeadline8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = GetVar16(8, arg1) << 0x10;
    if (var_v0 == 0) {
        var_v0 = SetVar16(8, (s32) (s16) (func_800D0D7C(0, 1) | ~0x7FFF));
    }
    return var_v0;
}

void ClearDeadline8(void) {
    s32 *p;
    s32 i;

    SetVar16(8, 0);
    i = 0;
    p = &D_801ED530;
    do {
        ZeroFill(*p, 0x38);
        p++;
        i++;
    } while (i < 3);
}

s32 GetDeadline8Passed(s32 n) {
    u8 *c = &g_Status;
    u32 v;
    s32 i;
    s8 k;

    v = GetVar16(8);
    if (v & 0x8000) {
        v &= 0x7FFF;
        if ((v >> 8) == c[0x39] && c[0x38] >= (v & 0xFF)) {
            return (s32)&D_80190048;
        }
        k = c[0x39] - 1;
        for (i = 0; i < n; i++, k--) {
            if (k < 0) {
                k = 0x17;
            }
            if (((v >> 8) & 0xFF) == k) {
                if (i != n - 1 || c[0x38] < (v & 0xFF)) {
                    return (s32)&D_80190048;
                }
            }
        }
    }
    return 0;
}

s32 ExpireDeadline8(void) {
    s32 *p;
    s32 i;

    SetFlag(0x141, 1);
    SetVar16(8, 0);
    i = 0;
    p = &D_801ED530;
    do {
        ZeroFill(*p, 0x38);
        p++;
        i++;
    } while (i < 3);
}

void RunSceneExitStep(u8 *arg0) {
    D_8019006C[AF(arg0, u8, 0x15)]();
}

s32 SceneExitStart(u8 *arg0, s32 arg1) {
    EndScene((s32) &g_Player, arg1);
    AF(arg0, s32, 0x28) = 0xA;
    AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    return 0;
}

s32 func_801623B8(u8 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x28) - 1;
    AF(arg0, s32, 0x28) = temp_v0;
    if (temp_v0 == -1) {
        func_800D0C48(1, arg1);
        StartFade(4);
        AF(arg0, u8, 0x15) = (u8) (AF(arg0, u8, 0x15) + 1);
    }
    return 0;
}

s32 SceneExitBusy(void) {
    return (FadeStep(4) & 0xFFFF) != 0;
}

extern s16 g_ClockMinute;
extern u16 D_800AF7BC;
extern u16 D_800AF7BE;
extern u16 D_800B5BD8;
extern s16 D_800B5BE0;
extern s16 D_800B5BE2;
extern u8 D_800B5BFF;
extern s16 D_800B5C04;
extern u16 D_800B5C10;
extern s16 D_800B5C18;
extern s16 D_800B5C1A;
extern u8 D_800B5C37;
extern s16 D_800B5C3C;
extern u16 D_800B5C48;
extern s16 D_800B5C50;
extern s16 D_800B5C52;
extern s16 D_800B5C74;
extern u8 D_80190078;
extern u8 D_80190090;
extern u8 D_801ED594;
extern u8 D_801ED5BC;
extern u8 D_801ED5D8;
extern s32 D_801ED58C;
extern s32 D_801ED590;
extern s16 SjisToGlyphs();
extern void InitTextSprite();
extern void FormatDigitGlyphs();
extern s32 GetDeadline12Left();
extern void InitNumberSprite();
extern s32 ClearDeadline12();

s32 UpdateDeadline12(void) {
    u8 *w = (u8 *)&D_800AF630;
    s32 r;
    u8 *q;

    r = GetVar16(0x12);
    if (r & 0x8000) {
        if (D_800B5BD8 == 0) {
            u8 *p = w + 0x65A8;

            D_801ED588 = (s32)p;
            q = p;
            SjisToGlyphs(&D_80190078, &D_801ED594);
            InitTextSprite(q, &D_801ED594);
            D_800B5C04 = 1;
            D_800B5BFF = 1;
            D_800B5BE0 = -D_800AF7BC / 2 + 0xD0;
            D_800B5BE2 = -D_800AF7BE / 2 + 0x28;
        }
        if (D_800B5C10 == 0) {
            u8 *p = w + 0x65E0;

            D_801ED58C = (s32)p;
            q = p;
            SjisToGlyphs(&D_80190090, &D_801ED5BC);
            InitTextSprite(q, &D_801ED5BC);
            D_800B5C3C = 1;
            D_800B5C37 = 1;
            D_800B5C18 = -D_800AF7BC / 2 + 0xD0;
            D_800B5C1A = -D_800AF7BE / 2 + 0x30;
        }
        if (D_800B5C48 == 0) {
            u8 *p = w + 0x6618;

            D_801ED590 = (s32)p;
            q = p;
            FormatDigitGlyphs((s16)GetDeadline12Left(), &D_801ED5D8, 0x84);
            InitNumberSprite(q, &D_801ED5D8);
            D_800B5C74 = 1;
            D_800B5C50 = -D_800AF7BC / 2 + 0xD0;
            D_800B5C52 = -D_800AF7BE / 2 + 0x10;
        }
        FormatDigitGlyphs((s16)GetDeadline12Left(), &D_801ED5D8, 0x84);
        if ((r & 0x7FFF) == g_ClockMinute) {
            ClearDeadline12();
        }
    }
}

extern s32 func_800D0E30();

s32 GetDeadline12Left(void) {
    u16 sp10;
    s32 lo;

    sp10 = GetVar16(0x12) & 0x7FFF;
    sp10 = func_800D0E30(&sp10);
    lo = ((u8 *) &sp10)[0];
    return (s16) (((u8 *) &sp10)[1] * 100 + lo);
}

void StartDeadline12(s32 arg0, s32 arg1) {
    if ((GetVar16(0x12, arg1) << 0x10) == 0) {
        SetVar16(0x12, (s32) (s16) (func_800D0D7C(0xC, 0) | ~0x7FFF));
    }
}

s32 ClearDeadline12(void) {
    s32 *p;
    s32 i;

    SetVar16(0x12, 0);
    i = 0;
    p = &D_801ED588;
    do {
        ZeroFill(*p, 0x38);
        p++;
        i++;
    } while (i < 3);
}

s32 ClearShadow(void) {
    return ZeroFill((s32) &D_8011F750, 0x58);
}

void UpdateShadow(void) {
    if (*(u8 *)&D_8011F750.vx != 0) {
        {
            s32 i = *(u8 *)&D_8011F750.vx - 1;

            D_801900B0[i](&D_8011F750.vx);
        }
    }
}

void RunShadowStep(u8 *arg0) {
    D_801900B4[AF(arg0, u8, 1)]();
}

extern u8 D_800B5CB8;
extern s32 D_800B5CBC;
extern s8 D_800B5CDF;
extern u8 D_801900A4;
extern void InitSpriteKind2();
void NextShadowStep(s32 arg0);
extern void *D_800B5CEC;

void InitShadow(u8 *arg0) {
    AF(arg0, s32 *, 8) = &D_800B5CB8;
    InitSpriteKind2((s32) &D_800B5CB8, (s32) &D_801900A4, 0x250, 0x1A0);
    D_800B5CEC = arg0 + 0xC;
    D_800B5CDF = 0x14;
    D_800B5CBC |= 0x60000000;
    func_80162968((s32) arg0);
    NextShadowStep((s32) arg0);
}

void ShadowStep(u8 *arg0) {
    void *a1;
    void *a2;

    a2 = AF(arg0, void *, 4);
    a1 = AF(arg0, void *, 8);
    if (AF(a2, s16, 0x7E) != 0) {
        AF(a1, s32, 4) |= 0x80000000;
    } else {
        AF(a1, s32, 4) &= 0x7FFFFFFF;
    }
    AF(arg0, s32, 0x20) = (s32) AF(a2, s16, 0x78);
    AF(arg0, s32, 0x24) = (s32) AF(a2, s16, 0x7A);
    AF(arg0, s32, 0x28) = (s32) AF(a2, s16, 0x7C);
    func_80162968((s32) arg0);
}

void func_80162968(s32 arg0) {
    u8 *s1;
    u8 *s3;
    s32 s0;
    s16 t;

    s1 = AF(arg0, u8 *, 4);
    s3 = AF(arg0, u8 *, 8);
    s0 = arg0 + 0xC;
    AF(s3, s16, 0x10) = ratan2(AF(s1, s16, 0x84), AF(s1, s16, 0x82));
    AF(s3, s16, 0x14) = ratan2(AF(s1, s16, 0x80), -(s16)SquareRoot0(AF(s1, s16, 0x84) * AF(s1, s16, 0x84) + AF(s1, s16, 0x82) * AF(s1, s16, 0x82)));
    SetIdentityRot(s0);
    RotateMatrixX(s0, AF(s3, s16, 0x10));
    RotateMatrixZ(s0, AF(s3, s16, 0x14));
    RotateMatrixY(s0, AF(AF(s1, u8 *, 0x20), s16, 0x12));
    RotateMatrixX(s0, 0x400);
    t = ((0x300 - (s16)(AF(arg0, s32, 0x24) - AF(s1, u16, 0xA))) << 13) / 768;
    if (AF(s1, s32, 0x44) & 0x400) {
        t = t / 3;
    }
    AF(s3, s16, 0x1C) = t;
    AF(s3, s16, 0x1A) = t;
    AF(s3, s16, 0x18) = t;
}

void SetShadowKind(u8 *arg0, s8 arg1) {
    AF(arg0, u8, 0) = arg1;
    AF(arg0, u8, 1) = 0;
}

void NextShadowStep(s32 arg0) {
    AF(arg0, u8, 1) = (u8) (AF(arg0, u8, 1) + 1);
}

void PrevShadowStep(u8 *arg0) {
    AF(arg0, u8, 1) = (u8) (AF(arg0, u8, 1) - 1);
}

s32 ClearObj68s(void) {
    return ZeroFill((s32) &D_8011F9D0, 0x820);
}

void UpdateObj68s(void) {
    void (**tbl)() = g_Obj68Handlers;
    s32 i;
    s32 off;
    u8 *o;
    u8 *m;
    u8 *q;
    u16 k;
    void (*f)();
    s16 v;

    for (i = 0, off = 0; i < 20; i++, off += 0x68) {
        o = &D_8011F9D0 + off;
        AF(o, u16, 0x44) = AF(o, u16, 6);
        AF(o, u16, 0x46) = AF(o, u16, 0xA);
        AF(o, u16, 0x48) = AF(o, u16, 0xE);
        k = AF(o, u16, 0);
        if (k != 0) {
            f = tbl[k - 1];
            if (f != NULL) {
                f(o, k);
            } else {
                DefaultObj68Handler(o);
            }
            m = AF(o, u8 *, 0x20);
            if (m != NULL) {
                if (AF(m, u16, 0) == 1) {
                    AF(m, s32, 0x48) = AF(m, s16, 8) = AF(o, s16, 6);
                    AF(m, s32, 0x4C) = AF(m, s16, 0xA) = AF(o, s16, 0xA);
                    v = AF(o, s16, 0xE);
                    AF(m, s16, 0xC) = v;
                    AF(m, u16, 0x2C) |= 1;
                    AF(m, s32, 0x50) = v;
                } else if ((q = AF(m, u8 *, 0x34)) != NULL) {
                    AF(q, s32, 0x14) = AF(m, s16, 8) = AF(o, s16, 6);
                    AF(AF(m, u8 *, 0x34), s32, 0x18) = AF(m, s16, 0xA) = AF(o, s16, 0xA);
                    AF(AF(m, u8 *, 0x34), s32, 0x1C) = AF(m, s16, 0xC) = AF(o, s16, 0xE);
                } else {
                    AF(m, s16, 8) = AF(o, s16, 6);
                    AF(m, s16, 0xA) = AF(o, s16, 0xA);
                    AF(m, s16, 0xC) = AF(o, s16, 0xE);
                }
            }
        }
    }
}

void DefaultObj68Handler() {
}

s32 FreeObj68(s32 arg0) {
    s32 var_a1;
    u16 *temp_a0;

    temp_a0 = AF(arg0, u16 *, 0x20);
    if (temp_a0 != NULL) {
        var_a1 = 0x38;
        if (*temp_a0 == 1) {
            var_a1 = 0x84;
        }
        ZeroFill((s32) temp_a0, var_a1);
    }
    return ZeroFill(arg0, 0x68);
}

void UpdateObj68Matrix(s32 arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_s1 = temp_s0 + 0x34;
    SetIdentityRot(temp_s1);
    RotateMatrixX(temp_s1, (s32) AF(temp_s0, s16, 0x10));
    RotateMatrixY(temp_s1, (s32) AF(temp_s0, s16, 0x12));
    RotateMatrixZ(temp_s1, (s32) AF(temp_s0, s16, 0x14));
}

void UpdateObj68MatrixYXZ(s32 arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_s1 = temp_s0 + 0x34;
    SetIdentityRot(temp_s1);
    RotateMatrixY(temp_s1, (s32) AF(temp_s0, s16, 0x12));
    RotateMatrixX(temp_s1, (s32) AF(temp_s0, s16, 0x10));
    RotateMatrixZ(temp_s1, (s32) AF(temp_s0, s16, 0x14));
}

void UpdateObj68MatrixZXY(s32 arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_s1 = temp_s0 + 0x34;
    SetIdentityRot(temp_s1);
    RotateMatrixZ(temp_s1, (s32) AF(temp_s0, s16, 0x14));
    RotateMatrixX(temp_s1, (s32) AF(temp_s0, s16, 0x10));
    RotateMatrixY(temp_s1, (s32) AF(temp_s0, s16, 0x12));
}

void UpdateObj68MatrixZYX(s32 arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_s1 = temp_s0 + 0x34;
    SetIdentityRot(temp_s1);
    RotateMatrixZ(temp_s1, (s32) AF(temp_s0, s16, 0x14));
    RotateMatrixY(temp_s1, (s32) AF(temp_s0, s16, 0x12));
    RotateMatrixX(temp_s1, (s32) AF(temp_s0, s16, 0x10));
}

void UpdateObj68MatrixYZX(s32 arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_s1 = temp_s0 + 0x34;
    SetIdentityRot(temp_s1);
    RotateMatrixY(temp_s1, (s32) AF(temp_s0, s16, 0x12));
    RotateMatrixZ(temp_s1, (s32) AF(temp_s0, s16, 0x14));
    RotateMatrixX(temp_s1, (s32) AF(temp_s0, s16, 0x10));
}

void AddObj68Push(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AddObj68PushX();
    AddObj68PushY(arg0, arg2);
    AddObj68PushZ(arg0, arg3);
}

void AddObj68PushX(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    AddPushXLimit(arg0, arg1, 0x7F0000);
}

s32 AddObj68PushY(s32 arg0, s32 arg1) {
    AddPushYLimit(arg0, arg1, 0x7F0000);
}

s32 AddObj68PushZ(s32 arg0, s32 arg1) {
    AddPushZLimit(arg0, arg1, 0x7F0000);
}

s32 MoveObj68(s32 arg0) {
    s32 temp_v0;

    AF(arg0, s32, 4) = (s32) (AF(arg0, s32, 4) + AF(arg0, s32, 0x10));
    temp_v0 = AF(arg0, s32, 8) + AF(arg0, s32, 0x14);
    AF(arg0, s32, 8) = temp_v0;
    AF(arg0, s32, 0xC) = (s32) (AF(arg0, s32, 0xC) + AF(arg0, s32, 0x18));
    return temp_v0;
}

void AddObj68PushFacing(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 unused[0x10]; /* MATCH-TRICK: frame pad, the original's frame has 16 unused bytes below the vector */
    VECTOR v;
    MATRIX m;
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0x20);
    AddObj68PushX();
    AddObj68PushY(arg0, arg2);
    AddObj68PushZ(arg0, arg3);
    SetIdentityRot(&m);
    RotateMatrixX(&m, AF(temp_s1, s16, 0x10));
    RotateMatrixY(&m, AF(temp_s1, s16, 0x12));
    RotateMatrixZ(&m, AF(temp_s1, s16, 0x14));
    ApplyMatrixLV(&m, (VECTOR *)(arg0 + 0x24), &v);
    g_PushVel = v.vx;
    D_80127094 = v.vy;
    D_80127098 = v.vz;
    SetPushVel(arg0);
}

void AddObj68PushFacingYXZ(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 unused[0x10]; /* MATCH-TRICK: frame pad, the original's frame has 16 unused bytes below the vector */
    VECTOR v;
    MATRIX m;
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0x20);
    AddObj68PushX();
    AddObj68PushY(arg0, arg2);
    AddObj68PushZ(arg0, arg3);
    SetIdentityRot(&m);
    RotateMatrixY(&m, AF(temp_s1, s16, 0x12));
    RotateMatrixX(&m, AF(temp_s1, s16, 0x10));
    RotateMatrixZ(&m, AF(temp_s1, s16, 0x14));
    ApplyMatrixLV(&m, (VECTOR *)(arg0 + 0x24), &v);
    g_PushVel = v.vx;
    D_80127094 = v.vy;
    D_80127098 = v.vz;
    SetPushVel(arg0);
}

void AddObj68PushByMatrix(s32 arg0, s32 arg1, s32 arg2, s32 arg3, MATRIX *arg4) {
    u8 unused[0x10]; /* MATCH-TRICK: frame pad, the original's frame has 16 unused bytes below the vector */
    VECTOR v;

    AddObj68PushX(arg0, arg1);
    AddObj68PushY(arg0, arg2);
    AddObj68PushZ(arg0, arg3);
    ApplyMatrixLV(arg4, (VECTOR *)(arg0 + 0x24), &v);
    g_PushVel = v.vx;
    D_80127094 = v.vy;
    D_80127098 = v.vz;
    SetPushVel(arg0);
}

void SetObj68VelFromPush(s32 arg0) {
    AddObj68PushSetVel(arg0, 0, 0, 0);
}

void AddObj68PushSetVel(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    AddObj68PushX();
    AddObj68PushY(arg0, arg2);
    AddObj68PushZ(arg0, arg3);
    g_PushVel = AF(arg0, s32, 0x24);
    D_80127094 = AF(arg0, s32, 0x28);
    D_80127098 = AF(arg0, s32, 0x2C);
    SetPushVel(arg0);
}

s32 GetSweepHitActor(s32 arg0) {
    return D_80115100;
}

extern s32 D_80115200[];

s32 GetSweepHitResult()
{
    s32 i;

    for (i = 0; i < 3; i++) {
        if (D_80115200[i] != 0) {
            return D_80115200[i];
        }
    }
    return 0;
}

extern SVECTOR D_80126B18[];

void MarkSweepHitPoints(void) {
    u32 i;

    for (i = 0; i < 3; i++) {
        if (D_80115200[i] & 1) {
            AF(((u8 **)&D_80115100)[i], SVECTOR, 0x7C) = D_80126B18[i];
            AF(((u8 **)&D_80115100)[i], s16, 0x82) = 0;
        }
    }
}

extern s32 D_80115200[];

s32 func_801633A8(void) {
    s32 i;

    for (i = 0; i < 3; i++) {
        if (D_80115200[i] != 0 && !(AF(((s32 *)&D_80115100)[i], u16, 0x5C) & 0x400)) {
            return D_80115200[i];
        }
    }
    return 0;
}

extern SVECTOR D_801EC888;
extern void SweepHitObj68Rolled();

void SweepHitObj68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    SVECTOR v = D_801EC888;

    SweepHitObj68Rolled(arg0, (u16)arg1, arg2, (u16)arg3, &v);
}

extern void SweepHitObj68Full();

void SweepHitObj68Rolled(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u16 a1 = arg1;
    u16 a3 = arg3;

    SweepHitObj68Full(arg0, a1, (u16)RollDamage(a1), arg2, a3, arg4);
}

void SweepHitObj68Dmg(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u16 a4 = arg4;
    SVECTOR v = D_801EC888;

    SweepHitObj68Full(arg0, (u16)arg1, (u16)arg2, arg3, a4, &v);
}

extern u8 D_80114EB0;
extern u8 D_80114EC8;
extern s32 D_80115204;
extern s32 D_80115208;
extern u8 D_80115298;
extern u8 D_8011DAF0;
extern u8 D_80126734;
extern s16 D_80126B1A;
extern s16 D_80126B1C;
extern s16 D_801270B0[];
extern s16 D_801270B2;
extern s16 D_801270B4;
extern s32 CallSweepHit(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, u16 arg10, s32 arg11, s32 arg12);

void SweepHitObj68Full(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5) {
    u16 a1 = arg1;
    u16 a2 = arg2;
    u16 a4 = arg4;

    D_80115200[0] = 0;
    D_80115204 = 0;
    D_80115208 = 0;
    D_801270B0[0] = AF(arg0, u16, 0x44) + AF(arg5, u16, 0);
    D_801270B2 = AF(arg0, u16, 0x46) + AF(arg5, u16, 2);
    D_801270B4 = AF(arg0, u16, 0x48) + AF(arg5, u16, 4);
    D_80126B18[0].vx = AF(arg0, u16, 6) + AF(arg5, u16, 0);
    D_80126B1A = AF(arg0, u16, 0xA) + AF(arg5, u16, 2);
    D_80126B1C = AF(arg0, u16, 0xE) + AF(arg5, u16, 4);
    D_80115200[0] = CallSweepHit(arg0, a1, a2, (s32)D_801270B0, (s32)D_80126B18, (s32)&D_80114EB0, (s32)&D_80114EC8, (s32)&D_80115100, (s32)&D_8011DAF0, arg3, a4, (s32)&D_80115298, (s32)&D_80126734);
}

s32 CallSweepHit(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, u16 arg10, s32 arg11, s32 arg12) {
    return TraceAttackPath(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF, arg3, /* extra? */ arg4, /* extra? */ arg5, /* extra? */ arg6, /* extra? */ arg7, /* extra? */ arg8, /* extra? */ arg9, /* extra? */ (s32) arg10, /* extra? */ arg11, /* extra? */ arg12);
}

void ShowSweepHitNumbers(s32 arg0, s32 arg1) {
    u32 i;

    for (i = 0; i < 3; i++) {
        if (D_80115200[i] & 1) {
            ShowNumberAt(arg0, &D_80126B18[i], 0, (u16)(arg1 & 0x7FFF));
        }
    }
}

s32 func_80163764(s32 arg0) {
    s32 *var_s0;
    s32 temp_s3;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = &g_Actors;
    temp_s3 = AF(arg0, s32, 0x4C);
loop_1:
    if ((AF(var_s0, u16, 0) != 0) && (AF(var_s0, u16, 0x5C) & 0x100) && (IsObjWithin(arg0, (s32) var_s0, 0x40) != 0)) {
        ApplyPickup(temp_s3, (s32) var_s0);
        return 1;
    }
    var_s1 += 1;
    var_s0 = (s32 *)((u8 *)var_s0 + 0x10C);
    if (var_s1 >= 0x60U) {
        return 0;
    }
    goto loop_1;
}

s32 TraceObj68Move(u8 *arg0, SVECTOR *arg1) {
    SVECTOR v;
    s32 r;

    v = AF(arg0, SVECTOR, 0x44);
    PosToSVec(arg0 + 4, arg1);
    r = TraceMap(1, &v, arg1);
    if (r != 0) {
        SVecToPos(arg1, arg0 + 4);
        return r;
    }
    return 0;
}

extern s16 D_801152AA;
extern s32 func_80135004();

s32 func_801638A0(u8 *arg0, SVECTOR *arg1) {
    SVECTOR v;

    v = AF(arg0, SVECTOR, 0x44);
    PosToSVec(arg0 + 4, arg1);
    if (func_80135004(1, &v, arg1) != 0) {
        SVecToPos(arg1, arg0 + 4);
        if (D_801152AA >= -0x578) {
            return 0x8000;
        }
        if (D_801152AA >= -0xBCB) {
            return 0x4000;
        }
        return 0x2000;
    }
    return 0;
}

s32 func_80163950(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    u8 *p;

    PosToSVec(arg0 + 4, &a);
    PosToSVec(arg0 + 4, &b);
    a.vy -= 0x20;
    b.vy += 8;
    for (p = &g_Actors; p < &g_Actors + 0x6480; p += 0x10C) {
        if (AF(p, u16, 0) != 0 && (AF(p, u16, 0x5C) & 0x400) && AF(p, s32, 0x58) != 0) {
            if (func_80135A4C(AF(p, s32, 0x20), AF(p, s32, 0x58), &a, &b) != 0) {
                SVecToPos(&b, arg0 + 4);
                return 1;
            }
        }
    }
    return 0;
}

void RunFusionThrowState(StageActor *arg0) {
    D_801900BC[arg0->state]();
}

void StartFusionThrow(u8 *a) {
    u8 *p = AF(a, u8 *, 0x4C);
    s32 m;

    AF(p, s32, 0x44) |= 4;
    AF(a, s32, 0x20) = m = AllocModel6To16();
    if (m != 0) {
        InitModel(m, &D_800DE5A0);
        AF(m, u8 *, 0x20) = &D_800636C8;
        AF(m, s16, 0x18) = AF(m, s16, 0x1A) = AF(m, s16, 0x1C) = 0x1800;
        AF(m, u16, 0x2C) |= 0x10;
        ObjLocalToWorld16(p, a + 4);
        AF(AF(a, u8 *, 0x20), MATRIX, 0x34) = AF(AF(p, u8 *, 0x20), MATRIX, 0x34);
        AF(m, u16, 0x10) = AF(AF(p, u8 *, 0x20), u16, 0x10);
        AF(m, u16, 0x12) = AF(AF(p, u8 *, 0x20), u16, 0x12);
        AF(m, u16, 0x14) = AF(AF(p, u8 *, 0x20), u16, 0x14);
        AF(a, u16, 0x60) = AF(p, u16, 0x100);
        AF(a, u16, 0x62) = AF(p, u16, 0x102);
        AF(a, u16, 0x64) = AF(p, u16, 0x104);
        PlaySe(0x448);
        SetObjTimer(a, 0x10);
        SpawnEffect(0xD, (StageActor *)a, 0, 0, 0, 0, 0);
        SetObjPush((s32)a, 0, 0, -0x200000);
        NextObjState(a);
    }
}

extern void AimFusionThrow();
void FusionThrowFlyStep(u8 *arg0) {
    MATRIX unused, m; /* MATCH-TRICK: frame pad, the original's frame has 0x20 unused bytes below m */
    SVECTOR rot; /* MATCH-TRICK: frame pad, 8 unused bytes above m */
    u8 *p = AF(arg0, u8 *, 0x4C);
    u8 *o = AF(arg0, u8 *, 0x20);
    s32 r;
    u8 *t;

    AimFusionThrow(arg0);
    AF(o, s16, 0x14) = (AF(AF(arg0, u8 *, 0x20), u16, 0x14) + 0x71) & 0xFFF;
    SetIdentityRot(&m);
    RotateMatrixX(&m, AF(arg0, s16, 0x60));
    RotateMatrixZ(&m, AF(arg0, s16, 0x64));
    RotateMatrixY(&m, AF(arg0, s16, 0x62));
    RotateMatrixY(&m, AF(o, s16, 0x12));
    RotateMatrixX(&m, AF(o, s16, 0x10));
    RotateMatrixZ(&m, AF(o, s16, 0x14));
    AddObj68PushByMatrix((s32)arg0, 0, 0, 0x18000, &m);
    MoveObj68((s32)arg0);
    AF(o, MATRIX, 0x34) = m;
    if (AF(arg0, s32, 0x2C) >= 0) {
        SetObjPush((s32)arg0, 0, 0, 0xC0000);
        SetObjTimer(arg0, 0x20);
        PlaySePositional(4, 0x448);
        NextObjState(arg0);
        NextObjState(arg0);
        return;
    }
    SweepHitObj68Dmg((s32)arg0, 0xD, RollDamage(0xD) & 0xFFFF, 1, 0);
    r = GetSweepHitResult(arg0);
    if (r & 1) {
        t = (u8 *)GetSweepHitActor((s32)arg0);
        AF(p, u8 *, 0x184) = t;
        AF(p, s32, 0x44) |= 0x20;
        AF(p, u16, 0x194) = AF(t, u16, 0x36);
        AF(p, s16, 0x18A) = 0;
        AF(p, s16, 0x188) = 0;
        SetObjPush((s32)arg0, 0, 0, 0xC0000);
        if (D_8011DB10 == 0) {
            PosToSVec(arg0 + 4, arg0 + 0x58);
        } else {
            ((void (*)())D_8011DB10)(arg0 + 0x58);
            SVecToPos(arg0 + 0x58, arg0 + 4);
        }
        AF(arg0, s16, 0x66) = 0;
        PlaySePositional(4, 0x448);
        SpawnEffectFromEnd(0x30, (s32)arg0, 0, 0, 0, 0, AF(p, s32, 0x184));
        NextObjState(arg0);
    } else if (r & 6) {
        SetObjPush((s32)arg0, 0, 0, 0xC0000);
        SetObjTimer(arg0, 0x20);
        PlaySePositional(4, 0x448);
        NextObjState(arg0);
        NextObjState(arg0);
    }
    func_80163764((s32)arg0);
}

extern SVECTOR D_801EC890;
extern s32 EaseValueFrac();
extern u32 GetAbilityAssimilateRate();

void FusionThrowStuckStep(u8 *arg0) {
    SVECTOR v = D_801EC890;
    SVECTOR out;
    SVECTOR pos;
    u8 *p = AF(arg0, u8 *, 0x4C);
    u8 *m = AF(arg0, u8 *, 0x20);
    u8 *o;
    u8 *q;
    s16 t;
    u8 d;

    UpdateObj68MatrixYXZ((s32)arg0);
    q = AF(p, u8 *, 0x184);
    if (q == NULL) {
        AF(p, u16, 0x18A) = 0;
        AF(p, s16, 0x188) = 0;
        AF(p, s32, 0x44) &= ~0x20;
        NextObjState(arg0);
        NextObjState(arg0);
        return;
    }
    if (AF(q, s16, 0x36) != AF(p, u16, 0x194)) {
        AF(p, u8 *, 0x184) = NULL;
        AF(p, u16, 0x18A) = 0;
        AF(p, s16, 0x188) = 0;
        AF(p, s32, 0x44) &= ~0x20;
        NextObjState(arg0);
        NextObjState(arg0);
        return;
    }
    AF(p, u16, 0x18A)++;
    if (!(D_800B99DA & 3)) {
        t = AF(p, s16, 0x188);
        d = AF(arg0, u8, 0x67);
        if (t >= d) {
            AF(p, s16, 0x188) = t - d;
        } else {
            AF(p, s16, 0x188) = 0;
        }
        if (AF(p, s16, 0x188) < 0) {
            AF(p, s16, 0x188) = 0;
        }
    }
    AF(arg0, u16, 0x66) += 0x40;
    if (GetObjPadPressed((s32)p) & 0x80) {
        AF(arg0, u16, 0x66) = 0;
        AF(p, s16, 0x188) += (u8)GetAbilityAssimilateRate(p, (u8)GetAbsorbAbility(AF(p, u8 *, 0x184)));
        AF(m, s16, 0x18) = AF(m, s16, 0x1A) = 0x4000;
        AF(m, s32, 0x48) = AF(arg0, s16, 0x58);
        AF(m, s32, 0x4C) = AF(arg0, s16, 0x5A);
        AF(m, s32, 0x50) = AF(arg0, s16, 0x5C);
        ObjLocalToWorld((s32)arg0, (s32)&v, (s32)&out);
        AF(arg0, s16, 6) = out.vx;
        AF(arg0, s16, 0xA) = out.vy;
        AF(arg0, s16, 0xE) = out.vz;
    }
    if (AF(p, s16, 0x188) > 0x80) {
        AF(p, s16, 0x188) = 0x80;
    }
    if (AF(p, s16, 0x188) >= 0x80) {
        o = AF(p, u8 *, 0x184);
        if (o != NULL) {
            PosToSVec(o + 4, &pos);
            pos.pad = 0;
            StrikeActor(o, 0xE, RollDamage(0xE) & 0xFFFF, &pos, AF(m, s16, 0x12));
            SpawnEffectOn(0x33, arg0, 0, o);
        }
        goto tail;
    }
    if (AF(p, s16, 0x18A) >= 0x80 || AF(p, u16, 0) == 0x19) {
        o = AF(p, u8 *, 0x184);
        if (o != NULL) {
            PosToSVec(o + 4, &pos);
            pos.pad = 0;
            StrikeActor(o, 0x21, RollDamage(0x21) & 0xFFFF, &pos, AF(m, s16, 0x12));
            if (AF(o, s32, 0xB4) & 0x40000) {
                ShowNumberAt(arg0, &pos, 0, AF(o, s16, 0x60));
            }
        }
tail:
        AF(p, u32, 0x184) = GetAbsorbAbility(o);
        if (AF(p, u32, 0x184) >= 0x1F) {
            AF(p, u32, 0x184) = 0;
        }
        SetObjTimer(arg0, 0x20);
        AF(p, s32, 0x44) &= ~0x20;
        PlaySe(0x449);
        NextObjState(arg0);
        NextObjState(arg0);
    }
    AF(m, s16, 0x18) = AF(m, s16, 0x1A) = EaseValueFrac(AF(m, s16, 0x1A), 0x1800, 3, 1);
    AF(arg0, s16, 6) = EaseValueFrac(AF(arg0, s16, 6), AF(arg0, s16, 0x58), 8, 1);
    AF(arg0, s16, 0xA) = EaseValueFrac(AF(arg0, s16, 0xA), AF(arg0, s16, 0x5A), 8, 1);
    AF(arg0, s16, 0xE) = EaseValueFrac(AF(arg0, s16, 0xE), AF(arg0, s16, 0x5C), 8, 1);
}

void FusionThrowReturnStart(s32 arg0) {
    UpdateObj68MatrixYXZ(arg0);
    SetObjTimer(arg0, 0x20);
    NextObjState(arg0);
}

extern void HomeFusionThrow();

void FusionThrowReturnStep(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x4C);
    HomeFusionThrow();
    if ((PosDist(temp_s0 + 4, (s32) (arg0 + 4)) < 0x28) || (TickObjTimer((s32) arg0) != 0)) {
        SetObjTimer((s32) arg0, 8);
        PlaySe(0x44A);
        NextObjState((s32) arg0);
    }
    func_80163764((s32) arg0);
}

void FusionThrowCatchStep(u8 *arg0) {
    s32 temp_a0;
    u8 *temp_s0;

    temp_s0 = AF(arg0, u8 *, 0x4C);
    HomeFusionThrow();
    if (TickObjTimer((s32) arg0) != 0) {
        AF(temp_s0, s16, 0x18A) = 0;
        if ((AF(temp_s0, s32, 0x184) != 0) && (temp_a0 = AF(temp_s0, s32, 0x44), ((temp_a0 & 0x400) == 0)) && !(AF(temp_s0, s32, 0x1F8) & 0x80FFFFFF)) {
            AF(temp_s0, s32, 0x44) = (s32) (temp_a0 | 0x10);
            if (AF(temp_s0, s16, 0x188) < 0x80) {
                AF(temp_s0, s32, 0x184) = (s32) (AF(temp_s0, s32, 0x184) | 0x80000000);
            }
            AF(temp_s0, s16, 0x188) = 0;
        } else {
            AF(temp_s0, s32, 0x184) = 0;
            AF(temp_s0, s16, 0x188) = 0;
        }
        AF(temp_s0, s32, 0x44) = (s32) (AF(temp_s0, s32, 0x44) & ~4);
        UpdateFlag10Part21(temp_s0);
        PlaySePositional(4, 0x449);
        PlaySe(0x44B);
        FreeObj68((s32) arg0);
    }
}

void Nop4410(void) {
}

void HomeFusionThrow(s32 arg0) {
    u8 *temp_a1;
    u8 *temp_s1;
    SVECTOR v;
    SVECTOR r;

    temp_a1 = AF(arg0, u8 *, 0x4C);
    temp_s1 = AF(arg0, u8 *, 0x20);
    v.vx = AF(temp_a1, u16, 6) - AF(arg0, u16, 6);
    v.vy = AF(temp_a1, u16, 0xA) - (AF(arg0, u16, 0xA) + 0x1E);
    v.vz = AF(temp_a1, u16, 0xE) - AF(arg0, u16, 0xE);
    r.vy = ratan2(v.vx, v.vz);
    if (v.vz < 0) {
        v.vz = -v.vz;
    }
    if (v.vz == 0) {
        r.vx = 0;
    } else {
        r.vx = ratan2(-v.vy, v.vz);
    }
    AF(temp_s1, u16, 0x14) = (AF(temp_s1, u16, 0x14) + 0x71) & 0xFFF;
    AF(temp_s1, s16, 0x10) = EaseAngle(AF(temp_s1, s16, 0x10), r.vx, 2);
    AF(temp_s1, s16, 0x12) = EaseAngle(AF(temp_s1, s16, 0x12), r.vy, 2);
    AddObj68PushFacingYXZ(arg0, 0, 0, 0x8000);
    MoveObj68(arg0);
    UpdateObj68MatrixYXZ(arg0);
}

extern s32 EaseAngleFrac();

void AimFusionThrow(u8 *arg0) {
    u8 *w = (u8 *)&D_800AF630;
    u8 *p;
    u8 *a;
    u8 *best;
    s32 t;
    u8 *b;
    s32 bestAng;
    s32 d;
    s32 bestD;
    s16 dz;
    s16 dx;

    p = AF(arg0, u8 *, 0x20);
    bestD = 0x1000;
    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (AF(a, u16, 0x5C) & 0x2000) {
            t = GetHeadingToObj(arg0, a);
            d = AngleDist((s16)t, AF(p, s16, 0x12));
            if ((s16)d < 0x200 && (s16)d < (s16)bestD) {
                bestAng = t;
                bestD = d;
                best = a;
            }
        }
    }
    if ((s16)bestD != 0x1000) {
        AF(AF(arg0, u8 *, 0x20), s16, 0x12) = EaseAngleFrac(AF(p, s16, 0x12), (s16)bestAng, 10, 1);
        if (AF(w, s16, 0xA3D8) == 0x30A0) {
            b = (u8 *)(AF(best, u32, 0x58) & 0x0FFFFFFF);
            if (b != 0) {
                dz = (AF(best, u16, 0xE) + (AF(b, s16, 0xC) + AF(b, s16, 0xE)) / 2) - AF(arg0, u16, 0xE);
                dx = (AF(best, u16, 6) + (AF(b, s16, 4) + AF(b, s16, 6)) / 2) - AF(arg0, u16, 6);
                t = ratan2((AF(best, s16, 0xA) + (AF(b, s16, 8) + AF(b, s16, 0xA)) / 2) - AF(arg0, s16, 0xA), (s16)SquareRoot0(dz * dz + dx * dx)) & 0xFFF;
                AF(AF(arg0, u8 *, 0x20), s16, 0x10) = t;
            }
        }
    }
}

void RunRingState(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = AF(arg0, s32, 0x20);
    D_80190110[AF(arg0, u16, 2)]();
    if (temp_s0 != 0) {
        UpdateObj68Matrix((s32) arg0);
    }
}

extern u8 D_800DF2E0;
extern u8 D_801900D8;
extern s16 D_80190108;
extern s16 D_8019010A;
extern s16 D_8019010C;
extern void func_8001C810();
extern void PlaceAtHand();
extern void FadeRing();

void StartRing(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocModel6To16();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8001C810(temp_v0, &D_800DF2E0);
        AF(temp_v0, u8 *, 0x80) = &D_801900D8;
        AF(temp_v0, s32, 4) |= 0x50000000;
        AF(temp_v0, u16, 0x2C) |= 0xB0;
        D_8019010C = 0x80;
        D_8019010A = 0x80;
        D_80190108 = 0x80;
        AF(temp_v0, s16, 0x1A) = 0;
        AF(arg0, s16, 0x60) = 0;
        AF(arg0, s16, 0x62) = 0x200;
        PlaceAtHand(arg0);
        NextObjState(arg0);
    } else {
        FadeRing(arg0);
    }
}

void RingGrowStep(u8 *arg0) {
    s32 var_s2;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    temp_v1 = AF(arg0, u16, 0x60) + AF(arg0, u16, 0x62);
    AF(arg0, u16, 0x60) = temp_v1;
    AF(temp_s0, u16, 0x1A) = (u16) (AF(temp_s0, u16, 0x1A) + temp_v1);
    var_s2 = 0x2000;
    if (AF(arg0, s32, 0x50) == 0) {
        var_s2 = 0x4000;
        temp_v0 = AF(temp_s0, u16, 0x1C) + 0x100;
        AF(temp_s0, u16, 0x1C) = temp_v0;
        AF(temp_s0, u16, 0x18) = temp_v0;
        AF(temp_s0, u16, 0x12) = (u16) (AF(temp_s0, u16, 0x12) + 0x71);
        RingHitActors((s32) arg0);
    } else {
        temp_v0_2 = AF(temp_s0, u16, 0x1C) + 0x200;
        AF(temp_s0, u16, 0x1C) = temp_v0_2;
        AF(temp_s0, u16, 0x18) = temp_v0_2;
        AF(temp_s0, u16, 0x12) = (u16) (AF(temp_s0, u16, 0x12) - 0x71);
    }
    if (var_s2 < (s16) AF(temp_s0, u16, 0x1A)) {
        NextObjState((s32) arg0);
    }
}

void FadeRing(u8 *arg0) {
    u8 *p;
    s32 i;
    u8 *o;
    u16 t;
    u16 u;
    s16 v;
    s32 k;

    o = AF(arg0, u8 *, 0x20);
    if (AF(arg0, s32, 0x50) == 0) {
        AF(o, u16, 0x18) = AF(o, u16, 0x1C) = AF(o, u16, 0x1C) + 0x100;
        AF(o, u16, 0x12) += 0x71;
        v = D_8019010C - 8;
        D_8019010C = v;
        D_8019010A = v;
        D_80190108 = v;
        i = 0;
        if (v < -0x80) {
            k = 0x19;
            p = &D_8011F9D0;
            do {
                if (AF(p, u16, 0) == k && AF(p, s32, 0x50) != 0) {
                    FreeObj68(p);
                }
                i++;
                p += 0x68;
            } while (i < 20);
            FreeObj68(arg0);
        } else {
            RingHitActors(arg0);
        }
    } else {
        AF(o, u16, 0x18) = AF(o, u16, 0x1C) = AF(o, u16, 0x1C) + 0x40;
        u = AF(o, u16, 0x1A) - 0x200;
        AF(o, u16, 0x1A) = u;
        if ((s16)u < 0) {
            AF(o, u16, 0x1A) = 0;
        }
        AF(o, u16, 0x12) -= 0x71;
    }
}

void PlaceAtHand(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 o;

    o = AF(arg0, s32, 0x4C);
    func_80148534(&a, &b);
    SVecToPos(&a, arg0 + 4);
    ObjLocalToWorld16(o, arg0 + 4);
}

void RingHitActors(s32 arg0) {
    u8 *a;
    SVECTOR v;

    for (a = &g_Actors; a < &g_Actors + 0x6480; a += 0x10C) {
        if (CanStrikeActor(arg0, a, 0xB, 2) != 0 && IsObjWithin(arg0, (s32) a, 0x50) != 0) {
            PosToSVec(a + 4, &v);
            v.pad = 0;
            StrikeActorFacing(arg0, a, 0xB, &v);
            AF(a, s16, 0x60) /= 2;
        }
    }
}

void RunFlashState(u8 *arg0) {
    D_8019011C[AF(arg0, u16, 2)]();
}

extern u8 D_801ED5E8;
extern u8 D_801ED5E9;
extern u8 D_801ED5EA;
extern u8 D_801ED5EB;
extern u8 D_801ED5EC;
extern u8 D_801ED5ED;
extern u8 D_801ED5EE;
extern u8 D_801ED5EF;
extern void func_8001CD50();
extern void SetShapeCircle();
extern void PlaceFlashAtHand();
extern s32 FreeFlash();

void func_80164BDC(u8 *arg0) {
    s32 o;
    u8 *p;

    o = AllocSprite6To16();
    p = &D_801ED5E8;
    AF(arg0, s32, 0x20) = o;
    if (o != 0) {
        func_8001CD50(o, p);
        SetShapeCircle(p, 0x60);
        AF(o, s32, 4) |= 0x50000000;
        D_801ED5E9 = 0xF0;
        *p = 0xF0;
        D_801ED5EA = 0xC0;
        D_801ED5EE = 0;
        D_801ED5ED = 0;
        D_801ED5EC = 0;
        D_801ED5EF = 0;
        D_801ED5EB = 0;
        AF(o, s16, 0x1E) = 0xCCC;
        AF(o, s16, 0x10) = 0x400;
        AF(arg0, s16, 0x60) = 0x700;
        AF(arg0, s16, 0x62) = -0x60;
        PlaceFlashAtHand(arg0);
        NextObjState(arg0);
    } else {
        FreeFlash(arg0);
    }
}

void FlashGrowStep(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    FadeFlashColour();
    temp_v1 = AF(arg0, u16, 0x60) + AF(arg0, u16, 0x62);
    AF(arg0, u16, 0x60) = temp_v1;
    temp_v0 = AF(temp_s0, u16, 0x1A) + temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v0;
    AF(temp_s0, u16, 0x18) = temp_v0;
    if ((s16) AF(arg0, u16, 0x60) < 0) {
        NextObjState((s32) arg0);
    }
}

void FlashFadeStep(u8 *arg0) {
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0x20);
    if (FadeFlashColour(arg0) != 0) {
        NextObjState(arg0);
    } else {
        AF(temp_s1, u16, 0x18) = AF(temp_s1, u16, 0x1A) = AF(temp_s1, u16, 0x1A) + 0x100;
    }
}

s32 FreeFlash(s32 arg0) {
    return FreeObj68(arg0);
}

void PlaceFlashAtHand(u8 *arg0) {
    SVECTOR a;
    SVECTOR b;
    s32 s2;

    s2 = AF(arg0, s32, 0x4C);
    func_80148534((s32) &a, (s32) &b);
    SVecToPos(&a, arg0 + 4);
    ObjLocalToWorld16(s2, arg0 + 4);
    AF(arg0, u16, 0xA) -= 0x40;
}

s32 FadeFlashColour(void) {
    u8 *p = &D_801ED5E8;

    if (*p != 0) {
        *p -= 0x10;
    }
    if (D_801ED5E9 != 0) {
        D_801ED5E9 -= 0x10;
    }
    if (D_801ED5EA != 0) {
        D_801ED5EA -= 0x10;
    }
    return *(s32 *) p == 0;
}

void RunTrailSpriteState(u8 *arg0) {
    D_8019012C[AF(arg0, u16, 2)]();
}

void StartTrailSprite(u8 *arg0) {
    s32 var_v0;

    var_v0 = 0x70;
    do {
        (*(s32 *)((u8 *)D_801ED634 + (var_v0) * 1)) = 0;
        var_v0 -= 0x10;
    } while (var_v0 >= 0);
    AF(arg0, s16, 0x2E) = 0x4000;
    AF(arg0, s16, 0x2C) = 0x4000;
    AF(arg0, s16, 0x60) = 0;
    AF(arg0, s16, 0x62) = 0;
    SetTrailSpriteColour((s32) arg0);
    AF(arg0, s16, 0x66) = 0;
    NextObjState((s32) arg0);
}

void TrailSpriteShrinkStep(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0;
    s32 var_v1;
    u16 temp_v1;
    u16 var_v0;

    AF(arg0, u16, 0x62) = (u16) (AF(arg0, u16, 0x62) + 4);
    temp_v1 = AF(arg0, u16, 0x60) + 0x40;
    AF(arg0, u16, 0x60) = temp_v1;
    temp_v0 = AF(arg0, u16, 0x2E) - temp_v1;
    AF(arg0, u16, 0x2E) = (u16) temp_v0;
    AF(arg0, s16, 0x2C) = temp_v0;
    if (temp_v0 < 0x1000) {
        AF(arg0, u16, 0x2E) = 0x1000U;
        AF(arg0, s16, 0x2C) = 0x1000;
        AF(arg0, u16, 0x60) = 0x80U;
        SetObjTimer((s32) arg0, 0xE, arg2, arg3);
        NextObjState((s32) arg0);
    }
    SetTrailSpriteColour((s32) arg0);
    var_v1 = 2;
    if (AF(arg0, s16, 0x2C) < 0x2800) {
        var_v0 = AF(arg0, u16, 0x66) + 1;
    } else {
        var_v1 = 3;
        var_v0 = AF(arg0, u16, 0x66) + 1;
    }
    AF(arg0, u16, 0x66) = var_v0;
    if ((s16) var_v0 == var_v1) {
        AddTrailCopy((s32) arg0);
        AF(arg0, u16, 0x66) = 0U;
    }
    DrawTrailSprite((s32) arg0);
}

void TrailSpriteHoldStep(s32 arg0) {
    if (TickObjTimer(arg0) != 0) {
        NextObjState(arg0);
    }
    DrawTrailSprite(arg0);
}

void TrailSpriteBrightenStep(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x62) + 0x10;
    AF(arg0, u16, 0x62) = temp_v0;
    if ((s16) temp_v0 >= 0x100) {
        AF(arg0, u16, 0x62) = 0xFFU;
        NextObjState((s32) arg0, arg1, arg2, arg3);
    }
    SetTrailSpriteColour((s32) arg0);
    DrawTrailSprite((s32) arg0);
}

void TrailSpriteFadeStep(u8 *arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x62) - 0x10;
    AF(arg0, u16, 0x62) = temp_v0;
    if ((s16) (temp_v0) < 0) {
        FreeObj68((s32) arg0);
        return;
    }
    SetTrailSpriteColour((s32) arg0);
    DrawTrailSprite((s32) arg0);
}

s32 SetTrailSpriteColour(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 0x62);
    AF(arg0, u8, 0x50) = (s8) temp_v0;
    AF(arg0, u8, 0x51) = (s8) AF(arg0, u16, 0x62);
    AF(arg0, u8, 0x52) = (s8) AF(arg0, u16, 0x62);
    return (s32) temp_v0;
}

extern u8 D_801ED628;

void AddTrailCopy(s32 arg0) {
    s32 (*p)[4];
    s32 i;

    p = (s32 (*)[4])&D_801ED628;
    for (i = 0; i < 8; i++) {
        if (p[i][3] == 0) {
            p[i][3] = 8;
            AF(p[i], SVECTOR, 0) = AF(arg0, SVECTOR, 0x2C);
            AF(p[i], SCol, 8) = AF(arg0, SCol, 0x50);
            return;
        }
    }
}

extern void DrawTrailQuad();

void DrawTrailSprite(s32 arg0) {
    s32 (*p)[4];
    s32 i;

    DrawTrailQuad(arg0, arg0 + 0x2C, arg0 + 0x50);
    p = (s32 (*)[4])&D_801ED628;
    for (i = 0; i < 8; i++) {
        if (p[i][3] != 0) {
            DrawTrailQuad(arg0, p[i], &p[i][2]);
            p[i][3]--;
        }
    }
}

extern SVECTOR D_80190140[];
extern s32 D_80190160[];

void DrawTrailQuad(s32 arg0, SVECTOR *rot, SCol *col) {
    SPrimT s;
    MATRIX m;
    SPrimT *p;

    p = &s;
    SetScaleMatrix(rot, &m);
    ApplyMatrixSV(&m, &D_80190140[0], &p->v[0]);
    ApplyMatrixSV(&m, &D_80190140[1], &s.v[1]);
    ApplyMatrixSV(&m, &D_80190140[2], &s.v[2]);
    ApplyMatrixSV(&m, &D_80190140[3], &s.v[3]);
    s.v[0].vz = 3;
    s.tp = 0x2C;
    *(s32 *)s.uv[0] = D_80190160[2];
    *(s32 *)s.uv[1] = D_80190160[0];
    *(s32 *)s.uv[2] = D_80190160[3];
    *(s32 *)s.uv[3] = D_80190160[1];
    *(SCol *)&s.r = *col;
    s.code = 0x50000000;
    DrawPrimFT4Screen(p);
}

void RestoreAbilityOnLoad(void) {
    D_80126CF8 = D_80078EC1;
    RunAbilityInitHandler((s32) &g_Player);
}

void EnterUseAbility(s32 arg0) {
    CheckAbilityFails();
    SetPlayerState(arg0, 0x17);
    AF(arg0, u8, 0x197) = 1;
    RunAbilityUse(arg0);
}

s32 SwitchToUseAbility(s32 arg0) {
    CheckAbilityFails();
    SetPlayerState(arg0, 0x17);
    RunAbilityUse(arg0);
}

extern s32 LacksAbilityBp();

void CheckAbilityFails(void) {
    s32 m = D_800B9A08;

    D_80078EC5 = 0;
    D_80078EC1 &= 0x7F;
    if (LacksAbilityBp() != 0 || (D_80078EC1 == 0x1A && m != 0x305C && m != 0x305D && m != 0x305E && m != 0x305F &&
        m != 0x3060 && m != 0x3061 && m != 0x3062 && m != 0x3063 && m != 0x3064 && m != 0x3065 && m != 0x3066)) {
        D_80078EC5 = 0x80;
    }
}

extern s32 func_800CAE0C();

void RunPassiveAbility(Player *arg0) {
    u8 *c = &g_Status;

    if (arg0->state != 0x16 && arg0->state != 0x1A && !((s32)arg0->action & 0x80FFFFFF) &&
        (GetAbilityInfo(arg0, D_80078EC1) & 0x80)) {
        D_80190170[D_80078EC1 & 0x7F](arg0);
    }
    if (arg0->state != 0x16 && arg0->state != 0x1A && c[0x49] == 0x19) {
        func_800CAE0C(arg0);
    }
}

void RunAbilityUse(s32 arg0, s32 arg1) {
    if (D_80078EC5 & 0x80) {
        RunAbilityFailState();
        return;
    }
    D_80190170[(D_80078EC1 & 0x7F)]();
}

void SpendAbilityBp(s32 arg0) {
    SpendBp(arg0, GetAbilityInfo(arg0, D_80078EC1 & 0x7F) & 0x7F);
}

s32 LacksAbilityBp(u8 *obj) {
    return D_80078EB8 < (GetAbilityInfo(obj, D_80078EC1 & 0x7F) & 0x7F);
}

u32 GetAbilityInfo(u8 *obj, u32 ability) {
    return D_801901EC[ability & 0x7F];
}

void SetAbilityTimer(Player *obj, u32 ability) {
    D_80078EC8 = D_8019020C[ability & 0x7F];
}

void TickAbilityTimer(Player *obj) {
    if ((obj->action & 0x80FFFFFF) == 0 && D_80078EC8 != 0) {
        D_80078EC8--;
    }
}

u32 GetAbilityAssimilateRate(u8 *obj, u32 ability) {
    return D_80190288[ability & 0x7F];
}

u32 GetAbilityBpBonus(Player *obj, u32 ability) {
    return D_801902A8[ability & 0x7F];
}

u32 func_80165700(u8 *obj, u32 ability) {
    return D_801902C8[ability & 0x7F];
}

void func_80165718(u8 *obj) {
    switch (D_80078EC1) {
    case 3:
    case 12:
    case 24:
        EndHeldAbility(obj);
        break;
    }
}

void ResumeHopAbility(u8 *obj) {
    if (D_80078EC1 == 12) {
        func_800CAF6C(obj);
    }
}

void SaveStatusOnce(void) {
    if (D_80078EC3 == 0) {
        D_80078EC3 = 1;
        SaveStatus();
    }
}

void SaveStatus(void) {
    D_80078ECC = g_StatusPoison;
    D_80078ED0 = D_80078E9C;
    D_80078ED4 = D_80078EA0;
    D_80078ED8 = D_80078EA4;
    D_80078EDC = D_80078EA8;
    D_80078EE0 = D_80078EBB;
}

void RestoreStatusOnce(void) {
    if (D_80078EC3 != 0) {
        D_80078EC3 = 0;
        RestoreStatus();
    }
}

void RestoreStatus(void) {
    g_StatusPoison = D_80078ECC;
    D_80078E9C = D_80078ED0;
    D_80078EA0 = D_80078ED4;
    D_80078EA4 = D_80078ED8;
    D_80078EA8 = D_80078EDC;
    D_80078EBB = D_80078EE0;
}

void ClearAbilityUsed(void) {
    D_80078EC4 = 0;
}

void SetAbilityUsed(void) {
    D_80078EC4 = 1;
}

u8 GetAbilityUsed(void) {
    return D_80078EC4;
}

u8 TestAndSetAbilityUsed(void) {
    u8 used;
    s32 cur = D_80078EC4;
    used = cur;
    if (cur == 0) {
        D_80078EC4 = 1;
    }
    return used;
}

void func_80165938(void) {
    D_8012672C = 0;
    D_8012811C = 0;
    D_80126B08 = 0;
}

void func_80165958(void) {
    D_8012672C++;
}

s32 func_80165978(void) {
    return D_8012672C;
}

void IncStageCount811C(void) {
    D_8012811C++;
}

s32 GetStageCount811C(void) {
    return D_8012811C;
}

void func_801659B8(void) {
    D_80126B08 = 1;
}

s32 func_801659CC(void) {
    return D_80126B08;
}

void RunAbilityInitHandler(u8 *obj) {
    D_801902E8[obj[0x1A0]](obj);
}

void NopA18(void) {
}

void EndHeldAbility(u8 *obj) {
    StopAbility(obj);
    ClearHeldAbility(obj);
}

void ClearHeldAbility(u8 *obj) {
    D_80078EC1 = 0;
    D_80078EC2 = 0;
    D_80078EC3 = 0;
    D_80078EC4 = 0;
}

void StopAbility(u8 *obj) {
    RunAbilityEndHandler(obj);
    obj[0x197] = 0;
    *(s32 *)(obj + 0x44) &= ~8;
    *(u16 *)(*(u8 **)(obj + 0x20) + 0x2C) &= 0xFFDF;
}

void RunAbilityEndHandler(u8 *arg0) {
    D_80190364[(D_80078EC1 & 0x7F)]();
}

void NopB08(void) {
}

void NopB10(void) {
}

void NopB18(void) {
}

void NopB20(void) {
}

extern void (*D_801903E0[])();

void RunAbilityFailState(u8 *arg0) {
    AF(arg0, s32, 0x44) |= 8;
    D_801903E0[AF(arg0, u8, 0x197)]();
}

void AbilityFailState0(Player *arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        StartAbilityFailMotion(arg0);
        arg0->abilStep = (u8) (arg0->abilStep + 1);
    }
}

void StartAbilityFailMotion(Player *arg0) {
    SetPlayerMotionIndex(arg0, 0x22);
    StartFace(arg0, 0x1A);
    arg0->abilStep = (u8) (arg0->abilStep + 1);
}

void AbilityFailStep(s32 arg0) {
    if ((CheckPlayerGround(arg0) == 0) && (AF(arg0, u16, 0xB8) & 0x8000)) {
        EndAbilityFailFace(arg0);
        LeavePlayerKind(arg0);
        EnterPlayerStanding(arg0);
    }
}

s32 EndAbilityFailFace(s32 arg0) {
    return StartFace(arg0, 0x11);
}

s32 ClearEffects(void) {
    return ZeroFill((s32) &g_Effects, 0xA50);
}

extern s32 g_EffectHandlers;

void UpdateEffects(void) {
    s32 i;
    u8 *p;
    u8 *q;
    u8 *a;

    i = 0;
    p = &g_Effects;
    for (; i < 30; i++) {
        if (AF(p, u16, 0) != 0) {
            ((void (**)())g_EffectHandlers)[AF(p, u16, 0)](p);
        }
        p += 0x58;
    }
    for (i = 0; i < 30; i++) {
        q = &g_Effects + i * 0x58;
        a = AF(q, u8 *, 0x20);
        if (a != 0) {
            if (AF(a, u16, 0) == 1) {
                AF(a, s32, 0x48) = AF(a, s16, 8) = AF(q, s16, 6);
                AF(a, s32, 0x4C) = AF(a, s16, 0xA) = AF(q, s16, 0xA);
                AF(a, s32, 0x50) = AF(a, s16, 0xC) = AF(q, s16, 0xE);
                AF(a, u16, 0x2C) |= 1;
            } else if (AF(a, u8 *, 0x34) != 0) {
                AF(AF(a, u8 *, 0x34), s32, 0x14) = AF(a, s16, 8) = AF(q, s16, 6);
                AF(AF(a, u8 *, 0x34), s32, 0x18) = AF(a, s16, 0xA) = AF(q, s16, 0xA);
                AF(AF(a, u8 *, 0x34), s32, 0x1C) = AF(a, s16, 0xC) = AF(q, s16, 0xE);
            } else {
                AF(a, s16, 8) = AF(q, s16, 6);
                AF(a, s16, 0xA) = AF(q, s16, 0xA);
                AF(a, s16, 0xC) = AF(q, s16, 0xE);
            }
        }
    }
}

void DebugPrintWord(u16 *arg0) {
    SetDebugText(0, (s32) &D_801EC898, 0x80, 0x80, /* extra? */ 0, /* extra? */ 0);
    SetDebugNumber(1, (s32) *arg0, 0xA8, 0x80, /* extra? */ 0x40, /* extra? */ 0);
}

extern void ScalePointsByModel();
extern void func_80167DBC();
extern void func_80167AE0();

void UpdateSwordTrails(void) {
    Player *p = &g_Player;
    SVECTOR a;
    SVECTOR b;

    if ((g_PlayerFlags & 0x10000400) == 0x10000000 && AF(g_PlayerModel, s32, 4) >= 0 && AF(g_PlayerModel, s32, 0x20) != 0) {
        func_801484B0((s32) &a, (s32) &b);
        ScalePointsByModel((s32) p, (s32) &a, (s32) &b);
        func_80167DBC((s32) p, (s32) &a, (s32) &b);
    }
    if (((s32)p->status & 0x20020400) == 0x20000000 && (s32)p->model->unk04 >= 0 && (s32)p->model->pose != 0) {
        func_80148534((s32) &a, (s32) &b);
        ScalePointsByModel((s32) p, (s32) &a, (s32) &b);
        func_80167AE0((s32) p, (s32) &a, (s32) &b);
    }
}

extern void func_80020F34();

void ScalePointsByModel(s32 arg0, SVECTOR *arg1, SVECTOR *arg2) {
    MATRIX m;

    SetIdentityRot(&m);
    func_80020F34(&m, AF(arg0, s32, 0x20) + 0x18);
    ApplyMatrixSV(&m, arg1, arg1);
    ApplyMatrixSV(&m, arg2, arg2);
}

void RunDustFxState(u8 *arg0) {
    D_801903EC[AF(arg0, u16, 2)]();
}

extern u8 D_800D387C;
extern u8 D_800D3888;
extern void DustFxStep();
extern s32 rsin();
extern s32 rcos();

void DustFxSetup(u8 *arg0) {
    u8 *s0;
    s16 ang;
    s16 sh;
    s32 x, z;
    s32 s, c;
    s32 p;
    u32 t;

    s0 = AF(arg0, u8 *, 0x34);
    ObjLocalToWorld16(s0, arg0 + 4);
    if (AF(arg0, s32, 0x2C) != 0) {
        sh = 8;
        if (AF(arg0, s32, 0x2C) != 3) {
            ang = AF(AF(s0, u8 *, 0x20), u16, 0x12);
        } else {
            t = AF(arg0, u32, 0x30);
            ang = t & 0xFFF;
            sh = (t >> 12) & 0xF;
        }
        s = rsin(ang) << sh;
        x = -s;
        c = rcos(ang) << sh;
        z = -c;
        if (AF(arg0, s32, 0x2C) == 2) {
            x = s;
            z = c;
        }
        AF(arg0, s32, 0x10) = x;
        AF(arg0, s32, 0x18) = z;
    }
    AF(arg0, s32, 0x14) = 0xFFFF0000;
    func_800D1FC8(arg0, 6);
    p = func_800D21C4(arg0, &D_800D387C, 0x9C);
    if (p != 0) {
        AF(arg0, s32, 0x20) = p;
        AF(p, s32, 4) |= 0x50000040;
        if (AF(arg0, s32, 0x2C) != 3) {
            AF(p, u16, 0x18) = 0x2000;
        } else {
            AF(p, u16, 0x18) = AF(arg0, u16, 0x32);
        }
        AF(p, u16, 0x1A) = AF(p, u16, 0x18);
        StartSpriteAnim(p, arg0 + 0x24, &D_800D3888);
        DustFxStep(arg0);
        AF(arg0, u16, 2)++;
        return;
    }
    FreeEffect(arg0);
}

void DustFxStep(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;

    if (StepSpriteAnim(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) {
        FreeEffect(arg0);
        return;
    }
    func_800D22E4(arg0);
    temp_v0 = AF(arg0, s32, 0x10);
    temp_a0 = AF(arg0, s32, 0x18);
    AF(arg0, s32, 0x10) = (s32) ((temp_v0 >> 1) + (temp_v0 >> 2));
    AF(arg0, s32, 0x18) = (s32) ((temp_a0 >> 1) + (temp_a0 >> 2));
}

void func_80166244(StageActor *arg0) {
    SpawnEffect(3, arg0, (s32) arg0->pos[0].h.i, (s32) (s16) ((u16)arg0->pos[1].h.i - 0x10), (s32) arg0->pos[2].h.i, 0x08F8FFF8, -0x1FFF5000);
}

void func_8016629C(u8 *arg0) {
    SpawnEffect(3, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0x0F88FFF2, /* extra? */ 0xE000C000);
}

void func_801662F4(u8 *arg0) {
    SpawnEffect(3, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0x08FEFFF4, /* extra? */ 0xE000C000);
}

void func_8016634C(u8 *arg0) {
    SpawnEffect(3, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0x0EEEFFF8, /* extra? */ 0x6800B000);
}

void func_801663A4(u8 *arg0) {
    SpawnEffect(3, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) (s16) (AF(arg0, u16, 0xA) - 0x10), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ 0x0CCCFFF8, /* extra? */ 0xE000C000);
}

void RunPuffFxState(u8 *arg0) {
    D_801903F4[AF(arg0, u16, 2)]();
}

extern void PuffFxStep();

void PuffFxSetup(u8 *arg0) {
    u8 *o;
    s32 a2;

    a2 = 0x9B;
    if (!(AF(arg0, s32, 0x30) & 0x10000000)) {
        a2 = 0x9C;
    }
    o = (u8 *)func_800D21C4(arg0, &D_800D387C, a2);
    if (o != 0) {
        AF(arg0, u8 *, 0x20) = o;
        AF(o, s16, 0x18) = AF(o, s16, 0x1A) = AF(arg0, s32, 0x30) & 0x7FFF;
        if (AF(arg0, s32, 0x30) & 0x8000) {
            func_800D1FC8(arg0, 6);
        }
        if (AF(arg0, s32, 0x30) < 0) {
            AF(o, s32, 4) |= 0x50000000;
        } else if (AF(arg0, s32, 0x30) & 0x08000000) {
            AF(o, s32, 4) = 0x60000000;
        }
        if (!(AF(arg0, s32, 0x30) & 0x40000000)) {
            AF(o, s32, 4) |= 0x40;
        } else {
            AF(o, s32, 4) &= ~0x40;
        }
        if (AF(arg0, s32, 0x30) & 0x20000000) {
            AF(o, u8, 0x24) = (AF(arg0, u32, 0x2C) >> 20) & 0xF0;
            AF(o, u8, 0x25) = (AF(arg0, u32, 0x2C) >> 16) & 0xF0;
            AF(o, u8, 0x26) = (AF(arg0, u32, 0x2C) >> 12) & 0xF0;
        }
        StartSpriteAnim(o, arg0 + 0x24, &D_800D3888);
        AF(arg0, s16, 0x16) = AF(arg0, s32, 0x2C);
        AF(arg0, s16, 2)++;
        PuffFxStep(arg0);
    } else {
        FreeEffect(arg0);
    }
}

void PuffFxStep(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if (StepSpriteAnim(AF(arg0, s32, 0x20), arg0 + 0x24) != 0) {
        FreeEffect(arg0);
        return;
    }
    func_800D22E4(arg0);
    temp_v0 = AF(arg0, s32, 0x14);
    AF(arg0, s32, 0x14) = (s32) (temp_v0 - (temp_v0 >> 3));
}

void func_80166618(u8 *arg0) {
    D_801904BC[AF(arg0, u16, 2)]();
}

void func_80166654(u8 *arg0) {
    D_801904CC[AF(arg0, u16, 2)]();
}

extern MATRIX GsIDMATRIX;
extern u8 D_801ED6A8;

s32 DrawSwordTrail(s32 arg0, s32 arg1) {
    SPrim s;
    MATRIX m;
    s16 id;
    u8 *p;
    u8 *e;
    s16 j;
    s16 c;
    s16 d;
    s16 n;
    s16 cnt;

    m = GsIDMATRIX;
    s.code = 0x50000000;
    id = arg0;
    p = &D_801ED6A8 + id * 0xC4;
    cnt = 0;
    if (p[0] == 0) {
        return 0;
    }
    e = p + 4;
    j = p[1];
    c = p[3];
    d = c >> 1;
    n = p[2];
    while (--n != -1) {
        u8 *q = e + j * 12;
        s.v[0].vx = AF(q, u16, 0);
        s.v[0].vy = AF(q, u16, 2);
        s.v[0].vz = AF(q, u16, 4);
        s.v[1].vx = AF(q, u16, 6);
        s.v[1].vy = AF(q, u16, 8);
        s.v[1].vz = AF(q, u16, 0xA);
        cnt++;
        if (id < 2) {
            if ((s16)arg1 == 0) {
                s.c[0].b = s.c[1].b = c;
                s.c[0].r = s.c[1].r = s.c[0].g = s.c[1].g = d;
            } else {
                s.c[0].b = s.c[1].b = d = (c >> 1) + (c >> 3);
                s.c[0].r = s.c[1].r = s.c[0].g = s.c[1].g = c;
            }
        } else {
            s.c[0].r = s.c[1].r = c;
            s.c[0].g = s.c[1].g = s.c[0].b = s.c[1].b = d;
        }
        j--;
        if (j < 0) {
            j = 15;
        }
        q = e + j * 12;
        s.v[2].vx = AF(q, u16, 0);
        s.v[2].vy = AF(q, u16, 2);
        s.v[2].vz = AF(q, u16, 4);
        s.v[3].vx = AF(q, u16, 6);
        s.v[3].vy = AF(q, u16, 8);
        s.v[3].vz = AF(q, u16, 0xA);
        c -= 0x10;
        d -= 0x10;
        if (d < 0) {
            d = 0;
        }
        if (id < 2) {
            if ((s16)arg1 == 0) {
                s.c[2].b = s.c[3].b = c;
                s.c[2].r = s.c[3].r = s.c[2].g = s.c[3].g = d;
            } else {
                s.c[2].b = s.c[3].b = d;
                s.c[2].r = s.c[3].r = s.c[2].g = s.c[3].g = c;
            }
        } else {
            s.c[2].r = s.c[3].r = c;
            s.c[2].g = s.c[3].g = s.c[2].b = s.c[3].b = d;
        }
        DrawPrimG4Mtx(&s, &m);
    }
    return cnt;
}

extern void RotTransSV();
extern s32 VectorNormalSS();

s32 UpdateSwordTrail(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    SVECTOR a;
    SVECTOR b;
    SVECTOR c;
    SVECTOR d;
    s32 flag;
    u8 *p;
    s32 obj;
    u8 t;
    s16 id;
    s16 mode;
    s16 div;

    mode = arg1;
    id = arg2;
    div = arg3;
    p = &D_801ED6A8 + id * 0xC4;
    obj = AF(arg0, s32, 0x34);
    switch (mode) {
    case 0:
        p[0] = 1;
        p[2] = 0;
        p[1] = 0;
        p[3] = 0xF4;
        break;
    case 1:
        c.vx = AF(p + ((p[1] * 3) << 2), u16, 4);
        c.vy = AF(p + ((p[1] * 3) << 2), u16, 6);
        c.vz = AF(p + ((p[1] * 3) << 2), u16, 8);
        d.vx = AF(p + ((p[1] * 3) << 2), u16, 0xA);
        d.vy = AF(p + ((p[1] * 3) << 2), u16, 0xC);
        d.vz = AF(p + ((p[1] * 3) << 2), u16, 0xE);
        if (++p[1] >= 16) {
            p[1] = 0;
        }
        if (p[2] < 15) {
            p[2]++;
        }
        break;
    case 2:
        t = p[3] - 0x10;
        p[3] = t;
        if (t < 0x10) {
            p[0] = 0;
            return 1;
        }
        if (p[2] >= 2) {
            if ((t >> 4) < p[2]) {
                p[2]--;
            }
        }
        return 0;
    }
    if (id < 2) {
        func_801484B0((s32)&a, (s32)&b);
    } else {
        func_80148534((s32)&a, (s32)&b);
    }
    ScalePointsByModel(obj, (s32)&a, (s32)&b);
    ObjLocalToWorld(obj, (s32)&a, (s32)&a);
    RotTransSV(&b, &b, &flag);
    if (mode != 0) {
        c.vx = (a.vx + c.vx) >> 1;
        c.vy = (a.vy + c.vy) >> 1;
        c.vz = (a.vz + c.vz) >> 1;
        d.vx = (b.vx + d.vx) >> 1;
        d.vy = (b.vy + d.vy) >> 1;
        d.vz = (b.vz + d.vz) >> 1;
        c.vx -= d.vx;
        c.vy -= d.vy;
        c.vz -= d.vz;
        VectorNormalSS(&c, &c);
        c.vx = d.vx + c.vx / div;
        c.vy = d.vy + c.vy / div;
        c.vz = d.vz + c.vz / div;
        AF(p + ((p[1] * 3) << 2), u16, 4) = c.vx;
        AF(p + ((p[1] * 3) << 2), u16, 6) = c.vy;
        AF(p + ((p[1] * 3) << 2), u16, 8) = c.vz;
        AF(p + ((p[1] * 3) << 2), u16, 0xA) = d.vx;
        AF(p + ((p[1] * 3) << 2), u16, 0xC) = d.vy;
        AF(p + ((p[1] * 3) << 2), u16, 0xE) = d.vz;
        if (++p[1] >= 16) {
            p[1] = 0;
        }
        if (p[2] < 15) {
            p[2]++;
        }
    }
    AF(p + ((p[1] * 3) << 2), u16, 4) = a.vx;
    AF(p + ((p[1] * 3) << 2), u16, 6) = a.vy;
    AF(p + ((p[1] * 3) << 2), u16, 8) = a.vz;
    AF(p + ((p[1] * 3) << 2), u16, 0xA) = b.vx;
    AF(p + ((p[1] * 3) << 2), u16, 0xC) = b.vy;
    AF(p + ((p[1] * 3) << 2), u16, 0xE) = b.vz;
    return 0;
}

extern u8 D_801ED6A8;

void ResetSwordTrail(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 x = (s16)arg1;
    s32 y = (s16)arg2;
    s16 a = x;
    s16 b = y;
    s16 i;
    u8 *p;
    s32 same;

    for (i = 0, p = &g_Effects; i < 30; i++, p += 0x58) {
        if (p != arg0) {
            u16 t = AF(p, u16, 0);
            if (t == a || t == b) {
                same = x == y;
                if (!same || AF(p, s32, 0x2C) == AF(arg0, s32, 0x2C)) {
                    FreeEffect(p);
                }
            }
        }
    }
    ZeroFill(&D_801ED6A8 + (s16)arg3 * 0xC4, 0xC4);
}

void FreeEffectsOfKind(s32 arg0) {
    s16 i;
    u8 *p;
    s16 id = arg0;

    for (i = 0, p = &g_Effects; i < 0x1E; i++, p += 0x58) {
        if (AF(p, u16, 0) == id) {
            FreeEffect(p);
        }
    }
}

extern s32 D_801269A4;
extern s32 D_801269A8;
extern s32 D_801269AC;
extern s16 g_PlayerAbsorbCounter;
extern u8 D_801903FC[];
extern u8 D_80190410[];
extern u8 D_80190424[];
extern void func_800D20C0();
extern void SetMatrixTrans();
extern void func_800D23D0();

void func_801670E4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    SVECTOR pos;
    SVECTOR rot;
    VECTOR w;
    SPrim s;
    MATRIX m;
    MATRIX m2;
    u8 *p;
    s16 i;
    s32 obj;

    obj = AF(arg0, s32, 0x34);
    s.v[1].vx = s.v[1].vy = s.v[1].vz = 0;
    s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
    s.c[1].b = 0x70;
    s.c[1].r = s.c[1].g = AF(arg0, u8, 0x12);
    pos.vx = arg1;
    pos.vy = arg2;
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.c[3].r = s.c[3].g = s.c[3].b = 0;
    s.code = 0x50000000;
    pos.vz = arg3;
    ObjLocalToWorld(obj, (s32)&pos, (s32)&pos);
    AF(arg0, s32, 0x4C) = (s16)(AF(arg0, u16, 6) = pos.vx);
    AF(arg0, s32, 0x50) = (s16)(AF(arg0, u16, 0xA) = pos.vy);
    AF(arg0, s32, 0x54) = (s16)(AF(arg0, u16, 0xE) = pos.vz);
    func_800D20C0(&pos, &rot, 7);
    SetMatrixTrans(&pos, &m);
    func_800D23D0(&rot);
    RotMatrixYXZ(&rot, &m);
    for (p = D_80190410, i = 0; i < 4; i++) {
        s.v[0].vx = (s8)*p++;
        s.v[0].vy = (s8)*p++;
        s.v[2].vx = (s8)*p++;
        s.v[2].vy = (s8)*p++;
        s.v[3].vx = (s8)*p++;
        s.v[3].vy = (s8)*p++;
        p -= 2;
        DrawPrimG4Mtx(&s, &m);
    }
    w.vx = D_801269A4 - pos.vx;
    w.vy = D_801269A8 - pos.vy;
    w.vz = D_801269AC - pos.vz;
    s.c[1].g = 0xA0;
    s.v[0].vy = s.v[2].vy = s.v[3].vy = 0;
    s.c[1].r = s.c[1].b = 0x10;
    for (p = D_801903FC, i = 0; i < 4; i++) {
        s.v[0].vx = (s8)*p++;
        s.v[0].vz = (s8)*p++;
        s.v[2].vx = (s8)*p++;
        s.v[2].vz = (s8)*p++;
        s.v[3].vx = (s8)*p++;
        s.v[3].vz = (s8)*p++;
        p -= 2;
        DrawPrimG4Mtx(&s, arg0 + 0x38);
    }
    if (AF(arg0, s32, 0x30) > 0) {
        s32 k = rot.vx >> 6;
        pos.vx += k;
        pos.vy += k;
        pos.vz += k;
        SetMatrixTrans(&pos, &m);
        pos.vx = pos.vy = pos.vz = ((u32)AF(arg0, s32, 0x30) >> 1) + (g_PlayerAbsorbCounter << 5);
        SetScaleMatrix(&pos, &m2);
        MulMatrix2(&m2, &m);
        s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
        s.c[1].g = AF(arg0, u8, 0x12) + 0x60;
        s.c[1].r = s.c[1].b = 0x20;
        s.c[0].g = s.c[2].g = s.c[3].g = s.c[0].r = s.c[0].b = s.c[2].r = s.c[2].b = s.c[3].r = s.c[3].b = 0;
        for (p = D_80190424, i = 0; i < 8; i++) {
            s.v[0].vx = (s8)*p++;
            s.v[0].vy = (s8)*p++;
            s.v[2].vx = (s8)*p++;
            s.v[2].vy = (s8)*p++;
            s.v[3].vx = (s8)*p++;
            s.v[3].vy = (s8)*p++;
            p -= 2;
            DrawPrimG4Mtx(&s, &m);
        }
    }
}

void GlowFxStep(u8 *a) {
    u8 *p = AF(a, u8 *, 0x34);
    s32 o;

    if (AF(p, u16, 0) == 1) {
        if (AF(a, s16, 0x12) > AF(a, s16, 0x10)) {
            if (AF(a, s32, 0x1C) > 0) {
                AF(a, s16, 0x10) = rand() & 0x30;
                AF(a, s32, 0x1C) = -0x30;
            }
        } else if (AF(a, s32, 0x1C) < 0) {
            AF(a, s16, 0x10) = (rand() & 0x30) + 0x40;
            AF(a, s32, 0x1C) = 0x30;
        }
        AF(a, s16, 0x12) += AF(a, s32, 0x1C);
        AF(a, MATRIX, 0x38) = AF(AF(p, u8 *, 0x20), MATRIX, 0x34);
        func_801670E4(a, 0, 0, 0);
        o = SpawnEffect(0xE, (StageActor *)a, AF(p, s16, 6), AF(p, s16, 0xA), AF(p, s16, 0xE), 0, 0);
        if (o != 0) {
            AF(o, MATRIX, 0x38) = AF(AF(p, u8 *, 0x20), MATRIX, 0x34);
        }
        if (AF(AF(AF(a, u8 *, 0x34), u8 *, 0x4C), s32, 0x44) & 0x20) {
            AF(a, s32, 0x30) = 0x600;
            AF(a, u16, 2)++;
        }
    } else {
        FreeEffect(a);
    }
}

void GlowFxPulse(u8 *a) {
    u8 *p = AF(a, u8 *, 0x34);

    if (AF(p, u16, 0) == 1) {
        if (AF(a, s16, 0x12) > AF(a, s16, 0x10)) {
            if (AF(a, s32, 0x1C) > 0) {
                AF(a, s16, 0x10) = rand() & 0x30;
                AF(a, s32, 0x1C) = -0x20;
            }
        } else if (AF(a, s32, 0x1C) < 0) {
            AF(a, s16, 0x10) = (rand() & 0x30) + 0x40;
            AF(a, s32, 0x1C) = 0x20;
        }
        AF(a, s16, 0x12) += AF(a, s32, 0x1C);
        if (AF(a, s32, 0x2C) & 8) {
            AF(a, s32, 0x30) += 0x80;
        } else {
            AF(a, s32, 0x30) -= 0x40;
        }
        if (!(AF(a, s32, 0x2C)++ & 0xF)) {
            PlaySe(0x44E);
        }
        AF(a, MATRIX, 0x38) = AF(AF(p, u8 *, 0x20), MATRIX, 0x34);
        func_801670E4(a, 0, 0, 0);
        if (!(AF(AF(AF(a, u8 *, 0x34), u8 *, 0x4C), s32, 0x44) & 0x20)) {
            AF(a, u16, 2)--;
        }
    } else {
        FreeEffect(a);
    }
}

void RunGlowFxState(u8 *arg0) {
    D_801904DC[AF(arg0, u16, 2)]();
}

void func_801678F0(u8 *a) {
    u8 *p = AF(a, u8 *, 0x34);
    SVECTOR r;
    s32 o;

    if (AF(p, s32, 0x44) & 0x10) {
        if (AF(a, s16, 0x12) > AF(a, s16, 0x10)) {
            if (AF(a, s32, 0x1C) > 0) {
                AF(a, s16, 0x10) = rand() & 0x30;
                AF(a, s32, 0x1C) = -0x30;
            }
        } else if (AF(a, s32, 0x1C) < 0) {
            AF(a, s16, 0x10) = (rand() & 0x30) + 0x40;
            AF(a, s32, 0x1C) = 0x30;
        }
        AF(a, s16, 0x12) += AF(a, s32, 0x1C);
        if (AF(a, s32, 0x30) != 0) {
            AF(a, s32, 0x30) -= 0xC0;
        }
        r.vx = 0x400;
        r.vy = 0;
        r.vz = D_800B99DA << 8;
        RotMatrixYXZ(&r, (MATRIX *)(a + 0x38));
        MulMatrix2(AF(p, u8 *, 0x20) + 0x34, a + 0x38);
        func_801670E4(a, -6, -0x44, -0x18);
        o = SpawnEffect(0xE, (StageActor *)a, AF(a, s16, 6), AF(a, s16, 0xA), AF(a, s16, 0xE), 0, 0);
        if (o != 0) {
            AF(o, MATRIX, 0x38) = AF(a, MATRIX, 0x38);
        }
    } else {
        FreeEffect(a);
    }
}

void RunHeldGlowFxState(u8 *arg0) {
    D_801904E8[AF(arg0, u16, 2)]();
}

void FxNop(void) {
}

extern s8 D_801905F4[];
extern s8 D_80190608[];
extern void func_80168070();

void func_80167AE0(Player *arg0, s16 *p, s16 *q) {
    MATRIX m;
    SPrim s;
    s8 *tp;
    s16 i;

    func_80168070(arg0, p, q, &m);
    s.v[1].vx = s.v[1].vy = s.v[1].vz = s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
    if (D_800B99DA & 1) {
        s.c[1].r = 0xA0;
    } else if (D_800B99DA & 2) {
        s.c[1].r = 0xC0;
    } else {
        s.c[1].r = 0x80;
    }
    tp = D_801905F4;
    i = 0;
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.c[3].r = s.c[3].g = s.c[3].b = 0;
    s.code = 0x50000000;
    s.c[1].g = s.c[1].b = s.c[1].r >> 2;
    do {
        s.v[0].vx = *tp++;
        s.v[0].vy = *tp++;
        s.v[2].vx = *tp++;
        s.v[2].vy = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vy = *tp--;
        DrawPrimG4Mtx(&s, &m);
        i++;
    } while (i < 4);
    tp = D_80190608;
    i = 0;
    s.v[1].vx = s.v[1].vy = s.v[0].vy = s.v[2].vy = s.v[3].vy = 0;
    s.v[1].vz = -0x20;
    do {
        s.v[0].vx = *tp++;
        s.v[0].vz = *tp++;
        s.v[2].vx = *tp++;
        s.v[2].vz = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vz = *tp--;
        DrawPrimG4Mtx(&s, &m);
        if (i == 1) {
            s.v[1].vz = 0x20;
            tp += 2;
        }
        i++;
    } while (i < 4);
    tp += 2;
    i = 0;
    s.v[0].vx = 0;
    s.v[0].vz = -0x20;
    s.c[0].r = s.c[1].r;
    s.c[0].g = s.c[0].b = s.c[1].g;
    do {
        s.v[2].vx = *tp++;
        s.v[2].vz = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vz = *tp++;
        DrawPrimG4Mtx(&s, &m);
        i++;
    } while (i < 2);
}

extern s8 D_80190448[];
extern s8 D_8019045C[];

void func_80167DBC(Player *arg0, s16 *p, s16 *q) {
    MATRIX m;
    SPrim s;
    s8 *tp;
    s16 i;

    func_80168070(arg0, p, q, &m);
    s.v[1].vx = s.v[1].vy = s.v[1].vz = s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
    if (D_800B99DA & 1) {
        s.c[1].b = 0x58;
    } else {
        s.c[1].b = 0x48;
    }
    s.c[1].r = s.c[1].g = s.c[1].b >> 2;
    if (GetFlag(0x81) & 0xFF) {
        s.c[1].g *= 4;
        s.c[1].b /= 2;
    }
    tp = D_80190448;
    i = 0;
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.c[3].r = s.c[3].g = s.c[3].b = 0;
    s.code = 0x50000000;
    do {
        s.v[0].vx = *tp++;
        s.v[0].vy = *tp++;
        s.v[2].vx = *tp++;
        s.v[2].vy = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vy = *tp--;
        DrawPrimG4Mtx(&s, &m);
        i++;
    } while (i < 4);
    tp = D_8019045C;
    i = 0;
    s.v[1].vx = s.v[1].vy = s.v[0].vy = s.v[2].vy = s.v[3].vy = 0;
    s.v[1].vz = -0x12;
    s.c[1].b *= 2;
    s.c[1].r = s.c[1].g = s.c[1].g * 2;
    do {
        s.v[0].vx = *tp++;
        s.v[0].vz = *tp++;
        s.v[2].vx = *tp++;
        s.v[2].vz = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vz = *tp--;
        if (i == 2) {
            s.c[3].b = s.c[1].b;
            s.c[3].r = s.c[3].g = s.c[1].r;
        } else if (i == 3) {
            s.c[3].r = s.c[3].g = s.c[3].b = 0;
            s.c[0].b = s.c[1].b;
            s.c[0].r = s.c[0].g = s.c[1].r;
        }
        DrawPrimG4Mtx(&s, &m);
        i++;
    } while (i < 4);
}

extern s32 D_801269A4;
extern s32 D_801269A8;
extern s32 D_801269AC;
extern void func_800D20C0();
extern void SetMatrixTrans();
extern void func_800D23D0();

void func_80168070(Player *arg0, s16 *p, s16 *q, MATRIX *m) {
    SVECTOR c;
    SVECTOR d;
    VECTOR w;

    c.vx = (p[0] + q[0]) >> 1;
    c.vy = (p[1] + q[1]) >> 1;
    c.vz = (p[2] + q[2]) >> 1;
    ObjLocalToWorld((s32)arg0, (s32)&c, (s32)&c);
    func_800D20C0(&c, &d, 8);
    SetMatrixTrans(&c, m);
    d.vx = q[0] - p[0];
    d.vy = q[1] - p[1];
    d.vz = q[2] - p[2];
    ApplyMatrixSV((MATRIX *)((u8 *)arg0->model + 0x34), &d, &d);
    func_800D23D0(&d);
    RotMatrixYXZ(&d, m);
    w.vx = D_801269A4 - c.vx;
    w.vy = D_801269A8 - c.vy;
    w.vz = D_801269AC - c.vz;
    ApplyTransposeMatrixLV(m, &w, &w);
    d.vz = -ratan2(w.vx, w.vy);
    RotMatrixYXZ(&d, m);
}

extern u8 D_801904A0[];
extern u8 D_80190470[];
extern u8 D_80190471[];
extern void ResetSwordTrail();

void func_801681FC(u8 *arg0) {
    s16 t;
    s32 a3;

    AF(arg0, s16, 0x28) = GetFlag(0x81) & 0xFF;
    AF(arg0, s32, 0x30) = D_801904A0[AF(arg0, s32, 0x2C)];
    t = AF(arg0, s32, 0x2C) * 2;
    AF(arg0, s16, 0x2A) = D_80190470[t];
    AF(arg0, s32, 0x1C) = D_80190471[t];
    a3 = AF(arg0, s32, 0x2C) & 1;
    AF(arg0, s32, 0x2C) = a3;
    ResetSwordTrail(arg0, 4, 4, a3);
    AF(arg0, u16, 2)++;
}

void func_8016829C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 temp_v0;

    if (!(AF(AF(arg0, void *, 0x34), s32, 0x44) & 2)) {
        FreeEffect((s32) arg0, arg1, arg2, arg3);
        return;
    }
    temp_v0 = AF(arg0, u16, 0x2A) - 1;
    AF(arg0, u16, 0x2A) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        UpdateSwordTrail((s32) arg0, 0, (s32) AF(arg0, s16, 0x2C), 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_80168328(u8 *arg0) {
    if (!(AF(AF(arg0, u8 *, 0x34), s32, 0x44) & 2) || --AF(arg0, s32, 0x1C) == 0) {
        AF(arg0, u16, 2)++;
        UpdateSwordTrail(arg0, 2, AF(arg0, s16, 0x2C), 0);
    } else {
        UpdateSwordTrail(arg0, 1, AF(arg0, s16, 0x2C), AF(arg0, s16, 0x30));
    }
    if ((s16)DrawSwordTrail(AF(arg0, s16, 0x2C), AF(arg0, s16, 0x28)) == 0) {
        FreeEffect(arg0);
    }
}

void func_801683D8(u8 *arg0) {
    UpdateSwordTrail((s32) arg0, 2, (s32) AF(arg0, s16, 0x2C), 0);
    if ((DrawSwordTrail((s32) AF(arg0, s16, 0x2C), (s32) AF(arg0, s16, 0x28)) << 0x10) == 0) {
        FreeEffect((s32) arg0);
    }
}

extern u8 D_801904AC[];
extern u8 D_80190484[];
extern u8 D_80190485[];
extern void ResetSwordTrail();

void func_80168430(u8 *arg0) {
    s16 temp_v0;

    AF(arg0, s32, 0x30) = D_801904AC[AF(arg0, s32, 0x2C)];
    temp_v0 = AF(arg0, s32, 0x2C) * 2;
    AF(arg0, u16, 0x2A) = D_80190484[temp_v0];
    AF(arg0, s32, 0x1C) = D_80190485[temp_v0];
    ResetSwordTrail(arg0, 5, 0x3B, 2);
    AF(arg0, u16, 2)++;
}

void func_801684B4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 temp_v0;

    if (!(AF(AF(arg0, void *, 0x34), s32, 0x44) & 2)) {
        FreeEffect((s32) arg0, arg1, arg2, arg3);
        return;
    }
    temp_v0 = AF(arg0, u16, 0x2A) - 1;
    AF(arg0, u16, 0x2A) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        UpdateSwordTrail((s32) arg0, 0, 2, 0);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void func_80168540(u8 *arg0) {
    if (!(AF(AF(arg0, void *, 0x34), s32, 0x44) & 2) || --AF(arg0, s32, 0x1C) == 0) {
        AF(arg0, u16, 2)++;
        UpdateSwordTrail(arg0, 2, 2, 0);
    } else {
        UpdateSwordTrail(arg0, 1, 2, AF(arg0, s16, 0x30));
    }
    if ((DrawSwordTrail(2, 1) << 0x10) == 0) {
        FreeEffect(arg0);
    }
}

void func_801685EC(s32 arg0) {
    UpdateSwordTrail(arg0, 2, 2, 0);
    if ((DrawSwordTrail(2, 1) << 0x10) == 0) {
        FreeEffect(arg0);
    }
}

void GlowFxInit(u8 *arg0) {
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 0x12) = 0;
    AF(arg0, s16, 0x10) = 0x80;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void SpinGlowFxStep(u8 *arg0) {
    u8 *p = AF(arg0, u8 *, 0x34);

    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, s16, 0x10) = 0x80;
    AF(arg0, s16, 0x12) = 0;
    AF(arg0, s32, 0x30) = 0x1800;
    AF(arg0, MATRIX, 0x38) = GsIDMATRIX;
    RotMatrixX(0x400, (MATRIX *)(arg0 + 0x38));
    MulMatrix2(AF(p, u8 *, 0x20) + 0x34, arg0 + 0x38);
    func_801670E4(arg0, -6, -0x44, -0x18);
    AF(arg0, u16, 2)++;
}

void RunRingFxState(u8 *arg0) {
    D_80190500[AF(arg0, u16, 2)]();
}

void RingFxSetup(s32 arg0) {
    func_80168BDC(arg0, 8, 0, 2);
    RingFxStep(arg0);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void RingFxStep(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (AF(arg0, s32, 0x1C) < 3) {
        DrawRingFx();
        AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
        return;
    }
    FreeEffect(arg0, arg1, arg2, arg3);
}

extern s32 DrawPrimG3Mtx();
extern s16 D_801904F0[];

void DrawRingFx(u8 *a) {
    struct { SVECTOR v[3]; SCol c[3]; s32 code; } s;
    MATRIX m1;
    MATRIX m2;
    SVECTOR r;
    s16 *t;
    s16 i;
    s32 k;

    s.v[1].vy = s.v[2].vy = s.v[0].vx = s.v[0].vy = 0;
    s.v[0].vz = 2;
    s.v[1].vz = 0x24;
    s.v[2].vz = 0x28;
    s.v[1].vx = -3;
    s.v[2].vx = 3;
    s.c[0].r = 0x40;
    s.c[0].b = 0x10;
    s.c[1].r = s.c[2].r = 0xFF;
    s.c[1].g = s.c[2].g = 0xC0;
    s.c[1].b = s.c[2].b = s.c[0].g = s.c[0].r;
    s.code = 0x50000000;
    r.vx = AF(a, s16, 6);
    r.vy = AF(a, s16, 0xA);
    r.vz = AF(a, s16, 0xE);
    SetMatrixTrans(&r, &m1);
    k = (AF(a, s32, 0x1C) << 11) + 0x1000;
    r.vx = r.vy = r.vz = k;
    SetScaleMatrix(&r, &m1);
    r.vx = AF(a, s16, 0x12);
    r.vy = AF(a, s16, 0x16);
    r.vz = AF(a, s16, 0x1A);
    RotMatrixYXZ(&r, &m2);
    MulMatrix2(&m1, &m2);
    r.vy = 0;
    t = D_801904F0;
    i = 0;
    do {
        r.vx = *t++;
        r.vz = *t++;
        RotMatrixZYX(&r, &m1);
        MulMatrix2(&m2, &m1);
        DrawPrimG3Mtx(&s, &m1);
        i++;
    } while (i < 4);
}

void func_801689D8(u8 *arg0) {
    D_80190508[AF(arg0, u16, 2)]();
}

void func_80168A14(s32 arg0) {
    func_80168BDC(arg0, 8, 1, 2);
    SpawnEffect(3, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ -5, /* extra? */ 0xC0009C00);
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void SparkFxEndA(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FreeEffect(arg0, arg1, arg2, arg3);
}

void func_80168AA8(u8 *arg0) {
    D_80190510[AF(arg0, u16, 2)]();
}

void func_80168AE4(s32 arg0) {
    func_80168BDC(arg0, 9, 3, 2);
    func_80168BDC(arg0, 9, 2, 1);
    SpawnEffect(3, arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), /* extra? */ (s32) AF(arg0, s16, 0xE), /* extra? */ -5, /* extra? */ 0xC0009C00);
    AF(arg0, s32, 0x1C) = 1;
    AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
}

void func_80168B70(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != -1) {
        func_80168BDC((s32) arg0, 9, 3, 1);
        return;
    }
    func_80168BDC((s32) arg0, 9, 2, 1);
    FreeEffect((s32) arg0);
}

extern void func_800D2318();

void func_80168BDC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    MATRIX m;
    SVECTOR v;
    s16 i;
    s32 o;

    func_800D2318();
    v.vx = AF(arg0, u16, 0x12);
    v.vy = AF(arg0, u16, 0x16);
    v.vz = 0;
    RotMatrixYXZ(&v, &m);
    v.vx = 0;
    if (AF(arg0, s32, 0x2C) < 0) {
        v.vz = -8;
        v.vy = -4;
    } else {
        v.vz = 2;
        v.vy = -2;
    }
    ApplyMatrixSV(&m, &v, &v);
    AF(arg0, s16, 6) += v.vx;
    AF(arg0, s16, 0xA) += v.vy;
    AF(arg0, s16, 0xE) += v.vz;
    for (i = 0; i < (s16)arg3; i++) {
        o = SpawnEffect(arg1 & 0xFFFF, (StageActor *)arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), (s16)arg2, 0);
        if (o != 0) {
            AF(o, s16, 0x12) = AF(arg0, s16, 0x12);
            AF(o, s16, 0x16) = AF(arg0, s16, 0x16);
            AF(o, s16, 0x1A) = AF(arg0, s16, 0x1A);
        }
    }
}

void RunShardFxState(u8 *arg0) {
    D_80190518[AF(arg0, u16, 2)]();
}

void ShardFxSetup(u8 *arg0) {
    SVECTOR v;
    MATRIX m2;
    MATRIX m;

    v.vx = AF(arg0, u16, 0x12);
    v.vy = AF(arg0, u16, 0x16);
    v.vz = AF(arg0, u16, 0x1A);
    RotMatrixYXZ(&v, &m);
    if (AF(arg0, s32, 0x2C) == 0) {
        s32 r = rand();
        v.vx = (r & 0x7F) * 8;
        v.vy = ((u32)(r & 0x7F00) >> 5) + 0xC00;
    } else {
        s32 r = rand();
        v.vx = (r & 0x7F) * 8 + 0xE00;
        v.vy = ((u32)(r & 0x7F00) >> 5) + 0xE00;
    }
    v.vz = 0;
    RotMatrixYXZ(&v, &m2);
    MulMatrix2(&m, &m2);
    v.vx = 0;
    v.vy = 0;
    v.vz = 0x24;
    ApplyMatrixSV(&m2, &v, &v);
    AF(arg0, s16, 0x12) = v.vx;
    AF(arg0, s16, 0x16) = v.vy;
    AF(arg0, s16, 0x1A) = v.vz;
    AF(arg0, u16, 0x10) = AF(arg0, u16, 6);
    AF(arg0, u16, 0x14) = AF(arg0, u16, 0xA);
    AF(arg0, u16, 0x18) = AF(arg0, u16, 0xE);
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 2)++;
}

extern void DrawShardFx();

void ShardFxStep(u8 *arg0) {
    if (AF(arg0, s32, 0x1C) < 5) {
        DrawShardFx();
        AF(arg0, u16, 0x10) = AF(arg0, u16, 6);
        AF(arg0, u16, 0x14) = AF(arg0, u16, 0xA);
        AF(arg0, u16, 0x18) = AF(arg0, u16, 0xE);
        func_800D22E4(arg0);
        AF(arg0, s32, 0x1C)++;
    } else {
        FreeEffect(arg0);
    }
}

extern void DrawPrimLineG2Mtx();

void DrawShardFx(u8 *arg0) {
    struct { SVECTOR p0, p1; SCol c0, c1; s32 code; } l;
    MATRIX m;
    u8 unused[8]; /* MATCH-TRICK: frame pad, the original frame is 8 bytes bigger than its locals */

    l.p0.vx = AF(arg0, u16, 0x10);
    l.p0.vy = AF(arg0, u16, 0x14);
    l.p0.vz = AF(arg0, u16, 0x18);
    l.p1.vx = AF(arg0, u16, 6);
    l.p1.vy = AF(arg0, u16, 0xA);
    l.p1.vz = AF(arg0, u16, 0xE);
    l.c0.r = 8;
    l.c1.r = 0xC0;
    l.c0.g = l.c0.b = 0;
    l.c1.g = l.c1.b = 0x80;
    m = GsIDMATRIX;
    l.code = 0x50000000;
    DrawPrimLineG2Mtx(&l, &m);
}

void func_8016901C(u8 *arg0) {
    D_80190520[AF(arg0, u16, 2)]();
}

void func_80169058(u8 *arg0) {
    SVECTOR v;
    SVECTOR d;
    MATRIX m2;
    MATRIX m;

    v.vx = AF(arg0, u16, 6);
    v.vy = AF(arg0, u16, 0xA);
    v.vz = AF(arg0, u16, 0xE);
    func_800D20C0(&v, &d, 1);
    func_800D23D0(&d);
    RotMatrixYXZ(&d, (MATRIX *)(arg0 + 0x38));
    v.vx = AF(arg0, u16, 0x12);
    v.vy = AF(arg0, u16, 0x16);
    v.vz = AF(arg0, u16, 0x1A);
    RotMatrixYXZ(&v, &m);
    if (!(AF(arg0, s32, 0x2C) & 2)) {
        s32 r = rand();
        v.vx = (r & 0x7F) * 8;
        v.vy = ((u32)(r & 0x7F00) >> 5) + 0xC00;
    } else {
        s32 r = rand();
        v.vx = (r & 0x7F) * 8 + 0xE40;
        v.vy = ((u32)(r & 0x7F00) >> 5) + 0xE00;
    }
    v.vz = 0;
    RotMatrixYXZ(&v, &m2);
    MulMatrix2(&m, &m2);
    v.vx = 0;
    v.vy = 0;
    v.vz = 0xA;
    ApplyMatrixSV(&m2, &v, &v);
    AF(arg0, s16, 0x12) = v.vx;
    AF(arg0, s16, 0x16) = v.vy;
    AF(arg0, s16, 0x1A) = v.vz;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 2)++;
}

void func_801691B8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (AF(arg0, s32, 0x1C) < 0xA) {
        func_80169228();
        func_800D22E4((s32) arg0);
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x10000);
        AF(arg0, s32, 0x1C) = (s32) (AF(arg0, s32, 0x1C) + 1);
        return;
    }
    FreeEffect((s32) arg0, arg1, arg2, arg3);
}

void func_80169228(u8 *a) {
    SPrim s;
    MATRIX m;
    SVECTOR r;
    MATRIX *mp;
    s32 c;
    s32 k;

    s.v[0].vx = s.v[1].vx = -5;
    s.v[2].vx = s.v[3].vx = 5;
    s.v[0].vy = s.v[2].vy = -5;
    s.v[1].vy = s.v[3].vy = 5;
    s.v[0].vz = s.v[1].vz = s.v[2].vz = s.v[3].vz = 0;
    if (!(AF(a, s32, 0x2C) & 2)) {
        c = -0x40 - (AF(a, s32, 0x1C) << 4);
        s.c[0].r = s.c[1].r = s.c[2].r = s.c[3].r = s.c[0].g = s.c[0].b = s.c[1].g = s.c[1].b = s.c[2].g = s.c[2].b = s.c[3].g = s.c[3].b = c;
    } else {
        c = -0x40 - (AF(a, s32, 0x1C) << 4);
        s.c[0].r = s.c[1].r = s.c[2].b = s.c[3].b = 0x20;
        s.c[0].g = s.c[1].g = s.c[2].g = s.c[3].g = c;
        s.c[2].g = s.c[3].g = 0x20;
    }
    s.code = 0x50000000;
    k = (AF(a, s32, 0x2C) & 1) ? 0x4CC : 0x800;
    r.vx = r.vy = r.vz = k + (AF(a, s32, 0x1C) << 7);
    mp = &m;
    SetScaleMatrix(&r, mp);
    MulMatrix2(a + 0x38, mp);
    mp->t[0] = AF(a, s16, 6);
    mp->t[1] = AF(a, s16, 0xA);
    mp->t[2] = AF(a, s16, 0xE);
    DrawPrimG4Mtx(&s, mp);
    s.v[0].vx = -7;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = 7;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[1].vy = 7;
    s.v[2].vy = -7;
    DrawPrimG4Mtx(&s, mp);
}

void func_801693CC(u8 *arg0) {
    D_80190528[AF(arg0, u16, 2)]();
}

void func_80169408(u8 *arg0) {
    SVECTOR v;
    SVECTOR r;
    MATRIX m;
    MATRIX m2; /* MATCH-TRICK: unused frame pad, the original frame is 0x20 bigger than its locals */
    u32 x;

    if (AF(arg0, s32, 0x2C) == 0) {
        x = rand();
        v.vx = (x & 0x7F) << 5;
        v.vy = (x & 0x7F00) >> 3;
        v.vz = 0;
        RotMatrixYXZ(&v, &m);
        MulMatrix2(arg0 + 0x38, &m);
        v.vx = 0;
        v.vy = 0;
        v.vz = 2;
        ApplyMatrixSV(&m, &v, &v);
        AF(arg0, u16, 0x12) = v.vx;
        AF(arg0, u16, 0x16) = v.vy;
        AF(arg0, u16, 0x1A) = v.vz;
        v.vx = AF(arg0, u16, 6);
        v.vy = AF(arg0, u16, 0xA);
        v.vz = AF(arg0, u16, 0xE);
        func_800D20C0(&v, &r, 1);
        func_800D23D0(&r);
        RotMatrixYXZ(&r, (MATRIX *)(arg0 + 0x38));
    }
    func_80169584((s32) arg0);
    AF(arg0, u16, 2)++;
}

void func_8016951C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 0xA) {
        func_80169584((s32) arg0);
        func_800D22E4((s32) arg0);
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x8000);
        return;
    }
    FreeEffect((s32) arg0, arg1, arg2, arg3);
}

void func_80169584(u8 *a) {
    SPrim s;
    MATRIX m; /* MATCH-TRICK: unused locals (left over from func_80169228) pad the frame to 0x78 */
    SVECTOR r;
    MATRIX *mp;
    u8 c;

    s.v[0].vx = 7;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = -7;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[1].vy = 2;
    s.v[2].vy = -2;
    s.v[0].vz = s.v[1].vz = s.v[2].vz = s.v[3].vz = 0;
    s.c[0].g = s.c[3].g = s.c[3].r = s.c[3].b = s.c[0].r = s.c[0].b = 0;
    if (AF(a, s32, 0x2C) == 0) {
        c = -0x40 - (AF(a, s32, 0x1C) << 4);
        s.c[1].g = s.c[2].g = c;
        s.c[1].b = s.c[2].b = c >> 2;
        s.c[1].r = s.c[2].r = c >> 2;
    } else {
        c = -0x40 - (AF(a, s32, 0x1C) << 4);
        s.c[1].g = s.c[2].g = c;
        s.c[1].b = s.c[2].b = c;
        s.c[1].r = s.c[2].r = c >> 2;
    }
    s.code = 0x50000000;
    mp = (MATRIX *)(a + 0x38);
    mp->t[0] = AF(a, s16, 6);
    mp->t[1] = AF(a, s16, 0xA);
    mp->t[2] = AF(a, s16, 0xE);
    DrawPrimG4Mtx(&s, mp);
    s.v[0].vy = 7;
    s.v[1].vy = s.v[2].vy = 0;
    s.v[3].vy = -7;
    s.v[0].vx = s.v[3].vx = 0;
    s.v[1].vx = 2;
    s.v[2].vx = -2;
    DrawPrimG4Mtx(&s, mp);
}

void DrawFlashQuad(u8 *a, s32 arg1) {
    SPrim s;
    MATRIX m;
    SVECTOR r;
    MATRIX *mp;
    u8 c;
    u8 h;

    s.v[0].vx = 8;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = -8;
    s.v[1].vy = 2;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[2].vy = -2;
    s.v[0].vz = s.v[1].vz = s.v[2].vz = s.v[3].vz = 0;
    c = AF(a, u8, 0x30);
    h = c >> 1;
    s.c[1].b = s.c[2].b = c;
    s.c[1].r = s.c[2].r = s.c[1].g = s.c[2].g = s.c[0].b = s.c[3].b = h;
    s.c[0].r = s.c[3].r = s.c[0].g = s.c[3].g = h >> 2;
    s.code = 0x50000000;
    /* PORT NOTE: r.vz read before set, as the original */
    r.vx = r.vy = AF(a, u16, 0x2C);
    mp = &m;
    SetScaleMatrix(&r, mp);
    MulMatrix2(arg1, mp);
    mp->t[0] = AF(a, s16, 6);
    mp->t[1] = AF(a, s16, 0xA);
    mp->t[2] = AF(a, s16, 0xE);
    DrawPrimG4Mtx(&s, mp);
    s.v[0].vx = 2;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = -2;
    s.v[1].vy = 8;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[2].vy = -8;
    DrawPrimG4Mtx(&s, mp);
}

void RunFlashFxState(u8 *arg0) {
    D_80190530[AF(arg0, u16, 2)]();
}

void FlashFxSetup(u8 *arg0) {
    SVECTOR sv;
    SVECTOR q;
    MATRIX m2;
    MATRIX m1;
    u32 r;

    sv.vx = AF(arg0, u16, 6);
    sv.vy = AF(arg0, u16, 0xA);
    sv.vz = AF(arg0, u16, 0xE);
    func_800D20C0(&sv, &q, 1);
    func_800D23D0(&q);
    RotMatrixYXZ(&q, (MATRIX *)(arg0 + 0x38));
    sv.vx = AF(arg0, u16, 0x12);
    sv.vy = AF(arg0, u16, 0x16);
    sv.vz = AF(arg0, u16, 0x1A);
    RotMatrixYXZ(&sv, &m1);
    r = rand();
    sv.vx = (r & 0x1FC) + 0x180;
    if (AF(arg0, s32, 0x2C) & 2) {
        sv.vy = ((r & 0x7F00) >> 6) + 0x200;
    } else {
        sv.vy = ((r & 0x7F00) >> 6) + 0xC00;
    }
    sv.vz = 0;
    RotMatrixYXZ(&sv, &m2);
    MulMatrix2(&m1, &m2);
    if (AF(arg0, s32, 0x2C) & 1) {
        AF(arg0, s32, 0x2C) = 0xA00;
    } else {
        AF(arg0, s32, 0x2C) = 0xE00;
    }
    sv.vx = 0;
    sv.vy = 0;
    sv.vz = 0xA;
    ApplyMatrixSV(&m2, &sv, &sv);
    AF(arg0, s16, 0x12) = sv.vx;
    AF(arg0, s16, 0x16) = sv.vy;
    AF(arg0, s16, 0x1A) = sv.vz;
    AF(arg0, s32, 0x1C) = 0;
    AF(arg0, u16, 2)++;
}

extern void func_80169A4C();

void FlashFxStep(u8 *arg0) {
    s32 t = AF(arg0, s32, 0x1C);

    if (t < 0xF) {
        AF(arg0, s32, 0x30) = 0xC0 - t * 8;
        func_80169A4C(arg0, arg0 + 0x38);
        func_800D22E4(arg0);
        AF(arg0, s32, 0x14) += 0x10000;
        AF(arg0, s32, 0x1C)++;
    } else {
        FreeEffect(arg0);
    }
}

void func_80169A4C(u8 *a, s32 arg1) {
    SPrim s;
    MATRIX m;
    SVECTOR r;
    MATRIX *mp;
    u8 c;
    u8 h;

    s.v[0].vx = s.v[1].vx = -5;
    s.v[2].vx = s.v[3].vx = 5;
    s.v[0].vy = s.v[2].vy = -5;
    s.v[1].vy = s.v[3].vy = 5;
    s.v[0].vz = s.v[1].vz = s.v[2].vz = s.v[3].vz = 0;
    c = AF(a, u8, 0x30);
    h = c >> 2;
    s.c[0].b = s.c[1].b = s.c[2].b = s.c[3].b = c;
    s.c[0].g = s.c[1].g = s.c[2].g = s.c[3].g = h;
    s.c[0].r = s.c[1].r = s.c[2].r = s.c[3].r = h;
    s.code = 0x50000000;
    /* PORT NOTE: r.vz read before set, as the original */
    r.vx = r.vy = AF(a, u16, 0x2C);
    mp = &m;
    SetScaleMatrix(&r, mp);
    MulMatrix2(arg1, mp);
    mp->t[0] = AF(a, s16, 6);
    mp->t[1] = AF(a, s16, 0xA);
    mp->t[2] = AF(a, s16, 0xE);
    DrawPrimG4Mtx(&s, mp);
    s.v[0].vx = -7;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = 7;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[1].vy = 7;
    s.v[2].vy = -7;
    DrawPrimG4Mtx(&s, mp);
}

void RunBoltFxState(u8 *arg0) {
    D_801905E4[AF(arg0, u16, 2)]();
}

extern u8 D_801905A8;
extern u8 D_801905D8;
extern MATRIX D_801EF2F8;
extern s16 D_80190538[];
extern s32 func_800D222C();

void func_80169BBC(u8 *arg0) {
    SVECTOR r;
    SVECTOR v;
    VECTOR w;
    MATRIX m;
    s32 o;
    s32 p;

    func_800D2318();
    r.vx = AF(arg0, u16, 0x12);
    r.vy = AF(arg0, u16, 0x16);
    r.vz = 0;
    RotMatrixYXZ(&r, &m);
    v.vy = -2;
    v.vx = 0;
    v.vz = -20;
    ApplyMatrixSV(&m, &v, &v);
    AF(arg0, s16, 6) += v.vx;
    AF(arg0, s16, 0xA) += v.vy;
    AF(arg0, s16, 0xE) += v.vz;
    p = SpawnEffect(9, (StageActor *)arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
    if (p != 0) {
        AF(p, s16, 0x12) = r.vx;
        AF(p, s16, 0x16) = r.vy;
        AF(p, s16, 0x1A) = r.vz;
    }
    SpawnEffect(0xC, (StageActor *)arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
    o = func_800D222C(arg0, &D_801905D8, 0x17);
    if (o != 0) {
        AF(arg0, s32, 0x20) = o;
        r.vx += D_80190538[AF(arg0, s32, 0x30)];
        r.vy -= 0x400;
        RotMatrixYXZ(&r, &m);
        w.vx = D_801269A4 - AF(arg0, s16, 6);
        w.vy = D_801269A8 - AF(arg0, s16, 0xA);
        w.vz = D_801269AC - AF(arg0, s16, 0xE);
        ApplyTransposeMatrixLV(&m, &w, &w);
        r.vz = -ratan2(w.vx, w.vy);
        v.vx = 0x400;
        v.vy = -0x400;
        v.vz = 0;
        RotMatrixYXZ(&v, &m);
        AF(o, MATRIX *, 0x34) = &D_801EF2F8;
        RotMatrixYXZ(&r, &D_801EF2F8);
        MulMatrix(&D_801EF2F8, &m);
        AF(o, s16, 0x18) = 0x5000;
        AF(o, s16, 0x1A) = 0x2000;
        AF(o, s32, 4) |= 0xC000140;
        StartSpriteAnim(o, arg0 + 0x24, &D_801905A8);
        AF(arg0, s16, 2)++;
    } else {
        FreeEffect(arg0);
    }
}

void func_80169E44(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (StepSpriteAnim(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        FreeEffect((s32) arg0);
        return;
    }
    temp_v0 = AF(arg0, s32, 0x1C);
    AF(arg0, s32, 0x1C) = (s32) (temp_v0 + 1);
    if (temp_v0 < 3) {
        temp_v0_2 = SpawnEffect(9, (s32) arg0, (s32) AF(arg0, s16, 6), (s32) AF(arg0, s16, 0xA), (s32) AF(arg0, s16, 0xE), AF(arg0, s32, 0x1C) & 1, 0);
        if (temp_v0_2 != 0) {
            AF(temp_v0_2, u16, 0x12) = (u16) AF(arg0, u16, 0x12);
            AF(temp_v0_2, u16, 0x16) = (u16) AF(arg0, u16, 0x16);
            AF(temp_v0_2, u16, 0x1A) = (u16) AF(arg0, u16, 0x1A);
        }
    }
}

void RunBlinkFxState(u8 *arg0) {
    D_801905EC[AF(arg0, u16, 2)]();
}

void func_80169F3C(s32 arg0) {
    s32 temp_v0;

    func_800D1FC8(arg0, 6);
    temp_v0 = func_800D21C4(arg0, (s32) &D_8019059C, 0x16);
    if (temp_v0 != 0) {
        AF(arg0, s32, 0x20) = temp_v0;
        AF(temp_v0, s16, 0x1A) = 0x2000;
        AF(temp_v0, s16, 0x18) = 0x2000;
        AF(temp_v0, u8, 0x26) = 0x60;
        AF(temp_v0, u8, 0x25) = 0x60;
        AF(temp_v0, u8, 0x24) = 0x60;
        AF(temp_v0, s32, 4) = (s32) (AF(temp_v0, s32, 4) | 0x50000000);
        StartSpriteAnim(temp_v0, arg0 + 0x24, (s32) &D_8019055C);
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        return;
    }
    FreeEffect(arg0);
}

void BlinkFxStep(u8 *arg0) {
    if (StepSpriteAnim(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        FreeEffect((s32) arg0);
    }
}

void RunChargeFxState(u8 *arg0) {
    D_80190624[AF(arg0, u16, 2)]();
}

void func_8016A05C(u8 *arg0) {
    u16 var_v0;

    if (D_80078EC0 & 0x7F) {
        var_v0 = AF(arg0, u16, 2) + 1;
    } else {
        var_v0 = 2;
    }
    AF(arg0, u16, 2) = var_v0;
}

extern void func_8016A290();

void ChargeFxStep(u8 *arg0) {
    s32 sp20[2];
    s32 sp28[2];
    s16 i;
    s32 t;

    if (g_ChargeGauge != 0) {
        func_80148534((s32) sp20, (s32) sp28);
        t = g_ChargeGauge - 0x18;
        AF(arg0, s32, 0x30) = t;
        if (t >= 0) {
            func_8016A290(arg0, sp20, sp28);
            AF(arg0, s32, 0x1C)++;
            if (AF(arg0, s32, 0x1C) == 4) {
                PlaySe(0x44C);
            }
            if (g_ChargeGauge < 0x80) {
                for (i = 0; i < 2; i++) {
                }
                SpawnEffect(0x17, (StageActor *) arg0, AF(arg0, s16, 6), AF(arg0, s16, 0xA), AF(arg0, s16, 0xE), 0, 0);
                return;
            }
            if (AF(arg0, s16, 0x2A) == 0) {
                AF(arg0, s16, 0x2A) = 1;
                AF(arg0, s32, 0x1C) = 0x100;
            }
            if (!(AF(arg0, s32, 0x1C) & 0x1F)) {
                PlaySe(0x44D);
            }
        }
    } else {
        PlaySePositional(4, 0x44C);
        FreeEffect(arg0);
    }
}

void func_8016A1CC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (g_ChargeGauge != 0) {
        temp_v0 = g_ChargeGauge - 0x18;
        AF(arg0, s32, 0x30) = temp_v0;
        if (temp_v0 >= 0) {
            temp_v0_2 = AF(arg0, s32, 0x1C) + 1;
            AF(arg0, s32, 0x1C) = temp_v0_2;
            if (temp_v0_2 == 4) {
                PlaySe(0x44C, arg1, arg2, arg3);
            }
            if (g_ChargeGauge >= 0x80U) {
                if (AF(arg0, s16, 0x2A) == 0) {
                    AF(arg0, s16, 0x2A) = 1;
                    AF(arg0, s32, 0x1C) = 0x100;
                }
                if (!(AF(arg0, s32, 0x1C) & 0x1F)) {
                    PlaySe(0x44D);
                }
            }
        }
    } else {
        PlaySePositional(4, 0x44C);
        FreeEffect((s32) arg0);
    }
}

extern s8 D_801905F4[];
extern s8 D_80190608[];

void func_8016A290(u8 *arg0, s16 *p, s16 *q) {
    SVECTOR c;
    SVECTOR d;
    VECTOR w;
    MATRIX m;
    MATRIX m2; /* MATCH-TRICK: unused frame pad, the original frame is 0x20 bigger than its locals */
    SPrim s;
    s32 t;
    s8 *tp;
    s16 i;

    t = AF(arg0, s32, 0x34);
    c.vx = (p[0] + q[0]) >> 1;
    c.vy = (p[1] + q[1]) >> 1;
    c.vz = (p[2] + q[2]) >> 1;
    ObjLocalToWorld(t, (s32)&c, (s32)&c);
    AF(arg0, s16, 6) = c.vx;
    AF(arg0, s16, 0xA) = c.vy;
    AF(arg0, s16, 0xE) = c.vz;
    func_800D20C0(&c, &d, 8);
    SetMatrixTrans(&c, &m);
    d.vx = q[0] - p[0];
    d.vy = q[1] - p[1];
    d.vz = q[2] - p[2];
    ApplyMatrixSV((MATRIX *)(AF(t, u8 *, 0x20) + 0x34), &d, &d);
    func_800D23D0(&d);
    RotMatrixYXZ(&d, &m);
    w.vx = D_801269A4 - c.vx;
    w.vy = D_801269A8 - c.vy;
    w.vz = D_801269AC - c.vz;
    ApplyTransposeMatrixLV(&m, &w, &w);
    d.vz = -ratan2(w.vx, w.vy);
    RotMatrixYXZ(&d, &m);
    s.v[1].vx = s.v[1].vy = s.v[1].vz = s.v[0].vz = s.v[2].vz = s.v[3].vz = 0;
    if (D_800B99DA & 1) {
        s.c[1].r = AF(arg0, s32, 0x30) + 0x20;
    } else if (D_800B99DA & 2) {
        s.c[1].r = AF(arg0, s32, 0x30) + 0x40;
    } else {
        s.c[1].r = AF(arg0, s32, 0x30);
    }
    tp = D_801905F4;
    i = 0;
    s.c[0].r = s.c[0].g = s.c[0].b = 0;
    s.c[2].r = s.c[2].g = s.c[2].b = 0;
    s.c[3].r = s.c[3].g = s.c[3].b = 0;
    s.code = 0x50000000;
    s.c[1].g = s.c[1].b = s.c[1].r >> 3;
    do {
        s.v[0].vx = *tp++;
        s.v[0].vy = *tp++;
        s.v[2].vx = *tp++;
        s.v[2].vy = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vy = *tp--;
        DrawPrimG4Mtx(&s, &m);
        i++;
    } while (i < 4);
    tp = D_80190608;
    i = 0;
    s.v[1].vx = s.v[1].vy = s.v[0].vy = s.v[2].vy = s.v[3].vy = 0;
    s.v[1].vz = -0x20;
    do {
        s.v[0].vx = *tp++;
        s.v[0].vz = *tp++;
        s.v[2].vx = *tp++;
        s.v[2].vz = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vz = *tp--;
        DrawPrimG4Mtx(&s, &m);
        if (i == 1) {
            s.v[1].vz = 0x20;
            tp += 2;
        }
        i++;
    } while (i < 4);
    tp += 2;
    i = 0;
    s.v[0].vx = 0;
    s.v[0].vz = -0x20;
    s.c[0].r = s.c[1].r;
    s.c[0].g = s.c[0].b = s.c[1].g;
    do {
        s.v[2].vx = *tp++;
        s.v[2].vz = *tp++;
        s.v[3].vx = *tp++;
        s.v[3].vz = *tp++;
        DrawPrimG4Mtx(&s, &m);
        i++;
    } while (i < 2);
}

void RunAuraFxState(u8 *arg0) {
    D_80190630[AF(arg0, u16, 2)]();
}

extern MATRIX GsIDMATRIX;

void func_8016A73C(u8 *arg0) {
    MATRIX m;
    SVECTOR v;
    s32 r;
    s16 t;

    r = rand();
    v.vy = ((r & 0x7F) << 4) + 0x400;
    v.vx = ((u32)(r & 0x7F00) >> 5) - 0x300;
    v.vz = 0;
    RotMatrixYXZ(&v, &m);
    MulMatrix2(AF(AF(AF(arg0, u8 *, 0x34), u8 *, 0x34), u8 *, 0x20) + 0x34, &m);
    v.vx = 0;
    v.vy = 0;
    v.vz = -0x50;
    ApplyMatrixSV(&m, &v, &v);
    AF(arg0, MATRIX, 0x38) = GsIDMATRIX;
    t = AF(arg0, s16, 6) + v.vx;
    AF(arg0, s16, 6) = t;
    AF(arg0, s32, 0x4C) = t;
    t = AF(arg0, s16, 0xA) + v.vy;
    AF(arg0, s16, 0xA) = t;
    AF(arg0, s32, 0x50) = t;
    t = AF(arg0, s16, 0xE) + v.vz;
    AF(arg0, s16, 0xE) = t;
    AF(arg0, s16, 2)++;
    AF(arg0, s32, 0x54) = t;
}

extern void DrawAuraFx();

void AuraFxStep(u8 *arg0) {
    u16 *p = AF(arg0, u16 *, 0x34);
    if (AF(arg0, s32, 0x1C) < 4 && *p == 0x14) {
        DrawAuraFx();
        AF(arg0, s32, 0x1C)++;
        return;
    }
    FreeEffect(arg0);
}

extern MATRIX GsIDMATRIX;
extern void DrawPrimLineG2Mtx();

void DrawAuraFx(u8 *arg0) {
    struct { SVECTOR p0, p1; SCol c0, c1; s32 code; } l;
    u8 *p = AF(arg0, u8 *, 0x34);

    l.p0.vx = AF(arg0, s32, 0x4C);
    l.p0.vy = AF(arg0, s32, 0x50);
    l.p0.vz = AF(arg0, s32, 0x54);
    l.p1.vx = AF(p, u16, 6);
    l.p1.vy = AF(p, u16, 0xA);
    l.p1.vz = AF(p, u16, 0xE);
    l.p0.vx = (AF(arg0, s16, 6) + AF(arg0, s32, 0x4C)) >> 1;
    l.p0.vy = (AF(arg0, s16, 0xA) + AF(arg0, s32, 0x50)) >> 1;
    l.p0.vz = (AF(arg0, s16, 0xE) + AF(arg0, s32, 0x54)) >> 1;
    AF(arg0, s16, 6) = AF(arg0, s32, 0x4C);
    AF(arg0, s32, 0x4C) = l.p1.vx = (AF(arg0, s16, 6) + AF(p, s16, 6)) >> 1;
    AF(arg0, s16, 0xA) = AF(arg0, s32, 0x50);
    AF(arg0, s32, 0x50) = l.p1.vy = (AF(arg0, s16, 0xA) + AF(p, s16, 0xA)) >> 1;
    AF(arg0, s16, 0xE) = AF(arg0, s32, 0x54);
    AF(arg0, s32, 0x54) = l.p1.vz = (AF(arg0, s16, 0xE) + AF(p, s16, 0xE)) >> 1;
    l.c0.g = 0x10;
    l.c1.g = 0x80;
    l.c1.r = l.c1.b = 0x20;
    l.c0.r = l.c0.b = 0;
    l.code = 0x50000000;
    DrawPrimLineG2Mtx(&l, &GsIDMATRIX);
}

void ShowDamage(StageActor *a, s32 n) {
    s16 i;
    u8 *p;

    if (n >= 0) {
        SpawnEffect(0x1D, a, a->hitPos[0], a->hitPos[1], a->hitPos[2], 0, n);
        return;
    }
    for (i = 0, p = &g_Effects; i < 0x1E; i++, p += 0x58) {
        u16 t = AF(p, u16, 0);
        if (t == 0 || t == 3 || t == 9) {
            FreeEffect(p);
            SpawnEffect(0x1D, a, g_PlayerX, D_80126B62 - 0x20, D_80126B66, 7, 0);
            return;
        }
    }
}

void RunDamageNumberState(u8 *arg0) {
    D_80190678[AF(arg0, u16, 2)]();
}

extern u8 D_80190638;
extern u8 D_80190648;
extern u8 D_801ED8F8;
extern u8 D_801ED920;
extern s32 ToBcd();

void DamageNumberSetup(u8 *arg0) {
    SVECTOR pos;
    SVECTOR rot;
    s32 v;
    s16 m;
    s16 i;
    s16 n;
    u8 *o;
    u32 r;

    v = ToBcd(AF(arg0, s32, 0x30), 0);
    i = 3;
    AF(arg0, s32, 0x30) = v;
    for (m = -0x1000; i >= 0; i--, m >>= 4) {
        if (v & m) {
            break;
        }
    }
    switch (AF(arg0, s32, 0x2C)) {
    case 0:
        AF(arg0, s16, 0x26) = 1;
        AF(arg0, s16, 0x24) = 0x60;
        AF(arg0, s16, 0xA) -= 0x20;
        break;
    case 1:
    case 5:
        AF(arg0, s32, 0x14) = 0xFFF60000;
        r = rand();
        i++;
        AF(arg0, s32, 0x10) = ((r & 0xF) - 8) << 15;
        AF(arg0, s32, 0x18) = (((r >> 4) & 0xF) - 8) << 15;
        AF(arg0, s16, 0x26) = 4;
        AF(arg0, s16, 0x24) = 0x80;
        AF(arg0, s32, 0x30) |= 0xA << (i * 4);
        break;
    case 2:
    case 4:
        AF(arg0, s16, 0x26) = 4;
        AF(arg0, s16, 0x24) = 0x80;
        AF(arg0, s16, 0xA) -= 0x18;
        break;
    case 3:
        i++;
        AF(arg0, s16, 0x26) = 4;
        AF(arg0, s16, 0x24) = 0x80;
        AF(arg0, s16, 0xA) -= 0x18;
        AF(arg0, s32, 0x30) = (AF(arg0, s32, 0x30) | (0xF << (i * 4))) << 4;
        i++;
        break;
    case 6:
    case 7:
        o = (u8 *)AllocSprite16To3E();
        if (o == 0) {
            FreeEffect(arg0);
            return;
        }
        pos.vx = AF(arg0, s16, 6);
        pos.vy = AF(arg0, s16, 0xA) - 0x18;
        pos.vz = AF(arg0, s16, 0xE);
        func_800D20C0(&pos, &rot, 6);
        AF(arg0, s16, 6) = pos.vx;
        AF(arg0, s16, 0xA) = pos.vy;
        AF(arg0, s16, 0xE) = pos.vz;
        if (AF(arg0, s32, 0x2C) == 6) {
            n = SjisToGlyphs(&D_80190638, &D_801ED8F8) + 3;
            InitTextSprite(o, &D_801ED8F8);
        } else {
            n = SjisToGlyphs(&D_80190648, &D_801ED920) + 9;
            InitTextSprite(o, &D_801ED920);
        }
        AF(o, s16, 0xE) = n;
        AF(o, s32, 4) |= 0x4000000;
        if (AF(arg0, s32, 0x2C) == 6) {
            AF(o, u8, 0x27) = 0xB5;
            i = 0x70;
        } else {
            AF(o, u8, 0x27) = 0xAE;
            i = 0xB0;
        }
        AF(o, s16, 0x2E) = -8;
        AF(o, s16, 0x30) = 0;
        AF(o, u8, 0x24) = AF(o, u8, 0x25) = AF(o, u8, 0x26) = i;
        i = n >> 2;
        AF(arg0, s32, 0x20) = (s32)o;
        break;
    }
    AF(arg0, s16, 0x2A) = 4 - i * 4;
    AF(arg0, s16, 0x28) = i;
    AF(arg0, s32, 0x1C) = 0xB;
    AF(arg0, s16, 2)++;
}

void DamageNumberRise(u8 *arg0) {
    s32 temp_v1_2;
    s32 temp_a0;
    u8 *temp_s1;

    temp_s1 = AF(arg0, u8 *, 0x20);
    if (AF(arg0, u32, 0x2C) < 6U) {
        DrawDamageNumber(arg0);
    }
    switch (AF(arg0, u32, 0x2C)) {
    case 0:
        AF(arg0, u16, 0xA) -= AF(arg0, s32, 0x1C);
        temp_v1_2 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v1_2;
        if (temp_v1_2 != 0) {
            if ((temp_v1_2 & 3) == 1) {
                AF(arg0, u16, 0x26)++;
            }
            break;
        }
        AF(arg0, s16, 0x24) = 0xFF;
        AF(arg0, s32, 0x1C) = 8;
        AF(arg0, u16, 2)++;
        break;
    case 1:
    case 5:
        func_800D22E4(arg0);
        AF(arg0, s32, 0x14) += 0x18000;
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
        AF(arg0, u16, 0xA) -= AF(arg0, s32, 0x1C);
        if (--AF(arg0, s32, 0x1C) == 0) {
            if (AF(arg0, u32, 0x2C) < 6U) {
                AF(arg0, s16, 0x24) = 0xC0;
                AF(arg0, s32, 0x1C) = 8;
            } else {
                AF(temp_s1, u8, 0x26) = 0xC0;
                AF(temp_s1, u8, 0x25) = 0xC0;
                AF(temp_s1, u8, 0x24) = 0xC0;
                AF(arg0, s32, 0x1C) = 0xC;
            }
            AF(arg0, u16, 2)++;
        }
        break;
    }
}

void DamageNumberHop(u8 *arg0) {
    s32 temp_v0_2;
    s32 temp_v1_2;
    u8 var_v1;
    u32 temp_v1;
    u8 temp_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    if ((u32) AF(arg0, u32, 0x2C) < 6U) {
        DrawDamageNumber();
    }
    temp_v1 = AF(arg0, u32, 0x2C);
    switch (temp_v1) {                              /* irregular */
    case 7:
        var_v1 = 0xB4;
        if (AF(arg0, s32, 0x1C) & 1) {
            var_v1 = 0xAE;
        }
        AF(temp_s1, u8, 0x27) = var_v1;
        /* fallthrough */
    case 6:
        temp_v0 = AF(temp_s1, u8, 0x26) - 8;
        AF(temp_s1, u8, 0x26) = temp_v0;
        AF(temp_s1, u8, 0x25) = temp_v0;
        AF(temp_s1, u8, 0x24) = temp_v0;
        temp_v0_2 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, s32, 0x1C) = temp_v0_2;
        if (temp_v0_2 == 0) {
            AF(temp_s1, u8, 0x26) = 0x70U;
            AF(temp_s1, u8, 0x25) = 0x70U;
            AF(temp_s1, u8, 0x24) = 0x70U;
            AF(temp_s1, s32, 4) = (s32) (AF(temp_s1, s32, 4) | 0x50000000);
            AF(arg0, s32, 0x1C) = 7;
            AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
            return;
        }
        return;
    case 5:
    case 1:
        func_800D22E4((s32) arg0);
        AF(arg0, s32, 0x14) = (s32) (AF(arg0, s32, 0x14) + 0x18000);
        /* fallthrough */
    default:
        temp_v1_2 = AF(arg0, s32, 0x1C) - 1;
        AF(arg0, u16, 0x24) = (u16) (AF(arg0, u16, 0x24) - 8);
        AF(arg0, s32, 0x1C) = temp_v1_2;
        if (temp_v1_2 == 0) {
            AF(arg0, u16, 0x24) = 0x70U;
            AF(arg0, s32, 0x1C) = 7;
            AF(arg0, u16, 0x26) = (u16) (AF(arg0, u16, 0x26) + 1);
            AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
        }
        break;
    }
}

void DamageNumberFade(u8 *arg0) {
    u8 *temp_s1;
    s32 t;
    u8 c;

    temp_s1 = AF(arg0, u8 *, 0x20);
    if (AF(arg0, u32, 0x2C) < 6U) {
        DrawDamageNumber(arg0);
    }
    switch (AF(arg0, u32, 0x2C)) {
    case 6:
    case 7:
        c = AF(temp_s1, u8, 0x26) - 0x10;
        AF(temp_s1, u8, 0x26) = c;
        AF(temp_s1, u8, 0x25) = c;
        AF(temp_s1, u8, 0x24) = c;
        AF(arg0, u16, 0xA) -= 2;
        break;
    case 1:
    case 5:
        func_800D22E4(arg0);
        AF(arg0, s32, 0x14) += 0x18000;
        AF(arg0, u16, 0x26)++;
        AF(arg0, u16, 0x24) -= 0x10;
        break;
    default:
        AF(arg0, u16, 0xA) -= 2;
        AF(arg0, u16, 0x26)++;
        AF(arg0, u16, 0x24) -= 0x10;
        break;
    }
    t = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = t;
    if (t == 0) {
        FreeEffect(arg0);
    }
}

void DrawDamageNumber(u8 *a) {
    SVECTOR p;
    SPrimT s;
    s32 sxy;
    s32 z;
    s32 flag;
    s16 x;
    s32 k;
    s32 w;
    s16 i;
    s32 u;

    SetRotMatrix(&D_800AF630.wsm);
    SetTransMatrix(&D_800AF630.wsm);
    p.vx = AF(a, s16, 6);
    p.vy = AF(a, s16, 0xA);
    p.vz = AF(a, s16, 0xE);
    RotTransPers(&p, &sxy, &z, &flag);
    if (flag & ~0x1000) {
        return;
    }
    s.v[0].vz = 0x10;
    k = ((u16 *)&sxy)[1];
    s.v[0].vx = s.v[2].vx = AF(a, u16, 0x2A) + sxy;
    s.v[1].vx = s.v[3].vx = s.v[0].vx + 8;
s.v[0].vy = s.v[1].vy = k - AF(a, u16, 0x26); w = AF(a, u16, 0x26); s.v[2].vy = s.v[3].vy = k + w; s.uv[0][1] = s.uv[1][1] = 0x1D0; s.uv[2][1] = s.uv[3][1] = 0x1D8;
    s.r = s.g = s.b = AF(a, u8, 0x24);
    s.tp = D_80190670[AF(a, s32, 0x2C)];
    if (AF(a, s16, 0x26) < 5) {
        s.code = 0;
    } else {
        s.code = 0x50000000;
    }
    k = AF(a, u16, 0x30);
    for (i = 0; i < AF(a, s16, 0x28) + 1; i++) {
        u = ((k + 1) & 0xF) * 8;
        s.uv[0][0] = s.uv[2][0] = u + 0x620;
        s.uv[1][0] = s.uv[3][0] = u + 0x628;
        DrawPrimFT4Screen(&s);
        k = (s16)k >> 4;
        x = s.v[0].vx;
        s.v[2].vx = s.v[0].vx = x - 8;
        s.v[1].vx = s.v[3].vx = x;
    }
}

void func_8016B3F4(s32 arg0) {
    SpawnDefeatEffect(arg0, 1);
    ShowDefeat56(arg0);
}

void ShowDefeat(StageActor *arg0) {
    SpawnDefeatEffect(arg0, 0);
}

void SpawnDefeatEffect(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = FindEffectByKind((s32) &g_Player, 0x1E);
    if (temp_v0 != 0) {
        EndDefeatFx(temp_v0);
    }
    SpawnEffect(0x1E, arg0, (s32) AF(arg0, s16, 0x7C), (s32) AF(arg0, s16, 0x7E), (s32) AF(arg0, s16, 0x80), arg1, 0);
}

void RunDefeatFxState(u8 *arg0) {
    D_801906F4[AF(arg0, u16, 2)]();
}

extern u8 D_801ED948;
extern s32 DefeatFxOffScreen();
extern s32 DefeatFxPiece();
extern s32 DefeatFxPlacePieces();

void DefeatFxSetup(s32 arg0) {
    u8 unused[8]; /* MATCH-TRICK: frame pad, the original reserves 8 unused stack bytes */

    PosToSVec(arg0 + 4, &D_801ED948);
    if (DefeatFxOffScreen(arg0) != 0 ||
        (AF(arg0, s32, 0x18) = 0, AF(arg0, s32, 0x14) = 0, AF(arg0, s32, 0x10) = 0,
         (AF(arg0, s32, 0x10) = DefeatFxPiece(arg0, 0)) == 0) ||
        (AF(arg0, s32, 0x14) = DefeatFxPiece(arg0, 1)) == 0 ||
        (AF(arg0, s32, 0x18) = DefeatFxPiece(arg0, 2)) == 0) {
        EndDefeatFx(arg0);
        return;
    }
    DefeatFxPlacePieces(arg0);
    if (AF(arg0, s32, 0x2C) != 0) {
        AF(arg0, s32, 0x1C) = 0x2D0;
    } else {
        AF(arg0, s32, 0x1C) = 0xF0;
    }
    AF(arg0, u16, 2)++;
}

extern s16 D_801906E8[];
extern s32 DefeatFxOffScreen();
extern void DrawDefeatFx();
extern s32 DefeatFxPlacePieces();

void DefeatFxStep(u8 *arg0) {
    u8 *p;
    s32 n;
    s32 i;
    s32 c;

    p = AF(arg0, u8 *, 0x18);
    if (DefeatFxOffScreen(arg0) != 0) {
        goto end;
    }
    AF(p, u16, 0x18) = AF(p, u16, 0x1A) += 0x200;
    if (AF(arg0, s32, 0x2C) == 0) {
        n = AF(arg0, s32, 0x1C);
    } else {
        n = AF(arg0, s32, 0x1C) / 3;
    }
    c = AF(arg0, s32, 0x1C) - 0x20;
    AF(arg0, s32, 0x1C) = c;
    if (c < 0) {
end:
        EndDefeatFx(arg0);
        return;
    }
    for (i = 0; i < 6; i++) {
        DrawDefeatFx(arg0, n, D_801906E8[i], (s16)i);
    }
    DefeatFxPlacePieces(arg0);
}

extern SVECTOR *D_801906D0[];
extern void RotateSVectorZ();
extern void DrawPrimG3Screen();

void DrawDefeatFx(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 buf[0x28];
    SVECTOR v;
    SVECTOR *s;
    u8 *p;
    s16 a;
    s32 c;

    p = buf;
    s = D_801906D0[(s16)arg3];
    AF(p, s32, 0x24) = 0x50000000;
    c = 0x20;
    if ((u32)arg1 < 0x20) {
        c = arg1;
    }
    if (AF(arg0, s32, 0x2C) == 0) {
        arg1 |= (c << 16) | (c << 8);
    } else {
        arg1 = (arg1 << 8) | (c << 16) | c;
    }
    a = arg2;
    AF(p, s32, 0x18) = arg1;
    AF(p, s32, 0x1C) = 0;
    AF(p, s32, 0x20) = 0;
    RotateSVectorZ(a, s++, p);
    RotateSVectorZ(a, s++, p + 8);
    RotateSVectorZ(a, s, p + 0x10);
    PosToSVec(arg0 + 4, &v);
    AF(p, s16, 0x0) += v.vx;
    AF(p, s16, 0x2) += v.vy;
    AF(p, s16, 0x8) += v.vx;
    AF(p, s16, 0xA) += v.vy;
    AF(p, s16, 0x10) += v.vx;
    AF(p, s16, 0x12) += v.vy;
    AF(p, s16, 0x4) = 3;
    DrawPrimG3Screen(p);
}

extern u8 D_801ED950[];
extern SPair2 *D_8019072C[];
extern u16 D_80190734[];
extern u16 D_8019073C[];
extern void func_8001CD9C();
extern void SetShapeCircle();

s32 DefeatFxPiece(u8 *arg0, s32 arg1) {
    SPair2 *tbl;
    u8 *dst;
    s32 o;

    dst = D_801ED950 + arg1 * 0x40;
    tbl = D_8019072C[AF(arg0, s32, 0x2C)];
    o = AllocSprite16To3E(arg0);
    if (o != 0) {
        func_8001CD9C(o, dst);
        SetShapeCircle(dst, D_80190734[arg1]);
        AF(dst, s32, 0) = tbl[arg1].a;
        AF(dst, s32, 4) = tbl[arg1].b;
        AF(o, s32, 4) |= 0x50040000;
        AF(o, u16, 0x1E) = D_8019073C[arg1];
    }
    return o;
}

s32 DefeatFxPlacePieces(s32 arg0) {
    DefeatFxPlacePiece(arg0, AF(arg0, s32, 0x10));
    DefeatFxPlacePiece(arg0, AF(arg0, s32, 0x14));
    return DefeatFxPlacePiece(arg0, AF(arg0, s32, 0x18));
}

s32 DefeatFxPlacePiece(s32 arg0, s32 arg1) {
    AF(arg1, u16, 8) = AF(arg0, u16, 6);
    AF(arg1, u16, 0xA) = AF(arg0, u16, 0xA);
    AF(arg1, u16, 0xC) = 3;
}

void EndDefeatFx(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;

    temp_a0 = AF(arg0, s32, 0x10);
    if (temp_a0 != 0) {
        ZeroFill(temp_a0, 0x38);
    }
    temp_a0_2 = AF(arg0, s32, 0x14);
    if (temp_a0_2 != 0) {
        ZeroFill(temp_a0_2, 0x38);
    }
    temp_a0_3 = AF(arg0, s32, 0x18);
    if (temp_a0_3 != 0) {
        ZeroFill(temp_a0_3, 0x38);
    }
    FreeEffect(arg0);
}

extern u8 D_801ED948;

s32 DefeatFxOffScreen(s32 arg0) {
    s32 sp10;
    s32 temp_s0;

    temp_s0 = ProjectPoint((s32) &D_801ED948, (s32) &sp10);
    SVecToPos((s32) &sp10, arg0 + 4);
    return (temp_s0 & ~0x1000) != 0;
}

s32 ShowDefeat56(s32 arg0, s32 arg1) {
    SpawnDefeatEffect56(arg0, 0);
}

void SpawnDefeatEffect56(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = FindEffectByKind((s32) &g_Player, 0x56);
    if (temp_v0 != 0) {
        FreeEffect(temp_v0);
    }
    SpawnEffect(0x56, arg0, (s32) AF(arg0, s16, 0x7C), (s32) AF(arg0, s16, 0x7E), (s32) AF(arg0, s16, 0x80), arg1, 0);
}

void SpawnBurst22(s32 arg0, s32 arg1, s32 arg2) {
    SpawnEffect(0x22, arg0, 0, (s32) (s16) arg1, 0, 0, arg2);
    SpawnEffect(0x22, arg0, 0, (s32) (s16) arg1, 0, 1, arg2);
    SpawnEffect(0x22, arg0, 0, (s32) (s16) arg1, 0, 2, arg2);
    SpawnEffect(0x24, arg0, 0, (s32) (s16) arg1, 0, 0, 0);
}

void RunOrbitFxState(u8 *arg0) {
    D_80190744[AF(arg0, u16, 2)]();
}

extern u8 D_801EDA85;
extern u8 D_801EDA86;
extern u8 D_801EDA89;
extern u8 D_801EDA8A;
extern s32 func_8016BF34();
extern void InitNullSprite();

void func_8016BBE0(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocSprite16To3E();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        func_8016BF34(arg0);
        OrbitFxPlace(arg0);
        InitNullSprite(temp_v0);
        AF(temp_v0, s16, 0x10) = 0;
        AF(temp_v0, s16, 0x12) = AF(arg0, s32, 0x2C) * 0x555;
        AF(temp_v0, s16, 0x14) = 0;
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        AF(arg0, s16, 0x10) = 0;
        AF(arg0, s16, 0x14) = 0;
        D_801EDA84 = 0x20;
        D_801EDA85 = 0x20;
        D_801EDA86 = 0;
        D_801EDA88 = 0xC0;
        D_801EDA89 = 0xC0;
        D_801EDA8A = 0;
        AF(arg0, u16, 2)++;
        return;
    }
    FreeEffect(arg0);
}

void OrbitFxGrow(u8 *arg0) {
    u16 temp_a2;
    u16 temp_v0;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    OrbitFxPlace((s32) arg0);
    temp_a2 = AF(arg0, u16, 0x10) + 0x60;
    AF(arg0, u16, 0x10) = temp_a2;
    temp_v0 = AF(temp_s0, u16, 0x1A) + temp_a2;
    AF(temp_s0, u16, 0x1A) = temp_v0;
    AF(temp_s0, u16, 0x18) = temp_v0;
    AF(temp_s0, u16, 0x12) = (u16) ((AF(temp_s0, u16, 0x12) + 0x71) & 0xFFF);
    DrawOrbitFx((s32) arg0, (s32) &D_801EDA84, (s32) &D_801EDA88, temp_s0 + 0x18);
    if ((s16) AF(temp_s0, u16, 0x1A) >= 0x1001) {
        AF(temp_s0, u16, 0x18) = 0x1000U;
        AF(temp_s0, u16, 0x1A) = 0x1000U;
        SetObjTimer((s32) arg0, AF(arg0, s32, 0x30));
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

void OrbitFxSpin(u8 *arg0) {
    u16 temp_v0;
    s32 temp_s0;
    u8 *a;
    u8 *b;

    temp_s0 = AF(arg0, s32, 0x20);
    OrbitFxPlace((s32) arg0);
    a = &D_801EDA84;
    if (*a != 0) {
        *a -= 4;
    }
    if (D_801EDA85 != 0) {
        D_801EDA85 -= 4;
    }
    if (D_801EDA86 != 0) {
        D_801EDA86 -= 4;
    }
    b = &D_801EDA88;
    if (*b != 0) {
        *b -= 4;
    }
    if (D_801EDA89 != 0) {
        D_801EDA89 -= 4;
    }
    if (D_801EDA8A != 0) {
        D_801EDA8A -= 4;
    }
    temp_v0 = AF(temp_s0, u16, 0x18) - 0x80;
    AF(temp_s0, u16, 0x18) = temp_v0;
    if ((s16) temp_v0 < 0) {
        AF(temp_s0, u16, 0x18) = 0;
        AF(arg0, u16, 2)++;
    }
    AF(temp_s0, u16, 0x12) = (AF(temp_s0, u16, 0x12) + 0x22) & 0xFFF;
    DrawOrbitFx((s32) arg0, (s32) a, (s32) b, temp_s0 + 0x18);
}

void OrbitFxEnd(u8 *arg0) {
    u16 temp_a1;
    void *temp_s0;

    temp_s0 = AF(arg0, void *, 0x20);
    OrbitFxPlace((s32) arg0);
    temp_a1 = AF(arg0, u16, 0x10) - 0x18;
    AF(arg0, u16, 0x10) = temp_a1;
    AF(temp_s0, u16, 0x1A) = (u16) (AF(temp_s0, u16, 0x1A) + temp_a1);
    AF(temp_s0, u16, 0x12) = (u16) ((AF(temp_s0, u16, 0x12) + 0x22) & 0xFFF);
    DrawOrbitFx((s32) arg0, (s32) &D_801EDA84, (s32) &D_801EDA88, temp_s0 + 0x18);
    if ((s16) AF(temp_s0, u16, 0x1A) < 0) {
        FreeEffect((s32) arg0);
    }
}

s32 func_8016BF34(s32 arg0) {
    u16 temp_v0;

    temp_v0 = AF(arg0, u16, 6);
    AF(arg0, u16, 0x12) = temp_v0;
    AF(arg0, u16, 0x16) = (u16) AF(arg0, u16, 0xA);
    AF(arg0, u16, 0x1A) = (u16) AF(arg0, u16, 0xE);
    return (s32) temp_v0;
}

void OrbitFxPlace(s32 arg0) {
    SVECTOR v;
    s32 p = AF(arg0, s32, 0x34);
    v.vx = AF(arg0, u16, 0x12);
    v.vy = AF(arg0, u16, 0x16);
    v.vz = AF(arg0, u16, 0x1A);
    ObjLocalToWorld(p, (s32) &v, (s32) &v);
    SVecToPos((s32) &v, arg0 + 4);
}

extern u8 D_801EDA10;
extern void DrawOrbitQuad();

void DrawOrbitFx(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    DrawOrbitQuad(arg0, arg1, arg2, arg3, &D_801EDA10);
}

extern void DrawPrimG4Screen();
extern SVECTOR D_80190754;
extern SVECTOR D_8019075C;
extern SVECTOR D_80190764;
extern SVECTOR D_8019076C;

void DrawOrbitQuad(s32 arg0, SCol *c0, SCol *c1, s16 *scale, SPrim *p) {
    MATRIX m;
    u8 unused[0x20]; /* MATCH-TRICK: frame pad */
    SVECTOR v;
    SVECTOR s;
    s32 obj = AF(arg0, s32, 0x20);

    p->code = 0x50000000;
    p->c[0] = *c0;
    p->c[1] = *c0;
    p->c[2] = *c1;
    p->c[3] = *c1;
    v.vx = AF(arg0, u16, 6);
    v.vy = AF(arg0, u16, 0xA);
    v.vz = AF(arg0, u16, 0xE);
    ProjectPoint(&v, &v);
    SetIdentityRot(&m);
    RotateMatrixZ(&m, AF(obj, s16, 0x12));
    s.vx = scale[0];
    s.vy = scale[1];
    s.vz = scale[2];
    func_80020F34(&m, &s);
    m.t[0] = v.vx;
    m.t[1] = v.vy;
    m.t[2] = v.vz;
    LocalToWorld(&m, &D_80190754, &p->v[0]);
    LocalToWorld(&m, &D_8019075C, &p->v[1]);
    LocalToWorld(&m, &D_80190764, &p->v[2]);
    LocalToWorld(&m, &D_8019076C, &p->v[3]);
    p->v[0].vz = 0;
    p->v[1].vz = 0;
    p->v[2].vz = 0;
    p->v[3].vz = 0;
    DrawPrimG4Screen(p);
}

void RunLinkFxState(u8 *arg0) {
    D_80190774[AF(arg0, u16, 2)]();
}

extern u8 D_801EDA44;
extern u8 D_801EDA8C;
extern s16 D_801EDA8E;
extern s16 D_801EDA90;
extern u8 D_801EDA94;
extern s16 D_801EDA96;
extern s16 D_801EDA98;
extern s32 func_8016C374();

void func_8016C188(u8 *arg0) {
    SVECTOR v;
    s32 temp_v0;
    s32 p;

    temp_v0 = AllocSprite16To3E();
    AF(arg0, s32, 0x20) = temp_v0;
    if (temp_v0 != 0) {
        AF(arg0, u16, 0x12) = AF(arg0, u16, 6);
        AF(arg0, u16, 0x16) = AF(arg0, u16, 0xA);
        AF(arg0, u16, 0x1A) = AF(arg0, u16, 0xE);
        p = AF(arg0, s32, 0x34);
        v.vx = AF(arg0, u16, 0x12);
        v.vy = AF(arg0, u16, 0x16);
        v.vz = AF(arg0, u16, 0x1A);
        ObjLocalToWorld(p, (s32) &v, (s32) &v);
        SVecToPos((s32) &v, arg0 + 4);
        func_8001CD9C(temp_v0, &D_801EDA44);
        AF(temp_v0, s16, 0x1E) = 0xCCC;
        AF(temp_v0, s32, 4) |= 0x50000000;
        SetShapeCircle(&D_801EDA44, 0x80);
        AF(temp_v0, s16, 0x1A) = 0;
        AF(temp_v0, s16, 0x18) = 0;
        AF(arg0, s16, 0x10) = 0;
        *(s16 *) &D_801EDA8C = 0x20;
        D_801EDA8E = 0x20;
        D_801EDA90 = 0;
        *(s16 *) &D_801EDA94 = 0xC0;
        D_801EDA96 = 0xC0;
        D_801EDA98 = 0;
        func_8016C374(arg0, &D_801EDA8C, &D_801EDA94, &D_801EDA44);
        AF(arg0, u16, 2)++;
        return;
    }
    FreeEffect(arg0);
}

extern u8 D_801EDA44;
extern u8 D_801EDA8C;
extern u8 D_801EDA94;
extern s32 func_8016C374();

void func_8016C2C4(u8 *arg0) {
    s16 sp10[3];
    u8 *temp_s0;
    s32 a;
    u16 temp_v0;
    u16 temp_v1;

    temp_s0 = AF(arg0, u8 *, 0x20);
    a = AF(arg0, s32, 0x34);
    sp10[0] = AF(arg0, u16, 0x12);
    sp10[1] = AF(arg0, u16, 0x16);
    sp10[2] = AF(arg0, u16, 0x1A);
    ObjLocalToWorld(a, (s32) sp10, (s32) sp10);
    SVecToPos(sp10, arg0 + 4);
    temp_v1 = AF(arg0, u16, 0x10) + 0x10;
    AF(arg0, u16, 0x10) = temp_v1;
    temp_v0 = AF(temp_s0, u16, 0x1A) + temp_v1;
    AF(temp_s0, u16, 0x1A) = temp_v0;
    AF(temp_s0, u16, 0x18) = temp_v0;
    if (func_8016C374(arg0, &D_801EDA8C, &D_801EDA94, &D_801EDA44) == 0) {
        FreeEffect(arg0);
    }
}

s32 func_8016C374(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;

    temp_v0 = AF(arg1, u16, 0) - 0xA;
    AF(arg1, u16, 0) = temp_v0;
    if ((s16) (temp_v0) < 0) {
        AF(arg1, u16, 0) = 0U;
    }
    temp_v0_2 = AF(arg1, u16, 2) - 0xA;
    AF(arg1, u16, 2) = temp_v0_2;
    if ((s16) (temp_v0_2) < 0) {
        AF(arg1, u16, 2) = 0U;
    }
    temp_v0_3 = AF(arg1, u16, 4) - 0xA;
    AF(arg1, u16, 4) = temp_v0_3;
    if ((s16) (temp_v0_3) < 0) {
        AF(arg1, u16, 4) = 0U;
    }
    temp_v0_4 = AF(arg2, u16, 0) - 0xA;
    AF(arg2, u16, 0) = temp_v0_4;
    if ((s16) (temp_v0_4) < 0) {
        AF(arg2, u16, 0) = 0U;
    }
    temp_v0_5 = AF(arg2, u16, 2) - 0xA;
    AF(arg2, u16, 2) = temp_v0_5;
    if ((s16) (temp_v0_5) < 0) {
        AF(arg2, u16, 2) = 0U;
    }
    temp_v0_6 = AF(arg2, u16, 4) - 0xA;
    AF(arg2, u16, 4) = temp_v0_6;
    if ((s16) (temp_v0_6) < 0) {
        AF(arg2, u16, 4) = 0U;
    }
    AF(arg3, u8, 0) = (s8) AF(arg1, u16, 0);
    AF(arg3, u8, 1) = (s8) AF(arg1, u16, 2);
    AF(arg3, u8, 2) = (s8) AF(arg1, u16, 4);
    AF(arg3, u8, 4) = (s8) AF(arg2, u16, 0);
    AF(arg3, u8, 5) = (s8) AF(arg2, u16, 2);
    AF(arg3, u8, 6) = (s8) AF(arg2, u16, 4);
    return (s32) (s16) (AF(arg2, u16, 4) | (AF(arg2, u16, 0) | AF(arg2, u16, 2)));
}

extern u8 D_801EDAA0;
extern u8 D_801EDAA2;
extern u8 D_801EDAA4;
extern u8 D_801EDAA5;
extern u8 D_801EDAA6;
extern u8 D_801EDB60[][0xC4];
extern s32 VectorNormalSS();

void func_8016C49C(u8 *arg0) {
    u16 v[4];
    MATRIX m;
    u8 *s3;
    u8 *s4;
    u8 *p;
    s16 i;
    s32 q;
    s32 r;

    s3 = AF(arg0, u8 *, 0x30);
    s4 = AF(arg0, u8 *, 0x34);
    AF(arg0, u16, 0x28) = AF(s3, u16, 0x36);
    if (!(AF(arg0, s32, 0x2C) & 0x8000)) {
        for (i = 0, p = &g_Effects; i < 30; i++) {
            if (p != arg0 && AF(p, u16, 0) == 0x30) {
                FreeEffect(p);
            }
            p += 0x58;
        }
        /* D_801EDAA0/1 written through the neighbouring symbol D_801EDAA2 (one object split by splat) */
        (&D_801EDAA2)[-1] = 0xFF;
        (&D_801EDAA2)[-2] = D_801EDAA2 = 0x10;
        D_801EDAA4 = D_801EDAA5 = D_801EDAA6 = 0;
        SetShapeCircle(&D_801EDAA2 - 2, 10);
        v[0] = AF(s3, u16, 6) - AF(s4, u16, 6);
        v[1] = AF(s3, s16, 0xA) - (AF(s4, s16, 0xA) + 0x28);
        v[2] = AF(s3, u16, 0xE) - AF(s4, u16, 0xE);
        VectorNormalSS(v, v);
        AF(arg0, u16, 6) = AF(s3, u16, 6) + ((s16)v[0] >> 9);
        AF(arg0, u16, 0xA) = AF(s3, u16, 0xA) + (((s16)v[1] >> 9) - 0x28);
        AF(arg0, u16, 0xE) = AF(s3, u16, 0xE) + ((s16)v[2] >> 9);
        func_800D23D0(v);
        v[0] = 0;
        RotMatrixYXZ(v, arg0 + 0x38);
        ZeroFill(D_801EDB60, 0x620);
        SpawnEffect(0x32, (StageActor *)arg0, 0, 0, 0, 0, AF(arg0, s32, 0x30));
        AF(arg0, u16, 2) = 5;
    } else {
        q = AllocSprite16To3E();
        if (q != 0) {
            func_8001CD9C(q, &D_801EDAA0);
            AF(q, s32, 4) |= 0x50000000;
            r = rand();
            v[0] = (r & 0x7F) * 8 - 0x80;
            v[1] = ((u32)(r & 0x7F00) >> 4) - 0x400;
            v[2] = 0;
            RotMatrixYXZ(v, &m);
            MulMatrix2(arg0 + 0x38, &m);
            v[1] = 0;
            v[0] = 0;
            v[2] = 0xB;
            ApplyMatrixSV(&m, (SVECTOR *)v, (SVECTOR *)v);
            AF(arg0, u16, 0x12) = v[0];
            AF(arg0, u16, 0x16) = v[1];
            AF(arg0, u16, 0x1A) = v[2];
            AF(arg0, s32, 0x20) = q;
            AF(arg0, s32, 0x1C) = 8;
            func_8016CF04(arg0, 0);
            AF(arg0, s32, 0x2C) = 0;
            AF(arg0, u16, 2)++;
        }
    }
}

extern s32 VectorNormalSS();

void func_8016C74C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 sh = arg2;
    s32 lim;

    AF(arg0, s32, 0x10) += AF(arg1, s16, 0) << sh;
    AF(arg0, s32, 0x14) += AF(arg1, s16, 2) << sh;
    AF(arg0, s32, 0x18) += AF(arg1, s16, 4) << sh;
    AF(arg1, s16, 0) = AF(arg0, u16, 0x12);
    AF(arg1, s16, 2) = AF(arg0, u16, 0x16);
    AF(arg1, s16, 4) = AF(arg0, u16, 0x1A);
    lim = *(s32 *)&arg4; /* MATCH-TRICK: read the stack parameter through its address so its load lands before the call, as in the original */
    if (lim < VectorNormalSS(arg1, arg1)) {
        AF(arg0, s32, 0x10) = AF(arg1, s16, 0) << (s16)arg3;
        AF(arg0, s32, 0x14) = AF(arg1, s16, 2) << (s16)arg3;
        AF(arg0, s32, 0x18) = AF(arg1, s16, 4) << (s16)arg3;
    }
}

void ProjectileFxStep(u8 *arg0) {
    SVECTOR d;
    u8 unused[32]; /* MATCH-TRICK: frame pad, the original frame is 0x40 with only d stored */
    u8 *t;
    s32 lim;

    t = AF(arg0, u8 *, 0x34);
    if (--AF(arg0, s32, 0x1C) == 0) {
        AF(arg0, s16, 2) = 4;
        func_8016CF04(arg0, 2);
        return;
    }
    d.vx = AF(t, u16, 6) - AF(arg0, u16, 6);
    d.vy = AF(t, u16, 0xA) - AF(arg0, u16, 0xA);
    d.vz = AF(t, u16, 0xE) - AF(arg0, u16, 0xE);
    if (VectorNormalSS(&d, &d) < 0x790) {
        AF(arg0, s16, 2) = 4;
        func_8016CF04(arg0, 2);
        return;
    }
    AF(arg0, s32, 0x10) += d.vx << 6;
    AF(arg0, s32, 0x14) += d.vy << 6;
    AF(arg0, s32, 0x18) += d.vz << 6;
    d.vx = AF(arg0, u16, 0x12);
    d.vy = AF(arg0, u16, 0x16);
    d.vz = AF(arg0, u16, 0x1A);
    lim = 0x1000;
    if (lim < VectorNormalSS(&d, &d)) {
        AF(arg0, s32, 0x10) = d.vx << 10;
        AF(arg0, s32, 0x14) = d.vy << 10;
        AF(arg0, s32, 0x18) = d.vz << 10;
    }
    func_800D22E4(arg0);
    func_8016CF04(arg0, 1);
}

extern s16 g_PlayerAbsorbCounter;
extern u8 D_801EDB60[][0xC4];

void func_8016C998(u8 *arg0) {
    u16 *p;
    s16 i;
    u8 *o;

    p = AF(arg0, u16 *, 0x34);
    if (*p != 1) {
        AF(arg0, s16, 2) = 6;
    }
    func_8016CBC0();
    if (AF(arg0, s16, 0x28) == AF(AF(arg0, u8 *, 0x30), s16, 0x36) && (g_PlayerFlags & 0x20)) {
        if (AF(arg0, s32, 0x1C) == 0 || AF(arg0, s16, 0x12) < g_PlayerAbsorbCounter) {
            AF(arg0, s16, 0x12) = g_PlayerAbsorbCounter;
            for (i = 0; i < 8; i++) {
                if (D_801EDB60[i][0] == 0) {
                    break;
                }
            }
            if (i < 8) {
                o = (u8 *)SpawnEffect(0x30, (StageActor *)p, 0, 0, 0, 0x8000, AF(arg0, s32, 0x30));
                if (o != 0) {
                    D_801EDB60[i][0] = 1;
                    AF(o, MATRIX, 0x38) = AF(arg0, MATRIX, 0x38);
                    AF(o, s16, 0x2A) = i;
                    AF(o, s16, 6) = AF(arg0, s16, 6);
                    AF(o, s16, 0xA) = AF(arg0, s16, 0xA);
                    AF(o, s16, 0xE) = AF(arg0, s16, 0xE);
                    AF(arg0, s32, 0x1C) = 0x10;
                }
            }
        } else {
            AF(arg0, s32, 0x1C)--;
        }
    }
}

void RunProjectileFxState(u8 *arg0) {
    D_8019077C[AF(arg0, u16, 2)]();
}

s32 func_8016CBC0(void) {
    SPrim a;
    SPrim b;
    MATRIX m;
    s16 i;
    s16 cnt;
    u8 *p;
    u8 *e;
    u8 *q;
    s16 j;
    s16 n;
    u8 c;

    m = GsIDMATRIX;
    cnt = 0;
    a.code = b.code = 0x50000000;
    a.c[0].r = a.c[0].g = a.c[0].b = a.c[2].r = a.c[2].g = a.c[2].b =
        b.c[1].r = b.c[1].g = b.c[1].b = b.c[3].r = b.c[3].g = b.c[3].b = 0;
    for (i = 0; i < 8; i++) {
        p = D_801EDB60[i];
        if (p[0] != 0) {
            cnt++;
            e = p + 4;
            j = p[1];
            n = p[2];
            c = p[3];
            while (--n != -1) {
                q = e + j * 12;
                a.v[0].vx = AF(q, u16, 0);
                b.v[1].vx = AF(q, u16, 6);
                a.v[1].vx = b.v[0].vx = (a.v[0].vx + b.v[1].vx) >> 1;
                a.v[0].vy = AF(q, u16, 2);
                b.v[1].vy = AF(q, u16, 8);
                a.v[1].vy = b.v[0].vy = (a.v[0].vy + b.v[1].vy) >> 1;
                a.v[0].vz = AF(q, u16, 4);
                b.v[1].vz = AF(q, u16, 0xA);
                a.v[1].vz = b.v[0].vz = (a.v[0].vz + b.v[1].vz) >> 1;
                a.c[1].g = b.c[0].g = c;
                a.c[1].r = b.c[0].r = a.c[1].b = b.c[0].b = c >> 3;
                j--;
                if (j < 0) {
                    j = 15;
                }
                q = e + j * 12;
                c -= 15;
                a.v[2].vx = AF(q, u16, 0);
                b.v[3].vx = AF(q, u16, 6);
                a.v[3].vx = b.v[2].vx = (a.v[2].vx + b.v[3].vx) >> 1;
                a.v[2].vy = AF(q, u16, 2);
                b.v[3].vy = AF(q, u16, 8);
                a.v[3].vy = b.v[2].vy = (a.v[2].vy + b.v[3].vy) >> 1;
                a.v[2].vz = AF(q, u16, 4);
                b.v[3].vz = AF(q, u16, 0xA);
                a.v[3].vz = b.v[2].vz = (a.v[2].vz + b.v[3].vz) >> 1;
                a.c[3].g = b.c[2].g = c;
                a.c[3].r = b.c[2].r = a.c[3].b = b.c[2].b = c >> 3;
                DrawPrimG4Mtx(&a, &m);
                DrawPrimG4Mtx(&b, &m);
            }
        }
    }
    return cnt;
}

static inline u8 *func_8016CF04_pt(u8 *p) {
    return p + p[1] * 12;
}

s32 func_8016CF04(u8 *arg0, s32 arg1) {
    SVECTOR v;
    SVECTOR r;
    MATRIX m;
    u8 *p;

    p = D_801EDB60[AF(arg0, s16, 0x2A)];
    switch ((s16)arg1) {
    case 0:
        p[2] = 0;
        p[1] = 0;
        p[3] = 0xF0;
        break;
    case 1:
        if (++p[1] >= 0x10) {
            p[1] = 0;
        }
        if (p[2] < 0xF) {
            p[2]++;
        }
        break;
    case 2:
        if (--p[2] == 0) {
            p[0] = 0;
            return 1;
        }
        p[3] -= 0xF;
        return 0;
    }
    v.vx = AF(arg0, s32, 0x10) >> 12;
    v.vy = AF(arg0, s32, 0x14) >> 12;
    v.vz = AF(arg0, s32, 0x18) >> 12;
    func_800D23D0(&v);
    RotMatrixYXZ(&v, &m);
    v.vx = 9;
    v.vy = 0;
    v.vz = 0;
    ApplyMatrixSV(&m, &v, &r);
    AF(func_8016CF04_pt(p), s16, 4) = AF(arg0, u16, 6) + r.vx;
    AF(func_8016CF04_pt(p), s16, 6) = AF(arg0, u16, 0xA) + r.vy;
    AF(func_8016CF04_pt(p), s16, 8) = AF(arg0, u16, 0xE) + r.vz;
    v.vx = -v.vx;
    v.vy = -v.vy;
    ApplyMatrixSV(&m, &v, &r);
    AF(func_8016CF04_pt(p), s16, 0xA) = AF(arg0, u16, 6) + r.vx;
    AF(func_8016CF04_pt(p), s16, 0xC) = AF(arg0, u16, 0xA) + r.vy;
    AF(func_8016CF04_pt(p), s16, 0xE) = AF(arg0, u16, 0xE) + r.vz;
    return 0;
}

void RunBeamFxState(u8 *arg0) {
    D_80190798[AF(arg0, u16, 2)]();
}

extern u8 D_801EDAE1;
extern u8 D_801EDAE2;
extern u8 D_801EDAE4;
extern u8 D_801EDAE5;
extern u8 D_801EDAE6;
extern u8 D_801EDB21;
extern u8 D_801EDB22;
extern u8 D_801EDB24;
extern u8 D_801EDB25;
extern u8 D_801EDB26;

void func_8016D1D8(u8 *arg0) {
    SVECTOR v;
    MATRIX m;
    u8 *q;
    u8 *p;
    u8 *t;
    u8 *t2;
    u8 *q2;
    u8 *p2;
    s32 o;
    s32 o2;
    s32 r;
    s16 s;

    t = AF(arg0, u8 *, 0x34);
    if (AF(arg0, s32, 0x2C) == 0) {
        q = &D_801EDAE1;
        p = q - 1;
        *q = 0xE0;
        D_801EDAE2 = 0xE0;
        *p = 0xE0;
        D_801EDAE6 = 0;
        D_801EDAE5 = 0;
        D_801EDAE4 = 0;
        o = AllocSprite16To3E();
        if (o != 0) {
            AF(arg0, s32, 0x20) = o;
            SetShapeCircle(p, 0x28);
            func_8001CD9C(o, p);
            AF(o, s16, 0x1A) = 0x1400;
            AF(o, s32, 4) |= 0x50000000;
            t2 = AF(arg0, u8 *, 0x30);
            AF(arg0, u16, 0x28) = AF(t2, u16, 0x36);
            AF(arg0, u16, 0x12) = AF(t2, u16, 6);
            AF(arg0, u16, 0x16) = AF(t2, u16, 0xA) - 0x28;
            AF(arg0, u16, 0x1A) = AF(t2, u16, 0xE);
            AF(arg0, u16, 2)++;
        }
        AF(arg0, s32, 0x1C) = 8;
        PlaySe(0x647);
        return;
    }
    q2 = &D_801EDB21;
    p2 = q2 - 1;
    *q2 = 0xE0;
    D_801EDB22 = 0x20;
    *p2 = 0x20;
    D_801EDB25 = 0;
    D_801EDB26 = 0;
    D_801EDB24 = 0;
    o2 = AllocSprite16To3E();
    if (o2 != 0) {
        AF(arg0, s32, 0x20) = o2;
        SetShapeCircle(p2, 0x18);
        func_8001CD9C(o2, p2);
        AF(o2, s32, 4) |= 0x50000000;
        AF(arg0, u16, 6) = AF(t, u16, 6);
        AF(arg0, u16, 0xA) = AF(t, u16, 0xA);
        AF(arg0, u16, 0xE) = AF(t, u16, 0xE);
        r = rand();
        v.vx = ((r & 0x7F) << 3) - 0x80;
        v.vy = (u32)(r & 0x7F00) >> 3;
        v.vz = 0;
        RotMatrixYXZ(&v, &m);
        v.vy = 0;
        v.vx = 0;
        v.vz = 0x240;
        ApplyMatrixSV(&m, &v, &v);
        AF(arg0, s32, 0x10) = v.vx << 12;
        AF(arg0, s32, 0x14) = v.vy << 12;
        AF(arg0, s32, 0x18) = v.vz << 12;
        s = (r & 0x3F0) + 0x200;
        AF(o2, s16, 0x1A) = s;
        AF(o2, s16, 0x18) = s;
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2) = 2;
    }
}

void func_8016D428(u8 *arg0) {
    D_801907A0[AF(arg0, u16, 2)]();
}

void BeamFxStep(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    u16 *temp_s1;

    temp_s1 = AF(arg0, u16 *, 0x34);
    func_800D22E4((s32) arg0, arg1, arg2, arg3);
    func_8016CF04((s32) arg0, 1);
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if ((temp_v0 == -1) || (*temp_s1 != 1)) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
}

extern void ProjectileFxStep();

void func_8016D4DC(u8 *arg0) {
    SVECTOR d;
    u8 unused[32]; /* MATCH-TRICK: frame pad, the original frame is 0x48 with only d stored */
    u8 *t;
    s32 n;
    s32 k;

    t = AF(arg0, u8 *, 0x34);
    if (AF(t, u16, 0) != 1) {
        AF(arg0, s16, 2) = 3;
        AF(arg0, Player *, 0x34) = &g_Player;
        AF(arg0, s32, 0x1C) = 0x40;
        ProjectileFxStep(arg0);
    } else {
        d.vx = AF(t, u16, 6) - AF(arg0, u16, 6);
        d.vy = AF(t, u16, 0xA) - AF(arg0, u16, 0xA);
        d.vz = AF(t, u16, 0xE) - AF(arg0, u16, 0xE);
        n = VectorNormalSS(&d, &d);
        if (n < 0x510) {
            func_8016CF04(arg0, 2);
            AF(arg0, s16, 2) = 4;
        } else {
            if (n < 0x1900) {
                k = 6;
            } else if (n < 0x6400) {
                k = 5;
            } else {
                k = 4;
            }
            func_8016C74C(arg0, &d, k, 9, 0x400);
            func_800D22E4(arg0);
            func_8016CF04(arg0, 1);
        }
    }
}

s32 BeamFxEnd(u8 *arg0) {
    void *temp_a1;

    temp_a1 = AF(arg0, void *, 0x20);
    AF(temp_a1, u16, 0x18) = (u16) (AF(temp_a1, u16, 0x18) - 0x60);
    AF(temp_a1, u16, 0x1A) = (u16) (AF(temp_a1, u16, 0x1A) - 0x60);
    if ((func_8016CF04((s32) arg0, 2) << 0x10) != 0) {
        FreeEffect((s32) arg0);
    }
}

void BeamFxDrawEnd(s32 arg0) {
    if ((func_8016CBC0() << 0x10) == 0) {
        FreeEffect(arg0);
    }
}

extern u8 D_801EDAE1;
extern u8 D_801EDAE2;
extern u8 D_801EDAE4;
extern u8 D_801EDAE5;
extern u8 D_801EDAE6;

void func_8016D688(u8 *arg0) {
    u8 *p;
    u8 *q;
    u8 *t;
    s32 o;

    q = &D_801EDAE1;
    p = q - 1;
    *q = 0xE0;
    D_801EDAE2 = 0xE0;
    *p = 0xE0;
    D_801EDAE6 = 0;
    D_801EDAE5 = 0;
    D_801EDAE4 = 0;
    o = AllocSprite16To3E();
    if (o != 0) {
        AF(arg0, s32, 0x20) = o;
        SetShapeCircle(p, 0x28);
        func_8001CD9C(o, p);
        AF(o, s16, 0x1A) = 0x1400;
        AF(o, s32, 4) |= 0x50000000;
        t = AF(arg0, u8 *, 0x30);
        AF(arg0, u16, 0x28) = AF(t, u16, 0x36);
        AF(arg0, u16, 0x12) = AF(t, u16, 6);
        AF(arg0, u16, 0x16) = AF(t, u16, 0xA) - 0x28;
        AF(arg0, u16, 0x1A) = AF(t, u16, 0xE);
        AF(arg0, u16, 2)++;
    }
}

extern void func_800D20C0();

void RingWaveStep(u8 *arg0) {
    SVECTOR v;
    SVECTOR r;
    u8 *o;

    if (AF(arg0, s16, 0x28) != AF(AF(arg0, u8 *, 0x30), s16, 0x36) || !(g_PlayerFlags & 0x20)) {
        FreeEffect(arg0);
        return;
    }
    o = AF(arg0, u8 *, 0x20);
    AF(o, u16, 0x18) ^= 0x400;
    AF(o, u16, 0x1A) ^= 0x200;
    v.vx = AF(arg0, u16, 0x12);
    v.vy = AF(arg0, u16, 0x16);
    v.vz = AF(arg0, u16, 0x1A);
    func_800D20C0(&v, &r, 6);
    AF(arg0, u16, 6) = v.vx;
    AF(arg0, u16, 0xA) = v.vy;
    AF(arg0, u16, 0xE) = v.vz;
}

void func_8016D848(u8 *arg0) {
    SVECTOR v;
    SVECTOR r;
    s16 i;
    s16 d;
    s32 t;
    u8 *o;

    t = --AF(arg0, s32, 0x1C);
    if (t == 0) {
        FreeEffect(arg0);
        return;
    }
    d = -0xC00;
    if (t >= 4) {
        d = 0x800;
        for (i = 0; i < 5; i++) {
            SpawnEffect(0x33, (StageActor *)arg0, 0, 0, 0, 0x8000, 0);
        }
    }
    o = AF(arg0, u8 *, 0x20);
    if (d == 0) {
        AF(o, u16, 0x18) ^= 0x400;
        AF(o, u16, 0x1A) ^= 0x200;
    } else {
        AF(o, u16, 0x18) += d;
        AF(o, u16, 0x1A) += d;
    }
    v.vx = AF(arg0, u16, 0x12);
    v.vy = AF(arg0, u16, 0x16);
    v.vz = AF(arg0, u16, 0x1A);
    func_800D20C0(&v, &r, 6);
    AF(arg0, u16, 6) = v.vx;
    AF(arg0, u16, 0xA) = v.vy;
    AF(arg0, u16, 0xE) = v.vz;
}

void RingWaveFade(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        FreeEffect((s32) arg0, arg1, arg2, arg3);
        return;
    }
    func_800D22E4((s32) arg0, arg1, arg2, arg3);
    temp_v0_2 = AF(arg0, s32, 0x10);
    temp_v1 = AF(arg0, s32, 0x14);
    AF(arg0, s32, 0x10) = (s32) (temp_v0_2 - (temp_v0_2 >> 4));
    temp_v0_3 = AF(arg0, s32, 0x18);
    AF(arg0, s32, 0x14) = (s32) (temp_v1 - (temp_v1 >> 4));
    AF(arg0, s32, 0x18) = (s32) (temp_v0_3 - (temp_v0_3 >> 4));
}

void SpawnFx31(s32 arg0) {
    SpawnEffectOn(0x31, arg0, 0, 0);
}

void RunFollowFxState(u8 *arg0) {
    FollowFxPlace();
    D_80190808[AF(arg0, u16, 2)](arg0);
}

extern u8 D_801907AC;
extern u8 D_801907B8;
extern void InitSpriteKind3();

void FollowFxSetup(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AllocSprite16To3E();
    if (temp_v0 == 0) {
        FreeEffect(arg0);
        return;
    }
    AF(arg0, s32, 0x20) = temp_v0;
    InitSpriteKind3(temp_v0, &D_801907AC, 0x250, 0x100);
    AF(temp_v0, u8, 0x27) = 0x90;
    AF(temp_v0, s16, 0x18) = 0x3000;
    AF(temp_v0, s16, 0x1A) = 0x4000;
    AF(temp_v0, s32, 4) |= 0x50000000;
    StartSpriteAnim(temp_v0, arg0 + 0x24, &D_801907B8);
    AF(arg0, s32, 0x10) = 0;
    AF(arg0, s32, 0x14) = 0xFFF40000;
    AF(arg0, u16, 2)++;
}

void FollowFxStep(u8 *arg0) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = AF(arg0, s32, 0x20);
    if (StepSpriteAnim(temp_s1, (s32) (arg0 + 0x24)) != 0) {
        FreeEffect((s32) arg0);
        return;
    }
    AF(temp_s1, u8, 0x27) = (s8) (AF(arg0, u8, 0x28) - 0x70);
    temp_a0 = AF(arg0, s32, 0x10) + 0xFFFA0000;
    AF(arg0, s32, 0x10) = temp_a0;
    temp_v0 = AF(arg0, s32, 0x14) + temp_a0;
    AF(arg0, s32, 0x14) = temp_v0;
    AF(arg0, s32, 8) = (s32) (AF(arg0, s32, 8) + temp_v0);
    AF(temp_s1, u16, 0x18) = (u16) (AF(temp_s1, u16, 0x18) - 0x500);
    AF(temp_s1, u16, 0x1A) = (u16) (AF(temp_s1, u16, 0x1A) - 0x300);
}

void FollowFxPlace(u8 *arg0) {
    AF(arg0, s32, 4) = 0;
    AF(arg0, s32, 8) = 0;
    AF(arg0, s32, 0xC) = 0;
    ObjLocalToWorld16(AF(arg0, s32, 0x34), arg0 + 4);
    func_800D1FC8(arg0, 5);
}

extern u8 D_80190810;
extern u8 D_8019081C;
extern s16 D_801EE180;
extern s16 D_801EE184;

void SplashFxStep(u8 *arg0) {
    s16 i;
    u8 *p;
    s32 obj;
    s32 q;
    s32 r;
    u16 sp20[4];
    u16 sp28[4];

    i = 0;
    p = &g_Effects;
    obj = AF(arg0, s32, 0x34);
    do {
        if (p != arg0 && AF(p, u16, 0) == 0x34) {
            goto kill;
        }
        i++;
        p += 0x58;
    } while (i < 30);
    ObjLocalToWorld16(obj, arg0 + 4);
    if (IsTechnique3Active(obj) != 0) {
        i = 0;
        p = &g_Effects;
        do {
            if (AF(p, u16, 0) == 0x11) {
                goto check;
            }
            i++;
            p += 0x58;
        } while (i < 30);
        SpawnEffect(0x11, (StageActor *)arg0, AF(arg0, s16, 6), AF(arg0, u16, 0xA) - 8, AF(arg0, s16, 0xE), 0, 0);
        i = 0;
        sp20[0] = AF(arg0, u16, 6);
        sp20[1] = AF(arg0, u16, 0xA);
        sp20[2] = AF(arg0, u16, 0xE);
        func_800D20C0(sp20, sp28, 0);
        sp28[1] = 0;
        func_800D23D0(sp28);
        do {
            r = SpawnEffect(0x12, (StageActor *)arg0, AF(obj, s16, 6), AF(obj, s16, 0xA), AF(obj, s16, 0xE), i, 0);
            if (r != 0) {
                AF(r, u16, 0x12) = sp28[0];
                AF(r, u16, 0x16) = sp28[1];
                AF(r, s16, 0x1A) = 0;
            }
            i += 2;
        } while (i < 3);
        goto kill;
    }
check:
    if (D_801EE180 != AF(obj, s16, 6) || D_801EE184 != AF(obj, s16, 0xE)) {
        q = func_800D21C4(arg0, &D_80190810, 0x18);
        if (q != 0) {
            D_801EE180 = AF(obj, u16, 6);
            D_801EE184 = AF(obj, u16, 0xE);
            func_800D1FC8(arg0, 7);
            AF(arg0, s32, 0x20) = q;
            AF(q, s16, 0x1A) = 0x3000;
            AF(q, s16, 0x18) = 0x3000;
            AF(q, u8, 0x26) = 0xFF;
            AF(q, s32, 4) |= 0x50000000;
            StartSpriteAnim(q, arg0 + 0x24, &D_8019081C);
            StepSpriteAnim(q, arg0 + 0x24);
            AF(arg0, u16, 2)++;
            return;
        }
    }
kill:
    FreeEffect(arg0);
}

void RunSplashFxState(u8 *arg0) {
    D_8019083C[AF(arg0, u16, 2)]();
}

void SplashFxEnd(u8 *arg0) {
    if (StepSpriteAnim(AF(arg0, s32, 0x20), (s32) (arg0 + 0x24)) != 0) {
        FreeEffect((s32) arg0);
    }
}

void RunSwirlFxState(u8 *arg0) {
    D_80190844[AF(arg0, u16, 2)]();
}

extern u8 D_801EE188;
extern u8 D_801EE189;
extern u8 D_801EE18A;
extern u8 D_801EE18C;
extern u8 D_801EE18D;
extern u8 D_801EE18E;
extern void func_8001CD50();

void func_8016DF5C(u8 *arg0) {
    SVECTOR v;
    u8 unused[32]; /* MATCH-TRICK: frame pad */
    MATRIX m;
    u8 *src;
    u8 *p;
    u8 *b;
    u16 i;
    s32 o;
    s32 r;

    src = AF(arg0, u8 *, 0x34);
    if (!(AF(arg0, s32, 0x2C) & 0x8000)) {
        for (i = 0, p = &g_Effects; i < 30; i++, p += 0x58) {
            if (p != arg0 && (AF(p, u16, 0) == 0x41 || AF(p, u16, 0) == 0x48)) {
                FreeEffect(p);
            }
        }
        o = AllocSprite16To3E();
        if (o != 0) {
            b = &D_801EE188;
            D_801EE18A = 0xC0;
            *b = 0xC0;
            D_801EE189 = 0;
            D_801EE18C = D_801EE18D = D_801EE18E = 0;
            SetShapeCircle(b, 0x40);
            func_8001CD50(o, b);
            AF(o, u8 *, 0x34) = arg0 + 0x38;
            AF(o, s16, 0x1A) = 0;
            AF(o, s16, 0x18) = 0;
            AF(o, s32, 4) |= 0x50000000;
            SwirlFxMatrix(arg0);
            AF(arg0, s32, 0x20) = o;
            AF(arg0, s32, 0x1C) = 0x10;
            AF(arg0, u16, 2)++;
        }
    } else {
        v.vx = 0;
        v.vy = 0;
        v.vz = 0x20;
        m = GsIDMATRIX;
        r = rand();
        RotMatrixY((r & 0x7F00) >> 3, &m);
        ApplyMatrixSV(&m, &v, &v);
        AF(arg0, s16, 6) = g_PlayerX + v.vx;
        AF(arg0, s16, 0xA) = D_80126B62 - (r & 0x3F);
        AF(arg0, s16, 0xE) = D_80126B66 + v.vz;
        AF(arg0, MATRIX, 0x38) = AF(src, MATRIX, 0x38);
        AF(arg0, s32, 0x2C) = 0x1000;
        AF(arg0, s32, 0x30) = 0xFF;
        AF(arg0, s32, 0x1C) = 0x10;
        AF(arg0, u16, 2) = 4;
    }
}

void SwirlFxGrow(u8 *arg0) {
    u8 *m = AF(arg0, u8 *, 0x20);

    SwirlFxMatrix(arg0);
    if (--AF(arg0, s32, 0x1C) != 0) {
        SpawnEffect(0x48, (StageActor *) arg0, 0, 0, 0, 0x8000, 0);
        AF(m, u16, 0x18) += 0x100;
        AF(m, u16, 0x1A) += 0x140;
        return;
    }
    AF(arg0, s32, 0x1C) = 0x20;
    AF(arg0, u16, 2)++;
}

void SwirlFxSpin(u8 *arg0) {
    SwirlFxMatrix(arg0);
    if (--AF(arg0, s32, 0x1C) != 0) {
        SpawnEffect(0x48, (StageActor *) arg0, 0, 0, 0, 0x8000, 0);
        return;
    }
    AF(arg0, s32, 0x1C) = 0x10;
    AF(arg0, u16, 2)++;
}

void SwirlFxShrink(u8 *arg0) {
    s32 temp_v0;
    void *temp_s1;

    temp_s1 = AF(arg0, void *, 0x20);
    SwirlFxMatrix();
    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        AF(temp_s1, u16, 0x18) = (u16) (AF(temp_s1, u16, 0x18) - 0x100);
        AF(temp_s1, u16, 0x1A) = (u16) (AF(temp_s1, u16, 0x1A) - 0x120);
        return;
    }
    FreeEffect((s32) arg0);
}

void SwirlFxTrailStep(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 != 0) {
        func_800D22E4((s32) arg0, arg1, arg2, arg3);
        AF(arg0, u16, 0x16) = (u16) (AF(arg0, u16, 0x16) - 3);
        AF(arg0, s32, 0x30) = (s32) (AF(arg0, s32, 0x30) - 0xE);
        func_8016E460((s32) arg0, (s32) (arg0 + 0x38));
        return;
    }
    FreeEffect((s32) arg0, arg1, arg2, arg3);
}

extern void func_800D20C0();
extern void func_800D23D0();

void SwirlFxMatrix(u8 *arg0) {
    SVECTOR v;
    SVECTOR r;
    u8 *o;

    o = AF(arg0, u8 *, 0x34);
    v.vx = AF(o, u16, 6);
    v.vy = AF(o, u16, 0xA) - 0x28;
    v.vz = AF(o, u16, 0xE);
    func_800D20C0(&v, &r, 6);
    AF(arg0, u16, 6) = v.vx;
    AF(arg0, u16, 0xA) = v.vy;
    AF(arg0, u16, 0xE) = v.vz;
    func_800D23D0(&r);
    RotMatrixYXZ(&r, (MATRIX *)(arg0 + 0x38));
}

void func_8016E460(u8 *a, u8 *b) {
    SPrim s;
    MATRIX m;
    SVECTOR r;
    MATRIX *mp;
    u8 c2;
    u8 c;

    s.v[0].vx = 7;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = -7;
    s.v[1].vy = 3;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[2].vy = -3;
    s.v[0].vz = s.v[1].vz = s.v[2].vz = s.v[3].vz = 0;
    c = AF(a, u8, 0x30);
    s.code = 0x50000000;
    c2 = c >> 2;
    s.c[1].r = s.c[2].r = s.c[1].b = s.c[2].b = c;
    s.c[1].g = s.c[2].g = c2;
    s.c[0].g = s.c[3].g = s.c[0].b = s.c[3].b = s.c[0].r = s.c[3].r = c2 >> 2;
    r.vx = r.vy = AF(a, u16, 0x2C);
    mp = &m;
    SetScaleMatrix(&r, mp);
    MulMatrix2(b, mp);
    mp->t[0] = AF(a, s16, 6);
    mp->t[1] = AF(a, s16, 0xA);
    mp->t[2] = AF(a, s16, 0xE);
    DrawPrimG4Mtx(&s, mp);
    s.v[0].vx = 3;
    s.v[1].vx = s.v[2].vx = 0;
    s.v[3].vx = -3;
    s.v[1].vy = 7;
    s.v[0].vy = s.v[3].vy = 0;
    s.v[2].vy = -7;
    DrawPrimG4Mtx(&s, mp);
}

void RunScreenFxState(u8 *arg0) {
    D_80190898[AF(arg0, u16, 2)]();
}

void ScreenFxSetup(u8 *arg0) {
    SVECTOR v;

    PosToSVec(arg0 + 4, &v);
    if (ProjectPoint(&v, &v) & ~0x1000) {
        FreeEffect(arg0);
        return;
    }
    SVecToPos(&v, arg0 + 4);
    AF(arg0, s16, 0x10) = 0x100;
    AF(arg0, s16, 0x12) = 0;
    AF(arg0, s16, 0x14) = 0;
    AF(arg0, s16, 0x16) = 0x80;
    AF(arg0, u16, 2) = AF(arg0, u16, 2) + 1;
}

void ScreenFxGrow(u8 *arg0) {
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 0x10) + 0x200;
    temp_v0 = AF(arg0, u16, 0x12) + temp_v1;
    AF(arg0, u16, 0x12) = temp_v0;
    AF(arg0, u16, 0x10) = temp_v1;
    if ((s16) temp_v0 >= 0x3000) {
        AF(arg0, s32, 0x1C) = 4;
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    DrawScreenFx();
}

void ScreenFxHold(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1C) - 1;
    AF(arg0, s32, 0x1C) = temp_v0;
    if (temp_v0 == -1) {
        AF(arg0, u16, 2) = (u16) (AF(arg0, u16, 2) + 1);
    }
    DrawScreenFx();
}

void ScreenFxShrink(u8 *arg0) {
    AF(arg0, u16, 0x12) += 0x400;
    AF(arg0, s16, 0x16) -= 8;
    if (AF(arg0, s16, 0x16) <= 0) {
        FreeEffect(arg0);
    } else {
        DrawScreenFx();
    }
}

extern void DrawScreenFxQuad();

void DrawScreenFx(u8 *arg0) {
    SVECTOR sp10;
    s32 sp18;
    s16 temp;

    sp10.vx = sp10.vy = sp10.vz = AF(arg0, u16, 0x12);
    temp = AF(arg0, s16, 0x16);
    sp18 = temp | ((temp << 16) | (temp << 8));
    DrawScreenFxQuad(arg0, &sp10, &sp18);
}

extern SVECTOR D_80190858[];
extern s32 D_80190878;
extern s32 D_80190880;
extern s32 D_80190888;
extern s32 D_80190890;

void DrawScreenFxQuad(u8 *arg0, SVECTOR *rot, s32 *col) {
    SPrimT s;
    MATRIX m;
    long flag;
    SPrimT *p;

    p = &s;
    SetScaleMatrix(rot, &m);
    m.t[0] = AF(arg0, s16, 6);
    m.t[1] = AF(arg0, s16, 0xA);
    m.t[2] = AF(arg0, s16, 0xE);
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    RotTransSV(&D_80190858[0], &p->v[0], &flag);
    RotTransSV(&D_80190858[1], &s.v[1], &flag);
    RotTransSV(&D_80190858[2], &s.v[2], &flag);
    RotTransSV(&D_80190858[3], &s.v[3], &flag);
    s.v[0].vz = 3;
    s.code = 0x50000000;
    *(s32 *)s.uv[0] = D_80190878;
    *(s32 *)s.uv[1] = D_80190880;
    *(s32 *)s.uv[2] = D_80190888;
    *(s32 *)s.uv[3] = D_80190890;
    *(s32 *)&s.r = *col;
    s.tp = 0x27;
    DrawPrimFT4Screen(p);
}

s32 ClearHudSlots(void) {
    return ZeroFill((s32) &D_80115218, 0x80);
}

void OpenHudSlot(s32 arg0, s32 arg1) {
    s16 a = arg0;
    s16 b = arg1;
    u8 *p;

    if (b < 10) {
        p = &D_80115218 + a * 32;
        p[0] = a + 1;
        p[3] = b;
        p[1] = 0;
    }
}

extern void (*D_801908D8[])();

void UpdateHudSlots(void) {
    u8 *p;

    for (p = &D_80115218; p < &D_80115218 + 0x80; p += 0x20) {
        if (p[0] != 0) {
            D_801908D8[p[1]](p);
        }
    }
}

extern s32 D_801908A8[];
extern u8 D_801908C0[];
extern u16 D_801908C4[];
extern s32 func_800D2CA8();
extern s32 func_800D2D10();

void HudSlotSetup(u8 *arg0) {
    s16 i;
    s32 base;
    u8 off;
    u8 j;

    i = arg0[0] - 1;
    off = D_801908C0[i];
    base = D_801908A8[i];
    j = i;
    func_800D2D10(func_800D2CA8(arg0[3], 0x1C), 1, off + base, 0);
    SjisToGlyphs(base, arg0 + 8);
    arg0[3] = j;
    AF(arg0, s16, 4) = -0xD7;
    AF(arg0, u16, 6) = D_801908C4[i];
    arg0[2] = 0;
    arg0[1]++;
    DrawHudSlot(arg0, 0x80);
}

void HudSlotSlideIn(u8 *arg0) {
    u8 temp_v0;

    AF(arg0, u16, 4) = (u16) (AF(arg0, u16, 4) + D_801908CC[AF(arg0, u8, 2)]);
    DrawHudSlot((s32) arg0, 0x80);
    temp_v0 = AF(arg0, u8, 2) + 1;
    AF(arg0, u8, 2) = temp_v0;
    if ((u32) (temp_v0 & 0xFF) >= 6U) {
        AF(arg0, u8, 2) = 0x20U;
        AF(arg0, u8, 1) = (u8) (AF(arg0, u8, 1) + 1);
    }
}

void HudSlotHold(u8 *arg0) {
    u8 temp_v1;

    DrawHudSlot((s32) arg0, (s32) D_801908BC[(AF(arg0, u8, 2) & 3)]);
    temp_v1 = AF(arg0, u8, 2);
    AF(arg0, u8, 2) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        AF(arg0, u8, 2) = 5U;
        AF(arg0, u8, 1) = (u8) (AF(arg0, u8, 1) + 1);
    }
}

void HudSlotSlideOut(u8 *arg0) {
    u8 temp_v1;

    AF(arg0, u16, 4) = (u16) (AF(arg0, u16, 4) - D_801908CC[AF(arg0, u8, 2)]);
    DrawHudSlot((s32) arg0, 0x80);
    temp_v1 = AF(arg0, u8, 2);
    AF(arg0, u8, 2) = (u8) (temp_v1 + 0xFF);
    if (temp_v1 == 0) {
        AF(arg0, u8, 0) = 0;
    }
}

extern u8 D_801908B8[];
extern void DrawSpriteRec();

void DrawHudSlot(u8 *arg0, s32 arg1) {
    struct { s16 x, y; s32 m; s16 w, h, u, v; u8 r, g, b; s32 z; u8 t; } s;
    u16 x;
    u16 y;
    u16 *p;

    s.r = s.g = s.b = arg1;
    s.t = D_801908B8[AF(arg0, u8, 3)];
    s.u = 0x640;
    s.v = 0x1C8;
    s.z = 0;
    s.w = 0x28;
    s.h = 8;
    x = AF(arg0, u16, 4);
    s.x = x + 0x10;
    y = AF(arg0, u16, 6);
    s.m = 0x10;
    s.y = y;
    DrawSpriteRec(&s);
    s.w = 8;
    y += 0xA;
    p = (u16 *)(arg0 + 8);
    while (*p != 0xFFFF) {
        switch (*p) {
        case 0x1850:
        case 0x1858:
            s.x = x + 4;
            s.y = y - 7;
            break;
        case 0x3872:
            x += 2;
            p++;
            continue;
        default:
            s.x = x;
            x += 8;
            s.y = y;
            break;
        }
        s.u = *(u8 *)p + 0x500;
        s.v = (*p++ >> 8) + 0x100;
        DrawSpriteRec(&s);
    }
}

void FxFree(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FreeEffect(arg0, arg1, arg2, arg3);
}

void StartPlayerActionArg(s32 arg0, s32 arg1, s32 arg2) {
    StartPlayerAction(arg0, arg1);
    D_80126D70 = arg2;
}

void StartPlayerActionScriptArg(s32 arg0, s32 arg1, s32 arg2) {
    StartPlayerActionScript(arg0, arg1);
    D_80126D70 = arg2;
}

void StartPlayerAction(s32 arg0, s32 arg1) {
    SetPlayerAction(arg0, arg1);
    if ((u16)(g_Player.state - 0x19) >= 2) {
        LeavePlayerKind(&g_Player);
        EnterPlayerStanding(&g_Player);
    }
}

extern s32 SetPlayerActionScriptReset();

void StartPlayerActionScript(s32 arg0, s32 arg1) {
    SetPlayerActionScriptReset();
    if ((u16)(g_Player.state - 0x19) >= 2) {
        LeavePlayerKind(&g_Player);
        EnterPlayerStanding(&g_Player);
    }
}

void SetPlayerAction(s32 arg0, s32 arg1) {
    s32 t;
    t = arg0 | 0x04000000;
    g_PlayerAction = t | arg1;
    g_PlayerActionScript = 0;
    D_80126D6C = 0;
    D_80126D6D = 0;
    D_80126D6E = 0;
    D_80126D5C = 0;
    D_80126D60 = 0;
    D_80126D64 = 0;
    D_80126D66 = 0;
    D_80126D68 = 0;
    D_80126D6A = 0;
    D_80126D1A = 0;
    D_80127058 = 0;
    D_8012705C = 0;
    D_80127060 = 0;
    D_80127064 = 0;
    D_80127068 = 0;
    D_8012706C = 0;
    D_80127070 = 0;
    D_80127074 = 0;
    ResetActionHandler(&g_Player);
    D_800B9A17 = 0;
    D_80126D20 = 0;
}

s32 SetPlayerActionScriptReset(void) {
    SetPlayerActionScript();
    return ResetActionHandler((s32) &g_Player);
}

void SetPlayerActionScriptPass(void) {
    SetPlayerActionScript();
}

void SetPlayerActionScript(s32 arg0, s32 arg1) {
    s32 v = AF(arg0, s32, 0) | 0x4000000;
    D_80126D6C = 1;
    g_PlayerActionScript = arg0;
    D_80126D6D = 0;
    D_80126D6E = 0;
    D_80126D5C = 0;
    D_80126D60 = 0;
    D_80126D64 = 0;
    D_80126D66 = 0;
    D_80126D68 = 0;
    D_80126D6A = 0;
    D_80126D1A = 0;
    D_80127058 = 0;
    D_8012705C = 0;
    D_80127060 = 0;
    D_80127064 = 0;
    D_80127068 = 0;
    D_8012706C = 0;
    D_80127070 = 0;
    D_80127074 = 0;
    D_800B9A17 = 0;
    D_80126D20 = 0;
    g_PlayerAction = v | arg1;
}

void ClearPlayerActionFlag04(u8 *arg0) {
    AF(arg0, s32, 0x1F8) = (s32) (AF(arg0, s32, 0x1F8) & 0xFBFFFFFF);
}

void EndPlayerAction(void) {
    EndPlayerActionOf((s32) &g_Player);
    ResumeHopAbility((s32) &g_Player);
}

void EndPlayerActionOf(s32 arg0) {
    AF(arg0, s32, 0x1F8) = 0;
    AF(arg0, s32, 0x1FC) = 0;
    SetPhaseCopy(arg0, 0);
    BeginScene(arg0);
    ClearHit(arg0);
    if (D_80078EB4 != 0) {
        D_800B9A17 = 1;
    }
    ClearObjPadInput(arg0);
}

void RunPlayerAction(Player *arg0) {
    s32 v = (s32)arg0->action;
    void (*f)() = (void (*)())(v & 0x80FFFFFF);

    if (v != 0) {
        if (v & 0x01000000) {
            ClearObjPadInput(arg0);
        }
        f(arg0);
    }
}

s32 GetPlayerAction(s32 arg0) {
    return g_PlayerAction & 0x80FFFFFF;
}

extern s32 D_801908E8[];

s32 func_8016F1C4(void) {
    Player *pl = &g_Player;
    s32 *p = D_801908E8;
    s32 v;

    for (v = *p++; v != 0; v = *p++) {
        if (D_800B9A08 == v) {
            return 1;
        }
    }
    if (((s32)pl->action & 0x80FFFFFF) && ((s32)pl->action & 0x10000000)) {
        return 0;
    }
    return (s32)pl->action & 0x80FFFFFF;
}

void SetPlayerByte1C2(void) {
    D_80126D1A = 1;
}

s32 ClearPlayerActionFlag01(void) {
    s32 temp_v0;

    temp_v0 = g_PlayerAction & 0xFEFFFFFF;
    g_PlayerAction = temp_v0;
    return temp_v0;
}

s32 SetPlayerActionFlag01(void) {
    s32 temp_v0;

    temp_v0 = g_PlayerAction | 0x01000000;
    g_PlayerAction = temp_v0;
    return temp_v0;
}

s32 SetPlayerActionFlag02(void) {
    s32 temp_v0;

    temp_v0 = g_PlayerAction | 0x02000000;
    g_PlayerAction = temp_v0;
    return temp_v0;
}

s32 ClearPlayerActionFlag02(void) {
    s32 temp_v0;

    temp_v0 = g_PlayerAction & 0xFDFFFFFF;
    g_PlayerAction = temp_v0;
    return temp_v0;
}

s32 SetPlayerActionFlag08(void) {
    s32 temp_v0;

    temp_v0 = g_PlayerAction | 0x08000000;
    g_PlayerAction = temp_v0;
    return temp_v0;
}

s32 ClearPlayerActionFlag08(void) {
    s32 temp_v0;

    temp_v0 = g_PlayerAction & 0xF7FFFFFF;
    g_PlayerAction = temp_v0;
    return temp_v0;
}

s32 SetPlayerActionFlag10(void) {
    s32 temp_v0;

    temp_v0 = g_PlayerAction | 0x10000000;
    g_PlayerAction = temp_v0;
    return temp_v0;
}

s32 ClearPlayerActionFlag10(void) {
    s32 temp_v0;

    temp_v0 = g_PlayerAction & 0xEFFFFFFF;
    g_PlayerAction = temp_v0;
    return temp_v0;
}

void SetWorkA3E7(void) {
    D_800B9A17 = 1;
}

void ClearWorkA3E7(void) {
    D_800B9A17 = 0;
}

void ClearFlags125To12C(void) {
    SetFlag(0x125, 0);
    SetFlag(0x126, 0);
    SetFlag(0x127, 0);
    SetFlag(0x128, 0);
    SetFlag(0x129, 0);
    SetFlag(0x12A, 0);
    SetFlag(0x12B, 0);
    SetFlag(0x12C, 0);
}

s32 TakeFlag125Plus(s32 arg0) {
    if (TestFlag125Plus() != 0) {
        ClearFlag125Plus(arg0);
        return 1;
    }
    return 0;
}

s32 TestFlag125Plus(s32 arg0) {
    return (GetFlag(arg0 + 0x125) & 0xFF) != 0;
}

void ClearFlag125Plus(s32 arg0) {
    SetFlag(arg0 + 0x125, 0);
}

void func_8016F494(s32 arg0) {
    func_80175414();
    func_8016F4C4(arg0);
}

void func_8016F4C4(s32 arg0) {
    EndPlayerActionOf(arg0);
    ResumeHopAbility(arg0);
}

void func_8016F4F4(void) {
}

void func_8016F4FC(s32 arg0) {
    TakeActionArgs(arg0, 1);
    func_800D1724(g_ActionArgs);
    NextPlayerActionHandler(arg0);
}

void func_8016F540(s32 arg0) {
    HidePlayerScene();
    SetPlayerFlag7E2(arg0);
    NextPlayerActionHandler(arg0);
}

void func_8016F578(s32 arg0) {
    ShowPlayerScene(arg0);
    ClearPlayerFlag7E2(arg0);
    NextPlayerActionHandler(arg0);
}

void func_8016F5B0(s32 arg0, s32 arg1) {
    EndScene(arg0, arg1);
    NextPlayerActionHandler(arg0);
}

void func_8016F5E0(s32 arg0) {
    BeginScene(arg0);
    NextPlayerActionHandler(arg0);
}

void func_8016F610(s32 arg0) {
    SetPlayerActionFlag01();
    ClearObjPadInput(arg0);
    NextPlayerActionHandler(arg0);
}

void func_8016F648(s32 arg0) {
    ClearPlayerActionFlag01();
    ClearObjPadInput(arg0);
    NextPlayerActionHandler(arg0);
}

void func_8016F680(s32 arg0) {
    ClearPlayerActionFlag10();
    NextPlayerActionHandler(arg0);
}

void func_8016F6B0(s32 arg0) {
    SetPlayerActionFlag10();
    NextPlayerActionHandler(arg0);
}

void func_8016F6E0(u8 *arg0) {
    D_80190960[AF(arg0, u8, 0x216)]();
}

void func_8016F71C(s32 arg0) {
    TakeActionArgs(arg0, 1);
    AF(arg0, s32, 0x200) = (s32) g_ActionArgs;
    BumpSub2Copy(arg0);
    func_8016F764(arg0);
}

void func_8016F764(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x200) - 1;
    AF(arg0, s32, 0x200) = temp_v0;
    if (temp_v0 == -1) {
        NextPlayerActionHandler(arg0);
    }
}

void func_8016F798(u8 *arg0) {
    D_80190968[AF(arg0, u8, 0x216)]();
}

void func_8016F7D4(s32 arg0, s32 arg1, s32 arg2) {
    BumpSub2Copy(arg0, arg1, arg2);
    func_8016F804(arg0);
}

void func_8016F804(s32 arg0) {
    if (AF(arg0, u8, 0x1C2) != 0) {
        AF(arg0, u8, 0x1C2) = 0U;
        NextPlayerActionHandler(arg0);
    }
}

void func_8016F834(u8 *arg0) {
    D_80190970[AF(arg0, u8, 0x216)]();
}

void func_8016F870(s32 arg0) {
    TakeActionArgs(arg0, 2);
    BumpSub2Copy(arg0);
    func_8016F8AC(arg0);
}

s32 func_8016F8AC(s32 arg0) {
    PlaceObjAt(arg0, (s32) &g_ActionArgs);
    return NextPlayerActionHandler(arg0);
}

void func_8016F8E4(u8 *arg0) {
    D_80190978[AF(arg0, u8, 0x216)]();
}

void func_8016F920(s32 arg0) {
    TakeActionArgs(arg0, 2);
    BumpSub2Copy(arg0);
    func_8016F95C(arg0);
}

extern s32 StepToward();

void func_8016F95C(s32 arg0) {
    s32 var_v0;
    u16 *p = &D_8011F73E;

    if (*p == 0) {
        var_v0 = StepToward(arg0, (s32) ((u8 *) p - 6));
    } else {
        var_v0 = StepTowardSpeed(arg0, (s32) ((u8 *) p - 6), *p & 0xFF);
    }
    if (var_v0 != 0) {
        NextPlayerActionHandler(arg0);
    }
}

void func_8016F9C4(u8 *arg0) {
    D_80190980[AF(arg0, u8, 0x216)]();
}

extern void func_80171B44();
extern s32 func_8016FA44();

void func_8016FA00(s32 arg0) {
    TakeActionArgs(arg0, 1);
    func_80171B44(arg0);
    BumpSub2Copy(arg0);
    func_8016FA44(arg0);
}

s32 func_8016FA44(s32 arg0) {
    s32 var_v0;

    var_v0 = func_80171C64(arg0, (s32) (*(u8 *)&g_ActionArgs));
    if (var_v0 != 0) {
        var_v0 = NextPlayerActionHandler(arg0);
    }
    return var_v0;
}

void func_8016FA84(u8 *arg0) {
    D_80190988[AF(arg0, u8, 0x216)]();
}

void func_8016FAC0(u8 *arg0) {
    AF(arg0, s16, 0x136) = 2;
    AF(arg0, u16, 0x132) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x12);
    TakeActionArgs((s32) arg0, 2);
    BumpSub2Copy((s32) arg0);
    func_8016FB10((s32) arg0);
}

void func_8016FB10(s32 arg0) {
    if (StepToward(arg0, (s32) &g_ActionArgs) != 0) {
        BumpSub2Copy(arg0);
    }
}

void func_8016FB50(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0x136) = 0;
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x132);
    NextPlayerActionHandler((s32) arg0, arg1);
}

void func_8016FB7C(u8 *arg0) {
    D_80190994[AF(arg0, u8, 0x216)]();
}

extern void func_8016FC24();

void func_8016FBB8(u8 *arg0) {
    AF(arg0, s16, 0x136) = 2;
    AF(arg0, u16, 0x132) = AF(AF(arg0, void *, 0x20), u16, 0x12);
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (AF(AF(arg0, void *, 0x20), u16, 0x12) + 0x800) & 0xFFF;
    TakeActionArgs((s32) arg0, 1);
    func_80171B44((s32) arg0);
    BumpSub2Copy((s32) arg0);
    func_8016FC24((s32) arg0);
}

void func_8016FC24(s32 arg0) {
    if (AutoWalkFrames(arg0, (s32) (*(u8 *)&g_ActionArgs)) != 0) {
        BumpSub2Copy(arg0);
    }
}

void func_8016FC64(u8 *arg0, s32 arg1) {
    AF(arg0, s16, 0x136) = 0;
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x132);
    NextPlayerActionHandler((s32) arg0, arg1);
}

void func_8016FC90(u8 *arg0) {
    D_801909A0[AF(arg0, u8, 0x216)]();
}

void func_8016FCCC(s32 arg0) {
    TakeActionArgs(arg0, 1);
    BumpSub2Copy(arg0);
    func_8016FD08(arg0);
}

void func_8016FD08(s32 arg0) {
    s32 *p;

    if (PlayerEvent01() != 0) {
        ClearObjPush(arg0);
        AF(arg0, u16, 0xAC) |= 0x40;
        AF(arg0, u16, 0xAA) |= 0x40;
        p = &g_ActionArgs;
        if (--*p == 0) {
            BumpSub2Copy(arg0);
        }
    }
}

void func_8016FD7C(s32 arg0) {
    if (PlayerEvent01() != 0) {
        NextPlayerActionHandler(arg0);
    }
}

void func_8016FDB4(u8 *arg0) {
    D_801909AC[AF(arg0, u8, 0x216)]();
}

void func_8016FDF0(s32 arg0) {
    TakeActionArgs(arg0, 2);
    BumpSub2Copy(arg0);
    func_8016FE2C(arg0);
}

void func_8016FE2C(u8 *arg0) {
    if (PlayerEvent01(arg0) != 0) {
        AF(arg0, u16, 0xAC) |= 0x40;
        AF(arg0, u16, 0xAA) |= 0x40;
        BumpSub2Copy(arg0);
    }
}

void func_8016FE78(u8 *arg0) {
    AF(arg0, u16, 0xAA) = (u16) (AF(arg0, u16, 0xAA) | 0x40);
    if (D_8011F73E != 0) {
        SetFallSpeed((s32) arg0, D_8011F73E << 0x10);
    }
    BumpSub2Copy((s32) arg0);
}

void func_8016FED0(s32 arg0) {
    if (PlayerEvent02(arg0) != 0) {
        AF(arg0, u16, 0xAA) = (u16) (AF(arg0, u16, 0xAA) | 0x40);
    }
    if (StepToward(arg0, (s32) &g_ActionArgs) != 0) {
        NextPlayerActionHandler(arg0);
    }
}

void func_8016FF30(u8 *arg0) {
    D_801909BC[AF(arg0, u8, 0x216)]();
}

void func_8016FF6C(s32 arg0) {
    TakeActionArgs(arg0, 2);
    BumpSub2Copy(arg0);
    func_8016FFA8(arg0);
}

void func_8016FFA8(s32 arg0) {
    AF(arg0, u16, 0xAC) = (u16) (AF(arg0, u16, 0xAC) | 0x40);
    AF(arg0, u16, 0xAA) = (u16) (AF(arg0, u16, 0xAA) | 0x40);
    BumpSub2Copy(arg0);
}

void func_8016FFDC(u8 *arg0) {
    D_801909CC[AF(arg0, u8, 0x216)]();
}

void func_80170018(s32 arg0) {
    TakeActionArgs(arg0, 1);
    AF(arg0, s32, 0x198) = OpenMessage(g_ActionArgs);
    BumpSub2Copy(arg0);
    func_80170068(arg0);
}

s32 func_80170068(s32 arg0) {
    s32 var_v0;

    var_v0 = GetMessageAnswer(AF(arg0, s32, 0x198));
    if (var_v0 != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        var_v0 = NextPlayerActionHandler(arg0);
    }
    return var_v0;
}

void func_801700B8(s32 arg0) {
    TakeActionArgs(arg0, 1);
    AF(arg0, s32, 0x198) = OpenMessage(g_ActionArgs);
    NextPlayerActionHandler(arg0);
}

void func_80170100(u8 *arg0) {
    if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
        CloseMessage(AF(arg0, s32, 0x198));
        AF(arg0, s32, 0x198) = 0;
        NextPlayerActionHandler((s32) arg0);
    }
}

void func_80170150(u8 *arg0) {
    D_801909D4[AF(arg0, u8, 0x216)]();
}

void func_8017018C(s32 arg0) {
    TakeActionArgs(arg0, 1);
    BumpSub2Copy(arg0);
    func_801701C8(arg0);
}

s32 func_801701C8(s32 arg0) {
    s16 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v0_2 = EaseAngleStep((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), (s32) (*(s16 *)&g_ActionArgs), 4);
    if ((temp_v0_2 << 0x10) == 0) {
        NextPlayerActionHandler(arg0);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    temp_v0 = ((u16) AF(temp_v1, s16, 0x12) + temp_v0_2) & 0xFFF;
    AF(temp_v1, s16, 0x12) = temp_v0;
    return (s32) temp_v0;
}

void func_80170240(u8 *arg0) {
    D_801909DC[AF(arg0, u8, 0x216)]();
}

void func_8017027C(s32 arg0) {
    TakeActionArgs(arg0, 2);
    BumpSub2Copy(arg0);
    func_801702B8(arg0);
}

s32 func_801702B8(s32 arg0) {
    s32 var_v0;

    var_v0 = ActionHelper_1AB0(arg0, (s32) &g_ActionArgs) << 0x10;
    if (var_v0 == 0) {
        var_v0 = NextPlayerActionHandler(arg0);
    }
    return var_v0;
}

void func_801702FC(u8 *arg0) {
    D_801909E4[AF(arg0, u8, 0x216)]();
}

void func_80170338(s32 arg0) {
    TakeActionArgs(arg0, 1);
    BumpSub2Copy(arg0);
    func_80170374(arg0);
}

void func_80170374(s32 arg0) {
    s16 sp[3];
    u8 *temp_v0;

    temp_v0 = (u8 *) FindActorByKindAny(arg0, g_ActionArgs);
    sp[0] = AF(temp_v0, s16, 6);
    sp[1] = AF(temp_v0, s16, 0xA);
    sp[2] = AF(temp_v0, s16, 0xE);
    if ((ActionHelper_1AB0(arg0, sp) << 0x10) == 0) {
        NextPlayerActionHandler(arg0);
    }
}

void func_801703E0(u8 *arg0) {
    D_801909EC[AF(arg0, u8, 0x216)]();
}

void func_8017041C(s32 arg0, s32 arg1, s32 arg2) {
    BumpSub2Copy(arg0, arg1, arg2);
    func_8017044C(arg0);
}

void func_8017044C(s32 arg0) {
    s16 sp[3];

    sp[0] = g_ActiveCamera[15];
    sp[1] = g_ActiveCamera[16];
    sp[2] = g_ActiveCamera[17];
    if ((ActionHelper_1AB0(arg0, sp) << 0x10) == 0) {
        NextPlayerActionHandler(arg0);
    }
}

void func_801704B0(u8 *arg0) {
    D_801909F4[AF(arg0, u8, 0x216)]();
}

void func_801704EC(s32 arg0, s32 arg1, s32 arg2) {
    BumpSub2Copy(arg0, arg1, arg2);
    func_8017051C(arg0);
}

s32 func_8017051C(s32 arg0) {
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) D_800AE6DC;
    return NextPlayerActionHandler(arg0);
}

void func_80170548(u8 *arg0) {
    D_801909FC[AF(arg0, u8, 0x216)]();
}

void func_80170584(s32 arg0) {
    TakeActionArgs(arg0, 1);
    BumpSub2Copy(arg0);
    func_801705C0(arg0);
}

void func_801705C0(s32 arg0) {
    ((void (*)())g_ActionArgs)();
    NextPlayerActionHandler(arg0);
}

void func_801705F8(u8 *arg0) {
    D_80190A04[AF(arg0, u8, 0x216)]();
}

void func_80170634(s32 arg0) {
    TakeActionArgs(arg0, 1);
    BumpSub2Copy(arg0);
    func_80170670(arg0);
}

s32 func_80170670(s32 arg0) {
    BlendCameraThen(g_ActionArgs);
    return NextPlayerActionHandler(arg0);
}

void func_801706AC(u8 *arg0) {
    D_80190A0C[AF(arg0, u8, 0x216)]();
}

void func_801706E8(s32 arg0, s32 arg1, s32 arg2) {
    BumpSub2Copy(arg0, arg1, arg2);
    func_80170718(arg0);
}

s32 func_80170718(s32 arg0) {
    ClearCameraUpdate();
    return NextPlayerActionHandler(arg0);
}

void func_80170748(u8 *arg0) {
    D_80190A14[AF(arg0, u8, 0x216)]();
}

extern s32 func_801707D4();

void func_80170784(s32 arg0) {
    TakeActionArgs(arg0, 1);
    ((void (*)())g_ActionArgs)();
    BumpSub2Copy(arg0);
    func_801707D4(arg0);
}

s32 func_801707D4(s32 arg0) {
    s32 var_v0;

    var_v0 = CameraPanDone() << 0x10;
    if (var_v0 != 0) {
        var_v0 = NextPlayerActionHandler(arg0);
    }
    return var_v0;
}

void func_80170810(u8 *arg0) {
    D_80190A1C[AF(arg0, u8, 0x216)]();
}

extern u8 D_800D5DA8;
extern void EndScene();
extern s32 func_801708B0();

void func_8017084C(s32 arg0) {
    TakeActionArgs(arg0, 1);
    EndScene(arg0);
    SetPlayerMotion(arg0, (s32) &D_800D5DA8);
    SpawnBurst22(arg0, -0x40, 0x40);
    BumpSub2Copy(arg0);
    func_801708B0(arg0);
}

s32 func_801708B0(s32 arg0) {
    u16 sp10[3];
    s32 sp18;
    void *temp_v0;

    func_801484B0((s32) sp10, (s32) &sp18);
    ObjLocalToWorld(arg0, (s32) sp10, (s32) sp10);
    temp_v0 = FindActorByKindAny(arg0, g_ActionArgs);
    AF(temp_v0, u16, 6) = sp10[0];
    AF(temp_v0, u16, 0xA) = sp10[1];
    AF(temp_v0, u16, 0xE) = sp10[2];
    return NextPlayerActionHandler(arg0);
}

s32 SetPlayerActionHandler(s32 arg0);
void func_80170AD8(u8 *arg0);

void func_80170928(void) {
    g_ActionArgs = &D_800D5A34;
    SetPlayerActionHandler((s32) func_80170AD8);
    func_80170B48((s32) &g_Player);
}

void func_80170970(void) {
    g_ActionArgs = &D_800D59EC;
    SetPlayerActionHandler((s32) func_80170AD8);
    func_80170B48((s32) &g_Player);
}

void func_801709B8(void) {
    g_ActionArgs = &D_800D599C;
    SetPlayerActionHandler((s32) func_80170AD8);
    func_80170B48((s32) &g_Player);
}

void func_80170A00(void) {
    g_ActionArgs = &D_800D5934;
    SetPlayerActionHandler((s32) func_80170AD8);
    func_80170B48((s32) &g_Player);
}

extern u8 D_800D5DA8;

void func_80170A48(void) {
    g_ActionArgs = &D_800D5DA8;
    SetPlayerActionHandler((s32) func_80170AD8);
    func_80170B48((s32) &g_Player);
}

extern u8 D_800D5DC0;

void func_80170A90(void) {
    g_ActionArgs = &D_800D5DC0;
    SetPlayerActionHandler((s32) func_80170AD8);
    func_80170B48((s32) &g_Player);
}

void func_80170AD8(u8 *arg0) {
    D_80190A24[AF(arg0, u8, 0x216)]();
}

void func_80170B14(s32 arg0) {
    TakeActionArgs(arg0, 1);
    func_80170B48(arg0);
}

extern s32 func_80170B90();

void func_80170B48(s32 arg0) {
    EndScene(arg0);
    SetPlayerMotion(arg0, g_ActionArgs);
    BumpSub2Copy(arg0);
    func_80170B90(arg0);
}

s32 func_80170B90(s32 arg0) {
    s32 var_v0;

    var_v0 = AF(arg0, u16, 0xB8) & 0x8000;
    if (var_v0 != 0) {
        BeginScene(arg0);
        var_v0 = NextPlayerActionHandler(arg0);
    }
    return var_v0;
}

void func_80170BD8(u8 *arg0) {
    D_80190A2C[AF(arg0, u8, 0x216)]();
}

void func_80170C14(s32 arg0, s32 arg1, s32 arg2) {
    BumpSub2Copy(arg0, arg1, arg2);
    func_80170C44(arg0);
}

s32 func_80170C44(s32 arg0) {
    BeginScene(arg0);
    return NextPlayerActionHandler(arg0);
}

void func_80170C74(u8 *arg0) {
    D_80190A34[AF(arg0, u8, 0x215)]();
}

void func_80170CB0(s32 arg0) {
    TakeActionArgs(arg0, 3);
    AF(arg0, u8, 0x217) = 0;
    BumpSub1Copy(arg0);
    func_80170CF0(arg0);
}

void func_80170CF0(s32 arg0) {
    ((void (*)())g_ActionArgs)(arg0);
    switch (AF(arg0, u8, 0x217)) {
    case 0:
        break;
    case 1:
        SwitchPlayerActionScript(D_8011F73C);
        break;
    case 2:
        SwitchPlayerActionScript(D_8011F740);
        break;
    }
}

void func_80170D68(u8 *arg0) {
    D_80190A3C[AF(arg0, u8, 0x216)]();
}

void func_80170DA4(s32 arg0) {
    TakeActionArgs(arg0, 3);
    BumpSub2Copy(arg0);
    func_80170DE0(arg0);
}

s32 func_80170DE0(s32 arg0) {
    s32 var_a0;

    if (GetFlag(g_ActionArgs) & 0xFF) {
        var_a0 = D_8011F740;
    } else {
        var_a0 = D_8011F73C;
    }
    return SwitchPlayerActionScript(var_a0);
}

void func_80170E34(u8 *arg0) {
    D_80190A44[AF(arg0, u8, 0x216)]();
}

void func_80170E70(s32 arg0) {
    TakeActionArgs(arg0, 3);
    BumpSub2Copy(arg0);
    func_80170EAC(arg0);
}

s32 func_80170EAC(s32 arg0) {
    s32 var_a0;

    if (func_800D0F8C((s32) (*(u8 *)&g_ActionArgs)) != 0) {
        var_a0 = D_8011F73C;
    } else {
        var_a0 = D_8011F740;
    }
    return SwitchPlayerActionScript(var_a0);
}

void func_80170EFC(u8 *arg0) {
    D_80190A4C[AF(arg0, u8, 0x216)]();
}

void func_80170F38(s32 arg0) {
    TakeActionArgs(arg0, 1);
    BumpSub2Copy(arg0);
    func_80170F74(arg0);
}

s32 func_80170F74(s32 arg0) {
    SetFlag(g_ActionArgs, 1);
    return NextPlayerActionHandler(arg0);
}

void func_80170FB0(u8 *arg0) {
    D_80190A54[AF(arg0, u8, 0x216)]();
}

void func_80170FEC(s32 arg0) {
    TakeActionArgs(arg0, 1);
    BumpSub2Copy(arg0);
    func_80171028(arg0);
}

s32 func_80171028(s32 arg0) {
    SetFlag(g_ActionArgs, 0);
    return NextPlayerActionHandler(arg0);
}

void func_80171064(u8 *arg0) {
    D_80190A5C[AF(arg0, u8, 0x216)]();
}

void func_801710A0(s32 arg0) {
    TakeActionArgs(arg0, 1);
    BumpSub2Copy(arg0);
    func_801710DC(arg0);
}

s32 func_801710DC(s32 arg0) {
    PlaySoundId((s32) (*(u16 *)&g_ActionArgs), (s32) D_8011F73A);
    return NextPlayerActionHandler(arg0);
}

void func_80171120(u8 *arg0) {
    D_80190A64[AF(arg0, u8, 0x216)]();
}

void func_8017115C(s32 arg0, s32 arg1, s32 arg2) {
    BumpSub2Copy(arg0, arg1, arg2);
    func_8017118C(arg0);
}

s32 func_8017118C(s32 arg0) {
    func_80142454(-0x80);
    return NextPlayerActionHandler(arg0);
}

void func_801711C0(u8 *arg0) {
    D_80190A6C[AF(arg0, u8, 0x216)]();
}

void func_801711FC(s32 arg0) {
    TakeActionArgs(arg0, 1);
    BumpSub2Copy(arg0);
    func_80171238(arg0);
}

s32 func_80171238(s32 arg0) {
    return SwitchPlayerActionScript(g_ActionArgs);
}

void func_80171260(u8 *arg0) {
    D_80190A74[AF(arg0, u8, 0x216)]();
}

extern u8 g_Lights;
extern u8 D_800A5E98;
extern u8 D_800A5EA8;
extern void func_80171384();

void func_8017129C(s32 arg0) {
    s32 p;

    TakeActionArgs(arg0, 1);
    p = g_ActionArgs;
    ((VECTOR *)p)[0] = *(VECTOR *)&g_Lights;
    ((VECTOR *)p)[1] = *(VECTOR *)&D_800A5E98;
    ((VECTOR *)p)[2] = *(VECTOR *)&D_800A5EA8;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x20;
    AF(AF(arg0, s32, 0x20), s32, 0x80) = p;
    BumpSub2Copy(arg0);
    func_80171384(arg0);
}

extern s32 EaseValueFrac();

void func_80171384(s32 arg0) {
    u8 temp_a1;
    u8 temp_v0;
    void *temp_s0;

    temp_s0 = g_ActionArgs;
    AF(temp_s0, u8, 0xC) = EaseValueFrac((s32) AF(temp_s0, u8, 0xC), 0, 0xA, 1);
    AF(temp_s0, u8, 0xD) = EaseValueFrac((s32) AF(temp_s0, u8, 0xD), 0, 0xA, 1);
    AF(temp_s0, u8, 0xE) = EaseValueFrac((s32) AF(temp_s0, u8, 0xE), 0, 0xA, 1);
    AF(temp_s0, u8, 0x1C) = EaseValueFrac((s32) AF(temp_s0, u8, 0x1C), 0, 0xA, 1);
    AF(temp_s0, u8, 0x1D) = EaseValueFrac((s32) AF(temp_s0, u8, 0x1D), 0, 0xA, 1);
    AF(temp_s0, u8, 0x1E) = EaseValueFrac((s32) AF(temp_s0, u8, 0x1E), 0, 0xA, 1);
    AF(temp_s0, u8, 0x2C) = EaseValueFrac((s32) AF(temp_s0, u8, 0x2C), 0, 0xA, 1);
    AF(temp_s0, u8, 0x2D) = EaseValueFrac((s32) AF(temp_s0, u8, 0x2D), 0, 0xA, 1);
    temp_v0 = EaseValueFrac((s32) AF(temp_s0, u8, 0x2E), 0, 0xA, 1);
    AF(temp_s0, u8, 0x2E) = temp_v0;
    temp_a1 = AF(temp_s0, u8, 0x2D);
    if ((AF(temp_s0, u8, 0xC) + AF(temp_s0, u8, 0xD) + AF(temp_s0, u8, 0xE) + AF(temp_s0, u8, 0x1C) + AF(temp_s0, u8, 0x1D) + AF(temp_s0, u8, 0x1E) + AF(temp_s0, u8, 0x2C) + temp_a1 + (temp_v0 & 0xFF)) == 0) {
        NextPlayerActionHandler(arg0, (s32) temp_a1);
    }
}

void func_801714E4(u8 *arg0) {
    D_80190A7C[AF(arg0, u8, 0x216)]();
}

extern u8 g_Lights;
extern u8 D_800A5E98;
extern u8 D_800A5EA8;
extern s32 func_8017162C();

void func_80171520(s32 arg0) {
    s32 p;

    TakeActionArgs(arg0, 1);
    p = g_ActionArgs;
    AF(p, VECTOR, 0) = *(VECTOR *)&g_Lights;
    AF(p, VECTOR, 0x10) = *(VECTOR *)&D_800A5E98;
    AF(p, VECTOR, 0x20) = *(VECTOR *)&D_800A5EA8;
    AF(p, u8, 0xE) = 0;
    AF(p, u8, 0xD) = 0;
    AF(p, u8, 0xC) = 0;
    AF(p, u8, 0x1E) = 0;
    AF(p, u8, 0x1D) = 0;
    AF(p, u8, 0x1C) = 0;
    AF(p, u8, 0x2E) = 0;
    AF(p, u8, 0x2D) = 0;
    AF(p, u8, 0x2C) = 0;
    AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x20;
    AF(AF(arg0, s32, 0x20), s32, 0x80) = p;
    BumpSub2Copy(arg0);
    func_8017162C(arg0);
}

s32 func_8017162C(s32 arg0) {
    s32 sp10;
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = g_ActionArgs;
    sp10 = 0;
    func_801716AC(0, temp_s0, (s32) &sp10);
    func_801716AC(1, temp_s0, (s32) &sp10);
    func_801716AC(2, temp_s0, (s32) &sp10);
    var_v0 = sp10;
    if (var_v0 == 0) {
        var_v0 = NextPlayerActionHandler(arg0);
    }
    return var_v0;
}

extern u8 D_800A5E94;
extern u8 D_800A5E95;
extern u8 D_800A5E96;
extern s32 EaseValueFracStep();

void func_801716AC(s32 arg0, s32 arg1, s32 *arg2) {
    s32 off;
    u8 *p;
    s32 r;

    off = arg0 * 16;
    p = (u8 *)(off + arg1);
    r = (s16)EaseValueFracStep(AF(p, u8, 0xC), (&D_800A5E94)[off], 0xA, 1);
    *arg2 += r;
    AF(p, u8, 0xC) += r;
    r = (s16)EaseValueFracStep(AF(p, u8, 0xD), (&D_800A5E95)[off], 0xA, 1);
    *arg2 += r;
    AF(p, u8, 0xD) += r;
    r = (s16)EaseValueFracStep(AF(p, u8, 0xE), (&D_800A5E96)[off], 0xA, 1);
    *arg2 += r;
    AF(p, u8, 0xE) += r;
}

void func_801717A0(s32 arg0) {
    s32 temp_v0;

    TakeActionArgs(arg0, 1);
    temp_v0 = func_800D0F8C((s32) (*(u8 *)&g_ActionArgs));
    if (temp_v0 != 0) {
        func_800D0FE0(temp_v0);
    }
    NextPlayerActionHandler(arg0);
}

void func_801717F4(s32 arg0) {
    func_8013E588();
    NextPlayerActionHandler(arg0);
}

void func_80171824(s32 arg0) {
    func_80175414();
    NextPlayerActionHandler(arg0);
}

void func_80171854(s32 arg0) {
    func_80175454();
    NextPlayerActionHandler(arg0);
}

void func_80171884(s32 arg0, s32 arg1) {
    NextPlayerActionHandler((s32) &g_Player, arg1);
}

s32 SwitchPlayerActionScript(s32 *arg0) {
    g_PlayerActionScript = (s32) arg0;
    D_80126D6C = 0;
    g_PlayerAction = *arg0 | (g_PlayerAction & 0x7F000000);
    NextPhase(&g_Player);
}

s32 SetPlayerActionHandler(s32 arg0) {
    s32 temp_v0;

    temp_v0 = g_PlayerAction & 0x7F000000;
    g_PlayerAction = arg0 | temp_v0;
    return temp_v0;
}

s32 NextPlayerActionHandler(s32 arg0, s32 arg1) {
    AF(arg0, s32, 0x1F8) = (s32) (AF(arg0, s32 *, 0x1FC)[AF(arg0, u8, 0x214)] | (AF(arg0, s32, 0x1F8) & 0x7F000000));
    NextPhase(arg0);
}

void SetPhaseCopy(s32 arg0, s32 arg1) {
    AF(arg0, u8, 0x214) = (s8) arg1;
    AF(arg0, u8, 0x215) = 0;
    AF(arg0, u8, 0x216) = 0;
}

void BumpSub1Copy(s32 arg0, s32 arg1) {
    AF(arg0, u8, 0x216) = 0;
    AF(arg0, u8, 0x215) = (u8) (AF(arg0, u8, 0x215) + 1);
}

void BumpSub2Copy(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, u8, 0x216) = (u8) (AF(arg0, u8, 0x216) + 1);
}

void TakeActionArgs(s32 arg0, s32 arg1) {
    u32 i;

    for (i = 0; i < arg1; i++) {
        *(s32 *)((u8 *)&g_ActionArgs + (i << 2)) = AF(arg0, s32 *, 0x1FC)[AF(arg0, u8, 0x214) + i];
    }
    AF(arg0, u8, 0x214) += i;
}

void func_80171A04(u8 *arg0) {
    AF(arg0, u8, 0x217) = 1;
}

void func_80171A10(u8 *arg0) {
    AF(arg0, u8, 0x217) = 2;
}

void NextPhase(s32 arg0) {
    AF(arg0, u8, 0x215) = 0;
    AF(arg0, u8, 0x216) = 0;
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void SetPhase(s32 arg0, s32 arg1) {
    AF(arg0, u8, 0x214) = (s8) arg1;
    AF(arg0, u8, 0x215) = 0;
    AF(arg0, u8, 0x216) = 0;
}

void BumpSub1(u8 *arg0) {
    AF(arg0, u8, 0x216) = 0;
    AF(arg0, u8, 0x215) = (u8) (AF(arg0, u8, 0x215) + 1);
}

void BumpSub2(u8 *arg0) {
    AF(arg0, u8, 0x216) = (u8) (AF(arg0, u8, 0x216) + 1);
}

void DropSub2(u8 *arg0) {
    AF(arg0, u8, 0x216) = (u8) (AF(arg0, u8, 0x216) - 1);
}

void SetActionTimer(u8 *arg0, s32 arg1) {
    AF(arg0, s32, 0x200) = arg1;
}

s32 TickActionTimer(u8 *arg0) {
    s32 t = AF(arg0, s32, 0x200);

    if (t != 0) {
        AF(arg0, s32, 0x200) = --t;
        return t == 0;
    }
    return 1;
}

s32 ActionHelper_1AB0(s32 arg0, s32 arg1) {
    s32 temp;

    temp = EaseAngleStep(AF(AF(arg0, void *, 0x20), s16, 0x12), (s16) GetHeadingToPoint(arg0, arg1), 4);
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (AF(AF(arg0, void *, 0x20), u16, 0x12) + temp) & 0xFFF;
    return (s16) temp;
}

void FacePoint(s32 arg0, s32 arg1) {
    AF(AF(arg0, void *, 0x20), s16, 0x12) = GetHeadingToPoint(arg0, arg1);
}

void func_80171B44(s32 arg0, s32 arg1) {
    AF(arg0, u8, 0x20C) = 0;
}

s32 AutoWalkFrames(u8 *arg0, s32 arg1) {
    s32 *d = g_ActiveCamera;
    s32 a;
    u8 n = arg1;

    AF(arg0, u8, 0xA9) = 0x41;
    a = (ratan2(AF(d, s32, 0x68) - AF(d, s32, 0x5C), AF(d, s32, 0x70) - AF(d, s32, 0x64)) + 0x800) & 0xFFF;
    switch (((AF(AF(arg0, void *, 0x20), s16, 0x12) - a + 0x100) & 0xE00) / 512) {
    case 0: AF(arg0, u16, 0xAA) = 0x1000; break;
    case 1: AF(arg0, u16, 0xAA) = 0x3000; break;
    case 2: AF(arg0, u16, 0xAA) = 0x2000; break;
    case 3: AF(arg0, u16, 0xAA) = 0x6000; break;
    case 4: AF(arg0, u16, 0xAA) = 0x4000; break;
    case 5: AF(arg0, u16, 0xAA) = 0xC000; break;
    case 6: AF(arg0, u16, 0xAA) = 0x8000; break;
    case 7: AF(arg0, u16, 0xAA) = 0x9000; break;
    }
    if (AF(arg0, u8, 0x20C)++ == n) {
        ClearObjPush(arg0);
        return 1;
    }
    return 0;
}

extern void PushStickForward();

s32 func_80171C64(s32 arg0, s32 arg1) {
    u8 temp_v0;

    PushStickForward(arg0, arg1);
    temp_v0 = AF(arg0, u8, 0x20C)++;
    if (temp_v0 == (u8) arg1) {
        ClearObjPush(arg0);
        return 1;
    }
    return 0;
}

extern s32 WalkToPoint();

s32 StepToward(s32 arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = WalkToPoint(arg0, arg1);
    if (SnapToPointIfNearXZ(arg0, arg1) != 0) {
        ClearObjPush(arg0);
    }
    return temp_s0;
}

s32 StepTowardSpeed(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    temp_s0 = WalkToPointSpeed(arg0, arg1, arg2 & 0xFF);
    if (SnapToPointIfNearXZ(arg0, arg1) != 0) {
        ClearObjPush(arg0);
    }
    return temp_s0;
}

extern s32 SnapToPointIfNear();

s32 WalkToPoint(s32 arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = SnapToPointIfNear(arg0, arg1);
    if (temp_s2 != 0) {
        ClearObjPush(arg0);
        return temp_s2;
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = (ratan2(AF(arg1, s16, 0) - AF(arg0, s16, 6), AF(arg1, s16, 4) - AF(arg0, s16, 0xE)) + 0x800) & 0xFFF;
    PushStickForward(arg0);
    return 0;
}

s32 WalkToPointTurning(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s2;
    s32 a;

    temp_s2 = SnapToPointIfNear(arg0, arg1);
    if (temp_s2 != 0) {
        ClearObjPush(arg0);
        return temp_s2;
    }
    a = (ratan2(AF(arg1, s16, 0) - AF(arg0, s16, 6), AF(arg1, s16, 4) - AF(arg0, s16, 0xE)) + 0x800) & 0xFFF;
    if (arg2 != 0) {
        a = (s16)EaseAngleFrac(AF(AF(arg0, u8 *, 0x20), s16, 0x12), a, (s16)arg2, 1);
    }
    AF(AF(arg0, u8 *, 0x20), s16, 0x12) = a;
    PushStickForward(arg0);
    return 0;
}

void PushStickForward(u8 *arg0) {
    s32 *p;
    s32 a;
    s32 hi;
    s32 lo;

    p = g_ActiveCamera;
    AF(arg0, u8, 0xA9) = 0x73;
    a = (ratan2(AF(p, s32, 0x68) - AF(p, s32, 0x5C), AF(p, s32, 0x70) - AF(p, s32, 0x64)) + 0x800) & 0xFFF;
    a = (AF(AF(arg0, u8 *, 0x20), s16, 0x12) - a) & 0xFF8;
    if (a == 0x400 || a == 0xC00) {
        hi = 0x80;
    } else {
        hi = -(rcos(a) << 7) / 4096 + 0x80;
    }
    if (hi < 0) {
        hi = 0;
    }
    if (hi > 0xFF) {
        hi = 0xFF;
    }
    if (a == 0 || a == 0x800) {
        lo = 0x80;
    } else {
        lo = rsin(a) / 32 + 0x80;
    }
    if (lo < 0) {
        lo = 0;
    }
    if (lo > 0xFF) {
        lo = 0xFF;
    }
    AF(arg0, u16, 0xAE) = (lo & 0xFF) | (hi << 8);
}

extern s32 SnapToPointIfNear();
extern void PushStickToward();

s32 WalkToPointSpeed(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = SnapToPointIfNear(arg0, arg1);
    if (temp_v0 != 0) {
        ClearObjPush(arg0);
        return temp_v0;
    }
    AF(AF(arg0, void *, 0x20), s16, 0x12) = (ratan2(AF(arg1, s16, 0) - AF(arg0, s16, 6), AF(arg1, s16, 4) - AF(arg0, s16, 0xE)) + 0x800) & 0xFFF;
    PushStickToward(arg0, arg2 & 0xFF);
    return 0;
}

s32 WalkToPointSpeedTurning(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_v1;
    u8 a2 = arg2;

    temp_v0 = SnapToPointIfNear(arg0, arg1);
    if (temp_v0 != 0) {
        ClearObjPush(arg0);
        return temp_v0;
    }
    var_v1 = (ratan2(AF(arg1, s16, 0) - AF(arg0, s16, 6), AF(arg1, s16, 4) - AF(arg0, s16, 0xE)) + 0x800) & 0xFFF;
    if (arg3 != 0) {
        var_v1 = (s16)EaseAngleFrac(AF(AF(arg0, void *, 0x20), s16, 0x12), var_v1, (s16)arg3, 1);
    }
    AF(AF(arg0, void *, 0x20), s16, 0x12) = var_v1;
    PushStickToward(arg0, a2);
    return 0;
}

void PushStickToward(s32 arg0, s32 arg1) {
    s32 a, c, s;
    u8 b = arg1;
    s32 *p = g_ActiveCamera;

    AF(arg0, u8, 0xA9) = 0x73;
    a = (ratan2(p[0x1A] - p[0x17], p[0x1C] - p[0x19]) + 0x800) & 0xFFF;
    a = (AF(AF(arg0, void *, 0x20), s16, 0x12) - a) & 0xFF8;
    if (a == 0x400 || a == 0xC00) {
        c = 0x80;
    } else {
        s32 h = b; /* MATCH-TRICK: an int-typed copy of the u8 b gives the original sra (b >> 1 is shortened to srl) */
        c = (-(h >> 1) * rcos(a)) / 4096 + 0x80;
    }
    if (c < 0) {
        c = 0;
    }
    if (c >= 0x100) {
        c = 0xFF;
    }
    if (a == 0 || a == 0x800) {
        s = 0x80;
    } else {
        s32 h = b; /* MATCH-TRICK: an int-typed copy of the u8 b gives the original sra (b >> 1 is shortened to srl) */
        s = ((h >> 1) * rsin(a)) / 4096 + 0x80;
    }
    if (s < 0) {
        s = 0;
    }
    if (s >= 0x100) {
        s = 0xFF;
    }
    AF(arg0, s16, 0xAE) = (u8)s | (c << 8);
}

void PressCross(s32 arg0) {
    if (PlayerEvent02(arg0) == 0) {
        AF(arg0, s16, 0xAC) = 0x40;
        AF(arg0, s16, 0xAA) = 0x40;
    }
}

void HoldCross(u8 *arg0) {
    AF(arg0, s16, 0xAA) = 0x40;
}

void PlacePlayer(s32 arg0) {
    PlaceObjAt(&g_Player, arg0);
    AF(g_PlayerModel, u16, 0x12) = AF(arg0, u16, 6);
}

void PlaceObjAt(s32 arg0, s32 arg1) {
    AF(arg0, u16, 6) = AF(arg1, u16, 0);
    AF(arg0, u16, 0xA) = AF(arg1, u16, 2);
    AF(arg0, u16, 0xE) = AF(arg1, u16, 4);
    AF(arg0, SVECTOR, 0x90) = AF(arg1, SVECTOR, 0);
    AF(arg0, SVECTOR, 0x88) = AF(arg0, SVECTOR, 0x90);
}

s32 StartPlayerCarry(s32 arg0, s32 arg1) {
    LeavePlayerKind(arg0, arg1);
    SetPlayerState(arg0, 0xD);
    AF(arg0, s32, 0x178) = arg1;
    return LiftActor(arg0, arg1);
}

void func_80172414(u8 *arg0) {
    if (AF(arg0, u16, 0xB8) & 0x2000) {
        PlayFootstep(arg0, AF(arg0, u16, 0x16E));
    }
    if (AF(arg0, s32, 0x2C) < -0x70000 && !(D_800B99DA & 7)) {
        SpawnEffect2(arg0, 2);
    }
}

extern s32 IsNearPoint();

s32 SnapToPointIfNear(s32 arg0, s32 arg1) {
    if (IsNearPoint(arg0, arg1) != 0) {
        AF(arg0, u16, 6) = AF(arg1, u16, 0);
        AF(arg0, u16, 0xA) = AF(arg1, u16, 2);
        AF(arg0, u16, 0xE) = AF(arg1, u16, 4);
        return 1;
    }
    return 0;
}

extern s32 PosSVecDist();

s32 IsNearPoint(s32 arg0, s32 arg1) {
    return PosSVecDist(arg0 + 4, arg1) < 0x10;
}

extern s32 IsNearPointXZ();

s32 SnapToPointIfNearXZ(s32 arg0, s32 arg1) {
    if (IsNearPointXZ(arg0, arg1) != 0) {
        AF(arg0, u16, 6) = AF(arg1, u16, 0);
        AF(arg0, u16, 0xE) = AF(arg1, u16, 4);
        return 1;
    }
    return 0;
}

extern s32 PosSVecDist();

s32 IsNearPointXZ(s32 arg0, s32 arg1) {
    AF(arg1, u16, 2) = AF(arg0, u16, 0xA);
    return PosSVecDist(arg0 + 4, arg1) < 0x10;
}

void ClearPlayerEvents(Player *arg0) {
    AF(arg0, s32, 0x1F4) = 0;
}

s32 SetPlayerEvent01(Player *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 1;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 SetPlayerEvent02(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 2;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 SetPlayerEvent04(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 4;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 SetPlayerEvent08(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 8;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 SetPlayerEvent10(Player *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 0x10;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 SetPlayerEvent20(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 0x20;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 SetPlayerEvent40(Player *arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 0x40;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

void SetPlayerEvent80(u8 *arg0) {
    AF(arg0, s32, 0x1F4) = (s32) (AF(arg0, s32, 0x1F4) | 0x80);
}

s32 SetPlayerEvent100(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 0x100;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 SetPlayerEvent200(s32 arg0) {
    s32 temp_v0;

    temp_v0 = AF(arg0, s32, 0x1F4) | 0x200;
    AF(arg0, s32, 0x1F4) = temp_v0;
    return temp_v0;
}

s32 PlayerEvent01(arg0)
    s32 arg0;
{
    return AF(arg0, s32, 0x1F4) & 1;
}

s32 PlayerEvent02(s32 arg0) {
    return AF(arg0, s32, 0x1F4) & 2;
}

s32 PlayerEvent04(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 4;
}

s32 PlayerEvent08(s32 arg0) {
    return AF(arg0, s32, 0x1F4) & 8;
}

s32 PlayerEvent10(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 0x10;
}

s32 PlayerEvent20(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 0x20;
}

s32 PlayerEvent40(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 0x40;
}

s32 PlayerEvent80(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 0x80;
}

s32 PlayerEvent100(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 0x100;
}

s32 PlayerEvent200(u8 *arg0) {
    return AF(arg0, s32, 0x1F4) & 0x200;
}

extern s16 D_80126B0C;
extern s32 ClearActionHandler();

s32 ResetActionHandler(Player *arg0) {
    g_ActionHandler = (s32) IdleActionHandler;
    g_EngineReadyFlag = 0;
    D_80126B0C = 0;
    return ClearActionHandler(arg0);
}

void CallActionHandler(void) {
    ((void (*)())g_ActionHandler)();
}

s32 SetIdleActionHandler(void) {
    return SetActionHandler((s32) &IdleActionHandler);
}

void IdleActionHandler(s32 arg0, s32 arg1) {
    ClearActionHandler(arg0, arg1);
}

extern void WalkPlayerToStep();

void WalkPlayerTo(u8 *arg0) {
    *(SVECTOR *)&D_80126B30 = *(SVECTOR *)arg0;
    SetActionHandler((s32) &WalkPlayerToStep);
}

void WalkPlayerToStep(u8 *arg0) {
    D_80190A8C[AF(arg0, u8, 0x214)]();
}

void func_8017280C(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    WalkPlayerToArrive(arg0);
}

s32 WalkPlayerToArrive(s32 arg0) {
    s32 var_v0;

    var_v0 = StepToward(arg0, (s32) &D_80126B30);
    if (var_v0 != 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_8017288C(void) {
}

extern void func_801728E4();

void func_80172894(u8 *arg0) {
    *(SVECTOR *)&D_80126B30 = *(SVECTOR *)arg0;
    SetActionHandler((s32) &func_801728E4);
}

void func_801728E4(u8 *arg0) {
    D_80190A98[AF(arg0, u8, 0x214)]();
}

void func_80172920(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80172958(arg0);
}

s32 func_80172958(s32 arg0) {
    s32 var_v0;

    var_v0 = StepTowardSpeed(arg0, (s32) &D_80126B30, (s32) D_80126B36);
    if (var_v0 != 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_801729A8(void) {
}

s32 func_801729B0(s32 arg0) {
    D_80126B34 = (s16) arg0;
    D_80126B30 = 0;
    D_80126B32 = 0;
    return SetActionHandler((s32) &func_801729F0);
}

void func_801729F0(u8 *arg0) {
    D_80190AA4[AF(arg0, u8, 0x214)]();
}

void func_80172A2C(s32 arg0) {
    BeginScene(arg0);
    AF(arg0, s16, 0x136) = 2;
    AF(arg0, u16, 0x132) = (u16) AF(AF(arg0, void *, 0x20), u16, 0x12);
    ObjLocalToWorld(arg0, (s32) &D_80126B30, (s32) &D_80126B30);
    NextPhase(arg0);
    func_80172A8C(arg0);
}

s32 func_80172A8C(s32 arg0) {
    s32 var_v0;

    var_v0 = StepToward(arg0, (s32) &D_80126B30);
    if (var_v0 != 0) {
        var_v0 = ((s32 (*)())NextPhase)(arg0);
    }
    return var_v0;
}

void func_80172ACC(u8 *arg0) {
    AF(arg0, s16, 0x136) = 0;
    AF(AF(arg0, void *, 0x20), u16, 0x12) = (u16) AF(arg0, u16, 0x132);
    NextPhase((s32) arg0);
    ClearActionHandler((s32) arg0);
}

void func_80172B0C(void) {
}

s32 func_80172B14(s32 arg0) {
    D_80126B32 = (s16) arg0;
    return SetActionHandler((s32) &func_80172B44);
}

void func_80172B44(u8 *arg0) {
    D_80190AB4[AF(arg0, u8, 0x214)]();
}

void func_80172B80(s32 arg0) {
    if (D_801150F8 == 0) {
        BeginScene(arg0);
    }
    NextPhase(arg0);
    func_80172BC8(arg0);
}

s32 func_80172BC8(s32 arg0) {
    s16 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v0_2 = EaseAngleStep((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), (s32) D_80126B32, 4);
    if ((temp_v0_2 << 0x10) == 0) {
        NextPhase(arg0);
        ClearActionHandler(arg0);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    temp_v0 = ((u16) AF(temp_v1, s16, 0x12) + temp_v0_2) & 0xFFF;
    AF(temp_v1, s16, 0x12) = temp_v0;
    return (s32) temp_v0;
}

void func_80172C48(void) {
}

extern void func_80172CA0();

void func_80172C50(u8 *arg0) {
    *(SVECTOR *)&D_80126B30 = *(SVECTOR *)arg0;
    SetActionHandler((s32) &func_80172CA0);
}

void func_80172CA0(u8 *arg0) {
    D_80190AC0[AF(arg0, u8, 0x214)]();
}

void func_80172CDC(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80172D14(arg0);
}

s32 func_80172D14(s32 arg0) {
    s32 var_v0;

    var_v0 = ActionHelper_1AB0(arg0, (s32) &D_80126B30) << 0x10;
    if (var_v0 == 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_80172D60(void) {
}

s32 func_80172D68(s32 arg0) {
    D_80127508 = FindActorByKindAny((s32) &g_Player, arg0);
    return SetActionHandler((s32) &func_80172DAC);
}

void func_80172DAC(u8 *arg0) {
    D_80190ACC[AF(arg0, u8, 0x214)]();
}

void func_80172DE8(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80172E20(arg0);
}

void func_80172E20(s32 arg0) {
    s16 sp[3];

    sp[0] = AF(D_80127508, s16, 6);
    sp[1] = AF(D_80127508, s16, 0xA);
    sp[2] = AF(D_80127508, s16, 0xE);
    if ((ActionHelper_1AB0(arg0, sp) << 0x10) == 0) {
        NextPhase(arg0);
        ClearActionHandler(arg0);
    }
}

void func_80172E8C(void) {
}

s32 func_80172E94(void) {
    StartPlayerMotionAction((s32) &D_800D5A34);
    D_80126B30 = 0;
    return ClearActionHandler((s32) &g_Player);
}

s32 func_80172ED4(void) {
    return StartPlayerMotionAction((s32) &D_800D59EC);
}

s32 StartPlayerMotionAction599C(void) {
    return StartPlayerMotionAction((s32) &D_800D599C);
}

s32 func_80172F24(void) {
    return StartPlayerMotionAction((s32) &D_800D5934);
}

s32 func_80172F4C(void) {
    StartPlayerMotionAction((s32) &D_800D47F4);
    StartFace((s32) &g_Player, 0x13);
    D_80126B30 = 0;
    return ClearActionHandler((s32) &g_Player);
}

s32 EndPlayerMotionAction(void) {
    StartPlayerMotionAction((s32) &D_800D46E4);
    StartFace((s32) &g_Player, 0x11);
    D_80126B30 = 0;
    return ClearActionHandler((s32) &g_Player);
}

s32 func_80172FEC(void) {
    StartPlayerMotionAction((s32) &D_800D5C6C);
    StartFace((s32) &g_Player, 0x11);
    D_80126B30 = 0;
    return ClearActionHandler((s32) &g_Player);
}

s32 StartPlayerMotionAction(s32 arg0) {
    D_80127508 = arg0;
    D_80126B30 = 1;
    return SetActionHandler((s32) &func_80173078);
}

void func_80173078(u8 *arg0) {
    D_80190AD8[AF(arg0, u8, 0x214)]();
}

void func_801730B4(Player *arg0, s32 arg1) {
    EndScene(arg0, arg1);
    RestartPlayerMotion(arg0, D_80127508);
    NextPhase(arg0);
    func_801730FC(arg0);
}

s32 func_801730FC(Player *arg0) {
    s32 var_v0;

    var_v0 = arg0->animStatus & 0x8000;
    if (var_v0 != 0) {
        NextPhase(arg0);
        if (D_80126B30 != 0) {
            BeginScene(arg0);
            SetPlayerMotionIndex(arg0, 0);
        }
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_8017316C(void) {
}

s32 func_80173174(void) {
    return SetActionHandler((s32) &func_8017319C);
}

void func_8017319C(u8 *arg0) {
    D_80190AE4[AF(arg0, u8, 0x214)]();
}

extern u8 D_800D5AA0;
s32 func_80173220(s32 arg0);

void func_801731D8(s32 arg0, s32 arg1) {
    EndScene(arg0, arg1);
    SetPlayerMotion(arg0, (s32) &D_800D5AA0);
    NextPhase(arg0);
    func_80173220(arg0);
}

s32 func_80173220(s32 arg0) {
    s32 var_v0;

    if (AF(arg0, u16, 0xB8) & 0x4000) {
        PlaySe(0x516);
        StartRumbleScript((s32) &D_80190A84);
    }
    var_v0 = AF(arg0, u16, 0xB8) & 0x8000;
    if (var_v0 != 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_80173294(void) {
}

s32 func_8017329C(void) {
    return SetActionHandler((s32) &func_801732C4);
}

void func_801732C4(s32 arg0) {
    SetPlayerActionFlag02();
    ClearActionHandler(arg0);
}

void func_801732F4(s32 arg0, s32 arg1) {
    SetActionHandler((s32) func_8017331C, arg1);
}

void func_8017331C(s32 arg0) {
    ClearPlayerActionFlag02();
    ClearActionHandler(arg0);
}

s32 func_8017334C(void) {
    return SetActionHandler((s32) &func_80173374);
}

void func_80173374(s32 arg0) {
    SetPlayerActionFlag08();
    ClearActionHandler(arg0);
}

s32 func_801733A4(void) {
    return SetActionHandler((s32) &func_8017331C);
}

void func_801733CC(s32 arg0) {
    ClearPlayerActionFlag08();
    ClearActionHandler(arg0);
}

extern s16 D_80126B3E;

void func_801733FC(s32 arg0, s16 *arg1) {
    func_801734BC(arg0);
    *(SV8 *)&D_80126B38 = *(SV8 *)arg1;
    D_80126B3E = 1;
    D_80126B40 = 1;
}

void func_80173460(s32 arg0, s16 *arg1) {
    func_801734BC(arg0);
    *(SV8 *)&D_80126B38 = *(SV8 *)arg1;
    D_80126B3E = 1;
}

extern s16 D_80126B3E;
extern void func_80173544();

void func_801734BC(s32 arg0) {
    switch (arg0) {
    case 0:
        D_80126B32 = -4;
        break;
    case 1:
        D_80126B32 = -8;
        break;
    case 2:
        D_80126B32 = -0x12;
        break;
    case 3:
        D_80126B32 = -0x18;
        break;
    case 4:
        D_80126B32 = -0x1C;
        break;
    }
    D_80126B3E = 0;
    D_80126B40 = 0;
    SetActionHandler((s32) &func_80173544);
}

void func_80173544(u8 *arg0) {
    D_80190AF0[AF(arg0, u8, 0x214)]();
}

void func_80173580(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_801735B8(arg0);
}

s32 func_801735B8(s32 arg0) {
    AF(arg0, u16, 0xAC) = (u16) (AF(arg0, u16, 0xAC) | 0x40);
    AF(arg0, u16, 0xAA) = (u16) (AF(arg0, u16, 0xAA) | 0x40);
    NextPhase(arg0);
}

void func_801735EC(u8 *arg0) {
    if (D_80126B40 != 0) {
        AF(arg0, s32, 0x44) = (s32) (AF(arg0, s32, 0x44) | 0x40000);
    }
    SetFallSpeed((s32) arg0, D_80126B32 << 0x10);
    NextPhase((s32) arg0);
}

void func_80173648(s32 arg0) {
    s16 *p = &D_80126B3E;

    if (*p != 0) {
        StepToward(arg0, p - 3);
    }
    if (PlayerEvent02(arg0) == 0) {
        NextPhase(arg0);
        ClearActionHandler(arg0);
    }
}

void func_801736A8(void) {
}

extern void func_801736FC();

void func_801736B0(s32 arg0, s32 arg1) {
    D_80127508 = FindActorByKindAnd70((s32) &g_Player, arg0, (s16) arg1);
    SetActionHandler((s32) func_801736FC);
}

void func_801736FC(u8 *arg0) {
    D_80190B04[AF(arg0, u8, 0x214)]();
}

void func_80173738(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80173770(arg0);
}

s32 func_80173770(s32 arg0) {
    StartPlayerCarry(arg0, D_80127508);
    NextPhase(arg0);
    return ClearActionHandler(arg0);
}

void func_801737B0(void) {
}

s32 func_801737B8(s32 arg0) {
    D_80126B30 = (s16) arg0;
    return SetActionHandler((s32) &func_801737E8);
}

void func_801737E8(u8 *arg0) {
    D_80190B10[AF(arg0, u8, 0x214)]();
}

void func_80173824(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_8017385C(arg0);
}

void func_8017385C(s32 arg0) {
    switch (D_80126B30) {
    case 0:
    default:
        AF(arg0, u16, 0xAC) |= 0x80;
        AF(arg0, u16, 0xAA) |= 0x80;
        break;
    case 1:
        AF(arg0, u16, 0xAC) |= 0x10;
        AF(arg0, u16, 0xAA) |= 0x10;
        break;
    }
    NextPhase(arg0);
    ClearActionHandler(arg0);
}

void func_801738D4(void) {
}

s32 func_801738DC(s32 arg0) {
    D_80126B30 = (s16) arg0;
    return SetActionHandler((s32) &func_8017390C);
}

void func_8017390C(u8 *arg0) {
    D_80190B1C[AF(arg0, u8, 0x214)]();
}

void func_80173948(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80173980(arg0);
}

s32 func_80173980(s32 arg0) {
    if (D_80126B30 == 0) {
        AF(arg0, u16, 0xAC) = (u16) (AF(arg0, u16, 0xAC) | 0x80);
        AF(arg0, u16, 0xAA) = (u16) (AF(arg0, u16, 0xAA) | 0x80);
    } else {
        AF(arg0, u16, 0xAC) = (u16) (AF(arg0, u16, 0xAC) | 0x10);
    }
    NextPhase(arg0);
}

void func_801739D8(u8 *arg0) {
    if (!(AF(arg0, s32, 0x44) & 2)) {
        NextPhase((s32) arg0);
        ClearActionHandler((s32) arg0);
    }
}

void func_80173A20(void) {
}

s32 func_80173A28(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_v0;

    temp_v0 = func_80173A60(arg0, arg1, arg2, arg3, arg4);
    D_8012750C = arg5;
    return temp_v0;
}

extern void func_80173B4C();

s32 func_80173A60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Player *p = &g_Player;

    if (arg2 != 0) {
        D_80127508 = FindActorByKindAnd70((s32) p, arg2, (s16) arg3);
    } else {
        D_80127508 = 0;
    }
    *(SVECTOR *)&D_80126B30 = *(SVECTOR *)arg4;
    D_80126B38 = arg0;
    D_80126B3A = arg1;
    D_80126B3C = AF(p->model, s16, 0x12);
    SetActionHandler((s32) &func_80173B4C);
    D_8011F9C8 = 0;
    D_80126938 = 0;
    D_8012750C = 0;
}

void func_80173B4C(u8 *arg0) {
    D_80190B2C[AF(arg0, u8, 0x214)]();
}

void func_80173B88(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80173BC0(arg0);
}

void func_80173BC0(s32 arg0) {
    if ((D_80126B3A != 0) && (D_80126B3A < 0x6F) && (func_800D0EC4() == 0)) {
        if (D_80126B38 & 0x8000) {
            func_8013E588();
            goto block_6;
        }
        ClearActionHandler(arg0);
        D_8011F9C8 = 2;
        SetPhase(arg0, 7);
        return;
    }
block_6:
    NextPhase(arg0);
}

extern s32 StepToward();

void func_80173C64(s32 arg0) {
    if ((*(s16 *) &D_80126B36 == 0) || (StepToward(arg0, (s32) (&D_80126B36 - 6)) != 0)) {
        NextPhase(arg0);
    }
}

extern u8 D_800D5DB8;
extern void EndScene();

void func_80173CB4(Player *arg0) {
    s16 sp[3];

    sp[0] = g_ActiveCamera[15];
    sp[1] = g_ActiveCamera[16];
    sp[2] = g_ActiveCamera[17];
    if ((ActionHelper_1AB0(arg0, sp) << 0x10) == 0) {
        EndScene(arg0);
        switch (*(u8 *)&D_80126B38) {
        case 0:
            SetPlayerMotion(arg0, &D_800D5DA8);
            arg0->actionTimer = 0x20;
            PlaySe(0x843);
            break;
        case 1:
            SetPlayerMotion(arg0, &D_800D5DA8);
            SpawnBurst22(arg0, -0x40, 0x40);
            arg0->actionTimer = 0x80;
            PlaySe(0x6A6);
            break;
        case 2:
            SetPlayerMotion(arg0, &D_800D5DA8);
            SpawnBurst22(arg0, -0x40, 0x40);
            arg0->actionTimer = 0x80;
            PlaySe(0x6A6);
            break;
        case 3:
            SetPlayerMotion(arg0, &D_800D5DB8);
            ClearDisplayFlag20(arg0);
            SpawnBurst22(arg0, -0x40, 0x40);
            arg0->actionTimer = 0x80;
            PlaySe(0x6A6);
            break;
        }
        if (D_8012750C != 0) {
            arg0->unk198 = OpenMessage(D_8012750C);
        } else {
            arg0->unk198 = 0;
        }
        NextPhase(arg0);
    }
}

void func_80173E1C(s32 arg0) {
    s32 sp10[2];
    s32 sp18[2];
    s32 *q = &D_80127508;

    if (*q != 0) {
        func_801484B0((s32) sp10, (s32) sp18);
        ObjLocalToWorld(arg0, (s32) sp10, (s32) sp10);
        SVecToPos((s32) sp10, *q + 4);
    }
    if (AF(arg0, s32, 0x198) != 0) {
        if (GetMessageAnswer(AF(arg0, s32, 0x198)) != 0) {
            CloseMessage(AF(arg0, s32, 0x198));
            AF(arg0, s32, 0x198) = 0;
            SetPlayerMotion(arg0, &D_800D5DC0);
            NextPhase(arg0);
        }
    } else if (--AF(arg0, s32, 0x200) == -1) {
        SetPlayerMotion(arg0, &D_800D5DC0);
        NextPhase(arg0);
    }
}

extern void func_800D128C();
extern s32 func_80174158();
extern void GainStat0();
extern void GainStat1();
extern void GainStat3();
extern void GainStat2();
extern void func_800D0F0C();

void func_80173EF8(s32 arg0) {
    if (AF(arg0, u16, 0xB8) & 0x8000) {
        D_80126938 = 1;
        BeginScene(arg0);
        switch (D_80126B3A) {
        case 0:
            break;
        case 0x70:
            func_800D128C(D_80126B3A & 0xFF, 0);
            break;
        case 0x78:
            SetFlag(0x8A, 1);
            SetProgress(0xC8);
            func_80174158(arg0);
            GainStat0(0x64);
            GainStat1(0x20);
            GainStat3(0x20);
            GainStat2(0x18);
            break;
        case 0x79:
            SetFlag(0x8B, 1);
            SetProgress(0x258);
            func_80174158(arg0);
            GainStat0(0xA0);
            GainStat1(0x28);
            GainStat3(0x40);
            GainStat2(0x30);
            break;
        case 0x7A:
            SetFlag(0x8C, 1);
            SetProgress(0x384);
            func_80174158(arg0);
            GainStat0(0xF0);
            GainStat1(0x30);
            GainStat3(0x60);
            GainStat2(0x48);
            break;
        case 0x7B:
            SetFlag(0x8D, 1);
            SetProgress(0x4B0);
            func_80174158(arg0);
            GainStat0(0x140);
            GainStat1(0x40);
            GainStat3(0x80);
            GainStat2(0x60);
            break;
        case 0x7C:
            if (!(GetFlag(0x11D) & 0xFF)) {
                func_80174188(arg0);
            }
            GainStat0(0x190);
            GainStat1(0x50);
            GainStat3(0xA0);
            GainStat2(0x80);
            func_801741A8(arg0);
            SetFlag(0x8E, 1);
            break;
        default:
            func_800D0F0C(func_800D0EC4(), D_80126B3A);
            break;
        }
        UploadFlagImages(0);
        NextPhase(arg0);
    }
}

s32 func_80174158(s32 arg0) {
    func_80174188(arg0);
    return func_801741A8(arg0);
}

s32 func_80174188(s32 arg0) {
    AddMaxBp(arg0, 0x19);
}

extern s32 FillHp();

s32 func_801741A8(s32 arg0) {
    FillBp();
    FillHp();
    CurePlayerPoison();
    D_80078ED8 = 0xA00000;
    D_80078EA4 = 0xA00000;
}

void func_801741EC(u8 *arg0) {
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = EaseAngleStep((s32) AF(AF(arg0, void *, 0x20), s16, 0x12), (s32) D_80126B3C, 4);
    if ((temp_v0 << 0x10) == 0) {
        D_8011F9C8 = 1;
        NextPhase((s32) arg0);
        ClearActionHandler((s32) arg0);
    }
    temp_v1 = AF(arg0, void *, 0x20);
    AF(temp_v1, s16, 0x12) = (s16) (((u16) AF(temp_v1, s16, 0x12) + temp_v0) & 0xFFF);
}

void func_80174274(void) {
}

s32 func_8017427C(void) {
    return SetActionHandler((s32) &func_801742A4);
}

void func_801742A4(u8 *arg0) {
    D_80190B4C[AF(arg0, u8, 0x214)]();
}

void func_801742E0(s32 arg0) {
    BeginScene(arg0);
    NextPhase(arg0);
    func_80174318(arg0);
}

s32 func_80174318(s32 arg0) {
    func_80142454(-0x80);
    NextPhase(arg0);
    return ClearActionHandler(arg0);
}

void func_80174354(void) {
}

s32 func_8017435C(void) {
    return SetActionHandler((s32) &func_80174384);
}

void func_80174384(u8 *arg0) {
    D_80190B58[AF(arg0, u8, 0x214)]();
}

void func_801743C0(s32 arg0) {
    NextPhase(arg0);
    func_801743F0(arg0);
}

s32 func_801743F0(s32 arg0) {
    s32 var_v0;

    var_v0 = PlayerEvent01();
    if (var_v0 != 0) {
        NextPhase(arg0);
        var_v0 = ClearActionHandler(arg0);
    }
    return var_v0;
}

void func_80174430(void) {
}

s32 func_80174438(s32 arg0) {
    s32 temp_v0;

    temp_v0 = SetActionHandler((s32) &func_80174474);
    D_80127508 = arg0;
    return temp_v0;
}

void func_80174474(u8 *arg0) {
    D_80190B64[AF(arg0, u8, 0x214)]();
}

void func_801744B0(s32 arg0) {
    NextPhase(arg0);
    func_801744E0(arg0);
}

s32 func_801744E0(s32 arg0) {
    func_800D1724(D_80127508);
    NextPhase(arg0);
    return ClearActionHandler(arg0);
}

void func_80174524(void) {
}

s32 func_8017452C(void) {
    return SetActionHandler((s32) &func_80174554);
}

void func_80174554(s32 arg0, s32 arg1) {
    EndScene(arg0, arg1);
    ClearActionHandler(arg0);
}

s32 func_80174584(void) {
    return SetActionHandler((s32) &func_801745AC);
}

void func_801745AC(s32 arg0) {
    BeginScene(arg0);
    ClearActionHandler(arg0);
}

s32 func_801745DC(void) {
    return SetActionHandler((s32) &func_80174604);
}

void func_80174604(void) {
    D_801150F8 = 1;
    func_80174630();
}

s32 func_80174630(void) {
    s32 temp_v0;

    temp_v0 = g_EngineReadyFlag | 1;
    g_EngineReadyFlag = temp_v0;
    return temp_v0;
}

s32 ClearActionHandler(s32 arg0, s32 arg1) {
    s32 temp_v0;

    D_801150F8 = 0;
    temp_v0 = g_EngineReadyFlag | 1;
    g_EngineReadyFlag = temp_v0;
    return temp_v0;
}

void func_80174674(void) {
    g_EngineReadyFlag = 0;
}

void SetActionHandler(arg0, arg1)
    s32 arg0;
    s32 arg1;
{
    D_80126D6C = 0;
    g_ActionHandler = arg0;
    g_EngineReadyFlag = 0;
}

s32 TakePlayerControl(void) {
    StartPlayerAction((s32) &CallActionHandler, 0x01000000);
    SetActionHandler((s32) IdleActionHandler);
}

s32 TakePlayerControlNoStop(void) {
    SetPlayerAction((s32) &CallActionHandler, 0x01000000);
    SetActionHandler((s32) IdleActionHandler);
}

s32 func_80174714(void) {
    s32 var_v0;

    var_v0 = func_800CF8CC();
    if (var_v0 == 0) {
        BeginScene((s32) &g_Player);
        var_v0 = ((s32 (*)())EndPlayerAction)();
    }
    return var_v0;
}

s32 EngineReady(void) {
    return g_EngineReadyFlag;
}

s32 func_80174764(void) {
    return (s32) D_8011F9C8;
}

s16 func_80174774(void) {
    return D_80126938;
}

void StartActionTable(void) {
    StartPlayerAction((s32) &RunActionTable, 0x01000000);
}

void EndActionTable(void) {
    EndPlayerAction();
}

void RunActionTable(Player *arg0) {
    D_80190B70[arg0->phase]();
}

void NextPhaseInline(u8 *arg0) {
    AF(arg0, u8, 0x214) = (u8) (AF(arg0, u8, 0x214) + 1);
}

void func_8017481C(void) {
}

void StartActionTable2(void) {
    StartPlayerAction((s32) &RunActionTable2, 0x01000000);
}

void UnfreezePlayer(void) {
    EndPlayerAction();
    g_PlayerFlags &= 0xFBFFFFFF;
}

void RunActionTable2(Player *arg0) {
    D_80190B78[arg0->phase]();
}

void func_801748C4(u8 *arg0) {
    AF(arg0, s32, 0x44) |= 0x04000000;
    AF(arg0, u8, 0x214)++;
}

void func_801748E4(void) {
}

void func_801748EC(void) {
    g_CameraProjTarget = 0x1F4;
    g_CameraProj = 0x1F4;
    g_CameraDistTarget = 0x384;
    g_CameraAngleTarget = 0x1C7;
    D_8012696A = 0x600;
    D_8012696C = 0;
    g_CameraOfsTarget = 0;
    D_80126978 = 0;
    D_8012697A = 0;
    SetCameraUpdate((s32) &func_8017496C, 0);
}

void func_8017496C(u8 *arg0) {
    D_80190B80[AF(arg0, u8, 4)]();
}

void func_801749A8(void) {
    func_801749C8();
}

void func_801749C8(u8 *o) {
    MATRIX m;
    SVECTOR v;
    SVECTOR r;
    s16 x;
    s16 z;

    AF(o, s32, 8) = (s16)EaseValue(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)EaseValue(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = EaseAngle(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = EaseAngle(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = EaseAngle(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = EaseValue(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = EaseValue(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = EaseValue(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    z = D_80126B66;
    x = g_PlayerX;
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + x;
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + (s16)D_80126B62;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + z;
    RotMatrixZYX(o + 0x18, &m);
    m.t[0] = AF(o, s16, 0x28) + x;
    m.t[1] = AF(o, s16, 0x2A) + (s16)D_80126B62;
    m.t[2] = AF(o, s16, 0x2C) + z;
    v.vx = 0;
    v.vy = 0;
    v.vz = AF(o, s32, 0x10);
    LocalToWorld(&m, &v, &r);
    AF(o, s32, 0x3C) = r.vx;
    AF(o, s32, 0x40) = r.vy;
    AF(o, s32, 0x44) = r.vz;
}

s32 func_80174B6C(void) {
    func_80174BBC((s32) &g_Camera);
    SetCameraUpdate((s32) func_80174BF4, 0);
    SelectMainCamera();
    func_80174BF4((s32) &g_Camera);
}

void func_80174BBC(s32 arg0) {
    AF(arg0, s32, 0xC) = 0x12C;
    AF(arg0, s32, 0x14) = 0x12C;
    AF(arg0, s16, 0x20) = 0x155;
    AF(arg0, s16, 0x22) = 0x800;
    AF(arg0, s16, 0x24) = 0;
    AF(arg0, s16, 0x2E) = 0;
    AF(arg0, s16, 0x30) = -0x28;
    AF(arg0, s16, 0x32) = 0;
    AF(arg0, s32, 0x54) = 0;
}

void func_80174BF4(s32 arg0) {
    AF(arg0, s32, 0xC) = 0x12C;
    AF(arg0, s32, 0x14) = 0x12C;
    AF(arg0, s16, 0x20) = 0x155;
    AF(arg0, s16, 0x22) = 0x800;
    AF(arg0, s16, 0x24) = 0;
    AF(arg0, s16, 0x2E) = 0;
    AF(arg0, s16, 0x30) = -0x28;
    AF(arg0, s16, 0x32) = 0;
    AF(arg0, s32, 0x54) = 0;
    D_80190B84[AF(arg0, u8, 4)]();
}

void func_80174C60(s32 arg0) {
    func_80174CB0(arg0, 0);
}

void func_80174C80(u8 *arg0) {
    u16 temp_a1;

    temp_a1 = (AF(arg0, u16, 0xA0) - 0x16) & 0xFFF;
    AF(arg0, u16, 0xA0) = temp_a1;
    func_80174CB0((s32) arg0, (s32) temp_a1);
}

extern s16 g_CameraFocus[];
extern s16 D_80126942;
extern s16 D_80126944;

void func_80174CB0(u8 *o, s32 arg1) {
    MATRIX m;
    SV8 v;
    SV8 r;

    AF(o, s32, 8) = (s16)EaseValue(AF(o, s16, 8), AF(o, s16, 0xC), 4);
    AF(o, s32, 0x10) = (s16)EaseValue(AF(o, s16, 0x10), AF(o, s16, 0x14), 4);
    AF(o, s16, 0x18) = EaseAngle(AF(o, s16, 0x18), AF(o, s16, 0x20), 4);
    AF(o, s16, 0x1A) = EaseAngle(AF(o, s16, 0x1A), AF(o, s16, 0x22), 4);
    AF(o, s16, 0x1C) = EaseAngle(AF(o, s16, 0x1C), AF(o, s16, 0x24), 4);
    AF(o, s16, 0x28) = EaseValue(AF(o, s16, 0x28), AF(o, s16, 0x2E), 0x10);
    AF(o, s16, 0x2A) = EaseValue(AF(o, s16, 0x2A), AF(o, s16, 0x30), 0x10);
    AF(o, s16, 0x2C) = EaseValue(AF(o, s16, 0x2C), AF(o, s16, 0x32), 0x10);
    AF(o, s32, 0x48) = AF(o, s16, 0x28) + g_CameraFocus[0];
    AF(o, s32, 0x4C) = AF(o, s16, 0x2A) + D_80126942;
    AF(o, s32, 0x50) = AF(o, s16, 0x2C) + D_80126944;
    SetIdentityRot(&m);
    RotateMatrixZ(&m, AF(o, s16, 0x1C));
    RotateMatrixY(&m, (AF(o, s16, 0x1A) + (s16)arg1) & 0xFFF);
    RotateMatrixX(&m, AF(o, s16, 0x18));
    m.t[0] = AF(o, s16, 0x28) + g_CameraFocus[0];
    m.t[1] = AF(o, s16, 0x2A) + D_80126942;
    m.t[2] = AF(o, s16, 0x2C) + D_80126944;
    v.x = 0;
    v.y = 0;
    v.z = AF(o, s32, 0x10);
    LocalToWorld(&m, &v, &r);
    AF(o, s32, 0x3C) = r.x;
    AF(o, s32, 0x40) = r.y;
    AF(o, s32, 0x44) = r.z;
}

void StartCameraPan(s32 arg0) {
    D_8012697C = arg0;
    D_80126980 = 0;
    SetCameraUpdate((s32) &CameraPanUpdate, 0);
}

s32 CameraPanDone(void) {
    return (s32) (s16) (D_80126980 & 0x8000);
}

void StartCameraPanArg(s32 arg0, s16 arg1) {
    D_8012697C = arg0;
    D_80126980 = arg1;
    SetCameraUpdate((s32) &CameraPanUpdate, 1);
}

void CameraPanUpdate(u8 *arg0) {
    D_80190B8C[AF(arg0, u8, 4)]();
}

void func_80174F64(u8 *arg0) {
    u16 var_v0;

    if (SetCameraViewFromList((s32) arg0, AF(arg0, s32, 0x34), AF(arg0, u16, 0x38) & 0x7FFF) != 0) {
        var_v0 = AF(arg0, u16, 0x38) | 0x8000;
    } else {
        var_v0 = AF(arg0, u16, 0x38) + 1;
    }
    AF(arg0, u16, 0x38) = var_v0;
}

void func_80174FBC(u8 *arg0) {
    s32 temp_a2;
    u16 temp_v0;
    u16 var_v0;

    temp_v0 = AF(arg0, u16, 0x38);
    temp_a2 = temp_v0 & 0x7FFF;
    if (temp_a2 != 0) {
        SetCameraViewFromList((s32) arg0, AF(arg0, s32, 0x34), temp_a2);
        var_v0 = AF(arg0, u16, 0x38) - 1;
    } else {
        var_v0 = temp_v0 | 0x8000;
    }
    AF(arg0, u16, 0x38) = var_v0;
}

s32 SetCameraViewFromList(s32 arg0, s32 arg1, s32 arg2) {
    s16 i = arg2;
    u8 *p = (u8 *)arg1 + i * 0xE;

    if (AF(p, s16, 0xC) == 0x7FFF) {
        return 1;
    }
    AF(arg0, s32, 0x3C) = AF(p, s16, 0);
    AF(arg0, s32, 0x40) = AF(p, s16, 2);
    AF(arg0, s32, 0x44) = AF(p, s16, 4);
    AF(arg0, s32, 0x48) = AF(p, s16, 6);
    AF(arg0, s32, 0x4C) = AF(p, s16, 8);
    AF(arg0, s32, 0x50) = AF(p, s16, 0xA);
    AF(arg0, s32, 0x54) = AF(p, s16, 0xC) << 5;
    return 0;
}

s32 func_8017509C(u8 *arg0, s32 arg1x, u8 *arg2, u8 *arg3) {
    s16 arg1 = arg1x;

    arg0 += arg1 * 0xE;
    if (AF(arg0, s16, 0xC) == 0x7FFF) {
        return 1;
    }
    AF(arg2, u16, 0) = AF(arg0, u16, 0);
    AF(arg2, u16, 2) = AF(arg0, u16, 2);
    AF(arg2, u16, 4) = AF(arg0, u16, 4);
    AF(arg3, u16, 0) = AF(arg0, u16, 6);
    AF(arg3, u16, 2) = AF(arg0, u16, 8);
    AF(arg3, u16, 4) = AF(arg0, u16, 0xA);
    return 0;
}

void func_80175114(s32 arg0) {
    SetPlayerState(arg0, 8);
    AF(arg0, s16, 2) = 1;
    ScrollPower_Run(arg0);
}

void func_80175150(Player *arg0) {
    SetPlayerState(arg0, 8);
    ScrollPower_Run(arg0);
}

void ScrollPower_Run(s32 arg0, s32 arg1) {
    u16 temp_v1;

    temp_v1 = AF(arg0, u16, 2);
    if (temp_v1 < 2U) {
        D_80190B94[temp_v1]();
        return;
    }
    ScrollPower_Step();
}

void func_801751D8(s32 arg0, s32 arg1) {
    if (StayedGrounded(arg0, arg1) != 0) {
        ScrollPower_Setup(arg0);
        NextObjState(arg0);
    }
}

extern void (*D_80190B9C[])();

void ScrollPower_Setup(s32 arg0) {
    s32 i = D_80078EC0 - 1;

    D_80190B9C[i](arg0);
    NextObjState(arg0);
}

extern void (*D_80190BB4[])();

void ScrollPower_Step(u8 *arg0) {
    s32 i;
    AF(arg0, s32, 0x44) |= 2;
    i = D_80078EC0 - 1;
    D_80190BB4[i]();
}

void func_801752BC(Player *arg0, s32 arg1) {
    arg0->unkF6 = 0x1000;
    ClearDisplayFlag20(arg0);
    StartFace((s32) arg0, 0x11);
    arg0->status = (s32) ((s32)arg0->status & ~2);
}

extern s8 D_8011F7A9;
extern s8 D_8011F7AE;
extern u16 D_8011F7B4;
extern u16 D_8011F7B6;
extern s16 D_8011F7B8;
extern s16 D_8011F7BA;
extern u16 D_8011F7BC;
extern u16 D_8011F7BE;

void func_80175308(void) {
    struct B98 { s32 w[0x26]; };
    u8 *p = (u8 *)&D_8011F7A8;
    s16 *q;

    *p = 1;
    D_8011F7A9 = 2;
    D_8011F7AE = 0x37;
    D_8011F7B8 = -0x37;
    *(s16 *)&D_8011F7B4 = -0x37;
    D_8011F7BE = 0x37;
    D_8011F7BA = 0x37;
    D_8011F7B6 = 0x37;
    D_8011F7BC = 0x37;
    *(struct B98 *)(p + 0x48) = *(struct B98 *)&g_Status;
    ZeroFill(p + 0xE0, 0x98);
    q = &D_800B9A02;
    func_801757A0(*q);
    DrawSync(0);
    func_801757A0((s16)(*q ^ 1));
}

extern s8 D_8011F7A9;
extern s8 D_8011F7AD;
extern s8 D_8011F7AE;

void func_80175414(void) {
    if (*(u8 *)&D_8011F7A8 == 1) {
        *(u8 *)&D_8011F7A8 = 0;
        D_8011F7AD = 0xA;
        D_8011F7A9 = 0;
        D_8011F7AE = 0x37;
    }
}

void func_80175454(void) {
    u8 *p = (u8 *)&D_8011F7A8;
    if (*p == 0) {
        *p = 1;
        D_8011F7A9 = 0;
        D_8011F7AD = 0xA;
        D_8011F7AE = 0;
    }
}

void func_80175494(void) {
    D_8011F7A8 = 2;
}

extern u8 D_800B9A13;
extern void (*D_80190CF8[])();

void func_801754A8(void) {
    u8 *p;
    s32 r;
    s8 f;

    p = (u8 *)&D_8011F7A8;
    r = GetProgress();
    f = 0;
    if ((D_800B9A13 == 0 && !(g_PlayerFlags & 0x80)) || (u32)(r - 0xA) >= 0x4B0U) {
        f = 1;
    }
    p[9] = f;
    D_80190CF8[*p](p, f);
}

void func_8017553C(u8 *arg0) {
    D_80190D04[AF(arg0, u8, 1)]();
    func_801758FC();
    func_80175820();
    func_801759D8();
}

void func_80175590(u8 *arg0, s32 arg1) {
    u8 n; u8 s;
    n = AF(arg0, u8, 5);
    s = AF(arg0, u8, 6) - n;
    AF(arg0, u8, 6) = s;
    AF(arg0, u8, 5) = n + 0xFF;
    AF(arg0, s16, 0xC) = AF(arg0, s16, 0x10) = -s;
    AF(arg0, s16, 0x14) = AF(arg0, s16, 0xE) = AF(arg0, s16, 0x12) = AF(arg0, s16, 0x16) = AF(arg0, u8, 6);
    func_801757A0((s32) D_800B9A02, arg1);
    if (AF(arg0, u8, 5) == 0) {
        AF(arg0, u8, 8) = 0;
        AF(arg0, u8, 1)++;
    }
}

void func_80175624(u8 *arg0, s32 arg1) {
    func_801757A0((s32) D_800B9A02, arg1);
    AF(arg0, u8, 1) = (u8) (AF(arg0, u8, 1) + 1);
}

void func_80175668(void) {
    func_801757E0((s32) D_800B9A02);
}

void func_80175690(u8 *arg0) {
    D_80190D10[AF(arg0, u8, 1)]();
    func_801758FC();
    func_80175820();
    func_801759D8();
}

void func_801756E4(u8 *arg0) {
    s16 *p;
    u8 n; u8 s;
    n = AF(arg0, u8, 5);
    s = AF(arg0, u8, 6) + n;
    AF(arg0, u8, 6) = s;
    AF(arg0, u8, 5) = n + 0xFF;
    AF(arg0, s16, 0xC) = AF(arg0, s16, 0x10) = -s;
    AF(arg0, s16, 0x14) = AF(arg0, s16, 0xE) = AF(arg0, s16, 0x12) = AF(arg0, s16, 0x16) = AF(arg0, u8, 6);
    p = &D_800B9A02;
    func_80175DA8(*p);
    func_80175AB8(*p);
    func_80176144(*p);
    if (AF(arg0, u8, 5) == 0) {
        AF(arg0, u8, 8) = 0;
        AF(arg0, u8, 1)++;
    }
}

void func_80175798(void) {
}

s32 func_801757A0(arg0, arg1)
s32 arg0;
s32 arg1;
{
    func_80175DA8((s32) (s16) arg0);
    func_80175AB8((s32) (s16) arg0);
    return func_80176144((s32) (s16) arg0);
}

s32 func_801757E0(s32 arg0) {
    func_80176734((s32) (s16) arg0);
    func_80176218((s32) (s16) arg0);
    return func_80176D00((s32) (s16) arg0);
}

extern s32 D_8011F7C8[];
extern s32 D_8011F7C0[];
extern u8 g_FrontOtOrg[];
extern S3 D_800AF634[];

void func_80175820(void) {
    u8 unused[16]; /* MATCH-TRICK: frame pad (the original's leaf frame is 0x10 with nothing stored) */
    s32 *prim;
    s32 tag;
    s32 *ot;
    u8 *q;
    s32 t;
    s32 u;

    /* D_800B9A02 is read as ((u16 *)&D_800B9A08)[-3]: a field of the one object at 0x800B9A00 (splat split it);
       the in-struct read is what makes the stores below force its reloads */
    prim = *(s32 **)(g_FrontOtOrg + ((u16 *)&D_800B9A08)[-3] * 20);
    tag = prim[2];
    prim[2] = (tag & 0xFF000000) | (D_8011F7C8[((u16 *)&D_800B9A08)[-3]] & 0xFFFFFF);
    ot = (s32 *)D_8011F7C0[((u16 *)&D_800B9A08)[-3]];
    *ot = (*ot & 0xFF000000) | (tag & 0xFFFFFF);
    t = D_800AF634[((u16 *)&D_800B9A08)[-3]].p[0];
    q = (u8 *)&D_8011F7A8 + ((u16 *)&D_800B9A08)[-3] * 4;
    u = AF(q, s32, 0x18) - 0x14;
    D_800AF634[((u16 *)&D_800B9A08)[-3]].p[0] = t + ((AF(q, s32, 0x20) - u) >> 2);
}

extern s32 D_8011F7D8[];
extern s32 D_8011F7D0[];

void func_801758FC(void) {
    u8 unused[16]; /* MATCH-TRICK: frame pad (the original's leaf frame is 0x10 with nothing stored) */
    s32 *prim;
    s32 tag;
    s32 *ot;
    u8 *q;
    s32 t;
    s32 u;

    prim = *(s32 **)(g_FrontOtOrg + ((u16 *)&D_800B9A08)[-3] * 20);
    tag = prim[3];
    prim[3] = (tag & 0xFF000000) | (D_8011F7D8[((u16 *)&D_800B9A08)[-3]] & 0xFFFFFF);
    ot = (s32 *)D_8011F7D0[((u16 *)&D_800B9A08)[-3]];
    *ot = (*ot & 0xFF000000) | (tag & 0xFFFFFF);
    t = D_800AF634[((u16 *)&D_800B9A08)[-3]].p[0];
    q = (u8 *)&D_8011F7A8 + ((u16 *)&D_800B9A08)[-3] * 4;
    u = AF(q, s32, 0x28) - 0x14;
    D_800AF634[((u16 *)&D_800B9A08)[-3]].p[0] = t + ((AF(q, s32, 0x30) - u) >> 2);
}

extern u8 D_8011F7B1;

void func_801759D8(void) {
    u8 *base = (u8 *)&D_8011F7A8;
    s32 *prim;
    s32 tag;
    s32 *ot;
    u8 *q;
    s32 t;
    s32 u;

    if (D_8011F7B1 == 0) {
        prim = *(s32 **)(g_FrontOtOrg + ((u16 *)&D_800B9A08)[-3] * 20);
        tag = prim[1];
        prim[1] = (tag & 0xFF000000) | (AF(base + ((u16 *)&D_800B9A08)[-3] * 4, s32, 0x40) & 0xFFFFFF);
        ot = AF(base + ((u16 *)&D_800B9A08)[-3] * 4, s32 *, 0x38);
        *ot = (*ot & 0xFF000000) | (tag & 0xFFFFFF);
        t = D_800AF634[((u16 *)&D_800B9A08)[-3]].p[0];
        q = base + ((u16 *)&D_800B9A08)[-3] * 4;
        u = AF(q, s32, 0x38) - 0x14;
        D_800AF634[((u16 *)&D_800B9A08)[-3]].p[0] = t + ((AF(q, s32, 0x40) - u) >> 2);
    }
}

extern s32 D_8011F804;
extern u16 D_8011F80A;
extern u16 D_8011F824;
extern u8 D_8011F832;
extern u8 D_8011F83A;
extern s32 D_80190C2C[];
extern void SetDrawMode(void *p, s32 dfe, s32 dtd, s32 tpage, RECT *tw);
extern s32 func_801770E0();
extern s32 func_80176D94();
extern s32 func_80177EA4();
extern s32 func_80177B5C();
extern s32 func_80177940();
extern s32 func_80178298();

/* r216 x56f: both clamp arms set d = 4 (a shared tail; cross-jumping merges it after reload), so the if/else
   survives cse and the -0x34/-0x32(s2) loads stay register-relative; s is the one temp for every call result. */
void func_80175AB8(s32 arg0) {
    s16 i = arg0;
    u8 buf[24];
    u8 *b;
    u8 *q;
    u8 *p;
    s16 t;
    s32 m;
    s32 s;
    u8 c;
    s32 n;
    s32 d;
    s32 j;
    b = (u8 *)&D_8011F7A8 + 0x48;
    j = i * 12;
    p = (u8 *)AF(D_800AF634, s32, j + 4) + AF(D_800AF634, s32, j) * 4;
    q = (u8 *)&D_8011F7A8 + i * 4;
    AF(q, u8 *, 0x18) = p;
    p = (u8 *)func_80176D94(p, (s16)(D_8011F7B4 - 0x71), (s16)(D_8011F7B6 + 0x51));
    p = (u8 *)func_801770E0(p, (s16)(D_8011F7B4 - 0x71), (s16)(D_8011F7B6 + 0x65));
    s = ToBcd(D_8011F804, 0);
    p = (u8 *)func_80177EA4(p, s, (s16)(D_8011F7BC + 0x39), (s16)(D_8011F7BE + 0x51));
    n = 999;
    if (D_8011F824 < 1000) {
        n = D_8011F824;
        d = 4;
    } else {
        d = 4;
    }
    s = ToBcd(n, d);
    p = (u8 *)func_80177B5C(p, (s16)s, D_8011F832, (s16)(AF(b, u16, -0x34) + 0x39), (s16)(AF(b, u16, -0x32) + 0x65));
    t = (s16)D_8011F80A / 15;
    m = (t & 3) * 15;
    s = ToBcd(t >> 2, 8) + ToBcd(m, 0);
    p = (u8 *)func_80177940(p, (s16)s, (s16)(AF(b, u16, -0x34) + 0x76), (s16)(AF(b, u16, -0x32) + 0x65));
    c = D_8011F83A & 0x7F;
    D_8011F83A = c;
    SjisToGlyphs(*(s32 *)((u8 *)D_80190C2C + c * 4), buf);
    p = (u8 *)func_80178298(p, buf, (s16)(AF(b, u16, -0x34) + 0x39), (s16)(AF(b, u16, -0x32) + 0x5B));
    SetDrawMode(p, 0, 0, 0x15, 0);
    *(s32 *)p = ((s32)(p - 0x14) & 0xFFFFFF) | 0x02000000;
    AF(q, u8 *, 0x20) = p;
    p += 0x14;
    AF(D_800AF634, s32, j) += (p - AF(q, u8 *, 0x18)) >> 2;
}

extern u8 D_80190BCC;
extern u16 D_80190C1C[];
extern u16 D_80190C28;
extern u8 D_80190CA8[];
extern u8 D_80190CBC[];
extern s32 D_80190CD4[];
extern u8 D_800D43D4;
extern u8 D_800D4414;
extern u8 D_800D45D4;
extern STile *func_8017742C();

void func_80175DA8(s32 arg0) {
    s16 i = arg0;
    u8 *b = &D_8011F7F0;
    u8 *q = b - 0x48;
    u8 *s = &D_80190BCC;
    STile *p;
    u8 *r;
    u8 *r2;
    u8 *r3;
    u16 *c;
    s16 j;
    u16 w;
    u16 k;
    s16 x;
    s32 n;

    j = 0;
    p = (STile *)(D_800AF634[i].p[1] + D_800AF634[i].p[0] * 4);
    AF(q + i * 4, STile *, 0x28) = p;
    do {
        p->tag = ((u32)(p - 1) & 0xFFFFFF) | 0x04000000;
        AF(p, s32, 4) = *(s32 *)s;
        s += 4;
        if (j < 2) {
            p->x0 = *(u16 *)s + AF(q, u16, 0xC);
            s += 2;
            p->y0 = *(u16 *)s + AF(q, u16, 0xE);
            s += 2;
        } else if (j == 2) {
            p->x0 = *(u16 *)s + AF(q, u16, 0x10);
            s += 2;
            p->y0 = *(u16 *)s + AF(q, u16, 0x12);
            s += 2;
        } else {
            p->x0 = *(u16 *)s + AF(q, u16, 0x14);
            s += 2;
            p->y0 = *(u16 *)s + AF(q, u16, 0x16);
            s += 2;
        }
        AF(p, s32, 0xC) = *(s32 *)s;
        s += 4;
        p->pad = *(s32 *)s;
        s += 4;
        p++;
        j++;
    } while (j < 5);
    AF(q, u8, 7) = D_800B9A13;
    p = func_8017742C(p, (s16)(AF(q, u16, 0x10) - 0x98), (s16)(AF(q, u16, 0x12) + 9));
    SetDrawMode(p, 0, 0, 0x16, 0);
    p->tag = ((u32)(p - 1) & 0xFFFFFF) | 0x02000000;
    AF(q + i * 4, STile *, 0x30) = p;
    p++;
    D_800AF634[i].p[0] += ((s32)p - AF(q + i * 4, s32, 0x28)) >> 2;
    p = AF(q + i * 4, STile *, 0x28);
    if (AF(b, u8, 0x48) != 0) {
        AF(p, u8, 0xD) = 0;
    } else {
        AF(p, u8, 0xD) = 0xA0;
    }
    r = AF(q + i * 4, u8 *, 0x28);
    AF(r, s16, 0x22) = 0x6CD6;
    if (AF(b, u8, 0x48) & 0x80) {
        AF(r, u16, 0x20) = D_80190C28;
        QueueImage((s32)&D_800D45D4);
    } else {
        c = D_80190C1C;
        n = AF(b, u8, 0x48);
        if (n != 0) {
            n--;
            c += n;
        }
        AF(r, u16, 0x20) = *c;
        QueueImage(D_80190CD4[AF(b, u8, 0x48)]);
    }
    r2 = AF(q + i * 4, u8 *, 0x28);
    x = AF(b, u16, 0x2E);
    if (x != 0) {
        r2[0x49] = D_80190CBC[x >> 4];
    } else {
        r2[0x49] = 0xA0;
    }
    r3 = AF(q + i * 4, u8 *, 0x28);
    w = AF(b, u16, 0x40);
    if (w < 100) {
        k = w / 5;
        r3[0x5D] = D_80190CA8[k];
    } else {
        r3[0x5D] = 0;
    }
    if (AF(b, s16, 0x1E) & 0x8000) {
        QueueImage((s32)&D_800D4414);
    } else {
        QueueImage((s32)&D_800D43D4);
    }
}

extern u16 D_8011F7BC;
extern u16 D_8011F7BE;
extern s32 func_80178004();

s32 func_80176144(s32 arg0) {
    s16 i = arg0;
    u8 *q;
    s32 a;

    a = D_800AF634[i].p[1] + D_800AF634[i].p[0] * 4;
    q = (u8 *)&D_8011F7A8 + i * 4;
    AF(q, s32, 0x38) = a;
    a = func_80178004(a, (s16)(D_8011F7BC - 0x17), (s16)(D_8011F7BE + 0x65));
    AF(q, s32, 0x40) = a - 0x14;
    a += 0x14;
    D_800AF634[i].p[0] += (a - AF(q, s32, 0x38)) >> 2;
}

extern u16 D_8011F82A;
extern u16 D_8011F82C;
extern u16 D_8011F8C4;
extern void func_80176FF4();
extern void func_80177340();
extern void func_80177F84();
extern void func_80177DA8();
extern void func_80177AD4();
void func_80176218(s32 arg0) {
    s16 i = arg0;
    u8 *base = (u8 *)&D_8011F7A8;
    u8 *cur = base + 0x48;
    u8 *flg = base + 0xE0;
    u8 *tgt = &g_Status;
    u8 *p2;
    u8 *p5;
    s32 c;
    s32 t;
    u16 n1;
    s16 d;
    u16 v;
    s32 w;
    s32 e;
    s32 x4;
    s32 x5;
    s16 m;
    s16 s;
    s32 r;
    u8 buf[0x18];

    v = D_80078EB2;
    t = v != D_8011F82A;
    if (D_8011F82C == D_80078EB4) {
        c = t; /* MATCH-TRICK: the aux-changed compare kept in t and copied into the working flag inside the equal arm (once per block) */
        if (c == 0 && D_8011F8C4 == 0) goto skip1;
    } else {
        d = D_8011F82C - D_80078EB4;
        if (d < 0) {
            if (d < -10) {
                n1 = D_8011F82C + 2;
            } else {
                n1 = D_8011F82C + 1;
            }
        } else {
            if (d >= 11) {
                n1 = D_8011F82C - 2;
            } else {
                n1 = D_8011F82C - 1;
            }
        }
        D_8011F82C = n1;
        AF(cur, u16, 0x3A) = AF(tgt, u16, 0x3A);
        AF(flg, u16, 0x3C) = 1;
        goto call1;
    }
    if (c) {
        AF(base, u16, 0x82) = v;
        AF(base, u16, 0x11C) = 1;
    } else {
        AF(base, u16, 0x11C) = 0;
    }
call1:
    func_80176FF4(AF(base + i * 4, s32, 0x18));
skip1:
    v = AF(tgt, u16, 0x3E);
    t = v != AF(cur, u16, 0x3E);
    if (AF(cur, u16, 0x40) == AF(tgt, u16, 0x40)) {
        c = t; /* MATCH-TRICK: the aux-changed compare kept in t and copied into the working flag inside the equal arm (once per block) */
        if (c == 0 && AF(flg, u16, 0x40) == 0) goto skip2;
    } else {
        d = AF(cur, u16, 0x40) - AF(tgt, u16, 0x40);
        if (d < 0) {
            if (d >= -10) {
                AF(cur, u16, 0x40) = AF(cur, u16, 0x40) + 1;
            } else {
                AF(cur, u16, 0x40) = AF(cur, u16, 0x40) + 2;
            }
        } else {
            if (d >= 11) {
                AF(cur, u16, 0x40) = AF(cur, u16, 0x40) - 2;
            } else {
                AF(cur, u16, 0x40) = AF(cur, u16, 0x40) - 1;
            }
        }
        AF(cur, u16, 0x3E) = AF(tgt, u16, 0x3E);
        AF(flg, u16, 0x40) = 1;
        goto call2;
    }
    if (c) {
        AF(cur, u16, 0x3E) = v;
        AF(flg, u16, 0x40) = 1;
    } else {
        AF(flg, u16, 0x40) = 0;
    }
call2:
    func_80177340(AF(base + i * 4, s32, 0x18) + 0x104);
    p2 = AF(base + i * 4, u8 *, 0x28);
    if (AF(cur, u16, 0x40) < 100) {
        AF(p2, u8, 0x5D) = D_80190CA8[(u16)(AF(cur, u16, 0x40) / 5)];
    } else {
        AF(p2, u8, 0x5D) = 0;
    }
skip2:
    w = AF(cur, s32, 0x14);
    if (w == AF(tgt, s32, 0x14)) {
        if (AF(flg, s32, 0x14) == 0) goto skip3;
        AF(flg, s32, 0x14) = 0;
    } else {
        e = AF(tgt, s32, 0x14) - w;
        if (e > 0) {
            if (e >= 10) {
                AF(cur, s32, 0x14) = w + 10;
            } else {
                AF(cur, s32, 0x14) = w + 1;
            }
        } else {
            if (e >= -9) {
                AF(cur, s32, 0x14) = w - 1;
            } else {
                AF(cur, s32, 0x14) = w - 10;
            }
        }
        AF(flg, s32, 0x14) = 1;
    }
    func_80177F84(AF(base + i * 4, s32, 0x18) + 0x208, ToBcd(AF(cur, s32, 0x14), 0));
skip3:
    if (AF(tgt, u16, 0x34) != AF(cur, u16, 0x34)) {
        AF(cur, u16, 0x34) = AF(tgt, u16, 0x34);
        AF(cur, u8, 0x42) = AF(tgt, u8, 0x42);
        AF(flg, u16, 0x34) = 1;
    } else if (AF(flg, u16, 0x34) != 0) {
        AF(flg, u16, 0x34) = 0;
    } else {
        goto skip4;
    }
    if (AF(cur, u16, 0x34) < 1000) {
        x4 = AF(cur, u16, 0x34);
    } else {
        x4 = 999;
    }
    func_80177DA8(AF(base + i * 4, s32, 0x18) + 0x294, (s16)ToBcd((s16)x4, 4), AF(cur, u8, 0x42));
skip4:
    if (AF(cur, s16, 0x1A) != AF(tgt, s16, 0x1A)) {
        AF(cur, s16, 0x1A) = AF(tgt, s16, 0x1A);
        AF(flg, s16, 0x1A) = 1;
    } else if (AF(flg, s16, 0x1A) != 0) {
        AF(flg, s16, 0x1A) = 0;
    } else {
        goto skip5;
    }
    p5 = AF(base + i * 4, u8 *, 0x18);
    x5 = AF(cur, u16, 0x1A);
    if (x5 & 1) {
        AF(p5, s16, 0x32A) = 0x200;
    } else {
        AF(p5, s16, 0x32A) = AF(base, u16, 0x16) + 0x65;
    }
    m = (s16)x5 / 15;
    s = (m & 3) * 15;
    x5 = ToBcd(m >> 2, 8) + ToBcd(s, 0);
    func_80177AD4(AF(base + i * 4, s32, 0x18) + 0x320, (s16)x5);
skip5:
    if (AF(tgt, u8, 0x4A) != AF(cur, u8, 0x4A)) {
        AF(cur, u8, 0x4A) = AF(tgt, u8, 0x4A) & 0x7F;
        AF(flg, u8, 0x4A) = 1;
    } else if (AF(flg, u8, 0x4A) != 0) {
        AF(flg, u8, 0x4A) = 0;
    } else {
        return;
    }
    r = AF(base + i * 4, s32, 0x18) + 0x384;
    SjisToGlyphs(D_80190C2C[AF(cur, u8, 0x4A)], buf);
    r = func_80178298(r, buf, (s16)(AF(base, u16, 0x14) + 0x39), (s16)(AF(base, u16, 0x16) + 0x5B));
    SetDrawMode(r, 0, 0, 0x15, 0);
    AF(r, s32, 0) = ((r - 0x14) & 0xFFFFFF) | 0x02000000;
    AF(base + i * 4, s32, 0x20) = r;
}

extern u8 D_80115214;
extern s16 D_801152BA;
extern u8 D_8011F7B0;
extern u16 D_80190C1A[];
extern u8 D_80190CC8[];
extern void func_801775E0();

void func_80176734(s32 arg0) {
    s16 i = arg0;
    u8 *p = (u8 *)&D_8011F7A8;
    u8 *a = p + 0x48;
    u8 *b = p + 0xE0;
    u8 *c = &g_Status;
    u8 *m;
    u8 *q;
    u8 *n;
    u8 v;
    s8 t;
    s16 s5;
    s16 s0;
    s16 lim;
    u16 k;

    m = AF(p + i * 4, u8 *, 0x28);
    q = m + 0x3C;
    if (D_801152BA != 0) {
        if (D_8011F7B0 < 0x80) {
            t = D_8011F7B0 - 0x80;
        } else {
            t = ~D_8011F7B0 - 0x80;
        }
        m[4] = q[4] = t;
        p[8] += D_80115214;
    } else {
        AF(m, u8, 4) = AF(m, u8, 0x40) = 0x80;
    }
    if (b[0x48] != 0) {
        m = AF(p + i * 4, u8 *, 0x28);
        m[0xD] = D_80190CC8[b[0x48]];
        if (b[0x48] >= 4) {
            v = a[0x48];
            m = AF(p + i * 4, u8 *, 0x28);
            if (v & 0x80) {
                AF(m, u16, 0x20) = D_80190C28;
                QueueImage((s32)&D_800D45D4);
            } else if (v != 0) {
                AF(m, u16, 0x20) = D_80190C1A[v];
                QueueImage(D_80190CD4[a[0x48]]);
            }
            if (b[0x48] == 5) {
                if (a[0x48] == 0) {
                    b[0x48] = 0;
                } else {
                    b[0x48]++;
                }
            } else if (b[0x48] == 10) {
                b[0x48] = 0;
            } else {
                b[0x48]++;
            }
        } else {
            b[0x48]++;
        }
    } else if (a[0x48] != c[0x48]) {
        if (a[0x48] == 0 && c[0x48] != 0) {
            b[0x48] = 5;
        } else {
            b[0x48] = 0;
        }
        a[0x48] = c[0x48];
        m = AF(p + i * 4, u8 *, 0x28);
        m[0xD] = D_80190CC8[b[0x48]++];
    }
    if (AF(a, s16, 0x2E) == AF(c, s16, 0x2E)) {
        if (AF(b, s16, 0x2E) == 0) {
            goto skip;
        }
        AF(b, s16, 0x2E) = 0;
    } else {
        AF(a, s16, 0x2E) = AF(c, s16, 0x2E);
        AF(b, s16, 0x2E) = 1;
    }
    n = AF(p + i * 4, u8 *, 0x28);
    if (AF(a, s16, 0x2E) != 0) {
        n[0x49] = D_80190CBC[AF(a, s16, 0x2E) >> 4];
    } else {
        n[0x49] = 0xA0;
    }
skip:
    if ((AF(a, s16, 0x1E) & 0x8000) != (AF(c, s16, 0x1E) & 0x8000)) {
        if (AF(a, s16, 0x1E) & 0x8000) {
            AF(a, s16, 0x1E) = 0;
            QueueImage((s32)&D_800D43D4);
        } else {
            AF(a, s16, 0x1E) = -0x8000;
            QueueImage((s32)&D_800D4414);
        }
    }
    if (D_800B9A13 != 3) {
        s5 = p[7] != D_800B9A13;
        if (s5) {
            p[7] = D_800B9A13;
        }
    } else {
        s5 = 0;
    }
    s0 = 0;
    switch (c[0x48]) {
    case 3:
        if (IsTechnique3Active(&g_Player)) {
            s0 = 0xFF;
        }
        break;
    case 4:
        if (IsTechnique4Active(&g_Player)) {
            s0 = 0xFF;
        }
        break;
    case 5:
        if (IsTechnique5Active(&g_Player)) {
            s0 = 0xFF;
        }
        break;
    case 6:
        if (IsTechnique6Active(&g_Player)) {
            s0 = 0xBA;
        }
        break;
    }
    if (s0 != 0) {
        b[0x47] = 1;
        a[0x4B] = c[0x48] | 0xF0;
        a[0x47] = (D_80126D20 << 7) / s0;
    } else {
        if (a[0x4B] >= 0xF0) {
            a[0x4B] = 0;
        }
        lim = g_PlayerAbsorbCounter;
        if (g_PlayerAbsorbCounter != 0) {
            a[0x4B] = v = lim;
            s0 = a[0x47] != v;
        } else {
            lim = c[0x47];
            s0 = 0;
            if (a[0x47] != lim || a[0x47] == 0x80) {
                s0 = 1;
            }
            if (c[0x47] != 0 && a[0x4B] != 0) {
                a[0x4B] = 0;
                a[0x47] = c[0x47];
            }
        }
        if (s0 != 0 || s5 != 0 || b[0x47] != 0) {
            if (s0 != 0 || s5 != 0) {
                if (a[0x47] >= lim) {
                    a[0x47] = (lim == 0) ? a[0x47] - 8 : a[0x47] - 3;
                    if (a[0x47] == 0 || a[0x47] > 0x80) {
                        a[0x47] = 0;
                        a[0x4B] = 0;
                    } else if (a[0x47] < lim) {
                        a[0x47] = lim;
                    }
                } else {
                    a[0x47] = lim;
                }
                b[0x47] = 1;
            } else {
                b[0x47] = 0;
            }
        }
    }
    k = (p[7] != 0) << 8;
    AF(AF(p + i * 4, u8 *, 0x28), s16, 0x32) = AF(p, u16, 0x12) + (k + 5);
    func_801775E0(AF(p + i * 4, u8 *, 0x28) + 0x64, (s16)(AF(p, u16, 0x12) + (k + 9)));
}

extern u8 D_8011F7B1;
extern u16 D_8011F7B4;
extern u16 D_8011F7B6;
extern s16 D_8011F81E;
extern s32 func_80178004();

s32 func_80176D00(s32 arg0) {
    s16 i = arg0;
    u8 *base = (u8 *)&D_8011F7A8;
    u8 *q;
    s32 *a;
    s32 *r;

    if (D_8011F7B1 == 0) {
        q = base + i * 4;
        a = AF(q, s32 *, 0x20) + 5;
        AF(q, s32 *, 0x38) = a;
        D_8011F81E = D_80078EA6;
        r = (s32 *)func_80178004(a, (s16)(D_8011F7B4 - 0x17), (s16)(D_8011F7B6 + 0x65));
        AF(q, s32 *, 0x40) = r - 5;
    }
}

extern u16 D_8011F82A;
extern u16 D_8011F82C;
extern s32 func_80177784();
extern s32 func_801777BC();
extern s32 ToBcd();

s32 func_80176D94(s32 arg0, s32 arg1, s32 arg2) {
    s16 y = arg2;
    s32 yy;
    s32 p;
    s32 q;
    s32 r;
    s32 t;
    s32 v;

    yy = y << 16;
    q = func_80177784(arg0, yy | (u16)arg1, 0x6B565040);
    r = func_80177784(q, yy | ((arg1 + 8) & 0xFFFF), 0x6B565808);
    q = func_80177784(r, yy | ((arg1 + 0x10) & 0xFFFF), 0x6B564060);
    r = func_80177784(q, yy | ((arg1 + 0x30) & 0xFFFF), 0x6B563858);
    q = func_801777BC(r, (s16)ToBcd(D_8011F82C, 4), (s16)(arg1 + 0x18), y, 3, 0xAD, 0xFF);
    p = func_801777BC(q, (s16)ToBcd(D_8011F82A, 4), (s16)(arg1 + 0x38), y, 3, 0xAD, 0xFF);
    AF(p, s32, 0xC) = ((s32)(D_8011F82C * 0x50E6) >> 16) | 0x20000;
    AF(p, s32, 0) = ((p - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(p, s32, 4) = 0x6000DCFF;
    t = ((y + 0xA) << 16) | ((arg1 + 1) & 0xFFFF);
    AF(p, s32, 8) = t;
    v = (s32)(D_8011F82A * 0x50E6) >> 16;
    AF(p, s32, 0x14) = (p & 0xFFFFFF) | 0x03000000;
    AF(p, s32, 0x18) = 0x600000FF;
    AF(p, s32, 0x1C) = t;
    AF(p, s32, 0x20) = v | 0x20000;
    AF(p, s32, 0x28) = ((p + 0x14) & 0xFFFFFF) | 0x03000000;
    AF(p, s32, 0x2C) = 0x60000000;
    AF(p, s32, 0x30) = ((y + 9) << 16) | (arg1 & 0xFFFF);
    AF(p, s32, 0x34) = (v + 2) | 0x40000;
    return p + 0x3C;
}

extern u16 D_8011F82A;
extern u16 D_8011F82C;
extern void func_801778A8();
extern s32 ToBcd();

void func_80176FF4(s32 arg0) {
    s32 t;

    arg0 += 0x50;
    func_801778A8(arg0, (s16)ToBcd(D_8011F82C, 4), 3, 0xFF);
    arg0 += 0x3C;
    func_801778A8(arg0, (s16)ToBcd(D_8011F82A, 4), 3, 0xFF);
    arg0 += 0x3C;
    AF(arg0, s16, 0xC) = (u32)(D_8011F82C * 0x2873) >> 15;
    arg0 += 0x14;
    t = (s32)(D_8011F82A * 0x50E6) >> 16;
    AF(arg0, s16, 0xC) = t;
    AF(arg0, s16, 0x20) = t + 2;
}

extern u16 D_8011F82E;
extern u16 D_8011F830;

s32 func_801770E0(s32 arg0, s32 arg1, s32 arg2) {
    s16 y = arg2;
    s32 a;
    s32 t;
    s32 w;

    arg0 = func_80177784(arg0, (y << 16) | (u16)arg1, 0x6E165010);
    arg0 = func_80177784(arg0, (y << 16) | ((arg1 + 8) & 0xFFFF), 0x6E165808);
    arg0 = func_80177784(arg0, (y << 16) | ((arg1 + 0x10) & 0xFFFF), 0x6E164060);
    arg0 = func_80177784(arg0, (y << 16) | ((arg1 + 0x30) & 0xFFFF), 0x6E163858);
    arg0 = func_801777BC(arg0, (s16)ToBcd(D_8011F830, 4), (s16)(arg1 + 0x18), y, 3, 0xB8, 0xFF);
    arg0 = func_801777BC(arg0, (s16)ToBcd(D_8011F82E, 4), (s16)(arg1 + 0x38), y, 3, 0xB8, 0xFF);
    a = ((y - 4) << 16) | ((arg1 + 1) & 0xFFFF);
    w = (s32)(D_8011F830 * 0x50E6) >> 16;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x6055FF00;
    AF(arg0, s32, 8) = a;
    AF(arg0, s32, 0xC) = w | 0x20000;
    t = (s32)(D_8011F82E * 0x50E6) >> 16;
    AF(arg0, s32, 0x14) = (arg0 & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 0x18) = 0x60FF3214;
    AF(arg0, s32, 0x1C) = a;
    AF(arg0, s32, 0x20) = t | 0x20000;
    AF(arg0, s32, 0x28) = ((arg0 + 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 0x2C) = 0x60000000;
    AF(arg0, s32, 0x30) = ((y - 5) << 16) | (arg1 & 0xFFFF);
    AF(arg0, s32, 0x34) = (t + 2) | 0x40000;
    return arg0 + 0x3C;
}

extern u16 D_8011F82E;
extern u16 D_8011F830;

void func_80177340(s32 arg0) {
    s32 t;

    arg0 += 0x50;
    func_801778A8(arg0, (s16)ToBcd(D_8011F830, 4), 3, 0xFF);
    arg0 += 0x3C;
    func_801778A8(arg0, (s16)ToBcd(D_8011F82E, 4), 3, 0xFF);
    arg0 += 0x3C;
    AF(arg0, s16, 0xC) = (u32)(D_8011F830 * 0x2873) >> 15;
    arg0 += 0x14;
    t = (s32)(D_8011F82E * 0x50E6) >> 16;
    AF(arg0, s16, 0xC) = t;
    AF(arg0, s16, 0x20) = t + 2;
}

STile *func_8017742C(STile *p, s32 x, s32 y) {
    STile *t;
    s32 h;
    s32 xx;
    s32 yy;
    u8 *c;
    u8 *b;

    t = p;
    xx = x;
    b = &D_8011F7F0;
    t->tag = ((u32)(t - 1) & 0xFFFFFF) | 0x03000000;
    t->code = 0x60;
    if (D_8011F837 < 0x80) {
        t->r0 = 0xFF;
        t->g0 = t->b0 = 0x10;
    } else if (D_8011F837 == 0x80) {
        switch (D_8011F7AB) {
        default:
            D_8011F7AB = 0;
        case 0:
            t->r0 = 0xFF;
            t->g0 = t->b0 = 0x30;
            break;
        case 1:
            t->g0 = 0xFF;
            t->b0 = 0x30;
            t->r0 = 0x30;
            break;
        case 2:
            t->b0 = 0xFF;
            t->g0 = 0x30;
            t->r0 = 0x30;
            break;
        }
        c = &D_8011F7AB;
        *c += 1;
    } else {
        t->g0 = 0xFF;
        t->r0 = t->b0 = 0x10;
    }
    p++; t->x0 = xx; h = AF(b, u8, 0x47) * 3 >> 3; t->w = 8; yy = y + 0x48; t->y0 = yy - h; t->h = h;
    t = p;
    t->tag = ((u32)(t - 1) & 0xFFFFFF) | 0x03000000;
    t->code = 0x60;
    t->r0 = t->g0 = 0x40;
    if (AF(b, u8, 0x47) != 0) {
        t->b0 = 0xA0;
    } else {
        t->b0 = 0x40;
    }
    t->w = 8;
    t->h = 0x48;
    t->x0 = xx;
    t->y0 = y;
    return p + 1;
}

extern u8 D_8011F83B;
extern void func_801776EC();

void func_801775E0(STile *p, s32 y0) {
    s16 y = y0;
    STile *t;
    u8 *b;
    u32 h;
    s16 yy;

    t = p;
    b = &D_8011F7F0;
    switch (D_8011F83B) {
    case 0:
        if (D_8011F837 == 0x80) {
            func_801776EC(t);
        } else {
            t->r0 = 0xFF;
            t->g0 = t->b0 = 0x10;
        }
        break;
    case 0xF3:
    case 0xF4:
    case 0xF5:
    case 0xF6:
        func_801776EC(t);
        break;
    default:
        t->g0 = 0xFF;
        t->r0 = t->b0 = 0x10;
        break;
    }
    h = (u32)(AF(b, u8, 0x47) * 9) >> 4;
    yy = y + 0x48;
    t->h = h;
    t->y0 = yy - h;
    p++;
    t = p;
    if (AF(b, u8, 0x47) != 0) {
        t->b0 = 0xA0;
    } else {
        t->b0 = 0x40;
    }
    t->y0 = y;
}

void func_801776EC(STile *p) {
    STile *t;
    u8 *c;

    t = p;
    switch (D_8011F7AB) {
    default:
        D_8011F7AB = 0;
    case 0:
        t->r0 = 0xFF;
        t->g0 = t->b0 = 0x30;
        break;
    case 1:
        t->g0 = 0xFF;
        t->b0 = 0x30;
        t->r0 = 0x30;
        break;
    case 2:
        t->b0 = 0xFF;
        t->g0 = 0x30;
        t->r0 = 0x30;
        break;
    }
    c = &D_8011F7AB;
    *c += 1;
}

s32 func_80177784(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0) = (s32) (((arg0 - 0x14) & 0xFFFFFF) | 0x03000000);
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = arg1;
    AF(arg0, s32, 0xC) = arg2;
    return arg0 + 0x14;
}

s32 func_801777BC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s16 n = arg4;
    s16 cy = arg5;
    s32 flag;
    s32 clut;
    s16 d;
    s16 i;
    s32 uv;

    flag = 0x01000000;
    clut = (((cy + 0x100) << 6) | 0x16) << 16;
    for (i = 0; i < n; i++) {
        d = (u32)(arg1 << 16) >> 28;
        if (d != 0 || i == n - 1 || i == (s16)arg6) {
            flag = 0;
        }
        AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
        AF(arg0, s32, 8) = (arg3 << 16) | (arg2 & 0xFFFF) | flag;
        AF(arg0, s32, 4) = 0x74808080;
        uv = (d * 8 + 8) | 0x4000;
        AF(arg0, s32, 0xC) = clut | uv;
        arg0 += 0x14;
        arg2 += 8;
        arg1 <<= 4;
    }
    return arg0;
}

void func_801778A8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 n = arg2;
    s16 k = arg3;
    s32 f = 0x100;
    s16 i;
    s16 d;
    for (i = 0; i < n; i++) {
        d = (u32)(arg1 << 16) >> 28;
        if (d != 0 || i == n - 1 || i == k) {
            f = 0;
        }
        arg1 <<= 4;
        AF(arg0, s16, 0xA) = f | (AF(arg0, s16, 0xA) & ~0x100);
        AF(arg0, u8, 0xC) = d * 8 + 8;
        arg0 += 0x14;
    }
}

static inline s32 h_80177784(s32 arg0, s32 arg1, s32 arg2) {
    AF(arg0, s32, 0) = (s32) (((arg0 - 0x14) & 0xFFFFFF) | 0x03000000);
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = arg1;
    AF(arg0, s32, 0xC) = arg2;
    return arg0 + 0x14;
}

static inline s32 h_801777BC(s32 arg0, s16 arg1, u16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s16 cy = arg5;
    s32 flag;
    s32 clut;
    s16 d;
    s16 i;
    s16 uv;
    clut = (((cy + 0x100) << 6) | 0x16) << 16;
    flag = 0x01000000;
    for (i = 0; i < arg4; i++) {
        d = (u32)(arg1 << 16) >> 28;
        if (d != 0 || i == arg4 - 1 || i == (s16)arg6) {
            flag = 0;
        }
        AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
        AF(arg0, s32, 8) = arg3 | (arg2 & 0xFFFF) | flag;
        AF(arg0, s32, 4) = 0x74808080;
        uv = (d * 8 + 8) | 0x4000;
        AF(arg0, s32, 0xC) = clut | uv;
        arg0 += 0x14;
        arg2 += 8;
        arg1 <<= 4;
    }
    return arg0;
}

s32 func_80177940(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 dd = arg1;
    s32 c;
    s32 t;
    s32 hi;
    u16 x;

    t = GetProgress() - 0xA;
    t = (u32)t < 0x4B0;
    c = -t;
    c &= 0xB4;
    x = arg2;
    hi = arg3 << 16;
    arg0 = h_80177784(arg0, hi | ((x + 0xF) & 0xFFFF), ((((c + 0x100) << 6) | 0x16) << 16) | 0x3850);
    arg0 = h_801777BC(arg0, dd, x, hi, 4, c, 1);
    AF(arg0, u16, -0x20) += 6;
    AF(arg0, u16, -0xC) += 6;
    return arg0;
}

void func_80177AD4(u8 *arg0, s32 arg1) {
    s32 f = 0x100;
    s16 i;
    s16 d;
    for (i = 0; i < 4; i++) {
        d = (u32)(arg1 << 16) >> 28;
        if (d != 0 || i == 3 || i == 1) {
            f = 0;
        }
        arg1 <<= 4;
        AF(arg0, s16, 0x1E) = f | (AF(arg0, s16, 0x1E) & ~0x100);
        AF(arg0, u8, 0x20) = d * 8 + 8;
        arg0 += 0x14;
    }
}

extern u8 D_80190CF0[];

s32 func_80177B5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 c = arg2;
    s16 y = arg4;
    u16 w = arg3;
    s32 b;
    s32 f;
    s16 x;
    s16 i;
    s16 d;
    u8 t;
    s32 col;
    s32 q;
    s32 u;
    s32 v;
    s32 v2;
    s32 k;

    t = D_80190CF0[c];
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = ((y + 1) << 16) | (u16)(w - 3);
    AF(arg0, s32, 0xC) = (((t << 6) | 0x4016) << 16) | 0x1800;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = ((y + 1) << 16) | (u16)(w + 5);
    AF(arg0, s32, 0xC) = (((t << 6) | 0x4016) << 16) | 0x1808;
    arg0 += 0x14;
    q = arg0;
    b = arg1;
    x = w + 0xE;
    f = 0x1000000;
    for (i = 0; i < 3; i++) {
        d = (u32)(b << 16) >> 28;
        if (d != 0 || i == 2 || i == 0xFF) {
            f = 0;
        }
        AF(q, s32, 0) = ((q - 0x14) & 0xFFFFFF) | 0x03000000;
        col = 0x74808080;
        AF(q, s32, 4) = col;
        AF(q, s32, 8) = (y << 16) | (u16)x | f;
        u = (d * 8 + 8) | 0x4000;
        AF(q, s32, 0xC) = (((t << 6) | 0x4016) << 16) | u;
        q += 0x14;
        x += 8;
        b <<= 4;
    }
    arg0 = q;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = col;
    AF(arg0, s32, 8) = (y << 16) | (u16)(w + 0x2A);
    k = ((t << 6) | 0x4016) << 16;
    v = (c << 4) | 0x1000;
    AF(arg0, s32, 0xC) = k | v;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = col;
    AF(arg0, s32, 8) = (y << 16) | (u16)(w + 0x32);
    k = ((t << 6) | 0x4016) << 16;
    v2 = (c << 4) | 0x1008;
    AF(arg0, s32, 0xC) = k | v2;
    return arg0 + 0x14;
}

void func_80177DA8(s32 arg0, s32 arg1, s32 arg2) {
    s16 c = arg2;
    s32 f;
    s16 i;
    s16 d;
    u8 t;
    s16 k;
    s32 q;
    s32 kk;
    s32 v;
    s32 v2;

    f = 0x100;
    t = D_80190CF0[c];
    k = (t << 6) | 0x4016;
    AF(arg0, s16, 0xE) = k;
    arg0 += 0x14;
    AF(arg0, s16, 0xE) = k;
    arg0 += 0x14;
    q = arg0;
    for (i = 0; i < 3; i++) {
        d = (u32)(arg1 << 16) >> 28;
        if (d != 0 || i == 2 || i == 0xFF) {
            f = 0;
        }
        arg1 <<= 4;
        AF(q, s16, 0xA) = f | (AF(q, s16, 0xA) & ~0x100);
        AF(q, u8, 0xC) = d * 8 + 8;
        q += 0x14;
    }
    AF(arg0, s16, 0xE) = k;
    arg0 += 0x14;
    AF(arg0, s16, 0xE) = k;
    arg0 += 0x14;
    AF(arg0, s16, 0xE) = k;
    arg0 += 0x14;
    kk = ((t << 6) | 0x4016) << 16;
    v = (c << 4) | 0x1000;
    v2 = (c << 4) | 0x1008;
    AF(arg0, s32, 0xC) = kk | v;
    AF(arg0, s32, 0x20) = kk | v2;
}

s32 func_80177EA4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 y = arg3;
    s32 q = arg0;
    s32 b = arg1;
    s16 x = arg2;
    s16 i;
    s32 f = 0x1000000;
    s16 d;

    for (i = 0; i < 7; i++) {
        AF(q, s32, 0) = ((q - 0x14) & 0xFFFFFF) | 0x03000000;
        AF(q, s32, 4) = 0x74808080;
        if (i != 0) {
            if (i == 6) {
                d = 1;
                f = 0;
            } else {
                d = ((b >> 16) & 0xF) + 1;
                b <<= 4;
            }
            if (d != 1) {
                f = 0;
            }
            AF(q, s32, 8) = (y << 16) | (u16)x | f;
        } else {
            d = 0;
            AF(q, s32, 8) = (y << 16) | (u16)x;
        }
        AF(q, s32, 0xC) = (d * 8) | 0x6B564000;
        q += 0x14;
        x += 8;
    }
    return q;
}

void func_80177F84(u8 *arg0, s32 arg1) {
    s16 i;
    s32 flag = 0x100;
    s16 d;
    s32 e;
    s32 t;
    u8 *p = arg0 - 8;
    for (i = 0; i < 5; i++) {
        d = (arg1 >> 16) & 0xF;
        e = d;
        arg1 <<= 4;
        if (i == 5 || e != 0) {
            flag = 0;
        }
        p += 0x14;
        t = AF(p, u16, 0x12) & ~0x100;
        AF(p, u16, 0x12) = flag | t;
        AF(p, u8, 0x14) = d * 8 + 8;
    }
}

static inline s32 h_80178004(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 flag;
    s32 clut;
    s16 d;
    s16 i;
    s32 uv;
    s32 c;
    s16 yy = arg3;
    clut = 0x6D160000;
    flag = 0x01000000;
    for (i = 0; i < 3; i++) {
        d = (u32)(arg1 << 16) >> 28;
        if (d != 0 || i == 2 || i == 0xFF) {
            flag = 0;
        }
        uv = (d * 8 + 8) | 0x4000;
        c = clut | uv;
        AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
        AF(arg0, s32, 8) = (yy << 16) | (arg2 & 0xFFFF) | flag;
        AF(arg0, s32, 4) = 0x74808080;
        AF(arg0, s32, 0xC) = c;
        arg0 += 0x14;
        arg2 += 8;
        arg1 <<= 4;
    }
    return arg0;
}

s32 func_80178004(s32 arg0, s32 arg1, s32 arg2) {
    s32 k = 0x6D165828;
    s32 y = arg2 << 16;

    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = y | (u16)arg1;
    AF(arg0, s32, 0xC) = k;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = y | (u16)(arg1 + 7);
    AF(arg0, s32, 0xC) = 0x6D160048;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = y | (u16)(arg1 + 0xD);
    AF(arg0, s32, 0xC) = 0x6D160818;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = y | (u16)(arg1 + 0x13);
    AF(arg0, s32, 0xC) = 0x6D160028;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = y | (u16)(arg1 + 0x19);
    AF(arg0, s32, 0xC) = 0x6D160020;
    arg0 += 0x14;
    AF(arg0, s32, 0) = ((arg0 - 0x14) & 0xFFFFFF) | 0x03000000;
    AF(arg0, s32, 4) = 0x74808080;
    AF(arg0, s32, 8) = y | (u16)(arg1 + 0x3A);
    AF(arg0, s32, 0xC) = 0x6D164058;
    arg0 += 0x14;
    arg0 = h_80178004(arg0, ToBcd(100 - ((D_8011F81E * 0xA198) >> 16), 4), arg1 + 0x22, arg2);
    return arg0;
}

s32 func_80178298(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    while (*arg1 < 0x80) {
        switch (AF(arg1, s16, 0)) {
        case 0x1850:
        case 0x1858:
            AF(arg0, s16, 8) = arg2 + 4;
            AF(arg0, s16, 0xA) = arg3 - 7;
            break;
        case 0x3870:
            arg2 += 8;
            arg1 += 2;
            continue;
        case 0x3871:
            arg2 += 4;
            arg1 += 2;
            continue;
        case 0x3872:
            arg2 += 2;
            arg1 += 2;
            continue;
        default:
            AF(arg0, s16, 8) = arg2;
            AF(arg0, s16, 0xA) = arg3;
            if (AF(arg1, s16, 0) >= 0x861) {
                arg2 += 8;
            } else {
                arg2 += 7;
            }
            break;
        }
        AF(arg0, s32, 0) = ((s32)(arg0 - 0x14) & 0xFFFFFF) | 0x04000000;
        AF(arg0, s32, 4) = 0x64808080;
        AF(arg0, u8, 0xC) = *arg1++;
        AF(arg0, u8, 0xD) = *arg1++;
        AF(arg0, s16, 0xE) = 0x4056;
        AF(arg0, s16, 0x10) = 8;
        AF(arg0, s16, 0x12) = 8;
        arg0 += 0x14;
    }
    return (s32)arg0;
}

s32 ToBcd(s32 arg0, s32 arg1) {
    s32 r = 0;
    s32 n = arg0;
    s32 sh = 0;
    while (n >= 10) {
        arg0 = arg0 / 10;
        r |= (n - (arg0 * 2 + arg0 * 8)) << sh;
        n = arg0;
        sh += 4;
    }
    r |= n << sh;
    return r << arg1;
}

void func_80178438(u16 *arg0) {
    SetDebugText(2, (s32) &D_801ECAE0, 0x80, 0x88, /* extra? */ 0, /* extra? */ 0);
    SetDebugNumber(3, (s32) *arg0, 0xA8, 0x88, /* extra? */ 0x40, /* extra? */ 0);
}

extern void (**g_ActorHandlers)();
extern s32 func_801787D4();
extern void AnimateActors();
extern void func_8017869C();
extern void RunReaction();
extern void func_8013E370();

void UpdateActors(void) {
    u8 *a;
    s32 i;
    void (**tbl)();
    u8 *o;

    a = &g_Actors;
    func_801787D4();
    AnimateActors();
    for (i = 0; i < 0x60; i++, a += 0x10C) {
        if (AF(a, u16, 0) != 0 && (D_801270C0 == 1 || (AF(a, u16, 0x72) & 0x1000))) {
            func_8017869C(a);
            ((s32 *)a)[14] = ((s32 *)a)[1];
            ((s32 *)a)[15] = ((s32 *)a)[2];
            ((s32 *)a)[16] = ((s32 *)a)[3];
            tbl = g_ActorHandlers;
            if (AF(a, u8, 0xC0) != 0 && AF(a, u8, 0xC1) != 0) {
                RunReaction(a);
            } else {
                tbl[AF(a, u16, 0)](a);
            }
            o = AF(a, u8 *, 0x20);
            if (o != 0) {
                AF(o, s16, 8) = AF(a, u16, 6) + AF(a, u16, 0x50);
                AF(AF(a, u8 *, 0x20), s16, 0xA) = AF(a, u16, 0xA) + AF(a, u16, 0x52);
                AF(AF(a, u8 *, 0x20), s16, 0xC) = AF(a, u16, 0xE) + AF(a, u16, 0x54);
            }
        }
    }
    if (D_801270C0 == 1) {
        func_8013E370();
    }
}

extern s16 D_801270C2;
extern s16 g_NextActorId;
extern u8 D_801270C6;
extern u8 D_801270C7;
extern s32 D_801274D8;
extern s32 D_801274DC;
extern s32 g_FarDistSq;
extern void func_8013E4B4();

void func_80178608(void) {
    s16 *p;
    ZeroFill(&g_Actors, 0x6480);
    p = &D_801270C0;
    *p = 1;
    g_NextActorId = 1;
    D_801274D8 = 0x240000;
    D_801270C2 = 0;
    D_801270C6 = 0;
    D_801270C7 = 0;
    D_801274DC = 0x271000;
    g_FarDistSq = 0x400000;
    ZeroFill((u8 *) p + 8, 0x400);
    func_8013E4B4();
}

extern void func_80178744();

void func_8017869C(s32 arg0) {
    s16 t;
    s32 a;
    if (AF(arg0, s16, 0xAA) != 0) {
        t = --AF(arg0, s16, 0xAA);
        if (t == 0) {
            a = 0x1000;
            if (AF(arg0, u16, 0x5E) == 0x1E) {
                AF(arg0, u16, 0x5E) = 0;
            }
        } else if (t > 0xF0) {
            a = 0x1000 - (0x100 - t) * 0x90;
        } else if (t < 0x10) {
            a = 0x1000 - t * 0x90;
        } else {
            a = 0x700;
        }
        func_80178744(arg0, a);
    }
}

void func_80178744(s32 arg0, s32 arg1) {
    if (AF(arg0, s32, 0x6C) != 0) {
        func_80178744(AF(arg0, s32, 0x6C), arg1);
    }
    AF(AF(arg0, s32, 0x20), s16, 0x18) = AF(AF(arg0, s32, 0x20), s16, 0x1A) = AF(AF(arg0, s32, 0x20), s16, 0x1C) = arg1;
    if (arg1 == 0x1000) {
        AF(AF(arg0, s32, 0x20), u16, 0x2C) &= ~0x10;
    } else {
        AF(AF(arg0, s32, 0x20), u16, 0x2C) |= 0x10;
    }
}

s32 func_801787D4(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    var_s0 = &g_Actors;
    var_s1 = 0;
    do {
        if ((AF(var_s0, u16, 0) != 0) && (AF(var_s0, u8, 0xC0) != 0)) {
            func_80178840((s32) var_s0);
        }
        var_s1 += 1;
        temp_v0 = var_s1 < 0x60;
        var_s0 = (s32 *)((u8 *)var_s0 + 0x10C);
    } while (temp_v0 != 0);
    return temp_v0;
}

extern u8 D_80190D50;
extern s32 D_80190D5C[];
extern void SetReactionStep();

void func_80178840(StageActor *arg0) {
    u8 n;
    if (arg0->hitState & 1) {
        n = AF(arg0, u8, 0x5E);
        if (n == 0xC) {
            StartRumbleScript((s32) &D_80190D50);
        }
        SetReactionStep(arg0, D_80190D5C[n]);
    }
}

extern s32 SpawnActorArg();
extern void PlaceObject();
extern void UpdateModelZYX();

s32 SpawnTalkMarker(s32 arg0, s32 arg1) {
    u16 sp[4];
    s32 o;

    o = SpawnActorArg(0x83, AF(arg0, s16, 0x70), 0);
    if (o == 0) {
        return 0;
    }
    AF(o, s32, 0x64) = arg0;
    sp[0] = AF(arg0, u16, 6);
    sp[1] = AF(arg0, u16, 0xA);
    sp[2] = AF(arg0, u16, 0xE);
    if (AF(arg0, s32, 0x20) != 0) {
        sp[3] = AF(AF(arg0, s32, 0x20), u16, 0x12);
    } else {
        sp[3] = 0;
    }
    PlaceObject(o, sp);
    UpdateModelZYX(o);
    AF(o, s32, 0xDC) = arg1;
    return o;
}

/* "finished?": the driver is done and the scripted camera idle */
s32 IsEventDone(void) {
    if (UpdateScript() != 0 && D_801EF3F0 == 0) {
        return 1;
    }
    return 0;
}

s32 UpdateScript(Mover *obj) {
    func_8017BC38(obj);
    func_8017A4AC();
    func_8017AE2C(obj);
    switch (D_801EF464) {
    case 1:
        if ((D_801EF2E0 = GetMessageAnswer(D_801EE5E0)) == 0) {
            break;
        }
        goto run;
    case 2:
        if ((D_801EF2E0 = GetMessageAnswer(D_801EE5E0)) == 0) {
            break;
        }
        goto run;
    case 4:
        if (--D_801EE1CC > 0) {
            break;
        }
        goto run;
    case 5:
        if (((VmWait)D_801EE60C)(obj) == 0) {
            break;
        }
    case 3:
    run:
        RunScript(obj, D_801EE1C8);
        break;
    case 6:
        switch (D_801EF2E0) {
        case 1:
        case -1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        }
        break;
    }
    return 0;
}

/* reset, patch the built-in script's goto target (D_80190E48, the 4th word of the script at D_80190E3C) and run it;
   clears Musashi's action handler first */
void StartEvent(s32 obj, s32 s) {
    D_80190E48[0] = s;
    ResetScriptVM();
    TakePlayerControl();
    func_8017435C();
    RunScript(obj, &D_80190E48[-3]);
}

/* reset, patch the built-in script's goto target and run it */
void StartEventKeepPlayer(s32 obj, s32 s) {
    D_80190E48[0] = s;
    ResetScriptVM();
    RunScript(obj, &D_80190E48[-3]);
}

void ResetAndRunScript(s32 arg0, s32 arg1) {
    ResetScriptVM();
    RunScript(arg0, arg1);
}

/* reset all VM state: the window, the gosub slot, the hooks, the 512-halfword command ring, the actor-move block */
void ResetScriptVM(void) {
    s32 i;

    D_801EF464 = 0;
    D_801EE5E0 = 0;
    D_801EE5F0 = 0;
    D_801EE5EC = 0;
    D_801EE5E8 = 0;
    D_801EE5E4 = 0;
    D_801EF2E0 = 1;
    D_801EE5F8 = 0;
    D_801EE5D8 = 0;
    for (i = 9; i >= 0; i--) {
        D_801EE624[i] = NULL;
    }
    for (i = 0x1FF; i >= 0; i--) {
        D_801EE1D0[i] = 0;
    }
    D_801EE5D0 = 0;
    D_801EE5D4 = 0;
    ZeroFill(D_801EF3A8, 0x14);
    func_8017B1D8();
}

s32 RunScript(s32 arg0, s32 arg1) {
    D_801EE1C8 = arg1;
    do {
        ScriptStep(arg0, D_801EE1C8);
    } while (D_801EF464 == 3);
    return (s32) D_801EF464;
}

s32 EndEvent(s32 arg0) {
    D_801EF464 = 0;
    return func_80174714();
}

/* the interpreter's declarations: VM state, the natives it calls, the helpers defined after it */
extern s32 D_801EE618;
extern s32 D_801EE620;
extern s32 D_801EF2D8;
extern s32 D_801EF3EC;
extern void AnimHelper();
extern void SetScript();
extern void RequestXaClip();
extern s32 HeadingToPlayer();
extern void ShowModel();
extern void HideModel();
extern void PlaceObject();
extern void ScreenPos();
extern s32 OpenMessageEx();
void func_80179B28(s32 arg0);
s32 func_80179D78(u16 *p);
s32 func_80179DCC(s16 a);
s32 func_80179DF8(void);
s32 func_80179E1C(s16 a);
s32 func_80179E48(s16 a);
s32 func_80179E74(s16 a);
s32 func_80179EA0(u16 *p);
s32 func_80179EE8(s16 a);
s32 func_80179F14(s16 a, s16 b);
s32 func_80179F44(void);
s32 func_80179F6C(s16 a);
s32 func_80179F98(u16 *p);
s32 func_80179FEC(u16 *p);
s32 func_8017A040(u16 *p);
s32 func_8017A094(s32 arg0);
s32 func_8017A0C4(s32 arg0);
s32 func_8017A0F4();
s32 func_8017A11C(void);
s32 func_8017A144(s32 arg0);
s32 func_8017A180(void);
s32 func_8017A1A8(void);
s32 func_8017A1D0(void);
s32 func_8017A1F8(void);
s32 func_8017A220(void);
s32 func_8017A248(void);
s32 func_8017A270(void);
s32 func_8017A298(void);
s32 func_8017A2C0(void);
s32 func_8017A2E8(void);
s32 func_8017A310(void);
s32 func_8017A338(void);
s32 func_8017A360(void);
s32 func_8017A388(void);
s32 func_8017A3B0(void);
s32 func_8017A3D8(void);
void func_8017B238(StageActor *obj, u32 arg);
void func_8017B614(StageActor *obj, u32 arg);
void func_8017B7A8(s32 arg0);
void func_8017B824(void);
s32 func_8017B880(void);
extern void func_8017B940();
extern void func_8017BA3C();             /* ScriptOpCameraCut and B490 pass only obj, as in the original */
void func_8017BB34(s32 obj, VmOrbit *b);

/* the interpreter step: one entry [op, arg] at pc; the handlers in the original's address order (op 0x4F falls
   through into 0x28); the y copy in 0x39 is read before the state store (combine keeps lw + sign extension), 0x5C
   compares the hooks with pc[1] itself (loop hoists it: the copy of the tested value), 0x24 writes the heading through
   an in-struct pointer so its loads rise above the state store */
void ScriptStep(s32 obj, s32 *pc) {
    SVECTOR in;
    SVECTOR out;
    s32 xy;
    s32 mu = (s32)&g_Player;
    VmMove *m = (VmMove *)D_801EF3A8;

    switch (pc[0]) {
    case 0x01:
        func_80179B28(D_801EE5E0);
        D_801EE5E0 = OpenMessageEx(pc[1], D_801EE5EC, D_801EE5F0 ? 0x48 : 0x40);
        D_801EF464 = 2;
        break;
    case 0x00:
        func_80179B28(D_801EE5E0);
        D_801EE5E0 = OpenMessageEx(pc[1], D_801EE5E4, D_801EE5E8 ? 0x48 : 0x40);
        D_801EF464 = 1;
        break;
    case 0x45:
        ((VmHook)pc[1])(obj);
        if (D_801EF2D8 != 0) {
            func_80179B28(D_801EE5E0);
            D_801EE5E0 = OpenMessageEx(AF(obj, s32, 0xE0), D_801EE5E4, D_801EE5E8 ? 0x48 : 0x40);
            D_801EF464 = 1;
            break;
        }
        D_801EF464 = 3;
        break;
    case 0x32:
        func_80179B28(D_801EE5E0);
        D_801EE5E0 = OpenMessageEx(((s32 *)(obj + 0xDC))[pc[1]], D_801EE5E4, D_801EE5E8 ? 0x48 : 0x40);
        D_801EF464 = 1;
        break;
    case 0x02:
        func_80179B28(D_801EE5E0);
        if (D_801EE5F8 != 0) {
            D_801EE1C8 = D_801EE5F8;
            D_801EE5F8 = 0;
            D_801EF464 = 3;
            return;
        }
        D_801EF464 = 6;
        break;
    case 0x06:
        func_80179DF8();
        D_801EF464 = 3;
        break;
    case 0x03:
        in.vx = ((u16 *)pc)[2];
        in.vy = 0;
        in.vz = ((u16 *)pc)[3];
        AnimHelper(&in);
        D_801EF464 = 3;
        break;
    case 0x04:
        in.vx = ((u16 *)pc)[2];
        in.vy = 0;
        in.vz = ((u16 *)pc)[3];
        FaceHelper(obj, &in, &out);
        AnimHelper(&out);
        D_801EF464 = 3;
        break;
    case 0x4C:
        func_80179D78((u16 *)pc[1]);
        D_801EF464 = 3;
        break;
    case 0x4D:
        in.vx = ((u16 *)pc[1])[0];
        in.vy = 0;
        in.vz = ((u16 *)pc[1])[2];
        FaceHelper(obj, &in, &out);
        out.pad = ((u16 *)pc[1])[3];
        func_80179D78((u16 *)&out);
        D_801EF464 = 3;
        break;
    case 0x15:
        in.vx = ((u16 *)pc)[2];
        in.vy = 0;
        in.vz = ((u16 *)pc)[3];
        FaceHelper(AF(obj, s32, 0xD4), &in, &out);
        AnimHelper(&out);
        D_801EF464 = 3;
        break;
    case 0x05:
        func_80179DCC(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x07:
        func_80179E1C(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x08:
        func_80179E74(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x09:
        in.vx = ((u16 *)pc)[2];
        in.vy = 0;
        in.vz = ((u16 *)pc)[3];
        func_80179EA0((u16 *)&in);
        D_801EF464 = 3;
        break;
    case 0x0A:
        in.vx = AF(obj, s16, 6);
        in.vy = AF(obj, s16, 0xA);
        in.vz = AF(obj, s16, 0xE);
        func_80179EA0((u16 *)&in);
        D_801EF464 = 3;
        break;
    case 0x16:
    {
        s32 q = AF(obj, s32, 0xD4);
        in.vx = AF(q, s16, 6);
        in.vy = AF(q, s16, 0xA);
        in.vz = AF(q, s16, 0xE);
        func_80179EA0((u16 *)&in);
        D_801EF464 = 3;
        break;
    }
    case 0x0B:
        func_8017A0F4();
        D_801EF464 = 3;
        break;
    case 0x0C:
        func_8017A11C();
        D_801EF464 = 3;
        break;
    case 0x0D:
        func_8017A180();
        D_801EF464 = 3;
        break;
    case 0x0E:
        func_8017A1A8();
        D_801EF464 = 3;
        break;
    case 0x10:
        func_8017A1D0();
        D_801EF464 = 3;
        break;
    case 0x46:
        func_8017A1F8();
        D_801EF464 = 3;
        break;
    case 0x59:
        func_8017A220();
        D_801EF464 = 3;
        break;
    case 0x5A:
        func_8017A248();
        D_801EF464 = 3;
        break;
    case 0x49:
        func_8017A144(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x47:
        func_8017A270();
        D_801EF464 = 3;
        break;
    case 0x17:
        func_80179EE8(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x18:
        func_80179F14(((s16 *)pc)[2], ((s16 *)pc)[3]);
        D_801EF464 = 3;
        break;
    case 0x19:
        func_80179F6C(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x1A:
        func_80179F98((u16 *)pc[1]);
        D_801EF464 = 3;
        break;
    case 0x51:
        func_8017A040((u16 *)pc[1]);
        D_801EF464 = 3;
        break;
    case 0x1B:
        D_801EE618 = pc[1];
        func_80179F44();
        D_801EF464 = 3;
        break;
    case 0x1C:
        func_8017A338();
        D_801EF464 = 3;
        break;
    case 0x52:
        func_8017A360();
        D_801EF464 = 3;
        break;
    case 0x1D:
        func_8017A388();
        D_801EF464 = 3;
        break;
    case 0x3B:
        func_8017A094(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x3C:
        func_8017A0C4(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x0F:
    case 0x3F:
        D_801EF464 = 4;
        D_801EE1CC = pc[1];
        break;
    case 0x3E:
        D_801EF464 = 5;
        D_801EE60C = pc[1];
        break;
    case 0x40:
        D_801EE60C = (s32)func_8017A3B0;
        D_801EF464 = 5;
        break;
    case 0x23:
        SetScript(obj, pc[1]);
        D_801EF464 = 3;
        break;
    case 0x31:
        SetScript(obj, ((s32 *)(obj + 0xDC))[pc[1]]);
        D_801EF464 = 3;
        break;
    case 0x24:
        ((s16 *)((s32 *)obj)[8])[9] = pc[1];
        D_801EF464 = 3;
        break;
    case 0x25:
        m->kind = 1;
        m->heading = AF(AF(obj, s32, 0x20), s16, 0x12) + ((u16 *)pc)[2];
        m->n = 0x1E;
        m->speed = ((u16 *)pc)[3];
        D_801EF464 = 3;
        break;
    case 0x48:
        m->kind = 1;
        m->heading = ((u16 *)pc)[2];
        m->n = 0x1E;
        m->speed = ((u16 *)pc)[3];
        D_801EF464 = 3;
        break;
    case 0x26:
        m->kind = 1;
        m->heading = HeadingToPlayer(obj);
        m->n = 0x1E;
        m->speed = pc[1];
        D_801EF464 = 3;
        break;
    case 0x3D:
        PlaceObject(obj, pc[1]);
        D_801EF464 = 3;
        break;
    case 0x27:
        m->kind = 2;
        m->fwd = ((u16 *)pc)[2];
        m->n = ((u16 *)pc)[3];
        D_801EF464 = 3;
        break;
    case 0x4F:
        m->walkTurn = 1;
        m->kind = 3;
        m->pt.vx = ((u16 *)pc)[2];
        m->pt.vy = AF(obj, s16, 0xA);
        m->pt.vz = ((u16 *)pc)[3];
        m->n = 0x10;
        m->speed = 4;
        D_801EF464 = 3;
    case 0x28:
        m->walkTurn = 0;
        m->kind = 3;
        m->pt.vx = ((u16 *)pc)[2];
        m->pt.vy = AF(obj, s16, 0xA);
        m->pt.vz = ((u16 *)pc)[3];
        m->n = 0x10;
        m->speed = 4;
        D_801EF464 = 3;
        break;
    case 0x29: {
        SVECTOR a;
        SVECTOR b;
        a.vx = ((u16 *)pc)[2];
        a.vy = AF(obj, s16, 0xA);
        a.vz = ((u16 *)pc)[3];
        FaceHelper(obj, &a, &b);
        m->walkTurn = 0;
        m->kind = 3;
        m->pt = b;
        m->n = 0x10;
        m->speed = 4;
        D_801EF464 = 3;
        break;
    }
    case 0x50: {
        SVECTOR a;
        SVECTOR b;
        a.vx = ((u16 *)pc)[2];
        a.vy = AF(obj, s16, 0xA);
        a.vz = ((u16 *)pc)[3];
        FaceHelper(obj, &a, &b);
        m->walkTurn = 1;
        m->kind = 3;
        m->pt = b;
        m->n = 0x10;
        m->speed = 4;
        D_801EF464 = 3;
        break;
    }
    case 0x2A:
        m->kind = 4;
        m->n = pc[1];
        D_801EF464 = 3;
        break;
    case 0x1E:
        func_8017B238(obj, pc[1]);
        D_801EF464 = 3;
        break;
    case 0x21:
        func_8017BA3C(obj, (VmOrbit *)pc[1]);
        func_8017B238(obj, (u32)&D_801EE5FC);
        D_801EF464 = 3;
        break;
    case 0x54:
        func_8017BB34(obj, (VmOrbit *)pc[1]);
        func_8017B238(obj, (u32)&D_801EE5FC);
        D_801EF464 = 3;
        break;
    case 0x1F:
        func_8017B614(obj, pc[1]);
        D_801EF464 = 3;
        break;
    case 0x22:
        func_8017BA3C(obj, (VmOrbit *)pc[1]);
        func_8017B614(obj, (u32)&D_801EE5FC);
        D_801EF464 = 3;
        break;
    case 0x55:
        func_8017BB34(obj, (VmOrbit *)pc[1]);
        func_8017B614(obj, (u32)&D_801EE5FC);
        D_801EF464 = 3;
        break;
    case 0x20:
        func_8017B7A8(obj);
        D_801EF464 = 3;
        break;
    case 0x4E:
        D_801EE620 = pc[1];
        func_8017B940(obj);
        D_801EF464 = 3;
        break;
    case 0x57:
        func_8017B824();
        D_801EF464 = 3;
        break;
    case 0x58:
        func_8017B880();
        D_801EF464 = 3;
        break;
    case 0x2B:
        D_801EF464 = 3;
        AF(obj, s16, 0x2) = pc[1];
        break;
    case 0x2C:
        D_801EF464 = 3;
        AF(obj, s16, 0x34) = pc[1];
        break;
    case 0x2D:
        D_801EF464 = 3;
        AF(obj, s32, 0xD8) = pc[1];
        break;
    case 0x2F:
        D_801EF464 = 3;
        AF(obj, s16, 0x10A) = pc[1];
        break;
    case 0x2E:
        D_801EF464 = 3;
        AF(obj, s32, 0xF8) = pc[1];
        break;
    case 0x11:
        func_8017A298();
        D_801EF464 = 3;
        break;
    case 0x12:
        func_8017A2C0();
        D_801EF464 = 3;
        break;
    case 0x13:
        func_8017A2E8();
        D_801EF464 = 3;
        break;
    case 0x14:
        func_8017A310();
        D_801EF464 = 3;
        break;
    case 0x33:
        D_801EF3EC = (s32)(pc + 2);
        ((VmHook)pc[1])(obj);
        D_801EF464 = 3;
        break;
    case 0x30:
        if (pc[1] == 0) {
            HideModel(obj);
        } else {
            ShowModel(obj);
        }
        D_801EF464 = 3;
        break;
    case 0x4A:
        func_80175414();
        D_801EF464 = 3;
        break;
    case 0x4B:
        func_80175454();
        D_801EF464 = 3;
        break;
    case 0x34:
        D_801EF464 = 3;
        D_801EE1C8 = pc[1];
        return;
    case 0x35:
        D_801EE5F8 = (s32)(pc + 2);
        D_801EF464 = 3;
        D_801EE1C8 = pc[1];
        return;
    case 0x36:
        D_801EF464 = 3;
        D_801EE1C8 += 8;
        if (((s32 (*)(s32))pc[1])(obj) != 0) {
            D_801EE1C8 = AF(D_801EE1C8, s32, 4);
            return;
        }
        break;
    case 0x37:
        D_801EF464 = 3;
        D_801EE5E4 = ((u16 *)pc)[2];
        D_801EE5E8 = ((u16 *)pc)[3];
        break;
    case 0x38:
        D_801EF464 = 3;
        D_801EE5EC = ((u16 *)pc)[2];
        D_801EE5F0 = ((u16 *)pc)[3];
        break;
    case 0x39: {
        SVECTOR a;
        SVECTOR b;
        s32 x;
        s32 y;
        a.vx = AF(obj, s16, 6);
        a.vy = AF(obj, s16, 0xA);
        a.vz = AF(obj, s16, 0xE);
        b.vx = AF(mu, s16, 6);
        b.vy = AF(mu, s16, 0xA);
        b.vz = AF(mu, s16, 0xE);
        ScreenPos(&xy, &a);
        x = xy;
        ScreenPos(&xy, &b);
        y = xy;
        D_801EF464 = 3;
        D_801EE5E4 = x;
        D_801EE5E8 = (s16)x >= (s16)y;
        break;
    }
    case 0x3A: {
        SVECTOR a;
        SVECTOR b;
        s32 x;
        a.vx = AF(obj, s16, 6);
        a.vy = AF(obj, s16, 0xA);
        a.vz = AF(obj, s16, 0xE);
        b.vx = AF(mu, s16, 6);
        b.vy = AF(mu, s16, 0xA);
        b.vz = AF(mu, s16, 0xE);
        ScreenPos(&xy, &a);
        x = xy;
        ScreenPos(&xy, &b);
        D_801EF464 = 3;
        D_801EE5EC = xy;
        D_801EE5F0 = (s16)x < (s16)xy;
        break;
    }
    case 0x41:
        PlaySoundId(((u16 *)pc)[2], ((u16 *)pc)[3]);
        D_801EF464 = 3;
        break;
    case 0x42:
        LoadItemIcon(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x43:
        D_801EE60C = (s32)func_8017A3D8;
        D_801EE614 = 0;
        D_801EF464 = 5;
        D_801EE610 = pc[1];
        break;
    case 0x44:
        RequestXaClip(((s16 *)pc)[2], ((s16 *)pc)[3]);
        D_801EF464 = 3;
        break;
    case 0x53:
        func_80179E48(pc[1]);
        D_801EF464 = 3;
        break;
    case 0x56:
        func_80179FEC((u16 *)pc[1]);
        D_801EF464 = 3;
        break;
    case 0x5B: {
        s32 i;
        for (i = 0; i < 10; i++) {
            if (D_801EE624[i] == NULL) {
                VmHook f = (VmHook)pc[1];
                D_801EE624[i] = f;
                f(obj);
                break;
            }
        }
        D_801EF464 = 3;
        break;
    }
    case 0x5C: {
        s32 i;
        VmHook f = (VmHook)pc[1];
        if (f != NULL) {
            for (i = 0; i < 10; i++) {
                if (D_801EE624[i] == (VmHook)pc[1]) {
                    D_801EE624[i] = NULL;
                    break;
                }
            }
            if (i == 10) {
                for (i = 0; i < 10; i++) {
                    if (D_801EE624[i] != NULL) {
                        D_801EE624[i] = NULL;
                        break;
                    }
                }
            }
        } else {
            for (i = 0; i < 10; i++) {
                if (D_801EE624[i] != NULL) {
                    D_801EE624[i] = NULL;
                    break;
                }
            }
        }
        D_801EF464 = 3;
        break;
    }
    case 0x5D:
        D_801EF464 = 3;
        break;
    }
    D_801EE1C8 += 8;
}

void func_80179B28(s32 arg0) {
    s16 temp_v1;

    if ((arg0 != 0) && (AF(arg0, s32, 0) != 0)) {
        temp_v1 = AF(arg0, s16, 4);
        if ((temp_v1 != 0) && (temp_v1 != 0xE)) {
            CloseMessage(arg0);
        }
    }
}

s32 func_80179B74(u16 *p) {
    u8 unused[0x28];
    s16 op;
    u16 w;

    op = *p++;
    D_801EE1D0[D_801EE5D4] = op;
    D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
    switch (op) {
    case 0:
    case 34:
        break;
    case 1:
    case 5:
        w = *p++;
        D_801EE1D0[D_801EE5D4] = w;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        break;
    case 19:
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        break;
    case 2:
    case 3:
    case 4:
    case 6:
    case 18:
    case 20:
    case 31:
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        break;
    case 23:
    case 28:
    case 29:
    case 32:
        w = *p++;
        D_801EE1D0[D_801EE5D4] = w;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        D_801EE1D0[D_801EE5D4] = *p++;
        D_801EE5D4 = (D_801EE5D4 + 1) & 0x1FF;
        break;
    }
}

/* scene command 1: Musashi walks to the point p (x, y, z) */
void AnimHelper(u16 *p) {
    s16 c[4];
    c[0] = 1;
    c[1] = p[0];
    c[2] = p[1];
    c[3] = p[2];
    func_80179B74((s32)c);
}

/* scene command pushers: a kind and its halfword arguments on the stack, queued by func_80179B74 */
s32 func_80179D78(u16 *p) {
    s16 c[5];
    c[0] = 0x1C;
    c[1] = p[0];
    c[2] = p[1];
    c[3] = p[2];
    c[4] = p[3];
    return func_80179B74((s32)c);
}

s32 func_80179DCC(s16 a) {
    s16 c[2];
    c[1] = a;
    c[0] = 2;
    return func_80179B74((s32)c);
}

s32 func_80179DF8(void) {
    s16 sp10;

    sp10 = 0;
    return func_80179B74((s32) &sp10);
}

s32 func_80179E1C(s16 a) {
    s16 c[2];
    c[1] = a;
    c[0] = 3;
    return func_80179B74((s32)c);
}

s32 func_80179E48(s16 a) {
    s16 c[2];
    c[1] = a;
    c[0] = 0x1F;
    return func_80179B74((s32)c);
}

s32 func_80179E74(s16 a) {
    s16 c[2];
    c[1] = a;
    c[0] = 4;
    return func_80179B74((s32)c);
}

s32 func_80179EA0(u16 *p) {
    s16 c[4];
    c[0] = 5;
    c[1] = p[0];
    c[2] = p[1];
    c[3] = p[2];
    return func_80179B74((s32)c);
}

s32 func_80179EE8(s16 a) {
    s16 c[2];
    c[1] = a;
    c[0] = 0x12;
    return func_80179B74((s32)c);
}

s32 func_80179F14(s16 a, s16 b) {
    s16 c[3];
    c[1] = a;
    c[0] = 0x13;
    c[2] = b;
    return func_80179B74((s32)c);
}

s32 func_80179F44(void) {
    s16 sp10;

    sp10 = 0x18;
    return func_80179B74((s32) &sp10);
}

s32 func_80179F6C(s16 a) {
    s16 c[2];
    c[1] = a;
    c[0] = 0x14;
    return func_80179B74((s32)c);
}

s32 func_80179F98(u16 *p) {
    s16 c[5];
    c[0] = 0x17;
    c[1] = p[0];
    c[2] = p[1];
    c[3] = p[2];
    c[4] = p[3];
    return func_80179B74((s32)c);
}

s32 func_80179FEC(u16 *p) {
    s16 c[5];
    c[0] = 0x20;
    c[1] = p[0];
    c[2] = p[1];
    c[3] = p[2];
    c[4] = p[3];
    return func_80179B74((s32)c);
}

s32 func_8017A040(u16 *p) {
    s16 c[5];
    c[0] = 0x1D;
    c[1] = p[0];
    c[2] = p[1];
    c[3] = p[2];
    c[4] = p[3];
    return func_80179B74((s32)c);
}

s32 func_8017A094(s32 arg0) {
    s16 sp10;

    D_801EE5F4 = arg0;
    sp10 = 0x15;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A0C4(s32 arg0) {
    s16 sp10;

    D_801EE5F4 = arg0;
    sp10 = 0x16;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A0F4(s32 arg0) {
    s16 sp10;

    sp10 = 7;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A11C(void) {
    s16 sp10;

    sp10 = 8;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A144(s32 arg0) {
    s16 sp10;
    s32 temp_v0;

    sp10 = 0x1B;
    temp_v0 = func_80179B74((s32) &sp10);
    D_801EE61C = arg0;
    return temp_v0;
}

s32 func_8017A180(void) {
    s16 sp10;

    sp10 = 9;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A1A8(void) {
    s16 sp10;

    sp10 = 0xA;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A1D0(void) {
    s16 sp10;

    sp10 = 0xB;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A1F8(void) {
    s16 sp10;

    sp10 = 0xC;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A220(void) {
    s16 sp10;

    sp10 = 0x21;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A248(void) {
    s16 sp10;

    sp10 = 0x22;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A270(void) {
    s16 sp10;

    sp10 = 0xD;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A298(void) {
    s16 sp10;

    sp10 = 0xE;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A2C0(void) {
    s16 sp10;

    sp10 = 0xF;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A2E8(void) {
    s16 sp10;

    sp10 = 0x10;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A310(void) {
    s16 sp10;

    sp10 = 0x11;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A338(void) {
    s16 sp10;

    sp10 = 0x19;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A360(void) {
    s16 sp10;

    sp10 = 0x1E;
    return func_80179B74((s32) &sp10);
}

s32 func_8017A388(void) {
    s16 sp10;

    sp10 = 0x1A;
    return func_80179B74((s32) &sp10);
}

/* 0 while D_801EE5D8 is 1 (the switch keeps the original's beqz / bne tests) */
s32 func_8017A3B0(void) {
    switch (D_801EE5D8) {
    case 0:
        return 1;
    case 1:
        return 0;
    }
    return 1;

}

s32 func_8017A3D8(void) {
    s16 temp_v0;

    switch (D_801EE614) {                           /* irregular */
    case 0x0:
        func_800D0CA0(1);
        D_801EE614 = (u16) D_801EE614 + 1;
        return 0;
    case 0x64:
        if (D_801EE610 != -1) {
            return RequestBgmPack((s32) D_801EE610) != 0;
        }
        return func_800D0CE0() == 1;
    default:
        temp_v0 = (u16) D_801EE614 + 1;
        D_801EE614 = temp_v0;
        if (temp_v0 >= 0x1E) {
            D_801EE614 = 0x64;
        }
        return 0;
    }
}

void func_8017A4AC(void) {
    Player *pl = &g_Player;
    s16 c[4];
    s16 d[3];
    s16 e[3];
    s16 f[4];
    s16 op;
    s16 a;
    u16 u;
    u16 v;
    u16 w;
    s32 t;

    if (D_801EE5D0 == D_801EE5D4) {
        if (EngineReady()) {
            D_801EE5D8 = 0;
        } else {
            D_801EE5D8 = 1;
        }
        return;
    }
    D_801EE5D8 = 1;
    if (!EngineReady()) {
        return;
    }
    op = D_801EE1D0[D_801EE5D0];
    D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
    switch (op) {
    case 0:
        SetIdleActionHandler();
        break;
    case 1:
        c[0] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[1] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[2] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        WalkPlayerTo(c);
        break;
    case 28:
        c[0] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[1] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[2] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[3] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80172894(c);
        break;
    case 2:
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_801729B0(a);
        break;
    case 3:
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80172B14(a);
        break;
    case 4:
        w = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80172B14(((u16)AF(pl, ModelObj *, 0x20)->rot.vy + (s16)w) & 0xFFF);
        break;
    case 5:
        c[0] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[1] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        c[2] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80172C50(c);
        break;
    case 6:
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80172D68(a);
        break;
    case 7:
        func_80172E94();
        break;
    case 8:
        func_80172ED4();
        break;
    case 27:
        ((VmCmdFn)D_801EE61C)();
        break;
    case 9:
        StartPlayerMotionAction599C();
        break;
    case 10:
        func_80172F24();
        break;
    case 11:
        func_80173174();
        break;
    case 12:
        func_80172F4C();
        break;
    case 33:
        EndPlayerMotionAction();
        break;
    case 34:
        func_80172FEC();
        break;
    case 13:
        func_801745DC();
        break;
    case 14:
    case 15:
        func_8017329C();
        break;
    case 16:
        func_8017334C();
        break;
    case 17:
        func_801733A4();
        break;
    case 18:
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_801738DC(a);
        break;
    case 19:
        u = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        t = (s16)u;
        v = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_801736B0(t, (s16)v);
        break;
    case 20:
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_801734BC(a);
        break;
    case 23:
        d[0] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        d[1] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        d[2] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_80173460(a, d);
        break;
    case 29:
        e[0] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        e[1] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        e[2] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_801733FC(a, e);
        break;
    case 32:
        f[0] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        f[1] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        f[2] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        f[3] = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        PlacePlayer(f);
        break;
    case 25:
        func_8017452C();
        break;
    case 30:
        func_80174584();
        break;
    case 26:
        func_8017427C();
        break;
    case 24:
        func_80174438(D_801EE618);
        break;
    case 21:
        func_80173A28(AF(D_801EE5F4, s32, 0), AF(D_801EE5F4, s32, 4), AF(D_801EE5F4, s32, 8),
                      AF(D_801EE5F4, s32, 0xC), D_801EE5F4 + 0x10, AF(D_801EE5F4, s32, 0x18));
        break;
    case 22:
        AF(D_801EE5F4, VmCmdFn3, 0x1C)(AF(D_801EE5F4, s32, 4), D_801EE5F4 + 0x10, AF(D_801EE5F4, s32, 0x18));
        break;
    case 31:
        a = D_801EE1D0[D_801EE5D0];
        D_801EE5D0 = (D_801EE5D0 + 1) & 0x1FF;
        func_801737B8(a);
        break;
    }
}

s32 LoadItemIcon(s32 arg0) {
    RECT rect;

    arg0--;
    rect.x = (arg0 & 3) * 16 + 0x280;
    rect.y = arg0 / 4 + 0x1F8;
    rect.w = 16;
    rect.h = 1;
    MoveImage(&rect, 0x160, 0x1C9);
    if (arg0 == 24) {
        rect.x = 0x2C0;
        rect.y = 0x1D0;
        rect.w = 32;
        rect.h = 40;
    } else {
        rect.x = (arg0 & 7) * 8 + 0x280;
        rect.y = (arg0 / 8) * 40 + 0x180;
        rect.w = 32;
        rect.h = 40;
    }
    MoveImage(&rect, 0x1C8, 0x190);
}

s32 ShowItemIcon(s32 arg0) {
    return LoadItemIcon(arg0);
}

s32 func_8017AE08(void) {
    return func_80174764() == 1;
}

/* the actor mover, run each frame by the driver; the walk step spells the target point two ways (the symbol for the
   heading, the block offset for the distance, as in the original: one constant would be shared in a register) */
void func_8017AE2C(Mover *obj) {
    VmMove *m = (VmMove *)D_801EF3A8;

    switch (m->kind) {
    case 0:
        break;
    case 1:
        if (--m->n <= 0) {
            obj->model->rot.vy = m->heading;
            goto stop;
        }
        obj->model->rot.vy += TurnStep(obj->model->rot.vy, m->heading, 6);
        break;
    case 2:
        SetForwardVelocity(obj, m->fwd << 8);
        MoveObject(obj);
        obj->pos[1].h.i -= 8;
        SnapToGround(obj);
        goto dec;
    case 3:
        if (m->n != 0) {
            if (m->walkTurn != 0) {
                if ((s16)AngleDist(obj->model->rot.vy, (s16)HeadingToPoint((u8 *)obj + 4, &m->pt)) < 0x100) {
                    m->n = 0;
                }
                obj->model->rot.vy = HeadingToPoint((u8 *)obj + 4, &D_801EF3B4);
                SetForwardVelocity(obj, -0x60000);
                MoveObject(obj);
                obj->pos[1].h.i -= 8;
                SnapToGround(obj);
                if (GroundDistSqTo(obj, (SVECTOR *)(D_801EF3A8 + 0xC)) <= 0x100) {
                    ((VmMove *)D_801EF3A8)->kind = 0;
                    ((VmMove *)D_801EF3A8)->n = 0;
                }
            }
            obj->model->rot.vy += TurnStep(obj->model->rot.vy, HeadingToPoint((u8 *)obj + 4, &m->pt), m->speed);
            if (--m->n <= 0) {
                m->n = 0;
            }
        } else {
            obj->model->rot.vy = HeadingToPoint((u8 *)obj + 4, &D_801EF3B4);
            SetForwardVelocity(obj, -0x60000);
            MoveObject(obj);
            obj->pos[1].h.i -= 8;
            SnapToGround(obj);
            if (GroundDistSqTo(obj, (SVECTOR *)(D_801EF3A8 + 0xC)) <= 0x100) {
                ((VmMove *)D_801EF3A8)->kind = 0;
                ((VmMove *)D_801EF3A8)->n = 0;
            }
        }
        break;
    case 4:
        MoveObject(obj);
    dec:
        if (--m->n <= 0) {
        stop:
            m->kind = 0;
            m->n = 0;
        }
        break;
    }
}

/* the camera eases toward the stored targets (each word through EaseValue); a fresh `q = p + k` per field keeps
   the stores plain references that conflict with the next target load, as in the original */
void func_8017B0E4(s32 *p, s32 n) {
    s32 *q;
    s16 k = n;

    q = p + 0x12;
    *q = (s16)EaseValue((s16)*q, D_801EE654, k);
    q = p + 0x13;
    *q = (s16)EaseValue((s16)*q, D_801EE656, k);
    q = p + 0x14;
    *q = (s16)EaseValue((s16)*q, D_801EE658, k);
    q = p + 0xF;
    *q = (s16)EaseValue((s16)*q, D_801EE64C, k);
    q = p + 0x10;
    *q = (s16)EaseValue((s16)*q, D_801EE64E, k);
    q = p + 0x11;
    *q = (s16)EaseValue((s16)*q, D_801EE650, k);
}

s32 func_8017B1D8(s32 arg0, s32 arg1) {
    SaveCamera();
    D_801EF3F0 = 0;
    D_801EE5DC = 0;
    D_801EE65C = g_PlayerX;
    D_801EE65E = D_80126B62;
    D_801EE660 = D_80126B66;
    return (s32) g_PlayerX;
}

/* camera cut (op 0x1E), the same pair without the steps */
void func_8017B238(StageActor *obj, u32 arg) {
    SVECTOR v[2];
    SVECTOR *p;

    if (arg >= 11) {
        p = (SVECTOR *)arg;
        v[0] = p[0];
        v[1] = p[1];
    } else {
        SVECTOR *q = &D_80190E4C[arg].a;
        SVECTOR *t = &D_80190E4C[arg].b;
        FaceHelper(obj, q, &v[0]);
        p = t;
        FaceHelper(obj, p, &v[1]);
    }
    *(SVECTOR *)&D_801EE654 = v[0];
    *(SVECTOR *)&D_801EE64C = v[1];
    SetCameraUpdate(func_8017BE60, 0);
    D_8012694C = 0;
    D_801EF3F0 = 1;
    D_801EE5DC = 0;
}

/* camera cut to the orbit point (op 0x21) */
void ScriptOpCameraCut(StageActor *obj) {
    SVECTOR v[2];
    SVECTOR *p;
    u32 arg;

    func_8017BA3C(obj);
    arg = (u32)&D_801EE5FC;
    if (arg >= 11) {
        p = (SVECTOR *)arg;
        v[0] = p[0];
        v[1] = p[1];
    } else {
        SVECTOR *q = &D_80190E4C[arg].a;
        SVECTOR *t = &D_80190E4C[arg].b;
        FaceHelper(obj, q, &v[0]);
        p = t;
        FaceHelper(obj, p, &v[1]);
    }
    *(SVECTOR *)&D_801EE654 = v[0];
    *(SVECTOR *)&D_801EE64C = v[1];
    D_801EF3F0 = 1;
    D_801EE5DC = 0;
}

/* camera move toward the orbit point: the eye/target pair from the stored orbit point (its address is the "preset", so
   the preset arm is never taken), then 30 steps; the struct-member reads and the pointer copy after the first call
   keep the original's order (block-scope q/t are set once, so sched1 sinks them; `p = t` after the call) */
void func_8017B490(StageActor *obj) {
    SVECTOR v[2];
    SVECTOR *p;
    u32 arg;

    func_8017BA3C(obj);
    arg = (u32)&D_801EE5FC;
    if (arg >= 11) {
        p = (SVECTOR *)arg;
        v[0] = p[0];
        v[1] = p[1];
    } else {
        SVECTOR *q = &D_80190E4C[arg].a;
        SVECTOR *t = &D_80190E4C[arg].b;
        FaceHelper(obj, q, &v[0]);
        p = t;
        FaceHelper(obj, p, &v[1]);
    }
    *(SVECTOR *)&D_801EE654 = v[0];
    *(SVECTOR *)&D_801EE64C = v[1];
    D_801EF3F0 = 1;
    D_801EE5DC = 0x1E;
    D_80126990 = ((SVECTOR *)&D_801EE654)->vx;
    D_80126994 = D_801EE656;
    D_80126998 = D_801EE658;
    D_80126984 = ((SVECTOR *)&D_801EE64C)->vx;
    D_80126988 = D_801EE64E;
    D_8012698C = D_801EE650;
}

/* camera move (op 0x1F): a preset (eye, target relative to obj) or a pointer to two SVECTORs, over 30 steps; the mode
   byte as a struct member so its store conflicts with the reads after it, as in the original */
void func_8017B614(StageActor *obj, u32 arg) {
    SVECTOR v[2];
    SVECTOR *p;

    if (arg >= 11) {
        p = (SVECTOR *)arg;
        v[0] = p[0];
        v[1] = p[1];
    } else {
        SVECTOR *q = &D_80190E4C[arg].a;
        SVECTOR *t = &D_80190E4C[arg].b;
        FaceHelper(obj, q, &v[0]);
        p = t;
        FaceHelper(obj, p, &v[1]);
    }
    *(SVECTOR *)&D_801EE654 = v[0];
    *(SVECTOR *)&D_801EE64C = v[1];
    SetCameraUpdate(func_8017BE60, 0);
    ((VmCamMode *)&D_8012694C)->m = 0;
    D_801EF3F0 = 1;
    D_801EE5DC = 0x1E;
    D_80126990 = ((SVECTOR *)&D_801EE654)->vx;
    D_80126994 = D_801EE656;
    D_80126998 = D_801EE658;
    D_80126984 = ((SVECTOR *)&D_801EE64C)->vx;
    D_80126988 = D_801EE64E;
    D_8012698C = D_801EE650;
    UpdateCamera();
}

void func_8017B7A8(s32 arg0) {
    D_8012694C = 1;
    D_801EE5DC = 0;
    D_801EE654 = (s16) D_80114F30;
    D_801EE656 = (s16) D_80114F34;
    D_801EE658 = (s16) D_80114F38;
    D_801EE64C = (s16) D_80114F24;
    D_801EE64E = (s16) D_80114F28;
    D_801EE650 = (s16) D_80114F2C;
}

/* saves two triples from the camera block (words 0x12-0x14, then 0xF-0x11); a walking pointer, as
   `g_ActiveCamera[k]` is an in-struct reference that sched1 hoists above the stores */
void func_8017B824(void) {
    s32 *p = g_ActiveCamera + 0x12;
    D_801EE66C = *p++;
    D_801EE66E = *p++;
    D_801EE670 = *p;
    p -= 5;
    D_801EE674 = *p++;
    D_801EE676 = *p++;
    D_801EE678 = *p;
}

s32 func_8017B880(void) {
    D_80114F30 = (s32) D_801EE66C;
    D_80114F34 = (s32) D_801EE66E;
    D_80114F38 = (s32) D_801EE670;
    D_80114F24 = (s32) D_801EE674;
    D_80114F28 = (s32) D_801EE676;
    D_80114F2C = (s32) D_801EE678;
    return (s32) D_801EE66C;
}

void func_8017B8E8(u8 *arg0) {
    AF(&D_801EE654, SVECTOR, 0x0) = AF(arg0, SVECTOR, 0x0);
    AF(&D_801EE64C, SVECTOR, 0x0) = AF(arg0, SVECTOR, 0x8);
}

/* the camera offset from Musashi to the scripted point: targets for both triples, the step reset */
void func_8017B940(void) {
    VECTOR d;

    D_8012694C = 2;
    d.vx = (s16)g_PlayerX - (s16)D_801EE65C;
    d.vy = (s16)D_80126B62 - (s16)D_801EE65E;
    d.vz = (s16)D_80126B66 - (s16)D_801EE660;
    D_801EE5DC = 0;
    D_801EE664 = d.vx;
    D_801EE666 = d.vy;
    D_801EE668 = d.vz;
    D_801EE654 = D_80114F30 + d.vx;
    D_801EE656 = D_80114F34 + d.vy;
    D_801EE658 = D_80114F38 + d.vz;
    D_801EE64C = D_80114F24 + d.vx;
    D_801EE64E = D_80114F28 + d.vy;
    D_801EE650 = D_80114F2C + d.vz;
}

/* the orbit point from obj: the block's offset taken to the world (FaceHelper), rotated by the block's angles */
void func_8017BA3C(StageActor *obj, VmOrbit *b) {
    SVECTOR r;
    MATRIX m;
    SVECTOR v;
    SVECTOR p;
    SVECTOR o;
    s32 flag;

    FaceHelper(obj, b, &p);
    D_801EE5FC = p;
    r.vx = -b->c;
    r.vy = b->a;
    r.vz = 0;
    v.vx = 0;
    v.vy = 0;
    v.vz = -b->b;
    RotMatrixZYX(&r, &m);
    m.t[0] = p.vx;
    m.t[1] = p.vy;
    m.t[2] = p.vz;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    RotTransSV(&v, &o, &flag);
    D_801EE604 = o;
}

/* the same from an absolute point */
void func_8017BB34(s32 obj, VmOrbit *b) {
    SVECTOR r;
    MATRIX m;
    SVECTOR v;
    SVECTOR p;
    SVECTOR o;
    s32 flag;

    p = b->off;
    D_801EE5FC = p;
    r.vx = -b->c;
    r.vy = b->a;
    r.vz = 0;
    v.vx = 0;
    v.vy = 0;
    v.vz = -b->b;
    RotMatrixZYX(&r, &m);
    m.t[0] = p.vx;
    m.t[1] = p.vy;
    m.t[2] = p.vz;
    SetRotMatrix(&m);
    SetTransMatrix(&m);
    RotTransSV(&v, &o, &flag);
    D_801EE604 = o;
}

/* the ten script hooks, each called with the object */
void func_8017BC38(s32 obj) {
    s32 i;
    for (i = 0; i < 10; i++) {
        if (D_801EE624[i] != NULL) {
            D_801EE624[i](obj);
        }
    }
}

void func_8017BCA0(s32 arg0) {
    u16 temp_v0;

    func_8017B0E4(arg0, 0xC);
    temp_v0 = D_801EE5DC + 1;
    D_801EE5DC = temp_v0;
    if ((s16) temp_v0 >= 0x1F) {
        D_801EF3F0 = 2;
    }
}

void func_8017BCF4(s32 arg0) {
    u16 temp_v0;

    func_8017B0E4(arg0, 6);
    temp_v0 = D_801EE5DC + 1;
    D_801EE5DC = temp_v0;
    if ((s16) temp_v0 >= 0x19) {
        RestoreSavedCamera();
        D_801EF3F0 = 0;
    }
}

void func_8017BD50(s32 arg0) {
    u16 temp_v0;

    func_8017B0E4(arg0, 6);
    temp_v0 = D_801EE5DC + 1;
    D_801EE5DC = temp_v0;
    if ((s16) temp_v0 >= 0x19) {
        if (D_801EE620 != 0) {
            ((void (*)())D_801EE620)();
        } else {
            D_80114F30 += D_801EE664;
            D_80114F34 += D_801EE666;
            D_80114F38 += D_801EE668;
            D_80114F24 += D_801EE664;
            D_80114F28 += D_801EE666;
            D_80114F2C += D_801EE668;
            RestoreSavedCamera();
        }
        D_801EF3F0 = 0;
    }
}

void func_8017BE60(u8 *arg0) {
    D_80190EEC[AF(arg0, u8, 4)]();
}
