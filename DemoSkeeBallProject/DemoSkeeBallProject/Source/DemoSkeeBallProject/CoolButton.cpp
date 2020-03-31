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

	m_pSpawnLocation = m_pSpawnLocationMesh->GetComponentLocation();
}

void ACoolButton::OnPressed_Implementation(ABaseController* pController)
{
	NLogger::Warning("Button Pressed!");
	if (!m_pGameMode)
	{
		NLogger::Warning("m_pGameMode is NULL, initializing its value");
		m_pGameMode = (GetWorld()->GetAuthGameMode<ADemoSkeeBallProjectGameModeBase>());
		NLogger::Warning("Success!");
	}

	NLogger::Warning("Calling SpawnBall");
	m_pGameMode->SpawnBall(m_pSpawnLocation);
}



