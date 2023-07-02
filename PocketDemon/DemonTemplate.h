#ifndef DEMONTEMPLATE_H
#define DEMONTEMPLATE_H

#include <common/entity.h>
#include <PocketDemon/MoveList.h>

class DemonTemplate : public Entity
{
public:
	DemonTemplate();

	virtual ~DemonTemplate();

	virtual void update(float deltaTime);
	void MakeDemon(std::string name, int health, int agility, int speed, int strength, int magic, int accuracy);

	std::string getName() { return nameDeff; }

	int getHealth() { return healthBattle; }
	void DamageHealth(int difference);
	void HealHealth(int difference);
	void ChangeAgility(int difference);
	void ChangeSpeed(int difference);
	void ChangeStrength(int difference);
	void ChangeMagic(int difference);
	void ChangeAccuracy(int difference);

	int getAgility(){ return agilityBattle; }
	int getSpeed(){ return speedBattle; }
	int getStrength(){ return strengthBattle; }
	int getMagic() { return magicBattle; }
	int getAccuracy(){ return accuracyBattle; }
	float getSpeedmodifier();
	float getMagicModifier();
	float getStrengthModifier();
	float getAccuracymodifier();

	void addMove(MoveTemplate* newMove);

	std::vector<MoveTemplate*> getKnownMoves() { return knownMoves; }
	

private:
	
	std::vector<MoveTemplate*> knownMoves;

	std::string nameDeff;

	int healthDeff;
	int agilityDeff;
	
	int healthBattle;
	int agilityBattle;
	int speedBattle;
	int strengthBattle;
	int magicBattle;
	int accuracyBattle;

	int speedDeff;
	int strengthDeff;
	int magicDeff;
	int accuracyDeff;


};
#endif // !DEMONTEMPLATE_H