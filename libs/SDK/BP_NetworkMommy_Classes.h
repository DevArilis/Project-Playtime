#pragma once

/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_NetworkMommy.BP_NetworkMommy_C
	 * Size -> 0x0300 (FullSize[0x08C0] - InheritedSize[0x05C0])
	 */
	class ABP_NetworkMommy_C : public ANetworkMommy
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_PlayerDetectionSystem_B_C*                      BPC_PlayerDetectionSystem_Mommy;                         // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              MommyFirstPersonArmsCosmetic;                            // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              MommyFirstPersonArms;                                    // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USavedState_C*                                       SavedState;                                              // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_SabotageComponent_C*                            BPC_SabotageComponent;                                   // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIPerceptionComponent*                              AIPerception;                                            // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAC_PuzzleHighlight_C*                               AC_PuzzleHighlight;                                      // 0x05F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 FirstPersonArmsSpring;                                   // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FirstPersonArmsOLD;                                      // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    TP_Camera;                                               // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 TP_SpringArm;                                            // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Mommy_Spider;                                         // 0x0620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 MommyMeshRotator;                                        // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_NavSystem_C*                                    BPC_NavSystem;                                           // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_MonsterUIHandler_C*                             BPC_MonsterUIHandler;                                    // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchTimeline_Lerp_Amount_8E671A8C4FDED64DF1DBD28E87292B86; // 0x0640(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         CrouchTimeline__Direction_8E671A8C4FDED64DF1DBD28E87292B86; // 0x0644(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M3CQ[0x3];                                   // 0x0645(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CrouchTimeline;                                          // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrosshairCooldown_Progress_EC366122450823DB5D7F27AE75A902D4; // 0x0650(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         CrosshairCooldown__Direction_EC366122450823DB5D7F27AE75A902D4; // 0x0654(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6OEE[0x3];                                   // 0x0655(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CrosshairCooldown;                                       // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Timeline_1_Outline_AE4A182948509AFCED602CB020489016;     // 0x0660(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Black_AE4A182948509AFCED602CB020489016;       // 0x0670(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Desaturation_AE4A182948509AFCED602CB020489016; // 0x0674(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_FishEye_AE4A182948509AFCED602CB020489016;     // 0x0678(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_AE4A182948509AFCED602CB020489016;  // 0x067C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_538T[0x3];                                   // 0x067D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ThirdPerson;                                             // 0x0688(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanPunch;                                                // 0x0689(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1L3J[0x2];                                   // 0x068A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HitReach;                                                // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Damage;                                                  // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanSpot;                                                 // 0x0694(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_84BY[0x3];                                   // 0x0695(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpotterRechargeTime;                                     // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpotterDuration;                                         // 0x069C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SpotPressed;                                             // 0x06A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V0XE[0x3];                                   // 0x06A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AmountOfWebs;                                            // 0x06A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WebFullRechargeTime;                                     // 0x06A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShootingWebs;                                            // 0x06AC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Footsteps;                                               // 0x06AD(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PunchPressed;                                            // 0x06AE(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZQ8N[0x1];                                   // 0x06AF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OriginalFOV;                                             // 0x06B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OriginalGimbalCameraLocation;                            // 0x06B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanWeb;                                                  // 0x06C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CSG0[0x7];                                   // 0x06C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        WebTimerHandle;                                          // 0x06C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class FName, struct FSabotageSaveData>                Sabotages;                                               // 0x06D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                SelectedSabotage;                                        // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CrouchCameraLocation;                                    // 0x0728(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             UncrouchCameraLocation;                                  // 0x0734(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OriginalCameraSpringArmLocation;                         // 0x0740(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InShrinker;                                              // 0x074C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q5RY[0x3];                                   // 0x074D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CameraRotation;                                          // 0x0750(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsJumpscareActive;                                       // 0x075C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AttackShouldHit;                                         // 0x075D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LFJA[0x2];                                   // 0x075E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ToggledThirdPersonDuringJumpscare;                       // 0x0760(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       CanMove;                                                 // 0x0770(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7XA3[0x3];                                   // 0x0771(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JumpscareDuration;                                       // 0x0774(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      JumpscareBlendOutTIme;                                   // 0x0778(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6UH2[0x4];                                   // 0x077C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_NetworkCharacter_C*                              LastJumpscaredPlayer;                                    // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FPresetSlot                                         Preset;                                                  // 0x0788(0x0058) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
		struct FMommySoundSet                                      Sounds;                                                  // 0x07E0(0x0070) Edit, BlueprintVisible, Net, DisableEditOnInstance
		float                                                      DistancefromMonsterJumpscare;                            // 0x0850(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3JM3[0x4];                                   // 0x0854(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     GrapplingSound;                                          // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sensitivity;                                             // 0x0860(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O4JR[0x4];                                   // 0x0864(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPresetSlot                                         DummyEmptyPresetSlot;                                    // 0x0868(0x0058) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetMonsterHUD();
		void InterfaceGetMonsterName(class FString* InterfaceMonsterName);
		void GetOwningMonster(class AActor** MonsterActor);
		void GetPickedUp(bool* PickedUp);
		void SetPickedUp(bool PickedUpIn, bool* PickedUpOut);
		void GetPickedUpPlayer(class ABP_NetworkCharacter_C** PickedUpPlayer);
		void SetPickedUpPlayer(class ABP_NetworkCharacter_C* PickedUpPlayerIn, class ABP_NetworkCharacter_C** PickedUpPlayerOut);
		void OnRep_Preset();
		void GetOwningPlayerController(class APlayerController** Controller);
		void ToggleThirdPerson();
		void SetFirstPersonVisiblity(bool Hide);
		void SetThirdPersonVisibility(bool Hide);
		void IsMonsterMoving(bool* ReturnValue);
		void PlayFirstPersonHitMontage(bool bLeftHand);
		void GetMommyHud(class UUI_MonsterHUD_C** MommyHUD);
		void MommyAttack(bool LeftHand, const struct FRotator& LookRotation);
		void LookAround(float Val, bool Pitch);
		void UserConstructionScript();
		void CrouchTimeline__FinishedFunc();
		void CrouchTimeline__UpdateFunc();
		void CrosshairCooldown__FinishedFunc();
		void CrosshairCooldown__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void InpActEvt_Sabotage_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_Emote_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_LeftControl_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_LeftControl_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_T_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_RightHandExtend_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_RightHandExtend_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_LeftHandExtend_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key);
		void OnNotifyEnd_81697CFA44A0B0C38D77BD8BF8EAED24(const class FName& NotifyName);
		void OnNotifyBegin_81697CFA44A0B0C38D77BD8BF8EAED24(const class FName& NotifyName);
		void OnInterrupted_81697CFA44A0B0C38D77BD8BF8EAED24(const class FName& NotifyName);
		void OnBlendOut_81697CFA44A0B0C38D77BD8BF8EAED24(const class FName& NotifyName);
		void OnCompleted_81697CFA44A0B0C38D77BD8BF8EAED24(const class FName& NotifyName);
		void CrouchCamera();
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4(float AxisValue);
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue);
		void InpAxisEvt_LookPitch_K2Node_InputAxisEvent_2(float AxisValue);
		void InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1(float AxisValue);
		void StopHeadBob();
		void StartHeadBob();
		void DoWebsMulti(const struct FRotator& LookRotation);
		void DoWebsClient(bool Shooting, const struct FRotator& LookRotation);
		void CallDoWebs();
		void PlaySwingSound();
		void RightAttackShake();
		void LeftAttackShake();
		void DoWebsServer(bool Shooting, const struct FRotator& LookRotation);
		void TrySpot();
		void TryPunch();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void FoundSteamInventory();
		void RemoveCosmeticsDueToError();
		void VerifyClientInventory();
		void ReceivePossessed(class AController* NewController);
		void PlayShootSound();
		void PlayGrabSound();
		void StartedJumpscare();
		void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void JumpscarePlayer(class ABP_NetworkCharacter_C* Player, bool EnoughSpaceforJumpscare);
		void BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
		void ShowHoleNav(bool Shown);
		void ServerDropPlayer();
		void PickupPlayer(class ABP_NetworkCharacter_C* PickedUpPlayer);
		void DropPlayer();
		void ReceiveTick(float DeltaSeconds);
		void InterfaceResetSecurityUI();
		void InterfaceToggleCanInteract(bool Condition);
		void InterfaceClientMonsterInteractUI(const class FText& InText);
		void InterfaceShowMonsterInteractUI(const class FText& InText);
		void CreateMommyWidget();
		void ReceiveBeginPlay();
		void DoEmote(int32_t Index);
		void Multicast_Emote(int32_t Index);
		void Server_Emote(int32_t Index);
		void Emote(int32_t Index);
		void NetSetCosmetics(const struct FPresetSlot& Preset, const struct FMommySoundSet& Sounds);
		void BP_OnRep_GrappleState();
		void Multicast_MommyLandSound();
		void OnLanded(const struct FHitResult& Hit);
		void Multicast_MommyLaunchSound();
		void EventMommyLaunched();
		void MommyGrappleGrabEvent();
		void MommyGrappleShotEvent();
		void Client_DoSpot(bool Start);
		void Server_TrySpot();
		void HitSound();
		void PlayHitMontage(bool LeftHand);
		void NetTraceAttack(bool LeftHand, const struct FRotator& LookRotation);
		void ExecuteUbergraph_BP_NetworkMommy(int32_t EntryPoint);
		void ToggledThirdPersonDuringJumpscare__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
