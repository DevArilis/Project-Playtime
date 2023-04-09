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
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.ShouldPlayIntro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Should                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMP_DefaultMap_C::ShouldPlayIntro(bool* Should)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.ShouldPlayIntro");
		
		AMP_DefaultMap_C_ShouldPlayIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Should != nullptr)
			*Should = params.Should;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.GetReconnectConsoleCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewHostIP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class FString AMP_DefaultMap_C::GetReconnectConsoleCommand(const class FString& NewHostIP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.GetReconnectConsoleCommand");
		
		AMP_DefaultMap_C_GetReconnectConsoleCommand_Params params {};
		params.NewHostIP = NewHostIP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.OnFailure_B950C91F4DB8CD402ED7FC9D72C040F8
	 * 		Flags  -> ()
	 */
	void AMP_DefaultMap_C::OnFailure_B950C91F4DB8CD402ED7FC9D72C040F8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.OnFailure_B950C91F4DB8CD402ED7FC9D72C040F8");
		
		AMP_DefaultMap_C_OnFailure_B950C91F4DB8CD402ED7FC9D72C040F8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.OnSuccess_B950C91F4DB8CD402ED7FC9D72C040F8
	 * 		Flags  -> ()
	 */
	void AMP_DefaultMap_C::OnSuccess_B950C91F4DB8CD402ED7FC9D72C040F8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.OnSuccess_B950C91F4DB8CD402ED7FC9D72C040F8");
		
		AMP_DefaultMap_C_OnSuccess_B950C91F4DB8CD402ED7FC9D72C040F8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.OnCallback_A6336C8F4158FC455E22909FE6D5133B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamSessionResult>                 Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AMP_DefaultMap_C::OnCallback_A6336C8F4158FC455E22909FE6D5133B(TArray<struct FSteamSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.OnCallback_A6336C8F4158FC455E22909FE6D5133B");
		
		AMP_DefaultMap_C_OnCallback_A6336C8F4158FC455E22909FE6D5133B_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.OnFailure_DCCEB0474EF32BEC1D3F9B9347842F4E
	 * 		Flags  -> ()
	 */
	void AMP_DefaultMap_C::OnFailure_DCCEB0474EF32BEC1D3F9B9347842F4E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.OnFailure_DCCEB0474EF32BEC1D3F9B9347842F4E");
		
		AMP_DefaultMap_C_OnFailure_DCCEB0474EF32BEC1D3F9B9347842F4E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.OnSuccess_DCCEB0474EF32BEC1D3F9B9347842F4E
	 * 		Flags  -> ()
	 */
	void AMP_DefaultMap_C::OnSuccess_DCCEB0474EF32BEC1D3F9B9347842F4E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.OnSuccess_DCCEB0474EF32BEC1D3F9B9347842F4E");
		
		AMP_DefaultMap_C_OnSuccess_DCCEB0474EF32BEC1D3F9B9347842F4E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.OnFailure_DDDA3ECD4B0721A3AB294A8F80209CC7
	 * 		Flags  -> ()
	 */
	void AMP_DefaultMap_C::OnFailure_DDDA3ECD4B0721A3AB294A8F80209CC7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.OnFailure_DDDA3ECD4B0721A3AB294A8F80209CC7");
		
		AMP_DefaultMap_C_OnFailure_DDDA3ECD4B0721A3AB294A8F80209CC7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.OnSuccess_DDDA3ECD4B0721A3AB294A8F80209CC7
	 * 		Flags  -> ()
	 */
	void AMP_DefaultMap_C::OnSuccess_DDDA3ECD4B0721A3AB294A8F80209CC7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.OnSuccess_DDDA3ECD4B0721A3AB294A8F80209CC7");
		
		AMP_DefaultMap_C_OnSuccess_DDDA3ECD4B0721A3AB294A8F80209CC7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.OnTimeout
	 * 		Flags  -> ()
	 */
	void AMP_DefaultMap_C::OnTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.OnTimeout");
		
		AMP_DefaultMap_C_OnTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.AttempMigrateClient
	 * 		Flags  -> ()
	 */
	void AMP_DefaultMap_C::AttempMigrateClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.AttempMigrateClient");
		
		AMP_DefaultMap_C_AttempMigrateClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.MigrateClient
	 * 		Flags  -> ()
	 */
	void AMP_DefaultMap_C::MigrateClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.MigrateClient");
		
		AMP_DefaultMap_C_MigrateClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.MigrateHost
	 * 		Flags  -> ()
	 */
	void AMP_DefaultMap_C::MigrateHost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.MigrateHost");
		
		AMP_DefaultMap_C_MigrateHost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMP_DefaultMap_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.ReceiveBeginPlay");
		
		AMP_DefaultMap_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MP_DefaultMap.MP_DefaultMap_C.ExecuteUbergraph_MP_DefaultMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMP_DefaultMap_C::ExecuteUbergraph_MP_DefaultMap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MP_DefaultMap.MP_DefaultMap_C.ExecuteUbergraph_MP_DefaultMap");
		
		AMP_DefaultMap_C_ExecuteUbergraph_MP_DefaultMap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMP_DefaultMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMP_DefaultMap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MP_DefaultMap.MP_DefaultMap_C");
		return ptr;
	}

}


