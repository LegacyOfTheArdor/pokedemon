#include "BattleScene.h"

BattleScene::BattleScene()
{
	playerBattle = new PlayerTemplate();
	enemyBattle = new DevilTemplate();
	moveList = new MoveList();

	moveList->MakeAllMoves();

	demonList = new DemonList();
	demonList->makeDemons();

	playerBattle->getPlayerParty()->AddDemon(demonList->getAllDemons()[0]);

	playerParty = playerBattle->getPlayerParty();

	currentPlayerDemon = playerParty->getPlayerParty()[0];

	enemyBattle->MakeDevil("Jeffrey", 0, -1, -1, -1, -1, -1);
	currentDevilDemon = enemyBattle->getDevilBattler()->getCurrentDevilDemon();
	usedMove = NULL;
	enemyMove = NULL;
	getPlayerDemonMoves();

	battleMenu = new BattleMenu();
	topLeft = battleMenu->GetBattleGrid()->GetBattleButtons()[0][0];
	topRight = battleMenu->GetBattleGrid()->GetBattleButtons()[0][1];
	bottomLeft = battleMenu->GetBattleGrid()->GetBattleButtons()[1][0];
	bottomRight = battleMenu->GetBattleGrid()->GetBattleButtons()[1][1];


	this->AddChild(battleMenu);

	topLeft->setCallbackFunction(std::bind(&BattleScene::FightOption, this));
	topRight->setCallbackFunction(std::bind(&BattleScene::InventoryOption, this));
	bottomLeft->setCallbackFunction(std::bind(&BattleScene::PartyOption, this));
	bottomRight->setCallbackFunction(std::bind(&BattleScene::RunOption, this));

	cursor = new ButtonSelector(battleMenu->GetBattleGrid()->GetBattleButtons());
	this->AddChild(cursor);
	
	menuActive = 0;

}

BattleScene::~BattleScene()
{

}

void BattleScene::update(float deltaTime)
{	
	int playerHP = currentPlayerDemon->getHealth();
	int enemyHP = currentDevilDemon->getHealth();

	std::cout << playerHP << std::endl;

	if(playerHP <= 0)
	{
		std::cout << "YOU LOST" << std::endl;
	}

	if (enemyHP > 0 && currentDevilDemon->getHealth() <= 0)
	{
		std::cout << "YOU WON" << std::endl;
	}

	cursor->Selecting();

	topLeft->checkSelected();
	topRight->checkSelected();
	bottomRight->checkSelected();
	bottomLeft->checkSelected();

	if(menuActive == 0)
	{
		topLeft->setCallbackFunction(std::bind(&BattleScene::FightOption, this));
		topRight->setCallbackFunction(std::bind(&BattleScene::InventoryOption, this));
		bottomLeft->setCallbackFunction(std::bind(&BattleScene::PartyOption, this));
		bottomRight->setCallbackFunction(std::bind(&BattleScene::RunOption, this));

	}
	if(menuActive == 1)
	{
		topLeft->setCallbackFunction(std::bind(&BattleScene::FirstMove, this));
		topRight->setCallbackFunction(std::bind(&BattleScene::SecondMove, this));
		bottomLeft->setCallbackFunction(std::bind(&BattleScene::ThirdMove, this));
		bottomRight->setCallbackFunction(std::bind(&BattleScene::FourthMove, this));

		if (input()->getKeyDown(Tab))
		{
			menuActive = 0;
		}
	}
	if (menuActive == 2) 
	{
		topLeft->setCallbackFunction(std::bind(&BattleScene::TempThing, this));
		topRight->setCallbackFunction(std::bind(&BattleScene::TempThing, this));
		bottomLeft->setCallbackFunction(std::bind(&BattleScene::TempThing, this));
		bottomRight->setCallbackFunction(std::bind(&BattleScene::TempThing, this));

		if (input()->getKeyDown(Tab))
		{
			menuActive = 0;
		}
	}
	if (menuActive == 3) 
	{
		if (input()->getKeyDown(Tab))
		{
			menuActive = 0;
		}
	}
	

}

void BattleScene::getPlayerDemonMoves()
{
	firstMove = currentPlayerDemon->getKnownMoves()[0];
	secondMove = currentPlayerDemon->getKnownMoves()[1];
	thirdMove = currentPlayerDemon->getKnownMoves()[2];
	fourthMove = currentPlayerDemon->getKnownMoves()[3];
}

