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
	 * Class FileManAdvanced.FileManAdvancedBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFileManAdvancedBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool WriteFile(const class FString& Content, const class FString& Filename);
		bool ReadFile(const class FString& Filename, class FString* Content);
		class UTexture2D* LoadTextureFromFile(const class FString& Filename);
		struct FDateTime LastModifiedTime(const class FString& Filename);
		class FString GetMainDirectory();
		class FString GetLaunchDirectory();
		bool GetFilesInPath(TArray<class FString>* Files, const class FString& Path, bool SearchSubfolders);
		class FString GetEngineDirectory();
		bool DeleteFile(const class FString& Filename);
		bool DeleteDirectory(const class FString& FolderName);
		bool CreateDirectory(const class FString& FolderName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
