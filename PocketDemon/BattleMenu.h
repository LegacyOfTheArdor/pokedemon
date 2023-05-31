#ifndef BATTLEMENU_H 
#define BATTLEMENU_H 

#include <common/entity.h>
#include <PocketDemon/FightButton.h>
#include <PocketDemon/InventoryButton.h>
#include <PocketDemon/DemonPButton.h>
#include <PocketDemon/RunButton.h>

class BattleMenu : public Entity
{ 
public: 
    BattleMenu(); 
    virtual ~BattleMenu(); 

	virtual void update(float deltaTime);

private:
    FightButton* FightB;
    InventoryButton* InventoryB;
    DemonPButton* DemonPB;
    RunButton* RunB;
}; 
#endif // BATTLEMENU_H  