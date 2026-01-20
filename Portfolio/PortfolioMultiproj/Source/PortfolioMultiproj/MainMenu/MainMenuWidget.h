// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "MainMenu/GI_MainMenuLevelSelector.h"
#include "Components/TextBlock.h"
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
	class UButton* Btn_Level1;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Txt_BtnLevel1;

	UPROPERTY(meta = (BindWidget))
	class UButton* Btn_Level2;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Txt_BtnLevel2;

	UPROPERTY(meta = (BindWidget))
	class UButton* Btn_Credits;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Txt_BtnCredits;

	UPROPERTY(meta = (BindWidget))
	class UButton* Btn_Quit;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Txt_BtnQuit;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Levels")
	TArray<FLevelData> LevelsData;

	// Native construct override to bind button events
	virtual void NativeConstruct() override;
	
	// Event handlers for button clicks
	UFUNCTION()
	void OnLevel1Click();
	
	UFUNCTION()
	void OnLevel2Click();
	
	UFUNCTION(BlueprintCallable, Category = "MainMenuEvents")
	void HandleLevelClick(int LevelIndex);

	UFUNCTION(BlueprintCallable, Category = "MainMenuEvents")
	void OnCreditsClick();

	UFUNCTION(BlueprintCallable, Category = "MainMenuEvents")
	void OnQuitClick();
};
