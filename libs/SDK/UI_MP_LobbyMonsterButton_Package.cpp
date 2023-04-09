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
	 * 		Name   -> Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.ShowFriendOverlay
	 * 		Flags  -> ()
	 */
	void UUI_MP_LobbyMonsterButton_C::ShowFriendOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.ShowFriendOverlay");
		
		UUI_MP_LobbyMonsterButton_C_ShowFriendOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MP_LobbyMonsterButton_C::BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UUI_MP_LobbyMonsterButton_C_BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.ToggleButtonColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MP_LobbyMonsterButton_C::ToggleButtonColor(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.ToggleButtonColor");
		
		UUI_MP_LobbyMonsterButton_C_ToggleButtonColor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_MP_LobbyMonsterButton_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.OnInitialized");
		
		UUI_MP_LobbyMonsterButton_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MP_LobbyMonsterButton_C::BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_MP_LobbyMonsterButton_C_BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MP_LobbyMonsterButton_C::BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_MP_LobbyMonsterButton_C_BndEvt__UI_MP_N_MenuButton_Button_54_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.ExecuteUbergraph_UI_MP_LobbyMonsterButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_LobbyMonsterButton_C::ExecuteUbergraph_UI_MP_LobbyMonsterButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C.ExecuteUbergraph_UI_MP_LobbyMonsterButton");
		
		UUI_MP_LobbyMonsterButton_C_ExecuteUbergraph_UI_MP_LobbyMonsterButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MP_LobbyMonsterButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MP_LobbyMonsterButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MP_LobbyMonsterButton.UI_MP_LobbyMonsterButton_C");
		return ptr;
	}

}


