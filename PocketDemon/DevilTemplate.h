#ifndef DEVILTEMPLATE_H
#define DEVILTEMPLATE_H

#include <common/entity.h>
#include <PocketDemon/DevilBattler.h>

class DevilTemplate : public Entity
{
public:
	DevilTemplate();

	virtual ~DevilTemplate();

	virtual void update(float deltaTime);

	void MakeDevil(std::string name, int demon1, int demon2, int demon3, int demon4, int demon5, int demon6);
	std::string getDevilName() { return devilName; }

	DevilBattler* getDevilBattler() { return devilBattler; }

private:
	std::string devilName;

	DevilBattler* devilBattler;
	
};
#endif // !DEVILTEMPLATE_H