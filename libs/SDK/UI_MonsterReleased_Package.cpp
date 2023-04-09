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
	 * 		Name   -> Function UI_MonsterReleased.UI_MonsterReleased_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_MonsterReleased_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterReleased.UI_MonsterReleased_C.Construct");
		
		UUI_MonsterReleased_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterReleased.UI_MonsterReleased_C.RemoveSelf
	 * 		Flags  -> ()
	 */
	void UUI_MonsterReleased_C::RemoveSelf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterReleased.UI_MonsterReleased_C.RemoveSelf");
		
		UUI_MonsterReleased_C_RemoveSelf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MonsterReleased.UI_MonsterReleased_C.ExecuteUbergraph_UI_MonsterReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MonsterReleased_C::ExecuteUbergraph_UI_MonsterReleased(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MonsterReleased.UI_MonsterReleased_C.ExecuteUbergraph_UI_MonsterReleased");
		
		UUI_MonsterReleased_C_ExecuteUbergraph_UI_MonsterReleased_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MonsterReleased_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MonsterReleased_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MonsterReleased.UI_MonsterReleased_C");
		return ptr;
	}

}


