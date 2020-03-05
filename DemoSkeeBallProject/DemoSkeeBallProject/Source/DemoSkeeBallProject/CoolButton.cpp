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
void ACoolButton::OnPressed_Implementation(ABaseController* pController)
{
	FVector loc = m_pSpawnLocationMesh->GetComponentLocation();		//Set a vector representing the location to the location of the spawn ball mesh
	
	ASkeeBall* skeeBall = (ASkeeBall*)								//Cast the next line as a pointer to ASkeeBall and set it equal to skeeball (can be made into one line) 
	GetWorld()->SpawnActor(ASkeeBall::StaticClass(), &loc);			//Spawn an actor of SkeeBall class in the current world at the location vector
}



