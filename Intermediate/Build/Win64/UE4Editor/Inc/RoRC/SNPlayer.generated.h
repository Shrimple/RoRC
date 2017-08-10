// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RORC_SNPlayer_generated_h
#error "SNPlayer.generated.h already included, missing '#pragma once' in SNPlayer.h"
#endif
#define RORC_SNPlayer_generated_h

#define RoRC_Source_RoRC_SNPlayer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define RoRC_Source_RoRC_SNPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define RoRC_Source_RoRC_SNPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASNPlayer(); \
	friend RORC_API class UClass* Z_Construct_UClass_ASNPlayer(); \
public: \
	DECLARE_CLASS(ASNPlayer, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RoRC"), NO_API) \
	DECLARE_SERIALIZER(ASNPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RoRC_Source_RoRC_SNPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASNPlayer(); \
	friend RORC_API class UClass* Z_Construct_UClass_ASNPlayer(); \
public: \
	DECLARE_CLASS(ASNPlayer, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RoRC"), NO_API) \
	DECLARE_SERIALIZER(ASNPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RoRC_Source_RoRC_SNPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASNPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASNPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASNPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASNPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASNPlayer(ASNPlayer&&); \
	NO_API ASNPlayer(const ASNPlayer&); \
public:


#define RoRC_Source_RoRC_SNPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASNPlayer(ASNPlayer&&); \
	NO_API ASNPlayer(const ASNPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASNPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASNPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASNPlayer)


#define RoRC_Source_RoRC_SNPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define RoRC_Source_RoRC_SNPlayer_h_9_PROLOG
#define RoRC_Source_RoRC_SNPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RoRC_Source_RoRC_SNPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	RoRC_Source_RoRC_SNPlayer_h_12_RPC_WRAPPERS \
	RoRC_Source_RoRC_SNPlayer_h_12_INCLASS \
	RoRC_Source_RoRC_SNPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RoRC_Source_RoRC_SNPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RoRC_Source_RoRC_SNPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	RoRC_Source_RoRC_SNPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RoRC_Source_RoRC_SNPlayer_h_12_INCLASS_NO_PURE_DECLS \
	RoRC_Source_RoRC_SNPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RoRC_Source_RoRC_SNPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
