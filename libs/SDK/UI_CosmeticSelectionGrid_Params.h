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
	 * Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.PopulateGrid
	 */
	struct UUI_CosmeticSelectionGrid_C_PopulateGrid_Params
	{
	public:
		TArray<int32_t>                                            Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Refresh
	 */
	struct UUI_CosmeticSelectionGrid_C_Refresh_Params
	{
	public:
		ECosmeticTypeEnum                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterType                                             For;                                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowLocked;                                              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F1R8[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSteamItemDetails>                           SteamInventory;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.OnHoveredEvent
	 */
	struct UUI_CosmeticSelectionGrid_C_OnHoveredEvent_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.OnUnHoveredEvent
	 */
	struct UUI_CosmeticSelectionGrid_C_OnUnHoveredEvent_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.OnReleasedEvent
	 */
	struct UUI_CosmeticSelectionGrid_C_OnReleasedEvent_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WVW0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CosmeticItem_C*                                  Caller;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.OnPopulateGrid
	 */
	struct UUI_CosmeticSelectionGrid_C_OnPopulateGrid_Params
	{
	public:
		int32_t                                                    EquippedItemID;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.ExecuteUbergraph_UI_CosmeticSelectionGrid
	 */
	struct UUI_CosmeticSelectionGrid_C_ExecuteUbergraph_UI_CosmeticSelectionGrid_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Grid_OnPopulate__DelegateSignature
	 */
	struct UUI_CosmeticSelectionGrid_C_Grid_OnPopulate__DelegateSignature_Params
	{
	public:
		int32_t                                                    EquippedItemID;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Grid_OnReleased__DelegateSignature
	 */
	struct UUI_CosmeticSelectionGrid_C_Grid_OnReleased__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECosmeticTypeEnum                                          Type;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SB0W[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CosmeticItem_C*                                  Caller;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterType                                             CosmeticFor;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Grid_OnUnHovered__DelegateSignature
	 */
	struct UUI_CosmeticSelectionGrid_C_Grid_OnUnHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.Grid_OnHovered__DelegateSignature
	 */
	struct UUI_CosmeticSelectionGrid_C_Grid_OnHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CosmeticSelectionGrid.UI_CosmeticSelectionGrid_C.ReleasedGesturesButton__DelegateSignature
	 */
	struct UUI_CosmeticSelectionGrid_C_ReleasedGesturesButton__DelegateSignature_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Gesture;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
