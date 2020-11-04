// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "CollectCoffee.generated.h"

UCLASS()
class UE4SELF_API ACollectCoffee : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACollectCoffee();
	void CoffeeExecute();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* CoffeeBody;
	UPROPERTY(VisibleAnywhere)
		UBoxComponent* CoffeeTrigger;
	UPROPERTY(VisibleAnywhere)
		UParticleSystemComponent* CoffeeEndEffect;
private:
	UFUNCTION()
		void OnEffectFinished(class UParticleSystemComponent* PSystem);
};
