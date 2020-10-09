// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerAct.h"
// Sets default values
ATriggerAct::ATriggerAct()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TA_Body = CreateDefaultSubobject<UBoxComponent>(TEXT("TA_BODY"));
	TA_Ceiling = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TA_CEILING"));
	RootComponent = TA_Body;
	TA_Ceiling->SetupAttachment(TA_Body);
	TA_Body->SetBoxExtent(FVector(480.0f, 160.0f, 320.0f));
	TA_Ceiling->SetRelativeLocation(FVector(0.0f, 0.0f, 320.0f));
	TA_Ceiling->SetWorldScale3D(FVector(15.0f, 16.0f, 1.0f));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TA_CeilingObj (TEXT("/Game/PolygonTown/Meshes/Props/SM_Prop_Computer_Keyboard_01.SM_Prop_Computer_Keyboard_01")); // Find Object
	if (TA_CeilingObj.Succeeded())
	{
		TA_Ceiling->SetStaticMesh(TA_CeilingObj.Object);
	}
}

// Called when the game starts or when spawned
void ATriggerAct::BeginPlay()
{
	Super::BeginPlay();
	GetObj();
}

// Called every frame
void ATriggerAct::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void ATriggerAct::GetObj()
{
	FVector BodyVec = this->GetActorLocation();
	FVector SaveVec;
	TArray <AActor*> InZone;
	TArray <FVector> InZoneVec;
	AActor *SaveObj;
	GetOverlappingActors(InZone, TSubclassOf <AActor>());
	int32 InZoneCount = InZone.Num();

	if (InZone.Num() >= 1)
	{
		UE_LOG(LogTemp, Warning, TEXT("InZone Trigger Activate"));
		//UE_LOG(LogTemp, Warning, TEXT("InZone Something Tag : %s"),*InZone[0]->Tags[0].ToString()); // UE_LOG Must have Pointer *
		//InZone[0]->SetActorLocation(FVector(1510.0f, -930.0f, 300.0f));
		UE_LOG(LogTemp, Warning, TEXT("InZone Array Size : %d"),InZoneCount);
		for (int i = 0; i < InZoneCount; i++)
		{
			InZone[i]->SetActorLocation(FVector(BodyVec.X-440.0f+(70*i),BodyVec.Y-130.0f,BodyVec.Z-330.0f));
		}
		UE_LOG(LogTemp, Warning, TEXT("InZone Trigger End"));
	}
	if (InZoneCount == 12) // Active Bubble Sort
	{
		for (int j = 0; j < InZoneCount - 1; j++)
		{
			for (int z = 0; z < InZoneCount - j -1; z++)
			{
				UE_LOG(LogTemp, Warning, TEXT("Search Index : %d"),z);
				if (InZone[z]->GetActorScale().Z > InZone[z + 1]->GetActorScale().Z)
				{
					UE_LOG(LogTemp, Warning, TEXT("Sort Activate"));
					 // Crash cause of Move so fast
					//SaveVec = InZone[z + 1]->GetActorLocation();
					//InZone[z + 1]->SetActorLocation(FVector(0.0f,0.0f,0.0f));
					//InZone[z]->SetActorLocation(SaveVec);
					//InZone[z + 1]->SetActorLocation(FVector(SaveVec.X-70, SaveVec.Y, SaveVec.Z));
					SaveObj = InZone[z+1];
					InZone[z+1] = InZone[z];
					InZone[z] = SaveObj;
				}
			}
		}
	}
}
void ATriggerAct::NotifyActorBeginOverlap(AActor* OtherActor)
{
	GetObj();
}
