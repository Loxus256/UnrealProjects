// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SplashScreen/SplashScreenWidget.h"

#ifdef PORTFOLIOMULTIPROJ_SplashScreenWidget_generated_h
#error "SplashScreenWidget.generated.h already included, missing '#pragma once' in SplashScreenWidget.h"
#endif
#define PORTFOLIOMULTIPROJ_SplashScreenWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USplashScreenWidget ******************************************************
#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTransitionToMainMenu);


struct Z_Construct_UClass_USplashScreenWidget_Statics;
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_USplashScreenWidget_NoRegister();

#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplashScreenWidget(); \
	friend struct ::Z_Construct_UClass_USplashScreenWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PORTFOLIOMULTIPROJ_API UClass* ::Z_Construct_UClass_USplashScreenWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(USplashScreenWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PortfolioMultiproj"), Z_Construct_UClass_USplashScreenWidget_NoRegister) \
	DECLARE_SERIALIZER(USplashScreenWidget)


#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplashScreenWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USplashScreenWidget(USplashScreenWidget&&) = delete; \
	USplashScreenWidget(const USplashScreenWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplashScreenWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplashScreenWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplashScreenWidget) \
	NO_API virtual ~USplashScreenWidget();


#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h_13_PROLOG
#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USplashScreenWidget;

// ********** End Class USplashScreenWidget ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_SplashScreenWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
