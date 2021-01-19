// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Self/CollectCoffee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectCoffee() {}
// Cross Module References
	UE4SELF_API UClass* Z_Construct_UClass_ACollectCoffee_NoRegister();
	UE4SELF_API UClass* Z_Construct_UClass_ACollectCoffee();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE4Self();
	UE4SELF_API UFunction* Z_Construct_UFunction_ACollectCoffee_OnEffectFinished();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACollectCoffee::StaticRegisterNativesACollectCoffee()
	{
		UClass* Class = ACollectCoffee::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEffectFinished", &ACollectCoffee::execOnEffectFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics
	{
		struct CollectCoffee_eventOnEffectFinished_Parms
		{
			UParticleSystemComponent* PSystem;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics::NewProp_PSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics::NewProp_PSystem = { "PSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CollectCoffee_eventOnEffectFinished_Parms, PSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics::NewProp_PSystem_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics::NewProp_PSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics::NewProp_PSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CollectCoffee.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectCoffee, nullptr, "OnEffectFinished", sizeof(CollectCoffee_eventOnEffectFinished_Parms), Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectCoffee_OnEffectFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectCoffee_OnEffectFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACollectCoffee_NoRegister()
	{
		return ACollectCoffee::StaticClass();
	}
	struct Z_Construct_UClass_ACollectCoffee_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoffeeEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CoffeeEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoffeeEndEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoffeeEndEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoffeeTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoffeeTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoffeeBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoffeeBody;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollectCoffee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Self,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACollectCoffee_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACollectCoffee_OnEffectFinished, "OnEffectFinished" }, // 3609374763
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectCoffee_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CollectCoffee.h" },
		{ "ModuleRelativePath", "CollectCoffee.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeEnd_MetaData[] = {
		{ "Category", "CollectCoffee" },
		{ "ModuleRelativePath", "CollectCoffee.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeEnd = { "CoffeeEnd", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectCoffee, CoffeeEnd), METADATA_PARAMS(Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeEndEffect_MetaData[] = {
		{ "Category", "CollectCoffee" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CollectCoffee.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeEndEffect = { "CoffeeEndEffect", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectCoffee, CoffeeEndEffect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeEndEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeEndEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeTrigger_MetaData[] = {
		{ "Category", "CollectCoffee" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CollectCoffee.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeTrigger = { "CoffeeTrigger", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectCoffee, CoffeeTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeTrigger_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeBody_MetaData[] = {
		{ "Category", "CollectCoffee" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CollectCoffee.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeBody = { "CoffeeBody", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectCoffee, CoffeeBody), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeBody_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeBody_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollectCoffee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeEndEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectCoffee_Statics::NewProp_CoffeeBody,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollectCoffee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectCoffee>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACollectCoffee_Statics::ClassParams = {
		&ACollectCoffee::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACollectCoffee_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACollectCoffee_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACollectCoffee_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACollectCoffee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollectCoffee()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACollectCoffee_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACollectCoffee, 1315429606);
	template<> UE4SELF_API UClass* StaticClass<ACollectCoffee>()
	{
		return ACollectCoffee::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollectCoffee(Z_Construct_UClass_ACollectCoffee, &ACollectCoffee::StaticClass, TEXT("/Script/UE4Self"), TEXT("ACollectCoffee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectCoffee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
