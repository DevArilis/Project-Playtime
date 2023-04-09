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
	 * 		Name   -> Function UI_MP_Notif.UI_MP_Notif_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_MP_Notif_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_Notif.UI_MP_Notif_C.Construct");
		
		UUI_MP_Notif_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_Notif.UI_MP_Notif_C.BndEvt__UI_MP_Notif_No_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MP_Notif_C::BndEvt__UI_MP_Notif_No_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_Notif.UI_MP_Notif_C.BndEvt__UI_MP_Notif_No_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_MP_Notif_C_BndEvt__UI_MP_Notif_No_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_Notif.UI_MP_Notif_C.BndEvt__UI_MP_Notif_Yes_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MP_Notif_C::BndEvt__UI_MP_Notif_Yes_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_Notif.UI_MP_Notif_C.BndEvt__UI_MP_Notif_Yes_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_MP_Notif_C_BndEvt__UI_MP_Notif_Yes_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_Notif.UI_MP_Notif_C.ForceNo
	 * 		Flags  -> ()
	 */
	void UUI_MP_Notif_C::ForceNo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_Notif.UI_MP_Notif_C.ForceNo");
		
		UUI_MP_Notif_C_ForceNo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_Notif.UI_MP_Notif_C.OnEscapeInputCapture
	 * 		Flags  -> ()
	 */
	void UUI_MP_Notif_C::OnEscapeInputCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_Notif.UI_MP_Notif_C.OnEscapeInputCapture");
		
		UUI_MP_Notif_C_OnEscapeInputCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_Notif.UI_MP_Notif_C.ExecuteUbergraph_UI_MP_Notif
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_Notif_C::ExecuteUbergraph_UI_MP_Notif(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_Notif.UI_MP_Notif_C.ExecuteUbergraph_UI_MP_Notif");
		
		UUI_MP_Notif_C_ExecuteUbergraph_UI_MP_Notif_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MP_Notif_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MP_Notif_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MP_Notif.UI_MP_Notif_C");
		return ptr;
	}

}


