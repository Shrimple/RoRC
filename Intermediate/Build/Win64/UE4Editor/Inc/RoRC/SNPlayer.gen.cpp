// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SNPlayer.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNPlayer() {}
// Cross Module References
	RORC_API UFunction* Z_Construct_UFunction_ASNPlayer_MoveForward();
	RORC_API UClass* Z_Construct_UClass_ASNPlayer();
	RORC_API UFunction* Z_Construct_UFunction_ASNPlayer_MoveRight();
	RORC_API UFunction* Z_Construct_UFunction_ASNPlayer_OnStartJump();
	RORC_API UFunction* Z_Construct_UFunction_ASNPlayer_OnStopJump();
	RORC_API UClass* Z_Construct_UClass_ASNPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RoRC();
// End Cross Module References
	void ASNPlayer::StaticRegisterNativesASNPlayer()
	{
		UClass* Class = ASNPlayer::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "MoveForward", (Native)&ASNPlayer::execMoveForward },
			{ "MoveRight", (Native)&ASNPlayer::execMoveRight },
			{ "OnStartJump", (Native)&ASNPlayer::execOnStartJump },
			{ "OnStopJump", (Native)&ASNPlayer::execOnStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASNPlayer_MoveForward()
	{
		struct SNPlayer_eventMoveForward_Parms
		{
			float Val;
		};
		UObject* Outer = Z_Construct_UClass_ASNPlayer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveForward"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(SNPlayer_eventMoveForward_Parms));
			UProperty* NewProp_Val = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Val"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Val, SNPlayer_eventMoveForward_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SNPlayer.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("handles moving forward/backward"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASNPlayer_MoveRight()
	{
		struct SNPlayer_eventMoveRight_Parms
		{
			float Val;
		};
		UObject* Outer = Z_Construct_UClass_ASNPlayer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(SNPlayer_eventMoveRight_Parms));
			UProperty* NewProp_Val = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Val"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Val, SNPlayer_eventMoveRight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SNPlayer.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("handles strafing"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASNPlayer_OnStartJump()
	{
		UObject* Outer = Z_Construct_UClass_ASNPlayer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnStartJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SNPlayer.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("sets jump flag when key is pressed"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASNPlayer_OnStopJump()
	{
		UObject* Outer = Z_Construct_UClass_ASNPlayer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnStopJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SNPlayer.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("clears jump flag when key is released"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASNPlayer_NoRegister()
	{
		return ASNPlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_ASNPlayer()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_RoRC();
			OuterClass = ASNPlayer::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASNPlayer_MoveForward());
				OuterClass->LinkChild(Z_Construct_UFunction_ASNPlayer_MoveRight());
				OuterClass->LinkChild(Z_Construct_UFunction_ASNPlayer_OnStartJump());
				OuterClass->LinkChild(Z_Construct_UFunction_ASNPlayer_OnStopJump());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASNPlayer_MoveForward(), "MoveForward"); // 3144628192
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASNPlayer_MoveRight(), "MoveRight"); // 2060161223
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASNPlayer_OnStartJump(), "OnStartJump"); // 2830254837
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASNPlayer_OnStopJump(), "OnStopJump"); // 3045828441
				static TCppClassTypeInfo<TCppClassTypeTraits<ASNPlayer> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SNPlayer.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SNPlayer.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASNPlayer, 1869672755);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASNPlayer(Z_Construct_UClass_ASNPlayer, &ASNPlayer::StaticClass, TEXT("/Script/RoRC"), TEXT("ASNPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASNPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
