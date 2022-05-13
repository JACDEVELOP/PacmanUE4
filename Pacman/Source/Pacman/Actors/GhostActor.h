// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/Pawn.h"
#include "Pacman/GhostDataAsset.h"
#include "Pacman/Components/AttackComponent.h"
#include "Pacman/Components/GhostVulnerableComponent.h"
#include "GhostActor.generated.h"

UCLASS()
class PACMAN_API AGhostActor : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGhostActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
	UFloatingPawnMovement* FloatingPawnMovement;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
	UStaticMeshComponent* GhostMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UGhostDataAsset* GhostDataAsset;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
	UAttackComponent* AttackComponent;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
	UGhostVulnerableComponent* VulnerableComponent;

};
