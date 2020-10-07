// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnCPActor.generated.h"

UCLASS()
class UE4SELF_API ASpawnCPActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnCPActor();
	void ActivateFun();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
		UBoxComponent* SCPAA_Body;
	UPROPERTY(VisibleAnywhere)
		UClass* TargetObj;
};
