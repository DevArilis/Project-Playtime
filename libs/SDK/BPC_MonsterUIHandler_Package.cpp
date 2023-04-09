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
	 * 		Name   -> Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.ClientMonsterInteractUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPC_MonsterUIHandler_C::ClientMonsterInteractUI(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.ClientMonsterInteractUI");
		
		UBPC_MonsterUIHandler_C_ClientMonsterInteractUI_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.ShowMonsterInteractUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPC_MonsterUIHandler_C::ShowMonsterInteractUI(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.ShowMonsterInteractUI");
		
		UBPC_MonsterUIHandler_C_ShowMonsterInteractUI_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkHuggy_C*                          Huggy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_MonsterUIHandler_C::Interact(class ABP_NetworkHuggy_C* Huggy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.Interact");
		
		UBPC_MonsterUIHandler_C_Interact_Params params {};
		params.Huggy = Huggy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.Toggle Can Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_MonsterUIHandler_C::ToggleCanInteract(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.Toggle Can Interact");
		
		UBPC_MonsterUIHandler_C_ToggleCanInteract_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.InterfaceResetSecurityUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkHuggy_C*                          Huggy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_MonsterUIHandler_C::InterfaceResetSecurityUI(class ABP_NetworkHuggy_C* Huggy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.InterfaceResetSecurityUI");
		
		UBPC_MonsterUIHandler_C_InterfaceResetSecurityUI_Params params {};
		params.Huggy = Huggy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.InterfacePickupPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PickedUpPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_MonsterUIHandler_C::InterfacePickupPlayer(class ABP_NetworkCharacter_C* PickedUpPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.InterfacePickupPlayer");
		
		UBPC_MonsterUIHandler_C_InterfacePickupPlayer_Params params {};
		params.PickedUpPlayer = PickedUpPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.InterfaceDropPlayer
	 * 		Flags  -> ()
	 */
	void UBPC_MonsterUIHandler_C::InterfaceDropPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.InterfaceDropPlayer");
		
		UBPC_MonsterUIHandler_C_InterfaceDropPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.ExecuteUbergraph_BPC_MonsterUIHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_MonsterUIHandler_C::ExecuteUbergraph_BPC_MonsterUIHandler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_MonsterUIHandler.BPC_MonsterUIHandler_C.ExecuteUbergraph_BPC_MonsterUIHandler");
		
		UBPC_MonsterUIHandler_C_ExecuteUbergraph_BPC_MonsterUIHandler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_MonsterUIHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_MonsterUIHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MonsterUIHandler.BPC_MonsterUIHandler_C");
		return ptr;
	}

}


