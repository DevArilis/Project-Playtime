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
	 * BlueprintGeneratedClass BP_MeshContainer_HuggySkin.BP_MeshContainer_HuggySkin_C
	 * Size -> 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
	 */
	class ABP_MeshContainer_HuggySkin_C : public ABP_MeshContainer_SimpleMonsterSkin_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void PlaytimeCharacterTick(class APlaytimeCharacter* PlaytimeCharacter);
		void NetworkHuggyTick(class ABP_NetworkHuggy_C* NetworkHuggy);
		void ExecuteUbergraph_BP_MeshContainer_HuggySkin(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
