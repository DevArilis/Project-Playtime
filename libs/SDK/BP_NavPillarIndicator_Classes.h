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
	 * BlueprintGeneratedClass BP_NavPillarIndicator.BP_NavPillarIndicator_C
	 * Size -> 0x000C (FullSize[0x0248] - InheritedSize[0x023C])
	 */
	class ABP_NavPillarIndicator_C : public ABP_NavBaseActor_C
	{
	public:
		unsigned char                                              UnknownData_3C7S[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Sabotage();
		void SetNumActive(int32_t NumActive, int32_t OutOf);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_NavPillarIndicator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
