#ifndef BATTLESCENE_H
#define BATTLESCENE_H

#include <common/entity.h>
#include <PocketDemon/BattleMenu.h>

class BattleScene : public Entity
{
public:
	BattleScene();

	virtual ~BattleScene();

	virtual void update(float deltaTime);

private:
	BattleMenu* battleMenu;

};
#endif // !BATTLESCENE_H