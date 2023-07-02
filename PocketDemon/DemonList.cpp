#include "DemonList.h"

DemonList::DemonList()
{
	basicDemon = NULL;
	allMoves = new MoveList();
}

DemonList::~DemonList()
{

}

void DemonList::update(float deltaTime)
{
	
}

void DemonList::makeDemons()
{
	BasicDemon();

}

void DemonList::BasicDemon()
{
	basicDemon = new DemonTemplate();
	basicDemon->MakeDemon("Basic Demon", 100, 100, 100, 1, 1, 100);
	
	basicDemon->addMove(allMoves->getStrengthMoves()[0]);
	basicDemon->addMove(allMoves->getMagicMoves()[0]);
	basicDemon->addMove(allMoves->getHealingMoves()[0]);
	basicDemon->addMove(allMoves->getStatMoves()[0]);
	
	allDemons.push_back(basicDemon);
	
}
