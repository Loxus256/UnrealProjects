// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplashScreen/GM_SplashScreen.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGM_SplashScreen() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_AGM_SplashScreen();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_AGM_SplashScreen_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortfolioMultiproj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGM_SplashScreen *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGM_SplashScreen;
UClass* AGM_SplashScreen::GetPrivateStaticClass()
{
	using TClass = AGM_SplashScreen;
	if (!Z_Registration_Info_UClass_AGM_SplashScreen.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GM_SplashScreen"),
			Z_Registration_Info_UClass_AGM_SplashScreen.InnerSingleton,
			StaticRegisterNativesAGM_SplashScreen,
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
	return Z_Registration_Info_UClass_AGM_SplashScreen.InnerSingleton;
}
UClass* Z_Construct_UClass_AGM_SplashScreen_NoRegister()
{
	return AGM_SplashScreen::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGM_SplashScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SplashScreen/GM_SplashScreen.h" },
		{ "ModuleRelativePath", "SplashScreen/GM_SplashScreen.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogoWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "SplashScreen/GM_SplashScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SplashScreen/GM_SplashScreen.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AGM_SplashScreen constinit property declarations *************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_LogoWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AGM_SplashScreen constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_SplashScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGM_SplashScreen_Statics

// ********** Begin Class AGM_SplashScreen Property Definitions ************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGM_SplashScreen_Statics::NewProp_LogoWidgetClass = { "LogoWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGM_SplashScreen, LogoWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogoWidgetClass_MetaData), NewProp_LogoWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGM_SplashScreen_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGM_SplashScreen, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidget_MetaData), NewProp_CurrentWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGM_SplashScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_SplashScreen_Statics::NewProp_LogoWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_SplashScreen_Statics::NewProp_CurrentWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_SplashScreen_Statics::PropPointers) < 2048);
// ********** End Class AGM_SplashScreen Property Definitions **************************************
UObject* (*const Z_Construct_UClass_AGM_SplashScreen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PortfolioMultiproj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_SplashScreen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGM_SplashScreen_Statics::ClassParams = {
	&AGM_SplashScreen::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGM_SplashScreen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGM_SplashScreen_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_SplashScreen_Statics::Class_MetaDataParams), Z_Construct_UClass_AGM_SplashScreen_Statics::Class_MetaDataParams)
};
void AGM_SplashScreen::StaticRegisterNativesAGM_SplashScreen()
{
}
UClass* Z_Construct_UClass_AGM_SplashScreen()
{
	if (!Z_Registration_Info_UClass_AGM_SplashScreen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGM_SplashScreen.OuterSingleton, Z_Construct_UClass_AGM_SplashScreen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGM_SplashScreen.OuterSingleton;
}
AGM_SplashScreen::AGM_SplashScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGM_SplashScreen);
AGM_SplashScreen::~AGM_SplashScreen() {}
// ********** End Class AGM_SplashScreen ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_GM_SplashScreen_h__Script_PortfolioMultiproj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGM_SplashScreen, AGM_SplashScreen::StaticClass, TEXT("AGM_SplashScreen"), &Z_Registration_Info_UClass_AGM_SplashScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGM_SplashScreen), 1016426251U) },
	};
}; // Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_GM_SplashScreen_h__Script_PortfolioMultiproj_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_GM_SplashScreen_h__Script_PortfolioMultiproj_593769015{
	TEXT("/Script/PortfolioMultiproj"),
	Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_GM_SplashScreen_h__Script_PortfolioMultiproj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_GM_SplashScreen_h__Script_PortfolioMultiproj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
