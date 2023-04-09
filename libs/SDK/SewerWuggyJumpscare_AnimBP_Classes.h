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
	 * AnimBlueprintGeneratedClass SewerWuggyJumpscare_AnimBP.SewerWuggyJumpscare_AnimBP_C
	 * Size -> 0x020D (FullSize[0x04C5] - InheritedSize[0x02B8])
	 */
	class USewerWuggyJumpscare_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_EEDQ[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x02F8(0x0080)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0378(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0480(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x04A0(0x0020)
		float                                                      JumpingAlpha;                                            // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Jumpscare;                                               // 0x04C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SewerWuggyJumpscare_AnimBP_AnimGraphNode_SequencePlayer_2EA87C2B4C4FC41125E5079EF8910576();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_SewerWuggyJumpscare_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
