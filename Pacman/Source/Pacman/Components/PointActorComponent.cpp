// Fill out your copyright notice in the Description page of Project Settings.


#include "PointActorComponent.h"

#include "GhostVulnerableComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Pacman/Actors/GhostActor.h"

// Sets default values for this component's properties
UPointActorComponent::UPointActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPointActorComponent::BeginPlay()
{
	Super::BeginPlay();


	if(IsValid(PelletDataAsset))
	{
		switch (PelletDataAsset->PelletType) {
		case EPelletType::Regular:
			Points = 1;
			break;
		case EPelletType::Special:
			Points = 5;
			break;
		default: ;
		}
	}
	// ...
	
}


// Called every frame
void UPointActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	Points = PelletDataAsset->PointAmount;
	// ...
}

void UPointActorComponent::Consume()
{
	UGameplayStatics::PlaySound2D(this, PelletDataAsset->ConsumptionSound);
	PelletEatenEvent.Broadcast(PelletDataAsset->PelletType);
	switch (PelletDataAsset->PelletType) {
	case EPelletType::Regular: break;
	case EPelletType::Special:
		ConvertAllGhostVulnerable();
		break;
	default: ;
	}
	
	GetOwner()->Destroy();
}

void UPointActorComponent::ConvertAllGhostVulnerable()
{
	const TSubclassOf<AGhostActor> ClassToFind = AGhostActor::StaticClass();
	TArray<AActor*> FoundEnemies;
	UGameplayStatics::GetAllActorsOfClass(GetOwner()->GetWorld(), ClassToFind, FoundEnemies);

	for (const AActor* FoundEnemy : FoundEnemies)
	{
		if (UGhostVulnerableComponent* VulnerableComponent = FoundEnemy->FindComponentByClass<UGhostVulnerableComponent>())
		{
			VulnerableComponent->bIsVulnerable = true;
			VulnerableComponent->RunTimerToQuitVulnerability();
		}
	}
}
