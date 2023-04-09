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
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Is Host
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Host                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlaytimeFunctionLibrary_C::IsHost(class UObject* __WorldContext, bool* Host)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Is Host");
		
		UPlaytimeFunctionLibrary_C_IsHost_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Host != nullptr)
			*Host = params.Host;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetEventInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPlaytimeEvent                              EventInfo                                                  (Parm, OutParm)
	 * 		bool                                               IsEventActive                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlaytimeFunctionLibrary_C::GetEventInfo(class UObject* __WorldContext, struct FPlaytimeEvent* EventInfo, bool* IsEventActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetEventInfo");
		
		UPlaytimeFunctionLibrary_C_GetEventInfo_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventInfo != nullptr)
			*EventInfo = params.EventInfo;
		if (IsEventActive != nullptr)
			*IsEventActive = params.IsEventActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Get Date Time from API Time
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      APITime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::GetDateTimefromAPITime(const class FString& APITime, class UObject* __WorldContext, struct FDateTime* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Get Date Time from API Time");
		
		UPlaytimeFunctionLibrary_C_GetDateTimefromAPITime_Params params {};
		params.APITime = APITime;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.SaveCosmeticPresetStructToCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     Character                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPresetSlot                                 Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::SaveCosmeticPresetStructToCharacter(ECharacterType Character, const struct FPresetSlot& Preset, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.SaveCosmeticPresetStructToCharacter");
		
		UPlaytimeFunctionLibrary_C_SaveCosmeticPresetStructToCharacter_Params params {};
		params.Character = Character;
		params.Preset = Preset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.CrossReferenceCosmeticsWithSteamInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPresetSlot                                 UnverifiedCosmetics                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FSteamItemDetails>                   SteamItems                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CosmeticsOwned                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlaytimeFunctionLibrary_C::CrossReferenceCosmeticsWithSteamInventory(const struct FPresetSlot& UnverifiedCosmetics, TArray<struct FSteamItemDetails> SteamItems, class UObject* __WorldContext, bool* CosmeticsOwned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.CrossReferenceCosmeticsWithSteamInventory");
		
		UPlaytimeFunctionLibrary_C_CrossReferenceCosmeticsWithSteamInventory_Params params {};
		params.UnverifiedCosmetics = UnverifiedCosmetics;
		params.SteamItems = SteamItems;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CosmeticsOwned != nullptr)
			*CosmeticsOwned = params.CosmeticsOwned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetPlaytimeVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Version                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::GetPlaytimeVersion(class UObject* __WorldContext, class FString* Version)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetPlaytimeVersion");
		
		UPlaytimeFunctionLibrary_C_GetPlaytimeVersion_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Version != nullptr)
			*Version = params.Version;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.RefreshTicketCountDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::RefreshTicketCountDisplay(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.RefreshTicketCountDisplay");
		
		UPlaytimeFunctionLibrary_C_RefreshTicketCountDisplay_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetCharacterDescriptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     CurrentChar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Description                                                (Parm, OutParm)
	 */
	void UPlaytimeFunctionLibrary_C::GetCharacterDescriptions(ECharacterType CurrentChar, class UObject* __WorldContext, class FText* Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetCharacterDescriptions");
		
		UPlaytimeFunctionLibrary_C_GetCharacterDescriptions_Params params {};
		params.CurrentChar = CurrentChar;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Description != nullptr)
			*Description = params.Description;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetKeyBinds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InputAction1                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InputAction2                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        AbilityKey1                                                (Parm, OutParm)
	 * 		class FText                                        AbilityKey2                                                (Parm, OutParm)
	 */
	void UPlaytimeFunctionLibrary_C::GetKeyBinds(const class FName& InputAction1, const class FName& InputAction2, class UObject* __WorldContext, class FText* AbilityKey1, class FText* AbilityKey2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetKeyBinds");
		
		UPlaytimeFunctionLibrary_C_GetKeyBinds_Params params {};
		params.InputAction1 = InputAction1;
		params.InputAction2 = InputAction2;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AbilityKey1 != nullptr)
			*AbilityKey1 = params.AbilityKey1;
		if (AbilityKey2 != nullptr)
			*AbilityKey2 = params.AbilityKey2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Enough Space for Jumpscare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMonster_Type                                      MonsterType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACharacter*                                  MonsterCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DistanceFromMonster                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlaytimeFunctionLibrary_C::EnoughSpaceforJumpscare(EMonster_Type MonsterType, class ACharacter* MonsterCharacter, float DistanceFromMonster, class UObject* __WorldContext, bool* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Enough Space for Jumpscare");
		
		UPlaytimeFunctionLibrary_C_EnoughSpaceforJumpscare_Params params {};
		params.MonsterType = MonsterType;
		params.MonsterCharacter = MonsterCharacter;
		params.DistanceFromMonster = DistanceFromMonster;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetStoredSessionName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      SessionName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlaytimeFunctionLibrary_C::GetStoredSessionName(class UObject* __WorldContext, class FString* SessionName, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetStoredSessionName");
		
		UPlaytimeFunctionLibrary_C_GetStoredSessionName_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SessionName != nullptr)
			*SessionName = params.SessionName;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.CosmeticBelongsToToECharacterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_CosmeticBelongsTo                                In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterType                                     Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::CosmeticBelongsToToECharacterType(E_CosmeticBelongsTo In, class UObject* __WorldContext, ECharacterType* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.CosmeticBelongsToToECharacterType");
		
		UPlaytimeFunctionLibrary_C_CosmeticBelongsToToECharacterType_Params params {};
		params.In = In;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.ECharacterTypeToCosmeticBelongsTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterType                                     In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_CosmeticBelongsTo                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::ECharacterTypeToCosmeticBelongsTo(ECharacterType In, class UObject* __WorldContext, E_CosmeticBelongsTo* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.ECharacterTypeToCosmeticBelongsTo");
		
		UPlaytimeFunctionLibrary_C_ECharacterTypeToCosmeticBelongsTo_Params params {};
		params.In = In;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.LoadTapes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   FirstTapeDate                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<int32_t> UPlaytimeFunctionLibrary_C::LoadTapes(class UObject* __WorldContext, struct FDateTime* FirstTapeDate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.LoadTapes");
		
		UPlaytimeFunctionLibrary_C_LoadTapes_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FirstTapeDate != nullptr)
			*FirstTapeDate = params.FirstTapeDate;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.SaveTapes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewTapeID                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   TapeDate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::SaveTapes(int32_t NewTapeID, const struct FDateTime& TapeDate, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.SaveTapes");
		
		UPlaytimeFunctionLibrary_C_SaveTapes_Params params {};
		params.NewTapeID = NewTapeID;
		params.TapeDate = TapeDate;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.DisplayMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::DisplayMessage(const class FString& Message, bool Error, class UObject* From, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.DisplayMessage");
		
		UPlaytimeFunctionLibrary_C_DisplayMessage_Params params {};
		params.Message = Message;
		params.Error = Error;
		params.From = From;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.PostXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Success                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              Fail                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::PostXP(int32_t PlayerCount, const class FScriptDelegate& Success, const class FScriptDelegate& Fail, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.PostXP");
		
		UPlaytimeFunctionLibrary_C_PostXP_Params params {};
		params.PlayerCount = PlayerCount;
		params.Success = Success;
		params.Fail = Fail;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.RunAdvancedGetRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      HeaderName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      HeaderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Success                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              Fail                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::RunAdvancedGetRequest(const class FString& HeaderName, const class FString& HeaderValue, const class FString& URL, const class FScriptDelegate& Success, const class FScriptDelegate& Fail, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.RunAdvancedGetRequest");
		
		UPlaytimeFunctionLibrary_C_RunAdvancedGetRequest_Params params {};
		params.HeaderName = HeaderName;
		params.HeaderValue = HeaderValue;
		params.URL = URL;
		params.Success = Success;
		params.Fail = Fail;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetStateValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            XP                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      BattlepassResponse                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool UPlaytimeFunctionLibrary_C::GetStateValues(class UObject* __WorldContext, int32_t* XP, class FString* BattlepassResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetStateValues");
		
		UPlaytimeFunctionLibrary_C_GetStateValues_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (XP != nullptr)
			*XP = params.XP;
		if (BattlepassResponse != nullptr)
			*BattlepassResponse = params.BattlepassResponse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Set State XP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            XP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPlaytimeFunctionLibrary_C::SetStateXP(int32_t XP, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Set State XP");
		
		UPlaytimeFunctionLibrary_C_SetStateXP_Params params {};
		params.XP = XP;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Set State Season Pass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPlaytimeFunctionLibrary_C::SetStateSeasonPass(const class FString& Response, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Set State Season Pass");
		
		UPlaytimeFunctionLibrary_C_SetStateSeasonPass_Params params {};
		params.Response = Response;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Convert XP to Tier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            XP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UPlaytimeFunctionLibrary_C::ConvertXPtoTier(int32_t XP, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Convert XP to Tier");
		
		UPlaytimeFunctionLibrary_C_ConvertXPtoTier_Params params {};
		params.XP = XP;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Convert XP to Progress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            XP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutOf15                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UPlaytimeFunctionLibrary_C::ConvertXPtoProgress(int32_t XP, class UObject* __WorldContext, int32_t* OutOf15)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Convert XP to Progress");
		
		UPlaytimeFunctionLibrary_C_ConvertXPtoProgress_Params params {};
		params.XP = XP;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOf15 != nullptr)
			*OutOf15 = params.OutOf15;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetAuthToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      AuthToken                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool UPlaytimeFunctionLibrary_C::GetAuthToken(class UObject* __WorldContext, class FString* AuthToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetAuthToken");
		
		UPlaytimeFunctionLibrary_C_GetAuthToken_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AuthToken != nullptr)
			*AuthToken = params.AuthToken;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Get Playtime Authentication Header
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UPlaytimeFunctionLibrary_C::GetPlaytimeAuthenticationHeader(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Get Playtime Authentication Header");
		
		UPlaytimeFunctionLibrary_C_GetPlaytimeAuthenticationHeader_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Get Playtime API URL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UPlaytimeFunctionLibrary_C::GetPlaytimeAPIURL(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Get Playtime API URL");
		
		UPlaytimeFunctionLibrary_C_GetPlaytimeAPIURL_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.RunSimpleGetRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Success                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              Fail                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::RunSimpleGetRequest(const class FString& URL, const class FScriptDelegate& Success, const class FScriptDelegate& Fail, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.RunSimpleGetRequest");
		
		UPlaytimeFunctionLibrary_C_RunSimpleGetRequest_Params params {};
		params.URL = URL;
		params.Success = Success;
		params.Fail = Fail;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.RunIntegerPostRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      HeaderName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      HeaderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              JSONKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    JSONValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Success                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              Fail                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::RunIntegerPostRequest(const class FString& HeaderName, const class FString& HeaderValue, TArray<class FString>* JSONKey, TArray<int32_t>* JSONValue, const class FString& URL, const class FScriptDelegate& Success, const class FScriptDelegate& Fail, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.RunIntegerPostRequest");
		
		UPlaytimeFunctionLibrary_C_RunIntegerPostRequest_Params params {};
		params.HeaderName = HeaderName;
		params.HeaderValue = HeaderValue;
		params.URL = URL;
		params.Success = Success;
		params.Fail = Fail;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (JSONKey != nullptr)
			*JSONKey = params.JSONKey;
		if (JSONValue != nullptr)
			*JSONValue = params.JSONValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.RunAdvancedPostRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      HeaderName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      HeaderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              JSONFields                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FString>                              JSONValues                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Success                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              Fail                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::RunAdvancedPostRequest(const class FString& HeaderName, const class FString& HeaderValue, TArray<class FString>* JSONFields, TArray<class FString>* JSONValues, const class FString& URL, const class FScriptDelegate& Success, const class FScriptDelegate& Fail, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.RunAdvancedPostRequest");
		
		UPlaytimeFunctionLibrary_C_RunAdvancedPostRequest_Params params {};
		params.HeaderName = HeaderName;
		params.HeaderValue = HeaderValue;
		params.URL = URL;
		params.Success = Success;
		params.Fail = Fail;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (JSONFields != nullptr)
			*JSONFields = params.JSONFields;
		if (JSONValues != nullptr)
			*JSONValues = params.JSONValues;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.RunSimplePostRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              JSONFields                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FString>                              JSONValues                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Success                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              Fail                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::RunSimplePostRequest(TArray<class FString>* JSONFields, TArray<class FString>* JSONValues, const class FString& URL, const class FScriptDelegate& Success, const class FScriptDelegate& Fail, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.RunSimplePostRequest");
		
		UPlaytimeFunctionLibrary_C_RunSimplePostRequest_Params params {};
		params.URL = URL;
		params.Success = Success;
		params.Fail = Fail;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (JSONFields != nullptr)
			*JSONFields = params.JSONFields;
		if (JSONValues != nullptr)
			*JSONValues = params.JSONValues;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetMultiplayerPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_MultiplayerPlayerState_C*                MultiplayerPlayerState                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool UPlaytimeFunctionLibrary_C::GetMultiplayerPlayerState(class UObject* __WorldContext, class ABP_MultiplayerPlayerState_C** MultiplayerPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetMultiplayerPlayerState");
		
		UPlaytimeFunctionLibrary_C_GetMultiplayerPlayerState_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiplayerPlayerState != nullptr)
			*MultiplayerPlayerState = params.MultiplayerPlayerState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.FindToyByBoolArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       ToysFound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::FindToyByBoolArray(TArray<bool>* ToysFound, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.FindToyByBoolArray");
		
		UPlaytimeFunctionLibrary_C_FindToyByBoolArray_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToysFound != nullptr)
			*ToysFound = params.ToysFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.ChangeObjective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewObjective                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaytimeFunctionLibrary_C::ChangeObjective(const class FText& NewObjective, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.ChangeObjective");
		
		UPlaytimeFunctionLibrary_C_ChangeObjective_Params params {};
		params.NewObjective = NewObjective;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Get Row from Cosmetic ID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CosmeticID                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UPlaytimeFunctionLibrary_C::GetRowfromCosmeticID(const class FName& CosmeticID, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Get Row from Cosmetic ID");
		
		UPlaytimeFunctionLibrary_C_GetRowfromCosmeticID_Params params {};
		params.CosmeticID = CosmeticID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetPlaytimePoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamItemDetails>                   Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSteamItemDetails                           ItemDefinition                                             (Parm, OutParm)
	 */
	int32_t UPlaytimeFunctionLibrary_C::GetPlaytimePoints(TArray<struct FSteamItemDetails>* Inventory, class UObject* __WorldContext, struct FSteamItemDetails* ItemDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetPlaytimePoints");
		
		UPlaytimeFunctionLibrary_C_GetPlaytimePoints_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Inventory != nullptr)
			*Inventory = params.Inventory;
		if (ItemDefinition != nullptr)
			*ItemDefinition = params.ItemDefinition;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Get Steam Item By Def
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamItemDetails>                   Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            DefID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ArrayIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSteamItemDetails UPlaytimeFunctionLibrary_C::GetSteamItemByDef(TArray<struct FSteamItemDetails>* Items, int32_t DefID, class UObject* __WorldContext, int32_t* ArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Get Steam Item By Def");
		
		UPlaytimeFunctionLibrary_C_GetSteamItemByDef_Params params {};
		params.DefID = DefID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
		if (ArrayIndex != nullptr)
			*ArrayIndex = params.ArrayIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetPlayerStartsByTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PlayerStartTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<class APlayerStart*> UPlaytimeFunctionLibrary_C::GetPlayerStartsByTag(const class FName& PlayerStartTag, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetPlayerStartsByTag");
		
		UPlaytimeFunctionLibrary_C_GetPlayerStartsByTag_Params params {};
		params.PlayerStartTag = PlayerStartTag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetMultiplayerGameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UMultiplayerGameInstance_C* UPlaytimeFunctionLibrary_C::GetMultiplayerGameInstance(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetMultiplayerGameInstance");
		
		UPlaytimeFunctionLibrary_C_GetMultiplayerGameInstance_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Get World Monster Unsafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     worldcntxt                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class ACharacter* UPlaytimeFunctionLibrary_C::GetWorldMonsterUnsafe(class UObject* worldcntxt, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.Get World Monster Unsafe");
		
		UPlaytimeFunctionLibrary_C_GetWorldMonsterUnsafe_Params params {};
		params.worldcntxt = worldcntxt;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetMultiplayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_MultiplayerPlayerController_C*           MultiplayerController                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool UPlaytimeFunctionLibrary_C::GetMultiplayerController(class UObject* __WorldContext, class ABP_MultiplayerPlayerController_C** MultiplayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetMultiplayerController");
		
		UPlaytimeFunctionLibrary_C_GetMultiplayerController_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiplayerController != nullptr)
			*MultiplayerController = params.MultiplayerController;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetMultiplayerCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_NetworkCharacter_C*                      PlayerReference                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool UPlaytimeFunctionLibrary_C::GetMultiplayerCharacter(class UObject* __WorldContext, class ABP_NetworkCharacter_C** PlayerReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C.GetMultiplayerCharacter");
		
		UPlaytimeFunctionLibrary_C_GetMultiplayerCharacter_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerReference != nullptr)
			*PlayerReference = params.PlayerReference;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaytimeFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaytimeFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C");
		return ptr;
	}

}


