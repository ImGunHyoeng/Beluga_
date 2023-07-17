// Fill out your copyright notice in the Description page of Project Settings.


#include "Dog/DogMonster.h"
#include "Dog/DogPlayer.h"

void UDogMonster::TakeDamage(int32 Damage)
{
	UE_LOG(LogTemp, Warning, TEXT("µ¥¹ÌÁö ¹ÞÀ½");]
	/*if (Damage > CurrentHP)
		return true;*/
	FMath::Clamp(CurrentHP - Damage, 0, 100); //(CurrentHP - Damage)
	if(CurrentHP==0)
		return true;//Á×À½
	return false;
}

UDogMonster::UDogMonster()//:UDogCreature((FName(FText(("±«¹°")),100,50)
{
	//Name = FName(TEXT("±«¹°"));
	Name = FName(TEXT("Monster"));
	UE_LOG(LogTemp, Display, TEXT("Monster %s "), *Name.ToString())
}
