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
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.GetAllPublicLevels
	 * 		Flags  -> ()
	 */
	TArray<int32_t> UUI_MP_StartServer_C::GetAllPublicLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.GetAllPublicLevels");
		
		UUI_MP_StartServer_C_GetAllPublicLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.CreateLevelButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    Levels                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_MP_StartServer_C::CreateLevelButtons(TArray<int32_t>* Levels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.CreateLevelButtons");
		
		UUI_MP_StartServer_C_CreateLevelButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Levels != nullptr)
			*Levels = params.Levels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.GetRandomLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_StartServer_C::GetRandomLevel(int32_t* OutItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.GetRandomLevel");
		
		UUI_MP_StartServer_C_GetRandomLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItem != nullptr)
			*OutItem = params.OutItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.OnFailure_8953034D42070F751E3C3A94F517334F
	 * 		Flags  -> ()
	 */
	void UUI_MP_StartServer_C::OnFailure_8953034D42070F751E3C3A94F517334F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.OnFailure_8953034D42070F751E3C3A94F517334F");
		
		UUI_MP_StartServer_C_OnFailure_8953034D42070F751E3C3A94F517334F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.OnSuccess_8953034D42070F751E3C3A94F517334F
	 * 		Flags  -> ()
	 */
	void UUI_MP_StartServer_C::OnSuccess_8953034D42070F751E3C3A94F517334F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.OnSuccess_8953034D42070F751E3C3A94F517334F");
		
		UUI_MP_StartServer_C_OnSuccess_8953034D42070F751E3C3A94F517334F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.BndEvt__UI_MP_StartServer_Start_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MP_N_MenuButton_C*                       Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_StartServer_C::BndEvt__UI_MP_StartServer_Start_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature(class UUI_MP_N_MenuButton_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.BndEvt__UI_MP_StartServer_Start_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");
		
		UUI_MP_StartServer_C_BndEvt__UI_MP_StartServer_Start_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.QuickplayHost
	 * 		Flags  -> ()
	 */
	void UUI_MP_StartServer_C::QuickplayHost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.QuickplayHost");
		
		UUI_MP_StartServer_C_QuickplayHost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MP_StartServer_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.PreConstruct");
		
		UUI_MP_StartServer_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.BndEvt__UI_MP_StartServer_PublicGame_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MP_StartServer_C::BndEvt__UI_MP_StartServer_PublicGame_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.BndEvt__UI_MP_StartServer_PublicGame_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_MP_StartServer_C_BndEvt__UI_MP_StartServer_PublicGame_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_MP_StartServer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.Construct");
		
		UUI_MP_StartServer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.BndEvt__UI_MP_StartServer_UI_BasicButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MP_StartServer_C::BndEvt__UI_MP_StartServer_UI_BasicButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.BndEvt__UI_MP_StartServer_UI_BasicButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature");
		
		UUI_MP_StartServer_C_BndEvt__UI_MP_StartServer_UI_BasicButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.ExecuteUbergraph_UI_MP_StartServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MP_StartServer_C::ExecuteUbergraph_UI_MP_StartServer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.ExecuteUbergraph_UI_MP_StartServer");
		
		UUI_MP_StartServer_C_ExecuteUbergraph_UI_MP_StartServer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.QuickplayHostFailed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MP_StartServer_C::QuickplayHostFailed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.QuickplayHostFailed__DelegateSignature");
		
		UUI_MP_StartServer_C_QuickplayHostFailed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MP_StartServer.UI_MP_StartServer_C.BackPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MP_StartServer_C::BackPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MP_StartServer.UI_MP_StartServer_C.BackPressed__DelegateSignature");
		
		UUI_MP_StartServer_C_BackPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MP_StartServer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MP_StartServer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MP_StartServer.UI_MP_StartServer_C");
		return ptr;
	}

}


