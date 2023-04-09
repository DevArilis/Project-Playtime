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
	 * AnimBlueprintGeneratedClass ABP_BoxySpringPost.ABP_BoxySpringPost_C
	 * Size -> 0x0710 (FullSize[0x09C8] - InheritedSize[0x02B8])
	 */
	class UABP_BoxySpringPost_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_TUU1[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_5;                    // 0x02F8(0x0118)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_4;                    // 0x0410(0x0118)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_3;                    // 0x0528(0x0118)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_2;                    // 0x0640(0x0118)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController;                      // 0x0758(0x0118)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x0870(0x0118)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0988(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x09A8(0x0020)

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_BoxySpringPost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
