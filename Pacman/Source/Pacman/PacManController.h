// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/PacmanActor.h"
#include "GameFramework/PlayerController.h"
#include "PacManController.generated.h"

/**
 * 
 */
UCLASS()
class PACMAN_API APacManController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void SetupInputComponent() override;

	APacmanActor* GetPacmanActor();

public:
	void MoveUp();
	void MoveDown();
	void MoveRight();
	void MoveLeft();
};
