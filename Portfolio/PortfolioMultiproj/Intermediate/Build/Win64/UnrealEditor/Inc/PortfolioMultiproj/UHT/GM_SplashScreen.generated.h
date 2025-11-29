// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SplashScreen/GM_SplashScreen.h"

#ifdef PORTFOLIOMULTIPROJ_GM_SplashScreen_generated_h
#error "GM_SplashScreen.generated.h already included, missing '#pragma once' in GM_SplashScreen.h"
#endif
#define PORTFOLIOMULTIPROJ_GM_SplashScreen_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGM_SplashScreen *********************************************************
struct Z_Construct_UClass_AGM_SplashScreen_Statics;
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_AGM_SplashScreen_NoRegister();

#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_GM_SplashScreen_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGM_SplashScreen(); \
	friend struct ::Z_Construct_UClass_AGM_SplashScreen_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PORTFOLIOMULTIPROJ_API UClass* ::Z_Construct_UClass_AGM_SplashScreen_NoRegister(); \
public: \
	DECLARE_CLASS2(AGM_SplashScreen, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortfolioMultiproj"), Z_Construct_UClass_AGM_SplashScreen_NoRegister) \
	DECLARE_SERIALIZER(AGM_SplashScreen)


#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_GM_SplashScreen_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_SplashScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGM_SplashScreen(AGM_SplashScreen&&) = delete; \
	AGM_SplashScreen(const AGM_SplashScreen&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_SplashScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_SplashScreen); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_SplashScreen) \
	NO_API virtual ~AGM_SplashScreen();


#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_GM_SplashScreen_h_13_PROLOG
#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_GM_SplashScreen_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_GM_SplashScreen_h_16_INCLASS_NO_PURE_DECLS \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_GM_SplashScreen_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGM_SplashScreen;

// ********** End Class AGM_SplashScreen ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PortfolioMultiproj_Source_PortfolioMultiproj_SplashScreen_GM_SplashScreen_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
