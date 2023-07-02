#ifndef DEMONLIST_H
#define DEMONLIST_H

#include <common/entity.h>
#include <PocketDemon/DemonTemplate.h>

class DemonList : public Entity
{
public:
	DemonList();

	virtual ~DemonList();

	virtual void update(float deltaTime);
	
	void BasicDemon();

	void makeDemons();

	std::vector<DemonTemplate*> getAllDemons() { return allDemons; }

private:

	

	DemonTemplate* basicDemon;
	MoveList* allMoves;

	std::vector<DemonTemplate*> allDemons;
	
};
#endif // !DEMONLIST_H