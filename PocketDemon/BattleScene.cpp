#include "BattleScene.h"

BattleScene::BattleScene()
{
	battleMenu = new BattleMenu();
	fightButton = battleMenu->GetBattleGrid()->GetBattleButtons()[0][0];
	inventoryButton = battleMenu->GetBattleGrid()->GetBattleButtons()[0][1];
	partyButton = battleMenu->GetBattleGrid()->GetBattleButtons()[1][0];
	runButton = battleMenu->GetBattleGrid()->GetBattleButtons()[1][1];

	this->AddChild(battleMenu);

	fightButton->setCallbackFunction(std::bind(&BattleScene::FightOption, this));
	inventoryButton->setCallbackFunction(std::bind(&BattleScene::InventoryOption, this));
	partyButton->setCallbackFunction(std::bind(&BattleScene::PartyOption, this));
	runButton->setCallbackFunction(std::bind(&BattleScene::RunOption, this));

	cursor = new ButtonSelector(battleMenu->GetBattleGrid()->GetBattleButtons());
	this->AddChild(cursor);

}

BattleScene::~BattleScene()
{

}

void BattleScene::update(float deltaTime)
{	
	cursor->Selecting();
	fightButton->checkSelected();
	inventoryButton->checkSelected();
	partyButton->checkSelected();
	runButton->checkSelected();

}

void BattleScene::FightOption()
{
	std::cout << "READY?! FIGHT!" << std::endl;
}

void BattleScene::InventoryOption()
{
	std::cout << "nothing like a broke boy" << std::endl;
}

void BattleScene::PartyOption()
{
	std::cout << "who do you want to use" << std::endl;
}

void BattleScene::RunOption()
{
std::cout << "run away and cry" << std::endl;
}