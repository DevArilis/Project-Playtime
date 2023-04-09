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
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.Get_PlayersText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_WalkableLobby_C::Get_PlayersText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.Get_PlayersText_Text_1");
		
		UUI_WalkableLobby_C_Get_PlayersText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_WalkableLobby_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.Construct");
		
		UUI_WalkableLobby_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.SetReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ready                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_WalkableLobby_C::SetReady(bool Ready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.SetReady");
		
		UUI_WalkableLobby_C_SetReady_Params params {};
		params.Ready = Ready;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.Update Lobby
	 * 		Flags  -> ()
	 */
	void UUI_WalkableLobby_C::UpdateLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.Update Lobby");
		
		UUI_WalkableLobby_C_UpdateLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.StartGameAnim
	 * 		Flags  -> ()
	 */
	void UUI_WalkableLobby_C::StartGameAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.StartGameAnim");
		
		UUI_WalkableLobby_C_StartGameAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.EventSwitchCustomization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewCustomizing                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_WalkableLobby_C::EventSwitchCustomization(bool NewCustomizing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.EventSwitchCustomization");
		
		UUI_WalkableLobby_C_EventSwitchCustomization_Params params {};
		params.NewCustomizing = NewCustomizing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.BndEvt__UI_WalkableLobby_CosmeticButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MP_N_MenuButton_C*                       Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WalkableLobby_C::BndEvt__UI_WalkableLobby_CosmeticButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(class UUI_MP_N_MenuButton_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.BndEvt__UI_WalkableLobby_CosmeticButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature");
		
		UUI_WalkableLobby_C_BndEvt__UI_WalkableLobby_CosmeticButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.BndEvt__UI_WalkableLobby_ReadyButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MP_N_MenuButton_C*                       Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WalkableLobby_C::BndEvt__UI_WalkableLobby_ReadyButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature(class UUI_MP_N_MenuButton_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.BndEvt__UI_WalkableLobby_ReadyButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature");
		
		UUI_WalkableLobby_C_BndEvt__UI_WalkableLobby_ReadyButton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_WalkableLobby_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.OnInitialized");
		
		UUI_WalkableLobby_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.Event Show Emotes
	 * 		Flags  -> ()
	 */
	void UUI_WalkableLobby_C::EventShowEmotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.Event Show Emotes");
		
		UUI_WalkableLobby_C_EventShowEmotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WalkableLobby_C::BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature");
		
		UUI_WalkableLobby_C_BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_WalkableLobby_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.Destruct");
		
		UUI_WalkableLobby_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.BndEvt__UI_WalkableLobby_UI_Customize_K2Node_ComponentBoundEvent_3_ChangedAppearance__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_WalkableLobby_C::BndEvt__UI_WalkableLobby_UI_Customize_K2Node_ComponentBoundEvent_3_ChangedAppearance__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.BndEvt__UI_WalkableLobby_UI_Customize_K2Node_ComponentBoundEvent_3_ChangedAppearance__DelegateSignature");
		
		UUI_WalkableLobby_C_BndEvt__UI_WalkableLobby_UI_Customize_K2Node_ComponentBoundEvent_3_ChangedAppearance__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.UpdateQueueState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MonsterQueue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_WalkableLobby_C::UpdateQueueState(bool MonsterQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.UpdateQueueState");
		
		UUI_WalkableLobby_C_UpdateQueueState_Params params {};
		params.MonsterQueue = MonsterQueue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.UpdateQueueInfo
	 * 		Flags  -> ()
	 */
	void UUI_WalkableLobby_C::UpdateQueueInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.UpdateQueueInfo");
		
		UUI_WalkableLobby_C_UpdateQueueInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.GameStartCountdownTimer
	 * 		Flags  -> ()
	 */
	void UUI_WalkableLobby_C::GameStartCountdownTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.GameStartCountdownTimer");
		
		UUI_WalkableLobby_C_GameStartCountdownTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WalkableLobby.UI_WalkableLobby_C.ExecuteUbergraph_UI_WalkableLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WalkableLobby_C::ExecuteUbergraph_UI_WalkableLobby(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WalkableLobby.UI_WalkableLobby_C.ExecuteUbergraph_UI_WalkableLobby");
		
		UUI_WalkableLobby_C_ExecuteUbergraph_UI_WalkableLobby_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_WalkableLobby_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WalkableLobby_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_WalkableLobby.UI_WalkableLobby_C");
		return ptr;
	}

}


