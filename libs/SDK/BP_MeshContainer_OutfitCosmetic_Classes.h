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
	 * BlueprintGeneratedClass BP_MeshContainer_OutfitCosmetic.BP_MeshContainer_OutfitCosmetic_C
	 * Size -> 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
	 */
	class ABP_MeshContainer_OutfitCosmetic_C : public ABP_MeshContainer_PlayerCosmetic_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SkinMesh;                                                // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		ECosmeticOutfitSkinType                                    OutfitSkinType;                                          // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C5ZD[0x3];                                   // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DefaultSkin;                                             // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetVisibility(bool Visible);
		void SetOverridingVisibility(bool Visible);
		void SetDefaultCosmetic();
		void SetSkinFromID(int32_t Identifier, const struct FLinearColor& Color);
		void GetDefaultSkinType(ECosmeticTypeEnum CosmeticType, ECosmeticOutfitSkinType* ReturnValue);
		void VerifySkinType(ECosmeticOutfitSkinType SkinType, ECosmeticTypeEnum CosmeticType, bool* Valid);
		void SetCosmeticFromStruct(const struct FCosmetic& Cosmetic, const struct FLinearColor& Color);
		void UserConstructionScript();
		void OnLoaded_4F31B9074DE4B27CB283518368ABF648(class UObject* Loaded);
		void LoadSkin();
		void ExecuteUbergraph_BP_MeshContainer_OutfitCosmetic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
