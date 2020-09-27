// Fill out your copyright notice in the Description page of Project Settings.


#include "SpinMush.h"

// Sets default values
bool EventOK = false;
ASpinMush::ASpinMush()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	PlusBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PLUSBODY"));
	Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TRIGGERCollider"));

	RootComponent = Body; // Main component
	PlusBody->SetupAttachment(Body); // Use PlusBody for Son
	Trigger->SetupAttachment(Body);
	PlusBody->SetRelativeLocation(FVector(50.0f, 0.0f, 80.0f));
	Trigger->SetRelativeLocation(FVector(0.0f, 0.0f, 80.0f));
	Trigger->SetBoxExtent(FVector(160.0f, 160.0f, 80.0f));
	ConstructorHelpers::FObjectFinder<UStaticMesh> Table_Body(TEXT("/Game/PolygonTown/Meshes/Props/SM_Prop_Outdoor_Table_01.SM_Prop_Outdoor_Table_01")); // Find Object
	ConstructorHelpers::FObjectFinder<UStaticMesh> Table_Obj(TEXT("/Game/PolygonTown/Meshes/Props/SM_Prop_Plant_01.SM_Prop_Plant_01")); // Find Object
	SetActorScale3D(FVector(1.5f,1.5f,1.5f)); // use this in Constructor	// Load ObjectMesh
	if (Table_Body.Succeeded())
	{
		Body->SetStaticMesh(Table_Body.Object);
	}
	if (Table_Obj.Succeeded())
	{
		PlusBody->SetStaticMesh(Table_Obj.Object);
	}
}
// Called when the game starts or when spawned
void ASpinMush::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Actor Location : %s"), *GetActorLocation().ToString()); //must use Pointer
}
// Called every frame
void ASpinMush::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (EventOK == true)
	{
		PlusBody->AddRelativeRotation(FRotator(0.0f, 5.0f, 0.0f));
	}
}
void ASpinMush::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("Trigger HIT Method"));
}
void ASpinMush::NotifyActorBeginOverlap(AActor* OtherActor)
{
	UE_LOG(LogTemp, Warning, TEXT("Trigger Enter Method"));
	EventOK = true;
}
void ASpinMush::NotifyActorEndOverlap(AActor* OtherActor)
{
	UE_LOG(LogTemp, Warning, TEXT("Trigger End Method"));
	EventOK = false;
}
