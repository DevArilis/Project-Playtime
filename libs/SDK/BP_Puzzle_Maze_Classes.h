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
	 * BlueprintGeneratedClass BP_Puzzle_Maze.BP_Puzzle_Maze_C
	 * Size -> 0x00CC (FullSize[0x0468] - InheritedSize[0x039C])
	 */
	class ABP_Puzzle_Maze_C : public ABP_ToyPuzzle_C
	{
	public:
		unsigned char                                              UnknownData_CC0R[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Maze_Puzzle_Component_C*                         MazeTwo;                                                 // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_Maze_Puzzle_Component_C*                         MazeOne;                                                 // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SecondPortion;                                           // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FirstPortion;                                            // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     BallRollingSound;                                        // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BottomMazeLights;                                        // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TopMazeLights;                                           // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USplineComponent*                                    WinSpline;                                               // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USplineComponent*                                    TransitionSpline;                                        // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_HandMagnet_C*                                   CCWButtonHandMagnet;                                     // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_HandMagnet_C*                                   CWButtonHandMagnet;                                      // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Ball;                                                    // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Hand1;                                                   // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Hand;                                                    // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       CWBoxCollision;                                          // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       CCWBoxCollision;                                         // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Flash_Lights__Direction_37B990CC49547DCA387A5B97D4BD6BB4; // 0x0428(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CAS1[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FlashLights;                                             // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoveToEnd_Progress_A391DB8343730811AF2661AE067BB8F1;     // 0x0438(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         MoveToEnd__Direction_A391DB8343730811AF2661AE067BB8F1;   // 0x043C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_49S1[0x3];                                   // 0x043D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  MoveToEnd;                                               // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoveThroughTransition_Progress_23C2222C43541DF46C4B7799C8666387; // 0x0448(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         MoveThroughTransition__Direction_23C2222C43541DF46C4B7799C8666387; // 0x044C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TW7Z[0x3];                                   // 0x044D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  MoveThroughTransition;                                   // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousBallExitSpeed;                                   // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WQEH[0x4];                                   // 0x045C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                CurrentlyFlashingMazeLights;                             // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_Progress_Implementation();
		void OnRep_State_Implementation();
		void ToSolved();
		void ToIdle();
		void DoIncrement(bool* ShouldComplete);
		void IdleToInProgress();
		void MoveThroughTransition__FinishedFunc();
		void MoveThroughTransition__UpdateFunc();
		void MoveToEnd__FinishedFunc();
		void MoveToEnd__UpdateFunc();
		void FlashLights__FinishedFunc();
		void FlashLights__UpdateFunc();
		void FlashLights__Off__EventFunc();
		void FlashLights__On__EventFunc();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__BP_Puzzle_Maze_CCWButtonHandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange);
		void BndEvt__BP_Puzzle_Maze_CWButtonHandMagnet_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange);
		void EventIncrementProgress(float BallExitSpeed);
		void SetBallPosition(const struct FVector& Position);
		void BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_2_OnBallPositionChanged__DelegateSignature(const struct FVector& BallPosition);
		void BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_3_OnBallPositionChanged__DelegateSignature(const struct FVector& BallPosition);
		void BndEvt__BP_Puzzle_Maze_MazeOne_K2Node_ComponentBoundEvent_4_OnMazeComplete__DelegateSignature(float BallSpeed);
		void BndEvt__BP_Puzzle_Maze_MazeTwo_K2Node_ComponentBoundEvent_5_OnMazeComplete__DelegateSignature(float BallSpeed);
		void ExecuteUbergraph_BP_Puzzle_Maze(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
