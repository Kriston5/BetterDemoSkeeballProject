// Fill out your copyright notice in the Description page of Project Settings.

#include "SkeeBall.h"
#include "DemoSkeeBallProjectGameModeBase.h"


ASkeeBall::ASkeeBall()
{
	UStaticMesh* mesh = FindMesh("StaticMesh'/Game/Meshes/sphereMesh.sphereMesh'");
	m_pPickupMeshComponent->SetStaticMesh(mesh);

	//ADemoSkeeBallProjectGameModeBase* gameMode = Cast<ADemoSkeeBallProjectGameModeBase>(GetWorld()->GetAuthGameMode());	//Get the current game mode
	//gameMode->AddBall(this);	//Add the skeeball to the active skeeball array
}



