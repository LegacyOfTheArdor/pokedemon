#include "MyGame.h"

MyGame::MyGame()
{
	battlescene = new BattleScene();

	battlescene->position = glm::vec3(0.0f, 0.0f, 0.0f);

	this->AddChild(battlescene);

}

MyGame::~MyGame()
{

}

void MyGame::update(float deltaTime)
{
	
}