// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionSystem/InteractionInterface.h"
#include "Door.generated.h"

class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class PORTFOLIOMULTIPROJ_API ADoor : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Visual components
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* RootComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* DoorFrameMesh;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* DoorMesh;

	// Interaction interface
	virtual void Interact(AActor* Interactor) override;
	virtual bool CanInteract(AActor* Interactor) const override;
	virtual FText ShowInteractionPrompt(AActor* Interactor) override;

	// Function to handle door rotation
	void UpdateDoorRotation();

	// Control variables for door animation
	FTimerHandle TimerHandle_DoorAnim;
	float CurrentYaw;
	float TargetYaw;

	// Door settings
	UPROPERTY(EditAnywhere, Category = "DoorSettings")
	float OpenAngle;

	UPROPERTY(EditAnywhere, Category = "DoorSettings")
	float RotationSpeed;

	UPROPERTY(EditAnywhere, Category = "DoorSettings")
	bool bIsOpen;
};
