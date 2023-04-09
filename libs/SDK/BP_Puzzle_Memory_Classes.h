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
	 * BlueprintGeneratedClass BP_Puzzle_Memory.BP_Puzzle_Memory_C
	 * Size -> 0x00EC (FullSize[0x0488] - InheritedSize[0x039C])
	 */
	class ABP_Puzzle_Memory_C : public ABP_ToyPuzzle_C
	{
	public:
		unsigned char                                              UnknownData_6ZNZ[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     TileRoot;                                                // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     RandomizingSound;                                        // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         SuccessTimeline__Direction_FA74225C4BBDE2FB9889DC8C98EB26A0; // 0x03B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2223[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SuccessTimeline;                                         // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         FailureTimeline__Direction_8D4AECB54333D80F52C101BD99115548; // 0x03C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W81J[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FailureTimeline;                                         // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         NewPatternTimeline__Direction_8A419DCE4B61BB7E41E781AECCF69CFD; // 0x03D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CK1L[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  NewPatternTimeline;                                      // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PatternLength;                                           // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BT50[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterial*                                           DefaultMat;                                              // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   HighlightMat;                                            // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   CorrectMat;                                              // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   IncorrectMat;                                            // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      PlayerPattern;                                           // 0x0410(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      ButtonArray;                                             // 0x0420(0x0010) Edit, BlueprintVisible, Net, DisableEditOnTemplate
		int32_t                                                    StreakMax;                                               // 0x0430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaitTime;                                                // 0x0434(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Columns;                                                 // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Rows;                                                    // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            I_TargetPattern;                                         // 0x0440(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance
		TArray<int32_t>                                            I_PlayerPattern;                                         // 0x0450(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
		int32_t                                                    NumButtons;                                              // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsGeneratingPattern;                                     // 0x0464(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_V3YI[0x3];                                   // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MemorySoundReplicator;                                   // 0x0468(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4K27[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ButtonCorrectSound;                                      // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          PatternCorrectSound;                                     // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          ButtonIncorrectSound;                                    // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_MemorySoundReplicator();
		void OnRep_IsGeneratingPattern();
		void OnRep_I_PlayerPattern();
		void ToSolved();
		void GenerateRandomPattern(TArray<int32_t>* GeneratedPattern);
		void AllButtonHighlight(class UMaterial* Mat);
		void ButtonHighlight(TArray<int32_t>* ButtonsToHighlight, class UMaterialInstance* Mat);
		void OnRep_State_Implementation();
		void ToIdle();
		void IncrementingToInProgress();
		void DecrementingToInProgress();
		void IdleToInProgress();
		void DoIncrement(bool* ShouldComplete);
		void Select(int32_t Index);
		void UserConstructionScript();
		void NewPatternTimeline__FinishedFunc();
		void NewPatternTimeline__UpdateFunc();
		void NewPatternTimeline__CyclePattern__EventFunc();
		void NewPatternTimeline__FlashOff__EventFunc();
		void NewPatternTimeline__FlashOn__EventFunc();
		void FailureTimeline__FinishedFunc();
		void FailureTimeline__UpdateFunc();
		void FailureTimeline__Off__EventFunc();
		void FailureTimeline__On__EventFunc();
		void SuccessTimeline__FinishedFunc();
		void SuccessTimeline__UpdateFunc();
		void SuccessTimeline__Off__EventFunc();
		void SuccessTimeline__On__EventFunc();
		void PlayRandomizingSound(bool Play);
		void PlayButtonSound(bool Correct);
		void ShowPlayerPattern();
		void ReceiveBeginPlay();
		void Multicast_ClearButtons();
		void GenerateNewPatternAndShowIt();
		void Multicast_StartNewPatternTimeline();
		void Multicast_StopNewPatternTimeline();
		void Solved_ButtonGlow();
		void PlaySuccessAnimation();
		void ExecuteUbergraph_BP_Puzzle_Memory(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
