#ifndef DEMONPARTY_H
#define DEMONPARTY_H

#include <common/entity.h>
#include <PocketDemon/DemonList.h>


class DemonParty : public Entity
{
public:
	DemonParty();

	virtual ~DemonParty();

	virtual void update(float deltaTime);

	void AddDemon(DemonTemplate* newDemon);
	
	std::vector<DemonTemplate*> getPlayerParty() { return playerParty; }

private:

	std::vector<DemonTemplate*> playerParty;

	std::vector<DemonTemplate*> seaOfSouls;

};
#endif // !DEMONPARTY_H