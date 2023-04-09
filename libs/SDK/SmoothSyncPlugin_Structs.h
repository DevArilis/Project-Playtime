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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SmoothSyncPlugin.RestState
	 */
	enum class ERestState : uint8_t
	{
		RestStateAT_REST             = 0,
		RestStateJUST_STARTED_MOVING = 1,
		RestStateMOVING              = 2,
		RestStateRestState_MAX       = 3
	};

	/**
	 * Enum SmoothSyncPlugin.ExtrapolationMode
	 */
	enum class ExtrapolationMode : uint8_t
	{
		UNLIMITED = 0,
		LIMITED   = 1,
		NONE      = 2,
		MAX       = 3
	};

	/**
	 * Enum SmoothSyncPlugin.SyncMode
	 */
	enum class ESyncMode : uint8_t
	{
		SyncModeXYZ          = 0,
		SyncModeXY           = 1,
		SyncModeXZ           = 2,
		SyncModeYZ           = 3,
		SyncModeX            = 4,
		SyncModeY            = 5,
		SyncModeZ            = 6,
		SyncModeNONE         = 7,
		SyncModeSyncMode_MAX = 8
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
