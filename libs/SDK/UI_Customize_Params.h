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
	 * Function UI_Customize.UI_Customize_C.SetNetChar
	 */
	struct UUI_Customize_C_SetNetChar_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              NewValue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_CustomizationMenuCharacter_C*                    MenuCharacter;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Customize.UI_Customize_C.PreConstruct
	 */
	struct UUI_Customize_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Customize.UI_Customize_C.Construct
	 */
	struct UUI_Customize_C_Construct_Params
	{	};

	/**
	 * Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Customize_C_BndEvt__UI_Customize_Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Customize.UI_Customize_C.RefreshVisuals
	 */
	struct UUI_Customize_C_RefreshVisuals_Params
	{	};

	/**
	 * Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_NextCharButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Customize_C_BndEvt__UI_Customize_NextCharButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_CustomizeButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 */
	struct UUI_Customize_C_BndEvt__UI_Customize_CustomizeButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_5_ChangedAppearance__DelegateSignature
	 */
	struct UUI_Customize_C_BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_5_ChangedAppearance__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature
	 */
	struct UUI_Customize_C_BndEvt__UI_Customize_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Customize.UI_Customize_C.Enter
	 */
	struct UUI_Customize_C_Enter_Params
	{	};

	/**
	 * Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_3_MouseDragged__DelegateSignature
	 */
	struct UUI_Customize_C_BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_3_MouseDragged__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           DeltaMouse;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_6_UpdateRotatingCharacter__DelegateSignature
	 */
	struct UUI_Customize_C_BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_6_UpdateRotatingCharacter__DelegateSignature_Params
	{
	public:
		bool                                                       Rotating;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Customize.UI_Customize_C.ExecuteUbergraph_UI_Customize
	 */
	struct UUI_Customize_C_ExecuteUbergraph_UI_Customize_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Customize.UI_Customize_C.UpdateRotatingCharacter__DelegateSignature
	 */
	struct UUI_Customize_C_UpdateRotatingCharacter__DelegateSignature_Params
	{
	public:
		bool                                                       UpdateRotatingCharacter;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Customize.UI_Customize_C.Mouse Dragged__DelegateSignature
	 */
	struct UUI_Customize_C_MouseDragged__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           DeltaMouse;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Customize.UI_Customize_C.ChangedAppearance__DelegateSignature
	 */
	struct UUI_Customize_C_ChangedAppearance__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Customize.UI_Customize_C.Back Pressed__DelegateSignature
	 */
	struct UUI_Customize_C_BackPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
