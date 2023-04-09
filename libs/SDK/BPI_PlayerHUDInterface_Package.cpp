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
	 * 		Name   -> Function BPI_PlayerHUDInterface.BPI_PlayerHUDInterface_C.SetPlayerName
	 * 		Flags  -> ()
	 */
	void UBPI_PlayerHUDInterface_C::SetPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerHUDInterface.BPI_PlayerHUDInterface_C.SetPlayerName");
		
		UBPI_PlayerHUDInterface_C_SetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerHUDInterface.BPI_PlayerHUDInterface_C.SetPerkIcon
	 * 		Flags  -> ()
	 */
	void UBPI_PlayerHUDInterface_C::SetPerkIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerHUDInterface.BPI_PlayerHUDInterface_C.SetPerkIcon");
		
		UBPI_PlayerHUDInterface_C_SetPerkIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_PlayerHUDInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_PlayerHUDInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerHUDInterface.BPI_PlayerHUDInterface_C");
		return ptr;
	}

}


