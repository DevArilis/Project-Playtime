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
	 * Function UI_MP_Nametag.UI_MP_Nametag_C.SetDevTag
	 */
	struct UUI_MP_Nametag_C_SetDevTag_Params
	{
	public:
		bool                                                       Developer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MP_Nametag.UI_MP_Nametag_C.UpdateVisibility
	 */
	struct UUI_MP_Nametag_C_UpdateVisibility_Params
	{	};

	/**
	 * Function UI_MP_Nametag.UI_MP_Nametag_C.SetName
	 */
	struct UUI_MP_Nametag_C_SetName_Params
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MP_Nametag.UI_MP_Nametag_C.SetColor
	 */
	struct UUI_MP_Nametag_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MP_Nametag.UI_MP_Nametag_C.Construct
	 */
	struct UUI_MP_Nametag_C_Construct_Params
	{	};

	/**
	 * Function UI_MP_Nametag.UI_MP_Nametag_C.FoundSteamInventory
	 */
	struct UUI_MP_Nametag_C_FoundSteamInventory_Params
	{	};

	/**
	 * Function UI_MP_Nametag.UI_MP_Nametag_C.ExecuteUbergraph_UI_MP_Nametag
	 */
	struct UUI_MP_Nametag_C_ExecuteUbergraph_UI_MP_Nametag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KW1K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
