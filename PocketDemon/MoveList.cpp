#include "MoveList.h"

MoveList::MoveList()
{

	std::vector<MoveTemplate*> strenghtMoves;
	std::vector<MoveTemplate*> magicMoves;
	std::vector<MoveTemplate*> healingMoves;
	std::vector<MoveTemplate*> statMoves;

	StrengthDamageMoves();
	MagicDamageMoves();
	HealthMoves();
	StatChangingMoves();
}

MoveList::~MoveList()
{
	
}

void MoveList::update(float deltaTime)
{
	
}

void MoveList::MakeAllMoves()
{
	StrengthDamageMoves();
	MagicDamageMoves();
	HealthMoves();
	StatChangingMoves();
}

void MoveList::StrengthDamageMoves()
{
	Uppercut = new MoveTemplate();
	Uppercut->MakeMove("Uppercut", 65, 0, 0, 0, 0, 0, 0, 100, 40);
	strengthMoves.push_back(Uppercut);

}

void MoveList::MagicDamageMoves()
{
	deathBreath = new MoveTemplate();
	deathBreath->MakeMove("Death Breath", 30, 0, 0, 0, 0, 0, -60, 160 , 100);
	magicMoves.push_back(deathBreath);
}

void MoveList::HealthMoves()
{
	soulSucking = new MoveTemplate();
	soulSucking->MakeMove("soul sucking", 30, 50, 0, 0, 0, 0, 0, 160, 100);
	healingMoves.push_back(soulSucking);
}

void MoveList::StatChangingMoves()
{
	terrifyingScream = new MoveTemplate();
	terrifyingScream->MakeMove("Terrifying Scream", 0, 0, -30, -30, 0, 0, -75, 150, 100);
	statMoves.push_back(terrifyingScream);

}

