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
	 * AnimBlueprintGeneratedClass ABP_OutfitBoxy.ABP_OutfitBoxy_C
	 * Size -> 0x1214 (FullSize[0x14CC] - InheritedSize[0x02B8])
	 */
	class UABP_OutfitBoxy_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_EXK0[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x02C8(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x02E8(0x0158)
		struct FAnimNode_ApplyLimits                               AnimGraphNode_ApplyLimits;                               // 0x0440(0x00E8)
		unsigned char                                              UnknownData_CPBU[0x8];                                   // 0x0528(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x0530(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x06E0(0x0020)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone;                                // 0x0700(0x0128)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x0828(0x01D8) ContainsInstancedReference
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0A00(0x0030)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x0A30(0x0830)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1260(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1280(0x0020)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x12A0(0x0118)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x13B8(0x0108)
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x14C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timer;                                                   // 0x14C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_OutfitBoxy_AnimGraphNode_ModifyBone_97C35587499CAF00A6BD8FBA1443FE98();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_ABP_OutfitBoxy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
