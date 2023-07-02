#include "DevilBattler.h"

DevilBattler::DevilBattler()
{
	demonList = new DemonList;
	currentDevilDemon = NULL;
	demonList->makeDemons();
}

DevilBattler::~DevilBattler()
{

}

void DevilBattler::update(float deltaTime)
{

}

void DevilBattler::makeDevilParty( int demon1, int demon2, int demon3, int demon4, int demon5, int demon6)
{
	alldemonslist = demonList->getAllDemons();

	devilParty.push_back(alldemonslist[demon1]);
	if (demon2 >= 0) 
	{ 
		devilParty.push_back(alldemonslist[demon2]);
	}
	if (demon3 >= 0)
	{
		devilParty.push_back(alldemonslist[demon3]);
	}
	if (demon4 >= 0)
	{
		devilParty.push_back(alldemonslist[demon4]);
	}
	if (demon5 >= 0)
	{
		devilParty.push_back(alldemonslist[demon5]);
	}
	if (demon6 >= 0)
	{
		devilParty.push_back(alldemonslist[demon6]);
	}
	currentDevilDemon = devilParty[0];
}

MoveTemplate* DevilBattler::attackPlayer()
{
	srand(time(0));

	return currentDevilDemon->getKnownMoves()[rand() % 4];
}

