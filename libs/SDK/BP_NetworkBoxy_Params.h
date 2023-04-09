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
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetMonsterHUD
	 */
	struct ABP_NetworkBoxy_C_GetMonsterHUD_Params
	{
	public:
		unsigned char                                              UnknownData_3KQ6[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.SetPickedUpPlayer
	 */
	struct ABP_NetworkBoxy_C_SetPickedUpPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PickedUpPlayerIn;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_NetworkCharacter_C*                              PickedUpPlayerOut;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetPickedUpPlayer
	 */
	struct ABP_NetworkBoxy_C_GetPickedUpPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PickedUpPlayer;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.SetPickedUp
	 */
	struct ABP_NetworkBoxy_C_SetPickedUp_Params
	{
	public:
		bool                                                       PickedUpIn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PickedUpOut;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetPickedUp
	 */
	struct ABP_NetworkBoxy_C_GetPickedUp_Params
	{
	public:
		bool                                                       PickedUp;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetOwningMonster
	 */
	struct ABP_NetworkBoxy_C_GetOwningMonster_Params
	{
	public:
		class AActor*                                              MonsterActor;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceGetMonsterName
	 */
	struct ABP_NetworkBoxy_C_InterfaceGetMonsterName_Params
	{
	public:
		class FString                                              InterfaceMonsterName;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnRep_Sounds
	 */
	struct ABP_NetworkBoxy_C_OnRep_Sounds_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnRep_Preset
	 */
	struct ABP_NetworkBoxy_C_OnRep_Preset_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Toggle Third Person
	 */
	struct ABP_NetworkBoxy_C_ToggleThirdPerson_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Set First Person Visiblity
	 */
	struct ABP_NetworkBoxy_C_SetFirstPersonVisiblity_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Set Third Person Visibility
	 */
	struct ABP_NetworkBoxy_C_SetThirdPersonVisibility_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetOwningPlayerController
	 */
	struct ABP_NetworkBoxy_C_GetOwningPlayerController_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetClosestPlayer
	 */
	struct ABP_NetworkBoxy_C_GetClosestPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              Closest;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.IsMonsterMoving
	 */
	struct ABP_NetworkBoxy_C_IsMonsterMoving_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WPQ4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnRep_PunchButtonIsDown?
	 */
	struct ABP_NetworkBoxy_C_OnRep_PunchButtonIsDown_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.GetCurrentPunchDelay
	 */
	struct ABP_NetworkBoxy_C_GetCurrentPunchDelay_Params
	{
	public:
		float                                                      Output;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_730D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Get Punch Delays
	 */
	struct ABP_NetworkBoxy_C_GetPunchDelays_Params
	{
	public:
		TArray<float>                                              Array;                                                   // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Get Boxy HUD
	 */
	struct ABP_NetworkBoxy_C_GetBoxyHUD_Params
	{
	public:
		class UUI_MonsterHUD_C*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Trace Attack
	 */
	struct ABP_NetworkBoxy_C_TraceAttack_Params
	{
	public:
		float                                                      BaseDamage;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Hit;                                                     // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z5RB[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Look Around
	 */
	struct ABP_NetworkBoxy_C_LookAround_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Pitch;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V569[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Crouching__FinishedFunc
	 */
	struct ABP_NetworkBoxy_C_Crouching__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Crouching__UpdateFunc
	 */
	struct ABP_NetworkBoxy_C_Crouching__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Emote_K2Node_InputActionEvent_8
	 */
	struct ABP_NetworkBoxy_C_InpActEvt_Emote_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Jump_K2Node_InputActionEvent_7
	 */
	struct ABP_NetworkBoxy_C_InpActEvt_Jump_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_3
	 */
	struct ABP_NetworkBoxy_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_2
	 */
	struct ABP_NetworkBoxy_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_T_K2Node_InputKeyEvent_1
	 */
	struct ABP_NetworkBoxy_C_InpActEvt_T_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Run_K2Node_InputActionEvent_6
	 */
	struct ABP_NetworkBoxy_C_InpActEvt_Run_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Run_K2Node_InputActionEvent_5
	 */
	struct ABP_NetworkBoxy_C_InpActEvt_Run_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnNotifyEnd_2D8CC7C7449A3A38C86D4987CC324303
	 */
	struct ABP_NetworkBoxy_C_OnNotifyEnd_2D8CC7C7449A3A38C86D4987CC324303_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnNotifyBegin_2D8CC7C7449A3A38C86D4987CC324303
	 */
	struct ABP_NetworkBoxy_C_OnNotifyBegin_2D8CC7C7449A3A38C86D4987CC324303_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnInterrupted_2D8CC7C7449A3A38C86D4987CC324303
	 */
	struct ABP_NetworkBoxy_C_OnInterrupted_2D8CC7C7449A3A38C86D4987CC324303_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnBlendOut_2D8CC7C7449A3A38C86D4987CC324303
	 */
	struct ABP_NetworkBoxy_C_OnBlendOut_2D8CC7C7449A3A38C86D4987CC324303_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnCompleted_2D8CC7C7449A3A38C86D4987CC324303
	 */
	struct ABP_NetworkBoxy_C_OnCompleted_2D8CC7C7449A3A38C86D4987CC324303_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Left Hand Extend_K2Node_InputActionEvent_4
	 */
	struct ABP_NetworkBoxy_C_InpActEvt_LeftHandExtend_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Right Hand Extend_K2Node_InputActionEvent_3
	 */
	struct ABP_NetworkBoxy_C_InpActEvt_RightHandExtend_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Sabotage_K2Node_InputActionEvent_2
	 */
	struct ABP_NetworkBoxy_C_InpActEvt_Sabotage_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 */
	struct ABP_NetworkBoxy_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Try To Uncrouch
	 */
	struct ABP_NetworkBoxy_C_TryToUncrouch_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Try To Crouch
	 */
	struct ABP_NetworkBoxy_C_TryToCrouch_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.CrouchCamera
	 */
	struct ABP_NetworkBoxy_C_CrouchCamera_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnLanded
	 */
	struct ABP_NetworkBoxy_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.ForceUncrouch
	 */
	struct ABP_NetworkBoxy_C_ForceUncrouch_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.SetCapsuleHeight
	 */
	struct ABP_NetworkBoxy_C_SetCapsuleHeight_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Reset;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.MultiSetCapsuleHeight
	 */
	struct ABP_NetworkBoxy_C_MultiSetCapsuleHeight_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Reset;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4
	 */
	struct ABP_NetworkBoxy_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3
	 */
	struct ABP_NetworkBoxy_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpAxisEvt_LookPitch_K2Node_InputAxisEvent_2
	 */
	struct ABP_NetworkBoxy_C_InpAxisEvt_LookPitch_K2Node_InputAxisEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1
	 */
	struct ABP_NetworkBoxy_C_InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast Begin Charge
	 */
	struct ABP_NetworkBoxy_C_MulticastBeginCharge_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Server Begin Charge
	 */
	struct ABP_NetworkBoxy_C_ServerBeginCharge_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast Release Charge
	 */
	struct ABP_NetworkBoxy_C_MulticastReleaseCharge_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Server_ReleaseCharge
	 */
	struct ABP_NetworkBoxy_C_Server_ReleaseCharge_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.K2_OnMovementModeChanged
	 */
	struct ABP_NetworkBoxy_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReleaseCharge
	 */
	struct ABP_NetworkBoxy_C_ReleaseCharge_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.BeginCharge
	 */
	struct ABP_NetworkBoxy_C_BeginCharge_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.BndEvt__BP_NetworkBoxy_CharacterMovement_K2Node_ComponentBoundEvent_1_Punch__DelegateSignature
	 */
	struct ABP_NetworkBoxy_C_BndEvt__BP_NetworkBoxy_CharacterMovement_K2Node_ComponentBoundEvent_1_Punch__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.ShowHoleNav
	 */
	struct ABP_NetworkBoxy_C_ShowHoleNav_Params
	{
	public:
		bool                                                       Shown;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.DropPlayer
	 */
	struct ABP_NetworkBoxy_C_DropPlayer_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Server Drop Player
	 */
	struct ABP_NetworkBoxy_C_ServerDropPlayer_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Punch!
	 */
	struct ABP_NetworkBoxy_C_Punch_Params
	{
	public:
		bool                                                       LeftHand;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.BndEvt__BP_NetworkBoxy_FistPkg_K2Node_ComponentBoundEvent_0_FistStateChanged__DelegateSignature
	 */
	struct ABP_NetworkBoxy_C_BndEvt__BP_NetworkBoxy_FistPkg_K2Node_ComponentBoundEvent_0_FistStateChanged__DelegateSignature_Params
	{
	public:
		EFistState                                                 State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReceiveEndPlay
	 */
	struct ABP_NetworkBoxy_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.FoundSteamInventory
	 */
	struct ABP_NetworkBoxy_C_FoundSteamInventory_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.RemoveCosmeticsDueToError
	 */
	struct ABP_NetworkBoxy_C_RemoveCosmeticsDueToError_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.VerifyClientInventory
	 */
	struct ABP_NetworkBoxy_C_VerifyClientInventory_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReceivePossessed
	 */
	struct ABP_NetworkBoxy_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Jumpscare Player
	 */
	struct ABP_NetworkBoxy_C_JumpscarePlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EnoughSpaceforJumpscare;                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
	 */
	struct ABP_NetworkBoxy_C_BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x003C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.PickupPlayer
	 */
	struct ABP_NetworkBoxy_C_PickupPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PickedUpPlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.CreateBoxyWidget
	 */
	struct ABP_NetworkBoxy_C_CreateBoxyWidget_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceClientMonsterInteractUI
	 */
	struct ABP_NetworkBoxy_C_InterfaceClientMonsterInteractUI_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceShowMonsterInteractUI
	 */
	struct ABP_NetworkBoxy_C_InterfaceShowMonsterInteractUI_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceToggleCanInteract
	 */
	struct ABP_NetworkBoxy_C_InterfaceToggleCanInteract_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.InterfaceResetSecurityUI
	 */
	struct ABP_NetworkBoxy_C_InterfaceResetSecurityUI_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReceiveTick
	 */
	struct ABP_NetworkBoxy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.ReceiveBeginPlay
	 */
	struct ABP_NetworkBoxy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Client_HasFullyCharged
	 */
	struct ABP_NetworkBoxy_C_Client_HasFullyCharged_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.BndEvt__BP_NetworkKangaroo_CharacterMovement_K2Node_ComponentBoundEvent_0_HasFullyCharged__DelegateSignature
	 */
	struct ABP_NetworkBoxy_C_BndEvt__BP_NetworkKangaroo_CharacterMovement_K2Node_ComponentBoundEvent_0_HasFullyCharged__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.ResetFOVAndHUD
	 */
	struct ABP_NetworkBoxy_C_ResetFOVAndHUD_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.PlayLandedSound
	 */
	struct ABP_NetworkBoxy_C_PlayLandedSound_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast_LandedSound
	 */
	struct ABP_NetworkBoxy_C_Multicast_LandedSound_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.PlayJumpSound
	 */
	struct ABP_NetworkBoxy_C_PlayJumpSound_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast_PlayJumpSound
	 */
	struct ABP_NetworkBoxy_C_Multicast_PlayJumpSound_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.OnJumped
	 */
	struct ABP_NetworkBoxy_C_OnJumped_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Hitsound
	 */
	struct ABP_NetworkBoxy_C_Hitsound_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Toggle Music Box
	 */
	struct ABP_NetworkBoxy_C_ToggleMusicBox_Params
	{
	public:
		bool                                                       MusicBoxOn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.DoEmote
	 */
	struct ABP_NetworkBoxy_C_DoEmote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Multicast_Emote
	 */
	struct ABP_NetworkBoxy_C_Multicast_Emote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Server_Emote
	 */
	struct ABP_NetworkBoxy_C_Server_Emote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Emote
	 */
	struct ABP_NetworkBoxy_C_Emote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.NetSetCosmetics
	 */
	struct ABP_NetworkBoxy_C_NetSetCosmetics_Params
	{
	public:
		struct FPresetSlot                                         Preset;                                                  // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FBoxySoundSet                                       Sounds;                                                  // 0x0058(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.PlaySwingHitSound
	 */
	struct ABP_NetworkBoxy_C_PlaySwingHitSound_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.HUD_HitAnimation
	 */
	struct ABP_NetworkBoxy_C_HUD_HitAnimation_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.ExecuteUbergraph_BP_NetworkBoxy
	 */
	struct ABP_NetworkBoxy_C_ExecuteUbergraph_BP_NetworkBoxy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SM49[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Doesn't Want Crouch During Jumpscare__DelegateSignature
	 */
	struct ABP_NetworkBoxy_C_DoesntWantCrouchDuringJumpscare__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Want Crouch During Jumpscare__DelegateSignature
	 */
	struct ABP_NetworkBoxy_C_WantCrouchDuringJumpscare__DelegateSignature_Params
	{	};

	/**
	 * Function BP_NetworkBoxy.BP_NetworkBoxy_C.Toggled Third Person During Jumpscare__DelegateSignature
	 */
	struct ABP_NetworkBoxy_C_ToggledThirdPersonDuringJumpscare__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
