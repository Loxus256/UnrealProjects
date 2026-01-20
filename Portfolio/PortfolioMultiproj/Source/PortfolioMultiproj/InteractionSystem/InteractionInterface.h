// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PORTFOLIOMULTIPROJ_API IInteractionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	// Function to be called by the player to interact with an object. = 0 means it's a pure virtual function.
	virtual void Interact(AActor* Interactor) = 0;

	// Function to check if the object can be interacted with.
	virtual bool CanInteract(AActor* Interactor) const = 0;

	// Function to show interaction UI prompt.
	virtual FText ShowInteractionPrompt(AActor* Interactor) = 0;
};
