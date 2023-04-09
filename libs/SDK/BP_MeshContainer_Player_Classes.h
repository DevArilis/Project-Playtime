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
	 * BlueprintGeneratedClass BP_MeshContainer_Player.BP_MeshContainer_Player_C
	 * Size -> 0x0058 (FullSize[0x0278] - InheritedSize[0x0220])
	 */
	class ABP_MeshContainer_Player_C : public AActor
	{
	public:
		class UChildActorComponent*                                OutfitGrabpack;                                          // 0x0220(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                OutfitMask;                                              // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                OutfitShoes;                                             // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                OutfitHat;                                               // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                OutfitPants;                                             // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                OutfitShirt;                                             // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              PlayerSourceMesh;                                        // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       SourceMesh;                                              // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class USkeletalMeshComponent*                              LeftHandSourceComponent;                                 // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              RightHandSourceComponent;                                // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              PlayerSourceComponent;                                   // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetIndividualCosmeticVisibility(ECosmeticTypeEnum CosmeticType, bool Visible);
		void ResetCosmetics();
		void ResetIndividualCosmeticVisibility();
		void SetHandSourceComponent(class USkeletalMeshComponent* Source, bool Left);
		void SetPlayerSourceComponent(class USkeletalMeshComponent* Source);
		void SetNetworkCharacterOnContainers();
		void SetHandVisibility(bool Left, bool Visible);
		void SetVisibility(bool Visible);
		void SetOverridingVisbility(bool Visible);
		void UpdateCosmeticsFromPreset(const struct FPresetSlot& Preset);
		void GetAllMeshContainers(TArray<class ABP_MeshContainer_PlaytimeCharacterCosmetic_C*>* ReturnValue);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
