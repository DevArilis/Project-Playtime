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
	 * Function W_NavBigMap.W_NavBigMap_C.ToggleShow
	 */
	struct UW_NavBigMap_C_ToggleShow_Params
	{	};

	/**
	 * Function W_NavBigMap.W_NavBigMap_C.Show
	 */
	struct UW_NavBigMap_C_Show_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_NavBigMap.W_NavBigMap_C.Construct
	 */
	struct UW_NavBigMap_C_Construct_Params
	{	};

	/**
	 * Function W_NavBigMap.W_NavBigMap_C.ExecuteUbergraph_W_NavBigMap
	 */
	struct UW_NavBigMap_C_ExecuteUbergraph_W_NavBigMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
