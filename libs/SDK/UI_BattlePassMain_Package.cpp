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
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.Get_XPToNextTierText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_BattlePassMain_C::Get_XPToNextTierText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.Get_XPToNextTierText_Text_1");
		
		UUI_BattlePassMain_C_Get_XPToNextTierText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.Get_RewardsProgressText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_BattlePassMain_C::Get_RewardsProgressText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.Get_RewardsProgressText_Text_1");
		
		UUI_BattlePassMain_C_Get_RewardsProgressText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.HandleOwningBattlepass
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::HandleOwningBattlepass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.HandleOwningBattlepass");
		
		UUI_BattlePassMain_C_HandleOwningBattlepass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.CheckIfUserOwnsBattlepass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamItemDetails>                   SteamItems                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_BattlePassMain_C::CheckIfUserOwnsBattlepass(TArray<struct FSteamItemDetails>* SteamItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.CheckIfUserOwnsBattlepass");
		
		UUI_BattlePassMain_C_CheckIfUserOwnsBattlepass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamItems != nullptr)
			*SteamItems = params.SteamItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.GetMainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MainMenu_C*                              Menu                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BattlePassMain_C::GetMainMenu(class UUI_MainMenu_C** Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.GetMainMenu");
		
		UUI_BattlePassMain_C_GetMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Menu != nullptr)
			*Menu = params.Menu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.SetOtherVisibleFields
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::SetOtherVisibleFields()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.SetOtherVisibleFields");
		
		UUI_BattlePassMain_C_SetOtherVisibleFields_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.GetPassID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PassID                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool UUI_BattlePassMain_C::GetPassID(class FString* PassID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.GetPassID");
		
		UUI_BattlePassMain_C_GetPassID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PassID != nullptr)
			*PassID = params.PassID;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.SetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASkeletalMeshActor*                          Monster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_MonsterAndPlayerMenuCharacter_C*         PlayerMonsterMenuCharacter                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BattlePassMain_C::SetCharacter(class ABP_NetworkCharacter_C* Character, class ASkeletalMeshActor* Monster, class ABP_MonsterAndPlayerMenuCharacter_C* PlayerMonsterMenuCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.SetCharacter");
		
		UUI_BattlePassMain_C_SetCharacter_Params params {};
		params.Character = Character;
		params.Monster = Monster;
		params.PlayerMonsterMenuCharacter = PlayerMonsterMenuCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.GetBarProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            XP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UUI_BattlePassMain_C::GetBarProgress(int32_t XP, int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.GetBarProgress");
		
		UUI_BattlePassMain_C_GetBarProgress_Params params {};
		params.XP = XP;
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.SetPreviewID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PreviewID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Paid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BattlePassMain_C::SetPreviewID(int32_t PreviewID, bool Paid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.SetPreviewID");
		
		UUI_BattlePassMain_C_SetPreviewID_Params params {};
		params.PreviewID = PreviewID;
		params.Paid = Paid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.UpdateBottomPages
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::UpdateBottomPages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.UpdateBottomPages");
		
		UUI_BattlePassMain_C_UpdateBottomPages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.SetPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BattlePassMain_C::SetPage(int32_t NewPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.SetPage");
		
		UUI_BattlePassMain_C_SetPage_Params params {};
		params.NewPage = NewPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.InitAnimation
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::InitAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.InitAnimation");
		
		UUI_BattlePassMain_C_InitAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.Reset Preview Cosmetics
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::ResetPreviewCosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.Reset Preview Cosmetics");
		
		UUI_BattlePassMain_C_ResetPreviewCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_closeButton_1_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MP_N_MenuButton_New_C*                   Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BattlePassMain_C::BndEvt__UI_BattlePassMain_closeButton_1_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(class UUI_MP_N_MenuButton_New_C* Caller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_closeButton_1_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature");
		
		UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_closeButton_1_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.Close
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.Close");
		
		UUI_BattlePassMain_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.OnInitialized");
		
		UUI_BattlePassMain_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.OpenBattlePass
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::OpenBattlePass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.OpenBattlePass");
		
		UUI_BattlePassMain_C_OpenBattlePass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_Button_99_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::BndEvt__UI_BattlePassMain_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature");
		
		UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_UI_BackButton_K2Node_ComponentBoundEvent_2_Released__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_LButtonMain_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::BndEvt__UI_BattlePassMain_LButtonMain_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_LButtonMain_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_LButtonMain_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_RButtonMain_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::BndEvt__UI_BattlePassMain_RButtonMain_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_RButtonMain_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_RButtonMain_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_LArrowSmall_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::BndEvt__UI_BattlePassMain_LArrowSmall_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_LArrowSmall_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_LArrowSmall_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_RArrowSmall_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::BndEvt__UI_BattlePassMain_RArrowSmall_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_RArrowSmall_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_RArrowSmall_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");
		
		UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_BattlePassMain_C_BndEvt__UI_BattlePassMain_Button_192_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BattlePassMain_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.Tick");
		
		UUI_BattlePassMain_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.RefreshBattlepassOwnership
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::RefreshBattlepassOwnership()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.RefreshBattlepassOwnership");
		
		UUI_BattlePassMain_C_RefreshBattlepassOwnership_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.FoundSteamInventory
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::FoundSteamInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.FoundSteamInventory");
		
		UUI_BattlePassMain_C_FoundSteamInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.OnXPUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            XP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BattlePassMain_C::OnXPUpdate(int32_t XP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.OnXPUpdate");
		
		UUI_BattlePassMain_C_OnXPUpdate_Params params {};
		params.XP = XP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.SetOwnershipLoading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OwnershipLoading                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BattlePassMain_C::SetOwnershipLoading(bool OwnershipLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.SetOwnershipLoading");
		
		UUI_BattlePassMain_C_SetOwnershipLoading_Params params {};
		params.OwnershipLoading = OwnershipLoading;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.HideBuy
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::HideBuy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.HideBuy");
		
		UUI_BattlePassMain_C_HideBuy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.ExecuteUbergraph_UI_BattlePassMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BattlePassMain_C::ExecuteUbergraph_UI_BattlePassMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.ExecuteUbergraph_UI_BattlePassMain");
		
		UUI_BattlePassMain_C_ExecuteUbergraph_UI_BattlePassMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BattlePassMain.UI_BattlePassMain_C.GoBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_BattlePassMain_C::GoBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BattlePassMain.UI_BattlePassMain_C.GoBack__DelegateSignature");
		
		UUI_BattlePassMain_C_GoBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BattlePassMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BattlePassMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BattlePassMain.UI_BattlePassMain_C");
		return ptr;
	}

}


