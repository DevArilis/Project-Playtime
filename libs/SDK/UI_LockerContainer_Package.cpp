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
	 * 		Name   -> Function UI_LockerContainer.UI_LockerContainer_C.Get_BreathTextPrefix_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_LockerContainer_C::Get_BreathTextPrefix_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockerContainer.UI_LockerContainer_C.Get_BreathTextPrefix_Text_1");
		
		UUI_LockerContainer_C_Get_BreathTextPrefix_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockerContainer.UI_LockerContainer_C.SetBreathVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MakeVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LockerContainer_C::SetBreathVisibility(bool MakeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockerContainer.UI_LockerContainer_C.SetBreathVisibility");
		
		UUI_LockerContainer_C_SetBreathVisibility_Params params {};
		params.MakeVisible = MakeVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockerContainer.UI_LockerContainer_C.OuttaBreath
	 * 		Flags  -> ()
	 */
	void UUI_LockerContainer_C::OuttaBreath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockerContainer.UI_LockerContainer_C.OuttaBreath");
		
		UUI_LockerContainer_C_OuttaBreath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockerContainer.UI_LockerContainer_C.SetBreathTextVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MakeVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LockerContainer_C::SetBreathTextVisibility(bool MakeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockerContainer.UI_LockerContainer_C.SetBreathTextVisibility");
		
		UUI_LockerContainer_C_SetBreathTextVisibility_Params params {};
		params.MakeVisible = MakeVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockerContainer.UI_LockerContainer_C.SetExitTextVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MakeVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LockerContainer_C::SetExitTextVisibility(bool MakeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockerContainer.UI_LockerContainer_C.SetExitTextVisibility");
		
		UUI_LockerContainer_C_SetExitTextVisibility_Params params {};
		params.MakeVisible = MakeVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockerContainer.UI_LockerContainer_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_LockerContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockerContainer.UI_LockerContainer_C.Construct");
		
		UUI_LockerContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockerContainer.UI_LockerContainer_C.ExecuteUbergraph_UI_LockerContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockerContainer_C::ExecuteUbergraph_UI_LockerContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockerContainer.UI_LockerContainer_C.ExecuteUbergraph_UI_LockerContainer");
		
		UUI_LockerContainer_C_ExecuteUbergraph_UI_LockerContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LockerContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LockerContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LockerContainer.UI_LockerContainer_C");
		return ptr;
	}

}


