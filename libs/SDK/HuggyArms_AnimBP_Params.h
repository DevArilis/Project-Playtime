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
	 * Function HuggyArms_AnimBP.HuggyArms_AnimBP_C.AnimGraph
	 */
	struct UHuggyArms_AnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function HuggyArms_AnimBP.HuggyArms_AnimBP_C.BlueprintUpdateAnimation
	 */
	struct UHuggyArms_AnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HuggyArms_AnimBP.HuggyArms_AnimBP_C.StartAttackAnimation
	 */
	struct UHuggyArms_AnimBP_C_StartAttackAnimation_Params
	{	};

	/**
	 * Function HuggyArms_AnimBP.HuggyArms_AnimBP_C.ExecuteUbergraph_HuggyArms_AnimBP
	 */
	struct UHuggyArms_AnimBP_C_ExecuteUbergraph_HuggyArms_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
