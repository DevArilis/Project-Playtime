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
	 * BlueprintGeneratedClass BPI_MonsterUIInterface.BPI_MonsterUIInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_MonsterUIInterface_C : public UInterface
	{
	public:
		void GetMonsterHUD();
		void SetPickedUpPlayer(class ABP_NetworkCharacter_C* PickedUpPlayerIn, class ABP_NetworkCharacter_C** PickedUpPlayerOut);
		void GetPickedUpPlayer(class ABP_NetworkCharacter_C** PickedUpPlayer);
		void SetPickedUp(bool PickedUpIn, bool* PickedUpOut);
		void GetPickedUp(bool* PickedUp);
		void GetOwningMonster(class AActor** MonsterActor);
		void DropPlayer();
		void PickupPlayer(class ABP_NetworkCharacter_C* PickedUpPlayer);
		void InterfaceGetMonsterName(class FString* InterfaceMonsterName);
		void InterfaceResetSecurityUI();
		void InterfaceToggleCanInteract(bool Condition);
		void InterfaceShowMonsterInteractUI(const class FText& InText);
		void InterfaceClientMonsterInteractUI(const class FText& InText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
