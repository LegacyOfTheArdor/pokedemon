#ifndef BATTLESCENE_H
#define BATTLESCENE_H

#include <common/entity.h>
#include <PocketDemon/BattleMenu.h>
#include <PocketDemon/ButtonSelector.h>

class BattleScene : public Entity
{
public:
	BattleScene();

	virtual ~BattleScene();

	virtual void update(float deltaTime);

private:
	BattleMenu* battleMenu;
	Button* fightButton;
	Button* partyButton;
	Button* inventoryButton;
	Button* runButton;

	ButtonSelector* cursor;

};
#endif // !BATTLESCENE_H