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
	 * AnimBlueprintGeneratedClass ABP_OutfitAnimeGirl.ABP_OutfitAnimeGirl_C
	 * Size -> 0x0A9C (FullSize[0x0D54] - InheritedSize[0x02B8])
	 */
	class UABP_OutfitAnimeGirl_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_I7XW[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x02C8(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x02E8(0x0020)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x0308(0x01D8) ContainsInstancedReference
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x04E0(0x0030)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x0510(0x0830)
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0D40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Velocity;                                                // 0x0D48(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_OutfitAnimeGirl(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
