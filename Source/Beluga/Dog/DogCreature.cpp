// Fill out your copyright notice in the Description page of Project Settings.


#include "DogCreature.h"

//UDogCreature::UDogCreature():Name(FName("ÇÇÁ¶¹°")),MaxHP(100), CurrentHP (50)
//{
//	
//}

void UDogCreature::init()
{

}

FString UDogCreature::CPP_Hello()
{
	return HelloMsg;
}

FName UDogCreature::CPP_GetName()
{
	return Name;
}



UDogCreature::UDogCreature()
{

}

void UDogCreature::BOTH_Update_Implementation()
{
	HelloMsg = HelloMsg.ToUpper();
}