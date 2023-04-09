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
	 * Function BP_TheaterTape.BP_TheaterTape_C.RetrieveTapeInfo
	 */
	struct ABP_TheaterTape_C_RetrieveTapeInfo_Params
	{	};

	/**
	 * Function BP_TheaterTape.BP_TheaterTape_C.SetSelected
	 */
	struct ABP_TheaterTape_C_SetSelected_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JB7G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TheaterTape.BP_TheaterTape_C.ReceiveActorBeginCursorOver
	 */
	struct ABP_TheaterTape_C_ReceiveActorBeginCursorOver_Params
	{	};

	/**
	 * Function BP_TheaterTape.BP_TheaterTape_C.ReceiveActorEndCursorOver
	 */
	struct ABP_TheaterTape_C_ReceiveActorEndCursorOver_Params
	{	};

	/**
	 * Function BP_TheaterTape.BP_TheaterTape_C.LoadDefault
	 */
	struct ABP_TheaterTape_C_LoadDefault_Params
	{	};

	/**
	 * Function BP_TheaterTape.BP_TheaterTape_C.ExecuteUbergraph_BP_TheaterTape
	 */
	struct ABP_TheaterTape_C_ExecuteUbergraph_BP_TheaterTape_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
