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
	 * 		Name   -> Function BP_MP_Test_Monster_Door.BP_MP_Test_Monster_Door_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_MP_Test_Monster_Door_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Test_Monster_Door.BP_MP_Test_Monster_Door_C.Timeline_0__FinishedFunc");
		
		ABP_MP_Test_Monster_Door_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP_Test_Monster_Door.BP_MP_Test_Monster_Door_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_MP_Test_Monster_Door_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Test_Monster_Door.BP_MP_Test_Monster_Door_C.Timeline_0__UpdateFunc");
		
		ABP_MP_Test_Monster_Door_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP_Test_Monster_Door.BP_MP_Test_Monster_Door_C.OpenMonsterDoor
	 * 		Flags  -> ()
	 */
	void ABP_MP_Test_Monster_Door_C::OpenMonsterDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Test_Monster_Door.BP_MP_Test_Monster_Door_C.OpenMonsterDoor");
		
		ABP_MP_Test_Monster_Door_C_OpenMonsterDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP_Test_Monster_Door.BP_MP_Test_Monster_Door_C.ExecuteUbergraph_BP_MP_Test_Monster_Door
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MP_Test_Monster_Door_C::ExecuteUbergraph_BP_MP_Test_Monster_Door(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MP_Test_Monster_Door.BP_MP_Test_Monster_Door_C.ExecuteUbergraph_BP_MP_Test_Monster_Door");
		
		ABP_MP_Test_Monster_Door_C_ExecuteUbergraph_BP_MP_Test_Monster_Door_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MP_Test_Monster_Door_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MP_Test_Monster_Door_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MP_Test_Monster_Door.BP_MP_Test_Monster_Door_C");
		return ptr;
	}

}


