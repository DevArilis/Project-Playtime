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
	 * Function UI_ActionPrompt.UI_ActionPrompt_C.Construct
	 */
	struct UUI_ActionPrompt_C_Construct_Params
	{	};

	/**
	 * Function UI_ActionPrompt.UI_ActionPrompt_C.SetPromptText
	 */
	struct UUI_ActionPrompt_C_SetPromptText_Params
	{
	public:
		class FText                                                Prefix;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Suffix;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_ActionPrompt.UI_ActionPrompt_C.ExecuteUbergraph_UI_ActionPrompt
	 */
	struct UUI_ActionPrompt_C_ExecuteUbergraph_UI_ActionPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ET23[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
