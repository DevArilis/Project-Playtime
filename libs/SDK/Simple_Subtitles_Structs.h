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
	 * UserDefinedStruct Simple_Subtitles.Simple_Subtitles
	 * Size -> 0x0020
	 */
	struct FSimple_Subtitles
	{
	public:
		float                                                      StartTime_35_BB590E1B4CA94D0D43F20C813CCDA064;           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EndTime_38_7E09828344F1E5FF33A6B191C9FE521A;             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                ENGLISH_26_BB5A0C14407BB0302149D58F7AD6B230;             // 0x0008(0x0018) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
