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
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.Get_StarterObjective_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_SurvivorHUD_C::Get_StarterObjective_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.Get_StarterObjective_Text_1");
		
		UUI_SurvivorHUD_C_Get_StarterObjective_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.AbilityInit
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::AbilityInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.AbilityInit");
		
		UUI_SurvivorHUD_C_AbilityInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.Update Secondary Obj
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESecondaryObjectives                               NewObjective                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SurvivorHUD_C::UpdateSecondaryObj(ESecondaryObjectives NewObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.Update Secondary Obj");
		
		UUI_SurvivorHUD_C_UpdateSecondaryObj_Params params {};
		params.NewObjective = NewObjective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.ConvertTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeToConvert                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ConvertedTime                                              (Parm, OutParm)
	 */
	void UUI_SurvivorHUD_C::ConvertTime(float TimeToConvert, class FText* ConvertedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.ConvertTime");
		
		UUI_SurvivorHUD_C_ConvertTime_Params params {};
		params.TimeToConvert = TimeToConvert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConvertedTime != nullptr)
			*ConvertedTime = params.ConvertedTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.HideHP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SurvivorHUD_C::HideHP(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.HideHP");
		
		UUI_SurvivorHUD_C_HideHP_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.UpdateHealth
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::UpdateHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.UpdateHealth");
		
		UUI_SurvivorHUD_C_UpdateHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.UpdatePlayersHoldingToy
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::UpdatePlayersHoldingToy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.UpdatePlayersHoldingToy");
		
		UUI_SurvivorHUD_C_UpdatePlayersHoldingToy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.LoadToys
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::LoadToys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.LoadToys");
		
		UUI_SurvivorHUD_C_LoadToys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.HowManyBoolsTrue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	int32_t UUI_SurvivorHUD_C::HowManyBoolsTrue(TArray<bool>* Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.HowManyBoolsTrue");
		
		UUI_SurvivorHUD_C_HowManyBoolsTrue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Input != nullptr)
			*Input = params.Input;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.Set Toy Collected UI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      DefaultToyImage                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  CollectedToyImage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCollected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UImage*                                      ToyPartBG                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      ToyHighlight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SurvivorHUD_C::SetToyCollectedUI(class UImage* DefaultToyImage, class UTexture2D* CollectedToyImage, bool IsCollected, class UImage* ToyPartBG, class UImage* ToyHighlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.Set Toy Collected UI");
		
		UUI_SurvivorHUD_C_SetToyCollectedUI_Params params {};
		params.DefaultToyImage = DefaultToyImage;
		params.CollectedToyImage = CollectedToyImage;
		params.IsCollected = IsCollected;
		params.ToyPartBG = ToyPartBG;
		params.ToyHighlight = ToyHighlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.HideToys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldHide                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SurvivorHUD_C::HideToys(bool ShouldHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.HideToys");
		
		UUI_SurvivorHUD_C_HideToys_Params params {};
		params.ShouldHide = ShouldHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.UpdateToyPartsUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       ToysFound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_SurvivorHUD_C::UpdateToyPartsUI(TArray<bool>* ToysFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.UpdateToyPartsUI");
		
		UUI_SurvivorHUD_C_UpdateToyPartsUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToysFound != nullptr)
			*ToysFound = params.ToysFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.InitToyImages
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::InitToyImages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.InitToyImages");
		
		UUI_SurvivorHUD_C_InitToyImages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.SetToyImages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Toy1                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Toy2                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Toy3                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Toy4                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Toy5                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Toy6                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SurvivorHUD_C::SetToyImages(class UTexture2D* Toy1, class UTexture2D* Toy2, class UTexture2D* Toy3, class UTexture2D* Toy4, class UTexture2D* Toy5, class UTexture2D* Toy6)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.SetToyImages");
		
		UUI_SurvivorHUD_C_SetToyImages_Params params {};
		params.Toy1 = Toy1;
		params.Toy2 = Toy2;
		params.Toy3 = Toy3;
		params.Toy4 = Toy4;
		params.Toy5 = Toy5;
		params.Toy6 = Toy6;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.AnimateInit
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::AnimateInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.AnimateInit");
		
		UUI_SurvivorHUD_C_AnimateInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.PlayHandAnimation
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::PlayHandAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.PlayHandAnimation");
		
		UUI_SurvivorHUD_C_PlayHandAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.UpdateCrosshair
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::UpdateCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.UpdateCrosshair");
		
		UUI_SurvivorHUD_C_UpdateCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SurvivorHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.Tick");
		
		UUI_SurvivorHUD_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.Construct");
		
		UUI_SurvivorHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.GetPlayerReference
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::GetPlayerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.GetPlayerReference");
		
		UUI_SurvivorHUD_C_GetPlayerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.StartAutoReviving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SurvivorHUD_C::StartAutoReviving(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.StartAutoReviving");
		
		UUI_SurvivorHUD_C_StartAutoReviving_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.ShowStrikes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Strikes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SurvivorHUD_C::ShowStrikes(int32_t Strikes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.ShowStrikes");
		
		UUI_SurvivorHUD_C_ShowStrikes_Params params {};
		params.Strikes = Strikes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.Event Show Emotes
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::EventShowEmotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.Event Show Emotes");
		
		UUI_SurvivorHUD_C_EventShowEmotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.OnInitialized");
		
		UUI_SurvivorHUD_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.AllToysAcquired
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::AllToysAcquired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.AllToysAcquired");
		
		UUI_SurvivorHUD_C_AllToysAcquired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.SetNonEssentialHUDVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SurvivorHUD_C::SetNonEssentialHUDVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.SetNonEssentialHUDVisibility");
		
		UUI_SurvivorHUD_C_SetNonEssentialHUDVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SurvivorHUD_C::BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature");
		
		UUI_SurvivorHUD_C_BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SurvivorHUD_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.PreConstruct");
		
		UUI_SurvivorHUD_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.Destruct");
		
		UUI_SurvivorHUD_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.ShowMonsterReleasedSplash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Monster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SurvivorHUD_C::ShowMonsterReleasedSplash(ECharacterType Monster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.ShowMonsterReleasedSplash");
		
		UUI_SurvivorHUD_C_ShowMonsterReleasedSplash_Params params {};
		params.Monster = Monster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.OnDeath
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::OnDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.OnDeath");
		
		UUI_SurvivorHUD_C_OnDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.PrimaryObjectiveAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ObjName                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_SurvivorHUD_C::PrimaryObjectiveAnim(const class FText& ObjName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.PrimaryObjectiveAnim");
		
		UUI_SurvivorHUD_C_PrimaryObjectiveAnim_Params params {};
		params.ObjName = ObjName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.ChangePrimObjective
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::ChangePrimObjective()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.ChangePrimObjective");
		
		UUI_SurvivorHUD_C_ChangePrimObjective_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.StartAFKKickTimer
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::StartAFKKickTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.StartAFKKickTimer");
		
		UUI_SurvivorHUD_C_StartAFKKickTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.SetAFKTimerText
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::SetAFKTimerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.SetAFKTimerText");
		
		UUI_SurvivorHUD_C_SetAFKTimerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.EndAFKKickTimer
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::EndAFKKickTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.EndAFKKickTimer");
		
		UUI_SurvivorHUD_C_EndAFKKickTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.SetCheckmarkVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SurvivorHUD_C::SetCheckmarkVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.SetCheckmarkVisibility");
		
		UUI_SurvivorHUD_C_SetCheckmarkVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.ShowSuccessfulRevive
	 * 		Flags  -> ()
	 */
	void UUI_SurvivorHUD_C::ShowSuccessfulRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.ShowSuccessfulRevive");
		
		UUI_SurvivorHUD_C_ShowSuccessfulRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SurvivorHUD.UI_SurvivorHUD_C.ExecuteUbergraph_UI_SurvivorHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SurvivorHUD_C::ExecuteUbergraph_UI_SurvivorHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SurvivorHUD.UI_SurvivorHUD_C.ExecuteUbergraph_UI_SurvivorHUD");
		
		UUI_SurvivorHUD_C_ExecuteUbergraph_UI_SurvivorHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SurvivorHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SurvivorHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SurvivorHUD.UI_SurvivorHUD_C");
		return ptr;
	}

}


