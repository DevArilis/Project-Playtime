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
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetMonsterSkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCosmetic                                   Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimationAsset*                             Anim                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               DefaultSkin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_N_BattlePassTierMain_C::SetMonsterSkin(const struct FCosmetic& Item, float Scale, class UAnimationAsset* Anim, class USkeletalMesh* DefaultSkin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetMonsterSkin");
		
		UUI_N_BattlePassTierMain_C_SetMonsterSkin_Params params {};
		params.Item = Item;
		params.Scale = Scale;
		params.Anim = Anim;
		params.DefaultSkin = DefaultSkin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetPreviewCharacter
	 * 		Flags  -> ()
	 */
	void UUI_N_BattlePassTierMain_C::SetPreviewCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetPreviewCharacter");
		
		UUI_N_BattlePassTierMain_C_SetPreviewCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.IsCoins
	 * 		Flags  -> ()
	 */
	bool UUI_N_BattlePassTierMain_C::IsCoins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.IsCoins");
		
		UUI_N_BattlePassTierMain_C_IsCoins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetOutfit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    Bundle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_N_BattlePassTierMain_C::SetOutfit(TArray<int32_t>* Bundle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetOutfit");
		
		UUI_N_BattlePassTierMain_C_SetOutfit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bundle != nullptr)
			*Bundle = params.Bundle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetUnlockedByXP
	 * 		Flags  -> ()
	 */
	void UUI_N_BattlePassTierMain_C::SetUnlockedByXP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetUnlockedByXP");
		
		UUI_N_BattlePassTierMain_C_SetUnlockedByXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.DeactivateActiveCards
	 * 		Flags  -> ()
	 */
	void UUI_N_BattlePassTierMain_C::DeactivateActiveCards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.DeactivateActiveCards");
		
		UUI_N_BattlePassTierMain_C_DeactivateActiveCards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_N_BattlePassTierMain_C::SetActive(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetActive");
		
		UUI_N_BattlePassTierMain_C_SetActive_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BattlePassMain_C*                        Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_N_BattlePassTierMain_C::SetPage(int32_t Page, class UUI_BattlePassMain_C* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.SetPage");
		
		UUI_N_BattlePassTierMain_C_SetPage_Params params {};
		params.Page = Page;
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.UpdateItemStyle
	 * 		Flags  -> ()
	 */
	void UUI_N_BattlePassTierMain_C::UpdateItemStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.UpdateItemStyle");
		
		UUI_N_BattlePassTierMain_C_UpdateItemStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.UpdateItemData
	 * 		Flags  -> ()
	 */
	void UUI_N_BattlePassTierMain_C::UpdateItemData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.UpdateItemData");
		
		UUI_N_BattlePassTierMain_C_UpdateItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_N_BattlePassTierMain_C::BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_N_BattlePassTierMain_C_BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_N_BattlePassTierMain_C::BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_N_BattlePassTierMain_C_BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_N_BattlePassTierMain_C::BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_N_BattlePassTierMain_C_BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.ExecuteUbergraph_UI_N_BattlePassTierMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_N_BattlePassTierMain_C::ExecuteUbergraph_UI_N_BattlePassTierMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C.ExecuteUbergraph_UI_N_BattlePassTierMain");
		
		UUI_N_BattlePassTierMain_C_ExecuteUbergraph_UI_N_BattlePassTierMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_N_BattlePassTierMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_N_BattlePassTierMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_N_BattlePassTierMain.UI_N_BattlePassTierMain_C");
		return ptr;
	}

}


