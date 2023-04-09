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
	 * 		Name   -> Function SmoothSyncPlugin.SmoothSync.teleport
	 * 		Flags  -> ()
	 */
	void USmoothSync::teleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.teleport");
		
		USmoothSync_teleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportServerToClients
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              tempOwnerTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmoothSync::SmoothSyncTeleportServerToClients(const struct FVector& Position, const struct FVector& Rotation, const struct FVector& Scale, float tempOwnerTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportServerToClients");
		
		USmoothSync_SmoothSyncTeleportServerToClients_Params params {};
		params.Position = Position;
		params.Rotation = Rotation;
		params.Scale = Scale;
		params.tempOwnerTime = tempOwnerTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportClientToServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              tempOwnerTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmoothSync::SmoothSyncTeleportClientToServer(const struct FVector& Position, const struct FVector& Rotation, const struct FVector& Scale, float tempOwnerTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportClientToServer");
		
		USmoothSync_SmoothSyncTeleportClientToServer_Params params {};
		params.Position = Position;
		params.Rotation = Rotation;
		params.Scale = Scale;
		params.tempOwnerTime = tempOwnerTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableServerToClients
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmoothSync::SmoothSyncEnableServerToClients(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableServerToClients");
		
		USmoothSync_SmoothSyncEnableServerToClients_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableClientToServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmoothSync::SmoothSyncEnableClientToServer(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableClientToServer");
		
		USmoothSync_SmoothSyncEnableClientToServer_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SmoothSyncPlugin.SmoothSync.setSceneComponentToSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             theComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmoothSync::setSceneComponentToSync(class USceneComponent* theComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.setSceneComponentToSync");
		
		USmoothSync_setSceneComponentToSync_Params params {};
		params.theComponent = theComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SmoothSyncPlugin.SmoothSync.ServerSendsTransformToEveryone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USmoothSync::ServerSendsTransformToEveryone(TArray<unsigned char> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.ServerSendsTransformToEveryone");
		
		USmoothSync_ServerSendsTransformToEveryone_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SmoothSyncPlugin.SmoothSync.forceStateSendNextFrame
	 * 		Flags  -> ()
	 */
	void USmoothSync::forceStateSendNextFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.forceStateSendNextFrame");
		
		USmoothSync_forceStateSendNextFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SmoothSyncPlugin.SmoothSync.enableSmoothSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmoothSync::enableSmoothSync(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.enableSmoothSync");
		
		USmoothSync_enableSmoothSync_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SmoothSyncPlugin.SmoothSync.ClientSendsTransformToServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USmoothSync::ClientSendsTransformToServer(TArray<unsigned char> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.ClientSendsTransformToServer");
		
		USmoothSync_ClientSendsTransformToServer_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SmoothSyncPlugin.SmoothSync.clearBuffer
	 * 		Flags  -> ()
	 */
	void USmoothSync::clearBuffer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmoothSyncPlugin.SmoothSync.clearBuffer");
		
		USmoothSync_clearBuffer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothSync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothSync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SmoothSyncPlugin.SmoothSync");
		return ptr;
	}

}


