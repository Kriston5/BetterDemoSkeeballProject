// Fill out your copyright notice in the Description page of Project Settings.

#include "DemoSkeeBallProjectGameModeBase.h"


ADemoSkeeBallProjectGameModeBase::ADemoSkeeBallProjectGameModeBase()
{
	m_iWinScore = 100;
	m_iNextSkeeBall = 0;
}

void ADemoSkeeBallProjectGameModeBase::BeginPlay() 
{
	SetScore(0);
}

int ADemoSkeeBallProjectGameModeBase::GetScore()
{
	return m_iScore;
}

void ADemoSkeeBallProjectGameModeBase::SetScore(int newScore)
{
	m_iScore = newScore;
}

int ADemoSkeeBallProjectGameModeBase::GetWinScore()
{
	return m_iWinScore;
}

void ADemoSkeeBallProjectGameModeBase::SpawnBall(FVector location)
{
	ASkeeBall* nextBall = m_pActiveSkeeBalls[m_iNextSkeeBall++];
	m_iNextSkeeBall %= MaxBalls;
	nextBall->SetActorLocation(location);
	nextBall->ResetPhysics();
}

void ADemoSkeeBallProjectGameModeBase::AddBall(ASkeeBall* skeeball)
{
	m_pActiveSkeeBalls[m_iNextSkeeBall] = skeeball;
	m_iNextSkeeBall++;
	m_iNextSkeeBall %= MaxBalls;
}

void ADemoSkeeBallProjectGameModeBase::RemoveBall(ASkeeBall* skeeball) {}