void BattleScene::DoATurn(MoveTemplate* playerMove, MoveTemplate* enemyMove)
{
	if(WhoAttacksFirst(playerMove, enemyMove) == false)
	{
		EnemyAttack(playerMove, enemyMove);
		if(currentPlayerDemon->getHealth() <= 0)
		{
			return;
		}
		PlayerAttack(playerMove, enemyMove);
	}
	if(WhoAttacksFirst(playerMove, enemyMove) == true)
	{
		PlayerAttack(playerMove, enemyMove);
		if(currentDevilDemon->getHealth() <= 0)
		{
			return;
		}
		EnemyAttack(playerMove, enemyMove);
	}
}

bool BattleScene::WhoAttacksFirst(MoveTemplate* playerMove, MoveTemplate* enemyMove)
{
	if (playerMove->getMoveSpeed(currentPlayerDemon->getSpeedmodifier()) < enemyMove->getMoveSpeed(currentDevilDemon->getSpeedmodifier()))
	{
		return false;
	}
	if (playerMove->getMoveSpeed(currentPlayerDemon->getSpeedmodifier()) == enemyMove->getMoveSpeed(currentDevilDemon->getSpeedmodifier()))
	{
		if(currentPlayerDemon->getSpeed() < currentDevilDemon->getSpeed())
		{
			return false;
		}
	}

	return true;
}

void BattleScene::PlayerAttack(MoveTemplate* playerMove, MoveTemplate* enemyMove)
{
	if(playerMove->HitMove(currentPlayerDemon->getAccuracy(), currentDevilDemon->getAgility()) == false)
	{
		return;

	}
	
	currentPlayerDemon->HealHealth(playerMove->Healmove());
	
	currentDevilDemon->DamageHealth(playerMove->MagicMove(currentPlayerDemon->getMagicModifier()));
	currentDevilDemon->DamageHealth(playerMove->StrengthMove(currentPlayerDemon->getStrengthModifier()));
	currentDevilDemon->ChangeAccuracy(playerMove->getModifyAccuracy());
	currentDevilDemon->ChangeAgility(playerMove->getModifyAgility());
	currentDevilDemon->ChangeMagic(playerMove->getModifyMagic());
	currentDevilDemon->ChangeSpeed(playerMove->getModifySpeed());
	currentDevilDemon->ChangeStrength(playerMove->getModifyStrenght());

}
void BattleScene::EnemyAttack(MoveTemplate* playerMove, MoveTemplate* enemyMove)
{
	
	if (playerMove->HitMove(currentDevilDemon->getAccuracy(), currentPlayerDemon->getAgility()) == false)
	{
		return;

	}

	currentDevilDemon->HealHealth(enemyMove->Healmove());

	currentPlayerDemon->DamageHealth(enemyMove->MagicMove(currentPlayerDemon->getMagicModifier()));
	currentPlayerDemon->DamageHealth(enemyMove->StrengthMove(currentPlayerDemon->getStrengthModifier()));
	currentPlayerDemon->ChangeAccuracy(enemyMove->getModifyAccuracy());
	currentPlayerDemon->ChangeAgility(enemyMove->getModifyAgility());
	currentPlayerDemon->ChangeMagic(enemyMove->getModifyMagic());
	currentPlayerDemon->ChangeSpeed(enemyMove->getModifySpeed());
	currentPlayerDemon->ChangeStrength(enemyMove->getModifyStrenght());


}

//------------------------------------------------------------------------------------------------------
//  Call back functions
//------------------------------------------------------------------------------------------------------
void BattleScene::FightOption()
{
	std::cout << "READY?! FIGHT!" << std::endl;
	menuActive = 1;
}

void BattleScene::InventoryOption()
{
	std::cout << "nothing like a broke boy" << std::endl;
	menuActive = 0;
}

void BattleScene::PartyOption()
{
	std::cout << "who do you want to use" << std::endl;
	menuActive = 0;
}

void BattleScene::RunOption()
{
	std::cout << "run away and cry" << std::endl;
}

void BattleScene::TempThing()
{
	std::cout << "different word" << std::endl;
}

void BattleScene::FirstMove()
{
	std::cout << "First Move" << std::endl;
	usedMove = firstMove;
	DoATurn(usedMove, enemyBattle->getDevilBattler()->attackPlayer());
	menuActive = 0;
}

void BattleScene::SecondMove()
{
	std::cout << "Second Move" << std::endl;
	usedMove = secondMove;
	DoATurn(usedMove, enemyBattle->getDevilBattler()->attackPlayer());
	menuActive = 0;
}

void BattleScene::ThirdMove()
{
	std::cout << "Third Move" << std::endl;
	usedMove = thirdMove;
	DoATurn(usedMove, enemyBattle->getDevilBattler()->attackPlayer());
	menuActive = 0;
}

void BattleScene::FourthMove()
{
	std::cout << "Fourth Move" << std::endl;
	usedMove = fourthMove;
	DoATurn(usedMove, enemyBattle->getDevilBattler()->attackPlayer());
	menuActive = 0;
}