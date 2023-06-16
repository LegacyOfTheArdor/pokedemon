#ifndef GRIDGENERATOR_H 
#define GRIDGENERATOR_H 

#include <common/entity.h>
#include <PocketDemon/Button.h>

class GridGenerator : public Entity
{ 
public: 
    GridGenerator(); 
    virtual ~GridGenerator(); 

    void BattleGrid();

	virtual void update(float deltaTime);

    std::vector<std::vector<Button*>> GetBattleButtons() { return battleButtons; }
private:

    std::vector<std::vector<Button*>> battleButtons;
}; 
#endif // GRIDGENERATOR_H  