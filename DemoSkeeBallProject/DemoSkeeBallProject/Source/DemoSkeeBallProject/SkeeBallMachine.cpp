// Fill out your copyright notice in the Description page of Project Settings.

#include "SkeeBallMachine.h"
#include "DemoSkeeBallProjectGameModeBase.h"

ASkeeBallMachine::ASkeeBallMachine()
{
	m_pStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("static mesh");	//Create a subobject of type static mesh
	RootComponent = m_pStaticMeshComponent;													//Set the static mesh component as the root component
	
	UStaticMesh* mesh = FindMesh("StaticMesh'/Game/Meshes/SkeeBallMachine.SkeeBallMachine'");	//Set the mesh to reference the skeeball machine mesh
	m_pStaticMeshComponent->SetStaticMesh(mesh);												//Set the static mesh component to the value mesh points to (skeeball machine mesh)

	float scaleFactor = 1.5f;						//Create a float scaleFactor that represents how much we want to scale an object
	FVector scale = FVector(scaleFactor);			//Make a vector called scale that represents how much something should be scaled in each direction (scaleFactor)
	m_pStaticMeshComponent->SetWorldScale3D(scale);	//Set the scale of the static mesh component to the scale vector


}



void ASkeeBallMachine::AddToScore(int points) {
	ADemoSkeeBallProjectGameModeBase* mode = Cast<ADemoSkeeBallProjectGameModeBase>(GetWorld()->GetAuthGameMode());
	if (mode) {
		// get current score
		int currScore = mode->GetScore();
		// add to score
		mode->SetScore(currScore + points);
	}
}