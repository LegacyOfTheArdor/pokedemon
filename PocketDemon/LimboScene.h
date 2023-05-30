#ifndef LIMBOSCENE_H
#define LIMBOSCENE_H

#include <common/entity.h>

class LimboScene : public Entity
{
public:
	LimboScene();

	virtual ~LimboScene();

	virtual void update(float deltaTime);

private:
	
};
#endif // !LIMBOSCENE_H