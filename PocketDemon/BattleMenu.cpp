#include "BattleMenu.h" 
BattleMenu::BattleMenu() 
{
	Sprite* FightB = new Sprite("assets/buttonTemplate.tga");
	FightB->position = glm::vec3(400.0f, 300.0f, 0.0f);
    
    Sprite* InventoryB = new Sprite("assets/buttonTemplate.tga");
	InventoryB->position = glm::vec3(300.0f, 400.0f, 0.0f);
   
    Sprite* DemonPartyB = new Sprite("assets/buttonTemplate.tga");
	DemonPartyB->position = glm::vec3(400.0f, 0.0f, 0.0f);
    
    Sprite* RunB = new Sprite("assets/buttonTemplate.tga");
	RunB->position = glm::vec3(0.0f, 300.0f, 0.0f);

    Sprite* BackB = new Sprite("assets/buttonTemplate.tga");
    BackB->position = glm::vec3(0.0f, 0.0f, 0.0f);
} 
BattleMenu::~BattleMenu() 
{ 
}

void BattleMenu::update(float deltaTime)
{

}