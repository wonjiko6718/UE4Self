// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	GetMesh()->SetRelativeScale3D(FVector(0.35f, 0.35f, 0.35f));

	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));
	SpringArm->bUsePawnControlRotation = true;

	this->bUseControllerRotationYaw = true; // use to Rotate Camera = Pawn Direction

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_Uni(TEXT("/Game/SelfImport/unicorn.unicorn"));
	//SkeletalMesh'/Game/SelfImport/unicorn.unicorn'
	if (SK_Uni.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SK_Uni.Object);
	}
}
// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	//this->SetActorLocation(FVector(1000.0f, -1000.0f, 200.0f));
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AMainCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AMainCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AMainCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AMainCharacter::Turn);
}
void AMainCharacter::UpDown(float NewAxisValue)
{
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
	//GetActorForwardVector(), NewAxisValue
}
void AMainCharacter::LeftRight(float NewAxisValue)
{
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}
void AMainCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}
void AMainCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}
