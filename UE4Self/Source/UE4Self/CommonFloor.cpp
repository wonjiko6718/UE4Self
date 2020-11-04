// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonFloor.h"

// Sets default values
ACommonFloor::ACommonFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->Tags.AddUnique(TEXT("Floor"));

	CommonFloor_body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("COMMONFLOOR_BODY"));
	CommonFloor_WallUp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("COMMONFLOOR_WALLUP"));
	CommonFloor_WallDown = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("COMMONFLOOR_WALLDOWN"));
	CommonFloor_WallLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("COMMONFLOOR_WALLLEFT"));
	CommonFloor_WallRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("COMMONFLOOR_WALLRIGHT"));

	RootComponent = CommonFloor_body;
	CommonFloor_WallUp->SetupAttachment(CommonFloor_body);
	CommonFloor_WallDown->SetupAttachment(CommonFloor_body);
	CommonFloor_WallLeft->SetupAttachment(CommonFloor_body);
	CommonFloor_WallRight->SetupAttachment(CommonFloor_body);

	CommonFloor_WallDown->SetRelativeLocationAndRotation(FVector(500.0f, -500.0f, 0.0f),FRotator(0.0f,180.0f,0.0f));
	CommonFloor_WallLeft->SetRelativeLocationAndRotation(FVector(0.0f,-500.0f,0.0f),FRotator(0.0f,90.0f,0.0f));
	CommonFloor_WallRight->SetRelativeLocationAndRotation(FVector(500.0f, 0.0f, 0.0f),FRotator(0.0f,-90.0f, 0.0f));

	ConstructorHelpers::FObjectFinder<UStaticMesh> FinderCF_Body(TEXT("/Game/PolygonTown/Meshes/Environment/SM_Env_Concrete_Base_01.SM_Env_Concrete_Base_01"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> FinderCF_Wall(TEXT("/Game/PolygonTown/Meshes/Environment/SM_Env_Fence_Wood_Straight_01.SM_Env_Fence_Wood_Straight_01"));
	if (FinderCF_Body.Succeeded())
	{
		CommonFloor_body->SetStaticMesh(FinderCF_Body.Object);
	}
	if (FinderCF_Wall.Succeeded())
	{
		CommonFloor_WallUp->SetStaticMesh(FinderCF_Wall.Object);
		CommonFloor_WallDown->SetStaticMesh(FinderCF_Wall.Object);
		CommonFloor_WallLeft->SetStaticMesh(FinderCF_Wall.Object);
		CommonFloor_WallRight->SetStaticMesh(FinderCF_Wall.Object);
	}
	CommonFloor_body->SetWorldScale3D(FVector(4.0f,4.0f,4.0f));
	CommonFloor_WallUp->SetWorldScale3D(FVector(8.0f,4.0f,4.0f));
	CommonFloor_WallDown->SetWorldScale3D(FVector(8.0f, 4.0f, 4.0f));
	CommonFloor_WallLeft->SetWorldScale3D(FVector(8.0f, 4.0f, 4.0f));
	CommonFloor_WallRight->SetWorldScale3D(FVector(8.0f, 4.0f, 4.0f));
}

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

