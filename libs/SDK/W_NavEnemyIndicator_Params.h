﻿#pragma once

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
	 * Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.Toggle
	 */
	struct UW_NavEnemyIndicator_C_Toggle_Params
	{	};

	/**
	 * Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.Show
	 */
	struct UW_NavEnemyIndicator_C_Show_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.AddIcon
	 */
	struct UW_NavEnemyIndicator_C_AddIcon_Params
	{
	public:
		class UClass*                                              UserWidgetClass;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.Construct
	 */
	struct UW_NavEnemyIndicator_C_Construct_Params
	{	};

	/**
	 * Function W_NavEnemyIndicator.W_NavEnemyIndicator_C.ExecuteUbergraph_W_NavEnemyIndicator
	 */
	struct UW_NavEnemyIndicator_C_ExecuteUbergraph_W_NavEnemyIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
