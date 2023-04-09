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
	 * Function UI_N_ServerRow.UI_N_ServerRow_C.GetSessionSettingStringFromKey
	 */
	struct UUI_N_ServerRow_C_GetSessionSettingStringFromKey_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_N_ServerRow.UI_N_ServerRow_C.SetStyle
	 */
	struct UUI_N_ServerRow_C_SetStyle_Params
	{	};

	/**
	 * Function UI_N_ServerRow.UI_N_ServerRow_C.SetSelected
	 */
	struct UUI_N_ServerRow_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N259[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_N_ServerRow.UI_N_ServerRow_C.Construct
	 */
	struct UUI_N_ServerRow_C_Construct_Params
	{	};

	/**
	 * Function UI_N_ServerRow.UI_N_ServerRow_C.BndEvt__UI_N_ServerRow_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_N_ServerRow_C_BndEvt__UI_N_ServerRow_Button_58_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_N_ServerRow.UI_N_ServerRow_C.ExecuteUbergraph_UI_N_ServerRow
	 */
	struct UUI_N_ServerRow_C_ExecuteUbergraph_UI_N_ServerRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
