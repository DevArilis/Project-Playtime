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
	 * 		Name   -> PredefinedFunction URejoinCheck.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URejoinCheck::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Rejoin.RejoinCheck");
		return ptr;
	}

}


