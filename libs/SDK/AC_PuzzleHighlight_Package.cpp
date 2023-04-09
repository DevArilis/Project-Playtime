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
	 * 		Name   -> Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.IsLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAC_PuzzleHighlight_C::IsLocal(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.IsLocal");
		
		UAC_PuzzleHighlight_C_IsLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.SetForceHighlightOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAC_PuzzleHighlight_C::SetForceHighlightOff(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.SetForceHighlightOff");
		
		UAC_PuzzleHighlight_C_SetForceHighlightOff_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UAC_PuzzleHighlight_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.ReceiveBeginPlay");
		
		UAC_PuzzleHighlight_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.TogglePuzzleHighlight
	 * 		Flags  -> ()
	 */
	void UAC_PuzzleHighlight_C::TogglePuzzleHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.TogglePuzzleHighlight");
		
		UAC_PuzzleHighlight_C_TogglePuzzleHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.ExecuteUbergraph_AC_PuzzleHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_PuzzleHighlight_C::ExecuteUbergraph_AC_PuzzleHighlight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.ExecuteUbergraph_AC_PuzzleHighlight");
		
		UAC_PuzzleHighlight_C_ExecuteUbergraph_AC_PuzzleHighlight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.OnPuzzleHighlightsOff__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAC_PuzzleHighlight_C::OnPuzzleHighlightsOff__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_PuzzleHighlight.AC_PuzzleHighlight_C.OnPuzzleHighlightsOff__DelegateSignature");
		
		UAC_PuzzleHighlight_C_OnPuzzleHighlightsOff__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAC_PuzzleHighlight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAC_PuzzleHighlight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AC_PuzzleHighlight.AC_PuzzleHighlight_C");
		return ptr;
	}

}


