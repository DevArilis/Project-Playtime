/**
 * Name: Project_Playtime
 * Version: 4_7_23_Hotfix
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FileManAdvanced.FileManAdvancedBPLibrary.WriteFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Content                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFileManAdvancedBPLibrary::WriteFile(const class FString& Content, const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FileManAdvanced.FileManAdvancedBPLibrary.WriteFile");
		
		UFileManAdvancedBPLibrary_WriteFile_Params params {};
		params.Content = Content;
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FileManAdvanced.FileManAdvancedBPLibrary.ReadFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Content                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFileManAdvancedBPLibrary::ReadFile(const class FString& Filename, class FString* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FileManAdvanced.FileManAdvancedBPLibrary.ReadFile");
		
		UFileManAdvancedBPLibrary_ReadFile_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Content != nullptr)
			*Content = params.Content;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FileManAdvanced.FileManAdvancedBPLibrary.LoadTextureFromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UFileManAdvancedBPLibrary::LoadTextureFromFile(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FileManAdvanced.FileManAdvancedBPLibrary.LoadTextureFromFile");
		
		UFileManAdvancedBPLibrary_LoadTextureFromFile_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FileManAdvanced.FileManAdvancedBPLibrary.LastModifiedTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime UFileManAdvancedBPLibrary::LastModifiedTime(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FileManAdvanced.FileManAdvancedBPLibrary.LastModifiedTime");
		
		UFileManAdvancedBPLibrary_LastModifiedTime_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FileManAdvanced.FileManAdvancedBPLibrary.GetMainDirectory
	 * 		Flags  -> ()
	 */
	class FString UFileManAdvancedBPLibrary::GetMainDirectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FileManAdvanced.FileManAdvancedBPLibrary.GetMainDirectory");
		
		UFileManAdvancedBPLibrary_GetMainDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FileManAdvanced.FileManAdvancedBPLibrary.GetLaunchDirectory
	 * 		Flags  -> ()
	 */
	class FString UFileManAdvancedBPLibrary::GetLaunchDirectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FileManAdvanced.FileManAdvancedBPLibrary.GetLaunchDirectory");
		
		UFileManAdvancedBPLibrary_GetLaunchDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FileManAdvanced.FileManAdvancedBPLibrary.GetFilesInPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Files                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SearchSubfolders                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFileManAdvancedBPLibrary::GetFilesInPath(TArray<class FString>* Files, const class FString& Path, bool SearchSubfolders)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FileManAdvanced.FileManAdvancedBPLibrary.GetFilesInPath");
		
		UFileManAdvancedBPLibrary_GetFilesInPath_Params params {};
		params.Path = Path;
		params.SearchSubfolders = SearchSubfolders;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Files != nullptr)
			*Files = params.Files;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FileManAdvanced.FileManAdvancedBPLibrary.GetEngineDirectory
	 * 		Flags  -> ()
	 */
	class FString UFileManAdvancedBPLibrary::GetEngineDirectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FileManAdvanced.FileManAdvancedBPLibrary.GetEngineDirectory");
		
		UFileManAdvancedBPLibrary_GetEngineDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FileManAdvanced.FileManAdvancedBPLibrary.DeleteFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFileManAdvancedBPLibrary::DeleteFile(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FileManAdvanced.FileManAdvancedBPLibrary.DeleteFile");
		
		UFileManAdvancedBPLibrary_DeleteFile_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FileManAdvanced.FileManAdvancedBPLibrary.DeleteDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FolderName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFileManAdvancedBPLibrary::DeleteDirectory(const class FString& FolderName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FileManAdvanced.FileManAdvancedBPLibrary.DeleteDirectory");
		
		UFileManAdvancedBPLibrary_DeleteDirectory_Params params {};
		params.FolderName = FolderName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FileManAdvanced.FileManAdvancedBPLibrary.CreateDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FolderName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFileManAdvancedBPLibrary::CreateDirectory(const class FString& FolderName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FileManAdvanced.FileManAdvancedBPLibrary.CreateDirectory");
		
		UFileManAdvancedBPLibrary_CreateDirectory_Params params {};
		params.FolderName = FolderName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFileManAdvancedBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFileManAdvancedBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FileManAdvanced.FileManAdvancedBPLibrary");
		return ptr;
	}

}


