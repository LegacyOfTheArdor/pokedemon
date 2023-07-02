#include "DevilTemplate.h"

DevilTemplate::DevilTemplate()
{
	devilBattler = new DevilBattler;
}

DevilTemplate::~DevilTemplate()
{

}

void DevilTemplate::update(float deltaTime)
{
	
}

void DevilTemplate::MakeDevil(std::string name, int demon1, int demon2, int demon3, int demon4, int demon5, int demon6)
{
	devilBattler->makeDevilParty(demon1,  demon2,  demon3,  demon4,  demon5,  demon6);
	devilName = name;
}