// Fill out your copyright notice in the Description page of Project Settings.


#include "SplashScreen/SplashScreenWidget.h"
#include "MainMenu/GI_MainMenuLevelSelector.h"
#include "Kismet/GameplayStatics.h"

void USplashScreenWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	if (FadeAnimLogo)
	{
		FWidgetAnimationDynamicEvent EndDelegate;
		EndDelegate.BindDynamic(this, &USplashScreenWidget::TransitionToMainMenu);
		BindToAnimationFinished(FadeAnimLogo, EndDelegate);

		//GEngine-> AddOnScreenDebugMessage(-1,5.0f, FColor::Cyan, TEXT("Playing Splash Screen Animation"));
		PlayAnimation(FadeAnimLogo, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f);
	}
}

void USplashScreenWidget::TransitionToMainMenu()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, TEXT("Loading Main Menu"));
	
	//Open the main menu level
	if (UGI_MainMenuLevelSelector* GI = Cast<UGI_MainMenuLevelSelector>(GetGameInstance()))
	{
		GI->LoadLevelByName(MainMenuLevelName, true);
	}
	else
	{
		//Failsafe in case GameInstance is not of expected type
		UE_LOG(LogTemp, Error, TEXT("Failed to get GameInstance as UGI_MainMenuLevelSelector"));
		UGameplayStatics::OpenLevel(this, MainMenuLevelName);
	}
}