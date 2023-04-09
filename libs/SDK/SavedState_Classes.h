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
	 * BlueprintGeneratedClass SavedState.SavedState_C
	 * Size -> 0x0009 (FullSize[0x00E9] - InheritedSize[0x00E0])
	 */
	class USavedState_C : public USavedState_Base
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       SerializeSelf;                                           // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void LoadActorState(const struct FActorSave& State);
		void LoadActorState();
		void PreSaveActorState();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_SavedState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
