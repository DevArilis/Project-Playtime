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
	 * Function W_NavCompass.W_NavCompass_C.GetScaleDesiredSize
	 */
	struct UW_NavCompass_C_GetScaleDesiredSize_Params
	{
	public:
		struct FVector2D                                           Result;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.Toggle
	 */
	struct UW_NavCompass_C_Toggle_Params
	{	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.ShowF
	 */
	struct UW_NavCompass_C_ShowF_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.AddIcon
	 */
	struct UW_NavCompass_C_AddIcon_Params
	{
	public:
		class UClass*                                              UserWidgetClass;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.AddDirectionIcon
	 */
	struct UW_NavCompass_C_AddDirectionIcon_Params
	{
	public:
		struct FS_NavDirectionInfo                                 Info;                                                    // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UUserWidget*                                         RetturnValue;                                            // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.UpdateDistance
	 */
	struct UW_NavCompass_C_UpdateDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.UpdateIndicatorOffScreenAngle
	 */
	struct UW_NavCompass_C_UpdateIndicatorOffScreenAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.ShowOffScreenArrow
	 */
	struct UW_NavCompass_C_ShowOffScreenArrow_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.UpdateMainText
	 */
	struct UW_NavCompass_C_UpdateMainText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.Show
	 */
	struct UW_NavCompass_C_Show_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.SetArrowAngle
	 */
	struct UW_NavCompass_C_SetArrowAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.UpdateParentAngle
	 */
	struct UW_NavCompass_C_UpdateParentAngle_Params
	{
	public:
		float                                                      ParentAngle;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.UpdateMapRotate
	 */
	struct UW_NavCompass_C_UpdateMapRotate_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.SetScaleUsingSize
	 */
	struct UW_NavCompass_C_SetScaleUsingSize_Params
	{
	public:
		float                                                      IpScale;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.Construct
	 */
	struct UW_NavCompass_C_Construct_Params
	{	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.UpdateCompassCurrentAngle
	 */
	struct UW_NavCompass_C_UpdateCompassCurrentAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_NavCompass.W_NavCompass_C.ExecuteUbergraph_W_NavCompass
	 */
	struct UW_NavCompass_C_ExecuteUbergraph_W_NavCompass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
