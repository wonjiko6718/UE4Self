// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterWidget.generated.h"

/**
 * 
 */
UCLASS()
class UE4SELF_API UCharacterWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(meta = ("BindWidget"))
		class UTextBlock* CollectCoffeeLabel;
	void NativeConstruct() override;

public:
	void FindUser();
};
