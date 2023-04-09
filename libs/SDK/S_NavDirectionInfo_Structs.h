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
	 * UserDefinedStruct S_NavDirectionInfo.S_NavDirectionInfo
	 * Size -> 0x0028
	 */
	struct FS_NavDirectionInfo
	{
	public:
		class FText                                                Name_2_276902A34F4ACF03CFAC72A02D830611;                 // 0x0000(0x0018) Edit, BlueprintVisible
		int32_t                                                    Rotation_5_1B4B68DA484B3F2FA234D19060B1265C;             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0E39[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MarkWidgetClass_9_1FA05BFE499B6C763C3170BC1B205AC7;      // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
