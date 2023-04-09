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
	 * 		Name   -> PredefinedFunction UBPC_NetworkGrab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_NetworkGrab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_NetworkGrab.BPC_NetworkGrab_C");
		return ptr;
	}

}


