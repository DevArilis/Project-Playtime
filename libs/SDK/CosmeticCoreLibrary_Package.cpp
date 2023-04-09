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
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.MakeBundlePreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPresetSlot                                 ReturnValue                                                (Parm, OutParm)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCosmeticCoreLibrary_C::MakeBundlePreset(int32_t ID, class UObject* __WorldContext, struct FPresetSlot* ReturnValue, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.MakeBundlePreset");
		
		UCosmeticCoreLibrary_C_MakeBundlePreset_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.MakeSingleCosmeticPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPresetSlot                                 ReturnValue                                                (Parm, OutParm)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCosmeticCoreLibrary_C::MakeSingleCosmeticPreset(int32_t ID, class UObject* __WorldContext, struct FPresetSlot* ReturnValue, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.MakeSingleCosmeticPreset");
		
		UCosmeticCoreLibrary_C_MakeSingleCosmeticPreset_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.PlayPlayerCosmeticSelectAnimations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  CosmeticType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      RootPlayerMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      LeftHandMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      RightHandMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::PlayPlayerCosmeticSelectAnimations(ECosmeticTypeEnum CosmeticType, class USkeletalMeshComponent* RootPlayerMesh, class USkeletalMeshComponent* LeftHandMesh, class USkeletalMeshComponent* RightHandMesh, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.PlayPlayerCosmeticSelectAnimations");
		
		UCosmeticCoreLibrary_C_PlayPlayerCosmeticSelectAnimations_Params params {};
		params.CosmeticType = CosmeticType;
		params.RootPlayerMesh = RootPlayerMesh;
		params.LeftHandMesh = LeftHandMesh;
		params.RightHandMesh = RightHandMesh;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.PlayNetworkPlayerCosmeticSelectAnimations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  CosmeticType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_NetworkCharacter_C*                      NetworkPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::PlayNetworkPlayerCosmeticSelectAnimations(ECosmeticTypeEnum CosmeticType, class ABP_NetworkCharacter_C* NetworkPlayer, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.PlayNetworkPlayerCosmeticSelectAnimations");
		
		UCosmeticCoreLibrary_C_PlayNetworkPlayerCosmeticSelectAnimations_Params params {};
		params.CosmeticType = CosmeticType;
		params.NetworkPlayer = NetworkPlayer;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.PlayPlayerAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      RootPlayerMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      LeftHandMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      RightHandMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ThirdPerson                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::PlayPlayerAction(int32_t ActionID, class USkeletalMeshComponent* RootPlayerMesh, class USkeletalMeshComponent* LeftHandMesh, class USkeletalMeshComponent* RightHandMesh, bool ThirdPerson, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.PlayPlayerAction");
		
		UCosmeticCoreLibrary_C_PlayPlayerAction_Params params {};
		params.ActionID = ActionID;
		params.RootPlayerMesh = RootPlayerMesh;
		params.LeftHandMesh = LeftHandMesh;
		params.RightHandMesh = RightHandMesh;
		params.ThirdPerson = ThirdPerson;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetNetworkCharacterAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      RootPlayerMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UABP_NetworkPlayer_C*                        NetworkPlayerABP                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCosmeticCoreLibrary_C::GetNetworkCharacterAnimBP(class USkeletalMeshComponent* RootPlayerMesh, class UObject* __WorldContext, class UABP_NetworkPlayer_C** NetworkPlayerABP, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetNetworkCharacterAnimBP");
		
		UCosmeticCoreLibrary_C_GetNetworkCharacterAnimBP_Params params {};
		params.RootPlayerMesh = RootPlayerMesh;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NetworkPlayerABP != nullptr)
			*NetworkPlayerABP = params.NetworkPlayerABP;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetFirstPersonGunsAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      RootPlayerMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UABP_FirstPersonGuns_C*                      FirstPersonGunsABP                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCosmeticCoreLibrary_C::GetFirstPersonGunsAnimBP(class USkeletalMeshComponent* RootPlayerMesh, class UObject* __WorldContext, class UABP_FirstPersonGuns_C** FirstPersonGunsABP, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetFirstPersonGunsAnimBP");
		
		UCosmeticCoreLibrary_C_GetFirstPersonGunsAnimBP_Params params {};
		params.RootPlayerMesh = RootPlayerMesh;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FirstPersonGunsABP != nullptr)
			*FirstPersonGunsABP = params.FirstPersonGunsABP;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.MakePresetFromNameMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<ECosmeticTypeEnum, class FText>               Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ECharacterType                                     CharacterType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPresetSlot                                 ReturnValue                                                (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::MakePresetFromNameMap(TMap<ECosmeticTypeEnum, class FText> Map, ECharacterType CharacterType, class UObject* __WorldContext, struct FPresetSlot* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.MakePresetFromNameMap");
		
		UCosmeticCoreLibrary_C_MakePresetFromNameMap_Params params {};
		params.Map = Map;
		params.CharacterType = CharacterType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.ApplyCosmeticToPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::ApplyCosmeticToPreset(int32_t ID, ECosmeticTypeEnum Type, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.ApplyCosmeticToPreset");
		
		UCosmeticCoreLibrary_C_ApplyCosmeticToPreset_Params params {};
		params.ID = ID;
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetCosmeticColorFromArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                LinearColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::GetCosmeticColorFromArray(int32_t ID, int32_t ColorIndex, class UObject* __WorldContext, struct FLinearColor* LinearColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetCosmeticColorFromArray");
		
		UCosmeticCoreLibrary_C_GetCosmeticColorFromArray_Params params {};
		params.ID = ID;
		params.ColorIndex = ColorIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinearColor != nullptr)
			*LinearColor = params.LinearColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.UpdateGenerifiedCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Identifier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UChildActorComponent*                        ChildActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseDefaultClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::UpdateGenerifiedCosmetic(int32_t Identifier, class UChildActorComponent* ChildActor, const struct FLinearColor& Color, bool UseDefaultClass, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.UpdateGenerifiedCosmetic");
		
		UCosmeticCoreLibrary_C_UpdateGenerifiedCosmetic_Params params {};
		params.Identifier = Identifier;
		params.ChildActor = ChildActor;
		params.Color = Color;
		params.UseDefaultClass = UseDefaultClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetDefaultGenerifiedCosmeticClassByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  CosmeticType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterType                                     CharacterType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::GetDefaultGenerifiedCosmeticClassByType(ECosmeticTypeEnum CosmeticType, ECharacterType CharacterType, class UObject* __WorldContext, class UClass** ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetDefaultGenerifiedCosmeticClassByType");
		
		UCosmeticCoreLibrary_C_GetDefaultGenerifiedCosmeticClassByType_Params params {};
		params.CosmeticType = CosmeticType;
		params.CharacterType = CharacterType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.FilterActionWithType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::FilterActionWithType(ECharacterType Character, int32_t ID, class UObject* __WorldContext, int32_t* OutID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.FilterActionWithType");
		
		UCosmeticCoreLibrary_C_FilterActionWithType_Params params {};
		params.Character = Character;
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutID != nullptr)
			*OutID = params.OutID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.FilterCosmeticWithType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::FilterCosmeticWithType(ECharacterType Character, int32_t ID, ECosmeticTypeEnum Type, class UObject* __WorldContext, int32_t* OutID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.FilterCosmeticWithType");
		
		UCosmeticCoreLibrary_C_FilterCosmeticWithType_Params params {};
		params.Character = Character;
		params.ID = ID;
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutID != nullptr)
			*OutID = params.OutID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.FilterItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::FilterItem(ECharacterType Character, int32_t ID, class UObject* __WorldContext, int32_t* OutID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.FilterItem");
		
		UCosmeticCoreLibrary_C_FilterItem_Params params {};
		params.Character = Character;
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutID != nullptr)
			*OutID = params.OutID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Sanitize Preset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPresetSlot                                 Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPresetSlot                                 Out                                                        (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::SanitizePreset(ECharacterType Character, const struct FPresetSlot& Preset, class UObject* __WorldContext, struct FPresetSlot* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Sanitize Preset");
		
		UCosmeticCoreLibrary_C_SanitizePreset_Params params {};
		params.Character = Character;
		params.Preset = Preset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Rarity Background
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticRarity                                    Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::GetRarityBackground(ECosmeticRarity Item, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Rarity Background");
		
		UCosmeticCoreLibrary_C_GetRarityBackground_Params params {};
		params.Item = Item;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Default Unlocked ItemsOfType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    Items                                                      (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::GetDefaultUnlockedItemsOfType(ECosmeticTypeEnum Type, class UObject* __WorldContext, TArray<int32_t>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Default Unlocked ItemsOfType");
		
		UCosmeticCoreLibrary_C_GetDefaultUnlockedItemsOfType_Params params {};
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.IsPlayerDevFromInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamItemDetails>                   InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Dev                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCosmeticCoreLibrary_C::IsPlayerDevFromInventory(TArray<struct FSteamItemDetails>* InputPin, class UObject* __WorldContext, bool* Dev)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.IsPlayerDevFromInventory");
		
		UCosmeticCoreLibrary_C_IsPlayerDevFromInventory_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputPin != nullptr)
			*InputPin = params.InputPin;
		if (Dev != nullptr)
			*Dev = params.Dev;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetTypeNameSanitized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::GetTypeNameSanitized(ECosmeticTypeEnum Type, class UObject* __WorldContext, class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetTypeNameSanitized");
		
		UCosmeticCoreLibrary_C_GetTypeNameSanitized_Params params {};
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetTypeSelectionSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USoundBase* UCosmeticCoreLibrary_C::GetTypeSelectionSound(ECosmeticTypeEnum Type, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetTypeSelectionSound");
		
		UCosmeticCoreLibrary_C_GetTypeSelectionSound_Params params {};
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Custom Set Huggy Skin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkHuggy_C*                          Huggy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::CustomSetHuggySkin(class ABP_NetworkHuggy_C* Huggy, int32_t Skin, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Custom Set Huggy Skin");
		
		UCosmeticCoreLibrary_C_CustomSetHuggySkin_Params params {};
		params.Huggy = Huggy;
		params.Skin = Skin;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Custom Set Mommy Skin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkMommy_C*                          Mommy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::CustomSetMommySkin(class ABP_NetworkMommy_C* Mommy, int32_t Skin, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Custom Set Mommy Skin");
		
		UCosmeticCoreLibrary_C_CustomSetMommySkin_Params params {};
		params.Mommy = Mommy;
		params.Skin = Skin;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Custom Set Boxy Skin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkBoxy_C*                           Boxy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::CustomSetBoxySkin(class ABP_NetworkBoxy_C* Boxy, int32_t Skin, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Custom Set Boxy Skin");
		
		UCosmeticCoreLibrary_C_CustomSetBoxySkin_Params params {};
		params.Boxy = Boxy;
		params.Skin = Skin;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.CustomSetPlayerCosmetics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPresetSlot                                 Preset1                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::CustomSetPlayerCosmetics(class ABP_NetworkCharacter_C* Character, const struct FPresetSlot& Preset1, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.CustomSetPlayerCosmetics");
		
		UCosmeticCoreLibrary_C_CustomSetPlayerCosmetics_Params params {};
		params.Character = Character;
		params.Preset1 = Preset1;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetBoxySounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationSaveGame*                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBoxySoundSet                               Sounds                                                     (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::GetBoxySounds(class UCustomizationSaveGame* Item, class UObject* __WorldContext, struct FBoxySoundSet* Sounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetBoxySounds");
		
		UCosmeticCoreLibrary_C_GetBoxySounds_Params params {};
		params.Item = Item;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sounds != nullptr)
			*Sounds = params.Sounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetHuggySounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationSaveGame*                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHuggySoundSet                              Sounds                                                     (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::GetHuggySounds(class UCustomizationSaveGame* Item, class UObject* __WorldContext, struct FHuggySoundSet* Sounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetHuggySounds");
		
		UCosmeticCoreLibrary_C_GetHuggySounds_Params params {};
		params.Item = Item;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sounds != nullptr)
			*Sounds = params.Sounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetMommySounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomizationSaveGame*                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMommySoundSet                              Sounds                                                     (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::GetMommySounds(class UCustomizationSaveGame* Item, class UObject* __WorldContext, struct FMommySoundSet* Sounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetMommySounds");
		
		UCosmeticCoreLibrary_C_GetMommySounds_Params params {};
		params.Item = Item;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sounds != nullptr)
			*Sounds = params.Sounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.NewUpdatePlayerCosmetics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::NewUpdatePlayerCosmetics(class ABP_NetworkCharacter_C* Character, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.NewUpdatePlayerCosmetics");
		
		UCosmeticCoreLibrary_C_NewUpdatePlayerCosmetics_Params params {};
		params.Character = Character;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Rarity Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticRarity                                    Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::GetRarityName(ECosmeticRarity Rarity, class UObject* __WorldContext, class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Rarity Name");
		
		UCosmeticCoreLibrary_C_GetRarityName_Params params {};
		params.Rarity = Rarity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.PlayerSetPoseComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseAnimBP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_NetworkCharacter_C*                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AnimBP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::PlayerSetPoseComponent(bool UseAnimBP, class ABP_NetworkCharacter_C* Character, class USkeletalMeshComponent* Mesh, class UClass* AnimBP, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.PlayerSetPoseComponent");
		
		UCosmeticCoreLibrary_C_PlayerSetPoseComponent_Params params {};
		params.UseAnimBP = UseAnimBP;
		params.Character = Character;
		params.Mesh = Mesh;
		params.AnimBP = AnimBP;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetOwnedActionsOfTypeFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     For                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSteamItemDetails>                   SteamInventory                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<int32_t> UCosmeticCoreLibrary_C::GetOwnedActionsOfTypeFor(ECharacterType For, TArray<struct FSteamItemDetails>* SteamInventory, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetOwnedActionsOfTypeFor");
		
		UCosmeticCoreLibrary_C_GetOwnedActionsOfTypeFor_Params params {};
		params.For = For;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamInventory != nullptr)
			*SteamInventory = params.SteamInventory;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetOwnedCosmeticsOfTypeFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterType                                     For                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSteamItemDetails>                   SteamInventory                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<int32_t> UCosmeticCoreLibrary_C::GetOwnedCosmeticsOfTypeFor(ECosmeticTypeEnum Type, ECharacterType For, TArray<struct FSteamItemDetails>* SteamInventory, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetOwnedCosmeticsOfTypeFor");
		
		UCosmeticCoreLibrary_C_GetOwnedCosmeticsOfTypeFor_Params params {};
		params.Type = Type;
		params.For = For;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamInventory != nullptr)
			*SteamInventory = params.SteamInventory;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetCosmeticsOfTypeFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterType                                     For                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowPrivate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<int32_t> UCosmeticCoreLibrary_C::GetCosmeticsOfTypeFor(ECosmeticTypeEnum Type, ECharacterType For, bool ShowPrivate, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetCosmeticsOfTypeFor");
		
		UCosmeticCoreLibrary_C_GetCosmeticsOfTypeFor_Params params {};
		params.Type = Type;
		params.For = For;
		params.ShowPrivate = ShowPrivate;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetActionsOfTypeFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     For                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<int32_t> UCosmeticCoreLibrary_C::GetActionsOfTypeFor(ECharacterType For, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetActionsOfTypeFor");
		
		UCosmeticCoreLibrary_C_GetActionsOfTypeFor_Params params {};
		params.For = For;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.UpdatePlayerEmotes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::UpdatePlayerEmotes(class ABP_NetworkCharacter_C* Character, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.UpdatePlayerEmotes");
		
		UCosmeticCoreLibrary_C_UpdatePlayerEmotes_Params params {};
		params.Character = Character;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.ClearMaterialSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         SkeletalMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::ClearMaterialSlots(class UPrimitiveComponent* SkeletalMesh, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.ClearMaterialSlots");
		
		UCosmeticCoreLibrary_C_ClearMaterialSlots_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetCosmeticTypeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UTexture2D* UCosmeticCoreLibrary_C::GetCosmeticTypeIcon(ECosmeticTypeEnum Type, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetCosmeticTypeIcon");
		
		UCosmeticCoreLibrary_C_GetCosmeticTypeIcon_Params params {};
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetRarityColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticRarity                                    Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor UCosmeticCoreLibrary_C::GetRarityColor(ECosmeticRarity Rarity, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetRarityColor");
		
		UCosmeticCoreLibrary_C_GetRarityColor_Params params {};
		params.Rarity = Rarity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetPlayerCosmeticAnimInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCosmetic                                   CosmeticItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AnimInstance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UsesAnimBP                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCosmeticCoreLibrary_C::GetPlayerCosmeticAnimInstance(const struct FCosmetic& CosmeticItem, class UObject* __WorldContext, class UClass** AnimInstance, bool* UsesAnimBP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetPlayerCosmeticAnimInstance");
		
		UCosmeticCoreLibrary_C_GetPlayerCosmeticAnimInstance_Params params {};
		params.CosmeticItem = CosmeticItem;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimInstance != nullptr)
			*AnimInstance = params.AnimInstance;
		if (UsesAnimBP != nullptr)
			*UsesAnimBP = params.UsesAnimBP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.UpdatePlayerSkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           SkinMaterial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_NetworkCharacter_C*                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               Shirt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::UpdatePlayerSkin(class UMaterialInstance* SkinMaterial, class ABP_NetworkCharacter_C* Character, class USkeletalMesh* Shirt, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.UpdatePlayerSkin");
		
		UCosmeticCoreLibrary_C_UpdatePlayerSkin_Params params {};
		params.SkinMaterial = SkinMaterial;
		params.Character = Character;
		params.Shirt = Shirt;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetRandomItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UCosmeticCoreLibrary_C::GetRandomItem(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetRandomItem");
		
		UCosmeticCoreLibrary_C_GetRandomItem_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.UnequipCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_CosmeticType                                     ClearType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::UnequipCosmetic(class ABP_NetworkCharacter_C* Character, E_CosmeticType ClearType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.UnequipCosmetic");
		
		UCosmeticCoreLibrary_C_UnequipCosmetic_Params params {};
		params.Character = Character;
		params.ClearType = ClearType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetCosmeticTypeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::GetCosmeticTypeName(ECosmeticTypeEnum Type, class UObject* __WorldContext, class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetCosmeticTypeName");
		
		UCosmeticCoreLibrary_C_GetCosmeticTypeName_Params params {};
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get CosmeticType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECosmeticTypeEnum                                  Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCosmeticCoreLibrary_C::GetCosmeticType(int32_t Item, class UObject* __WorldContext, ECosmeticTypeEnum* Type, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get CosmeticType");
		
		UCosmeticCoreLibrary_C_GetCosmeticType_Params params {};
		params.Item = Item;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetShopItemsByEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<int32_t> UCosmeticCoreLibrary_C::GetShopItemsByEvent(const class FString& EventName, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetShopItemsByEvent");
		
		UCosmeticCoreLibrary_C_GetShopItemsByEvent_Params params {};
		params.EventName = EventName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Cosmetic Data Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FCosmetic                                   ReturnValue                                                (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::GetCosmeticDataName(const class FName& Cosmetic, class UObject* __WorldContext, bool* Valid, struct FCosmetic* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Cosmetic Data Name");
		
		UCosmeticCoreLibrary_C_GetCosmeticDataName_Params params {};
		params.Cosmetic = Cosmetic;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetAllOwnedActions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamItemDetails>                   SteamInventory                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    ItemIDs                                                    (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::GetAllOwnedActions(TArray<struct FSteamItemDetails>* SteamInventory, class UObject* __WorldContext, TArray<int32_t>* ItemIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetAllOwnedActions");
		
		UCosmeticCoreLibrary_C_GetAllOwnedActions_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamInventory != nullptr)
			*SteamInventory = params.SteamInventory;
		if (ItemIDs != nullptr)
			*ItemIDs = params.ItemIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetAllOwnedCosmeticsOfType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSteamItemDetails>                   SteamInventory                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    ItemIDs                                                    (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::GetAllOwnedCosmeticsOfType(ECosmeticTypeEnum Type, TArray<struct FSteamItemDetails>* SteamInventory, class UObject* __WorldContext, TArray<int32_t>* ItemIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetAllOwnedCosmeticsOfType");
		
		UCosmeticCoreLibrary_C_GetAllOwnedCosmeticsOfType_Params params {};
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamInventory != nullptr)
			*SteamInventory = params.SteamInventory;
		if (ItemIDs != nullptr)
			*ItemIDs = params.ItemIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetAllCosmeticsOfType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticTypeEnum                                  CosmeticType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    ItemIDs                                                    (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::GetAllCosmeticsOfType(ECosmeticTypeEnum CosmeticType, class UObject* __WorldContext, TArray<int32_t>* ItemIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetAllCosmeticsOfType");
		
		UCosmeticCoreLibrary_C_GetAllCosmeticsOfType_Params params {};
		params.CosmeticType = CosmeticType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemIDs != nullptr)
			*ItemIDs = params.ItemIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetItemThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCosmeticCoreLibrary_C::GetItemThumbnail(int32_t Item, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetItemThumbnail");
		
		UCosmeticCoreLibrary_C_GetItemThumbnail_Params params {};
		params.Item = Item;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UCosmeticCoreLibrary_C::GetItemName(int32_t Item, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetItemName");
		
		UCosmeticCoreLibrary_C_GetItemName_Params params {};
		params.Item = Item;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetBundleData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FBundle UCosmeticCoreLibrary_C::GetBundleData(int32_t ID, class UObject* __WorldContext, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetBundleData");
		
		UCosmeticCoreLibrary_C_GetBundleData_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Cosmetic Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FCosmetic UCosmeticCoreLibrary_C::GetCosmeticData(int32_t ID, class UObject* __WorldContext, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Cosmetic Data");
		
		UCosmeticCoreLibrary_C_GetCosmeticData_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Action Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FAction UCosmeticCoreLibrary_C::GetActionData(int32_t ID, class UObject* __WorldContext, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Action Data");
		
		UCosmeticCoreLibrary_C_GetActionData_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetShopItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FShopItem UCosmeticCoreLibrary_C::GetShopItemData(int32_t ID, class UObject* __WorldContext, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetShopItemData");
		
		UCosmeticCoreLibrary_C_GetShopItemData_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Item Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FItem UCosmeticCoreLibrary_C::GetItemData(int32_t Item, class UObject* __WorldContext, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.Get Item Data");
		
		UCosmeticCoreLibrary_C_GetItemData_Params params {};
		params.Item = Item;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetAllItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<int32_t> UCosmeticCoreLibrary_C::GetAllItems(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetAllItems");
		
		UCosmeticCoreLibrary_C_GetAllItems_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetAllActions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    ItemIDs                                                    (Parm, OutParm)
	 */
	void UCosmeticCoreLibrary_C::GetAllActions(class UObject* __WorldContext, TArray<int32_t>* ItemIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticCoreLibrary.CosmeticCoreLibrary_C.GetAllActions");
		
		UCosmeticCoreLibrary_C_GetAllActions_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemIDs != nullptr)
			*ItemIDs = params.ItemIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticCoreLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticCoreLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CosmeticCoreLibrary.CosmeticCoreLibrary_C");
		return ptr;
	}

}


