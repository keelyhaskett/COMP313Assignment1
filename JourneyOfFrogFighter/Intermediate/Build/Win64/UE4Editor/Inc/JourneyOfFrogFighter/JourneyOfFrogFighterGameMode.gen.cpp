// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JourneyOfFrogFighter/JourneyOfFrogFighterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJourneyOfFrogFighterGameMode() {}
// Cross Module References
	JOURNEYOFFROGFIGHTER_API UClass* Z_Construct_UClass_AJourneyOfFrogFighterGameMode_NoRegister();
	JOURNEYOFFROGFIGHTER_API UClass* Z_Construct_UClass_AJourneyOfFrogFighterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_JourneyOfFrogFighter();
// End Cross Module References
	void AJourneyOfFrogFighterGameMode::StaticRegisterNativesAJourneyOfFrogFighterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AJourneyOfFrogFighterGameMode_NoRegister()
	{
		return AJourneyOfFrogFighterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJourneyOfFrogFighterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJourneyOfFrogFighterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JourneyOfFrogFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJourneyOfFrogFighterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "JourneyOfFrogFighterGameMode.h" },
		{ "ModuleRelativePath", "JourneyOfFrogFighterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJourneyOfFrogFighterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJourneyOfFrogFighterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJourneyOfFrogFighterGameMode_Statics::ClassParams = {
		&AJourneyOfFrogFighterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJourneyOfFrogFighterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJourneyOfFrogFighterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJourneyOfFrogFighterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJourneyOfFrogFighterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJourneyOfFrogFighterGameMode, 1304825568);
	template<> JOURNEYOFFROGFIGHTER_API UClass* StaticClass<AJourneyOfFrogFighterGameMode>()
	{
		return AJourneyOfFrogFighterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJourneyOfFrogFighterGameMode(Z_Construct_UClass_AJourneyOfFrogFighterGameMode, &AJourneyOfFrogFighterGameMode::StaticClass, TEXT("/Script/JourneyOfFrogFighter"), TEXT("AJourneyOfFrogFighterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJourneyOfFrogFighterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
