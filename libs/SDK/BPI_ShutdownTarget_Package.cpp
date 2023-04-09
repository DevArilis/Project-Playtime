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
	 * 		Name   -> Function BPI_ShutdownTarget.BPI_ShutdownTarget_C.ReActivate
	 * 		Flags  -> ()
	 */
	void UBPI_ShutdownTarget_C::ReActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ShutdownTarget.BPI_ShutdownTarget_C.ReActivate");
		
		UBPI_ShutdownTarget_C_ReActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ShutdownTarget.BPI_ShutdownTarget_C.Sabotage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FixDuration                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ShutdownTarget_C::Sabotage(float FixDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ShutdownTarget.BPI_ShutdownTarget_C.Sabotage");
		
		UBPI_ShutdownTarget_C_Sabotage_Params params {};
		params.FixDuration = FixDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_ShutdownTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_ShutdownTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ShutdownTarget.BPI_ShutdownTarget_C");
		return ptr;
	}

}


