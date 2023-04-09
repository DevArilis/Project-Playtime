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
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.FailServers
	 */
	struct UUI_MP_ServerBrowser_C_FailServers_Params
	{	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.ClearServers
	 */
	struct UUI_MP_ServerBrowser_C_ClearServers_Params
	{	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.PopulateServers
	 */
	struct UUI_MP_ServerBrowser_C_PopulateServers_Params
	{
	public:
		TArray<struct FSteamSessionResult>                         SteamSessions;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.PopulateRightData
	 */
	struct UUI_MP_ServerBrowser_C_PopulateRightData_Params
	{
	public:
		class UUI_N_ServerRow_C*                                   Row;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.OnFailure_7EECB2314B992AA8E6AB5BB3D8E913F7
	 */
	struct UUI_MP_ServerBrowser_C_OnFailure_7EECB2314B992AA8E6AB5BB3D8E913F7_Params
	{	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.OnSuccess_7EECB2314B992AA8E6AB5BB3D8E913F7
	 */
	struct UUI_MP_ServerBrowser_C_OnSuccess_7EECB2314B992AA8E6AB5BB3D8E913F7_Params
	{	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.OnCallback_BE0D16BF44C98FD5E825EB91E429D311
	 */
	struct UUI_MP_ServerBrowser_C_OnCallback_BE0D16BF44C98FD5E825EB91E429D311_Params
	{
	public:
		TArray<struct FSteamSessionResult>                         Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_Button_144_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_MP_ServerBrowser_C_BndEvt__UI_MP_ServerBrowser_Button_144_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_Search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UUI_MP_ServerBrowser_C_BndEvt__UI_MP_ServerBrowser_Search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.OnInitialized
	 */
	struct UUI_MP_ServerBrowser_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.Initialize
	 */
	struct UUI_MP_ServerBrowser_C_Initialize_Params
	{	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_Play_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 */
	struct UUI_MP_ServerBrowser_C_BndEvt__UI_MP_ServerBrowser_Play_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params
	{
	public:
		class UUI_MP_N_MenuButton_C*                               Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_Exit_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature
	 */
	struct UUI_MP_ServerBrowser_C_BndEvt__UI_MP_ServerBrowser_Exit_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature_Params
	{
	public:
		class UUI_MP_N_MenuButton_C*                               Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_CategoryFriends_K2Node_ComponentBoundEvent_6_Released__DelegateSignature
	 */
	struct UUI_MP_ServerBrowser_C_BndEvt__UI_MP_ServerBrowser_CategoryFriends_K2Node_ComponentBoundEvent_6_Released__DelegateSignature_Params
	{
	public:
		E_ServerCategory                                           Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.BndEvt__UI_MP_ServerBrowser_CategoryPublic_K2Node_ComponentBoundEvent_3_Released__DelegateSignature
	 */
	struct UUI_MP_ServerBrowser_C_BndEvt__UI_MP_ServerBrowser_CategoryPublic_K2Node_ComponentBoundEvent_3_Released__DelegateSignature_Params
	{
	public:
		E_ServerCategory                                           Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.ExecuteUbergraph_UI_MP_ServerBrowser
	 */
	struct UUI_MP_ServerBrowser_C_ExecuteUbergraph_UI_MP_ServerBrowser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BXGI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MP_ServerBrowser.UI_MP_ServerBrowser_C.Back__DelegateSignature
	 */
	struct UUI_MP_ServerBrowser_C_Back__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
