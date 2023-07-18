// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DogCreature.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)
class BELUGA_API UDogCreature : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		void init();
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
		FName Name;
	UFUNCTION(BlueprintCallable)
		FString CPP_Hello();

	UFUNCTION(BlueprintPure)
		FName CPP_GetName();

	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)//
		void BP_SetHelloMessage();

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
		void BOTH_Update();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString HelloMsg;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
		int32 MaxHP;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
		int32 CurrentHP;
public:
	UDogCreature();
};
