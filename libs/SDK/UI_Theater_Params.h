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
	 * Function UI_Theater.UI_Theater_C.Remove Current Subtitle
	 */
	struct UUI_Theater_C_RemoveCurrentSubtitle_Params
	{	};

	/**
	 * Function UI_Theater.UI_Theater_C.Create a New Subtitle
	 */
	struct UUI_Theater_C_CreateaNewSubtitle_Params
	{	};

	/**
	 * Function UI_Theater.UI_Theater_C.OpenAudioSource
	 */
	struct UUI_Theater_C_OpenAudioSource_Params
	{	};

	/**
	 * Function UI_Theater.UI_Theater_C.SetMovieInfo
	 */
	struct UUI_Theater_C_SetMovieInfo_Params
	{
	public:
		struct FF_TheaterTapesStruct                               Info;                                                    // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       Unlocked;                                                // 0x0060(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Theater.UI_Theater_C.Construct
	 */
	struct UUI_Theater_C_Construct_Params
	{	};

	/**
	 * Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_PlayButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Theater_C_BndEvt__UI_Theater_PlayButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_PauseButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Theater_C_BndEvt__UI_Theater_PauseButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_PauseButton_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Theater_C_BndEvt__UI_Theater_PauseButton_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_fs_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature
	 */
	struct UUI_Theater_C_BndEvt__UI_Theater_fs_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature_Params
	{
	public:
		class UUI_MP_N_MenuButton_New_C*                           Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Theater.UI_Theater_C.Refresh
	 */
	struct UUI_Theater_C_Refresh_Params
	{	};

	/**
	 * Function UI_Theater.UI_Theater_C.BndEvt__UI_Theater_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature
	 */
	struct UUI_Theater_C_BndEvt__UI_Theater_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Theater.UI_Theater_C.ExecuteUbergraph_UI_Theater
	 */
	struct UUI_Theater_C_ExecuteUbergraph_UI_Theater_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LCDF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Theater.UI_Theater_C.BackReleased__DelegateSignature
	 */
	struct UUI_Theater_C_BackReleased__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
