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
	 * 		Name   -> Function UI_ActionPrompt.UI_ActionPrompt_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ActionPrompt_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ActionPrompt.UI_ActionPrompt_C.Construct");
		
		UUI_ActionPrompt_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ActionPrompt.UI_ActionPrompt_C.SetPromptText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Prefix                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Suffix                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_ActionPrompt_C::SetPromptText(const class FText& Prefix, const class FText& Suffix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ActionPrompt.UI_ActionPrompt_C.SetPromptText");
		
		UUI_ActionPrompt_C_SetPromptText_Params params {};
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ActionPrompt.UI_ActionPrompt_C.ExecuteUbergraph_UI_ActionPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ActionPrompt_C::ExecuteUbergraph_UI_ActionPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ActionPrompt.UI_ActionPrompt_C.ExecuteUbergraph_UI_ActionPrompt");
		
		UUI_ActionPrompt_C_ExecuteUbergraph_UI_ActionPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ActionPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ActionPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ActionPrompt.UI_ActionPrompt_C");
		return ptr;
	}

}


