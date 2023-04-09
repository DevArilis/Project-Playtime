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
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.GetMonsterHUD
	 */
	struct ABP_NetworkMommy_C_GetMonsterHUD_Params
	{
	public:
		unsigned char                                              UnknownData_YWGM[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InterfaceGetMonsterName
	 */
	struct ABP_NetworkMommy_C_InterfaceGetMonsterName_Params
	{
	public:
		class FString                                              InterfaceMonsterName;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.GetOwningMonster
	 */
	struct ABP_NetworkMommy_C_GetOwningMonster_Params
	{
	public:
		class AActor*                                              MonsterActor;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.GetPickedUp
	 */
	struct ABP_NetworkMommy_C_GetPickedUp_Params
	{
	public:
		bool                                                       PickedUp;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.SetPickedUp
	 */
	struct ABP_NetworkMommy_C_SetPickedUp_Params
	{
	public:
		bool                                                       PickedUpIn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PickedUpOut;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.GetPickedUpPlayer
	 */
	struct ABP_NetworkMommy_C_GetPickedUpPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PickedUpPlayer;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.SetPickedUpPlayer
	 */
	struct ABP_NetworkMommy_C_SetPickedUpPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PickedUpPlayerIn;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_NetworkCharacter_C*                              PickedUpPlayerOut;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.OnRep_Preset
	 */
	struct ABP_NetworkMommy_C_OnRep_Preset_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.GetOwningPlayerController
	 */
	struct ABP_NetworkMommy_C_GetOwningPlayerController_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Toggle Third Person
	 */
	struct ABP_NetworkMommy_C_ToggleThirdPerson_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Set First Person Visiblity
	 */
	struct ABP_NetworkMommy_C_SetFirstPersonVisiblity_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Set Third Person Visibility
	 */
	struct ABP_NetworkMommy_C_SetThirdPersonVisibility_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Is Monster Moving
	 */
	struct ABP_NetworkMommy_C_IsMonsterMoving_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_81B7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Play First Person Hit Montage
	 */
	struct ABP_NetworkMommy_C_PlayFirstPersonHitMontage_Params
	{
	public:
		bool                                                       bLeftHand;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.GetMommyHud
	 */
	struct ABP_NetworkMommy_C_GetMommyHud_Params
	{
	public:
		class UUI_MonsterHUD_C*                                    MommyHUD;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.MommyAttack
	 */
	struct ABP_NetworkMommy_C_MommyAttack_Params
	{
	public:
		bool                                                       LeftHand;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BW9G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            LookRotation;                                            // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.LookAround
	 */
	struct ABP_NetworkMommy_C_LookAround_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Pitch;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M2B6[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.UserConstructionScript
	 */
	struct ABP_NetworkMommy_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.CrouchTimeline__FinishedFunc
	 */
	struct ABP_NetworkMommy_C_CrouchTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.CrouchTimeline__UpdateFunc
	 */
	struct ABP_NetworkMommy_C_CrouchTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.CrosshairCooldown__FinishedFunc
	 */
	struct ABP_NetworkMommy_C_CrosshairCooldown__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.CrosshairCooldown__UpdateFunc
	 */
	struct ABP_NetworkMommy_C_CrosshairCooldown__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Timeline_1__FinishedFunc
	 */
	struct ABP_NetworkMommy_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Timeline_1__UpdateFunc
	 */
	struct ABP_NetworkMommy_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpActEvt_Sabotage_K2Node_InputActionEvent_9
	 */
	struct ABP_NetworkMommy_C_InpActEvt_Sabotage_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpActEvt_Emote_K2Node_InputActionEvent_8
	 */
	struct ABP_NetworkMommy_C_InpActEvt_Emote_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_3
	 */
	struct ABP_NetworkMommy_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_2
	 */
	struct ABP_NetworkMommy_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpActEvt_T_K2Node_InputKeyEvent_1
	 */
	struct ABP_NetworkMommy_C_InpActEvt_T_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpActEvt_Jump_K2Node_InputActionEvent_7
	 */
	struct ABP_NetworkMommy_C_InpActEvt_Jump_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpActEvt_Interact_K2Node_InputActionEvent_6
	 */
	struct ABP_NetworkMommy_C_InpActEvt_Interact_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpActEvt_Interact_K2Node_InputActionEvent_5
	 */
	struct ABP_NetworkMommy_C_InpActEvt_Interact_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpActEvt_Right Hand Extend_K2Node_InputActionEvent_4
	 */
	struct ABP_NetworkMommy_C_InpActEvt_RightHandExtend_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpActEvt_Right Hand Extend_K2Node_InputActionEvent_3
	 */
	struct ABP_NetworkMommy_C_InpActEvt_RightHandExtend_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpActEvt_Left Hand Extend_K2Node_InputActionEvent_2
	 */
	struct ABP_NetworkMommy_C_InpActEvt_LeftHandExtend_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 */
	struct ABP_NetworkMommy_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.OnNotifyEnd_81697CFA44A0B0C38D77BD8BF8EAED24
	 */
	struct ABP_NetworkMommy_C_OnNotifyEnd_81697CFA44A0B0C38D77BD8BF8EAED24_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.OnNotifyBegin_81697CFA44A0B0C38D77BD8BF8EAED24
	 */
	struct ABP_NetworkMommy_C_OnNotifyBegin_81697CFA44A0B0C38D77BD8BF8EAED24_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.OnInterrupted_81697CFA44A0B0C38D77BD8BF8EAED24
	 */
	struct ABP_NetworkMommy_C_OnInterrupted_81697CFA44A0B0C38D77BD8BF8EAED24_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.OnBlendOut_81697CFA44A0B0C38D77BD8BF8EAED24
	 */
	struct ABP_NetworkMommy_C_OnBlendOut_81697CFA44A0B0C38D77BD8BF8EAED24_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.OnCompleted_81697CFA44A0B0C38D77BD8BF8EAED24
	 */
	struct ABP_NetworkMommy_C_OnCompleted_81697CFA44A0B0C38D77BD8BF8EAED24_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.CrouchCamera
	 */
	struct ABP_NetworkMommy_C_CrouchCamera_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4
	 */
	struct ABP_NetworkMommy_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3
	 */
	struct ABP_NetworkMommy_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpAxisEvt_LookPitch_K2Node_InputAxisEvent_2
	 */
	struct ABP_NetworkMommy_C_InpAxisEvt_LookPitch_K2Node_InputAxisEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1
	 */
	struct ABP_NetworkMommy_C_InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.StopHeadBob
	 */
	struct ABP_NetworkMommy_C_StopHeadBob_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.StartHeadBob
	 */
	struct ABP_NetworkMommy_C_StartHeadBob_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.DoWebsMulti
	 */
	struct ABP_NetworkMommy_C_DoWebsMulti_Params
	{
	public:
		struct FRotator                                            LookRotation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.DoWebsClient
	 */
	struct ABP_NetworkMommy_C_DoWebsClient_Params
	{
	public:
		bool                                                       Shooting;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3A6C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            LookRotation;                                            // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.CallDoWebs
	 */
	struct ABP_NetworkMommy_C_CallDoWebs_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Play Swing Sound
	 */
	struct ABP_NetworkMommy_C_PlaySwingSound_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.RightAttackShake
	 */
	struct ABP_NetworkMommy_C_RightAttackShake_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.LeftAttackShake
	 */
	struct ABP_NetworkMommy_C_LeftAttackShake_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.DoWebsServer
	 */
	struct ABP_NetworkMommy_C_DoWebsServer_Params
	{
	public:
		bool                                                       Shooting;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PLD0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            LookRotation;                                            // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.TrySpot
	 */
	struct ABP_NetworkMommy_C_TrySpot_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.TryPunch
	 */
	struct ABP_NetworkMommy_C_TryPunch_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.ReceiveEndPlay
	 */
	struct ABP_NetworkMommy_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.FoundSteamInventory
	 */
	struct ABP_NetworkMommy_C_FoundSteamInventory_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.RemoveCosmeticsDueToError
	 */
	struct ABP_NetworkMommy_C_RemoveCosmeticsDueToError_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.VerifyClientInventory
	 */
	struct ABP_NetworkMommy_C_VerifyClientInventory_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.ReceivePossessed
	 */
	struct ABP_NetworkMommy_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.PlayShootSound
	 */
	struct ABP_NetworkMommy_C_PlayShootSound_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.PlayGrabSound
	 */
	struct ABP_NetworkMommy_C_PlayGrabSound_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Started Jumpscare
	 */
	struct ABP_NetworkMommy_C_StartedJumpscare_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.K2_OnEndCrouch
	 */
	struct ABP_NetworkMommy_C_K2_OnEndCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.K2_OnStartCrouch
	 */
	struct ABP_NetworkMommy_C_K2_OnStartCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Jumpscare Player
	 */
	struct ABP_NetworkMommy_C_JumpscarePlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EnoughSpaceforJumpscare;                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
	 */
	struct ABP_NetworkMommy_C_BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x003C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.ShowHoleNav
	 */
	struct ABP_NetworkMommy_C_ShowHoleNav_Params
	{
	public:
		bool                                                       Shown;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Server Drop Player
	 */
	struct ABP_NetworkMommy_C_ServerDropPlayer_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.PickupPlayer
	 */
	struct ABP_NetworkMommy_C_PickupPlayer_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              PickedUpPlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.DropPlayer
	 */
	struct ABP_NetworkMommy_C_DropPlayer_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.ReceiveTick
	 */
	struct ABP_NetworkMommy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InterfaceResetSecurityUI
	 */
	struct ABP_NetworkMommy_C_InterfaceResetSecurityUI_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InterfaceToggleCanInteract
	 */
	struct ABP_NetworkMommy_C_InterfaceToggleCanInteract_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InterfaceClientMonsterInteractUI
	 */
	struct ABP_NetworkMommy_C_InterfaceClientMonsterInteractUI_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.InterfaceShowMonsterInteractUI
	 */
	struct ABP_NetworkMommy_C_InterfaceShowMonsterInteractUI_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.CreateMommyWidget
	 */
	struct ABP_NetworkMommy_C_CreateMommyWidget_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.ReceiveBeginPlay
	 */
	struct ABP_NetworkMommy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.DoEmote
	 */
	struct ABP_NetworkMommy_C_DoEmote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Multicast_Emote
	 */
	struct ABP_NetworkMommy_C_Multicast_Emote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Server_Emote
	 */
	struct ABP_NetworkMommy_C_Server_Emote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Emote
	 */
	struct ABP_NetworkMommy_C_Emote_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.NetSetCosmetics
	 */
	struct ABP_NetworkMommy_C_NetSetCosmetics_Params
	{
	public:
		struct FPresetSlot                                         Preset;                                                  // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FMommySoundSet                                      Sounds;                                                  // 0x0058(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.BP_OnRep_GrappleState
	 */
	struct ABP_NetworkMommy_C_BP_OnRep_GrappleState_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Multicast_MommyLandSound
	 */
	struct ABP_NetworkMommy_C_Multicast_MommyLandSound_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.OnLanded
	 */
	struct ABP_NetworkMommy_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Multicast_MommyLaunchSound
	 */
	struct ABP_NetworkMommy_C_Multicast_MommyLaunchSound_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Event Mommy Launched
	 */
	struct ABP_NetworkMommy_C_EventMommyLaunched_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.MommyGrappleGrabEvent
	 */
	struct ABP_NetworkMommy_C_MommyGrappleGrabEvent_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.MommyGrappleShotEvent
	 */
	struct ABP_NetworkMommy_C_MommyGrappleShotEvent_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Client_DoSpot
	 */
	struct ABP_NetworkMommy_C_Client_DoSpot_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Server_TrySpot
	 */
	struct ABP_NetworkMommy_C_Server_TrySpot_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C. HitSound
	 */
	struct ABP_NetworkMommy_C_HitSound_Params
	{	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.PlayHitMontage
	 */
	struct ABP_NetworkMommy_C_PlayHitMontage_Params
	{
	public:
		bool                                                       LeftHand;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.NetTraceAttack
	 */
	struct ABP_NetworkMommy_C_NetTraceAttack_Params
	{
	public:
		bool                                                       LeftHand;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TZK5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            LookRotation;                                            // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.ExecuteUbergraph_BP_NetworkMommy
	 */
	struct ABP_NetworkMommy_C_ExecuteUbergraph_BP_NetworkMommy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LU6S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NetworkMommy.BP_NetworkMommy_C.Toggled Third Person During Jumpscare__DelegateSignature
	 */
	struct ABP_NetworkMommy_C_ToggledThirdPersonDuringJumpscare__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
