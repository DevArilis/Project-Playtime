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
	 * 		Name   -> Function BP_MeshContainer_PlayerCosmetic.BP_MeshContainer_PlayerCosmetic_C.Playtime Character Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlaytimeCharacter*                          PlaytimeCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_PlayerCosmetic_C::PlaytimeCharacterTick(class APlaytimeCharacter* PlaytimeCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_PlayerCosmetic.BP_MeshContainer_PlayerCosmetic_C.Playtime Character Tick");
		
		ABP_MeshContainer_PlayerCosmetic_C_PlaytimeCharacterTick_Params params {};
		params.PlaytimeCharacter = PlaytimeCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_PlayerCosmetic.BP_MeshContainer_PlayerCosmetic_C.Network Character Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      NetworkCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_PlayerCosmetic_C::NetworkCharacterTick(class ABP_NetworkCharacter_C* NetworkCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_PlayerCosmetic.BP_MeshContainer_PlayerCosmetic_C.Network Character Tick");
		
		ABP_MeshContainer_PlayerCosmetic_C_NetworkCharacterTick_Params params {};
		params.NetworkCharacter = NetworkCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_PlayerCosmetic.BP_MeshContainer_PlayerCosmetic_C.ExecuteUbergraph_BP_MeshContainer_PlayerCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_PlayerCosmetic_C::ExecuteUbergraph_BP_MeshContainer_PlayerCosmetic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_PlayerCosmetic.BP_MeshContainer_PlayerCosmetic_C.ExecuteUbergraph_BP_MeshContainer_PlayerCosmetic");
		
		ABP_MeshContainer_PlayerCosmetic_C_ExecuteUbergraph_BP_MeshContainer_PlayerCosmetic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeshContainer_PlayerCosmetic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeshContainer_PlayerCosmetic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeshContainer_PlayerCosmetic.BP_MeshContainer_PlayerCosmetic_C");
		return ptr;
	}

}


