#ifndef INVENTORYBUTTON_H 
#define INVENTORYBUTTON_H 
 

#include <common/entity.h>

class InventoryButton : public Entity
{ 
public: 
    InventoryButton(); 
    virtual ~InventoryButton(); 

	virtual void update(float deltaTime);
}; 
#endif // INVENTORYBUTTON_H  