#include "BattleScene.h"

BattleScene::BattleScene()
{
	battleMenu = new BattleMenu();

	this->AddChild(battleMenu);
}

BattleScene::~BattleScene()
{

}

void BattleScene::update(float deltaTime)
{
	
}