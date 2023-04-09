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
	 * Function UI_Play.UI_Play_C.GetMinutesTimespan
	 */
	struct UUI_Play_C_GetMinutesTimespan_Params
	{
	public:
		struct FTimespan                                           InTimespan;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Play.UI_Play_C.OnFailure_0A33D4554B1C14C6362812B574431F02
	 */
	struct UUI_Play_C_OnFailure_0A33D4554B1C14C6362812B574431F02_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.OnSuccess_0A33D4554B1C14C6362812B574431F02
	 */
	struct UUI_Play_C_OnSuccess_0A33D4554B1C14C6362812B574431F02_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.BndEvt__UI_Play_Host_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 */
	struct UUI_Play_C_BndEvt__UI_Play_Host_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.Construct
	 */
	struct UUI_Play_C_Construct_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_8_QuickplayHostFailed__DelegateSignature
	 */
	struct UUI_Play_C_BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_8_QuickplayHostFailed__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_7_WantsToTryHosting__DelegateSignature
	 */
	struct UUI_Play_C_BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_7_WantsToTryHosting__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.BndEvt__UI_Play_Back_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature
	 */
	struct UUI_Play_C_BndEvt__UI_Play_Back_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_5_Back__DelegateSignature
	 */
	struct UUI_Play_C_BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_5_Back__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_MP_ServerBrowser_K2Node_ComponentBoundEvent_4_Back__DelegateSignature
	 */
	struct UUI_Play_C_BndEvt__UI_Play_UI_MP_ServerBrowser_K2Node_ComponentBoundEvent_4_Back__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature
	 */
	struct UUI_Play_C_BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.BndEvt__UI_Play_ServerList_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 */
	struct UUI_Play_C_BndEvt__UI_Play_ServerList_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.BndEvt__UI_Play_Quickplay_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 */
	struct UUI_Play_C_BndEvt__UI_Play_Quickplay_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.ExecuteUbergraph_UI_Play
	 */
	struct UUI_Play_C_ExecuteUbergraph_UI_Play_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PGLX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Play.UI_Play_C.GoBack__DelegateSignature
	 */
	struct UUI_Play_C_GoBack__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.QuickplayReleased__DelegateSignature
	 */
	struct UUI_Play_C_QuickplayReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.ListReleased__DelegateSignature
	 */
	struct UUI_Play_C_ListReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Play.UI_Play_C.HostReleased__DelegateSignature
	 */
	struct UUI_Play_C_HostReleased__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
