#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <common/entity.h>

class TextBox : public Entity
{ 
public: 
    TextBox(); 
    virtual ~TextBox(); 

	virtual void update(float deltaTime);
}; 
#endif // TEXTBOX_H  