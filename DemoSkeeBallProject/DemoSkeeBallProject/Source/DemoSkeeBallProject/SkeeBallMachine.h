// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VRBase/ABaseEntity/ABaseEntity.h"
#include "Components/StaticMeshComponent.h"
#include "System/NLogger.h"


#include "SkeeBallMachine.generated.h"


/**
 * 
 */
UCLASS()
class DEMOSKEEBALLPROJECT_API ASkeeBallMachine : public ABaseEntity
{
	GENERATED_BODY()

	bool m_bPlayerHasWon;
public:
	ASkeeBallMachine();
	UStaticMeshComponent* m_pStaticMeshComponent;
	UFUNCTION(BlueprintCallable)
	void AddToScore(int points);
	virtual void DefaultThink() override;
};
