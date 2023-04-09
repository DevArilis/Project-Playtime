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
	 * 		Name   -> Function UI_CosmeticItem.UI_CosmeticItem_C.UpdateEnabled
	 * 		Flags  -> ()
	 */
	void UUI_CosmeticItem_C::UpdateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticItem.UI_CosmeticItem_C.UpdateEnabled");
		
		UUI_CosmeticItem_C_UpdateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticItem.UI_CosmeticItem_C.ShouldForceType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UUI_CosmeticItem_C::ShouldForceType(ECosmeticTypeEnum* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticItem.UI_CosmeticItem_C.ShouldForceType");
		
		UUI_CosmeticItem_C_ShouldForceType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticItem.UI_CosmeticItem_C.BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CosmeticItem_C::BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticItem.UI_CosmeticItem_C.BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_CosmeticItem_C_BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticItem.UI_CosmeticItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CosmeticItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticItem.UI_CosmeticItem_C.PreConstruct");
		
		UUI_CosmeticItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticItem.UI_CosmeticItem_C.BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CosmeticItem_C::BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticItem.UI_CosmeticItem_C.BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CosmeticItem_C_BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticItem.UI_CosmeticItem_C.BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CosmeticItem_C::BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticItem.UI_CosmeticItem_C.BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CosmeticItem_C_BndEvt__UI_N_CosmeticItem_Button_92_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticItem.UI_CosmeticItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CosmeticItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticItem.UI_CosmeticItem_C.Construct");
		
		UUI_CosmeticItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticItem.UI_CosmeticItem_C.SetEquipStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CosmeticItem_C::SetEquipStatus(bool Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticItem.UI_CosmeticItem_C.SetEquipStatus");
		
		UUI_CosmeticItem_C_SetEquipStatus_Params params {};
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticItem.UI_CosmeticItem_C.ExecuteUbergraph_UI_CosmeticItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticItem_C::ExecuteUbergraph_UI_CosmeticItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticItem.UI_CosmeticItem_C.ExecuteUbergraph_UI_CosmeticItem");
		
		UUI_CosmeticItem_C_ExecuteUbergraph_UI_CosmeticItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticItem.UI_CosmeticItem_C.Item_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_CosmeticItem_C*                          Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticItem_C::Item_OnReleased__DelegateSignature(int32_t ItemID, class UUI_CosmeticItem_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticItem.UI_CosmeticItem_C.Item_OnReleased__DelegateSignature");
		
		UUI_CosmeticItem_C_Item_OnReleased__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticItem.UI_CosmeticItem_C.Item_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticItem_C::Item_OnUnhovered__DelegateSignature(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticItem.UI_CosmeticItem_C.Item_OnUnhovered__DelegateSignature");
		
		UUI_CosmeticItem_C_Item_OnUnhovered__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CosmeticItem.UI_CosmeticItem_C.Item_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CosmeticItem_C::Item_OnHovered__DelegateSignature(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CosmeticItem.UI_CosmeticItem_C.Item_OnHovered__DelegateSignature");
		
		UUI_CosmeticItem_C_Item_OnHovered__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CosmeticItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CosmeticItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CosmeticItem.UI_CosmeticItem_C");
		return ptr;
	}

}


