#ifndef BUTTON_H 
#define BUTTON_H 

#include <common/entity.h>

class Button : public Entity
{ 
public: 
    Button(); 
    virtual ~Button(); 

	virtual void update(float deltaTime);
}; 
#endif // BUTTON_H  