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
	 * Function ABP_OutfitBoxy.ABP_OutfitBoxy_C.AnimGraph
	 */
	struct UABP_OutfitBoxy_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           AnimGraph;                                               // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_OutfitBoxy.ABP_OutfitBoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_OutfitBoxy_AnimGraphNode_ModifyBone_97C35587499CAF00A6BD8FBA1443FE98
	 */
	struct UABP_OutfitBoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_OutfitBoxy_AnimGraphNode_ModifyBone_97C35587499CAF00A6BD8FBA1443FE98_Params
	{	};

	/**
	 * Function ABP_OutfitBoxy.ABP_OutfitBoxy_C.BlueprintUpdateAnimation
	 */
	struct UABP_OutfitBoxy_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_OutfitBoxy.ABP_OutfitBoxy_C.ExecuteUbergraph_ABP_OutfitBoxy
	 */
	struct UABP_OutfitBoxy_C_ExecuteUbergraph_ABP_OutfitBoxy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
