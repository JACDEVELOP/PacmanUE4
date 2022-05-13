// Fill out your copyright notice in the Description page of Project Settings.


#include "GhostActor.h"

// Sets default values
AGhostActor::AGhostActor()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(FName("FloatingPawnMovementComp"));
	FloatingPawnMovement->MaxSpeed = 600.f;
	FloatingPawnMovement->Acceleration = 1600.f;
	FloatingPawnMovement->Deceleration = 8000.f;
	FloatingPawnMovement->TurningBoost = 8.f;
	
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(FName("StaticMeshComp"));
	
	GhostMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("GhostMesh"));
	GhostMesh->SetupAttachment(StaticMeshComp);
	
	AttackComponent = CreateDefaultSubobject<UAttackComponent>(FName("AttackComponent"));
	VulnerableComponent = CreateDefaultSubobject<UGhostVulnerableComponent>(FName("VulnerableComponent"));

}

// Called when the game starts or when spawned
void AGhostActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGhostActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

