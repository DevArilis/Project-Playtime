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
	 * 		Name   -> Function UI_Customize.UI_Customize_C.SetNetChar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_CustomizationMenuCharacter_C*            MenuCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Customize_C::SetNetChar(class ABP_NetworkCharacter_C* NewValue, class ABP_CustomizationMenuCharacter_C* MenuCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.SetNetChar");
		
		UUI_Customize_C_SetNetChar_Params params {};
		params.NewValue = NewValue;
		params.MenuCharacter = MenuCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Customize_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.PreConstruct");
		
		UUI_Customize_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Customize_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.Construct");
		
		UUI_Customize_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Customize_C::BndEvt__UI_Customize_Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_Customize_C_BndEvt__UI_Customize_Button_356_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.RefreshVisuals
	 * 		Flags  -> ()
	 */
	void UUI_Customize_C::RefreshVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.RefreshVisuals");
		
		UUI_Customize_C_RefreshVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_NextCharButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Customize_C::BndEvt__UI_Customize_NextCharButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_NextCharButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_Customize_C_BndEvt__UI_Customize_NextCharButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_CustomizeButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Customize_C::BndEvt__UI_Customize_CustomizeButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_CustomizeButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");
		
		UUI_Customize_C_BndEvt__UI_Customize_CustomizeButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_5_ChangedAppearance__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Customize_C::BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_5_ChangedAppearance__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_5_ChangedAppearance__DelegateSignature");
		
		UUI_Customize_C_BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_5_ChangedAppearance__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Customize_C::BndEvt__UI_Customize_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature");
		
		UUI_Customize_C_BndEvt__UI_Customize_UI_BackButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.Enter
	 * 		Flags  -> ()
	 */
	void UUI_Customize_C::Enter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.Enter");
		
		UUI_Customize_C_Enter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_3_MouseDragged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   DeltaMouse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Customize_C::BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_3_MouseDragged__DelegateSignature(const struct FVector2D& DeltaMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_3_MouseDragged__DelegateSignature");
		
		UUI_Customize_C_BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_3_MouseDragged__DelegateSignature_Params params {};
		params.DeltaMouse = DeltaMouse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_6_UpdateRotatingCharacter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Rotating                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Customize_C::BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_6_UpdateRotatingCharacter__DelegateSignature(bool Rotating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_6_UpdateRotatingCharacter__DelegateSignature");
		
		UUI_Customize_C_BndEvt__UI_Customize_UI_CustomizeCharacter_K2Node_ComponentBoundEvent_6_UpdateRotatingCharacter__DelegateSignature_Params params {};
		params.Rotating = Rotating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.ExecuteUbergraph_UI_Customize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Customize_C::ExecuteUbergraph_UI_Customize(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.ExecuteUbergraph_UI_Customize");
		
		UUI_Customize_C_ExecuteUbergraph_UI_Customize_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.UpdateRotatingCharacter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UpdateRotatingCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Customize_C::UpdateRotatingCharacter__DelegateSignature(bool UpdateRotatingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.UpdateRotatingCharacter__DelegateSignature");
		
		UUI_Customize_C_UpdateRotatingCharacter__DelegateSignature_Params params {};
		params.UpdateRotatingCharacter = UpdateRotatingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.Mouse Dragged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   DeltaMouse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Customize_C::MouseDragged__DelegateSignature(const struct FVector2D& DeltaMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.Mouse Dragged__DelegateSignature");
		
		UUI_Customize_C_MouseDragged__DelegateSignature_Params params {};
		params.DeltaMouse = DeltaMouse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.ChangedAppearance__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Customize_C::ChangedAppearance__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.ChangedAppearance__DelegateSignature");
		
		UUI_Customize_C_ChangedAppearance__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Customize.UI_Customize_C.Back Pressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Customize_C::BackPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Customize.UI_Customize_C.Back Pressed__DelegateSignature");
		
		UUI_Customize_C_BackPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Customize_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Customize_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Customize.UI_Customize_C");
		return ptr;
	}

}


