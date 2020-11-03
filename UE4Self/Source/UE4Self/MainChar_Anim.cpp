// Fill out your copyright notice in the Description page of Project Settings.


#include "MainChar_Anim.h"

UMainChar_Anim::UMainChar_Anim()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
}
void UMainChar_Anim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	auto Pawn = TryGetPawnOwner();
	if (::IsValid(Pawn))
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
		auto Character = Cast<ACharacter>(Pawn);
		if (Character)
		{
			IsInAir = Character->GetMovementComponent()->IsFalling();
		}
	}
}