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
	 * 		Name   -> Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.ResetRotation
	 * 		Flags  -> ()
	 */
	void ABP_MonsterAndPlayerMenuCharacter_C::ResetRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.ResetRotation");
		
		ABP_MonsterAndPlayerMenuCharacter_C_ResetRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.PlayAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterType                                     CharacterType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterAndPlayerMenuCharacter_C::PlayAction(int32_t ID, ECharacterType CharacterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.PlayAction");
		
		ABP_MonsterAndPlayerMenuCharacter_C_PlayAction_Params params {};
		params.ID = ID;
		params.CharacterType = CharacterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.ResetCharacterAnimations
	 * 		Flags  -> ()
	 */
	void ABP_MonsterAndPlayerMenuCharacter_C::ResetCharacterAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.ResetCharacterAnimations");
		
		ABP_MonsterAndPlayerMenuCharacter_C_ResetCharacterAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.SetPlayerCosmeticCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  CosmeticType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterAndPlayerMenuCharacter_C::SetPlayerCosmeticCategory(ECosmeticTypeEnum CosmeticType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.SetPlayerCosmeticCategory");
		
		ABP_MonsterAndPlayerMenuCharacter_C_SetPlayerCosmeticCategory_Params params {};
		params.CosmeticType = CosmeticType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.PlayUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  CosmeticType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterAndPlayerMenuCharacter_C::PlayUpdateAnimation(ECosmeticTypeEnum CosmeticType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.PlayUpdateAnimation");
		
		ABP_MonsterAndPlayerMenuCharacter_C_PlayUpdateAnimation_Params params {};
		params.CosmeticType = CosmeticType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.SetVisibleCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     CharacterType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterAndPlayerMenuCharacter_C::SetVisibleCharacter(ECharacterType CharacterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.SetVisibleCharacter");
		
		ABP_MonsterAndPlayerMenuCharacter_C_SetVisibleCharacter_Params params {};
		params.CharacterType = CharacterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.SetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     CharacterType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPresetSlot                                 Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_MonsterAndPlayerMenuCharacter_C::SetCharacter(ECharacterType CharacterType, const struct FPresetSlot& Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.SetCharacter");
		
		ABP_MonsterAndPlayerMenuCharacter_C_SetCharacter_Params params {};
		params.CharacterType = CharacterType;
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MonsterAndPlayerMenuCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.ReceiveBeginPlay");
		
		ABP_MonsterAndPlayerMenuCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.ExecuteUbergraph_BP_MonsterAndPlayerMenuCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterAndPlayerMenuCharacter_C::ExecuteUbergraph_BP_MonsterAndPlayerMenuCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C.ExecuteUbergraph_BP_MonsterAndPlayerMenuCharacter");
		
		ABP_MonsterAndPlayerMenuCharacter_C_ExecuteUbergraph_BP_MonsterAndPlayerMenuCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MonsterAndPlayerMenuCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MonsterAndPlayerMenuCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MonsterAndPlayerMenuCharacter.BP_MonsterAndPlayerMenuCharacter_C");
		return ptr;
	}

}


