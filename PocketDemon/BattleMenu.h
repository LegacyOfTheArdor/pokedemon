#ifndef BATTLEMENU_H 
#define BATTLEMENU_H 

#include <common/entity.h>
#include <PocketDemon/Button.h>
#include <PocketDemon/TextBox.h>


class BattleMenu : public Entity
{ 
public: 
    BattleMenu(); 
    virtual ~BattleMenu(); 

	virtual void update(float deltaTime);

private:
    Button* FightB;
    Button* InventoryB;
    Button* DemonPB;
    Button* RunB;
    TextBox* textBox;
}; 
#endif // BATTLEMENU_H  