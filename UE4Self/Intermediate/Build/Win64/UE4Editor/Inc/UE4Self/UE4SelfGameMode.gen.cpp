// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Self/UE4SelfGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4SelfGameMode() {}
// Cross Module References
	UE4SELF_API UClass* Z_Construct_UClass_AUE4SelfGameMode_NoRegister();
	UE4SELF_API UClass* Z_Construct_UClass_AUE4SelfGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE4Self();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AUE4SelfGameMode::StaticRegisterNativesAUE4SelfGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUE4SelfGameMode_NoRegister()
	{
		return AUE4SelfGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE4SelfGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HudWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4SelfGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Self,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4SelfGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE4SelfGameMode.h" },
		{ "ModuleRelativePath", "UE4SelfGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4SelfGameMode_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4SelfGameMode.h" },
		{ "ToolTip", "The instance of the HUD" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4SelfGameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4SelfGameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4SelfGameMode_Statics::NewProp_CurrentWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4SelfGameMode_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4SelfGameMode_Statics::NewProp_HudWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "UE4SelfGameMode.h" },
		{ "ToolTip", "Widget class to use for our HUD screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUE4SelfGameMode_Statics::NewProp_HudWidgetClass = { "HudWidgetClass", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4SelfGameMode, HudWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUE4SelfGameMode_Statics::NewProp_HudWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4SelfGameMode_Statics::NewProp_HudWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUE4SelfGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4SelfGameMode_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4SelfGameMode_Statics::NewProp_HudWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4SelfGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4SelfGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4SelfGameMode_Statics::ClassParams = {
		&AUE4SelfGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUE4SelfGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AUE4SelfGameMode_Statics::PropPointers),
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AUE4SelfGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUE4SelfGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4SelfGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4SelfGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4SelfGameMode, 2379505036);
	template<> UE4SELF_API UClass* StaticClass<AUE4SelfGameMode>()
	{
		return AUE4SelfGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4SelfGameMode(Z_Construct_UClass_AUE4SelfGameMode, &AUE4SelfGameMode::StaticClass, TEXT("/Script/UE4Self"), TEXT("AUE4SelfGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4SelfGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
