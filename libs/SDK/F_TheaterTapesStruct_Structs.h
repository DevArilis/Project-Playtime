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
	 * UserDefinedStruct F_TheaterTapesStruct.F_TheaterTapesStruct
	 * Size -> 0x005C
	 */
	struct FF_TheaterTapesStruct
	{
	public:
		class UTexture2D*                                          Thumbnail_5_01E2973A4A425ADCE14AB799A4C36D64;            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Name_6_BDECDDC44323A4D50A36CD8F950C7FEE;                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              Description_9_0239DBC74DE92FC6B8558AB99647615B;          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UMediaSource*                                        Movie_13_E0DA13F843C5C51C6551558A6A24C7DE;               // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              UnlockDescription_16_A0E1CD5F4F0F8824471598886C38F63D;   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UDataTable*                                          SubtitleDataTable_23_FBF8D2A64732F8E43EADB4AFE2257758;   // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SubtitleRowName_22_848DD10941F2F79F4A75099B5DBAB63D;     // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    NumberofSubtitles_26_4A1FAD4842984C5586DC9ABB3830F067;   // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
