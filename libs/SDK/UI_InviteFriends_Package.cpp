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
	 * 		Name   -> Function UI_InviteFriends.UI_InviteFriends_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_InviteFriends_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InviteFriends.UI_InviteFriends_C.Construct");
		
		UUI_InviteFriends_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InviteFriends.UI_InviteFriends_C.BndEvt__UI_InviteFriends_UI_BasicButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_InviteFriends_C::BndEvt__UI_InviteFriends_UI_BasicButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InviteFriends.UI_InviteFriends_C.BndEvt__UI_InviteFriends_UI_BasicButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature");
		
		UUI_InviteFriends_C_BndEvt__UI_InviteFriends_UI_BasicButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InviteFriends.UI_InviteFriends_C.ExecuteUbergraph_UI_InviteFriends
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InviteFriends_C::ExecuteUbergraph_UI_InviteFriends(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InviteFriends.UI_InviteFriends_C.ExecuteUbergraph_UI_InviteFriends");
		
		UUI_InviteFriends_C_ExecuteUbergraph_UI_InviteFriends_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InviteFriends_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InviteFriends_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InviteFriends.UI_InviteFriends_C");
		return ptr;
	}

}


