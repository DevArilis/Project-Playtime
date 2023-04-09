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
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.OnRep_ServerClosed
	 */
	struct ABP_PullDownDoor_C_OnRep_ServerClosed_Params
	{	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.Sabotage_Shut
	 */
	struct ABP_PullDownDoor_C_Sabotage_Shut_Params
	{
	public:
		float                                                      TimeToTake;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.EvaluateHands
	 */
	struct ABP_PullDownDoor_C_EvaluateHands_Params
	{	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.OnRep_AccelerateUp
	 */
	struct ABP_PullDownDoor_C_OnRep_AccelerateUp_Params
	{	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.Timeline_0__FinishedFunc
	 */
	struct ABP_PullDownDoor_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.Timeline_0__UpdateFunc
	 */
	struct ABP_PullDownDoor_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.TL_Close__FinishedFunc
	 */
	struct ABP_PullDownDoor_C_TL_Close__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.TL_Close__UpdateFunc
	 */
	struct ABP_PullDownDoor_C_TL_Close__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C. Timeline Trigger
	 */
	struct ABP_PullDownDoor_C_TimelineTrigger_Params
	{
	public:
		bool                                                       MoveDown;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OverridePlayerInputLock;                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.On Any AttachmentStateChange
	 */
	struct ABP_PullDownDoor_C_OnAnyAttachmentStateChange_Params
	{
	public:
		EAttachmentStateChange                                     AttachmentStateChange;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.AutoReopen
	 */
	struct ABP_PullDownDoor_C_AutoReopen_Params
	{	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.Sabotage
	 */
	struct ABP_PullDownDoor_C_Sabotage_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.Auto Reopen event
	 */
	struct ABP_PullDownDoor_C_AutoReopenevent_Params
	{	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.ReceiveBeginPlay
	 */
	struct ABP_PullDownDoor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.ReceiveTick
	 */
	struct ABP_PullDownDoor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.ToggleDoor
	 */
	struct ABP_PullDownDoor_C_ToggleDoor_Params
	{
	public:
		bool                                                       Closed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.TotalLockdown
	 */
	struct ABP_PullDownDoor_C_TotalLockdown_Params
	{
	public:
		float                                                      Durantion;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PullDownDoor.BP_PullDownDoor_C.ExecuteUbergraph_BP_PullDownDoor
	 */
	struct ABP_PullDownDoor_C_ExecuteUbergraph_BP_PullDownDoor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YY1H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
