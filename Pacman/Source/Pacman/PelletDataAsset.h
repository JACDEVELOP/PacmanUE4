// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Math/TransformCalculus3D.h"
#include "Sound/SoundCue.h"
#include "PelletDataAsset.generated.h"

/**
 * 
*/
UENUM(BlueprintType)
enum class EPelletType : uint8
{
	Regular,
	Special
};
UCLASS(BlueprintType, Blueprintable)
class PACMAN_API UPelletDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	//VARIABLES
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EPelletType PelletType = EPelletType::Regular;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	USoundCue* ConsumptionSound;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector ActorScale;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UMaterial* Material;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float PointAmount = 5;
};
