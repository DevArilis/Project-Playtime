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
	 * 		Name   -> Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CustomizationMenuCharacter_C::SetVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.SetVisibility");
		
		ABP_CustomizationMenuCharacter_C_SetVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.SetType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationMenuCharacter_C::SetType(ECosmeticTypeEnum Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.SetType");
		
		ABP_CustomizationMenuCharacter_C_SetType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.GetAnimationBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UABP_CustomizationMenuPlayer_C*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationMenuCharacter_C::GetAnimationBlueprint(class UABP_CustomizationMenuPlayer_C** ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.GetAnimationBlueprint");
		
		ABP_CustomizationMenuCharacter_C_GetAnimationBlueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.UpdateCosmeticsFromSave
	 * 		Flags  -> ()
	 */
	void ABP_CustomizationMenuCharacter_C::UpdateCosmeticsFromSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.UpdateCosmeticsFromSave");
		
		ABP_CustomizationMenuCharacter_C_UpdateCosmeticsFromSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.UpdateCosmeticsFromPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_CustomizationMenuCharacter_C::UpdateCosmeticsFromPreset(const struct FPresetSlot& Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.UpdateCosmeticsFromPreset");
		
		ABP_CustomizationMenuCharacter_C_UpdateCosmeticsFromPreset_Params params {};
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.PlaySelectAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  CosmeticType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationMenuCharacter_C::PlaySelectAnimation(ECosmeticTypeEnum CosmeticType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.PlaySelectAnimation");
		
		ABP_CustomizationMenuCharacter_C_PlaySelectAnimation_Params params {};
		params.CosmeticType = CosmeticType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.SetSourceComponent
	 * 		Flags  -> ()
	 */
	void ABP_CustomizationMenuCharacter_C::SetSourceComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.SetSourceComponent");
		
		ABP_CustomizationMenuCharacter_C_SetSourceComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_CustomizationMenuCharacter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.UserConstructionScript");
		
		ABP_CustomizationMenuCharacter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CustomizationMenuCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.ReceiveBeginPlay");
		
		ABP_CustomizationMenuCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.ExecuteUbergraph_BP_CustomizationMenuCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationMenuCharacter_C::ExecuteUbergraph_BP_CustomizationMenuCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C.ExecuteUbergraph_BP_CustomizationMenuCharacter");
		
		ABP_CustomizationMenuCharacter_C_ExecuteUbergraph_BP_CustomizationMenuCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CustomizationMenuCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CustomizationMenuCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C");
		return ptr;
	}

}


