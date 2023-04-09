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
	 * 		Name   -> Function UI_PuzzleNametag.UI_PuzzleNametag_C.Start Next Phase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewPhase                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PuzzleNametag_C::StartNextPhase(int32_t NewPhase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PuzzleNametag.UI_PuzzleNametag_C.Start Next Phase");
		
		UUI_PuzzleNametag_C_StartNextPhase_Params params {};
		params.NewPhase = NewPhase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PuzzleNametag.UI_PuzzleNametag_C.AnimFadeOut
	 * 		Flags  -> ()
	 */
	void UUI_PuzzleNametag_C::AnimFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PuzzleNametag.UI_PuzzleNametag_C.AnimFadeOut");
		
		UUI_PuzzleNametag_C_AnimFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PuzzleNametag.UI_PuzzleNametag_C.Set Distance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFloat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PuzzleNametag_C::SetDistance(float InFloat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PuzzleNametag.UI_PuzzleNametag_C.Set Distance");
		
		UUI_PuzzleNametag_C_SetDistance_Params params {};
		params.InFloat = InFloat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PuzzleNametag.UI_PuzzleNametag_C.Solve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PuzzleNametag_C::Solve(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PuzzleNametag.UI_PuzzleNametag_C.Solve");
		
		UUI_PuzzleNametag_C_Solve_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PuzzleNametag.UI_PuzzleNametag_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PuzzleNametag_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PuzzleNametag.UI_PuzzleNametag_C.Construct");
		
		UUI_PuzzleNametag_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PuzzleNametag.UI_PuzzleNametag_C.ExecuteUbergraph_UI_PuzzleNametag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PuzzleNametag_C::ExecuteUbergraph_UI_PuzzleNametag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PuzzleNametag.UI_PuzzleNametag_C.ExecuteUbergraph_UI_PuzzleNametag");
		
		UUI_PuzzleNametag_C_ExecuteUbergraph_UI_PuzzleNametag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PuzzleNametag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PuzzleNametag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PuzzleNametag.UI_PuzzleNametag_C");
		return ptr;
	}

}


