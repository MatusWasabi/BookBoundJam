// Fill out your copyright notice in the Description page of Project Settings.


#include "MoneySubSytem.h"

void UMoneySubSytem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UMoneySubSytem::Deinitialize()
{
	Super::Deinitialize();
}

void UMoneySubSytem::Increase(int Amount)
{
	Money += Amount;
}

void UMoneySubSytem::Decrease(int Amount)
{
	Money -= Amount;
}

void UMoneySubSytem::Set(int Amount)
{
	Money = Amount;
}

int UMoneySubSytem::GetPlayerMoney()
{
	return Money;
}

