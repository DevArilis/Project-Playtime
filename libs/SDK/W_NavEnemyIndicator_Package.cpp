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
	 * 		Name   -> Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.Toggle
	 * 		Flags  -> ()
	 */
	void UW_NavEnemyIndicator_C::Toggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.Toggle");
		
		UW_NavEnemyIndicator_C_Toggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_NavEnemyIndicator_C::Show(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.Show");
		
		UW_NavEnemyIndicator_C_Show_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.AddIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      UserWidgetClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UUserWidget* UW_NavEnemyIndicator_C::AddIcon(class UClass* UserWidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.AddIcon");
		
		UW_NavEnemyIndicator_C_AddIcon_Params params {};
		params.UserWidgetClass = UserWidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_NavEnemyIndicator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.Construct");
		
		UW_NavEnemyIndicator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.ExecuteUbergraph_W_NavEnemyIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_NavEnemyIndicator_C::ExecuteUbergraph_W_NavEnemyIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.ExecuteUbergraph_W_NavEnemyIndicator");
		
		UW_NavEnemyIndicator_C_ExecuteUbergraph_W_NavEnemyIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_NavEnemyIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_NavEnemyIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_NavEnemyIndicator.W_NavEnemyIndicator_C");
		return ptr;
	}

}


