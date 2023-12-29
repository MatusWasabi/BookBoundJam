// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MoneySubSytem.generated.h"

/**
 * 
 */
UCLASS()
class BOOKBOUNDJAM_API UMoneySubSytem : public UGameInstanceSubsystem
{
	GENERATED_BODY()


public:
	// Begin USubsystem
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	// End USubsystem

	UFUNCTION(BlueprintCallable, Category = "Money")
	void Increase(int Amount);
	UFUNCTION(BlueprintCallable, Category = "Money")
	void Decrease(int Amount);
	UFUNCTION(BlueprintCallable, Category = "Money")
	void Set(int Amount);

	UFUNCTION(BlueprintPure)
	int GetPlayerMoney();
	
private:
	// All my variables
	int Money = 0;
};
