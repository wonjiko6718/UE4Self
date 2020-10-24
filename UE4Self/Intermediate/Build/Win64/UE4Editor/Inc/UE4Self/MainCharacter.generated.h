// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4SELF_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define UE4SELF_MainCharacter_generated_h

#define UE4Self_Source_UE4Self_MainCharacter_h_12_RPC_WRAPPERS
#define UE4Self_Source_UE4Self_MainCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4Self_Source_UE4Self_MainCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4Self"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define UE4Self_Source_UE4Self_MainCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4Self"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define UE4Self_Source_UE4Self_MainCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define UE4Self_Source_UE4Self_MainCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define UE4Self_Source_UE4Self_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define UE4Self_Source_UE4Self_MainCharacter_h_9_PROLOG
#define UE4Self_Source_UE4Self_MainCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Self_Source_UE4Self_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4Self_Source_UE4Self_MainCharacter_h_12_RPC_WRAPPERS \
	UE4Self_Source_UE4Self_MainCharacter_h_12_INCLASS \
	UE4Self_Source_UE4Self_MainCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Self_Source_UE4Self_MainCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Self_Source_UE4Self_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4Self_Source_UE4Self_MainCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Self_Source_UE4Self_MainCharacter_h_12_INCLASS_NO_PURE_DECLS \
	UE4Self_Source_UE4Self_MainCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4SELF_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Self_Source_UE4Self_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
