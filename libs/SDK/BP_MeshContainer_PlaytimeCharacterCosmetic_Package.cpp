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
	 * 		Name   -> Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.GetPlaytimeCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlaytimeCharacter*                          PlaytimeCharacter                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_PlaytimeCharacterCosmetic_C::GetPlaytimeCharacter(class APlaytimeCharacter** PlaytimeCharacter, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.GetPlaytimeCharacter");
		
		ABP_MeshContainer_PlaytimeCharacterCosmetic_C_GetPlaytimeCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlaytimeCharacter != nullptr)
			*PlaytimeCharacter = params.PlaytimeCharacter;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.SetPlaytimeCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlaytimeCharacter*                          PlaytimeCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_PlaytimeCharacterCosmetic_C::SetPlaytimeCharacter(class APlaytimeCharacter* PlaytimeCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.SetPlaytimeCharacter");
		
		ABP_MeshContainer_PlaytimeCharacterCosmetic_C_SetPlaytimeCharacter_Params params {};
		params.PlaytimeCharacter = PlaytimeCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_MeshContainer_PlaytimeCharacterCosmetic_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.UserConstructionScript");
		
		ABP_MeshContainer_PlaytimeCharacterCosmetic_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_PlaytimeCharacterCosmetic_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.ReceiveTick");
		
		ABP_MeshContainer_PlaytimeCharacterCosmetic_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.Playtime Character Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlaytimeCharacter*                          PlaytimeCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_PlaytimeCharacterCosmetic_C::PlaytimeCharacterTick(class APlaytimeCharacter* PlaytimeCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.Playtime Character Tick");
		
		ABP_MeshContainer_PlaytimeCharacterCosmetic_C_PlaytimeCharacterTick_Params params {};
		params.PlaytimeCharacter = PlaytimeCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.ExecuteUbergraph_BP_MeshContainer_PlaytimeCharacterCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_PlaytimeCharacterCosmetic_C::ExecuteUbergraph_BP_MeshContainer_PlaytimeCharacterCosmetic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C.ExecuteUbergraph_BP_MeshContainer_PlaytimeCharacterCosmetic");
		
		ABP_MeshContainer_PlaytimeCharacterCosmetic_C_ExecuteUbergraph_BP_MeshContainer_PlaytimeCharacterCosmetic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeshContainer_PlaytimeCharacterCosmetic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeshContainer_PlaytimeCharacterCosmetic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C");
		return ptr;
	}

}


