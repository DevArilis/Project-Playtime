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
	 * BlueprintGeneratedClass BP_MP_Puzzle_EndGoal.BP_MP_Puzzle_EndGoal_C
	 * Size -> 0x002C (FullSize[0x024C] - InheritedSize[0x0220])
	 */
	class ABP_MP_Puzzle_EndGoal_C : public AActor
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0220(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_MP_Puzzle_Trigger_C*>                     Triggers;                                                // 0x0228(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		class FScriptMulticastDelegate                             CheckPuzzles;                                            // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    Phase;                                                   // 0x0248(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void UpdatePhase(bool Forward);
		void CheckPuzzles__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
