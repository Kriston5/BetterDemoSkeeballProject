// Fill out your copyright notice in the Description page of Project Settings.

#include "DemoSkeeBallProjectGameModeBase.h"

ADemoSkeeBallProjectGameModeBase::BeginPlay() 
{
	SetScore(0);
}

ADemoSkeeBallProjectGameModeBase::GetScore()
{
	return m_iScore;
}

ADemoSkeeBallProjectGameModeBase::SetScore(int newScore)
{
	m_iScore = newScore;
}