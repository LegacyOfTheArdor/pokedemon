#include "DemonTemplate.h"

DemonTemplate::DemonTemplate()
{	

	healthDeff = 0;
	accuracyDeff = 0;
	agilityDeff = 0;
	healthDeff = 0;
	magicDeff = 0;
	strengthDeff = 0;
	speedDeff = 0;
	healthBattle = 0;
	speedBattle = 0;
	agilityBattle = 0;
	strengthBattle = 0;
	magicBattle = 0;
	accuracyBattle = 0;

}

DemonTemplate::~DemonTemplate()
{

}

void DemonTemplate::update(float deltaTime)
{
	
}

void DemonTemplate::MakeDemon(std::string name, int health, int agility, int speed, int strength, int magic, int accuracy)
{
	healthDeff = health;
	speedDeff = speed;
	agilityDeff = agility;
	strengthDeff = strength;
	magicDeff = magic;
	accuracyDeff = accuracy;
	nameDeff = name;
	healthBattle = healthDeff;
	speedBattle = speedDeff;
	agilityBattle = agilityDeff;
	strengthBattle = strengthDeff;
	magicBattle = magicDeff;
	accuracyBattle = accuracyDeff;
}

void DemonTemplate::DamageHealth(int difference)
{
	healthBattle -= difference;
}

void DemonTemplate::HealHealth(int difference)
{
	healthBattle += difference;
}

void DemonTemplate::ChangeAgility(int difference)
{
	agilityBattle += difference;
}

void DemonTemplate::ChangeSpeed(int difference)
{
	speedBattle += difference;
}

void DemonTemplate::ChangeStrength(int difference)
{
	strengthBattle += difference;
}

void DemonTemplate::ChangeMagic(int difference)
{
	magicBattle += difference;
}

void DemonTemplate::ChangeAccuracy(int difference)
{
	accuracyBattle += difference;
}

void DemonTemplate::addMove(MoveTemplate* newMove)
{
	knownMoves.push_back(newMove);

}

float DemonTemplate::getSpeedmodifier()
{
	float i = 100;
	int speedtemp = getSpeed();

	if (speedtemp < 0)
	{

		i -= speedtemp * -1;

		i = i / 100;

		if (i < 0.00)
		{
			i = 0.00;
		}

		return i;
	}

	i += speedtemp;
	return i / 100;
}

float DemonTemplate::getStrengthModifier() 
{
	float i = 100;
	int strenghttemp = getStrength();

	if (strenghttemp < 0)
	{

		i -= strenghttemp * -1;

		i = i / 100;;

		if (i < 0.00)
		{
			i = 0.00;
		}

		return i;
	}

	i += strenghttemp;
	return i /100;
}

float DemonTemplate::getMagicModifier()
{
	float i = 100;
	int magictemp = getMagic();

	if (magictemp < 0)
	{

		i -= magictemp * -1;

		i = i / 100;;

		if (i < 0.00)
		{
			i = 0.00;
		}

		return i;
	}

	i += magictemp;
	return i / 100;
}

float DemonTemplate::getAccuracymodifier() 
{
	float i = 100;
	int accuracyTemp = getAccuracy();

	if (accuracyTemp < 0)
	{

		i -= accuracyTemp * -1;

		i = i / 100;

		if (i < 0.00)
		{
			i = 0.00;
		}

		return i;
	}

	i += accuracyTemp;
	return i / 100;
}

