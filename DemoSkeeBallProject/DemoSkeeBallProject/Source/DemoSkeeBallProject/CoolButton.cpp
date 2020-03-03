// Fill out your copyright notice in the Description page of Project Settings.

#include "CoolButton.h"

ACoolButton::ACoolButton()
{
	UStaticMesh* mesh = FindMesh("StaticMesh'/Game/DemoSkeeBallProject/Long_Button_Keith.Long_Button_Keith'");
	UStaticMesh* spawnMesh = FindMesh("StaticMesh'/Game/Meshes/sphereMesh.sphereMesh'")
	m_pMeshComponent->SetStaticMesh(mesh);

	m_pSpawnLocationMesh = CreateDefaultSubobject<UStaticMeshComponent>("BallSpawn");
	m_pSpawnLocationMexh->SetStaticMesh(spawnMesh);
}
void ACoolButton::OnPressed_Implementation(ABaseController* pController) {

}



