#pragma once
class ObjectBase
{
public:
	ObjectBase() = delete;
	ObjectBase(const std::string& name);
	virtual ~ObjectBase();

	std::string getName();

protected:
	std::string m_name;
};

