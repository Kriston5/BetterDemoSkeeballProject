// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VRBase/AWorldButton/AWorldButton.h"
#include "Components/StaticMeshComponent.h"
#include "CoolButton.generated.h"

/**
 * 
 */
UCLASS()
class DEMOSKEEBALLPROJECT_API ACoolButton : public AWorldButton
{
	GENERATED_BODY()
	ACoolButton();
	virtual void OnPressed_Implementation(ABaseController* pController) override;
	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* m_pSpawnLocationMesh;
	
};
