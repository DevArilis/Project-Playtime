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
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.GetAllPublicLevels
	 */
	struct UUI_MP_StartServer_C_GetAllPublicLevels_Params
	{
	public:
		TArray<int32_t>                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.CreateLevelButtons
	 */
	struct UUI_MP_StartServer_C_CreateLevelButtons_Params
	{
	public:
		TArray<int32_t>                                            Levels;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.GetRandomLevel
	 */
	struct UUI_MP_StartServer_C_GetRandomLevel_Params
	{
	public:
		int32_t                                                    OutItem;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PV4V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.OnFailure_8953034D42070F751E3C3A94F517334F
	 */
	struct UUI_MP_StartServer_C_OnFailure_8953034D42070F751E3C3A94F517334F_Params
	{	};

	/**
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.OnSuccess_8953034D42070F751E3C3A94F517334F
	 */
	struct UUI_MP_StartServer_C_OnSuccess_8953034D42070F751E3C3A94F517334F_Params
	{	};

	/**
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.BndEvt__UI_MP_StartServer_Start_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 */
	struct UUI_MP_StartServer_C_BndEvt__UI_MP_StartServer_Start_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params
	{
	public:
		class UUI_MP_N_MenuButton_C*                               Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.QuickplayHost
	 */
	struct UUI_MP_StartServer_C_QuickplayHost_Params
	{	};

	/**
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.PreConstruct
	 */
	struct UUI_MP_StartServer_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.BndEvt__UI_MP_StartServer_PublicGame_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_MP_StartServer_C_BndEvt__UI_MP_StartServer_PublicGame_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.Construct
	 */
	struct UUI_MP_StartServer_C_Construct_Params
	{	};

	/**
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.BndEvt__UI_MP_StartServer_UI_BasicButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 */
	struct UUI_MP_StartServer_C_BndEvt__UI_MP_StartServer_UI_BasicButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.ExecuteUbergraph_UI_MP_StartServer
	 */
	struct UUI_MP_StartServer_C_ExecuteUbergraph_UI_MP_StartServer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.QuickplayHostFailed__DelegateSignature
	 */
	struct UUI_MP_StartServer_C_QuickplayHostFailed__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MP_StartServer.UI_MP_StartServer_C.BackPressed__DelegateSignature
	 */
	struct UUI_MP_StartServer_C_BackPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
