/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Parse Quick Subtitle IDs
	 * 		Flags  -> ()
	 */
	void USubtitles_UI_C::ParseQuickSubtitleIDs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Parse Quick Subtitle IDs");
		
		USubtitles_UI_C_ParseQuickSubtitleIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Find Current Subtitle State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentSubtitle                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USubtitles_UI_C::FindCurrentSubtitleState(int32_t* CurrentSubtitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Find Current Subtitle State");
		
		USubtitles_UI_C_FindCurrentSubtitleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentSubtitle != nullptr)
			*CurrentSubtitle = params.CurrentSubtitle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Get Subtitle Variables From ID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Row                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSimple_Subtitles                           Subtitle                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void USubtitles_UI_C::GetSubtitleVariablesFromID(int32_t Row, struct FSimple_Subtitles* Subtitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Get Subtitle Variables From ID");
		
		USubtitles_UI_C_GetSubtitleVariablesFromID_Params params {};
		params.Row = Row;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Subtitle != nullptr)
			*Subtitle = params.Subtitle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Hide Subtitle Background if Empty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void USubtitles_UI_C::HideSubtitleBackgroundifEmpty(const class FText& Text, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Hide Subtitle Background if Empty");
		
		USubtitles_UI_C_HideSubtitleBackgroundifEmpty_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Update Subtitle Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UpdatingLanguage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OnlyUpdateCurrentLangauge                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USubtitles_UI_C::UpdateSubtitleText(bool UpdatingLanguage, bool OnlyUpdateCurrentLangauge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Update Subtitle Text");
		
		USubtitles_UI_C_UpdateSubtitleText_Params params {};
		params.UpdatingLanguage = UpdatingLanguage;
		params.OnlyUpdateCurrentLangauge = OnlyUpdateCurrentLangauge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Construct
	 * 		Flags  -> ()
	 */
	void USubtitles_UI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Construct");
		
		USubtitles_UI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USubtitles_UI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Tick");
		
		USubtitles_UI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Minimize Subtitle
	 * 		Flags  -> ()
	 */
	void USubtitles_UI_C::MinimizeSubtitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Minimize Subtitle");
		
		USubtitles_UI_C_MinimizeSubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Maximize Subtitle
	 * 		Flags  -> ()
	 */
	void USubtitles_UI_C::MaximizeSubtitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Maximize Subtitle");
		
		USubtitles_UI_C_MaximizeSubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Instant Minimize
	 * 		Flags  -> ()
	 */
	void USubtitles_UI_C::InstantMinimize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Instant Minimize");
		
		USubtitles_UI_C_InstantMinimize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Pause
	 * 		Flags  -> ()
	 */
	void USubtitles_UI_C::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Pause");
		
		USubtitles_UI_C_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Play
	 * 		Flags  -> ()
	 */
	void USubtitles_UI_C::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Play");
		
		USubtitles_UI_C_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Set Paused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pause                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USubtitles_UI_C::SetPaused(bool Pause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Set Paused");
		
		USubtitles_UI_C_SetPaused_Params params {};
		params.Pause = Pause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Update Subtitle Visiblity
	 * 		Flags  -> ()
	 */
	void USubtitles_UI_C::UpdateSubtitleVisiblity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Update Subtitle Visiblity");
		
		USubtitles_UI_C_UpdateSubtitleVisiblity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.Update Distance
	 * 		Flags  -> ()
	 */
	void USubtitles_UI_C::UpdateDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.Update Distance");
		
		USubtitles_UI_C_UpdateDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Subtitles_UI.Subtitles_UI_C.ExecuteUbergraph_Subtitles_UI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USubtitles_UI_C::ExecuteUbergraph_Subtitles_UI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Subtitles_UI.Subtitles_UI_C.ExecuteUbergraph_Subtitles_UI");
		
		USubtitles_UI_C_ExecuteUbergraph_Subtitles_UI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubtitles_UI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubtitles_UI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Subtitles_UI.Subtitles_UI_C");
		return ptr;
	}

}


