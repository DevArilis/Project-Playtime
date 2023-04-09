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
	 * Function UI_N_RadialProgressBar.UI_N_RadialProgressBar_C.GetBrush_1
	 */
	struct UUI_N_RadialProgressBar_C_GetBrush_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_N_RadialProgressBar.UI_N_RadialProgressBar_C.PreConstruct
	 */
	struct UUI_N_RadialProgressBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_N_RadialProgressBar.UI_N_RadialProgressBar_C.Construct
	 */
	struct UUI_N_RadialProgressBar_C_Construct_Params
	{	};

	/**
	 * Function UI_N_RadialProgressBar.UI_N_RadialProgressBar_C.Tick
	 */
	struct UUI_N_RadialProgressBar_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_N_RadialProgressBar.UI_N_RadialProgressBar_C.ExecuteUbergraph_UI_N_RadialProgressBar
	 */
	struct UUI_N_RadialProgressBar_C_ExecuteUbergraph_UI_N_RadialProgressBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
