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
	 * BlueprintGeneratedClass BP_MonsterShrinker.BP_MonsterShrinker_C
	 * Size -> 0x0021 (FullSize[0x0241] - InheritedSize[0x0220])
	 */
	class ABP_MonsterShrinker_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box;                                                     // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Height;                                                  // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewWalkSpeed;                                            // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MonsterIgnore;                                           // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BoxyExitCrouch(class ABP_NetworkBoxy_C* BoxyRef);
		void BoxyEnterCrouch(class ABP_NetworkBoxy_C* BoxyRef);
		void MommyExitCrouch(class ABP_NetworkMommy_C* MommyRef);
		void MommyEnterCrouch(class ABP_NetworkMommy_C* MommyRef);
		void HuggyExitCrouch(class ABP_NetworkHuggy_C* HuggyRef);
		void HuggyEnterCrouch(class ABP_NetworkHuggy_C* HuggyRef);
		void ReceiveActorEndOverlap(class AActor* OtherActor);
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ExecuteUbergraph_BP_MonsterShrinker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
