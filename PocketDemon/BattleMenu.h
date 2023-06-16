#ifndef BATTLEMENU_H 
#define BATTLEMENU_H 

#include <common/entity.h>
#include <PocketDemon/GridGenerator.h>
#include <PocketDemon/TextBox.h>


class BattleMenu : public Entity
{ 
public: 
    BattleMenu(); 
    virtual ~BattleMenu(); 
    
	virtual void update(float deltaTime);

	GridGenerator* GetBattleGrid() { return battleGrid; }

private:
  
    TextBox* textBox;
    GridGenerator* battleGrid;
}; 
#endif // BATTLEMENU_H  