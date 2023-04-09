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
	 * AnimBlueprintGeneratedClass ABP_BoxySelectScreen.ABP_BoxySelectScreen_C
	 * Size -> 0x0728 (FullSize[0x09E0] - InheritedSize[0x02B8])
	 */
	class UABP_BoxySelectScreen_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_Q6AK[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x02C8(0x0368)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0630(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0658(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x06D8(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0708(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0728(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0748(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0850(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x08D0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0900(0x00B0)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x09B0(0x0030)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_BoxySelectScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
