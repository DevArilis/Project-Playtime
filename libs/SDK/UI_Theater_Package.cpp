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
	 * 		Name   -> Function UI_Theater.UI_Theater_C.Remove Current Subtitle
	 * 		Flags  -> ()
	 */
	void UUI_Theater_C::RemoveCurrentSubtitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Theater.UI_Theater_C.Remove Current Subtitle");
		
		UUI_Theater_C_RemoveCurrentSubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Theater.UI_Theater_C.Create a New Subtitle
	 * 		Flags  -> ()
	 */
	void UUI_Theater_C::CreateaNewSubtitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Theater.UI_Theater_C.Create a New Subtitle");
		
		UUI_Theater_C_CreateaNewSubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Theater.UI_Theater_C.OpenAudioSource
	 * 		Flags  -> ()
	 */
	void UUI_Theater_C::OpenAudioSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Theater.UI_Theater_C.OpenAudioSource");
		
		UUI_Theater_C_OpenAudioSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Theater.UI_Theater_C.SetMovieInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FF_TheaterTapesStruct                       Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               Unlocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Theater_C::SetMovieInfo(const struct FF_TheaterTapesStruct& Info, bool Unlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Theater.UI_Theater_C.SetMovieInfo");
		
		UUI_Theater_C_SetMovieInfo_Params params {};
		params.Info = Info;
		params.Unlocked = Unlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Theater.UI_Theater_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Theater_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Theater.UI_Theater_C.Construct");
		
		UUI_Theater_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_PlayButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Theater_C::BndEvt__UI_Theater_PlayButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_PlayButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_Theater_C_BndEvt__UI_Theater_PlayButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_PauseButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Theater_C::BndEvt__UI_Theater_PauseButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_PauseButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_Theater_C_BndEvt__UI_Theater_PauseButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_PauseButton_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Theater_C::BndEvt__UI_Theater_PauseButton_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_PauseButton_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_Theater_C_BndEvt__UI_Theater_PauseButton_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_fs_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MP_N_MenuButton_New_C*                   Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Theater_C::BndEvt__UI_Theater_fs_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature(class UUI_MP_N_MenuButton_New_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_fs_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature");
		
		UUI_Theater_C_BndEvt__UI_Theater_fs_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Theater.UI_Theater_C.Refresh
	 * 		Flags  -> ()
	 */
	void UUI_Theater_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Theater.UI_Theater_C.Refresh");
		
		UUI_Theater_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Theater_C::BndEvt__UI_Theater_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature");
		
		UUI_Theater_C_BndEvt__UI_Theater_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Theater.UI_Theater_C.ExecuteUbergraph_UI_Theater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Theater_C::ExecuteUbergraph_UI_Theater(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Theater.UI_Theater_C.ExecuteUbergraph_UI_Theater");
		
		UUI_Theater_C_ExecuteUbergraph_UI_Theater_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Theater.UI_Theater_C.BackReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Theater_C::BackReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Theater.UI_Theater_C.BackReleased__DelegateSignature");
		
		UUI_Theater_C_BackReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Theater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Theater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Theater.UI_Theater_C");
		return ptr;
	}

}


