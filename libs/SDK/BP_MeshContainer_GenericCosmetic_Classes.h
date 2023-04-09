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
	 * BlueprintGeneratedClass BP_MeshContainer_GenericCosmetic.BP_MeshContainer_GenericCosmetic_C
	 * Size -> 0x0051 (FullSize[0x0271] - InheritedSize[0x0220])
	 */
	class ABP_MeshContainer_GenericCosmetic_C : public ACosmeticMeshContainer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              CosmeticMesh;                                            // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SourceMesh;                                              // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SourcePoseComponent;                                     // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsesAnimationBlueprint;                                  // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XJAU[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       PreviewCosmeticMesh;                                     // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              PreviewAnimBlueprint;                                    // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       SourceMesh2;                                             // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterType                                             CharacterType;                                           // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECosmeticTypeEnum                                          CosmeticType;                                            // 0x0269(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AutoUpdateSourcePose;                                    // 0x026A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MSCR[0x1];                                   // 0x026B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DefaultCosmetic;                                         // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SourceComponentIsAnimBP;                                 // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ApplyMaterialOverrides(class USkeletalMeshComponent* Mesh, const struct FCosmetic& Cosmetic);
		void SetAnimationBlueprintOrPoseComponent(class UClass* AnimationBlueprint, class USkeletalMeshComponent* SkeletalMeshComponent);
		void ApplyColorableCosmeticMaterialParams(class USkeletalMeshComponent* Mesh, const struct FCosmetic& Cosmetic, const struct FLinearColor& Color);
		void SetSkeletalMeshFromReference(class USkeletalMeshComponent* SkeletalMeshComponent);
		void SetOverridingVisibility(bool Visible);
		void SetVisibility(bool Visible);
		void SetMasterPoseComponent(bool Attached, class USkeletalMeshComponent* SkeletalMeshComponent);
		void SetCosmeticFromStruct(const struct FCosmetic& Cosmetic, const struct FLinearColor& Color);
		void SetCosmeticFromID(int32_t Index, const struct FLinearColor& Color);
		void SetDefaultCosmetic();
		void GetCosmeticVerified(int32_t Index, ECosmeticTypeEnum CosmeticType, ECharacterType CharacterType, struct FCosmetic* Cosmetic, bool* Valid);
		void GetMainSkeletalMeshComponent(class USkeletalMeshComponent** ReturnValue);
		void GetMainSkeletalMeshReference(const struct FCosmetic& Cosmetic);
		void GetAnimationBlueprintClass(const struct FCosmetic& Cosmetic, class UClass** ReturnValue);
		void GetAllSceneComponents(TArray<class USceneComponent*>* SceneComponents);
		void SetSourceMesh();
		void UserConstructionScript();
		void UpdateSourcePose();
		void ManuallySetSourcePose(class USkeletalMeshComponent* SkeletalMeshComponent);
		void ExecuteUbergraph_BP_MeshContainer_GenericCosmetic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
