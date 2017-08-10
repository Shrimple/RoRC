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
	RORC_API UFunction* Z_Construct_UFunction_ASNPlayer_StartJump();
	RORC_API UFunction* Z_Construct_UFunction_ASNPlayer_StopJump();
	RORC_API UClass* Z_Construct_UClass_ASNPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RoRC();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ASNPlayer::StaticRegisterNativesASNPlayer()
	{
		UClass* Class = ASNPlayer::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "MoveForward", (Native)&ASNPlayer::execMoveForward },
			{ "MoveRight", (Native)&ASNPlayer::execMoveRight },
			{ "StartJump", (Native)&ASNPlayer::execStartJump },
			{ "StopJump", (Native)&ASNPlayer::execStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASNPlayer_MoveForward()
	{
		struct SNPlayer_eventMoveForward_Parms
		{
			float Value;
		};
		UObject* Outer = Z_Construct_UClass_ASNPlayer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveForward"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(SNPlayer_eventMoveForward_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, SNPlayer_eventMoveForward_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SNPlayer.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Handles input for moving forward and backward."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASNPlayer_MoveRight()
	{
		struct SNPlayer_eventMoveRight_Parms
		{
			float Value;
		};
		UObject* Outer = Z_Construct_UClass_ASNPlayer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(SNPlayer_eventMoveRight_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, SNPlayer_eventMoveRight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SNPlayer.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Handles input for moving right and left."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASNPlayer_StartJump()
	{
		UObject* Outer = Z_Construct_UClass_ASNPlayer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SNPlayer.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets jump flag when key is pressed."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASNPlayer_StopJump()
	{
		UObject* Outer = Z_Construct_UClass_ASNPlayer();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SNPlayer.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Clears jump flag when key is released."));
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
				OuterClass->LinkChild(Z_Construct_UFunction_ASNPlayer_StartJump());
				OuterClass->LinkChild(Z_Construct_UFunction_ASNPlayer_StopJump());

				UProperty* NewProp_FPSMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FPSMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FPSMesh, ASNPlayer), 0x00100000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_FPSCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FPSCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FPSCameraComponent, ASNPlayer), 0x00100000000a0009, Z_Construct_UClass_UCameraComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASNPlayer_MoveForward(), "MoveForward"); // 3305799837
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASNPlayer_MoveRight(), "MoveRight"); // 273877745
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASNPlayer_StartJump(), "StartJump"); // 1393698711
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASNPlayer_StopJump(), "StopJump"); // 3230628067
				static TCppClassTypeInfo<TCppClassTypeTraits<ASNPlayer> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SNPlayer.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SNPlayer.h"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("ModuleRelativePath"), TEXT("SNPlayer.h"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("ToolTip"), TEXT("First-person mesh (arms), visible only to the owning player."));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("Category"), TEXT("SNPlayer"));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("ModuleRelativePath"), TEXT("SNPlayer.h"));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("ToolTip"), TEXT("FPS camera."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASNPlayer, 2149707481);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASNPlayer(Z_Construct_UClass_ASNPlayer, &ASNPlayer::StaticClass, TEXT("/Script/RoRC"), TEXT("ASNPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASNPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
