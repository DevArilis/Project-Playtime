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
	 * 		Name   -> Function Playtime_JSON_Tools.Playtime_JSON_Tools_C.Get_JSON_Value_Explicit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JSONSource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UPlaytime_JSON_Tools_C::Get_JSON_Value_Explicit(const class FString& JSONSource, const class FString& Key, class UObject* __WorldContext, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_JSON_Tools.Playtime_JSON_Tools_C.Get_JSON_Value_Explicit");
		
		UPlaytime_JSON_Tools_C_Get_JSON_Value_Explicit_Params params {};
		params.JSONSource = JSONSource;
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_JSON_Tools.Playtime_JSON_Tools_C.RemoveSquareBrackets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlaytime_JSON_Tools_C::RemoveSquareBrackets(const class FString& Input, class UObject* __WorldContext, class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_JSON_Tools.Playtime_JSON_Tools_C.RemoveSquareBrackets");
		
		UPlaytime_JSON_Tools_C_RemoveSquareBrackets_Params params {};
		params.Input = Input;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Playtime_JSON_Tools.Playtime_JSON_Tools_C.Get_JSON_Value
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JSONSource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UPlaytime_JSON_Tools_C::Get_JSON_Value(const class FString& JSONSource, const class FString& Key, class UObject* __WorldContext, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Playtime_JSON_Tools.Playtime_JSON_Tools_C.Get_JSON_Value");
		
		UPlaytime_JSON_Tools_C_Get_JSON_Value_Params params {};
		params.JSONSource = JSONSource;
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaytime_JSON_Tools_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaytime_JSON_Tools_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Playtime_JSON_Tools.Playtime_JSON_Tools_C");
		return ptr;
	}

}


