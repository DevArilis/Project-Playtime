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
	 * 		Name   -> Function BP_MeshContainer_GrabpackCosmeticPotOfGold.BP_MeshContainer_GrabpackCosmeticPotOfGold_C.Network Character Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      NetworkCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_GrabpackCosmeticPotOfGold_C::NetworkCharacterTick(class ABP_NetworkCharacter_C* NetworkCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GrabpackCosmeticPotOfGold.BP_MeshContainer_GrabpackCosmeticPotOfGold_C.Network Character Tick");
		
		ABP_MeshContainer_GrabpackCosmeticPotOfGold_C_NetworkCharacterTick_Params params {};
		params.NetworkCharacter = NetworkCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_GrabpackCosmeticPotOfGold.BP_MeshContainer_GrabpackCosmeticPotOfGold_C.ExecuteUbergraph_BP_MeshContainer_GrabpackCosmeticPotOfGold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_GrabpackCosmeticPotOfGold_C::ExecuteUbergraph_BP_MeshContainer_GrabpackCosmeticPotOfGold(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_GrabpackCosmeticPotOfGold.BP_MeshContainer_GrabpackCosmeticPotOfGold_C.ExecuteUbergraph_BP_MeshContainer_GrabpackCosmeticPotOfGold");
		
		ABP_MeshContainer_GrabpackCosmeticPotOfGold_C_ExecuteUbergraph_BP_MeshContainer_GrabpackCosmeticPotOfGold_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeshContainer_GrabpackCosmeticPotOfGold_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeshContainer_GrabpackCosmeticPotOfGold_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeshContainer_GrabpackCosmeticPotOfGold.BP_MeshContainer_GrabpackCosmeticPotOfGold_C");
		return ptr;
	}

}


