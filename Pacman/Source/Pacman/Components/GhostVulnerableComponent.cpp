// Fill out your copyright notice in the Description page of Project Settings.


#include "GhostVulnerableComponent.h"

#include "Pacman/Actors/GhostActor.h"

// Sets default values for this component's properties
UGhostVulnerableComponent::UGhostVulnerableComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGhostVulnerableComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGhostVulnerableComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UGhostVulnerableComponent::RunTimerToQuitVulnerability()
{
	const AGhostActor* Actor = Cast<AGhostActor>(GetOwner());
	Actor->GhostMesh->SetStaticMesh(Actor->GhostDataAsset->VulnerableMesh);
	Actor->GhostMesh->SetMaterial(2, Actor->GhostDataAsset->VulnerableMaterial);
	GetWorld()->GetTimerManager().SetTimer(QuitVulnerability, this, &UGhostVulnerableComponent::RemoveVulnerable, 5.0f, false);
}

void UGhostVulnerableComponent::RemoveVulnerable()
{
	const AGhostActor* Actor = Cast<AGhostActor>(GetOwner());
	Actor->GhostMesh->SetStaticMesh(Actor->GhostDataAsset->NormalMesh);
	Actor->GhostMesh->SetMaterial(2, Actor->GhostDataAsset->Material);
	bIsVulnerable = false;
}
