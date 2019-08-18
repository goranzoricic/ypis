#pragma once

class Station;

class GameMode
{
public:
	GameMode();
	virtual ~GameMode();

	void StartGame();

public:
	std::unique_ptr<Station> m_homeBase;
};

