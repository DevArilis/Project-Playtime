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
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.Get_StarterObjective_Text_1
	 */
	struct UUI_SurvivorHUD_C_Get_StarterObjective_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.AbilityInit
	 */
	struct UUI_SurvivorHUD_C_AbilityInit_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.Update Secondary Obj
	 */
	struct UUI_SurvivorHUD_C_UpdateSecondaryObj_Params
	{
	public:
		ESecondaryObjectives                                       NewObjective;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.ConvertTime
	 */
	struct UUI_SurvivorHUD_C_ConvertTime_Params
	{
	public:
		float                                                      TimeToConvert;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GBWO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ConvertedTime;                                           // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.HideHP
	 */
	struct UUI_SurvivorHUD_C_HideHP_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.UpdateHealth
	 */
	struct UUI_SurvivorHUD_C_UpdateHealth_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.UpdatePlayersHoldingToy
	 */
	struct UUI_SurvivorHUD_C_UpdatePlayersHoldingToy_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.LoadToys
	 */
	struct UUI_SurvivorHUD_C_LoadToys_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.HowManyBoolsTrue
	 */
	struct UUI_SurvivorHUD_C_HowManyBoolsTrue_Params
	{
	public:
		TArray<bool>                                               Input;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.Set Toy Collected UI
	 */
	struct UUI_SurvivorHUD_C_SetToyCollectedUI_Params
	{
	public:
		class UImage*                                              DefaultToyImage;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          CollectedToyImage;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCollected;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4OKE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UImage*                                              ToyPartBG;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              ToyHighlight;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.HideToys
	 */
	struct UUI_SurvivorHUD_C_HideToys_Params
	{
	public:
		bool                                                       ShouldHide;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.UpdateToyPartsUI
	 */
	struct UUI_SurvivorHUD_C_UpdateToyPartsUI_Params
	{
	public:
		TArray<bool>                                               ToysFound;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.InitToyImages
	 */
	struct UUI_SurvivorHUD_C_InitToyImages_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.SetToyImages
	 */
	struct UUI_SurvivorHUD_C_SetToyImages_Params
	{
	public:
		class UTexture2D*                                          Toy1;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Toy2;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Toy3;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Toy4;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Toy5;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Toy6;                                                    // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.AnimateInit
	 */
	struct UUI_SurvivorHUD_C_AnimateInit_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.PlayHandAnimation
	 */
	struct UUI_SurvivorHUD_C_PlayHandAnimation_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.UpdateCrosshair
	 */
	struct UUI_SurvivorHUD_C_UpdateCrosshair_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.Tick
	 */
	struct UUI_SurvivorHUD_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.Construct
	 */
	struct UUI_SurvivorHUD_C_Construct_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.GetPlayerReference
	 */
	struct UUI_SurvivorHUD_C_GetPlayerReference_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.StartAutoReviving
	 */
	struct UUI_SurvivorHUD_C_StartAutoReviving_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.ShowStrikes
	 */
	struct UUI_SurvivorHUD_C_ShowStrikes_Params
	{
	public:
		int32_t                                                    Strikes;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.Event Show Emotes
	 */
	struct UUI_SurvivorHUD_C_EventShowEmotes_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.OnInitialized
	 */
	struct UUI_SurvivorHUD_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.AllToysAcquired
	 */
	struct UUI_SurvivorHUD_C_AllToysAcquired_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.SetNonEssentialHUDVisibility
	 */
	struct UUI_SurvivorHUD_C_SetNonEssentialHUDVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature
	 */
	struct UUI_SurvivorHUD_C_BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.PreConstruct
	 */
	struct UUI_SurvivorHUD_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.Destruct
	 */
	struct UUI_SurvivorHUD_C_Destruct_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.ShowMonsterReleasedSplash
	 */
	struct UUI_SurvivorHUD_C_ShowMonsterReleasedSplash_Params
	{
	public:
		ECharacterType                                             Monster;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.OnDeath
	 */
	struct UUI_SurvivorHUD_C_OnDeath_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.PrimaryObjectiveAnim
	 */
	struct UUI_SurvivorHUD_C_PrimaryObjectiveAnim_Params
	{
	public:
		class FText                                                ObjName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.ChangePrimObjective
	 */
	struct UUI_SurvivorHUD_C_ChangePrimObjective_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.StartAFKKickTimer
	 */
	struct UUI_SurvivorHUD_C_StartAFKKickTimer_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.SetAFKTimerText
	 */
	struct UUI_SurvivorHUD_C_SetAFKTimerText_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.EndAFKKickTimer
	 */
	struct UUI_SurvivorHUD_C_EndAFKKickTimer_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.SetCheckmarkVisibility
	 */
	struct UUI_SurvivorHUD_C_SetCheckmarkVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.ShowSuccessfulRevive
	 */
	struct UUI_SurvivorHUD_C_ShowSuccessfulRevive_Params
	{	};

	/**
	 * Function UI_SurvivorHUD.UI_SurvivorHUD_C.ExecuteUbergraph_UI_SurvivorHUD
	 */
	struct UUI_SurvivorHUD_C_ExecuteUbergraph_UI_SurvivorHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
