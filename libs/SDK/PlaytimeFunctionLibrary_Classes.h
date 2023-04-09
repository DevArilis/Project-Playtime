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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PlaytimeFunctionLibrary.PlaytimeFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlaytimeFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void IsHost(class UObject* __WorldContext, bool* Host);
		void GetEventInfo(class UObject* __WorldContext, struct FPlaytimeEvent* EventInfo, bool* IsEventActive);
		void GetDateTimefromAPITime(const class FString& APITime, class UObject* __WorldContext, struct FDateTime* ReturnValue);
		void SaveCosmeticPresetStructToCharacter(ECharacterType Character, const struct FPresetSlot& Preset, class UObject* __WorldContext);
		void CrossReferenceCosmeticsWithSteamInventory(const struct FPresetSlot& UnverifiedCosmetics, TArray<struct FSteamItemDetails> SteamItems, class UObject* __WorldContext, bool* CosmeticsOwned);
		void GetPlaytimeVersion(class UObject* __WorldContext, class FString* Version);
		void RefreshTicketCountDisplay(class UObject* __WorldContext);
		void GetCharacterDescriptions(ECharacterType CurrentChar, class UObject* __WorldContext, class FText* Description);
		void GetKeyBinds(const class FName& InputAction1, const class FName& InputAction2, class UObject* __WorldContext, class FText* AbilityKey1, class FText* AbilityKey2);
		void EnoughSpaceforJumpscare(EMonster_Type MonsterType, class ACharacter* MonsterCharacter, float DistanceFromMonster, class UObject* __WorldContext, bool* ReturnValue);
		void GetStoredSessionName(class UObject* __WorldContext, class FString* SessionName, bool* Valid);
		void CosmeticBelongsToToECharacterType(E_CosmeticBelongsTo In, class UObject* __WorldContext, ECharacterType* Out);
		void ECharacterTypeToCosmeticBelongsTo(ECharacterType In, class UObject* __WorldContext, E_CosmeticBelongsTo* Out);
		TArray<int32_t> LoadTapes(class UObject* __WorldContext, struct FDateTime* FirstTapeDate);
		void SaveTapes(int32_t NewTapeID, const struct FDateTime& TapeDate, class UObject* __WorldContext);
		void DisplayMessage(const class FString& Message, bool Error, class UObject* From, class UObject* __WorldContext);
		void PostXP(int32_t PlayerCount, const class FScriptDelegate& Success, const class FScriptDelegate& Fail, class UObject* __WorldContext);
		void RunAdvancedGetRequest(const class FString& HeaderName, const class FString& HeaderValue, const class FString& URL, const class FScriptDelegate& Success, const class FScriptDelegate& Fail, class UObject* __WorldContext);
		bool GetStateValues(class UObject* __WorldContext, int32_t* XP, class FString* BattlepassResponse);
		bool SetStateXP(int32_t XP, class UObject* __WorldContext);
		bool SetStateSeasonPass(const class FString& Response, class UObject* __WorldContext);
		int32_t ConvertXPtoTier(int32_t XP, class UObject* __WorldContext);
		float ConvertXPtoProgress(int32_t XP, class UObject* __WorldContext, int32_t* OutOf15);
		bool GetAuthToken(class UObject* __WorldContext, class FString* AuthToken);
		class FString GetPlaytimeAuthenticationHeader(class UObject* __WorldContext);
		class FString GetPlaytimeAPIURL(class UObject* __WorldContext);
		void RunSimpleGetRequest(const class FString& URL, const class FScriptDelegate& Success, const class FScriptDelegate& Fail, class UObject* __WorldContext);
		void RunIntegerPostRequest(const class FString& HeaderName, const class FString& HeaderValue, TArray<class FString>* JSONKey, TArray<int32_t>* JSONValue, const class FString& URL, const class FScriptDelegate& Success, const class FScriptDelegate& Fail, class UObject* __WorldContext);
		void RunAdvancedPostRequest(const class FString& HeaderName, const class FString& HeaderValue, TArray<class FString>* JSONFields, TArray<class FString>* JSONValues, const class FString& URL, const class FScriptDelegate& Success, const class FScriptDelegate& Fail, class UObject* __WorldContext);
		void RunSimplePostRequest(TArray<class FString>* JSONFields, TArray<class FString>* JSONValues, const class FString& URL, const class FScriptDelegate& Success, const class FScriptDelegate& Fail, class UObject* __WorldContext);
		bool GetMultiplayerPlayerState(class UObject* __WorldContext, class ABP_MultiplayerPlayerState_C** MultiplayerPlayerState);
		void FindToyByBoolArray(TArray<bool>* ToysFound, class UObject* __WorldContext);
		void ChangeObjective(const class FText& NewObjective, class UObject* __WorldContext);
		int32_t GetRowfromCosmeticID(const class FName& CosmeticID, class UObject* __WorldContext);
		int32_t GetPlaytimePoints(TArray<struct FSteamItemDetails>* Inventory, class UObject* __WorldContext, struct FSteamItemDetails* ItemDefinition);
		struct FSteamItemDetails GetSteamItemByDef(TArray<struct FSteamItemDetails>* Items, int32_t DefID, class UObject* __WorldContext, int32_t* ArrayIndex);
		TArray<class APlayerStart*> GetPlayerStartsByTag(const class FName& PlayerStartTag, class UObject* __WorldContext);
		class UMultiplayerGameInstance_C* GetMultiplayerGameInstance(class UObject* __WorldContext);
		class ACharacter* GetWorldMonsterUnsafe(class UObject* worldcntxt, class UObject* __WorldContext);
		bool GetMultiplayerController(class UObject* __WorldContext, class ABP_MultiplayerPlayerController_C** MultiplayerController);
		bool GetMultiplayerCharacter(class UObject* __WorldContext, class ABP_NetworkCharacter_C** PlayerReference);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
