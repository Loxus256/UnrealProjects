// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainMenu/GM_MainMenu.h"

#ifdef PORTFOLIOMULTIPROJ_GM_MainMenu_generated_h
#error "GM_MainMenu.generated.h already included, missing '#pragma once' in GM_MainMenu.h"
#endif
#define PORTFOLIOMULTIPROJ_GM_MainMenu_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGM_MainMenu *************************************************************
struct Z_Construct_UClass_AGM_MainMenu_Statics;
PORTFOLIOMULTIPROJ_API UClass* Z_Construct_UClass_AGM_MainMenu_NoRegister();

#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GM_MainMenu_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGM_MainMenu(); \
	friend struct ::Z_Construct_UClass_AGM_MainMenu_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PORTFOLIOMULTIPROJ_API UClass* ::Z_Construct_UClass_AGM_MainMenu_NoRegister(); \
public: \
	DECLARE_CLASS2(AGM_MainMenu, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortfolioMultiproj"), Z_Construct_UClass_AGM_MainMenu_NoRegister) \
	DECLARE_SERIALIZER(AGM_MainMenu)


#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GM_MainMenu_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_MainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGM_MainMenu(AGM_MainMenu&&) = delete; \
	AGM_MainMenu(const AGM_MainMenu&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_MainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_MainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_MainMenu) \
	NO_API virtual ~AGM_MainMenu();


#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GM_MainMenu_h_12_PROLOG
#define FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GM_MainMenu_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GM_MainMenu_h_15_INCLASS_NO_PURE_DECLS \
	FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GM_MainMenu_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGM_MainMenu;

// ********** End Class AGM_MainMenu ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PortfolioMultiproj_Source_PortfolioMultiproj_MainMenu_GM_MainMenu_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
