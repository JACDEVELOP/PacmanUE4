// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Pacman/GhostDataAsset.h"
#include "Pacman/PelletDataAsset.h"
#include "Sound/SoundCue.h"
#include "PointActorComponent.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPelletEatenEvent, EPelletType, PelletType);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PACMAN_API UPointActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPointActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Points")
		float Points = 100;
	
	void Consume();

	void ConvertAllGhostVulnerable();

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FPelletEatenEvent PelletEatenEvent;
	

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UPelletDataAsset* PelletDataAsset;
};
