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
	 * AnimBlueprintGeneratedClass ABP_SentryHuggy.ABP_SentryHuggy_C
	 * Size -> 0x0E54 (FullSize[0x110C] - InheritedSize[0x02B8])
	 */
	class UABP_SentryHuggy_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_ZFCG[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_7;                    // 0x02F8(0x0118)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0410(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0430(0x0020)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_6;                    // 0x0450(0x0118)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_5;                    // 0x0568(0x0118)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_4;                    // 0x0680(0x0118)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_3;                    // 0x0798(0x0118)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x08B0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0930(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x09D0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0A18(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0A98(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0BF0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x0C18(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0C40(0x00A0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x0CE0(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0E90(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0EB0(0x0020)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_2;                    // 0x0ED0(0x0118)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController;                      // 0x0FE8(0x0118)
		class ABP_BabyHuggy_C*                                     SentryHuggy;                                             // 0x1100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LookWeight;                                              // 0x1108(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_LookAt_4C2BA7FE4C57B72C29BF1B9CC5CF95CC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_BlendListByBool_5FA338944DD247BD0F7F50AE8023C4FC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryHuggy_AnimGraphNode_BlendListByBool_84562E7E4CA38E3B850649A57A182832();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_ABP_SentryHuggy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
