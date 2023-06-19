#include "Button.h" 
Button::Button() 
{
	this->AddSprite("assets/ButtonTemplate.tga");
	selected = false;
} 
Button::~Button() 
{ 
}

void Button::update(float deltaTime)
{


}

void Button::checkSelected()
{
	if (selected == true)
	{
		if (input()->getKeyDown(Enter))
		{
			std::cout << "--------------------------" << std::endl;

			if (_CallbackFunction != NULL)
			{
				_CallbackFunction();
			}
		}

	}
}

void Button::setCallbackFunction(std::function<void()> CallbackFunction) 
{
	_CallbackFunction = CallbackFunction;
}