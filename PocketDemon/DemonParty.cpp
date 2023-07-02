#include "DemonParty.h"

DemonParty::DemonParty()
{

}

DemonParty::~DemonParty()
{

}

void DemonParty::update(float deltaTime)
{

}

void DemonParty::AddDemon(DemonTemplate* newDemon)
{
	if(playerParty.size() == 6)
	{
		seaOfSouls.push_back(newDemon);
		return;
	}
	playerParty.push_back(newDemon);
}

