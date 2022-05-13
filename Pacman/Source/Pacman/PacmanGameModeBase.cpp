// Copyright Epic Games, Inc. All Rights Reserved.


#include "PacmanGameModeBase.h"

#include "Actors/PacmanActor.h"

void APacmanGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
	SetUpCamera();

	GetWorld()->GetTimerManager().SetTimer(UnFrozenPacman, this, &APacmanGameModeBase::UnfrozePacman , 2.0f, false);
}

void APacmanGameModeBase::SetUpCamera()
{
	const TSubclassOf<ACameraActor> ClassToFind = ACameraActor::StaticClass();

	if(ACameraActor* CameraActor = Cast<ACameraActor>(UGameplayStatics::GetActorOfClass(GetWorld(), ClassToFind)); IsValid(CameraActor))
	{
		if(APlayerController* PacManPC = UGameplayStatics::GetPlayerController(this, 0))
		{
			PacManPC->SetViewTargetWithBlend(CameraActor, 1.f);
		}
	}
}

void APacmanGameModeBase::UnfrozePacman()
{
	if (APacmanActor* PacmanActor = Cast<APacmanActor>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0)); IsValid(PacmanActor))
	{
		PacmanActor->SetFrozen(false);
	}
}
