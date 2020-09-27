// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponActor.h"

// Sets default values
AComponActor::AComponActor()
{
	this->Tags.AddUnique(TEXT("PiObj"));
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ComponActorBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("COMPONACTOR BODY"));
	RootComponent = ComponActorBody;
	ConstructorHelpers::FObjectFinder<UStaticMesh> CA_Body(TEXT("/Game/PolygonTown/Meshes/Props/SM_Prop_Propane_Tall_02.SM_Prop_Propane_Tall_02"));
	SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	if (CA_Body.Succeeded())
	{
		ComponActorBody->SetStaticMesh(CA_Body.Object);
	}
}

// Called when the game starts or when spawned
void AComponActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("CA_Body Location : %s"), *GetActorLocation().ToString());
	UE_LOG(LogTemp, Warning, TEXT("CA_Body Scale : %s"), *GetActorScale().ToString());
	UE_LOG(LogTemp, Warning, TEXT("CA_Actor Tag : %s"), *Tags[0].ToString());
	
}

// Called every frame
void AComponActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//next->Practice delegate
