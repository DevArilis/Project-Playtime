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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetMonsterHUD
	 */
	struct ABP_NetworkHuggy_C_GetMonsterHUD_Params
	{
	public:
		unsigned char                                              UnknownData_1Q0G[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.SetPickedUpPlayer
	 */
	struct ABP_NetworkHuggy_C_SetPickedUpPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PickedUpPlayerIn;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_NetworkCharacter_C*                              PickedUpPlayerOut;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetPickedUpPlayer
	 */
	struct ABP_NetworkHuggy_C_GetPickedUpPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PickedUpPlayer;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.SetPickedUp
	 */
	struct ABP_NetworkHuggy_C_SetPickedUp_Params
	{
	public:
		bool                                                       PickedUpIn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PickedUpOut;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetPickedUp
	 */
	struct ABP_NetworkHuggy_C_GetPickedUp_Params
	{
	public:
		bool                                                       PickedUp;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetOwningMonster
	 */
	struct ABP_NetworkHuggy_C_GetOwningMonster_Params
	{
	public:
		class AActor*                                              MonsterActor;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceGetMonsterName
	 */
	struct ABP_NetworkHuggy_C_InterfaceGetMonsterName_Params
	{
	public:
		class FString                                              InterfaceMonsterName;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_CurrentVent2
	 */
	struct ABP_NetworkHuggy_C_OnRep_CurrentVent2_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_InVent?
	 */
	struct ABP_NetworkHuggy_C_OnRep_InVent_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_CurrentVent
	 */
	struct ABP_NetworkHuggy_C_OnRep_CurrentVent_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Footstep
	 */
	struct ABP_NetworkHuggy_C_Footstep_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_Preset
	 */
	struct ABP_NetworkHuggy_C_OnRep_Preset_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Toggle ThirdPerson
	 */
	struct ABP_NetworkHuggy_C_ToggleThirdPerson_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Set First Person Visiblity
	 */
	struct ABP_NetworkHuggy_C_SetFirstPersonVisiblity_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Set Third Person Visibility
	 */
	struct ABP_NetworkHuggy_C_SetThirdPersonVisibility_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetOwningPlayerController
	 */
	struct ABP_NetworkHuggy_C_GetOwningPlayerController_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlayThirdPersonHitAnimation
	 */
	struct ABP_NetworkHuggy_C_PlayThirdPersonHitAnimation_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.BabyHuggyDownTrace
	 */
	struct ABP_NetworkHuggy_C_BabyHuggyDownTrace_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             DownLocation;                                            // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnRep_CanPlaceBaby
	 */
	struct ABP_NetworkHuggy_C_OnRep_CanPlaceBaby_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlayFirstPersonHitMontage
	 */
	struct ABP_NetworkHuggy_C_PlayFirstPersonHitMontage_Params
	{
	public:
		bool                                                       LeftHand;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E9II[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.GetHuggyHUD
	 */
	struct ABP_NetworkHuggy_C_GetHuggyHUD_Params
	{
	public:
		class UUI_MonsterHUD_C*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.LookAround
	 */
	struct ABP_NetworkHuggy_C_LookAround_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Pitch;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3B2F[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrouchCam__FinishedFunc
	 */
	struct ABP_NetworkHuggy_C_CrouchCam__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrouchCam__UpdateFunc
	 */
	struct ABP_NetworkHuggy_C_CrouchCam__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrosshairCooldown__FinishedFunc
	 */
	struct ABP_NetworkHuggy_C_CrosshairCooldown__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrosshairCooldown__UpdateFunc
	 */
	struct ABP_NetworkHuggy_C_CrosshairCooldown__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.ChargeHugFOVMod__FinishedFunc
	 */
	struct ABP_NetworkHuggy_C_ChargeHugFOVMod__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.ChargeHugFOVMod__UpdateFunc
	 */
	struct ABP_NetworkHuggy_C_ChargeHugFOVMod__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Emote_K2Node_InputActionEvent_12
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_Emote_K2Node_InputActionEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Jump_K2Node_InputActionEvent_11
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_Jump_K2Node_InputActionEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_T_K2Node_InputKeyEvent_10
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_T_K2Node_InputKeyEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_9
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_8
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_7
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_S_K2Node_InputKeyEvent_6
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_S_K2Node_InputKeyEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_W_K2Node_InputKeyEvent_5
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_W_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_D_K2Node_InputKeyEvent_4
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_D_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_A_K2Node_InputKeyEvent_3
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_A_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Interact_K2Node_InputActionEvent_10
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_Interact_K2Node_InputActionEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Interact_K2Node_InputActionEvent_9
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_Interact_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Run_K2Node_InputActionEvent_8
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_Run_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Run_K2Node_InputActionEvent_7
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_Run_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Right Hand Extend_K2Node_InputActionEvent_6
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_RightHandExtend_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Right Hand Extend_K2Node_InputActionEvent_5
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_RightHandExtend_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Left Hand Extend_K2Node_InputActionEvent_4
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_LeftHandExtend_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Left Hand Extend_K2Node_InputActionEvent_3
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_LeftHandExtend_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Sabotage_K2Node_InputActionEvent_2
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_Sabotage_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 */
	struct ABP_NetworkHuggy_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.K2_OnEndCrouch
	 */
	struct ABP_NetworkHuggy_C_K2_OnEndCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.K2_OnStartCrouch
	 */
	struct ABP_NetworkHuggy_C_K2_OnStartCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.CrouchCamera
	 */
	struct ABP_NetworkHuggy_C_CrouchCamera_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnLanded
	 */
	struct ABP_NetworkHuggy_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.ForceUncrouch
	 */
	struct ABP_NetworkHuggy_C_ForceUncrouch_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.MultiSetCapsuleHeight
	 */
	struct ABP_NetworkHuggy_C_MultiSetCapsuleHeight_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Reset;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.SetCapsuleHeight
	 */
	struct ABP_NetworkHuggy_C_SetCapsuleHeight_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Reset;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpAxisEvt_LookYaw_K2Node_InputAxisEvent_4
	 */
	struct ABP_NetworkHuggy_C_InpAxisEvt_LookYaw_K2Node_InputAxisEvent_4_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpAxisEvt_LookPitch_K2Node_InputAxisEvent_3
	 */
	struct ABP_NetworkHuggy_C_InpAxisEvt_LookPitch_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
	 */
	struct ABP_NetworkHuggy_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
	 */
	struct ABP_NetworkHuggy_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.StopHeadBob
	 */
	struct ABP_NetworkHuggy_C_StopHeadBob_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.StartHeadBob
	 */
	struct ABP_NetworkHuggy_C_StartHeadBob_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.StopChargeBob
	 */
	struct ABP_NetworkHuggy_C_StopChargeBob_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.StartChargeBob
	 */
	struct ABP_NetworkHuggy_C_StartChargeBob_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_ScanAlertOff
	 */
	struct ABP_NetworkHuggy_C_Server_ScanAlertOff_Params
	{
	public:
		int32_t                                                    vent;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_ScanAlert
	 */
	struct ABP_NetworkHuggy_C_Server_ScanAlert_Params
	{
	public:
		int32_t                                                    vent;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_ExitVent
	 */
	struct ABP_NetworkHuggy_C_Server_ExitVent_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_CycleVent
	 */
	struct ABP_NetworkHuggy_C_Server_CycleVent_Params
	{
	public:
		int32_t                                                    VentIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_TryToVent
	 */
	struct ABP_NetworkHuggy_C_Server_TryToVent_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.TryStartBabyHuggy
	 */
	struct ABP_NetworkHuggy_C_TryStartBabyHuggy_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.TryToCharge
	 */
	struct ABP_NetworkHuggy_C_TryToCharge_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.TryToRightPunch
	 */
	struct ABP_NetworkHuggy_C_TryToRightPunch_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.TryToLeftPunch
	 */
	struct ABP_NetworkHuggy_C_TryToLeftPunch_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.ChargingSound
	 */
	struct ABP_NetworkHuggy_C_ChargingSound_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.ChargeHitSound
	 */
	struct ABP_NetworkHuggy_C_ChargeHitSound_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Play Swing Sound
	 */
	struct ABP_NetworkHuggy_C_PlaySwingSound_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server Enable Movement
	 */
	struct ABP_NetworkHuggy_C_ServerEnableMovement_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server Disable Movement and Head Bob
	 */
	struct ABP_NetworkHuggy_C_ServerDisableMovementandHeadBob_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.RightAttackShake
	 */
	struct ABP_NetworkHuggy_C_RightAttackShake_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.LeftAttackShake
	 */
	struct ABP_NetworkHuggy_C_LeftAttackShake_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_2_HasEndedCharging__DelegateSignature
	 */
	struct ABP_NetworkHuggy_C_BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_2_HasEndedCharging__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_1_HasStartedCharging__DelegateSignature
	 */
	struct ABP_NetworkHuggy_C_BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_1_HasStartedCharging__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReverseChargeHugFOVMod
	 */
	struct ABP_NetworkHuggy_C_ReverseChargeHugFOVMod_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlayChargeHugFOVMod
	 */
	struct ABP_NetworkHuggy_C_PlayChargeHugFOVMod_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Set Baby Huggy Skeletal
	 */
	struct ABP_NetworkHuggy_C_SetBabyHuggySkeletal_Params
	{
	public:
		class ABP_BabyHuggy_C*                                     BabyHuggy;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlaceHuggyServer
	 */
	struct ABP_NetworkHuggy_C_PlaceHuggyServer_Params
	{
	public:
		struct FVector                                             HuggyLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            HuggyRotation;                                           // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReceiveEndPlay
	 */
	struct ABP_NetworkHuggy_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.FoundSteamInventory
	 */
	struct ABP_NetworkHuggy_C_FoundSteamInventory_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.RemoveCosmeticsDueToError
	 */
	struct ABP_NetworkHuggy_C_RemoveCosmeticsDueToError_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.VerifyClientInventory
	 */
	struct ABP_NetworkHuggy_C_VerifyClientInventory_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReceivePossessed
	 */
	struct ABP_NetworkHuggy_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.CreateHuggyWidget
	 */
	struct ABP_NetworkHuggy_C_CreateHuggyWidget_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.ShowHoleNav
	 */
	struct ABP_NetworkHuggy_C_ShowHoleNav_Params
	{
	public:
		bool                                                       Shown;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
	 */
	struct ABP_NetworkHuggy_C_BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x003C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.DropPlayer
	 */
	struct ABP_NetworkHuggy_C_DropPlayer_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.PickupPlayer
	 */
	struct ABP_NetworkHuggy_C_PickupPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PickedUpPlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server Drop Player
	 */
	struct ABP_NetworkHuggy_C_ServerDropPlayer_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceResetSecurityUI
	 */
	struct ABP_NetworkHuggy_C_InterfaceResetSecurityUI_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceToggleCanInteract
	 */
	struct ABP_NetworkHuggy_C_InterfaceToggleCanInteract_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceShowMonsterInteractUI
	 */
	struct ABP_NetworkHuggy_C_InterfaceShowMonsterInteractUI_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.InterfaceClientMonsterInteractUI
	 */
	struct ABP_NetworkHuggy_C_InterfaceClientMonsterInteractUI_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReceiveTick
	 */
	struct ABP_NetworkHuggy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.ReceiveBeginPlay
	 */
	struct ABP_NetworkHuggy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.MultiHugPlayer
	 */
	struct ABP_NetworkHuggy_C_MultiHugPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PlayerToHug;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BlendOut;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Charging;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       EnoughSpaceforJumpscare;                                 // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.NetHugPlayer
	 */
	struct ABP_NetworkHuggy_C_NetHugPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PlayerToHug;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.ServerOnly_ToggleHugHitScan
	 */
	struct ABP_NetworkHuggy_C_ServerOnly_ToggleHugHitScan_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.DoEmote
	 */
	struct ABP_NetworkHuggy_C_DoEmote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Multicast_Emote
	 */
	struct ABP_NetworkHuggy_C_Multicast_Emote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Server_Emote
	 */
	struct ABP_NetworkHuggy_C_Server_Emote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Emote
	 */
	struct ABP_NetworkHuggy_C_Emote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.NetSetCosmetics
	 */
	struct ABP_NetworkHuggy_C_NetSetCosmetics_Params
	{
	public:
		struct FPresetSlot                                         Preset;                                                  // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FHuggySoundSet                                      Sounds;                                                  // 0x0058(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.HitSound
	 */
	struct ABP_NetworkHuggy_C_HitSound_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.PlayHitMontage
	 */
	struct ABP_NetworkHuggy_C_PlayHitMontage_Params
	{
	public:
		bool                                                       LeftHand;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.NetTraceAttack
	 */
	struct ABP_NetworkHuggy_C_NetTraceAttack_Params
	{
	public:
		bool                                                       LeftHand;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.ExecuteUbergraph_BP_NetworkHuggy
	 */
	struct ABP_NetworkHuggy_C_ExecuteUbergraph_BP_NetworkHuggy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnSabotage__DelegateSignature
	 */
	struct ABP_NetworkHuggy_C_OnSabotage__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnPlacedBabyHuggy__DelegateSignature
	 */
	struct ABP_NetworkHuggy_C_OnPlacedBabyHuggy__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnJump__DelegateSignature
	 */
	struct ABP_NetworkHuggy_C_OnJump__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.OnBasicAttack__DelegateSignature
	 */
	struct ABP_NetworkHuggy_C_OnBasicAttack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkHuggy.BP_NetworkHuggy_C.Toggled Third Person During Jumpscare__DelegateSignature
	 */
	struct ABP_NetworkHuggy_C_ToggledThirdPersonDuringJumpscare__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
