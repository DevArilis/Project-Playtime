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
	 * BlueprintGeneratedClass BP_NetworkBoxy.BP_NetworkBoxy_C
	 * Size -> 0x0328 (FullSize[0x0888] - InheritedSize[0x0560])
	 */
	class ABP_NetworkBoxy_C : public ANetworkKangaroo
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0560(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_PlayerDetectionSystem_B_C*                      BPC_PlayerDetectionSystemBoxy;                           // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CosmeticFirstPersonArms;                                 // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CosmeticMesh;                                            // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FirstPersonArms;                                         // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     boxy_jingle2;                                            // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USavedState_C*                                       SavedState;                                              // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_SabotageComponent_C*                            BPC_SabotageComponent;                                   // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIPerceptionComponent*                              AIPerception;                                            // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAC_PuzzleHighlight_C*                               AC_PuzzleHighlight;                                      // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 FP_SpringArm;                                            // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FirstPersonArmsOLD;                                      // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_NavSystem_C*                                    BPC_NavSystem;                                           // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    TP_Camera;                                               // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 TP_SpringArm;                                            // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_MonsterUIHandler_C*                             BPC_MonsterUIHandler;                                    // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Crouching_Lerp_Amount_5497B96E490FBA053B54CFA65F4A9DEF;  // 0x05E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Crouching__Direction_5497B96E490FBA053B54CFA65F4A9DEF;   // 0x05E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S86G[0x3];                                   // 0x05E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Crouching;                                               // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OriginalWalkSpeed;                                       // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             UncrouchCameraLocation;                                  // 0x05F4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CrouchCameraLocation;                                    // 0x0600(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1QAE[0x4];                                   // 0x060C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InterfaceMonsterName;                                    // 0x0610(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      Sensitivity;                                             // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ThirdPerson;                                             // 0x0624(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TYHZ[0x3];                                   // 0x0625(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageToDo;                                              // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HitReach;                                                // 0x062C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PunchDelayIndex;                                         // 0x0630(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HandToPunchWith;                                         // 0x0634(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BarragePushed;                                           // 0x0635(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CooledDownGrab;                                          // 0x0636(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_092L[0x1];                                   // 0x0637(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GrabCooldown;                                            // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BarrageCooldown;                                         // 0x063C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LaunchPushed;                                            // 0x0640(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FJRO[0x7];                                   // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     ChargeUpSound;                                           // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OriginalCamLocation;                                     // 0x0650(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PunchCooledDown;                                         // 0x065C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Footsteps;                                               // 0x065D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_80IF[0x2];                                   // 0x065E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_NetworkCharacter_C*>                      Survivors;                                               // 0x0660(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      ProxSoundDistance;                                       // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProxSoundVolume;                                         // 0x0674(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LeapStartPos;                                            // 0x0678(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Leaping;                                                 // 0x0684(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ACY3[0x3];                                   // 0x0685(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FSabotageSaveData>                Sabotages;                                               // 0x0688(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                SelectedSabotage;                                        // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InShrinker;                                              // 0x06E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B1FC[0x3];                                   // 0x06E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlaybackIndex;                                           // 0x06E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundWave*>                                  BoxyJingles;                                             // 0x06E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		float                                                      PlaybackPercent;                                         // 0x06F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PercentOffset;                                           // 0x06FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NewBPMIndex;                                             // 0x0700(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Boxy_Jingle1_IsActive;                                   // 0x0704(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsJumpscareActive;                                       // 0x0705(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NVXZ[0x2];                                   // 0x0706(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ToggledThirdPersonDuringJumpscare;                       // 0x0708(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FRotator                                            CameraRotation;                                          // 0x0718(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TT4C[0x4];                                   // 0x0724(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPresetSlot                                         Preset;                                                  // 0x0728(0x0058) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
		EMonsterSecondaryObjectives                                NewObjective;                                            // 0x0780(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M1V4[0x7];                                   // 0x0781(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoxySoundSet                                       Sounds;                                                  // 0x0788(0x0078) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
		float                                                      DistancefromMonsterJumpscare;                            // 0x0800(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanMove;                                                 // 0x0804(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F2AU[0x3];                                   // 0x0805(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CrouchStartTime;                                         // 0x0808(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2NB9[0x4];                                   // 0x080C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPresetSlot                                         DummyEmptyPresetSlot;                                    // 0x0810(0x0058) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             WantCrouchDuringJumpscare;                               // 0x0868(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             DoesntWantCrouchDuringJumpscare;                         // 0x0878(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetMonsterHUD();
		void SetPickedUpPlayer(class ABP_NetworkCharacter_C* PickedUpPlayerIn, class ABP_NetworkCharacter_C** PickedUpPlayerOut);
		void GetPickedUpPlayer(class ABP_NetworkCharacter_C** PickedUpPlayer);
		void SetPickedUp(bool PickedUpIn, bool* PickedUpOut);
		void GetPickedUp(bool* PickedUp);
		void GetOwningMonster(class AActor** MonsterActor);
		void InterfaceGetMonsterName(class FString* InterfaceMonsterName);
		void OnRep_Sounds();
		void OnRep_Preset();
		void ToggleThirdPerson();
		void SetFirstPersonVisiblity(bool Hide);
		void SetThirdPersonVisibility(bool Hide);
		void GetOwningPlayerController(class APlayerController** Controller);
		void GetClosestPlayer(class ABP_NetworkCharacter_C** Closest, float* Distance);
		void IsMonsterMoving(bool* ReturnValue);
		void OnRep_PunchButtonIsDown();
		void GetCurrentPunchDelay(float* Output);
		void GetPunchDelays(TArray<float>* Array);
		class UUI_MonsterHUD_C* GetBoxyHUD();
		void TraceAttack(float BaseDamage, bool* Hit);
		void LookAround(float Val, bool Pitch);
		void Crouching__FinishedFunc();
		void Crouching__UpdateFunc();
		void InpActEvt_Emote_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_LeftControl_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_LeftControl_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_T_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_Run_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_Run_K2Node_InputActionEvent_5(const struct FKey& Key);
		void OnNotifyEnd_2D8CC7C7449A3A38C86D4987CC324303(const class FName& NotifyName);
		void OnNotifyBegin_2D8CC7C7449A3A38C86D4987CC324303(const class FName& NotifyName);
		void OnInterrupted_2D8CC7C7449A3A38C86D4987CC324303(const class FName& NotifyName);
		void OnBlendOut_2D8CC7C7449A3A38C86D4987CC324303(const class FName& NotifyName);
		void OnCompleted_2D8CC7C7449A3A38C86D4987CC324303(const class FName& NotifyName);
		void InpActEvt_LeftHandExtend_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_RightHandExtend_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Sabotage_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key);
		void TryToUncrouch();
		void TryToCrouch();
		void CrouchCamera();
		void OnLanded(const struct FHitResult& Hit);
		void ForceUncrouch();
		void SetCapsuleHeight(float NewHeight, bool Reset);
		void MultiSetCapsuleHeight(float NewHeight, bool Reset);
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4(float AxisValue);
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue);
		void InpAxisEvt_LookPitch_K2Node_InputAxisEvent_2(float AxisValue);
		void InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1(float AxisValue);
		void MulticastBeginCharge();
		void ServerBeginCharge();
		void MulticastReleaseCharge();
		void Server_ReleaseCharge();
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void ReleaseCharge();
		void BeginCharge();
		void BndEvt__BP_NetworkBoxy_CharacterMovement_K2Node_ComponentBoundEvent_1_Punch__DelegateSignature();
		void ShowHoleNav(bool Shown);
		void DropPlayer();
		void ServerDropPlayer();
		void Punch(bool LeftHand);
		void BndEvt__BP_NetworkBoxy_FistPkg_K2Node_ComponentBoundEvent_0_FistStateChanged__DelegateSignature(EFistState State);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void FoundSteamInventory();
		void RemoveCosmeticsDueToError();
		void VerifyClientInventory();
		void ReceivePossessed(class AController* NewController);
		void JumpscarePlayer(class ABP_NetworkCharacter_C* Player, bool EnoughSpaceforJumpscare);
		void BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
		void PickupPlayer(class ABP_NetworkCharacter_C* PickedUpPlayer);
		void CreateBoxyWidget();
		void InterfaceClientMonsterInteractUI(const class FText& InText);
		void InterfaceShowMonsterInteractUI(const class FText& InText);
		void InterfaceToggleCanInteract(bool Condition);
		void InterfaceResetSecurityUI();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void Client_HasFullyCharged();
		void BndEvt__BP_NetworkKangaroo_CharacterMovement_K2Node_ComponentBoundEvent_0_HasFullyCharged__DelegateSignature();
		void ResetFOVAndHUD();
		void PlayLandedSound();
		void Multicast_LandedSound();
		void PlayJumpSound();
		void Multicast_PlayJumpSound();
		void OnJumped();
		void Hitsound();
		void ToggleMusicBox(bool MusicBoxOn);
		void DoEmote(int32_t Index);
		void Multicast_Emote(int32_t Index);
		void Server_Emote(int32_t Index);
		void Emote(int32_t Index);
		void NetSetCosmetics(const struct FPresetSlot& Preset, const struct FBoxySoundSet& Sounds);
		void PlaySwingHitSound();
		void HUD_HitAnimation();
		void ExecuteUbergraph_BP_NetworkBoxy(int32_t EntryPoint);
		void DoesntWantCrouchDuringJumpscare__DelegateSignature();
		void WantCrouchDuringJumpscare__DelegateSignature();
		void ToggledThirdPersonDuringJumpscare__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
