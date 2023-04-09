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
	 * 		Name   -> Function UI_NewReward.UI_NewReward_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_NewReward_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NewReward.UI_NewReward_C.PreConstruct");
		
		UUI_NewReward_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NewReward.UI_NewReward_C.BndEvt__UI_NewReward_UI_AltButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_NewReward_C::BndEvt__UI_NewReward_UI_AltButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NewReward.UI_NewReward_C.BndEvt__UI_NewReward_UI_AltButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature");
		
		UUI_NewReward_C_BndEvt__UI_NewReward_UI_AltButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NewReward.UI_NewReward_C.BndEvt__UI_NewReward_UI_MainButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_NewReward_C::BndEvt__UI_NewReward_UI_MainButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NewReward.UI_NewReward_C.BndEvt__UI_NewReward_UI_MainButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature");
		
		UUI_NewReward_C_BndEvt__UI_NewReward_UI_MainButton_K2Node_ComponentBoundEvent_1_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NewReward.UI_NewReward_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_NewReward_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NewReward.UI_NewReward_C.OnInitialized");
		
		UUI_NewReward_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NewReward.UI_NewReward_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_NewReward_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NewReward.UI_NewReward_C.Construct");
		
		UUI_NewReward_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NewReward.UI_NewReward_C.ExecuteUbergraph_UI_NewReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NewReward_C::ExecuteUbergraph_UI_NewReward(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NewReward.UI_NewReward_C.ExecuteUbergraph_UI_NewReward");
		
		UUI_NewReward_C_ExecuteUbergraph_UI_NewReward_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NewReward.UI_NewReward_C.ContinuePressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_NewReward_C::ContinuePressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NewReward.UI_NewReward_C.ContinuePressed__DelegateSignature");
		
		UUI_NewReward_C_ContinuePressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NewReward.UI_NewReward_C.ViewToyBoxPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NewReward_C::ViewToyBoxPressed__DelegateSignature(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NewReward.UI_NewReward_C.ViewToyBoxPressed__DelegateSignature");
		
		UUI_NewReward_C_ViewToyBoxPressed__DelegateSignature_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_NewReward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_NewReward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_NewReward.UI_NewReward_C");
		return ptr;
	}

}


