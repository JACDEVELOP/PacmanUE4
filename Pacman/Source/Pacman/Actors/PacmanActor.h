// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/Pawn.h"
#include "Pacman/Components/HealthComponent.h"
#include "Pacman/Components/ScoreComponent.h"
#include "PacmanActor.generated.h"

UCLASS()
class PACMAN_API APacmanActor : public APawn
{
	GENERATED_BODY()

	//FUNCTIONS
	
public:
	// Sets default values for this pawn's properties
	APacmanActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION(BlueprintCallable)
		void SetDirection(const FVector Direction);

	UFUNCTION(BlueprintCallable)
		bool GetIsFrozen() const {return bFrozen;}

	UFUNCTION(BlueprintCallable)
		void SetFrozen(const bool IsFrozen){bFrozen = IsFrozen;}

private:
	UFUNCTION()
		void OnOverlapBegin(AActor* PlayerActor, AActor* OtherActor);

	//PARAMETERS
protected:
	
	UPROPERTY(BlueprintReadOnly)
		bool bFrozen = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
		UFloatingPawnMovement* FloatingPawnMovement;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
		UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
		UStaticMeshComponent* PacManMesh;

public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
		UScoreComponent* ScoreComponent;
	

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
		UHealthComponent* HealthComp;
};
