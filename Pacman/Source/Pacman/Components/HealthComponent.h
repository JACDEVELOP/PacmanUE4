// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PACMAN_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Points")
	float MaxHealth = 100;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Points")
	float Health = MaxHealth;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsAlive() const {return Health > 0;}

	UFUNCTION(BlueprintCallable)
	void DoDamage(const float DamageAmount);
		
};
