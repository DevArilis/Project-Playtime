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
	 * BlueprintGeneratedClass BP_CustomizationMenuCharacter.BP_CustomizationMenuCharacter_C
	 * Size -> 0x00E0 (FullSize[0x0300] - InheritedSize[0x0220])
	 */
	class ABP_CustomizationMenuCharacter_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              RightHand;                                               // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              LeftHand;                                                // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                BP_MeshContainer_Player;                                 // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABP_MeshContainer_Player_C*                          PlayerMeshContainer;                                     // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<ECosmeticTypeEnum, class UAnimMontage*>               SelectMontages;                                          // 0x0258(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FPresetSlot                                         CurrentPreset;                                           // 0x02A8(0x0058) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetVisibility(bool Visible);
		void SetType(ECosmeticTypeEnum Type);
		void GetAnimationBlueprint(class UABP_CustomizationMenuPlayer_C** ReturnValue);
		void UpdateCosmeticsFromSave();
		void UpdateCosmeticsFromPreset(const struct FPresetSlot& Preset);
		void PlaySelectAnimation(ECosmeticTypeEnum CosmeticType);
		void SetSourceComponent();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_CustomizationMenuCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
