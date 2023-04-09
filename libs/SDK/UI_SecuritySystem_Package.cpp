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
	 * 		Name   -> Function UI_SecuritySystem.UI_SecuritySystem_C.CameraForward
	 * 		Flags  -> ()
	 */
	void UUI_SecuritySystem_C::CameraForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SecuritySystem.UI_SecuritySystem_C.CameraForward");
		
		UUI_SecuritySystem_C_CameraForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SecuritySystem.UI_SecuritySystem_C.CameraBack
	 * 		Flags  -> ()
	 */
	void UUI_SecuritySystem_C::CameraBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SecuritySystem.UI_SecuritySystem_C.CameraBack");
		
		UUI_SecuritySystem_C_CameraBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SecuritySystem.UI_SecuritySystem_C.SetCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SecuritySystem_C::SetCamera(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SecuritySystem.UI_SecuritySystem_C.SetCamera");
		
		UUI_SecuritySystem_C_SetCamera_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SecuritySystem.UI_SecuritySystem_C.GetCameraLength
	 * 		Flags  -> ()
	 */
	int32_t UUI_SecuritySystem_C::GetCameraLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SecuritySystem.UI_SecuritySystem_C.GetCameraLength");
		
		UUI_SecuritySystem_C_GetCameraLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SecuritySystem.UI_SecuritySystem_C.GetClock
	 * 		Flags  -> ()
	 */
	class FText UUI_SecuritySystem_C::GetClock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SecuritySystem.UI_SecuritySystem_C.GetClock");
		
		UUI_SecuritySystem_C_GetClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SecuritySystem.UI_SecuritySystem_C.BndEvt__UI_SecuritySystem_Back_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SecuritySystem_C::BndEvt__UI_SecuritySystem_Back_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SecuritySystem.UI_SecuritySystem_C.BndEvt__UI_SecuritySystem_Back_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_SecuritySystem_C_BndEvt__UI_SecuritySystem_Back_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SecuritySystem.UI_SecuritySystem_C.BndEvt__UI_SecuritySystem_Forward_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SecuritySystem_C::BndEvt__UI_SecuritySystem_Forward_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SecuritySystem.UI_SecuritySystem_C.BndEvt__UI_SecuritySystem_Forward_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_SecuritySystem_C_BndEvt__UI_SecuritySystem_Forward_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SecuritySystem.UI_SecuritySystem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_SecuritySystem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SecuritySystem.UI_SecuritySystem_C.Construct");
		
		UUI_SecuritySystem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SecuritySystem.UI_SecuritySystem_C.EventReturn
	 * 		Flags  -> ()
	 */
	void UUI_SecuritySystem_C::EventReturn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SecuritySystem.UI_SecuritySystem_C.EventReturn");
		
		UUI_SecuritySystem_C_EventReturn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SecuritySystem.UI_SecuritySystem_C.ExecuteUbergraph_UI_SecuritySystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SecuritySystem_C::ExecuteUbergraph_UI_SecuritySystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SecuritySystem.UI_SecuritySystem_C.ExecuteUbergraph_UI_SecuritySystem");
		
		UUI_SecuritySystem_C_ExecuteUbergraph_UI_SecuritySystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SecuritySystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SecuritySystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SecuritySystem.UI_SecuritySystem_C");
		return ptr;
	}

}


