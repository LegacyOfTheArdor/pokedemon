#ifndef MOVETEMPLATE_H
#define MOVETEMPLATE_H

#include <common/entity.h>

class MoveTemplate : public Entity
{
public:
	MoveTemplate();

	virtual ~MoveTemplate();

	virtual void update(float deltaTime);

	/*bool HitMove(int yourAccuracy, int opponentAgility); */

	void MakeMove(std::string name, int Damage, int Heal, int Agility, int Speed, int Strength, int Magic, int Accuracy, int MoveAccuracy, int MoveSpeed);

	bool HitMove(int yourAccuracy, int opponentAgility);

	int StrengthMove(float modifier);
	int MagicMove(float modifier);
	int Healmove() { return addHealth; }
	int getMoveAccuracy(float modifier);
	int getMoveSpeed(float modifier);
	int getModifyAgility(){ return modifyAgility; }
	int getModifyStrenght() { return modifyStrength; }
	int getModifySpeed() { return modifySpeed; }
	int getModifyMagic() { return modifyMagic; }
	int getModifyAccuracy() { return modifyAccuracy; }

private:

	std::string moveName;

	int takeHealth;
	int addHealth;
	int modifyAgility;
	int modifySpeed;
	int modifyStrength;
	int modifyMagic;
	int modifyAccuracy;
	int moveAccuracy;
	int moveSpeed;
	
};
#endif // !MOVETEMPLATE_H