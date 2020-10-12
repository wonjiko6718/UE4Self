// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "CommonFloor.generated.h"

UCLASS()
class UE4SELF_API ACommonFloor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACommonFloor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* CommonFloor_body;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* CommonFloor_WallUp;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* CommonFloor_WallDown;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* CommonFloor_WallLeft;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* CommonFloor_WallRight;
};
