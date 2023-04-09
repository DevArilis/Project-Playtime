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
	 * Enum AssetTags.ECollectionScriptingShareType
	 */
	enum class ECollectionScriptingShareType : uint8_t
	{
		Local   = 0,
		Private = 1,
		Shared  = 2,
		MAX     = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
