#ifndef BUTTON_H 
#define BUTTON_H 

#include <common/entity.h>
#include <functional>

class Button : public Entity
{ 
public: 
    Button(); 
    virtual ~Button(); 

	virtual void update(float deltaTime);

	void checkSelected();
	void setCallbackFunction(std::function<void()> CallbackFunction);

	bool selected;
private:
	std::function<void()> _CallbackFunction;

}; 
#endif // BUTTON_H  