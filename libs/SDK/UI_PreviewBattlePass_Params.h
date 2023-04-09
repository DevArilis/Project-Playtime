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
	 * Function UI_PreviewBattlePass.UI_PreviewBattlePass_C.PreConstruct
	 */
	struct UUI_PreviewBattlePass_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PreviewBattlePass.UI_PreviewBattlePass_C.Construct
	 */
	struct UUI_PreviewBattlePass_C_Construct_Params
	{	};

	/**
	 * Function UI_PreviewBattlePass.UI_PreviewBattlePass_C.Tick
	 */
	struct UUI_PreviewBattlePass_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PreviewBattlePass.UI_PreviewBattlePass_C.RefreshPreviewBattlePass
	 */
	struct UUI_PreviewBattlePass_C_RefreshPreviewBattlePass_Params
	{	};

	/**
	 * Function UI_PreviewBattlePass.UI_PreviewBattlePass_C.ExecuteUbergraph_UI_PreviewBattlePass
	 */
	struct UUI_PreviewBattlePass_C_ExecuteUbergraph_UI_PreviewBattlePass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
