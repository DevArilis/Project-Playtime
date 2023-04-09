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
	 * UserDefinedStruct F_PointsBundle.F_PointsBundle
	 * Size -> 0x0039
	 */
	struct FF_PointsBundle
	{
	public:
		int32_t                                                    BundleID_3_E56D43AB4AA13228AD5BBA9A94544780;             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfCoins_5_CE2A11494CE31C38855574BB1259E7D2;        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                Price_9_07EFC5144CE4143C9EDD6389FBD50612;                // 0x0008(0x0018) Edit, BlueprintVisible
		class FText                                                Bonus_11_21FC0A4349885632D8F690840598732B;               // 0x0020(0x0018) Edit, BlueprintVisible
		bool                                                       BestValue_14_6F01EE244B6F9A9BB9F6FCB82308B729;           // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
