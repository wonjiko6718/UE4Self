// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Self/SpawnCPActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnCPActor() {}
// Cross Module References
	UE4SELF_API UClass* Z_Construct_UClass_ASpawnCPActor_NoRegister();
	UE4SELF_API UClass* Z_Construct_UClass_ASpawnCPActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE4Self();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ASpawnCPActor::StaticRegisterNativesASpawnCPActor()
	{
	}
	UClass* Z_Construct_UClass_ASpawnCPActor_NoRegister()
	{
		return ASpawnCPActor::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnCPActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetObj;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SCPAA_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SCPAA_Body;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnCPActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Self,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnCPActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnCPActor.h" },
		{ "ModuleRelativePath", "SpawnCPActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnCPActor_Statics::NewProp_TargetObj_MetaData[] = {
		{ "Category", "SpawnCPActor" },
		{ "ModuleRelativePath", "SpawnCPActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnCPActor_Statics::NewProp_TargetObj = { "TargetObj", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnCPActor, TargetObj), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawnCPActor_Statics::NewProp_TargetObj_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpawnCPActor_Statics::NewProp_TargetObj_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnCPActor_Statics::NewProp_SCPAA_Body_MetaData[] = {
		{ "Category", "SpawnCPActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnCPActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnCPActor_Statics::NewProp_SCPAA_Body = { "SCPAA_Body", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnCPActor, SCPAA_Body), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnCPActor_Statics::NewProp_SCPAA_Body_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpawnCPActor_Statics::NewProp_SCPAA_Body_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnCPActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnCPActor_Statics::NewProp_TargetObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnCPActor_Statics::NewProp_SCPAA_Body,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnCPActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnCPActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnCPActor_Statics::ClassParams = {
		&ASpawnCPActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawnCPActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASpawnCPActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnCPActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpawnCPActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnCPActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnCPActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnCPActor, 939039182);
	template<> UE4SELF_API UClass* StaticClass<ASpawnCPActor>()
	{
		return ASpawnCPActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnCPActor(Z_Construct_UClass_ASpawnCPActor, &ASpawnCPActor::StaticClass, TEXT("/Script/UE4Self"), TEXT("ASpawnCPActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnCPActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
