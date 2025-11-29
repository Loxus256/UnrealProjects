// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplashScreen/SplashScreenWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSplashScreenWidget() {}

// ********** Begin Cross Module References ********************************************************
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_USplashScreenWidget();
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_USplashScreenWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortfolioMultiproj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USplashScreenWidget Function TransitionToMainMenu ************************
struct Z_Construct_UFunction_USplashScreenWidget_TransitionToMainMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SplashScreen" },
		{ "ModuleRelativePath", "SplashScreen/SplashScreenWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TransitionToMainMenu constinit property declarations ******************
// ********** End Function TransitionToMainMenu constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplashScreenWidget_TransitionToMainMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplashScreenWidget, nullptr, "TransitionToMainMenu", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplashScreenWidget_TransitionToMainMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplashScreenWidget_TransitionToMainMenu_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USplashScreenWidget_TransitionToMainMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplashScreenWidget_TransitionToMainMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplashScreenWidget::execTransitionToMainMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TransitionToMainMenu();
	P_NATIVE_END;
}
// ********** End Class USplashScreenWidget Function TransitionToMainMenu **************************

// ********** Begin Class USplashScreenWidget ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USplashScreenWidget;
UClass* USplashScreenWidget::GetPrivateStaticClass()
{
	using TClass = USplashScreenWidget;
	if (!Z_Registration_Info_UClass_USplashScreenWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SplashScreenWidget"),
			Z_Registration_Info_UClass_USplashScreenWidget.InnerSingleton,
			StaticRegisterNativesUSplashScreenWidget,
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
	return Z_Registration_Info_UClass_USplashScreenWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USplashScreenWidget_NoRegister()
{
	return USplashScreenWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USplashScreenWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SplashScreen/SplashScreenWidget.h" },
		{ "ModuleRelativePath", "SplashScreen/SplashScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeAnimLogo_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "SplashScreen/SplashScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuLevelName_MetaData[] = {
		{ "Category", "SplashSettings" },
		{ "ModuleRelativePath", "SplashScreen/SplashScreenWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USplashScreenWidget constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FadeAnimLogo;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MainMenuLevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USplashScreenWidget constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("TransitionToMainMenu"), .Pointer = &USplashScreenWidget::execTransitionToMainMenu },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USplashScreenWidget_TransitionToMainMenu, "TransitionToMainMenu" }, // 205708099
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplashScreenWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USplashScreenWidget_Statics

// ********** Begin Class USplashScreenWidget Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USplashScreenWidget_Statics::NewProp_FadeAnimLogo = { "FadeAnimLogo", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplashScreenWidget, FadeAnimLogo), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeAnimLogo_MetaData), NewProp_FadeAnimLogo_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USplashScreenWidget_Statics::NewProp_MainMenuLevelName = { "MainMenuLevelName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplashScreenWidget, MainMenuLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuLevelName_MetaData), NewProp_MainMenuLevelName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplashScreenWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplashScreenWidget_Statics::NewProp_FadeAnimLogo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplashScreenWidget_Statics::NewProp_MainMenuLevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplashScreenWidget_Statics::PropPointers) < 2048);
// ********** End Class USplashScreenWidget Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_USplashScreenWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PortfolioMultiproj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplashScreenWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USplashScreenWidget_Statics::ClassParams = {
	&USplashScreenWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USplashScreenWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USplashScreenWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplashScreenWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USplashScreenWidget_Statics::Class_MetaDataParams)
};
void USplashScreenWidget::StaticRegisterNativesUSplashScreenWidget()
{
	UClass* Class = USplashScreenWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USplashScreenWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_USplashScreenWidget()
{
	if (!Z_Registration_Info_UClass_USplashScreenWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplashScreenWidget.OuterSingleton, Z_Construct_UClass_USplashScreenWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USplashScreenWidget.OuterSingleton;
}
USplashScreenWidget::USplashScreenWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USplashScreenWidget);
USplashScreenWidget::~USplashScreenWidget() {}
// ********** End Class USplashScreenWidget ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h__Script_PortfolioMultiproj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USplashScreenWidget, USplashScreenWidget::StaticClass, TEXT("USplashScreenWidget"), &Z_Registration_Info_UClass_USplashScreenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplashScreenWidget), 1390274337U) },
	};
}; // Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h__Script_PortfolioMultiproj_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h__Script_PortfolioMultiproj_1017496989{
	TEXT("/Script/PortfolioMultiproj"),
	Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h__Script_PortfolioMultiproj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h__Script_PortfolioMultiproj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
