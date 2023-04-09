#pragma once

/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass CosmeticCoreLibrary.CosmeticCoreLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCosmeticCoreLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void MakeBundlePreset(int32_t ID, class UObject* __WorldContext, struct FPresetSlot* ReturnValue, bool* Valid);
		void MakeSingleCosmeticPreset(int32_t ID, class UObject* __WorldContext, struct FPresetSlot* ReturnValue, bool* Valid);
		void PlayPlayerCosmeticSelectAnimations(ECosmeticTypeEnum CosmeticType, class USkeletalMeshComponent* RootPlayerMesh, class USkeletalMeshComponent* LeftHandMesh, class USkeletalMeshComponent* RightHandMesh, class UObject* __WorldContext);
		void PlayNetworkPlayerCosmeticSelectAnimations(ECosmeticTypeEnum CosmeticType, class ABP_NetworkCharacter_C* NetworkPlayer, class UObject* __WorldContext);
		void PlayPlayerAction(int32_t ActionID, class USkeletalMeshComponent* RootPlayerMesh, class USkeletalMeshComponent* LeftHandMesh, class USkeletalMeshComponent* RightHandMesh, bool ThirdPerson, class UObject* __WorldContext);
		void GetNetworkCharacterAnimBP(class USkeletalMeshComponent* RootPlayerMesh, class UObject* __WorldContext, class UABP_NetworkPlayer_C** NetworkPlayerABP, bool* Valid);
		void GetFirstPersonGunsAnimBP(class USkeletalMeshComponent* RootPlayerMesh, class UObject* __WorldContext, class UABP_FirstPersonGuns_C** FirstPersonGunsABP, bool* Valid);
		void MakePresetFromNameMap(TMap<ECosmeticTypeEnum, class FText> Map, ECharacterType CharacterType, class UObject* __WorldContext, struct FPresetSlot* ReturnValue);
		void ApplyCosmeticToPreset(int32_t ID, ECosmeticTypeEnum Type, class UObject* __WorldContext);
		void GetCosmeticColorFromArray(int32_t ID, int32_t ColorIndex, class UObject* __WorldContext, struct FLinearColor* LinearColor);
		void UpdateGenerifiedCosmetic(int32_t Identifier, class UChildActorComponent* ChildActor, const struct FLinearColor& Color, bool UseDefaultClass, class UObject* __WorldContext);
		void GetDefaultGenerifiedCosmeticClassByType(ECosmeticTypeEnum CosmeticType, ECharacterType CharacterType, class UObject* __WorldContext, class UClass** ReturnValue);
		void FilterActionWithType(ECharacterType Character, int32_t ID, class UObject* __WorldContext, int32_t* OutID);
		void FilterCosmeticWithType(ECharacterType Character, int32_t ID, ECosmeticTypeEnum Type, class UObject* __WorldContext, int32_t* OutID);
		void FilterItem(ECharacterType Character, int32_t ID, class UObject* __WorldContext, int32_t* OutID);
		void SanitizePreset(ECharacterType Character, const struct FPresetSlot& Preset, class UObject* __WorldContext, struct FPresetSlot* Out);
		void GetRarityBackground(ECosmeticRarity Item, class UObject* __WorldContext);
		void GetDefaultUnlockedItemsOfType(ECosmeticTypeEnum Type, class UObject* __WorldContext, TArray<int32_t>* Items);
		void IsPlayerDevFromInventory(TArray<struct FSteamItemDetails>* InputPin, class UObject* __WorldContext, bool* Dev);
		void GetTypeNameSanitized(ECosmeticTypeEnum Type, class UObject* __WorldContext, class FText* Name);
		class USoundBase* GetTypeSelectionSound(ECosmeticTypeEnum Type, class UObject* __WorldContext);
		void CustomSetHuggySkin(class ABP_NetworkHuggy_C* Huggy, int32_t Skin, class UObject* __WorldContext);
		void CustomSetMommySkin(class ABP_NetworkMommy_C* Mommy, int32_t Skin, class UObject* __WorldContext);
		void CustomSetBoxySkin(class ABP_NetworkBoxy_C* Boxy, int32_t Skin, class UObject* __WorldContext);
		void CustomSetPlayerCosmetics(class ABP_NetworkCharacter_C* Character, const struct FPresetSlot& Preset1, class UObject* __WorldContext);
		void GetBoxySounds(class UCustomizationSaveGame* Item, class UObject* __WorldContext, struct FBoxySoundSet* Sounds);
		void GetHuggySounds(class UCustomizationSaveGame* Item, class UObject* __WorldContext, struct FHuggySoundSet* Sounds);
		void GetMommySounds(class UCustomizationSaveGame* Item, class UObject* __WorldContext, struct FMommySoundSet* Sounds);
		void NewUpdatePlayerCosmetics(class ABP_NetworkCharacter_C* Character, class UObject* __WorldContext);
		void GetRarityName(ECosmeticRarity Rarity, class UObject* __WorldContext, class FText* Name);
		void PlayerSetPoseComponent(bool UseAnimBP, class ABP_NetworkCharacter_C* Character, class USkeletalMeshComponent* Mesh, class UClass* AnimBP, class UObject* __WorldContext);
		TArray<int32_t> GetOwnedActionsOfTypeFor(ECharacterType For, TArray<struct FSteamItemDetails>* SteamInventory, class UObject* __WorldContext);
		TArray<int32_t> GetOwnedCosmeticsOfTypeFor(ECosmeticTypeEnum Type, ECharacterType For, TArray<struct FSteamItemDetails>* SteamInventory, class UObject* __WorldContext);
		TArray<int32_t> GetCosmeticsOfTypeFor(ECosmeticTypeEnum Type, ECharacterType For, bool ShowPrivate, class UObject* __WorldContext);
		TArray<int32_t> GetActionsOfTypeFor(ECharacterType For, class UObject* __WorldContext);
		void UpdatePlayerEmotes(class ABP_NetworkCharacter_C* Character, class UObject* __WorldContext);
		void ClearMaterialSlots(class UPrimitiveComponent* SkeletalMesh, class UObject* __WorldContext);
		class UTexture2D* GetCosmeticTypeIcon(ECosmeticTypeEnum Type, class UObject* __WorldContext);
		struct FLinearColor GetRarityColor(ECosmeticRarity Rarity, class UObject* __WorldContext);
		void GetPlayerCosmeticAnimInstance(const struct FCosmetic& CosmeticItem, class UObject* __WorldContext, class UClass** AnimInstance, bool* UsesAnimBP);
		void UpdatePlayerSkin(class UMaterialInstance* SkinMaterial, class ABP_NetworkCharacter_C* Character, class USkeletalMesh* Shirt, class UObject* __WorldContext);
		int32_t GetRandomItem(class UObject* __WorldContext);
		void UnequipCosmetic(class ABP_NetworkCharacter_C* Character, E_CosmeticType ClearType, class UObject* __WorldContext);
		void GetCosmeticTypeName(ECosmeticTypeEnum Type, class UObject* __WorldContext, class FText* Name);
		void GetCosmeticType(int32_t Item, class UObject* __WorldContext, ECosmeticTypeEnum* Type, bool* Valid);
		TArray<int32_t> GetShopItemsByEvent(const class FString& EventName, class UObject* __WorldContext);
		void GetCosmeticDataName(const class FName& Cosmetic, class UObject* __WorldContext, bool* Valid, struct FCosmetic* ReturnValue);
		void GetAllOwnedActions(TArray<struct FSteamItemDetails>* SteamInventory, class UObject* __WorldContext, TArray<int32_t>* ItemIDs);
		void GetAllOwnedCosmeticsOfType(ECosmeticTypeEnum Type, TArray<struct FSteamItemDetails>* SteamInventory, class UObject* __WorldContext, TArray<int32_t>* ItemIDs);
		void GetAllCosmeticsOfType(ECosmeticTypeEnum CosmeticType, class UObject* __WorldContext, TArray<int32_t>* ItemIDs);
		void GetItemThumbnail(int32_t Item, class UObject* __WorldContext);
		class FText GetItemName(int32_t Item, class UObject* __WorldContext);
		struct FBundle GetBundleData(int32_t ID, class UObject* __WorldContext, bool* Valid);
		struct FCosmetic GetCosmeticData(int32_t ID, class UObject* __WorldContext, bool* Valid);
		struct FAction GetActionData(int32_t ID, class UObject* __WorldContext, bool* Valid);
		struct FShopItem GetShopItemData(int32_t ID, class UObject* __WorldContext, bool* Valid);
		struct FItem GetItemData(int32_t Item, class UObject* __WorldContext, bool* Valid);
		TArray<int32_t> GetAllItems(class UObject* __WorldContext);
		void GetAllActions(class UObject* __WorldContext, TArray<int32_t>* ItemIDs);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
