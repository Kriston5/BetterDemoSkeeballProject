// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SkeeBall.h"
#include "DemoSkeeBallProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DEMOSKEEBALLPROJECT_API ADemoSkeeBallProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:
	int m_iScore;
	int m_iWinScore;

public:
	ADemoSkeeBallProjectGameModeBase();
	void BeginPlay() override;
	UFUNCTION(BlueprintCallable)
		int GetScore();
	void SetScore(int newScore);
	int GetWinScore();
	void AddBall(ASkeeBall* skeeball);
	UFUNCTION(BlueprintCallable)
	void RemoveBall(ASkeeBall* skeeball);

	ASkeeBall* m_pActiveSkeeBalls[12];
	int m_iNumberOfSkeeBalls;


};
