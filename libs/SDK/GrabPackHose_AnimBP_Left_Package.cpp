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
	 * 		Name   -> Function GrabPackHose_AnimBP_Left.GrabPackHose_AnimBP_Left_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGrabPackHose_AnimBP_Left_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrabPackHose_AnimBP_Left.GrabPackHose_AnimBP_Left_C.BlueprintUpdateAnimation");
		
		UGrabPackHose_AnimBP_Left_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GrabPackHose_AnimBP_Left.GrabPackHose_AnimBP_Left_C.ExecuteUbergraph_GrabPackHose_AnimBP_Left
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGrabPackHose_AnimBP_Left_C::ExecuteUbergraph_GrabPackHose_AnimBP_Left(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrabPackHose_AnimBP_Left.GrabPackHose_AnimBP_Left_C.ExecuteUbergraph_GrabPackHose_AnimBP_Left");
		
		UGrabPackHose_AnimBP_Left_C_ExecuteUbergraph_GrabPackHose_AnimBP_Left_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrabPackHose_AnimBP_Left_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrabPackHose_AnimBP_Left_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass GrabPackHose_AnimBP_Left.GrabPackHose_AnimBP_Left_C");
		return ptr;
	}

}


