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
	 * Enum NinjaCharacter.ENinjaGravityDirectionMode
	 */
	enum class ENinjaGravityDirectionMode : uint8_t
	{
		Fixed         = 0,
		SplineTangent = 1,
		Point         = 2,
		Line          = 3,
		Segment       = 4,
		Spline        = 5,
		Plane         = 6,
		SplinePlane   = 7,
		Box           = 8,
		Collision     = 9,
		Unused1       = 10,
		Unused2       = 11,
		Unused3       = 12,
		Unused4       = 13,
		Unused5       = 14,
		Unused6       = 15,
		Unused7       = 16,
		Unused8       = 17,
		Unused9       = 18,
		MAX           = 19
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
