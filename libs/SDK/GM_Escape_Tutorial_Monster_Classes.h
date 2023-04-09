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
	 * BlueprintGeneratedClass GM_Escape_Tutorial_Monster.GM_Escape_Tutorial_Monster_C
	 * Size -> 0x001C (FullSize[0x0538] - InheritedSize[0x051C])
	 */
	class AGM_Escape_Tutorial_Monster_C : public AGM_Escape_C
	{
	public:
		unsigned char                                              UnknownData_0Y02[0x4];                                   // 0x051C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0520(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_NetworkHuggy_C*                                  Huggy;                                                   // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        WaitForHuggy_Timer;                                      // 0x0530(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void StartEarlyDepartureTimer();
		void K2_OnSetMatchState(const class FName& NewState);
		void ExecuteUbergraph_GM_Escape_Tutorial_Monster(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
