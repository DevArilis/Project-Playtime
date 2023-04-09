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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Playtime_JSON_Tools.Playtime_JSON_Tools_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlaytime_JSON_Tools_C : public UBlueprintFunctionLibrary
	{
	public:
		class FString Get_JSON_Value_Explicit(const class FString& JSONSource, const class FString& Key, class UObject* __WorldContext, bool* Valid);
		void RemoveSquareBrackets(const class FString& Input, class UObject* __WorldContext, class FString* Output);
		class FString Get_JSON_Value(const class FString& JSONSource, const class FString& Key, class UObject* __WorldContext, bool* Valid);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
