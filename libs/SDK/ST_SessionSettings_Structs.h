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
	 * UserDefinedStruct ST_SessionSettings.ST_SessionSettings
	 * Size -> 0x0010
	 */
	struct FST_SessionSettings
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     SessionProperties_8_A1A6E8C54892ACD2F6E8DBBF13CA1318;    // 0x0000(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
