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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.AnimGraph
	 */
	struct UABP_NetworkPlayer_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.SetCosmeticType
	 */
	struct UABP_NetworkPlayer_C_SetCosmeticType_Params
	{
	public:
		ECosmeticTypeEnum                                          CosmeticType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.OverrideSetCustomizingCharacter
	 */
	struct UABP_NetworkPlayer_C_OverrideSetCustomizingCharacter_Params
	{
	public:
		bool                                                       Override;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.PlaySelectAnimationFromType
	 */
	struct UABP_NetworkPlayer_C_PlaySelectAnimationFromType_Params
	{
	public:
		ECosmeticTypeEnum                                          CosmeticType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5FHK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_4DB6EA854BE662DE6646129CE959855A
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_4DB6EA854BE662DE6646129CE959855A_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LookAt_2C992D594FDAE8B90826B38E6596A395
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LookAt_2C992D594FDAE8B90826B38E6596A395_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_BlendListByBool_A2D70076467C7635D7C477A149790CF8
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_BlendListByBool_A2D70076467C7635D7C477A149790CF8_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TwoWayBlend_901AB5494AA70BFF2E787090AB06C508
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TwoWayBlend_901AB5494AA70BFF2E787090AB06C508_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_BlendListByBool_AA0AFA4A432C86C1B24322962FC74A43
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_BlendListByBool_AA0AFA4A432C86C1B24322962FC74A43_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_A7773EDA45E3D39B47A9A9A9CF5EAF57
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_A7773EDA45E3D39B47A9A9A9CF5EAF57_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_BlendListByBool_EC6FAA3B4E14BA48BACB18B04ABA39B5
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_BlendListByBool_EC6FAA3B4E14BA48BACB18B04ABA39B5_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_RigidBody_F049658D4418AADA069208964CD8BDC5
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_RigidBody_F049658D4418AADA069208964CD8BDC5_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_260D786249AC526E005B31B466581801
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_260D786249AC526E005B31B466581801_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequenceEvaluator_DA53541D457799A77B1C5983C5573CE8
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequenceEvaluator_DA53541D457799A77B1C5983C5573CE8_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_FDA8DE71439E7D81E94BA8B14F3F53D7
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_FDA8DE71439E7D81E94BA8B14F3F53D7_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_F5A871DE461B1E74C7F2FE81144CCC0E
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_F5A871DE461B1E74C7F2FE81144CCC0E_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_B0B1B33C43A3700AA46B4991BDBFCF90
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_B0B1B33C43A3700AA46B4991BDBFCF90_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_E1DF699944485E1697D6F7A8147CE22A
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_E1DF699944485E1697D6F7A8147CE22A_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_3C7A9E884950873B6CCBE48CCC181A09
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_3C7A9E884950873B6CCBE48CCC181A09_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_2C97ED854364C4A888C672874BBEA078
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_2C97ED854364C4A888C672874BBEA078_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_86DB37B046254703463ACEB9F0F245A1
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_86DB37B046254703463ACEB9F0F245A1_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_946AA7814BEB6EEBE95155934145FE31
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_946AA7814BEB6EEBE95155934145FE31_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_3BAC4C964B98BD6F128F878395D98003
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_3BAC4C964B98BD6F128F878395D98003_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_4B56331B4D3D8CCFDE32BE83DF681FF6
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_4B56331B4D3D8CCFDE32BE83DF681FF6_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_9DC7C1574826C8B86DA874A68AEB1592
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_9DC7C1574826C8B86DA874A68AEB1592_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_88423F9D455813881B4AA0B70ADA01CC
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_88423F9D455813881B4AA0B70ADA01CC_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_E4C2336F410CE75456173B8D5503AFED
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_E4C2336F410CE75456173B8D5503AFED_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_60CF38714E4B943897571489658D423E
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_60CF38714E4B943897571489658D423E_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_BFA6C71A476DEEFC789EB2AFCAB49872
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_BFA6C71A476DEEFC789EB2AFCAB49872_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_9D436EE349486F9A99C0688D8BB68E53
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_9D436EE349486F9A99C0688D8BB68E53_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F8DEC8214E624274EFBBFD8095CC7706
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F8DEC8214E624274EFBBFD8095CC7706_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_D55AAA6D434FC7EF6EB2B7AEEF461DCF
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_D55AAA6D434FC7EF6EB2B7AEEF461DCF_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_57831BA042F562739BB950B9DAA58FB2
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_57831BA042F562739BB950B9DAA58FB2_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_BA2902674111D4F85B29048DC2762A32
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_BA2902674111D4F85B29048DC2762A32_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_A7D6CF0848E994561CE861BEED5252D3
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_A7D6CF0848E994561CE861BEED5252D3_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_857215ED466F885666940BA06090E8FC
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_857215ED466F885666940BA06090E8FC_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F1CED8AA41C01D42017A0994DEBB57D4
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F1CED8AA41C01D42017A0994DEBB57D4_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_5F0806AB4B6499090AE292813F79E41D
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_5F0806AB4B6499090AE292813F79E41D_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_EEEE2AE146C58FFFF09F6690B0C10CBD
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_EEEE2AE146C58FFFF09F6690B0C10CBD_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_16281B75474023A9FB3F7D9DE90E07B1
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_16281B75474023A9FB3F7D9DE90E07B1_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_96E67495423146899C45D4A93D4F2060
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_96E67495423146899C45D4A93D4F2060_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_B1482E4E430219320F9D1AA313F5CB67
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_B1482E4E430219320F9D1AA313F5CB67_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_B91B5DD740718D62C7E7FA8F8B23B2B5
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_B91B5DD740718D62C7E7FA8F8B23B2B5_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F54974F745D87B589FEEB59FBDA75902
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F54974F745D87B589FEEB59FBDA75902_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_9837115340ABB1DF3D399A9305A32AC5
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_9837115340ABB1DF3D399A9305A32AC5_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F1EF8E714A0CD1A0521C469DAEDCD837
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F1EF8E714A0CD1A0521C469DAEDCD837_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_546A53AB41E3B42005CC25804E4B98E0
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_546A53AB41E3B42005CC25804E4B98E0_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_EBC96F114BCEDFD9B81774A3A7BE7868
	 */
	struct UABP_NetworkPlayer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_EBC96F114BCEDFD9B81774A3A7BE7868_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.BlueprintUpdateAnimation
	 */
	struct UABP_NetworkPlayer_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.Impl Play Hurt Animation
	 */
	struct UABP_NetworkPlayer_C_ImplPlayHurtAnimation_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.Impl Play Jump Animation
	 */
	struct UABP_NetworkPlayer_C_ImplPlayJumpAnimation_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.Play Gesture
	 */
	struct UABP_NetworkPlayer_C_PlayGesture_Params
	{
	public:
		class UAnimSequence*                                       ThirdPersonAnimSequence;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.AnimNotify_PlantLeftFoot
	 */
	struct UABP_NetworkPlayer_C_AnimNotify_PlantLeftFoot_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.AnimNotify_PlantRightFoot
	 */
	struct UABP_NetworkPlayer_C_AnimNotify_PlantRightFoot_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.Play Emote
	 */
	struct UABP_NetworkPlayer_C_PlayEmote_Params
	{
	public:
		int32_t                                                    TableIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.BlueprintBeginPlay
	 */
	struct UABP_NetworkPlayer_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.Emote Debug
	 */
	struct UABP_NetworkPlayer_C_EmoteDebug_Params
	{	};

	/**
	 * Function ABP_NetworkPlayer.ABP_NetworkPlayer_C.ExecuteUbergraph_ABP_NetworkPlayer
	 */
	struct UABP_NetworkPlayer_C_ExecuteUbergraph_ABP_NetworkPlayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
