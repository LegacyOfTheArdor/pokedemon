#ifndef GRIDGENERATOR_H 
#define GRIDGENERATOR_H 

#include <common/entity.h>
#include <PocketDemon/Button.h>

class GridGenerator : public Entity
{ 
public: 
    GridGenerator(); 
    virtual ~GridGenerator(); 

    BattleGrid(int GridWidth, int GridHeight);

	virtual void update(float deltaTime);

private:
    
}; 
#endif // GRIDGENERATOR_H  