#ifndef DEMONPBUTTON_H 
#define DEMONPBUTTON_H 

#include <common/entity.h>

class DemonPButton : public Entity
{ 
public: 
    DemonPButton(); 
    virtual ~DemonPButton(); 

	virtual void update(float deltaTime);
}; 
#endif // DEMONPBUTTON_H  