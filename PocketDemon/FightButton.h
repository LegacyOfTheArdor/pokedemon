#ifndef FIGHTBUTTON_H 
#define FIGHTBUTTON_H 

#include <common/entity.h>

class FightButton : public Entity
{ 
public: 
    FightButton(); 
    virtual ~FightButton(); 

	virtual void update(float deltaTime);
}; 
#endif // FIGHTBUTTON_H  