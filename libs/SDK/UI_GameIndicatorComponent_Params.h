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
	 * Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.InitToyPart
	 */
	struct UUI_GameIndicatorComponent_C_InitToyPart_Params
	{
	public:
		E_ToyType                                                  ToySelection;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.CheckDownPlayers
	 */
	struct UUI_GameIndicatorComponent_C_CheckDownPlayers_Params
	{	};

	/**
	 * Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.Update Toy Count
	 */
	struct UUI_GameIndicatorComponent_C_UpdateToyCount_Params
	{
	public:
		TArray<bool>                                               ToysFound;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.How Many Bools True
	 */
	struct UUI_GameIndicatorComponent_C_HowManyBoolsTrue_Params
	{
	public:
		TArray<bool>                                               Input;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.Construct
	 */
	struct UUI_GameIndicatorComponent_C_Construct_Params
	{	};

	/**
	 * Function UI_GameIndicatorComponent.UI_GameIndicatorComponent_C.ExecuteUbergraph_UI_GameIndicatorComponent
	 */
	struct UUI_GameIndicatorComponent_C_ExecuteUbergraph_UI_GameIndicatorComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
