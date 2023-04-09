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
	 * BlueprintGeneratedClass BP_MeshContainer_MommySkin.BP_MeshContainer_MommySkin_C
	 * Size -> 0x000E (FullSize[0x0298] - InheritedSize[0x028A])
	 */
	class ABP_MeshContainer_MommySkin_C : public ABP_MeshContainer_PlaytimeCharacterCosmetic_C
	{
	public:
		unsigned char                                              UnknownData_XV9U[0x6];                                   // 0x028A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void PlaytimeCharacterTick(class APlaytimeCharacter* PlaytimeCharacter);
		void NetworkMommyTick(class ABP_NetworkMommy_C* NetworkMommy);
		void ExecuteUbergraph_BP_MeshContainer_MommySkin(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
