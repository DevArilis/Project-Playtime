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
	 * 		Name   -> Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.SetCosmeticFromStruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCosmetic                                   Cosmetic                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_BoxySkin_C::SetCosmeticFromStruct(const struct FCosmetic& Cosmetic, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.SetCosmeticFromStruct");
		
		ABP_MeshContainer_BoxySkin_C_SetCosmeticFromStruct_Params params {};
		params.Cosmetic = Cosmetic;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.SetEyeDecalVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MeshContainer_BoxySkin_C::SetEyeDecalVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.SetEyeDecalVisibility");
		
		ABP_MeshContainer_BoxySkin_C_SetEyeDecalVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.Playtime Character Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlaytimeCharacter*                          PlaytimeCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_BoxySkin_C::PlaytimeCharacterTick(class APlaytimeCharacter* PlaytimeCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.Playtime Character Tick");
		
		ABP_MeshContainer_BoxySkin_C_PlaytimeCharacterTick_Params params {};
		params.PlaytimeCharacter = PlaytimeCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.Network Boxy Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NetworkBoxy_C*                           NetworkBoxy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_BoxySkin_C::NetworkBoxyTick(class ABP_NetworkBoxy_C* NetworkBoxy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.Network Boxy Tick");
		
		ABP_MeshContainer_BoxySkin_C_NetworkBoxyTick_Params params {};
		params.NetworkBoxy = NetworkBoxy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.ExecuteUbergraph_BP_MeshContainer_BoxySkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeshContainer_BoxySkin_C::ExecuteUbergraph_BP_MeshContainer_BoxySkin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C.ExecuteUbergraph_BP_MeshContainer_BoxySkin");
		
		ABP_MeshContainer_BoxySkin_C_ExecuteUbergraph_BP_MeshContainer_BoxySkin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeshContainer_BoxySkin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeshContainer_BoxySkin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeshContainer_BoxySkin.BP_MeshContainer_BoxySkin_C");
		return ptr;
	}

}


