// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerAct.generated.h"

UCLASS()
class UE4SELF_API ATriggerAct : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATriggerAct();
	// add GetOverlapping Actors
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//void GetOverlappingActors(TArray < AActor*>& OverlappingActors,TSubclassOf < AActor > ClassFilter) const override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
		UBoxComponent* TA_Body;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* TA_Ceiling;
};
