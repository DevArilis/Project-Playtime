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
	 * Function BP_DualSplineFollower.BP_DualSplineFollower_C.IsAvailable
	 */
	struct ABP_DualSplineFollower_C_IsAvailable_Params
	{
	public:
		bool                                                       Available;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DualSplineFollower.BP_DualSplineFollower_C.Transition State
	 */
	struct ABP_DualSplineFollower_C_TransitionState_Params
	{
	public:
		EWormholeStates                                            State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DualSplineFollower.BP_DualSplineFollower_C.To Entering
	 */
	struct ABP_DualSplineFollower_C_ToEntering_Params
	{	};

	/**
	 * Function BP_DualSplineFollower.BP_DualSplineFollower_C.To Idle
	 */
	struct ABP_DualSplineFollower_C_ToIdle_Params
	{	};

	/**
	 * Function BP_DualSplineFollower.BP_DualSplineFollower_C.To Exiting
	 */
	struct ABP_DualSplineFollower_C_ToExiting_Params
	{	};

	/**
	 * Function BP_DualSplineFollower.BP_DualSplineFollower_C.ReceiveBeginPlay
	 */
	struct ABP_DualSplineFollower_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DualSplineFollower.BP_DualSplineFollower_C.Event_FinishedMoving
	 */
	struct ABP_DualSplineFollower_C_Event_FinishedMoving_Params
	{
	public:
		class AActor*                                              Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DualSplineFollower.BP_DualSplineFollower_C.Multicast_PlaySuccessSound
	 */
	struct ABP_DualSplineFollower_C_Multicast_PlaySuccessSound_Params
	{	};

	/**
	 * Function BP_DualSplineFollower.BP_DualSplineFollower_C.ExecuteUbergraph_BP_DualSplineFollower
	 */
	struct ABP_DualSplineFollower_C_ExecuteUbergraph_BP_DualSplineFollower_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O2ZD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DualSplineFollower.BP_DualSplineFollower_C.FinishedMoving_Dispatch__DelegateSignature
	 */
	struct ABP_DualSplineFollower_C_FinishedMoving_Dispatch__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
