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
	 * AnimBlueprintGeneratedClass ABP_MommyLongLegs.ABP_MommyLongLegs_C
	 * Size -> 0x898E (FullSize[0x8C46] - InheritedSize[0x02B8])
	 */
	class UABP_MommyLongLegs_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_6DPU[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_17;                             // 0x02C8(0x0108)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_6;                              // 0x03D0(0x0368)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_11;                       // 0x0738(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_16;                             // 0x07F8(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x0900(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x0980(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x09A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x09D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x09F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0A20(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0A48(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0A70(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0A98(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0AC0(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_11;                  // 0x0AE8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_15;                             // 0x0B08(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_14;                             // 0x0C10(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_11;                  // 0x0D18(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x0D38(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_26;                          // 0x0E40(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x0E68(0x0030)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_4;                              // 0x0E98(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_3;                              // 0x0FC0(0x0128)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_2;                              // 0x10E8(0x0128)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_10;                  // 0x1210(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_10;                  // 0x1230(0x0020)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone;                                // 0x1250(0x0128)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x1378(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x13F8(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_25;                          // 0x1428(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x1450(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_24;                          // 0x1480(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x14A8(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_23;                          // 0x14D8(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x1500(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x1530(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x15E0(0x0050)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_4;                             // 0x1630(0x00C8)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_9;                   // 0x16F8(0x0020)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone_5;                          // 0x1718(0x00A0)
		struct FAnimNode_ResetRoot                                 AnimGraphNode_ResetRoot_4;                               // 0x17B8(0x00D8)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_9;                   // 0x1890(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x18B0(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x19B8(0x0080)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_8;                   // 0x1A38(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_17;                         // 0x1A58(0x0158)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x1BB0(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_16;                         // 0x1C30(0x0158)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8;                   // 0x1D88(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x1DA8(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_7;                   // 0x1EB0(0x0020)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone_4;                          // 0x1ED0(0x00A0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_7;                   // 0x1F70(0x0020)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_4;                                  // 0x1F90(0x01B0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_8;                        // 0x2140(0x00E8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_15;                         // 0x2228(0x0158)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0x2380(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x23A0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x24A8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x25B0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0x26B8(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_14;                         // 0x26D8(0x0158)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0x2830(0x0020)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive;                       // 0x2850(0x0038)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x2888(0x0050)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_13;                         // 0x28D8(0x0158)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_4;                           // 0x2A30(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0x2AF8(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x2B20(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x2BE8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x2C10(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_12;                         // 0x2C38(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x2D90(0x0028)
		struct FAnimNode_ResetRoot                                 AnimGraphNode_ResetRoot_3;                               // 0x2DB8(0x00D8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x2E90(0x00C8)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x2F58(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x2F78(0x0108)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x3080(0x0050)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone_3;                          // 0x30D0(0x00A0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_3;                             // 0x3170(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x3238(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x3288(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x32B0(0x0028)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_5;                              // 0x32D8(0x0368)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_4;                              // 0x3640(0x0368)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x39A8(0x0080)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x3A28(0x0020)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone_2;                          // 0x3A48(0x00A0)
		struct FAnimNode_ResetRoot                                 AnimGraphNode_ResetRoot_2;                               // 0x3AE8(0x00D8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x3BC0(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x3CC8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x3CE8(0x0108)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_7;                        // 0x3DF0(0x00E8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_10;                       // 0x3ED8(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x3F98(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_11;                         // 0x40A0(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x41F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x4220(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x4248(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x42C8(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x42F8(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x4320(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x4350(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x4400(0x0158)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x4558(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x4620(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x4648(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x4670(0x0158)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x47C8(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9;                        // 0x4848(0x00C0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x4908(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x49D0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x4A70(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x4AF0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x4B18(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x4B40(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x4BC0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x4BF0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x4C70(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x4CA0(0x00B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x4D50(0x0020)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone;                            // 0x4D70(0x00A0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_8;                        // 0x4E10(0x00C0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x4ED0(0x00E8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0x4FB8(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x5078(0x0158)
		struct FAnimNode_ResetRoot                                 AnimGraphNode_ResetRoot;                                 // 0x51D0(0x00D8)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x52A8(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0x52C8(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x5388(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x54E0(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x5508(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x5550(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x5598(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x55C0(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x55E8(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x56A8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x56D0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x56F8(0x0158)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x5850(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x5898(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x58E0(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x5908(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x59C8(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x5A48(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x5B10(0x0028)
		unsigned char                                              UnknownData_E01V[0x8];                                   // 0x5B38(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x5B40(0x0830)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x6370(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x6390(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x63B0(0x0158)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x6508(0x00E8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x65F0(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x66B0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x67B8(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x68C0(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x6A18(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x6A40(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x6A68(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x6A90(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x6B10(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x6B40(0x0080)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_3;                              // 0x6BC0(0x0368)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_2;                              // 0x6F28(0x0368)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x7290(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x72C0(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x72E8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x7318(0x00B0)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x73C8(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x73F8(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x74E0(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x75C8(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x7668(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x77C0(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x77E8(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x7888(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x78B0(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x7930(0x00C0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_3;                                  // 0x79F0(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x7BA0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x7BC0(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x7BE0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x7D38(0x0028)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x7D60(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x7F10(0x01B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x80C0(0x0108)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x81C8(0x0368)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x8530(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x85F0(0x0158)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x8748(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x87E8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x8810(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x8838(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x8920(0x00E8)
		struct FVector                                             TestHandPosition;                                        // 0x8A08(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7C61[0x4];                                   // 0x8A14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_NetworkMommy_C*                                  NetworkMommy;                                            // 0x8A18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TestHandPositionOffset;                                  // 0x8A20(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Crouching;                                               // 0x8A2C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YI1A[0x3];                                   // 0x8A2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeltaSeconds;                                            // 0x8A30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeshScale;                                               // 0x8A34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ActorRotation;                                           // 0x8A38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TestHandRotation;                                        // 0x8A3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HorizontalSpeed;                                         // 0x8A40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Turning;                                                 // 0x8A44(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MovingHorizontally;                                      // 0x8A45(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TTN2[0x2];                                   // 0x8A46(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      LimbNames;                                               // 0x8A48(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, class FName>                           LimbCurves;                                              // 0x8A58(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, struct FVector>                        LimbPositions;                                           // 0x8AA8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              CurrentLimbKey;                                          // 0x8AF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TMap<class FString, float>                                 LimbRotations;                                           // 0x8B08(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, struct FVector>                        LimbPositionOffsets;                                     // 0x8B58(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             WorldTransform;                                          // 0x8BA8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetRootRotation;                                      // 0x8BB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RootRotation;                                            // 0x8BB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SmoothedRootRotation;                                    // 0x8BBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousSmoothedRootRotation;                            // 0x8BC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnWeight;                                              // 0x8BC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RootRotationOffset;                                      // 0x8BC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnExplicitTime;                                        // 0x8BCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            SlopeRotation;                                           // 0x8BD0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimPitch;                                                // 0x8BDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShootingWebs;                                            // 0x8BE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GV14[0x3];                                   // 0x8BE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GrappleTarget;                                           // 0x8BE4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsGrappling;                                             // 0x8BF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MovingBackwards;                                         // 0x8BF1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCarrying;                                              // 0x8BF2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NCZE[0x1];                                   // 0x8BF3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CarryingWeight;                                          // 0x8BF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             GrappleAttachedNormal;                                   // 0x8BF8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsGrappleAttached;                                       // 0x8C04(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K21O[0x3];                                   // 0x8C05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GrappleAttachedWeight;                                   // 0x8C08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsJumpscareActive;                                       // 0x8C0C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFalling;                                               // 0x8C0D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y1CR[0x2];                                   // 0x8C0E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            SmoothedRotationA;                                       // 0x8C10(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LookPositionA;                                           // 0x8C1C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            SmoothedRotationB;                                       // 0x8C28(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LookPositionB;                                           // 0x8C34(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchWeightA;                                           // 0x8C40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPlayerControlled;                                      // 0x8C44(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSitting;                                               // 0x8C45(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_ModifyBone_4E51CD9D4E0EBFFBCD523F9FA754E2A5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_LookAt_DB8A77B847C8C3CFBD176F9982716C18();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_TwoWayBlend_1046554A4B444A201F3190951D8DB7A8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_LayeredBoneBlend_064C90CE45975979B2C55CB368696E7F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_ModifyBone_407076134DC68F4B853ABB8004700F22();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_RotateRootBone_7945ADF24D19E15BAEEB3590C5697A08();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_ModifyBone_46D9C61141A5F429693E06B1778E0C89();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_RotateRootBone_B36200894CFDAEB8C1C83B8F07761AD8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_ModifyBone_CFCC48C1482F62633FF6DBB391366E6E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_RotateRootBone_44AC24764201AC084ABB2E9DC7F851C1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_ModifyBone_AA6F7FC347FDAFD0D12ED2BA23EA9345();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_ModifyBone_344B77BB40F7533346C8B198486A3B2E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_RotateRootBone_7CBB724E441A8302B20974BD62410A1F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_ModifyBone_5A5A59D44F1362835ACB1DAC45A61E46();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_ModifyBone_B2F7D135443999A1D91ACA8BD58533C8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_TransitionResult_4A5ACE5640B9C7D13DBC089B78F6E956();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_TransitionResult_3BBE7C7448A074F42A060BAB9D99E6D1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MommyLongLegs_AnimGraphNode_TransitionResult_F556875342C8E3AE77A17A9058440356();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void PlayEmote(int32_t TableIndex);
		void ExecuteUbergraph_ABP_MommyLongLegs(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
