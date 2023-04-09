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
	 * Function BP_NavBaseActor.BP_NavBaseActor_C.Sabotage
	 */
	struct ABP_NavBaseActor_C_Sabotage_Params
	{	};

	/**
	 * Function BP_NavBaseActor.BP_NavBaseActor_C.DoSabotage
	 */
	struct ABP_NavBaseActor_C_DoSabotage_Params
	{	};

	/**
	 * Function BP_NavBaseActor.BP_NavBaseActor_C.ExecuteUbergraph_BP_NavBaseActor
	 */
	struct ABP_NavBaseActor_C_ExecuteUbergraph_BP_NavBaseActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8I94[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
