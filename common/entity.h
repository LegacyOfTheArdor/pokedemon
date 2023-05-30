#ifndef ENTITY_H
#define ENTITY_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <common/sprite.h>
#include <common/config.h>
#include <glm/glm.hpp>

class Entity
{
public:
	Entity();
	virtual ~Entity();

	virtual void update(float deltaTime) = 0;

	void AddChild(Entity* e);

	void AddSprite(const std::string& fileName);

	void UpdateSprite();

	std::vector<Entity*> Children() { return children; };
	Sprite* ESprite() { return sprite; }

	Entity* parent;

	glm::vec3 position;
	glm::vec3 scale;
	float rotation;

protected:
	std::vector<Entity*> children;
	Sprite* sprite;
};
#endif // !ENTITY_H