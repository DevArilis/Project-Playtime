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
	 * 		Name   -> Function UI_ColorSelector.UI_ColorSelector_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ColorSelector_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorSelector.UI_ColorSelector_C.PreConstruct");
		
		UUI_ColorSelector_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorSelector.UI_ColorSelector_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ColorSelector_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorSelector.UI_ColorSelector_C.Construct");
		
		UUI_ColorSelector_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorSelector.UI_ColorSelector_C.PopulateColorMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Colors                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_ColorSelector_C::PopulateColorMenu(TArray<struct FLinearColor> Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorSelector.UI_ColorSelector_C.PopulateColorMenu");
		
		UUI_ColorSelector_C_PopulateColorMenu_Params params {};
		params.Colors = Colors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorSelector.UI_ColorSelector_C.ColorSelectedMenu_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_ColorItem_C*                             SelectedColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ColorSelector_C::ColorSelectedMenu_Event(int32_t ColorIndex, class UUI_ColorItem_C* SelectedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorSelector.UI_ColorSelector_C.ColorSelectedMenu_Event");
		
		UUI_ColorSelector_C_ColorSelectedMenu_Event_Params params {};
		params.ColorIndex = ColorIndex;
		params.SelectedColor = SelectedColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorSelector.UI_ColorSelector_C.ExecuteUbergraph_UI_ColorSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ColorSelector_C::ExecuteUbergraph_UI_ColorSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorSelector.UI_ColorSelector_C.ExecuteUbergraph_UI_ColorSelector");
		
		UUI_ColorSelector_C_ExecuteUbergraph_UI_ColorSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorSelector.UI_ColorSelector_C.ColorSelectedMenu__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_ColorItem_C*                             SelectedColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ColorSelector_C::ColorSelectedMenu__DelegateSignature(int32_t ColorIndex, class UUI_ColorItem_C* SelectedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorSelector.UI_ColorSelector_C.ColorSelectedMenu__DelegateSignature");
		
		UUI_ColorSelector_C_ColorSelectedMenu__DelegateSignature_Params params {};
		params.ColorIndex = ColorIndex;
		params.SelectedColor = SelectedColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ColorSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ColorSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ColorSelector.UI_ColorSelector_C");
		return ptr;
	}

}


