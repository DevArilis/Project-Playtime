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
	 * 		Name   -> Function UI_IntroCinematic.UI_IntroCinematic_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_IntroCinematic_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IntroCinematic.UI_IntroCinematic_C.Construct");
		
		UUI_IntroCinematic_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_IntroCinematic.UI_IntroCinematic_C.AnimFinished
	 * 		Flags  -> ()
	 */
	void UUI_IntroCinematic_C::AnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IntroCinematic.UI_IntroCinematic_C.AnimFinished");
		
		UUI_IntroCinematic_C_AnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_IntroCinematic.UI_IntroCinematic_C.BndEvt__UI_IntroCinematic_Skip_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_IntroCinematic_C::BndEvt__UI_IntroCinematic_Skip_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IntroCinematic.UI_IntroCinematic_C.BndEvt__UI_IntroCinematic_Skip_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature");
		
		UUI_IntroCinematic_C_BndEvt__UI_IntroCinematic_Skip_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_IntroCinematic.UI_IntroCinematic_C.Finished
	 * 		Flags  -> ()
	 */
	void UUI_IntroCinematic_C::Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IntroCinematic.UI_IntroCinematic_C.Finished");
		
		UUI_IntroCinematic_C_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_IntroCinematic.UI_IntroCinematic_C.ExecuteUbergraph_UI_IntroCinematic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_IntroCinematic_C::ExecuteUbergraph_UI_IntroCinematic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IntroCinematic.UI_IntroCinematic_C.ExecuteUbergraph_UI_IntroCinematic");
		
		UUI_IntroCinematic_C_ExecuteUbergraph_UI_IntroCinematic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_IntroCinematic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_IntroCinematic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_IntroCinematic.UI_IntroCinematic_C");
		return ptr;
	}

}


