// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "PacmanGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PACMAN_API APacmanGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void SetUpCamera();

	virtual void UnfrozePacman();

private:
	FTimerHandle UnFrozenPacman;
};
