// Fill out your copyright notice in the Description page of Project Settings.


#include "PacManController.h"
#include "Actors/PacmanActor.h"

void APacManController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("MoveUp", IE_Pressed, this, &APacManController::MoveUp);
	InputComponent->BindAction("MoveDown", IE_Pressed, this, &APacManController::MoveDown);
	InputComponent->BindAction("MoveRight", IE_Pressed, this, &APacManController::MoveRight);
	InputComponent->BindAction("MoveLeft", IE_Pressed, this, &APacManController::MoveLeft);
}

APacmanActor* APacManController::GetPacmanActor()
{
	return Cast<APacmanActor>(GetPawn());
}

void APacManController::MoveUp()
{
	if (APacmanActor* PacmanActor = GetPacmanActor())
	{
		PacmanActor->SetDirection(FVector::UpVector);
	}
}

void APacManController::MoveDown()
{
	if (APacmanActor* PacmanActor = GetPacmanActor())
	{
		PacmanActor->SetDirection(FVector::DownVector);
	}
}

void APacManController::MoveRight()
{
	if (APacmanActor* PacmanActor = GetPacmanActor())
	{
		PacmanActor->SetDirection(FVector::RightVector);
	}
}

void APacManController::MoveLeft()
{
	if (APacmanActor* PacmanActor = GetPacmanActor())
	{
		PacmanActor->SetDirection(FVector::LeftVector);
	}
}
