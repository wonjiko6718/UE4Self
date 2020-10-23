// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn_Main.h"

// Sets default values
APawn_Main::APawn_Main()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CAPSULE"));
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MESH"));
	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MOVEMENT"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	RootComponent = Capsule;
	Mesh->SetupAttachment(Capsule);
	SpringArm->SetupAttachment(Capsule);
	Camera->SetupAttachment(SpringArm);

	Capsule->SetCapsuleHalfHeight(88.0f);
	Capsule->SetCapsuleRadius(34.0f);
	Capsule->SetSimulatePhysics(true);
	Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Capsule->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	Capsule->BodyInstance.bLockXRotation = true;
	Capsule->BodyInstance.bLockYRotation = true;

	Mesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f),FRotator(0.0f,-90.0f,0.0f));
	Mesh->SetRelativeScale3D(FVector(0.35f,0.35f,0.35f));

	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));
	SpringArm->bUsePawnControlRotation = true;


	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_Uni(TEXT("/Game/SelfImport/unicorn.unicorn"));
	//SkeletalMesh'/Game/SelfImport/unicorn.unicorn'
	if (SK_Uni.Succeeded())
	{
		Mesh->SetSkeletalMesh(SK_Uni.Object);
	}

}

// Called when the game starts or when spawned
void APawn_Main::BeginPlay()
{
	Super::BeginPlay();
	this->SetActorLocation(FVector(1000.0f, -1000.0f, 200.0f));
	
}

// Called every frame
void APawn_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APawn_Main::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &APawn_Main::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &APawn_Main::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APawn_Main::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &APawn_Main::Turn);
}
void APawn_Main::UpDown(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), NewAxisValue);
	//GetActorForwardVector(), NewAxisValue
}
void APawn_Main::LeftRight(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), NewAxisValue);
}
void APawn_Main::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}
void APawn_Main::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}