#include "pch.h"
#include "GameMode.h"

#include "Stations/Station.h"

GameMode::GameMode()
{
}


GameMode::~GameMode()
{
}

void GameMode::StartGame()
{
	std::cout << "Starting a new game." << std::endl;
	m_homeBase = std::make_unique<Station>("USCSS Eucalion");
	std::cout << "	Home base created: " << m_homeBase->getName() << std::endl;
}
