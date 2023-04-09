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
	 * BlueprintGeneratedClass BP_SaveTutorial.BP_SaveTutorial_C
	 * Size -> 0x0001 (FullSize[0x0029] - InheritedSize[0x0028])
	 */
	class UBP_SaveTutorial_C : public USaveGame
	{
	public:
		bool                                                       CompletedTutorial;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
