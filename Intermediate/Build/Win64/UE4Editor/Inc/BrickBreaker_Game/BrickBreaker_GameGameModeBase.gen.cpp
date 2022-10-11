// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrickBreaker_Game/BrickBreaker_GameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrickBreaker_GameGameModeBase() {}
// Cross Module References
	BRICKBREAKER_GAME_API UClass* Z_Construct_UClass_ABrickBreaker_GameGameModeBase_NoRegister();
	BRICKBREAKER_GAME_API UClass* Z_Construct_UClass_ABrickBreaker_GameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BrickBreaker_Game();
// End Cross Module References
	void ABrickBreaker_GameGameModeBase::StaticRegisterNativesABrickBreaker_GameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABrickBreaker_GameGameModeBase_NoRegister()
	{
		return ABrickBreaker_GameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABrickBreaker_GameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrickBreaker_GameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BrickBreaker_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrickBreaker_GameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BrickBreaker_GameGameModeBase.h" },
		{ "ModuleRelativePath", "BrickBreaker_GameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrickBreaker_GameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrickBreaker_GameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABrickBreaker_GameGameModeBase_Statics::ClassParams = {
		&ABrickBreaker_GameGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABrickBreaker_GameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABrickBreaker_GameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrickBreaker_GameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABrickBreaker_GameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrickBreaker_GameGameModeBase, 1091936981);
	template<> BRICKBREAKER_GAME_API UClass* StaticClass<ABrickBreaker_GameGameModeBase>()
	{
		return ABrickBreaker_GameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrickBreaker_GameGameModeBase(Z_Construct_UClass_ABrickBreaker_GameGameModeBase, &ABrickBreaker_GameGameModeBase::StaticClass, TEXT("/Script/BrickBreaker_Game"), TEXT("ABrickBreaker_GameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrickBreaker_GameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
