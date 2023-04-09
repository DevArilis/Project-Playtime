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
	 * Function Subtitles_UI.Subtitles_UI_C.Parse Quick Subtitle IDs
	 */
	struct USubtitles_UI_C_ParseQuickSubtitleIDs_Params
	{	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Find Current Subtitle State
	 */
	struct USubtitles_UI_C_FindCurrentSubtitleState_Params
	{
	public:
		int32_t                                                    CurrentSubtitle;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Get Subtitle Variables From ID
	 */
	struct USubtitles_UI_C_GetSubtitleVariablesFromID_Params
	{
	public:
		int32_t                                                    Row;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VYFH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSimple_Subtitles                                   Subtitle;                                                // 0x0008(0x0020)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Hide Subtitle Background if Empty
	 */
	struct USubtitles_UI_C_HideSubtitleBackgroundifEmpty_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                OutText;                                                 // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Update Subtitle Text
	 */
	struct USubtitles_UI_C_UpdateSubtitleText_Params
	{
	public:
		bool                                                       UpdatingLanguage;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OnlyUpdateCurrentLangauge;                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Construct
	 */
	struct USubtitles_UI_C_Construct_Params
	{	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Tick
	 */
	struct USubtitles_UI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Minimize Subtitle
	 */
	struct USubtitles_UI_C_MinimizeSubtitle_Params
	{	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Maximize Subtitle
	 */
	struct USubtitles_UI_C_MaximizeSubtitle_Params
	{	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Instant Minimize
	 */
	struct USubtitles_UI_C_InstantMinimize_Params
	{	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Pause
	 */
	struct USubtitles_UI_C_Pause_Params
	{	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Play
	 */
	struct USubtitles_UI_C_Play_Params
	{	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Set Paused
	 */
	struct USubtitles_UI_C_SetPaused_Params
	{
	public:
		bool                                                       Pause;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Update Subtitle Visiblity
	 */
	struct USubtitles_UI_C_UpdateSubtitleVisiblity_Params
	{	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.Update Distance
	 */
	struct USubtitles_UI_C_UpdateDistance_Params
	{	};

	/**
	 * Function Subtitles_UI.Subtitles_UI_C.ExecuteUbergraph_Subtitles_UI
	 */
	struct USubtitles_UI_C_ExecuteUbergraph_Subtitles_UI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
