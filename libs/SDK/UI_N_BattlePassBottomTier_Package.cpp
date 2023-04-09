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
	 * 		Name   -> Function UI_N_BattlePassBottomTier.UI_N_BattlePassBottomTier_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_N_BattlePassBottomTier_C::SetActive(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassBottomTier.UI_N_BattlePassBottomTier_C.SetActive");
		
		UUI_N_BattlePassBottomTier_C_SetActive_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassBottomTier.UI_N_BattlePassBottomTier_C.BndEvt__UI_N_BattlePassBottomTier_Button_82_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_N_BattlePassBottomTier_C::BndEvt__UI_N_BattlePassBottomTier_Button_82_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassBottomTier.UI_N_BattlePassBottomTier_C.BndEvt__UI_N_BattlePassBottomTier_Button_82_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_N_BattlePassBottomTier_C_BndEvt__UI_N_BattlePassBottomTier_Button_82_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassBottomTier.UI_N_BattlePassBottomTier_C.ExecuteUbergraph_UI_N_BattlePassBottomTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_N_BattlePassBottomTier_C::ExecuteUbergraph_UI_N_BattlePassBottomTier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassBottomTier.UI_N_BattlePassBottomTier_C.ExecuteUbergraph_UI_N_BattlePassBottomTier");
		
		UUI_N_BattlePassBottomTier_C_ExecuteUbergraph_UI_N_BattlePassBottomTier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_N_BattlePassBottomTier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_N_BattlePassBottomTier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_N_BattlePassBottomTier.UI_N_BattlePassBottomTier_C");
		return ptr;
	}

}


