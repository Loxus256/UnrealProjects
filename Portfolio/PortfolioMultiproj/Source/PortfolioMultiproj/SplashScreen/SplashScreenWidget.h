// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SplashScreenWidget.generated.h"

class UWidgetAnimation;
/**
 * 
 */
UCLASS()
class PORTFOLIOMULTIPROJ_API USplashScreenWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	// Override NativeConstruct to play the splash animation when the widget is constructed
	virtual void NativeConstruct() override;
	
	UFUNCTION(BlueprintCallable, Category = "SplashScreen")
	void TransitionToMainMenu();

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* FadeAnimLogo;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SplashSettings")
	FName MainMenuLevelName = FName("L_MainMenu");
};
