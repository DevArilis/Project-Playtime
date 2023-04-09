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
	 * 		Name   -> Function UI_N_Loading.UI_N_Loading_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_N_Loading_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_Loading.UI_N_Loading_C.Construct");
		
		UUI_N_Loading_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_Loading.UI_N_Loading_C.ExecuteUbergraph_UI_N_Loading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_N_Loading_C::ExecuteUbergraph_UI_N_Loading(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_Loading.UI_N_Loading_C.ExecuteUbergraph_UI_N_Loading");
		
		UUI_N_Loading_C_ExecuteUbergraph_UI_N_Loading_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_N_Loading_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_N_Loading_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_N_Loading.UI_N_Loading_C");
		return ptr;
	}

}


