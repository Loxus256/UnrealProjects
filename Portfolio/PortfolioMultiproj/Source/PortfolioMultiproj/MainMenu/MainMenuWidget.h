// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIOMULTIPROJ_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	// Buttons bound from BP_MainMenuWidget
	UPROPERTY(meta = (BindWidget))
	UButton* Btn_Level1;

	UPROPERTY(meta = (BindWidget))
	UButton* Btn_Level2;

	UPROPERTY(meta = (BindWidget))
	UButton* Btn_Credits;

	UPROPERTY(meta = (BindWidget))
	UButton* Btn_Quit;

	// Native construct override to bind button events
	virtual void NativeConstruct() override;

	// Event handlers for button clicks
	UFUNCTION(BlueprintCallable, Category = "MainMenuEvents")
	void OnLevelButtonClicked(FName LevelName);

	UFUNCTION(BlueprintCallable, Category = "MainMenuEvents")
	void OnLevel1Clicked();

	UFUNCTION(BlueprintCallable, Category = "MainMenuEvents")
	void OnLevel2Clicked();

	UFUNCTION(BlueprintCallable, Category = "MainMenuEvents")
	void OnCreditsClicked();

	UFUNCTION(BlueprintCallable, Category = "MainMenuEvents")
	void OnQuitClicked();
};
