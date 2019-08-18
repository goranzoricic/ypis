#pragma once
#include "Ships/ShipBase.h"

class Station : public ShipBase
{
public:
	Station() = delete;
	Station(const std::string& name) : ShipBase(name) {};

	virtual ~Station();
};

