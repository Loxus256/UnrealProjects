// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu/MainMenuWidget.h"
// Needed for loading levels via GameInstance
#include "GI_MainMenuLevelSelector.h"
// Needed for quitting the game
#include "Kismet/KismetSystemLibrary.h"
// Needed for failsafe level loading
#include "Kismet/GameplayStatics.h"

// Native construct override to bind button events
void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Bind button click events
	if (Btn_Level1)
	{
		Btn_Level1->OnClicked.AddDynamic(this, &UMainMenuWidget::OnLevel1Clicked);
	}
	if (Btn_Level2)
	{
		Btn_Level2->OnClicked.AddDynamic(this, &UMainMenuWidget::OnLevel2Clicked);
	}
	if (Btn_Credits)
	{
		Btn_Credits->OnClicked.AddDynamic(this, &UMainMenuWidget::OnCreditsClicked);
	}
	if (Btn_Quit)
	{
		Btn_Quit->OnClicked.AddDynamic(this, &UMainMenuWidget::OnQuitClicked);
	}
}

// Handle Level button clicks
void UMainMenuWidget::OnLevelButtonClicked(FName LevelName)
{
	// Use GameInstance to load level
	if (UGI_MainMenuLevelSelector* GI = Cast<UGI_MainMenuLevelSelector>(GetGameInstance()))
	{
		GI->LoadLevelByName(LevelName, true);
	}
	else
	{
		//Failsafe in case GameInstance is not of expected type
		UE_LOG(LogTemp, Error, TEXT("Failed to get GameInstance as UGI_MainMenuLevelSelector"));
		UGameplayStatics::OpenLevel(this, LevelName);
	}
}

// Handle Level buttons clicks
void UMainMenuWidget::OnLevel1Clicked()
{
	OnLevelButtonClicked(FName("Level1"));
}

void UMainMenuWidget::OnLevel2Clicked()
{
	OnLevelButtonClicked(FName("Level2"));
}

// Handle Credits button click
void UMainMenuWidget::OnCreditsClicked()
{
	OnLevelButtonClicked("Credits");
}

// Handle Quit button click
void UMainMenuWidget::OnQuitClicked()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	UKismetSystemLibrary::QuitGame(this, PC, EQuitPreference::Quit, true);
}