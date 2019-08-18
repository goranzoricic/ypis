#include "pch.h"
#include "ObjectBase.h"


ObjectBase::~ObjectBase()
{
}

ObjectBase::ObjectBase(const std::string& name)
{
	assert(!name.empty());
	m_name = name;
}

std::string ObjectBase::getName()
{
	return m_name;
}
