#ifndef RUNBUTTON_H 
#define RUNBUTTON_H 

#include <common/entity.h>

class RunButton : public Entity
{ 
public: 
    RunButton(); 
    virtual ~RunButton(); 

	virtual void update(float deltaTime);
}; 
#endif // RUNBUTTON_H  