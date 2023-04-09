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
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.SwitchMakeReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorReference                             Reference                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFL_HostMigration::SwitchMakeReference(class AActor* Actor, struct FActorReference* Reference, bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.SwitchMakeReference");
		
		UFL_HostMigration_SwitchMakeReference_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reference != nullptr)
			*Reference = params.Reference;
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.StringToClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ClassName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UFL_HostMigration::StringToClass(const class FString& ClassName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.StringToClass");
		
		UFL_HostMigration_StringToClass_Params params {};
		params.ClassName = ClassName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.StartSaveGameActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGM_SavedState_Base*                         GameMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IgnoreHostPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFL_HostMigration::StartSaveGameActors(class UObject* WorldContextObject, class AGM_SavedState_Base* GameMode, bool IgnoreHostPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.StartSaveGameActors");
		
		UFL_HostMigration_StartSaveGameActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GameMode = GameMode;
		params.IgnoreHostPawn = IgnoreHostPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.ShouldLoadActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FActorState>                         Actors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ToCheck                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFL_HostMigration::ShouldLoadActor(TArray<struct FActorState> Actors, class AActor* ToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.ShouldLoadActor");
		
		UFL_HostMigration_ShouldLoadActor_Params params {};
		params.Actors = Actors;
		params.ToCheck = ToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.SerializeObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SaveGameTagOnly                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SaveDefaults                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> UFL_HostMigration::SerializeObject(class UObject* Object, bool SaveGameTagOnly, bool SaveDefaults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.SerializeObject");
		
		UFL_HostMigration_SerializeObject_Params params {};
		params.Object = Object;
		params.SaveGameTagOnly = SaveGameTagOnly;
		params.SaveDefaults = SaveDefaults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.SerializeActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ComponentNames                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              CustomPropertyNames                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FActorSave UFL_HostMigration::SerializeActor(class AActor* Actor, TArray<class FString> ComponentNames, TArray<class FString> CustomPropertyNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.SerializeActor");
		
		UFL_HostMigration_SerializeActor_Params params {};
		params.Actor = Actor;
		params.ComponentNames = ComponentNames;
		params.CustomPropertyNames = CustomPropertyNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.MakeReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorReference                             Reference                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFL_HostMigration::MakeReference(class AActor* Actor, struct FActorReference* Reference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.MakeReference");
		
		UFL_HostMigration_MakeReference_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reference != nullptr)
			*Reference = params.Reference;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.IsPlayerControllerInSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InSession                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFL_HostMigration::IsPlayerControllerInSession(class UObject* WorldContextObject, class APlayerController* PlayerController, bool* InSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.IsPlayerControllerInSession");
		
		UFL_HostMigration_IsPlayerControllerInSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSession != nullptr)
			*InSession = params.InSession;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.GetReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorReference                             Reference                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AActor* UFL_HostMigration::GetReference(class UObject* WorldContextObject, const struct FActorReference& Reference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.GetReference");
		
		UFL_HostMigration_GetReference_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Reference = Reference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.GetPublicIp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFL_HostMigration::GetPublicIp(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.GetPublicIp");
		
		UFL_HostMigration_GetPublicIp_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.GetPlayerUniqueNetID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFL_HostMigration::GetPlayerUniqueNetID(class APlayerController* PlayerController, class FString* ID, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.GetPlayerUniqueNetID");
		
		UFL_HostMigration_GetPlayerUniqueNetID_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.GetComponentByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Parent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UActorComponent* UFL_HostMigration::GetComponentByName(class AActor* Parent, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.GetComponentByName");
		
		UFL_HostMigration_GetComponentByName_Params params {};
		params.Parent = Parent;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.GetByteChunk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Bytes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ChunkSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Chunk                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UFL_HostMigration::GetByteChunk(TArray<unsigned char> Bytes, int32_t StartIndex, int32_t ChunkSize, TArray<unsigned char>* Chunk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.GetByteChunk");
		
		UFL_HostMigration_GetByteChunk_Params params {};
		params.Bytes = Bytes;
		params.StartIndex = StartIndex;
		params.ChunkSize = ChunkSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Chunk != nullptr)
			*Chunk = params.Chunk;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.GameSaveToBytes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameSave                                   GameSave                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> UFL_HostMigration::GameSaveToBytes(const struct FGameSave& GameSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.GameSaveToBytes");
		
		UFL_HostMigration_GameSaveToBytes_Params params {};
		params.GameSave = GameSave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.DeserializeObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Bytes                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               SaveGameTagOnly                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SaveDefaults                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFL_HostMigration::DeserializeObject(class UObject* Object, TArray<unsigned char> Bytes, bool SaveGameTagOnly, bool SaveDefaults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.DeserializeObject");
		
		UFL_HostMigration_DeserializeObject_Params params {};
		params.Object = Object;
		params.Bytes = Bytes;
		params.SaveGameTagOnly = SaveGameTagOnly;
		params.SaveDefaults = SaveDefaults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.DeserializeActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorSave                                  State                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ComponentNames                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              CustomPropertyNames                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UFL_HostMigration::DeserializeActor(class AActor* Actor, const struct FActorSave& State, TArray<class FString> ComponentNames, TArray<class FString> CustomPropertyNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.DeserializeActor");
		
		UFL_HostMigration_DeserializeActor_Params params {};
		params.Actor = Actor;
		params.State = State;
		params.ComponentNames = ComponentNames;
		params.CustomPropertyNames = CustomPropertyNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.ClassToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFL_HostMigration::ClassToString(class UClass* InClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.ClassToString");
		
		UFL_HostMigration_ClassToString_Params params {};
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.FL_HostMigration.BytesToGameSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Bytes                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FGameSave UFL_HostMigration::BytesToGameSave(TArray<unsigned char> Bytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.FL_HostMigration.BytesToGameSave");
		
		UFL_HostMigration_BytesToGameSave_Params params {};
		params.Bytes = Bytes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_HostMigration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_HostMigration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HostMigrationSystem.FL_HostMigration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.BPI_SavedState.PreSaveActorState
	 * 		Flags  -> ()
	 */
	void UBPI_SavedState::PreSaveActorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.BPI_SavedState.PreSaveActorState");
		
		UBPI_SavedState_PreSaveActorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.BPI_SavedState.LoadActorState
	 * 		Flags  -> ()
	 */
	void UBPI_SavedState::LoadActorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.BPI_SavedState.LoadActorState");
		
		UBPI_SavedState_LoadActorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_SavedState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_SavedState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HostMigrationSystem.BPI_SavedState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGM_SavedState_Base.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGM_SavedState_Base::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HostMigrationSystem.GM_SavedState_Base");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.SavedState_Base.ResetOwner
	 * 		Flags  -> ()
	 */
	void USavedState_Base::ResetOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.SavedState_Base.ResetOwner");
		
		USavedState_Base_ResetOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HostMigrationSystem.SavedState_Base.OwnerBeginPlayCall
	 * 		Flags  -> ()
	 */
	void USavedState_Base::OwnerBeginPlayCall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HostMigrationSystem.SavedState_Base.OwnerBeginPlayCall");
		
		USavedState_Base_OwnerBeginPlayCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USavedState_Base.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USavedState_Base::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HostMigrationSystem.SavedState_Base");
		return ptr;
	}

}


