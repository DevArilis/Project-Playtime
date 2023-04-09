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
	 * BlueprintGeneratedClass BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C
	 * Size -> 0x001E (FullSize[0x02A8] - InheritedSize[0x028A])
	 */
	class ABP_MeshContainer_BoxySkin_C : public ABP_MeshContainer_PlaytimeCharacterCosmetic_C
	{
	public:
		unsigned char                                              UnknownData_PDVQ[0x6];                                   // 0x028A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDecalComponent*                                     RightEyeDecal;                                           // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     LeftEyeDecal;                                            // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void SetCosmeticFromStruct(const struct FCosmetic& Cosmetic, const struct FLinearColor& Color);
		void SetEyeDecalVisibility(bool Visible);
		void PlaytimeCharacterTick(class APlaytimeCharacter* PlaytimeCharacter);
		void NetworkBoxyTick(class ABP_NetworkBoxy_C* NetworkBoxy);
		void ExecuteUbergraph_BP_MeshContainer_BoxySkin(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
