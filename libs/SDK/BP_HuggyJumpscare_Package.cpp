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
	 * 		Name   -> PredefinedFunction ABP_HuggyJumpscare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HuggyJumpscare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HuggyJumpscare.BP_HuggyJumpscare_C");
		return ptr;
	}

}


