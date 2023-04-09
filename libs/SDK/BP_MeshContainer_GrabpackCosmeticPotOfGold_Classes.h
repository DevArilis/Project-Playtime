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
	 * BlueprintGeneratedClass BP_MeshContainer_GrabpackCosmeticPotOfGold.BP_MeshContainer_GrabpackCosmeticPotOfGold_C
	 * Size -> 0x0017 (FullSize[0x0300] - InheritedSize[0x02E9])
	 */
	class ABP_MeshContainer_GrabpackCosmeticPotOfGold_C : public ABP_MeshContainer_GrabpackCosmetic_C
	{
	public:
		unsigned char                                              UnknownData_LZSX[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Coins;                                                   // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void NetworkCharacterTick(class ABP_NetworkCharacter_C* NetworkCharacter);
		void ExecuteUbergraph_BP_MeshContainer_GrabpackCosmeticPotOfGold(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
