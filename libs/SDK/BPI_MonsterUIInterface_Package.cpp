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
	 * 		Name   -> Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.GetMonsterHUD
	 * 		Flags  -> ()
	 */
	void UBPI_MonsterUIInterface_C::GetMonsterHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.GetMonsterHUD");
		
		UBPI_MonsterUIInterface_C_GetMonsterHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.SetPickedUpPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PickedUpPlayerIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_NetworkCharacter_C*                      PickedUpPlayerOut                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MonsterUIInterface_C::SetPickedUpPlayer(class ABP_NetworkCharacter_C* PickedUpPlayerIn, class ABP_NetworkCharacter_C** PickedUpPlayerOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.SetPickedUpPlayer");
		
		UBPI_MonsterUIInterface_C_SetPickedUpPlayer_Params params {};
		params.PickedUpPlayerIn = PickedUpPlayerIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickedUpPlayerOut != nullptr)
			*PickedUpPlayerOut = params.PickedUpPlayerOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.GetPickedUpPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PickedUpPlayer                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MonsterUIInterface_C::GetPickedUpPlayer(class ABP_NetworkCharacter_C** PickedUpPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.GetPickedUpPlayer");
		
		UBPI_MonsterUIInterface_C_GetPickedUpPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickedUpPlayer != nullptr)
			*PickedUpPlayer = params.PickedUpPlayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.SetPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PickedUpIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PickedUpOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_MonsterUIInterface_C::SetPickedUp(bool PickedUpIn, bool* PickedUpOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.SetPickedUp");
		
		UBPI_MonsterUIInterface_C_SetPickedUp_Params params {};
		params.PickedUpIn = PickedUpIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickedUpOut != nullptr)
			*PickedUpOut = params.PickedUpOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.GetPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PickedUp                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_MonsterUIInterface_C::GetPickedUp(bool* PickedUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.GetPickedUp");
		
		UBPI_MonsterUIInterface_C_GetPickedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickedUp != nullptr)
			*PickedUp = params.PickedUp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.GetOwningMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MonsterActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MonsterUIInterface_C::GetOwningMonster(class AActor** MonsterActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.GetOwningMonster");
		
		UBPI_MonsterUIInterface_C_GetOwningMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MonsterActor != nullptr)
			*MonsterActor = params.MonsterActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.DropPlayer
	 * 		Flags  -> ()
	 */
	void UBPI_MonsterUIInterface_C::DropPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.DropPlayer");
		
		UBPI_MonsterUIInterface_C_DropPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.PickupPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkCharacter_C*                      PickedUpPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MonsterUIInterface_C::PickupPlayer(class ABP_NetworkCharacter_C* PickedUpPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.PickupPlayer");
		
		UBPI_MonsterUIInterface_C_PickupPlayer_Params params {};
		params.PickedUpPlayer = PickedUpPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceGetMonsterName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InterfaceMonsterName                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPI_MonsterUIInterface_C::InterfaceGetMonsterName(class FString* InterfaceMonsterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceGetMonsterName");
		
		UBPI_MonsterUIInterface_C_InterfaceGetMonsterName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InterfaceMonsterName != nullptr)
			*InterfaceMonsterName = params.InterfaceMonsterName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceResetSecurityUI
	 * 		Flags  -> ()
	 */
	void UBPI_MonsterUIInterface_C::InterfaceResetSecurityUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceResetSecurityUI");
		
		UBPI_MonsterUIInterface_C_InterfaceResetSecurityUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceToggleCanInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_MonsterUIInterface_C::InterfaceToggleCanInteract(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceToggleCanInteract");
		
		UBPI_MonsterUIInterface_C_InterfaceToggleCanInteract_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceShowMonsterInteractUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPI_MonsterUIInterface_C::InterfaceShowMonsterInteractUI(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceShowMonsterInteractUI");
		
		UBPI_MonsterUIInterface_C_InterfaceShowMonsterInteractUI_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceClientMonsterInteractUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPI_MonsterUIInterface_C::InterfaceClientMonsterInteractUI(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MonsterUIInterface.BPI_MonsterUIInterface_C.InterfaceClientMonsterInteractUI");
		
		UBPI_MonsterUIInterface_C_InterfaceClientMonsterInteractUI_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_MonsterUIInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_MonsterUIInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MonsterUIInterface.BPI_MonsterUIInterface_C");
		return ptr;
	}

}


