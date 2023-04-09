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
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.PostTransaction
	 */
	struct UUI_Shoppy_Preview_C_PostTransaction_Params
	{	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.SetCharacterRefs
	 */
	struct UUI_Shoppy_Preview_C_SetCharacterRefs_Params
	{
	public:
		class ABP_NetworkCharacter_C*                              Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASkeletalMeshActor*                                  Monster;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_MonsterAndPlayerMenuCharacter_C*                 PlayerMonsterMenuCharacter;                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.SetPreviewCharacter
	 */
	struct UUI_Shoppy_Preview_C_SetPreviewCharacter_Params
	{	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.PopulatePreviewGrid
	 */
	struct UUI_Shoppy_Preview_C_PopulatePreviewGrid_Params
	{	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.PreviewItemHovered
	 */
	struct UUI_Shoppy_Preview_C_PreviewItemHovered_Params
	{
	public:
		int32_t                                                    PreviewItemID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.PreviewItemUnHovered
	 */
	struct UUI_Shoppy_Preview_C_PreviewItemUnHovered_Params
	{	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.InitializePreview
	 */
	struct UUI_Shoppy_Preview_C_InitializePreview_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.BndEvt__UI_Shoppy_Preview_PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Shoppy_Preview_C_BndEvt__UI_Shoppy_Preview_PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_Shoppy_Preview_C_BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Shoppy_Preview_C_BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.Tick
	 */
	struct UUI_Shoppy_Preview_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.ConfirmPurchase
	 */
	struct UUI_Shoppy_Preview_C_ConfirmPurchase_Params
	{	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.TransactionRequestComplete
	 */
	struct UUI_Shoppy_Preview_C_TransactionRequestComplete_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.TransactionRequestFail
	 */
	struct UUI_Shoppy_Preview_C_TransactionRequestFail_Params
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.BndEvt__UI_Shoppy_Preview_ConfirmationClose_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 */
	struct UUI_Shoppy_Preview_C_BndEvt__UI_Shoppy_Preview_ConfirmationClose_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params
	{
	public:
		class UUI_MP_N_MenuButton_New_C*                           Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.ResetRotation
	 */
	struct UUI_Shoppy_Preview_C_ResetRotation_Params
	{	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.ExecuteUbergraph_UI_Shoppy_Preview
	 */
	struct UUI_Shoppy_Preview_C_ExecuteUbergraph_UI_Shoppy_Preview_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.CloseLoadingScreen__DelegateSignature
	 */
	struct UUI_Shoppy_Preview_C_CloseLoadingScreen__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
