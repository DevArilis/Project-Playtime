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
	 * Function BP_AIController_TutorialHuggy.BP_AIController_TutorialHuggy_C.OnFail_E353255C445FF146EDE5C888632107AF
	 */
	struct ABP_AIController_TutorialHuggy_C_OnFail_E353255C445FF146EDE5C888632107AF_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialHuggy.BP_AIController_TutorialHuggy_C.OnSuccess_E353255C445FF146EDE5C888632107AF
	 */
	struct ABP_AIController_TutorialHuggy_C_OnSuccess_E353255C445FF146EDE5C888632107AF_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialHuggy.BP_AIController_TutorialHuggy_C.MoveTo
	 */
	struct ABP_AIController_TutorialHuggy_C_MoveTo_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialHuggy.BP_AIController_TutorialHuggy_C.ReceivePossess
	 */
	struct ABP_AIController_TutorialHuggy_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_TutorialHuggy.BP_AIController_TutorialHuggy_C.Charge
	 */
	struct ABP_AIController_TutorialHuggy_C_Charge_Params
	{	};

	/**
	 * Function BP_AIController_TutorialHuggy.BP_AIController_TutorialHuggy_C.ExecuteUbergraph_BP_AIController_TutorialHuggy
	 */
	struct ABP_AIController_TutorialHuggy_C_ExecuteUbergraph_BP_AIController_TutorialHuggy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
