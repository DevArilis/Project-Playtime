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
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.FailServers
	 * 		Flags  -> ()
	 */
	void UUI_MP_ServerBrowser_C::FailServers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.FailServers");
		
		UUI_MP_ServerBrowser_C_FailServers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.ClearServers
	 * 		Flags  -> ()
	 */
	void UUI_MP_ServerBrowser_C::ClearServers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.ClearServers");
		
		UUI_MP_ServerBrowser_C_ClearServers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.PopulateServers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamSessionResult>                 SteamSessions                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_MP_ServerBrowser_C::PopulateServers(TArray<struct FSteamSessionResult>* SteamSessions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.PopulateServers");
		
		UUI_MP_ServerBrowser_C_PopulateServers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamSessions != nullptr)
			*SteamSessions = params.SteamSessions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.PopulateRightData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_N_ServerRow_C*                           Row                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_ServerBrowser_C::PopulateRightData(class UUI_N_ServerRow_C* Row)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.PopulateRightData");
		
		UUI_MP_ServerBrowser_C_PopulateRightData_Params params {};
		params.Row = Row;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.OnFailure_7EECB2314B992AA8E6AB5BB3D8E913F7
	 * 		Flags  -> ()
	 */
	void UUI_MP_ServerBrowser_C::OnFailure_7EECB2314B992AA8E6AB5BB3D8E913F7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.OnFailure_7EECB2314B992AA8E6AB5BB3D8E913F7");
		
		UUI_MP_ServerBrowser_C_OnFailure_7EECB2314B992AA8E6AB5BB3D8E913F7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.OnSuccess_7EECB2314B992AA8E6AB5BB3D8E913F7
	 * 		Flags  -> ()
	 */
	void UUI_MP_ServerBrowser_C::OnSuccess_7EECB2314B992AA8E6AB5BB3D8E913F7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.OnSuccess_7EECB2314B992AA8E6AB5BB3D8E913F7");
		
		UUI_MP_ServerBrowser_C_OnSuccess_7EECB2314B992AA8E6AB5BB3D8E913F7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.OnCallback_BE0D16BF44C98FD5E825EB91E429D311
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamSessionResult>                 Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_MP_ServerBrowser_C::OnCallback_BE0D16BF44C98FD5E825EB91E429D311(TArray<struct FSteamSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.OnCallback_BE0D16BF44C98FD5E825EB91E429D311");
		
		UUI_MP_ServerBrowser_C_OnCallback_BE0D16BF44C98FD5E825EB91E429D311_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_Button_144_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MP_ServerBrowser_C::BndEvt__UI_MP_ServerBrowser_Button_144_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_Button_144_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_MP_ServerBrowser_C_BndEvt__UI_MP_ServerBrowser_Button_144_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_Search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_MP_ServerBrowser_C::BndEvt__UI_MP_ServerBrowser_Search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_Search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UUI_MP_ServerBrowser_C_BndEvt__UI_MP_ServerBrowser_Search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_MP_ServerBrowser_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.OnInitialized");
		
		UUI_MP_ServerBrowser_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.Initialize
	 * 		Flags  -> ()
	 */
	void UUI_MP_ServerBrowser_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.Initialize");
		
		UUI_MP_ServerBrowser_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_Play_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MP_N_MenuButton_C*                       Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_ServerBrowser_C::BndEvt__UI_MP_ServerBrowser_Play_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature(class UUI_MP_N_MenuButton_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_Play_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");
		
		UUI_MP_ServerBrowser_C_BndEvt__UI_MP_ServerBrowser_Play_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_Exit_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MP_N_MenuButton_C*                       Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_ServerBrowser_C::BndEvt__UI_MP_ServerBrowser_Exit_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature(class UUI_MP_N_MenuButton_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_Exit_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature");
		
		UUI_MP_ServerBrowser_C_BndEvt__UI_MP_ServerBrowser_Exit_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_CategoryFriends_K2Node_ComponentBoundEvent_6_Released__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ServerCategory                                   Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_ServerBrowser_C::BndEvt__UI_MP_ServerBrowser_CategoryFriends_K2Node_ComponentBoundEvent_6_Released__DelegateSignature(E_ServerCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_CategoryFriends_K2Node_ComponentBoundEvent_6_Released__DelegateSignature");
		
		UUI_MP_ServerBrowser_C_BndEvt__UI_MP_ServerBrowser_CategoryFriends_K2Node_ComponentBoundEvent_6_Released__DelegateSignature_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_CategoryPublic_K2Node_ComponentBoundEvent_3_Released__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ServerCategory                                   Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_ServerBrowser_C::BndEvt__UI_MP_ServerBrowser_CategoryPublic_K2Node_ComponentBoundEvent_3_Released__DelegateSignature(E_ServerCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_CategoryPublic_K2Node_ComponentBoundEvent_3_Released__DelegateSignature");
		
		UUI_MP_ServerBrowser_C_BndEvt__UI_MP_ServerBrowser_CategoryPublic_K2Node_ComponentBoundEvent_3_Released__DelegateSignature_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.ExecuteUbergraph_UI_MP_ServerBrowser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_ServerBrowser_C::ExecuteUbergraph_UI_MP_ServerBrowser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.ExecuteUbergraph_UI_MP_ServerBrowser");
		
		UUI_MP_ServerBrowser_C_ExecuteUbergraph_UI_MP_ServerBrowser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.Back__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MP_ServerBrowser_C::Back__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.Back__DelegateSignature");
		
		UUI_MP_ServerBrowser_C_Back__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MP_ServerBrowser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MP_ServerBrowser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MP_ServerBrowser.UI_MP_ServerBrowser_C");
		return ptr;
	}

}


