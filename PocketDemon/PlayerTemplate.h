#ifndef PLAYERTEMPLATE_H
#define PLAYERTEMPLATE_H

#include <common/entity.h>
#include <PocketDemon/DemonParty.h>

class PlayerTemplate : public Entity
{
public:
	PlayerTemplate();

	virtual ~PlayerTemplate();

	virtual void update(float deltaTime);

	DemonParty* getPlayerParty() { return playerParty; }

private:

	DemonParty* playerParty;
	
};
#endif // !PLAYERTEMPLATE_H