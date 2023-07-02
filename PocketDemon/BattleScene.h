#ifndef BATTLESCENE_H
#define BATTLESCENE_H

#include <common/entity.h>
#include <PocketDemon/BattleMenu.h>
#include <PocketDemon/ButtonSelector.h>
#include <PocketDemon/DevilTemplate.h>
#include <PocketDemon/PlayerTemplate.h>
#include <PocketDemon/DemonList.h>


class BattleScene : public Entity
{
public:
	BattleScene();

	virtual ~BattleScene();

	void FightOption();
	void InventoryOption();
	void PartyOption();
	void RunOption();
	void FirstMove();
	void SecondMove();
	void ThirdMove();
	void FourthMove();
	void TempThing();

	void DoATurn(MoveTemplate* playerMove, MoveTemplate* enemyMove);

	void getPlayerDemonMoves();
	bool WhoAttacksFirst(MoveTemplate* playerMove, MoveTemplate* enemyMove);
	void PlayerAttack(MoveTemplate* playerMove, MoveTemplate* enemyMove);
	void EnemyAttack(MoveTemplate* playerMove, MoveTemplate* enemyMove);

	

	virtual void update(float deltaTime);

private:
	
	DemonList* demonList;
	MoveList* moveList;

	int menuActive;

	PlayerTemplate* playerBattle;
	DemonParty* playerParty;
	MoveTemplate* usedMove;
	DemonTemplate* currentPlayerDemon;

	MoveTemplate* firstMove;
	MoveTemplate* secondMove;
	MoveTemplate* thirdMove;
	MoveTemplate* fourthMove;

	DevilTemplate* enemyBattle;
	MoveTemplate* enemyMove;
	DemonTemplate* currentDevilDemon;

	BattleMenu* battleMenu;
	Button* topRight;
	Button* topLeft;
	Button* bottomRight;
	Button* bottomLeft;

	ButtonSelector* cursor;

};
#endif // !BATTLESCENE_H