#ifndef DEVILBATTLER_H
#define DEVILBATTLER_H

#include <common/entity.h>
#include <PocketDemon/DemonList.h>


class DevilBattler : public Entity
{
public:
	DevilBattler();

	virtual ~DevilBattler();

	virtual void update(float deltaTime);

	void makeDevilParty( int demon1, int demon2, int demon3, int demon4, int demon5, int demon6);


	MoveTemplate* attackPlayer();

	DemonTemplate* getCurrentDevilDemon() { return currentDevilDemon; }

private:

	DemonTemplate* currentDevilDemon;

	DemonList* demonList;

	std::vector<DemonTemplate*> devilParty;

	std::vector<DemonTemplate*> alldemonslist;



};
#endif // !DEVILBATTLER_H