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
	 * 		Name   -> PredefinedFunction ABP_PassengerCarSetdress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PassengerCarSetdress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PassengerCarSetdress.BP_PassengerCarSetdress_C");
		return ptr;
	}

}


