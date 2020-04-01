// Fill out your copyright notice in the Description page of Project Settings.

#include "SkeeBall.h"
#include "DemoSkeeBallProjectGameModeBase.h"


ASkeeBall::ASkeeBall()
{
	UStaticMesh* mesh = FindMesh("StaticMesh'/Game/Meshes/sphereMesh.sphereMesh'");
	m_pPickupMeshComponent->SetStaticMesh(mesh);
}

void ASkeeBall::PostInit()
{
	m_pStartPosition = this->GetActorLocation();
	GetWorld()->GetAuthGameMode<ADemoSkeeBallProjectGameModeBase>()->AddBall(this);
}

void ASkeeBall::ResetPhysics()
{
	m_pPickupMeshComponent->SetAllPhysicsLinearVelocity(FVector::ZeroVector);
	m_pPickupMeshComponent->SetAllPhysicsAngularVelocity(FVector::ZeroVector);
}

void ASkeeBall::ResetPosition()
{
	this->SetActorLocation(m_pStartPosition);
	this->ResetPhysics();
}



