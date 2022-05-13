// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Math/TransformCalculus3D.h"
#include "Sound/SoundCue.h"
#include "GhostDataAsset.generated.h"

/**
 * 
*/
UCLASS(BlueprintType,Blueprintable)
class PACMAN_API UGhostDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMesh* NormalMesh;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMesh* VulnerableMesh;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UMaterial* Material;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UMaterial* VulnerableMaterial;
};
