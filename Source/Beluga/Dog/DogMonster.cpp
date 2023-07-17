// Fill out your copyright notice in the Description page of Project Settings.


#include "Dog/DogMonster.h"
#include "Dog/DogPlayer.h"

void UDogMonster::TakeDamage(int32 Damage)
{
	UE_LOG(LogTemp, Warning, TEXT("������ ����");]
	/*if (Damage > CurrentHP)
		return true;*/
	FMath::Clamp(CurrentHP - Damage, 0, 100); //(CurrentHP - Damage)
	if(CurrentHP==0)
		return true;//����
	return false;
}

UDogMonster::UDogMonster()//:UDogCreature((FName(FText(("����")),100,50)
{
	//Name = FName(TEXT("����"));
	Name = FName(TEXT("Monster"));
	UE_LOG(LogTemp, Display, TEXT("Monster %s "), *Name.ToString())
}
