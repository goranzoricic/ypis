#include "pch.h"
#include "OreType.h"


OreType::OreType(const std::string& name, double density)
{
	assert(!name.empty());
	assert(density > 0);

	m_name = name;
	m_density = density;
}

OreType::~OreType()
{
}

extern std::map<std::string, OreType> g_oreTypes =
{
	{"Rocks", OreType("Rocks", 3)},
    {"Carbon", OreType("Carbon", 0.8)},
    {"Water Ice", OreType("Water Ice", 1)},
    {"Rocks with mineral particles", OreType("Rocks with mineral particles", 2.2)},
    {"Water Ice with Simple Carbohydrates", OreType("Water Ice with Simple Carbohydrates", 1)},
    {"Mineral, Nickel", OreType("Mineral, Nickel", 2.4)},
    {"Mineral, Magnesium", OreType("Mineral, Magnesium", 3.4)},
    {"Simple Carbohydrates", OreType("Simple Carbohydrates", 0.5)},
    {"Ore, Nickel", OreType("Ore, Nickel", 5)},
    {"Ore, Magnesium", OreType("Ore, Magnesium", 5)},
    {"Mineral, Iron", OreType("Mineral, Iron", 5)},
    {"Mineral, Aluminium", OreType("Mineral, Aluminium", 5)},
    {"Ice, Nitrogen", OreType("Ice, Nitrogen", 0.5)},
    {"Phosphorus", OreType("Phosphorus", 3)},
    {"Ice, Helium", OreType("Ice, Helium", 3)},
    {"Nickel", OreType("Nickel", 9)},
    {"Magnesium", OreType("Magnesium", 9)},
    {"Ore, Iron", OreType("Ore, Iron", 5)},
    {"Ore, Aluminium", OreType("Ore, Aluminium", 5)},
    {"Mineral, Chrome", OreType("Mineral, Chrome", 3)},
    {"Iron", OreType("Iron", 8)},
    {"Aluminium", OreType("Aluminium", 3)},
    {"Ore, Chrome", OreType("Ore, Chrome", 8)},
    {"Mineral, Titanium", OreType("Mineral, Titanium", 3)},
    {"Ore, Silver", OreType("Ore, Silver", 4)},
    {"Chrome", OreType("Chrome", 7)},
    {"Ore, Titanium", OreType("Ore, Titanium", 2)},
    {"Ice, Noble Gasses", OreType("Ice, Noble Gasses", 3)},
    {"Ag", OreType("Ag", 10)},
    {"Ore, Rare Earths", OreType("Ore, Rare Earths", 5)},
    {"Titanium", OreType("Titanium", 5)},
    {"Rare Earths", OreType("Rare Earths", 7)},
    {"Chrystals, AlOx", OreType("Chrystals, AlOx", 4)},
    {"Gold", OreType("Gold", 19)},
	{"Platinum", OreType("Platinum", 21)},
};