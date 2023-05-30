#ifndef BATTLEMENU_H 
#define BATTLEMENU_H 

#include <common/entity.h>

class BattleMenu : public Entity
{ 
public: 
    BattleMenu(); 
    virtual ~BattleMenu(); 

	virtual void update(float deltaTime);
}; 
#endif // BATTLEMENU_H  