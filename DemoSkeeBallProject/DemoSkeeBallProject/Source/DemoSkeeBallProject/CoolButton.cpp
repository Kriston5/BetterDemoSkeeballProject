// Fill out your copyright notice in the Description page of Project Settings.

#include "CoolButton.h"
#include "SkeeBall.h"

ACoolButton::ACoolButton()
{
	UStaticMesh* mesh = FindMesh("StaticMesh'/Game/DemoSkeeBallProject/Long_Button_Keith.Long_Button_Keith'");
	UStaticMesh* spawnMesh = FindMesh("StaticMesh'/Game/Meshes/sphereMesh.sphereMesh'");
	m_pMeshComponent->SetStaticMesh(mesh);

	m_pSpawnLocationMesh = CreateDefaultSubobject<UStaticMeshComponent>("BallSpawn");
	m_pSpawnLocationMesh->SetStaticMesh(spawnMesh);
}

void ACoolButton::PreInit()
{
	m_pSpawnLocation = m_pSpawnLocationMesh->GetComponentLocation();
	m_pGameMode = (GetWorld()->GetAuthGameMode<ADemoSkeeBallProjectGameModeBase>());
}

void ACoolButton::OnPressed_Implementation(ABaseController* pController)
{
	m_pGameMode->SpawnBall(m_pSpawnLocation);
}



