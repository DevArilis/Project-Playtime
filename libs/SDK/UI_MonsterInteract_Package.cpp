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
	 * 		Name   -> Function UI_MonsterInteract.UI_MonsterInteract_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_MonsterInteract_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterInteract.UI_MonsterInteract_C.Construct");
		
		UUI_MonsterInteract_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterInteract.UI_MonsterInteract_C.Destroy
	 * 		Flags  -> ()
	 */
	void UUI_MonsterInteract_C::Destroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterInteract.UI_MonsterInteract_C.Destroy");
		
		UUI_MonsterInteract_C_Destroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterInteract.UI_MonsterInteract_C.ExecuteUbergraph_UI_MonsterInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MonsterInteract_C::ExecuteUbergraph_UI_MonsterInteract(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterInteract.UI_MonsterInteract_C.ExecuteUbergraph_UI_MonsterInteract");
		
		UUI_MonsterInteract_C_ExecuteUbergraph_UI_MonsterInteract_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MonsterInteract_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MonsterInteract_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MonsterInteract.UI_MonsterInteract_C");
		return ptr;
	}

}


