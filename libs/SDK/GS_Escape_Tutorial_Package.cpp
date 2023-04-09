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
	 * 		Name   -> Function GS_Escape_Tutorial.GS_Escape_Tutorial_C.EndGame
	 * 		Flags  -> ()
	 */
	void AGS_Escape_Tutorial_C::EndGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape_Tutorial.GS_Escape_Tutorial_C.EndGame");
		
		AGS_Escape_Tutorial_C_EndGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape_Tutorial.GS_Escape_Tutorial_C.OnEndGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        HeadingText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        SubheadingText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               GivePoints                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_PlayerType                                       PlayerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_Tutorial_C::OnEndGame(const class FText& HeadingText, const class FText& SubheadingText, bool GivePoints, E_PlayerType PlayerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape_Tutorial.GS_Escape_Tutorial_C.OnEndGame");
		
		AGS_Escape_Tutorial_C_OnEndGame_Params params {};
		params.HeadingText = HeadingText;
		params.SubheadingText = SubheadingText;
		params.GivePoints = GivePoints;
		params.PlayerType = PlayerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape_Tutorial.GS_Escape_Tutorial_C.CheckEndConditions
	 * 		Flags  -> ()
	 */
	void AGS_Escape_Tutorial_C::CheckEndConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape_Tutorial.GS_Escape_Tutorial_C.CheckEndConditions");
		
		AGS_Escape_Tutorial_C_CheckEndConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Escape_Tutorial.GS_Escape_Tutorial_C.ExecuteUbergraph_GS_Escape_Tutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGS_Escape_Tutorial_C::ExecuteUbergraph_GS_Escape_Tutorial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GS_Escape_Tutorial.GS_Escape_Tutorial_C.ExecuteUbergraph_GS_Escape_Tutorial");
		
		AGS_Escape_Tutorial_C_ExecuteUbergraph_GS_Escape_Tutorial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGS_Escape_Tutorial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGS_Escape_Tutorial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GS_Escape_Tutorial.GS_Escape_Tutorial_C");
		return ptr;
	}

}


