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
	 * BlueprintGeneratedClass BP_NetworkHuggy.BP_NetworkHuggy_C
	 * Size -> 0x0350 (FullSize[0x0870] - InheritedSize[0x0520])
	 */
	class ABP_NetworkHuggy_C : public ANetworkHuggy
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0520(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_PlayerDetectionSystem_B_C*                      BPC_PlayerDetectionSystem_Huggy;                         // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm;                                               // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FPHuggyCosmetic;                                         // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FPHuggy;                                                 // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ThirdPersonHuggy;                                        // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow1;                                                  // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_SabotageComponent_C*                            BPC_SabotageComponent;                                   // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAC_PuzzleHighlight_C*                               AC_PuzzleHighlight;                                      // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIPerceptionComponent*                              AIPerception;                                            // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_MonsterUIHandler_C*                             BPC_MonsterUIHandler;                                    // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_NavSystem_C*                                    BPC_NavSystem;                                           // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BabyHuggyVisualizer;                                     // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BabyHuggyParent;                                         // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    TP_Camera;                                               // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 TP_SpringArm;                                            // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     InnerMonsterRadius;                                      // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 FP_SpringArm;                                            // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FirstPersonHuggy;                                        // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     HugPoint;                                                // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    InteractZone;                                            // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchCam_Lerp_Amount_E83E38C741AC72E45A04149B1BFE4B79;  // 0x05D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         CrouchCam__Direction_E83E38C741AC72E45A04149B1BFE4B79;   // 0x05D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_07TX[0x3];                                   // 0x05D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CrouchCam;                                               // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrosshairCooldown_Progress_EE037E994CF0466CD72D80AD0C9E5979; // 0x05E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         CrosshairCooldown__Direction_EE037E994CF0466CD72D80AD0C9E5979; // 0x05E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MVPP[0x3];                                   // 0x05E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CrosshairCooldown;                                       // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChargeHugFOVMod_FOVMod_8C3635DE46C18D6B48D0FD8A4F731568; // 0x05F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ChargeHugFOVMod__Direction_8C3635DE46C18D6B48D0FD8A4F731568; // 0x05F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2YHW[0x3];                                   // 0x05F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ChargeHugFOVMod;                                         // 0x05F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OriginalWalkSpeed;                                       // 0x0600(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HitReach;                                                // 0x0604(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LeftClicked;                                             // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VUVS[0x3];                                   // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageToDo;                                              // 0x060C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanChargeHug;                                            // 0x0610(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HD6I[0x7];                                   // 0x0611(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_NetworkCharacter_C*                              PlayerToHug;                                             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sensitivity;                                             // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CurrentlyChargeHugging;                                  // 0x0624(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YNKW[0x3];                                   // 0x0625(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OriginalFOV;                                             // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RLDQ[0x4];                                   // 0x062C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InterfaceMonsterName;                                    // 0x0630(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       ThirdPerson;                                             // 0x0640(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RG4H[0x3];                                   // 0x0641(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdditiveFOV;                                             // 0x0644(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             UncrouchCameraLocation;                                  // 0x0648(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CrouchCameraLocation;                                    // 0x0654(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InPlacementMode;                                         // 0x0660(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X841[0x3];                                   // 0x0661(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            BabyHuggyRotation;                                       // 0x0664(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             BabyHuggyLocation;                                       // 0x0670(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanPlaceBaby;                                            // 0x067C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_GDDP[0x3];                                   // 0x067D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ActiveBabyHuggy;                                         // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanPunch;                                                // 0x0688(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0PO4[0x3];                                   // 0x0689(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BabyHuggyCooldown;                                       // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              BabyHuggyClass;                                          // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanInteractUI;                                           // 0x0698(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DXHS[0x3];                                   // 0x0699(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OriginalCamLocation;                                     // 0x069C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxPlaceDistance;                                        // 0x06A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Footsteps;                                               // 0x06AC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftHandPressed;                                         // 0x06AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RightHandPressed;                                        // 0x06AE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ChargeHugPressed;                                        // 0x06AF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlaceBabyHuggyPressed;                                   // 0x06B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PreventAttack;                                           // 0x06B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PreventFirstAbility;                                     // 0x06B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PreventSecondAbility;                                    // 0x06B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ChargeStartLocation;                                     // 0x06B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, struct FSabotageSaveData>                Sabotages;                                               // 0x06C0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                SelectedSabotage;                                        // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InShrinker;                                              // 0x0718(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsJumpscareActive;                                       // 0x0719(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanLookAround;                                           // 0x071A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AttackisLeftHand;                                        // 0x071B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TracePlayAttackAnimation;                                // 0x071C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OI0O[0x3];                                   // 0x071D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ToggledThirdPersonDuringJumpscare;                       // 0x0720(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnBasicAttack;                                           // 0x0730(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlacedBabyHuggy;                                       // 0x0740(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnJump;                                                  // 0x0750(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FPresetSlot                                         Preset;                                                  // 0x0760(0x0058) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
		bool                                                       PreventSabotage;                                         // 0x07B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1BYV[0x7];                                   // 0x07B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSabotage;                                              // 0x07C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FHuggySoundSet                                      Sounds;                                                  // 0x07D0(0x0060) Edit, BlueprintVisible, Net, DisableEditOnInstance
		float                                                      DistancefromMonsterJumpscare;                            // 0x0830(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CameraRotation;                                          // 0x0834(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InVent;                                                  // 0x0840(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_IXJE[0x7];                                   // 0x0841(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_HuggyVent_C*>                             VentsArray;                                              // 0x0848(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    CurrentVent;                                             // 0x0858(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EntryVent;                                               // 0x085C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ScanningVent;                                            // 0x0860(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsVentBeingScanned;                                      // 0x0864(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QA0A[0x3];                                   // 0x0865(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHuggyVentManager_C*                                 VentManager;                                             // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetMonsterHUD();
		void SetPickedUpPlayer(class ABP_NetworkCharacter_C* PickedUpPlayerIn, class ABP_NetworkCharacter_C** PickedUpPlayerOut);
		void GetPickedUpPlayer(class ABP_NetworkCharacter_C** PickedUpPlayer);
		void SetPickedUp(bool PickedUpIn, bool* PickedUpOut);
		void GetPickedUp(bool* PickedUp);
		void GetOwningMonster(class AActor** MonsterActor);
		void InterfaceGetMonsterName(class FString* InterfaceMonsterName);
		void OnRep_CurrentVent2();
		void OnRep_InVent();
		void OnRep_CurrentVent();
		void Footstep();
		void OnRep_Preset();
		void ToggleThirdPerson();
		void SetFirstPersonVisiblity(bool Hide);
		void SetThirdPersonVisibility(bool Hide);
		void GetOwningPlayerController(class APlayerController** Controller);
		void PlayThirdPersonHitAnimation();
		void BabyHuggyDownTrace(const struct FVector& InLocation, struct FVector* DownLocation);
		void OnRep_CanPlaceBaby();
		void PlayFirstPersonHitMontage(bool LeftHand);
		class UUI_MonsterHUD_C* GetHuggyHUD();
		void LookAround(float Val, bool Pitch);
		void CrouchCam__FinishedFunc();
		void CrouchCam__UpdateFunc();
		void CrosshairCooldown__FinishedFunc();
		void CrosshairCooldown__UpdateFunc();
		void ChargeHugFOVMod__FinishedFunc();
		void ChargeHugFOVMod__UpdateFunc();
		void InpActEvt_Emote_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_T_K2Node_InputKeyEvent_10(const struct FKey& Key);
		void InpActEvt_LeftControl_K2Node_InputKeyEvent_9(const struct FKey& Key);
		void InpActEvt_LeftControl_K2Node_InputKeyEvent_8(const struct FKey& Key);
		void InpActEvt_SpaceBar_K2Node_InputKeyEvent_7(const struct FKey& Key);
		void InpActEvt_S_K2Node_InputKeyEvent_6(const struct FKey& Key);
		void InpActEvt_W_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_D_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_A_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_Run_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_Run_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_RightHandExtend_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_RightHandExtend_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_LeftHandExtend_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_LeftHandExtend_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Sabotage_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key);
		void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void CrouchCamera();
		void OnLanded(const struct FHitResult& Hit);
		void ForceUncrouch();
		void MultiSetCapsuleHeight(float NewHeight, bool Reset);
		void SetCapsuleHeight(float NewHeight, bool Reset);
		void InpAxisEvt_LookYaw_K2Node_InputAxisEvent_4(float AxisValue);
		void InpAxisEvt_LookPitch_K2Node_InputAxisEvent_3(float AxisValue);
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue);
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
		void StopHeadBob();
		void StartHeadBob();
		void StopChargeBob();
		void StartChargeBob();
		void Server_ScanAlertOff(int32_t vent);
		void Server_ScanAlert(int32_t vent);
		void Server_ExitVent();
		void Server_CycleVent(int32_t VentIndex);
		void Server_TryToVent();
		void TryStartBabyHuggy();
		void TryToCharge();
		void TryToRightPunch();
		void TryToLeftPunch();
		void ChargingSound();
		void ChargeHitSound();
		void PlaySwingSound();
		void ServerEnableMovement();
		void ServerDisableMovementandHeadBob();
		void RightAttackShake();
		void LeftAttackShake();
		void BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_2_HasEndedCharging__DelegateSignature();
		void BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_1_HasStartedCharging__DelegateSignature();
		void ReverseChargeHugFOVMod();
		void PlayChargeHugFOVMod();
		void SetBabyHuggySkeletal(class ABP_BabyHuggy_C* BabyHuggy);
		void PlaceHuggyServer(const struct FVector& HuggyLocation, const struct FRotator& HuggyRotation);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void FoundSteamInventory();
		void RemoveCosmeticsDueToError();
		void VerifyClientInventory();
		void ReceivePossessed(class AController* NewController);
		void CreateHuggyWidget();
		void ShowHoleNav(bool Shown);
		void BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
		void DropPlayer();
		void PickupPlayer(class ABP_NetworkCharacter_C* PickedUpPlayer);
		void ServerDropPlayer();
		void InterfaceResetSecurityUI();
		void InterfaceToggleCanInteract(bool Condition);
		void InterfaceShowMonsterInteractUI(const class FText& InText);
		void InterfaceClientMonsterInteractUI(const class FText& InText);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void MultiHugPlayer(class ABP_NetworkCharacter_C* PlayerToHug, float Duration, float BlendOut, bool Charging, bool EnoughSpaceforJumpscare);
		void NetHugPlayer(class ABP_NetworkCharacter_C* PlayerToHug, float Duration);
		void ServerOnly_ToggleHugHitScan(bool Condition);
		void DoEmote(int32_t Index);
		void Multicast_Emote(int32_t Index);
		void Server_Emote(int32_t Index);
		void Emote(int32_t Index);
		void NetSetCosmetics(const struct FPresetSlot& Preset, const struct FHuggySoundSet& Sounds);
		void HitSound();
		void PlayHitMontage(bool LeftHand);
		void NetTraceAttack(bool LeftHand);
		void ExecuteUbergraph_BP_NetworkHuggy(int32_t EntryPoint);
		void OnSabotage__DelegateSignature();
		void OnPlacedBabyHuggy__DelegateSignature();
		void OnJump__DelegateSignature();
		void OnBasicAttack__DelegateSignature();
		void ToggledThirdPersonDuringJumpscare__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
