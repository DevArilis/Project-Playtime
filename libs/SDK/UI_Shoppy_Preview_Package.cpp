/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.PostTransaction
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_Preview_C::PostTransaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.PostTransaction");
		
		UUI_Shoppy_Preview_C_PostTransaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.SetCharacterRefs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASkeletalMeshActor*                          Monster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_MonsterAndPlayerMenuCharacter_C*         PlayerMonsterMenuCharacter                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_Preview_C::SetCharacterRefs(class ABP_NetworkCharacter_C* Player, class ASkeletalMeshActor* Monster, class ABP_MonsterAndPlayerMenuCharacter_C* PlayerMonsterMenuCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.SetCharacterRefs");
		
		UUI_Shoppy_Preview_C_SetCharacterRefs_Params params {};
		params.Player = Player;
		params.Monster = Monster;
		params.PlayerMonsterMenuCharacter = PlayerMonsterMenuCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.SetPreviewCharacter
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_Preview_C::SetPreviewCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.SetPreviewCharacter");
		
		UUI_Shoppy_Preview_C_SetPreviewCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.PopulatePreviewGrid
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_Preview_C::PopulatePreviewGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.PopulatePreviewGrid");
		
		UUI_Shoppy_Preview_C_PopulatePreviewGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.PreviewItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PreviewItemID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_Preview_C::PreviewItemHovered(int32_t PreviewItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.PreviewItemHovered");
		
		UUI_Shoppy_Preview_C_PreviewItemHovered_Params params {};
		params.PreviewItemID = PreviewItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.PreviewItemUnHovered
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_Preview_C::PreviewItemUnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.PreviewItemUnHovered");
		
		UUI_Shoppy_Preview_C_PreviewItemUnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.InitializePreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_Preview_C::InitializePreview(int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.InitializePreview");
		
		UUI_Shoppy_Preview_C_InitializePreview_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.BndEvt__UI_Shoppy_Preview_PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_Preview_C::BndEvt__UI_Shoppy_Preview_PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.BndEvt__UI_Shoppy_Preview_PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_Shoppy_Preview_C_BndEvt__UI_Shoppy_Preview_PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_Preview_C::BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UUI_Shoppy_Preview_C_BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_Preview_C::BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_Shoppy_Preview_C_BndEvt__UI_Shoppy_Preview_CharacterRotator_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_Preview_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.Tick");
		
		UUI_Shoppy_Preview_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.ConfirmPurchase
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_Preview_C::ConfirmPurchase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.ConfirmPurchase");
		
		UUI_Shoppy_Preview_C_ConfirmPurchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.TransactionRequestComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_Preview_C::TransactionRequestComplete(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.TransactionRequestComplete");
		
		UUI_Shoppy_Preview_C_TransactionRequestComplete_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.TransactionRequestFail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_Preview_C::TransactionRequestFail(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.TransactionRequestFail");
		
		UUI_Shoppy_Preview_C_TransactionRequestFail_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.BndEvt__UI_Shoppy_Preview_ConfirmationClose_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MP_N_MenuButton_New_C*                   Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_Preview_C::BndEvt__UI_Shoppy_Preview_ConfirmationClose_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature(class UUI_MP_N_MenuButton_New_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.BndEvt__UI_Shoppy_Preview_ConfirmationClose_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature");
		
		UUI_Shoppy_Preview_C_BndEvt__UI_Shoppy_Preview_ConfirmationClose_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.ResetRotation
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_Preview_C::ResetRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.ResetRotation");
		
		UUI_Shoppy_Preview_C_ResetRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.ExecuteUbergraph_UI_Shoppy_Preview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shoppy_Preview_C::ExecuteUbergraph_UI_Shoppy_Preview(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.ExecuteUbergraph_UI_Shoppy_Preview");
		
		UUI_Shoppy_Preview_C_ExecuteUbergraph_UI_Shoppy_Preview_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.CloseLoadingScreen__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Shoppy_Preview_C::CloseLoadingScreen__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Shoppy_Preview.UI_Shoppy_Preview_C.CloseLoadingScreen__DelegateSignature");
		
		UUI_Shoppy_Preview_C_CloseLoadingScreen__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Shoppy_Preview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Shoppy_Preview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Shoppy_Preview.UI_Shoppy_Preview_C");
		return ptr;
	}

}


