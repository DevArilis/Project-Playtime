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
	 * BlueprintGeneratedClass BPC_HandMagnet.BPC_HandMagnet_C
	 * Size -> 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
	 */
	class UBPC_HandMagnet_C : public UHandMagnetComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void GetFirstAttachedCharacter(class ABP_NetworkCharacter_C** Character);
		void OnHandStartPull(class UObject* Caller);
		void OnHandDetach(class UObject* Caller);
		void OnHandAttach(class UObject* Caller);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPC_HandMagnet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
