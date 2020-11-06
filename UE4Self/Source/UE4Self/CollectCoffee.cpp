// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectCoffee.h"

// Sets default values
ACollectCoffee::ACollectCoffee()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CoffeeBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("COFFEEBODY"));
	CoffeeTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("COFFEETRIGGER"));
	CoffeeEndEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("COFFEEENDEFFECT"));

	RootComponent = CoffeeBody;

	CoffeeBody->SetSimulatePhysics(true);

	CoffeeTrigger->SetupAttachment(CoffeeBody);
	CoffeeEndEffect->SetupAttachment(CoffeeBody);

	CoffeeTrigger->SetRelativeLocation(FVector(0.0f,0.0f,80.0f));
	CoffeeTrigger->SetBoxExtent(FVector(150.0f, 150.0f, 150.0f));

	ConstructorHelpers::FObjectFinder<UStaticMesh> OF_CoffeeBody(TEXT("/Game/PolygonCity/Meshes/Props/SM_Prop_LargeSign_Coffee_01.SM_Prop_LargeSign_Coffee_01"));
	//StaticMesh'/Game/PolygonCity/Meshes/Props/SM_Prop_LargeSign_Coffee_01.SM_Prop_LargeSign_Coffee_01'
	if (OF_CoffeeBody.Succeeded())
	{
		CoffeeBody->SetStaticMesh(OF_CoffeeBody.Object);
	}
	ConstructorHelpers::FObjectFinder<UParticleSystem> OF_CoffeeEndEffect(TEXT("/Game/AdvancedMagicFX13/Particles/P_ky_explosion3.P_ky_explosion3"));
	//ParticleSystem'/Game/AdvancedMagicFX13/Particles/P_ky_cross.P_ky_cross'
	//ParticleSystem'/Game/AdvancedMagicFX13/Particles/P_ky_explosion3.P_ky_explosion3'
	if (OF_CoffeeEndEffect.Succeeded())
	{
		CoffeeEndEffect->SetTemplate(OF_CoffeeEndEffect.Object);
		CoffeeEndEffect->bAutoActivate = false;
	}

	SetActorScale3D(FVector(0.5f,0.5f,0.5f));
}

// Called when the game starts or when spawned
void ACollectCoffee::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectCoffee::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void ACollectCoffee::CoffeeExecute()
{
	TArray<AActor*> CoffeeOverlapActors;
	GetOverlappingActors(CoffeeOverlapActors, TSubclassOf<AActor>());
	int32 CoffeeOverlapActorsLen = CoffeeOverlapActors.Num();
	if (CoffeeOverlapActorsLen >= 2)
	{
		UE_LOG(LogTemp, Warning, TEXT("Search Player : %s"), *CoffeeOverlapActors[CoffeeOverlapActorsLen-1]->GetClass()->GetName());
		if (CoffeeOverlapActors[CoffeeOverlapActorsLen - 1]->GetClass()->GetName() == "MainCharacter")
		{
			UE_LOG(LogTemp, Warning, TEXT("Player Notify"));
			CoffeeEndEffect->Activate(true);
			CoffeeTrigger->SetHiddenInGame(true, true);
			CoffeeBody->SetSimulatePhysics(false);
			CoffeeBody->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			CoffeeEndEffect->OnSystemFinished.AddDynamic(this, &ACollectCoffee::OnEffectFinished);
		}
	}
}
void ACollectCoffee::NotifyActorBeginOverlap(AActor* OtherActor)
{
	CoffeeExecute();
}
void ACollectCoffee::OnEffectFinished(UParticleSystemComponent* PSystem)
{
	Destroy();
}