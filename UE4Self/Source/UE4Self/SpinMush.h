// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "SpinMush.generated.h"

UCLASS()
class UE4SELF_API ASpinMush : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpinMush();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* Body;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* PlusBody;
	UPROPERTY(VisibleAnywhere)
		UBoxComponent* Trigger;

};

//20.9.7 CoreMinimal -> EngineMinimal to fix RootComponent Error