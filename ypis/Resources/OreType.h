#pragma once
class OreType
{
public:
	OreType() = delete;
	OreType(const std::string& name, double density);
	~OreType();

	std::string m_name;
	double m_density = 0.0;
};


extern std::map<std::string, OreType> g_oreTypes;