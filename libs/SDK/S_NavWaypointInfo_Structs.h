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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_NavWaypointInfo.S_NavWaypointInfo
	 * Size -> 0x0010
	 */
	struct FS_NavWaypointInfo
	{
	public:
		class UUserWidget*                                         WaypointIconWidget_9_9AFFBED542FC858E188B6D820F75E643;   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_NavWaypoint_C*                                   WaypointActor_8_AAD17217487066910D483281D8EA57F1;        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
