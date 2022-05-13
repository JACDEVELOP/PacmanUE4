// Fill out your copyright notice in the Description page of Project Settings.


#include "Pellet.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

// Sets default values
APellet::APellet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(FName("StaticMeshComp"));
	PointerComponent = CreateDefaultSubobject<UPointActorComponent>(FName("PointerComponent"));

}

// Called when the game starts or when spawned
void APellet::BeginPlay()
{
	Super::BeginPlay();

	PointerComponent->PelletDataAsset = PelletDataAsset;
}

// Called every frame
void APellet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


