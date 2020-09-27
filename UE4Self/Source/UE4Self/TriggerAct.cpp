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
	TA_Body->SetBoxExtent(FVector(160.0f, 160.0f, 320.0f));
	TA_Ceiling->SetRelativeLocation(FVector(0.0f, 0.0f, 320.0f));
	TA_Ceiling->SetWorldScale3D(FVector(5.0f, 16.0f, 1.0f));
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
	
}

// Called every frame
void ATriggerAct::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

