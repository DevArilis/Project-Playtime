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
	 * AnimBlueprintGeneratedClass ABP_NetworkBoxyBoo.ABP_NetworkBoxyBoo_C
	 * Size -> 0xAF8C (FullSize[0xB244] - InheritedSize[0x02B8])
	 */
	class UABP_NetworkBoxyBoo_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_JDTR[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_16;                         // 0x02C8(0x0158)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x0420(0x00E8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_48;                       // 0x0508(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_47;                       // 0x0530(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_35;                          // 0x0558(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_28;                            // 0x0580(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_34;                          // 0x05B0(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_27;                            // 0x05D8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_7;                            // 0x0608(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x06B8(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_15;                         // 0x0738(0x0158)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_15;                             // 0x0890(0x0368)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_14;                             // 0x0BF8(0x0368)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_46;                       // 0x0F60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_45;                       // 0x0F88(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_33;                          // 0x0FB0(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_26;                            // 0x0FD8(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_32;                          // 0x1008(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_25;                            // 0x1030(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6;                            // 0x1060(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_24;                       // 0x1110(0x00C0)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone;                            // 0x11D0(0x00A0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_23;                       // 0x1270(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_14;                      // 0x1330(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_22;                       // 0x1380(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_14;                         // 0x1440(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_31;                          // 0x1598(0x0028)
		struct FAnimNode_BlendSpaceEvaluator                       AnimGraphNode_BlendSpaceEvaluator;                       // 0x15C0(0x00F0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_13;                      // 0x16B0(0x0050)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_13;                         // 0x1700(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_44;                       // 0x1858(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43;                       // 0x1880(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_42;                       // 0x18A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_41;                       // 0x18D0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x18F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0x1978(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_10;                  // 0x19A8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x19C8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x1AD0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_10;                  // 0x1BD8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x1BF8(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_21;                       // 0x1D00(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_30;                          // 0x1DC0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_29;                          // 0x1DE8(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0x1E10(0x0030)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_13;                             // 0x1E40(0x0368)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x21A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0x2228(0x0030)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_12;                             // 0x2258(0x0368)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_28;                          // 0x25C0(0x0028)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_11;                             // 0x25E8(0x0368)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_27;                          // 0x2950(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_20;                       // 0x2978(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x2A38(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0x2A80(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x2AB0(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_19;                       // 0x2B60(0x00C0)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_10;                             // 0x2C20(0x0368)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_40;                       // 0x2F88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x2FB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x2FD8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0x3000(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_9;                   // 0x3028(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x3048(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x3150(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_9;                   // 0x3258(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x3278(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_18;                       // 0x3380(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_26;                          // 0x3440(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_25;                          // 0x3468(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x3490(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x34C0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x3540(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x3570(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x35F0(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_17;                       // 0x3620(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_24;                          // 0x36E0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_23;                          // 0x3708(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x3730(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x3760(0x00B0)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_9;                              // 0x3810(0x0368)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_12;                         // 0x3B78(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0x3CD0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_11;                         // 0x3CF8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x3E50(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x3E78(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_16;                       // 0x3EA0(0x00C0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0x3F60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0x3F88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0x3FB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0x3FD8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x4000(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x4028(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x4050(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x4078(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x40A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x40C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x40F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x4118(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x4140(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x4168(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x4190(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x41B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x41E0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x4208(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x4288(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_15;                       // 0x42B8(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x4378(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x43A0(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_14;                       // 0x43C8(0x00C0)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_8;                              // 0x4488(0x0368)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x47F0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x4870(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_13;                       // 0x48A0(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_12;                      // 0x4960(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x49B0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x4A30(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_12;                       // 0x4A60(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_11;                      // 0x4B20(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_10;                      // 0x4B70(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x4BC0(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_11;                       // 0x4BF0(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_9;                       // 0x4CB0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x4D00(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x4D80(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x4DB0(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8;                       // 0x4DD8(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_10;                       // 0x4E28(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x4EE8(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x4F10(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x4F40(0x0028)
		struct FAnimNode_BlendBoneByChannel                        AnimGraphNode_BlendBoneByChannel_3;                      // 0x4F68(0x0068)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x4FD0(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x4FF8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x5028(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x50D8(0x0158)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_7;                              // 0x5230(0x0368)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x5598(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x56F0(0x0158)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x5848(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x58E8(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x5910(0x00E8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x59F8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x5B50(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x5B78(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x5BA0(0x0158)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_7;                       // 0x5CF8(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x5D48(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x5DC8(0x0158)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9;                        // 0x5F20(0x00C0)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_6;                              // 0x5FE0(0x0368)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_5;                              // 0x6348(0x0368)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x66B0(0x0108)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x67B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x67E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x6808(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x6830(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x6858(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x6880(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x68A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x68D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x68F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x6920(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x6948(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x6970(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x6998(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x69C0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x69E8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x6A68(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x6A98(0x0028)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_4;                              // 0x6AC0(0x0368)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_8;                        // 0x6E28(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x6EE8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x6F68(0x0030)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x6F98(0x00C8)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_3;                     // 0x7060(0x0038)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_6;                       // 0x7098(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x70E8(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_5;                       // 0x7168(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x71B8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x71E8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x7268(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x7298(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x72C0(0x0028)
		struct FAnimNode_BlendBoneByChannel                        AnimGraphNode_BlendBoneByChannel_2;                      // 0x72E8(0x0068)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x7350(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x7378(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x73A8(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x73D0(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x7498(0x0050)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_2;                     // 0x74E8(0x0038)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x7520(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x7570(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0x75F0(0x00C0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_8;                   // 0x76B0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8;                   // 0x76D0(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x76F0(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x77F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x7878(0x0030)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x78A8(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0x7970(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x7A30(0x0080)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive;                       // 0x7AB0(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x7AE8(0x0028)
		struct FAnimNode_BlendBoneByChannel                        AnimGraphNode_BlendBoneByChannel;                        // 0x7B10(0x0068)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x7B78(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x7BF8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x7C28(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x7CD8(0x0158)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_3;                              // 0x7E30(0x0368)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x8198(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x81C0(0x0080)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x8240(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_7;                   // 0x8348(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_7;                   // 0x8368(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x8388(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x8428(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x8580(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x85A8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x85D0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x8650(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x8680(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x86A8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x86D8(0x00B0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x8788(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x8870(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x8910(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x89F8(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x8A98(0x0158)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x8BF0(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x8CB0(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x8DB8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x8DE0(0x0028)
		unsigned char                                              UnknownData_971S[0x8];                                   // 0x8E08(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_8;                                  // 0x8E10(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0x8FC0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0x8FE0(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x9000(0x0158)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0x9158(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x9178(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x9238(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x9260(0x0020)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_7;                                  // 0x9280(0x01B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x9430(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x9458(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x9478(0x0020)
		unsigned char                                              UnknownData_LR3Z[0x8];                                   // 0x9498(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_6;                                  // 0x94A0(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_5;                                  // 0x9650(0x01B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x9800(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x9828(0x00C0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x98E8(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x99A8(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x9AB0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x9AD0(0x0020)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x9AF0(0x0050)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_2;                              // 0x9B40(0x0368)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x9EA8(0x0368)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0xA210(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0xA290(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0xA358(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0xA3A0(0x00C0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0xA460(0x0020)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_5;                    // 0xA480(0x0118)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0xA598(0x0020)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_4;                    // 0xA5B8(0x0118)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0xA6D0(0x0050)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0xA720(0x0020)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_3;                    // 0xA740(0x0118)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_2;                    // 0xA858(0x0118)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0xA970(0x0020)
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController;                      // 0xA990(0x0118)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0xAAA8(0x0030)
		unsigned char                                              UnknownData_C1CJ[0x8];                                   // 0xAAD8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_4;                                  // 0xAAE0(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_3;                                  // 0xAC90(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0xAE40(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0xAFF0(0x01B0)
		class ABP_NetworkBoxy_C*                                   NetworkBoxy;                                             // 0xB1A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaSeconds;                                            // 0xB1A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TargetGrabHandPosition;                                  // 0xB1AC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MasterTimer;                                             // 0xB1B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MasterSine;                                              // 0xB1BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HorizontalSpeed;                                         // 0xB1C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MovingHorizontally;                                      // 0xB1C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NYTX[0x3];                                   // 0xB1C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetRootRotation;                                      // 0xB1C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RootRotation;                                            // 0xB1CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SmoothedRootRotation;                                    // 0xB1D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousSmoothedRootRotation;                            // 0xB1D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RootRotationOffset;                                      // 0xB1D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnWeight;                                              // 0xB1DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnExplicitTime;                                        // 0xB1E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCrouching;                                             // 0xB1E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ArmsInsideBox;                                           // 0xB1E5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HeadInsideBox;                                           // 0xB1E6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsChargingLaunch;                                        // 0xB1E7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFalling;                                               // 0xB1E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_67TR[0x3];                                   // 0xB1E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VerticalSpeed;                                           // 0xB1EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LeftFootLastPlanted;                                     // 0xB1F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HandLaunched;                                            // 0xB1F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsJumpscareActive;                                       // 0xB1F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMovingBackwards;                                       // 0xB1F3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            CurrentCameraRotation;                                   // 0xB1F4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            CurrentSmoothedCameraRotation;                           // 0xB200(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LookPosition;                                            // 0xB20C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SmoothedLookPosition;                                    // 0xB218(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AimHead;                                                 // 0xB224(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7EOF[0x3];                                   // 0xB225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FistPosition;                                            // 0xB228(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             WorldLocation;                                           // 0xB234(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFistRetracting;                                        // 0xB240(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSitting;                                               // 0xB241(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFlipping;                                              // 0xB242(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPlayerControlled;                                      // 0xB243(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LookAt_0A4D7EA94B797D87CB6CA5BB4137D037();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LookAt_1B699AFD4A94E17495CA86AAB80C4C11();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LookAt_E6E1653947BC73B7677182A79397F3C8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_A87B4E3646908965953ECF975534EF09();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_ModifyBone_8F91AF44437A8EE399F47C866FF3CFB6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_BlendListByBool_9ED0C2C74ECDB52764E28CAD1BEB433A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_B411D3CD46685BCE5A3185B8FAD66729();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_ModifyBone_436A89064FB12001D5C6679F5516FED1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_SequenceEvaluator_8F3657DD4B4D1B6D0650218368501602();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_ControlRig_709DB9AC4E23EFF7EF9B58B28F2CEE4A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_8D996E644BEFFEE4DB4EC5B59CEAA81A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_E64335AA41FBB4ED57F3FBABA4A0F543();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_8CD2DC334B16FCF4B5FB9E876102F597();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_2759988A43EB92E6A6B45F8C6382D19A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_BB370D2745CB6ACFDF673BA5AF2DF131();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_0D45EA5541B382CC703981AB7EB93294();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_EE35911944C9AAB016A5B98286A40C56();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_A81FD1DD4D29A5EC3CF57F9865CC9E8F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_ControlRig_8A87B10D4402BFF55F65BB82A7644E1B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_7E9EEF0F4E8A75DC65AB2B8AA5419679();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_67D7358A4E1948ED66265A823820995E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_72738A9F4B44FAF4D9F3CDA3293C7851();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_0DEB195643A24D050F9972B31F634C13();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_93569466441179AE358267BE8E5D9D5D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_74B1E00D426EF04A8CA27D81093E45D5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_1085DB2E44A0FBD7AB1ACE9E5A687CA0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_283D54F94CD99C88F319F898E83DE12D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_5A9F7069428CB195DA9F7CAF82DAF3CA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_8E619E6241FE34685B0201B21EE10B27();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_PlantLeftFoot();
		void AnimNotify_PlantRightFoot();
		void PlayAttackAnimation(bool Left);
		void BlueprintBeginPlay();
		void EmoteDebug();
		void PlayEmote(int32_t TableIndex);
		void ExecuteUbergraph_ABP_NetworkBoxyBoo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
