#include "ButtonSelector.h" 
ButtonSelector::ButtonSelector(std::vector<std::vector<Button*>> MenuButtons) 
{
	this->AddSprite("assets/TempCursor.tga");

	std::cout << "BABABOOYA" << std::endl;

	_menuButtons = MenuButtons;
	indexX = 0;
	indexY = 0;

	this->position.y = _menuButtons[indexY][indexX]->position.y;
	this->position.x = _menuButtons[indexY][indexX]->position.x;
} 
ButtonSelector::~ButtonSelector() 
{ 
}

void ButtonSelector::update(float deltaTime)
{

}

void ButtonSelector::Selecting()
{
	// int first = menuSize[0].position;
	// int last = menuSize[menuSize.size].position;

	
	_menuButtons[indexY][indexX]->selected = true;
	_menuButtons[!indexY][!indexX]->selected = false;

	if(input()->getKeyDown(KEY_W) || input()->getKeyDown(Up))
	{
		if(indexY-1 < 0)
		{
			std::cout << "moveU" << std::endl;
			return;
		}
		this->position.y = _menuButtons[indexY - 1][indexX]->position.y;
		indexY--;
		std::cout << "Uppies YAY" << std::endl;
	}

	if(input()->getKeyDown(KEY_S) || input()->getKeyDown(Down))
	{
		if(indexY+1 < (int)_menuButtons.size())
		{
			this->position.y = _menuButtons[indexY + 1][indexX]->position.y;
			std::cout << "moveD" << std::endl;
			indexY++;
		}
		
		std::cout << "down" << std::endl;
	}

	if(input()->getKeyDown(KEY_A) || input()->getKeyDown(Left))
	{
		if (indexX - 1 < 0)
		{
			std::cout << "moveL" << std::endl;
			return;
		}
		
		this->position.x = _menuButtons[indexY][indexX - 1]->position.x;
		indexX--;
		std::cout << "left" << std::endl;
	}

	if(input()->getKeyDown(KEY_D) || input()->getKeyDown(Right))
	{
		if (indexX + 1 < (int)_menuButtons.size())
		{
			this->position.x = _menuButtons[indexY][indexX + 1]->position.x;
			indexX++;
			std::cout << "moveR" << std::endl;
		}

		std::cout << "right" << std::endl;
	}
}

