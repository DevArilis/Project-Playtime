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
	 * BlueprintGeneratedClass GI_SavedState.GI_SavedState_C
	 * Size -> 0x0081 (FullSize[0x0311] - InheritedSize[0x0290])
	 */
	class UGI_SavedState_C : public UPlaytimeGameInstance
	{
	public:
		struct FGameSave                                           LastState;                                               // 0x0290(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              NewHostIP_1;                                             // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UUserWidget*                                         MigrationWidgetOptional;                                 // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              MigrationWidgetClassOptional;                            // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_SessionSettings                                 SessionSettings;                                         // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       ShowingMigrationWidget;                                  // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HideMigrationWidget();
		void ShowMigrationWidget();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
