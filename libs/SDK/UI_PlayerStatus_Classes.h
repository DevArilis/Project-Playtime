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
	 * WidgetBlueprintGeneratedClass UI_PlayerStatus.UI_PlayerStatus_C
	 * Size -> 0x0088 (FullSize[0x02E8] - InheritedSize[0x0260])
	 */
	class UUI_PlayerStatus_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        VerticalBox_83;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FString, struct FLinearColor>                   Status;                                                  // 0x0270(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class AGS_Escape_C*                                        GS_Escape;                                               // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      ShortenedPlayerNameArray;                                // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              ShortenedPlayerName;                                     // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void UpdatePlayers();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void UpdatePlayerHoldingToyPart(class APlayerState* PlayerState, class UTexture2D* ToyPart, bool IsHoldingToyPart);
		void ExecuteUbergraph_UI_PlayerStatus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
