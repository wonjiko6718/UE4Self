// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Self/TriggerAct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerAct() {}
// Cross Module References
	UE4SELF_API UClass* Z_Construct_UClass_ATriggerAct_NoRegister();
	UE4SELF_API UClass* Z_Construct_UClass_ATriggerAct();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE4Self();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ATriggerAct::StaticRegisterNativesATriggerAct()
	{
	}
	UClass* Z_Construct_UClass_ATriggerAct_NoRegister()
	{
		return ATriggerAct::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerAct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TA_Ceiling_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TA_Ceiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TA_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TA_Body;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerAct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Self,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerAct_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerAct.h" },
		{ "ModuleRelativePath", "TriggerAct.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerAct_Statics::NewProp_TA_Ceiling_MetaData[] = {
		{ "Category", "TriggerAct" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerAct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerAct_Statics::NewProp_TA_Ceiling = { "TA_Ceiling", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerAct, TA_Ceiling), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerAct_Statics::NewProp_TA_Ceiling_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATriggerAct_Statics::NewProp_TA_Ceiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerAct_Statics::NewProp_TA_Body_MetaData[] = {
		{ "Category", "TriggerAct" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerAct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerAct_Statics::NewProp_TA_Body = { "TA_Body", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerAct, TA_Body), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerAct_Statics::NewProp_TA_Body_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATriggerAct_Statics::NewProp_TA_Body_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerAct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerAct_Statics::NewProp_TA_Ceiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerAct_Statics::NewProp_TA_Body,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerAct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerAct>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerAct_Statics::ClassParams = {
		&ATriggerAct::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATriggerAct_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATriggerAct_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerAct_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATriggerAct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerAct()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerAct_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerAct, 3972416530);
	template<> UE4SELF_API UClass* StaticClass<ATriggerAct>()
	{
		return ATriggerAct::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerAct(Z_Construct_UClass_ATriggerAct, &ATriggerAct::StaticClass, TEXT("/Script/UE4Self"), TEXT("ATriggerAct"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerAct);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
