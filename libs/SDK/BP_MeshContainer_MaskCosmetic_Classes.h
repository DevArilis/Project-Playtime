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
	 * BlueprintGeneratedClass BP_MeshContainer_MaskCosmetic.BP_MeshContainer_MaskCosmetic_C
	 * Size -> 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
	 */
	class ABP_MeshContainer_MaskCosmetic_C : public ABP_MeshContainer_PlayerCosmetic_C
	{
	public:
		void SetVisibilityBasedOnHat(int32_t Identifier);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
