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
	 * Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.ConvertTime
	 */
	struct UUI_SabotageIconContainer_C_ConvertTime_Params
	{
	public:
		float                                                      TimeToConvert;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XJ3E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ConvertedTime;                                           // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.ResetSabotageIcon
	 */
	struct UUI_SabotageIconContainer_C_ResetSabotageIcon_Params
	{	};

	/**
	 * Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.InitializeSabotageIcons
	 */
	struct UUI_SabotageIconContainer_C_InitializeSabotageIcons_Params
	{
	public:
		struct FSabotageDef                                        SabotageDef;                                             // 0x0000(0x00C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    SabotageLevel;                                           // 0x00C0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PYYZ[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_SabotageSplashText_C*                            SabotageSplashTextRef;                                   // 0x00C8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.PreConstruct
	 */
	struct UUI_SabotageIconContainer_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.Tick
	 */
	struct UUI_SabotageIconContainer_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.IconHandoff
	 */
	struct UUI_SabotageIconContainer_C_IconHandoff_Params
	{	};

	/**
	 * Function UI_SabotageIconContainer.UI_SabotageIconContainer_C.ExecuteUbergraph_UI_SabotageIconContainer
	 */
	struct UUI_SabotageIconContainer_C_ExecuteUbergraph_UI_SabotageIconContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
