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
	 * 		Name   -> Function GI_SavedState.GI_SavedState_C.HideMigrationWidget
	 * 		Flags  -> ()
	 */
	void UGI_SavedState_C::HideMigrationWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_SavedState.GI_SavedState_C.HideMigrationWidget");
		
		UGI_SavedState_C_HideMigrationWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GI_SavedState.GI_SavedState_C.ShowMigrationWidget
	 * 		Flags  -> ()
	 */
	void UGI_SavedState_C::ShowMigrationWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GI_SavedState.GI_SavedState_C.ShowMigrationWidget");
		
		UGI_SavedState_C_ShowMigrationWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGI_SavedState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGI_SavedState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GI_SavedState.GI_SavedState_C");
		return ptr;
	}

}


