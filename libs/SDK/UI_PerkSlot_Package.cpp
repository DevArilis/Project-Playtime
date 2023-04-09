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
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.Construct");
		
		UUI_PerkSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__UI_PerkSlot_PerkSlotButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::BndEvt__UI_PerkSlot_PerkSlotButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.BndEvt__UI_PerkSlot_PerkSlotButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_PerkSlot_C_BndEvt__UI_PerkSlot_PerkSlotButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.InitPerkSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkType                                          Perk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkSlot_C::InitPerkSlot(EPerkType Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.InitPerkSlot");
		
		UUI_PerkSlot_C_InitPerkSlot_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.EquipPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkType                                          Perk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EquipSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PerkSlot_C::EquipPerk(EPerkType Perk, bool EquipSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.EquipPerk");
		
		UUI_PerkSlot_C_EquipPerk_Params params {};
		params.Perk = Perk;
		params.EquipSuccess = EquipSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.ClearSlot
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::ClearSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.ClearSlot");
		
		UUI_PerkSlot_C_ClearSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.UnSelectSlot
	 * 		Flags  -> ()
	 */
	void UUI_PerkSlot_C::UnSelectSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.UnSelectSlot");
		
		UUI_PerkSlot_C_UnSelectSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.ExecuteUbergraph_UI_PerkSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkSlot_C::ExecuteUbergraph_UI_PerkSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.ExecuteUbergraph_UI_PerkSlot");
		
		UUI_PerkSlot_C_ExecuteUbergraph_UI_PerkSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkSlot.UI_PerkSlot_C.PerkSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_PerkSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkSlot_C::PerkSlotSelected__DelegateSignature(class UUI_PerkSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkSlot.UI_PerkSlot_C.PerkSlotSelected__DelegateSignature");
		
		UUI_PerkSlot_C_PerkSlotSelected__DelegateSignature_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PerkSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PerkSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PerkSlot.UI_PerkSlot_C");
		return ptr;
	}

}


