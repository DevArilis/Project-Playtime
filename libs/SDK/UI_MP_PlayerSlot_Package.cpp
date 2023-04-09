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
	 * 		Name   -> Function UI_MP_PlayerSlot.UI_MP_PlayerSlot_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_MP_PlayerSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_PlayerSlot.UI_MP_PlayerSlot_C.Construct");
		
		UUI_MP_PlayerSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_PlayerSlot.UI_MP_PlayerSlot_C.BndEvt__UI_MP_PlayerSlot_Button_58_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MP_PlayerSlot_C::BndEvt__UI_MP_PlayerSlot_Button_58_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_PlayerSlot.UI_MP_PlayerSlot_C.BndEvt__UI_MP_PlayerSlot_Button_58_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UUI_MP_PlayerSlot_C_BndEvt__UI_MP_PlayerSlot_Button_58_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_PlayerSlot.UI_MP_PlayerSlot_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_MP_PlayerSlot_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_PlayerSlot.UI_MP_PlayerSlot_C.OnInitialized");
		
		UUI_MP_PlayerSlot_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_PlayerSlot.UI_MP_PlayerSlot_C.FoundSteamInventory
	 * 		Flags  -> ()
	 */
	void UUI_MP_PlayerSlot_C::FoundSteamInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_PlayerSlot.UI_MP_PlayerSlot_C.FoundSteamInventory");
		
		UUI_MP_PlayerSlot_C_FoundSteamInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_PlayerSlot.UI_MP_PlayerSlot_C.ExecuteUbergraph_UI_MP_PlayerSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_PlayerSlot_C::ExecuteUbergraph_UI_MP_PlayerSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_PlayerSlot.UI_MP_PlayerSlot_C.ExecuteUbergraph_UI_MP_PlayerSlot");
		
		UUI_MP_PlayerSlot_C_ExecuteUbergraph_UI_MP_PlayerSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MP_PlayerSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MP_PlayerSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MP_PlayerSlot.UI_MP_PlayerSlot_C");
		return ptr;
	}

}


