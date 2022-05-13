// Fill out your copyright notice in the Description page of Project Settings.


#include "PacmanActor.h"

#include "Pacman/Components/AttackComponent.h"
#include "Pacman/Components/GhostVulnerableComponent.h"
#include "Pacman/Components/PointActorComponent.h"
#include "Pacman/Components/ScoreComponent.h"

// Sets default values
APacmanActor::APacmanActor()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(FName("FloatingPawnMovementComp"));
	FloatingPawnMovement->MaxSpeed = 800.f;
	FloatingPawnMovement->Acceleration = 1600.f;
	FloatingPawnMovement->Deceleration = 8000.f;
	FloatingPawnMovement->TurningBoost = 8.f;
	
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(FName("StaticMeshComp"));
	
	PacManMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("PacManMesh"));
	PacManMesh->SetupAttachment(StaticMeshComp);
	
	ScoreComponent = CreateDefaultSubobject<UScoreComponent>(FName("ScoreComp"));
	HealthComp = CreateDefaultSubobject<UHealthComponent>(FName("HealthComp"));

	OnActorBeginOverlap.AddDynamic(this, &APacmanActor::OnOverlapBegin);
}

//-----------------------------------------------------------------------------------------------

// Called when the game starts or when spawned
void APacmanActor::BeginPlay()
{
	Super::BeginPlay();
	
}

//-----------------------------------------------------------------------------------------------

// Called every frame
void APacmanActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(!GetIsFrozen())
	{
		AddMovementInput(GetActorForwardVector());
	}
}

//-----------------------------------------------------------------------------------------------

// Called to bind functionality to input
void APacmanActor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//-----------------------------------------------------------------------------------------------

void APacmanActor::SetDirection(const FVector Direction)
{
	if (Direction == FVector::UpVector)
	{
		SetActorRotation(FRotator(0,270,0));
	}
	else if(Direction == FVector::DownVector)
	{
		SetActorRotation(FRotator(0,90,0));
	}
	else if(Direction == FVector::RightVector)
	{
		SetActorRotation(FRotator(0,0,0));
	}
	else if(Direction == FVector::LeftVector)
	{
		SetActorRotation(FRotator(0,180.f,180.f));
	}
}

//-----------------------------------------------------------------------------------------------

void APacmanActor::OnOverlapBegin(AActor* PlayerActor, AActor* OtherActor)
{
	if (UPointActorComponent* PointActorComponent = OtherActor->FindComponentByClass<UPointActorComponent>())
	{
		if (IsValid(ScoreComponent))
		{
			ScoreComponent->SetScore(PointActorComponent->Points);
			PointActorComponent->Consume();
		}
	}
	if(UGhostVulnerableComponent* VulnerableComponent = OtherActor->FindComponentByClass<UGhostVulnerableComponent>())
	{
		if(VulnerableComponent->bIsVulnerable)
		{
			ScoreComponent->SetScore(20);
			OtherActor->Destroy();
		}
		else
		{
			if (const UAttackComponent* AttackComponent = OtherActor->FindComponentByClass<UAttackComponent>())
			{
				if (IsValid(HealthComp))
				{
					HealthComp->DoDamage(AttackComponent->Damage);
				}
			}
		}
	}
}

