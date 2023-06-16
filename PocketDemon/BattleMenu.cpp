#include "BattleMenu.h" 
BattleMenu::BattleMenu() 
{

	textBox = new TextBox();
	textBox->position = glm::vec3(320.0f, 600.0f, 0.0f);
	this->AddChild(textBox);

	battleGrid = new GridGenerator();
	battleGrid->BattleGrid();
	this->AddChild(battleGrid);

} 
BattleMenu::~BattleMenu() 
{ 
}

void BattleMenu::update(float deltaTime)
{

}