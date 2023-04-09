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
	 * BlueprintGeneratedClass GS_Escape_Tutorial.GS_Escape_Tutorial_C
	 * Size -> 0x0008 (FullSize[0x0468] - InheritedSize[0x0460])
	 */
	class AGS_Escape_Tutorial_C : public AGS_Escape_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void EndGame();
		void OnEndGame(const class FText& HeadingText, const class FText& SubheadingText, bool GivePoints, E_PlayerType PlayerType);
		void CheckEndConditions();
		void ExecuteUbergraph_GS_Escape_Tutorial(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
