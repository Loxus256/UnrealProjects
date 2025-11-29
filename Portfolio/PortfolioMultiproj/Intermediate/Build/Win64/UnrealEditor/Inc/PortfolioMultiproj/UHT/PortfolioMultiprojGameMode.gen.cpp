// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioMultiprojGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePortfolioMultiprojGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_APortfolioMultiprojGameMode();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_APortfolioMultiprojGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortfolioMultiproj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APortfolioMultiprojGameMode **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APortfolioMultiprojGameMode;
UClass* APortfolioMultiprojGameMode::GetPrivateStaticClass()
{
	using TClass = APortfolioMultiprojGameMode;
	if (!Z_Registration_Info_UClass_APortfolioMultiprojGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PortfolioMultiprojGameMode"),
			Z_Registration_Info_UClass_APortfolioMultiprojGameMode.InnerSingleton,
			StaticRegisterNativesAPortfolioMultiprojGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APortfolioMultiprojGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_APortfolioMultiprojGameMode_NoRegister()
{
	return APortfolioMultiprojGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APortfolioMultiprojGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PortfolioMultiprojGameMode.h" },
		{ "ModuleRelativePath", "PortfolioMultiprojGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class APortfolioMultiprojGameMode constinit property declarations **************
// ********** End Class APortfolioMultiprojGameMode constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortfolioMultiprojGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APortfolioMultiprojGameMode_Statics
UObject* (*const Z_Construct_UClass_APortfolioMultiprojGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PortfolioMultiproj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioMultiprojGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APortfolioMultiprojGameMode_Statics::ClassParams = {
	&APortfolioMultiprojGameMode::StaticClass,
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
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioMultiprojGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APortfolioMultiprojGameMode_Statics::Class_MetaDataParams)
};
void APortfolioMultiprojGameMode::StaticRegisterNativesAPortfolioMultiprojGameMode()
{
}
UClass* Z_Construct_UClass_APortfolioMultiprojGameMode()
{
	if (!Z_Registration_Info_UClass_APortfolioMultiprojGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortfolioMultiprojGameMode.OuterSingleton, Z_Construct_UClass_APortfolioMultiprojGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APortfolioMultiprojGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APortfolioMultiprojGameMode);
APortfolioMultiprojGameMode::~APortfolioMultiprojGameMode() {}
// ********** End Class APortfolioMultiprojGameMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojGameMode_h__Script_PortfolioMultiproj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APortfolioMultiprojGameMode, APortfolioMultiprojGameMode::StaticClass, TEXT("APortfolioMultiprojGameMode"), &Z_Registration_Info_UClass_APortfolioMultiprojGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortfolioMultiprojGameMode), 2623058357U) },
	};
}; // Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojGameMode_h__Script_PortfolioMultiproj_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojGameMode_h__Script_PortfolioMultiproj_3240570519{
	TEXT("/Script/PortfolioMultiproj"),
	Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojGameMode_h__Script_PortfolioMultiproj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_PortfolioMultiprojGameMode_h__Script_PortfolioMultiproj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
