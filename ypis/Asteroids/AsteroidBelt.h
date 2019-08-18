#pragma once

#include "Base/ObjectBase.h"

class AsteroidBelt : public ObjectBase
{
public:
	AsteroidBelt() = delete;
	AsteroidBelt(const std::string& name) : ObjectBase(name) {};
	~AsteroidBelt();
};

