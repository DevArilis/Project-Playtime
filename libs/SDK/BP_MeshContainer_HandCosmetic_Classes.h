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
	 * BlueprintGeneratedClass BP_MeshContainer_HandCosmetic.BP_MeshContainer_HandCosmetic_C
	 * Size -> 0x0009 (FullSize[0x02A1] - InheritedSize[0x0298])
	 */
	class ABP_MeshContainer_HandCosmetic_C : public ABP_MeshContainer_PlayerCosmetic_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Left;                                                    // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetMainSkeletalMeshReference(const struct FCosmetic& Cosmetic);
		void UpdateSourcePose();
		void ExecuteUbergraph_BP_MeshContainer_HandCosmetic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
