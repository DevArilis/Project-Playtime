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
	 * 		Name   -> Function UI_Emotes.UI_Emotes_C.Get_CategoryText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_Emotes_C::Get_CategoryText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Emotes.UI_Emotes_C.Get_CategoryText_Text_1");
		
		UUI_Emotes_C_Get_CategoryText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Emotes.UI_Emotes_C.SetCharacterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Emotes_C::SetCharacterType(ECharacterType NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Emotes.UI_Emotes_C.SetCharacterType");
		
		UUI_Emotes_C_SetCharacterType_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Emotes.UI_Emotes_C.UpdateVisuals
	 * 		Flags  -> ()
	 */
	void UUI_Emotes_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Emotes.UI_Emotes_C.UpdateVisuals");
		
		UUI_Emotes_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Emotes.UI_Emotes_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Emotes_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Emotes.UI_Emotes_C.PreConstruct");
		
		UUI_Emotes_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Emotes.UI_Emotes_C.BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_14_Grid_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Emotes_C::BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_14_Grid_OnHovered__DelegateSignature(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Emotes.UI_Emotes_C.BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_14_Grid_OnHovered__DelegateSignature");
		
		UUI_Emotes_C_BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_14_Grid_OnHovered__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Emotes.UI_Emotes_C.BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_15_Grid_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_CosmeticItem_C*                          Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterType                                     CosmeticFor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Emotes_C::BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_15_Grid_OnReleased__DelegateSignature(int32_t ItemID, class UUI_CosmeticItem_C* Caller, ECharacterType CosmeticFor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Emotes.UI_Emotes_C.BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_15_Grid_OnReleased__DelegateSignature");
		
		UUI_Emotes_C_BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_15_Grid_OnReleased__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		params.Caller = Caller;
		params.CosmeticFor = CosmeticFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Emotes.UI_Emotes_C.BndEvt__UI_Emotes_UI_EmoteHolder_K2Node_ComponentBoundEvent_16_ClickedEmote__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Emotes_C::BndEvt__UI_Emotes_UI_EmoteHolder_K2Node_ComponentBoundEvent_16_ClickedEmote__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Emotes.UI_Emotes_C.BndEvt__UI_Emotes_UI_EmoteHolder_K2Node_ComponentBoundEvent_16_ClickedEmote__DelegateSignature");
		
		UUI_Emotes_C_BndEvt__UI_Emotes_UI_EmoteHolder_K2Node_ComponentBoundEvent_16_ClickedEmote__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Emotes.UI_Emotes_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Emotes_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Emotes.UI_Emotes_C.Construct");
		
		UUI_Emotes_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Emotes.UI_Emotes_C.BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_0_Grid_OnUnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Emotes_C::BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_0_Grid_OnUnHovered__DelegateSignature(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Emotes.UI_Emotes_C.BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_0_Grid_OnUnHovered__DelegateSignature");
		
		UUI_Emotes_C_BndEvt__UI_Emotes_UI_EmoteSelectionGrid_1_K2Node_ComponentBoundEvent_0_Grid_OnUnHovered__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Emotes.UI_Emotes_C.ExecuteUbergraph_UI_Emotes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Emotes_C::ExecuteUbergraph_UI_Emotes(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Emotes.UI_Emotes_C.ExecuteUbergraph_UI_Emotes");
		
		UUI_Emotes_C_ExecuteUbergraph_UI_Emotes_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Emotes.UI_Emotes_C.Changed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Emotes_C::Changed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Emotes.UI_Emotes_C.Changed__DelegateSignature");
		
		UUI_Emotes_C_Changed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Emotes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Emotes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Emotes.UI_Emotes_C");
		return ptr;
	}

}


