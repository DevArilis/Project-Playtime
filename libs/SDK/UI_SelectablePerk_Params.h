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
	 * Function UI_SelectablePerk.UI_SelectablePerk_C.PreConstruct
	 */
	struct UUI_SelectablePerk_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SelectablePerk.UI_SelectablePerk_C.BndEvt__UI_SelectablePerk_TheButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_SelectablePerk_C_BndEvt__UI_SelectablePerk_TheButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SelectablePerk.UI_SelectablePerk_C.Update Visuals
	 */
	struct UUI_SelectablePerk_C_UpdateVisuals_Params
	{	};

	/**
	 * Function UI_SelectablePerk.UI_SelectablePerk_C.SetActive
	 */
	struct UUI_SelectablePerk_C_SetActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SelectablePerk.UI_SelectablePerk_C.ExecuteUbergraph_UI_SelectablePerk
	 */
	struct UUI_SelectablePerk_C_ExecuteUbergraph_UI_SelectablePerk_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IA0Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SelectablePerk.UI_SelectablePerk_C.PerkButtonReleased__DelegateSignature
	 */
	struct UUI_SelectablePerk_C_PerkButtonReleased__DelegateSignature_Params
	{
	public:
		EPerkType                                                  Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
