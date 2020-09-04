// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4SELF_UE4SelfCharacter_generated_h
#error "UE4SelfCharacter.generated.h already included, missing '#pragma once' in UE4SelfCharacter.h"
#endif
#define UE4SELF_UE4SelfCharacter_generated_h

#define UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_RPC_WRAPPERS
#define UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUE4SelfCharacter(); \
	friend struct Z_Construct_UClass_AUE4SelfCharacter_Statics; \
public: \
	DECLARE_CLASS(AUE4SelfCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4Self"), NO_API) \
	DECLARE_SERIALIZER(AUE4SelfCharacter)


#define UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUE4SelfCharacter(); \
	friend struct Z_Construct_UClass_AUE4SelfCharacter_Statics; \
public: \
	DECLARE_CLASS(AUE4SelfCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4Self"), NO_API) \
	DECLARE_SERIALIZER(AUE4SelfCharacter)


#define UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUE4SelfCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUE4SelfCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4SelfCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4SelfCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4SelfCharacter(AUE4SelfCharacter&&); \
	NO_API AUE4SelfCharacter(const AUE4SelfCharacter&); \
public:


#define UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4SelfCharacter(AUE4SelfCharacter&&); \
	NO_API AUE4SelfCharacter(const AUE4SelfCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4SelfCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4SelfCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUE4SelfCharacter)


#define UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AUE4SelfCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AUE4SelfCharacter, FollowCamera); }


#define UE4Self_Source_UE4Self_UE4SelfCharacter_h_9_PROLOG
#define UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_RPC_WRAPPERS \
	UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_INCLASS \
	UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_INCLASS_NO_PURE_DECLS \
	UE4Self_Source_UE4Self_UE4SelfCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4SELF_API UClass* StaticClass<class AUE4SelfCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Self_Source_UE4Self_UE4SelfCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
