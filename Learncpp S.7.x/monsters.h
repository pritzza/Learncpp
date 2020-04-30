#ifndef MONSTERS_H
#define MONSTERS_H

#include <string>

enum class mobRace
{
	ogre,
	dragon,
	orc,
	giantSpider,
	slime,
};

struct Monster
{
	mobRace race;
	int health;
	std::string name;
};

std::string getMobRace(Monster m);

#endif