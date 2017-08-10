// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RORC_SNGameMode_generated_h
#error "SNGameMode.generated.h already included, missing '#pragma once' in SNGameMode.h"
#endif
#define RORC_SNGameMode_generated_h

#define RoRC_Source_RoRC_SNGameMode_h_15_RPC_WRAPPERS
#define RoRC_Source_RoRC_SNGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define RoRC_Source_RoRC_SNGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASNGameMode(); \
	friend RORC_API class UClass* Z_Construct_UClass_ASNGameMode(); \
public: \
	DECLARE_CLASS(ASNGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/RoRC"), NO_API) \
	DECLARE_SERIALIZER(ASNGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RoRC_Source_RoRC_SNGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASNGameMode(); \
	friend RORC_API class UClass* Z_Construct_UClass_ASNGameMode(); \
public: \
	DECLARE_CLASS(ASNGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/RoRC"), NO_API) \
	DECLARE_SERIALIZER(ASNGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RoRC_Source_RoRC_SNGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASNGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASNGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASNGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASNGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASNGameMode(ASNGameMode&&); \
	NO_API ASNGameMode(const ASNGameMode&); \
public:


#define RoRC_Source_RoRC_SNGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASNGameMode(ASNGameMode&&); \
	NO_API ASNGameMode(const ASNGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASNGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASNGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASNGameMode)


#define RoRC_Source_RoRC_SNGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define RoRC_Source_RoRC_SNGameMode_h_12_PROLOG
#define RoRC_Source_RoRC_SNGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RoRC_Source_RoRC_SNGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	RoRC_Source_RoRC_SNGameMode_h_15_RPC_WRAPPERS \
	RoRC_Source_RoRC_SNGameMode_h_15_INCLASS \
	RoRC_Source_RoRC_SNGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RoRC_Source_RoRC_SNGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RoRC_Source_RoRC_SNGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	RoRC_Source_RoRC_SNGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RoRC_Source_RoRC_SNGameMode_h_15_INCLASS_NO_PURE_DECLS \
	RoRC_Source_RoRC_SNGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RoRC_Source_RoRC_SNGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
