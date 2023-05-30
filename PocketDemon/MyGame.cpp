#include "MyGame.h"

MyGame::MyGame()
{
	battlescene = new BattleScene();

	battlescene->position = glm::vec3(400.0f, 300.0f, 0.0f);

}

MyGame::~MyGame()
{

}

void MyGame::update(float deltaTime)
{
	
}