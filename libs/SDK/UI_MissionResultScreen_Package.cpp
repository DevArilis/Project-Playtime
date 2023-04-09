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
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.SequenceEvent__ENTRYPOINTUI_MissionResultScreen_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BasicButton_C*                           LeaveGame_UI_BasicButton                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionResultScreen_C::SequenceEvent__ENTRYPOINTUI_MissionResultScreen_1(class UUI_BasicButton_C* LeaveGame_UI_BasicButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.SequenceEvent__ENTRYPOINTUI_MissionResultScreen_1");
		
		UUI_MissionResultScreen_C_SequenceEvent__ENTRYPOINTUI_MissionResultScreen_1_Params params {};
		params.LeaveGame_UI_BasicButton = LeaveGame_UI_BasicButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateResultText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ResultText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_MissionResultScreen_C::PopulateResultText(const class FText& ResultText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateResultText");
		
		UUI_MissionResultScreen_C_PopulateResultText_Params params {};
		params.ResultText = ResultText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.Populate XP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            XPGained                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionResultScreen_C::PopulateXP(int32_t XPGained)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.Populate XP");
		
		UUI_MissionResultScreen_C_PopulateXP_Params params {};
		params.XPGained = XPGained;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateMatchResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_EndGameCategory                                  EndGameCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MATCHTIME                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionResultScreen_C::PopulateMatchResult(E_EndGameCategory EndGameCategory, float MATCHTIME)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateMatchResult");
		
		UUI_MissionResultScreen_C_PopulateMatchResult_Params params {};
		params.EndGameCategory = EndGameCategory;
		params.MATCHTIME = MATCHTIME;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.FindHighestRewardingActions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTicketRewardableAction>             InputArray                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            NumOfOutputs                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionResultScreen_C::FindHighestRewardingActions(TArray<struct FTicketRewardableAction>* InputArray, int32_t NumOfOutputs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.FindHighestRewardingActions");
		
		UUI_MissionResultScreen_C_FindHighestRewardingActions_Params params {};
		params.NumOfOutputs = NumOfOutputs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputArray != nullptr)
			*InputArray = params.InputArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateSelf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_MultiplayerPlayerState_C*                MPPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionResultScreen_C::PopulateSelf(class ABP_MultiplayerPlayerState_C* MPPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateSelf");
		
		UUI_MissionResultScreen_C_PopulateSelf_Params params {};
		params.MPPlayerState = MPPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_MultiplayerPlayerState_C*                MultiplayerPlayerState                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionResultScreen_C::PopulateMonster(class ABP_MultiplayerPlayerState_C* MultiplayerPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateMonster");
		
		UUI_MissionResultScreen_C_PopulateMonster_Params params {};
		params.MultiplayerPlayerState = MultiplayerPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateSurvivorList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_MultiplayerPlayerState_C*>        MultiplayerPlayerStates                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_MissionResultScreen_C::PopulateSurvivorList(TArray<class ABP_MultiplayerPlayerState_C*> MultiplayerPlayerStates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.PopulateSurvivorList");
		
		UUI_MissionResultScreen_C_PopulateSurvivorList_Params params {};
		params.MultiplayerPlayerStates = MultiplayerPlayerStates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.OnFailure_50838ADE4199134ED6915E9403F55DB3
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultScreen_C::OnFailure_50838ADE4199134ED6915E9403F55DB3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.OnFailure_50838ADE4199134ED6915E9403F55DB3");
		
		UUI_MissionResultScreen_C_OnFailure_50838ADE4199134ED6915E9403F55DB3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.OnSuccess_50838ADE4199134ED6915E9403F55DB3
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultScreen_C::OnSuccess_50838ADE4199134ED6915E9403F55DB3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.OnSuccess_50838ADE4199134ED6915E9403F55DB3");
		
		UUI_MissionResultScreen_C_OnSuccess_50838ADE4199134ED6915E9403F55DB3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.DontQuit
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultScreen_C::DontQuit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.DontQuit");
		
		UUI_MissionResultScreen_C_DontQuit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.QuitToMenu
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultScreen_C::QuitToMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.QuitToMenu");
		
		UUI_MissionResultScreen_C_QuitToMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.NextMatchTimer
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultScreen_C::NextMatchTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.NextMatchTimer");
		
		UUI_MissionResultScreen_C_NextMatchTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.SetBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Monster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_EndGameCategory                                  EndGameCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionResultScreen_C::SetBackground(ECharacterType Monster, E_EndGameCategory EndGameCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.SetBackground");
		
		UUI_MissionResultScreen_C_SetBackground_Params params {};
		params.Monster = Monster;
		params.EndGameCategory = EndGameCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.ManualSelectSummary
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultScreen_C::ManualSelectSummary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.ManualSelectSummary");
		
		UUI_MissionResultScreen_C_ManualSelectSummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_Q_UI_BasicButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultScreen_C::BndEvt__UI_MissionResultScreen_Q_UI_BasicButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_Q_UI_BasicButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature");
		
		UUI_MissionResultScreen_C_BndEvt__UI_MissionResultScreen_Q_UI_BasicButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_LeaveGame_UI_BasicButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultScreen_C::BndEvt__UI_MissionResultScreen_LeaveGame_UI_BasicButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_LeaveGame_UI_BasicButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature");
		
		UUI_MissionResultScreen_C_BndEvt__UI_MissionResultScreen_LeaveGame_UI_BasicButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_Q_UI_BasicButton_1_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultScreen_C::BndEvt__UI_MissionResultScreen_Q_UI_BasicButton_1_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_Q_UI_BasicButton_1_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature");
		
		UUI_MissionResultScreen_C_BndEvt__UI_MissionResultScreen_Q_UI_BasicButton_1_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultScreen_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.OnInitialized");
		
		UUI_MissionResultScreen_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_Summary_UI_BasicButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultScreen_C::BndEvt__UI_MissionResultScreen_Summary_UI_BasicButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_Summary_UI_BasicButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");
		
		UUI_MissionResultScreen_C_BndEvt__UI_MissionResultScreen_Summary_UI_BasicButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_Scoreboard_UI_BasicButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultScreen_C::BndEvt__UI_MissionResultScreen_Scoreboard_UI_BasicButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.BndEvt__UI_MissionResultScreen_Scoreboard_UI_BasicButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature");
		
		UUI_MissionResultScreen_C_BndEvt__UI_MissionResultScreen_Scoreboard_UI_BasicButton_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MissionResultScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.PreConstruct");
		
		UUI_MissionResultScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.LeaveGame_UI_BasicButton_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BasicButton_C*                           LeaveGame_UI_BasicButton                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionResultScreen_C::LeaveGame_UI_BasicButton_Event_1(class UUI_BasicButton_C* LeaveGame_UI_BasicButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.LeaveGame_UI_BasicButton_Event_1");
		
		UUI_MissionResultScreen_C_LeaveGame_UI_BasicButton_Event_1_Params params {};
		params.LeaveGame_UI_BasicButton = LeaveGame_UI_BasicButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.ManualSelectScoreboard
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultScreen_C::ManualSelectScoreboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.ManualSelectScoreboard");
		
		UUI_MissionResultScreen_C_ManualSelectScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultScreen.UI_MissionResultScreen_C.ExecuteUbergraph_UI_MissionResultScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionResultScreen_C::ExecuteUbergraph_UI_MissionResultScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultScreen.UI_MissionResultScreen_C.ExecuteUbergraph_UI_MissionResultScreen");
		
		UUI_MissionResultScreen_C_ExecuteUbergraph_UI_MissionResultScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MissionResultScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MissionResultScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MissionResultScreen.UI_MissionResultScreen_C");
		return ptr;
	}

}


