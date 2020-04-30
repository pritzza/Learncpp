#include "monsters.h"

std::string getMobRace(Monster m)
{
	if (mobRace::ogre == m.race)
		return "Ogre";
	if (mobRace::dragon == m.race)
		return "Dragon";
	if (mobRace::orc == m.race)
		return "Orc";
	if (mobRace::giantSpider == m.race)
		return "Giant Spider";
	if (mobRace::slime == m.race)
		return "Slime";
}