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
	 * BlueprintGeneratedClass BP_Puzzle_Reflex.BP_Puzzle_Reflex_C
	 * Size -> 0x0170 (FullSize[0x050C] - InheritedSize[0x039C])
	 */
	class ABP_Puzzle_Reflex_C : public ABP_ToyPuzzle_C
	{
	public:
		unsigned char                                              UnknownData_OK43[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Tiles;                                                   // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Trigger6;                                                // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Trigger4;                                                // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Trigger5;                                                // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Trigger3;                                                // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Trigger2;                                                // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Trigger1;                                                // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                Counter;                                                 // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HandPos11;                                               // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_HandMagnet_C*                                   BPC_HandMagnet11;                                        // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Tile_7;                                                  // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HandPos10;                                               // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_HandMagnet_C*                                   BPC_HandMagnet10;                                        // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Tile_6;                                                  // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HandPos9;                                                // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_HandMagnet_C*                                   BPC_HandMagnet9;                                         // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Tile_5;                                                  // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HandPos8;                                                // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_HandMagnet_C*                                   BPC_HandMagnet8;                                         // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Tile_4;                                                  // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HandPos7;                                                // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_HandMagnet_C*                                   BPC_HandMagnet7;                                         // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Tile_3;                                                  // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HandPos6;                                                // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_HandMagnet_C*                                   BPC_HandMagnet6;                                         // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Tile_2;                                                  // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CorrectTile;                                             // 0x0478(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StreakMax;                                               // 0x047C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UStaticMeshComponent*>                        TileFace;                                                // 0x0480(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMaterialInstance*>                           NormalMats;                                              // 0x0490(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterial*                                           HighlightMat;                                            // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          S_CorrectTile;                                           // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          S_WrongTile;                                             // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         TimeBeforeNextTile;                                      // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        InitializeTimer;                                         // 0x04C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        RandomTileTimer;                                         // 0x04D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        PaddingTimer;                                            // 0x04D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       TileGenerated;                                           // 0x04E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XGP4[0x3];                                   // 0x04E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeToSmack;                                             // 0x04E4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        HighlightTimer;                                          // 0x04E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumTiles;                                                // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_39QB[0x4];                                   // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     TickingSound;                                            // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          S_Ticking;                                               // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ReflexSoundReplicator;                                   // 0x0508(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_ReflexSoundReplicator();
		void CheckforThinkFastFinish(bool* Finished);
		void ToSolved();
		void OnRep_Progress_Implementation();
		void DecrementingToInProgress();
		void IncrementingToInProgress();
		void FailedPuzzle();
		void DoIncrement(bool* ShouldComplete);
		void OnRep_State_Implementation();
		void ToIdle();
		void IdleToInProgress();
		void ToggleTileHighlight(bool Highlight, int32_t TileIndex);
		void DoesSelectionCount(int32_t Index, bool* Value, int32_t* ReturnIndex);
		void BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet7_K2Node_ComponentBoundEvent_6_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange);
		void BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet9_K2Node_ComponentBoundEvent_7_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange);
		void BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet11_K2Node_ComponentBoundEvent_8_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange);
		void BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet6_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange);
		void BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet8_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange);
		void BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet10_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature(EAttachmentStateChange AttachmentStateChange);
		void ReceiveBeginPlay();
		void TimedOut();
		void Select(int32_t ButtonIndex);
		void DisplaySelection();
		void ShowTileToBeSmacked();
		void GenerateRandomTile();
		void SetRandomTile();
		void Timeout();
		void ClearTiles();
		void EventUpdateSelection();
		void PlaySound(bool Correct);
		void PlayTickingSound(bool Play);
		void Solved_ButtonGlow();
		void ExecuteUbergraph_BP_Puzzle_Reflex(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
