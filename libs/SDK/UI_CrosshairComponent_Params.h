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
	 * Function UI_CrosshairComponent.UI_CrosshairComponent_C.SetLockerOpenVisibility
	 */
	struct UUI_CrosshairComponent_C_SetLockerOpenVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CrosshairComponent.UI_CrosshairComponent_C.SetLockerOpenPercent
	 */
	struct UUI_CrosshairComponent_C_SetLockerOpenPercent_Params
	{
	public:
		int32_t                                                    Hits;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CrosshairComponent.UI_CrosshairComponent_C.ResetRadialRecharge
	 */
	struct UUI_CrosshairComponent_C_ResetRadialRecharge_Params
	{	};

	/**
	 * Function UI_CrosshairComponent.UI_CrosshairComponent_C.RadialRecharge
	 */
	struct UUI_CrosshairComponent_C_RadialRecharge_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CrosshairComponent.UI_CrosshairComponent_C.SetCrosshairProgress
	 */
	struct UUI_CrosshairComponent_C_SetCrosshairProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CrosshairComponent.UI_CrosshairComponent_C.PlayHitmarker
	 */
	struct UUI_CrosshairComponent_C_PlayHitmarker_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CrosshairComponent.UI_CrosshairComponent_C.ColorCrosshairRed
	 */
	struct UUI_CrosshairComponent_C_ColorCrosshairRed_Params
	{	};

	/**
	 * Function UI_CrosshairComponent.UI_CrosshairComponent_C.ColorCrosshairWhite
	 */
	struct UUI_CrosshairComponent_C_ColorCrosshairWhite_Params
	{	};

	/**
	 * Function UI_CrosshairComponent.UI_CrosshairComponent_C.SetCrosshairColor
	 */
	struct UUI_CrosshairComponent_C_SetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CrosshairComponent.UI_CrosshairComponent_C.PlayAttackAnimation
	 */
	struct UUI_CrosshairComponent_C_PlayAttackAnimation_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CrosshairComponent.UI_CrosshairComponent_C.Tick
	 */
	struct UUI_CrosshairComponent_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CrosshairComponent.UI_CrosshairComponent_C.ExecuteUbergraph_UI_CrosshairComponent
	 */
	struct UUI_CrosshairComponent_C_ExecuteUbergraph_UI_CrosshairComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
