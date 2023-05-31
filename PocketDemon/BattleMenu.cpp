#include "BattleMenu.h" 
BattleMenu::BattleMenu() 
{
	FightB = new FightButton();
	FightB->position = glm::vec3(0.0f, 0.0f, 0.0f);
	FightB->scale = glm::vec3(0.5f, 0.5f, 1.0f);
    this->AddChild(FightB);
    
    InventoryB = new InventoryButton();
	InventoryB->position = glm::vec3(400.0f, 300.0f, 0.0f);
	InventoryB->scale = glm::vec3(0.5f, 0.5f, 1.0f);
    this->AddChild(InventoryB);
   
    DemonPB = new DemonPButton();
	DemonPB->position = glm::vec3(400.0f, 0.0f, 0.0f);
	DemonPB->scale = glm::vec3(0.5f, 0.5f, 1.0f);
	this->AddChild(DemonPB);
    
    RunB = new RunButton();
	RunB->position = glm::vec3(0.0f, 300.0f, 0.0f);
	RunB->scale = glm::vec3(0.5f, 0.5f, 1.0f);
	this->AddChild(RunB);

} 
BattleMenu::~BattleMenu() 
{ 
}

void BattleMenu::update(float deltaTime)
{

}