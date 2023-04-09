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
	 * Function BP_NavPillarIndicator.BP_NavPillarIndicator_C.Sabotage
	 */
	struct ABP_NavPillarIndicator_C_Sabotage_Params
	{	};

	/**
	 * Function BP_NavPillarIndicator.BP_NavPillarIndicator_C.SetNumActive
	 */
	struct ABP_NavPillarIndicator_C_SetNumActive_Params
	{
	public:
		int32_t                                                    NumActive;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutOf;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NavPillarIndicator.BP_NavPillarIndicator_C.ReceiveBeginPlay
	 */
	struct ABP_NavPillarIndicator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NavPillarIndicator.BP_NavPillarIndicator_C.ExecuteUbergraph_BP_NavPillarIndicator
	 */
	struct ABP_NavPillarIndicator_C_ExecuteUbergraph_BP_NavPillarIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
