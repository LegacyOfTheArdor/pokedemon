#ifndef MYGAME_H
#define MYGAME_H

#include <common/scene.h>
#include <PocketDemon/BattleScene.h>


class MyGame : public Scene
{
public:
	MyGame();

	virtual ~MyGame();

	virtual void update(float deltaTime);

private:
	BattleScene* battlescene;
	
};
#endif // !MYGAME_H