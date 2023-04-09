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
	 * BlueprintGeneratedClass BP_MeshContainer_SimpleMonsterSkin.BP_MeshContainer_SimpleMonsterSkin_C
	 * Size -> 0x0016 (FullSize[0x02A0] - InheritedSize[0x028A])
	 */
	class ABP_MeshContainer_SimpleMonsterSkin_C : public ABP_MeshContainer_PlaytimeCharacterCosmetic_C
	{
	public:
		unsigned char                                              UnknownData_4C24[0x6];                                   // 0x028A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              HighLowMesh;                                             // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              AlternateMesh;                                           // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GetMainSkeletalMeshComponents(TArray<class USkeletalMeshComponent*>* ReturnValue);
		void GetAllSceneComponents(TArray<class USceneComponent*>* SceneComponents);
		void SetCosmeticFromStruct(const struct FCosmetic& Cosmetic, const struct FLinearColor& Color);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
