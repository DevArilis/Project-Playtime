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
	 * 		Name   -> Function UI_HandPadCharge.UI_HandPadCharge_C.GetPercent_1
	 * 		Flags  -> ()
	 */
	float UUI_HandPadCharge_C::GetPercent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HandPadCharge.UI_HandPadCharge_C.GetPercent_1");
		
		UUI_HandPadCharge_C_GetPercent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HandPadCharge.UI_HandPadCharge_C.UpdateChargeBarLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentCharge                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxCharge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HandPadCharge_C::UpdateChargeBarLeft(float CurrentCharge, float MaxCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HandPadCharge.UI_HandPadCharge_C.UpdateChargeBarLeft");
		
		UUI_HandPadCharge_C_UpdateChargeBarLeft_Params params {};
		params.CurrentCharge = CurrentCharge;
		params.MaxCharge = MaxCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HandPadCharge.UI_HandPadCharge_C.UpdateChargeBarRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentCharge                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxCharge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HandPadCharge_C::UpdateChargeBarRight(float CurrentCharge, float MaxCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HandPadCharge.UI_HandPadCharge_C.UpdateChargeBarRight");
		
		UUI_HandPadCharge_C_UpdateChargeBarRight_Params params {};
		params.CurrentCharge = CurrentCharge;
		params.MaxCharge = MaxCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HandPadCharge.UI_HandPadCharge_C.ExecuteUbergraph_UI_HandPadCharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HandPadCharge_C::ExecuteUbergraph_UI_HandPadCharge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HandPadCharge.UI_HandPadCharge_C.ExecuteUbergraph_UI_HandPadCharge");
		
		UUI_HandPadCharge_C_ExecuteUbergraph_UI_HandPadCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HandPadCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HandPadCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HandPadCharge.UI_HandPadCharge_C");
		return ptr;
	}

}


