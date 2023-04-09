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
	 * BlueprintGeneratedClass BPC_PlayerDetectionSystem_B.BPC_PlayerDetectionSystem_B_C
	 * Size -> 0x0031 (FullSize[0x00E1] - InheritedSize[0x00B0])
	 */
	class UBPC_PlayerDetectionSystem_B_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChaseMusicPack*                                     MonsterSelectedChaseMusic;                               // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAmbiencePack*                                       MonsterSelectedAmbientMusic;                             // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSelectedSoundsPackage                              SelectedSoundsPackage;                                   // 0x00C8(0x0018) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor
		bool                                                       isChaseMusicActive;                                      // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnRep_SelectedSoundsPackage();
		void MML_UpdateTimer();
		void MML_MainTimerEnd();
		void ReceiveBeginPlay();
		void ExitedBlue(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void EnteredYellow(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ExitRed(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void EnteredRed(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ExitedYellow(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void NetSetSounds(const struct FSelectedSoundsPackage& SelectedSoundsPackage);
		void ActivateMonsterChaseMusic();
		void ActivateMonsterAmbientMusic();
		void TriggerChase();
		void ExecuteUbergraph_BPC_PlayerDetectionSystem_B(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
