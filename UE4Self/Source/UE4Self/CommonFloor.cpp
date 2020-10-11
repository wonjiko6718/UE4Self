// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonFloor.h"

// Sets default values
ACommonFloor::ACommonFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CommonFloor_body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("COMMONFLOOR_BODY"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> FinderCF_Body(TEXT("/Game/PolygonTown/Meshes/Environment/SM_Env_Concrete_Base_01.SM_Env_Concrete_Base_01"));
	if (FinderCF_Body.Succeeded())
	{
		CommonFloor_body->SetStaticMesh(FinderCF_Body.Object);
	}
	CommonFloor_body->SetWorldScale3D(FVector(4.0f,4.0f,4.0f));}

// Called when the game starts or when spawned
void ACommonFloor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACommonFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

