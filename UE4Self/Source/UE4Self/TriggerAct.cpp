// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerAct.h"

// Sets default values
ATriggerAct::ATriggerAct()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TA_Body = CreateDefaultSubobject<UBoxComponent>(TEXT("TA_BODY"));
	RootComponent = TA_Body;
	TA_Body->SetBoxExtent(FVector(160.0f, 160.0f, 80.0f));
}

// Called when the game starts or when spawned
void ATriggerAct::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATriggerAct::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

