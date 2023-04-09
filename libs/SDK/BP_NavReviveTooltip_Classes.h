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
	 * BlueprintGeneratedClass BP_NavReviveTooltip.BP_NavReviveTooltip_C
	 * Size -> 0x001D (FullSize[0x0259] - InheritedSize[0x023C])
	 */
	class ABP_NavReviveTooltip_C : public ABP_NavBaseActor_C
	{
	public:
		unsigned char                                              UnknownData_IXI0[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      LifeTime;                                                // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IOOY[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UW_HoleReviveTooltip_C*                              ToolTipWidget;                                           // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELimb                                                      LimbForTooltip;                                          // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void StartRevive();
		void SetReviveProgress(float Progress);
		void SuccessRevive();
		void CancelRevive();
		void ReceiveBeginPlay();
		void OnAnimationFinished();
		void ExecuteUbergraph_BP_NavReviveTooltip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
