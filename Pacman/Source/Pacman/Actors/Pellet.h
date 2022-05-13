// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pacman/Components/PointActorComponent.h"
#include "Sound/SoundCue.h"
#include "Pellet.generated.h"

UCLASS()
class PACMAN_API APellet : public AActor
{
	GENERATED_BODY()

	//FUNCTIONS
public:	
	// Sets default values for this actor's properties
	APellet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
		UPointActorComponent* PointerComponent;

protected:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
	UStaticMeshComponent* StaticMeshComp;
	

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UPelletDataAsset* PelletDataAsset;

};
