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
	 * 		Name   -> Function BP_MeshContainer_MommySkin.BP_MeshContainer_MommySkin_C.Playtime Character Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlaytimeCharacter*                          PlaytimeCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_MommySkin_C::PlaytimeCharacterTick(class APlaytimeCharacter* PlaytimeCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_MommySkin.BP_MeshContainer_MommySkin_C.Playtime Character Tick");
		
		ABP_MeshContainer_MommySkin_C_PlaytimeCharacterTick_Params params {};
		params.PlaytimeCharacter = PlaytimeCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_MommySkin.BP_MeshContainer_MommySkin_C.Network Mommy Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkMommy_C*                          NetworkMommy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_MommySkin_C::NetworkMommyTick(class ABP_NetworkMommy_C* NetworkMommy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_MommySkin.BP_MeshContainer_MommySkin_C.Network Mommy Tick");
		
		ABP_MeshContainer_MommySkin_C_NetworkMommyTick_Params params {};
		params.NetworkMommy = NetworkMommy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_MommySkin.BP_MeshContainer_MommySkin_C.ExecuteUbergraph_BP_MeshContainer_MommySkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_MommySkin_C::ExecuteUbergraph_BP_MeshContainer_MommySkin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_MommySkin.BP_MeshContainer_MommySkin_C.ExecuteUbergraph_BP_MeshContainer_MommySkin");
		
		ABP_MeshContainer_MommySkin_C_ExecuteUbergraph_BP_MeshContainer_MommySkin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeshContainer_MommySkin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeshContainer_MommySkin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeshContainer_MommySkin.BP_MeshContainer_MommySkin_C");
		return ptr;
	}

}


