#include "BattleMenu.h" 
BattleMenu::BattleMenu() 
{
	FightB = new Button();
	FightB->position = glm::vec3(897.0f, 567.0f, 0.0f);
	FightB->scale = glm::vec3(0.5f, 0.4f, 1.0f);
    this->AddChild(FightB);
    
    InventoryB = new Button();
	InventoryB->position = glm::vec3(1153.0f, 567.0f, 0.0f);
	InventoryB->scale = glm::vec3(0.5f, 0.4f, 1.0f);
    this->AddChild(InventoryB);
   
    DemonPB = new Button();
	DemonPB->position = glm::vec3(897.0f, 669.0f, 0.0f);
	DemonPB->scale = glm::vec3(0.5f, 0.4f, 1.0f);
	this->AddChild(DemonPB);
    
    RunB = new Button();
	RunB->position = glm::vec3(1153.0f, 669.0f, 0.0f);
	RunB->scale = glm::vec3(0.5f, 0.4f, 1.0f);
	this->AddChild(RunB);

	textBox = new TextBox();
	textBox->position = glm::vec3(385.0f, 617.5f, 0.0f);
	textBox->scale = glm::vec3(12.0f, 3.18f, 0.0f);
	this->AddChild(textBox);
	//pos 351.0f, 611.0f, 0.0f
} 
BattleMenu::~BattleMenu() 
{ 
}

void BattleMenu::update(float deltaTime)
{

}