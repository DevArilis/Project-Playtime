﻿#pragma once

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
	 * AnimBlueprintGeneratedClass ABP_HatJester.ABP_HatJester_C
	 * Size -> 0x0A90 (FullSize[0x0D48] - InheritedSize[0x02B8])
	 */
	class UABP_HatJester_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_93CU[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x02F8(0x01D8) ContainsInstancedReference
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x04D0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x04F0(0x0020)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x0510(0x0830)
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0D40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_HatJester(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
