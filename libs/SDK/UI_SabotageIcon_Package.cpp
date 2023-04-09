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
	 * 		Name   -> Function UI_SabotageIcon.UI_SabotageIcon_C.SetSabotageIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSabotageDef                                SabotageDef                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_SabotageIcon_C::SetSabotageIcon(const struct FSabotageDef& SabotageDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageIcon.UI_SabotageIcon_C.SetSabotageIcon");
		
		UUI_SabotageIcon_C_SetSabotageIcon_Params params {};
		params.SabotageDef = SabotageDef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SabotageIcon.UI_SabotageIcon_C.ExecuteUbergraph_UI_SabotageIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SabotageIcon_C::ExecuteUbergraph_UI_SabotageIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SabotageIcon.UI_SabotageIcon_C.ExecuteUbergraph_UI_SabotageIcon");
		
		UUI_SabotageIcon_C_ExecuteUbergraph_UI_SabotageIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SabotageIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SabotageIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SabotageIcon.UI_SabotageIcon_C");
		return ptr;
	}

}


