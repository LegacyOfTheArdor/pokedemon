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

	if( selected == true)
	{
		if(input()->getKeyDown(Enter))
		{
			std::cout << "Hello world" << std::endl;
		}
	
	}
	
	/*int mousey = cursor.y;
	int mousex = cursor.x;

	int left = pos.x;
	int right = pos.x + sprite()->size.x;
	int top = pos.y;
	int bottom = pos.y + +sprite()->size.y;

	
	if (mousex > left && mousex < right && mousey > top && mousey < bottom) {
		if (input()->getKeyDown(Enter)) 
		{	
			if (_CallbackFunction != NULL) 
			{
				_CallbackFunction();
			}
		}

	}*/
}

//void ImageButton::setCallbackFunction(std::function<void()> CallbackFunction) {
//	_CallbackFunction = CallbackFunction;
//}
