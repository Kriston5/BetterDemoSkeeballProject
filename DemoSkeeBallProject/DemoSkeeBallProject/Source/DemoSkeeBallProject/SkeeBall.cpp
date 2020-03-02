// Fill out your copyright notice in the Description page of Project Settings.

#include "SkeeBall.h"

ASkeeBall::ASkeeBall()
{
	UStaticMesh* mesh = FindMesh("StaticMesh'/Game/Meshes/sphereMesh.sphereMesh'");
	m_pPickupMeshComponent->SetStaticMesh(mesh);
}



