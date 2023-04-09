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
	 * BlueprintGeneratedClass AC_MP_Puzzle_EndGoal.AC_MP_Puzzle_EndGoal_C
	 * Size -> 0x0024 (FullSize[0x00D4] - InheritedSize[0x00B0])
	 */
	class UAC_MP_Puzzle_EndGoal_C : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             CheckPuzzles;                                            // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class ABP_MP_Puzzle_Trigger_C*>                     Triggers;                                                // 0x00C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		int32_t                                                    Phase;                                                   // 0x00D0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void UpdatePhase(bool Forward);
		void CheckPuzzles__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
