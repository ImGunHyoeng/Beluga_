// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dog/DogCreature.h"
#include "DogMonster.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class BELUGA_API UDogMonster : public UDogCreature
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void TakeDamage(int32 Damage);
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsonly, Category = "Default")
	bool NewVar;
	UDogMonster();
};
