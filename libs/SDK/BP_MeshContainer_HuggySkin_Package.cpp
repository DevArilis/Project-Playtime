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
	 * 		Name   -> Function BP_MeshContainer_HuggySkin.BP_MeshContainer_HuggySkin_C.Playtime Character Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlaytimeCharacter*                          PlaytimeCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_HuggySkin_C::PlaytimeCharacterTick(class APlaytimeCharacter* PlaytimeCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_HuggySkin.BP_MeshContainer_HuggySkin_C.Playtime Character Tick");
		
		ABP_MeshContainer_HuggySkin_C_PlaytimeCharacterTick_Params params {};
		params.PlaytimeCharacter = PlaytimeCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_HuggySkin.BP_MeshContainer_HuggySkin_C.Network Huggy Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkHuggy_C*                          NetworkHuggy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_HuggySkin_C::NetworkHuggyTick(class ABP_NetworkHuggy_C* NetworkHuggy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_HuggySkin.BP_MeshContainer_HuggySkin_C.Network Huggy Tick");
		
		ABP_MeshContainer_HuggySkin_C_NetworkHuggyTick_Params params {};
		params.NetworkHuggy = NetworkHuggy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_HuggySkin.BP_MeshContainer_HuggySkin_C.ExecuteUbergraph_BP_MeshContainer_HuggySkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_HuggySkin_C::ExecuteUbergraph_BP_MeshContainer_HuggySkin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_HuggySkin.BP_MeshContainer_HuggySkin_C.ExecuteUbergraph_BP_MeshContainer_HuggySkin");
		
		ABP_MeshContainer_HuggySkin_C_ExecuteUbergraph_BP_MeshContainer_HuggySkin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeshContainer_HuggySkin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeshContainer_HuggySkin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeshContainer_HuggySkin.BP_MeshContainer_HuggySkin_C");
		return ptr;
	}

}


