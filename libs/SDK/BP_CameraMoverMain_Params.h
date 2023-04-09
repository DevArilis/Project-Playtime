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
	 * Function BP_CameraMoverMain.BP_CameraMoverMain_C.Transition__FinishedFunc
	 */
	struct ABP_CameraMoverMain_C_Transition__FinishedFunc_Params
	{	};

	/**
	 * Function BP_CameraMoverMain.BP_CameraMoverMain_C.Transition__UpdateFunc
	 */
	struct ABP_CameraMoverMain_C_Transition__UpdateFunc_Params
	{	};

	/**
	 * Function BP_CameraMoverMain.BP_CameraMoverMain_C.TransitionToCamera
	 */
	struct ABP_CameraMoverMain_C_TransitionToCamera_Params
	{
	public:
		class FName                                                Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Smoothed;                                                // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CameraMoverMain.BP_CameraMoverMain_C.ExecuteUbergraph_BP_CameraMoverMain
	 */
	struct ABP_CameraMoverMain_C_ExecuteUbergraph_BP_CameraMoverMain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
