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
	 * Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.PopulateGrid
	 */
	struct UUI_EmoteSelectionGrid_C_PopulateGrid_Params
	{
	public:
		TArray<int32_t>                                            Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Refresh
	 */
	struct UUI_EmoteSelectionGrid_C_Refresh_Params
	{
	public:
		ECharacterType                                             For;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowLocked;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K2ZO[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSteamItemDetails>                           SteamInventory;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.OnHoveredEvent
	 */
	struct UUI_EmoteSelectionGrid_C_OnHoveredEvent_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.OnUnHoveredEvent
	 */
	struct UUI_EmoteSelectionGrid_C_OnUnHoveredEvent_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.OnReleasedEvent
	 */
	struct UUI_EmoteSelectionGrid_C_OnReleasedEvent_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N6IE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CosmeticItem_C*                                  Caller;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Construct
	 */
	struct UUI_EmoteSelectionGrid_C_Construct_Params
	{	};

	/**
	 * Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.ExecuteUbergraph_UI_EmoteSelectionGrid
	 */
	struct UUI_EmoteSelectionGrid_C_ExecuteUbergraph_UI_EmoteSelectionGrid_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Grid_OnReleased__DelegateSignature
	 */
	struct UUI_EmoteSelectionGrid_C_Grid_OnReleased__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6YMR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CosmeticItem_C*                                  Caller;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterType                                             CosmeticFor;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Grid_OnUnHovered__DelegateSignature
	 */
	struct UUI_EmoteSelectionGrid_C_Grid_OnUnHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EmoteSelectionGrid.UI_EmoteSelectionGrid_C.Grid_OnHovered__DelegateSignature
	 */
	struct UUI_EmoteSelectionGrid_C_Grid_OnHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
