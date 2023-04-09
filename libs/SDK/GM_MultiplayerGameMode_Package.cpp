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
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.GetSelectedToy
	 * 		Flags  -> ()
	 */
	E_ToyType AGM_MultiplayerGameMode_C::GetSelectedToy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.GetSelectedToy");
		
		AGM_MultiplayerGameMode_C_GetSelectedToy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.GetToyPartMeshFromIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMesh*                                 StaticMesh                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_MultiplayerGameMode_C::GetToyPartMeshFromIndex(int32_t Index, class UStaticMesh** StaticMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.GetToyPartMeshFromIndex");
		
		AGM_MultiplayerGameMode_C_GetToyPartMeshFromIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StaticMesh != nullptr)
			*StaticMesh = params.StaticMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.SpawnToyPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    SpawnRotation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_MultiplayerGameMode_C::SpawnToyPart(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.SpawnToyPart");
		
		AGM_MultiplayerGameMode_C_SpawnToyPart_Params params {};
		params.SpawnLocation = SpawnLocation;
		params.SpawnRotation = SpawnRotation;
		params.CollisionHandlingOverride = CollisionHandlingOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.SelectToy
	 * 		Flags  -> ()
	 */
	E_ToyType AGM_MultiplayerGameMode_C::SelectToy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.SelectToy");
		
		AGM_MultiplayerGameMode_C_SelectToy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.StartGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_MultiplayerGameMode_C::StartGame(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.StartGame");
		
		AGM_MultiplayerGameMode_C_StartGame_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.Spawn Player if Game Started
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_MultiplayerGameMode_C::SpawnPlayerifGameStarted(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.Spawn Player if Game Started");
		
		AGM_MultiplayerGameMode_C_SpawnPlayerifGameStarted_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.DebugServerMonsters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AGM_MultiplayerGameMode_C::DebugServerMonsters(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.DebugServerMonsters");
		
		AGM_MultiplayerGameMode_C_DebugServerMonsters_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.DebugClientMonsters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AGM_MultiplayerGameMode_C::DebugClientMonsters(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.DebugClientMonsters");
		
		AGM_MultiplayerGameMode_C_DebugClientMonsters_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.Spawn Monster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ClassToSpawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AGM_MultiplayerGameMode_C::SpawnMonster(class UClass* ClassToSpawn, class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.Spawn Monster");
		
		AGM_MultiplayerGameMode_C_SpawnMonster_Params params {};
		params.ClassToSpawn = ClassToSpawn;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.Spawn Monster Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AGM_MultiplayerGameMode_C::SpawnMonsterWidget(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.Spawn Monster Widget");
		
		AGM_MultiplayerGameMode_C_SpawnMonsterWidget_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.Spawn Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_MultiplayerGameMode_C::SpawnPlayer(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.Spawn Player");
		
		AGM_MultiplayerGameMode_C_SpawnPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.RandomizePlayerMonster
	 * 		Flags  -> ()
	 */
	bool AGM_MultiplayerGameMode_C::RandomizePlayerMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.RandomizePlayerMonster");
		
		AGM_MultiplayerGameMode_C_RandomizePlayerMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.K2_PostLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_MultiplayerGameMode_C::K2_PostLogin(class APlayerController* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.K2_PostLogin");
		
		AGM_MultiplayerGameMode_C_K2_PostLogin_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.K2_OnLogout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 ExitingController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_MultiplayerGameMode_C::K2_OnLogout(class AController* ExitingController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.K2_OnLogout");
		
		AGM_MultiplayerGameMode_C_K2_OnLogout_Params params {};
		params.ExitingController = ExitingController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.ExecuteUbergraph_GM_MultiplayerGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_MultiplayerGameMode_C::ExecuteUbergraph_GM_MultiplayerGameMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_MultiplayerGameMode.GM_MultiplayerGameMode_C.ExecuteUbergraph_GM_MultiplayerGameMode");
		
		AGM_MultiplayerGameMode_C_ExecuteUbergraph_GM_MultiplayerGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGM_MultiplayerGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGM_MultiplayerGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GM_MultiplayerGameMode.GM_MultiplayerGameMode_C");
		return ptr;
	}

}


