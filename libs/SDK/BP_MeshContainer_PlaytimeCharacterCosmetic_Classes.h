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
	 * BlueprintGeneratedClass BP_MeshContainer_PlaytimeCharacterCosmetic.BP_MeshContainer_PlaytimeCharacterCosmetic_C
	 * Size -> 0x0019 (FullSize[0x028A] - InheritedSize[0x0271])
	 */
	class ABP_MeshContainer_PlaytimeCharacterCosmetic_C : public ABP_MeshContainer_GenericCosmetic_C
	{
	public:
		unsigned char                                              UnknownData_104H[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APlaytimeCharacter*                                  PlaytimeCharacter;                                       // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PresentOnPlaytimeCharacter;                              // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SetCharacterOnConstruct;                                 // 0x0289(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetPlaytimeCharacter(class APlaytimeCharacter** PlaytimeCharacter, bool* Valid);
		void SetPlaytimeCharacter(class APlaytimeCharacter* PlaytimeCharacter);
		void UserConstructionScript();
		void ReceiveTick(float DeltaSeconds);
		void PlaytimeCharacterTick(class APlaytimeCharacter* PlaytimeCharacter);
		void ExecuteUbergraph_BP_MeshContainer_PlaytimeCharacterCosmetic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
