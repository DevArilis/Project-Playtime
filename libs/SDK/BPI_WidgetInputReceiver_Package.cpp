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
	 * 		Name   -> Function BPI_WidgetInputReceiver.BPI_WidgetInputReceiver_C.EscapeReleased
	 * 		Flags  -> ()
	 */
	void UBPI_WidgetInputReceiver_C::EscapeReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_WidgetInputReceiver.BPI_WidgetInputReceiver_C.EscapeReleased");
		
		UBPI_WidgetInputReceiver_C_EscapeReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_WidgetInputReceiver.BPI_WidgetInputReceiver_C.EscapePressed
	 * 		Flags  -> ()
	 */
	void UBPI_WidgetInputReceiver_C::EscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_WidgetInputReceiver.BPI_WidgetInputReceiver_C.EscapePressed");
		
		UBPI_WidgetInputReceiver_C_EscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_WidgetInputReceiver_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_WidgetInputReceiver_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_WidgetInputReceiver.BPI_WidgetInputReceiver_C");
		return ptr;
	}

}


