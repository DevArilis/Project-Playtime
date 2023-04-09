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
	 * UserDefinedStruct F_CosmeticStructure_ABAA.F_CosmeticStructure_ABAA
	 * Size -> 0x0108
	 */
	struct FF_CosmeticStructure_ABAA
	{
	public:
		class UTexture2D*                                          Thumbnail_8_63F5232D4CD2F50436B16588C358D2D3;            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          BigThumbnail_113_C36B5E704A8E2F485F3E538BE3EEC4F4;       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_CosmeticType                                             Type_16_23737C1D4C6F068DAE953E922A9550CA;                // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N5O3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name_2_ACD174C443D6298B4EAF2E9D95E084A7;                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		E_Rarity                                                   Rarity_24_5D1115A04B263AA3C26865B148AF3ECF;              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ASOT[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Price_5_D65F8A2D459F5E3AC1C0CC83500D6552;                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       Mesh_11_ABDC117A4A512DA58B99B58AF19D2D7E;                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Public_13_48F99C1C43C08B54E6DF9CA0D4659842;              // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UnlockedByDefault_21_2C07F0B14AABE31C67B6F9A172F80E35;   // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K336[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ParentID_32_13F25166410011651A5E99B2018BC1E7;            // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_CosmeticBelongsTo                                        CosmeticFor_35_6680CD1649C580EFD399BEA609A1F272;         // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TEIF[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   Body_38_804642324FB9B0806E15D1A4728B40CD;                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       AlternateMesh_41_312EE13745389684DB03D09585BB743B;       // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       RightHandGesture_107_CF46335D42114EF03CFFD58BE6E47211;   // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       LeftHandGesture_108_EB2EF4A44928331BD5B15DA5D717A898;    // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       FirstPersonEmote_109_77E0CA0A41C1F083B6FA1880904940BE;   // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       ThirdPersonEmote_110_E66DC8A64CADD397C98F7A8409469F0C;   // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CancelGestureWhenMoving_51_8E6794B647077E48A78F2FB60B077906; // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8SVA[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          HandShootSound_54_0ED809904A8CC550F931DEB9CE5A3BBC;      // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          HandRetractSound_56_EFD4C0944486849E110788ADB3751C8B;    // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          HandGrabSound_58_68A2EC7D49BD99820D1A8FB5198FC35C;       // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         StaticMesh_61_58EFE1554C1CC02DBC957A99697FB7B3;          // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     Particles_64_093CFEBA4EF8DC36D1C1ACB815D24429;           // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       GrabPackHose_67_60C2E2B0445D1589AA7EC19E9939ADA6;        // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Colorable_70_D36B422C48C887DEEFD7C58E7CDA5194;           // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1IK1[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color_73_1A547E9441852CF70B2DE085476F0F42;               // 0x00B4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OutfitBundle_76_FA249F7C40EA8F164ED1F9A67F7BA823;        // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HatSupportsMask_79_DF114E084C82A97BC665C28A5AF3A62E;     // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OTXH[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SkinIdleSound_86_9F0442404E9B91935F65C0B9DEB02629;       // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              AnimationBlueprint_92_6DB9393E4F28802E34B316A0F7021F87;  // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBundle_99_EC9D70584334155C01629E80AAC86550;            // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PPYK[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            BundleContent_103_D9F988AD4EBCD8CCCBEFDB9077F00B6A;      // 0x00E8(0x0010) Edit, BlueprintVisible
		class FString                                              ThumbnailURL_106_E3F4989B4336837C65A76C8CD7F8DD9D;       // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
