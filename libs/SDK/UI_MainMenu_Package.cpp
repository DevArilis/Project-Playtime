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
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.Get_TimeRemainingText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_MainMenu_C::Get_TimeRemainingText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Get_TimeRemainingText_Text_1");
		
		UUI_MainMenu_C_Get_TimeRemainingText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.GetTimePassedFromFirstTapeStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Days                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UUI_MainMenu_C::GetTimePassedFromFirstTapeStamp(int32_t Days)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.GetTimePassedFromFirstTapeStamp");
		
		UUI_MainMenu_C_GetTimePassedFromFirstTapeStamp_Params params {};
		params.Days = Days;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.SetCanEscQuit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanEscQuit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MainMenu_C::SetCanEscQuit(bool CanEscQuit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.SetCanEscQuit");
		
		UUI_MainMenu_C_SetCanEscQuit_Params params {};
		params.CanEscQuit = CanEscQuit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.FadeOut
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.FadeOut");
		
		UUI_MainMenu_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnFailure_1FBF49BF46D9F261BC8273A034EA0D92
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::OnFailure_1FBF49BF46D9F261BC8273A034EA0D92()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnFailure_1FBF49BF46D9F261BC8273A034EA0D92");
		
		UUI_MainMenu_C_OnFailure_1FBF49BF46D9F261BC8273A034EA0D92_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnSuccess_1FBF49BF46D9F261BC8273A034EA0D92
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::OnSuccess_1FBF49BF46D9F261BC8273A034EA0D92()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnSuccess_1FBF49BF46D9F261BC8273A034EA0D92");
		
		UUI_MainMenu_C_OnSuccess_1FBF49BF46D9F261BC8273A034EA0D92_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnFailure_2CFE5ED8482FAE57C3E9BDB514BDB0BB
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::OnFailure_2CFE5ED8482FAE57C3E9BDB514BDB0BB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnFailure_2CFE5ED8482FAE57C3E9BDB514BDB0BB");
		
		UUI_MainMenu_C_OnFailure_2CFE5ED8482FAE57C3E9BDB514BDB0BB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnSuccess_2CFE5ED8482FAE57C3E9BDB514BDB0BB
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::OnSuccess_2CFE5ED8482FAE57C3E9BDB514BDB0BB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnSuccess_2CFE5ED8482FAE57C3E9BDB514BDB0BB");
		
		UUI_MainMenu_C_OnSuccess_2CFE5ED8482FAE57C3E9BDB514BDB0BB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_BugReportButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_BugReportButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_BugReportButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_BugReportButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_Theater_K2Node_ComponentBoundEvent_4_BackReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_UI_Theater_K2Node_ComponentBoundEvent_4_BackReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_Theater_K2Node_ComponentBoundEvent_4_BackReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_Theater_K2Node_ComponentBoundEvent_4_BackReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnInitialized");
		
		UUI_MainMenu_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_MonsterTutorial_K2Node_ComponentBoundEvent_8_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_MonsterTutorial_K2Node_ComponentBoundEvent_8_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_MonsterTutorial_K2Node_ComponentBoundEvent_8_OnReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_MonsterTutorial_K2Node_ComponentBoundEvent_8_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.ReplayMonsterTutorial
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::ReplayMonsterTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ReplayMonsterTutorial");
		
		UUI_MainMenu_C_ReplayMonsterTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.UpdateToyBoxButtonHighlighted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Highlighted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MainMenu_C::UpdateToyBoxButtonHighlighted(bool Highlighted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.UpdateToyBoxButtonHighlighted");
		
		UUI_MainMenu_C_UpdateToyBoxButtonHighlighted_Params params {};
		params.Highlighted = Highlighted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_Credits_K2Node_ComponentBoundEvent_9_CreditsBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_UI_Credits_K2Node_ComponentBoundEvent_9_CreditsBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_Credits_K2Node_ComponentBoundEvent_9_CreditsBack__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_Credits_K2Node_ComponentBoundEvent_9_CreditsBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_12_Mouse Dragged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   DeltaMouse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_12_MouseDragged__DelegateSignature(const struct FVector2D& DeltaMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_12_Mouse Dragged__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_12_MouseDragged__DelegateSignature_Params params {};
		params.DeltaMouse = DeltaMouse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_14_UpdateRotatingCharacter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UpdateRotatingCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_14_UpdateRotatingCharacter__DelegateSignature(bool UpdateRotatingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_14_UpdateRotatingCharacter__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_CustomizeB_K2Node_ComponentBoundEvent_14_UpdateRotatingCharacter__DelegateSignature_Params params {};
		params.UpdateRotatingCharacter = UpdateRotatingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_LinkTree_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_LinkTree_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_LinkTree_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_LinkTree_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_PatchNotes_K2Node_ComponentBoundEvent_17_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_PatchNotes_K2Node_ComponentBoundEvent_17_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_PatchNotes_K2Node_ComponentBoundEvent_17_OnReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_PatchNotes_K2Node_ComponentBoundEvent_17_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ExitPatchNotes_K2Node_ComponentBoundEvent_18_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_ExitPatchNotes_K2Node_ComponentBoundEvent_18_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ExitPatchNotes_K2Node_ComponentBoundEvent_18_OnReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_ExitPatchNotes_K2Node_ComponentBoundEvent_18_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_StatsScreen_K2Node_ComponentBoundEvent_1_Back__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_UI_StatsScreen_K2Node_ComponentBoundEvent_1_Back__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_StatsScreen_K2Node_ComponentBoundEvent_1_Back__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_StatsScreen_K2Node_ComponentBoundEvent_1_Back__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_Shoppy_K2Node_ComponentBoundEvent_0_BackReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_UI_Shoppy_K2Node_ComponentBoundEvent_0_BackReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_Shoppy_K2Node_ComponentBoundEvent_0_BackReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_Shoppy_K2Node_ComponentBoundEvent_0_BackReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_MainmenuSettingsExitButton_K2Node_ComponentBoundEvent_39_SettingsReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_UI_MainmenuSettingsExitButton_K2Node_ComponentBoundEvent_39_SettingsReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_MainmenuSettingsExitButton_K2Node_ComponentBoundEvent_39_SettingsReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_MainmenuSettingsExitButton_K2Node_ComponentBoundEvent_39_SettingsReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_37_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_37_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_37_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_ToyBoxButton_K2Node_ComponentBoundEvent_37_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_TutorialButton_K2Node_ComponentBoundEvent_35_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_TutorialButton_K2Node_ComponentBoundEvent_35_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_TutorialButton_K2Node_ComponentBoundEvent_35_OnReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_TutorialButton_K2Node_ComponentBoundEvent_35_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Credits_K2Node_ComponentBoundEvent_33_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_Credits_K2Node_ComponentBoundEvent_33_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Credits_K2Node_ComponentBoundEvent_33_OnReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_Credits_K2Node_ComponentBoundEvent_33_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Career_K2Node_ComponentBoundEvent_31_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_Career_K2Node_ComponentBoundEvent_31_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Career_K2Node_ComponentBoundEvent_31_OnReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_Career_K2Node_ComponentBoundEvent_31_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Theater_K2Node_ComponentBoundEvent_29_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_Theater_K2Node_ComponentBoundEvent_29_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Theater_K2Node_ComponentBoundEvent_29_OnReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_Theater_K2Node_ComponentBoundEvent_29_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Store_K2Node_ComponentBoundEvent_27_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_Store_K2Node_ComponentBoundEvent_27_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Store_K2Node_ComponentBoundEvent_27_OnReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_Store_K2Node_ComponentBoundEvent_27_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.ReloadTutorial
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::ReloadTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ReloadTutorial");
		
		UUI_MainMenu_C_ReloadTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Customize_K2Node_ComponentBoundEvent_15_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_Customize_K2Node_ComponentBoundEvent_15_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Customize_K2Node_ComponentBoundEvent_15_OnReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_Customize_K2Node_ComponentBoundEvent_15_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Play_K2Node_ComponentBoundEvent_13_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_Play_K2Node_ComponentBoundEvent_13_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Play_K2Node_ComponentBoundEvent_13_OnReleased__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_Play_K2Node_ComponentBoundEvent_13_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MP_MainMenu_New_UI_Play_K2Node_ComponentBoundEvent_7_GoBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MP_MainMenu_New_UI_Play_K2Node_ComponentBoundEvent_7_GoBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MP_MainMenu_New_UI_Play_K2Node_ComponentBoundEvent_7_GoBack__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MP_MainMenu_New_UI_Play_K2Node_ComponentBoundEvent_7_GoBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MP_MainMenu_New_UI_Settings_Menu_K2Node_ComponentBoundEvent_6_Back__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MP_MainMenu_New_UI_Settings_Menu_K2Node_ComponentBoundEvent_6_Back__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MP_MainMenu_New_UI_Settings_Menu_K2Node_ComponentBoundEvent_6_Back__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MP_MainMenu_New_UI_Settings_Menu_K2Node_ComponentBoundEvent_6_Back__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Construct");
		
		UUI_MainMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MP_MainMenu_New_UI_CustomizeB_K2Node_ComponentBoundEvent_3_Back Pressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MP_MainMenu_New_UI_CustomizeB_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MP_MainMenu_New_UI_CustomizeB_K2Node_ComponentBoundEvent_3_Back Pressed__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MP_MainMenu_New_UI_CustomizeB_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MP_MainMenu_New_UI_BattlePassMain_K2Node_ComponentBoundEvent_2_GoBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MP_MainMenu_New_UI_BattlePassMain_K2Node_ComponentBoundEvent_2_GoBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MP_MainMenu_New_UI_BattlePassMain_K2Node_ComponentBoundEvent_2_GoBack__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MP_MainMenu_New_UI_BattlePassMain_K2Node_ComponentBoundEvent_2_GoBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.FadeBack
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::FadeBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.FadeBack");
		
		UUI_MainMenu_C_FadeBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BackToMainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::BackToMainMenu(float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BackToMainMenu");
		
		UUI_MainMenu_C_BackToMainMenu_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.EscapeReleased
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::EscapeReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.EscapeReleased");
		
		UUI_MainMenu_C_EscapeReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.EscapePressed
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::EscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.EscapePressed");
		
		UUI_MainMenu_C_EscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.Return
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::Return(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Return");
		
		UUI_MainMenu_C_Return_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.Fail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::Fail(class UVaRestRequestJSON* Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Fail");
		
		UUI_MainMenu_C_Fail_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.SwitchSelectedScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Camera                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::SwitchSelectedScreen(class UWidget* Widget, float Speed, const class FName& Camera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.SwitchSelectedScreen");
		
		UUI_MainMenu_C_SwitchSelectedScreen_Params params {};
		params.Widget = Widget;
		params.Speed = Speed;
		params.Camera = Camera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Tick");
		
		UUI_MainMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.EventHost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseLAN                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bShouldAdvertise                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowInvites                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::EventHost(bool bUseLAN, bool bShouldAdvertise, bool bAllowInvites, const class FString& Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.EventHost");
		
		UUI_MainMenu_C_EventHost_Params params {};
		params.bUseLAN = bUseLAN;
		params.bShouldAdvertise = bShouldAdvertise;
		params.bAllowInvites = bAllowInvites;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.EventHostNEW
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseLAN                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bShouldAdvertise                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFriendsOnly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::EventHostNEW(bool bUseLAN, bool bShouldAdvertise, bool bFriendsOnly, const class FString& Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.EventHostNEW");
		
		UUI_MainMenu_C_EventHostNEW_Params params {};
		params.bUseLAN = bUseLAN;
		params.bShouldAdvertise = bShouldAdvertise;
		params.bFriendsOnly = bFriendsOnly;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::ExecuteUbergraph_UI_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu");
		
		UUI_MainMenu_C_ExecuteUbergraph_UI_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.MouseDragged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   DeltaMouse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::MouseDragged__DelegateSignature(const struct FVector2D& DeltaMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.MouseDragged__DelegateSignature");
		
		UUI_MainMenu_C_MouseDragged__DelegateSignature_Params params {};
		params.DeltaMouse = DeltaMouse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.UpdateRotatingCharacter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UpdateRotatingCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MainMenu_C::UpdateRotatingCharacter__DelegateSignature(bool UpdateRotatingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.UpdateRotatingCharacter__DelegateSignature");
		
		UUI_MainMenu_C_UpdateRotatingCharacter__DelegateSignature_Params params {};
		params.UpdateRotatingCharacter = UpdateRotatingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.Reset Player Smooth__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::ResetPlayerSmooth__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Reset Player Smooth__DelegateSignature");
		
		UUI_MainMenu_C_ResetPlayerSmooth__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MainMenu.UI_MainMenu_C");
		return ptr;
	}

}


