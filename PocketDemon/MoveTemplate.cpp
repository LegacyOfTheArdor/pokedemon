#include "MoveTemplate.h"

MoveTemplate::MoveTemplate()
{
	moveName = "_";
	takeHealth = 0;
	addHealth = 0;
	modifyAgility = 0;
	modifySpeed = 0;
	modifyStrength = 0;
	modifyMagic = 0;
	modifyAccuracy = 0;
	moveAccuracy = 0;
	moveSpeed = 0;
	
}

MoveTemplate::~MoveTemplate()
{

}

void MoveTemplate::update(float deltaTime)
{
	
}

void MoveTemplate::MakeMove(std::string name, int Damage, int Heal, int Agility, int Speed, int Strength, int Magic, int Accuracy, int MoveAccuracy, int MoveSpeed)
{
	moveName = name;
	takeHealth = Damage;
	addHealth = Heal;
	modifyAgility = Agility;
	modifySpeed = Speed;
	modifyStrength = Strength;
	modifyMagic = Magic;
	modifyAccuracy = Accuracy;
	moveAccuracy = MoveAccuracy;
	moveSpeed = MoveSpeed;
}

int MoveTemplate::StrengthMove(float Strengthmodifier)
{
	float damage = takeHealth * Strengthmodifier;

	return (int)damage;
	
}

int MoveTemplate::MagicMove(float Magicmodifier)
{
	float damage = takeHealth * Magicmodifier;

	return (int)damage;
	
}

bool MoveTemplate::HitMove(int yourAccuracy, int opponentAgility)
{
	float F = moveAccuracy * yourAccuracy;

	int accuracy = (int)F;

	int hit = accuracy - opponentAgility;

	if(hit < 0)
	{
		return false;
	}
	return true;
}

int MoveTemplate::getMoveAccuracy(float modifier)
{
	float accuracy = moveAccuracy * modifier;

	return (int)accuracy;
}

int MoveTemplate::getMoveSpeed(float modifier)
{
	float Speed = moveSpeed * modifier;

	return (int)Speed;
}