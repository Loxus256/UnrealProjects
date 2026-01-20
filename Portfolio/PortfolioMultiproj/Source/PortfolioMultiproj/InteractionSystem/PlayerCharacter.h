// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InteractionSystem/InteractionInterface.h"
#include "InputActionValue.h"
#include "PlayerCharacter.generated.h"

// Forward declarations
class UInputMappingContext;
class UInputAction;
class UCameraComponent;

UCLASS()
class PORTFOLIOMULTIPROJ_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Override Tick function to perform trace every frame
	virtual void Tick(float DeltaTime) override;

	// Override SetupPlayerInputComponent to bind input actions
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** --- INPUT --- **/

	// Input mapping context
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputMappingContext* DefaultInputMappingContext;

	// Input action for interaction
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* InteractAction;

	// Function to handle the interaction
	void OnInteract(const FInputActionValue& Value);

	/** --- INTERACTION --- **/
	// Function to use the trace for interaction
	void TraceForInteractions();

	// Interaction distance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	float InteractionDistance;

	// Store the currently focused interactable
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction")
	TScriptInterface<IInteractionInterface> CurrentInteractable;


	/** --- CAMERA --- **/
	// Camera component for first-person view
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FirstPersonCamera")
	UCameraComponent* CameraComp;
};
