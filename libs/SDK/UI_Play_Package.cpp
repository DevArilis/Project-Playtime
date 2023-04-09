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
	 * 		Name   -> Function UI_Play.UI_Play_C.GetMinutesTimespan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimespan                                   InTimespan                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UUI_Play_C::GetMinutesTimespan(const struct FTimespan& InTimespan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.GetMinutesTimespan");
		
		UUI_Play_C_GetMinutesTimespan_Params params {};
		params.InTimespan = InTimespan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.OnFailure_0A33D4554B1C14C6362812B574431F02
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::OnFailure_0A33D4554B1C14C6362812B574431F02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.OnFailure_0A33D4554B1C14C6362812B574431F02");
		
		UUI_Play_C_OnFailure_0A33D4554B1C14C6362812B574431F02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.OnSuccess_0A33D4554B1C14C6362812B574431F02
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::OnSuccess_0A33D4554B1C14C6362812B574431F02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.OnSuccess_0A33D4554B1C14C6362812B574431F02");
		
		UUI_Play_C_OnSuccess_0A33D4554B1C14C6362812B574431F02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.BndEvt__UI_Play_Host_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::BndEvt__UI_Play_Host_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.BndEvt__UI_Play_Host_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature");
		
		UUI_Play_C_BndEvt__UI_Play_Host_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.Construct");
		
		UUI_Play_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_8_QuickplayHostFailed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_8_QuickplayHostFailed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_8_QuickplayHostFailed__DelegateSignature");
		
		UUI_Play_C_BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_8_QuickplayHostFailed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_7_WantsToTryHosting__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_7_WantsToTryHosting__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_7_WantsToTryHosting__DelegateSignature");
		
		UUI_Play_C_BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_7_WantsToTryHosting__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.BndEvt__UI_Play_Back_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::BndEvt__UI_Play_Back_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.BndEvt__UI_Play_Back_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature");
		
		UUI_Play_C_BndEvt__UI_Play_Back_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_5_Back__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_5_Back__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_5_Back__DelegateSignature");
		
		UUI_Play_C_BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_5_Back__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_MP_ServerBrowser_K2Node_ComponentBoundEvent_4_Back__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::BndEvt__UI_Play_UI_MP_ServerBrowser_K2Node_ComponentBoundEvent_4_Back__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_MP_ServerBrowser_K2Node_ComponentBoundEvent_4_Back__DelegateSignature");
		
		UUI_Play_C_BndEvt__UI_Play_UI_MP_ServerBrowser_K2Node_ComponentBoundEvent_4_Back__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature");
		
		UUI_Play_C_BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.BndEvt__UI_Play_ServerList_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::BndEvt__UI_Play_ServerList_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.BndEvt__UI_Play_ServerList_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");
		
		UUI_Play_C_BndEvt__UI_Play_ServerList_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.BndEvt__UI_Play_Quickplay_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::BndEvt__UI_Play_Quickplay_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.BndEvt__UI_Play_Quickplay_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature");
		
		UUI_Play_C_BndEvt__UI_Play_Quickplay_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.ExecuteUbergraph_UI_Play
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Play_C::ExecuteUbergraph_UI_Play(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.ExecuteUbergraph_UI_Play");
		
		UUI_Play_C_ExecuteUbergraph_UI_Play_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.GoBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::GoBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.GoBack__DelegateSignature");
		
		UUI_Play_C_GoBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.QuickplayReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::QuickplayReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.QuickplayReleased__DelegateSignature");
		
		UUI_Play_C_QuickplayReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.ListReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::ListReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.ListReleased__DelegateSignature");
		
		UUI_Play_C_ListReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Play.UI_Play_C.HostReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Play_C::HostReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Play.UI_Play_C.HostReleased__DelegateSignature");
		
		UUI_Play_C_HostReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Play_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Play_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Play.UI_Play_C");
		return ptr;
	}

}


