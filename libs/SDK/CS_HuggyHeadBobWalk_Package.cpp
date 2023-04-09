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
	 * 		Name   -> PredefinedFunction UCS_HuggyHeadBobWalk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_HuggyHeadBobWalk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CS_HuggyHeadBobWalk.CS_HuggyHeadBobWalk_C");
		return ptr;
	}

}


