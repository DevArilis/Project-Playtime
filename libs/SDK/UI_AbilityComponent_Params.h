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
	 * Function UI_AbilityComponent.UI_AbilityComponent_C.PreConstruct
	 */
	struct UUI_AbilityComponent_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_AbilityComponent.UI_AbilityComponent_C.DoRefill
	 */
	struct UUI_AbilityComponent_C_DoRefill_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AbilityComponent.UI_AbilityComponent_C.SetMappedPercent
	 */
	struct UUI_AbilityComponent_C_SetMappedPercent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AbilityComponent.UI_AbilityComponent_C.ResetFillColorAndOpacity
	 */
	struct UUI_AbilityComponent_C_ResetFillColorAndOpacity_Params
	{	};

	/**
	 * Function UI_AbilityComponent.UI_AbilityComponent_C.SetFillColorAndOpacity
	 */
	struct UUI_AbilityComponent_C_SetFillColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AbilityComponent.UI_AbilityComponent_C.SetAbilityFillColorAndOpacity
	 */
	struct UUI_AbilityComponent_C_SetAbilityFillColorAndOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AbilityComponent.UI_AbilityComponent_C.SetTextFillColorAndOpacity
	 */
	struct UUI_AbilityComponent_C_SetTextFillColorAndOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AbilityComponent.UI_AbilityComponent_C.AbilityRecharged
	 */
	struct UUI_AbilityComponent_C_AbilityRecharged_Params
	{	};

	/**
	 * Function UI_AbilityComponent.UI_AbilityComponent_C.SetAbilityIconScale
	 */
	struct UUI_AbilityComponent_C_SetAbilityIconScale_Params
	{
	public:
		struct FVector2D                                           Scale;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AbilityComponent.UI_AbilityComponent_C.ExecuteUbergraph_UI_AbilityComponent
	 */
	struct UUI_AbilityComponent_C_ExecuteUbergraph_UI_AbilityComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9F7I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
