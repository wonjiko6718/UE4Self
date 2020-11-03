// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Animation/AnimInstance.h"
#include "MainChar_Anim.generated.h"

/**
 * 
 */
UCLASS()
class UE4SELF_API UMainChar_Anim : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UMainChar_Anim();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = true))
		float CurrentPawnSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = true))
		bool IsInAir;
};
