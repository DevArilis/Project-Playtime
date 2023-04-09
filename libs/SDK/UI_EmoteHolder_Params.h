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
	 * Function UI_EmoteHolder.UI_EmoteHolder_C.PreConstruct
	 */
	struct UUI_EmoteHolder_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EmoteHolder.UI_EmoteHolder_C.EmoteHolder_Show
	 */
	struct UUI_EmoteHolder_C_EmoteHolder_Show_Params
	{
	public:
		class UCustomizationSaveGame*                              SaveGame;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterType                                             Character;                                               // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LongTimeout;                                             // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EmoteHolder.UI_EmoteHolder_C.Hide
	 */
	struct UUI_EmoteHolder_C_Hide_Params
	{	};

	/**
	 * Function UI_EmoteHolder.UI_EmoteHolder_C.SetSelected
	 */
	struct UUI_EmoteHolder_C_SetSelected_Params
	{
	public:
		int32_t                                                    Selected;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EmoteHolder.UI_EmoteHolder_C.Tick
	 */
	struct UUI_EmoteHolder_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EmoteHolder.UI_EmoteHolder_C.BndEvt__UI_EmoteHolder_Button_90_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_EmoteHolder_C_BndEvt__UI_EmoteHolder_Button_90_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EmoteHolder.UI_EmoteHolder_C.HideNoCallback
	 */
	struct UUI_EmoteHolder_C_HideNoCallback_Params
	{	};

	/**
	 * Function UI_EmoteHolder.UI_EmoteHolder_C.ExecuteUbergraph_UI_EmoteHolder
	 */
	struct UUI_EmoteHolder_C_ExecuteUbergraph_UI_EmoteHolder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EmoteHolder.UI_EmoteHolder_C.ClickedEmote__DelegateSignature
	 */
	struct UUI_EmoteHolder_C_ClickedEmote__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
