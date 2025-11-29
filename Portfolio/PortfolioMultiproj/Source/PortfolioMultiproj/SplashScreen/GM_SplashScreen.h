// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "GM_SplashScreen.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIOMULTIPROJ_API AGM_SplashScreen : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	//
	virtual void BeginPlay() override;

	//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	TSubclassOf<class UUserWidget> LogoWidgetClass;

	//
	UPROPERTY()
	class UUserWidget* CurrentWidget;
};
