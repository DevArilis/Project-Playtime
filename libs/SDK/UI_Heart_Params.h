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
	 * Function UI_Heart.UI_Heart_C.PreConstruct
	 */
	struct UUI_Heart_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Heart.UI_Heart_C.LoseHeart
	 */
	struct UUI_Heart_C_LoseHeart_Params
	{	};

	/**
	 * Function UI_Heart.UI_Heart_C.DimHeart
	 */
	struct UUI_Heart_C_DimHeart_Params
	{	};

	/**
	 * Function UI_Heart.UI_Heart_C.ExecuteUbergraph_UI_Heart
	 */
	struct UUI_Heart_C_ExecuteUbergraph_UI_Heart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
