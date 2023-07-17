// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DogCreature.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class BELUGA_API UDogCreature : public UObject
{


		GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
		FName Name;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
		int32 MaxHP;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
		int32 CurrentHP;
public:
	UDogCreature();
};
