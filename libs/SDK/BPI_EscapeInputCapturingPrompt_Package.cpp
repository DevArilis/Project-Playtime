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
	 * 		Name   -> Function BPI_EscapeInputCapturingPrompt.BPI_EscapeInputCapturingPrompt_C.OnEscapeInputCapture
	 * 		Flags  -> ()
	 */
	void UBPI_EscapeInputCapturingPrompt_C::OnEscapeInputCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_EscapeInputCapturingPrompt.BPI_EscapeInputCapturingPrompt_C.OnEscapeInputCapture");
		
		UBPI_EscapeInputCapturingPrompt_C_OnEscapeInputCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_EscapeInputCapturingPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_EscapeInputCapturingPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_EscapeInputCapturingPrompt.BPI_EscapeInputCapturingPrompt_C");
		return ptr;
	}

}


