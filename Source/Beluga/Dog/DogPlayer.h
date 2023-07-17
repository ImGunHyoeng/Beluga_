// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dog/DogCreature.h"
#include "DogPlayer.generated.h"

/**
 * 
 */
UCLASS()
class BELUGA_API UDogPlayer : public UDogCreature
{
	GENERATED_BODY()
public:
	UDogPlayer();
	UFUNCTION(BlueprintCallable)
	void Attack(UDogMonster* Target);
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsonly, Category = "Default")
		int32 AttackPower;
	
};
