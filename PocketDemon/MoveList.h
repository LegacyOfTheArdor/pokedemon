#ifndef MOVELIST_H
#define MOVELIST_H

#include <common/entity.h>
#include <PocketDemon/MoveTemplate.h>

class MoveList : public Entity
{
public:
	MoveList();

	virtual ~MoveList();

	virtual void update(float deltaTime);

	void MakeAllMoves();
	void StrengthDamageMoves();
	void MagicDamageMoves();
	void HealthMoves();
	void StatChangingMoves();

	std::vector<MoveTemplate*> getStrengthMoves() { return strengthMoves; }
	std::vector<MoveTemplate*> getMagicMoves() { return magicMoves; }
	std::vector<MoveTemplate*> getHealingMoves() { return healingMoves; }
	std::vector<MoveTemplate*> getStatMoves() { return statMoves; }

private:
	//strength
	MoveTemplate* Uppercut;

	//magic
	MoveTemplate* deathBreath;

	//healing
	MoveTemplate* soulSucking;


	//stats
	MoveTemplate* terrifyingScream;

	std::vector<MoveTemplate*> strengthMoves;
	std::vector<MoveTemplate*> magicMoves;
	std::vector<MoveTemplate*> healingMoves;
	std::vector<MoveTemplate*> statMoves;
};
#endif // !MOVELIST_H