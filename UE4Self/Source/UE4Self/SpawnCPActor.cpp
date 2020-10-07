// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnCPActor.h"
#include "ComponActor.h"

// Sets default values
ASpawnCPActor::ASpawnCPActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SCPAA_Body = CreateDefaultSubobject<UBoxComponent>(TEXT("SCPAA_BODY"));
	RootComponent = SCPAA_Body;
	SCPAA_Body->SetBoxExtent(FVector(150.0f, 150.0f, 150.0f));
}

// Called when the game starts or when spawned
void ASpawnCPActor::BeginPlay()
{
	Super::BeginPlay();
	ActivateFun();
}

// Called every frame
void ASpawnCPActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void ASpawnCPActor::ActivateFun()
{
	FVector MainLocation = GetActorLocation();
	FRotator MainRotator = FRotator(0.0f, 0.0f, 0.0f);
	int32 SpawnCount = 12;
	UE_LOG(LogTemp, Warning, TEXT("SCPAA_Body Location : %s"), *MainLocation.ToString());
	for (int i = 0; i < SpawnCount; i++)
	{
		FVector SpawnLocation = MainLocation-FVector((35.0f*SpawnCount)-(70.0f*i), 0.0f, -(20.0f*i));
		GetWorld()->SpawnActor<AComponActor>(AComponActor::StaticClass(), SpawnLocation, MainRotator);
	}
}
