// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VRBase/AWorldButton/AWorldButton.h"
#include "CoolButton.generated.h"

/**
 * 
 */
UCLASS()
class DEMOSKEEBALLPROJECT_API ACoolButton : public AWorldButton
{
	GENERATED_BODY()

		void OnPressed_Implementation(ABaseController* pController) override;
	
	
};
