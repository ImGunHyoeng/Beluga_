// Fill out your copyright notice in the Description page of Project Settings.


#include "Dog/DogPlayer.h"
#include "Dog/DogMoster.h"
#include "/Script/Beluga.DogMonster"
void UDogPlayer::Attack(UDogMonster* Target)
{

	return Target->TakeDamage(AttackPower);
	
}

UDogPlayer::UDogPlayer()//:UDogCreature(FName(FText("플레이어")),100,50)
{
	//Name = FName(TEXT("플레이어"));
	Name = FName(TEXT("Player"));
	UE_LOG(LogTemp, Display, TEXT("%s "), *Name.ToString())
}
