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
	 * Function BPI_ShutdownTarget.BPI_ShutdownTarget_C.ReActivate
	 */
	struct UBPI_ShutdownTarget_C_ReActivate_Params
	{	};

	/**
	 * Function BPI_ShutdownTarget.BPI_ShutdownTarget_C.Sabotage
	 */
	struct UBPI_ShutdownTarget_C_Sabotage_Params
	{
	public:
		float                                                      FixDuration;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
