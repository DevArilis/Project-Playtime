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
	 * BlueprintGeneratedClass FL_HostMigration.FL_HostMigration_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_HostMigration_C : public UBlueprintFunctionLibrary
	{
	public:
		bool ShouldLoadState(class UObject* __WorldContext);
		bool IsNewHost(class UObject* __WorldContext);
		void ResetHostMigration(class UObject* __WorldContext);
		bool ShouldRehost(class UObject* __WorldContext);
		void GetSavedGameMode(class UObject* __WorldContext, class AGM_SavedState_C** GMSavedState);
		void GetSavedGameInstance(class UObject* __WorldContext, class UGI_SavedState_C** GISavedState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
