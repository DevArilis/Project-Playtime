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
	 * 		Name   -> PredefinedFunction UCS_HuggyAttackRight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_HuggyAttackRight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CS_HuggyAttackRight.CS_HuggyAttackRight_C");
		return ptr;
	}

}


