// Fill out your copyright notice in the Description page of Project Settings.

#include "DemoSkeeBallProjectGameModeBase.h"


ADemoSkeeBallProjectGameModeBase::ADemoSkeeBallProjectGameModeBase()
{
	m_iWinScore = 100;
	m_iNumberOfSkeeBalls = 0;
	for (int i = 0; i < 10; i++)
	{
		m_pActiveSkeeBalls[i] = NULL;
	}
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

void ADemoSkeeBallProjectGameModeBase::AddBall(ASkeeBall* skeeball)
{
	if (m_iNumberOfSkeeBalls >= 10) RemoveBall(m_pActiveSkeeBalls[0]);	//If there are ten skeeballs in memory, delete the oldest one
	m_pActiveSkeeBalls[++m_iNumberOfSkeeBalls] = skeeball;				//Increment the number of skeeballs and set the first open element to the new skeeball
}

void ADemoSkeeBallProjectGameModeBase::RemoveBall(ASkeeBall* skeeball)
{
	int index = 0;

	for (int i = 0; i < m_iNumberOfSkeeBalls; i++)
	{
		if (skeeball == m_pActiveSkeeBalls[i]) index = i;	//Find the index of the skeeball to remove
	}
	for (int i = index; i < m_iNumberOfSkeeBalls - 1; i++)
	{
		m_pActiveSkeeBalls[i] = m_pActiveSkeeBalls[i + 1];	//Set each array element to the next element's value
	}
	m_pActiveSkeeBalls[--m_iNumberOfSkeeBalls] = NULL;	//Set the last active skeeball to NULL so no two elements are aliased
	
	skeeball->DestroyEntity();	//Delete the skeeball from memory
}