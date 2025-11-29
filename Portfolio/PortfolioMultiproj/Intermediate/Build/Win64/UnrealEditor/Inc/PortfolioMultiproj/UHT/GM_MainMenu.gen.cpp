// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainMenu/GM_MainMenu.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGM_MainMenu() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_AGM_MainMenu();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_AGM_MainMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortfolioMultiproj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGM_MainMenu *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGM_MainMenu;
UClass* AGM_MainMenu::GetPrivateStaticClass()
{
	using TClass = AGM_MainMenu;
	if (!Z_Registration_Info_UClass_AGM_MainMenu.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GM_MainMenu"),
			Z_Registration_Info_UClass_AGM_MainMenu.InnerSingleton,
			StaticRegisterNativesAGM_MainMenu,
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
	return Z_Registration_Info_UClass_AGM_MainMenu.InnerSingleton;
}
UClass* Z_Construct_UClass_AGM_MainMenu_NoRegister()
{
	return AGM_MainMenu::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGM_MainMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MainMenu/GM_MainMenu.h" },
		{ "ModuleRelativePath", "MainMenu/GM_MainMenu.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The widget class to use for the main menu\n" },
#endif
		{ "ModuleRelativePath", "MainMenu/GM_MainMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The widget class to use for the main menu" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AGM_MainMenu constinit property declarations *****************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AGM_MainMenu constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_MainMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGM_MainMenu_Statics

// ********** Begin Class AGM_MainMenu Property Definitions ****************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGM_MainMenu_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGM_MainMenu, MainMenuWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetClass_MetaData), NewProp_MainMenuWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGM_MainMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_MainMenu_Statics::NewProp_MainMenuWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_MainMenu_Statics::PropPointers) < 2048);
// ********** End Class AGM_MainMenu Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_AGM_MainMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PortfolioMultiproj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_MainMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGM_MainMenu_Statics::ClassParams = {
	&AGM_MainMenu::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGM_MainMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGM_MainMenu_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_MainMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_AGM_MainMenu_Statics::Class_MetaDataParams)
};
void AGM_MainMenu::StaticRegisterNativesAGM_MainMenu()
{
}
UClass* Z_Construct_UClass_AGM_MainMenu()
{
	if (!Z_Registration_Info_UClass_AGM_MainMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGM_MainMenu.OuterSingleton, Z_Construct_UClass_AGM_MainMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGM_MainMenu.OuterSingleton;
}
AGM_MainMenu::AGM_MainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGM_MainMenu);
AGM_MainMenu::~AGM_MainMenu() {}
// ********** End Class AGM_MainMenu ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GM_MainMenu_h__Script_PortfolioMultiproj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGM_MainMenu, AGM_MainMenu::StaticClass, TEXT("AGM_MainMenu"), &Z_Registration_Info_UClass_AGM_MainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGM_MainMenu), 370311525U) },
	};
}; // Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GM_MainMenu_h__Script_PortfolioMultiproj_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GM_MainMenu_h__Script_PortfolioMultiproj_76371607{
	TEXT("/Script/PortfolioMultiproj"),
	Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GM_MainMenu_h__Script_PortfolioMultiproj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GM_MainMenu_h__Script_PortfolioMultiproj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
