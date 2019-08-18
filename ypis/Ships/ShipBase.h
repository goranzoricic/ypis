#pragma once

#include "Base/ObjectBase.h"

class ShipBase : public ObjectBase
{
public:
	ShipBase() = delete;
	ShipBase(const std::string& name) : ObjectBase(name) {};
	virtual ~ShipBase();

};

