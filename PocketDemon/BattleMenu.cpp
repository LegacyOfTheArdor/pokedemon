#include "BattleMenu.h" 
BattleMenu::BattleMenu() 
{
	FightB = new Button();
	FightB->position = glm::vec3(800.0f, 540.0f, 0.0f);
    this->AddChild(FightB);
    
    InventoryB = new Button();
	InventoryB->position = glm::vec3(1120.0f, 540.0f, 0.0f);
    this->AddChild(InventoryB);
   
    DemonPB = new Button();
	DemonPB->position = glm::vec3(800.0f, 660.0f, 0.0f);
	this->AddChild(DemonPB);
    
    RunB = new Button();
	RunB->position = glm::vec3(1120.0f, 660.0f, 0.0f);
	this->AddChild(RunB);

	textBox = new TextBox();
	textBox->position = glm::vec3(320.0f, 600.0f, 0.0f);
	this->AddChild(textBox);

} 
BattleMenu::~BattleMenu() 
{ 
}

void BattleMenu::update(float deltaTime)
{

}