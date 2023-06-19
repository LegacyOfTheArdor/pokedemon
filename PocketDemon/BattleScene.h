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

	void FightOption();
	void InventoryOption();
	void PartyOption();
	void RunOption();

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