﻿/**
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
	 * 		Name   -> PredefinedFunction USK_MommyCorrectiveIK_CtrlRig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USK_MommyCorrectiveIK_CtrlRig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("ControlRigBlueprintGeneratedClass SK_MommyCorrectiveIK_CtrlRig.SK_MommyCorrectiveIK_CtrlRig_C");
		return ptr;
	}

}


