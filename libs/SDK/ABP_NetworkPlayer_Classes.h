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
	 * AnimBlueprintGeneratedClass ABP_NetworkPlayer.ABP_NetworkPlayer_C
	 * Size -> 0x8B13 (FullSize[0x8DCB] - InheritedSize[0x02B8])
	 */
	class UABP_NetworkPlayer_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_QITL[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_15;                         // 0x02C8(0x0158)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8;                   // 0x0420(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_14;                         // 0x0440(0x0158)
		unsigned char                                              UnknownData_D03D[0x8];                                   // 0x0598(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x05A0(0x0830)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_34;                          // 0x0DD0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_13;                         // 0x0DF8(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_70;                       // 0x0F50(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_69;                       // 0x0F78(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_68;                       // 0x0FA0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_67;                       // 0x0FC8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_66;                       // 0x0FF0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_65;                       // 0x1018(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_33;                          // 0x1040(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_23;                       // 0x1068(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_33;                         // 0x1128(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_31;                            // 0x11A8(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_22;                       // 0x11D8(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_32;                          // 0x1298(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32;                         // 0x12C0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_30;                            // 0x1340(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31;                         // 0x1370(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_29;                            // 0x13F0(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_31;                          // 0x1420(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_28;                            // 0x1448(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x1478(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_30;                          // 0x1528(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_8;                   // 0x1550(0x0020)
		struct FAnimNode_BlendBoneByChannel                        AnimGraphNode_BlendBoneByChannel_2;                      // 0x1570(0x0068)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_29;                          // 0x15D8(0x0028)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_3;                // 0x1600(0x0190)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_7;                   // 0x1790(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6;                                    // 0x17B0(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_28;                          // 0x17F8(0x0028)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2;                // 0x1820(0x0190)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5;                                    // 0x19B0(0x0048)
		struct FAnimNode_BlendBoneByChannel                        AnimGraphNode_BlendBoneByChannel;                        // 0x19F8(0x0068)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_7;                   // 0x1A60(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_12;                         // 0x1A80(0x0158)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_3;                              // 0x1BD8(0x0368)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_11;                         // 0x1F40(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x2098(0x0158)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x21F0(0x00A0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x2290(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_21;                       // 0x2398(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x2458(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_27;                          // 0x25B0(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x25D8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x2678(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x26F8(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x2778(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x27C0(0x0158)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x2918(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x2998(0x0158)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x2AF0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_64;                       // 0x2B38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_63;                       // 0x2B60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_62;                       // 0x2B88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_61;                       // 0x2BB0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_26;                          // 0x2BD8(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_27;                            // 0x2C00(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x2C30(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_26;                            // 0x2CB0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x2CE0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_25;                            // 0x2D60(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_25;                          // 0x2D90(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0x2DB8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x2DE8(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x2E98(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x2F38(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_20;                       // 0x2FB8(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x3078(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_19;                       // 0x30F8(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x31B8(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_60;                       // 0x3238(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_59;                       // 0x3260(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_18;                       // 0x3288(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_24;                          // 0x3348(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x3370(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0x33F0(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_23;                          // 0x3420(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0x3448(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x3478(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x3528(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_58;                       // 0x3680(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_57;                       // 0x36A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_56;                       // 0x36D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_55;                       // 0x36F8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x3720(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0x37A0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x37D0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x3850(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0x3880(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x38A8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x38D8(0x00B0)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_2;                              // 0x3988(0x0368)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x3CF0(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_17;                      // 0x3D38(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_16;                      // 0x3D88(0x0050)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x3DD8(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x3EA0(0x0028)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone;                            // 0x3EC8(0x00A0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_54;                       // 0x3F68(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_53;                       // 0x3F90(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_52;                       // 0x3FB8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_51;                       // 0x3FE0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_50;                       // 0x4008(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_49;                       // 0x4030(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_48;                       // 0x4058(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_47;                       // 0x4080(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_46;                       // 0x40A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_45;                       // 0x40D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_44;                       // 0x40F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43;                       // 0x4120(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_42;                       // 0x4148(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_41;                       // 0x4170(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_40;                       // 0x4198(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x41C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x41E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0x4210(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0x4238(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0x4260(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0x4288(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0x42B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x42D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x4300(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x4328(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x4350(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x4378(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x43A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x43C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x43F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x4418(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x4440(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x4468(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x4490(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x44B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x44E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x4508(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x4530(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x4558(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x4580(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x45A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x45D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x45F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x4620(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x4648(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x4670(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x4698(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x46C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x46E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x4710(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x4738(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x4760(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_17;                       // 0x4788(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x4848(0x0080)
		unsigned char                                              UnknownData_6TNP[0x8];                                   // 0x48C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x48D0(0x01B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0x4A80(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0x4AA0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x4AC0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x4B40(0x0030)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x4B70(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x4C78(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0x4C98(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x4CB8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x4D38(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x4D68(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_9;                           // 0x4D90(0x00C8)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_9;                     // 0x4E58(0x0038)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_15;                      // 0x4E90(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x4EE0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x4F60(0x0030)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_8;                     // 0x4F90(0x0038)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_14;                      // 0x4FC8(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x5018(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_8;                           // 0x5098(0x00C8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_7;                           // 0x5160(0x00C8)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_7;                     // 0x5228(0x0038)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_13;                      // 0x5260(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x52B0(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x5330(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x5358(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x5388(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x53B0(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x5430(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_12;                      // 0x54F8(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x5548(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x5578(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x55F8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x5628(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x5650(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x5670(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x5690(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x5798(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x57C0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x57E8(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_6;                           // 0x5810(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_16;                       // 0x58D8(0x00C0)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_6;                     // 0x5998(0x0038)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_11;                      // 0x59D0(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_10;                      // 0x5A20(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_15;                       // 0x5A70(0x00C0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_14;                       // 0x5B30(0x00C0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_13;                       // 0x5BF0(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x5CB0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x5D30(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x5D60(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_12;                       // 0x5D88(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x5E48(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_11;                       // 0x5E70(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x5F30(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_10;                       // 0x5F58(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x6018(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x6098(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x60C8(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x60F0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x6120(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x61A0(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_5;                           // 0x61C8(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9;                        // 0x6290(0x00C0)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_5;                     // 0x6350(0x0038)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_9;                       // 0x6388(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x63D8(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x6408(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x6430(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x6460(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x64E0(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_4;                           // 0x6508(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_8;                        // 0x65D0(0x00C0)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_4;                     // 0x6690(0x0038)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8;                       // 0x66C8(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x6718(0x0030)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x6748(0x0368)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x6AB0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x6B30(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x6B60(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x6C48(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x6C78(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x6CF8(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0x6D28(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x6DE8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x6E68(0x00A0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_7;                       // 0x6F08(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0x6F58(0x00C0)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x7018(0x0190)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x71A8(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x7268(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x72E8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x7388(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_6;                       // 0x7408(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x7458(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x7488(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x74B0(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x74E0(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x7508(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x7538(0x00B0)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x75E8(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x7618(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x7640(0x0158)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x7798(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x77E0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x7938(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_5;                       // 0x7960(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x79B0(0x0050)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_3;                     // 0x7A00(0x0038)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x7A38(0x00C0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x7AF8(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x7BC0(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x7C40(0x00C0)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_2;                     // 0x7D00(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x7D38(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x7DB8(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x7E80(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x7F40(0x0050)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x7F90(0x00E8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x8078(0x0158)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x81D0(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x8220(0x0050)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive;                       // 0x8270(0x0038)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x82A8(0x00C0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x8368(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x8430(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x8458(0x0158)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x85B0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x86B8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x86D8(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x86F8(0x00A0)
		unsigned char                                              UnknownData_AZXO[0x8];                                   // 0x8798(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x87A0(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x8950(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x8970(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x8990(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x89B8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x8B10(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x8B38(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x8B60(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x8C68(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x8C88(0x0020)
		float                                                      PreviousSmoothedRootRotation;                            // 0x8CA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetRootRotation;                                      // 0x8CAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RootRotation;                                            // 0x8CB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QNPE[0x4];                                   // 0x8CB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_NetworkCharacter_C*                              NetworkCharacter;                                        // 0x8CB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               Pawn;                                                    // 0x8CC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnWeight;                                              // 0x8CC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaSeconds;                                            // 0x8CCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimPitch;                                                // 0x8CD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HorizontalSpeed;                                         // 0x8CD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RootRotationOffset;                                      // 0x8CD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VerticalSpeed;                                           // 0x8CDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CogZTransform;                                           // 0x8CE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CogZTransformTarget;                                     // 0x8CE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CogZTransformInterpSpeed;                                // 0x8CE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchWeight;                                            // 0x8CEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeSinceSwinging;                                       // 0x8CF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8BEM[0x4];                                   // 0x8CF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   GestureSequence;                                         // 0x8CF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceStopGesture;                                        // 0x8D00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsGestureActive;                                         // 0x8D01(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OPZA[0x6];                                   // 0x8D02(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        GestureMontage;                                          // 0x8D08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Swinging;                                                // 0x8D10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLeftHandExtended;                                      // 0x8D11(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRightHandExtended;                                     // 0x8D12(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMovingBackwards;                                       // 0x8D13(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BackwardsWeight;                                         // 0x8D14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCrouching;                                             // 0x8D18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFalling;                                               // 0x8D19(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MovingHorizontally;                                      // 0x8D1A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDowned;                                                // 0x8D1B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRolling;                                               // 0x8D1C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MZ0W[0x3];                                   // 0x8D1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothedRootRotation;                                    // 0x8D20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GrabpackBaseAimPitch;                                    // 0x8D24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GrabpackBaseAimYaw;                                      // 0x8D28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IdleBob;                                                 // 0x8D2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IdleExplicit;                                            // 0x8D30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsJumpscareActive;                                       // 0x8D34(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsExitingLocker;                                         // 0x8D35(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEnteringLocker;                                        // 0x8D36(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DY0K[0x1];                                   // 0x8D37(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnExplicit;                                            // 0x8D38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CurrentSmoothedRotation;                                 // 0x8D3C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             SmoothedLookPosition;                                    // 0x8D48(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LeftFootPlanted;                                         // 0x8D54(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IJRM[0x3];                                   // 0x8D55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AimPosition;                                             // 0x8D58(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSitting;                                               // 0x8D64(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsTPosing;                                               // 0x8D65(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPlayerControlled;                                      // 0x8D66(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsStandingUp;                                            // 0x8D67(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHealing;                                               // 0x8D68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Interrupted;                                             // 0x8D69(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QIT3[0x2];                                   // 0x8D6A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Velocity;                                                // 0x8D6C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<ECosmeticTypeEnum, class UAnimMontage*>               SelectMontages;                                          // 0x8D78(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		ECosmeticTypeEnum                                          CustomizationCategory;                                   // 0x8DC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCustomizingCharacter;                                  // 0x8DC9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RunNetworkCharacterFunctionality;                        // 0x8DCA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void SetCosmeticType(ECosmeticTypeEnum CosmeticType);
		void OverrideSetCustomizingCharacter(bool Override);
		void PlaySelectAnimationFromType(ECosmeticTypeEnum CosmeticType);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_4DB6EA854BE662DE6646129CE959855A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LookAt_2C992D594FDAE8B90826B38E6596A395();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_BlendListByBool_A2D70076467C7635D7C477A149790CF8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TwoWayBlend_901AB5494AA70BFF2E787090AB06C508();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_BlendListByBool_AA0AFA4A432C86C1B24322962FC74A43();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_A7773EDA45E3D39B47A9A9A9CF5EAF57();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_BlendListByBool_EC6FAA3B4E14BA48BACB18B04ABA39B5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_RigidBody_F049658D4418AADA069208964CD8BDC5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_260D786249AC526E005B31B466581801();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequenceEvaluator_DA53541D457799A77B1C5983C5573CE8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_FDA8DE71439E7D81E94BA8B14F3F53D7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_F5A871DE461B1E74C7F2FE81144CCC0E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_B0B1B33C43A3700AA46B4991BDBFCF90();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_E1DF699944485E1697D6F7A8147CE22A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_3C7A9E884950873B6CCBE48CCC181A09();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_2C97ED854364C4A888C672874BBEA078();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_86DB37B046254703463ACEB9F0F245A1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_946AA7814BEB6EEBE95155934145FE31();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_3BAC4C964B98BD6F128F878395D98003();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_4B56331B4D3D8CCFDE32BE83DF681FF6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_9DC7C1574826C8B86DA874A68AEB1592();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_88423F9D455813881B4AA0B70ADA01CC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_E4C2336F410CE75456173B8D5503AFED();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_60CF38714E4B943897571489658D423E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_BFA6C71A476DEEFC789EB2AFCAB49872();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_9D436EE349486F9A99C0688D8BB68E53();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F8DEC8214E624274EFBBFD8095CC7706();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_D55AAA6D434FC7EF6EB2B7AEEF461DCF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_57831BA042F562739BB950B9DAA58FB2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_BA2902674111D4F85B29048DC2762A32();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_A7D6CF0848E994561CE861BEED5252D3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_857215ED466F885666940BA06090E8FC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F1CED8AA41C01D42017A0994DEBB57D4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_5F0806AB4B6499090AE292813F79E41D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_EEEE2AE146C58FFFF09F6690B0C10CBD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_16281B75474023A9FB3F7D9DE90E07B1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_96E67495423146899C45D4A93D4F2060();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_B1482E4E430219320F9D1AA313F5CB67();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_B91B5DD740718D62C7E7FA8F8B23B2B5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F54974F745D87B589FEEB59FBDA75902();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_9837115340ABB1DF3D399A9305A32AC5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F1EF8E714A0CD1A0521C469DAEDCD837();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_546A53AB41E3B42005CC25804E4B98E0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_EBC96F114BCEDFD9B81774A3A7BE7868();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ImplPlayHurtAnimation();
		void ImplPlayJumpAnimation();
		void PlayGesture(class UAnimSequence* ThirdPersonAnimSequence);
		void AnimNotify_PlantLeftFoot();
		void AnimNotify_PlantRightFoot();
		void PlayEmote(int32_t TableIndex);
		void BlueprintBeginPlay();
		void EmoteDebug();
		void ExecuteUbergraph_ABP_NetworkPlayer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
