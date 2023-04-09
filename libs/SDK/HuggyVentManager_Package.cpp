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
	 * 		Name   -> Function HuggyVentManager.HuggyVentManager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AHuggyVentManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HuggyVentManager.HuggyVentManager_C.ReceiveBeginPlay");
		
		AHuggyVentManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HuggyVentManager.HuggyVentManager_C.ExecuteUbergraph_HuggyVentManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHuggyVentManager_C::ExecuteUbergraph_HuggyVentManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HuggyVentManager.HuggyVentManager_C.ExecuteUbergraph_HuggyVentManager");
		
		AHuggyVentManager_C_ExecuteUbergraph_HuggyVentManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHuggyVentManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHuggyVentManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HuggyVentManager.HuggyVentManager_C");
		return ptr;
	}

}


