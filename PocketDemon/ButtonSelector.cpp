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

	/*
	_menuButtons[!indexY][!indexX]->selected = false;
	_menuButtons[indexY][indexX]->selected = true;
	*/
	

	if(input()->getKeyDown(KEY_W) || input()->getKeyDown(Up))
	{
		if(indexY-1 < 0)
		{
			return;
		}
		_menuButtons[indexY][indexX]->selected = false;
		this->position.y = _menuButtons[indexY - 1][indexX]->position.y;
		indexY--;
		_menuButtons[indexY][indexX]->selected = true;
	}

	if(input()->getKeyDown(KEY_S) || input()->getKeyDown(Down))
	{
		if(indexY+1 < (int)_menuButtons.size())
		{
			_menuButtons[indexY][indexX]->selected = false;
			this->position.y = _menuButtons[indexY + 1][indexX]->position.y;
			indexY++;
			_menuButtons[indexY][indexX]->selected = true;
		}
		
	}

	if(input()->getKeyDown(KEY_A) || input()->getKeyDown(Left))
	{
		if (indexX - 1 < 0)
		{;
			return;
		}
		
		_menuButtons[indexY][indexX]->selected = false;
		this->position.x = _menuButtons[indexY][indexX - 1]->position.x;
		indexX--;
		_menuButtons[indexY][indexX]->selected = true;
	}

	if(input()->getKeyDown(KEY_D) || input()->getKeyDown(Right))
	{
		if (indexX + 1 < (int)_menuButtons.size())
		{
			_menuButtons[indexY][indexX]->selected = false;
			this->position.x = _menuButtons[indexY][indexX + 1]->position.x;
			indexX++;
			_menuButtons[indexY][indexX]->selected = true;
		}
	}
	
}
