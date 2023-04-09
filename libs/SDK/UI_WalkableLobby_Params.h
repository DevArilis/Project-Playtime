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
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.Get_PlayersText_Text_1
	 */
	struct UUI_WalkableLobby_C_Get_PlayersText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.Construct
	 */
	struct UUI_WalkableLobby_C_Construct_Params
	{	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.SetReady
	 */
	struct UUI_WalkableLobby_C_SetReady_Params
	{
	public:
		bool                                                       Ready;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.Update Lobby
	 */
	struct UUI_WalkableLobby_C_UpdateLobby_Params
	{	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.StartGameAnim
	 */
	struct UUI_WalkableLobby_C_StartGameAnim_Params
	{	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.EventSwitchCustomization
	 */
	struct UUI_WalkableLobby_C_EventSwitchCustomization_Params
	{
	public:
		bool                                                       NewCustomizing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.BndEvt__UI_WalkableLobby_CosmeticButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 */
	struct UUI_WalkableLobby_C_BndEvt__UI_WalkableLobby_CosmeticButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params
	{
	public:
		class UUI_MP_N_MenuButton_C*                               Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.BndEvt__UI_WalkableLobby_ReadyButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 */
	struct UUI_WalkableLobby_C_BndEvt__UI_WalkableLobby_ReadyButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params
	{
	public:
		class UUI_MP_N_MenuButton_C*                               Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.OnInitialized
	 */
	struct UUI_WalkableLobby_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.Event Show Emotes
	 */
	struct UUI_WalkableLobby_C_EventShowEmotes_Params
	{	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature
	 */
	struct UUI_WalkableLobby_C_BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.Destruct
	 */
	struct UUI_WalkableLobby_C_Destruct_Params
	{	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.BndEvt__UI_WalkableLobby_UI_Customize_K2Node_ComponentBoundEvent_3_ChangedAppearance__DelegateSignature
	 */
	struct UUI_WalkableLobby_C_BndEvt__UI_WalkableLobby_UI_Customize_K2Node_ComponentBoundEvent_3_ChangedAppearance__DelegateSignature_Params
	{	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.UpdateQueueState
	 */
	struct UUI_WalkableLobby_C_UpdateQueueState_Params
	{
	public:
		bool                                                       MonsterQueue;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.UpdateQueueInfo
	 */
	struct UUI_WalkableLobby_C_UpdateQueueInfo_Params
	{	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.GameStartCountdownTimer
	 */
	struct UUI_WalkableLobby_C_GameStartCountdownTimer_Params
	{	};

	/**
	 * Function UI_WalkableLobby.UI_WalkableLobby_C.ExecuteUbergraph_UI_WalkableLobby
	 */
	struct UUI_WalkableLobby_C_ExecuteUbergraph_UI_WalkableLobby_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
